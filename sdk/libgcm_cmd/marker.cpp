// sdk/libgcm_cmd/marker.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x50e998-0x50ef38
#include "sdk/libgcm_cmd/marker.h"

// SDK libgcm_cmd.a(marker.ppu.o): cellGcmSetPerfMonMarker  [fuzzy 1.000 match]
// 0x050e998 (0x160 bytes)
void FUN_0050e998(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  uVar8 = 0;
  lVar7 = 0;
  pcVar2 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    uVar6 = (int)pcVar2 - (int)param_2;
    uVar8 = ((ulonglong)(uVar6 + 3) << 0x20) >> 0x22;
    lVar7 = uVar8 << 2;
  }
  puVar3 = *(uint **)(param_1 + 8);
  if ((ulonglong)*(uint *)(param_1 + 4) < (lVar7 + ZEXT48(puVar3) + 8 & 0xffffffff)) {
    iVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))(param_1,uVar8 + 2);
    if (iVar1 != 0) {
      return;
    }
    puVar3 = *(uint **)(param_1 + 8);
  }
  *puVar3 = ((int)uVar8 + 1) * 0x40000 | 0x40000100;
  puVar3[1] = 0x68750001;
  if ((uVar6 & 3) != 0) {
    *(undefined4 *)((int)puVar3 + (int)lVar7 + 4) = 0;
  }
  if (uVar6 != 0) {
    uVar4 = 0;
    do {
      uVar5 = uVar4 + 4;
      *(undefined4 *)((int)puVar3 + uVar4 + 8) = *(undefined4 *)(param_2 + uVar4);
      uVar4 = uVar5;
    } while (uVar5 < uVar6);
  }
  *(int *)(param_1 + 8) = (int)puVar3 + (int)lVar7 + 8;
  return;
}


// 0x050eaf8 (0x164 bytes)
void idol_draw::RsxCmd_DebugStr_Marker(RenderingStep *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  uVar8 = 0;
  lVar7 = 0;
  pcVar2 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    uVar6 = (int)pcVar2 - (int)param_2;
    uVar8 = ((ulonglong)(uVar6 + 3) << 0x20) >> 0x22;
    lVar7 = uVar8 << 2;
  }
  puVar3 = *(uint **)(param_1 + 8);
  if ((ulonglong)*(uint *)(param_1 + 4) < (lVar7 + ZEXT48(puVar3) + 8 & 0xffffffff)) {
    iVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))(param_1,uVar8 + 2);
    if (iVar1 != 0) {
      return;
    }
    puVar3 = *(uint **)(param_1 + 8);
  }
  *puVar3 = ((int)uVar8 + 1) * 0x40000 | 0x40000100;
  puVar3[1] = 0x68750002;
  if ((uVar6 & 3) != 0) {
    *(undefined4 *)((int)puVar3 + (int)lVar7 + 4) = 0;
  }
  if (uVar6 != 0) {
    uVar4 = 0;
    do {
      uVar5 = uVar4 + 4;
      *(undefined4 *)((int)puVar3 + uVar4 + 8) = *(undefined4 *)(param_2 + uVar4);
      uVar4 = uVar5;
    } while (uVar5 < uVar6);
  }
  *(int *)(param_1 + 8) = (int)puVar3 + (int)lVar7 + 8;
  return;
}


// 0x050ec5c (0x90 bytes)
void idol_draw::RsxCmd_WritePass(RenderingStep *STEP)

{
  int iVar1;
  RsxCmd *pRVar2;
  
  pRVar2 = STEP->command;
  if ((RsxCmd *)STEP->commandLen < pRVar2 + 2) {
    iVar1 = (**(code **)STEP->callback)(STEP,2);
    if (iVar1 != 0) {
      return;
    }
    pRVar2 = STEP->command;
  }
  pRVar2[1] = 0x68750003;
  STEP->command = pRVar2 + 2;
  *pRVar2 = 0x40040100;
  return;
}


