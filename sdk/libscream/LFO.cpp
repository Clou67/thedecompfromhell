// sdk/libscream/LFO.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 13 functions, 0x6169e4-0x61768c
#include "sdk/libscream/LFO.h"
#include "sdk/lUnk2.h"
#include "sdk/libscream/989snd.h"

// SDK libscream.a(LFO.ppu.o): snd_LFO_TYPE_SQUARE  [exact match]
// 0x06169e4 (0x24 bytes)
undefined4 FUN_006169e4(int param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x18)) {
    return 0x7fff;
  }
  return 0xffff8001;
}


// SDK libscream.a(LFO.ppu.o): snd_LFO_TYPE_TRIANGLE  [exact match]
// 0x0616a08 (0x6c bytes)
int FUN_00616a08(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 * 0x7fff;
  uVar2 = param_2 * 0x7fff + 0xfd000600;
  iVar1 = ((int)uVar3 >> 9) + (uint)((int)uVar3 < 0 && (uVar3 & 0x1ff) != 0);
  if (0x1ff < param_2) {
    iVar1 = ((int)uVar2 >> 9) + (uint)((int)uVar2 < 0 && (uVar2 & 0x1ff) != 0) + -0x7fff;
    if (param_2 < 0x600) {
      uVar3 = param_2 * 0xfffe + 0xfe000400;
      return 0x7fff - (((int)uVar3 >> 10) + (uint)((int)uVar3 < 0 && (uVar3 & 0x3ff) != 0));
    }
  }
  return iVar1;
}


// SDK libscream.a(LFO.ppu.o): snd_LFO_TYPE_SAW  [exact match]
// 0x0616a74 (0x58 bytes)
int FUN_00616a74(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 * 0x7fff + 0xfe000400;
  iVar1 = ((int)uVar2 >> 10) + (uint)((int)uVar2 < 0 && (uVar2 & 0x3ff) != 0) + -0x7fff;
  if (param_2 < 0x400) {
    iVar1 = (param_2 * 0x7fff) / 0x3ff;
  }
  return iVar1;
}


// 0x0616acc (0xa8 bytes)
int FUN_00616acc(ushort *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_PTR_0071b00c;
  iVar2 = *(int *)(param_1 + 6);
  iVar3 = iVar2 + param_2 * *(int *)(param_1 + 8);
  *(int *)(param_1 + 6) = iVar3;
  if (0x7ffffff < iVar3) {
    *(int *)(param_1 + 6) = iVar3 + -0x8000000;
  }
  iVar2 = (*(code *)**(undefined4 **)(*(int *)(puVar1 + -0x7ffc) + (uint)*param_1 * 4))
                    (param_1,iVar2 >> 0x10);
  if ((param_1[2] & 0x100) != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}


// 0x0616b74 (0xa0 bytes)
void FUN_00616b74(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_0071b00c;
  piVar1 = *(int **)(PTR_PTR_0071b00c + -0x7ff8);
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
  iVar2 = *piVar1;
  if (param_1 == iVar2) {
    piVar3 = *(int **)(puVar5 + -0x7ff4);
    *piVar1 = *(int *)(param_1 + 0x2c);
    *piVar3 = *piVar3 + -1;
    return;
  }
  if (iVar2 != 0) {
    for (iVar4 = *(int *)(iVar2 + 0x2c); param_1 != iVar4; iVar4 = *(int *)(iVar4 + 0x2c)) {
      if (iVar4 == 0) {
        return;
      }
      iVar2 = iVar4;
    }
    piVar1 = *(int **)(puVar5 + -0x7ff4);
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *piVar1 = *piVar1 + -1;
  }
  return;
}


// 0x0616c14 (0x4c bytes)
void FUN_00616c14(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1 + 0x5c;
  do {
    FUN_00616b74(iVar3);
    bVar1 = iVar2 != 3;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x30;
  } while (bVar1);
  return;
}


// 0x0616c60 (0x9c bytes)
undefined4 FUN_00616c60(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    piVar1 = *(int **)(PTR_PTR_0071b00c + -0x7ff4);
    uVar5 = 0;
    iVar2 = *piVar1;
    if (iVar2 != **(int **)(PTR_PTR_0071b00c + -0x7ff0)) {
      piVar3 = *(int **)(PTR_PTR_0071b00c + -0x7ff8);
      *(uint *)(param_1 + 0x2c) = *(byte *)(param_1 + 5) & 1;
      *piVar1 = iVar2 + 1;
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        *piVar3 = param_1;
        return 1;
      }
      do {
        iVar4 = iVar2;
        iVar2 = *(int *)(iVar4 + 0x2c);
      } while (iVar2 != 0);
      uVar5 = 1;
      *(int *)(iVar4 + 0x2c) = param_1;
    }
  }
  return uVar5;
}


