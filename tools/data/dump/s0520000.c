//==== 005202c8  ns=Global  size=0x1a4
// sig: undefined FUN_005202c8(void)
// callers(0): 
// callees(4): 0051c8d4 fios::hash_path_string; 0051cfd8 fios::op_alloc; 0051fe9c fios::op_complete_immediate; 0051ff58 FUN_0051ff58

undefined8
FUN_005202c8(undefined8 param_1,int param_2,int param_3,ulonglong param_4,undefined8 param_5,
            ulonglong param_6,int param_7)

{
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  
  iVar2 = fios::op_alloc(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if ((param_2 == 0) || ((*(uint *)(param_2 + 0x14) & 0xfffff77f) == 0)) {
    if ((param_3 != 0) && (param_7 != 0)) {
      *(int *)(iVar2 + 0x48) = param_3;
      uVar3 = fios::hash_path_string(param_3);
      *(undefined4 *)(iVar2 + 0x4c) = uVar3;
      *(undefined4 *)(iVar2 + 0x40) = 0x13;
      *(undefined4 *)(iVar2 + 0xd0) = 1;
      *(undefined8 *)(iVar2 + 0x80) = param_5;
      *(int *)(iVar2 + 0x90) = param_7;
      *(ulonglong *)(iVar2 + 0x70) = param_4 & 0xffffffff;
      *(ulonglong *)(iVar2 + 0x88) = param_6 & 0xffffffff;
      uVar1 = FUN_0051ff58(param_1,iVar2);
      return uVar1;
    }
    *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
  }
  else {
    *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
  }
  uVar1 = fios::op_complete_immediate(param_1,iVar2);
  return uVar1;
}



//==== 0052046c  ns=Global  size=0x148
// sig: undefined FUN_0052046c(void)
// callers(0): 
// callees(4): 0051c8d4 fios::hash_path_string; 0051cfd8 fios::op_alloc; 0051fe9c fios::op_complete_immediate; 0051ff58 FUN_0051ff58

undefined8 FUN_0052046c(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  
  iVar2 = fios::op_alloc(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if ((param_2 == 0) || ((*(uint *)(param_2 + 0x14) & 0xfffff77f) == 0)) {
    if ((param_3 != 0) && (param_4 != 0)) {
      *(int *)(iVar2 + 0x90) = param_4;
      *(int *)(iVar2 + 0x48) = param_3;
      uVar3 = fios::hash_path_string(param_3);
      *(undefined4 *)(iVar2 + 0x4c) = uVar3;
      *(undefined4 *)(iVar2 + 0x40) = 0x12;
      *(undefined4 *)(iVar2 + 0xd0) = 1;
      uVar1 = FUN_0051ff58(param_1,iVar2);
      return uVar1;
    }
    *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
  }
  else {
    *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
  }
  uVar1 = fios::op_complete_immediate(param_1,iVar2);
  return uVar1;
}



//==== 005205b4  ns=Global  size=0x1ec
// sig: undefined FUN_005205b4(void)
// callers(4): 005337e8 FUN_005337e8; 00533ae0 FUN_00533ae0; 00533e7c FUN_00533e7c; 00535d38 FUN_00535d38
// callees(4): 0051cfd8 fios::op_alloc; 0051fe9c fios::op_complete_immediate; 0051ff58 FUN_0051ff58; 00604760 fios::check_magic

undefined8 FUN_005205b4(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar8;
  char cVar9;
  undefined8 uVar7;
  char *pcVar10;
  longlong lVar11;
  
  iVar8 = fios::op_alloc(param_1);
  if (iVar8 == 0) {
    return 0;
  }
  cVar9 = fios::check_magic(param_3);
  if ((cVar9 == '\0') || (*(int *)(param_3 + 8) != param_1)) {
    uVar6 = 0x80010706;
  }
  else {
    iVar4 = *(int *)(param_3 + 0x10);
    iVar1 = *(int *)(param_3 + 0x28);
    iVar2 = *(int *)(param_3 + 0x14);
    iVar3 = *(int *)(param_3 + 0x18);
    lVar11 = *(longlong *)(param_3 + 0x20);
    if (((((*(int *)PTR_DAT_0071ab30 != iVar4) || (*(int *)(PTR_DAT_0071ab30 + 4) != iVar2)) ||
         (*(int *)(PTR_DAT_0071ab30 + 8) != iVar3)) ||
        ((*(longlong *)(PTR_DAT_0071ab30 + 0x10) != lVar11 ||
         (*(int *)(PTR_DAT_0071ab30 + 0x18) != iVar1)))) && ((*(uint *)(param_3 + 0x50) & 2) != 0))
    {
      pcVar5 = *(char **)(param_3 + 0x30);
      *(undefined4 *)(iVar8 + 0x40) = 0xc;
      *(undefined4 *)(iVar8 + 0xd0) = 1;
      pcVar10 = (char *)0x0;
      if (*pcVar5 != '\0') {
        pcVar10 = pcVar5;
      }
      uVar6 = *(undefined4 *)(param_3 + 0x34);
      *(int *)(iVar8 + 0xa0) = param_3;
      *(undefined4 *)(iVar8 + 0x4c) = uVar6;
      *(int *)(iVar8 + 0x50) = iVar4;
      *(int *)(iVar8 + 0x68) = iVar1;
      *(int *)(iVar8 + 0x58) = iVar3;
      *(char **)(iVar8 + 0x48) = pcVar10;
      *(int *)(iVar8 + 0x54) = iVar2;
      *(longlong *)(iVar8 + 0x60) = lVar11;
      uVar7 = FUN_0051ff58(param_1,iVar8);
      return uVar7;
    }
    uVar6 = 0;
  }
  *(undefined4 *)(iVar8 + 0x44) = uVar6;
  uVar7 = fios::op_complete_immediate(param_1,iVar8);
  return uVar7;
}



//==== 005207a0  ns=fios  size=0x288
// sig: undefined stat_setup(void)
// callers(13): 0001401c boot::boot; 000dcf58 loaders::NAVG_LoadFile; 00503e00 fios::LoadAssetFromFile; 00503f8c FUN_00503f8c; 00504178 fios::GetFileSize; 00504218 FUN_00504218; 00504468 FUN_00504468; 0050476c FUN_0050476c; 00506704 FUN_00506704; 00506a70 FUN_00506a70; 00507f68 fios::read_file_sync; 00531658 FUN_00531658; 00535d38 FUN_00535d38
// callees(6): 0051c8d4 fios::hash_path_string; 0051cb74 FUN_0051cb74; 0051cfd8 fios::op_alloc; 0051fa5c FUN_0051fa5c; 0051fe9c fios::op_complete_immediate; 0051ff58 FUN_0051ff58

undefined8
fios::stat_setup(undefined4 param_1,int param_2,byte *param_3,ulonglong param_4,int *param_5)

{
  int iVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
  iVar2 = op_alloc(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_5 != (int *)0x0) {
    if ((param_3 == (byte *)0x0) || ((longlong)((ulonglong)*param_3 - 1) < 0)) {
      uVar4 = 0x80010705;
      goto LAB_0052094c;
    }
    if (((((int)param_4 != 0) && ((param_2 == 0 || ((*(uint *)(param_2 + 0x14) & 0xfffff77f) == 0)))
         ) && (((param_4 & 0x1c) == 0 || ((param_4 >> 1 & 1) != 0)))) &&
       (((int)(param_4 & 0x300) == 0 ||
        ((((param_4 & 0xfffffc7e) == 0 && (iVar3 = FUN_0051cb74(param_4 & 0x300), iVar3 < 2)) &&
         (((param_4 & 0x100) == 0 || ((param_2 != 0 && (*(int *)(param_2 + 0x20) != 0)))))))))) {
      iVar3 = FUN_0051fa5c(param_1,param_4 & 0xffffffff,param_3);
      uVar4 = 0x8001070a;
      *param_5 = iVar3;
      if (iVar3 != 0) {
        *(undefined8 *)(iVar2 + 0xa8) = 4;
        *(byte **)(iVar2 + 0x48) = param_3;
        *(int **)(iVar2 + 0xc0) = param_5;
        *(undefined4 *)(iVar2 + 0x40) = 9;
        *(short *)(iVar2 + 0x94) = (short)param_4;
        *(undefined4 *)(iVar2 + 0xd0) = 7;
        uVar4 = hash_path_string(param_3);
        *(undefined4 *)(iVar2 + 0x4c) = uVar4;
        *(int *)(iVar2 + 0xa0) = iVar3;
        uVar1 = FUN_0051ff58(param_1,iVar2);
        return uVar1;
      }
      goto LAB_0052094c;
    }
  }
  uVar4 = 0x80010707;
LAB_0052094c:
  *(undefined4 *)(iVar2 + 0x44) = uVar4;
  uVar1 = op_complete_immediate(param_1,iVar2);
  return uVar1;
}



//==== 00520a28  ns=Global  size=0x1b0
// sig: undefined FUN_00520a28(void)
// callers(0): 
// callees(4): 0051c8d4 fios::hash_path_string; 0051cfd8 fios::op_alloc; 0051fe9c fios::op_complete_immediate; 0051ff58 FUN_0051ff58

undefined8
FUN_00520a28(undefined8 param_1,int param_2,byte *param_3,longlong param_4,undefined4 param_5)

{
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  
  iVar2 = fios::op_alloc(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar2 + 0xc0) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = param_5;
  *(byte **)(iVar2 + 0x48) = param_3;
  *(undefined8 *)(iVar2 + 0xa8) = 0x120;
  *(undefined4 *)(iVar2 + 0xd0) = 1;
  *(undefined4 *)(iVar2 + 0x40) = 5;
  *(undefined8 *)(iVar2 + 0x80) = 0x120;
  *(longlong *)(iVar2 + 0x70) = param_4;
  *(longlong *)(iVar2 + 0xb8) = param_4;
  uVar3 = fios::hash_path_string(param_3);
  *(undefined4 *)(iVar2 + 0x4c) = uVar3;
  if ((param_3 == (byte *)0x0) || ((longlong)((ulonglong)*param_3 - 1) < 0)) {
    uVar3 = 0x80010705;
  }
  else {
    if (-1 < param_4) {
      if (param_2 != 0) {
        uVar3 = 0x80010707;
        if ((*(uint *)(param_2 + 0x14) & 0xfffff77f) != 0) goto LAB_00520b54;
      }
      uVar1 = FUN_0051ff58(param_1,iVar2);
      return uVar1;
    }
    uVar3 = 0x8001070b;
  }
LAB_00520b54:
  *(undefined4 *)(iVar2 + 0x44) = uVar3;
  uVar1 = fios::op_complete_immediate(param_1,iVar2);
  return uVar1;
}



//==== 00520bd8  ns=Global  size=0x1a8
// sig: undefined FUN_00520bd8(void)
// callers(2): 00520d80 FUN_00520d80; 00530f80 FUN_00530f80
// callees(4): 0051c8d4 fios::hash_path_string; 0051cfd8 fios::op_alloc; 0051fe9c fios::op_complete_immediate; 0051ff58 FUN_0051ff58

undefined8 FUN_00520bd8(undefined8 param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar2 = fios::op_alloc(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x40) = 0x10;
  *(undefined4 *)(iVar2 + 0xd0) = 1;
  *(undefined8 *)(iVar2 + 0xa8) = 0x110;
  *(int *)(iVar2 + 0x90) = param_3;
  if (param_3 != 0) {
    iVar5 = 0;
    if (param_2 != 0) {
      uVar1 = (int)*(uint *)(param_2 + 0x14) >> 0x1f;
      iVar5 = -((int)(uVar1 - (uVar1 ^ *(uint *)(param_2 + 0x14) & 0xfffff77f)) >> 0x1f);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
        goto LAB_00520d44;
      }
    }
    *(int *)(iVar2 + 0x48) = param_3;
    uVar3 = fios::hash_path_string(param_3);
    *(undefined8 *)(iVar2 + 0x70) = *(undefined8 *)(param_3 + 0x100);
    uVar4 = *(undefined8 *)(param_3 + 0x108);
    *(undefined4 *)(iVar2 + 0x4c) = uVar3;
    *(undefined4 *)(iVar2 + 0x54) = param_4;
    *(int *)(iVar2 + 0x50) = iVar5;
    *(undefined8 *)(iVar2 + 0x80) = uVar4;
    uVar4 = FUN_0051ff58(param_1,iVar2);
    return uVar4;
  }
  *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
LAB_00520d44:
  uVar4 = fios::op_complete_immediate(param_1,iVar2);
  return uVar4;
}



//==== 00520d80  ns=Global  size=0xf8
// sig: undefined FUN_00520d80(void)
// callers(0): 
// callees(4): 005193cc FUN_005193cc; 0051c030 fios::op_wait_result; 00520bd8 FUN_00520bd8; 00532848 FUN_00532848

undefined1
FUN_00520d80(undefined4 param_1,undefined4 param_2,char *param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 auStack_170 [40];
  undefined1 auStack_148 [288];
  
  if (*param_3 != '\0') {
    FUN_005193cc(auStack_148,param_3,0x100);
    uVar1 = FUN_00520bd8(param_1,auStack_170,auStack_148,param_2);
    iVar2 = fios::op_wait_result(uVar1,0);
    if (iVar2 == 0) {
      uVar3 = FUN_00532848(param_2,auStack_148,param_4,param_5);
      return uVar3;
    }
  }
  return 0;
}



//==== 00520e78  ns=Global  size=0x24c
// sig: undefined FUN_00520e78(void)
// callers(0): 
// callees(5): 0051c8d4 fios::hash_path_string; 0051cfd8 fios::op_alloc; 0051fa5c FUN_0051fa5c; 0051fe9c fios::op_complete_immediate; 0051ff58 FUN_0051ff58

undefined8
FUN_00520e78(undefined8 param_1,int param_2,byte *param_3,longlong param_4,longlong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  
  iVar4 = fios::op_alloc(param_1,param_2);
  if (iVar4 == 0) {
    return 0;
  }
  if ((param_3 == (byte *)0x0) || ((longlong)((ulonglong)*param_3 - 1) < 0)) {
    uVar6 = 0x80010705;
  }
  else if (((param_5 < 0) || (param_4 < 0)) ||
          ((param_2 != 0 &&
           (((*(uint *)(param_2 + 0x14) & 0x3000) != 0 || ((*(uint *)(param_2 + 0x14) & 0xc) != 0)))
           ))) {
    uVar6 = 0x80010707;
  }
  else {
    uVar8 = ((ushort)((int)((*(uint *)(iVar4 + 0x1c) & 0x2000) - 1) >> 0x1f) & 0xfe00) + 0x201;
    if ((*(uint *)(iVar4 + 0x1c) & 0x1000) != 0) {
      uVar8 = uVar8 | 0x100;
    }
    iVar5 = FUN_0051fa5c(param_1,1,param_3);
    uVar6 = 0x8001070a;
    if (iVar5 != 0) {
      *(int *)(iVar4 + 0xa0) = iVar5;
      *(undefined1 *)(iVar4 + 0x10) = 0x80;
      *(undefined4 *)(iVar4 + 0xd0) = 9;
      *(byte **)(iVar4 + 0x48) = param_3;
      *(undefined8 *)(iVar4 + 8) = 0x7fffffffffffffff;
      *(longlong *)(iVar4 + 0xb8) = param_4;
      *(longlong *)(iVar4 + 0xa8) = param_5;
      *(undefined4 *)(iVar4 + 0x40) = 9;
      *(longlong *)(iVar4 + 0x70) = param_4;
      *(longlong *)(iVar4 + 0x80) = param_5;
      uVar6 = fios::hash_path_string(param_3);
      puVar3 = PTR_DAT_0071ab30;
      *(undefined4 *)(iVar4 + 0x4c) = uVar6;
      *(ushort *)(iVar4 + 0x94) = uVar8;
      uVar6 = *(undefined4 *)(puVar3 + 0x18);
      *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)puVar3;
      uVar1 = *(undefined4 *)(puVar3 + 4);
      uVar2 = *(undefined4 *)(puVar3 + 8);
      uVar7 = *(undefined8 *)(puVar3 + 0x10);
      *(undefined4 *)(iVar4 + 0x68) = uVar6;
      *(undefined4 *)(iVar4 + 0x54) = uVar1;
      *(undefined4 *)(iVar4 + 0x58) = uVar2;
      *(undefined8 *)(iVar4 + 0x60) = uVar7;
      uVar7 = FUN_0051ff58(param_1,iVar4);
      return uVar7;
    }
  }
  *(undefined4 *)(iVar4 + 0x44) = uVar6;
  uVar7 = fios::op_complete_immediate(param_1,iVar4);
  return uVar7;
}



//==== 005210c4  ns=Global  size=0x164
// sig: undefined FUN_005210c4(void)
// callers(3): 00533ae0 FUN_00533ae0; 00533e7c FUN_00533e7c; 005344e8 FUN_005344e8
// callees(4): 0051c8d4 fios::hash_path_string; 0051cfd8 fios::op_alloc; 0051fe9c fios::op_complete_immediate; 0051ff58 FUN_0051ff58

undefined8 FUN_005210c4(undefined8 param_1,int param_2,byte *param_3)

{
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  
  iVar2 = fios::op_alloc(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x40) = 0xf;
  *(undefined4 *)(iVar2 + 0xd0) = 1;
  *(byte **)(iVar2 + 0x48) = param_3;
  uVar3 = fios::hash_path_string(param_3);
  *(undefined4 *)(iVar2 + 0x4c) = uVar3;
  if (param_3 != (byte *)0x0) {
    if (-1 < (longlong)((ulonglong)*param_3 - 1)) {
      if (param_2 == 0) {
LAB_00521188:
        uVar1 = FUN_0051ff58();
        return uVar1;
      }
      if ((*(uint *)(param_2 + 0x14) & 0xfffff77f) == 0) goto LAB_00521188;
      *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
      goto LAB_005211bc;
    }
  }
  *(undefined4 *)(iVar2 + 0x44) = 0x80010705;
LAB_005211bc:
  uVar1 = fios::op_complete_immediate(param_1,iVar2);
  return uVar1;
}



//==== 00521228  ns=Global  size=0x164
// sig: undefined FUN_00521228(void)
// callers(1): 0053299c FUN_0053299c
// callees(4): 0051c8d4 fios::hash_path_string; 0051cfd8 fios::op_alloc; 0051fe9c fios::op_complete_immediate; 0051ff58 FUN_0051ff58

undefined8 FUN_00521228(undefined8 param_1,int param_2,byte *param_3)

{
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  
  iVar2 = fios::op_alloc(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x40) = 0xe;
  *(undefined4 *)(iVar2 + 0xd0) = 1;
  *(byte **)(iVar2 + 0x48) = param_3;
  uVar3 = fios::hash_path_string(param_3);
  *(undefined4 *)(iVar2 + 0x4c) = uVar3;
  if (param_3 != (byte *)0x0) {
    if (-1 < (longlong)((ulonglong)*param_3 - 1)) {
      if (param_2 == 0) {
LAB_005212ec:
        uVar1 = FUN_0051ff58();
        return uVar1;
      }
      if ((*(uint *)(param_2 + 0x14) & 0xfffff77f) == 0) goto LAB_005212ec;
      *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
      goto LAB_00521320;
    }
  }
  *(undefined4 *)(iVar2 + 0x44) = 0x80010705;
LAB_00521320:
  uVar1 = fios::op_complete_immediate(param_1,iVar2);
  return uVar1;
}



//==== 0052138c  ns=Global  size=0x1f0
// sig: undefined FUN_0052138c(void)
// callers(1): 005337e8 FUN_005337e8
// callees(4): 0051c8d4 fios::hash_path_string; 0051cfd8 fios::op_alloc; 0051fe9c fios::op_complete_immediate; 0051ff58 FUN_0051ff58

undefined8
FUN_0052138c(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,longlong param_5,
            longlong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  iVar4 = fios::op_alloc(param_1,param_2);
  if (iVar4 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar4 + 0xd0) = 1;
  *(undefined4 *)(iVar4 + 0x40) = 0xb;
  *(undefined4 *)(iVar4 + 0xc0) = param_4;
  *(undefined4 *)(iVar4 + 0x90) = param_4;
  *(longlong *)(iVar4 + 0x80) = param_6;
  *(undefined4 *)(iVar4 + 0x48) = param_3;
  *(longlong *)(iVar4 + 0xa8) = param_6;
  *(longlong *)(iVar4 + 0x70) = param_5;
  *(longlong *)(iVar4 + 0xb8) = param_5;
  uVar5 = fios::hash_path_string(param_3);
  puVar3 = PTR_DAT_0071ab30;
  *(undefined4 *)(iVar4 + 0x4c) = uVar5;
  uVar5 = *(undefined4 *)(puVar3 + 0x18);
  uVar1 = *(undefined4 *)(puVar3 + 4);
  uVar2 = *(undefined4 *)(puVar3 + 8);
  uVar6 = *(undefined8 *)(puVar3 + 0x10);
  *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)puVar3;
  *(undefined4 *)(iVar4 + 0x68) = uVar5;
  *(undefined4 *)(iVar4 + 0x54) = uVar1;
  *(undefined4 *)(iVar4 + 0x58) = uVar2;
  *(undefined8 *)(iVar4 + 0x60) = uVar6;
  if (param_6 < 0) {
    *(undefined4 *)(iVar4 + 0x44) = 0x80010707;
  }
  else if (param_5 < 0) {
    *(undefined4 *)(iVar4 + 0x44) = 0x80010707;
  }
  else {
    if ((param_2 == 0) || ((*(uint *)(param_2 + 0x14) & 0x3000) == 0)) {
      uVar6 = FUN_0051ff58();
      return uVar6;
    }
    *(undefined4 *)(iVar4 + 0x44) = 0x80010707;
  }
  uVar6 = fios::op_complete_immediate(param_1,iVar4);
  return uVar6;
}



//==== 0052157c  ns=Global  size=0x218
// sig: undefined FUN_0052157c(void)
// callers(1): 00535840 FUN_00535840
// callees(5): 0051c8d4 fios::hash_path_string; 0051cb74 FUN_0051cb74; 0051cfd8 fios::op_alloc; 0051fe9c fios::op_complete_immediate; 0051ff58 FUN_0051ff58

undefined8
FUN_0052157c(undefined8 param_1,int param_2,byte *param_3,undefined4 param_4,longlong param_5,
            longlong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar5 = fios::op_alloc(param_1,param_2);
  if (iVar5 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar5 + 0xc0) = param_4;
  *(undefined4 *)(iVar5 + 0x90) = param_4;
  *(undefined4 *)(iVar5 + 0x40) = 10;
  *(undefined4 *)(iVar5 + 0xd0) = 1;
  *(byte **)(iVar5 + 0x48) = param_3;
  *(longlong *)(iVar5 + 0x80) = param_6;
  *(longlong *)(iVar5 + 0xa8) = param_6;
  *(longlong *)(iVar5 + 0x70) = param_5;
  *(longlong *)(iVar5 + 0xb8) = param_5;
  uVar6 = fios::hash_path_string(param_3);
  puVar4 = PTR_DAT_0071ab30;
  *(undefined4 *)(iVar5 + 0x4c) = uVar6;
  uVar6 = *(undefined4 *)(puVar4 + 0x18);
  uVar1 = *(undefined4 *)(puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 8);
  uVar8 = *(undefined8 *)(puVar4 + 0x10);
  *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)puVar4;
  *(undefined4 *)(iVar5 + 0x68) = uVar6;
  *(undefined4 *)(iVar5 + 0x54) = uVar1;
  *(undefined4 *)(iVar5 + 0x58) = uVar2;
  *(undefined8 *)(iVar5 + 0x60) = uVar8;
  if ((((param_3 != (byte *)0x0) && (-1 < (longlong)((ulonglong)*param_3 - 1))) && (-1 < param_6))
     && (-1 < param_5)) {
    if ((param_2 != 0) && (uVar3 = *(uint *)(param_2 + 0x14) & 0x3000, uVar3 != 0)) {
      iVar7 = FUN_0051cb74(uVar3);
      if ((1 < iVar7) ||
         (((*(uint *)(param_2 + 0x14) & 0x1000) != 0 && (*(int *)(param_2 + 0x20) == 0))))
      goto LAB_005216dc;
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0xe;
    }
    uVar8 = FUN_0051ff58(param_1,iVar5);
    return uVar8;
  }
LAB_005216dc:
  *(undefined4 *)(iVar5 + 0x44) = 0x80010707;
  uVar8 = fios::op_complete_immediate(param_1,iVar5);
  return uVar8;
}



//==== 00521794  ns=fios  size=0x21c
// sig: undefined read_setup(void)
// callers(6): 000dcf58 loaders::NAVG_LoadFile; 00503e00 fios::LoadAssetFromFile; 00504468 FUN_00504468; 0050476c FUN_0050476c; 00507f68 fios::read_file_sync; 0053299c FUN_0053299c
// callees(5): 0051c8d4 fios::hash_path_string; 0051cb74 FUN_0051cb74; 0051cfd8 fios::op_alloc; 0051fe9c fios::op_complete_immediate; 0051ff58 FUN_0051ff58

undefined8 fios::read_setup(undefined8 param_1,int param_2,byte *param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar2;
  int iVar5;
  
  iVar3 = op_alloc(param_1,param_2);
  if (iVar3 == 0) {
    return 0;
  }
  *(uint *)(iVar3 + 0xd0) = param_5;
  *(undefined4 *)(iVar3 + 0x40) = 8;
  *(byte **)(iVar3 + 0x48) = param_3;
  uVar4 = hash_path_string(param_3);
  *(undefined4 *)(iVar3 + 0x4c) = uVar4;
  if (param_5 == 1) {
    *(int *)(iVar3 + 0x90) = param_4;
    *(undefined8 *)(iVar3 + 0x80) = 0x58;
    *(undefined8 *)(iVar3 + 0xa8) = 0x58;
    *(int *)(iVar3 + 0xc0) = param_4;
  }
  else {
    *(int *)(iVar3 + 0xc0) = param_4;
    uVar1 = (int)(param_5 ^ 3) >> 0x1f;
    *(ulonglong *)(iVar3 + 0xa8) =
         ((longlong)((int)(uVar1 - (uVar1 ^ param_5 ^ 3)) >> 0x1f) & 0xfffffffffffffff9U) + 8;
  }
  if ((((param_3 != (byte *)0x0) && (-1 < (longlong)((ulonglong)*param_3 - 1))) && (param_4 != 0))
     && (((param_2 == 0 || (uVar1 = *(uint *)(param_2 + 0x14) & 0x3000, uVar1 == 0)) ||
         ((iVar5 = FUN_0051cb74(uVar1), iVar5 < 2 &&
          (((*(uint *)(param_2 + 0x14) & 0x1000) == 0 || (*(int *)(param_2 + 0x20) != 0)))))))) {
    uVar2 = FUN_0051ff58(param_1,iVar3);
    return uVar2;
  }
  *(undefined4 *)(iVar3 + 0x44) = 0x80010707;
  uVar2 = op_complete_immediate(param_1,iVar3);
  return uVar2;
}



//==== 005219b0  ns=fios  size=0x1a8
// sig: undefined filehandle_release(void)
// callers(1): 00521b58 fios::filehandle_close_setup
// callees(5): 0051cb08 FUN_0051cb08; 0051cba4 FUN_0051cba4; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 005390ac fios::handle_destroy

void fios::filehandle_release(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
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
  if (param_2 != 0) {
    lwmutex_lock_checked(param_1 + 0x10);
    piVar2 = (int *)(param_1 + 0x23c);
    iVar1 = *piVar2;
    while (param_2 != iVar1) {
      if (iVar1 == 0) goto LAB_00521a64;
      piVar2 = (int *)(iVar1 + 0xc);
      iVar1 = *piVar2;
    }
    if (param_2 == 0) {
LAB_00521a64:
      bVar3 = false;
    }
    else {
      bVar3 = true;
      *piVar2 = *(int *)(param_2 + 0xc);
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
    if (bVar3) {
      FUN_0051cb08(param_2 + 0x30,0);
      *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + -1;
      if ((*(uint *)(param_2 + 0x50) & 0x80) == 0) {
        *(undefined4 *)(param_2 + 0x54) = 0;
        iVar1 = *(int *)(param_1 + 0x238);
        *(int *)(param_2 + 8) = param_1;
        *(int *)(param_2 + 0xc) = iVar1;
        *(int *)(param_1 + 0x238) = param_2;
      }
      else {
        handle_destroy(param_2);
        piVar2 = (int *)FUN_0051cba4(param_1);
        (*(code *)**(undefined4 **)(*piVar2 + 4))(piVar2,param_2,0x10300003,0,0);
      }
    }
    lwmutex_unlock_checked(param_1 + 0x10);
  }
  return;
}



//==== 00521b58  ns=fios  size=0x234
// sig: undefined filehandle_close_setup(void)
// callers(16): 000dcf58 loaders::NAVG_LoadFile; 00503e00 fios::LoadAssetFromFile; 005040f4 FUN_005040f4; 00504178 fios::GetFileSize; 00504218 FUN_00504218; 00504468 FUN_00504468; 0050476c FUN_0050476c; 00506928 FUN_00506928; 00506ebc FUN_00506ebc; 00507f68 fios::read_file_sync; 005240e4 FUN_005240e4; 005342d4 FUN_005342d4; 005344e8 FUN_005344e8; 00535428 FUN_00535428; 0053562c FUN_0053562c; 00535d38 FUN_00535d38
// callees(5): 0051cfd8 fios::op_alloc; 0051fe9c fios::op_complete_immediate; 0051ff58 FUN_0051ff58; 005219b0 fios::filehandle_release; 00604760 fios::check_magic

undefined8 fios::filehandle_close_setup(int param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar5;
  char cVar6;
  undefined8 uVar4;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  iVar5 = op_alloc(param_1);
  if (iVar5 == 0) {
    return 0;
  }
  cVar6 = check_magic(param_3);
  puVar3 = PTR_DAT_0071ab30;
  if ((cVar6 == '\0') || (*(int *)(param_3 + 8) != param_1)) {
    *(undefined4 *)(iVar5 + 0x44) = 0x80010706;
  }
  else {
    if ((*(uint *)(param_3 + 0x50) & 0x200) == 0) {
      iVar8 = *(int *)(param_3 + 0x10);
      iVar10 = *(int *)(param_3 + 0x28);
      iVar7 = *(int *)(param_3 + 0x14);
      iVar12 = *(int *)(param_3 + 0x18);
      lVar11 = *(longlong *)(param_3 + 0x20);
      if (*(int *)PTR_DAT_0071ab30 != iVar8) goto LAB_00521c08;
    }
    else {
      iVar8 = *(int *)(param_3 + 0x10);
      iVar10 = *(int *)(param_3 + 0x28);
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x2000;
      iVar7 = *(int *)(param_3 + 0x14);
      iVar12 = *(int *)(param_3 + 0x18);
      lVar11 = *(longlong *)(param_3 + 0x20);
      if (*(int *)puVar3 != iVar8) goto LAB_00521c08;
    }
    if ((((*(int *)(puVar3 + 4) != iVar7) || (*(int *)(puVar3 + 8) != iVar12)) ||
        (*(longlong *)(puVar3 + 0x10) != lVar11)) || (*(int *)(puVar3 + 0x18) != iVar10)) {
LAB_00521c08:
      pcVar2 = *(char **)(param_3 + 0x30);
      *(undefined4 *)(iVar5 + 0x40) = 0xd;
      *(undefined4 *)(iVar5 + 0xd0) = 8;
      pcVar9 = (char *)0x0;
      if (*pcVar2 != '\0') {
        pcVar9 = pcVar2;
      }
      uVar1 = *(undefined4 *)(param_3 + 0x34);
      *(int *)(iVar5 + 0xa0) = param_3;
      *(undefined4 *)(iVar5 + 0x4c) = uVar1;
      *(int *)(iVar5 + 0x50) = iVar8;
      *(int *)(iVar5 + 0x58) = iVar12;
      *(int *)(iVar5 + 0x54) = iVar7;
      *(longlong *)(iVar5 + 0x60) = lVar11;
      *(int *)(iVar5 + 0xc0) = param_3;
      *(int *)(iVar5 + 0x68) = iVar10;
      *(char **)(iVar5 + 0x48) = pcVar9;
      uVar4 = FUN_0051ff58(param_1,iVar5);
      return uVar4;
    }
    filehandle_release(param_1,param_3);
  }
  uVar4 = op_complete_immediate(param_1,iVar5);
  return uVar4;
}



//==== 00521d8c  ns=Global  size=0x378
// sig: undefined FUN_00521d8c(void)
// callers(1): 00522104 FUN_00522104
// callees(5): 0051d33c FUN_0051d33c; 00523f54 FUN_00523f54; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 005d0140 libc::memset

void FUN_00521d8c(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined *puVar10;
  int iVar11;
  ulonglong uVar12;
  char *pcVar14;
  undefined8 uVar13;
  uint *puVar15;
  char in_RESERVE;
  byte in_cr0;
  
  do {
    lVar9 = TBLr;
  } while ((int)lVar9 == 0);
  if (*(longlong *)(param_1 + 0x200) < lVar9) {
    *(longlong *)(param_1 + 0x200) = lVar9;
  }
  FUN_0051d33c(param_1,param_2,0,0,param_1 + 0x200,*(undefined4 *)(param_1 + 0x1fc));
  iVar11 = *(int *)(param_1 + 0x160);
  uVar1 = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 **)(param_3 + 0x24) = param_2 + 0x10;
  param_2[0x11] = 0x80010701;
  uVar2 = *(uint *)(iVar11 + 0x8c);
  *(undefined4 **)(param_3 + 0xc) = param_2;
  libc::memset(uVar1,0,((ulonglong)uVar2 & 0x3fffffff) << 2);
  puVar10 = PTR_PTR_0071aba0;
  iVar11 = param_2[0x10];
  uVar2 = (uint)param_2[0xc] >> 9 & 1;
  if ((((iVar11 - 10U < 2) || (iVar11 == 6)) || (iVar11 == 7)) || (uVar12 = 0, iVar11 == 0x11)) {
    uVar12 = (longlong)*(ulonglong *)(param_2 + 0x20) >> 0x3f;
    uVar12 = ((uVar12 ^ *(ulonglong *)(param_2 + 0x20)) - uVar12) - 1 >> 0x3f;
  }
  puVar15 = (uint *)(param_1 + 0x224);
  *(int *)(param_3 + 0x3c) = param_1;
  *(undefined **)(param_3 + 0x38) = puVar10;
  do {
    uVar3 = *puVar15;
    instructionSynchronize();
    while (uVar3 == *puVar15) {
      if (in_RESERVE != '\0') {
        uVar8 = storeWordConditionalIndexed((ulonglong)uVar3 + 1,0,ZEXT48(puVar15));
        *puVar15 = uVar8;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = *(undefined4 *)(param_1 + 0x218);
          *(undefined4 *)(param_1 + 0x218) = param_2;
        }
        if (uVar2 == 0) {
LAB_00521ef4:
          if (uVar2 != 0) goto LAB_00521efc;
        }
        else {
          iVar11 = param_2[0x34];
          if (iVar11 == 10) {
            iVar5 = param_2[0x28];
            if (iVar5 == 0) goto LAB_00521ef4;
            param_2[0x34] = 0xb;
            param_2[0x10] = 0xd;
            pcVar14 = (char *)0x0;
            if (**(char **)(iVar5 + 0x30) != '\0') {
              pcVar14 = *(char **)(iVar5 + 0x30);
            }
            iVar11 = param_2[0x34];
            param_2[0x13] = *(undefined4 *)(iVar5 + 0x34);
            param_2[0x12] = pcVar14;
            uVar1 = *(undefined4 *)(iVar5 + 0x28);
            uVar6 = *(undefined4 *)(iVar5 + 0x14);
            uVar7 = *(undefined4 *)(iVar5 + 0x18);
            uVar13 = *(undefined8 *)(iVar5 + 0x20);
            param_2[0x14] = *(undefined4 *)(iVar5 + 0x10);
            param_2[0x1a] = uVar1;
            param_2[0x15] = uVar6;
            param_2[0x16] = uVar7;
            *(undefined8 *)(param_2 + 0x18) = uVar13;
          }
          if (iVar11 != 0xb) goto LAB_00521ef4;
        }
        if (uVar12 == 0) {
          fios::lwmutex_lock_checked(param_1 + 0x188);
          iVar11 = *(int *)(param_1 + 0x1b8);
          *(int *)(param_3 + 0x2c) = iVar11;
          *(undefined1 *)(param_3 + 0x20) = 1;
          *(int *)(param_1 + 0x1b8) = iVar11 + 1;
          do {
            uVar13 = TBLr;
          } while ((int)uVar13 == 0);
          *(undefined8 *)(param_3 + 0x10) = uVar13;
          fios::lwmutex_unlock_checked(param_1 + 0x188);
          return;
        }
LAB_00521efc:
        if (uVar12 == 0) {
          puVar4 = *(undefined4 **)(param_3 + 0x38);
          uVar1 = *(undefined4 *)(param_1 + 0x160);
          *(undefined4 *)(*(int *)(param_3 + 0x24) + 4) = 0x80010708;
          (*(code *)*puVar4)(param_1,uVar1,3,param_3);
        }
        else {
          puVar4 = *(undefined4 **)(param_3 + 0x38);
          uVar1 = *(undefined4 *)(param_1 + 0x160);
          *(undefined4 *)(*(int *)(param_3 + 0x24) + 4) = 0;
          (*(code *)*puVar4)(param_1,uVar1,2,param_3);
          (*(code *)**(undefined4 **)(param_3 + 0x38))
                    (param_1,*(undefined4 *)(param_1 + 0x160),3,param_3);
        }
        return;
      }
    }
  } while( true );
}