// SDK libgcm_cmd.a(marker.ppu.o): cellGcmSetPerfMonMarkerUnsafe  [fuzzy 1.000 match]
// 0x050ecec (0xd0 bytes)
void FUN_0050ecec(int param_1,char *param_2)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0x40040100;
  uVar7 = 0;
  uVar5 = 0;
  uVar4 = 0;
  pcVar3 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    uVar7 = (int)pcVar3 - (int)param_2;
    uVar4 = uVar7 & 3;
    uVar5 = ((ulonglong)(uVar7 + 3) << 0x20) >> 0x22;
    uVar6 = ((uVar7 + 3 >> 2) + 1) * 0x40000 | 0x40000100;
  }
  puVar1 = *(uint **)(param_1 + 8);
  puVar1[1] = 0x68750001;
  *puVar1 = uVar6;
  iVar2 = (int)(uVar5 << 2);
  if (uVar4 != 0) {
    *(undefined4 *)((int)puVar1 + iVar2 + 4) = 0;
  }
  if (uVar7 != 0) {
    uVar4 = 0;
    do {
      uVar6 = uVar4 + 4;
      *(undefined4 *)((int)puVar1 + uVar4 + 8) = *(undefined4 *)(param_2 + uVar4);
      uVar4 = uVar6;
    } while (uVar6 < uVar7);
  }
  *(int *)(param_1 + 8) = (int)puVar1 + iVar2 + 8;
  return;
}


// SDK libgcm_cmd.a(marker.ppu.o): cellGcmSetPerfMonPushMarkerUnsafe  [fuzzy 1.000 match]
// 0x050edbc (0xd0 bytes)
void FUN_0050edbc(int param_1,char *param_2)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0x40040100;
  uVar7 = 0;
  uVar5 = 0;
  uVar4 = 0;
  pcVar3 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    uVar7 = (int)pcVar3 - (int)param_2;
    uVar4 = uVar7 & 3;
    uVar5 = ((ulonglong)(uVar7 + 3) << 0x20) >> 0x22;
    uVar6 = ((uVar7 + 3 >> 2) + 1) * 0x40000 | 0x40000100;
  }
  puVar1 = *(uint **)(param_1 + 8);
  puVar1[1] = 0x68750002;
  *puVar1 = uVar6;
  iVar2 = (int)(uVar5 << 2);
  if (uVar4 != 0) {
    *(undefined4 *)((int)puVar1 + iVar2 + 4) = 0;
  }
  if (uVar7 != 0) {
    uVar4 = 0;
    do {
      uVar6 = uVar4 + 4;
      *(undefined4 *)((int)puVar1 + uVar4 + 8) = *(undefined4 *)(param_2 + uVar4);
      uVar4 = uVar6;
    } while (uVar6 < uVar7);
  }
  *(int *)(param_1 + 8) = (int)puVar1 + iVar2 + 8;
  return;
}


// 0x050ee8c (0x2c bytes)
void FUN_0050ee8c(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar1[1] = 0x68750003;
  *(undefined4 **)(param_1 + 8) = puVar1 + 2;
  *puVar1 = 0x40040100;
  return;
}


// 0x050eeb8 (0x40 bytes)
void FUN_0050eeb8(int param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  pcVar1 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 != '\0');
    uVar2 = (uint)(pcVar1 + (3 - (int)param_2)) & 0xfffffffc;
  }
  *(uint *)(param_1 + 8) = uVar2 + *(int *)(param_1 + 8) + 8;
  return;
}


// 0x050eef8 (0x40 bytes)
void FUN_0050eef8(int param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  pcVar1 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 != '\0');
    uVar2 = (uint)(pcVar1 + (3 - (int)param_2)) & 0xfffffffc;
  }
  *(uint *)(param_1 + 8) = uVar2 + *(int *)(param_1 + 8) + 8;
  return;
}