// 0x0616cfc (0x8c bytes)
void FUN_00616cfc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b00c;
  uVar1 = **(undefined4 **)(PTR_PTR_0071b00c + -0x7fec);
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_00616acc(param_1,uVar1);
  if (*(byte *)(param_1 + 2) < 7) {
                    /* WARNING: Could not recover jumptable at 0x00616d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)((uint)*(byte *)(param_1 + 2) * 4 + *(int *)(puVar2 + -0x7fe8)) +
              *(int *)(puVar2 + -0x7fe8)))();
    return;
  }
  return;
}


// 0x0617084 (0x280 bytes)
/* WARNING: Type propagation algorithm not settling */

void FUN_00617084(void)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  GPiece<4> auStack_100;
  uint local_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e4;
  undefined4 local_e0;
  
  iVar1 = **(int **)(PTR_PTR_0071b00c + -0x7ff8);
  do {
    if (iVar1 == 0) {
      return;
    }
    FUN_00616cfc(iVar1,auStack_100);
    if ((local_fc & 4) != 0) {
      iVar2 = *(int *)(iVar1 + 0x28);
      *(undefined4 *)(iVar2 + 0x124) = local_f0;
      FUN_0061f128(iVar2);
      for (pbVar3 = *(byte **)(*(int *)(iVar1 + 0x28) + 0x22c); pbVar3 != (byte *)0x0;
          pbVar3 = *(byte **)(pbVar3 + 0x230)) {
        while ((*pbVar3 & 0x1f) == 4) {
          *(undefined4 *)(pbVar3 + 0x124) = local_f0;
          FUN_0061f128(pbVar3);
          pbVar3 = *(byte **)(pbVar3 + 0x230);
          if (pbVar3 == (byte *)0x0) goto joined_r0x006170c4;
        }
      }
    }
joined_r0x006170c4:
    if ((local_fc & 8) != 0) {
      iVar2 = *(int *)(iVar1 + 0x28);
      *(undefined4 *)(iVar2 + 0x134) = local_ec;
      FUN_0061f114(iVar2);
      for (pbVar3 = *(byte **)(*(int *)(iVar1 + 0x28) + 0x22c); pbVar3 != (byte *)0x0;
          pbVar3 = *(byte **)(pbVar3 + 0x230)) {
        while ((*pbVar3 & 0x1f) == 4) {
          *(undefined4 *)(pbVar3 + 0x134) = local_ec;
          FUN_0061f114(pbVar3);
          pbVar3 = *(byte **)(pbVar3 + 0x230);
          if (pbVar3 == (byte *)0x0) goto joined_r0x00617200;
        }
      }
    }
joined_r0x00617200:
    if ((local_fc & 1) != 0) {
      iVar2 = *(int *)(iVar1 + 0x28);
      *(undefined4 *)(iVar2 + 0x14c) = local_e4;
      FUN_0061f100(iVar2);
      for (pbVar3 = *(byte **)(*(int *)(iVar1 + 0x28) + 0x22c); pbVar3 != (byte *)0x0;
          pbVar3 = *(byte **)(pbVar3 + 0x230)) {
        while ((*pbVar3 & 0x1f) == 4) {
          *(undefined4 *)(pbVar3 + 0x14c) = local_e4;
          FUN_0061f100(pbVar3);
          pbVar3 = *(byte **)(pbVar3 + 0x230);
          if (pbVar3 == (byte *)0x0) goto joined_r0x006170dc;
        }
      }
    }
joined_r0x006170dc:
    if ((local_fc & 2) != 0) {
      iVar2 = *(int *)(iVar1 + 0x28);
      *(undefined4 *)(iVar2 + 0x15c) = local_e0;
      FUN_0061f100(iVar2);
      for (pbVar3 = *(byte **)(*(int *)(iVar1 + 0x28) + 0x22c); pbVar3 != (byte *)0x0;
          pbVar3 = *(byte **)(pbVar3 + 0x230)) {
        if ((*pbVar3 & 0x1f) == 4) {
          *(undefined4 *)(pbVar3 + 0x15c) = local_e0;
          FUN_0061f100(pbVar3);
        }
      }
    }
    iVar1 = *(int *)(iVar1 + 0x2c);
  } while( true );
}