//==== 00522104  ns=Global  size=0x3a0
// sig: undefined FUN_00522104(void)
// callers(1): 005241b8 FUN_005241b8
// callees(5): 0051daac FUN_0051daac; 00521d8c FUN_00521d8c; 0052dcf0 FUN_0052dcf0; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked
// strings: 00522214: '}+Kxy)' (raw)

void FUN_00522104(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
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
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  bVar6 = false;
  iVar15 = 0;
  iVar2 = *(int *)(param_1 + 0x178);
  if (iVar2 != 0) {
    iVar12 = 0;
    iVar11 = 0;
    iVar15 = 0;
    do {
      while( true ) {
        iVar13 = *(int *)(param_1 + 0x1b4);
        if (*(int *)(iVar11 * 0x40 + *(int *)(param_1 + 0x234) + 0xc) == 0) break;
        iVar15 = iVar15 + 1;
LAB_00522184:
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + 1;
        if (iVar2 == iVar12) goto LAB_00522274;
      }
      puVar5 = (undefined4 *)(param_1 + 0x210);
      puVar14 = (undefined4 *)*puVar5;
      bVar1 = puVar14 == (undefined4 *)0x0;
      if (bVar1) break;
      if (puVar14[0x10] == 0xd) {
        iVar9 = param_1 + 0x138;
        while (iVar4 = puVar14[0x28], fios::lwmutex_lock_checked(iVar9), *(int *)(iVar4 + 0x54) != 0
              ) {
          puVar14 = (undefined4 *)*puVar14;
          bVar1 = puVar14 == (undefined4 *)0x0;
          if (bVar1) {
            fios::lwmutex_unlock_checked(iVar9);
            goto LAB_005221e4;
          }
          if (puVar14[0x10] != 0xd) break;
          fios::lwmutex_unlock_checked(iVar9);
        }
        fios::lwmutex_unlock_checked(iVar9);
      }
      do {
        if ((puVar14[0xc] & 0x200) == 0) break;
        puVar14 = (undefined4 *)*puVar14;
        bVar1 = puVar14 == (undefined4 *)0x0;
      } while (!bVar1);
LAB_005221e4:
      if (iVar13 == iVar12) {
        if (!bVar1) {
          iVar13 = 0;
          uVar3 = puVar14[7];
          while( true ) {
            if ((((uVar3 & 2) == 0) && (cVar10 = FUN_0051daac(param_1,puVar14), cVar10 != '\0')) &&
               ((puVar14[0xc] & 0x200) == 0)) goto LAB_005221ec;
            bVar1 = iVar13 == 0xf;
            iVar13 = iVar13 + 1;
            if (bVar1) break;
            puVar14 = (undefined4 *)*puVar14;
            bVar1 = puVar14 == (undefined4 *)0x0;
            if (bVar1) break;
            uVar3 = puVar14[7];
          }
        }
        goto LAB_00522184;
      }
LAB_005221ec:
      if (bVar1) goto LAB_00522184;
      puVar8 = (undefined4 *)*puVar5;
      while (puVar7 = puVar8, puVar14 != puVar7) {
        if (puVar7 == (undefined4 *)0x0) goto LAB_00522244;
        puVar5 = puVar7;
        puVar8 = (undefined4 *)*puVar7;
      }
      *puVar5 = *puVar14;
      *puVar14 = 0;
LAB_00522244:
      iVar12 = iVar12 + 1;
      iVar15 = iVar15 + 1;
      FUN_00521d8c(param_1,puVar14,iVar11 * 0x40 + *(int *)(param_1 + 0x234));
      bVar6 = true;
      iVar11 = iVar11 + 1;
    } while (iVar2 != iVar12);
  }
LAB_00522274:
  instructionSynchronize();
  if (((*(int *)(param_1 + 0x1c8) == 0) && (iVar15 == 0)) && (*(int *)(param_1 + 0x214) != 0)) {
    puVar5 = *(undefined4 **)(param_1 + 0x214);
    puVar14 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x214) = *puVar5;
      *puVar5 = 0;
      puVar14 = puVar5;
    }
    FUN_00521d8c(param_1,puVar14,*(undefined4 *)(param_1 + 0x234));
  }
  else if (!bVar6) {
    return;
  }
  fios::lwmutex_lock_checked(param_1 + 0x188);
  iVar2 = *(int *)(param_1 + 0x178);
  if (iVar2 != 0) {
    iVar15 = 0;
    do {
      while( true ) {
        iVar11 = iVar15 * 0x40;
        iVar15 = iVar15 + 1;
        iVar11 = iVar11 + *(int *)(param_1 + 0x234);
        if (*(char *)(iVar11 + 0x20) == '\0') break;
        FUN_0052dcf0(*(undefined4 *)(iVar11 + 8));
        if (iVar2 == iVar15) goto LAB_005222f4;
      }
    } while (iVar2 != iVar15);
  }
LAB_005222f4:
  fios::lwmutex_unlock_checked(param_1 + 0x188);
  return;
}



//==== 005224a4  ns=Global  size=0x23c
// sig: undefined FUN_005224a4(void)
// callers(2): 00522b14 FUN_00522b14; 005241b8 FUN_005241b8
// callees(3): 00526fa8 fios::op_trace_complete; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked
// strings: 0052250c: '}+Kxy)' (raw)

/* WARNING: Removing unreachable block (ram,0x00522abc) */
/* WARNING: Removing unreachable block (ram,0x00522ae4) */
/* WARNING: Removing unreachable block (ram,0x00522ae8) */
/* WARNING: Removing unreachable block (ram,0x00522acc) */
/* WARNING: Removing unreachable block (ram,0x00522ad0) */

void FUN_005224a4(int param_1,undefined4 *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
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
  bVar1 = -1 < (int)((((int)param_2 >> 0x1f ^ (uint)param_2) - ((int)param_2 >> 0x1f)) + -1);
  if (bVar1) {
    puVar5 = *(undefined4 **)(param_1 + 0x218);
    puVar4 = (undefined4 *)(param_1 + 0x218);
    while (puVar3 = puVar5, param_2 != puVar3) {
      if (puVar3 == (undefined4 *)0x0) goto LAB_00522528;
      puVar4 = puVar3;
      puVar5 = (undefined4 *)*puVar3;
    }
    if (param_2 != (undefined4 *)0x0) {
      *puVar4 = *param_2;
      *param_2 = 0;
    }
  }
LAB_00522528:
  iVar2 = param_2[0x10];
  if ((((iVar2 - 10U < 2) || (iVar2 == 6)) || (iVar2 == 7)) || (iVar2 == 0x11)) {
    *(longlong *)(param_2 + 0x2c) = *(longlong *)(param_2 + 0x2c) + *(longlong *)(param_2 + 0x22);
  }
  if ((param_2[0x28] != 0) && (*param_3 - 10U < 2)) {
    fios::lwmutex_lock_checked(param_1 + 0x138);
    *(int *)(param_2[0x28] + 0x54) = *(int *)(param_2[0x28] + 0x54) + -1;
    fios::lwmutex_unlock_checked(param_1 + 0x138);
  }
  if (0xb < (uint)param_2[0x34]) {
    param_2[7] = param_2[7] | 0x400;
    if ((*(uint *)(PTR_DAT_0071ab10 + 0x18) & 1) != 0) {
      fios::op_trace_complete(param_2);
    }
    param_2[0x34] = 1;
    fios::lwmutex_lock_checked(param_1 + 0x78);
    if (bVar1) {
      *param_2 = *(undefined4 *)(param_1 + 0x21c);
      *(undefined4 *)(param_1 + 0x21c) = param_2;
    }
    fios::lwmutex_unlock_checked(param_1 + 0x78);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005225a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_DAT_0071aba4 + *(int *)(PTR_DAT_0071aba4 + param_2[0x34] * 4)))(param_3[1]);
  return;
}



//==== 00522b14  ns=Global  size=0x13c
// sig: undefined FUN_00522b14(void)
// callers(2): 00522c50 FUN_00522c50; 005241b8 FUN_005241b8
// callees(5): 0051c390 fios::op_event_dispatch; 0051fd24 FUN_0051fd24; 005224a4 FUN_005224a4; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked

void FUN_00522b14(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = param_2 + 0x10;
  if (param_2 != (undefined4 *)0x0) {
    do {
      puVar1 = (undefined4 *)*param_2;
      *param_2 = 0;
      uVar2 = *(undefined4 *)(param_1 + 0x218);
      param_2[0x11] = 0x80010708;
      *param_2 = uVar2;
      *(undefined4 *)(param_1 + 0x218) = param_2;
      FUN_005224a4(param_1,param_2,puVar4);
      if ((param_2[7] & 0x400) != 0) {
        fios::lwmutex_unlock_checked(param_1 + 0x38);
        uVar3 = param_2[0xc];
        instructionSynchronize();
        fios::op_event_dispatch(param_2,1,0);
        if ((uVar3 & 0x100) != 0) {
          FUN_0051fd24(param_1,param_2);
        }
        fios::lwmutex_lock_checked(param_1 + 0x38);
      }
      puVar4 = puVar1 + 0x10;
      param_2 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  return;
}



//==== 00522c50  ns=Global  size=0x228
// sig: undefined FUN_00522c50(void)
// callers(1): 005241b8 FUN_005241b8
// callees(4): 0051d33c FUN_0051d33c; 0051d588 FUN_0051d588; 00522b14 FUN_00522b14; 005c5ad0 libc::memcpy

void * FUN_00522c50(void *param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong unaff_r23;
  longlong lVar13;
  ulonglong unaff_r24;
  ulonglong uVar14;
  ulonglong unaff_r25;
  uint *puVar15;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  uint *puVar16;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar5 = ZEXT48(&stack0x00000000);
  puVar4 = (ulonglong *)(uVar5 - 0xd0);
  *puVar4 = uVar5;
  puVar4[0x1c] = in_LR;
  iVar2 = *(int *)((int)param_1 + 0x160);
  puVar4[0x11] = unaff_r23;
  puVar4[0x12] = unaff_r24;
  puVar4[0x13] = unaff_r25;
  puVar4[0x14] = unaff_r26;
  uVar7 = *(uint *)(iVar2 + 0x88);
  puVar15 = (uint *)0x0;
  puVar4[0x15] = unaff_r27;
  pvVar6 = *(void **)((int)param_1 + 0x1fc);
  puVar4[0x16] = unaff_r28;
  puVar4[0x17] = unaff_r29;
  puVar4[0x18] = unaff_r30;
  puVar4[0x19] = unaff_r31;
  lVar13 = (uVar5 - 0xd0) - ((ulonglong)uVar7 + 0x1e & 0xfffffffffffffff0);
  *(ulonglong *)lVar13 = *puVar4;
  uVar9 = lVar13 + 0x70;
  lVar13 = 0;
  pvVar6 = libc::memcpy((void *)uVar9,pvVar6,uVar7);
  lVar10 = *(longlong *)((int)param_1 + 0x1f0);
  lVar12 = *(longlong *)((int)param_1 + 0x200);
  *(undefined1 *)(puVar4 + 0xe) = 0x80;
  puVar3 = (uint *)((int)param_1 + 0x210);
  uVar7 = *puVar3;
  puVar4[0xf] = lVar12 + lVar10;
  *(undefined4 *)((int)puVar4 + 0x74) = 0;
  uVar14 = 0;
  puVar16 = puVar3;
  if (uVar7 == 0) {
    puVar15 = (uint *)0x0;
    uVar14 = 0;
    uVar5 = 1;
  }
  else {
    do {
      while( true ) {
        puVar8 = (uint *)*puVar16;
        pvVar6 = param_1;
        if (puVar8 == (uint *)0x0) goto LAB_00522d98;
        if ((puVar8[0xc] & 0x200) == 0) break;
        *puVar16 = *puVar8;
        *puVar8 = (int)uVar14;
        uVar14 = ZEXT48(puVar8);
      }
      cVar1 = *(char *)(puVar4 + 0xe);
      uVar7 = FUN_0051d33c(param_1,puVar8,uVar5 - 0x60,uVar5 - 0x5c,uVar5 - 0x58,uVar9 & 0xffffffff)
      ;
      pvVar6 = (void *)(uVar7 & 0xff);
      if (pvVar6 == (void *)0x0) {
        puVar8 = (uint *)*puVar16;
        uVar11 = puVar4[0xf];
      }
      else {
        puVar8 = (uint *)*puVar16;
        uVar11 = puVar4[0xf];
        if (((cVar1 != *(char *)(puVar4 + 0xe)) ||
            (lVar13 < (longlong)(uVar11 - *(longlong *)(puVar8 + 2)))) || (puVar3 == puVar15)) {
          lVar13 = uVar11 - *(longlong *)(puVar8 + 2);
          puVar15 = puVar16;
        }
      }
      *(ulonglong *)(puVar8 + 0x32) = uVar11;
      puVar16 = puVar8;
    } while (*puVar8 != 0);
LAB_00522d98:
    uVar5 = (ulonglong)((int)uVar14 >> 0x1f);
    uVar5 = (((uVar5 ^ uVar14) - uVar5) + -1 << 0x20) >> 0x3f;
  }
  if ((puVar15 != puVar3) && (puVar15 != (uint *)0x0)) {
    puVar3 = (uint *)*puVar15;
    *puVar15 = *puVar3;
    *puVar3 = 0;
    pvVar6 = (void *)FUN_0051d588(param_1,puVar3);
  }
  if (uVar5 == 0) {
    pvVar6 = (void *)FUN_00522b14(param_1,uVar14);
  }
  return pvVar6;
}



//==== 00522e78  ns=Global  size=0x354
// sig: undefined FUN_00522e78(void)
// callers(1): 005231cc FUN_005231cc
// callees(4): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604738 fios::check_magic; 00604788 FUN_00604788
// strings: 005231a8: '} Kxy)' (raw)

void FUN_00522e78(int param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint ****ppppuVar5;
  uint ****ppppuVar6;
  uint uVar7;
  uint ****ppppuVar8;
  char cVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char in_RESERVE;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  uint ***local_70 [6];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  cVar9 = FUN_00604788(param_1);
  if (cVar9 != '\0') {
    puVar10 = (uint *)(param_1 + 0x20c);
    uVar4 = ZEXT48(puVar10);
    fios::lwmutex_lock_checked(param_1 + 0x38);
    fios::lwmutex_lock_checked(param_1 + 0x78);
    do {
      uVar1 = *puVar10;
      uVar11 = (ulonglong)uVar1;
      instructionSynchronize();
      do {
        uVar7 = *puVar10;
        if (uVar1 != *puVar10) break;
        if (in_RESERVE != '\0') {
          uVar7 = storeWordConditionalIndexed(0,0,uVar4);
          *puVar10 = uVar7;
          in_cr0 = 2;
        }
        uVar7 = uVar1;
      } while ((in_cr0 & 2) == 0);
    } while (uVar1 != uVar7);
    uVar12 = uVar11;
    if (uVar1 != 0) {
      do {
        puVar3 = (uint *)uVar12;
        fios::check_magic(uVar12);
        (*(code *)*param_2)(param_3,uVar12);
        uVar12 = (ulonglong)*puVar3;
      } while (*puVar3 != 0);
      if (uVar1 != 0) {
        do {
          while (*puVar10 != 0) {
            do {
              local_70[0] = (uint ***)*puVar10;
              instructionSynchronize();
              do {
                ppppuVar8 = (uint ****)*puVar10;
                if ((uint ****)local_70[0] != (uint ****)*puVar10) break;
                if (in_RESERVE != '\0') {
                  uVar1 = storeWordConditionalIndexed(0,0,uVar4);
                  *puVar10 = uVar1;
                  in_cr0 = 2;
                }
                ppppuVar8 = (uint ****)local_70[0];
              } while ((in_cr0 & 2) == 0);
            } while ((uint ****)local_70[0] != ppppuVar8);
            if ((uint ***)uVar11 != (uint ***)0x0) {
              ppppuVar6 = (uint ****)local_70[0];
              ppppuVar8 = local_70;
              while (ppppuVar5 = ppppuVar6, ppppuVar5 != (uint ****)0x0) {
                ppppuVar8 = ppppuVar5;
                ppppuVar6 = (uint ****)*ppppuVar5;
              }
              *ppppuVar8 = (uint ***)uVar11;
            }
            uVar11 = ZEXT48(local_70[0]);
          }
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(uVar11,0,uVar4);
            *puVar10 = uVar1;
            in_cr0 = 2;
          }
        } while ((in_cr0 & 2) == 0);
      }
    }
    for (puVar2 = *(undefined4 **)(param_1 + 0x210); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      fios::check_magic(puVar2);
      (*(code *)*param_2)(param_3,puVar2);
    }
    for (puVar2 = *(undefined4 **)(param_1 + 0x214); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      fios::check_magic(puVar2);
      (*(code *)*param_2)(param_3,puVar2);
    }
    for (puVar2 = *(undefined4 **)(param_1 + 0x218); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      fios::check_magic(puVar2);
      (*(code *)*param_2)(param_3,puVar2);
    }
    for (puVar2 = *(undefined4 **)(param_1 + 0x21c); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      fios::check_magic(puVar2);
      (*(code *)*param_2)(param_3,puVar2);
    }
    fios::lwmutex_unlock_checked(param_1 + 0x78);
    fios::lwmutex_unlock_checked(param_1 + 0x38);
  }
  return;
}



//==== 005231cc  ns=Global  size=0x6c
// sig: undefined FUN_005231cc(void)
// callers(2): 00525f48 FUN_00525f48; 00529808 FUN_00529808
// callees(2): 00522e78 FUN_00522e78; 00604788 FUN_00604788

void FUN_005231cc(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00604788();
  if (cVar1 != '\0') {
    FUN_00522e78(param_1,PTR_PTR_0071aba8,param_2);
    return;
  }
  return;
}



//==== 00523238  ns=Global  size=0x594
// sig: undefined FUN_00523238(void)
// callers(1): 005237cc FUN_005237cc
// callees(6): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 0052e49c FUN_0052e49c; 0052e984 FUN_0052e984; 005d0140 libc::memset; 00604788 FUN_00604788

void FUN_00523238(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int iVar12;
  longlong lVar11;
  uint *puVar13;
  char in_RESERVE;
  byte in_cr0;
  double dVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  FUN_00604788(param_1);
  iVar12 = *(int *)(param_1 + 0x234);
  if (*(uint *)(param_1 + 0x178) != 0) {
    uVar15 = (ulonglong)*(uint *)(param_1 + 0x178);
    iVar10 = *(int *)(iVar12 + 4);
    iVar2 = iVar12;
    while (iVar12 = iVar2, iVar10 != param_2) {
      iVar12 = iVar2 + 0x40;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) break;
      iVar10 = *(int *)(iVar2 + 0x44);
      iVar2 = iVar12;
    }
  }
  iVar10 = param_1 + 0x188;
  dVar16 = (double)DAT_0071ab28;
  dVar18 = *(double *)PTR_DAT_0071ab1c;
  dVar17 = dVar16;
  while( true ) {
    fios::lwmutex_lock_checked(iVar10);
    while ((*(char *)(param_1 + 0x1b0) != '\0' && (*(char *)(iVar12 + 0x20) == '\0'))) {
      FUN_0052e49c(*(undefined4 *)(iVar12 + 8),iVar10,0);
      FUN_00604788(param_1);
    }
    fios::lwmutex_unlock_checked(iVar10);
    piVar1 = *(int **)(iVar12 + 0x24);
    if ((piVar1 != (int *)0x0) && (*(char *)(iVar12 + 0x20) != '\0')) break;
LAB_00523568:
    if (*(char *)(param_1 + 0x1b0) == '\0') {
      return;
    }
  }
  iVar2 = *(int *)(iVar12 + 0xc);
  if (*(int *)(iVar12 + 0x34) != 0) {
    libc::memset(*(int *)(iVar12 + 0x34),0,
                 ((ulonglong)*(uint *)(*(int *)(param_1 + 0x160) + 0x8c) & 0x3fffffff) << 2);
    piVar1 = *(int **)(iVar12 + 0x24);
  }
  iVar3 = *piVar1;
  if ((((iVar3 - 10U < 2) || (iVar3 == 6)) || (iVar3 == 7)) ||
     (((iVar3 == 0x11 || (iVar3 == 8)) || (iVar3 == 0xd)))) {
    iVar3 = *(int *)(iVar12 + 0x2c);
    *(ushort *)(piVar1 + 0x15) =
         (ushort)*(undefined4 *)(iVar2 + 0x1c) & 0x30fe | *(ushort *)(piVar1 + 0x15);
    instructionSynchronize();
    if (iVar3 != *(int *)(param_1 + 0x1bc)) goto LAB_005235f8;
  }
  else {
    while (instructionSynchronize(), *(int *)(iVar12 + 0x2c) != *(int *)(param_1 + 0x1bc)) {
LAB_005235f8:
      do {
        lVar11 = TBLr;
      } while ((int)lVar11 == 0);
      dVar14 = dVar18 * (double)DAT_0071abac;
      if (dVar16 <= dVar14) {
        uVar15 = (longlong)(dVar14 - dVar16) ^ 0x8000000000000000;
      }
      else {
        uVar15 = (ulonglong)dVar14;
      }
      FUN_0052e984(lVar11 + uVar15);
    }
  }
  puVar13 = (uint *)(param_1 + 0x1bc);
  if (1 < *(uint *)(param_1 + 0x178)) {
    do {
      lVar11 = TBLr;
    } while ((int)lVar11 == 0);
    dVar14 = dVar18 * (double)DAT_0071abb0;
    if (dVar17 <= dVar14) {
      uVar15 = (longlong)(dVar14 - dVar17) ^ 0x8000000000000000;
    }
    else {
      uVar15 = (ulonglong)dVar14;
    }
    iVar2 = -0x98;
    if (0 < (longlong)uVar15) {
      iVar2 = -0xa0;
    }
    instructionSynchronize();
    if (lVar11 <= *(longlong *)(param_1 + 0x1c0) + *(longlong *)(&stack0x00000000 + iVar2)) {
      FUN_0052e984();
      iVar2 = **(int **)(iVar12 + 0x24);
      goto joined_r0x00523648;
    }
  }
  iVar2 = **(int **)(iVar12 + 0x24);
joined_r0x00523648:
  if (iVar2 == 0x11) {
    instructionSynchronize();
    if (*(int *)(param_1 + 0x1e0) == 0) {
      lVar11 = *(longlong *)(param_1 + 0x1d0);
    }
    else {
      lVar11 = *(longlong *)(param_1 + 0x1d8);
    }
    if (lVar11 != 0) {
      instructionSynchronize();
      if (((*(int *)(param_1 + 0x224) == 1) &&
          (instructionSynchronize(), *(int *)(param_1 + 0x20c) == 0)) &&
         (*(int *)(param_1 + 0x210) == 0)) {
        do {
          lVar9 = TBLr;
        } while ((int)lVar9 == 0);
        FUN_0052e984(lVar11 + lVar9);
      }
      instructionSynchronize();
      if (((*(int *)(param_1 + 0x224) != 1) ||
          (instructionSynchronize(), *(int *)(param_1 + 0x20c) != 0)) ||
         (*(int *)(param_1 + 0x210) != 0)) {
        do {
          uVar4 = *puVar13;
          instructionSynchronize();
          while (uVar4 == *puVar13) {
            if (in_RESERVE != '\0') {
              uVar8 = storeWordConditionalIndexed((ulonglong)uVar4 + 1,0,ZEXT48(puVar13));
              *puVar13 = uVar8;
              in_cr0 = 2;
            }
            if ((in_cr0 & 2) != 0) {
              *(undefined1 *)(iVar12 + 0x20) = 0;
              (*(code *)**(undefined4 **)(iVar12 + 0x38))
                        (*(undefined4 *)(iVar12 + 0x3c),*(undefined4 *)(param_1 + 0x160),2,iVar12);
              iVar2 = *(int *)(iVar12 + 0x24);
              puVar5 = *(undefined4 **)(iVar12 + 0x38);
              uVar6 = *(undefined4 *)(iVar12 + 0x3c);
              uVar7 = *(undefined4 *)(param_1 + 0x160);
              *(undefined4 *)(iVar2 + 4) = 0;
              *(undefined8 *)(iVar2 + 0x48) = 0;
              (*(code *)*puVar5)(uVar6,uVar7,3,iVar12);
              goto LAB_00523568;
            }
          }
        } while( true );
      }
    }
    sync(1);
    *(int *)(param_1 + 0x1e0) = 1;
  }
  else {
    sync(1);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  do {
    lVar11 = TBLr;
  } while ((int)lVar11 == 0);
  sync(1);
  *(longlong *)(param_1 + 0x1c0) = lVar11;
  do {
    uVar4 = *puVar13;
    instructionSynchronize();
    while (uVar4 == *puVar13) {
      if (in_RESERVE != '\0') {
        uVar8 = storeWordConditionalIndexed((ulonglong)uVar4 + 1,0,ZEXT48(puVar13));
        *puVar13 = uVar8;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        *(undefined1 *)(iVar12 + 0x20) = 0;
        (*(code *)**(undefined4 **)(iVar12 + 0x38))
                  (*(undefined4 *)(iVar12 + 0x3c),*(undefined4 *)(param_1 + 0x160),2,iVar12);
        (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x160) + 0x14))
                  (*(int **)(param_1 + 0x160),iVar12);
        (*(code *)**(undefined4 **)(iVar12 + 0x38))
                  (*(undefined4 *)(iVar12 + 0x3c),*(undefined4 *)(param_1 + 0x160),3,iVar12);
        goto LAB_00523568;
      }
    }
  } while( true );
}



//==== 005237cc  ns=Global  size=0x10
// sig: undefined FUN_005237cc(void)
// callers(0): 
// callees(1): 00523238 FUN_00523238

void FUN_005237cc(undefined8 param_1,undefined8 param_2)

{
  FUN_00523238(param_2,param_1);
  return;
}



//==== 005237dc  ns=Global  size=0xe4
// sig: undefined FUN_005237dc(void)
// callers(0): 
// callees(4): 0052dcf0 FUN_0052dcf0; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604788 FUN_00604788

void FUN_005237dc(int param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  cVar4 = FUN_00604788(param_1);
  if (cVar4 != '\0') {
    puVar1 = (uint *)(param_1 + 0x180);
    instructionSynchronize();
    if (*puVar1 != 0) {
      fios::lwmutex_lock_checked(param_1 + 0xe0);
      do {
        uVar2 = *puVar1;
        instructionSynchronize();
        while (uVar2 == *puVar1) {
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed((ulonglong)uVar2 - 1,0,ZEXT48(puVar1));
            *puVar1 = uVar3;
            in_cr0 = 2;
          }
          if ((in_cr0 & 2) != 0) {
            FUN_0052dcf0(param_1 + 0x108);
            fios::lwmutex_unlock_checked(param_1 + 0xe0);
            return;
          }
        }
      } while( true );
    }
  }
  return;
}



//==== 005238c0  ns=Global  size=0x694
// sig: undefined FUN_005238c0(void)
// callers(3): 0051f3e0 FUN_0051f3e0; 005238c0 FUN_005238c0; 005258cc FUN_005258cc
// callees(20): 00510704 FUN_00510704; 005107d0 fios::handle_invalidate_magic; 0051a480 FUN_0051a480; 0051b318 FUN_0051b318; 0051cba4 FUN_0051cba4; 005238c0 FUN_005238c0; 0052cbd8 fios::print_tty4; 0052ced8 FUN_0052ced8; 0052d018 FUN_0052d018; 0052d0e8 FUN_0052d0e8; 0052dcf0 FUN_0052dcf0; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 0052df14 FUN_0052df14; 0052e5f8 FUN_0052e5f8; 005390ac fios::handle_destroy; 00604710 FUN_00604710; 00604738 fios::check_magic; 00604760 fios::check_magic; 00604788 FUN_00604788
// strings: 00667b88: 'Scheduler shutting down\n' | 00667ba8: '  Total ops completed: %d\n' | 00667bc8: '  Ops completed by overlap: %d\n' | 00667be8: '  Emax = %lld ms\n' | 00667c00: '  Variables:\n' | 00667c10: '  %s = %lld us\n'

void FUN_005238c0(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  char cVar6;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  double dVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  
  *param_1 = PTR_PTR_0071ab34;
  FUN_00604788(param_1);
  if (*PTR_PTR_0071ab7c == '\0') {
    fios::print_tty4(PTR_s_Scheduler_shutting_down_0071ab80);
    instructionSynchronize();
    fios::print_tty4(PTR_s_Total_ops_completed___d_0071ab84,param_1[0x8a]);
    fios::print_tty4(PTR_s_Ops_completed_by_overlap___d_0071ab88,param_1[0x8c]);
    dVar15 = *(double *)PTR_DAT_0071ab1c;
    dVar12 = (double)*(longlong *)(param_1 + 0x7c) / dVar15;
    if ((double)DAT_0071ab28 <= dVar12) {
      uVar13 = (longlong)(dVar12 - (double)DAT_0071ab28) ^ 0x8000000000000000;
    }
    else {
      uVar13 = (ulonglong)dVar12;
    }
    fios::print_tty4(PTR_s_Emax____lld_ms_0071ab8c,(longlong)(uVar13 + 999999) / 1000000);
    fios::print_tty4(PTR_s_Variables__0071ab90);
    puVar2 = PTR_s__s____lld_us_0071ab94;
    piVar4 = (int *)param_1[0x58];
    if (piVar4[0x23] != 0) {
      dVar12 = (double)DAT_0071ab28;
      uVar13 = 0;
      do {
        uVar5 = (*(code *)**(undefined4 **)(*piVar4 + 0xc))(piVar4,uVar13 & 0xffffffff);
        dVar14 = (double)*(longlong *)((int)((uVar13 & 0xffffffff) << 3) + param_1[0x7b]) / dVar15;
        if (dVar14 < dVar12) {
          uVar7 = (ulonglong)dVar14;
        }
        else {
          uVar7 = (longlong)(dVar14 - dVar12) ^ 0x8000000000000000;
        }
        fios::print_tty4(puVar2,uVar5,(longlong)(uVar7 + 999) / 1000);
        piVar4 = (int *)param_1[0x58];
        uVar7 = uVar13 + 1;
        uVar13 = uVar13 + 1;
      } while ((uVar7 & 0xffffffff) < (ulonglong)(uint)piVar4[0x23]);
    }
  }
  else {
    piVar4 = (int *)param_1[0x58];
  }
  cVar6 = FUN_00604710(piVar4);
  if ((cVar6 != '\0') && (puVar3 = (undefined4 *)FUN_0051a480(param_1[0x58]), param_1 == puVar3)) {
    FUN_0051b318(param_1[0x58],0);
  }
  if (*(char *)(param_1 + 0x33) != '\0') {
    FUN_0052ced8(param_1 + 0x28);
  }
  iVar9 = param_1[0x7e];
  if (iVar9 != 0) {
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10180103,0,0);
  }
  iVar9 = param_1[0x7b];
  if (iVar9 != 0) {
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10170103,0,0);
  }
  puVar3 = param_1 + 0x62;
  if (param_1[0x8d] != 0) {
    fios::lwmutex_lock_checked(puVar3);
    iVar9 = param_1[0x5e];
    *(undefined1 *)(param_1 + 0x6c) = 0;
    if (iVar9 != 0) {
      iVar11 = 0;
      do {
        iVar1 = iVar11 * 0x40;
        iVar11 = iVar11 + 1;
        FUN_0052dcf0(*(undefined4 *)(iVar1 + param_1[0x8d] + 8));
      } while (iVar9 != iVar11);
    }
    fios::lwmutex_unlock_checked(puVar3);
    uVar10 = param_1[0x5e];
    if (uVar10 == 0) {
      iVar9 = param_1[0x8d];
    }
    else {
      uVar8 = 0;
      iVar9 = param_1[0x8d];
      do {
        uVar13 = (ulonglong)uVar8;
        uVar8 = uVar8 + 1;
        iVar1 = (int)((uVar13 & 0x3ffffff) << 6);
        iVar11 = *(int *)(iVar1 + iVar9 + 4);
        if (iVar11 != 0) {
          FUN_0052ced8(iVar11);
          FUN_0052d018(*(undefined4 *)(iVar1 + param_1[0x8d] + 4));
          FUN_0052d0e8(*(undefined4 *)(iVar1 + param_1[0x8d] + 8));
          iVar9 = param_1[0x8d];
        }
      } while (uVar10 != uVar8);
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10160103,0,0);
  }
  iVar9 = param_1[0x5c];
  if (iVar9 != 0) {
    if (param_1[0x5a] != 0) {
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        fios::check_magic(iVar9);
        fios::handle_destroy(iVar9);
        iVar9 = iVar9 + 0x58;
      } while (uVar10 < (uint)param_1[0x5a]);
      iVar9 = param_1[0x5c];
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10140103,0,0);
  }
  iVar9 = param_1[0x5b];
  if (iVar9 != 0) {
    if (param_1[0x59] != 0) {
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        fios::check_magic(iVar9);
        iVar9 = iVar9 + 0xe8;
      } while (uVar10 < (uint)param_1[0x59]);
      iVar9 = param_1[0x5b];
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10130103,0,0);
  }
  FUN_0052df14(puVar3);
  FUN_0052df14(param_1 + 0x4e);
  FUN_0052d0e8(param_1 + 0x48);
  FUN_0052d0e8(param_1 + 0x42);
  FUN_0052df14(param_1 + 0x38);
  FUN_0052d018(param_1 + 0x28);
  FUN_0052df14(param_1 + 0x1e);
  FUN_0052e5f8(param_1 + 0x18);
  FUN_0052df14(param_1 + 0xe);
  FUN_0052df14(param_1 + 4);
  fios::handle_invalidate_magic(param_1 + 1);
  FUN_00510704(param_1,0x10100100,3);
  return;
}



//==== 00523f54  ns=Global  size=0x190
// sig: undefined FUN_00523f54(void)
// callers(1): 00521d8c FUN_00521d8c
// callees(6): 0052757c FUN_0052757c; 0052dcf0 FUN_0052dcf0; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604738 fios::check_magic; 00604788 FUN_00604788

undefined4 FUN_00523f54(int param_1,undefined8 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  char in_RESERVE;
  byte in_cr0;
  
  uVar6 = 0x80010707;
  if ((param_3 - 2U & 0xff) < 2) {
    fios::check_magic(*(undefined4 *)(param_4 + 0xc));
    puVar4 = PTR_DAT_0071ab10;
    if (param_3 != 2) {
      FUN_00604788(param_1);
      puVar5 = (uint *)(param_1 + 0x1e4);
      do {
        uVar1 = *puVar5;
        instructionSynchronize();
        while (uVar1 == *puVar5) {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 + 1,0,ZEXT48(puVar5));
            *puVar5 = uVar2;
            in_cr0 = 2;
          }
          if ((in_cr0 & 2) != 0) {
            fios::lwmutex_lock_checked(param_1 + 0x38);
            do {
              uVar3 = TBLr;
            } while ((int)uVar3 == 0);
            *(undefined8 *)(param_4 + 0x18) = uVar3;
            fios::lwmutex_lock_checked(param_1 + 0xe0);
            *(undefined1 *)(param_1 + 0x17c) = 1;
            FUN_0052dcf0(param_1 + 0x108);
            fios::lwmutex_unlock_checked(param_1 + 0xe0);
            fios::lwmutex_unlock_checked(param_1 + 0x38);
            return 0;
          }
        }
      } while( true );
    }
    do {
      uVar3 = TBLr;
    } while ((int)uVar3 == 0);
    uVar6 = 0;
    *(undefined8 *)(param_4 + 0x10) = uVar3;
    if ((*(uint *)(puVar4 + 0x18) & 1) != 0) {
      FUN_0052757c(*(undefined4 *)(param_4 + 0xc));
      uVar6 = 0;
    }
  }
  return uVar6;
}



//==== 005240e4  ns=Global  size=0xd4
// sig: undefined FUN_005240e4(void)
// callers(0): 
// callees(4): 0051c030 fios::op_wait_result; 00521b58 fios::filehandle_close_setup; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked

void FUN_005240e4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_1 + 0x10;
  fios::lwmutex_lock_checked(iVar3);
  piVar1 = (int *)(param_1 + 0x23c);
  iVar2 = *piVar1;
  while (iVar2 != 0) {
    *piVar1 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    fios::lwmutex_unlock_checked(iVar3);
    uVar4 = fios::filehandle_close_setup(param_1,0,iVar2);
    fios::op_wait_result(uVar4,0);
    fios::lwmutex_lock_checked(iVar3);
    iVar2 = *piVar1;
  }
  fios::lwmutex_unlock_checked(iVar3);
  return;
}



//==== 005241b8  ns=Global  size=0xe90
// sig: undefined FUN_005241b8(void)
// callers(1): 00525048 FUN_00525048
// callees(20): 0051c390 fios::op_event_dispatch; 0051c554 FUN_0051c554; 0051cbc8 FUN_0051cbc8; 0051cbec FUN_0051cbec; 0051cc60 FUN_0051cc60; 0051d588 FUN_0051d588; 0051fd24 FUN_0051fd24; 00522104 FUN_00522104; 005224a4 FUN_005224a4; 00522b14 FUN_00522b14; 00522c50 FUN_00522c50; 0052cbd8 fios::print_tty4; 0052dcf0 FUN_0052dcf0; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 0052e49c FUN_0052e49c; 0052e984 FUN_0052e984; 005c5ad0 libc::memcpy; 005d0140 libc::memset; 00604788 FUN_00604788
// strings: 00667e10: "Scheduler thread can't shut down. Resources still allocated:\n" | 00667cd8: '  %d ops still in prefetch queue (cancelling)\n' | 00667d08: '  access paths for prefetch ops: ' | 00667cc8: "'%s' " | 00667d30: '  %d ops still executing\n' | 00667d50: '  access paths for executing ops: ' | 00667d78: '  %d open filehandles\n' | 00667d90: '  files currently open: ' | 00667db0: '  %d ops complete but not yet deleted (might be leaks)\n' | 00667de8: '  access paths for completed ops: ' | 00524dcc: '}`[xx\t' (raw) | 00524e6c: '} Kxy)' (raw) | 00667c78: '  %d ops still in schedule queue\n' | 00667ca0: '  access paths for scheduled ops: '

void FUN_005241b8(int param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  void *__src;
  undefined4 *puVar5;
  ulonglong *puVar6;
  int iVar7;
  uint *puVar8;
  undefined *puVar9;
  int *piVar10;
  int *piVar11;
  undefined *puVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  char cVar17;
  int iVar18;
  char *pcVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  int iVar26;
  ulonglong uVar24;
  uint uVar28;
  uint uVar29;
  ulonglong uVar25;
  ulonglong unaff_r14;
  longlong lVar30;
  ulonglong unaff_r15;
  ulonglong uVar31;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  int *piVar32;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  int *piVar33;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong uVar34;
  ulonglong unaff_r27;
  uint uVar35;
  ulonglong unaff_r28;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong unaff_r29;
  longlong lVar38;
  uint uVar40;
  ulonglong uVar39;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  char in_RESERVE;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar41;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong in_LR;
  double dVar42;
  double dVar43;
  double dVar44;
  uint local_100 [64];
  uint *puVar27;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0x170;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = ZEXT48(&stack0x00000000);
  puVar6[0x26] = unaff_r24;
  puVar6[0x21] = unaff_r19;
  puVar6[0x27] = unaff_r25;
  puVar6[0x2d] = unaff_r31;
  puVar6[0x1c] = unaff_r14;
  puVar6[0x1d] = unaff_r15;
  puVar6[0x1e] = unaff_r16;
  puVar6[0x1f] = unaff_r17;
  puVar6[0x20] = unaff_r18;
  puVar6[0x22] = unaff_r20;
  puVar6[0x23] = unaff_r21;
  puVar6[0x24] = unaff_r22;
  puVar6[0x25] = unaff_r23;
  puVar6[0x28] = unaff_r26;
  puVar6[0x29] = unaff_r27;
  puVar6[0x2a] = unaff_r28;
  puVar6[0x2b] = unaff_r29;
  puVar6[0x2c] = unaff_r30;
  *(uint *)(puVar6 + 0x2f) =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  puVar6[0x30] = in_LR;
  FUN_00604788(param_1);
  do {
    lVar30 = TBLr;
  } while ((int)lVar30 == 0);
  dVar43 = (double)DAT_0071ab28;
  uVar4 = *(uint *)(param_1 + 0x178);
  dVar44 = *(double *)PTR_DAT_0071ab1c;
  dVar42 = dVar44 * (double)DAT_0071abb4;
  if (dVar43 <= dVar42) {
    puVar6[0x12] = (longlong)(dVar42 - dVar43);
    puVar6[0x12] = puVar6[0x12] ^ 0x8000000000000000;
  }
  else {
    puVar6[0x12] = (longlong)dVar42;
  }
  dVar44 = dVar44 * (double)DAT_0071abb8;
  if (dVar43 <= dVar44) {
    puVar6[0x1a] = (longlong)(dVar44 - dVar43);
    puVar6[0xf] = puVar6[0x1a] ^ 0x8000000000000000;
  }
  else {
    puVar6[0xf] = (longlong)dVar44;
  }
  lVar36 = ((ulonglong)uVar4 & 0x3fffffff) * 4;
  lVar38 = -(lVar36 + 0x1eU & 0xfffffffffffffff0);
  *(int *)((int)puVar6 + 0x9c) = param_1 + 0x214;
  *(int *)(puVar6 + 0x14) = param_1 + 0x218;
  lVar1 = lVar1 + lVar38;
  *(ulonglong *)lVar1 = *puVar6;
  *(int *)(puVar6 + 0x15) = param_1 + 0x23c;
  *(int *)((int)puVar6 + 0xa4) = param_1 + 0x21c;
  libc::memset(lVar1 + 0x70U & 0xffffffff,0,lVar36);
  lVar38 = lVar1 + lVar38;
  *(ulonglong *)lVar38 = *(ulonglong *)lVar1;
  uVar31 = lVar38 + 0x70;
  *(int *)(puVar6 + 0x17) = param_1 + 0x20c;
  libc::memset(uVar31 & 0xffffffff,0,lVar36);
  iVar14 = param_1 + 0xe0;
  lVar38 = 0;
  piVar32 = (int *)(param_1 + 0x210);
  puVar6[0x16] = (ulonglong)(param_1 + 0x38);
  puVar6[0x18] = (ulonglong)(param_1 + 0x78);
  bVar41 = (uVar4 == 0) << 1;
  do {
    bVar2 = lVar38 < lVar30;
    bVar3 = lVar30 < lVar38;
    FUN_00604788(param_1);
    fios::lwmutex_lock_checked(iVar14);
    cVar17 = FUN_0051cbc8(param_1);
    if (cVar17 == '\0') goto LAB_0052439c;
LAB_005247d0:
    FUN_0052dcf0(param_1 + 0x120);
LAB_0052439c:
    while (cVar17 = FUN_0051cbec(param_1), cVar17 == '\0') {
      if (bVar2) {
        do {
          lVar38 = TBLr;
        } while ((int)lVar38 == 0);
        bVar2 = lVar38 < lVar30;
        bVar3 = lVar30 < lVar38;
      }
      FUN_0052e49c(param_1 + 0x108,iVar14,0);
      FUN_00604788(param_1);
    }
    fios::lwmutex_unlock_checked(iVar14);
    if (bVar3) {
      do {
        lVar30 = TBLr;
      } while ((int)lVar30 == 0);
    }
    fios::lwmutex_lock_checked(puVar6[0x16]);
    *(undefined1 *)(param_1 + 0x17c) = 0;
    instructionSynchronize();
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1e4);
    iVar18 = (int)(lVar1 + 0x70U);
    if ((bool)(bVar41 >> 1 & 1)) {
      FUN_00522104(param_1);
LAB_00524d30:
      fios::lwmutex_unlock_checked(puVar6[0x16]);
      if (!(bool)(bVar41 >> 1 & 1)) {
LAB_00524660:
        uVar40 = 0;
        iVar22 = 0;
        do {
          piVar23 = (int *)(iVar22 + iVar18);
          iVar26 = *piVar23;
          if (iVar26 != 0) {
            uVar15 = *(uint *)(iVar26 + 0x30);
            instructionSynchronize();
            fios::op_event_dispatch(iVar26,1,0);
            if ((uVar15 & 0x100) != 0) {
              FUN_0051fd24(param_1,iVar26);
            }
            *piVar23 = 0;
          }
          uVar40 = uVar40 + 1;
          iVar22 = iVar22 + 4;
        } while (uVar40 < uVar4);
      }
    }
    else {
      uVar40 = 0;
      bVar2 = false;
      lVar36 = 0;
      iVar22 = 0;
      do {
        iVar7 = (int)(((ulonglong)uVar40 & 0x3ffffff) << 6);
        iVar26 = iVar7 + *(int *)(param_1 + 0x234);
        if (((*(int *)(iVar26 + 0xc) != 0) && (*(int *)(iVar26 + 0x24) != 0)) &&
           (*(longlong *)(iVar26 + 0x18) != 0)) {
          FUN_0051cc60(param_1,*(undefined4 *)(iVar26 + 0x34),
                       *(longlong *)(iVar26 + 0x18) - *(longlong *)(iVar26 + 0x10));
          iVar26 = *(int *)(param_1 + 0x234);
          __src = *(void **)(iVar7 + iVar26 + 0x30);
          if ((__src != (void *)0x0) && (lVar36 < *(longlong *)(iVar7 + iVar26 + 0x18))) {
            libc::memcpy(*(void **)(param_1 + 0x1f8),__src,
                         *(size_t *)(*(int *)(param_1 + 0x160) + 0x88));
            iVar26 = iVar7 + *(int *)(param_1 + 0x234);
            lVar36 = *(longlong *)(iVar26 + 0x18);
            libc::memcpy(*(void **)(param_1 + 0x1fc),*(void **)(iVar26 + 0x30),
                         *(size_t *)(*(int *)(param_1 + 0x160) + 0x88));
            iVar26 = *(int *)(param_1 + 0x234);
          }
          piVar23 = *(int **)(iVar7 + iVar26 + 0x24);
          if (((piVar23[1] == 0) && ((*piVar23 == 10 || (*piVar23 == 6)))) &&
             ((*(ushort *)(piVar23 + 0x15) & 0x20) == 0)) {
            bVar2 = true;
            *(undefined4 *)(iVar22 + (int)uVar31) = *(undefined4 *)(iVar7 + iVar26 + 0xc);
          }
          FUN_005224a4(param_1,*(undefined4 *)(iVar7 + iVar26 + 0xc),
                       *(undefined4 *)(iVar7 + iVar26 + 0x24));
          iVar7 = iVar7 + *(int *)(param_1 + 0x234);
          if ((*(uint *)(*(int *)(iVar7 + 0xc) + 0x1c) & 0x400) != 0) {
            *(int *)(iVar22 + iVar18) = *(int *)(iVar7 + 0xc);
          }
          puVar20 = (uint *)(param_1 + 0x224);
          *(undefined8 *)(iVar7 + 0x18) = 0;
          *(undefined4 *)(iVar7 + 0xc) = 0;
          *(undefined4 *)(iVar7 + 0x24) = 0;
          *(undefined8 *)(iVar7 + 0x10) = 0;
          do {
            uVar15 = *puVar20;
            instructionSynchronize();
            while (uVar15 == *puVar20) {
              if (in_RESERVE != '\0') {
                uVar35 = storeWordConditionalIndexed((ulonglong)uVar15 - 1,0,ZEXT48(puVar20));
                *puVar20 = uVar35;
                in_cr0 = 2;
              }
              if ((in_cr0 & 2) != 0) goto joined_r0x00524548;
            }
          } while( true );
        }
joined_r0x00524548:
        iVar22 = iVar22 + 4;
        uVar40 = uVar40 + 1;
      } while (uVar4 != uVar40);
      FUN_00522104(param_1);
      if (!bVar2) goto LAB_00524d30;
      piVar23 = (int *)*piVar32;
      iVar22 = 1;
      piVar33 = piVar32;
      if (piVar23 != (int *)0x0) {
        do {
          if (!(bool)(bVar41 >> 1 & 1)) {
            uVar40 = 0;
            uVar37 = uVar31;
            do {
              if ((*(int *)uVar37 != 0) &&
                 (cVar17 = FUN_0051c554(piVar23,*(int *)uVar37), cVar17 != '\0')) {
                *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + 1;
                piVar13 = (int *)*piVar32;
                piVar11 = piVar32;
                while( true ) {
                  piVar10 = piVar13;
                  if (piVar10 == piVar23) {
                    *piVar11 = *piVar23;
                    *piVar23 = 0;
                    *piVar23 = *piVar33;
                    *piVar33 = (int)piVar23;
                    piVar33 = piVar23;
                    goto LAB_00524618;
                  }
                  if (piVar10 == (int *)0x0) break;
                  piVar13 = (int *)*piVar10;
                  piVar11 = piVar10;
                }
              }
              uVar40 = uVar40 + 1;
              uVar37 = uVar37 + 4;
            } while (uVar4 != uVar40);
          }
LAB_00524618:
          piVar23 = (int *)*piVar23;
        } while ((piVar23 != (int *)0x0) && (bVar2 = iVar22 != 0x20, iVar22 = iVar22 + 1, bVar2));
      }
      if (!(bool)(bVar41 >> 1 & 1)) {
        uVar37 = (ulonglong)uVar4;
        uVar24 = uVar31;
        do {
          *(undefined4 *)uVar24 = 0;
          uVar37 = uVar37 - 1;
          uVar24 = uVar24 + 4;
        } while (uVar37 != 0);
        fios::lwmutex_unlock_checked(puVar6[0x16]);
        goto LAB_00524660;
      }
      fios::lwmutex_unlock_checked(puVar6[0x16]);
    }
    fios::lwmutex_lock_checked(puVar6[0x16]);
    FUN_00604788(param_1);
    if (*(int *)(param_1 + 0x1e8) == *(int *)(param_1 + 0x1e4)) {
      puVar20 = *(uint **)(puVar6 + 0x17);
      uVar37 = ZEXT48(puVar20);
      do {
        uVar40 = *puVar20;
        instructionSynchronize();
        do {
          uVar15 = *puVar20;
          if (uVar40 != *puVar20) break;
          if (in_RESERVE != '\0') {
            uVar15 = storeWordConditionalIndexed(0,0,uVar37);
            *puVar20 = uVar15;
            in_cr0 = 2;
          }
          uVar15 = uVar40;
        } while ((in_cr0 & 2) == 0);
      } while (uVar40 != uVar15);
      uVar24 = 0;
      uVar34 = 0;
      uVar39 = (ulonglong)uVar40;
      if (uVar40 == 0) goto LAB_00524744;
      while( true ) {
        puVar27 = (uint *)uVar39;
        if (puVar27 == (uint *)0x0) break;
        uVar40 = *puVar27;
        *puVar27 = 0;
        if ((puVar27[0xc] & 0x200) == 0) {
          *puVar27 = (uint)uVar24;
          uVar24 = uVar39;
          uVar39 = (ulonglong)uVar40;
        }
        else {
          *puVar27 = (uint)uVar34;
          uVar34 = uVar39;
          uVar39 = (ulonglong)uVar40;
        }
      }
      do {
        puVar27 = (uint *)uVar24;
        if (puVar27 == (uint *)0x0) goto LAB_00524860;
        uVar40 = *puVar27;
        *puVar27 = 0;
        FUN_0051d588(param_1,uVar24);
        uVar24 = (ulonglong)uVar40;
      } while (*(int *)(param_1 + 0x1e8) == *(int *)(param_1 + 0x1e4));
      if (uVar40 != 0) {
        do {
          uVar25 = uVar24;
          uVar40 = *(uint *)uVar25;
          *(uint *)uVar25 = (uint)uVar39;
          uVar24 = (ulonglong)uVar40;
          uVar39 = uVar25;
        } while (uVar40 != 0);
        do {
          uVar40 = *puVar20;
          while (uVar40 == 0) {
            if (in_RESERVE != '\0') {
              uVar40 = storeWordConditionalIndexed(uVar25,0,uVar37);
              *puVar20 = uVar40;
              in_cr0 = 2;
            }
            if ((in_cr0 & 2) != 0) goto LAB_00524860;
            uVar40 = *puVar20;
          }
          do {
            puVar27 = (uint *)*puVar20;
            instructionSynchronize();
            do {
              puVar16 = (uint *)*puVar20;
              if (puVar27 != (uint *)*puVar20) break;
              if (in_RESERVE != '\0') {
                uVar40 = storeWordConditionalIndexed(0,0,uVar37);
                *puVar20 = uVar40;
                in_cr0 = 2;
              }
              puVar16 = puVar27;
            } while ((in_cr0 & 2) == 0);
          } while (puVar27 != puVar16);
          *(uint **)(puVar6 + 0xe) = puVar27;
          if ((uint)uVar25 != 0) {
            puVar16 = local_100;
            while (puVar8 = puVar27, puVar8 != (uint *)0x0) {
              puVar16 = puVar8;
              puVar27 = (uint *)*puVar8;
            }
            *puVar16 = (uint)uVar25;
          }
          uVar25 = (ulonglong)*(uint *)(puVar6 + 0xe);
        } while( true );
      }
LAB_00524860:
      if ((uint)uVar34 == 0) goto LAB_00524744;
      FUN_00522b14(param_1,uVar34);
      FUN_00522104(param_1);
      FUN_00522c50(param_1);
      fios::lwmutex_lock_checked(iVar14);
      fios::lwmutex_lock_checked(puVar6[0x18]);
      iVar18 = *(int *)(param_1 + 0x184);
      instructionSynchronize();
    }
    else {
LAB_00524744:
      FUN_00522104(param_1);
      FUN_00522c50(param_1);
      fios::lwmutex_lock_checked(iVar14);
      fios::lwmutex_lock_checked(puVar6[0x18]);
      iVar18 = *(int *)(param_1 + 0x184);
      instructionSynchronize();
    }
    if (iVar18 != 0) {
      bVar2 = lVar38 < lVar30;
      bVar3 = lVar30 < lVar38;
      fios::lwmutex_unlock_checked(puVar6[0x18]);
      fios::lwmutex_unlock_checked(iVar14);
      fios::lwmutex_unlock_checked(puVar6[0x16]);
      FUN_00604788(param_1);
      fios::lwmutex_lock_checked(iVar14);
      cVar17 = FUN_0051cbc8(param_1);
      if (cVar17 != '\0') goto LAB_005247d0;
      goto LAB_0052439c;
    }
    iVar18 = *(int *)(param_1 + 0x20c);
    uVar37 = (ulonglong)((int)**(uint **)((int)puVar6 + 0x9c) >> 0x1f);
    uVar40 = (int)**(uint **)(puVar6 + 0x14) >> 0x1f;
    lVar36 = ((uVar37 ^ **(uint **)((int)puVar6 + 0x9c)) - uVar37) + -1 << 0x20;
    uVar28 = ((uVar40 ^ **(uint **)(puVar6 + 0x14)) - uVar40) - 1;
    instructionSynchronize();
    uVar40 = (int)**(uint **)(puVar6 + 0x15) >> 0x1f;
    uVar15 = (int)**(uint **)((int)puVar6 + 0xa4) >> 0x1f;
    uVar21 = ((uVar40 ^ **(uint **)(puVar6 + 0x15)) - uVar40) - 1;
    uVar29 = ((uVar15 ^ **(uint **)((int)puVar6 + 0xa4)) - uVar15) - 1;
    uVar15 = uVar28 >> 0x1f;
    uVar40 = uVar29 >> 0x1f;
    uVar35 = uVar21 >> 0x1f;
    if (*piVar32 == 0) {
      if (lVar36 < 0) {
        uVar15 = -((int)uVar28 >> 0x1f);
        iVar22 = -((int)uVar29 >> 0x1f);
        *(int *)(puVar6 + 0x13) = iVar22;
        uVar35 = -((int)uVar21 >> 0x1f);
        if ((((uVar15 != 0) && (iVar22 != 0)) && (iVar18 == 0)) && (uVar35 != 0)) {
          fios::lwmutex_unlock_checked(puVar6[0x18]);
          fios::lwmutex_unlock_checked(iVar14);
          fios::lwmutex_unlock_checked(puVar6[0x16]);
          return;
        }
      }
      else {
        *(uint *)(puVar6 + 0x13) = uVar40;
      }
      fios::print_tty4(PTR_s_Scheduler_thread_can_t_shut_down_0071abec);
    }
    else {
      fios::print_tty4(PTR_s_Scheduler_thread_can_t_shut_down_0071abec);
      piVar23 = (int *)*piVar32;
      iVar18 = 0;
      if (piVar23 != (int *)0x0) {
        iVar18 = 0;
        do {
          iVar18 = iVar18 + 1;
          piVar23 = (int *)*piVar23;
        } while (piVar23 != (int *)0x0);
      }
      fios::print_tty4(PTR_s__d_ops_still_in_schedule_queue_0071abbc,iVar18);
      puVar5 = (undefined4 *)*piVar32;
      fios::print_tty4(PTR_s_access_paths_for_scheduled_ops__0071abc0);
      puVar12 = PTR_s___s__0071abc4;
      puVar9 = PTR_DAT_0071abc8;
      for (; PTR_DAT_0071abc8 = puVar9, puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5)
      {
        pcVar19 = (char *)0x0;
        if (*(char *)puVar5[0xd] != '\0') {
          pcVar19 = (char *)puVar5[0xd];
        }
        fios::print_tty4(puVar12,pcVar19);
        puVar9 = PTR_DAT_0071abc8;
      }
      *(uint *)(puVar6 + 0x13) = uVar40;
      fios::print_tty4(puVar9);
    }
    if (-1 < lVar36) {
      iVar18 = 0;
      for (puVar5 = (undefined4 *)**(undefined4 **)((int)puVar6 + 0x9c); puVar5 != (undefined4 *)0x0
          ; puVar5 = (undefined4 *)*puVar5) {
        iVar18 = iVar18 + 1;
      }
      fios::print_tty4(PTR_s__d_ops_still_in_prefetch_queue___0071abcc,iVar18);
      puVar5 = (undefined4 *)**(undefined4 **)((int)puVar6 + 0x9c);
      fios::print_tty4(PTR_s_access_paths_for_prefetch_ops__0071abd0);
      puVar9 = PTR_s___s__0071abc4;
      for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
        pcVar19 = (char *)0x0;
        if (*(char *)puVar5[0xd] != '\0') {
          pcVar19 = (char *)puVar5[0xd];
        }
        fios::print_tty4(puVar9,pcVar19);
      }
      fios::print_tty4(PTR_DAT_0071abc8);
    }
    if (uVar15 == 0) {
      iVar18 = 0;
      for (puVar5 = (undefined4 *)**(undefined4 **)(puVar6 + 0x14); puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)*puVar5) {
        iVar18 = iVar18 + 1;
      }
      fios::print_tty4(PTR_s__d_ops_still_executing_0071abd4,iVar18);
      puVar5 = (undefined4 *)**(undefined4 **)(puVar6 + 0x14);
      fios::print_tty4(PTR_s_access_paths_for_executing_ops__0071abd8);
      puVar9 = PTR_s___s__0071abc4;
      for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
        pcVar19 = (char *)0x0;
        if (*(char *)puVar5[0xd] != '\0') {
          pcVar19 = (char *)puVar5[0xd];
        }
        fios::print_tty4(puVar9,pcVar19);
      }
      fios::print_tty4(PTR_DAT_0071abc8);
    }
    if (uVar35 == 0) {
      iVar22 = 0;
      for (iVar18 = **(int **)(puVar6 + 0x15); iVar18 != 0; iVar18 = *(int *)(iVar18 + 0xc)) {
        iVar22 = iVar22 + 1;
      }
      fios::print_tty4(PTR_s__d_open_filehandles_0071abdc,iVar22);
      iVar18 = **(int **)(puVar6 + 0x15);
      fios::print_tty4(PTR_s_files_currently_open__0071abe0);
      puVar9 = PTR_s___s__0071abc4;
      for (; iVar18 != 0; iVar18 = *(int *)(iVar18 + 0xc)) {
        pcVar19 = (char *)0x0;
        if (**(char **)(iVar18 + 0x30) != '\0') {
          pcVar19 = *(char **)(iVar18 + 0x30);
        }
        fios::print_tty4(puVar9,pcVar19);
      }
      fios::print_tty4(PTR_DAT_0071abc8);
    }
    if (*(int *)(puVar6 + 0x13) == 0) {
      iVar18 = 0;
      for (puVar5 = (undefined4 *)**(undefined4 **)((int)puVar6 + 0xa4); puVar5 != (undefined4 *)0x0
          ; puVar5 = (undefined4 *)*puVar5) {
        iVar18 = iVar18 + 1;
      }
      fios::print_tty4(PTR_s__d_ops_complete_but_not_yet_dele_0071abe4,iVar18);
      puVar5 = (undefined4 *)**(undefined4 **)((int)puVar6 + 0xa4);
      fios::print_tty4(PTR_s_access_paths_for_completed_ops__0071abe8);
      puVar9 = PTR_s___s__0071abc4;
      for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
        pcVar19 = (char *)0x0;
        if (*(char *)puVar5[0xd] != '\0') {
          pcVar19 = (char *)puVar5[0xd];
        }
        fios::print_tty4(puVar9,pcVar19);
      }
      fios::print_tty4(PTR_DAT_0071abc8);
    }
    piVar23 = (int *)**(undefined4 **)((int)puVar6 + 0x9c);
joined_r0x00524c28:
    if (piVar23 != (int *)0x0) {
      puVar20 = (uint *)(piVar23 + 0xc);
      **(int **)((int)puVar6 + 0x9c) = *piVar23;
      *piVar23 = 0;
      do {
        uVar40 = *puVar20;
        instructionSynchronize();
        while (uVar40 == *puVar20) {
          if (in_RESERVE != '\0') {
            uVar15 = storeWordConditionalIndexed((ulonglong)uVar40 | 0x200,0,ZEXT48(puVar20));
            *puVar20 = uVar15;
            in_cr0 = 2;
          }
          if ((in_cr0 & 2) != 0) {
            puVar5 = *(undefined4 **)((int)puVar6 + 0x9c);
            *piVar23 = *piVar32;
            *piVar32 = (int)piVar23;
            piVar23 = (int *)*puVar5;
            goto joined_r0x00524c28;
          }
        }
      } while( true );
    }
    fios::lwmutex_unlock_checked(puVar6[0x18]);
    fios::lwmutex_unlock_checked(iVar14);
    fios::lwmutex_unlock_checked(puVar6[0x16]);
    do {
      lVar36 = TBLr;
    } while ((int)lVar36 == 0);
    FUN_0052e984(puVar6[0x12] + lVar36);
    iVar18 = -0xf0;
    uVar37 = puVar6[0x12] * 3;
    uVar37 = ((longlong)uVar37 >> 1) + (ulonglong)((longlong)uVar37 < 0 && (uVar37 & 1) != 0);
    puVar6[0x10] = uVar37;
    if ((longlong)puVar6[0xf] <= (longlong)uVar37) {
      iVar18 = -0xf8;
    }
    puVar6[0x12] = *(ulonglong *)(&stack0x00000000 + iVar18);
  } while( true );
}



//==== 00525048  ns=Global  size=0x8
// sig: undefined FUN_00525048(void)
// callers(0): 
// callees(1): 005241b8 FUN_005241b8

void FUN_00525048(undefined8 param_1,undefined8 param_2)

{
  FUN_005241b8(param_2);
  return;
}



//==== 00525050  ns=Global  size=0x134
// sig: undefined FUN_00525050(void)
// callers(0): 
// callees(5): 0051ff58 FUN_0051ff58; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604738 fios::check_magic; 00604788 FUN_00604788
// strings: 00525104: '}+Kxy)' (raw)

void FUN_00525050(int param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  
  cVar4 = FUN_00604788(param_1);
  if ((cVar4 != '\0') && (cVar4 = fios::check_magic(param_2), cVar4 != '\0')) {
    fios::lwmutex_lock_checked(param_1 + 0x38);
    if (param_2 != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(param_1 + 0x210);
      puVar2 = (undefined4 *)(param_1 + 0x210);
      while (puVar1 = puVar3, param_2 != puVar1) {
        if (puVar1 == (undefined4 *)0x0) goto LAB_00525148;
        puVar2 = puVar1;
        puVar3 = (undefined4 *)*puVar1;
      }
      if (param_2 != (undefined4 *)0x0) {
        *(undefined8 *)(param_2 + 2) = param_3;
        *puVar2 = *param_2;
        *(undefined1 *)(param_2 + 4) = param_4;
        *param_2 = 0;
        FUN_0051ff58(param_1,param_2);
      }
    }
LAB_00525148:
    fios::lwmutex_unlock_checked(param_1 + 0x38);
  }
  return;
}



//==== 00525184  ns=Global  size=0x98
// sig: undefined FUN_00525184(void)
// callers(0): 
// callees(4): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604738 fios::check_magic; 00604788 FUN_00604788

undefined8 FUN_00525184(int param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00604788(param_1);
  uVar2 = 0;
  if (cVar1 != '\0') {
    cVar1 = fios::check_magic(param_2);
    if (cVar1 != '\0') {
      fios::lwmutex_lock_checked(param_1 + 0x38);
      uVar2 = *(undefined8 *)(param_2 + 200);
      fios::lwmutex_unlock_checked(param_1 + 0x38);
    }
  }
  return uVar2;
}



//==== 0052521c  ns=fios  size=0x308
// sig: undefined read_req_setup(void)
// callers(11): 000dcf58 loaders::NAVG_LoadFile; 00503e00 fios::LoadAssetFromFile; 00503f8c FUN_00503f8c; 00504468 FUN_00504468; 0050476c FUN_0050476c; 00506854 FUN_00506854; 00506d20 FUN_00506d20; 00507f68 fios::read_file_sync; 00533140 FUN_00533140; 005344e8 FUN_005344e8; 00535840 FUN_00535840
// callees(6): 0051cfd8 fios::op_alloc; 0051fe9c fios::op_complete_immediate; 0051ff58 FUN_0051ff58; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604760 fios::check_magic