// SDK libscream.a(LFO.ppu.o): snd_LFO_TYPE_RAND  [exact match]
// 0x0617304 (0xe4 bytes)
undefined4 FUN_00617304(int param_1,int param_2)

{
  uint uVar2;
  uint uVar3;
  ulonglong uVar1;
  
  if (param_2 < 0x400) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
      uVar2 = FUN_006190b8();
      uVar3 = FUN_006190b8();
      *(uint *)(param_1 + 0x18) = (uVar2 & 0x7fff) * -(uVar3 & 1);
      return *(undefined4 *)(param_1 + 0x18);
    }
  }
  else if (*(int *)(param_1 + 0x1c) == 1) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar1 = FUN_006190b8();
    *(uint *)(param_1 + 0x18) = ((uint)((uVar1 & 0xffffffff) << 1) & 0xfffe) - 0x7ffe;
    return *(undefined4 *)(param_1 + 0x18);
  }
  return *(undefined4 *)(param_1 + 0x18);
}


// 0x06173e8 (0xc8 bytes)
bool FUN_006173e8(short *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  GPiece<232> auStack_110;
  
  *(undefined4 *)(param_1 + 0x12) = **(undefined4 **)(param_1 + 0x14);
  if (*param_1 == 5) {
    uVar2 = FUN_006190b8();
    uVar3 = FUN_006190b8();
    param_1[0xe] = 0;
    param_1[0xf] = 1;
    *(uint *)(param_1 + 0xc) = (uVar2 & 0x7fff) * -(uVar3 & 1);
  }
  snd_SynthLock();
  iVar1 = FUN_00616c60(param_1);
  if (iVar1 != 0) {
    FUN_00616cfc(param_1,auStack_110);
  }
  snd_SynthUnlock();
  return iVar1 == 0;
}


// 0x06174b0 (0x194 bytes)
undefined8 FUN_006174b0(int param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  ushort *puVar7;
  
  bVar1 = param_2[1];
  uVar3 = (uint)*param_2 + ((int)(uint)*param_2 >> 2) * -4;
  param_1 = uVar3 * 0x40 + (uVar3 & 0xfffffff) * -0x10 + param_1;
  puVar7 = (ushort *)(param_1 + 0x5c);
  *(byte *)(param_1 + 0x5e) = bVar1;
  if (bVar1 == 0) {
    FUN_00616b74(puVar7);
    *puVar7 = 0;
    return 0;
  }
  bVar1 = param_2[3];
  *puVar7 = (ushort)bVar1;
  *(byte *)(param_1 + 0x5f) = param_2[2];
  *(char *)(param_1 + 0x60) = (char)*(undefined2 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_2 + 6);
  *(uint *)(param_1 + 100) = (uint)*(ushort *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0xc);
  if (bVar1 == 2) {
    bVar1 = *(byte *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x74) = (uint)*(ushort *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if ((bVar1 & 2) == 0) {
    iVar6 = (uint)*(ushort *)(param_2 + 10) << 0x10;
    uVar2 = *puVar7;
    *(int *)(param_1 + 0x68) = iVar6;
  }
  else {
    uVar5 = FUN_006190b8();
    uVar2 = *puVar7;
    iVar6 = (int)((uVar5 & 0x7ff) << 0x10);
    *(int *)(param_1 + 0x68) = iVar6;
  }
  if ((uVar2 == 1) && (*(int *)(param_1 + 0x68) = iVar6 + 0x2000000, 0x7ffffff < iVar6 + 0x2000000))
  {
    *(int *)(param_1 + 0x68) = iVar6 + -0x6000000;
    uVar4 = FUN_006173e8(puVar7);
    return uVar4;
  }
  uVar4 = FUN_006173e8(puVar7);
  return uVar4;
}


// 0x0617644 (0x48 bytes)
void FUN_00617644(uint param_1)

{
  if ((param_1 != 0) && (param_1 <= **(uint **)(PTR_PTR_0071b010 + -0x8000))) {
    *(undefined4 *)(param_1 * 4 + **(int **)(PTR_PTR_0071b010 + -0x7ffc) + -4) = 0;
  }
  return;
}