undefined4
fios::read_req_setup
          (int param_1,int param_2,int param_3,undefined4 param_4,longlong param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char cVar7;
  undefined4 uVar6;
  char *pcVar8;
  undefined8 uVar9;
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
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar5 = op_alloc(param_1,param_2);
  uVar6 = 0;
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0xc0) = param_4;
    *(undefined4 *)(iVar5 + 0x90) = param_4;
    *(longlong *)(iVar5 + 0x80) = param_5;
    *(longlong *)(iVar5 + 0xa8) = param_5;
    *(longlong *)(iVar5 + 0x70) = param_6;
    *(longlong *)(iVar5 + 0xb8) = param_6;
    cVar7 = check_magic(param_3);
    if ((cVar7 == '\0') || (*(int *)(param_3 + 8) != param_1)) {
      *(undefined4 *)(iVar5 + 0x44) = 0x80010706;
      uVar6 = op_complete_immediate(param_1,iVar5);
    }
    else if ((*(uint *)(param_3 + 0x50) & 1) == 0) {
      *(undefined4 *)(iVar5 + 0x44) = 0x8001070e;
      uVar6 = op_complete_immediate(param_1,iVar5);
    }
    else if (param_6 < -1) {
      *(undefined4 *)(iVar5 + 0x44) = 0x8001070b;
      uVar6 = op_complete_immediate(param_1,iVar5);
    }
    else if ((param_5 < 0) || ((param_2 != 0 && ((*(uint *)(param_2 + 0x14) & 0x3000) != 0)))) {
      *(undefined4 *)(iVar5 + 0x44) = 0x80010707;
      uVar6 = op_complete_immediate(param_1,iVar5);
    }
    else {
      lwmutex_lock_checked(param_1 + 0x138);
      if (param_6 == -1) {
        param_6 = *(longlong *)(param_3 + 0x40);
        if (param_5 + param_6 < *(longlong *)(param_3 + 0x48)) {
          *(undefined8 *)(param_3 + 0x40) = local_70;
        }
        else {
          *(longlong *)(param_3 + 0x40) = *(longlong *)(param_3 + 0x48);
        }
      }
      uVar3 = *(undefined4 *)(param_3 + 0x10);
      *(int *)(param_3 + 0x54) = *(int *)(param_3 + 0x54) + 1;
      uVar6 = *(undefined4 *)(param_3 + 0x28);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar9 = *(undefined8 *)(param_3 + 0x20);
      lwmutex_unlock_checked(param_1 + 0x138);
      if ((*(uint *)(param_3 + 0x50) & 0x300) == 0) {
        pcVar4 = *(char **)(param_3 + 0x30);
        *(undefined4 *)(iVar5 + 0x40) = 10;
        *(undefined4 *)(iVar5 + 0xd0) = 1;
        cVar7 = *pcVar4;
      }
      else {
        pcVar4 = *(char **)(param_3 + 0x30);
        *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0xe;
        *(undefined4 *)(iVar5 + 0xd0) = 1;
        *(undefined4 *)(iVar5 + 0x40) = 10;
        cVar7 = *pcVar4;
      }
      pcVar8 = (char *)0x0;
      if (cVar7 != '\0') {
        pcVar8 = pcVar4;
      }
      *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(param_3 + 0x34);
      *(int *)(iVar5 + 0xa0) = param_3;
      *(undefined4 *)(iVar5 + 0x50) = uVar3;
      *(undefined8 *)(iVar5 + 0x60) = uVar9;
      *(undefined4 *)(iVar5 + 0x68) = uVar6;
      *(char **)(iVar5 + 0x48) = pcVar8;
      *(undefined4 *)(iVar5 + 0x54) = uVar1;
      *(undefined4 *)(iVar5 + 0x58) = uVar2;
      *(longlong *)(iVar5 + 0xb8) = param_6;
      *(longlong *)(iVar5 + 0x70) = param_6;
      uVar6 = FUN_0051ff58(param_1,iVar5);
    }
  }
  return uVar6;
}



//==== 00525524  ns=Global  size=0x2d4
// sig: undefined FUN_00525524(void)
// callers(6): 00504218 FUN_00504218; 00533140 FUN_00533140; 00533ae0 FUN_00533ae0; 00533e7c FUN_00533e7c; 005344e8 FUN_005344e8; 00535d38 FUN_00535d38
// callees(6): 0051cfd8 fios::op_alloc; 0051fe9c fios::op_complete_immediate; 0051ff58 FUN_0051ff58; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604760 fios::check_magic

undefined4
FUN_00525524(int param_1,undefined8 param_2,int param_3,undefined4 param_4,longlong param_5,
            longlong param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char cVar7;
  undefined4 uVar6;
  char *pcVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong local_80 [2];
  
  iVar5 = fios::op_alloc(param_1);
  uVar6 = 0;
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0xc0) = param_4;
    *(undefined4 *)(iVar5 + 0x90) = param_4;
    *(longlong *)(iVar5 + 0x80) = param_5;
    *(longlong *)(iVar5 + 0xa8) = param_5;
    *(longlong *)(iVar5 + 0x70) = param_6;
    *(longlong *)(iVar5 + 0xb8) = param_6;
    cVar7 = fios::check_magic(param_3);
    if ((cVar7 == '\0') || (*(int *)(param_3 + 8) != param_1)) {
      *(undefined4 *)(iVar5 + 0x44) = 0x80010706;
      uVar6 = fios::op_complete_immediate(param_1,iVar5);
    }
    else if (((((*(int *)(param_3 + 0x10) == *(int *)PTR_DAT_0071ab30) &&
               (*(int *)(param_3 + 0x14) == *(int *)(PTR_DAT_0071ab30 + 4))) &&
              (*(int *)(param_3 + 0x18) == *(int *)(PTR_DAT_0071ab30 + 8))) &&
             ((*(longlong *)(param_3 + 0x20) == *(longlong *)(PTR_DAT_0071ab30 + 0x10) &&
              (*(int *)(param_3 + 0x28) == *(int *)(PTR_DAT_0071ab30 + 0x18))))) ||
            ((*(uint *)(param_3 + 0x50) & 2) == 0)) {
      *(undefined4 *)(iVar5 + 0x44) = 0x80010710;
      uVar6 = fios::op_complete_immediate(param_1,iVar5);
    }
    else if (param_5 < 0) {
      *(undefined4 *)(iVar5 + 0x44) = 0x80010707;
      uVar6 = fios::op_complete_immediate(param_1,iVar5);
    }
    else {
      fios::lwmutex_lock_checked(param_1 + 0x138);
      if (param_6 == -1) {
        param_6 = *(longlong *)(param_3 + 0x40);
        *(longlong *)(param_3 + 0x40) = param_5 + param_6;
      }
      uVar6 = *(undefined4 *)(param_3 + 0x28);
      iVar1 = *(int *)(param_3 + 0x10);
      uVar2 = *(undefined4 *)(param_3 + 0x14);
      uVar3 = *(undefined4 *)(param_3 + 0x18);
      uVar10 = *(undefined8 *)(param_3 + 0x20);
      if ((*(uint *)(param_3 + 0x50) & 2) != 0) {
        plVar9 = (longlong *)(param_3 + 0x48);
        local_80[0] = param_6 + param_5;
        if (*plVar9 < local_80[0]) {
          plVar9 = local_80;
        }
        *(longlong *)(param_3 + 0x48) = *plVar9;
      }
      *(int *)(param_3 + 0x54) = *(int *)(param_3 + 0x54) + 1;
      fios::lwmutex_unlock_checked(param_1 + 0x138);
      pcVar4 = *(char **)(param_3 + 0x30);
      *(undefined4 *)(iVar5 + 0x40) = 0xb;
      pcVar8 = (char *)0x0;
      if (*pcVar4 != '\0') {
        pcVar8 = pcVar4;
      }
      *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(param_3 + 0x34);
      *(int *)(iVar5 + 0x50) = iVar1;
      *(undefined8 *)(iVar5 + 0x60) = uVar10;
      *(undefined4 *)(iVar5 + 0x68) = uVar6;
      *(int *)(iVar5 + 0xa0) = param_3;
      *(char **)(iVar5 + 0x48) = pcVar8;
      *(undefined4 *)(iVar5 + 0xd0) = 1;
      *(undefined4 *)(iVar5 + 0x54) = uVar2;
      *(undefined4 *)(iVar5 + 0x58) = uVar3;
      *(longlong *)(iVar5 + 0xb8) = param_6;
      *(longlong *)(iVar5 + 0x70) = param_6;
      uVar6 = FUN_0051ff58(param_1,iVar5);
    }
  }
  return uVar6;
}



//==== 005257f8  ns=Global  size=0xd4
// sig: undefined FUN_005257f8(void)
// callers(0): 
// callees(4): 0052dcf0 FUN_0052dcf0; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604788 FUN_00604788

void FUN_005257f8(int param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  cVar4 = FUN_00604788(param_1);
  if (cVar4 != '\0') {
    fios::lwmutex_lock_checked(param_1 + 0xe0);
    puVar1 = (uint *)(param_1 + 0x1c8);
    instructionSynchronize();
    if (*puVar1 != 0) {
      do {
        uVar2 = *puVar1;
        instructionSynchronize();
        while (uVar2 == *puVar1) {
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed((ulonglong)uVar2 - 1,0,ZEXT48(puVar1));
            *puVar1 = uVar3;
            in_cr0 = 2;
          }
          if ((in_cr0 & 2) != 0) {
            *(undefined1 *)(param_1 + 0x17c) = 1;
            FUN_0052dcf0(param_1 + 0x108);
            goto LAB_005258a4;
          }
        }
      } while( true );
    }
LAB_005258a4:
    fios::lwmutex_unlock_checked(param_1 + 0xe0);
  }
  return;
}



//==== 005258cc  ns=Global  size=0x67c
// sig: undefined FUN_005258cc(void)
// callers(2): 0051dcc4 FUN_0051dcc4; 0051e6cc FUN_0051e6cc
// callees(19): 005107d0 fios::handle_invalidate_magic; 0051a480 FUN_0051a480; 0051b318 FUN_0051b318; 0051cba4 FUN_0051cba4; 005238c0 FUN_005238c0; 0052cbd8 fios::print_tty4; 0052ced8 FUN_0052ced8; 0052d018 FUN_0052d018; 0052d0e8 FUN_0052d0e8; 0052dcf0 FUN_0052dcf0; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 0052df14 FUN_0052df14; 0052e5f8 FUN_0052e5f8; 005390ac fios::handle_destroy; 00604710 FUN_00604710; 00604738 fios::check_magic; 00604760 fios::check_magic; 00604788 FUN_00604788
// strings: 00667b88: 'Scheduler shutting down\n' | 00667ba8: '  Total ops completed: %d\n' | 00667bc8: '  Ops completed by overlap: %d\n' | 00667be8: '  Emax = %lld ms\n' | 00667c00: '  Variables:\n' | 00667c10: '  %s = %lld us\n'

void FUN_005258cc(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  char cVar6;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  double dVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  
  *param_1 = PTR_PTR_0071ab34;
  FUN_00604788(param_1);
  if (*PTR_PTR_0071ab7c == '\0') {
    fios::print_tty4(PTR_s_Scheduler_shutting_down_0071ab80);
    instructionSynchronize();
    fios::print_tty4(PTR_s_Total_ops_completed___d_0071ab84,param_1[0x8a]);
    fios::print_tty4(PTR_s_Ops_completed_by_overlap___d_0071ab88,param_1[0x8c]);
    dVar15 = *(double *)PTR_DAT_0071ab1c;
    dVar12 = (double)*(longlong *)(param_1 + 0x7c) / dVar15;
    if ((double)DAT_0071ab28 <= dVar12) {
      uVar13 = (longlong)(dVar12 - (double)DAT_0071ab28) ^ 0x8000000000000000;
    }
    else {
      uVar13 = (ulonglong)dVar12;
    }
    fios::print_tty4(PTR_s_Emax____lld_ms_0071ab8c,(longlong)(uVar13 + 999999) / 1000000);
    fios::print_tty4(PTR_s_Variables__0071ab90);
    puVar2 = PTR_s__s____lld_us_0071ab94;
    piVar4 = (int *)param_1[0x58];
    if (piVar4[0x23] != 0) {
      dVar12 = (double)DAT_0071ab28;
      uVar13 = 0;
      do {
        uVar5 = (*(code *)**(undefined4 **)(*piVar4 + 0xc))(piVar4,uVar13 & 0xffffffff);
        dVar14 = (double)*(longlong *)((int)((uVar13 & 0xffffffff) << 3) + param_1[0x7b]) / dVar15;
        if (dVar14 < dVar12) {
          uVar7 = (ulonglong)dVar14;
        }
        else {
          uVar7 = (longlong)(dVar14 - dVar12) ^ 0x8000000000000000;
        }
        fios::print_tty4(puVar2,uVar5,(longlong)(uVar7 + 999) / 1000);
        piVar4 = (int *)param_1[0x58];
        uVar7 = uVar13 + 1;
        uVar13 = uVar13 + 1;
      } while ((uVar7 & 0xffffffff) < (ulonglong)(uint)piVar4[0x23]);
    }
  }
  else {
    piVar4 = (int *)param_1[0x58];
  }
  cVar6 = FUN_00604710(piVar4);
  if ((cVar6 != '\0') && (puVar3 = (undefined4 *)FUN_0051a480(param_1[0x58]), param_1 == puVar3)) {
    FUN_0051b318(param_1[0x58],0);
  }
  if (*(char *)(param_1 + 0x33) != '\0') {
    FUN_0052ced8(param_1 + 0x28);
  }
  iVar9 = param_1[0x7e];
  if (iVar9 != 0) {
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10180103,0,0);
  }
  iVar9 = param_1[0x7b];
  if (iVar9 != 0) {
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10170103,0,0);
  }
  puVar3 = param_1 + 0x62;
  if (param_1[0x8d] != 0) {
    fios::lwmutex_lock_checked(puVar3);
    iVar9 = param_1[0x5e];
    *(undefined1 *)(param_1 + 0x6c) = 0;
    if (iVar9 != 0) {
      iVar11 = 0;
      do {
        iVar1 = iVar11 * 0x40;
        iVar11 = iVar11 + 1;
        FUN_0052dcf0(*(undefined4 *)(iVar1 + param_1[0x8d] + 8));
      } while (iVar9 != iVar11);
    }
    fios::lwmutex_unlock_checked(puVar3);
    uVar10 = param_1[0x5e];
    if (uVar10 == 0) {
      iVar9 = param_1[0x8d];
    }
    else {
      uVar8 = 0;
      iVar9 = param_1[0x8d];
      do {
        uVar13 = (ulonglong)uVar8;
        uVar8 = uVar8 + 1;
        iVar1 = (int)((uVar13 & 0x3ffffff) << 6);
        iVar11 = *(int *)(iVar1 + iVar9 + 4);
        if (iVar11 != 0) {
          FUN_0052ced8(iVar11);
          FUN_0052d018(*(undefined4 *)(iVar1 + param_1[0x8d] + 4));
          FUN_0052d0e8(*(undefined4 *)(iVar1 + param_1[0x8d] + 8));
          iVar9 = param_1[0x8d];
        }
      } while (uVar10 != uVar8);
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10160103,0,0);
  }
  iVar9 = param_1[0x5c];
  if (iVar9 != 0) {
    if (param_1[0x5a] != 0) {
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        fios::check_magic(iVar9);
        fios::handle_destroy(iVar9);
        iVar9 = iVar9 + 0x58;
      } while (uVar10 < (uint)param_1[0x5a]);
      iVar9 = param_1[0x5c];
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10140103,0,0);
  }
  iVar9 = param_1[0x5b];
  if (iVar9 != 0) {
    if (param_1[0x59] != 0) {
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        fios::check_magic(iVar9);
        iVar9 = iVar9 + 0xe8;
      } while (uVar10 < (uint)param_1[0x59]);
      iVar9 = param_1[0x5b];
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10130103,0,0);
  }
  FUN_0052df14(puVar3);
  FUN_0052df14(param_1 + 0x4e);
  FUN_0052d0e8(param_1 + 0x48);
  FUN_0052d0e8(param_1 + 0x42);
  FUN_0052df14(param_1 + 0x38);
  FUN_0052d018(param_1 + 0x28);
  FUN_0052df14(param_1 + 0x1e);
  FUN_0052e5f8(param_1 + 0x18);
  FUN_0052df14(param_1 + 0xe);
  FUN_0052df14(param_1 + 4);
  fios::handle_invalidate_magic(param_1 + 1);
  return;
}



//==== 00525f48  ns=Global  size=0x164
// sig: undefined FUN_00525f48(void)
// callers(0): 
// callees(7): 0051cbc8 FUN_0051cbc8; 005231cc FUN_005231cc; 0052dcf0 FUN_0052dcf0; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 0052e49c FUN_0052e49c; 00604788 FUN_00604788

void FUN_00525f48(int param_1)

{
  longlong lVar1;
  int iVar3;
  ulonglong uVar2;
  char cVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  cVar4 = FUN_00604788(param_1);
  if (cVar4 != '\0') {
    iVar3 = param_1 + 0xe0;
    fios::lwmutex_lock_checked(iVar3);
    sync(1);
    *(undefined4 *)(param_1 + 0x184) = 0;
    FUN_0052dcf0(param_1 + 0x108);
    fios::lwmutex_unlock_checked(iVar3);
    FUN_005231cc(param_1,0);
    fios::lwmutex_lock_checked(iVar3);
    dVar7 = (double)DAT_0071ab28;
    dVar6 = (double)DAT_0071ab78;
    dVar8 = *(double *)PTR_DAT_0071ab1c;
    while( true ) {
      cVar4 = FUN_0051cbc8(param_1);
      if (cVar4 != '\0') break;
      do {
        lVar1 = TBLr;
      } while ((int)lVar1 == 0);
      dVar5 = dVar8 * dVar6;
      if (dVar5 < dVar7) {
        uVar2 = (ulonglong)dVar5;
      }
      else {
        uVar2 = (longlong)(dVar5 - dVar7) ^ 0x8000000000000000;
      }
      FUN_0052e49c(param_1 + 0x120,iVar3,lVar1 + uVar2);
    }
    fios::lwmutex_unlock_checked(iVar3);
  }
  return;
}



//==== 005260ac  ns=Global  size=0x118
// sig: undefined FUN_005260ac(void)
// callers(2): 00531ce8 FUN_00531ce8; 00533ae0 FUN_00533ae0
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00667e50: '%09.4f: %14s               off=$%016llX, len=$%08llX, cacheID=%s, index=$%08X\n'

void FUN_005260ac(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  ulonglong uVar4;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  dVar3 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar3) {
    uVar4 = (longlong)(dVar3 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar4 = (ulonglong)dVar3;
  }
  uVar4 = (longlong)(uVar4 + 999) / 1000;
  uVar2 = ((uVar4 & 0x7ff) + 0x7ff | uVar4) & 0xfffffffffffff800;
  if (((longlong)uVar4 >> 0x35) + 1U < 2) {
    uVar2 = uVar4;
  }
  fios::print_tty4((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_off___016llX__len___0071abf0,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),param_5,param_2,param_3,param_1,
                   param_4);
  return;
}



//==== 005261c4  ns=Global  size=0x120
// sig: undefined FUN_005261c4(void)
// callers(0): 
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00667ea0: '%09.4f: %14s op $%08X, %-14s off=$%016llX              %s\n'

void FUN_005261c4(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar2 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar2 = uVar5;
  }
  fios::print_tty4((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X____14s_off_0071ac00,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_DAT_0071ac04,uVar3,param_2,
                   param_3,param_4);
  return;
}



//==== 005262e4  ns=Global  size=0x120
// sig: undefined FUN_005262e4(void)
// callers(0): 
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00667ee8: '%09.4f: %14s op $%08X, %-14s len=$%08llX                      %s\n'

void FUN_005262e4(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar2 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar2 = uVar5;
  }
  fios::print_tty4((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X____14s_len_0071ac08,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_DAT_0071ac04,uVar3,param_2,
                   param_3,param_4);
  return;
}



//==== 00526404  ns=Global  size=0x118
// sig: undefined FUN_00526404(void)
// callers(5): 005283d4 FUN_005283d4; 00528598 FUN_00528598; 00528f00 FUN_00528f00; 00528fc8 FUN_00528fc8; 00529808 FUN_00529808
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00667f30: '%09.4f: %14s op $%08X, %-49s %s\n'

void FUN_00526404(int param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar2 = 0xffffffff;
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar3 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar3 = uVar5;
  }
  fios::print_tty4((double)((float)(longlong)uVar3 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X____49s__s_0071ac0c,
                   (double)((float)(longlong)uVar3 / DAT_0071abfc),PTR_DAT_0071ac04,uVar2,param_2,
                   param_3);
  return;
}



//==== 0052651c  ns=Global  size=0x120
// sig: undefined FUN_0052651c(void)
// callers(0): 
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00667f58: '%09.4f: %14s op $%08X, %-49s %-30s\n'

void FUN_0052651c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar2 = 0xffffffff;
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar3 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar3 = uVar5;
  }
  fios::print_tty4((double)((float)(longlong)uVar3 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X____49s___3_0071ac10,
                   (double)((float)(longlong)uVar3 / DAT_0071abfc),param_2,uVar2,param_3,param_4);
  return;
}



//==== 0052663c  ns=Global  size=0x138
// sig: undefined FUN_0052663c(void)
// callers(1): 00514124 FUN_00514124
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00667f88: '%09.4f: %14s op $%08X,                                                   %s\n' | 00667fd8: 'psarc-dend'

void FUN_0052663c(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar2 = 0xffffffff;
  pcVar3 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    pcVar3 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar3 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar4 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar4 = uVar6;
  }
  fios::print_tty4((double)((float)(longlong)uVar4 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X___s_0071ac18,
                   (double)((float)(longlong)uVar4 / DAT_0071abfc),PTR_s_psarc_dend_0071ac1c,uVar2,
                   pcVar3);
  return;
}



//==== 00526774  ns=Global  size=0x140
// sig: undefined FUN_00526774(void)
// callers(1): 00514124 FUN_00514124
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00667fe8: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX,             %s\n' | 00668030: 'psarc-dstart'

void FUN_00526774(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  pcVar4 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    pcVar4 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar4 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar2 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar2 = uVar6;
  }
  fios::print_tty4((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac20,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_psarc_dstart_0071ac24,uVar3
                   ,param_2,param_3,pcVar4);
  return;
}



//==== 005268b4  ns=Global  size=0x140
// sig: undefined FUN_005268b4(void)
// callers(1): 00514124 FUN_00514124
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00667fe8: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX,             %s\n' | 00668040: 'psarc-uread'

void FUN_005268b4(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  pcVar4 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    pcVar4 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar4 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar2 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar2 = uVar6;
  }
  fios::print_tty4((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac20,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_psarc_uread_0071ac28,uVar3,
                   param_2,param_3,pcVar4);
  return;
}



//==== 005269f4  ns=Global  size=0x140
// sig: undefined FUN_005269f4(void)
// callers(1): 00514124 FUN_00514124
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00667fe8: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX,             %s\n' | 00668050: 'psarc-cread'

void FUN_005269f4(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  pcVar4 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    pcVar4 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar4 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar2 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar2 = uVar6;
  }
  fios::print_tty4((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac20,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_psarc_cread_0071ac2c,uVar3,
                   param_2,param_3,pcVar4);
  return;
}



//==== 00526b34  ns=Global  size=0x110
// sig: undefined FUN_00526b34(void)
// callers(0): 
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00668060: '%09.4f: %14s op $%08X, RETRY\n'

void FUN_00526b34(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar2 = 0xffffffff;
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar3 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar3 = uVar5;
  }
  fios::print_tty4((double)((float)(longlong)uVar3 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__RETRY_0071ac30,
                   (double)((float)(longlong)uVar3 / DAT_0071abfc),PTR_DAT_0071ac04,uVar2);
  return;
}



//==== 00526c44  ns=Global  size=0x114
// sig: undefined FUN_00526c44(void)
// callers(1): 00529808 FUN_00529808
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00668080: '%09.4f: %14s op $%08X, MEDIA CHECK caused by err = 0x%08X\n'

void FUN_00526c44(int param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar2 = 0xffffffff;
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar3 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar3 = uVar5;
  }
  fios::print_tty4((double)((float)(longlong)uVar3 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__MEDIA_CHE_0071ac34,
                   (double)((float)(longlong)uVar3 / DAT_0071abfc),PTR_DAT_0071ac04,uVar2,param_2);
  return;
}



//==== 00526d58  ns=Global  size=0x128
// sig: undefined FUN_00526d58(void)
// callers(2): 00535d38 FUN_00535d38; 0053750c FUN_0053750c
// callees(1): 0052cbd8 fios::print_tty4
// strings: 006680c0: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX, cacheID=%s, index=$%08X\n' | 00668110: 'cache-evict'

void FUN_00526d58(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar2 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar2 = uVar5;
  }
  fios::print_tty4((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac38,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_cache_evict_0071ac3c,uVar3,
                   param_3,param_4,param_2,param_5);
  return;
}



//==== 00526e80  ns=Global  size=0x128
// sig: undefined FUN_00526e80(void)
// callers(0): 
// callees(1): 0052cbd8 fios::print_tty4
// strings: 006680c0: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX, cacheID=%s, index=$%08X\n' | 00668120: 'cache-hit'

void FUN_00526e80(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar2 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar2 = uVar5;
  }
  fios::print_tty4((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac38,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_cache_hit_0071ac40,uVar3,
                   param_3,param_4,param_2,param_5);
  return;
}



//==== 00526fa8  ns=fios  size=0x33c
// sig: undefined op_trace_complete(void)
// callers(2): 0051fe9c fios::op_complete_immediate; 005224a4 FUN_005224a4
// callees(1): 0052cbd8 fios::print_tty4
// strings: 006683b0: '%09.4f: %14s op $%08X, err = $%08X / %-26s      %s\n' | 006683e8: 'completed' | 00668160: 'CELL_FIOS_NOERROR'

void fios::op_trace_complete(int param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined *puVar4;
  ulonglong uVar5;
  double dVar6;
  ulonglong uVar7;
  
  do {
    lVar2 = TBLr;
  } while ((int)lVar2 == 0);
  iVar1 = *(int *)(param_1 + 0x44);
  puVar4 = PTR_s_CELL_FIOS_ERROR_BADOFFSET_0071ac78;
  if (iVar1 == -0x7ffef8f5) {
LAB_005270d4:
    pcVar3 = *(char **)(param_1 + 0x34);
    if (*pcVar3 != '\0') goto LAB_005270ec;
LAB_00527088:
    dVar6 = (double)lVar2 / *(double *)PTR_DAT_0071abf4;
    pcVar3 = PTR_DAT_0071ac9c;
    if ((double)DAT_0071abf8 <= dVar6) goto LAB_005270b0;
  }
  else {
    if (-0x7ffef8f5 < iVar1) {
      puVar4 = PTR_s_CELL_FIOS_ERROR_READONLY_0071ac8c;
      if (iVar1 != -0x7ffef8f0) {
        if (iVar1 < -0x7ffef8ef) {
          puVar4 = PTR_s_CELL_FIOS_ERROR_PLATFORM_0071ac80;
          if ((((iVar1 != -0x7ffef8f3) &&
               (puVar4 = PTR_s_CELL_FIOS_ERROR_BADCALLBACK_0071ac7c, -0x7ffef8f4 < iVar1)) &&
              (puVar4 = PTR_s_CELL_FIOS_ERROR_ACCESS_0071ac84, iVar1 != -0x7ffef8f2)) &&
             (puVar4 = PTR_s_CELL_FIOS_ERROR_DECOMPRESSION_0071ac88, iVar1 != -0x7ffef8f1))
          goto LAB_0052706c;
        }
        else {
          puVar4 = PTR_s_CELL_FIOS_ERROR_MEDIAGONE_0071ac98;
          if (iVar1 != -0x7ffef8ed) {
            if (iVar1 < -0x7ffef8ec) {
              puVar4 = PTR_s_CELL_FIOS_ERROR_NOBLOCK_0071ac90;
              if ((iVar1 == -0x7ffef8ef) ||
                 (puVar4 = PTR_s_CELL_FIOS_ERROR_NOPATH_0071ac94, iVar1 == -0x7ffef8ee))
              goto LAB_005270d4;
            }
            else {
              puVar4 = PTR_s_CELL_FIOS_ERROR_CANTIMMED_0071ac44;
              if ((iVar1 == -0x7ffef8ec) || (puVar4 = PTR_s_CELL_FIOS_NOERROR_0071ac4c, iVar1 == 0))
              goto LAB_005270d4;
            }
            goto LAB_0052706c;
          }
        }
      }
      goto LAB_005270d4;
    }
    puVar4 = PTR_s_CELL_FIOS_ERROR_BADPATH_0071ac60;
    if (iVar1 == -0x7ffef8fb) goto LAB_005270d4;
    if (-0x7ffef8fb < iVar1) {
      puVar4 = PTR_s_CELL_FIOS_ERROR_CANCELLED_0071ac6c;
      if (iVar1 != -0x7ffef8f8) {
        if (iVar1 < -0x7ffef8f7) {
          puVar4 = PTR_s_CELL_FIOS_ERROR_BADHANDLE_0071ac64;
          if ((iVar1 == -0x7ffef8fa) ||
             (puVar4 = PTR_s_CELL_FIOS_ERROR_BADPARAM_0071ac68, iVar1 == -0x7ffef8f9))
          goto LAB_005270d4;
        }
        else {
          puVar4 = PTR_s_CELL_FIOS_ERROR_EOF_0071ac70;
          if ((iVar1 == -0x7ffef8f7) ||
             (puVar4 = PTR_s_CELL_FIOS_ERROR_NOMEM_0071ac74, iVar1 == -0x7ffef8f6))
          goto LAB_005270d4;
        }
        goto LAB_0052706c;
      }
      goto LAB_005270d4;
    }
    puVar4 = PTR_s_CELL_FIOS_ERROR_UNKNOWNCALLBACKE_0071ac54;
    if (iVar1 == -0x7ffef8fe) goto LAB_005270d4;
    if (iVar1 < -0x7ffef8fd) {
      puVar4 = PTR_s_CELL_FIOS_ERROR_INPROGRESS_0071ac50;
      if (iVar1 == -0x7ffef8ff) goto LAB_005270d4;
    }
    else {
      puVar4 = PTR_s_CELL_FIOS_ERROR_NOTREADY_0071ac58;
      if ((iVar1 == -0x7ffef8fd) ||
         (puVar4 = PTR_s_CELL_FIOS_ERROR_TIMEOUT_0071ac5c, iVar1 == -0x7ffef8fc)) goto LAB_005270d4;
    }
LAB_0052706c:
    pcVar3 = *(char **)(param_1 + 0x34);
    puVar4 = PTR_s_UNKNOWN_ERROR_0071ac48;
    if (*pcVar3 == '\0') goto LAB_00527088;
LAB_005270ec:
    dVar6 = (double)lVar2 / *(double *)PTR_DAT_0071abf4;
    if ((double)DAT_0071abf8 <= dVar6) {
LAB_005270b0:
      uVar7 = (longlong)(dVar6 - (double)DAT_0071abf8) ^ 0x8000000000000000;
      goto LAB_0052711c;
    }
  }
  uVar7 = (ulonglong)dVar6;
LAB_0052711c:
  uVar7 = (longlong)(uVar7 + 999) / 1000;
  uVar5 = ((uVar7 & 0x7ff) + 0x7ff | uVar7) & 0xfffffffffffff800;
  if (((longlong)uVar7 >> 0x35) + 1U < 2) {
    uVar5 = uVar7;
  }
  print_tty4((double)((float)(longlong)uVar5 / DAT_0071abfc),
             PTR_s__09_4f___14s_op___08X__err_____0_0071aca0,
             (double)((float)(longlong)uVar5 / DAT_0071abfc),PTR_s_completed_0071aca4,
             *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x44),puVar4,pcVar3);
  return;
}



//==== 005272e4  ns=Global  size=0x298
// sig: undefined FUN_005272e4(void)
// callers(2): 0052757c FUN_0052757c; 00527584 FUN_00527584
// callees(2): 0052cbd8 fios::print_tty4; 005cd198 FUN_005cd198
// strings: 00668460: '%09.4f: %14s op $%08X, %-10s %-39s%s\n' | 00668418: 'off=$%016llX, len=$%08llX' | 006683f8: 'off=$%016llX, len=max,       ' | 00668438: 'off=$%016llX,                '

void FUN_005272e4(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  undefined1 local_80 [96];
  
  uVar7 = 0x11;
  if ((((*(int *)(param_1 + 0xd0) - 9U < 3) || (uVar7 = *(uint *)(param_1 + 0x40), uVar7 == 0x11))
      || (uVar7 == 10)) || (uVar7 == 0xb)) {
    if (*(longlong *)(param_1 + 0x80) == 0x7fffffffffffffff) {
      FUN_005cd198(local_80,0x50,PTR_s_off___016llX__len_max__0071aca8,
                   *(undefined8 *)(param_1 + 0x70));
    }
    else {
      FUN_005cd198(local_80,0x50,PTR_s_off___016llX__len___08llX_0071acac,
                   *(undefined8 *)(param_1 + 0x70));
    }
LAB_0052741c:
    do {
      lVar5 = TBLr;
    } while ((int)lVar5 == 0);
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    dVar8 = *(double *)PTR_DAT_0071abf4;
    if (uVar7 < 0x14) goto LAB_00527378;
LAB_0052743c:
    pcVar1 = *(char **)(param_1 + 0x34);
    puVar3 = PTR_s_UNKNOWN_0071acb4;
    if (*pcVar1 == '\0') goto LAB_005273a0;
LAB_00527458:
    dVar9 = (double)DAT_0071abf8;
    dVar8 = (double)lVar5 / dVar8;
    if (dVar8 < dVar9) {
LAB_0052747c:
      uVar4 = (ulonglong)dVar8;
      goto LAB_00527488;
    }
  }
  else {
    if (uVar7 == 5) {
      FUN_005cd198(local_80,0x50,PTR_s_off___016llX__0071acb0,*(undefined8 *)(param_1 + 0x70));
      uVar7 = 5;
      goto LAB_0052741c;
    }
    do {
      lVar5 = TBLr;
    } while ((int)lVar5 == 0);
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    dVar8 = *(double *)PTR_DAT_0071abf4;
    if (0x13 < uVar7) goto LAB_0052743c;
LAB_00527378:
    pcVar1 = *(char **)(param_1 + 0x34);
    puVar3 = *(undefined **)(PTR_PTR_0071acb8 + uVar7 * 4);
    if (*pcVar1 != '\0') goto LAB_00527458;
LAB_005273a0:
    dVar9 = (double)DAT_0071abf8;
    dVar8 = (double)lVar5 / dVar8;
    pcVar1 = PTR_DAT_0071ac14;
    if (dVar8 < dVar9) goto LAB_0052747c;
  }
  uVar4 = (longlong)(dVar8 - dVar9) ^ 0x8000000000000000;
LAB_00527488:
  uVar4 = (longlong)(uVar4 + 999) / 1000;
  uVar6 = ((uVar4 & 0x7ff) + 0x7ff | uVar4) & 0xfffffffffffff800;
  if (((longlong)uVar4 >> 0x35) + 1U < 2) {
    uVar6 = uVar4;
  }
  fios::print_tty4((double)((float)(longlong)uVar6 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X____10s___3_0071acbc,
                   (double)((float)(longlong)uVar6 / DAT_0071abfc),param_2,uVar2,puVar3,local_80,
                   pcVar1);
  return;
}



//==== 0052757c  ns=Global  size=0x8
// sig: undefined FUN_0052757c(void)
// callers(2): 0051ff58 FUN_0051ff58; 00523f54 FUN_00523f54
// callees(1): 005272e4 FUN_005272e4
// strings: 00668488: 'execute'

void FUN_0052757c(undefined8 param_1)

{
  FUN_005272e4(param_1,PTR_s_execute_0071acc0);
  return;
}



//==== 00527584  ns=Global  size=0x8
// sig: undefined FUN_00527584(void)
// callers(1): 0051ff58 FUN_0051ff58
// callees(1): 005272e4 FUN_005272e4
// strings: 00668490: 'accept'

void FUN_00527584(undefined8 param_1)

{
  FUN_005272e4(param_1,PTR_s_accept_0071acc4);
  return;
}



//==== 0052758c  ns=Global  size=0x140
// sig: undefined FUN_0052758c(void)
// callers(1): 00514124 FUN_00514124
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00667fe8: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX,             %s\n' | 00668498: 'psarc-cchit'

void FUN_0052758c(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  pcVar4 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    pcVar4 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar4 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar2 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar2 = uVar6;
  }
  fios::print_tty4((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac20,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_psarc_cchit_0071acc8,uVar3,
                   param_2,param_3,pcVar4);
  return;
}



//==== 005276cc  ns=Global  size=0x140
// sig: undefined FUN_005276cc(void)
// callers(1): 00514124 FUN_00514124
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00667fe8: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX,             %s\n' | 006684a8: 'psarc-dchit'

void FUN_005276cc(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  pcVar4 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    pcVar4 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar4 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar2 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar2 = uVar6;
  }
  fios::print_tty4((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac20,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_psarc_dchit_0071accc,uVar3,
                   param_2,param_3,pcVar4);
  return;
}



//==== 0052780c  ns=Global  size=0x138
// sig: undefined FUN_0052780c(void)
// callers(1): 005168a8 FUN_005168a8
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00667f88: '%09.4f: %14s op $%08X,                                                   %s\n' | 006684b8: 'psarc-close'

void FUN_0052780c(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar2 = 0xffffffff;
  pcVar3 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    pcVar3 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar3 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar4 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar4 = uVar6;
  }
  fios::print_tty4((double)((float)(longlong)uVar4 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X___s_0071ac18,
                   (double)((float)(longlong)uVar4 / DAT_0071abfc),PTR_s_psarc_close_0071acd0,uVar2,
                   pcVar3);
  return;
}



//==== 00527944  ns=Global  size=0x138
// sig: undefined FUN_00527944(void)
// callers(1): 00517d4c FUN_00517d4c
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00667f88: '%09.4f: %14s op $%08X,                                                   %s\n' | 006684c8: 'psarc-open'

void FUN_00527944(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar2 = 0xffffffff;
  pcVar3 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    pcVar3 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar3 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar4 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar4 = uVar6;
  }
  fios::print_tty4((double)((float)(longlong)uVar4 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X___s_0071ac18,
                   (double)((float)(longlong)uVar4 / DAT_0071abfc),PTR_s_psarc_open_0071acd4,uVar2,
                   pcVar3);
  return;
}



//==== 00527a7c  ns=Global  size=0x128
// sig: undefined FUN_00527a7c(void)
// callers(0): 
// callees(1): 0052cbd8 fios::print_tty4
// strings: 006680c0: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX, cacheID=%s, index=$%08X\n' | 006684d8: 'cache-pref-hit'

void FUN_00527a7c(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar2 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar2 = uVar5;
  }
  fios::print_tty4((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac38,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_cache_pref_hit_0071acd8,
                   uVar3,param_3,param_4,param_2,param_5);
  return;
}



//==== 00527ba4  ns=Global  size=0x128
// sig: undefined FUN_00527ba4(void)
// callers(0): 
// callees(1): 0052cbd8 fios::print_tty4
// strings: 006680c0: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX, cacheID=%s, index=$%08X\n' | 006684e8: 'cache-rdthru'

void FUN_00527ba4(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar2 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar2 = uVar5;
  }
  fios::print_tty4((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac38,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_cache_rdthru_0071acdc,uVar3
                   ,param_3,param_4,param_2,param_5);
  return;
}



//==== 00527ccc  ns=Global  size=0x170
// sig: undefined FUN_00527ccc(void)
// callers(3): 005337e8 FUN_005337e8; 00535d38 FUN_00535d38; 0053750c FUN_0053750c
// callees(1): 0052cbd8 fios::print_tty4
// strings: 006680c0: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX, cacheID=%s, index=$%08X\n' | 006684f8: 'cache-pref-fil'

void FUN_00527ccc(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined *puVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  if (*(int *)(param_1 + 0xd0) - 9U < 3) {
    dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
    puVar3 = PTR_s_cache_pref_fil_0071ace0;
    if ((double)DAT_0071abf8 <= dVar4) {
LAB_00527e24:
      uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
      goto LAB_00527d4c;
    }
  }
  else {
    dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
    puVar3 = PTR_s_cache_fill_0071ace4;
    if ((double)DAT_0071abf8 <= dVar4) goto LAB_00527e24;
  }
  uVar5 = (ulonglong)dVar4;
LAB_00527d4c:
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar2 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar2 = uVar5;
  }
  fios::print_tty4((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac38,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),puVar3,
                   *(undefined4 *)(param_1 + 0x3c),param_3,param_4,param_2,param_5);
  return;
}



//==== 00527e3c  ns=Global  size=0x18
// sig: undefined FUN_00527e3c(void)
// callers(0): 
// callees(0): 

void FUN_00527e3c(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



//==== 00527e54  ns=Global  size=0x24
// sig: undefined FUN_00527e54(void)
// callers(0): 
// callees(0): 

int FUN_00527e54(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = (int)-(param_3 ^ 1) >> 0x1f;
  uVar2 = ((ulonglong)uVar1 & 0xf) << 0x1b | (ulonglong)(uVar1 >> 5);
  return ((uint)(uVar2 << 5) | (uint)uVar2 >> 0x1b) + 0x80010713;
}



//==== 00527e78  ns=Global  size=0x30
// sig: undefined FUN_00527e78(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00527e78(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x00527e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(PTR_DAT_0071ace8 + *(int *)(PTR_DAT_0071ace8 + param_2 * 4)))();
    return uVar1;
  }
  return 0;
}



//==== 00527f58  ns=Global  size=0x68
// sig: undefined FUN_00527f58(void)
// callers(1): 00528598 FUN_00528598
// callees(0): 

uint FUN_00527f58(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (uint)param_1 & 3;
  uVar2 = 0x400;
  uVar4 = 0;
  uVar3 = 1;
  if (uVar1 != 2) {
    uVar4 = 2;
    uVar3 = 0;
    if (uVar1 != 3) {
      uVar4 = 0;
    }
  }
  if ((param_1 & 4) == 0) {
    uVar2 = (uint)((param_1 >> 0xb & 1) << 0xc);
  }
  return uVar2 | (uint)((param_1 >> 4 & 1) << 9) | uVar4 | (uint)((param_1 >> 3 & 1) << 6) | uVar3;
}



//==== 00527fc0  ns=Global  size=0x48
// sig: undefined FUN_00527fc0(void)
// callers(2): 00528fc8 FUN_00528fc8; 00529808 FUN_00529808
// callees(0): 

int FUN_00527fc0(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_2 < 0) && (iVar1 = param_2, param_2 + 0x7ffefffeU < 0x39)) {
                    /* WARNING: Could not recover jumptable at 0x00527ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(PTR_DAT_0071ad28 + *(int *)(PTR_DAT_0071ad28 + (param_2 + 0x7ffefffe) * 4)))
                      ();
    return iVar1;
  }
  return iVar1;
}



//==== 00528140  ns=Global  size=0x74
// sig: undefined FUN_00528140(void)
// callers(0): 
// callees(0): 

undefined * FUN_00528140(void)

{
  int iVar1;
  uint uVar3;
  longlong lVar2;
  undefined *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar5 = 0;
  lVar7 = 0x100;
  puVar4 = PTR_DAT_0071ad30;
  do {
    uVar3 = ((int)uVar5 >> 6) + (uint)((int)uVar5 < 0 && (uVar5 & 0x3f) != 0);
    iVar1 = uVar3 * 8;
    lVar2 = uVar5 + ((ulonglong)uVar3 & 0x3ffffff) * -0x40;
    uVar5 = uVar5 + 1;
    uVar6 = 1L << (0x3fU - lVar2 & 0x7f);
    if ((*(ulonglong *)(PTR_DAT_0071ad2c + iVar1) & uVar6) == 0) {
      *(ulonglong *)(PTR_DAT_0071ad2c + iVar1) = *(ulonglong *)(PTR_DAT_0071ad2c + iVar1) | uVar6;
      return puVar4;
    }
    puVar4 = puVar4 + 0x130;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return (undefined *)0x0;
}



//==== 005281b4  ns=Global  size=0x8c
// sig: undefined FUN_005281b4(void)
// callers(0): 
// callees(0): 

int * FUN_005281b4(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar4;
  longlong lVar3;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  piVar1 = (int *)(PTR_DAT_0071ad2c + 0x20);
  lVar6 = 0x100;
  piVar2 = piVar1;
  while( true ) {
    uVar4 = ((int)uVar5 >> 6) + (uint)((int)uVar5 < 0 && (uVar5 & 0x3f) != 0);
    lVar3 = uVar5 + ((ulonglong)uVar4 & 0x3ffffff) * -0x40;
    uVar5 = uVar5 + 1;
    if (((*(ulonglong *)(PTR_DAT_0071ad2c + uVar4 * 8) >> (0x3fU - lVar3 & 0x7f) & 1) != 0) &&
       (*piVar2 == param_1)) break;
    piVar1 = piVar1 + 0x4c;
    lVar6 = lVar6 + -1;
    piVar2 = piVar2 + 0x4c;
    if (lVar6 == 0) {
      return (int *)0x0;
    }
  }
  return piVar1;
}



//==== 00528240  ns=Global  size=0x98
// sig: undefined FUN_00528240(void)
// callers(2): 005282d8 FUN_005282d8; 005282e8 FUN_005282e8
// callees(2): 0052d370 FUN_0052d370; 0052df14 FUN_0052df14
// strings: 006686f0: 'ps3HDDLock'

void FUN_00528240(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_ps3HDDLock_0071ad34;
  if (param_1 == 1) {
    if (param_2 == 0xffff) {
      puVar2 = PTR_DAT_0071ad2c + 0x13028;
      *(undefined4 *)(PTR_DAT_0071ad2c + 0x13020) = 0;
      FUN_0052d370(puVar2,puVar1);
    }
  }
  else if ((param_1 == 0) && (param_2 == 0xffff)) {
    FUN_0052df14(PTR_DAT_0071ad2c + 0x13028);
    return;
  }
  return;
}



//==== 005282d8  ns=Global  size=0x10
// sig: undefined FUN_005282d8(void)
// callers(0): 
// callees(1): 00528240 FUN_00528240

void FUN_005282d8(void)

{
  FUN_00528240(0,0xffff);
  return;
}



//==== 005282e8  ns=Global  size=0x10
// sig: undefined FUN_005282e8(void)
// callers(0): 
// callees(1): 00528240 FUN_00528240

void FUN_005282e8(void)

{
  FUN_00528240(1,0xffff);
  return;
}



//==== 005282f8  ns=Global  size=0x64
// sig: undefined FUN_005282f8(void)
// callers(0): 
// callees(0): 

void FUN_005282f8(int param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (longlong)(param_1 - (int)(PTR_DAT_0071ad2c + 0x20) >> 4) * 0x286bca1b;
  uVar2 = ((int)uVar3 >> 6) + (uint)((int)uVar3 < 0 && (uVar3 & 0x3f) != 0);
  iVar1 = uVar2 * 8;
  if (0xff < (uVar3 & 0xffffffff)) {
    return;
  }
  uVar3 = 1L << (0x3f - (uVar3 + ((ulonglong)uVar2 & 0x3ffffff) * -0x40) & 0x7f);
  if ((uVar3 & *(ulonglong *)(PTR_DAT_0071ad2c + iVar1)) == 0) {
    return;
  }
  *(ulonglong *)(PTR_DAT_0071ad2c + iVar1) = *(ulonglong *)(PTR_DAT_0071ad2c + iVar1) & ~uVar3;
  return;
}



//==== 0052835c  ns=Global  size=0x78
// sig: undefined FUN_0052835c(void)
// callers(0): 
// callees(1): 006047b0 FUN_006047b0

void FUN_0052835c(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar4;
  uint *puVar3;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  cVar4 = FUN_006047b0(param_1);
  if (cVar4 == '\0') {
    return;
  }
  puVar3 = (uint *)(param_1 + 0x128);
  do {
    uVar1 = *puVar3;
    instructionSynchronize();
    while (uVar1 == *puVar3) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 + 1,0,ZEXT48(puVar3));
        *puVar3 = uVar2;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        return;
      }
    }
  } while( true );
}



//==== 005283d4  ns=Global  size=0x80
// sig: undefined FUN_005283d4(void)
// callers(0): 
// callees(2): 00526404 FUN_00526404; 0064ff44 cell::cellFsStat
// strings: 00668700: 'cellFsStat'

uint FUN_005283d4(int param_1)

{
  uint uVar1;
  undefined1 auStack_50 [72];
  
  if ((*(uint *)(PTR_DAT_0071ad38 + 0x18) & 0x10) != 0) {
    FUN_00526404(0,PTR_s_cellFsStat_0071ad3c,param_1 + 0x32e);
  }
  uVar1 = cell::cellFsStat(param_1 + 0x32e,auStack_50);
  return (((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) - 1 >> 0x1f;
}



//==== 00528454  ns=Global  size=0x144
// sig: undefined FUN_00528454(void)
// callers(4): 00528598 FUN_00528598; 00528f00 FUN_00528f00; 00528fc8 FUN_00528fc8; 00529808 FUN_00529808
// callees(1): 005cd198 FUN_005cd198

int FUN_00528454(int param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  puVar2 = PTR_DAT_0071ad40;
  iVar3 = FUN_005cd198(param_3,0x100,PTR_DAT_0071ad40,param_1 + 0x32e);
  puVar4 = (undefined1 *)(param_3 + iVar3);
  puVar5 = puVar4;
  if ((0 < iVar3) && (puVar4[-1] != '/')) {
    iVar3 = iVar3 + 1;
    puVar5 = (undefined1 *)(param_3 + iVar3);
    *puVar4 = 0x2f;
    *puVar5 = 0;
  }
  cVar1 = *param_2;
  while (cVar1 == '/') {
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  iVar6 = FUN_005cd198(puVar5,0x100,puVar2,param_2);
  iVar6 = iVar6 + iVar3;
  if (1 < iVar6) {
    pcVar8 = (char *)(param_3 + iVar6 + -1);
    if (*pcVar8 == '/') {
      iVar6 = iVar6 + -1;
      do {
        pcVar7 = pcVar8 + -1;
        *pcVar8 = '\0';
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) {
          return param_3;
        }
        pcVar8 = pcVar7;
      } while (*pcVar7 == '/');
    }
  }
  return param_3;
}



//==== 00528598  ns=Global  size=0x37c
// sig: undefined FUN_00528598(void)
// callers(1): 00529808 FUN_00529808
// callees(11): 00526404 FUN_00526404; 00527f58 FUN_00527f58; 00528454 FUN_00528454; 0052cbd8 fios::print_tty4; 0052e984 FUN_0052e984; 005c84e4 fios::strerror_wrapper; 0064f1c4 cell::cellFsClose; 0064f204 cell::cellFsOpen; 0064f224 cell::cellFsFstat; 0064ff24 cell::cellFsSdataOpenByFd; 00650024 cell::cellFsSdataOpen
// strings: 00668738: 'cellFsSdataOpenByFd' | 00668718: 'cellFsOpen' | 00668728: 'cellFsSdataOpen'

undefined4 FUN_00528598(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  double dVar10;
  ulonglong uVar11;
  int iStack_d4;
  undefined1 local_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong local_64;
  undefined4 uStack_58;
  
  FUN_00528454(param_1,param_2 + 7);
  uVar1 = param_2[6];
  puVar8 = (undefined1 *)0x0;
  uVar9 = 0;
  uVar4 = FUN_00527f58(uVar1);
  puVar3 = PTR_DAT_0071ad38;
  uVar4 = uVar4 & 0xfffff9bf;
  if ((uVar1 & 0x100) != 0) {
    puVar8 = local_90;
    uVar9 = 8;
  }
  if ((uVar1 & 0x200) == 0) {
    if ((*(uint *)(PTR_DAT_0071ad38 + 0x18) & 0x10) != 0) {
      FUN_00526404(0,PTR_s_cellFsOpen_0071ad44,param_3);
    }
    iVar5 = cell::cellFsOpen(param_3,uVar4,param_2,puVar8,uVar9);
  }
  else {
    puVar7 = (undefined4 *)param_2[0x4a];
    if (puVar7 == (undefined4 *)0x0) {
      if ((*(uint *)(PTR_DAT_0071ad38 + 0x18) & 0x10) != 0) {
        FUN_00526404(0,PTR_s_cellFsSdataOpen_0071ad48,param_3);
      }
      iVar5 = cell::cellFsSdataOpen(param_3,uVar4,param_2,0,0);
    }
    else {
      if ((*(uint *)(PTR_DAT_0071ad38 + 0x18) & 0x10) != 0) {
        FUN_00526404(0,PTR_s_cellFsSdataOpenByFd_0071ad4c,param_3);
        puVar7 = (undefined4 *)param_2[0x4a];
      }
      iVar5 = cell::cellFsSdataOpenByFd(*puVar7,uVar4,param_2,*(undefined8 *)(param_2 + 4),0,0);
    }
  }
  uVar6 = 0xffffffff;
  if (iVar5 != -0x7ffeffc6) {
    if (iVar5 == 0) {
      uVar6 = 0;
      if (0 < *(longlong *)(param_2 + 0x48)) {
        uStack_58 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        if ((*(uint *)(puVar3 + 0x18) & 0x10) != 0) {
          FUN_00526404(0,*(undefined4 *)(iStack_d4 + -0x75cc),param_3);
        }
        iVar5 = cell::cellFsFstat(*param_2,&uStack_88);
        if (iVar5 == 0) {
          if (local_64 == *(longlong *)(param_2 + 0x48)) {
            *(undefined8 *)(param_2 + 2) = 0xffffffffffffffff;
            return 0;
          }
          fios::print_tty4(*(undefined4 *)(iStack_d4 + -0x75c0),param_3);
          uVar1 = *(uint *)(puVar3 + 0x18);
        }
        else {
          uVar6 = fios::strerror_wrapper(iVar5);
          fios::print_tty4(*(undefined4 *)(iStack_d4 + -0x75c8),param_3,uVar6);
          uVar1 = *(uint *)(puVar3 + 0x18);
        }
        if ((uVar1 & 0x10) != 0) {
          FUN_00526404(0,*(undefined4 *)(iStack_d4 + -0x75c4),param_3);
        }
        cell::cellFsClose(*param_2);
        uVar6 = 0;
        *param_2 = 0xffffffff;
      }
    }
    else {
      *param_2 = 0xffffffff;
      do {
        lVar2 = TBLr;
      } while ((int)lVar2 == 0);
      dVar10 = **(double **)(iStack_d4 + -0x75d8) * (double)*(float *)(iStack_d4 + -0x75d4);
      if ((double)*(float *)(iStack_d4 + -0x75d0) <= dVar10) {
        uVar11 = (longlong)(dVar10 - (double)*(float *)(iStack_d4 + -0x75d0)) ^ 0x8000000000000000;
      }
      else {
        uVar11 = (ulonglong)dVar10;
      }
      FUN_0052e984(lVar2 + uVar11);
      uVar6 = 0;
    }
  }
  return uVar6;
}



//==== 00528914  ns=Global  size=0x284
// sig: undefined FUN_00528914(void)
// callers(0): 
// callees(8): 005193cc FUN_005193cc; 00519c8c FUN_00519c8c; 0051afac FUN_0051afac; 0052d19c FUN_0052d19c; 0052d370 FUN_0052d370; 0052e1dc FUN_0052e1dc; 0052e5f8 FUN_0052e5f8; 005ccb28 FUN_005ccb28
// strings: 006687f8: 'ps3media::m_dirLock' | 00668810: 'ps3media::m_fdLock' | 00668828: 'media.m_suspendLock' | 00668840: 'media.m_suspendCond' | 00668860: '/dev_hdd0' | 00668880: 'ps3media::g_fdIndirectionRWLock' | 00668870: '/dev_hdd1'

void FUN_00528914(undefined4 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int iVar5;
  ulonglong uVar4;
  int *piVar6;
  byte bVar7;
  int iVar8;
  char in_RESERVE;
  byte in_cr0;
  
  FUN_00519c8c(param_1);
  puVar1 = PTR_s_ps3media_m_dirLock_0071ad70;
  *param_1 = PTR_PTR_0071ad6c;
  FUN_0052d370(param_1 + 0x26,puVar1);
  puVar1 = PTR_s_ps3media_m_fdLock_0071ad74;
  param_1[0x30] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_0052e1dc(param_1 + 0x34,puVar1);
  iVar8 = (int)param_1 + 0x32e;
  FUN_0052d370(param_1 + 0x3a,PTR_s_media_m_suspendLock_0071ad78);
  FUN_0052d19c(param_1 + 0x44,PTR_s_media_m_suspendCond_0071ad7c,PTR_DAT_0071ad80,param_1 + 0x3a);
  *(undefined1 *)((int)param_1 + 0x22e) = 0;
  param_1[0x4a] = 0;
  FUN_005193cc(iVar8,param_2,0x100);
  iVar5 = FUN_005ccb28(iVar8,PTR_s__dev_hdd0_0071ad84,9);
  bVar7 = 1;
  if (iVar5 != 0) {
    uVar4 = FUN_005ccb28(iVar8,PTR_s__dev_hdd1_0071ad88,9);
    uVar3 = (ulonglong)((int)uVar4 >> 0x1f);
    bVar7 = (byte)(((uVar3 ^ uVar4) - uVar3) + -1 >> 0x18) >> 7;
  }
  puVar1 = PTR_DAT_0071ad2c;
  *(byte *)((int)param_1 + 0x42e) = bVar7;
  *(undefined8 *)(param_1 + 0x12) = 1;
  puVar2 = PTR_DAT_0071ad38;
  instructionSynchronize();
  if (*(int *)(puVar1 + 0x13020) == 0) {
    uVar4 = (*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071ad38 + 8))
                      (*(undefined4 **)(PTR_DAT_0071ad38 + 8),0x18,0x10440102,0,0);
    uVar3 = 0;
    if ((int)uVar4 != 0) {
      FUN_0052e1dc(uVar4 & 0xffffffff,PTR_s_ps3media_g_fdIndirectionRWLock_0071ad8c);
      uVar3 = uVar4;
    }
    piVar6 = (int *)(puVar1 + 0x13020);
    do {
      if (*piVar6 != 0) {
        if ((int)uVar3 != 0) {
          FUN_0052e5f8(uVar3 & 0xffffffff);
          (*(code *)**(undefined4 **)(**(int **)(puVar2 + 8) + 4))
                    (*(int **)(puVar2 + 8),uVar3 & 0xffffffff,0x10440102,0,0);
        }
        break;
      }
      if (in_RESERVE != '\0') {
        iVar5 = storeWordConditionalIndexed(uVar3,0,ZEXT48(piVar6));
        *piVar6 = iVar5;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
  }
  FUN_0051afac(param_1,PTR_PTR_0071ad90,0,0,0);
  return;
}



//==== 00528b98  ns=Global  size=0xe4
// sig: undefined FUN_00528b98(void)
// callers(1): 00519444 FUN_00519444
// callees(1): 0052e5f8 FUN_0052e5f8

void FUN_00528b98(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulonglong uVar6;
  char in_RESERVE;
  byte in_cr0;
  
  puVar5 = PTR_DAT_0071ad98;
  puVar4 = PTR_DAT_0071ad94;
  puVar3 = PTR_DAT_0071ad38;
  uVar6 = ZEXT48(PTR_DAT_0071ad98);
LAB_00528bc8:
  iVar1 = *(int *)(puVar4 + 0x3020);
  instructionSynchronize();
  do {
    if (iVar1 == 0) {
      return;
    }
    do {
      if (iVar1 != *(int *)puVar5) goto LAB_00528bc8;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,uVar6);
        *(undefined4 *)puVar5 = uVar2;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
    FUN_0052e5f8(iVar1);
    (*(code *)**(undefined4 **)(**(int **)(puVar3 + 8) + 4))
              (*(int **)(puVar3 + 8),iVar1,0x10440102,0,0);
    iVar1 = *(int *)(puVar4 + 0x3020);
    instructionSynchronize();
  } while( true );
}



//==== 00528c7c  ns=Global  size=0x284
// sig: undefined FUN_00528c7c(void)
// callers(1): 0001401c boot::boot
// callees(8): 005193cc FUN_005193cc; 00519c8c FUN_00519c8c; 0051afac FUN_0051afac; 0052d19c FUN_0052d19c; 0052d370 FUN_0052d370; 0052e1dc FUN_0052e1dc; 0052e5f8 FUN_0052e5f8; 005ccb28 FUN_005ccb28
// strings: 006687f8: 'ps3media::m_dirLock' | 00668810: 'ps3media::m_fdLock' | 00668828: 'media.m_suspendLock' | 00668840: 'media.m_suspendCond' | 00668860: '/dev_hdd0' | 00668880: 'ps3media::g_fdIndirectionRWLock' | 00668870: '/dev_hdd1'

void FUN_00528c7c(undefined4 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int iVar5;
  ulonglong uVar4;
  int *piVar6;
  byte bVar7;
  int iVar8;
  char in_RESERVE;
  byte in_cr0;
  
  FUN_00519c8c(param_1);
  puVar1 = PTR_s_ps3media_m_dirLock_0071ad70;
  *param_1 = PTR_PTR_0071ad6c;
  FUN_0052d370(param_1 + 0x26,puVar1);
  puVar1 = PTR_s_ps3media_m_fdLock_0071ad74;
  param_1[0x30] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_0052e1dc(param_1 + 0x34,puVar1);
  iVar8 = (int)param_1 + 0x32e;
  FUN_0052d370(param_1 + 0x3a,PTR_s_media_m_suspendLock_0071ad78);
  FUN_0052d19c(param_1 + 0x44,PTR_s_media_m_suspendCond_0071ad7c,PTR_DAT_0071ad80,param_1 + 0x3a);
  *(undefined1 *)((int)param_1 + 0x22e) = 0;
  param_1[0x4a] = 0;
  FUN_005193cc(iVar8,param_2,0x100);
  iVar5 = FUN_005ccb28(iVar8,PTR_s__dev_hdd0_0071ad84,9);
  bVar7 = 1;
  if (iVar5 != 0) {
    uVar4 = FUN_005ccb28(iVar8,PTR_s__dev_hdd1_0071ad88,9);
    uVar3 = (ulonglong)((int)uVar4 >> 0x1f);
    bVar7 = (byte)(((uVar3 ^ uVar4) - uVar3) + -1 >> 0x18) >> 7;
  }
  puVar1 = PTR_DAT_0071ad2c;
  *(byte *)((int)param_1 + 0x42e) = bVar7;
  *(undefined8 *)(param_1 + 0x12) = 1;
  puVar2 = PTR_DAT_0071ad38;
  instructionSynchronize();
  if (*(int *)(puVar1 + 0x13020) == 0) {
    uVar4 = (*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071ad38 + 8))
                      (*(undefined4 **)(PTR_DAT_0071ad38 + 8),0x18,0x10440102,0,0);
    uVar3 = 0;
    if ((int)uVar4 != 0) {
      FUN_0052e1dc(uVar4 & 0xffffffff,PTR_s_ps3media_g_fdIndirectionRWLock_0071ad8c);
      uVar3 = uVar4;
    }
    piVar6 = (int *)(puVar1 + 0x13020);
    do {
      if (*piVar6 != 0) {
        if ((int)uVar3 != 0) {
          FUN_0052e5f8(uVar3 & 0xffffffff);
          (*(code *)**(undefined4 **)(**(int **)(puVar2 + 8) + 4))
                    (*(int **)(puVar2 + 8),uVar3 & 0xffffffff,0x10440102,0,0);
        }
        break;
      }
      if (in_RESERVE != '\0') {
        iVar5 = storeWordConditionalIndexed(uVar3,0,ZEXT48(piVar6));
        *piVar6 = iVar5;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
  }
  FUN_0051afac(param_1,PTR_PTR_0071ad90,0,0,0);
  return;
}



//==== 00528f00  ns=Global  size=0xc8
// sig: undefined FUN_00528f00(void)
// callers(5): 00528fc8 FUN_00528fc8; 00529580 FUN_00529580; 00529628 FUN_00529628; 005296b8 FUN_005296b8; 00529808 FUN_00529808
// callees(5): 00526404 FUN_00526404; 00528454 FUN_00528454; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 006500c4 cell::cellFsClosedir
// strings: 006688a0: 'cellFsClosedir'

void FUN_00528f00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_120 [264];
  
  fios::lwmutex_lock_checked(param_1 + 0x98);
  iVar2 = *(int *)(param_1 + 0xc0);
  if (iVar2 != -1) {
    if ((*(uint *)(PTR_DAT_0071ad38 + 0x18) & 0x10) != 0) {
      uVar1 = FUN_00528454(param_1,param_1 + 0x22e,auStack_120);
      FUN_00526404(0,PTR_s_cellFsClosedir_0071ad9c,uVar1);
      iVar2 = *(int *)(param_1 + 0xc0);
    }
    cell::cellFsClosedir(iVar2);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0x22e) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  fios::lwmutex_unlock_checked(param_1 + 0x98);
  return;
}



//==== 00528fc8  ns=Global  size=0x5b8
// sig: undefined FUN_00528fc8(void)
// callers(0): 
// callees(14): 005193cc FUN_005193cc; 00526404 FUN_00526404; 00527fc0 FUN_00527fc0; 00528454 FUN_00528454; 00528f00 FUN_00528f00; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 005cc784 FUN_005cc784; 005cd198 FUN_005cd198; 005d0140 libc::memset; 0064fec4 cell::cellFsOpendir; 0064ff04 cell::cellFsReaddir; 0064ff44 cell::cellFsStat; 006500c4 cell::cellFsClosedir
// strings: 006688b0: 'cellFsOpendir'

/* WARNING: Removing unreachable block (ram,0x00529210) */
/* WARNING: Removing unreachable block (ram,0x0052950c) */
/* WARNING: Removing unreachable block (ram,0x0052951c) */
/* WARNING: Removing unreachable block (ram,0x00529524) */
/* WARNING: Removing unreachable block (ram,0x0052921c) */
/* WARNING: Removing unreachable block (ram,0x0052922c) */
/* WARNING: Removing unreachable block (ram,0x00529530) */

uint FUN_00528fc8(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ushort uVar9;
  short sVar10;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar11;
  undefined *puVar12;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined *puStack_f4;
  undefined1 local_b0 [8];
  uint local_a8 [9];
  undefined8 local_84;
  
  puVar4 = &TOC_BASE;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  fios::lwmutex_lock_checked(param_1 + 0x98);
  iVar2 = *(int *)(param_2 + 0x24);
  puVar3 = *(undefined8 **)(iVar2 + 0x50);
  if (((*(int *)(param_1 + 0xc0) == -1) ||
      (iVar5 = FUN_005cc784(*(undefined4 *)(iVar2 + 8),param_1 + 0x22e), iVar5 != 0)) ||
     (lVar11 = *(longlong *)(param_1 + 200), puVar12 = PTR_DAT_0071ad38,
     *(longlong *)(iVar2 + 0x30) < lVar11)) {
    FUN_00528f00(param_1);
    puVar12 = PTR_DAT_0071ad38;
    if ((*(uint *)(PTR_DAT_0071ad38 + 0x18) & 0x10) != 0) {
      FUN_00526404(*(undefined4 *)(param_2 + 0xc),PTR_s_cellFsOpendir_0071ada0,param_3);
    }
    uVar6 = cell::cellFsOpendir(param_3,param_1 + 0xc0);
    bVar1 = (int)(((int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f ^ uVar6)) < 0;
    if ((bVar1) && (iVar5 = *(int *)(param_1 + 0xc0), iVar5 != -1)) {
      if ((*(uint *)(puVar12 + 0x18) & 0x10) != 0) {
        FUN_00526404(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(puStack_f4 + -0x758c),param_3);
        iVar5 = *(int *)(param_1 + 0xc0);
      }
      cell::cellFsClosedir(iVar5);
      *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
    }
    if (((uVar6 == 0x8001003a) || (uVar6 == 0x8001002b)) ||
       ((uVar6 == 0x8001002f || ((uVar6 == 0x8001002a || (uVar6 == 0x8001002d))))))
    goto LAB_005290fc;
    if (bVar1) {
      uVar8 = FUN_00527fc0(param_1,uVar6);
      *(undefined4 *)(iVar2 + 4) = uVar8;
      goto LAB_005290fc;
    }
    FUN_005193cc(param_1 + 0x22e,*(undefined4 *)(iVar2 + 8),0x100);
    lVar11 = -1;
    *(undefined8 *)(param_1 + 200) = 0xffffffffffffffff;
    puVar4 = puStack_f4;
  }
  while (*(longlong *)(iVar2 + 0x30) <= lVar11) {
    iVar5 = FUN_005cc784(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(puVar4 + -0x7580));
    *puVar3 = 0;
    *(uint *)(puVar3 + 2) = (uint)(((ulonglong)*(byte *)(param_1 + 300) ^ 1) - 1 >> 0x3f);
    if (iVar5 == 0) {
      uVar8 = *(undefined4 *)(puVar4 + -0x75e8);
    }
    else {
      uVar8 = *(undefined4 *)(puVar4 + -0x757c);
    }
    uVar9 = FUN_005cd198((int)puVar3 + 0x1a,0x100,uVar8,*(undefined4 *)(iVar2 + 8));
    uVar6 = (uint)uVar9;
    *(ushort *)(puVar3 + 3) = uVar9;
    if (uVar6 < 0xff) {
      sVar10 = FUN_005cd198((int)puVar3 + uVar6 + 0x1a,0x100 - uVar6,
                            *(undefined4 *)(puVar4 + -0x75e8),param_1 + 0x12e);
      *(short *)((int)puVar3 + 0x14) = sVar10;
      *(short *)((int)puVar3 + 0x16) = sVar10 + *(short *)(puVar3 + 3);
      if ((ushort)(sVar10 + *(short *)(puVar3 + 3)) < 0xff) {
        FUN_00528454(param_1,(int)puVar3 + 0x1a,param_3);
        if ((*(uint *)(puVar12 + 0x18) & 0x10) != 0) {
          FUN_00526404(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(puVar4 + -0x75ec),param_3);
        }
        uVar6 = cell::cellFsStat(param_3,local_a8);
        if ((((uVar6 == 0x8001003a) || (uVar6 == 0x8001002b)) || (uVar6 == 0x8001002f)) ||
           ((uVar6 == 0x8001002a || (uVar6 == 0x8001002d)))) goto LAB_00529238;
        puVar4 = puStack_f4;
        if (uVar6 == 0) {
          puVar3[1] = local_84;
          if ((local_a8[0] & 0x100) != 0) {
            *(uint *)(puVar3 + 2) = *(uint *)(puVar3 + 2) | 2;
          }
          if ((local_a8[0] & 0x80) != 0) {
            *(uint *)(puVar3 + 2) = *(uint *)(puVar3 + 2) | 4;
          }
          uVar6 = 0;
          *(undefined8 *)(iVar2 + 0x48) = 0x120;
          goto LAB_005290fc;
        }
      }
    }
    lVar11 = *(longlong *)(param_1 + 200) + -1;
    *(longlong *)(param_1 + 200) = lVar11;
  }
  libc::memset(param_1 + 300,0,0x102);
  if ((*(uint *)(puVar12 + 0x18) & 0x10) != 0) {
    FUN_00526404(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(puVar4 + -0x7584),param_3);
  }
  uVar6 = cell::cellFsReaddir(*(undefined4 *)(param_1 + 0xc0),param_1 + 300,local_b0);
  if (((uVar6 == 0x8001003a) || (uVar6 == 0x8001002b)) ||
     ((uVar6 == 0x8001002f || ((uVar6 == 0x8001002a || (uVar6 == 0x8001002d)))))) {
LAB_00529238:
    *(undefined8 *)(param_1 + 200) = 0xffffffffffffffff;
  }
  else {
    if (uVar6 == 0) {
      *(undefined4 *)(iVar2 + 4) = 0x8001070b;
    }
    else {
      uVar8 = FUN_00527fc0(param_1,uVar6);
      *(undefined4 *)(iVar2 + 4) = uVar8;
    }
    if ((*(uint *)(puVar12 + 0x18) & 0x10) != 0) {
      uVar8 = *(undefined4 *)(param_2 + 0xc);
      uVar7 = FUN_00528454(param_1,param_1 + 0x22e,param_3);
      FUN_00526404(uVar8,*(undefined4 *)(puStack_f4 + -0x758c),uVar7);
    }
    uVar6 = 0;
    cell::cellFsClosedir(*(undefined4 *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x22e) = 0;
  }
LAB_005290fc:
  fios::lwmutex_unlock_checked(param_1 + 0x98);
  return uVar6;
}



//==== 00529580  ns=Global  size=0xa8
// sig: undefined FUN_00529580(void)
// callers(0): 
// callees(6): 00510704 FUN_00510704; 0051ab68 FUN_0051ab68; 00528f00 FUN_00528f00; 0052d0e8 FUN_0052d0e8; 0052df14 FUN_0052df14; 0052e5f8 FUN_0052e5f8

void FUN_00529580(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071ad6c;
  FUN_00528f00(param_1);
  FUN_0052d0e8(param_1 + 0x44);
  FUN_0052df14(param_1 + 0x3a);
  FUN_0052e5f8(param_1 + 0x34);
  FUN_0052df14(param_1 + 0x26);
  FUN_0051ab68(param_1);
  FUN_00510704(param_1,0x10000100,3);
  return;
}



//==== 00529628  ns=Global  size=0x90
// sig: undefined FUN_00529628(void)
// callers(0): 
// callees(5): 0051ab68 FUN_0051ab68; 00528f00 FUN_00528f00; 0052d0e8 FUN_0052d0e8; 0052df14 FUN_0052df14; 0052e5f8 FUN_0052e5f8

void FUN_00529628(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071ad6c;
  FUN_00528f00(param_1);
  FUN_0052d0e8(param_1 + 0x44);
  FUN_0052df14(param_1 + 0x3a);
  FUN_0052e5f8(param_1 + 0x34);
  FUN_0052df14(param_1 + 0x26);
  FUN_0051ab68(param_1);
  return;
}



//==== 005296b8  ns=Global  size=0x90
// sig: undefined FUN_005296b8(void)
// callers(0): 
// callees(5): 0051ab68 FUN_0051ab68; 00528f00 FUN_00528f00; 0052d0e8 FUN_0052d0e8; 0052df14 FUN_0052df14; 0052e5f8 FUN_0052e5f8

void FUN_005296b8(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071ad6c;
  FUN_00528f00(param_1);
  FUN_0052d0e8(param_1 + 0x44);
  FUN_0052df14(param_1 + 0x3a);
  FUN_0052e5f8(param_1 + 0x34);
  FUN_0052df14(param_1 + 0x26);
  FUN_0051ab68(param_1);
  return;
}



//==== 00529748  ns=Global  size=0xc0
// sig: undefined FUN_00529748(void)
// callers(0): 
// callees(4): 0052dc40 FUN_0052dc40; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 006047b0 FUN_006047b0

void FUN_00529748(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  cVar3 = FUN_006047b0(param_1);
  if (cVar3 != '\0') {
    fios::lwmutex_lock_checked(param_1 + 0xe8);
    instructionSynchronize();
    if (*(int *)(param_1 + 0x128) != 0) {
      puVar4 = (uint *)(param_1 + 0x128);
      do {
        uVar1 = *puVar4;
        instructionSynchronize();
        while (uVar1 == *puVar4) {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 - 1,0,ZEXT48(puVar4));
            *puVar4 = uVar2;
            in_cr0 = 2;
          }
          if ((in_cr0 & 2) != 0) {
            FUN_0052dc40(param_1 + 0x110);
            goto LAB_005297e4;
          }
        }
      } while( true );
    }
LAB_005297e4:
    fios::lwmutex_unlock_checked(param_1 + 0xe8);
  }
  return;
}



//==== 00529808  ns=Global  size=0x840
// sig: undefined FUN_00529808(void)
// callers(0): 
// callees(18): 0051a3e4 FUN_0051a3e4; 0051a480 FUN_0051a480; 005231cc FUN_005231cc; 00526404 FUN_00526404; 00526c44 FUN_00526c44; 00527fc0 FUN_00527fc0; 00528454 FUN_00528454; 00528598 FUN_00528598; 00528f00 FUN_00528f00; 0052cbd8 fios::print_tty4; 0052cc20 FUN_0052cc20; 0052cccc fios::rwlock_wlock_checked; 0052e984 FUN_0052e984; 005c84e4 fios::strerror_wrapper; 005ccb28 FUN_005ccb28; 0064f1c4 cell::cellFsClose; 0064f224 cell::cellFsFstat; 0064ff44 cell::cellFsStat
// strings: 006688e0: '/dev_bdvd' | 0071adc0: 'Nnk(' (raw) | 00668900: 'Waiting for media %s\n' | 006688f0: '/dev_ps2disc' | 00668700: 'cellFsStat'

undefined4 FUN_00529808(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  int *piVar17;
  double dVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  undefined *puStack_174;
  undefined1 auStack_130 [79];
  byte local_e1;
  
  puVar9 = &TOC_BASE;
  iVar12 = param_1 + 0x32e;
  iVar10 = FUN_005ccb28(iVar12,PTR_s__dev_bdvd_0071adb0,9);
  puVar8 = PTR_s__dev_ps2disc_0071adb4;
  if ((iVar10 == 0) || (iVar10 = FUN_005ccb28(iVar12,PTR_s__dev_ps2disc_0071adb4,0xc), iVar10 == 0))
  {
    local_e1 = 1;
  }
  else {
    uVar20 = FUN_005ccb28(iVar12,puVar8,0xd);
    uVar19 = (ulonglong)((int)uVar20 >> 0x1f);
    local_e1 = (byte)(((uVar19 ^ uVar20) - uVar19) + -1 >> 0x18) >> 7;
  }
  puVar8 = PTR_DAT_0071ad38;
  if ((*(uint *)(PTR_DAT_0071ad38 + 0x18) & 0x10) != 0) {
    FUN_00526c44(*(undefined4 *)(param_3 + 0xc),param_2);
  }
  puVar7 = PTR_DAT_0071ad2c;
  iVar10 = *(int *)(param_3 + 0x24);
  if ((*(int *)(param_3 + 0xc) != 0) && ((*(uint *)(*(int *)(param_3 + 0xc) + 0x30) >> 9 & 1) != 0))
  {
    *(undefined4 *)(iVar10 + 4) = 0x80010708;
    return 1;
  }
  uVar1 = *(undefined4 *)(PTR_DAT_0071ad2c + 0x13020);
  instructionSynchronize();
  fios::rwlock_wlock_checked(uVar1);
  FUN_00528f00(param_1);
  dVar21 = (double)DAT_0071ad58;
  dVar22 = *(double *)PTR_DAT_0071ad50;
  dVar18 = dVar22 * (double)DAT_0071adb8;
  if (dVar21 <= dVar18) {
    uVar19 = (longlong)(dVar18 - dVar21) ^ 0x8000000000000000;
  }
  else {
    uVar19 = (ulonglong)dVar18;
  }
  bVar5 = false;
  bVar4 = true;
  bVar6 = false;
  do {
    do {
      lVar2 = TBLr;
    } while ((int)lVar2 == 0);
    iVar14 = 0;
    FUN_0052e984(lVar2 + uVar19);
    iVar11 = -0x7ffeffc6;
    while ((((iVar11 == -0x7ffeffc6 || (iVar11 == -0x7ffeffd5)) || (iVar11 == -0x7ffeffd1)) ||
           ((iVar11 == -0x7ffeffd6 || (iVar11 == -0x7ffeffd3))))) {
      if (0 < iVar14) {
        do {
          lVar2 = TBLr;
        } while ((int)lVar2 == 0);
        iVar11 = FUN_0051a3e4(param_1,1,0);
        if (iVar11 != -0x7ffef8ed) {
          if (bVar5) {
            dVar18 = dVar22 * (double)*(float *)(puVar9 + -0x7568);
            if (dVar18 < dVar21) goto LAB_005299f8;
LAB_00529b64:
            uVar20 = (longlong)(dVar18 - dVar21) ^ 0x8000000000000000;
          }
          else {
            bVar5 = true;
            fios::print_tty4(*(undefined4 *)(puVar9 + -0x756c),iVar12);
            dVar18 = dVar22 * (double)*(float *)(puVar9 + -0x7568);
            if (dVar21 <= dVar18) goto LAB_00529b64;
LAB_005299f8:
            uVar20 = (ulonglong)dVar18;
          }
          FUN_0052e984(lVar2 + uVar20);
          goto LAB_00529a10;
        }
        iVar12 = FUN_0051a480(param_1);
        if (iVar12 != 0) {
          FUN_005231cc(iVar12,0);
        }
LAB_00529a74:
        if ((*(int *)(param_3 + 0xc) != 0) &&
           ((*(uint *)(*(int *)(param_3 + 0xc) + 0x30) >> 9 & 1) != 0)) {
          *(undefined4 *)(iVar10 + 4) = 0x80010708;
        }
        uVar15 = 1;
        if (*(int *)(iVar10 + 4) != -0x7ffef8f8) {
          uVar15 = 1;
          uVar13 = FUN_00527fc0(param_1,param_2);
          *(undefined4 *)(iVar10 + 4) = uVar13;
        }
        goto LAB_00529ac4;
      }
LAB_00529a10:
      if ((*(uint *)(puVar8 + 0x18) & 0x10) != 0) {
        FUN_00526404(0,*(undefined4 *)(puVar9 + -0x75ec),iVar12);
      }
      iVar11 = cell::cellFsStat(iVar12,auStack_130);
      if ((bVar4) && (iVar14 == 0 && iVar11 == 0)) goto LAB_00529a74;
      iVar14 = iVar14 + 1;
      puVar9 = puStack_174;
    }
    if (iVar11 != 0) {
      uVar15 = fios::strerror_wrapper(iVar11);
      fios::print_tty4(*(undefined4 *)(puVar9 + -0x7564),iVar12,iVar11,uVar15);
    }
    piVar17 = *(int **)(puVar9 + -0x75f8);
    bVar3 = true;
    uVar20 = 0;
    do {
      while ((iVar11 = (int)uVar20,
             uVar16 = (iVar11 >> 6) + (uint)(iVar11 < 0 && (uVar20 & 0x3f) != 0),
             (*(ulonglong *)(puVar7 + uVar16 * 8) >>
              (0x3f - (uVar20 + ((ulonglong)uVar16 & 0x3ffffff) * -0x40) & 0x7f) & 1) == 0 ||
             (piVar17[0x4b] != param_1))) {
LAB_00529c34:
        piVar17 = piVar17 + 0x4c;
        uVar20 = uVar20 + 1;
        if (iVar11 == 0xff) goto LAB_00529cfc;
      }
      iVar14 = *piVar17;
      if (iVar14 != -1) {
        if ((*(uint *)(puVar8 + 0x18) & 0x10) != 0) {
          uVar15 = FUN_00528454(param_1,piVar17 + 7,param_4);
          FUN_00526404(0,*(undefined4 *)(puVar9 + -0x75cc),uVar15);
          iVar14 = *piVar17;
        }
        iVar14 = cell::cellFsFstat(iVar14,auStack_130);
        if (iVar14 == -0x7ffeffd6) {
          if ((*(uint *)(puVar8 + 0x18) & 0x10) != 0) {
            uVar15 = FUN_00528454(param_1,piVar17 + 7,param_4);
            FUN_00526404(0,*(undefined4 *)(puStack_174 + -0x75c4),uVar15);
          }
          cell::cellFsClose(*piVar17);
          *piVar17 = -1;
          puVar9 = puStack_174;
        }
        else {
          puVar9 = puStack_174;
          if (*piVar17 != -1) goto LAB_00529c34;
        }
      }
      bVar3 = false;
      piVar17 = piVar17 + 0x4c;
      uVar20 = uVar20 + 1;
    } while (iVar11 != 0xff);
LAB_00529cfc:
    if (bVar3) {
      if (bVar6) {
        fios::print_tty4(*(undefined4 *)(puVar9 + -0x7550),iVar12);
      }
      if (bVar5) {
        fios::print_tty4(*(undefined4 *)(puVar9 + -0x754c),iVar12);
      }
      if ((*(int *)(param_3 + 0xc) == 0) ||
         ((*(uint *)(*(int *)(param_3 + 0xc) + 0x30) >> 9 & 1) == 0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        *(undefined4 *)(iVar10 + 4) = 0x80010708;
      }
LAB_00529ac4:
      FUN_0052cc20(uVar1);
      return uVar15;
    }
    if (!bVar4) {
      fios::print_tty4(*(undefined4 *)(puVar9 + -0x7560),iVar12);
      if (local_e1 == 0) {
        bVar6 = true;
        fios::print_tty4(*(undefined4 *)(puVar9 + -0x7558));
      }
      else {
        bVar6 = true;
        fios::print_tty4(*(undefined4 *)(puVar9 + -0x755c));
      }
    }
    uVar20 = 0;
    piVar17 = *(int **)(puVar9 + -0x75f8);
    do {
      iVar11 = (int)uVar20;
      uVar16 = (iVar11 >> 6) + (uint)(iVar11 < 0 && (uVar20 & 0x3f) != 0);
      if (((((*(ulonglong *)(puVar7 + uVar16 * 8) >>
              (0x3f - (uVar20 + ((ulonglong)uVar16 & 0x3ffffff) * -0x40) & 0x7f) & 1) != 0) &&
           (piVar17[0x4b] == param_1)) && (*piVar17 == -1)) &&
         ((piVar17[0x4a] == 0 && (iVar14 = FUN_00528598(param_1,piVar17,param_4), iVar14 != 0))))
      break;
      uVar20 = uVar20 + 1;
      piVar17 = piVar17 + 0x4c;
    } while (iVar11 != 0xff);
    uVar20 = 0;
    piVar17 = *(int **)(puVar9 + -0x75f8);
    do {
      iVar11 = (int)uVar20;
      uVar16 = (iVar11 >> 6) + (uint)(iVar11 < 0 && (uVar20 & 0x3f) != 0);
      if ((((*(ulonglong *)(puVar7 + uVar16 * 8) >>
             (0x3f - (uVar20 + ((ulonglong)uVar16 & 0x3ffffff) * -0x40) & 0x7f) & 1) != 0) &&
          (piVar17[0x4b] == param_1)) &&
         ((*piVar17 == -1 &&
          ((piVar17[0x4a] != 0 && (iVar14 = FUN_00528598(param_1,piVar17,param_4), iVar14 != 0))))))
      break;
      uVar20 = uVar20 + 1;
      piVar17 = piVar17 + 0x4c;
    } while (iVar11 != 0xff);
    do {
      lVar2 = TBLr;
    } while ((int)lVar2 == 0);
    dVar18 = dVar22 * (double)*(float *)(puVar9 + -0x7554);
    if (dVar21 <= dVar18) {
      uVar20 = (longlong)(dVar18 - dVar21) ^ 0x8000000000000000;
    }
    else {
      uVar20 = (ulonglong)dVar18;
    }
    bVar4 = false;
    FUN_0052e984(lVar2 + uVar20);
  } while( true );
}



//==== 0052a048  ns=Global  size=0x1d4
// sig: undefined FUN_0052a048(void)
// callers(0): 
// callees(3): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 0052e49c FUN_0052e49c

void FUN_0052a048(int param_1,int param_2)

{
  ushort uVar1;
  uint *puVar2;
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
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  puVar2 = *(uint **)(param_2 + 0x24);
  uVar1 = *(ushort *)(param_2 + 0x28);
  puVar2[1] = 0x80010701;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  if ((*puVar2 == 0x10) || ((uVar1 & 0x80) == 0)) {
    instructionSynchronize();
    if (*(int *)(param_1 + 0x128) != 0) {
      iVar3 = param_1 + 0xe8;
      fios::lwmutex_lock_checked(iVar3);
      instructionSynchronize();
      if (*(int *)(param_1 + 0x128) != 0) {
        do {
          FUN_0052e49c(param_1 + 0x110,iVar3,0);
          instructionSynchronize();
        } while (*(int *)(param_1 + 0x128) != 0);
      }
      fios::lwmutex_unlock_checked(iVar3);
    }
    if (*puVar2 < 0x14) {
                    /* WARNING: Could not recover jumptable at 0x0052a1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(PTR_DAT_0071ade0 + *(int *)(PTR_DAT_0071ade0 + *puVar2 * 4)))();
      return;
    }
    puVar2[1] = 0x80010707;
    if (puVar2[1] == 0x80010701) {
      puVar2[1] = 0;
    }
  }
  else {
    puVar2[1] = 0x80010714;
  }
  return;
}



//==== 0052c8c4  ns=Global  size=0x44
// sig: undefined FUN_0052c8c4(void)
// callers(7): 0052e2d0 FUN_0052e2d0; 0052e69c FUN_0052e69c; 00531e64 FUN_00531e64; 00531f64 FUN_00531f64; 005337e8 FUN_005337e8; 00535d38 FUN_00535d38; 0053750c FUN_0053750c
// callees(1): 08000091 syscall::syscall_sys_time_get_current_time

longlong FUN_0052c8c4(void)

{
  longlong local_30;
  longlong local_28 [2];
  
  syscall::syscall_sys_time_get_current_time(&local_30,local_28);
  return local_30 * 1000000000 + local_28[0];
}



//==== 0052c908  ns=Global  size=0x14
// sig: undefined FUN_0052c908(void)
// callers(0): 
// callees(0): 

ulonglong FUN_0052c908(int param_1)

{
  return (*(ulonglong *)(param_1 + 0x38) ^ *(ulonglong *)(param_1 + 0x38) >> 0x20) & 0xffffffff;
}



//==== 0052c91c  ns=Global  size=0x20
// sig: undefined FUN_0052c91c(void)
// callers(0): 
// callees(0): 

uint FUN_0052c91c(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (int)(param_1 ^ param_2) >> 0x1f;
  return ((uVar1 ^ param_1 ^ param_2) - uVar1) - 1 >> 0x1f;
}



//==== 0052c93c  ns=Global  size=0x100
// sig: undefined FUN_0052c93c(void)
// callers(0): 
// callees(1): 005c7368 FUN_005c7368

undefined4 FUN_0052c93c(int param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 local_40 [48];
  
  lVar1 = FUN_005c7368(local_40);
  if (lVar1 != -1) {
    *param_2 = (lVar1 + *(int *)PTR_DAT_0071ae20) * 1000000000;
    return 1;
  }
  if (*(int *)(param_1 + 0x14) < 100) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0x7fffffffffffffff;
  }
  return 0;
}



//==== 0052ca3c  ns=Global  size=0x114
// sig: undefined FUN_0052ca3c(void)
// callers(1): 0052cb50 FUN_0052cb50
// callees(5): 005c58b0 FUN_005c58b0; 005c5900 FUN_005c5900; 005c7368 FUN_005c7368; 005cede8 FUN_005cede8; 08000093 syscall::syscall_sys_time_get_timebase_frequency
// strings: 0071ae24: 'Nnk(' (raw)

void FUN_0052ca3c(int param_1,int param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_40 [32];
  
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    uVar2 = syscall::syscall_sys_time_get_timebase_frequency();
    puVar1 = PTR_DAT_0071ae20;
    *(double *)(PTR_DAT_0071ae20 + 8) = (double)uVar2 / (double)DAT_0071ae24;
    FUN_005cede8(0);
    uVar3 = FUN_005c5900(local_40);
    iVar4 = FUN_005c7368(uVar3);
    uVar3 = FUN_005c58b0(local_40);
    iVar5 = FUN_005c7368(uVar3);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(int *)puVar1 = iVar4 - iVar5;
    return;
  }
  return;
}



//==== 0052cb50  ns=Global  size=0x10
// sig: undefined FUN_0052cb50(void)
// callers(0): 
// callees(1): 0052ca3c FUN_0052ca3c

void FUN_0052cb50(void)

{
  FUN_0052ca3c(1,0xffff);
  return;
}



//==== 0052cb60  ns=Global  size=0x78
// sig: undefined FUN_0052cb60(void)
// callers(1): 0052cbd8 fios::print_tty4
// callees(1): 005cd360 FUN_005cd360

void FUN_0052cb60(undefined4 param_1,undefined4 param_2)

{
  if (*(undefined4 **)(PTR_DAT_0071ae28 + 0x14) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(PTR_DAT_0071ae28 + 0x14))(param_1);
    return;
  }
  FUN_005cd360(PTR_DAT_0071ae2c,param_1,param_2);
  return;
}



//==== 0052cbd8  ns=fios  size=0x48
// sig: undefined print_tty4(void)
// callers(97): 00510b8c FUN_00510b8c; 005113b4 FUN_005113b4; 00513598 FUN_00513598; 0051399c FUN_0051399c; 00513cc4 FUN_00513cc4; 00514124 FUN_00514124; 0051514c FUN_0051514c; 00516634 FUN_00516634; 005168a8 FUN_005168a8; 00517398 FUN_00517398; 00517560 FUN_00517560; 005177d8 FUN_005177d8; 00517d4c FUN_00517d4c; 00519444 FUN_00519444; 005194f0 FUN_005194f0; 0051cfd8 fios::op_alloc; 0051ef8c FUN_0051ef8c; 0051f3e0 FUN_0051f3e0; 0051fa5c FUN_0051fa5c; 0051ff58 FUN_0051ff58; 005238c0 FUN_005238c0; 005241b8 FUN_005241b8; 005258cc FUN_005258cc; 005260ac FUN_005260ac; 005261c4 FUN_005261c4
// callees(1): 0052cb60 FUN_0052cb60

void fios::print_tty4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_0052cb60(param_1,&stack0x00000038);
  return;
}



//==== 0052cc20  ns=Global  size=0xac
// sig: undefined FUN_0052cc20(void)
// callers(11): 00512fb4 FUN_00512fb4; 005168a8 FUN_005168a8; 00517d4c FUN_00517d4c; 0051c390 fios::op_event_dispatch; 00529808 FUN_00529808; 00532468 FUN_00532468; 005328c0 FUN_005328c0; 00532b9c FUN_00532b9c; 00533ae0 FUN_00533ae0; 00535d38 FUN_00535d38; 0053750c FUN_0053750c
// callees(3): 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 0800007f syscall::syscall_sys_rwlock_wunlock
// strings: 00668c68: "write-unlocking invalid rwlock '%s'\n" | 00668c20: "sys_rwlock_wunlock failed while write-unlocking rwlock '%s': %d (%s)\n"

void FUN_0052cc20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    fios::print_tty4(PTR_s_write_unlocking_invalid_rwlock___0071ae34,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = syscall::syscall_sys_rwlock_wunlock(*(int *)(param_1 + 0xc));
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = fios::strerror_wrapper(iVar2);
  fios::print_tty4(PTR_s_sys_rwlock_wunlock_failed_while_w_0071ae30,uVar1,iVar2,uVar3);
  return;
}



//==== 0052cccc  ns=fios  size=0xb0
// sig: undefined rwlock_wlock_checked(void)
// callers(11): 00512fb4 FUN_00512fb4; 005168a8 FUN_005168a8; 00517d4c FUN_00517d4c; 0051c390 fios::op_event_dispatch; 00529808 FUN_00529808; 00532468 FUN_00532468; 005328c0 FUN_005328c0; 00532b9c FUN_00532b9c; 00533ae0 FUN_00533ae0; 00535d38 FUN_00535d38; 0053750c FUN_0053750c
// callees(3): 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 0800007d syscall::syscall_sys_rwlock_wlock
// strings: 00668cd8: "write-locking invalid rwlock '%s'\n" | 00668c90: "sys_rwlock_wlock failed while write-locking rwlock '%s': %d (%s)\n"

void fios::rwlock_wlock_checked(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    print_tty4(PTR_s_write_locking_invalid_rwlock___s_0071ae3c,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = syscall::syscall_sys_rwlock_wlock(*(int *)(param_1 + 0xc),0);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = strerror_wrapper(iVar2);
  print_tty4(PTR_s_sys_rwlock_wlock_failed_while_wr_0071ae38,uVar1,iVar2,uVar3);
  return;
}



//==== 0052cd7c  ns=Global  size=0xac
// sig: undefined FUN_0052cd7c(void)
// callers(12): 00512750 FUN_00512750; 00513220 FUN_00513220; 0051399c FUN_0051399c; 00515a1c FUN_00515a1c; 00515ed4 FUN_00515ed4; 00516634 FUN_00516634; 00516bcc FUN_00516bcc; 00516fb8 FUN_00516fb8; 00517560 FUN_00517560; 005177d8 FUN_005177d8; 00531144 FUN_00531144; 00532660 FUN_00532660
// callees(3): 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 0800007c syscall::syscall_sys_rwlock_runlock
// strings: 00668d48: "read-unlocking invalid rwlock '%s'\n" | 00668d00: "sys_rwlock_runlock failed while read-unlocking rwlock '%s': %d (%s)\n"

void FUN_0052cd7c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    fios::print_tty4(PTR_s_read_unlocking_invalid_rwlock____0071ae44,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = syscall::syscall_sys_rwlock_runlock(*(int *)(param_1 + 0xc));
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = fios::strerror_wrapper(iVar2);
  fios::print_tty4(PTR_s_sys_rwlock_runlock_failed_while_r_0071ae40,uVar1,iVar2,uVar3);
  return;
}



//==== 0052ce28  ns=Global  size=0xb0
// sig: undefined FUN_0052ce28(void)
// callers(12): 00512750 FUN_00512750; 00513220 FUN_00513220; 0051399c FUN_0051399c; 00515a1c FUN_00515a1c; 00515ed4 FUN_00515ed4; 00516634 FUN_00516634; 00516bcc FUN_00516bcc; 00516fb8 FUN_00516fb8; 00517560 FUN_00517560; 005177d8 FUN_005177d8; 00531144 FUN_00531144; 00532660 FUN_00532660
// callees(3): 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 0800007a syscall::syscall_sys_rwlock_rlock
// strings: 00668db8: "read-locking invalid rwlock '%s'\n" | 00668d70: "sys_rwlock_rlock failed while read-locking rwlock '%s': %d (%s)\n"

void FUN_0052ce28(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    fios::print_tty4(PTR_s_read_locking_invalid_rwlock___s__0071ae4c,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = syscall::syscall_sys_rwlock_rlock(*(int *)(param_1 + 0xc),0);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = fios::strerror_wrapper(iVar2);
  fios::print_tty4(PTR_s_sys_rwlock_rlock_failed_while_re_0071ae48,uVar1,iVar2,uVar3);
  return;
}



//==== 0052ced8  ns=Global  size=0x9c
// sig: undefined FUN_0052ced8(void)
// callers(3): 0051f3e0 FUN_0051f3e0; 005238c0 FUN_005238c0; 005258cc FUN_005258cc
// callees(3): 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 0800002c syscall::syscall_sys_ppu_thread_join
// strings: 00668de0: "sys_ppu_thread_join failed for thread '%s': %d (%s)\n"

void FUN_0052ced8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_30 [16];
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    iVar1 = syscall::syscall_sys_ppu_thread_join(*(longlong *)(param_1 + 0x38),local_30);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      uVar2 = fios::strerror_wrapper(iVar1);
      fios::print_tty4(PTR_s_sys_ppu_thread_join_failed_for_t_0071ae50,param_1 + 8,iVar1,uVar2);
    }
  }
  return;
}



//==== 0052cf74  ns=Global  size=0xa4
// sig: undefined FUN_0052cf74(void)
// callers(0): 
// callees(4): 005107d0 fios::handle_invalidate_magic; 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 08000079 syscall::syscall_sys_rwlock_destroy
// strings: 00668e60: "deleting invalid rwlock '%s'\n" | 00668e18: "sys_rwlock_destroy failed while destroying rwlock '%s': %d (%s)\n"

void FUN_0052cf74(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    fios::print_tty4(PTR_s_deleting_invalid_rwlock___s__0071ae58,*(undefined4 *)(param_1 + 8));
  }
  else {
    iVar2 = syscall::syscall_sys_rwlock_destroy(*(int *)(param_1 + 0xc));
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar3 = fios::strerror_wrapper(iVar2);
      fios::print_tty4(PTR_s_sys_rwlock_destroy_failed_while_d_0071ae54,uVar1,iVar2,uVar3);
    }
  }
  fios::handle_invalidate_magic(param_1);
  return;
}



//==== 0052d018  ns=Global  size=0x68
// sig: undefined FUN_0052d018(void)
// callers(3): 0051f3e0 FUN_0051f3e0; 005238c0 FUN_005238c0; 005258cc FUN_005258cc
// callees(2): 005107d0 fios::handle_invalidate_magic; 0052cbd8 fios::print_tty4
// strings: 00668e80: 'WARNING! FIOS thread %s is still running as object is destroyed.'

void FUN_0052d018(int param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    fios::print_tty4(PTR_s_WARNING__FIOS_thread__s_is_still_0071ae5c,param_1 + 8);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  fios::handle_invalidate_magic(param_1);
  return;
}



//==== 0052d080  ns=Global  size=0x68
// sig: undefined FUN_0052d080(void)
// callers(0): 
// callees(2): 005107d0 fios::handle_invalidate_magic; 0052cbd8 fios::print_tty4
// strings: 00668e80: 'WARNING! FIOS thread %s is still running as object is destroyed.'

void FUN_0052d080(int param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    fios::print_tty4(PTR_s_WARNING__FIOS_thread__s_is_still_0071ae5c,param_1 + 8);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  fios::handle_invalidate_magic(param_1);
  return;
}



//==== 0052d0e8  ns=Global  size=0xb4
// sig: undefined FUN_0052d0e8(void)
// callers(11): 005130cc FUN_005130cc; 00513320 FUN_00513320; 0051345c FUN_0051345c; 0051b8c4 FUN_0051b8c4; 0051ba44 fios::trace_markers_alloc; 0051f3e0 FUN_0051f3e0; 005238c0 FUN_005238c0; 005258cc FUN_005258cc; 00529580 FUN_00529580; 00529628 FUN_00529628; 005296b8 FUN_005296b8
// callees(4): 005107d0 fios::handle_invalidate_magic; 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 00650504 sys::sys_lwcond_destroy

void FUN_0052d0e8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = sys::sys_lwcond_destroy((int *)(param_1 + 0x10));
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar3 = fios::strerror_wrapper(iVar2);
      fios::print_tty4(*(undefined4 *)(iStack_64 + -0x74c8),uVar1,iVar2,uVar3);
    }
    uVar1 = **(undefined4 **)(iStack_64 + -0x74c4);
    *(undefined4 *)(param_1 + 0x14) = (*(undefined4 **)(iStack_64 + -0x74c4))[1];
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  fios::handle_invalidate_magic(param_1);
  return;
}



//==== 0052d19c  ns=Global  size=0x124
// sig: undefined FUN_0052d19c(void)
// callers(11): 005118e8 FUN_005118e8; 00511a80 FUN_00511a80; 00511c34 FUN_00511c34; 00511de8 FUN_00511de8; 00511f8c FUN_00511f8c; 00512130 FUN_00512130; 0051ba44 fios::trace_markers_alloc; 0051dcc4 FUN_0051dcc4; 0051e6cc FUN_0051e6cc; 00528914 FUN_00528914; 00528c7c FUN_00528c7c
// callees(6): 005106cc FUN_005106cc; 005193cc FUN_005193cc; 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 00604800 FUN_00604800; 006507a4 sys::sys_lwcond_create

void FUN_0052d19c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_94;
  undefined1 local_50 [16];
  
  FUN_005106cc(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  FUN_00604800(param_1);
  *(undefined4 *)(param_1 + 4) = 0x636f6e64;
  FUN_005193cc(local_50,param_2,8);
  uVar1 = *(undefined4 *)(PTR_DAT_0071ae64 + 4);
  uVar2 = *(undefined4 *)PTR_DAT_0071ae64;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  iVar4 = sys::sys_lwcond_create(param_1 + 0x10,param_4 + 0x10,local_50);
  if (iVar4 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar5 = fios::strerror_wrapper(iVar4);
    fios::print_tty4(*(undefined4 *)(iStack_94 + -0x74c0),uVar3,iVar4,uVar5);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
  }
  return;
}



//==== 0052d2c0  ns=Global  size=0xb0
// sig: undefined FUN_0052d2c0(void)
// callers(0): 
// callees(4): 005107d0 fios::handle_invalidate_magic; 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 00650784 sys::sys_lwmutex_destroy
// strings: 00668f80: "deleting invalid mutex '%s'\n"

void FUN_0052d2c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(PTR_DAT_0071ae64 + 0x10) == *(int *)(param_1 + 0x18)) {
    fios::print_tty4(PTR_s_deleting_invalid_mutex___s__0071ae70,*(undefined4 *)(param_1 + 8));
  }
  else {
    iVar2 = sys::sys_lwmutex_destroy(param_1 + 0x10);
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar3 = fios::strerror_wrapper(iVar2);
      fios::print_tty4(*(undefined4 *)(iStack_64 + -0x74bc),uVar1,iVar2,uVar3);
    }
  }
  fios::handle_invalidate_magic(param_1);
  return;
}



//==== 0052d370  ns=Global  size=0x108
// sig: undefined FUN_0052d370(void)
// callers(19): 005118e8 FUN_005118e8; 00511a80 FUN_00511a80; 00511c34 FUN_00511c34; 00511de8 FUN_00511de8; 00511f8c FUN_00511f8c; 00512130 FUN_00512130; 005199ac FUN_005199ac; 00519aa4 FUN_00519aa4; 00519c8c FUN_00519c8c; 0051ba44 fios::trace_markers_alloc; 0051dcc4 FUN_0051dcc4; 0051e6cc FUN_0051e6cc; 00528240 FUN_00528240; 00528914 FUN_00528914; 00528c7c FUN_00528c7c; 00531338 FUN_00531338; 00531b40 FUN_00531b40; 00534d38 FUN_00534d38; 005350b0 FUN_005350b0
// callees(6): 005106cc FUN_005106cc; 005193cc FUN_005193cc; 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 00604828 FUN_00604828; 006505a4 sys::sys_lwmutex_create

void FUN_0052d370(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iStack_84;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  
  FUN_005106cc(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_00604828(param_1);
  *(undefined4 *)(param_1 + 4) = 0x6d757478;
  FUN_005193cc(local_38,param_2,8);
  uVar4 = *(undefined8 *)(PTR_DAT_0071ae64 + 0x18);
  uVar5 = *(undefined8 *)(PTR_DAT_0071ae64 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(PTR_DAT_0071ae64 + 8);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  iVar2 = sys::sys_lwmutex_create(param_1 + 0x10,local_40);
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar3 = fios::strerror_wrapper(iVar2);
    fios::print_tty4(*(undefined4 *)(iStack_84 + -0x74b4),uVar1,iVar2,uVar3);
  }
  return;
}



//==== 0052d478  ns=Global  size=0x108
// sig: undefined FUN_0052d478(void)
// callers(0): 
// callees(6): 005106cc FUN_005106cc; 005193cc FUN_005193cc; 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 00604828 FUN_00604828; 006505a4 sys::sys_lwmutex_create

void FUN_0052d478(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iStack_84;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  
  FUN_005106cc(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_00604828(param_1);
  *(undefined4 *)(param_1 + 4) = 0x6d757478;
  FUN_005193cc(local_38,param_2,8);
  uVar4 = *(undefined8 *)(PTR_DAT_0071ae64 + 0x18);
  uVar5 = *(undefined8 *)(PTR_DAT_0071ae64 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(PTR_DAT_0071ae64 + 8);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  iVar2 = sys::sys_lwmutex_create(param_1 + 0x10,local_40);
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar3 = fios::strerror_wrapper(iVar2);
    fios::print_tty4(*(undefined4 *)(iStack_84 + -0x74b4),uVar1,iVar2,uVar3);
  }
  return;
}



//==== 0052d580  ns=Global  size=0xd4
// sig: undefined FUN_0052d580(void)
// callers(1): 0052d654 FUN_0052d654
// callees(3): 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 006505c4 sys::sys_ppu_thread_get_id

int FUN_0052d580(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  longlong lVar5;
  int iStack_74;
  int local_30 [2];
  undefined1 local_28 [4];
  int iStack_24;
  
  iVar2 = sys::sys_ppu_thread_get_id(local_28);
  if (iVar2 == 0) {
    syscall();
    if (iStack_24 == 0) {
      iVar2 = 4;
      piVar4 = (int *)(*(int *)(iStack_74 + -0x7500) + 0x2c);
      lVar5 = 5;
      do {
        iVar1 = *piVar4;
        piVar4 = piVar4 + -1;
        if (iVar1 == local_30[0]) {
          return iVar2;
        }
        iVar2 = iVar2 + -1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    else {
      uVar3 = fios::strerror_wrapper(iStack_24,local_30);
      fios::print_tty4(*(undefined4 *)(iStack_74 + -0x74b0),iStack_24,uVar3);
      iVar2 = -1;
    }
  }
  else {
    uVar3 = fios::strerror_wrapper(iVar2);
    fios::print_tty4(*(undefined4 *)(iStack_74 + -0x74ac),iVar2,uVar3);
    iVar2 = -1;
  }
  return iVar2;
}



//==== 0052d654  ns=Global  size=0xd4
// sig: undefined FUN_0052d654(void)
// callers(0): 
// callees(4): 0052cbd8 fios::print_tty4; 0052d580 FUN_0052d580; 005c84e4 fios::strerror_wrapper; 006505c4 sys::sys_ppu_thread_get_id

undefined4 FUN_0052d654(ulonglong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  undefined1 local_20 [4];
  int iStack_1c;
  
  uVar1 = FUN_0052d580();
  if ((param_1 & 0xffffffff) < 5) {
    iVar2 = sys::sys_ppu_thread_get_id(local_20);
    if (iVar2 == 0) {
      syscall();
      if (iStack_1c != 0) {
        uVar3 = fios::strerror_wrapper
                          (iStack_1c,
                           *(undefined4 *)
                            ((int)((param_1 & 0xffffffff) << 2) + *(int *)(iStack_64 + -0x7500) +
                            0x1c));
        fios::print_tty4(*(undefined4 *)(iStack_64 + -0x74a8),iStack_1c,uVar3);
      }
    }
    else {
      uVar3 = fios::strerror_wrapper(iVar2);
      fios::print_tty4(*(undefined4 *)(iStack_64 + -0x74ac),iVar2,uVar3);
    }
  }
  return uVar1;
}



//==== 0052d728  ns=Global  size=0x74
// sig: undefined FUN_0052d728(void)
// callers(0): 
// callees(3): 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 006505c4 sys::sys_ppu_thread_get_id

undefined4 FUN_0052d728(void)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_64;
  undefined1 local_20 [24];
  
  iVar1 = sys::sys_ppu_thread_get_id(local_20);
  if (iVar1 != 0) {
    uVar2 = fios::strerror_wrapper(iVar1);
    fios::print_tty4(*(undefined4 *)(iStack_64 + -0x74ac),iVar1,uVar2);
  }
  return 0;
}



//==== 0052d79c  ns=Global  size=0x28
// sig: undefined FUN_0052d79c(void)
// callers(0): 
// callees(1): 00650744 sys::sys_ppu_thread_exit

void FUN_0052d79c(void)

{
  sys::sys_ppu_thread_exit(1);
  return;
}



//==== 0052d7c4  ns=Global  size=0x50
// sig: undefined FUN_0052d7c4(void)
// callers(0): 
// callees(1): 00650744 sys::sys_ppu_thread_exit

void FUN_0052d7c4(int param_1)

{
  (*(code *)**(undefined4 **)(param_1 + 0x30))(param_1,*(undefined4 *)(param_1 + 0x34));
  sys::sys_ppu_thread_exit(0);
  return;
}



//==== 0052d814  ns=Global  size=0xf8
// sig: undefined FUN_0052d814(void)
// callers(4): 0051dcc4 FUN_0051dcc4; 0051e6cc FUN_0051e6cc; 0052d90c FUN_0052d90c; 0052e828 FUN_0052e828
// callees(3): 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 00650524 sys::sys_ppu_thread_create

void FUN_0052d814(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iStack_64;
  
  puVar2 = PTR_PTR_0071ae84;
  puVar1 = PTR_DAT_0071ae28;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar5 = *(uint *)(param_1 + 0x28);
    if (4 < uVar5) {
      uVar5 = 3;
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    iVar3 = sys::sys_ppu_thread_create
                      (param_1 + 0x38,puVar2,param_1,*(undefined4 *)(puVar1 + uVar5 * 4 + 0x1c),
                       *(undefined4 *)(puVar1 + uVar5 * 4 + 0x30),1,param_1 + 8);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
    else {
      uVar4 = fios::strerror_wrapper(iVar3);
      fios::print_tty4(*(undefined4 *)(iStack_64 + -0x74a0),param_1 + 8,iVar3,uVar4);
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
  }
  return;
}



//==== 0052d90c  ns=Global  size=0x15c
// sig: undefined FUN_0052d90c(void)
// callers(0): 
// callees(4): 005106cc FUN_005106cc; 0052d814 FUN_0052d814; 005cd198 FUN_005cd198; 00604850 FUN_00604850
// strings: 006690a0: '%s %d'

void FUN_0052d90c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  char in_RESERVE;
  byte in_cr0;
  
  FUN_005106cc(param_1);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  FUN_00604850(param_1);
  puVar3 = PTR_DAT_0071ae20;
  puVar4 = (uint *)(PTR_DAT_0071ae20 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0x74687264;
  do {
    uVar1 = *(uint *)(puVar3 + 0x10);
    instructionSynchronize();
    while (uVar1 == *puVar4) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 + 1,0,ZEXT48(puVar4));
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        instructionSynchronize();
        FUN_005cd198(param_1 + 8,0x20,PTR_s__s__d_0071ae8c,param_2,*(undefined4 *)(puVar3 + 0x10));
        if (param_6 == 0) {
          return;
        }
        FUN_0052d814(param_1);
        return;
      }
    }
  } while( true );
}



//==== 0052da68  ns=Global  size=0x124
// sig: undefined FUN_0052da68(void)
// callers(0): 
// callees(1): 005c58b0 FUN_005c58b0

int FUN_0052da68(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_20 [24];
  
  iVar4 = 0;
  if ((param_1 < 0) || (param_1 == 0)) {
    param_2[8] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
  }
  else {
    puVar5 = (undefined4 *)FUN_005c58b0(local_20);
    iVar4 = -((int)(((int)puVar5 >> 0x1f) - ((int)puVar5 >> 0x1f ^ (uint)puVar5)) >> 0x1f);
    if (iVar4 == 0) {
      param_2[8] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
    }
    else {
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *param_2 = *puVar5;
      param_2[1] = uVar1;
      param_2[2] = uVar2;
      param_2[3] = uVar3;
      uVar1 = puVar5[5];
      uVar2 = puVar5[6];
      uVar3 = puVar5[7];
      param_2[4] = puVar5[4];
      param_2[5] = uVar1;
      param_2[6] = uVar2;
      param_2[7] = uVar3;
      param_2[8] = puVar5[8];
    }
  }
  return iVar4;
}



//==== 0052db8c  ns=Global  size=0xb4
// sig: undefined FUN_0052db8c(void)
// callers(0): 
// callees(4): 005107d0 fios::handle_invalidate_magic; 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 00650504 sys::sys_lwcond_destroy

void FUN_0052db8c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = sys::sys_lwcond_destroy((int *)(param_1 + 0x10));
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar3 = fios::strerror_wrapper(iVar2);
      fios::print_tty4(*(undefined4 *)(iStack_64 + -0x74c8),uVar1,iVar2,uVar3);
    }
    uVar1 = **(undefined4 **)(iStack_64 + -0x74c4);
    *(undefined4 *)(param_1 + 0x14) = (*(undefined4 **)(iStack_64 + -0x74c4))[1];
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  fios::handle_invalidate_magic(param_1);
  return;
}



//==== 0052dc40  ns=Global  size=0xb0
// sig: undefined FUN_0052dc40(void)
// callers(4): 005128f4 FUN_005128f4; 00512ab0 FUN_00512ab0; 0051c390 fios::op_event_dispatch; 00529748 FUN_00529748
// callees(3): 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 00650804 sys::sys_lwcond_signal_all
// strings: 006690e0: "broadcast of invalid cond '%s'\n"

void FUN_0052dc40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    fios::print_tty4(PTR_s_broadcast_of_invalid_cond___s__0071ae94,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = sys::sys_lwcond_signal_all((int *)(param_1 + 0x10));
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = fios::strerror_wrapper(iVar2);
  fios::print_tty4(*(undefined4 *)(iStack_64 + -0x7498),uVar1,iVar2,uVar3);
  return;
}



//==== 0052dcf0  ns=Global  size=0xb0
// sig: undefined FUN_0052dcf0(void)
// callers(11): 0051f1f4 FUN_0051f1f4; 0051f3e0 FUN_0051f3e0; 0051ff58 FUN_0051ff58; 00522104 FUN_00522104; 005237dc FUN_005237dc; 005238c0 FUN_005238c0; 00523f54 FUN_00523f54; 005241b8 FUN_005241b8; 005257f8 FUN_005257f8; 005258cc FUN_005258cc; 00525f48 FUN_00525f48
// callees(3): 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 00650844 sys::sys_lwcond_signal
// strings: 00669138: "signal of invalid cond '%s'\n"

void FUN_0052dcf0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    fios::print_tty4(PTR_s_signal_of_invalid_cond___s__0071ae9c,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = sys::sys_lwcond_signal((int *)(param_1 + 0x10));
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = fios::strerror_wrapper(iVar2);
  fios::print_tty4(*(undefined4 *)(iStack_64 + -0x7490),uVar1,iVar2,uVar3);
  return;
}



//==== 0052dda0  ns=fios  size=0xb8
// sig: undefined lwmutex_unlock_checked(void)
// callers(63): 005126c8 FUN_005126c8; 00512820 FUN_00512820; 005128f4 FUN_005128f4; 00512ab0 FUN_00512ab0; 00512bac FUN_00512bac; 00512e10 FUN_00512e10; 00512ec0 FUN_00512ec0; 00512fb4 FUN_00512fb4; 00513220 FUN_00513220; 00514124 FUN_00514124; 005155c4 FUN_005155c4; 005168a8 FUN_005168a8; 00517560 FUN_00517560; 005177d8 FUN_005177d8; 00517d4c FUN_00517d4c; 0051a2f4 FUN_0051a2f4; 0051a35c FUN_0051a35c; 0051a480 FUN_0051a480; 0051a528 FUN_0051a528; 0051a754 FUN_0051a754; 0051ad94 FUN_0051ad94; 0051ae6c FUN_0051ae6c; 0051aed4 FUN_0051aed4; 0051af40 FUN_0051af40; 0051afac FUN_0051afac
// callees(3): 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 006504e4 sys::sys_lwmutex_unlock
// strings: 00669190: "attempt to unlock invalid mutex '%s'\n"

void fios::lwmutex_unlock_checked(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(PTR_DAT_0071ae64 + 0x10) == *(int *)(param_1 + 0x18)) {
    print_tty4(PTR_s_attempt_to_unlock_invalid_mutex___0071aea4,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = sys::sys_lwmutex_unlock(param_1 + 0x10);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = strerror_wrapper(iVar2);
  print_tty4(*(undefined4 *)(iStack_64 + -0x7488),uVar1,iVar2,uVar3);
  return;
}



//==== 0052de58  ns=fios  size=0xbc
// sig: undefined lwmutex_lock_checked(void)
// callers(63): 005126c8 FUN_005126c8; 00512820 FUN_00512820; 005128f4 FUN_005128f4; 00512ab0 FUN_00512ab0; 00512bac FUN_00512bac; 00512e10 FUN_00512e10; 00512ec0 FUN_00512ec0; 00512fb4 FUN_00512fb4; 00513220 FUN_00513220; 00514124 FUN_00514124; 005155c4 FUN_005155c4; 005168a8 FUN_005168a8; 00517560 FUN_00517560; 005177d8 FUN_005177d8; 00517d4c FUN_00517d4c; 0051a2f4 FUN_0051a2f4; 0051a35c FUN_0051a35c; 0051a480 FUN_0051a480; 0051a528 FUN_0051a528; 0051a754 FUN_0051a754; 0051ad94 FUN_0051ad94; 0051ae6c FUN_0051ae6c; 0051aed4 FUN_0051aed4; 0051af40 FUN_0051af40; 0051afac FUN_0051afac
// callees(3): 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 006504c4 sys::sys_lwmutex_lock
// strings: 006691e8: "attempt to lock invalid mutex '%s'\n"

void fios::lwmutex_lock_checked(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(PTR_DAT_0071ae64 + 0x10) == *(int *)(param_1 + 0x18)) {
    print_tty4(PTR_s_attempt_to_lock_invalid_mutex____0071aeac,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar2 = sys::sys_lwmutex_lock(param_1 + 0x10,0);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = strerror_wrapper(iVar2);
  print_tty4(*(undefined4 *)(iStack_64 + -0x7480),uVar1,iVar2,uVar3);
  return;
}



//==== 0052df14  ns=Global  size=0xb0
// sig: undefined FUN_0052df14(void)
// callers(23): 005130cc FUN_005130cc; 00513320 FUN_00513320; 0051345c FUN_0051345c; 005199ac FUN_005199ac; 0051a26c FUN_0051a26c; 0051a858 FUN_0051a858; 0051a9f0 FUN_0051a9f0; 0051ab68 FUN_0051ab68; 0051b8c4 FUN_0051b8c4; 0051ba44 fios::trace_markers_alloc; 0051f3e0 FUN_0051f3e0; 005238c0 FUN_005238c0; 005258cc FUN_005258cc; 00528240 FUN_00528240; 00529580 FUN_00529580; 00529628 FUN_00529628; 005296b8 FUN_005296b8; 0053126c FUN_0053126c; 00532080 FUN_00532080; 00532134 FUN_00532134; 005342d4 FUN_005342d4; 00535428 FUN_00535428; 0053562c FUN_0053562c
// callees(4): 005107d0 fios::handle_invalidate_magic; 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 00650784 sys::sys_lwmutex_destroy
// strings: 00668f80: "deleting invalid mutex '%s'\n"

void FUN_0052df14(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_64;
  
  if (*(int *)(PTR_DAT_0071ae64 + 0x10) == *(int *)(param_1 + 0x18)) {
    fios::print_tty4(PTR_s_deleting_invalid_mutex___s__0071ae70,*(undefined4 *)(param_1 + 8));
  }
  else {
    iVar2 = sys::sys_lwmutex_destroy(param_1 + 0x10);
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar3 = fios::strerror_wrapper(iVar2);
      fios::print_tty4(*(undefined4 *)(iStack_64 + -0x74bc),uVar1,iVar2,uVar3);
    }
  }
  fios::handle_invalidate_magic(param_1);
  return;
}



//==== 0052dfc4  ns=Global  size=0xf4
// sig: undefined FUN_0052dfc4(void)
// callers(0): 
// callees(5): 005106cc FUN_005106cc; 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 006047d8 FUN_006047d8; 08000078 syscall::syscall_sys_rwlock_create
// strings: 00669210: "sys_rwlock_create failed while creating rwlock '%s': %d (%s)\n"

void FUN_0052dfc4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_50 [32];
  
  FUN_005106cc(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_006047d8(param_1);
  *(undefined4 *)(param_1 + 4) = 0x72776c6b;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = syscall::syscall_sys_rwlock_create(param_1 + 0xc,local_50);
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar3 = fios::strerror_wrapper(iVar2);
    fios::print_tty4(PTR_s_sys_rwlock_create_failed_while_c_0071aeb0,uVar1,iVar2,uVar3);
  }
  return;
}



//==== 0052e0b8  ns=Global  size=0x124
// sig: undefined FUN_0052e0b8(void)
// callers(0): 
// callees(6): 005106cc FUN_005106cc; 005193cc FUN_005193cc; 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 00604800 FUN_00604800; 006507a4 sys::sys_lwcond_create

void FUN_0052e0b8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_94;
  undefined1 local_50 [16];
  
  FUN_005106cc(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  FUN_00604800(param_1);
  *(undefined4 *)(param_1 + 4) = 0x636f6e64;
  FUN_005193cc(local_50,param_2,8);
  uVar1 = *(undefined4 *)(PTR_DAT_0071ae64 + 4);
  uVar2 = *(undefined4 *)PTR_DAT_0071ae64;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  iVar4 = sys::sys_lwcond_create(param_1 + 0x10,param_4 + 0x10,local_50);
  if (iVar4 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar5 = fios::strerror_wrapper(iVar4);
    fios::print_tty4(*(undefined4 *)(iStack_94 + -0x74c0),uVar3,iVar4,uVar5);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
  }
  return;
}



//==== 0052e1dc  ns=Global  size=0xf4
// sig: undefined FUN_0052e1dc(void)
// callers(12): 005118e8 FUN_005118e8; 00511a80 FUN_00511a80; 00511c34 FUN_00511c34; 00511de8 FUN_00511de8; 00511f8c FUN_00511f8c; 00512130 FUN_00512130; 0051dcc4 FUN_0051dcc4; 0051e6cc FUN_0051e6cc; 00528914 FUN_00528914; 00528c7c FUN_00528c7c; 00531338 FUN_00531338; 00531b40 FUN_00531b40
// callees(5): 005106cc FUN_005106cc; 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 006047d8 FUN_006047d8; 08000078 syscall::syscall_sys_rwlock_create
// strings: 00669210: "sys_rwlock_create failed while creating rwlock '%s': %d (%s)\n"

void FUN_0052e1dc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_50 [32];
  
  FUN_005106cc(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_006047d8(param_1);
  *(undefined4 *)(param_1 + 4) = 0x72776c6b;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = syscall::syscall_sys_rwlock_create(param_1 + 0xc,local_50);
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar3 = fios::strerror_wrapper(iVar2);
    fios::print_tty4(PTR_s_sys_rwlock_create_failed_while_c_0071aeb0,uVar1,iVar2,uVar3);
  }
  return;
}



//==== 0052e2d0  ns=Global  size=0x1cc
// sig: undefined FUN_0052e2d0(void)
// callers(0): 
// callees(1): 0052c8c4 FUN_0052c8c4

uint FUN_0052e2d0(ulonglong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  double dVar4;
  
  if ((longlong)param_1 < 1) {
    *param_2 = 1;
    return 0;
  }
  uVar2 = FUN_0052c8c4();
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  if (param_1 < uVar2) {
    dVar4 = (double)(uVar2 - param_1) * *(double *)(PTR_DAT_0071ae20 + 8);
    if ((double)DAT_0071aeb4 <= dVar4) {
      uVar2 = (longlong)(dVar4 - (double)DAT_0071aeb4) ^ 0x8000000000000000;
    }
    else {
      uVar2 = (ulonglong)dVar4;
    }
    *param_2 = lVar1 - uVar2;
    if (lVar1 < (longlong)uVar2) {
      uVar3 = 1;
      *param_2 = 1;
      goto LAB_0052e368;
    }
  }
  else {
    dVar4 = (double)(param_1 - uVar2) * *(double *)(PTR_DAT_0071ae20 + 8);
    if ((double)DAT_0071aeb4 <= dVar4) {
      uVar2 = (longlong)(dVar4 - (double)DAT_0071aeb4) ^ 0x8000000000000000;
    }
    else {
      uVar2 = (ulonglong)dVar4;
    }
    *param_2 = lVar1 + uVar2;
    if ((longlong)(0x7fffffffffffffff - uVar2) < lVar1) {
      uVar3 = 1;
      *param_2 = 0x7fffffffffffffff;
      goto LAB_0052e368;
    }
  }
  uVar3 = 0;
LAB_0052e368:
  return uVar3 ^ 1;
}



//==== 0052e49c  ns=Global  size=0x15c
// sig: undefined FUN_0052e49c(void)
// callers(8): 0051179c FUN_0051179c; 00512bac FUN_00512bac; 0051be64 fios::op_wait; 0051f1f4 FUN_0051f1f4; 00523238 FUN_00523238; 005241b8 FUN_005241b8; 00525f48 FUN_00525f48; 0052a048 FUN_0052a048
// callees(3): 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 00650564 sys::sys_lwcond_wait
// strings: 00669280: "wait for invalid cond '%s'\n"

undefined4 FUN_0052e49c(int param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  double dVar5;
  ulonglong uVar6;
  int iStack_74;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    fios::print_tty4(PTR_s_wait_for_invalid_cond___s__0071aebc,*(undefined4 *)(param_1 + 8));
    return 0;
  }
  lVar3 = 0;
  if (param_3 != 0) {
    do {
      lVar3 = TBLr;
    } while ((int)lVar3 == 0);
    if (lVar3 <= param_3) {
      dVar5 = (double)(param_3 - lVar3) / *(double *)(PTR_DAT_0071ae20 + 8);
      if ((double)DAT_0071aeb4 <= dVar5) {
        uVar6 = (longlong)(dVar5 - (double)DAT_0071aeb4) ^ 0x8000000000000000;
      }
      else {
        uVar6 = (ulonglong)dVar5;
      }
      lVar3 = (longlong)(uVar6 + 999) / 1000;
      if (lVar3 != 0) goto LAB_0052e4cc;
    }
    lVar3 = 1;
  }
LAB_0052e4cc:
  iVar1 = sys::sys_lwcond_wait((int *)(param_1 + 0x10),lVar3);
  uVar4 = 1;
  if ((iVar1 != 0) && (uVar4 = 0, iVar1 != -0x7ffefff5)) {
    uVar4 = *(undefined4 *)(param_1 + 8);
    uVar2 = fios::strerror_wrapper(iVar1);
    fios::print_tty4(*(undefined4 *)(iStack_74 + -0x7470),uVar4,iVar1,uVar2);
    uVar4 = 0;
  }
  return uVar4;
}



//==== 0052e5f8  ns=Global  size=0xa4
// sig: undefined FUN_0052e5f8(void)
// callers(15): 005130cc FUN_005130cc; 00513320 FUN_00513320; 0051345c FUN_0051345c; 0051f3e0 FUN_0051f3e0; 005238c0 FUN_005238c0; 005258cc FUN_005258cc; 00528914 FUN_00528914; 00528b98 FUN_00528b98; 00528c7c FUN_00528c7c; 00529580 FUN_00529580; 00529628 FUN_00529628; 005296b8 FUN_005296b8; 0053126c FUN_0053126c; 00532080 FUN_00532080; 00532134 FUN_00532134
// callees(4): 005107d0 fios::handle_invalidate_magic; 0052cbd8 fios::print_tty4; 005c84e4 fios::strerror_wrapper; 08000079 syscall::syscall_sys_rwlock_destroy
// strings: 00668e60: "deleting invalid rwlock '%s'\n" | 00668e18: "sys_rwlock_destroy failed while destroying rwlock '%s': %d (%s)\n"

void FUN_0052e5f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    fios::print_tty4(PTR_s_deleting_invalid_rwlock___s__0071ae58,*(undefined4 *)(param_1 + 8));
  }
  else {
    iVar2 = syscall::syscall_sys_rwlock_destroy(*(int *)(param_1 + 0xc));
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar3 = fios::strerror_wrapper(iVar2);
      fios::print_tty4(PTR_s_sys_rwlock_destroy_failed_while_d_0071ae54,uVar1,iVar2,uVar3);
    }
  }
  fios::handle_invalidate_magic(param_1);
  return;
}



//==== 0052e69c  ns=Global  size=0x18c
// sig: undefined FUN_0052e69c(void)
// callers(0): 
// callees(1): 0052c8c4 FUN_0052c8c4

undefined8 FUN_0052e69c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_0052c8c4();
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  if (param_1 < lVar1) {
    dVar3 = (double)(lVar1 - param_1) / *(double *)(PTR_DAT_0071ae20 + 8);
    if ((double)DAT_0071aeb4 <= dVar3) {
      uVar4 = (longlong)(dVar3 - (double)DAT_0071aeb4) ^ 0x8000000000000000;
    }
    else {
      uVar4 = (ulonglong)dVar3;
    }
    *param_2 = uVar2 - uVar4;
    if (uVar2 < uVar4) {
      *param_2 = 1;
      return 0;
    }
  }
  else {
    dVar3 = (double)(param_1 - lVar1) / *(double *)(PTR_DAT_0071ae20 + 8);
    if ((double)DAT_0071aeb4 <= dVar3) {
      uVar4 = (longlong)(dVar3 - (double)DAT_0071aeb4) ^ 0x8000000000000000;
    }
    else {
      uVar4 = (ulonglong)dVar3;
    }
    *param_2 = uVar2 + uVar4;
    if (0x7fffffffffffffff - uVar4 < uVar2) {
      *param_2 = 0x7fffffffffffffff;
      return 0;
    }
  }
  return 1;
}



//==== 0052e828  ns=Global  size=0x15c
// sig: undefined FUN_0052e828(void)
// callers(2): 0051dcc4 FUN_0051dcc4; 0051e6cc FUN_0051e6cc
// callees(4): 005106cc FUN_005106cc; 0052d814 FUN_0052d814; 005cd198 FUN_005cd198; 00604850 FUN_00604850
// strings: 006690a0: '%s %d'

void FUN_0052e828(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  char in_RESERVE;
  byte in_cr0;
  
  FUN_005106cc(param_1);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  FUN_00604850(param_1);
  puVar3 = PTR_DAT_0071ae20;
  puVar4 = (uint *)(PTR_DAT_0071ae20 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0x74687264;
  do {
    uVar1 = *(uint *)(puVar3 + 0x10);
    instructionSynchronize();
    while (uVar1 == *puVar4) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 + 1,0,ZEXT48(puVar4));
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        instructionSynchronize();
        FUN_005cd198(param_1 + 8,0x20,PTR_s__s__d_0071ae8c,param_2,*(undefined4 *)(puVar3 + 0x10));
        if (param_6 == 0) {
          return;
        }
        FUN_0052d814(param_1);
        return;
      }
    }
  } while( true );
}



//==== 0052e984  ns=Global  size=0xbc
// sig: undefined FUN_0052e984(void)
// callers(5): 00523238 FUN_00523238; 005241b8 FUN_005241b8; 00528598 FUN_00528598; 00529808 FUN_00529808; 00531144 FUN_00531144
// callees(0): 

longlong FUN_0052e984(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  ulonglong uVar3;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  if (lVar1 < param_1) {
    dVar2 = (double)(param_1 - lVar1) / *(double *)(PTR_DAT_0071ae20 + 8);
    if ((double)DAT_0071aeb4 <= dVar2) {
      uVar3 = (longlong)(dVar2 - (double)DAT_0071aeb4) ^ 0x8000000000000000;
    }
    else {
      uVar3 = (ulonglong)dVar2;
    }
    lVar1 = (longlong)(uVar3 + 999) / 1000;
    param_1 = 1;
    if (lVar1 != 0) {
      param_1 = lVar1;
    }
    syscall();
  }
  return param_1;
}



//==== 0052ea40  ns=Global  size=0x100
// sig: undefined FUN_0052ea40(void)
// callers(1): 005194f0 FUN_005194f0
// callees(3): 0052cbd8 fios::print_tty4; 0064f4a4 cell::cellSysmoduleLoadModule; 006500e4 cell::cellSysmoduleInitialize

void FUN_0052ea40(void)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iStack_64;
  
  iVar2 = cell::cellSysmoduleInitialize();
  if ((iVar2 == 0) || (iVar2 == -0x7ffedfff)) {
    psVar3 = *(short **)(iStack_64 + -0x7468);
    sVar1 = *psVar3;
    if (sVar1 != -1) {
      do {
        psVar3 = psVar3 + 1;
        iVar2 = cell::cellSysmoduleLoadModule(sVar1);
        if ((iVar2 != 0) && (iVar2 != -0x7ffedfff)) {
          fios::print_tty4(*(undefined4 *)(iStack_64 + -0x7460),sVar1,iVar2);
        }
        sVar1 = *psVar3;
      } while (sVar1 != -1);
      return;
    }
  }
  else {
    fios::print_tty4(*(undefined4 *)(iStack_64 + -0x7464),iVar2);
  }
  return;
}



//==== 0052eb40  ns=Global  size=0x50
// sig: undefined FUN_0052eb40(void)
// callers(1): 0052f938 FUN_0052f938
// callees(0): 

void FUN_0052eb40(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 == 0) {
    return;
  }
  uVar1 = 0;
  do {
    puVar3 = (undefined4 *)(uVar1 + param_2);
    puVar2 = (undefined1 *)(uVar1 + param_1);
    uVar1 = uVar1 + 4;
    *puVar2 = (char)*puVar3;
    puVar2[1] = (char)((uint)*puVar3 >> 8);
    puVar2[2] = (char)*(undefined2 *)puVar3;
    puVar2[3] = *(undefined1 *)puVar3;
  } while (uVar1 < param_3);
  return;
}



//==== 0052eb90  ns=Global  size=0x58
// sig: undefined FUN_0052eb90(void)
// callers(1): 0052ebe8 FUN_0052ebe8
// callees(0): 

void FUN_0052eb90(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  
  if (param_3 == 0) {
    return;
  }
  uVar1 = 0;
  do {
    puVar3 = (undefined1 *)(param_2 + uVar1);
    puVar2 = (uint *)(uVar1 + param_1);
    uVar1 = uVar1 + 4;
    *puVar2 = (uint)CONCAT11(puVar3[1],*puVar3) |
              (uint)(byte)puVar3[2] << 0x10 | (uint)(byte)puVar3[3] << 0x18;
  } while (uVar1 < param_3);
  return;
}



//==== 0052ebe8  ns=Global  size=0xb4c
// sig: undefined FUN_0052ebe8(void)
// callers(1): 0052f7c8 FUN_0052f7c8
// callees(1): 0052eb90 FUN_0052eb90

void FUN_0052ebe8(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  uVar11 = (ulonglong)uVar2;
  uVar3 = param_1[3];
  uVar4 = *param_1;
  FUN_0052eb90(&local_130,param_2,0x40);
  uVar8 = ((ulonglong)local_130 - 0x28955b88) +
          (ulonglong)uVar4 + ((ulonglong)(uVar2 & uVar1) | (ulonglong)uVar3 & ~uVar11);
  uVar9 = uVar11 + ((uVar8 & 0x1ffffff) << 7 | (uVar8 << 0x20) >> 0x39);
  uVar8 = ((ulonglong)local_12c - 0x173848aa) +
          (ulonglong)uVar3 + (uVar11 & uVar9 | (ulonglong)uVar1 & ~uVar9);
  uVar10 = uVar9 + ((uVar8 & 0xfffff) << 0xc | (uVar8 << 0x20) >> 0x34);
  uVar8 = (ulonglong)local_128 + 0x242070db + (ulonglong)uVar1 + (uVar9 & uVar10 | uVar11 & ~uVar10)
  ;
  uVar7 = uVar10 + ((uVar8 & 0x7fff) << 0x11 | (uVar8 << 0x20) >> 0x2f);
  uVar8 = ((ulonglong)local_124 - 0x3e423112) + uVar11 + (uVar10 & uVar7 | uVar9 & ~uVar7);
  uVar6 = uVar7 + ((uVar8 & 0x3ff) << 0x16 | (uVar8 << 0x20) >> 0x2a);
  uVar8 = ((ulonglong)local_120 - 0xa83f051) + uVar9 + (uVar7 & uVar6 | uVar10 & ~uVar6);
  uVar11 = uVar6 + ((uVar8 & 0x1ffffff) << 7 | (uVar8 << 0x20) >> 0x39);
  uVar8 = (ulonglong)local_11c + 0x4787c62a + uVar10 + (uVar6 & uVar11 | uVar7 & ~uVar11);
  uVar10 = uVar11 + ((uVar8 & 0xfffff) << 0xc | (uVar8 << 0x20) >> 0x34);
  uVar8 = (ulonglong)local_f8;
  uVar7 = ((ulonglong)local_118 - 0x57cfb9ed) + uVar7 + (uVar11 & uVar10 | uVar6 & ~uVar10);
  uVar9 = uVar10 + ((uVar7 & 0x7fff) << 0x11 | (uVar7 << 0x20) >> 0x2f);
  uVar7 = ((ulonglong)local_114 - 0x2b96aff) + uVar6 + (uVar10 & uVar9 | uVar11 & ~uVar9);
  uVar7 = uVar9 + ((uVar7 & 0x3ff) << 0x16 | (uVar7 << 0x20) >> 0x2a);
  uVar11 = (ulonglong)local_110 + 0x698098d8 + uVar11 + (uVar9 & uVar7 | uVar10 & ~uVar7);
  uVar11 = uVar7 + ((uVar11 & 0x1ffffff) << 7 | (uVar11 << 0x20) >> 0x39);
  uVar10 = ((ulonglong)local_10c - 0x74bb0851) + uVar10 + (uVar7 & uVar11 | uVar9 & ~uVar11);
  uVar10 = uVar11 + ((uVar10 & 0xfffff) << 0xc | (uVar10 << 0x20) >> 0x34);
  uVar9 = ((ulonglong)local_108 - 0xa44f) + uVar9 + (uVar11 & uVar10 | uVar7 & ~uVar10);
  uVar12 = uVar10 + ((uVar9 & 0x7fff) << 0x11 | (uVar9 << 0x20) >> 0x2f);
  uVar7 = ((ulonglong)local_104 - 0x76a32842) + uVar7 + (uVar10 & uVar12 | uVar11 & ~uVar12);
  uVar6 = uVar12 + ((uVar7 & 0x3ff) << 0x16 | (uVar7 << 0x20) >> 0x2a);
  uVar7 = (ulonglong)local_100 + 0x6b901122 + uVar11 + (uVar12 & uVar6 | uVar10 & ~uVar6);
  uVar9 = uVar6 + ((uVar7 & 0x1ffffff) << 7 | (uVar7 << 0x20) >> 0x39);
  uVar7 = ((ulonglong)local_fc - 0x2678e6d) + uVar10 + (uVar6 & uVar9 | uVar12 & ~uVar9);
  uVar11 = uVar9 + ((uVar7 & 0xfffff) << 0xc | (uVar7 << 0x20) >> 0x34);
  uVar7 = (uVar8 - 0x5986bc72) + uVar12 + (uVar9 & uVar11 | uVar6 & ~uVar11);
  uVar10 = uVar11 + ((uVar7 & 0x7fff) << 0x11 | (uVar7 << 0x20) >> 0x2f);
  uVar7 = (ulonglong)local_f4 + 0x49b40821 + uVar6 + (uVar11 & uVar10 | uVar9 & ~uVar10);
  uVar12 = uVar10 + ((uVar7 & 0x3ff) << 0x16 | (uVar7 << 0x20) >> 0x2a);
  uVar7 = ((ulonglong)local_12c - 0x9e1da9e) + uVar9 + (uVar11 & uVar12 | ~uVar11 & uVar10);
  uVar9 = uVar12 + ((uVar7 & 0x7ffffff) << 5 | (uVar7 << 0x20) >> 0x3b);
  uVar7 = ((ulonglong)local_118 - 0x3fbf4cc0) + uVar11 + (uVar10 & uVar9 | ~uVar10 & uVar12);
  uVar6 = uVar9 + ((uVar7 & 0x7fffff) << 9 | (uVar7 << 0x20) >> 0x37);
  uVar7 = (ulonglong)local_104 + 0x265e5a51 + uVar10 + (uVar12 & uVar6 | uVar9 & ~uVar12);
  uVar11 = uVar6 + ((uVar7 & 0x3ffff) << 0xe | (uVar7 << 0x20) >> 0x32);
  uVar7 = ((ulonglong)local_130 - 0x16493856) + uVar12 + (uVar9 & uVar11 | uVar6 & ~uVar9);
  uVar7 = uVar11 + ((uVar7 & 0xfff) << 0x14 | (uVar7 << 0x20) >> 0x2c);
  uVar9 = ((ulonglong)local_11c - 0x29d0efa3) +
          uVar9 + (uVar6 & uVar7 | (ulonglong)((uint)uVar11 & ~(uint)uVar6));
  uVar10 = uVar7 + ((uVar9 & 0x7ffffff) << 5 | (uVar9 << 0x20) >> 0x3b);
  uVar9 = (ulonglong)local_108 + 0x2441453 + uVar6 + (uVar11 & uVar10 | uVar7 & ~uVar11);
  uVar12 = uVar10 + ((uVar9 & 0x7fffff) << 9 | (uVar9 << 0x20) >> 0x37);
  uVar9 = ((ulonglong)local_f4 - 0x275e197f) + uVar11 + (uVar7 & uVar12 | uVar10 & ~uVar7);
  uVar6 = uVar12 + ((uVar9 & 0x3ffff) << 0xe | (uVar9 << 0x20) >> 0x32);
  uVar7 = ((ulonglong)local_120 - 0x182c0438) + uVar7 + (uVar10 & uVar6 | uVar12 & ~uVar10);
  uVar11 = uVar6 + ((uVar7 & 0xfff) << 0x14 | (uVar7 << 0x20) >> 0x2c);
  uVar7 = (ulonglong)local_10c + 0x21e1cde6 + uVar10 + (uVar12 & uVar11 | uVar6 & ~uVar12);
  uVar10 = uVar11 + ((uVar7 & 0x7ffffff) << 5 | (uVar7 << 0x20) >> 0x3b);
  uVar7 = (uVar8 - 0x3cc8f82a) + uVar12 + (uVar6 & uVar10 | uVar11 & ~uVar6);
  uVar9 = uVar10 + ((uVar7 & 0x7fffff) << 9 | (uVar7 << 0x20) >> 0x37);
  uVar7 = ((ulonglong)local_124 - 0xb2af279) + uVar6 + (uVar11 & uVar9 | uVar10 & ~uVar11);
  uVar6 = uVar9 + ((uVar7 & 0x3ffff) << 0xe | (uVar7 << 0x20) >> 0x32);
  uVar7 = (ulonglong)local_110 + 0x455a14ed + uVar11 + (uVar10 & uVar6 | uVar9 & ~uVar10);
  uVar11 = uVar6 + ((uVar7 & 0xfff) << 0x14 | (uVar7 << 0x20) >> 0x2c);
  uVar7 = ((ulonglong)local_fc - 0x561c16fb) + uVar10 + (uVar9 & uVar11 | uVar6 & ~uVar9);
  uVar7 = uVar11 + ((uVar7 & 0x7ffffff) << 5 | (uVar7 << 0x20) >> 0x3b);
  uVar9 = ((ulonglong)local_128 - 0x3105c08) + uVar9 + (uVar6 & uVar7 | uVar11 & ~uVar6);
  uVar10 = uVar7 + ((uVar9 & 0x7fffff) << 9 | (uVar9 << 0x20) >> 0x37);
  uVar9 = (ulonglong)local_114 + 0x676f02d9 + uVar6 + (uVar11 & uVar10 | uVar7 & ~uVar11);
  uVar9 = uVar10 + ((uVar9 & 0x3ffff) << 0xe | (uVar9 << 0x20) >> 0x32);
  uVar11 = ((ulonglong)local_100 - 0x72d5b376) + uVar11 + (uVar7 & uVar9 | uVar10 & ~uVar7);
  uVar6 = uVar9 + ((uVar11 & 0xfff) << 0x14 | (uVar11 << 0x20) >> 0x2c);
  uVar7 = ((ulonglong)local_11c - 0x5c6be) + uVar7 + (uVar6 ^ uVar10 ^ uVar9);
  uVar11 = uVar6 + ((uVar7 & 0xfffffff) << 4 | (uVar7 << 0x20) >> 0x3c);
  uVar7 = ((ulonglong)local_110 - 0x788e097f) + uVar10 + (uVar11 ^ uVar9 ^ uVar6);
  uVar7 = uVar11 + ((uVar7 & 0x1fffff) << 0xb | (uVar7 << 0x20) >> 0x35);
  uVar9 = (ulonglong)(local_104 + 0x6d9d6122) + uVar9 + (uVar7 ^ uVar6 ^ uVar11);
  uVar10 = uVar7 + ((uVar9 & 0xffff) << 0x10 | (uVar9 << 0x20) >> 0x30);
  uVar9 = (ulonglong)(local_f8 + 0xfde5380c) + uVar6 + (uVar10 ^ uVar11 ^ uVar7);
  uVar9 = uVar10 + ((uVar9 & 0x1ff) << 0x17 | (uVar9 << 0x20) >> 0x29);
  uVar11 = ((ulonglong)local_12c - 0x5b4115bc) + uVar11 + (uVar9 ^ uVar7 ^ uVar10);
  uVar12 = uVar9 + ((uVar11 & 0xfffffff) << 4 | (uVar11 << 0x20) >> 0x3c);
  uVar7 = (ulonglong)(local_120 + 0x4bdecfa9) + uVar7 + (uVar12 ^ uVar10 ^ uVar9);
  uVar11 = uVar12 + ((uVar7 & 0x1fffff) << 0xb | (uVar7 << 0x20) >> 0x35);
  uVar7 = (ulonglong)(local_114 + 0xf6bb4b60) + uVar10 + (uVar11 ^ uVar9 ^ uVar12);
  uVar7 = uVar11 + ((uVar7 & 0xffff) << 0x10 | (uVar7 << 0x20) >> 0x30);
  uVar9 = ((ulonglong)local_108 - 0x41404390) + uVar9 + (uVar7 ^ uVar12 ^ uVar11);
  uVar6 = uVar7 + ((uVar9 & 0x1ff) << 0x17 | (uVar9 << 0x20) >> 0x29);
  uVar9 = (ulonglong)local_fc + 0x289b7ec6 + uVar12 + (uVar6 ^ uVar11 ^ uVar7);
  uVar9 = uVar6 + ((uVar9 & 0xfffffff) << 4 | (uVar9 << 0x20) >> 0x3c);
  uVar10 = ((ulonglong)local_130 - 0x155ed806) + uVar11 + (uVar9 ^ uVar7 ^ uVar6);
  uVar11 = uVar9 + ((uVar10 & 0x1fffff) << 0xb | (uVar10 << 0x20) >> 0x35);
  uVar7 = (ulonglong)(local_124 + 0xd4ef3085) + uVar7 + (uVar11 ^ uVar6 ^ uVar9);
  uVar7 = uVar11 + ((uVar7 & 0xffff) << 0x10 | (uVar7 << 0x20) >> 0x30);
  uVar10 = (ulonglong)local_118 + 0x4881d05 + uVar6 + (uVar7 ^ uVar9 ^ uVar11);
  uVar10 = uVar7 + ((uVar10 & 0x1ff) << 0x17 | (uVar10 << 0x20) >> 0x29);
  uVar9 = ((ulonglong)local_10c - 0x262b2fc7) + uVar9 + (uVar10 ^ uVar11 ^ uVar7);
  uVar6 = uVar10 + ((uVar9 & 0xfffffff) << 4 | (uVar9 << 0x20) >> 0x3c);
  uVar9 = (ulonglong)(local_100 + 0xe6db99e5) + uVar11 + (uVar6 ^ uVar7 ^ uVar10);
  uVar12 = uVar6 + ((uVar9 & 0x1fffff) << 0xb | (uVar9 << 0x20) >> 0x35);
  uVar7 = (ulonglong)local_f4 + 0x1fa27cf8 + uVar7 + (uVar12 ^ uVar10 ^ uVar6);
  uVar9 = uVar12 + ((uVar7 & 0xffff) << 0x10 | (uVar7 << 0x20) >> 0x30);
  uVar7 = ((ulonglong)local_128 - 0x3b53a99b) + uVar10 + (uVar9 ^ uVar6 ^ uVar12);
  uVar10 = uVar9 + ((uVar7 & 0x1ff) << 0x17 | (uVar7 << 0x20) >> 0x29);
  uVar7 = (ulonglong)(local_130 + 0xf4292244) + uVar6 + (uVar9 ^ (uVar10 | ~uVar12));
  uVar11 = uVar10 + ((uVar7 & 0x3ffffff) << 6 | (uVar7 << 0x20) >> 0x3a);
  uVar7 = (ulonglong)local_114 + 0x432aff97 + uVar12 + (uVar10 ^ (uVar11 | ~uVar9));
  uVar7 = uVar11 + ((uVar7 & 0x3fffff) << 10 | (uVar7 << 0x20) >> 0x36);
  uVar8 = (uVar8 - 0x546bdc59) + uVar9 + (uVar11 ^ (uVar7 | ~uVar10));
  uVar9 = uVar7 + ((uVar8 & 0x1ffff) << 0xf | (uVar8 << 0x20) >> 0x31);
  uVar8 = (ulonglong)(local_11c + 0xfc93a039) + uVar10 + (uVar7 ^ (uVar9 | ~uVar11));
  uVar10 = uVar9 + ((uVar8 & 0x7ff) << 0x15 | (uVar8 << 0x20) >> 0x2b);
  uVar8 = (ulonglong)(local_100 + 0x655b59c3) + uVar11 + (uVar9 ^ (uVar10 | ~uVar7));
  uVar11 = uVar10 + ((uVar8 & 0x3ffffff) << 6 | (uVar8 << 0x20) >> 0x3a);
  uVar8 = (ulonglong)(local_124 + 0x8f0ccc92) + uVar7 + (uVar10 ^ (uVar11 | ~uVar9));
  uVar7 = uVar11 + ((uVar8 & 0x3fffff) << 10 | (uVar8 << 0x20) >> 0x36);
  uVar8 = (ulonglong)(local_108 - 0x100b83) + uVar9 + (uVar11 ^ (uVar7 | ~uVar10));
  uVar9 = uVar7 + ((uVar8 & 0x1ffff) << 0xf | (uVar8 << 0x20) >> 0x31);
  uVar8 = (ulonglong)(local_12c + 0x85845dd1) + uVar10 + (uVar7 ^ (uVar9 | ~uVar11));
  uVar10 = uVar9 + ((uVar8 & 0x7ff) << 0x15 | (uVar8 << 0x20) >> 0x2b);
  uVar8 = (ulonglong)(local_110 + 0x6fa87e4f) + uVar11 + (uVar9 ^ (uVar10 | ~uVar7));
  uVar11 = uVar10 + ((uVar8 & 0x3ffffff) << 6 | (uVar8 << 0x20) >> 0x3a);
  uVar8 = (ulonglong)(local_f4 + 0xfe2ce6e0) + uVar7 + (uVar10 ^ (uVar11 | ~uVar9));
  uVar7 = uVar11 + ((uVar8 & 0x3fffff) << 10 | (uVar8 << 0x20) >> 0x36);
  uVar8 = (ulonglong)(local_118 + 0xa3014314) + uVar9 + (uVar11 ^ (uVar7 | ~uVar10));
  uVar9 = uVar7 + ((uVar8 & 0x1ffff) << 0xf | (uVar8 << 0x20) >> 0x31);
  uVar8 = (ulonglong)(local_fc + 0x4e0811a1) + uVar10 + (uVar7 ^ (uVar9 | ~uVar11));
  uVar10 = uVar9 + ((uVar8 & 0x7ff) << 0x15 | (uVar8 << 0x20) >> 0x2b);
  uVar8 = (ulonglong)(local_120 + 0xf7537e82) + uVar11 + (uVar9 ^ (uVar10 | ~uVar7));
  uVar11 = uVar10 + ((uVar8 & 0x3ffffff) << 6 | (uVar8 << 0x20) >> 0x3a);
  *param_1 = (int)uVar11 + *param_1;
  uVar8 = ((ulonglong)local_104 - 0x42c50dcb) + uVar7 + (uVar10 ^ (uVar11 | ~uVar9));
  uVar7 = uVar11 + ((uVar8 & 0x3fffff) << 10 | (uVar8 << 0x20) >> 0x36);
  param_1[3] = (int)uVar7 + param_1[3];
  uVar8 = (ulonglong)(local_128 + 0x2ad7d2bb) + uVar9 + (uVar11 ^ (uVar7 | ~uVar10));
  uVar8 = uVar7 + ((uVar8 & 0x1ffff) << 0xf | (uVar8 << 0x20) >> 0x31);
  iVar5 = (int)uVar8;
  param_1[2] = iVar5 + param_1[2];
  uVar8 = ((ulonglong)local_10c - 0x14792c6f) + uVar10 + (uVar7 ^ (uVar8 | ~uVar11));
  param_1[1] = ((uint)((uVar8 & 0xffffffff) << 0x15) | (uint)uVar8 >> 0xb) + iVar5 + param_1[1];
  return;
}



//==== 0052f734  ns=Global  size=0x8c
// sig: undefined FUN_0052f734(void)
// callers(2): 0052faf8 FUN_0052faf8; 0052fb50 FUN_0052fb50
// callees(0): 

void FUN_0052f734(undefined4 *param_1)

{
  *param_1 = 0x67452301;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)((int)param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  *(undefined1 *)((int)param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((int)param_1 + 0x5d) = 0;
  *(undefined1 *)((int)param_1 + 0x5e) = 0;
  *(undefined1 *)((int)param_1 + 0x5f) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((int)param_1 + 0x61) = 0;
  *(undefined1 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x65) = 0;
  *(undefined1 *)((int)param_1 + 0x66) = 0;
  return;
}



//==== 0052f7c0  ns=Global  size=0x4
// sig: undefined thunk_FUN_0052f734(void)
// callers(0): 
// callees(0): 
// strings: 0052f734: '=@gE=' (raw)

void thunk_FUN_0052f734(undefined4 *param_1)

{
  *param_1 = 0x67452301;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)((int)param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  *(undefined1 *)((int)param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((int)param_1 + 0x5d) = 0;
  *(undefined1 *)((int)param_1 + 0x5e) = 0;
  *(undefined1 *)((int)param_1 + 0x5f) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((int)param_1 + 0x61) = 0;
  *(undefined1 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x65) = 0;
  *(undefined1 *)((int)param_1 + 0x66) = 0;
  return;
}



//==== 0052f7c4  ns=Global  size=0x4
// sig: undefined thunk_FUN_0052f734(void)
// callers(0): 
// callees(0): 
// strings: 0052f734: '=@gE=' (raw)

void thunk_FUN_0052f734(undefined4 *param_1)

{
  *param_1 = 0x67452301;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)((int)param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  *(undefined1 *)((int)param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((int)param_1 + 0x5d) = 0;
  *(undefined1 *)((int)param_1 + 0x5e) = 0;
  *(undefined1 *)((int)param_1 + 0x5f) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((int)param_1 + 0x61) = 0;
  *(undefined1 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x65) = 0;
  *(undefined1 *)((int)param_1 + 0x66) = 0;
  return;
}



//==== 0052f7c8  ns=Global  size=0x170
// sig: undefined FUN_0052f7c8(void)
// callers(2): 0052f938 FUN_0052f938; 0052fa18 FUN_0052fa18
// callees(2): 0052ebe8 FUN_0052ebe8; 005c5ad0 libc::memcpy

void * FUN_0052f7c8(void *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)((int)param_1 + 0x68) == '\0') {
    uVar2 = *(uint *)((int)param_1 + 0x10) >> 3 & 0x3f;
    uVar1 = *(uint *)((int)param_1 + 0x10) + param_3 * 8;
    *(uint *)((int)param_1 + 0x10) = uVar1;
    if (uVar1 < param_3 * 8) {
      iVar3 = *(int *)((int)param_1 + 0x14) + 1;
      *(int *)((int)param_1 + 0x14) = iVar3;
      *(uint *)((int)param_1 + 0x14) = iVar3 + (param_3 >> 0x1d);
    }
    else {
      *(uint *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + (param_3 >> 0x1d);
    }
    iVar3 = -uVar2;
    uVar1 = iVar3 + 0x40;
    uVar4 = 0;
    if (uVar1 <= param_3) {
      libc::memcpy((void *)((int)param_1 + 0x18 + uVar2),param_2,uVar1);
      FUN_0052ebe8(param_1,(int)param_1 + 0x18);
      uVar2 = 0;
      uVar4 = uVar1;
      if (iVar3 + 0x7fU < param_3) {
        iVar3 = (int)param_2 + uVar1;
        do {
          uVar4 = uVar1 + 0x40;
          FUN_0052ebe8(param_1,iVar3);
          uVar2 = uVar1 + 0x7f;
          uVar1 = uVar4;
          iVar3 = iVar3 + 0x40;
        } while (uVar2 < param_3);
        uVar2 = 0;
      }
    }
    param_1 = libc::memcpy((void *)((int)param_1 + uVar2 + 0x18),(void *)((int)param_2 + uVar4),
                           param_3 - uVar4);
  }
  return param_1;
}



//==== 0052f938  ns=Global  size=0xe0
// sig: undefined FUN_0052f938(void)
// callers(3): 0052fa18 FUN_0052fa18; 0052faf8 FUN_0052faf8; 0052fb50 FUN_0052fb50
// callees(2): 0052eb40 FUN_0052eb40; 0052f7c8 FUN_0052f7c8

void FUN_0052f938(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_30 [16];
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    return;
  }
  FUN_0052eb40(auStack_30,param_1 + 0x10,8);
  uVar1 = *(uint *)(param_1 + 0x10) >> 3 & 0x3f;
  iVar2 = 0x38 - uVar1;
  if (0x37 < uVar1) {
    iVar2 = 0x78 - uVar1;
  }
  FUN_0052f7c8(param_1,PTR_DAT_0071aecc,iVar2);
  FUN_0052f7c8(param_1,auStack_30,8);
  FUN_0052eb40(param_1 + 0x58,param_1,0x10);
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}



//==== 0052fa18  ns=Global  size=0xe0
// sig: undefined FUN_0052fa18(void)
// callers(2): 0052faf8 FUN_0052faf8; 0052fb50 FUN_0052fb50
// callees(3): 0052f7c8 FUN_0052f7c8; 0052f938 FUN_0052f938; 005c8510 libc::strlen

void FUN_0052fa18(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  size_t sVar2;
  undefined1 local_30 [24];
  
  if (param_3 != 0) {
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      FUN_0052f7c8(param_1,local_30,1);
      cVar1 = *param_2;
    }
    FUN_0052f938(param_1);
    return;
  }
  sVar2 = libc::strlen(param_2);
  FUN_0052f7c8(param_1,param_2,sVar2);
  FUN_0052f938(param_1);
  return;
}



//==== 0052faf8  ns=Global  size=0x58
// sig: undefined FUN_0052faf8(void)
// callers(2): 0051c9a4 FUN_0051c9a4; 00530420 FUN_00530420
// callees(3): 0052f734 FUN_0052f734; 0052f938 FUN_0052f938; 0052fa18 FUN_0052fa18
// strings: 0052f734: '=@gE=' (raw)

void FUN_0052faf8(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  FUN_0052f734();
  FUN_0052fa18(param_1,param_2,param_3);
  FUN_0052f938(param_1);
  return;
}



//==== 0052fb50  ns=Global  size=0x58
// sig: undefined FUN_0052fb50(void)
// callers(0): 
// callees(3): 0052f734 FUN_0052f734; 0052f938 FUN_0052f938; 0052fa18 FUN_0052fa18
// strings: 0052f734: '=@gE=' (raw)

void FUN_0052fb50(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  FUN_0052f734();
  FUN_0052fa18(param_1,param_2,param_3);
  FUN_0052f938(param_1);
  return;
}



//==== 0052fba8  ns=Global  size=0x30
// sig: undefined FUN_0052fba8(void)
// callers(5): 0052fbd8 FUN_0052fbd8; 0052fcbc FUN_0052fcbc; 0052fcec FUN_0052fcec; 0052fd8c FUN_0052fd8c; 00530480 FUN_00530480
// callees(0): 

ulonglong FUN_0052fba8(byte *param_1,uint param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < (int)param_2) {
    uVar3 = (ulonglong)param_2;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 << 8 | (ulonglong)bVar1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar2;
}



//==== 0052fbd8  ns=Global  size=0x30
// sig: undefined FUN_0052fbd8(void)
// callers(3): 0052fd1c FUN_0052fd1c; 0052fd8c FUN_0052fd8c; 00530480 FUN_00530480
// callees(1): 0052fba8 FUN_0052fba8

undefined4 FUN_0052fbd8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0052fba8(param_1 + 0x10,4);
  return uVar1;
}



//==== 0052fc08  ns=Global  size=0xb4
// sig: undefined FUN_0052fc08(void)
// callers(1): 00517d4c FUN_00517d4c
// callees(0): 

undefined4 FUN_0052fc08(int param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = 1;
  if (*(ushort *)(param_1 + 0xc) != 3) {
    uVar4 = (((ulonglong)*(ushort *)(param_1 + 0xc) ^ 1) - 1 << 0x20) >> 0x3f;
  }
  if (*(uint *)(param_1 + 0x14) == 0) {
    bVar2 = false;
    uVar5 = *(uint *)(param_1 + 0x18);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x18);
    bVar2 = true;
    if (*(uint *)(param_1 + 0x14) < uVar5 * *(int *)(param_1 + 0x1c)) {
      uVar1 = *(uint *)(param_1 + 0x20);
      bVar2 = false;
      goto joined_r0x0052fc88;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x20);
joined_r0x0052fc88:
  if ((((*(int *)(param_1 + 8) != 0x50534152) || (uVar4 == 0)) || (!bVar2)) ||
     ((uVar5 < 0x1e || (uVar3 = 1, uVar1 < 0x100)))) {
    uVar3 = 0;
  }
  return uVar3;
}



//==== 0052fcbc  ns=Global  size=0x30
// sig: undefined FUN_0052fcbc(void)
// callers(8): 005113b4 FUN_005113b4; 00514124 FUN_00514124; 0051514c FUN_0051514c; 00515a1c FUN_00515a1c; 00515ed4 FUN_00515ed4; 00516bcc FUN_00516bcc; 00516fb8 FUN_00516fb8; 005300ac FUN_005300ac
// callees(1): 0052fba8 FUN_0052fba8

void FUN_0052fcbc(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  FUN_0052fba8(param_3 + 0x14,5);
  return;
}



//==== 0052fcec  ns=Global  size=0x30
// sig: undefined FUN_0052fcec(void)
// callers(3): 00513fa8 FUN_00513fa8; 00516fb8 FUN_00516fb8; 00530480 FUN_00530480
// callees(1): 0052fba8 FUN_0052fba8

void FUN_0052fcec(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  FUN_0052fba8(param_3 + 0x19,5);
  return;
}



//==== 0052fd1c  ns=Global  size=0x70
// sig: undefined FUN_0052fd1c(void)
// callers(1): 005300ac FUN_005300ac
// callees(1): 0052fbd8 FUN_0052fbd8

uint FUN_0052fd1c(int param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uStack00000038;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = (int)uVar1 >> 0x1f;
  uStack00000038 = param_2;
  uVar4 = FUN_0052fbd8(param_3);
  uVar5 = (longlong)~uVar4 >> 0x3f;
  uVar3 = 1;
  if (-1 < (int)(((uVar2 ^ uVar1) - uVar2) + -1)) {
    uVar3 = (uint)(((uVar5 ^ ~uVar4) - uVar5) + -1 >> 0x3f);
  }
  return uVar3;
}



//==== 0052fd8c  ns=Global  size=0x320
// sig: undefined FUN_0052fd8c(void)
// callers(5): 005113b4 FUN_005113b4; 00514124 FUN_00514124; 00515a1c FUN_00515a1c; 00515ed4 FUN_00515ed4; 005300ac FUN_005300ac
// callees(2): 0052fba8 FUN_0052fba8; 0052fbd8 FUN_0052fbd8

undefined8
FUN_0052fd8c(int param_1,longlong param_2,int param_3,longlong param_4,uint param_5,
            ulonglong *param_6,longlong *param_7,undefined1 *param_8)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar10;
  ulonglong uVar9;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar2 = FUN_0052fbd8(param_3);
  if (uVar2 == 0xffffffffffffffff) {
    uVar1 = *(uint *)(param_1 + 0x20);
    *param_8 = 0;
    *param_6 = (ulonglong)uVar1;
    lVar4 = FUN_0052fba8(param_3 + 0x19,5);
    *param_7 = lVar4 + ((longlong)(int)param_5 * (longlong)*(int *)(param_1 + 0x20) & 0xffffffffU);
    return 1;
  }
  uVar3 = FUN_0052fba8(param_3 + 0x14,5);
  if (uVar3 == 0) {
    iVar8 = *(int *)(param_1 + 0x1c);
    iVar10 = *(int *)(param_1 + 0x18);
    uVar7 = uVar2 + param_5;
    uVar9 = (uVar7 + 0x10 << 0x20) >> 0x25;
    uVar11 = uVar9 << 5;
    uVar6 = uVar2;
    if ((longlong)uVar11 <= (longlong)uVar2) goto LAB_0052fe50;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x1c);
    iVar10 = *(int *)(param_1 + 0x18);
    uVar6 = uVar2 + ((uVar3 - 1) / (ulonglong)*(uint *)(param_1 + 0x20) & 0xffffffff);
    uVar7 = uVar2 + param_5;
    uVar9 = (uVar7 + 0x10 << 0x20) >> 0x25;
    uVar11 = uVar9 << 5;
    if ((longlong)uVar11 <= (longlong)uVar6) goto LAB_0052fe50;
  }
  uVar11 = uVar11 - 0x20;
  uVar9 = uVar9 - 1;
LAB_0052fe50:
  if (((int)param_4 == 0) || (uVar11 = uVar11 & 0xffffffff, (longlong)uVar11 <= (longlong)uVar2)) {
    lVar4 = FUN_0052fba8(param_3 + 0x19,5);
    uVar11 = uVar2;
  }
  else {
    lVar4 = FUN_0052fba8(param_4 + (uVar9 & 0x3fffffff) * 4 + uVar9 & 0xffffffff,5);
  }
  uVar2 = (ulonglong)*(byte *)(param_1 + 0x38);
  uVar9 = 1L << ((uVar2 & 0xf) << 3);
  uVar13 = (longlong)iVar8 * (longlong)iVar10 + param_2 + uVar11 * *(byte *)(param_1 + 0x38);
  if ((longlong)uVar11 < (longlong)uVar7) {
    lVar12 = 0;
    do {
      lVar12 = lVar12 + 1;
      uVar5 = FUN_0052fba8(uVar13 & 0xffffffff,uVar2);
      uVar2 = (ulonglong)*(byte *)(param_1 + 0x38);
      uVar13 = uVar13 + uVar2;
      lVar4 = uVar9 * -((longlong)
                        ((((longlong)uVar5 >> 0x3f ^ uVar5) - ((longlong)uVar5 >> 0x3f)) + -1) >>
                       0x3f) + uVar5 + lVar4;
    } while (uVar7 - uVar11 != lVar12);
    uVar11 = uVar11 + (uVar7 - uVar11);
  }
  if ((longlong)uVar7 < (longlong)uVar11) {
    while( true ) {
      uVar11 = uVar11 - 1;
      uVar13 = uVar13 - uVar2;
      uVar5 = uVar13 & 0xffffffff;
      uVar2 = FUN_0052fba8(uVar5,(int)uVar2);
      lVar4 = lVar4 - (uVar2 + uVar9 * -((longlong)
                                         ((((longlong)uVar2 >> 0x3f ^ uVar2) -
                                          ((longlong)uVar2 >> 0x3f)) + -1) >> 0x3f));
      if ((longlong)uVar11 <= (longlong)uVar7) break;
      uVar2 = (ulonglong)*(byte *)(param_1 + 0x38);
    }
    uVar2 = (ulonglong)*(byte *)(param_1 + 0x38);
  }
  else {
    uVar5 = uVar13 & 0xffffffff;
  }
  uVar2 = FUN_0052fba8(uVar5,uVar2);
  if (uVar2 == 0) {
    *param_8 = 0;
    uVar2 = uVar9;
  }
  else if ((uVar6 == uVar7) &&
          ((uVar3 - (uVar3 / *(uint *)(param_1 + 0x20)) * (ulonglong)*(uint *)(param_1 + 0x20) &
           0xffffffff) == uVar2)) {
    *param_8 = 0;
  }
  else {
    *param_8 = 1;
  }
  *param_6 = uVar2;
  *param_7 = lVar4;
  return 1;
}



