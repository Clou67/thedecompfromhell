//==== 00610224  ns=Global  size=0x8c
// sig: undefined FUN_00610224(void)
// callers(3): 0060e810 FUN_0060e810; 00614aa0 FUN_00614aa0; 006397c4 FUN_006397c4
// callees(0): 

void FUN_00610224(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  *param_2 = *(undefined4 *)(param_1 + 8);
  puVar6 = PTR_PTR_0071b000;
  param_2[2] = *(undefined4 *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  param_2[4] = fVar1;
  fVar2 = *(float *)(puVar6 + -0x7f7c);
  fVar3 = *(float *)(param_1 + 0x1c);
  param_2[1] = uVar4;
  param_2[3] = *(undefined4 *)(param_1 + 0x14);
  if (fVar3 == fVar2) {
    fVar3 = *(float *)(puVar6 + -0x8000);
    param_2[5] = fVar1;
  }
  else {
    param_2[5] = 0;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  param_2[6] = fVar3;
  param_2[7] = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  *(bool *)(param_2 + 8) = fVar1 == fVar2;
  param_2[9] = uVar4;
  param_2[10] = uVar5;
  return;
}



//==== 006102b0  ns=Global  size=0x6c
// sig: undefined FUN_006102b0(void)
// callers(3): 0060e810 FUN_0060e810; 00614aa0 FUN_00614aa0; 006397c4 FUN_006397c4
// callees(0): 

void FUN_006102b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *param_2 = uVar1;
  param_2[3] = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  param_2[7] = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(uint *)(param_1 + 0x28);
  param_2[2] = uVar1;
  uVar4 = (ulonglong)((int)uVar3 >> 0x1f);
  param_2[4] = *(undefined4 *)(param_1 + 0x18);
  param_2[6] = *(undefined4 *)(param_1 + 0x20);
  param_2[5] = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  param_2[9] = *(undefined4 *)(param_1 + 0x2c);
  *(byte *)(param_2 + 8) = (byte)(uVar4 - (uVar4 ^ uVar3) >> 0x18) >> 7;
  param_2[10] = uVar1;
  return;
}



//==== 0061031c  ns=Global  size=0x178
// sig: undefined FUN_0061031c(void)
// callers(1): 00614aa0 FUN_00614aa0
// callees(0): 

void FUN_0061031c(int param_1,uint param_2,int param_3,uint *param_4,int *param_5,uint *param_6)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  if (param_3 == -0x80000000) {
    piVar2 = (int *)*param_4;
    piVar5 = piVar2 + 4;
    *param_4 = (uint)piVar5;
    if (param_1 != 0) {
      iVar4 = *piVar2;
      *param_5 = piVar2[1] << 1;
      *param_6 = (int)piVar5 + iVar4 * 2;
      return;
    }
    if (param_2 != 0) {
      iVar4 = *param_5;
      *param_6 = (uint)piVar5;
      *param_5 = iVar4 + -0x10;
      return;
    }
  }
  else {
    if (param_3 != -0x7fffffff) {
      if (param_3 != -0x7ffffffe) {
        return;
      }
      if ((param_1 == 0) && (param_2 == 0)) {
        *param_6 = 0;
        return;
      }
      *param_6 = 1;
      return;
    }
    if (param_1 != 0) {
      uVar3 = *param_4;
      uVar6 = uVar3 + *param_5;
      if (*(int *)(uVar6 - 0x10) == -1) {
        uVar6 = *(uint *)(uVar6 - 0xc);
        *param_5 = *param_5 + -0x10;
        *param_6 = uVar3 + (int)((ulonglong)(uVar6 >> 2) / 7 << 4);
        return;
      }
      if (uVar3 < uVar6) {
        bVar1 = *(byte *)(uVar3 + 1);
        while ((bVar1 & 6) != 6) {
          if (uVar6 <= uVar3 + 0x10) goto LAB_006103f0;
          bVar1 = *(byte *)(uVar3 + 0x11);
          uVar3 = uVar3 + 0x10;
        }
        *param_6 = uVar3;
      }
LAB_006103f0:
      *param_6 = 0;
      return;
    }
    if (param_2 != 0) {
      iVar4 = *param_5;
      *param_6 = *param_4;
      *param_5 = iVar4 + -0x10;
      return;
    }
  }
  iVar4 = *param_5;
  *param_6 = param_2;
  *param_5 = iVar4 + -0x10;
  return;
}



//==== 00610494  ns=Global  size=0x54
// sig: undefined FUN_00610494(void)
// callers(4): 0060e810 FUN_0060e810; 00610c74 FUN_00610c74; 00614aa0 FUN_00614aa0; 006397c4 FUN_006397c4
// callees(0): 

int * FUN_00610494(int *param_1,int param_2)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      if (*param_1 == param_2) {
        return param_1;
      }
      while( true ) {
        param_1 = (int *)((int)param_1 + param_1[1]);
        if (*param_1 == 0) break;
        if (*param_1 == param_2) {
          return param_1;
        }
      }
    }
  }
  return (int *)0x0;
}



//==== 006104e8  ns=Global  size=0x26c
// sig: undefined FUN_006104e8(void)
// callers(2): 00604e98 FUN_00604e98; 0060e31c FUN_0060e31c
// callees(3): 0060dc04 FUN_0060dc04; 0061948c 989snd::snd_Printf; 00619860 FUN_00619860
// strings: 0066b378: 'common/grains.cpp' | 0066b390: '%s(%d) : Invalid next grain index in handler.\n' | 0066b3c0: '%s(%d) : Invalid Opcode type of %x.\n' | 0066b348: '%s(%d) : Invalid Sound pointer in handler.\n'

uint FUN_006104e8(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  char asdf;
  short sVar6;
  
  puVar3 = PTR_PTR_0071b000;
  iVar5 = *(int *)(param_1 + 0x54);
  if (iVar5 == 0) {
    asdf = (char)*(undefined4 *)(PTR_PTR_0071b000 + -0x7f74);
  }
  else {
    if (*(short *)(param_1 + 0x236) < (short)(ushort)*(byte *)(iVar5 + 4)) {
      iVar4 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),iVar5);
      bVar1 = *(byte *)(iVar4 + (int)(((longlong)*(short *)(param_1 + 0x236) & 0xffffffffU) << 3));
      if (0x33 < bVar1) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f68));
        return 1;
      }
      puVar2 = *(undefined4 **)(*(int *)(puVar3 + -0x7f64) + (uint)bVar1 * 4);
      if (puVar2 == (undefined4 *)0x0) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f68));
        return 1;
      }
      iVar4 = (*(code *)*puVar2)(param_1,iVar5);
      if (-1 < iVar4) {
        if ((*(short *)(param_1 + 0x238) == 0) ||
           (sVar6 = *(short *)(param_1 + 0x23a) + -1, *(short *)(param_1 + 0x23a) = sVar6,
           sVar6 != 0)) {
          sVar6 = *(short *)(param_1 + 0x236);
        }
        else {
          *(undefined2 *)(param_1 + 0x238) = 0;
          sVar6 = *(short *)(param_1 + 0x236) + *(short *)(param_1 + 0x23c);
          *(short *)(param_1 + 0x236) = sVar6;
        }
        *(short *)(param_1 + 0x236) = sVar6 + 1;
        if ((int)(*(byte *)(iVar5 + 4) - 1) < (int)(short)(sVar6 + 1)) {
          *(undefined2 *)(param_1 + 0x236) = 0xffff;
          iVar5 = FUN_00619860(param_1);
          if (iVar5 != 0) {
            return 0;
          }
          return (uint)LZCOUNT(*(undefined4 *)(param_1 + 0x22c)) >> 5;
        }
        iVar5 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),iVar5);
        *(short *)(param_1 + 0x234) =
             (short)*(undefined4 *)(*(short *)(param_1 + 0x236) * 8 + iVar5 + 4) + (short)iVar4;
        return 0;
      }
      goto LAB_0061061c;
    }
    asdf = (char)*(undefined4 *)(PTR_PTR_0071b000 + -0x7f6c);
  }
  989snd::snd_Printf(asdf);
LAB_0061061c:
  *(undefined2 *)(param_1 + 0x236) = 0xffff;
  return 1;
}



//==== 00610754  ns=Global  size=0x3c
// sig: undefined FUN_00610754(void)
// callers(0): 
// callees(1): 006194f4 FUN_006194f4

undefined8 FUN_00610754(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  FUN_006194f4(0x5f,*param_3,0,0,0);
  return 0xffffffffffffffff;
}



//==== 00610790  ns=Global  size=0xcc
// sig: undefined FUN_00610790(void)
// callers(2): 00614140 FUN_00614140; 00614608 FUN_00614608
// callees(1): 0060dcd8 FUN_0060dcd8

int FUN_00610790(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(short *)(param_1 + 0x16)) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      iVar1 = FUN_0060dcd8(param_1);
      iVar1 = iVar1 + iVar3;
      iVar3 = iVar3 + 0xc;
      if (iVar1 == param_2) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)(param_1 + 0x16));
  }
  return -1;
}



//==== 0061085c  ns=Global  size=0x20c
// sig: undefined FUN_0061085c(void)
// callers(3): 0060e810 FUN_0060e810; 00610c74 FUN_00610c74; 00614aa0 FUN_00614aa0
// callees(1): 006190b8 FUN_006190b8

ulonglong FUN_0061085c(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  
  if ((*(ushort *)(param_2 + 0xe) & 0x400) != 0) {
    return 0x80000005;
  }
  uVar1 = *(ushort *)(param_2 + 4);
  if ((uVar1 + 0x4e27 & 0xffff) < 8) {
                    /* WARNING: Could not recover jumptable at 0x006108f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(*(int *)(((uVar1 + 0x4e27) * 4 & 0x3fffc) +
                               *(int *)(PTR_PTR_0071b000 + -0x7f60)) +
                      *(int *)(PTR_PTR_0071b000 + -0x7f60)))();
    return uVar3;
  }
  uVar3 = (ulonglong)(short)uVar1;
  if ((short)uVar1 < 0) {
    uVar3 = -uVar3;
    if ((uVar3 & 0xffffffff) < 5) {
      iVar4 = *(char *)(param_1 + (int)uVar3 + 0x163) * 0x168;
      iVar2 = iVar4 >> 0x1f;
      uVar3 = (longlong)(iVar4 / 0x7f + iVar2) - (longlong)iVar2;
      if ((int)uVar3 < 0) {
        lVar5 = (~uVar3 << 0x20) / 0x16800000000 + 1;
        if (0x167 < (int)uVar3 + 0x168) {
          lVar5 = 1;
        }
        do {
          uVar3 = uVar3 + 0x168;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    else if ((uVar3 - 6 & 0xffffffff) < 0x40) {
      iVar4 = *(char *)(*(int *)(PTR_PTR_0071b000 + -0x7f5c) + (int)(uVar3 - 6)) * 0x168;
      iVar2 = iVar4 >> 0x1f;
      uVar3 = (longlong)(iVar4 / 0x7f + iVar2) - (longlong)iVar2;
      if ((int)uVar3 < 0) {
        lVar5 = (~uVar3 << 0x20) / 0x16800000000 + 1;
        if (0x167 < (int)uVar3 + 0x168) {
          lVar5 = 1;
        }
        do {
          uVar3 = uVar3 + 0x168;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    else {
      uVar3 = FUN_006190b8();
      uVar3 = (uVar3 & 0xffff) + (((uVar3 & 0xffff) << 0x20) / 0x16800000000) * -0x168 & 0xffff;
    }
  }
  return uVar3 + ((uVar3 << 0x20) / 0x16800000000) * -0x168 & 0xffffffff;
}



//==== 00610adc  ns=Global  size=0xd8
// sig: undefined FUN_00610adc(void)
// callers(1): 00614aa0 FUN_00614aa0
// callees(1): 006190b8 FUN_006190b8

char FUN_00610adc(int param_1,char param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = -param_2;
  if (param_2 < '\0') {
    if (cVar1 < '\x05') {
      cVar1 = *(char *)(param_1 + cVar1 + 0x163);
    }
    else if ((byte)(cVar1 - 6U) < 0x40) {
      cVar1 = *(char *)(*(int *)(PTR_PTR_0071b000 + -0x7f5c) + cVar1 + -6);
    }
    else {
      uVar2 = FUN_006190b8();
      cVar1 = (char)(uVar2 & 0xffff) + (char)((uVar2 & 0xffff) / 100) * -100;
    }
    param_2 = '\0';
    if (-1 < cVar1) {
      return cVar1;
    }
  }
  return param_2;
}



//==== 00610bb4  ns=Global  size=0xc0
// sig: undefined FUN_00610bb4(void)
// callers(5): 0060e810 FUN_0060e810; 00610c74 FUN_00610c74; 00611d48 FUN_00611d48; 00614aa0 FUN_00614aa0; 006397c4 FUN_006397c4
// callees(1): 006190b8 FUN_006190b8

byte FUN_00610bb4(int param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  
  cVar2 = -param_2;
  if ((char)param_2 < '\0') {
    if (cVar2 < '\x05') {
      bVar1 = *(byte *)(param_1 + cVar2 + 0x163);
    }
    else if ((byte)(cVar2 - 6U) < 0x40) {
      bVar1 = *(byte *)(*(int *)(PTR_PTR_0071b000 + -0x7f5c) + cVar2 + -6);
    }
    else {
      bVar1 = FUN_006190b8();
      bVar1 = bVar1 & 0x7f;
    }
    param_2 = 0;
    if (-1 < (char)bVar1) {
      return bVar1;
    }
  }
  return param_2;
}



//==== 00610c74  ns=Global  size=0x5b8
// sig: undefined FUN_00610c74(void)
// callers(2): 00611fd0 FUN_00611fd0; 00639264 FUN_00639264
// callees(10): 005c5ad0 libc::memcpy; 0060d938 FUN_0060d938; 0060da50 FUN_0060da50; 0060fa5c FUN_0060fa5c; 0060fabc FUN_0060fabc; 00610494 FUN_00610494; 0061085c FUN_0061085c; 00610bb4 FUN_00610bb4; 006190b8 FUN_006190b8; 006193e0 FUN_006193e0
// strings: 0066b3e8: '%s/%s' | 00904508: '/app_home'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00610c74(int param_1,int param_2,uint *param_3,int *param_4)

{
  bool bVar1;
  float fVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 uVar14;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  int iVar18;
  float *pfVar19;
  int *piVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double extraout_f1;
  double extraout_f1_00;
  double dVar24;
  
  puVar7 = PTR_PTR_0071b000;
  iVar9 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  puVar17 = (undefined1 *)(iVar9 + (*param_3 & 0xffffff));
  uVar13 = (uint)((longlong)((ulonglong)*(ushort *)(puVar17 + 0xe) << 0x31) >> 0x3f) & 4;
  iVar9 = uVar13 + 0x2c;
  if (-1 < (short)*(ushort *)(puVar17 + 0xe)) {
    iVar9 = uVar13 + 0x24;
  }
  uVar13 = *(uint *)(puVar17 + 0x14);
  param_4[1] = (int)param_3;
  *param_4 = param_1;
  param_4[0x77] = uVar13;
  param_4[0x7d] = (int)puVar17;
  if ((uVar13 & 0x40) == 0) {
    param_4[0x7e] = 0;
    uVar3 = *(ushort *)(puVar17 + 0xe);
  }
  else {
    param_4[0x7e] = (int)(puVar17 + iVar9);
    uVar3 = *(ushort *)(puVar17 + 0xe);
  }
  if ((uVar3 & 0x100) == 0) {
    iVar9 = 0;
    param_4[0x7f] = uVar3 & 0x100;
  }
  else {
    if ((param_4[0x77] & 0x40U) == 0) {
      param_4[0x7f] = (int)(puVar17 + iVar9);
    }
    else {
      param_4[0x7f] = (int)(puVar17 + iVar9 + 0x24);
    }
    iVar9 = FUN_00610494(param_4[0x7f],8);
  }
  uVar3 = *(ushort *)(puVar17 + 0xe);
  param_4[0x76] =
       (uint)(((ulonglong)(uVar3 >> 9) & 1) << 4) |
       (uint)(((ulonglong)(uVar3 >> 4) & 1) << 2) | (uint)(((ulonglong)uVar3 & 1 ^ 1) << 3);
  param_4[0x7c] = *(int *)(param_1 + 0x21c);
  uVar14 = FUN_00610bb4(param_1,puVar17[1]);
  dVar22 = (double)FUN_0060fabc(uVar14,0);
  param_4[0x78] = (int)(float)dVar22;
  iVar10 = FUN_0061085c(param_1,puVar17);
  param_4[0x79] = iVar10;
  if ((*(uint *)(puVar17 + 0x20) < 0x10) &&
     (iVar10 = *(int *)(*(int *)(puVar7 + -0x7f58) + *(uint *)(puVar17 + 0x20) * 4), iVar10 != 0)) {
    uVar11 = FUN_0060da50(*(undefined4 *)(param_1 + 0x240),puVar17);
    FUN_006193e0(param_4 + 0x81,0x100,*(undefined4 *)(puVar7 + -0x7f54),iVar10,uVar11);
  }
  else {
    uVar11 = *(undefined4 *)(puVar7 + -0x7f50);
    uVar12 = FUN_0060da50(*(undefined4 *)(param_1 + 0x240),puVar17);
    FUN_006193e0(param_4 + 0x81,0x100,*(undefined4 *)(puVar7 + -0x7f54),uVar11,uVar12);
  }
  uVar13 = param_4[0x77];
  uVar3 = *(ushort *)(puVar17 + 0xe);
  param_4[4] = uVar13 >> 4 & 1;
  iVar10 = *(int *)(param_1 + 8);
  param_4[5] = *(int *)(puVar17 + 0x18);
  uVar16 = *(uint *)(puVar17 + 0x1c);
  param_4[2] = (int)(param_4 + 0x81);
  param_4[3] = 0;
  *(ulonglong *)(param_4 + 6) = (ulonglong)uVar16;
  param_4[9] = iVar10;
  if (((uVar13 & 0x20) == 0) || (uVar16 = 8, (uVar13 & 0x10) == 0)) {
    uVar16 = 0;
  }
  if ((iVar9 == 0) || (uVar13 = 0x20, *(int *)(iVar9 + 8) == 0)) {
    uVar5 = *(uint *)(param_1 + 4);
    uVar13 = 0;
    uVar6 = (uint)(((ulonglong)(uVar5 >> 0x16) & 1) << 4);
  }
  else {
    uVar5 = *(uint *)(param_1 + 4);
    uVar6 = (uint)(((ulonglong)(uVar5 >> 0x16) & 1) << 4);
  }
  if ((iVar9 == 0) || (uVar15 = 0x20, *(int *)(iVar9 + 8) == 0)) {
    uVar15 = 0;
  }
  param_4[10] = uVar6 | uVar16 | uVar13 |
                uVar15 | (uint)(((ulonglong)(uVar3 >> 5) & 1) << 1) | uVar5 >> 0x15 & 1;
  *(undefined1 *)((int)param_4 + 0x2d) = *puVar17;
  dVar22 = (double)FUN_0060fa5c(puVar17);
  param_4[0xc] = (int)(float)dVar22;
  uVar14 = *(undefined1 *)(param_2 + 1);
  param_4[0x3f] = 0xdc;
  *(undefined1 *)(param_4 + 0xb) = uVar14;
  uVar4 = *(undefined2 *)(puVar17 + 10);
  iVar9 = *(int *)(param_1 + 0x120);
  param_4[0x40] = 0x3c;
  iVar10 = *(int *)(param_1 + 300);
  *(undefined2 *)(param_4 + 0xd) = uVar4;
  param_4[0x44] = iVar10;
  iVar10 = *(int *)(param_1 + 0x13c);
  uVar4 = *(undefined2 *)(puVar17 + 0xc);
  param_4[0x43] = iVar9;
  param_4[0x45] = iVar10;
  *(undefined2 *)((int)param_4 + 0x36) = uVar4;
  libc::memcpy(param_4 + 0x49,(void *)(param_1 + 0x168),0xb4);
  uVar11 = *(undefined4 *)(puVar7 + -0x8000);
  lVar21 = 0x10;
  param_4[0xe] = 0xc;
  iVar9 = 0;
  do {
    *(undefined4 *)((int)param_4 + iVar9 + 0x7c) = *(undefined4 *)(param_1 + 0x130);
    *(undefined4 *)((int)param_4 + iVar9 + 0x3c) = uVar11;
    lVar21 = lVar21 + -1;
    iVar9 = iVar9 + 4;
  } while (lVar21 != 0);
  iVar9 = FUN_00610494(param_4[0x7f],9);
  uVar13 = FUN_00610494(param_4[0x7f],3);
  if (iVar9 == 0) {
    if (uVar13 != 0) {
      pfVar19 = (float *)(param_4 + 0xf);
      iVar9 = 0;
      if (*(char *)(uVar13 + 10) == '\0') {
LAB_006111e4:
        iVar10 = 0x10 - iVar9;
        piVar20 = param_4 + iVar9 + 0xf;
        if (0x10 < iVar9 + 1) {
          iVar10 = 1;
        }
        do {
          *piVar20 = 0;
          iVar10 = iVar10 + -1;
          piVar20 = piVar20 + 1;
        } while (iVar10 != 0);
      }
      else {
        do {
          iVar10 = uVar13 + iVar9;
          iVar9 = iVar9 + 1;
          uVar14 = FUN_00610bb4(param_1,*(undefined1 *)(iVar10 + 0xc));
          dVar22 = (double)FUN_0060fabc(uVar14,0);
          *pfVar19 = (float)dVar22;
          pfVar19 = pfVar19 + 1;
          if ((int)(uint)*(byte *)(uVar13 + 10) <= iVar9) {
            if (iVar9 < 0x10) goto LAB_006111e4;
            break;
          }
        } while (iVar9 != 0x10);
      }
    }
  }
  else {
    iVar10 = *(int *)(puVar7 + -0x7f5c);
    dVar22 = (double)*(float *)(puVar7 + -0x7fb8);
    dVar24 = (double)*(float *)(puVar7 + -0x7fe8);
    iVar18 = 0;
    do {
      while( true ) {
        fVar2 = *(float *)(iVar9 + iVar18 + 8);
        dVar23 = (double)fVar2;
        if (dVar23 < dVar24) break;
LAB_00611014:
        bVar1 = iVar18 == 0x3c;
        *(float *)((int)param_4 + iVar18 + 0x3c) = (float)dVar23;
        iVar18 = iVar18 + 4;
        if (bVar1) goto LAB_006110a8;
      }
      uVar16 = -(int)fVar2;
      if (uVar16 < 5) {
        uVar13 = FUN_0060fabc(*(undefined1 *)(param_1 + uVar16 + 0x163),0);
        dVar23 = extraout_f1_00;
        goto LAB_00611014;
      }
      if (0x3f < uVar16 - 6) {
        uVar13 = FUN_006190b8(uVar13,0);
        uVar13 = uVar13 & 0xffff;
        dVar23 = (double)(float)((double)uVar13 * dVar22);
        goto LAB_00611014;
      }
      uVar13 = FUN_0060fabc(*(undefined1 *)(iVar10 + (uVar16 - 6)));
      bVar1 = iVar18 != 0x3c;
      *(float *)((int)param_4 + iVar18 + 0x3c) = (float)extraout_f1;
      iVar18 = iVar18 + 4;
    } while (bVar1);
  }
LAB_006110a8:
  iVar9 = *(int *)(param_1 + 0x248);
  param_4[0x80] = iVar9;
  if (iVar9 == 0) {
    uVar8 = ((ulonglong)(uint)param_4[0x77] & 1) << 0x1c | (ulonglong)((uint)param_4[0x77] >> 4);
    param_4[0x77] = (uint)(uVar8 << 4) | (uint)uVar8 >> 0x1c;
  }
  return;
}



//==== 0061122c  ns=Global  size=0x78
// sig: undefined FUN_0061122c(void)
// callers(43): 006112a4 FUN_006112a4; 006112d8 FUN_006112d8; 006113e4 FUN_006113e4; 00611604 FUN_00611604; 0061183c FUN_0061183c; 00611d48 FUN_00611d48; 00611f88 FUN_00611f88; 00611fd0 FUN_00611fd0; 00612130 FUN_00612130; 006125e4 FUN_006125e4; 00612688 FUN_00612688; 006127f4 FUN_006127f4; 00612858 FUN_00612858; 006128ec FUN_006128ec; 00612980 FUN_00612980; 00612ac4 FUN_00612ac4; 00612bc4 FUN_00612bc4; 00612c5c FUN_00612c5c; 006131fc FUN_006131fc; 006133fc FUN_006133fc; 006135c8 FUN_006135c8; 006135fc FUN_006135fc; 0061373c FUN_0061373c; 00613850 FUN_00613850; 00613964 FUN_00613964
// callees(2): 00604918 FUN_00604918; 0061948c 989snd::snd_Printf
// strings: 0066b3f0: '%d: handle %x, grain %i: %s\n'

void FUN_0061122c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b000;
  if (**(int **)(PTR_PTR_0071b000 + -0x7f4c) != 0) {
    FUN_00604918();
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f48));
  }
  return;
}



//==== 006112a4  ns=Global  size=0x34
// sig: undefined FUN_006112a4(void)
// callers(0): 
// callees(1): 0061122c FUN_0061122c
// strings: 0066b410: 'Reverb'

undefined8 FUN_006112a4(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f44));
  return 0;
}



//==== 006112d8  ns=Global  size=0x10c
// sig: undefined FUN_006112d8(void)
// callers(0): 
// callees(3): 0060b594 989snd::snd_SetMasterVolumeDucker; 0060d938 FUN_0060d938; 0061122c FUN_0061122c
// strings: 0066b418: 'Ducker'

undefined8 FUN_006112d8(int param_1,undefined8 param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_50 [48];
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f40));
  iVar2 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  puVar3 = local_50;
  uVar1 = *(ushort *)(iVar2 + (*param_3 & 0xffffff));
  if ((short)uVar1 < 0) {
    puVar3 = (undefined1 *)0x0;
  }
  989snd::snd_SetMasterVolumeDucker(uVar1 & 0xff,puVar3);
  return 0;
}



//==== 006113e4  ns=Global  size=0x220
// sig: undefined FUN_006113e4(void)
// callers(0): 
// callees(8): 0060d938 FUN_0060d938; 0060dcd8 FUN_0060dcd8; 0061122c FUN_0061122c; 00618098 FUN_00618098; 0061838c FUN_0061838c; 00619424 FUN_00619424; 0061948c 989snd::snd_Printf; 0061be80 FUN_0061be80
// strings: 0066b420: 'Stop Child Sound' | 0066b480: '  by index: %i\n' | 0066b438: '  by name: %.16s\n' | 0066b450: "SCREAM: Didn't find child sound named -> %s\n"

undefined8 FUN_006113e4(int param_1,undefined8 param_2,uint *param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_50 [6];
  
  puVar1 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f3c));
  iVar2 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  iVar2 = iVar2 + (*param_3 & 0xffffff);
  uVar4 = *(uint *)(iVar2 + 0xc);
  if ((int)uVar4 < 0) {
    if (*(uint *)(*(int *)(param_1 + 0x240) + 4) < 4) {
      iVar2 = iVar2 + 0x10;
      FUN_0061838c(0,iVar2,local_50);
      FUN_00619424(*(undefined4 *)(puVar1 + -0x7f38),iVar2);
      uVar4 = FUN_0061838c(*(undefined4 *)(param_1 + 0x240),iVar2,local_50);
      if ((int)uVar4 < 0) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f34));
        return 0;
      }
    }
    else {
      iVar3 = iVar2 + 0x14;
      FUN_00618098(0,iVar3,*(undefined4 *)(iVar2 + 0x10),local_50);
      FUN_00619424(*(undefined4 *)(puVar1 + -0x7f38),iVar3);
      uVar4 = FUN_00618098(*(undefined4 *)(param_1 + 0x240),iVar3,*(undefined4 *)(iVar2 + 0x10),
                           local_50);
      if ((int)uVar4 < 0) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f34));
        return 0;
      }
    }
    local_50[0] = 0;
  }
  else {
    local_50[0] = *(undefined4 *)(param_1 + 0x240);
    FUN_00619424(*(undefined4 *)(puVar1 + -0x7f30),uVar4);
  }
  iVar2 = FUN_0060dcd8(local_50[0]);
  do {
    iVar3 = FUN_0061be80(param_1,iVar2 + uVar4 * 0x10 + (uVar4 & 0x3fffffff) * -4);
  } while (iVar3 != 0);
  return 0;
}



//==== 00611604  ns=Global  size=0x238
// sig: undefined FUN_00611604(void)
// callers(0): 
// callees(2): 0060d938 FUN_0060d938; 0061122c FUN_0061122c
// strings: 0066b490: 'Wait For Sync Event'

undefined4 FUN_00611604(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  puVar2 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f2c));
  piVar1 = *(int **)(puVar2 + -0x7f28);
  if (*piVar1 == 0) {
    return 0;
  }
  if (**(int **)(puVar2 + -0x7f24) != 0) {
    return 0;
  }
  iVar3 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  iVar3 = iVar3 + (*param_3 & 0xffffff);
  iVar4 = (*(code *)**(undefined4 **)(*piVar1 + 0x14))();
  if (iVar4 == 0) {
    if ((*(uint *)(iVar3 + 4) & 1) != 0) {
      return 0;
    }
    return 0xffffffff;
  }
  uVar6 = *(uint *)(iVar3 + 8);
  if (uVar6 == 2) {
    if ((*(uint *)(iVar4 + 0x54) & 2) != 0) {
      uVar6 = *(int *)(iVar4 + 0x48) + 1;
      iVar7 = uVar6 - (uVar6 / *(uint *)(iVar3 + 0xc)) * *(uint *)(iVar3 + 0xc);
      goto LAB_006116ec;
    }
  }
  else if (uVar6 < 3) {
    if ((uVar6 == 1) && ((*(uint *)(iVar4 + 0x54) & 1) != 0)) {
      uVar5 = (((ulonglong)*(uint *)(iVar4 + 0x44) & 0x7ffffff) * 0x20 +
               ((ulonglong)*(uint *)(iVar4 + 0x44) & 0x1fffffff) * -8 & 0xffffffff) /
              (ulonglong)*(uint *)(iVar4 + 0x3c) + 1;
      iVar7 = (int)uVar5 -
              (int)((uVar5 & 0xffffffff) / (ulonglong)*(uint *)(iVar3 + 0xc)) *
              *(uint *)(iVar3 + 0xc);
      goto LAB_006116ec;
    }
  }
  else if (uVar6 == 3) {
    if ((*(uint *)(iVar4 + 0x54) & 4) != 0) {
      iVar7 = *(uint *)(iVar4 + 0x4c) -
              (*(uint *)(iVar4 + 0x4c) / *(uint *)(iVar3 + 0xc)) * *(uint *)(iVar3 + 0xc);
      goto LAB_006116ec;
    }
  }
  else if ((uVar6 == 4) && ((*(uint *)(iVar4 + 0x54) & 0x100) != 0)) {
    iVar7 = *(uint *)(iVar4 + 0x50) -
            (*(uint *)(iVar4 + 0x50) / *(uint *)(iVar3 + 0xc)) * *(uint *)(iVar3 + 0xc);
    goto LAB_006116ec;
  }
  iVar7 = 1;
LAB_006116ec:
  if ((((*(uint *)(iVar4 + 0x54) & 0x40) == 0) || ((*(uint *)(iVar3 + 4) & 2) == 0)) && (iVar7 != 0)
     ) {
    *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + -1;
    return 1;
  }
  return 0;
}



//==== 0061183c  ns=Global  size=0x50c
// sig: undefined FUN_0061183c(void)
// callers(0): 
// callees(12): 005c5ad0 libc::memcpy; 0060d938 FUN_0060d938; 0060dcd8 FUN_0060dcd8; 0060f728 FUN_0060f728; 0060fabc FUN_0060fabc; 0060fb74 FUN_0060fb74; 0061122c FUN_0061122c; 00618098 FUN_00618098; 0061838c FUN_0061838c; 006190b8 FUN_006190b8; 00619424 FUN_00619424; 0061a8d0 FUN_0061a8d0
// strings: 0066b4a8: 'Start Child Sound' | 0066b480: '  by index: %i\n' | 0066b438: '  by name: %.16s\n'

undefined8 FUN_0061183c(int param_1,undefined8 param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined *puVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte bVar12;
  ushort uVar11;
  int *piVar13;
  undefined1 *puVar14;
  undefined1 uVar15;
  double dVar16;
  double dVar17;
  undefined4 local_130;
  undefined1 local_12c [40];
  undefined1 auStack_104 [180];
  
  puVar4 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f20));
  if ((*(uint *)(param_1 + 4) & 0x20) == 0) {
    iVar7 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
    fVar1 = *(float *)(param_1 + 0x11c);
    fVar2 = *(float *)(puVar4 + -0x7fe8);
    piVar13 = (int *)(iVar7 + (*param_3 & 0xffffff));
    *piVar13 = (int)(char)*piVar13;
    piVar13[1] = (int)(short)piVar13[1];
    if ((fVar1 != fVar2) ||
       (((*(byte *)(piVar13 + 2) & 0xf) != 0 && ((*(byte *)(piVar13 + 2) & 0xf) != 2)))) {
      uVar10 = piVar13[3];
      if ((int)uVar10 < 0) {
        if (*(uint *)(*(int *)(param_1 + 0x240) + 4) < 4) {
          piVar5 = piVar13 + 4;
          FUN_0061838c(0,piVar5,&local_130);
          FUN_00619424(*(undefined4 *)(puVar4 + -0x7f38),piVar5);
          uVar10 = FUN_0061838c(*(undefined4 *)(param_1 + 0x240),piVar5,&local_130);
        }
        else {
          piVar5 = piVar13 + 5;
          FUN_00618098(0,piVar5,piVar13[4],&local_130);
          FUN_00619424(*(undefined4 *)(puVar4 + -0x7f38),piVar5);
          uVar10 = FUN_00618098(*(undefined4 *)(param_1 + 0x240),piVar5,piVar13[4],&local_130);
        }
        local_130 = 0;
        if ((int)uVar10 < 0) {
          return 0;
        }
      }
      else {
        local_130 = *(undefined4 *)(param_1 + 0x240);
        FUN_00619424(*(undefined4 *)(puVar4 + -0x7f30),uVar10);
      }
      iVar8 = FUN_0060dcd8(local_130);
      iVar7 = *piVar13;
      bVar12 = (byte)iVar7;
      puVar14 = (undefined1 *)(iVar8 + uVar10 * 0x10 + (uVar10 & 0x3fffffff) * -4);
      if (iVar7 < 0) {
        if (iVar7 < -4) {
          if (iVar7 == -5) {
            bVar12 = FUN_006190b8();
            bVar12 = bVar12 & 0x7f;
          }
          else {
            bVar12 = *(byte *)(*(int *)(puVar4 + -0x7f5c) + (-6 - iVar7));
          }
        }
        else {
          bVar12 = *(byte *)((param_1 - iVar7) + 0x163);
        }
      }
      dVar16 = (double)FUN_0060fabc(bVar12,0);
      iVar7 = piVar13[1];
      sVar6 = (short)iVar7;
      uVar15 = *puVar14;
      if (iVar7 < 0) {
        if (iVar7 < -4) {
          if (iVar7 == -5) {
            uVar11 = FUN_006190b8();
            sVar6 = uVar11 + (short)(((ulonglong)uVar11 << 0x20) / 0x16800000000) * -0x168;
          }
          else {
            sVar6 = (short)*(char *)(*(int *)(puVar4 + -0x7f5c) + (-6 - iVar7));
          }
        }
        else {
          sVar6 = (short)*(char *)((param_1 - iVar7) + 0x163);
        }
      }
      uVar9 = FUN_0060fb74(sVar6);
      bVar12 = *(byte *)(piVar13 + 2);
      if ((bVar12 & 0xf) == 0) {
        dVar16 = (double)(float)(dVar16 * (double)*(float *)(param_1 + 0x11c));
      }
      else {
        dVar17 = (double)FUN_0060fabc(uVar15,0);
        if ((bVar12 & 0xf) == 1) {
          dVar16 = (double)(float)(dVar16 * dVar17);
        }
        else if ((bVar12 & 0xf) == 2) {
          dVar16 = (double)(float)(dVar16 * (double)(float)(dVar17 * (double)*(float *)(param_1 +
                                                                                       0x11c)));
        }
      }
      uVar3 = (uint)((ulonglong)(longlong)(char)bVar12 >> 4) & 7;
      if (((ulonglong)(longlong)(char)bVar12 >> 4 & 7) == 0) {
        uVar9 = uVar9 + *(int *)(param_1 + 0x130);
      }
      else if (uVar3 == 1) {
        uVar9 = uVar9 + (int)*(short *)(puVar14 + 2);
      }
      else if (uVar3 == 2) {
        uVar9 = (int)*(short *)(puVar14 + 2) + uVar9 + *(int *)(param_1 + 0x130);
      }
      if ((char)bVar12 < '\0') {
        uVar15 = *(undefined1 *)(param_1 + 0x10);
      }
      else {
        uVar15 = puVar14[1];
      }
      libc::memcpy(auStack_104,(void *)(param_1 + 0x168),0xb4);
      iVar7 = FUN_0060f728(dVar16,local_130,uVar10,uVar15,*(undefined1 *)(param_1 + 0x164),
                           (short)uVar9 +
                           (short)(((ulonglong)uVar9 << 0x20) / 0x16800000000) * -0x168,local_12c,
                           *(undefined4 *)(param_1 + 0x21c));
      if (iVar7 != 0) {
        FUN_0061a8d0(param_1,iVar7);
        return 0;
      }
    }
  }
  return 0;
}



//==== 00611d48  ns=Global  size=0x240
// sig: undefined FUN_00611d48(void)
// callers(0): 
// callees(4): 0060d938 FUN_0060d938; 0060fabc FUN_0060fabc; 00610bb4 FUN_00610bb4; 0061122c FUN_0061122c
// strings: 0066b4c0: 'Stream MultiTrack Volumes Ex'

/* WARNING: Removing unreachable block (ram,0x00611e88) */
/* WARNING: Removing unreachable block (ram,0x00611e48) */
/* WARNING: Removing unreachable block (ram,0x00611e9c) */

undefined8 FUN_00611d48(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 local_1d0 [4];
  undefined1 auStack_1cc [64];
  undefined1 auStack_18c [64];
  undefined1 local_14c [220];
  
  puVar3 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f1c));
  piVar1 = *(int **)(puVar3 + -0x7f28);
  if ((*piVar1 != 0) && (*(undefined4 **)(param_1 + 0x248) != (undefined4 *)0x0)) {
    uVar2 = **(undefined4 **)(param_1 + 0x248);
    FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
    iVar4 = (*(code *)**(undefined4 **)(*piVar1 + 0xc))(uVar2,local_14c,local_1d0);
    if (iVar4 != 0) {
      (*(code *)**(undefined4 **)(*piVar1 + 0x10))(uVar2,local_14c,0,auStack_1cc,auStack_18c);
    }
  }
  return 0;
}



//==== 00611f88  ns=Global  size=0x48
// sig: undefined FUN_00611f88(void)
// callers(0): 
// callees(2): 0061122c FUN_0061122c; 0061948c 989snd::snd_Printf
// strings: 0066b4e0: 'Stream MultiTrack Volumes' | 0066b500: '%s(%d) : snd_SFX_GRAIN_TYPE_STREAM_MULTITRACK_VOLUMES deprecated.\n' | 0066b378: 'common/grains.cpp'

undefined8 FUN_00611f88(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f18));
  989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f14));
  return 0;
}



//==== 00611fd0  ns=Global  size=0x160
// sig: undefined FUN_00611fd0(void)
// callers(0): 
// callees(4): 00609a5c FUN_00609a5c; 00610c74 FUN_00610c74; 0061122c FUN_0061122c; 0061a8d0 FUN_0061a8d0
// strings: 0066b548: 'Stream'

undefined8 FUN_00611fd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_350 [40];
  uint local_328;
  
  piVar1 = *(int **)(PTR_PTR_0071b000 + -0x7f28);
  if (*piVar1 != 0) {
    FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f10));
    if ((param_1[1] & 0x20) == 0) {
      param_1[1] = param_1[1] | 0x10;
      FUN_00610c74(param_1,param_2,param_3,auStack_350);
      iVar2 = (*(code *)**(undefined4 **)*piVar1)(auStack_350);
      if (iVar2 != 0) {
        FUN_0061a8d0(param_1,iVar2);
      }
      if ((local_328 & 1) != 0) {
        do {
          puVar3 = param_1;
          param_1 = (undefined4 *)puVar3[0x8a];
        } while (param_1 != (undefined4 *)0x0);
        FUN_00609a5c(*puVar3);
        return 0;
      }
    }
  }
  return 0;
}



//==== 00612130  ns=Global  size=0x4b4
// sig: undefined FUN_00612130(void)
// callers(0): 
// callees(16): 0060d938 FUN_0060d938; 0060dc04 FUN_0060dc04; 0060dcd8 FUN_0060dcd8; 0060f38c FUN_0060f38c; 0060fabc FUN_0060fabc; 0060fb74 FUN_0060fb74; 0061122c FUN_0061122c; 00618098 FUN_00618098; 0061838c FUN_0061838c; 00619424 FUN_00619424; 0061948c 989snd::snd_Printf; 0061a5b8 FUN_0061a5b8; 0061addc FUN_0061addc; 0061ae90 FUN_0061ae90; 0061b86c FUN_0061b86c; 0062112c FUN_0062112c
// strings: 0066b550: 'Branch To Child Sound' | 0066b480: '  by index: %i\n' | 0066b5a0: '%s(%d) : Unable to branch sound.\n' | 0066b378: 'common/grains.cpp' | 0066b590: '  by name: %s\n' | 0066b438: '  by name: %.16s\n' | 0066b568: '%s(%d) : Missing sound name %s.\n' | 0066b5c8: '%s(%d) : Attempt to branch sound with no grains.\n'

/* WARNING: Removing unreachable block (ram,0x006125a4) */
/* WARNING: Removing unreachable block (ram,0x006125ac) */

undefined4 FUN_00612130(int param_1,undefined8 param_2,uint *param_3)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined1 *puVar13;
  double dVar14;
  int local_60;
  undefined1 local_5c [20];
  
  puVar7 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f0c));
  iVar9 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  iVar9 = iVar9 + (*param_3 & 0xffffff);
  if (*(int *)(iVar9 + 0xc) < 0) {
    if (*(uint *)(*(int *)(param_1 + 0x240) + 4) < 4) {
      iVar8 = iVar9 + 0x10;
      FUN_00619424(*(undefined4 *)(puVar7 + -0x7f38),iVar8);
      FUN_0061838c(0,iVar8,&local_60);
      uVar12 = FUN_0061838c(*(undefined4 *)(param_1 + 0x240),iVar8,&local_60);
      if ((int)uVar12 < 0) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f08));
        return 0xffffffff;
      }
    }
    else {
      iVar8 = iVar9 + 0x14;
      FUN_00619424(*(undefined4 *)(puVar7 + -0x7f04),iVar8);
      FUN_00618098(0,iVar8,*(undefined4 *)(iVar9 + 0x10),&local_60);
      uVar12 = FUN_00618098(*(undefined4 *)(param_1 + 0x240),iVar8,*(undefined4 *)(iVar9 + 0x10),
                            &local_60);
      if ((int)uVar12 < 0) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f08));
        return 0xffffffff;
      }
    }
    local_60 = 0;
    if ((int)uVar12 < (int)sRam00000016) goto LAB_006121e8;
  }
  else {
    FUN_00619424(*(undefined4 *)(puVar7 + -0x7f30),*(int *)(iVar9 + 0xc));
    uVar12 = *(uint *)(iVar9 + 0xc);
    local_60 = *(int *)(param_1 + 0x240);
    if ((-1 < (int)uVar12) && ((int)uVar12 < (int)*(short *)(local_60 + 0x16))) {
LAB_006121e8:
      if (*(char *)(iVar9 + 9) == '\0') {
        FUN_0062112c(param_1);
      }
      iVar9 = FUN_0060dcd8(local_60);
      puVar13 = (undefined1 *)(iVar9 + uVar12 * 0x10 + (uVar12 & 0x3fffffff) * -4);
      if (((*(ushort *)(puVar13 + 6) & 8) != 0) &&
         (iVar9 = FUN_0060f38c(puVar13,0,local_5c), iVar9 == 0)) {
        return 0xffffffff;
      }
      if (puVar13[4] == '\0') {
        989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7efc));
        return 0xffffffff;
      }
      iVar9 = *(int *)(puVar7 + -0x7ef8);
      iVar10 = *(char *)(param_1 + 0x10) * 4;
      iVar8 = *(int *)(iVar9 + iVar10);
      if (iVar8 != 0) {
        *(int *)(iVar9 + iVar10) = iVar8 + -1;
      }
      iVar8 = *(int *)(puVar7 + -0x7ef0);
      iVar10 = -1;
      piVar3 = *(int **)(puVar7 + -0x7ef4);
      while (iVar10 = FUN_0061a5b8(param_1,iVar10 + 1), -1 < iVar10) {
        iVar6 = iVar10 * 0x68 + *piVar3;
        iVar5 = *(char *)(iVar6 + 10) * 4;
        iVar4 = *(int *)(iVar8 + iVar5);
        if (iVar4 != 0) {
          *(int *)(iVar8 + iVar5) = iVar4 + -1;
        }
        *(undefined1 *)(iVar6 + 10) = puVar13[1];
        iVar4 = *(char *)(iVar10 * 0x68 + *piVar3 + 10) * 4;
        *(int *)(iVar8 + iVar4) = *(int *)(iVar8 + iVar4) + 1;
      }
      *(undefined1 **)(param_1 + 0x54) = puVar13;
      dVar14 = (double)FUN_0060fabc(*puVar13,0);
      uVar2 = *(undefined2 *)(puVar13 + 2);
      *(float *)(param_1 + 0x11c) = (float)dVar14;
      uVar11 = FUN_0060fb74(uVar2);
      *(undefined4 *)(param_1 + 0x130) = uVar11;
      cVar1 = puVar13[1];
      *(undefined2 *)(param_1 + 0x23c) = 0;
      *(char *)(param_1 + 0x10) = cVar1;
      iVar10 = cVar1 * 4;
      *(undefined2 *)(param_1 + 0x236) = 0xffff;
      *(undefined2 *)(param_1 + 0x234) = 0;
      *(int *)(param_1 + 0x240) = local_60;
      iVar8 = *(int *)(iVar9 + iVar10);
      *(undefined2 *)(param_1 + 0x238) = 0;
      *(undefined2 *)(param_1 + 0x23a) = 0;
      *(int *)(iVar9 + iVar10) = iVar8 + 1;
      FUN_0061ae90(param_1);
      FUN_0061addc(param_1);
      iVar9 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),puVar13);
      return *(undefined4 *)(iVar9 + 4);
    }
  }
  989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f00));
  return 0xffffffff;
}



//==== 006125e4  ns=Global  size=0xa4
// sig: undefined FUN_006125e4(void)
// callers(0): 
// callees(3): 0060d938 FUN_0060d938; 0061122c FUN_0061122c; 006308e4 FUN_006308e4
// strings: 0066b600: 'Plugin'

undefined4 FUN_006125e4(undefined4 *param_1,undefined8 param_2,uint *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7eec));
  iVar2 = FUN_0060d938(param_1[0x90]);
  puVar1 = (undefined4 *)(iVar2 + (*param_3 & 0xffffff));
  uVar3 = FUN_006308e4(*puVar1,puVar1[1],*param_1,puVar1 + 2,param_1,0,0);
  return uVar3;
}



//==== 00612688  ns=Global  size=0x16c
// sig: undefined FUN_00612688(void)
// callers(0): 
// callees(2): 0061122c FUN_0061122c; 00619424 FUN_00619424
// strings: 0066b608: 'Copy Register' | 0066b618: '  copy from local reg %i\n' | 0066b658: '  copy to local reg %i\n' | 0066b690: '  value: %i\n' | 0066b638: '  copy from global reg %i\n' | 0066b670: '  copy to global reg %i\n'

undefined8 FUN_00612688(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7ee8));
  cVar1 = *(char *)(param_3 + 1);
  if (cVar1 < '\0') {
    uVar2 = *(undefined1 *)(*(int *)(puVar4 + -0x7f5c) + ~(int)cVar1);
    FUN_00619424(*(undefined4 *)(puVar4 + -0x7ee0),~(int)cVar1 + 1);
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + cVar1 + 0x164);
    FUN_00619424(*(undefined4 *)(puVar4 + -0x7ee4),cVar1);
    cVar1 = *(char *)(param_3 + 2);
  }
  if (-1 < cVar1) {
    uVar3 = *(undefined4 *)(puVar4 + -0x7edc);
    *(undefined1 *)(param_1 + cVar1 + 0x164) = uVar2;
    FUN_00619424(uVar3,cVar1);
    FUN_00619424(*(undefined4 *)(puVar4 + -0x7ed4),uVar2);
    return 0;
  }
  uVar3 = *(undefined4 *)(puVar4 + -0x7ed8);
  *(undefined1 *)(*(int *)(puVar4 + -0x7f5c) + ~(int)cVar1) = uVar2;
  FUN_00619424(uVar3,~(int)cVar1 + 1);
  FUN_00619424(*(undefined4 *)(puVar4 + -0x7ed4),uVar2);
  return 0;
}



//==== 006127f4  ns=Global  size=0x64
// sig: undefined FUN_006127f4(void)
// callers(0): 
// callees(1): 0061122c FUN_0061122c
// strings: 0066b6a0: 'On Stop Marker'

undefined8 FUN_006127f4(int param_1,int param_2)

{
  byte bVar1;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7ed0));
  bVar1 = *(byte *)(param_2 + 4);
  *(ushort *)(param_1 + 0x23e) = *(ushort *)(param_1 + 0x23e) | 1;
  *(ushort *)(param_1 + 0x236) = bVar1 - 1;
  return 0;
}



//==== 00612858  ns=Global  size=0x94
// sig: undefined FUN_00612858(void)
// callers(0): 
// callees(2): 0061122c FUN_0061122c; 0062112c FUN_0062112c
// strings: 0066b6b0: 'Silence Voices'

undefined8 FUN_00612858(int param_1)

{
  byte *pbVar1;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7ecc));
  FUN_0062112c(param_1);
  pbVar1 = *(byte **)(param_1 + 0x22c);
  do {
    if (pbVar1 == (byte *)0x0) {
      return 0;
    }
    while ((*pbVar1 & 0x1f) != 4) {
      pbVar1 = *(byte **)(pbVar1 + 0x230);
      if (pbVar1 == (byte *)0x0) {
        return 0;
      }
    }
    FUN_0062112c(pbVar1);
    pbVar1 = *(byte **)(pbVar1 + 0x230);
  } while( true );
}



//==== 006128ec  ns=Global  size=0x94
// sig: undefined FUN_006128ec(void)
// callers(0): 
// callees(2): 0061122c FUN_0061122c; 00621460 FUN_00621460
// strings: 0066b6c0: 'Key Off Voices'

undefined8 FUN_006128ec(int param_1)

{
  byte *pbVar1;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7ec8));
  FUN_00621460(param_1);
  pbVar1 = *(byte **)(param_1 + 0x22c);
  do {
    if (pbVar1 == (byte *)0x0) {
      return 0;
    }
    while ((*pbVar1 & 0x1f) != 4) {
      pbVar1 = *(byte **)(pbVar1 + 0x230);
      if (pbVar1 == (byte *)0x0) {
        return 0;
      }
    }
    FUN_00621460(pbVar1);
    pbVar1 = *(byte **)(pbVar1 + 0x230);
  } while( true );
}



//==== 00612980  ns=Global  size=0x144
// sig: undefined FUN_00612980(void)
// callers(0): 
// callees(2): 0061122c FUN_0061122c; 00619424 FUN_00619424
// strings: 0066b6d0: 'Add Register' | 0066b6e0: '  setting local reg %i to %i\n' | 0066b700: '  setting global reg %i to %i\n'

undefined8 FUN_00612980(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar3 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7ec4));
  cVar1 = *(char *)(param_3 + 2);
  if (-1 < cVar1) {
    iVar4 = (int)*(char *)(param_1 + cVar1 + 0x160 + 4) + (int)*(char *)(param_3 + 1);
    if (iVar4 < 0x80) {
      if (iVar4 < -0x80) {
        iVar4 = -0x80;
      }
    }
    else {
      iVar4 = 0x7f;
    }
    uVar2 = *(undefined4 *)(puVar3 + -0x7ec0);
    *(char *)(param_1 + cVar1 + 0x160 + 4) = (char)iVar4;
    FUN_00619424(uVar2,cVar1,iVar4);
    return 0;
  }
  uVar5 = ~(int)cVar1;
  iVar4 = (int)*(char *)(*(int *)(puVar3 + -0x7f5c) + uVar5) + (int)*(char *)(param_3 + 1);
  if (iVar4 < 0x80) {
    if (iVar4 < -0x80) {
      iVar4 = -0x80;
    }
  }
  else {
    iVar4 = 0x7f;
  }
  uVar2 = *(undefined4 *)(puVar3 + -0x7ebc);
  *(char *)(*(int *)(puVar3 + -0x7f5c) + uVar5) = (char)iVar4;
  FUN_00619424(uVar2,uVar5 + 1,iVar4);
  return 0;
}



//==== 00612ac4  ns=Global  size=0x100
// sig: undefined FUN_00612ac4(void)
// callers(0): 
// callees(2): 0061122c FUN_0061122c; 006194f4 FUN_006194f4
// strings: 0066b720: 'Play Cycle'

undefined4 FUN_00612ac4(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7eb8));
  uVar4 = 0;
  if (*(short *)(param_1 + 0x238) == 0) {
    cVar1 = *(char *)(param_3 + 3);
    *(char *)(param_3 + 3) = cVar1 + '\x01';
    if (*(char *)(param_3 + 1) == (char)(cVar1 + '\x01')) {
      *(undefined1 *)(param_3 + 3) = 0;
    }
    *(short *)(param_1 + 0x236) =
         (short)cVar1 * (short)*(char *)(param_3 + 2) + *(short *)(param_1 + 0x236);
    *(short *)(param_1 + 0x23a) = *(char *)(param_3 + 2) + 1;
    cVar2 = *(char *)(param_3 + 1);
    cVar3 = *(char *)(param_3 + 2);
    *(undefined2 *)(param_1 + 0x238) = 1;
    *(short *)(param_1 + 0x23c) = (((short)cVar2 - (short)cVar1) + -1) * (short)cVar3;
  }
  else {
    FUN_006194f4(0xd,0,0,0,0);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



//==== 00612bc4  ns=Global  size=0x98
// sig: undefined FUN_00612bc4(void)
// callers(0): 
// callees(3): 0061122c FUN_0061122c; 00619860 FUN_00619860; 006198d0 FUN_006198d0
// strings: 0066b730: 'Wait For Voices'

undefined4 FUN_00612bc4(int param_1)

{
  int iVar1;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7eb4));
  iVar1 = FUN_00619860(param_1);
  if (((iVar1 == 0) && ((*(uint *)(param_1 + 4) & 0x10) == 0)) &&
     (iVar1 = FUN_006198d0(param_1), iVar1 == 0)) {
    return 0;
  }
  *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + -1;
  return 1;
}



//==== 00612c5c  ns=Global  size=0x5a0
// sig: undefined FUN_00612c5c(void)
// callers(0): 
// callees(6): 0060d938 FUN_0060d938; 0060dc04 FUN_0060dc04; 0061122c FUN_0061122c; 006190b8 FUN_006190b8; 00619424 FUN_00619424; 006194f4 FUN_006194f4
// strings: 0066b740: 'Goto Random Marker Ex' | 0066b758: '  marker %i\n'

undefined4 FUN_00612c5c(int param_1,int param_2,uint *param_3)

{
  byte bVar1;
  int *piVar2;
  bool bVar3;
  char *pcVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  char cVar15;
  int iVar16;
  ulonglong uVar17;
  
  puVar6 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7eb0));
  piVar2 = *(int **)(puVar6 + -0x7eac);
  iVar7 = *piVar2 + 1;
  *piVar2 = iVar7;
  if (8 < iVar7) {
    FUN_006194f4(0x84,8,0,0,0);
    *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + -1;
    return 1;
  }
  iVar7 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  pcVar4 = (char *)(iVar7 + (*param_3 & 0xffffff));
  cVar15 = pcVar4[3];
  if (cVar15 < '\x10') {
    iVar16 = (int)(char)((pcVar4[1] - *pcVar4) + '\x01');
    iVar7 = iVar16 + -1;
    cVar12 = pcVar4[1] - *pcVar4;
    if (iVar7 < cVar15) goto LAB_00612f6c;
LAB_00612d7c:
    cVar12 = pcVar4[0x15];
    if (cVar12 == '\0') goto LAB_00612f34;
LAB_00612d8c:
    cVar12 = pcVar4[2];
  }
  else {
    cVar15 = '\x10';
    iVar16 = (int)(char)((pcVar4[1] - *pcVar4) + '\x01');
    iVar7 = iVar16 + -1;
    cVar12 = pcVar4[1] - *pcVar4;
    if (0xf < iVar7) goto LAB_00612d7c;
LAB_00612f6c:
    cVar15 = cVar12;
    if (pcVar4[0x15] != '\0') goto LAB_00612d8c;
    cVar12 = '\0';
LAB_00612f34:
    if (pcVar4[cVar15 + 4] == -1) {
      pcVar4[0x15] = cVar12;
      goto LAB_00612d8c;
    }
    pcVar4[0x15] = '\x01';
    cVar12 = pcVar4[2];
  }
  if (cVar12 == '\0') {
    cVar15 = *pcVar4;
    uVar8 = FUN_006190b8();
    iVar7 = (int)cVar15 + ((uVar8 & 0xffff) - ((int)(uVar8 & 0xffff) / iVar16) * iVar16);
  }
  else if (cVar12 == '\x01') {
    if (pcVar4[0x15] == '\x01') {
      if (iVar7 == cVar15) {
        iVar7 = 0;
        cVar12 = '\0';
        cVar13 = '\0';
        if (0 < cVar15) {
          cVar13 = '\0';
          uVar17 = (ulonglong)(iVar16 - 1);
          iVar16 = 0;
          iVar9 = 1;
          do {
            iVar7 = iVar7 + *pcVar4 + iVar16;
            cVar12 = (char)iVar7;
            cVar13 = cVar13 + pcVar4[iVar16 + 5];
            uVar17 = uVar17 - 1;
            iVar16 = iVar9;
            iVar9 = iVar9 + 1;
          } while (uVar17 != 0);
        }
        pcVar4[0x15] = '\x02';
        iVar7 = (int)(char)((pcVar4[1] + cVar12) - cVar13);
        goto LAB_00612dc0;
      }
    }
    else if (pcVar4[0x15] == '\x02') {
      uVar8 = ((int)pcVar4[4] - (int)cVar15) + 0xf;
      iVar7 = (int)pcVar4[uVar8 + (((int)uVar8 >> 4) + (uint)((int)uVar8 < 0 && (uVar8 & 0xf) != 0))
                                  * -0x10 + 5];
      goto LAB_00612dc0;
    }
    cVar12 = *pcVar4;
    uVar8 = ((int)pcVar4[4] - (int)cVar15) + 0x10;
    iVar14 = uVar8 + (((int)uVar8 >> 4) + (uint)((int)uVar8 < 0 && (uVar8 & 0xf) != 0) & 0xfffffff)
                     * -0x10;
    uVar8 = FUN_006190b8();
    bVar1 = pcVar4[4];
    uVar10 = (uint)bVar1;
    cVar15 = (char)iVar14;
    iVar9 = (int)(char)bVar1;
    iVar7 = (int)cVar12 + ((uVar8 & 0xffff) - ((int)(uVar8 & 0xffff) / iVar16) * iVar16);
    if ((int)cVar15 <= (int)(char)bVar1) goto LAB_006130d4;
LAB_00613024:
    iVar9 = iVar9 + 0x10;
    if (cVar15 < iVar9) {
      bVar3 = true;
      uVar8 = (uint)cVar15;
      iVar11 = iVar14;
      do {
        while (pcVar4[(char)((char)uVar8 -
                            (char)(((longlong)((int)uVar8 >> 4) +
                                    (ulonglong)((int)uVar8 < 0 && (uVar8 & 0xf) != 0) & 0xffffffff)
                                  << 4)) + 5] == iVar7) {
          bVar3 = false;
          iVar11 = uVar10 + 0x11;
          uVar8 = (uint)(char)iVar11;
          if (iVar9 <= (char)iVar11) goto LAB_00613094;
        }
        iVar11 = iVar11 + 1;
        uVar8 = (uint)(char)iVar11;
      } while ((char)iVar11 < iVar9);
LAB_00613094:
      do {
        if (bVar3) break;
        cVar12 = *pcVar4;
        uVar8 = FUN_006190b8();
        bVar1 = pcVar4[4];
        uVar10 = (uint)bVar1;
        iVar9 = (int)(char)bVar1;
        iVar7 = (int)cVar12 + ((uVar8 & 0xffff) - ((int)(uVar8 & 0xffff) / iVar16) * iVar16);
        if ((int)(char)bVar1 < (int)cVar15) goto LAB_00613024;
LAB_006130d4:
        if (iVar9 + 1 <= (int)cVar15) break;
        bVar3 = true;
        cVar12 = cVar15;
        iVar11 = iVar14;
        do {
          uVar8 = (uint)cVar12;
          if (pcVar4[(char)(cVar12 - (char)(((longlong)((int)uVar8 >> 4) +
                                             (ulonglong)((int)uVar8 < 0 && (uVar8 & 0xf) != 0) &
                                            0xffffffff) << 4)) + 5] == iVar7) {
            bVar3 = false;
            iVar11 = uVar10 + 1;
          }
          iVar11 = iVar11 + 1;
          cVar12 = (char)iVar11;
        } while ((int)cVar12 < iVar9 + 1);
      } while( true );
    }
  }
  else {
    iVar7 = 0;
    FUN_006194f4(0xc,cVar12,0,0,0);
  }
LAB_00612dc0:
  FUN_00619424(*(undefined4 *)(puVar6 + -0x7ea8),iVar7);
  if (*(char *)(param_2 + 4) == '\0') {
LAB_00612f10:
    FUN_006194f4(0xc,iVar7,0,0,0);
    return 0xffffffff;
  }
  iVar16 = 0;
  do {
    iVar9 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
    if (*(char *)(iVar9 + iVar16 * 8) == '#') {
      iVar9 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
      bVar3 = true;
      if (*(char *)(iVar9 + iVar16 * 8 + 1) != iVar7) goto LAB_00612e10;
      *(short *)(param_1 + 0x236) = (short)iVar16 + -1;
      bVar5 = false;
      uVar8 = (int)pcVar4[4] + 1;
      pcVar4[pcVar4[4] + 5] = (char)iVar7;
      pcVar4[4] = (char)uVar8 -
                  (char)(((longlong)((int)uVar8 >> 4) +
                          (ulonglong)((int)uVar8 < 0 && (uVar8 & 0xf) != 0) & 0xffffffff) << 4);
      if ((int)(uint)*(byte *)(param_2 + 4) <= iVar16 + 1) goto LAB_00612f08;
    }
    else {
LAB_00612e10:
      bVar3 = false;
      bVar5 = true;
      if ((int)(uint)*(byte *)(param_2 + 4) <= iVar16 + 1) {
LAB_00612f08:
        if (bVar3) {
          return 0;
        }
        goto LAB_00612f10;
      }
    }
    iVar16 = iVar16 + 1;
    if (!bVar5) {
      return 0;
    }
  } while( true );
}



//==== 006131fc  ns=Global  size=0x200
// sig: undefined FUN_006131fc(void)
// callers(0): 
// callees(5): 0060dc04 FUN_0060dc04; 0061122c FUN_0061122c; 006190b8 FUN_006190b8; 00619424 FUN_00619424; 006194f4 FUN_006194f4
// strings: 0066b768: 'Goto Random Marker' | 0066b758: '  marker %i\n'

undefined4 FUN_006131fc(int param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  puVar6 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7ea4));
  piVar3 = *(int **)(puVar6 + -0x7eac);
  iVar10 = *piVar3 + 1;
  *piVar3 = iVar10;
  if (iVar10 < 9) {
    cVar1 = *(char *)(param_3 + 2);
    cVar2 = *(char *)(param_3 + 1);
    uVar8 = FUN_006190b8();
    iVar10 = ((int)cVar1 - (int)cVar2) + 1;
    iVar10 = ((uVar8 & 0xffff) - ((int)(uVar8 & 0xffff) / iVar10) * iVar10) +
             (int)*(char *)(param_3 + 1);
    FUN_00619424(*(undefined4 *)(puVar6 + -0x7ea8),iVar10);
    if (*(char *)(param_2 + 4) != '\0') {
      iVar11 = 0;
      do {
        iVar9 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
        if (*(char *)(iVar9 + iVar11 * 8) == '#') {
          iVar9 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
          bVar4 = true;
          if (*(char *)(iVar9 + iVar11 * 8 + 1) != iVar10) goto LAB_0061333c;
          *(short *)(param_1 + 0x236) = (short)iVar11 + -1;
          bVar5 = false;
          if ((int)(uint)*(byte *)(param_2 + 4) <= iVar11 + 1) goto LAB_006133d0;
        }
        else {
LAB_0061333c:
          bVar4 = false;
          bVar5 = true;
          if ((int)(uint)*(byte *)(param_2 + 4) <= iVar11 + 1) {
LAB_006133d0:
            if (bVar4) {
              return 0;
            }
            break;
          }
        }
        iVar11 = iVar11 + 1;
        if (!bVar5) {
          return 0;
        }
      } while( true );
    }
    FUN_006194f4(0xc,iVar10,0,0,0);
    uVar7 = 0xffffffff;
  }
  else {
    FUN_006194f4(0x84,8,0,0,0);
    uVar7 = 1;
    *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + -1;
  }
  return uVar7;
}



//==== 006133fc  ns=Global  size=0x1cc
// sig: undefined FUN_006133fc(void)
// callers(0): 
// callees(4): 0060dc04 FUN_0060dc04; 0061122c FUN_0061122c; 00619424 FUN_00619424; 006194f4 FUN_006194f4
// strings: 0066b780: 'Goto Marker' | 0066b758: '  marker %i\n'

undefined4 FUN_006133fc(int param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  puVar5 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7ea0));
  piVar2 = *(int **)(puVar5 + -0x7eac);
  iVar8 = *piVar2 + 1;
  *piVar2 = iVar8;
  if (iVar8 < 9) {
    cVar1 = *(char *)(param_3 + 1);
    FUN_00619424(*(undefined4 *)(puVar5 + -0x7ea8),cVar1);
    if (*(char *)(param_2 + 4) != '\0') {
      iVar8 = 0;
      do {
        iVar7 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
        if (*(char *)(iVar7 + iVar8 * 8) == '#') {
          iVar7 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
          bVar3 = true;
          if (*(char *)(iVar7 + iVar8 * 8 + 1) != cVar1) goto LAB_00613508;
          *(short *)(param_1 + 0x236) = (short)iVar8 + -1;
          bVar4 = false;
          if ((int)(uint)*(byte *)(param_2 + 4) <= iVar8 + 1) goto LAB_0061359c;
        }
        else {
LAB_00613508:
          bVar3 = false;
          bVar4 = true;
          if ((int)(uint)*(byte *)(param_2 + 4) <= iVar8 + 1) {
LAB_0061359c:
            if (bVar3) {
              return 0;
            }
            break;
          }
        }
        iVar8 = iVar8 + 1;
        if (!bVar4) {
          return 0;
        }
      } while( true );
    }
    FUN_006194f4(0xb,0,0,0,0);
    uVar6 = 0xffffffff;
  }
  else {
    FUN_006194f4(0x84,8,0,0,0);
    uVar6 = 1;
    *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + -1;
  }
  return uVar6;
}



//==== 006135c8  ns=Global  size=0x34
// sig: undefined FUN_006135c8(void)
// callers(0): 
// callees(1): 0061122c FUN_0061122c
// strings: 0066b790: 'Marker'

undefined8 FUN_006135c8(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e9c));
  return 0;
}



//==== 006135fc  ns=Global  size=0x140
// sig: undefined FUN_006135fc(void)
// callers(0): 
// callees(1): 0061122c FUN_0061122c
// strings: 0066b798: 'Test Register'

undefined8 FUN_006135fc(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  char cVar3;
  
  puVar2 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e98));
  cVar3 = *(char *)(param_3 + 1);
  if (cVar3 < '\0') {
    cVar3 = *(char *)(*(int *)(puVar2 + -0x7f5c) + ~(int)cVar3);
  }
  else {
    cVar3 = *(char *)(param_1 + cVar3 + 0x164);
  }
  cVar1 = *(char *)(param_3 + 2);
  if (cVar1 == '\x01') {
    if (*(char *)(param_3 + 3) != cVar3) goto LAB_006136a8;
  }
  else if (cVar1 < '\x02') {
    if ((cVar1 == '\0') && (*(char *)(param_3 + 3) <= cVar3)) goto LAB_006136a8;
  }
  else if (cVar1 == '\x02') {
    if (cVar3 <= *(char *)(param_3 + 3)) goto LAB_006136a8;
  }
  else if ((cVar1 == '\x03') && (*(char *)(param_3 + 3) == cVar3)) {
LAB_006136a8:
    *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + 1;
    return 0;
  }
  return 0;
}



//==== 0061373c  ns=Global  size=0x114
// sig: undefined FUN_0061373c(void)
// callers(0): 
// callees(2): 0061122c FUN_0061122c; 00619424 FUN_00619424
// strings: 0066b7a8: 'Decrement Register' | 0066b7c0: '  set local reg %i to %i\n' | 0066b7e0: '  set global reg %i to %i\n'

undefined8 FUN_0061373c(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  puVar3 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e94));
  cVar1 = *(char *)(param_3 + 1);
  uVar6 = ~(int)cVar1;
  param_1 = param_1 + cVar1 + 0x160;
  if (-1 < cVar1) {
    iVar4 = *(char *)(param_1 + 4) + -1;
    if (iVar4 < -0x80) {
      iVar4 = -0x80;
    }
    uVar2 = *(undefined4 *)(puVar3 + -0x7e90);
    *(char *)(param_1 + 4) = (char)iVar4;
    FUN_00619424(uVar2,cVar1,iVar4);
    return 0;
  }
  iVar4 = *(int *)(puVar3 + -0x7f5c);
  iVar5 = *(char *)(iVar4 + uVar6) + -1;
  if (iVar5 < -0x80) {
    uVar2 = *(undefined4 *)(puVar3 + -0x7e8c);
    *(undefined1 *)(iVar4 + uVar6) = 0x80;
    FUN_00619424(uVar2,uVar6 + 1,0xffffffffffffff80);
  }
  else {
    uVar2 = *(undefined4 *)(puVar3 + -0x7e8c);
    *(char *)(iVar4 + uVar6) = (char)iVar5;
    FUN_00619424(uVar2,uVar6 + 1,iVar5);
  }
  return 0;
}



//==== 00613850  ns=Global  size=0x114
// sig: undefined FUN_00613850(void)
// callers(0): 
// callees(2): 0061122c FUN_0061122c; 00619424 FUN_00619424
// strings: 0066b800: 'Increment Register' | 0066b7c0: '  set local reg %i to %i\n' | 0066b7e0: '  set global reg %i to %i\n'

undefined8 FUN_00613850(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  puVar3 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e88));
  cVar1 = *(char *)(param_3 + 1);
  uVar6 = ~(int)cVar1;
  param_1 = param_1 + cVar1 + 0x160;
  if (-1 < cVar1) {
    iVar4 = *(char *)(param_1 + 4) + 1;
    if (0x7f < iVar4) {
      iVar4 = 0x7f;
    }
    uVar2 = *(undefined4 *)(puVar3 + -0x7e90);
    *(char *)(param_1 + 4) = (char)iVar4;
    FUN_00619424(uVar2,cVar1,iVar4);
    return 0;
  }
  iVar4 = *(int *)(puVar3 + -0x7f5c);
  iVar5 = *(char *)(iVar4 + uVar6) + 1;
  if (iVar5 < 0x80) {
    uVar2 = *(undefined4 *)(puVar3 + -0x7e8c);
    *(char *)(iVar4 + uVar6) = (char)iVar5;
    FUN_00619424(uVar2,uVar6 + 1,iVar5);
  }
  else {
    uVar2 = *(undefined4 *)(puVar3 + -0x7e8c);
    *(undefined1 *)(iVar4 + uVar6) = 0x7f;
    FUN_00619424(uVar2,uVar6 + 1,0x7f);
  }
  return 0;
}



//==== 00613964  ns=Global  size=0x110
// sig: undefined FUN_00613964(void)
// callers(0): 
// callees(3): 0061122c FUN_0061122c; 006190b8 FUN_006190b8; 00619424 FUN_00619424
// strings: 0066b818: 'Set Register Random' | 0066b7c0: '  set local reg %i to %i\n' | 0066b7e0: '  set global reg %i to %i\n'

undefined8 FUN_00613964(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  
  puVar5 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e84));
  cVar1 = *(char *)(param_3 + 3);
  cVar2 = *(char *)(param_3 + 2);
  uVar6 = FUN_006190b8();
  cVar3 = *(char *)(param_3 + 1);
  iVar7 = ((int)cVar1 - (int)cVar2) + 1;
  iVar7 = ((uVar6 & 0xffff) - ((int)(uVar6 & 0xffff) / iVar7) * iVar7) + (int)*(char *)(param_3 + 2)
  ;
  if (-1 < cVar3) {
    uVar4 = *(undefined4 *)(puVar5 + -0x7e90);
    *(char *)(param_1 + cVar3 + 0x164) = (char)iVar7;
    FUN_00619424(uVar4,cVar3,iVar7);
    return 0;
  }
  uVar4 = *(undefined4 *)(puVar5 + -0x7e8c);
  *(char *)(*(int *)(puVar5 + -0x7f5c) + ~(int)cVar3) = (char)iVar7;
  FUN_00619424(uVar4,~(int)cVar3 + 1,iVar7);
  return 0;
}



//==== 00613a74  ns=Global  size=0xd8
// sig: undefined FUN_00613a74(void)
// callers(0): 
// callees(2): 0061122c FUN_0061122c; 00619424 FUN_00619424
// strings: 0066b830: 'Set Register' | 0066b7c0: '  set local reg %i to %i\n' | 0066b7e0: '  set global reg %i to %i\n'

undefined8 FUN_00613a74(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e80));
  cVar1 = *(char *)(param_3 + 1);
  if (-1 < cVar1) {
    uVar2 = *(undefined1 *)(param_3 + 2);
    uVar3 = *(undefined4 *)(puVar4 + -0x7e90);
    *(undefined1 *)(param_1 + cVar1 + 0x164) = uVar2;
    FUN_00619424(uVar3,cVar1,uVar2);
    return 0;
  }
  uVar2 = *(undefined1 *)(param_3 + 2);
  uVar3 = *(undefined4 *)(puVar4 + -0x7e8c);
  *(undefined1 *)(*(int *)(puVar4 + -0x7f5c) + ~(int)cVar1) = uVar2;
  FUN_00619424(uVar3,~(int)cVar1 + 1,uVar2);
  return 0;
}



//==== 00613b4c  ns=Global  size=0x134
// sig: undefined FUN_00613b4c(void)
// callers(0): 
// callees(3): 0061122c FUN_0061122c; 00619424 FUN_00619424; 0061f100 FUN_0061f100
// strings: 0066b840: 'Add Pitchbend' | 0066b850: '  pitchbend: %i\n'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_00613b4c(int param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e7c));
  iVar3 = (int)*(char *)(param_3 + 1);
  if (iVar3 < 0) {
    *(float *)(param_1 + 0x158) =
         (float)(longlong)iVar3 * *(float *)(puVar2 + -0x7e78) + *(float *)(param_1 + 0x158);
    fVar1 = *(float *)(param_1 + 0x158);
  }
  else {
    *(float *)(param_1 + 0x158) =
         *(float *)(param_1 + 0x158) + (float)(longlong)iVar3 / *(float *)(puVar2 + -0x7fe0);
    fVar1 = *(float *)(param_1 + 0x158);
  }
  if ((int)fVar1 < -1) {
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(puVar2 + -0x7e70);
  }
  else if (*(float *)(puVar2 + -0x8000) < fVar1) {
    *(float *)(param_1 + 0x158) = *(float *)(puVar2 + -0x8000);
  }
  FUN_0061f100(param_1);
  FUN_00619424((double)*(float *)(param_1 + 0x158),*(undefined4 *)(puVar2 + -0x7e68),
               (double)*(float *)(param_1 + 0x158));
  return 0;
}



//==== 00613c80  ns=Global  size=0x128
// sig: undefined FUN_00613c80(void)
// callers(0): 
// callees(3): 0061122c FUN_0061122c; 00619424 FUN_00619424; 0061f100 FUN_0061f100
// strings: 0066b868: 'Set Pitchbend' | 0066b878: '  pitchbend: %f\n'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_00613c80(int param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e64));
  iVar3 = (int)*(char *)(param_3 + 1);
  if (iVar3 < 0) {
    *(float *)(param_1 + 0x158) = (float)(longlong)iVar3 * *(float *)(puVar2 + -0x7e78);
    fVar1 = *(float *)(param_1 + 0x158);
  }
  else {
    *(float *)(param_1 + 0x158) = (float)(longlong)iVar3 / *(float *)(puVar2 + -0x7fe0);
    fVar1 = *(float *)(param_1 + 0x158);
  }
  if ((int)fVar1 < -1) {
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(puVar2 + -0x7e70);
  }
  else if (*(float *)(puVar2 + -0x8000) < fVar1) {
    *(float *)(param_1 + 0x158) = *(float *)(puVar2 + -0x8000);
  }
  FUN_0061f100(param_1);
  FUN_00619424((double)*(float *)(param_1 + 0x158),*(undefined4 *)(puVar2 + -0x7e60),
               (double)*(float *)(param_1 + 0x158));
  return 0;
}



//==== 00613da8  ns=Global  size=0x110
// sig: undefined FUN_00613da8(void)
// callers(0): 
// callees(4): 0061122c FUN_0061122c; 006190b8 FUN_006190b8; 00619424 FUN_00619424; 0061f100 FUN_0061f100
// strings: 0066b890: 'Random Pitchbend' | 0066b878: '  pitchbend: %f\n'

undefined8 FUN_00613da8(int param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  ulonglong uVar4;
  
  puVar3 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e5c));
  uVar4 = FUN_006190b8();
  fVar1 = *(float *)(puVar3 + -0x8000);
  fVar2 = (float)((uVar4 & 0xffff) << 1) / *(float *)(puVar3 + -0x7e58) - fVar1;
  *(float *)(param_1 + 0x158) = fVar2;
  if ((int)fVar2 < -1) {
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(puVar3 + -0x7e70);
  }
  else if (fVar1 < fVar2) {
    *(float *)(param_1 + 0x158) = fVar1;
  }
  *(float *)(param_1 + 0x158) =
       *(float *)(param_1 + 0x158) *
       ((float)(longlong)*(char *)(param_3 + 1) / *(float *)(puVar3 + -0x7e50));
  FUN_0061f100(param_1);
  FUN_00619424((double)*(float *)(param_1 + 0x158),*(undefined4 *)(puVar3 + -0x7e60),
               (double)*(float *)(param_1 + 0x158));
  return 0;
}



//==== 00613eb8  ns=Global  size=0x208
// sig: undefined FUN_00613eb8(void)
// callers(0): 
// callees(5): 0060d938 FUN_0060d938; 0061122c FUN_0061122c; 006190b8 FUN_006190b8; 00619424 FUN_00619424; 006194f4 FUN_006194f4
// strings: 0066b8a8: 'Delay' | 0066b8b0: '  delay: %i\n'

int FUN_00613eb8(int param_1,undefined8 param_2,uint *param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar5;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *pbVar6;
  
  puVar2 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e48));
  iVar5 = **(int **)(puVar2 + -0x7eac) + 1;
  **(int **)(puVar2 + -0x7eac) = iVar5;
  if (8 < iVar5) {
    FUN_006194f4(0x84,8,0,0,0);
    *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + -1;
    return 1;
  }
  iVar5 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  pbVar6 = (byte *)(iVar5 + (*param_3 & 0xffffff));
  bVar1 = *pbVar6;
  if (bVar1 != 1) {
    if ((bVar1 & 2) != 0) {
      if ((bVar1 & 4) == 0) {
        uVar4 = FUN_006190b8();
        iVar5 = (int)(uVar4 & 0xffff) -
                (int)((uVar4 & 0xffff) / (ulonglong)*(ushort *)(pbVar6 + 2)) *
                (uint)*(ushort *)(pbVar6 + 2);
      }
      else if ((char)pbVar6[1] < '\0') {
        uVar3 = FUN_006190b8();
        uVar4 = (longlong)*(char *)(*(int *)(puVar2 + -0x7f5c) + ~(int)(char)pbVar6[1]) & 0xffff;
        iVar5 = (int)(uVar3 & 0xffff) - (int)((uVar3 & 0xffff) / uVar4) * (int)uVar4;
      }
      else {
        uVar3 = FUN_006190b8();
        uVar4 = (longlong)*(char *)(param_1 + (char)pbVar6[1] + 0x164) & 0xffff;
        iVar5 = (int)(uVar3 & 0xffff) - (int)((uVar3 & 0xffff) / uVar4) * (int)uVar4;
      }
      goto LAB_00613fe4;
    }
    if (bVar1 == 4) {
      bVar1 = pbVar6[1];
      if ((char)bVar1 < '\0') {
        iVar5 = (int)*(char *)(*(int *)(puVar2 + -0x7f5c) + ~(int)(char)bVar1);
      }
      else {
        iVar5 = (int)*(char *)(param_1 + (char)bVar1 + 0x164);
      }
      goto LAB_00613fe4;
    }
  }
  iVar5 = 0;
LAB_00613fe4:
  FUN_00619424(*(undefined4 *)(puVar2 + -0x7e44),iVar5);
  return iVar5;
}



//==== 006140c0  ns=Global  size=0x80
// sig: undefined FUN_006140c0(void)
// callers(0): 
// callees(3): 0061122c FUN_0061122c; 006190b8 FUN_006190b8; 00619424 FUN_00619424
// strings: 0066b8c0: 'Random Delay' | 0066b8b0: '  delay: %i\n'

int FUN_006140c0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  puVar1 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e40));
  uVar2 = FUN_006190b8();
  uVar3 = ((ulonglong)*param_3 & 0xffffff) + 1;
  iVar4 = (int)(uVar2 & 0xffff) - (int)((uVar2 & 0xffff) / uVar3) * (int)uVar3;
  FUN_00619424(*(undefined4 *)(puVar1 + -0x7e44),iVar4);
  return iVar4;
}



//==== 00614140  ns=Global  size=0x4c8
// sig: undefined FUN_00614140(void)
// callers(0): 
// callees(5): 0060d938 FUN_0060d938; 00610790 FUN_00610790; 0061122c FUN_0061122c; 006190b8 FUN_006190b8; 006194f4 FUN_006194f4
// strings: 0066b8d0: 'Random Play Ex'

undefined4 FUN_00614140(int param_1,undefined4 param_2,uint *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  short sVar9;
  uint uVar7;
  undefined4 uVar8;
  char cVar10;
  int iVar11;
  char cVar13;
  int iVar12;
  int iVar14;
  char cVar15;
  longlong lVar16;
  ulonglong uVar17;
  
  puVar5 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e3c));
  if (*(short *)(param_1 + 0x238) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x240) + 0xc);
    uVar8 = FUN_00610790(*(int *)(param_1 + 0x240),param_2);
    FUN_006194f4(10,uVar2,uVar8,*(short *)(param_1 + 0x236) + 1,0);
    return 0xffffffff;
  }
  iVar6 = **(int **)(puVar5 + -0x7eac) + 1;
  **(int **)(puVar5 + -0x7eac) = iVar6;
  if (8 < iVar6) {
    FUN_006194f4(0x84,8,0,0,0);
    *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + -1;
    return 1;
  }
  iVar6 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  pcVar4 = (char *)(iVar6 + (*param_3 & 0xffffff));
  cVar15 = pcVar4[3];
  iVar6 = (int)cVar15;
  if ('\x0f' < cVar15) {
    cVar15 = '\x10';
    iVar6 = 0x10;
  }
  if (*pcVar4 + -1 < iVar6) {
    cVar15 = *pcVar4 + -1;
  }
  if (pcVar4[0x15] == '\0') {
    if (pcVar4[cVar15 + 4] == -1) {
      pcVar4[0x15] = '\0';
    }
    else {
      pcVar4[0x15] = '\x01';
    }
  }
  cVar13 = pcVar4[2];
  if (cVar13 == '\0') {
LAB_006142b8:
    uVar7 = FUN_006190b8();
    iVar6 = (uVar7 & 0xffff) - ((int)(uVar7 & 0xffff) / (int)*pcVar4) * (int)*pcVar4;
  }
  else {
    if (cVar13 != '\x01') {
      FUN_006194f4(0xc,cVar13,0,0,0);
      sVar9 = 0;
      iVar6 = 0;
      goto LAB_006142dc;
    }
    if (pcVar4[0x15] == '\x01') {
      if (*pcVar4 + -1 == (int)cVar15) {
        iVar6 = 0;
        cVar13 = '\0';
        cVar10 = '\0';
        if (0 < cVar15) {
          uVar17 = (longlong)cVar15 & 0xffffffff;
          cVar10 = '\0';
          iVar14 = 0;
          iVar11 = 1;
          do {
            iVar6 = iVar6 + iVar14;
            cVar13 = (char)iVar6;
            cVar10 = cVar10 + pcVar4[iVar14 + 5];
            uVar17 = uVar17 - 1;
            iVar14 = iVar11;
            iVar11 = iVar11 + 1;
          } while (uVar17 != 0);
        }
        pcVar4[0x15] = '\x02';
        cVar10 = (*pcVar4 + cVar13 + -1) - cVar10;
        iVar6 = (int)cVar10;
        sVar9 = (short)cVar10;
        goto LAB_006142dc;
      }
    }
    else if (pcVar4[0x15] == '\x02') {
      uVar7 = FUN_006190b8();
      lVar16 = 0x10;
      pcVar4[0x15] = '\0';
      pcVar4[4] = '\0';
      iVar6 = (uVar7 & 0xffff) - ((int)(uVar7 & 0xffff) / (int)*pcVar4) * (int)*pcVar4;
      iVar14 = 0;
      do {
        pcVar4[iVar14 + 5] = -1;
        lVar16 = lVar16 + -1;
        iVar14 = iVar14 + 1;
      } while (lVar16 != 0);
      goto LAB_006142d8;
    }
    iVar14 = 0;
    uVar7 = ((int)pcVar4[4] - (int)cVar15) + 0x10;
    iVar11 = uVar7 + (((int)uVar7 >> 4) + (uint)((int)uVar7 < 0 && (uVar7 & 0xf) != 0) & 0xfffffff)
                     * -0x10;
    cVar15 = (char)iVar11;
    do {
      uVar7 = FUN_006190b8();
      bVar1 = pcVar4[4];
      iVar14 = iVar14 + 1;
      iVar6 = (uVar7 & 0xffff) - ((int)(uVar7 & 0xffff) / (int)*pcVar4) * (int)*pcVar4;
      if ((int)(char)bVar1 < (int)cVar15) {
        bVar3 = true;
        cVar13 = cVar15;
        iVar12 = iVar11;
        if ((int)cVar15 < (char)bVar1 + 0x10) {
          do {
            uVar7 = (uint)cVar13;
            if (pcVar4[(char)(cVar13 - (char)(((longlong)((int)uVar7 >> 4) +
                                               (ulonglong)((int)uVar7 < 0 && (uVar7 & 0xf) != 0) &
                                              0xffffffff) << 4)) + 5] == iVar6) {
              bVar3 = false;
              iVar12 = bVar1 + 0x10;
            }
            iVar12 = iVar12 + 1;
            cVar13 = (char)iVar12;
          } while ((int)cVar13 < (char)bVar1 + 0x10);
        }
        else {
LAB_0061446c:
          bVar3 = true;
        }
      }
      else {
        bVar3 = true;
        cVar13 = cVar15;
        iVar12 = iVar11;
        if ((char)bVar1 + 1 <= (int)cVar15) goto LAB_0061446c;
        do {
          uVar7 = (uint)cVar13;
          if (pcVar4[(char)(cVar13 - (char)(((longlong)((int)uVar7 >> 4) +
                                             (ulonglong)((int)uVar7 < 0 && (uVar7 & 0xf) != 0) &
                                            0xffffffff) << 4)) + 5] == iVar6) {
            bVar3 = false;
            iVar12 = bVar1 + 1;
          }
          iVar12 = iVar12 + 1;
          cVar13 = (char)iVar12;
        } while ((int)cVar13 < (char)bVar1 + 1);
      }
      if (iVar14 == 0x20) goto LAB_006142b8;
    } while (!bVar3);
  }
LAB_006142d8:
  sVar9 = (short)iVar6;
LAB_006142dc:
  *(short *)(param_1 + 0x236) = sVar9 * pcVar4[1] + *(short *)(param_1 + 0x236);
  *(short *)(param_1 + 0x23a) = pcVar4[1] + 1;
  cVar15 = *pcVar4;
  cVar13 = pcVar4[1];
  *(undefined2 *)(param_1 + 0x238) = 1;
  *(short *)(param_1 + 0x23c) = ((cVar15 - sVar9) + -1) * (short)cVar13;
  uVar7 = (int)pcVar4[4] + 1;
  pcVar4[pcVar4[4] + 5] = (char)iVar6;
  pcVar4[4] = (char)uVar7 -
              (char)(((longlong)((int)uVar7 >> 4) +
                      (ulonglong)((int)uVar7 < 0 && (uVar7 & 0xf) != 0) & 0xffffffff) << 4);
  return 0;
}



//==== 00614608  ns=Global  size=0x190
// sig: undefined FUN_00614608(void)
// callers(0): 
// callees(4): 00610790 FUN_00610790; 0061122c FUN_0061122c; 006190b8 FUN_006190b8; 006194f4 FUN_006194f4
// strings: 0066b8e0: 'Random Play'

undefined4 FUN_00614608(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e38));
  if (*(short *)(param_1 + 0x238) == 0) {
    uVar6 = 0;
    if ((*(char *)(param_3 + 1) != '\0') && (*(char *)(param_3 + 2) != '\0')) {
      uVar3 = FUN_006190b8();
      cVar1 = *(char *)(param_3 + 1);
      iVar4 = (uVar3 & 0xffff) - ((int)(uVar3 & 0xffff) / (int)cVar1) * (int)cVar1;
      if (*(char *)(param_3 + 3) == iVar4) {
        iVar4 = iVar4 + 1;
        if (cVar1 == iVar4) {
          iVar4 = 0;
        }
      }
      *(char *)(param_3 + 3) = (char)iVar4;
      *(short *)(param_1 + 0x236) =
           (short)iVar4 * (short)*(char *)(param_3 + 2) + *(short *)(param_1 + 0x236);
      *(short *)(param_1 + 0x23a) = *(char *)(param_3 + 2) + 1;
      cVar1 = *(char *)(param_3 + 1);
      cVar2 = *(char *)(param_3 + 2);
      *(undefined2 *)(param_1 + 0x238) = 1;
      *(short *)(param_1 + 0x23c) = (((short)cVar1 - (short)iVar4) + -1) * (short)cVar2;
      return 0;
    }
  }
  else {
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x240) + 0xc);
    uVar5 = FUN_00610790(*(int *)(param_1 + 0x240),param_2);
    FUN_006194f4(10,uVar6,uVar5,*(short *)(param_1 + 0x236) + 1,0);
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



//==== 00614798  ns=Global  size=0x34
// sig: undefined FUN_00614798(void)
// callers(0): 
// callees(1): 0061122c FUN_0061122c
// strings: 0066b8f0: 'Stop Sound'

undefined8 FUN_00614798(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e34));
  return 0xffffffffffffffff;
}



//==== 006147cc  ns=Global  size=0x110
// sig: undefined FUN_006147cc(void)
// callers(0): 
// callees(3): 0060dc04 FUN_0060dc04; 0061122c FUN_0061122c; 0061948c 989snd::snd_Printf
// strings: 0066b900: 'Loop Continue' | 0066b910: '%s(%d) : Loop Continue grain with no Loop End.\n' | 0066b378: 'common/grains.cpp'

undefined4 FUN_006147cc(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  puVar1 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e30));
  iVar4 = (int)*(short *)(param_1 + 0x236) + 1;
  if (iVar4 < (int)(uint)*(byte *)(param_2 + 4)) {
    lVar3 = ((ulonglong)(uint)(int)*(short *)(param_1 + 0x236) & 0x1fffffff) << 3;
    do {
      lVar3 = lVar3 + 8;
      iVar2 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
      if (*(char *)(iVar2 + (int)lVar3) == '\x16') {
        *(short *)(param_1 + 0x236) = (short)iVar4;
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(param_2 + 4));
  }
  989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7e2c));
  return 0xffffffff;
}



//==== 006148dc  ns=Global  size=0x11c
// sig: undefined FUN_006148dc(void)
// callers(0): 
// callees(3): 0060dc04 FUN_0060dc04; 0061122c FUN_0061122c; 0061948c 989snd::snd_Printf
// strings: 0066b940: 'Loop End' | 0066b950: '%s(%d) : Loop End grain with no Loop Start.\n' | 0066b378: 'common/grains.cpp'

undefined4 FUN_006148dc(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  puVar2 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e28));
  iVar5 = (int)*(short *)(param_1 + 0x236) - 1;
  if (-1 < iVar5) {
    lVar4 = ((ulonglong)(uint)(int)*(short *)(param_1 + 0x236) & 0x1fffffff) << 3;
    do {
      lVar4 = lVar4 + -8;
      iVar3 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
      bVar1 = iVar5 != 0;
      if (*(char *)(iVar3 + (int)lVar4) == '\x15') {
        *(short *)(param_1 + 0x236) = (short)iVar5 + -1;
        if ((*(uint *)(param_1 + 4) & 0x40) != 0) {
          return 1;
        }
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x40;
        return 0;
      }
      iVar5 = iVar5 + -1;
    } while (bVar1);
  }
  989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7e24));
  return 0xffffffff;
}



//==== 006149f8  ns=Global  size=0x34
// sig: undefined FUN_006149f8(void)
// callers(0): 
// callees(1): 0061122c FUN_0061122c
// strings: 0066b980: 'Loop Start'

undefined8 FUN_006149f8(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e20));
  return 0;
}



//==== 00614a2c  ns=Global  size=0x74
// sig: undefined FUN_00614a2c(void)
// callers(0): 
// callees(3): 0060d938 FUN_0060d938; 0061122c FUN_0061122c; 006174b0 FUN_006174b0

undefined8 FUN_00614a2c(int param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e1c));
  iVar1 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  FUN_006174b0(param_1,iVar1 + (*param_3 & 0xffffff));
  return 0;
}



//==== 00614aa0  ns=Global  size=0x554
// sig: undefined FUN_00614aa0(void)
// callers(0): 
// callees(18): 0060d938 FUN_0060d938; 0060dae4 FUN_0060dae4; 0060fa5c FUN_0060fa5c; 0060fabc FUN_0060fabc; 0060fbb4 989snd::snd_NoteToSampleRate; 0060fec8 FUN_0060fec8; 00610224 FUN_00610224; 006102b0 FUN_006102b0; 0061031c FUN_0061031c; 00610494 FUN_00610494; 0061085c FUN_0061085c; 00610adc FUN_00610adc; 00610bb4 FUN_00610bb4; 0061122c FUN_0061122c; 00619424 FUN_00619424; 00620290 FUN_00620290; 006209e4 FUN_006209e4; 006218e0 FUN_006218e0
// strings: 0066b998: 'Noise voices are not currently supported.' | 0066b9c8: 'Start tone grain' | 0066b9e0: ' volume: %f pan: %d, sample rate: %f'

undefined8 FUN_00614aa0(int param_1,undefined8 param_2,uint *param_3)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  int *piVar10;
  undefined1 uVar14;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int local_110;
  undefined1 local_10c [4];
  undefined1 local_108 [4];
  undefined1 auStack_104 [56];
  undefined1 *local_cc;
  
  puVar8 = PTR_PTR_0071b000;
  iVar9 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  puVar15 = (undefined1 *)(iVar9 + (*param_3 & 0xffffff));
  if ((*(ushort *)(puVar15 + 0xe) & 8) != 0) {
    FUN_0061122c(param_1,*(undefined4 *)(puVar8 + -0x7e18));
    return 0;
  }
  FUN_0061122c(param_1,*(undefined4 *)(puVar8 + -0x7e14));
  if ((*(uint *)(param_1 + 4) & 0x20) != 0) {
    return 0;
  }
  local_110 = *(int *)(puVar15 + 0x14);
  piVar10 = (int *)FUN_0060dae4(*(undefined4 *)(param_1 + 0x240),puVar15);
  uVar3 = *(ushort *)(puVar15 + 0xe);
  if ((uVar3 & 0x800) == 0) {
    iVar9 = -0x80000000;
    if ((uVar3 & 0x80) != 0) goto LAB_00614c48;
    if ((uVar3 & 0x1000) == 0) {
      iVar9 = -0x7fffffff;
      goto LAB_00614c48;
    }
    iVar9 = -0x7ffffffe;
  }
  else {
    iVar9 = *piVar10;
    local_110 = (local_110 - piVar10[1]) + -8;
    if (iVar9 != -0x7ffffffe) goto LAB_00614c48;
  }
  local_110 = local_110 + -0x80;
LAB_00614c48:
  local_cc = (undefined1 *)0x0;
  FUN_0061031c(*(ushort *)(puVar15 + 0xe) & 0x40,*(ushort *)(puVar15 + 0xe) & 0x2000,iVar9,local_10c
               ,&local_110,local_108);
  uVar3 = *(ushort *)(puVar15 + 0xe);
  if ((uVar3 & 0x100) != 0) {
    uVar7 = (uint)((longlong)((ulonglong)uVar3 << 0x31) >> 0x3f) & 4;
    iVar9 = uVar7 + 0x20;
    if (-1 < (short)uVar3) {
      iVar9 = uVar7 + 0x18;
    }
    local_cc = puVar15 + iVar9;
  }
  iVar9 = FUN_00610494(local_cc,7);
  uVar14 = FUN_00610bb4(param_1,puVar15[1]);
  uVar16 = FUN_0060fabc(uVar14,0);
  uVar11 = FUN_0061085c(param_1,puVar15);
  uVar14 = *(undefined1 *)(param_1 + 0x10);
  uVar17 = FUN_0060fa5c(puVar15);
  uVar1 = *puVar15;
  cVar2 = puVar15[8];
  if (iVar9 != 0) {
    FUN_00610adc(param_1,*(undefined1 *)(iVar9 + 8));
  }
  iVar9 = FUN_006218e0(uVar17,uVar16,uVar14,uVar1,local_110,((longlong)cVar2 & 0x1ffffffU) << 7,
                       uVar11,0,0,0);
  if (-1 < iVar9) {
    piVar10 = *(int **)(puVar8 + -0x7ef4);
    uVar3 = *(ushort *)(puVar15 + 0xe);
    uVar5 = *(undefined4 *)(param_1 + 0x240);
    iVar13 = iVar9 * 0x68;
    iVar12 = iVar13 + *piVar10;
    *(uint **)(iVar12 + 100) = param_3;
    *(undefined4 *)(iVar12 + 0x5c) = uVar5;
    if ((uVar3 & 0x4000) == 0) {
      uVar5 = *(undefined4 *)(puVar8 + -0x8000);
    }
    else {
      uVar5 = *(undefined4 *)(puVar15 + 0x18);
    }
    sVar4 = *(short *)(puVar15 + 0xe);
    iVar6 = *piVar10;
    *(undefined4 *)(iVar12 + 0x50) = uVar5;
    if (sVar4 < 0) {
      uVar5 = *(undefined4 *)(puVar15 + 0x1c);
    }
    else {
      uVar5 = *(undefined4 *)(puVar8 + -0x8000);
    }
    sVar4 = *(short *)(puVar15 + 0xe);
    iVar12 = *piVar10;
    *(undefined4 *)(iVar13 + iVar6 + 0x54) = uVar5;
    if (sVar4 < 0) {
      uVar5 = *(undefined4 *)(puVar15 + 0x20);
    }
    else {
      uVar5 = *(undefined4 *)(puVar8 + -0x8000);
    }
    *(undefined4 *)(iVar13 + iVar12 + 0x58) = uVar5;
    if (local_cc != (undefined1 *)0x0) {
      FUN_00620290(iVar9,local_cc,param_1);
    }
    uVar17 = 989snd::snd_NoteToSampleRate(puVar15[2],puVar15[3]);
    FUN_00619424(uVar16,uVar17,*(undefined4 *)(puVar8 + -0x7e0c),uVar16,uVar11,uVar17);
    iVar12 = FUN_00610494(local_cc,4);
    iVar13 = FUN_00610494(local_cc,10);
    if (iVar13 == 0) {
      if (iVar12 == 0) {
        FUN_0060fec8(*(undefined2 *)(puVar15 + 10),*(undefined2 *)(puVar15 + 0xc),auStack_104);
      }
      else {
        FUN_00610224(iVar12,auStack_104);
      }
    }
    else {
      FUN_006102b0(iVar13,auStack_104);
    }
    FUN_006209e4(uVar17,iVar9,auStack_104);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
  }
  return 0;
}



//==== 00614ff4  ns=Global  size=0x34
// sig: undefined FUN_00614ff4(void)
// callers(0): 
// callees(1): 0061122c FUN_0061122c
// strings: 0066ba08: 'Null' (raw)

undefined8 FUN_00614ff4(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e08));
  return 0;
}



//==== 00615028  ns=Global  size=0x34
// sig: undefined FUN_00615028(void)
// callers(0): 
// callees(1): 0061122c FUN_0061122c
// strings: 0066ba10: 'XREF Num'

undefined8 FUN_00615028(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e04));
  return 0;
}



//==== 0061505c  ns=Global  size=0x34
// sig: undefined FUN_0061505c(void)
// callers(0): 
// callees(1): 0061122c FUN_0061122c
// strings: 0066ba20: 'XREF ID'

undefined8 FUN_0061505c(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e00));
  return 0;
}



//==== 00615090  ns=Global  size=0x34
// sig: undefined FUN_00615090(void)
// callers(0): 
// callees(1): 0061122c FUN_0061122c
// strings: 0066ba28: 'NULL' (raw)

undefined8 FUN_00615090(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7dfc));
  return 0;
}



//==== 006150c4  ns=Global  size=0x74
// sig: undefined FUN_006150c4(void)
// callers(1): 00615cf0 989snd::snd_gmxActivateSnapshotByIndex
// callees(0): 

int FUN_006150c4(void)

{
  int iVar1;
  ulonglong uVar2;
  
  if (**(uint **)(PTR_PTR_0071b004 + -0x8000) == 0) {
LAB_00615128:
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    if (*(char *)**(undefined4 **)(PTR_PTR_0071b004 + -0x7ffc) != '\0') {
      uVar2 = (ulonglong)**(uint **)(PTR_PTR_0071b004 + -0x8000);
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) goto LAB_00615128;
      } while (((char *)**(undefined4 **)(PTR_PTR_0071b004 + -0x7ffc))[iVar1 * 0x10] != '\0');
    }
  }
  return iVar1;
}



//==== 00615138  ns=Global  size=0x78
// sig: undefined FUN_00615138(void)
// callers(4): 00615928 FUN_00615928; 00615a18 FUN_00615a18; 00615cf0 989snd::snd_gmxActivateSnapshotByIndex; 006166f4 FUN_006166f4
// callees(0): 

undefined4 FUN_00615138(uint param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = **(int **)(PTR_PTR_0071b004 + -0x7ff8);
  if (iVar2 == 0) {
LAB_00615184:
    uVar3 = 0;
  }
  else {
    uVar1 = *(ushort *)(iVar2 + 2);
    while (uVar1 != param_1) {
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) goto LAB_00615184;
      uVar1 = *(ushort *)(iVar2 + 2);
    }
    uVar3 = 1;
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
      return 1;
    }
  }
  return uVar3;
}



//==== 006151b0  ns=Global  size=0x68
// sig: undefined FUN_006151b0(void)
// callers(4): 00615218 FUN_00615218; 00615928 FUN_00615928; 00615a18 FUN_00615a18; 00615cf0 989snd::snd_gmxActivateSnapshotByIndex
// callees(0): 

int FUN_006151b0(int param_1)

{
  int iVar1;
  
  if ((**(int **)(PTR_PTR_0071b004 + -0x7ff4) != 0) && (-1 < param_1)) {
    iVar1 = 0x40;
    if (**(int **)(PTR_PTR_0071b004 + -0x7ff0) != 0) {
      iVar1 = *(int *)(**(int **)(PTR_PTR_0071b004 + -0x7ff0) + 0x1c);
    }
    if (param_1 < iVar1) {
      return **(int **)(PTR_PTR_0071b004 + -0x7ff4) + param_1 * 0x110;
    }
  }
  return 0;
}



//==== 00615218  ns=Global  size=0x40
// sig: undefined FUN_00615218(void)
// callers(1): 00622094 989snd::snd_InitVoiceAllocator
// callees(1): 006151b0 FUN_006151b0

void FUN_00615218(void)

{
  if ((**(int **)(PTR_PTR_0071b004 + -0x7fec) != 0) &&
     ((**(uint **)(PTR_PTR_0071b004 + -0x7fe8) & 1) == 0)) {
    FUN_006151b0(0);
    return;
  }
  return;
}



//==== 00615258  ns=Global  size=0x4c
// sig: undefined FUN_00615258(void)
// callers(1): 006152a4 FUN_006152a4
// callees(0): 

void FUN_00615258(double param_1,float *param_2,float *param_3)

{
  double dVar1;
  
  dVar1 = (double)*param_2;
  if (dVar1 == (double)*param_3) {
    return;
  }
  if (dVar1 < (double)*param_3) {
    *param_2 = (float)(dVar1 + param_1);
    if ((float)(dVar1 + param_1) <= *param_3) {
      return;
    }
    *param_2 = *param_3;
    return;
  }
  *param_2 = (float)(dVar1 - param_1);
  if (*param_3 <= (float)(dVar1 - param_1)) {
    return;
  }
  *param_2 = *param_3;
  return;
}



//==== 006152a4  ns=Global  size=0x140
// sig: undefined FUN_006152a4(void)
// callers(1): 0061c994 FUN_0061c994
// callees(1): 00615258 FUN_00615258

void FUN_006152a4(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  
  puVar6 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) != 0) {
    if (**(float **)(PTR_PTR_0071b004 + -0x7fd8) != **(float **)(PTR_PTR_0071b004 + -0x7fd4)) {
      FUN_00615258((double)**(float **)(PTR_PTR_0071b004 + -0x7fd0));
      **(undefined4 **)(puVar6 + -0x7fcc) = 0xffffffff;
    }
    puVar2 = *(uint **)(puVar6 + -0x7fcc);
    iVar8 = 0;
    iVar3 = *(int *)(puVar6 + -0x7fe4);
    iVar4 = *(int *)(puVar6 + -0x7fe0);
    iVar5 = *(int *)(puVar6 + -0x7fdc);
    uVar7 = 0;
    do {
      while( true ) {
        if (*(float *)(iVar8 + iVar3) == *(float *)(iVar8 + iVar4)) break;
        FUN_00615258((double)*(float *)(iVar8 + iVar5),uVar7 * 4 + iVar3,uVar7 * 4 + iVar4);
        bVar1 = iVar8 == 0x7c;
        iVar8 = iVar8 + 4;
        *puVar2 = 1 << (uVar7 & 0x3f) | *puVar2;
        uVar7 = uVar7 + 1;
        if (bVar1) {
          return;
        }
      }
      bVar1 = iVar8 != 0x7c;
      iVar8 = iVar8 + 4;
      uVar7 = uVar7 + 1;
    } while (bVar1);
  }
  return;
}



//==== 006153e4  ns=Global  size=0x18
// sig: undefined FUN_006153e4(void)
// callers(0): 
// callees(0): 

double FUN_006153e4(void)

{
  return (double)**(float **)(PTR_PTR_0071b004 + -0x7fd8);
}



//==== 006153fc  ns=Global  size=0x40
// sig: undefined FUN_006153fc(void)
// callers(0): 
// callees(0): 

void FUN_006153fc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  lVar5 = 0x20;
  iVar1 = *(int *)(PTR_PTR_0071b004 + -0x7fe4);
  do {
    puVar2 = (undefined4 *)(iVar4 + iVar1);
    puVar3 = (undefined4 *)(iVar4 + param_1);
    iVar4 = iVar4 + 4;
    *puVar3 = *puVar2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



//==== 0061543c  ns=989snd  size=0x6c
// sig: undefined snd_gmxGetActiveSnapshotCount(void)
// callers(1): 0060b18c FUN_0060b18c
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066ba30: 'snd_gmxGetActiveSnapshotCount(): Group mixer is not initialized!\n'

undefined4 989snd::snd_gmxGetActiveSnapshotCount(void)

{
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) != 0) {
    return **(undefined4 **)(PTR_PTR_0071b004 + -0x7fc4);
  }
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7fc8));
  return 0;
}



//==== 006154a8  ns=Global  size=0x480
// sig: undefined FUN_006154a8(void)
// callers(6): 00615928 FUN_00615928; 00615a18 FUN_00615a18; 00615b08 989snd::snd_gmxDeactivateSnapshotByIndex; 00615cf0 989snd::snd_gmxActivateSnapshotByIndex; 00615ef4 FUN_00615ef4; 00615f20 989snd::snd_gmxDeactivateAllSnapshots
// callees(4): 005dcbd8 FUN_005dcbd8; 0061ef28 FUN_0061ef28; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006154a8(double param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  double extraout_f1;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  char acStack_240 [32];
  float afStack_220 [32];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  int local_a0;
  longlong local_90;
  
  puVar8 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) != 0) {
    if (param_1 < (double)*(float *)(PTR_PTR_0071b004 + -0x7f90)) {
      param_1 = (double)*(float *)(PTR_PTR_0071b004 + -0x7f90);
    }
    989snd::snd_SynthLock();
    puVar13 = *(undefined4 **)(puVar8 + -0x7fc0);
    iVar10 = 0;
    fVar2 = **(float **)(puVar8 + -0x7fbc);
    lVar19 = 0x20;
    pfVar14 = afStack_220;
    do {
      pcVar6 = acStack_240 + iVar10;
      iVar10 = iVar10 + 1;
      uVar4 = *puVar13;
      puVar13 = puVar13 + 1;
      *pfVar14 = fVar2;
      *pcVar6 = (char)uVar4;
      lVar19 = lVar19 + -1;
      pfVar14 = pfVar14 + 1;
    } while (lVar19 != 0);
    iVar10 = **(int **)(puVar8 + -0x7ff8);
    if (iVar10 == 0) {
      fVar2 = *(float *)(puVar8 + -0x7f90);
      dVar22 = (double)*(float *)(puVar8 + -0x7fb8);
    }
    else {
      dVar21 = (double)*(float *)(puVar8 + -0x7f90);
      bVar7 = false;
      auStack_b0 = (undefined1  [16])0x0;
      auStack_1a0 = (undefined1  [16])0x0;
      auStack_190 = (undefined1  [16])0x0;
      auStack_180 = (undefined1  [16])0x0;
      auStack_170 = (undefined1  [16])0x0;
      auStack_160 = (undefined1  [16])0x0;
      auStack_150 = (undefined1  [16])0x0;
      auStack_140 = (undefined1  [16])0x0;
      auStack_130 = (undefined1  [16])0x0;
      auStack_120 = (undefined1  [16])0x0;
      auStack_110 = (undefined1  [16])0x0;
      auStack_100 = (undefined1  [16])0x0;
      auStack_f0 = (undefined1  [16])0x0;
      auStack_e0 = (undefined1  [16])0x0;
      auStack_d0 = (undefined1  [16])0x0;
      auStack_c0 = (undefined1  [16])0x0;
      do {
        pfVar14 = *(float **)(iVar10 + 8);
        if ((!bVar7) && (pfVar14[1] != 0.0)) {
          if (pfVar14[1] == 1.4013e-45) {
            bVar7 = true;
            dVar21 = (double)(*pfVar14 * *(float *)(iVar10 + 4));
          }
          else {
            dVar21 = (double)(float)((double)*pfVar14 * (double)*(float *)(iVar10 + 4) + dVar21);
          }
        }
        pfVar14 = pfVar14 + 4;
        iVar11 = 0;
        lVar19 = 0x20;
        iVar12 = 0;
        do {
          if (*(int *)(auStack_1a0 + iVar12) == 0) {
            if (*(char *)pfVar14 != '\0') {
              pfVar16 = (float *)(iVar12 + (int)afStack_220);
              if (*(char *)pfVar14 == '\x01') {
                fVar2 = pfVar14[1];
                fVar3 = *(float *)(iVar10 + 4);
                *(int *)(auStack_1a0 + iVar12) = 1;
                *pfVar16 = fVar2 * fVar3;
              }
              else {
                *pfVar16 = pfVar14[1] * *(float *)(iVar10 + 4) + *pfVar16;
              }
              if (*(int *)(auStack_120 + iVar12) == 0) {
                cVar1 = *(char *)((int)pfVar14 + 1);
                *(int *)(auStack_120 + iVar12) = 1;
                acStack_240[iVar11] = cVar1;
              }
            }
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
          pfVar14 = pfVar14 + 2;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        iVar10 = *(int *)(iVar10 + 0xc);
      } while (iVar10 != 0);
      dVar22 = (double)*(float *)(puVar8 + -0x7fb8);
      fVar2 = (float)(dVar21 / dVar22);
    }
    dVar21 = (double)*(float *)(puVar8 + -0x7f90);
    uVar5 = **(uint **)(puVar8 + -0x7fb0);
    if (param_1 <= dVar21) {
      param_1 = (double)*(float *)(puVar8 + -0x7fac);
    }
    dVar23 = (double)*(float *)(puVar8 + -0x7fa4);
    iVar10 = FUN_005dcbd8(dVar23,(double)fVar2);
    pfVar14 = *(float **)(puVar8 + -0x7fd4);
    *pfVar14 = (float)extraout_f1;
    local_a0 = (int)extraout_f1;
    if (local_a0 < 0) {
      *pfVar14 = (float)dVar21;
    }
    else if ((double)*(float *)(puVar8 + -0x7f9c) < extraout_f1) {
      *pfVar14 = *(float *)(puVar8 + -0x7f9c);
    }
    iVar18 = 0;
    pfVar16 = *(float **)(puVar8 + -0x7fe0);
    iVar11 = *(int *)(puVar8 + -0x7fdc);
    iVar12 = *(int *)(puVar8 + -0x7fe4);
    puVar13 = *(undefined4 **)(puVar8 + -0x7f94);
    dVar21 = (double)*(float *)(puVar8 + -0x7f9c);
    local_90 = (longlong)(int)(0xf0 / (ulonglong)uVar5);
    dVar24 = (double)(float)(param_1 * (double)local_90);
    **(float **)(puVar8 + -0x7fd0) =
         (float)(ABS((double)(*pfVar14 - **(float **)(puVar8 + -0x7fd8))) / dVar24);
    iVar9 = 0;
    do {
      while( true ) {
        iVar17 = iVar9;
        dVar20 = (double)FUN_005dcbd8(dVar23,(double)(float)((double)*(float *)(iVar18 + (int)
                                                  afStack_220) / dVar22),iVar10);
        *pfVar16 = (float)dVar20;
        local_a0 = (int)dVar20;
        if (local_a0 < 0) {
          *pfVar16 = 0.0;
        }
        else if (dVar21 < dVar20) {
          *pfVar16 = (float)dVar21;
        }
        pfVar15 = (float *)(iVar18 + iVar12);
        fVar2 = *pfVar16;
        uVar4 = *puVar13;
        pfVar14 = (float *)(iVar18 + iVar11);
        cVar1 = acStack_240[iVar17];
        iVar18 = iVar18 + 4;
        pfVar16 = pfVar16 + 1;
        *pfVar14 = (float)(ABS((double)(fVar2 - *pfVar15)) / dVar24);
        if ((char)uVar4 <= cVar1) break;
        iVar10 = FUN_0061ef28(iVar17,cVar1);
        iVar9 = iVar17 + 1;
        if (iVar17 == 0x1f) goto LAB_00615894;
      }
      iVar9 = iVar17 + 1;
      iVar10 = iVar17;
    } while (iVar17 != 0x1f);
LAB_00615894:
    989snd::snd_SynthUnlock();
  }
  return;
}



//==== 00615928  ns=Global  size=0xf0
// sig: undefined FUN_00615928(void)
// callers(0): 
// callees(5): 00615138 FUN_00615138; 006151b0 FUN_006151b0; 006154a8 FUN_006154a8; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_00615928(undefined4 param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  int iVar6;
  
  puVar5 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    return;
  }
  989snd::snd_SynthLock();
  iVar6 = FUN_006151b0(param_1);
  puVar4 = (undefined1 *)(iVar6 + param_2 * 8 + 0x10);
  if (iVar6 != 0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = *(undefined4 *)(param_3 + 4);
    *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(param_3 + 2);
    *(undefined4 *)(puVar4 + 4) = uVar3;
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
  }
  iVar6 = FUN_00615138(param_1,0);
  if (iVar6 != 0) {
    FUN_006154a8((double)*(float *)(puVar5 + -0x7f90));
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 00615a18  ns=Global  size=0xf0
// sig: undefined FUN_00615a18(void)
// callers(0): 
// callees(5): 00615138 FUN_00615138; 006151b0 FUN_006151b0; 006154a8 FUN_006154a8; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_00615a18(double param_1,double param_2,double param_3,undefined4 param_4,undefined8 param_5
                 ,float param_6)

{
  undefined *puVar1;
  float *pfVar2;
  int iVar3;
  
  puVar1 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    return;
  }
  989snd::snd_SynthLock();
  pfVar2 = (float *)FUN_006151b0(param_4);
  if (pfVar2 != (float *)0x0) {
    pfVar2[3] = (float)param_3;
    *pfVar2 = (float)param_1;
    pfVar2[1] = param_6;
    pfVar2[2] = (float)param_2;
  }
  iVar3 = FUN_00615138(param_4,0);
  if (iVar3 != 0) {
    FUN_006154a8((double)*(float *)(puVar1 + -0x7f90));
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 00615b08  ns=989snd  size=0x1e8
// sig: undefined snd_gmxDeactivateSnapshotByIndex(void)
// callers(1): 00616748 989snd::snd_gmxDeactivateSnapshotByName
// callees(4): 006154a8 FUN_006154a8; 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066ba78: 'snd_gmxDeactivateSnapshotByIndex(): Group mixer is not initialized!\n' | 0066bac0: 'snd_gmxDeactivateSnapshotByIndex(): Cannot deactivate snapshot %d as there are no snapshots active!\n' | 0066bb28: 'snd_gmxDeactivateSnapshotByIndex(): Unable to find snapshot index %d on the active list!\n'

undefined4 989snd::snd_gmxDeactivateSnapshotByIndex(double param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  
  puVar3 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f88));
    return 0;
  }
  piVar1 = *(int **)(PTR_PTR_0071b004 + -0x7ff8);
  if (*piVar1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f84));
    return 0;
  }
  snd_SynthLock();
  puVar2 = (undefined4 *)*piVar1;
  if (*(ushort *)((int)puVar2 + 2) == param_2) {
    if (param_1 < (double)*(float *)(puVar3 + -0x7f90)) {
      param_1 = (double)*(float *)(puVar2[2] + 0xc);
    }
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *piVar1 = *(int *)(*piVar1 + 0xc);
  }
  else {
    do {
      puVar4 = puVar2;
      puVar2 = (undefined4 *)puVar4[3];
      if (puVar2 == (undefined4 *)0x0) {
        snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f80));
        snd_SynthUnlock();
        return 0;
      }
    } while (*(ushort *)((int)puVar2 + 2) != param_2);
    if (param_1 < (double)*(float *)(puVar3 + -0x7f90)) {
      param_1 = (double)*(float *)(puVar2[2] + 0xc);
    }
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar4[3] = *(undefined4 *)(puVar4[3] + 0xc);
  }
  **(int **)(puVar3 + -0x7fc4) = **(int **)(puVar3 + -0x7fc4) + -1;
  FUN_006154a8(param_1);
  snd_SynthUnlock();
  return 1;
}



//==== 00615cf0  ns=989snd  size=0x204
// sig: undefined snd_gmxActivateSnapshotByIndex(void)
// callers(1): 006167dc 989snd::snd_gmxActivateSnapshotByName
// callees(7): 006150c4 FUN_006150c4; 00615138 FUN_00615138; 006151b0 FUN_006151b0; 006154a8 FUN_006154a8; 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066bb88: 'snd_gmxActivateSnapshotByIndex(): Group mixer is not initialized!\n' | 0066bbd0: 'Unable to activate snapshot index %d. Maximum number of active snapshots (%d) exceeded!\n'

undefined4 989snd::snd_gmxActivateSnapshotByIndex(double param_1,double param_2,int param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 local_40 [16];
  
  puVar4 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f7c));
    return 0;
  }
  snd_SynthLock();
  iVar6 = FUN_00615138(param_3,local_40);
  if (iVar6 == 0) {
    iVar6 = FUN_006150c4();
    if (iVar6 == -1) {
      snd_Printf((char)*(undefined4 *)(puVar4 + -0x7f78));
      snd_SynthUnlock();
      return 0;
    }
    puVar9 = (undefined1 *)(iVar6 * 0x10 + **(int **)(puVar4 + -0x7ffc));
    *puVar9 = 1;
    *(float *)(puVar9 + 4) = (float)param_1;
    *(short *)(puVar9 + 2) = (short)param_3;
    uVar7 = FUN_006151b0(param_3);
    piVar2 = *(int **)(puVar4 + -0x7ff8);
    *(undefined4 *)(puVar9 + 8) = uVar7;
    iVar6 = *piVar2;
    iVar5 = iVar6;
    iVar8 = 0;
    if (iVar6 == 0) {
LAB_00615ee4:
      *piVar2 = (int)puVar9;
    }
    else {
      do {
        iVar3 = iVar5;
        if (param_3 < (int)(uint)*(ushort *)(iVar3 + 2)) {
          iVar5 = iVar3;
          if (iVar8 == 0) {
            *(int *)(puVar9 + 0xc) = iVar6;
            goto LAB_00615ee4;
          }
          break;
        }
        iVar5 = *(int *)(iVar3 + 0xc);
        iVar8 = iVar3;
      } while (iVar5 != 0);
      *(undefined1 **)(iVar8 + 0xc) = puVar9;
      *(int *)(puVar9 + 0xc) = iVar5;
    }
    fVar1 = *(float *)(puVar4 + -0x7f90);
    **(int **)(puVar4 + -0x7fc4) = **(int **)(puVar4 + -0x7fc4) + 1;
    if (param_2 < (double)fVar1) {
      param_2 = (double)*(float *)(*(int *)(puVar9 + 8) + 8);
    }
  }
  else {
    if ((double)fRam00000004 == param_1) goto LAB_00615dc0;
    fRam00000004 = (float)param_1;
    if (param_2 < (double)*(float *)(puVar4 + -0x7f90)) {
      param_2 = (double)*(float *)(iRam00000008 + 8);
    }
  }
  FUN_006154a8(param_2);
LAB_00615dc0:
  snd_SynthUnlock();
  return 1;
}



//==== 00615ef4  ns=Global  size=0x2c
// sig: undefined FUN_00615ef4(void)
// callers(3): 0060b09c FUN_0060b09c; 00616068 989snd::snd_gmxLoadServerDummyFile; 006161f0 989snd::snd_gmxLoadFileFromMem
// callees(1): 006154a8 FUN_006154a8

void FUN_00615ef4(double param_1,double param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(PTR_PTR_0071b004 + -0x7f90);
  **(float **)(PTR_PTR_0071b004 + -0x7fbc) = (float)param_1;
  if (param_2 < (double)fVar1) {
    param_2 = (double)fVar1;
  }
  FUN_006154a8(param_2);
  return;
}



//==== 00615f20  ns=989snd  size=0xd4
// sig: undefined snd_gmxDeactivateAllSnapshots(void)
// callers(5): 0060b238 FUN_0060b238; 00615ff4 FUN_00615ff4; 00616068 989snd::snd_gmxLoadServerDummyFile; 006161f0 989snd::snd_gmxLoadFileFromMem; 00616540 FUN_00616540
// callees(5): 005d0140 libc::memset; 006154a8 FUN_006154a8; 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066bc30: 'snd_gmxDeactivateAllSnapshots(): Group mixer is not initialized!\n'

void 989snd::snd_gmxDeactivateAllSnapshots(double param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) != 0) {
    if (param_1 < (double)*(float *)(PTR_PTR_0071b004 + -0x7f90)) {
      param_1 = (double)*(float *)(PTR_PTR_0071b004 + -0x7f90);
    }
    snd_SynthLock();
    uVar1 = **(uint **)(puVar3 + -0x8000);
    uVar2 = **(undefined4 **)(puVar3 + -0x7ffc);
    **(undefined4 **)(puVar3 + -0x7ff8) = 0;
    libc::memset(uVar2,0,((ulonglong)uVar1 & 0xfffffff) << 4);
    **(undefined4 **)(puVar3 + -0x7fc4) = 0;
    FUN_006154a8(param_1);
    snd_SynthUnlock();
    return;
  }
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f74));
  return;
}



//==== 00615ff4  ns=Global  size=0x74
// sig: undefined FUN_00615ff4(void)
// callers(1): 00616540 FUN_00616540
// callees(1): 00615f20 989snd::snd_gmxDeactivateAllSnapshots

void FUN_00615ff4(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b004;
  989snd::snd_gmxDeactivateAllSnapshots((double)*(float *)(PTR_PTR_0071b004 + -0x7f90));
  piVar1 = *(int **)(puVar3 + -0x7ff4);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    (**(code **)**(undefined4 **)(puVar3 + -0x7f70))(iVar2);
  }
  *piVar1 = 0;
  return;
}



//==== 00616068  ns=989snd  size=0x188
// sig: undefined snd_gmxLoadServerDummyFile(void)
// callers(1): 00616378 989snd::snd_InitGroupMixer
// callees(6): 005d0140 libc::memset; 00615ef4 FUN_00615ef4; 00615f20 989snd::snd_gmxDeactivateAllSnapshots; 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066bc78: 'snd_gmxLoadServerDummyFile(): Group mixer is not initialized!\n'

undefined4 989snd::snd_gmxLoadServerDummyFile(void)

{
  bool bVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  
  puVar6 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f6c));
  }
  else {
    snd_gmxDeactivateAllSnapshots((double)*(float *)(PTR_PTR_0071b004 + -0x7f90));
    snd_SynthLock();
    puVar3 = *(undefined4 **)(puVar6 + -0x7f68);
    puVar4 = (undefined4 *)**(undefined4 **)(puVar6 + -0x7f64);
    **(undefined4 **)(puVar6 + -0x7ff0) = 0;
    *puVar3 = 0;
    iVar7 = (*(code *)*puVar4)(0x4400,1);
    piVar5 = *(int **)(puVar6 + -0x7ff4);
    *piVar5 = iVar7;
    if (iVar7 != 0) {
      libc::memset(iVar7,0,0x4400);
      fVar2 = *(float *)(puVar6 + -0x7f90);
      iVar7 = *piVar5;
      iVar8 = 0;
      do {
        pfVar9 = (float *)(iVar8 + iVar7);
        lVar10 = 0x20;
        pfVar9[1] = 0.0;
        pfVar9[2] = fVar2;
        pfVar9[3] = fVar2;
        *pfVar9 = fVar2;
        pfVar9 = pfVar9 + 5;
        do {
          *pfVar9 = fVar2;
          *(undefined1 *)(pfVar9 + -1) = 0;
          *(undefined1 *)((int)pfVar9 + -3) = 0xff;
          *(undefined2 *)((int)pfVar9 + -2) = 0xffff;
          lVar10 = lVar10 + -1;
          pfVar9 = pfVar9 + 2;
        } while (lVar10 != 0);
        bVar1 = iVar8 != 0x42f0;
        iVar8 = iVar8 + 0x110;
      } while (bVar1);
      FUN_00615ef4((double)fVar2,(double)fVar2);
      snd_SynthUnlock();
      return 1;
    }
    snd_SynthUnlock();
  }
  return 0;
}



//==== 006161f0  ns=989snd  size=0x188
// sig: undefined snd_gmxLoadFileFromMem(void)
// callers(1): 00616378 989snd::snd_InitGroupMixer
// callees(5): 00615ef4 FUN_00615ef4; 00615f20 989snd::snd_gmxDeactivateAllSnapshots; 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066bd38: "snd_gmxLoadFileFromMem(): Invalid GMX file. Fourcc = '%02X''%02X''%02X''%02X'\n" | 0066bcb8: 'snd_gmxLoadFileFromMem(): Group mixer is not initialized!\n' | 0066bcf8: 'snd_gmxLoadFileFromMem(): No group mixer data provided.\n'

undefined4 989snd::snd_gmxLoadFileFromMem(char *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  
  puVar7 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f60));
    return 0;
  }
  if (param_1 != (char *)0x0) {
    snd_gmxDeactivateAllSnapshots((double)*(float *)(PTR_PTR_0071b004 + -0x7f90));
    if ((((*param_1 == 'G') && (param_1[1] == 'M')) && (param_1[2] == 'X')) && (param_1[3] == 'F'))
    {
      snd_SynthLock();
      puVar3 = *(undefined4 **)(puVar7 + -0x7ff4);
      puVar4 = *(undefined4 **)(puVar7 + -0x7f68);
      iVar5 = *(int *)(param_1 + 0x10);
      iVar6 = *(int *)(param_1 + 0x18);
      fVar1 = *(float *)(puVar7 + -0x7f90);
      fVar2 = *(float *)(param_1 + 8);
      **(undefined4 **)(puVar7 + -0x7ff0) = param_1;
      *puVar4 = param_1 + iVar5 + 0x10;
      *puVar3 = param_1 + iVar6 + 0x18;
      FUN_00615ef4((double)fVar2,(double)fVar1);
      snd_SynthUnlock();
      uVar8 = 1;
    }
    else {
      snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f58));
      uVar8 = 0;
    }
    return uVar8;
  }
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f5c));
  return 0;
}



//==== 00616378  ns=989snd  size=0x1c8
// sig: undefined snd_InitGroupMixer(void)
// callers(1): 0060c518 FUN_0060c518
// callees(4): 005d0140 libc::memset; 00616068 989snd::snd_gmxLoadServerDummyFile; 006161f0 989snd::snd_gmxLoadFileFromMem; 0061948c 989snd::snd_Printf
// strings: 0066bd88: 'snd_InitGroupMixer(): Unable to allocate %d bytes for %d max active snapshots!\n'

undefined4 989snd::snd_InitGroupMixer(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  puVar3 = PTR_PTR_0071b004;
  lVar8 = 0x20;
  puVar7 = *(undefined4 **)(PTR_PTR_0071b004 + -0x7fd8);
  puVar1 = *(undefined4 **)(PTR_PTR_0071b004 + -0x7fd4);
  uVar5 = *(undefined4 *)(PTR_PTR_0071b004 + -0x7f9c);
  iVar6 = 0;
  iVar4 = *(int *)(PTR_PTR_0071b004 + -0x7fe4);
  iVar2 = *(int *)(PTR_PTR_0071b004 + -0x7fe0);
  **(uint **)(PTR_PTR_0071b004 + -0x7fe8) = param_3;
  *puVar7 = uVar5;
  *puVar1 = uVar5;
  do {
    puVar7 = (undefined4 *)(iVar6 + iVar4);
    puVar1 = (undefined4 *)(iVar6 + iVar2);
    iVar6 = iVar6 + 4;
    *puVar7 = uVar5;
    *puVar1 = uVar5;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if ((param_2 == 0) || (**(int **)(puVar3 + -0x7fb0) == 0)) {
    uVar5 = 1;
  }
  else {
    lVar8 = ((ulonglong)param_2 & 0xfffffff) << 4;
    iVar4 = (**(code **)**(undefined4 **)(puVar3 + -0x7f64))((int)lVar8,1);
    **(int **)(puVar3 + -0x7ffc) = iVar4;
    if (iVar4 != 0) {
      **(uint **)(puVar3 + -0x8000) = param_2;
      libc::memset(iVar4,0,lVar8);
      uVar5 = *(undefined4 *)(puVar3 + -0x7f90);
      puVar7 = *(undefined4 **)(puVar3 + -0x7fdc);
      lVar8 = 0x20;
      **(undefined4 **)(puVar3 + -0x7fd0) = uVar5;
      do {
        *puVar7 = uVar5;
        lVar8 = lVar8 + -1;
        puVar7 = puVar7 + 1;
      } while (lVar8 != 0);
      **(undefined4 **)(puVar3 + -0x7fec) = 1;
      if ((param_3 & 1) == 0) {
        uVar5 = snd_gmxLoadFileFromMem(param_1);
        return uVar5;
      }
      uVar5 = snd_gmxLoadServerDummyFile();
      return uVar5;
    }
    snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f54));
    uVar5 = 0;
  }
  return uVar5;
}



//==== 00616540  ns=Global  size=0xc8
// sig: undefined FUN_00616540(void)
// callers(2): 0060c448 FUN_0060c448; 0060c518 FUN_0060c518
// callees(2): 00615f20 989snd::snd_gmxDeactivateAllSnapshots; 00615ff4 FUN_00615ff4

void FUN_00616540(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  
  puVar10 = PTR_PTR_0071b004;
  989snd::snd_gmxDeactivateAllSnapshots((double)*(float *)(PTR_PTR_0071b004 + -0x7f90));
  piVar1 = *(int **)(puVar10 + -0x7ffc);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    (**(code **)**(undefined4 **)(puVar10 + -0x7f70))(iVar2);
  }
  puVar3 = *(uint **)(puVar10 + -0x7fe8);
  puVar4 = *(undefined4 **)(puVar10 + -0x7ff8);
  puVar5 = *(undefined4 **)(puVar10 + -0x7ff0);
  puVar6 = *(undefined4 **)(puVar10 + -0x7f68);
  puVar7 = *(undefined4 **)(puVar10 + -0x7ff4);
  uVar8 = *puVar3;
  puVar9 = *(undefined4 **)(puVar10 + -0x7fec);
  *piVar1 = 0;
  *puVar4 = 0;
  *puVar5 = 0;
  *puVar6 = 0;
  *puVar7 = 0;
  *puVar9 = 0;
  if ((uVar8 & 1) != 0) {
    FUN_00615ff4();
  }
  *puVar3 = 0;
  return;
}



//==== 00616608  ns=Global  size=0xec
// sig: undefined FUN_00616608(void)
// callers(4): 0060b0dc FUN_0060b0dc; 006166f4 FUN_006166f4; 00616748 989snd::snd_gmxDeactivateSnapshotByName; 006167dc 989snd::snd_gmxActivateSnapshotByName
// callees(1): 006168e8 FUN_006168e8

uint FUN_00616608(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  piVar1 = *(int **)(PTR_PTR_0071b004 + -0x7ff0);
  if ((*piVar1 != 0) && (piVar2 = *(int **)(PTR_PTR_0071b004 + -0x7f68), *piVar2 != 0)) {
    uVar4 = FUN_006168e8(param_1,0x811c9dc5);
    uVar8 = *(int *)(*piVar1 + 0x14) - 1;
    if (-1 < (int)uVar8) {
      iVar7 = ((int)uVar8 >> 1) + (uint)((int)uVar8 < 0 && (uVar8 & 1) != 0);
      iVar6 = 0;
      do {
        puVar5 = (uint *)(*piVar2 + iVar7 * 8);
        uVar3 = *puVar5;
        if (uVar4 == uVar3) {
          return puVar5[1];
        }
        if (uVar4 < uVar3) {
          uVar8 = iVar7 - 1;
        }
        else {
          iVar6 = iVar7 + 1;
        }
        uVar3 = iVar6 + uVar8;
        iVar7 = ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0);
      } while (iVar6 <= (int)uVar8);
    }
  }
  return 0xffffffff;
}



//==== 006166f4  ns=Global  size=0x54
// sig: undefined FUN_006166f4(void)
// callers(1): 0060b1b4 FUN_0060b1b4
// callees(2): 00615138 FUN_00615138; 00616608 FUN_00616608

undefined8 FUN_006166f4(void)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = FUN_00616608();
  if (iVar2 != -1) {
    uVar1 = FUN_00615138(iVar2,0);
    return uVar1;
  }
  return 0;
}



//==== 00616748  ns=989snd  size=0x94
// sig: undefined snd_gmxDeactivateSnapshotByName(void)
// callers(1): 0060b2f0 FUN_0060b2f0
// callees(3): 00615b08 989snd::snd_gmxDeactivateSnapshotByIndex; 00616608 FUN_00616608; 0061948c 989snd::snd_Printf
// strings: 0066bdd8: 'snd_gmxDeactivateSnapshotByName(): Group mixer is not initialized!\n'

undefined8 989snd::snd_gmxDeactivateSnapshotByName(undefined8 param_1,undefined4 param_2)

{
  int iVar2;
  undefined8 uVar1;
  
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f50));
  }
  else {
    iVar2 = FUN_00616608(param_2);
    if (iVar2 != -1) {
      uVar1 = snd_gmxDeactivateSnapshotByIndex(param_1,iVar2);
      return uVar1;
    }
  }
  return 0;
}



//==== 006167dc  ns=989snd  size=0xa8
// sig: undefined snd_gmxActivateSnapshotByName(void)
// callers(1): 0060b39c FUN_0060b39c
// callees(3): 00615cf0 989snd::snd_gmxActivateSnapshotByIndex; 00616608 FUN_00616608; 0061948c 989snd::snd_Printf
// strings: 0066be20: 'snd_gmxActivateSnapshotByName(): Group mixer is not initialized!\n'

undefined8
989snd::snd_gmxActivateSnapshotByName(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar2;
  undefined8 uVar1;
  
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f4c));
  }
  else {
    iVar2 = FUN_00616608(param_3);
    if (iVar2 != -1) {
      uVar1 = snd_gmxActivateSnapshotByIndex(param_1,param_2,iVar2);
      return uVar1;
    }
  }
  return 0;
}



//==== 00616884  ns=Global  size=0x64
// sig: undefined FUN_00616884(void)
// callers(0): 
// callees(0): 

ulonglong FUN_00616884(uint param_1,int param_2,ulonglong param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 < param_1 + param_2) {
    iVar2 = (param_1 + param_2) - param_1;
    iVar3 = 0;
    do {
      pbVar1 = (byte *)(iVar3 + param_1);
      iVar3 = iVar3 + 1;
      param_3 = (param_3 & 0x7fffffff) * 2 + (param_3 & 0xfffffff) * 0x10 +
                (param_3 & 0xff) * 0x1000000 +
                (param_3 & 0x1ffffff) * 0x80 + (param_3 & 0xffffff) * 0x100 + param_3 ^
                (ulonglong)*pbVar1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_3 & 0xffffffff;
}



//==== 006168e8  ns=Global  size=0x4c
// sig: undefined FUN_006168e8(void)
// callers(2): 00616608 FUN_00616608; 006459b4 FUN_006459b4
// callees(0): 

uint FUN_006168e8(byte *param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_2 = param_2 * 0x1000193 ^ (uint)bVar1;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  return param_2;
}



//==== 00616934  ns=Global  size=0x8
// sig: undefined FUN_00616934(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00616934(void)

{
  return 0;
}



//==== 0061693c  ns=Global  size=0xa8
// sig: undefined FUN_0061693c(void)
// callers(0): 
// callees(0): 

int FUN_0061693c(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (0x200 < iVar1) {
    if (iVar1 < 0x401) {
      return -(int)*(short *)(*(int *)(PTR_PTR_0071b00c + -0x8000) +
                             (int)((0x400 - param_2 & 0xffffffff) << 1));
    }
    if (iVar1 < 0x601) {
      return -(int)*(short *)(*(int *)(PTR_PTR_0071b00c + -0x8000) +
                             (int)((param_2 - 0x400 & 0xffffffff) << 1));
    }
    param_2 = 0x800 - param_2;
  }
  return (int)*(short *)(*(int *)(PTR_PTR_0071b00c + -0x8000) + (int)((param_2 & 0xffffffff) << 1));
}



//==== 006169e4  ns=Global  size=0x24
// sig: undefined FUN_006169e4(void)
// callers(0): 
// callees(0): 

undefined4 FUN_006169e4(int param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x18)) {
    return 0x7fff;
  }
  return 0xffff8001;
}



//==== 00616a08  ns=Global  size=0x6c
// sig: undefined FUN_00616a08(void)
// callers(0): 
// callees(0): 

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



//==== 00616a74  ns=Global  size=0x58
// sig: undefined FUN_00616a74(void)
// callers(0): 
// callees(0): 

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



//==== 00616acc  ns=Global  size=0xa8
// sig: undefined FUN_00616acc(void)
// callers(1): 00616cfc FUN_00616cfc
// callees(0): 

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



//==== 00616b74  ns=Global  size=0xa0
// sig: undefined FUN_00616b74(void)
// callers(2): 00616c14 FUN_00616c14; 006174b0 FUN_006174b0
// callees(0): 

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



//==== 00616c14  ns=Global  size=0x4c
// sig: undefined FUN_00616c14(void)
// callers(3): 0060d5b0 FUN_0060d5b0; 0061b86c FUN_0061b86c; 0061c280 FUN_0061c280
// callees(1): 00616b74 FUN_00616b74

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



//==== 00616c60  ns=Global  size=0x9c
// sig: undefined FUN_00616c60(void)
// callers(1): 006173e8 FUN_006173e8
// callees(0): 

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



//==== 00616cfc  ns=Global  size=0x8c
// sig: undefined FUN_00616cfc(void)
// callers(2): 00617084 FUN_00617084; 006173e8 FUN_006173e8
// callees(1): 00616acc FUN_00616acc

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



//==== 00617084  ns=Global  size=0x280
// sig: undefined FUN_00617084(void)
// callers(1): 0061c994 FUN_0061c994
// callees(4): 00616cfc FUN_00616cfc; 0061f100 FUN_0061f100; 0061f114 FUN_0061f114; 0061f128 FUN_0061f128

/* WARNING: Type propagation algorithm not settling */

void FUN_00617084(void)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 auStack_100 [4];
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



//==== 00617304  ns=Global  size=0xe4
// sig: undefined FUN_00617304(void)
// callers(0): 
// callees(1): 006190b8 FUN_006190b8

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



//==== 006173e8  ns=Global  size=0xc8
// sig: undefined FUN_006173e8(void)
// callers(1): 006174b0 FUN_006174b0
// callees(5): 00616c60 FUN_00616c60; 00616cfc FUN_00616cfc; 006190b8 FUN_006190b8; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

bool FUN_006173e8(short *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_110 [232];
  
  *(undefined4 *)(param_1 + 0x12) = **(undefined4 **)(param_1 + 0x14);
  if (*param_1 == 5) {
    uVar2 = FUN_006190b8();
    uVar3 = FUN_006190b8();
    param_1[0xe] = 0;
    param_1[0xf] = 1;
    *(uint *)(param_1 + 0xc) = (uVar2 & 0x7fff) * -(uVar3 & 1);
  }
  989snd::snd_SynthLock();
  iVar1 = FUN_00616c60(param_1);
  if (iVar1 != 0) {
    FUN_00616cfc(param_1,auStack_110);
  }
  989snd::snd_SynthUnlock();
  return iVar1 == 0;
}



//==== 006174b0  ns=Global  size=0x194
// sig: undefined FUN_006174b0(void)
// callers(2): 00606a60 FUN_00606a60; 00614a2c FUN_00614a2c
// callees(3): 00616b74 FUN_00616b74; 006173e8 FUN_006173e8; 006190b8 FUN_006190b8

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



//==== 00617644  ns=Global  size=0x48
// sig: undefined FUN_00617644(void)
// callers(4): 00617938 FUN_00617938; 00617b04 FUN_00617b04; 006187c8 FUN_006187c8; 00618aa8 FUN_00618aa8
// callees(0): 

void FUN_00617644(uint param_1)

{
  if ((param_1 != 0) && (param_1 <= **(uint **)(PTR_PTR_0071b010 + -0x8000))) {
    *(undefined4 *)(param_1 * 4 + **(int **)(PTR_PTR_0071b010 + -0x7ffc) + -4) = 0;
  }
  return;
}



//==== 0061768c  ns=Global  size=0x60
// sig: undefined FUN_0061768c(void)
// callers(1): 0060c518 FUN_0060c518
// callees(0): 

void FUN_0061768c(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071b010;
  piVar1 = *(int **)(PTR_PTR_0071b010 + -0x7ff0);
  puVar2 = *(undefined4 **)(PTR_PTR_0071b010 + -0x7ff4);
  iVar3 = *piVar1;
  **(undefined4 **)(PTR_PTR_0071b010 + -0x7ff8) = 0;
  *puVar2 = 0;
  if (iVar3 == 0) {
    *piVar1 = *(int *)(puVar4 + -0x7fec);
  }
  if (**(int **)(puVar4 + -0x7fe8) != 0) {
    return;
  }
  **(int **)(puVar4 + -0x7fe8) = *(int *)(puVar4 + -0x7fe4);
  return;
}



//==== 006176ec  ns=Global  size=0x4
// sig: undefined FUN_006176ec(void)
// callers(2): 0060c448 FUN_0060c448; 0060c518 FUN_0060c518
// callees(0): 

void FUN_006176ec(void)

{
  return;
}



//==== 006176f0  ns=Global  size=0x3c
// sig: undefined FUN_006176f0(void)
// callers(1): 0061838c FUN_0061838c
// callees(0): 

uint FUN_006176f0(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    uVar2 = uVar2 * 0x1000193 ^ (int)cVar1;
    cVar1 = *param_1;
  }
  return uVar2;
}



//==== 0061772c  ns=Global  size=0xc8
// sig: undefined FUN_0061772c(void)
// callers(2): 00617938 FUN_00617938; 00617ea8 FUN_00617ea8
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066be68: 'Warning : Ran out of SCREAM bank reference tokens!  Increase the maxBanks value at SCREAM init time to fix.\n'

int FUN_0061772c(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int *piVar5;
  ulonglong uVar6;
  
  puVar3 = PTR_PTR_0071b010;
  puVar1 = *(uint **)(PTR_PTR_0071b010 + -0x8000);
  uVar2 = *puVar1;
  if (uVar2 != 0) {
    uVar4 = 0;
    piVar5 = (int *)**(undefined4 **)(PTR_PTR_0071b010 + -0x7ffc);
    if (*piVar5 != 0) {
      uVar6 = (ulonglong)uVar2;
      uVar4 = 0;
      do {
        piVar5 = piVar5 + 1;
        uVar4 = uVar4 + 1;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) goto LAB_006177a0;
      } while (*piVar5 != 0);
    }
    *piVar5 = param_1;
    if (uVar4 < *puVar1) {
      return uVar4 + 1;
    }
  }
LAB_006177a0:
  989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fe0));
  return 0;
}



//==== 006177f4  ns=Global  size=0x3c
// sig: undefined FUN_006177f4(void)
// callers(0): 
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066bf20: 'common/loader.cpp' | 0066bed8: '%s(%d) : External memory functions are required for this platform.\n'

void FUN_006177f4(void)

{
  989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b010 + -0x7fdc));
  return;
}



//==== 00617830  ns=Global  size=0x40
// sig: undefined FUN_00617830(void)
// callers(0): 
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066bed8: '%s(%d) : External memory functions are required for this platform.\n' | 0066bf20: 'common/loader.cpp'

undefined8 FUN_00617830(void)

{
  989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b010 + -0x7fdc));
  return 0;
}



//==== 00617870  ns=Global  size=0xc8
// sig: undefined FUN_00617870(void)
// callers(1): 0060ad44 FUN_0060ad44
// callees(3): 0060d6f4 FUN_0060d6f4; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

int FUN_00617870(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b010;
  989snd::snd_SynthLock();
  iVar2 = **(int **)(puVar1 + -0x7ff4);
  if (param_1 != 0) {
    for (; iVar2 != 0; iVar2 = FUN_0060d6f4(iVar2)) {
      if (iVar2 == param_1) {
        iVar2 = FUN_0060d6f4(param_1);
        989snd::snd_SynthUnlock();
        return iVar2;
      }
    }
  }
  989snd::snd_SynthUnlock();
  return iVar2;
}



//==== 00617938  ns=Global  size=0x1cc
// sig: undefined FUN_00617938(void)
// callers(1): 00627218 FUN_00627218
// callees(3): 0060d6f4 FUN_0060d6f4; 00617644 FUN_00617644; 0061772c FUN_0061772c

void FUN_00617938(int param_1,int param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  
  puVar3 = PTR_PTR_0071b010;
  if ((byte *)**(undefined4 **)(PTR_PTR_0071b010 + -0x7fd4) != (byte *)0x0) {
    pbVar8 = (byte *)**(undefined4 **)(PTR_PTR_0071b010 + -0x7fd4);
    do {
      while (((*pbVar8 & 0x1f) != 5 || (*(int *)(pbVar8 + 0x240) != param_1))) {
        pbVar8 = *(byte **)(pbVar8 + 0x224);
        if (pbVar8 == (byte *)0x0) goto LAB_006179cc;
      }
      *(int *)(pbVar8 + 0x244) = param_3 + *(int *)(pbVar8 + 0x244);
      pbVar2 = pbVar8 + 0x224;
      *(int *)(pbVar8 + 0x240) = param_3 + param_1;
      *(int *)(pbVar8 + 0x54) = *(int *)(pbVar8 + 0x54) + param_3;
      pbVar8 = *(byte **)pbVar2;
    } while (*(byte **)pbVar2 != (byte *)0x0);
  }
LAB_006179cc:
  uVar1 = **(uint **)(puVar3 + -0x7fd0);
  if (0 < (int)uVar1) {
    uVar9 = (ulonglong)uVar1;
    iVar6 = 0;
    iVar5 = **(int **)(puVar3 + -0x7fcc);
    if ((int)uVar1 < 1) {
      uVar9 = 1;
    }
    do {
      while( true ) {
        iVar4 = iVar6 + iVar5;
        iVar6 = iVar6 + 0x68;
        if (*(int *)(iVar4 + 0x5c) == param_1) break;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_00617a1c;
      }
      *(int *)(iVar4 + 0x5c) = param_1 + param_3 * 0x40;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
LAB_00617a1c:
  iVar5 = **(int **)(puVar3 + -0x7ff4);
  if (iVar5 == param_1) {
    **(int **)(puVar3 + -0x7ff4) = param_2;
    return;
  }
  while( true ) {
    iVar6 = FUN_0060d6f4(iVar5);
    if (param_1 == iVar6) break;
    iVar5 = FUN_0060d6f4(iVar5);
  }
  iVar6 = FUN_0060d6f4(iVar5);
  if (param_1 == iVar6) {
    if (*(int *)(iVar5 + 0x30) != 0) {
      FUN_00617644(*(int *)(iVar5 + 0x30));
    }
    uVar7 = FUN_0061772c(param_2);
    *(undefined4 *)(iVar5 + 0x30) = uVar7;
    return;
  }
  return;
}



//==== 00617b04  ns=Global  size=0x1a8
// sig: undefined FUN_00617b04(void)
// callers(1): 0061870c FUN_0061870c
// callees(5): 0060d6f4 FUN_0060d6f4; 00617644 FUN_00617644; 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066bf38: '%s(%d) : Unable to find start of bank in memory. Handle %x\n' | 0066bf20: 'common/loader.cpp'

void FUN_00617b04(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_PTR_0071b010;
  piVar2 = *(int **)(PTR_PTR_0071b010 + -0x7fc8);
  iVar3 = *piVar2;
  if ((param_1 == 0) || (iVar3 == 0)) {
    return;
  }
  if (iVar3 == param_1) {
    989snd::snd_SynthLock();
  }
  else {
    do {
      iVar4 = iVar3;
      iVar3 = FUN_0060d6f4(iVar4);
      if (iVar3 == 0) {
        return;
      }
    } while (param_1 != iVar3);
    989snd::snd_SynthLock();
    if (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x30) != 0) {
        FUN_00617644(*(int *)(iVar4 + 0x30));
      }
      *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(param_1 + 0x30);
      goto LAB_00617bd4;
    }
  }
  iVar3 = FUN_0060d6f4(param_1);
  *piVar2 = iVar3;
LAB_00617bd4:
  if ((*(uint *)(param_1 + 8) & 0x20) == 0) {
    piVar2 = (int *)(param_1 - *(short *)(param_1 + 0x12));
    if ((*piVar2 != 3) && (piVar2 = (int *)((uint)piVar2 & 0xfffffff0), *piVar2 != 3)) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fc4));
    }
    (**(code **)**(undefined4 **)(puVar1 + -0x7fe8))(piVar2);
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 00617cac  ns=Global  size=0xa4
// sig: undefined FUN_00617cac(void)
// callers(3): 00617d50 FUN_00617d50; 00618938 FUN_00618938; 006232d8 989snd::snd_RelocateBank
// callees(1): 0060d6f4 FUN_0060d6f4

undefined4 FUN_00617cac(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(PTR_PTR_0071b010 + -0x7ff4);
  if (param_1 - 1U < 0xfffffffe) {
    for (; iVar1 != 0; iVar1 = FUN_0060d6f4(iVar1)) {
      if (iVar1 == param_1) {
        return 1;
      }
    }
  }
  return 0;
}



//==== 00617d50  ns=Global  size=0xc4
// sig: undefined FUN_00617d50(void)
// callers(2): 0060a890 FUN_0060a890; 0060a9b4 989snd::snd_UnloadBank
// callees(4): 0060d6f4 FUN_0060d6f4; 00617cac FUN_00617cac; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

uint FUN_00617d50(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = PTR_PTR_0071b010;
  iVar2 = FUN_00617cac(param_1);
  if (iVar2 != 0) {
    return 0;
  }
  989snd::snd_SynthLock();
  iVar2 = **(int **)(puVar1 + -0x7fc8);
  do {
    if (iVar2 == 0) {
      uVar3 = 0;
LAB_00617de0:
      989snd::snd_SynthUnlock();
      return uVar3 ^ 1;
    }
    if (param_1 == iVar2) {
      uVar3 = 1;
      goto LAB_00617de0;
    }
    iVar2 = FUN_0060d6f4(iVar2);
  } while( true );
}



//==== 00617e14  ns=Global  size=0x94
// sig: undefined FUN_00617e14(void)
// callers(1): 0060a9b4 989snd::snd_UnloadBank
// callees(1): 0060d6f4 FUN_0060d6f4

undefined4 FUN_00617e14(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(PTR_PTR_0071b010 + -0x7ff8);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == param_1) break;
    iVar1 = FUN_0060d6f4(iVar1);
  }
  return 1;
}



//==== 00617ea8  ns=Global  size=0xc4
// sig: undefined FUN_00617ea8(void)
// callers(4): 00605178 FUN_00605178; 00617f6c FUN_00617f6c; 00617fb0 FUN_00617fb0; 00618938 FUN_00618938
// callees(4): 0060d6f4 FUN_0060d6f4; 0061772c FUN_0061772c; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_00617ea8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  989snd::snd_SynthLock();
  iVar2 = *param_2;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (iVar2 == 0) {
    *param_2 = param_1;
    989snd::snd_SynthUnlock();
    return;
  }
  iVar1 = *(int *)(iVar2 + 0x30);
  while (iVar1 != 0) {
    iVar2 = FUN_0060d6f4(iVar2);
    iVar1 = *(int *)(iVar2 + 0x30);
  }
  uVar3 = FUN_0061772c(param_1);
  *(undefined4 *)(iVar2 + 0x30) = uVar3;
  989snd::snd_SynthUnlock();
  return;
}



//==== 00617f6c  ns=Global  size=0x44
// sig: undefined FUN_00617f6c(void)
// callers(1): 00617fb0 FUN_00617fb0
// callees(1): 00617ea8 FUN_00617ea8

undefined8 FUN_00617f6c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(PTR_PTR_0071b010 + -0x7ff4);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  FUN_00617ea8(param_1,uVar1);
  return 0;
}



//==== 00617fb0  ns=Global  size=0xe8
// sig: undefined FUN_00617fb0(void)
// callers(2): 0060ae8c 989snd::snd_BankLoadFromMemEx; 00618e78 FUN_00618e78
// callees(3): 00617ea8 FUN_00617ea8; 00617f6c FUN_00617f6c; 0061948c 989snd::snd_Printf
// strings: 0066bf78: '%s(%d) : Invalid .bnk file.\n' | 0066bf20: 'common/loader.cpp'

int FUN_00617fb0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar3;
  ulonglong uVar2;
  
  puVar1 = PTR_PTR_0071b010;
  if ((*param_1 == 1) || (param_3 = 0x1a9, *param_1 == 3)) {
    iVar3 = (int)param_1 + param_1[2];
    if ((*(uint *)(iVar3 + 8) & 1) != 0) {
      FUN_00617ea8(iVar3,*(undefined4 *)(PTR_PTR_0071b010 + -0x7ff4),param_3);
      return iVar3;
    }
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x20;
    *(int *)(iVar3 + 0x24) = param_1[4] - param_1[2];
    FUN_00617f6c(iVar3);
    uVar2 = ((ulonglong)*(uint *)(iVar3 + 8) & 7) << 0x1c | (ulonglong)(*(uint *)(iVar3 + 8) >> 4);
    *(uint *)(iVar3 + 8) = (uint)(uVar2 << 4) | (uint)uVar2 >> 0x1c;
  }
  else {
    iVar3 = 0;
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b010 + -0x7fc0));
    **(undefined4 **)(puVar1 + -0x7fbc) = 0x107;
  }
  return iVar3;
}



//==== 00618098  ns=Global  size=0x2f4
// sig: undefined FUN_00618098(void)
// callers(5): 006113e4 FUN_006113e4; 0061183c FUN_0061183c; 00612130 FUN_00612130; 00618098 FUN_00618098; 0061838c FUN_0061838c
// callees(8): 005cc784 FUN_005cc784; 0060d6f4 FUN_0060d6f4; 0060d824 FUN_0060d824; 0060d8b0 FUN_0060d8b0; 00618098 FUN_00618098; 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066bf98: '%s(%d) : Invalid parameter.\n' | 0066bf20: 'common/loader.cpp'

short FUN_00618098(int *param_1,int param_2,ulonglong param_3,int *param_4)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar2 = PTR_PTR_0071b010;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_2 == 0) || (param_4 == (int *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b010 + -0x7fb8));
    if (**(char **)(puVar2 + -0x7fb4) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fb0),0);
    989snd::snd_SynthLock();
  }
  else {
    989snd::snd_SynthLock();
  }
  if (param_1 == (int *)0x0) {
    iVar5 = **(int **)(puVar2 + -0x7ff4);
    if (iVar5 != 0) {
      do {
        sVar7 = FUN_00618098(iVar5,param_2,param_3 & 0xffffffff,param_4);
        if (-1 < sVar7) goto LAB_0061831c;
        iVar5 = FUN_0060d6f4(iVar5);
      } while (iVar5 != 0);
    }
    iVar5 = **(int **)(puVar2 + -0x7fac);
    if (iVar5 != 0) {
      do {
        sVar7 = FUN_00618098(iVar5,param_2,param_3 & 0xffffffff,param_4);
        if (-1 < sVar7) {
LAB_0061831c:
          *param_4 = iVar5;
          989snd::snd_SynthUnlock();
          return sVar7;
        }
        iVar5 = FUN_0060d6f4(iVar5);
      } while (iVar5 != 0);
    }
  }
  else if (((*param_1 == 0x6b6c4253) && ((param_1[2] & 0x100U) != 0)) &&
          (*(short *)((int)param_1 + 0x16) != 0)) {
    if ((uint)param_1[1] < 4) {
      return -1;
    }
    iVar3 = FUN_0060d8b0(param_1);
    uVar9 = param_3 - (longlong)
                      (int)((param_3 & 0xffffffff) /
                           ((longlong)*(short *)((int)param_1 + 0x16) & 0xffffffffU)) *
                      (longlong)(int)*(short *)((int)param_1 + 0x16);
    iVar4 = FUN_0060d824(param_1);
    iVar5 = FUN_0060d824(param_1);
    lVar8 = (uVar9 & 0xfffffff) << 4;
    iVar5 = *(int *)(iVar5 + 0xc);
    if ((int)*(short *)((int)lVar8 + iVar3 + 8) == (int)uVar9) {
      do {
        piVar1 = (int *)(iVar3 + (int)lVar8);
        if ((piVar1[1] == (int)param_3) &&
           (iVar6 = FUN_005cc784(iVar4 + iVar5 + *piVar1,param_2), iVar6 == 0)) {
          if (param_4 != (int *)0x0) {
            *param_4 = (int)param_1;
          }
          989snd::snd_SynthUnlock();
          return *(short *)(piVar1 + 3);
        }
        lVar8 = ((longlong)*(short *)((int)piVar1 + 10) & 0xfffffffU) << 4;
      } while (*(short *)((int)piVar1 + 10) != -1);
    }
  }
  989snd::snd_SynthUnlock();
  return -1;
}



//==== 0061838c  ns=Global  size=0x58
// sig: undefined FUN_0061838c(void)
// callers(10): 00606fb0 FUN_00606fb0; 0060709c FUN_0060709c; 0060715c FUN_0060715c; 00607424 FUN_00607424; 006076c8 FUN_006076c8; 00607ce8 FUN_00607ce8; 006095c8 FUN_006095c8; 006113e4 FUN_006113e4; 0061183c FUN_0061183c; 00612130 FUN_00612130
// callees(2): 006176f0 FUN_006176f0; 00618098 FUN_00618098

void FUN_0061838c(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006176f0(param_2);
  FUN_00618098(param_1,param_2,uVar1,param_3);
  return;
}



//==== 006183e4  ns=Global  size=0x164
// sig: undefined FUN_006183e4(void)
// callers(1): 0060ad6c FUN_0060ad6c
// callees(6): 005cccec libc::strcpy; 0060d6f4 FUN_0060d6f4; 0060d824 FUN_0060d824; 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066bf98: '%s(%d) : Invalid parameter.\n' | 0066bf20: 'common/loader.cpp'

undefined4 FUN_006183e4(int param_1,undefined1 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_PTR_0071b010;
  if ((param_1 == 0) || (param_2 == (undefined1 *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b010 + -0x7fb8));
    if (**(char **)(puVar1 + -0x7fb4) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fb0),0);
  }
  989snd::snd_SynthLock();
  iVar2 = **(int **)(puVar1 + -0x7ff4);
  do {
    if (iVar2 == 0) {
      uVar4 = 0;
LAB_00618470:
      989snd::snd_SynthUnlock();
      return uVar4;
    }
    if (param_1 == iVar2) {
      if ((*(uint *)(param_1 + 8) & 0x100) == 0) {
        uVar4 = 1;
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
        uVar3 = FUN_0060d824(param_1);
        uVar4 = 1;
        libc::strcpy(param_2,uVar3,8);
        param_2[8] = 0;
      }
      goto LAB_00618470;
    }
    iVar2 = FUN_0060d6f4(iVar2);
  } while( true );
}



//==== 00618548  ns=Global  size=0xf8
// sig: undefined FUN_00618548(void)
// callers(1): 0060ae08 FUN_0060ae08
// callees(6): 005ccb28 FUN_005ccb28; 0060d6f4 FUN_0060d6f4; 0060d824 FUN_0060d824; 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066bf98: '%s(%d) : Invalid parameter.\n' | 0066bf20: 'common/loader.cpp'

int FUN_00618548(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_PTR_0071b010;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b010 + -0x7fb8));
    if (**(char **)(puVar1 + -0x7fb4) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fb0),0);
  }
  989snd::snd_SynthLock();
  for (iVar4 = **(int **)(puVar1 + -0x7ff4); iVar4 != 0; iVar4 = FUN_0060d6f4(iVar4)) {
    if ((*(uint *)(iVar4 + 8) & 0x100) != 0) {
      uVar2 = FUN_0060d824(iVar4);
      iVar3 = FUN_005ccb28(uVar2,param_1,8);
      if (iVar3 == 0) break;
    }
  }
  989snd::snd_SynthUnlock();
  return iVar4;
}



//==== 00618640  ns=Global  size=0xcc
// sig: undefined FUN_00618640(void)
// callers(0): 
// callees(2): 005c8510 libc::strlen; 0061948c 989snd::snd_Printf
// strings: 0066bf98: '%s(%d) : Invalid parameter.\n' | 0066bf20: 'common/loader.cpp'

int FUN_00618640(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  
  puVar3 = PTR_PTR_0071b010;
  if (param_1 == (char *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b010 + -0x7fb8));
    if (**(char **)(puVar3 + -0x7fb4) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7fb0),0);
  }
  sVar4 = libc::strlen(param_1);
  iVar6 = 0;
  uVar5 = 0;
  while( true ) {
    bVar1 = (int)sVar4 <= iVar6;
    pcVar2 = param_1 + iVar6;
    iVar6 = iVar6 + 4;
    if (bVar1) break;
    uVar5 = uVar5 + (int)*pcVar2;
  }
  uVar5 = ((int)uVar5 >> 0x1f ^ uVar5) - ((int)uVar5 >> 0x1f);
  return uVar5 + (((int)uVar5 >> 5) + (uint)((int)uVar5 < 0 && (uVar5 & 0x1f) != 0)) * -0x20;
}



//==== 0061870c  ns=Global  size=0xbc
// sig: undefined FUN_0061870c(void)
// callers(1): 0061c994 FUN_0061c994
// callees(4): 0060d6f4 FUN_0060d6f4; 00617b04 FUN_00617b04; 006246bc FUN_006246bc; 006271cc FUN_006271cc

void FUN_0061870c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = **(int **)(PTR_PTR_0071b010 + -0x7fc8);
  do {
    iVar1 = iVar2;
    if (iVar2 == 0) {
      return;
    }
    while( true ) {
      iVar2 = FUN_0060d6f4(iVar1);
      uVar3 = FUN_006271cc();
      uVar4 = (uVar3 & 0xffff) - (uint)*(ushort *)(iVar1 + 0x14);
      if ((uVar3 & 0xffff) < (uint)*(ushort *)(iVar1 + 0x14)) {
        uVar4 = uVar4 + 0x10000;
      }
      uVar3 = FUN_006246bc();
      if (uVar4 < uVar3) break;
      FUN_00617b04(iVar1);
      iVar1 = iVar2;
      if (iVar2 == 0) {
        return;
      }
    }
  } while( true );
}



//==== 006187c8  ns=Global  size=0x170
// sig: undefined FUN_006187c8(void)
// callers(3): 00605144 FUN_00605144; 00618938 FUN_00618938; 00618aa8 FUN_00618aa8
// callees(7): 0060abc8 FUN_0060abc8; 0060d6f4 FUN_0060d6f4; 0060efb4 FUN_0060efb4; 00617644 FUN_00617644; 006271cc FUN_006271cc; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_006187c8(int param_1,int *param_2)

{
  undefined2 uVar2;
  int iVar1;
  int iVar3;
  
  iVar1 = *param_2;
  if ((param_1 == 0) || (iVar1 == 0)) {
    return;
  }
  if (iVar1 == param_1) {
    FUN_0060abc8(iVar1,1);
    uVar2 = FUN_006271cc();
    *(undefined2 *)(iVar1 + 0x14) = uVar2;
    FUN_0060efb4(iVar1,1);
    989snd::snd_SynthLock();
    param_1 = iVar1;
  }
  else {
    do {
      iVar3 = iVar1;
      iVar1 = FUN_0060d6f4(iVar3);
      if (iVar1 == 0) {
        return;
      }
    } while (param_1 != iVar1);
    FUN_0060abc8(param_1,1);
    uVar2 = FUN_006271cc();
    *(undefined2 *)(param_1 + 0x14) = uVar2;
    FUN_0060efb4(param_1,1);
    989snd::snd_SynthLock();
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x30) != 0) {
        FUN_00617644(*(int *)(iVar3 + 0x30));
      }
      *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(param_1 + 0x30);
      goto LAB_006188b0;
    }
  }
  iVar1 = FUN_0060d6f4(param_1);
  *param_2 = iVar1;
LAB_006188b0:
  989snd::snd_SynthUnlock();
  return;
}



//==== 00618938  ns=Global  size=0xf0
// sig: undefined FUN_00618938(void)
// callers(2): 0060a9b4 989snd::snd_UnloadBank; 00618a28 FUN_00618a28
// callees(6): 00617cac FUN_00617cac; 00617ea8 FUN_00617ea8; 006187c8 FUN_006187c8; 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066bf20: 'common/loader.cpp' | 0066bfb8: '%s(%d) : Attempt to unload unloaded block handle %x.\n' | 0066bff0: '%s(%d) : ERROR: Attempt to unload a block that is being relocated. %x.\n'

void FUN_00618938(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b010;
  iVar2 = FUN_00617cac();
  if (iVar2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fa8));
    return;
  }
  989snd::snd_SynthLock();
  if ((*(uint *)(param_1 + 8) & 0x400) == 0) {
    FUN_006187c8(param_1,*(undefined4 *)(puVar1 + -0x7ff4),0x292,param_1);
    FUN_00617ea8(param_1,*(undefined4 *)(puVar1 + -0x7fc8));
    989snd::snd_SynthUnlock();
    return;
  }
  989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fa4));
  989snd::snd_SynthUnlock();
  return;
}



//==== 00618a28  ns=Global  size=0x80
// sig: undefined FUN_00618a28(void)
// callers(1): 0060c448 FUN_0060c448
// callees(2): 0060a9b4 989snd::snd_UnloadBank; 00618938 FUN_00618938

void FUN_00618a28(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b010;
  piVar1 = *(int **)(PTR_PTR_0071b010 + -0x7ff8);
  iVar2 = *piVar1;
  while (iVar2 != 0) {
    989snd::snd_UnloadBank(iVar2,1);
    iVar2 = *piVar1;
  }
  piVar1 = *(int **)(puVar3 + -0x7ff4);
  iVar2 = *piVar1;
  while (iVar2 != 0) {
    FUN_00618938(iVar2);
    iVar2 = *piVar1;
  }
  return;
}



//==== 00618aa8  ns=Global  size=0x174
// sig: undefined FUN_00618aa8(void)
// callers(1): 0060a9b4 989snd::snd_UnloadBank
// callees(6): 0060abc8 FUN_0060abc8; 0060d6f4 FUN_0060d6f4; 00617644 FUN_00617644; 006187c8 FUN_006187c8; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_00618aa8(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = *(int **)(PTR_PTR_0071b010 + -0x7ff8);
  piVar2 = (int *)*piVar1;
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 == 0x6b6c4253) {
    FUN_006187c8(param_1,*(undefined4 *)(PTR_PTR_0071b010 + -0x7ff4));
    return;
  }
  if (piVar2 == (int *)0x0) {
    return;
  }
  if (piVar2 == param_1) {
    FUN_0060abc8(param_1,1);
    989snd::snd_SynthLock();
  }
  else {
    do {
      piVar4 = piVar2;
      piVar2 = (int *)FUN_0060d6f4(piVar4);
      if (piVar2 == (int *)0x0) {
        return;
      }
    } while (param_1 != piVar2);
    FUN_0060abc8(piVar2,1);
    989snd::snd_SynthLock();
    if (piVar4 != (int *)0x0) {
      if (piVar4[0xc] != 0) {
        FUN_00617644(piVar4[0xc]);
      }
      piVar4[0xc] = piVar2[0xc];
      goto LAB_00618b90;
    }
  }
  iVar3 = FUN_0060d6f4(piVar2);
  *piVar1 = iVar3;
LAB_00618b90:
  989snd::snd_SynthUnlock();
  return;
}



//==== 00618c1c  ns=Global  size=0x94
// sig: undefined FUN_00618c1c(void)
// callers(2): 00618d38 FUN_00618d38; 00618e78 FUN_00618e78
// callees(2): 0061948c 989snd::snd_Printf; 00630754 FUN_00630754
// strings: 0066c038: '%s(%d) : File read error.\n' | 0066bf20: 'common/loader.cpp'

int FUN_00618c1c(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b010;
  iVar2 = 0;
  if (-1 < **(int **)(PTR_PTR_0071b010 + -0x7fa0)) {
    iVar2 = FUN_00630754(**(int **)(PTR_PTR_0071b010 + -0x7fa0),param_1,param_2);
    if (param_2 != iVar2) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f9c));
      **(undefined4 **)(puVar1 + -0x7fbc) = 0x101;
    }
  }
  return iVar2;
}



//==== 00618cb0  ns=Global  size=0x88
// sig: undefined FUN_00618cb0(void)
// callers(1): 00618d38 FUN_00618d38
// callees(1): 006307ac FUN_006307ac

undefined4 FUN_00618cb0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  piVar1 = *(int **)(PTR_PTR_0071b010 + -0x7fa0);
  iVar2 = *piVar1;
  if (-1 < iVar2) {
    FUN_006307ac(iVar2,param_1 + **(int **)(PTR_PTR_0071b010 + -0x7f98),0);
    uVar3 = FUN_006307ac(*piVar1,0,1);
  }
  return uVar3;
}



//==== 00618d38  ns=Global  size=0x140
// sig: undefined FUN_00618d38(void)
// callers(1): 00618e78 FUN_00618e78
// callees(3): 00618c1c FUN_00618c1c; 00618cb0 FUN_00618cb0; 0061948c 989snd::snd_Printf
// strings: 0066c058: '%s(%d) : Invalid .bnk file format. May be for different platform.\n' | 0066bf20: 'common/loader.cpp'

int FUN_00618d38(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iStack_30;
  uint uStack_2c;
  uint auStack_28 [6];
  
  puVar2 = PTR_PTR_0071b010;
  if (-1 < **(int **)(PTR_PTR_0071b010 + -0x7fa0)) {
    FUN_00618cb0(0);
    iVar3 = FUN_00618c1c(&iStack_30,0x20);
    if (iVar3 == 0x20) {
      if (iStack_30 - 1U < 3) {
        iVar3 = 0;
        if (1 < (int)uStack_2c) {
          uVar5 = 1;
          uVar7 = (ulonglong)uStack_2c - 1 & 0xffffffff;
          lVar4 = 0;
          do {
            lVar6 = (uVar5 & 0x1fffffff) << 3;
            uVar5 = uVar5 + 1;
            if (*(uint *)((int)auStack_28 + (int)lVar4) < *(uint *)((int)auStack_28 + (int)lVar6)) {
              lVar4 = lVar6;
            }
            iVar3 = (int)lVar4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        iVar1 = *(int *)((int)auStack_28 + iVar3);
        iVar3 = *(int *)((int)auStack_28 + iVar3 + 4);
        FUN_00618cb0(0);
        return iVar1 + iVar3;
      }
      989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f94));
      return 0;
    }
  }
  return 0;
}



//==== 00618e78  ns=Global  size=0x134
// sig: undefined FUN_00618e78(void)
// callers(1): 0060af74 989snd::snd_BankLoadEx
// callees(4): 00617fb0 FUN_00617fb0; 00618c1c FUN_00618c1c; 00618d38 FUN_00618d38; 0061948c 989snd::snd_Printf
// strings: 0066bf20: 'common/loader.cpp' | 0066c0a0: '%s(%d) : Memory allocation error.\n'

int FUN_00618e78(void)

{
  undefined *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = PTR_PTR_0071b010;
  iVar3 = FUN_00618d38();
  if (iVar3 != 0) {
    iVar4 = (**(code **)**(undefined4 **)(puVar1 + -0x7ff0))(iVar3,1);
    if (iVar4 == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f90));
    }
    else {
      iVar5 = FUN_00618c1c(iVar4,iVar3,0x1c9);
      if (iVar3 == iVar5) {
        iVar3 = FUN_00617fb0();
        *(short *)(iVar3 + 0x12) = (short)iVar3 - (short)iVar4;
        uVar2 = ((ulonglong)*(uint *)(iVar3 + 8) & 0x1f) << 0x1a |
                (ulonglong)(*(uint *)(iVar3 + 8) >> 6);
        *(uint *)(iVar3 + 8) = (uint)(uVar2 << 6) | (uint)uVar2 >> 0x1a;
        return iVar3;
      }
      (**(code **)**(undefined4 **)(puVar1 + -0x7fe8))(iVar4);
    }
  }
  return 0;
}



//==== 00618fac  ns=Global  size=0x54
// sig: undefined FUN_00618fac(void)
// callers(1): 0060af74 989snd::snd_BankLoadEx
// callees(1): 0064f1c4 cell::cellFsClose

void FUN_00618fac(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(PTR_PTR_0071b010 + -0x7fa0);
  iVar2 = *piVar1;
  if (-1 < iVar2) {
    cell::cellFsClose(iVar2);
    *piVar1 = -1;
  }
  return;
}



//==== 00619000  ns=Global  size=0xb8
// sig: undefined FUN_00619000(void)
// callers(1): 0060af74 989snd::snd_BankLoadEx
// callees(3): 0061948c 989snd::snd_Printf; 006307ac FUN_006307ac; 00630808 FUN_00630808
// strings: 0066c0c8: '%s(%d) : File open error.\n' | 0066bf20: 'common/loader.cpp'

undefined4 FUN_00619000(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b010;
  iVar2 = FUN_00630808(param_1,0);
  **(int **)(puVar1 + -0x7fa0) = iVar2;
  if (-1 < iVar2) {
    **(undefined4 **)(puVar1 + -0x7f98) = param_2;
    FUN_006307ac(iVar2,param_2,0);
    return 1;
  }
  989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f8c));
  return 0;
}



//==== 006190b8  ns=Global  size=0x98
// sig: undefined FUN_006190b8(void)
// callers(16): 0061085c FUN_0061085c; 00610adc FUN_00610adc; 00610bb4 FUN_00610bb4; 00610c74 FUN_00610c74; 0061183c FUN_0061183c; 00612c5c FUN_00612c5c; 006131fc FUN_006131fc; 00613964 FUN_00613964; 00613da8 FUN_00613da8; 00613eb8 FUN_00613eb8; 006140c0 FUN_006140c0; 00614140 FUN_00614140; 00614608 FUN_00614608; 00617304 FUN_00617304; 006173e8 FUN_006173e8; 006174b0 FUN_006174b0
// callees(0): 

ushort FUN_006190b8(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  
  psVar2 = *(short **)(PTR_PTR_0071b014 + -0x8000);
  sVar1 = *psVar2;
  iVar4 = (int)(((longlong)sVar1 & 0xffffffffU) << 1);
  if (sVar1 < 0x93) {
    iVar3 = *(int *)(PTR_PTR_0071b014 + -0x7ffc);
    uVar5 = *(ushort *)(iVar3 + iVar4 + 0xce) ^ *(ushort *)(iVar3 + iVar4);
    *(ushort *)(iVar3 + iVar4) = uVar5;
  }
  else {
    iVar3 = *(int *)(PTR_PTR_0071b014 + -0x7ffc);
    uVar5 = *(ushort *)(iVar3 + iVar4) ^ *(ushort *)(iVar3 + iVar4 + -0x126);
    *(ushort *)(iVar3 + iVar4) = uVar5;
    if (0xf8 < sVar1) {
      *psVar2 = 0;
      return uVar5;
    }
  }
  *psVar2 = sVar1 + 1;
  return uVar5;
}



//==== 00619150  ns=Global  size=0x30
// sig: undefined FUN_00619150(void)
// callers(1): 00619180 FUN_00619180
// callees(0): 

ulonglong FUN_00619150(void)

{
  ulonglong uVar1;
  
  uVar1 = (longlong)**(int **)(PTR_PTR_0071b014 + -0x7ff8) * 0x15a4e35 + 1;
  **(int **)(PTR_PTR_0071b014 + -0x7ff8) = (int)uVar1;
  return uVar1 >> 0x10 & 0x7fff;
}



//==== 00619180  ns=Global  size=0xe4
// sig: undefined FUN_00619180(void)
// callers(1): 0060c0f4 FUN_0060c0f4
// callees(1): 00619150 FUN_00619150

void FUN_00619180(uint param_1)

{
  undefined2 *puVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ushort *puVar8;
  ushort *puVar9;
  longlong lVar10;
  
  puVar1 = *(undefined2 **)(PTR_PTR_0071b014 + -0x8000);
  puVar5 = *(ushort **)(PTR_PTR_0071b014 + -0x7ffc);
  **(uint **)(PTR_PTR_0071b014 + -0x7ff8) = param_1 & 0xffff;
  *puVar1 = 0;
  puVar8 = puVar5;
  do {
    uVar4 = FUN_00619150();
    puVar9 = puVar8 + 1;
    *puVar8 = uVar4;
    puVar8 = puVar9;
    puVar3 = puVar5;
  } while (puVar9 != puVar5 + 0xfa);
  do {
    puVar8 = puVar3;
    uVar4 = FUN_00619150();
    if (0x4000 < uVar4) {
      *puVar8 = *puVar8 | 0x8000;
    }
    puVar3 = puVar8 + 1;
  } while (puVar8 + 1 != puVar5 + 0xfa);
  uVar6 = 0xffffffffffffffff;
  lVar10 = 0x10;
  uVar7 = 0xffffffffffff8000;
  puVar5 = puVar8 + -0xf6;
  do {
    uVar2 = (ushort)uVar6;
    uVar6 = (uVar6 << 0x20) >> 0x21 & 0x7fff;
    uVar4 = (ushort)uVar7;
    uVar7 = (uVar7 << 0x20) >> 0x21 & 0x7fff;
    *puVar5 = uVar2 & *puVar5 | uVar4;
    lVar10 = lVar10 + -1;
    puVar5 = puVar5 + 0xb;
  } while (lVar10 != 0);
  return;
}



//==== 00619264  ns=Global  size=0x18
// sig: undefined FUN_00619264(void)
// callers(0): 
// callees(0): 

void FUN_00619264(undefined4 param_1)

{
  **(undefined4 **)(PTR_PTR_0071b018 + -0x8000) = param_1;
  return;
}



//==== 0061927c  ns=Global  size=0x1c
// sig: undefined FUN_0061927c(void)
// callers(0): 
// callees(0): 

undefined4 FUN_0061927c(void)

{
  return **(undefined4 **)(PTR_PTR_0071b018 + -0x8000);
}



//==== 00619298  ns=Global  size=0x34
// sig: undefined FUN_00619298(void)
// callers(0): 
// callees(0): 

void FUN_00619298(longlong param_1)

{
  if (param_1 != 0) {
    **(undefined4 **)(PTR_PTR_0071b018 + -0x7ffc) = (int)param_1;
    return;
  }
  **(undefined4 **)(PTR_PTR_0071b018 + -0x7ffc) = *(undefined4 *)(PTR_PTR_0071b018 + -0x7ff8);
  return;
}



//==== 006192cc  ns=Global  size=0x18
// sig: undefined FUN_006192cc(void)
// callers(0): 
// callees(0): 

void FUN_006192cc(undefined4 param_1)

{
  **(undefined4 **)(PTR_PTR_0071b018 + -0x7ff4) = param_1;
  return;
}



//==== 006192e4  ns=Global  size=0x8c
// sig: undefined FUN_006192e4(void)
// callers(1): 006193e0 FUN_006193e0
// callees(1): 005c8a94 FUN_005c8a94

undefined4 FUN_006192e4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (param_2 != 0) {
      *(undefined1 *)(param_1 + param_2 + -1) = 0;
      uVar1 = FUN_005c8a94(param_1,param_2 + -1,param_3,param_4);
      return uVar1;
    }
  }
  uVar1 = FUN_005c8a94(0,0,param_3,param_4);
  return uVar1;
}



//==== 00619370  ns=Global  size=0x70
// sig: undefined FUN_00619370(void)
// callers(2): 00619424 FUN_00619424; 0061948c 989snd::snd_Printf
// callees(2): 005c8a94 FUN_005c8a94; 006196f4 FUN_006196f4

void FUN_00619370(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b018;
  uVar1 = *(undefined4 *)(PTR_PTR_0071b018 + -0x7ff0);
  FUN_005c8a94(uVar1,0x200,param_1,param_2);
  (**(code **)**(undefined4 **)(puVar2 + -0x7ffc))(uVar1);
  return;
}



//==== 006193e0  ns=Global  size=0x44
// sig: undefined FUN_006193e0(void)
// callers(2): 00610c74 FUN_00610c74; 00622fbc FUN_00622fbc
// callees(1): 006192e4 FUN_006192e4

undefined4 FUN_006193e0(void)

{
  undefined4 uVar1;
  undefined8 in_r6;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  undefined8 in_r10;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000048 = in_r6;
  uStack00000050 = in_r7;
  uStack00000058 = in_r8;
  uStack00000060 = in_r9;
  uStack00000068 = in_r10;
  uVar1 = FUN_006192e4();
  return uVar1;
}



//==== 00619424  ns=Global  size=0x68
// sig: undefined FUN_00619424(void)
// callers(18): 006113e4 FUN_006113e4; 0061183c FUN_0061183c; 00612130 FUN_00612130; 00612688 FUN_00612688; 00612980 FUN_00612980; 00612c5c FUN_00612c5c; 006131fc FUN_006131fc; 006133fc FUN_006133fc; 0061373c FUN_0061373c; 00613850 FUN_00613850; 00613964 FUN_00613964; 00613a74 FUN_00613a74; 00613b4c FUN_00613b4c; 00613c80 FUN_00613c80; 00613da8 FUN_00613da8; 00613eb8 FUN_00613eb8; 006140c0 FUN_006140c0; 00614aa0 FUN_00614aa0
// callees(1): 00619370 FUN_00619370

void FUN_00619424(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  if (**(int **)(PTR_PTR_0071b018 + -0x8000) != 0) {
    uStack00000038 = param_2;
    uStack00000040 = param_3;
    uStack00000048 = param_4;
    uStack00000050 = param_5;
    uStack00000058 = param_6;
    uStack00000060 = param_7;
    uStack00000068 = param_8;
    FUN_00619370(param_1,&stack0x00000038);
  }
  return;
}



//==== 0061948c  ns=989snd  size=0x68
// sig: void snd_Printf(char asdf)
// callers(317): 00605254 FUN_00605254; 00605324 FUN_00605324; 00605458 FUN_00605458; 006055b0 FUN_006055b0; 006056a0 FUN_006056a0; 00605720 FUN_00605720; 00605858 FUN_00605858; 0060590c FUN_0060590c; 006059b8 FUN_006059b8; 00605a50 FUN_00605a50; 00605b2c FUN_00605b2c; 00605c04 FUN_00605c04; 00605cdc FUN_00605cdc; 00605db4 FUN_00605db4; 00605e9c FUN_00605e9c; 00605f20 FUN_00605f20; 00605fb4 FUN_00605fb4; 00606060 FUN_00606060; 006060f0 989snd::snd_PresetFileGetPresetName; 00606234 FUN_00606234; 0060637c FUN_0060637c; 00606408 989snd::snd_PremasterSubmixSetCustomPreset; 00606530 FUN_00606530; 006065dc 989snd::snd_ReverbSetCustomPreset; 00606780 FUN_00606780
// callees(1): 00619370 FUN_00619370

void 989snd::snd_Printf(char asdf)

{
  if (**(int **)(PTR_PTR_0071b018 + -0x7fec) == 0) {
    FUN_00619370(asdf,&stack0x00000038);
  }
  return;
}



//==== 006194f4  ns=Global  size=0xb4
// sig: undefined FUN_006194f4(void)
// callers(10): 00610754 FUN_00610754; 00612ac4 FUN_00612ac4; 00612c5c FUN_00612c5c; 006131fc FUN_006131fc; 006133fc FUN_006133fc; 00613eb8 FUN_00613eb8; 00614140 FUN_00614140; 00614608 FUN_00614608; 0061b218 FUN_0061b218; 00630a34 FUN_00630a34
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066c0e8: 'SCREAM Error: cause %d -> %u, %u, %u, %u\n'

void FUN_006194f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 ulonglong param_5)

{
  if ((undefined4 *)**(int **)(PTR_PTR_0071b018 + -0x7ff4) == (undefined4 *)0x0) {
    if (**(int **)(PTR_PTR_0071b018 + -0x7fec) == 0) {
      989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b018 + -0x7fe8));
      return;
    }
  }
  else {
    (**(code **)**(int **)(PTR_PTR_0071b018 + -0x7ff4))
              (param_1,param_2,param_3,param_4,param_5 & 0xffffffff,param_5);
  }
  return;
}



//==== 006195a8  ns=Global  size=0xc8
// sig: undefined FUN_006195a8(void)
// callers(0): 
// callees(2): 005c8510 libc::strlen; 005cccec libc::strcpy

char * FUN_006195a8(char *param_1,uint param_2,undefined4 param_3)

{
  size_t sVar1;
  
  sVar1 = libc::strlen(param_1);
  if (param_1 != (char *)0x0) {
    if (sVar1 + 1 < param_2) {
      param_1[param_2 - 1] = '\0';
      libc::strcpy(param_1 + sVar1,param_3,(param_2 - sVar1) + -1);
      return param_1;
    }
  }
  return param_1;
}



//==== 00619670  ns=Global  size=0x84
// sig: undefined FUN_00619670(void)
// callers(0): 
// callees(1): 005cccec libc::strcpy

int FUN_00619670(int param_1,int param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    if (param_2 != 0) {
      *(undefined1 *)(param_1 + param_2 + -1) = 0;
      libc::strcpy(param_1,param_3,param_2 + -1);
      return param_1;
    }
  }
  return param_1;
}



//==== 006196f4  ns=Global  size=0x24
// sig: undefined FUN_006196f4(void)
// callers(2): 00619370 FUN_00619370; 00624390 FUN_00624390
// callees(1): 005cd098 libc::printf

int32_t FUN_006196f4(char *param_1)

{
  int32_t iVar1;
  
  iVar1 = libc::printf(param_1);
  return iVar1;
}



//==== 00619718  ns=Global  size=0x7c
// sig: undefined FUN_00619718(void)
// callers(2): 00607b34 FUN_00607b34; 00619718 FUN_00619718
// callees(1): 00619718 FUN_00619718

ulonglong FUN_00619718(byte *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if ((*param_1 & 0x1f) == 4) {
    uVar3 = -(ulonglong)param_1[0x245] >> 0x3f;
  }
  for (iVar1 = *(int *)(param_1 + 0x22c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    lVar2 = FUN_00619718(iVar1);
    uVar3 = uVar3 + lVar2;
  }
  return uVar3 & 0xffffffff;
}



//==== 00619794  ns=Global  size=0xb4
// sig: undefined FUN_00619794(void)
// callers(2): 00607a50 FUN_00607a50; 00619794 FUN_00619794
// callees(1): 00619794 FUN_00619794

ulonglong FUN_00619794(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  short sVar3;
  
  uVar2 = (ulonglong)*param_1;
  if ((((*param_1 >> 0x18 & 0x1f) != 4) || (*(char *)((int)param_1 + 0x245) == '\0')) ||
     (sVar3 = (short)param_2, param_2 = param_2 - 1, sVar3 != 0)) {
    uVar1 = param_1[0x8b];
    uVar2 = param_2;
    while( true ) {
      if (uVar1 == 0) {
        return (longlong)(short)uVar2 & 0xffffffff;
      }
      uVar2 = FUN_00619794(uVar1,(short)uVar2);
      if (((uint)(uVar2 >> 0x18) & 0x1f) == 4) break;
      uVar1 = *(uint *)(uVar1 + 0x230);
    }
  }
  return uVar2 & 0xffffffff;
}



//==== 00619848  ns=Global  size=0x18
// sig: undefined FUN_00619848(void)
// callers(7): 0060ba88 FUN_0060ba88; 0060bb90 FUN_0060bb90; 0060bc8c FUN_0060bc8c; 0060bee0 FUN_0060bee0; 0060bfd8 FUN_0060bfd8; 0060f38c FUN_0060f38c; 0061fa5c FUN_0061fa5c
// callees(0): 

undefined4 FUN_00619848(void)

{
  return **(undefined4 **)(PTR_PTR_0071b01c + -0x8000);
}



//==== 00619860  ns=Global  size=0x70
// sig: undefined FUN_00619860(void)
// callers(7): 00604e98 FUN_00604e98; 0060d5b0 FUN_0060d5b0; 0060e084 FUN_0060e084; 0060e160 FUN_0060e160; 0060e31c FUN_0060e31c; 006104e8 FUN_006104e8; 00612bc4 FUN_00612bc4
// callees(0): 

undefined4 FUN_00619860(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = **(int **)(PTR_PTR_0071b01c + -0x7ffc) + 0x1f;
  uVar3 = ((int)uVar3 >> 5) + (uint)((int)uVar3 < 0 && (uVar3 & 0x1f) != 0);
  if (0 < (int)uVar3) {
    iVar1 = *(int *)(param_1 + 0x14);
    uVar4 = (ulonglong)uVar3;
    piVar2 = (int *)(param_1 + 0x18);
    while( true ) {
      if (iVar1 != 0) {
        return 1;
      }
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) break;
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
    }
  }
  return 0;
}



//==== 006198d0  ns=Global  size=0x44
// sig: undefined FUN_006198d0(void)
// callers(1): 00612bc4 FUN_00612bc4
// callees(0): 

undefined4 FUN_006198d0(int param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x22c);
  while( true ) {
    if (pbVar1 == (byte *)0x0) {
      return 0;
    }
    if ((*pbVar1 & 0x1f) == 4) break;
    pbVar1 = *(byte **)(pbVar1 + 0x230);
  }
  return 1;
}



//==== 00619914  ns=Global  size=0x4c
// sig: undefined FUN_00619914(void)
// callers(1): 00607b98 FUN_00607b98
// callees(0): 

int * FUN_00619914(int param_1)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = 8;
  piVar2 = *(int **)(PTR_PTR_0071b01c + -0x7ff8);
  while( true ) {
    piVar1 = (int *)*piVar2;
    if ((piVar1 != (int *)0x0) && (*piVar1 == param_1)) break;
    lVar3 = lVar3 + -1;
    piVar2 = piVar2 + 1;
    if (lVar3 == 0) {
      return (int *)0x0;
    }
  }
  return piVar1;
}



//==== 00619960  ns=Global  size=0x30
// sig: undefined FUN_00619960(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00619960(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 8) {
    uVar1 = *(undefined4 *)(*(int *)(PTR_PTR_0071b01c + -0x7ff8) + param_1 * 4);
  }
  return uVar1;
}



//==== 00619990  ns=Global  size=0x24
// sig: undefined FUN_00619990(void)
// callers(1): 00608364 FUN_00608364
// callees(0): 

void FUN_00619990(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x130);
  param_2[1] = *(undefined4 *)(param_1 + 300);
  param_2[2] = *(undefined4 *)(param_1 + 0x134);
  param_2[3] = *(undefined4 *)(param_1 + 0x138);
  return;
}



//==== 006199b4  ns=Global  size=0x24
// sig: undefined FUN_006199b4(void)
// callers(1): 0060829c FUN_0060829c
// callees(0): 

void FUN_006199b4(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x148);
  param_2[1] = *(undefined4 *)(param_1 + 0x144);
  param_2[2] = *(undefined4 *)(param_1 + 0x14c);
  param_2[3] = *(undefined4 *)(param_1 + 0x150);
  return;
}



//==== 006199d8  ns=Global  size=0x24
// sig: undefined FUN_006199d8(void)
// callers(1): 006081d4 FUN_006081d4
// callees(0): 

void FUN_006199d8(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x158);
  param_2[1] = *(undefined4 *)(param_1 + 0x154);
  param_2[2] = *(undefined4 *)(param_1 + 0x15c);
  param_2[3] = *(undefined4 *)(param_1 + 0x160);
  return;
}



//==== 006199fc  ns=Global  size=0x94
// sig: undefined FUN_006199fc(void)
// callers(1): 0060842c FUN_0060842c
// callees(2): 0061dab4 FUN_0061dab4; 0061db74 FUN_0061db74

void FUN_006199fc(int param_1,float *param_2)

{
  double dVar1;
  
  dVar1 = (double)FUN_0061db74(0x20);
  *param_2 = (float)dVar1;
  param_2[1] = *(float *)(param_1 + 0x11c);
  param_2[2] = *(float *)(param_1 + 0x120);
  param_2[3] = *(float *)(param_1 + 0x124);
  param_2[4] = *(float *)(param_1 + 0x128);
  dVar1 = (double)FUN_0061db74(*(undefined1 *)(param_1 + 0x10));
  param_2[5] = (float)dVar1;
  dVar1 = (double)FUN_0061dab4(*(undefined1 *)(param_1 + 0x10));
  param_2[6] = (float)dVar1;
  param_2[7] = *(float *)(param_1 + 0x1d0);
  return;
}



//==== 00619a90  ns=Global  size=0xd8
// sig: undefined FUN_00619a90(void)
// callers(4): 00608578 FUN_00608578; 00608924 FUN_00608924; 00608cb8 FUN_00608cb8; 00609078 FUN_00609078
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_00619a90(int *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b01c;
  if (((param_1 == (int *)0x0) || (-1 < *param_1)) || (param_2 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
    iVar1 = param_1[0x16];
  }
  else {
    iVar1 = param_1[0x16];
  }
  if (iVar1 != 0) {
    do {
      iVar3 = iVar1;
      iVar1 = *(int *)(iVar3 + 0xc);
    } while (iVar1 != 0);
    *(int *)(iVar3 + 0xc) = param_2;
    return;
  }
  param_1[0x16] = param_2;
  return;
}



//==== 00619b68  ns=Global  size=0xe4
// sig: undefined FUN_00619b68(void)
// callers(6): 00607dcc FUN_00607dcc; 00608578 FUN_00608578; 00608924 FUN_00608924; 00608cb8 FUN_00608cb8; 00609078 FUN_00609078; 0061a34c FUN_0061a34c
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

uint * FUN_00619b68(int param_1,uint param_2)

{
  undefined *puVar1;
  uint *puVar2;
  
  puVar1 = PTR_PTR_0071b01c;
  if ((param_1 == 0) || (param_2 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar1 + -0x7fec) != '\0') {
      return (uint *)0x0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fe8),0);
  }
  puVar2 = *(uint **)(param_1 + 0x58);
  if (puVar2 != (uint *)0x0) {
    while ((param_2 & *puVar2) == 0) {
      puVar2 = (uint *)puVar2[3];
      if (puVar2 == (uint *)0x0) {
        return (uint *)0x0;
      }
    }
  }
  return puVar2;
}



//==== 00619c4c  ns=Global  size=0x8c
// sig: undefined FUN_00619c4c(void)
// callers(2): 00619c4c FUN_00619c4c; 0061b218 FUN_0061b218
// callees(2): 0061948c 989snd::snd_Printf; 00619c4c FUN_00619c4c
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_00619c4c(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b01c;
  if (param_1 == (undefined4 *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar1 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fe8),0);
  }
  if (param_1[3] != 0) {
    FUN_00619c4c(param_1[3]);
  }
  *param_1 = 0;
  return;
}



//==== 00619cd8  ns=Global  size=0x144
// sig: undefined FUN_00619cd8(void)
// callers(2): 00619cd8 FUN_00619cd8; 0061bb5c FUN_0061bb5c
// callees(2): 0061948c 989snd::snd_Printf; 00619cd8 FUN_00619cd8
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

undefined4 FUN_00619cd8(int *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_PTR_0071b01c;
  if (((param_2 == (int *)0x0) || (-1 < *param_2)) || (param_1 == (int *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar1 + -0x7fec) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fe8),0);
  }
  if ((param_1[3] != 0) && (iVar2 = FUN_00619cd8(param_1[3],param_2), iVar2 == 1)) {
    return 1;
  }
  if (-1 < *param_1) {
    if (param_1[2] == 1) {
      iVar2 = param_1[1] + -1;
      param_1[1] = iVar2;
    }
    else {
      iVar2 = param_1[1];
    }
    if (iVar2 == 0) {
      uVar3 = (**(code **)param_1[4])(param_1,param_2);
      return uVar3;
    }
  }
  return 0;
}



//==== 00619e1c  ns=Global  size=0x144
// sig: undefined FUN_00619e1c(void)
// callers(2): 00619f60 FUN_00619f60; 0061a0f0 FUN_0061a0f0
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_00619e1c(uint *param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  puVar2 = PTR_PTR_0071b01c;
  if ((((param_1 == (uint *)0x0) || (7 < param_3)) || (param_2 < 0)) ||
     ((0x100 < param_2 || (param_4 < 0x234)))) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  if (0 < param_2) {
    piVar1 = *(int **)(puVar2 + -0x7ffc);
    iVar3 = 0;
    while( true ) {
      *(undefined1 *)(param_1 + 4) = 0;
      *param_1 = iVar3 << 0x10 | param_3 << 0x18 | 1;
      param_1[1] = 0;
      iVar4 = *piVar1;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      if (0 < iVar4) {
        iVar4 = 0;
        puVar5 = param_1 + 5;
        do {
          iVar4 = iVar4 + 1;
          *puVar5 = 0;
          uVar6 = *piVar1 + 0x1f;
          puVar5 = puVar5 + 1;
        } while (iVar4 < (int)(((int)uVar6 >> 5) + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0)));
      }
      iVar3 = iVar3 + 1;
      if (param_2 == iVar3) break;
      param_1 = (uint *)((int)param_1 + param_4);
    }
  }
  return;
}



//==== 00619f60  ns=Global  size=0x70
// sig: undefined FUN_00619f60(void)
// callers(1): 0060c518 FUN_0060c518
// callees(1): 00619e1c FUN_00619e1c

void FUN_00619f60(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar1 = PTR_PTR_0071b01c;
  FUN_00619e1c(*(undefined4 *)(PTR_PTR_0071b01c + -0x7fe0),0x100,5,0x24c);
  lVar3 = 0x40;
  puVar2 = *(undefined4 **)(puVar1 + -0x7fe4);
  do {
    puVar2[3] = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 9;
  } while (lVar3 != 0);
  puVar2 = *(undefined4 **)(puVar1 + -0x7fdc);
  **(undefined4 **)(puVar1 + -0x8000) = 0;
  *puVar2 = 0;
  return;
}



//==== 00619fd0  ns=Global  size=0x120
// sig: undefined FUN_00619fd0(void)
// callers(1): 00636718 FUN_00636718
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c138: 'common/sndhand.cpp' | 0066c150: '%s(%d) : Registered sound type %d handler missmatch.\n' | 0066c118: '%s(%d) : Invalid parameter.\n'

void FUN_00619fd0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071b01c;
  if ((param_1 == 0) || (7 < *(uint *)(param_1 + 4))) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar4 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7fe8),0);
    989snd::snd_SynthLock();
    iVar1 = *(int *)(puVar4 + -0x7ff8);
    iVar3 = *(int *)(param_1 + 4) * 4;
    iVar2 = *(int *)(iVar1 + iVar3);
  }
  else {
    989snd::snd_SynthLock(param_1,param_2,0x960);
    iVar1 = *(int *)(puVar4 + -0x7ff8);
    iVar3 = *(int *)(param_1 + 4) * 4;
    iVar2 = *(int *)(iVar1 + iVar3);
  }
  if (iVar2 != param_1) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar4 + -0x7fd8));
    989snd::snd_SynthUnlock();
    return;
  }
  *(undefined4 *)(iVar1 + iVar3) = 0;
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061a0f0  ns=Global  size=0x138
// sig: undefined FUN_0061a0f0(void)
// callers(1): 006367dc FUN_006367dc
// callees(4): 0061948c 989snd::snd_Printf; 00619e1c FUN_00619e1c; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c138: 'common/sndhand.cpp' | 0066c188: '%s(%d) : Handler for sound type %d already registered.\n' | 0066c118: '%s(%d) : Invalid parameter.\n'

void FUN_0061a0f0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  
  puVar8 = PTR_PTR_0071b01c;
  if ((param_1 == 0) || (7 < *(uint *)(param_1 + 4))) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar8 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
    989snd::snd_SynthLock();
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(puVar8 + -0x7ff8);
    iVar7 = iVar1 * 4;
    iVar6 = *(int *)(iVar2 + iVar7);
  }
  else {
    989snd::snd_SynthLock(param_1,param_2,0x93d);
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(puVar8 + -0x7ff8);
    iVar7 = iVar1 * 4;
    iVar6 = *(int *)(iVar2 + iVar7);
  }
  if (iVar6 != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fd4));
    989snd::snd_SynthUnlock();
    return;
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  *(int *)(iVar2 + iVar7) = param_1;
  FUN_00619e1c(uVar5,uVar3,iVar1,uVar4);
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061a228  ns=Global  size=0x124
// sig: undefined FUN_0061a228(void)
// callers(1): 0061a34c FUN_0061a34c
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061a228(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b01c;
  if (((param_1 == (int *)0x0) || (-1 < *param_1)) || (param_2 == (uint *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar3 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7fe8),0);
    if (param_2 == (uint *)0x0) {
      return;
    }
    989snd::snd_SynthLock();
    puVar1 = (uint *)param_1[0x16];
    *param_2 = *param_2 & 0xfffffffe;
  }
  else {
    989snd::snd_SynthLock();
    puVar1 = (uint *)param_1[0x16];
    *param_2 = *param_2 & 0xfffffffe;
  }
  if (param_2 == puVar1) {
    param_1[0x16] = param_2[3];
  }
  else {
    do {
      puVar2 = puVar1;
      if (puVar2 == (uint *)0x0) goto LAB_0061a2c8;
      puVar1 = (uint *)puVar2[3];
    } while (param_2 != (uint *)puVar2[3]);
    puVar2[3] = param_2[3];
  }
LAB_0061a2c8:
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061a34c  ns=Global  size=0xcc
// sig: undefined FUN_0061a34c(void)
// callers(8): 00607dcc FUN_00607dcc; 00608578 FUN_00608578; 00608924 FUN_00608924; 00608cb8 FUN_00608cb8; 0060ccc4 FUN_0060ccc4; 0060cf9c FUN_0060cf9c; 0060d1c8 FUN_0060d1c8; 0060d434 FUN_0060d434
// callees(3): 0061948c 989snd::snd_Printf; 00619b68 FUN_00619b68; 0061a228 FUN_0061a228
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061a34c(int *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b01c;
  if (((param_1 == (int *)0x0) || (-1 < *param_1)) || (param_2 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar1 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fe8),0);
  }
  iVar2 = FUN_00619b68(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  FUN_0061a228(param_1,iVar2);
  return;
}



//==== 0061a418  ns=Global  size=0xe0
// sig: undefined FUN_0061a418(void)
// callers(4): 00608578 FUN_00608578; 00608924 FUN_00608924; 00608cb8 FUN_00608cb8; 00609078 FUN_00609078
// callees(2): 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

uint * FUN_0061a418(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  
  989snd::snd_SynthLock();
  if (0 < (int)param_2) {
    uVar4 = (ulonglong)param_2;
    uVar1 = *param_1;
    puVar3 = (uint *)(param_3 + (int)param_1);
    while( true ) {
      puVar2 = puVar3;
      if ((uVar1 & 1) == 0) {
        param_1[3] = 0;
        *param_1 = uVar1 | 1;
        989snd::snd_SynthUnlock();
        return param_1;
      }
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) break;
      uVar1 = *puVar2;
      puVar3 = (uint *)((int)puVar2 + param_3);
      param_1 = puVar2;
    }
  }
  989snd::snd_SynthUnlock();
  return (uint *)0x0;
}



//==== 0061a4f8  ns=Global  size=0xc0
// sig: undefined FUN_0061a4f8(void)
// callers(0): 
// callees(2): 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

int FUN_0061a4f8(void)

{
  uint *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  
  puVar3 = PTR_PTR_0071b01c;
  989snd::snd_SynthLock();
  puVar1 = *(uint **)(puVar3 + -0x7fe4);
  iVar4 = 0;
  iVar2 = *(int *)(puVar3 + -0x7fe4);
  lVar6 = 0x40;
  puVar5 = puVar1;
  do {
    if ((*puVar5 & 1) == 0) {
      *(undefined4 *)(iVar2 + iVar4) = 1;
      *(undefined4 *)(iVar4 + iVar2 + 0xc) = 0;
      989snd::snd_SynthUnlock();
      return iVar4 + (int)puVar1;
    }
    iVar4 = iVar4 + 0x24;
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 9;
  } while (lVar6 != 0);
  989snd::snd_SynthUnlock();
  return 0;
}



//==== 0061a5b8  ns=Global  size=0x128
// sig: undefined FUN_0061a5b8(void)
// callers(5): 00609cf4 FUN_00609cf4; 0060e810 FUN_0060e810; 00612130 FUN_00612130; 0061a6e0 FUN_0061a6e0; 00638ea0 FUN_00638ea0
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

uint FUN_0061a5b8(int param_1,uint param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  
  puVar2 = PTR_PTR_0071b01c;
  if (((param_1 == 0) || ((int)param_2 < 0)) ||
     (piVar1 = *(int **)(PTR_PTR_0071b01c + -0x7ffc), *piVar1 < (int)param_2)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
    piVar1 = *(int **)(puVar2 + -0x7ffc);
  }
  989snd::snd_SynthLock();
  if ((int)param_2 < *piVar1) {
    uVar4 = (ulonglong)(*piVar1 - param_2);
    do {
      iVar3 = ((int)param_2 >> 5) + (uint)((int)param_2 < 0 && (param_2 & 0x1f) != 0);
      if ((1 << (param_2 + iVar3 * -0x20 & 0x3f) & *(uint *)(param_1 + iVar3 * 4 + 0x14)) != 0)
      goto LAB_0061a670;
      param_2 = param_2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  param_2 = 0xffffffff;
LAB_0061a670:
  989snd::snd_SynthUnlock();
  return param_2;
}



//==== 0061a6e0  ns=Global  size=0xb0
// sig: undefined FUN_0061a6e0(void)
// callers(2): 006069c4 FUN_006069c4; 0061a6e0 FUN_0061a6e0
// callees(2): 0061a5b8 FUN_0061a5b8; 0061a6e0 FUN_0061a6e0

int FUN_0061a6e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 == 0) || (iVar2 = *(int *)(param_1 + 0x22c), iVar2 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = FUN_0061a6e0(iVar2,param_2);
      iVar2 = *(int *)(iVar2 + 0x230);
      iVar3 = iVar3 + iVar1;
    } while (iVar2 != 0);
  }
  iVar2 = 0;
  while( true ) {
    iVar1 = FUN_0061a5b8(param_1,iVar2);
    iVar2 = iVar1 + 1;
    if (iVar1 < 0) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}



//==== 0061a790  ns=Global  size=0x140
// sig: undefined FUN_0061a790(void)
// callers(41): 00604b00 FUN_00604b00; 00604b84 FUN_00604b84; 00604c24 FUN_00604c24; 00604cac FUN_00604cac; 00604d08 FUN_00604d08; 00604da4 FUN_00604da4; 00604e18 FUN_00604e18; 00605324 FUN_00605324; 00605b2c FUN_00605b2c; 00605c04 FUN_00605c04; 00605cdc FUN_00605cdc; 00605db4 FUN_00605db4; 006069c4 FUN_006069c4; 00606a60 FUN_00606a60; 00606e2c FUN_00606e2c; 00607334 FUN_00607334; 00607504 FUN_00607504; 006077ac FUN_006077ac; 00607a50 FUN_00607a50; 00607b34 FUN_00607b34; 00607dcc FUN_00607dcc; 006081d4 FUN_006081d4; 0060829c FUN_0060829c; 00608364 FUN_00608364; 0060842c FUN_0060842c
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

ulonglong FUN_0061a790(ulonglong param_1)

{
  int iVar1;
  undefined *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar2 = PTR_PTR_0071b01c;
  uVar3 = param_1 >> 0x10 & 0xff;
  if (0xff < uVar3) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  if (-1 < (int)param_1) {
    return 0;
  }
  uVar5 = param_1 >> 0x18 & 0x1f;
  989snd::snd_SynthLock();
  uVar4 = (uint)uVar3;
  if ((int)uVar5 == 5) {
    if (uVar4 < 0x100) {
      uVar3 = uVar3 * 0x24c + (ulonglong)*(uint *)(puVar2 + -0x7fe0);
      goto LAB_0061a838;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(puVar2 + -0x7ff8) + (int)(uVar5 << 2));
    if ((iVar1 != 0) && ((int)uVar4 < *(int *)(iVar1 + 8))) {
      uVar3 = (longlong)(int)uVar4 * (longlong)*(int *)(iVar1 + 0xc) +
              (ulonglong)*(uint *)(iVar1 + 0x10);
LAB_0061a838:
      uVar5 = 0;
      if (((int *)uVar3 == (int *)0x0) ||
         (uVar5 = uVar3 & 0xffffffff, *(int *)uVar3 == (int)param_1)) goto LAB_0061a858;
    }
  }
  uVar5 = 0;
LAB_0061a858:
  989snd::snd_SynthUnlock();
  return uVar5;
}



//==== 0061a8d0  ns=Global  size=0x184
// sig: undefined FUN_0061a8d0(void)
// callers(3): 0061183c FUN_0061183c; 00611fd0 FUN_00611fd0; 00633060 FUN_00633060
// callees(4): 0061948c 989snd::snd_Printf; 0061a790 FUN_0061a790; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp' | 0066c1f8: '%s(%d) : Handle %x is already a child.\n' | 0066c1c0: '%s(%d) : Attempt to make handle %x a child of itself.\n'

void FUN_0061a8d0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b01c;
  if ((param_1 == 0) || (-1 < param_2)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  989snd::snd_SynthLock();
  iVar3 = FUN_0061a790(param_2);
  if (iVar3 != 0) {
    if (param_1 == iVar3) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fd0));
      989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7ff4));
      if (**(char **)(puVar2 + -0x7fec) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
    }
    if (*(int *)(iVar3 + 0x228) != 0) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fcc));
      989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7ff4));
      if (**(char **)(puVar2 + -0x7fec) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x22c);
    *(int *)(iVar3 + 0x228) = param_1;
    *(int *)(param_1 + 0x22c) = iVar3;
    *(undefined4 *)(iVar3 + 0x230) = uVar1;
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061aa54  ns=Global  size=0x218
// sig: undefined FUN_0061aa54(void)
// callers(4): 00604e98 FUN_00604e98; 0060f728 FUN_0060f728; 00632e2c FUN_00632e2c; 00633060 FUN_00633060
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c220: '%s(%d) : Handler %x already on list.\n' | 0066c138: 'common/sndhand.cpp' | 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c248: '%s(%d) : Corrupt handler list.\n'

void FUN_0061aa54(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_0071b01c;
  if ((param_1 == (uint *)0x0) || ((int)*param_1 < 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar6 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar6 + -0x7fe8),0);
  }
  989snd::snd_SynthLock();
  puVar1 = *(uint **)(puVar6 + -0x8000);
  for (puVar2 = (uint *)*puVar1; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[0x89]) {
    if (param_1 == puVar2) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fc8));
    }
  }
  piVar3 = *(int **)(puVar6 + -0x7fdc);
  param_1[0x89] = 0;
  iVar4 = *piVar3;
  *param_1 = *param_1 | 0x80000000;
  param_1[0x88] = 0;
  if (iVar4 == 0) {
    if (*puVar1 != 0) goto LAB_0061abf4;
LAB_0061ac48:
    *puVar1 = (uint)param_1;
    *piVar3 = (int)param_1;
  }
  else {
    if (*puVar1 == 0) {
LAB_0061abf4:
      989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fc4));
      989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7ff4));
      if (**(char **)(puVar6 + -0x7fec) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar6 + -0x7fe8),0);
      if (*puVar1 == 0) goto LAB_0061ac48;
    }
    puVar2 = (uint *)*piVar3;
    if (param_1 == puVar2) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fc4));
    }
    else if ((param_1[1] & 0x40000) == 0) {
      param_1[0x88] = (uint)puVar2;
      puVar2[0x89] = (uint)param_1;
      *piVar3 = (int)param_1;
    }
    else {
      uVar5 = *puVar1;
      param_1[0x88] = 0;
      param_1[0x89] = uVar5;
      *(uint **)(uVar5 + 0x220) = param_1;
      *puVar1 = (uint)param_1;
    }
  }
  *(int *)(*(int *)(puVar6 + -0x7fc0) + *(char *)(param_1 + 4) * 4) =
       *(int *)(*(int *)(puVar6 + -0x7fc0) + *(char *)(param_1 + 4) * 4) + 1;
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061ac6c  ns=Global  size=0xb8
// sig: undefined FUN_0061ac6c(void)
// callers(2): 00607dcc FUN_00607dcc; 0061ac6c FUN_0061ac6c
// callees(3): 0061948c 989snd::snd_Printf; 0061ac6c FUN_0061ac6c; 0061f0ec FUN_0061f0ec
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061ac6c(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b01c;
  if ((param_1 == (int *)0x0) || (-1 < *param_1)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  for (iVar1 = param_1[0x8b]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0061ac6c(iVar1);
  }
  FUN_0061f0ec(param_1);
  return;
}



//==== 0061ad24  ns=Global  size=0xb8
// sig: undefined FUN_0061ad24(void)
// callers(6): 00607dcc FUN_00607dcc; 00608924 FUN_00608924; 00608cb8 FUN_00608cb8; 0060cf9c FUN_0060cf9c; 0060d1c8 FUN_0060d1c8; 0061ad24 FUN_0061ad24
// callees(3): 0061948c 989snd::snd_Printf; 0061ad24 FUN_0061ad24; 0061f100 FUN_0061f100
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061ad24(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b01c;
  if ((param_1 == (int *)0x0) || (-1 < *param_1)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  for (iVar1 = param_1[0x8b]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0061ad24(iVar1);
  }
  FUN_0061f100(param_1);
  return;
}



//==== 0061addc  ns=Global  size=0xb4
// sig: undefined FUN_0061addc(void)
// callers(6): 00607dcc FUN_00607dcc; 00609078 FUN_00609078; 0060ccc4 FUN_0060ccc4; 00612130 FUN_00612130; 0061addc FUN_0061addc; 00632ec0 FUN_00632ec0
// callees(3): 0061948c 989snd::snd_Printf; 0061addc FUN_0061addc; 0061f114 FUN_0061f114
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061addc(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b01c;
  if ((param_1 == (int *)0x0) || (-1 < *param_1)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  for (iVar1 = param_1[0x8b]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0061addc(iVar1);
  }
  FUN_0061f114(param_1);
  return;
}



//==== 0061ae90  ns=Global  size=0xb4
// sig: undefined FUN_0061ae90(void)
// callers(7): 00607dcc FUN_00607dcc; 00608578 FUN_00608578; 0060d434 FUN_0060d434; 00612130 FUN_00612130; 0061ae90 FUN_0061ae90; 00632ec0 FUN_00632ec0; 006376c0 FUN_006376c0
// callees(3): 0061948c 989snd::snd_Printf; 0061ae90 FUN_0061ae90; 0061f128 FUN_0061f128
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061ae90(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b01c;
  if ((param_1 == (int *)0x0) || (-1 < *param_1)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  for (iVar1 = param_1[0x8b]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0061ae90(iVar1);
  }
  FUN_0061f128(param_1);
  return;
}



//==== 0061af44  ns=Global  size=0x184
// sig: undefined FUN_0061af44(void)
// callers(5): 00609ad0 FUN_00609ad0; 0060bb90 FUN_0060bb90; 0060bee0 FUN_0060bee0; 0061af44 FUN_0061af44; 0063ea68 FUN_0063ea68
// callees(3): 0061948c 989snd::snd_Printf; 0061af44 FUN_0061af44; 0061f13c FUN_0061f13c
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061af44(byte *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071b01c;
  if ((param_1 == (byte *)0x0) || (-1 < *(int *)param_1)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar4 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7fe8),0);
  }
  if (param_2 != 0) {
    for (iVar1 = *(int *)(param_1 + 0x22c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
      FUN_0061af44(iVar1,1,param_3);
    }
  }
  uVar2 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar2 & ~param_3;
  if ((uVar2 & ~param_3 & 0xe) == 0) {
    FUN_0061f13c(param_1);
    if ((((uint)((ulonglong)*param_1 & 0x1f) < 8) &&
        (iVar1 = *(int *)(*(int *)(puVar4 + -0x7ff8) + (int)(((ulonglong)*param_1 & 0x1f) << 2)),
        iVar1 != 0)) && (puVar3 = *(undefined4 **)(iVar1 + 0x24), puVar3 != (undefined4 *)0x0)) {
      (*(code *)*puVar3)(param_1,0);
      return;
    }
  }
  return;
}



//==== 0061b0c8  ns=Global  size=0x150
// sig: undefined FUN_0061b0c8(void)
// callers(6): 00609a5c FUN_00609a5c; 0060bc8c FUN_0060bc8c; 0060bfd8 FUN_0060bfd8; 0061b0c8 FUN_0061b0c8; 00632e2c FUN_00632e2c; 0063eaac FUN_0063eaac
// callees(3): 0061948c 989snd::snd_Printf; 0061b0c8 FUN_0061b0c8; 0061f3e0 FUN_0061f3e0
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

void FUN_0061b0c8(byte *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b01c;
  if ((param_1 == (byte *)0x0) || (-1 < *(int *)param_1)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar3 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7fe8),0);
  }
  if (param_2 != 0) {
    for (iVar1 = *(int *)(param_1 + 0x22c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
      FUN_0061b0c8(iVar1,1,param_3);
    }
  }
  FUN_0061f3e0(param_1);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | param_3;
  if ((((uint)((ulonglong)*param_1 & 0x1f) < 8) &&
      (iVar1 = *(int *)(*(int *)(puVar3 + -0x7ff8) + (int)(((ulonglong)*param_1 & 0x1f) << 2)),
      iVar1 != 0)) && (puVar2 = *(undefined4 **)(iVar1 + 0x24), puVar2 != (undefined4 *)0x0)) {
    (*(code *)*puVar2)(param_1,1);
  }
  return;
}



//==== 0061b218  ns=Global  size=0x654
// sig: undefined FUN_0061b218(void)
// callers(4): 00604e98 FUN_00604e98; 0060d5b0 FUN_0060d5b0; 0061b218 FUN_0061b218; 0061b86c FUN_0061b86c
// callees(6): 0061948c 989snd::snd_Printf; 006194f4 FUN_006194f4; 00619c4c FUN_00619c4c; 0061b218 FUN_0061b218; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c268: '%s(%d) : Corrupt handler list found unlinking handle %x.\n' | 0066c138: 'common/sndhand.cpp' | 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c300: '%s(%d) : Corrupt family list found unlinking handle %x.\n' | 0066c2d0: '%s(%d) : Invalid playing handler count.\n' | 0066c2a8: '%s(%d) : Handler with active LFO\n'

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071b01c : 0x0061b898 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0061b218(uint *param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  uint *puVar3;
  char *pcVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int *piVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar8 = PTR_PTR_0071b01c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_1 == (uint *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar8 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
    return;
  }
  if (-1 < (int)*param_1) {
    return;
  }
  bVar1 = param_2 == 0;
  if (((bVar1) && (param_1[0x8a] == 0)) && (param_1[0x8b] != 0)) {
    param_2 = 1;
    bVar1 = false;
    FUN_006194f4(0x78,0,0,0,0);
  }
  989snd::snd_SynthLock();
  if (((param_1[1] & 0x20000) != 0) &&
     ((undefined4 *)**(int **)(puVar8 + -0x7fbc) != (undefined4 *)0x0)) {
    (**(code **)**(int **)(puVar8 + -0x7fbc))(*param_1,param_1[2],0);
  }
  if (!bVar1) {
    uVar16 = param_1[0x8b];
    while (uVar16 != 0) {
      FUN_0061b218(uVar16,param_2);
      uVar16 = param_1[0x8b];
    }
  }
  if (param_1[0x16] != 0) {
    FUN_00619c4c(param_1[0x16]);
    param_1[0x16] = 0;
  }
  uVar16 = param_1[0x88];
  if (uVar16 == 0) {
    puVar5 = *(uint **)(puVar8 + -0x8000);
    if (param_1 != (uint *)*puVar5) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fb8));
      989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ff4));
      if (**(char **)(puVar8 + -0x7fec) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
    }
    *puVar5 = param_1[0x89];
  }
  else {
    if (*(uint **)(uVar16 + 0x224) != param_1) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fb8));
      989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ff4));
      if (**(char **)(puVar8 + -0x7fec) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
      uVar16 = param_1[0x88];
    }
    *(uint *)(uVar16 + 0x224) = param_1[0x89];
  }
  uVar16 = param_1[0x89];
  if (uVar16 == 0) {
    puVar5 = *(uint **)(puVar8 + -0x7fdc);
    if (param_1 != (uint *)*puVar5) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fb8));
      989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ff4));
      if (**(char **)(puVar8 + -0x7fec) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
    }
    *puVar5 = param_1[0x88];
  }
  else {
    if (*(uint **)(uVar16 + 0x220) != param_1) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fb8));
      989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ff4));
      if (**(char **)(puVar8 + -0x7fec) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
      uVar16 = param_1[0x89];
    }
    *(uint *)(uVar16 + 0x220) = param_1[0x88];
  }
  uVar16 = *param_1;
  param_1[0x15] = 0;
  *param_1 = (uint)((ulonglong)uVar16 & 0x7fffffff);
  if (((uint)(((ulonglong)uVar16 & 0x7fffffff) >> 0x18) & 0x1f) == 5) {
    iVar13 = 0;
    do {
      if ((*(byte *)((int)param_1 + iVar13 + 0x61) & 1) != 0) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fb4));
      }
      bVar1 = iVar13 != 0x90;
      iVar13 = iVar13 + 0x30;
    } while (bVar1);
  }
  iVar13 = *(int *)(puVar8 + -0x7fc0);
  iVar15 = (int)(((longlong)*(char *)(param_1 + 4) & 0x3fffffffU) << 2);
  iVar12 = *(int *)(iVar13 + iVar15);
  if (iVar12 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fb0));
    989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ff4));
    if (**(char **)(puVar8 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
    iVar15 = (int)(((longlong)*(char *)(param_1 + 4) & 0xffffffffU) << 2);
    iVar12 = *(int *)(iVar13 + iVar15);
    if (iVar12 == 0) goto LAB_0061b46c;
  }
  *(int *)(iVar13 + iVar15) = iVar12 + -1;
LAB_0061b46c:
  uVar16 = param_1[0x8a];
  if (uVar16 != 0) {
    puVar5 = *(uint **)(uVar16 + 0x22c);
    if (param_1 == *(uint **)(uVar16 + 0x22c)) {
      *(uint *)(uVar16 + 0x22c) = param_1[0x8c];
    }
    else {
      do {
        puVar3 = puVar5;
        if (puVar3 == (uint *)0x0) {
          989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fac));
          989snd::snd_SynthUnlock();
          return;
        }
        puVar5 = (uint *)puVar3[0x8c];
      } while (param_1 != (uint *)puVar3[0x8c]);
      puVar3[0x8c] = param_1[0x8c];
    }
    if (param_1[0x8b] != 0) {
      uVar17 = 0;
      iVar13 = *(int *)(puVar8 + -0x7ff0);
      pcVar4 = *(char **)(puVar8 + -0x7fec);
      pbVar11 = *(byte **)(puVar8 + -0x7fe8);
      uVar16 = param_1[0x8b];
      do {
        if (*(uint **)(uVar16 + 0x228) != param_1) {
          uVar14 = *param_1 | 0x80000000;
          989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fac));
          piVar10 = *(int **)(puVar8 + -0x7ff4);
          iVar15 = 0x321;
          iVar12 = iVar13;
          989snd::snd_Printf((char)piVar10);
          puVar9 = PTR_PTR_0071b01c;
          if (*pcVar4 != '\0') {
            return;
          }
          bVar2 = *pbVar11;
          if (bVar2 != 0) {
            trapWord(0x1f,(ulonglong)bVar2,(ulonglong)bVar2);
            if ((uVar14 == 0) || (iVar15 != 0)) {
              989snd::snd_SynthLock();
              iVar13 = *piVar10;
            }
            else {
              if ((piVar10[1] & 0x80U) != 0) {
                return;
              }
              989snd::snd_SynthLock();
              iVar13 = *piVar10;
            }
            if (-1 < iVar13) {
              989snd::snd_Printf((char)*(undefined4 *)(puVar9 + -0x7fa8));
              989snd::snd_SynthUnlock();
              return;
            }
            if (uVar14 == 0) {
              uVar16 = piVar10[1];
              if ((uVar16 & 0x80) != 0) goto LAB_0061bae0;
LAB_0061b96c:
              if ((uVar16 & 0xe) != 0) {
                iVar15 = 1;
              }
              piVar10[1] = uVar16 | 0x80;
              if (iVar12 == 0) goto LAB_0061b9c8;
            }
            else {
              uVar17 = piVar10[1];
              uVar16 = uVar17 | 0x20;
              piVar10[1] = uVar16;
              if ((uVar17 & 0x80) == 0) goto LAB_0061b96c;
LAB_0061bae0:
              iVar12 = 1;
              iVar15 = 1;
              piVar10[1] = uVar16 | 0x80;
            }
            for (iVar6 = piVar10[0x8b]; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x230)) {
              FUN_0061b86c(iVar6,iVar12,iVar15,uVar14);
            }
LAB_0061b9c8:
            pbVar11 = (byte *)FUN_0061a790(iVar13);
            if (pbVar11 == (byte *)0x0) {
              989snd::snd_Printf((char)*(undefined4 *)(puVar9 + -0x7fa4));
              989snd::snd_SynthUnlock();
              return;
            }
            if ((int)((ulonglong)*pbVar11 & 0x1f) == 5) {
              iVar12 = FUN_0060e160(pbVar11,iVar15,uVar14);
            }
            else {
              iVar12 = *(int *)(*(int *)(puVar9 + -0x7ff8) +
                               (int)(((ulonglong)*pbVar11 & 0x1f) << 2));
              if ((iVar12 == 0) ||
                 (puVar7 = *(undefined4 **)(iVar12 + 0x20), puVar7 == (undefined4 *)0x0)) {
                iVar12 = 0;
              }
              else {
                iVar12 = (*(code *)*puVar7)(pbVar11,iVar15);
              }
            }
            if (iVar12 == 0 && iVar15 == 0) {
              FUN_00621460(pbVar11);
            }
            else {
              FUN_0062112c(pbVar11);
              FUN_00616c14(pbVar11);
              iVar13 = FUN_0061a790(iVar13);
              if (iVar13 != 0) {
                uVar16 = 0;
                if (*(int *)(iVar13 + 0x228) == 0) {
                  uVar16 = (int)*(uint *)(iVar13 + 0x22c) >> 0x1f;
                  uVar16 = uVar16 - (uVar16 ^ *(uint *)(iVar13 + 0x22c)) >> 0x1f;
                }
                FUN_0061b218(iVar13,uVar16);
              }
            }
            989snd::snd_SynthUnlock();
            return;
          }
        }
        uVar14 = *(uint *)(uVar16 + 0x230);
        if (uVar14 == 0) {
          uVar17 = uVar16;
        }
        *(uint *)(uVar16 + 0x228) = param_1[0x8a];
        uVar16 = uVar14;
      } while (uVar14 != 0);
      uVar16 = param_1[0x8a];
      iVar13 = *(int *)(uVar16 + 0x22c);
      if (iVar13 == 0) {
        *(uint *)(uVar16 + 0x22c) = param_1[0x8b];
      }
      else if (uVar17 == 0) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fac));
        989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ff4));
        if (**(char **)(puVar8 + -0x7fec) != '\0') {
          return;
        }
        trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fe8),0);
      }
      else {
        *(uint *)(uVar16 + 0x22c) = param_1[0x8b];
        *(int *)(uVar17 + 0x230) = iVar13;
      }
    }
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061b86c  ns=Global  size=0x2f0
// sig: undefined FUN_0061b86c(void)
// callers(11): 006084f4 FUN_006084f4; 0060ba88 FUN_0060ba88; 0060f5cc FUN_0060f5cc; 00612130 FUN_00612130; 0061b86c FUN_0061b86c; 0061bb5c FUN_0061bb5c; 0061bd9c FUN_0061bd9c; 0061be80 FUN_0061be80; 0061bfb0 FUN_0061bfb0; 0061c114 FUN_0061c114; 00635d10 FUN_00635d10
// callees(10): 0060e160 FUN_0060e160; 00616c14 FUN_00616c14; 0061948c 989snd::snd_Printf; 0061a790 FUN_0061a790; 0061b218 FUN_0061b218; 0061b86c FUN_0061b86c; 0062112c FUN_0062112c; 00621460 FUN_00621460; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c138: 'common/sndhand.cpp' | 0066c340: '%s(%d) : Attempt to stop an inactive handler.\n' | 0066c370: '%s(%d) : Children stopped the parent. How the heck did that happen?\n'

void FUN_0061b86c(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar3 = PTR_PTR_0071b01c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_4 == 0) || (param_3 != 0)) {
    989snd::snd_SynthLock();
    iVar6 = *param_1;
  }
  else {
    if ((param_1[1] & 0x80U) != 0) {
      return;
    }
    989snd::snd_SynthLock();
    iVar6 = *param_1;
  }
  if (-1 < iVar6) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fa8));
    989snd::snd_SynthUnlock();
    return;
  }
  if (param_4 == 0) {
    uVar7 = param_1[1];
    if ((uVar7 & 0x80) != 0) goto LAB_0061bae0;
LAB_0061b96c:
    if ((uVar7 & 0xe) != 0) {
      param_3 = 1;
    }
    param_1[1] = uVar7 | 0x80;
    if (param_2 == 0) goto LAB_0061b9c8;
  }
  else {
    uVar1 = param_1[1];
    uVar7 = uVar1 | 0x20;
    param_1[1] = uVar7;
    if ((uVar1 & 0x80) == 0) goto LAB_0061b96c;
LAB_0061bae0:
    param_2 = 1;
    param_3 = 1;
    param_1[1] = uVar7 | 0x80;
  }
  for (iVar5 = param_1[0x8b]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x230)) {
    FUN_0061b86c(iVar5,param_2,param_3,param_4);
  }
LAB_0061b9c8:
  pbVar4 = (byte *)FUN_0061a790(iVar6);
  if (pbVar4 == (byte *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar3 + -0x7fa4));
    989snd::snd_SynthUnlock();
    return;
  }
  if ((int)((ulonglong)*pbVar4 & 0x1f) == 5) {
    iVar5 = FUN_0060e160(pbVar4,param_3,param_4);
  }
  else {
    iVar5 = *(int *)(*(int *)(puVar3 + -0x7ff8) + (int)(((ulonglong)*pbVar4 & 0x1f) << 2));
    if ((iVar5 == 0) || (puVar2 = *(undefined4 **)(iVar5 + 0x20), puVar2 == (undefined4 *)0x0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(code *)*puVar2)(pbVar4,param_3);
    }
  }
  if (iVar5 == 0 && param_3 == 0) {
    FUN_00621460(pbVar4);
  }
  else {
    FUN_0062112c(pbVar4);
    FUN_00616c14(pbVar4);
    iVar6 = FUN_0061a790(iVar6);
    if (iVar6 != 0) {
      uVar7 = 0;
      if (*(int *)(iVar6 + 0x228) == 0) {
        uVar7 = (int)*(uint *)(iVar6 + 0x22c) >> 0x1f;
        uVar7 = uVar7 - (uVar7 ^ *(uint *)(iVar6 + 0x22c)) >> 0x1f;
      }
      FUN_0061b218(iVar6,uVar7);
    }
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061bb5c  ns=Global  size=0x240
// sig: undefined FUN_0061bb5c(void)
// callers(2): 006050dc FUN_006050dc; 0061c994 FUN_0061c994
// callees(5): 0060e31c FUN_0060e31c; 00619cd8 FUN_00619cd8; 0061b86c FUN_0061b86c; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_0061bb5c(uint param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  
  puVar6 = PTR_PTR_0071b01c;
  989snd::snd_SynthLock();
  lVar11 = 0x20;
  puVar10 = *(undefined4 **)(puVar6 + -0x7fa0);
  do {
    *puVar10 = 0;
    lVar11 = lVar11 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar11 != 0);
  pbVar8 = (byte *)**(undefined4 **)(puVar6 + -0x8000);
  if (pbVar8 != (byte *)0x0) {
    iVar1 = *(int *)(puVar6 + -0x7ff8);
    iVar9 = 0;
    puVar2 = *(uint **)(puVar6 + -0x7f9c);
    iVar3 = *(int *)(puVar6 + -0x7f98);
    iVar4 = *(int *)(puVar6 + -0x7fa0);
    dVar12 = (double)*(float *)(puVar6 + -0x7f94);
    dVar13 = (double)param_1;
LAB_0061bc04:
    do {
      if ((*(uint *)(pbVar8 + 4) & 1) != 0) {
        *(int *)(iVar4 + (char)pbVar8[0x10] * 4) = *(int *)(iVar4 + (char)pbVar8[0x10] * 4) + 1;
      }
      if ((double)((float)*puVar2 /
                  (float)((double)*(float *)(iVar3 + (char)pbVar8[0x10] * 4) * dVar12)) <= dVar13) {
        uVar7 = (uint)((ulonglong)*pbVar8 & 0x1f);
        if (uVar7 == 5) {
          if (((*(uint *)(pbVar8 + 4) & 0xe) == 0) &&
             ((*(uint *)(*(int *)(pbVar8 + 0x240) + 8) & 0x400) == 0)) {
            iVar9 = FUN_0060e31c(pbVar8);
          }
        }
        else if (((uVar7 < 8) &&
                 (iVar5 = *(int *)(iVar1 + (int)(((ulonglong)*pbVar8 & 0x1f) << 2)), iVar5 != 0)) &&
                (puVar10 = *(undefined4 **)(iVar5 + 0x1c), puVar10 != (undefined4 *)0x0)) {
          iVar9 = (*(code *)*puVar10)(pbVar8);
        }
        if ((iVar9 != 0) ||
           (((*(int *)(pbVar8 + 0x58) != 0 && ((*(uint *)(pbVar8 + 4) & 0xe) == 0)) &&
            (iVar9 = FUN_00619cd8(*(int *)(pbVar8 + 0x58),pbVar8), iVar9 != 0)))) {
          FUN_0061b86c(pbVar8,1,0,0);
          pbVar8 = *(byte **)(pbVar8 + 0x224);
          iVar9 = 0;
          if (pbVar8 == (byte *)0x0) break;
          goto LAB_0061bc04;
        }
      }
      pbVar8 = *(byte **)(pbVar8 + 0x224);
    } while (pbVar8 != (byte *)0x0);
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061bd9c  ns=Global  size=0xe4
// sig: undefined FUN_0061bd9c(void)
// callers(1): 0061c994 FUN_0061c994
// callees(3): 0061b86c FUN_0061b86c; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_0061bd9c(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
  puVar3 = PTR_PTR_0071b01c;
  989snd::snd_SynthLock();
  pbVar5 = (byte *)**(undefined4 **)(puVar3 + -0x8000);
  if (pbVar5 != (byte *)0x0) {
    iVar1 = *(int *)(puVar3 + -0x7ff8);
    do {
      uVar4 = (uint)((ulonglong)*pbVar5 & 0x1f);
      if (((uVar4 != 5) && (uVar4 < 8)) &&
         (iVar6 = *(int *)(iVar1 + (int)(((ulonglong)*pbVar5 & 0x1f) << 2)), iVar6 != 0)) {
        puVar2 = *(undefined4 **)(iVar6 + 0x18);
        if (puVar2 != (undefined4 *)0x0) {
          iVar6 = (*(code *)*puVar2)(pbVar5);
          if (iVar6 != 0) {
            FUN_0061b86c(pbVar5,1,0,0);
          }
        }
      }
      pbVar5 = *(byte **)(pbVar5 + 0x224);
    } while (pbVar5 != (byte *)0x0);
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061be80  ns=Global  size=0x130
// sig: undefined FUN_0061be80(void)
// callers(1): 006113e4 FUN_006113e4
// callees(2): 0061948c 989snd::snd_Printf; 0061b86c FUN_0061b86c
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

undefined4 FUN_0061be80(int *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_PTR_0071b01c;
  if (((param_1 == (int *)0x0) || (-1 < *param_1)) || (param_2 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar2 + -0x7fec) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fe8),0);
  }
  if (param_1[0x8b] != 0) {
    iVar3 = param_1[0x8b];
    iVar4 = 0;
    do {
      iVar1 = iVar3;
      if (*(int *)(iVar1 + 0x54) == param_2) {
        if (iVar4 == 0) {
          param_1[0x8b] = *(int *)(iVar1 + 0x230);
        }
        else {
          *(undefined4 *)(iVar4 + 0x230) = *(undefined4 *)(iVar1 + 0x230);
        }
        *(undefined4 *)(iVar1 + 0x230) = 0;
        *(undefined4 *)(iVar1 + 0x228) = 0;
        FUN_0061b86c(iVar1,1,0,0);
        return 1;
      }
      iVar3 = *(int *)(iVar1 + 0x230);
      iVar4 = iVar1;
    } while (*(int *)(iVar1 + 0x230) != 0);
  }
  return 0;
}



//==== 0061bfb0  ns=Global  size=0x164
// sig: undefined FUN_0061bfb0(void)
// callers(2): 0060abc8 FUN_0060abc8; 0060f728 FUN_0060f728
// callees(4): 0061948c 989snd::snd_Printf; 0061b86c FUN_0061b86c; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c3b8: '%s(%d) : Deactivated handler on active list.\n' | 0066c138: 'common/sndhand.cpp' | 0066c118: '%s(%d) : Invalid parameter.\n'

void FUN_0061bfb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  int *piVar8;
  
  puVar5 = PTR_PTR_0071b01c;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar5 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar5 + -0x7fe8),0);
  }
  989snd::snd_SynthLock();
  piVar7 = (int *)**(int **)(puVar5 + -0x8000);
  if (piVar7 != (int *)0x0) {
    pcVar2 = *(char **)(puVar5 + -0x7fec);
    pbVar3 = *(byte **)(puVar5 + -0x7fe8);
    do {
      while( true ) {
        if (-1 < *piVar7) {
          989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7f8c));
          989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7ff4));
          puVar6 = PTR_PTR_0071b01c;
          if (*pcVar2 != '\0') {
            return;
          }
          bVar1 = *pbVar3;
          if (bVar1 != 0) {
            trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
            989snd::snd_SynthLock();
            piVar7 = *(int **)(puVar6 + -0x8000);
            piVar8 = (int *)*piVar7;
            if (piVar8 == (int *)0x0) goto LAB_0061c1f0;
            pcVar2 = *(char **)(puVar6 + -0x7fec);
            pbVar3 = *(byte **)(puVar6 + -0x7fe8);
            goto LAB_0061c17c;
          }
        }
        if (piVar7[0x15] != param_1) break;
        FUN_0061b86c(piVar7,1,param_2,param_3);
        piVar7 = (int *)piVar7[0x89];
        if (piVar7 == (int *)0x0) goto LAB_0061c0a4;
      }
      piVar7 = (int *)piVar7[0x89];
    } while (piVar7 != (int *)0x0);
  }
LAB_0061c0a4:
  989snd::snd_SynthUnlock();
  return;
LAB_0061c17c:
  if (*piVar8 < 0) {
LAB_0061c164:
    if (piVar8[0x8a] == 0) goto LAB_0061c1d0;
    piVar8 = (int *)piVar8[0x89];
  }
  else {
    989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f8c));
    989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7ff4));
    if (*pcVar2 != '\0') {
      return;
    }
    bVar1 = *pbVar3;
    if (bVar1 == 0) goto LAB_0061c164;
    trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
LAB_0061c1d0:
    FUN_0061b86c(piVar8,1,1,0);
    piVar8 = (int *)piVar8[0x89];
  }
  if (piVar8 == (int *)0x0) {
LAB_0061c1f0:
    989snd::snd_SynthUnlock();
    if (*piVar7 != 0) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f88));
      iVar4 = *piVar7;
      while (iVar4 != 0) {
        syscall();
        iVar4 = *piVar7;
      }
      989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f84));
    }
    return;
  }
  goto LAB_0061c17c;
}



//==== 0061c114  ns=Global  size=0x16c
// sig: undefined FUN_0061c114(void)
// callers(1): 0060c0d0 FUN_0060c0d0
// callees(4): 0061948c 989snd::snd_Printf; 0061b86c FUN_0061b86c; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c3b8: '%s(%d) : Deactivated handler on active list.\n' | 0066c138: 'common/sndhand.cpp' | 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c3e8: '%s(%d) : Starting wait loop.\n' | 0066c408: '%s(%d) : Ending wait loop.\n'

void FUN_0061c114(void)

{
  byte bVar1;
  int *piVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  
  puVar6 = PTR_PTR_0071b01c;
  989snd::snd_SynthLock();
  piVar2 = *(int **)(puVar6 + -0x8000);
  piVar7 = (int *)*piVar2;
  if (piVar7 != (int *)0x0) {
    pcVar3 = *(char **)(puVar6 + -0x7fec);
    pbVar4 = *(byte **)(puVar6 + -0x7fe8);
    do {
      while (-1 < *piVar7) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f8c));
        989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7ff4));
        if (*pcVar3 != '\0') {
          return;
        }
        bVar1 = *pbVar4;
        if (bVar1 == 0) break;
        trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
LAB_0061c1d0:
        FUN_0061b86c(piVar7,1,1,0);
        piVar7 = (int *)piVar7[0x89];
        if (piVar7 == (int *)0x0) goto LAB_0061c1f0;
      }
      if (piVar7[0x8a] == 0) goto LAB_0061c1d0;
      piVar7 = (int *)piVar7[0x89];
    } while (piVar7 != (int *)0x0);
  }
LAB_0061c1f0:
  989snd::snd_SynthUnlock();
  if (*piVar2 != 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f88));
    iVar5 = *piVar2;
    while (iVar5 != 0) {
      syscall();
      iVar5 = *piVar2;
    }
    989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f84));
  }
  return;
}



//==== 0061c280  ns=Global  size=0x3a8
// sig: undefined FUN_0061c280(void)
// callers(2): 0060f5cc FUN_0060f5cc; 00632790 FUN_00632790
// callees(6): 00604918 FUN_00604918; 00616c14 FUN_00616c14; 0061948c 989snd::snd_Printf; 00625884 FUN_00625884; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp' | 0066c428: '%s(%d) : Invalid handler array.\n' | 0066c450: '%s(%d) : Inactive handler with effects.\n'

uint * FUN_0061c280(double param_1,uint *param_2,int param_3,uint param_4,int param_5,uint param_6,
                   undefined8 param_7,uint param_8,byte param_9)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  uint uStack00000008;
  uint in_stack_00000074;
  
  puVar6 = PTR_PTR_0071b01c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar9 = param_5;
  if ((param_2 != (uint *)0x0) && (iVar8 = param_3, param_4 < 0x20)) goto LAB_0061c408;
LAB_0061c318:
  989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7ff4));
  if (**(char **)(puVar6 + -0x7fec) != '\0') {
    return (uint *)0x0;
  }
  bVar1 = 0 < param_3;
  trapWord(0x18,(ulonglong)**(byte **)(puVar6 + -0x7fe8),0);
LAB_0061c34c:
  989snd::snd_SynthLock();
  if (!bVar1) {
LAB_0061c494:
    989snd::snd_SynthUnlock();
    return (uint *)0x0;
  }
  iVar11 = 0;
  iVar3 = *(int *)(puVar6 + -0x7ff0);
  iVar4 = *(int *)(puVar6 + -0x7f78);
  piVar5 = *(int **)(puVar6 + -0x7ffc);
  dVar14 = (double)*(float *)(puVar6 + -0x7f74);
  do {
    if ((*(byte *)param_2 & 0x1f) != param_4) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f80));
      iVar8 = iVar3;
      989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7ff4));
      if (**(char **)(puVar6 + -0x7fec) != '\0') {
        return (uint *)0x0;
      }
      bVar2 = **(byte **)(puVar6 + -0x7fe8);
      if (bVar2 != 0) break;
    }
    if (param_2[0x15] == 0) {
      if (param_2[0x16] != 0) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f7c));
        param_2[0x16] = 0;
      }
      param_2[1] = in_stack_00000074 & 0x10000;
      iVar9 = *piVar5;
      param_2[0x15] = param_6;
      *param_2 = *param_2 & 0xffff0000 | *param_2 + 1 & 0xffff;
      uVar7 = *(uint *)(iVar4 + (char)param_9 * 4);
      param_2[0x8c] = 0;
      param_2[0x89] = 0;
      param_2[0x88] = 0;
      param_2[0x8a] = 0;
      param_2[1] = (uint)(((ulonglong)(uVar7 >> 1) & 1) << 2) | in_stack_00000074 & 0x10000;
      param_2[0x8b] = 0;
      if (0 < iVar9) {
        uVar7 = iVar9 + 0x1f;
        uVar7 = ((int)uVar7 >> 5) + (uint)((int)uVar7 < 0 && (uVar7 & 0x1f) != 0);
        puVar10 = param_2 + 5;
        uVar12 = (ulonglong)uVar7;
        if ((int)uVar7 < 1) {
          uVar12 = 1;
        }
        do {
          *puVar10 = 0;
          uVar12 = uVar12 - 1;
          puVar10 = puVar10 + 1;
        } while (uVar12 != 0);
      }
      param_2[0x47] = (uint)(float)param_1;
      *(byte *)(param_2 + 4) = param_9;
      param_2[0x4a] = (uint)(float)dVar14;
      param_2[0x4c] = param_8;
      param_2[0x58] = 0;
      *(byte *)((int)param_2 + 0x167) = 0;
      param_2[2] = 0;
      param_2[0x48] = (uint)(float)dVar14;
      param_2[0x49] = (uint)(float)dVar14;
      param_2[0x4b] = 0;
      param_2[0x4d] = 0;
      param_2[0x4e] = 0;
      param_2[0x50] = 0;
      param_2[0x4f] = 0;
      param_2[0x56] = 0;
      param_2[0x55] = 0;
      param_2[0x57] = 0;
      param_2[0x52] = 0;
      param_2[0x51] = 0;
      param_2[0x53] = 0;
      param_2[0x54] = 0;
      *(byte *)(param_2 + 0x59) = 0;
      *(byte *)((int)param_2 + 0x165) = 0;
      *(byte *)((int)param_2 + 0x166) = 0;
      FUN_00616c14(param_2);
      lVar13 = 4;
      puVar10 = param_2 + 0x17;
      do {
        puVar10[10] = (uint)param_2;
        *(undefined2 *)puVar10 = 0;
        puVar10[3] = 0;
        *(byte *)((int)puVar10 + 2) = 0;
        *(byte *)(puVar10 + 1) = 0;
        *(byte *)((int)puVar10 + 5) = 0;
        lVar13 = lVar13 + -1;
        puVar10 = puVar10 + 0xc;
      } while (lVar13 != 0);
      FUN_00625884(param_2 + 0x5a);
      uVar7 = FUN_00604918();
      param_2[3] = uVar7;
      989snd::snd_SynthUnlock();
      return param_2;
    }
    iVar11 = iVar11 + 1;
    if (param_3 == iVar11) goto LAB_0061c494;
    param_2 = (uint *)((int)param_2 + param_5);
  } while( true );
  trapWord(0x1f,(ulonglong)bVar2,(ulonglong)bVar2);
LAB_0061c408:
  bVar1 = 0 < iVar8;
  if (((iVar8 < 0) || (0x100 < iVar8)) || (iVar9 < 0x234)) goto LAB_0061c318;
  goto LAB_0061c34c;
}



//==== 0061c628  ns=Global  size=0x354
// sig: undefined FUN_0061c628(void)
// callers(10): 00607dcc FUN_00607dcc; 0060ccc4 FUN_0060ccc4; 0060cf9c FUN_0060cf9c; 0060d1c8 FUN_0060d1c8; 0060d434 FUN_0060d434; 0060f728 FUN_0060f728; 0061c628 FUN_0061c628; 00633008 FUN_00633008; 00635a6c FUN_00635a6c; 00635d10 FUN_00635d10
// callees(3): 0061948c 989snd::snd_Printf; 0061c628 FUN_0061c628; 00625424 FUN_00625424
// strings: 0066c118: '%s(%d) : Invalid parameter.\n' | 0066c138: 'common/sndhand.cpp'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0061c628(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  puVar4 = PTR_PTR_0071b01c;
  if ((param_1 == 0) || (param_2 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b01c + -0x7ff4));
    if (**(char **)(puVar4 + -0x7fec) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7fe8),0);
  }
  for (iVar7 = *(int *)(param_1 + 0x22c); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x230)) {
    FUN_0061c628(iVar7,param_2);
  }
  uVar5 = *(uint *)(param_2 + 4);
  if ((uVar5 & 0x100000) != 0) {
    if (-1 < (int)uVar5) {
      *(uint *)(param_1 + 4) = (*(uint *)(param_2 + 8) & 1) << 0x11 | *(uint *)(param_1 + 4);
    }
    uVar5 = (uint)(((ulonglong)(*(uint *)(param_2 + 8) >> 1) & 1) << 0x15) | *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 4) = uVar5;
    *(uint *)(param_1 + 4) = (uint)(((ulonglong)(*(uint *)(param_2 + 8) >> 2) & 1) << 0x16) | uVar5;
    uVar5 = *(uint *)(param_2 + 4);
  }
  if ((uVar5 & 0x40) == 0) {
    uVar6 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 0xc);
  }
  *(undefined4 *)(param_1 + 8) = uVar6;
  if ((uVar5 & 0xf0000) != 0) {
    uVar8 = 0;
    lVar9 = 4;
    do {
      iVar7 = uVar8 + param_2;
      iVar3 = uVar8 + param_1;
      uVar2 = uVar8 & 0x3f;
      uVar8 = uVar8 + 1;
      if ((0x10000 << uVar2 & uVar5) != 0) {
        *(undefined1 *)(iVar3 + 0x164) = *(undefined1 *)(iVar7 + 0x24);
        uVar5 = *(uint *)(param_2 + 4);
      }
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if ((uVar5 & 4) != 0) {
    fVar1 = *(float *)(param_2 + 0x10);
    *(float *)(param_1 + 0x120) = fVar1;
    if ((int)fVar1 < 0) {
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    else if (*(float *)(puVar4 + -0x7f74) < fVar1) {
      *(float *)(param_1 + 0x120) = *(float *)(puVar4 + -0x7f74);
    }
  }
  if ((uVar5 & 8) == 0) {
    uVar5 = *(uint *)(param_1 + 300);
  }
  else {
    uVar5 = *(uint *)(param_2 + 0x14);
  }
  *(uint *)(param_1 + 300) = uVar5;
  if ((-1 < (int)uVar5) && (0x167 < uVar5)) {
    *(undefined4 *)(param_1 + 300) = 0x167;
  }
  if ((*(uint *)(param_2 + 4) & 0x10) == 0) {
    uVar5 = *(uint *)(param_1 + 0x13c);
    *(uint *)(param_1 + 0x13c) = uVar5;
    if (-1 < (int)uVar5) goto LAB_0061c7ec;
LAB_0061c928:
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0x18);
    *(uint *)(param_1 + 0x13c) = uVar5;
    if ((int)uVar5 < 0) goto LAB_0061c928;
LAB_0061c7ec:
    if (0x168 < uVar5) {
      *(undefined4 *)(param_1 + 0x13c) = 0x168;
    }
  }
  if ((*(uint *)(param_2 + 4) & 1) == 0) {
    iVar7 = *(int *)(param_1 + 0x144);
  }
  else {
    iVar7 = *(int *)(param_2 + 0x1c);
  }
  *(int *)(param_1 + 0x144) = iVar7;
  if (iVar7 < -0x1e00) {
    *(undefined4 *)(param_1 + 0x144) = 0xffffe200;
  }
  else if (0x1e00 < iVar7) {
    *(undefined4 *)(param_1 + 0x144) = 0x1e00;
    uVar5 = *(uint *)(param_2 + 4);
    goto joined_r0x0061c8dc;
  }
  uVar5 = *(uint *)(param_2 + 4);
joined_r0x0061c8dc:
  if ((uVar5 & 2) == 0) {
    fVar1 = *(float *)(param_1 + 0x154);
    *(float *)(param_1 + 0x154) = fVar1;
  }
  else {
    fVar1 = *(float *)(param_2 + 0x20);
    *(float *)(param_1 + 0x154) = fVar1;
  }
  if ((int)fVar1 < -1) {
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(puVar4 + -0x7f6c);
  }
  else if (*(float *)(puVar4 + -0x7f74) < fVar1) {
    *(float *)(param_1 + 0x154) = *(float *)(puVar4 + -0x7f74);
  }
  if ((uVar5 & 0x20) != 0) {
    FUN_00625424(param_1 + 0x168,param_2 + 0x28);
  }
  return;
}



//==== 0061c97c  ns=Global  size=0x18
// sig: undefined FUN_0061c97c(void)
// callers(1): 0060c518 FUN_0060c518
// callees(0): 

void FUN_0061c97c(undefined4 param_1)

{
  **(undefined4 **)(PTR_PTR_0071b020 + -0x8000) = param_1;
  return;
}



//==== 0061c994  ns=Global  size=0x3e8
// sig: undefined FUN_0061c994(void)
// callers(1): 00629ff8 FUN_00629ff8
// callees(12): 006152a4 FUN_006152a4; 00617084 FUN_00617084; 0061870c FUN_0061870c; 0061bb5c FUN_0061bb5c; 0061bd9c FUN_0061bd9c; 0061d100 FUN_0061d100; 0061de48 FUN_0061de48; 0061fa5c FUN_0061fa5c; 00620e68 FUN_00620e68; 006271f4 989snd::snd_SynthUnlock; 0062730c FUN_0062730c; 0062b028 989snd::snd_SynthIsVoiceContextFinished
// strings: 0061caf8: 'W)(4;9' (raw)

undefined8 FUN_0061c994(int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  float *pfVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  float fVar11;
  undefined *puVar12;
  uint uVar13;
  int iVar15;
  char cVar16;
  ulonglong uVar14;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  uint local_b0 [16];
  ulonglong local_70;
  
  puVar12 = PTR_PTR_0071b020;
  iVar15 = FUN_0062730c();
  if (iVar15 == 0) {
    **(int **)(puVar12 + -0x7ffc) = param_1 + **(int **)(puVar12 + -0x7ffc);
    return 0;
  }
  puVar2 = *(uint **)(puVar12 + -0x7ff8);
  puVar3 = *(uint **)(puVar12 + -0x7ffc);
  uVar21 = *puVar2;
  *puVar3 = *puVar3 + param_1;
  if (0x3e < uVar21 + 0x3e) {
    uVar22 = 0;
    uVar21 = 0x20;
    uVar20 = 0;
    local_b0[0] = 0;
    while( true ) {
      if (uVar22 < *puVar2) {
        piVar4 = *(int **)(puVar12 + -0x7ff4);
        iVar15 = uVar22 * 0x68;
        do {
          iVar10 = iVar15 + *piVar4;
          iVar15 = iVar15 + 0x68;
          iVar10 = *(int *)(iVar10 + 0x60);
          if (iVar10 != 0) {
            cVar16 = 989snd::snd_SynthIsVoiceContextFinished(iVar10);
            if (cVar16 != '\0') {
              local_b0[uVar20] = local_b0[uVar20] | 1 << (uVar22 & 0x1f);
            }
          }
          uVar22 = uVar22 + 1;
        } while ((uVar22 < uVar21) && (uVar22 < *puVar2));
      }
      iVar15 = uVar20 * 0x20;
      uVar18 = uVar20 + 1;
      uVar17 = *puVar2 + 0x1f;
      uVar22 = iVar15 + 0x20;
      bVar1 = uVar22 < iVar15 + 0x40U;
      puVar19 = local_b0 + uVar20 + 1;
      uVar13 = iVar15 + 0x60;
      uVar21 = iVar15 + 0x40U;
      uVar20 = uVar18;
      if (((int)uVar17 >> 5) + (uint)((int)uVar17 < 0 && (uVar17 & 0x1f) != 0) <= uVar18) break;
      while( true ) {
        uVar17 = uVar13;
        *puVar19 = 0;
        if (bVar1) break;
        uVar20 = uVar20 + 1;
        uVar18 = *puVar2 + 0x1f;
        uVar22 = uVar17 - 0x20;
        bVar1 = uVar22 < uVar17;
        puVar19 = puVar19 + 1;
        uVar13 = uVar17 + 0x20;
        uVar21 = uVar17;
        if (((int)uVar18 >> 5) + (uint)((int)uVar18 < 0 && (uVar18 & 0x1f) != 0) <= uVar20)
        goto LAB_0061cb78;
      }
    }
  }
LAB_0061cb78:
  FUN_00620e68(local_b0);
  FUN_0061bd9c();
  puVar2 = *(uint **)(puVar12 + -0x7ff0);
  pfVar5 = *(float **)(puVar12 + -0x7fec);
  dVar23 = (double)*(float *)(puVar12 + -0x7fe8);
  uVar14 = (ulonglong)*puVar2;
  fVar11 = (float)uVar14 / (float)((double)*pfVar5 * dVar23);
  local_70 = uVar14;
  if (fVar11 < (float)*puVar3) {
    puVar19 = *(uint **)(puVar12 + -0x8000);
    puVar6 = *(uint **)(puVar12 + -0x7fd4);
    piVar4 = *(int **)(puVar12 + -0x7fe0);
    puVar7 = *(uint **)(puVar12 + -0x7fdc);
    puVar8 = *(uint **)(puVar12 + -0x7fd8);
    do {
      puVar9 = (undefined4 *)*piVar4;
      *puVar19 = *puVar19 + 1;
      if (puVar9 != (undefined4 *)0x0) {
        local_70 = (ulonglong)fVar11;
        (*(code *)*puVar9)(uVar14,local_70 & 0xffffffff);
      }
      FUN_0061bb5c(*puVar3);
      uVar21 = *puVar7;
      if ((uVar21 != 0) && (*puVar19 == (*puVar19 / uVar21) * uVar21)) {
        FUN_00617084();
      }
      uVar21 = *puVar8;
      if ((uVar21 != 0) && (*puVar19 == (*puVar19 / uVar21) * uVar21)) {
        FUN_0061d100();
      }
      uVar21 = *puVar6;
      if ((uVar21 != 0) && (*puVar19 == (*puVar19 / uVar21) * uVar21)) {
        FUN_006152a4();
      }
      uVar14 = (ulonglong)*puVar2;
      fVar11 = (float)uVar14 / (float)((double)*pfVar5 * dVar23);
      local_70 = (ulonglong)*puVar3 - (longlong)fVar11 & 0xffffffff;
      *puVar3 = (uint)((ulonglong)*puVar3 - (longlong)fVar11);
    } while (fVar11 < (float)local_70);
  }
  FUN_0061fa5c();
  FUN_0061de48();
  FUN_0061870c();
  989snd::snd_SynthUnlock();
  return 0;
}



//==== 0061cd7c  ns=Global  size=0x4c
// sig: undefined FUN_0061cd7c(void)
// callers(0): 
// callees(2): 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_0061cd7c(undefined4 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b020;
  989snd::snd_SynthLock();
  **(undefined4 **)(puVar1 + -0x7fe0) = param_1;
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061cdc8  ns=Global  size=0x78
// sig: undefined FUN_0061cdc8(void)
// callers(2): 0060c448 FUN_0060c448; 0060c518 FUN_0060c518
// callees(0): 

void FUN_0061cdc8(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b024;
  piVar1 = *(int **)(PTR_PTR_0071b024 + -0x8000);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    (**(code **)**(undefined4 **)(PTR_PTR_0071b024 + -0x7ffc))(iVar2);
    *piVar1 = 0;
  }
  **(undefined4 **)(puVar3 + -0x7ff8) = 0;
  return;
}



//==== 0061ce40  ns=Global  size=0x2c
// sig: undefined FUN_0061ce40(void)
// callers(0): 
// callees(0): 

undefined4 FUN_0061ce40(int param_1)

{
  return *(undefined4 *)(param_1 * 0x68 + **(int **)(PTR_PTR_0071b024 + -0x8000) + 0x10);
}



//==== 0061ce6c  ns=Global  size=0x40
// sig: undefined FUN_0061ce6c(void)
// callers(0): 
// callees(0): 

undefined1 FUN_0061ce6c(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0xff;
  iVar1 = param_1 * 0x68 + **(int **)(PTR_PTR_0071b024 + -0x8000);
  if (*(int *)(iVar1 + 0x10) != 0) {
    uVar2 = *(undefined1 *)(iVar1 + 0xb);
  }
  return uVar2;
}



//==== 0061ceac  ns=Global  size=0x4c
// sig: undefined FUN_0061ceac(void)
// callers(4): 0060edc4 FUN_0060edc4; 0060efb4 FUN_0060efb4; 0060f128 FUN_0060f128; 0060f1b0 FUN_0060f1b0
// callees(0): 

void FUN_0061ceac(void)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = **(int **)(PTR_PTR_0071b024 + -0x7ff0) + 0x1f;
  uVar2 = ((int)uVar2 >> 5) + (uint)((int)uVar2 < 0 && (uVar2 & 0x1f) != 0);
  if (0 < (int)uVar2) {
    uVar3 = (ulonglong)uVar2;
    puVar1 = *(undefined4 **)(PTR_PTR_0071b024 + -0x7ff4);
    do {
      *puVar1 = 0xffffffff;
      uVar3 = uVar3 - 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != 0);
  }
  return;
}



//==== 0061cef8  ns=Global  size=0x20
// sig: undefined FUN_0061cef8(void)
// callers(1): 0060b514 FUN_0060b514
// callees(0): 

undefined4 FUN_0061cef8(int param_1)

{
  return *(undefined4 *)(*(int *)(PTR_PTR_0071b024 + -0x7fec) + param_1 * 4);
}



//==== 0061cf18  ns=Global  size=0x20
// sig: undefined FUN_0061cf18(void)
// callers(1): 0060b494 FUN_0060b494
// callees(0): 

undefined4 FUN_0061cf18(int param_1)

{
  return *(undefined4 *)(*(int *)(PTR_PTR_0071b024 + -0x7fe8) + param_1 * 4);
}



//==== 0061cf38  ns=Global  size=0x30
// sig: undefined FUN_0061cf38(void)
// callers(1): 0060c314 FUN_0060c314
// callees(0): 

int FUN_0061cf38(int param_1)

{
  return *(int *)(*(int *)(PTR_PTR_0071b024 + -0x7fe4) + param_1 * 4) -
         *(int *)(*(int *)(PTR_PTR_0071b024 + -0x7fe0) + param_1 * 4);
}



//==== 0061cf68  ns=Global  size=0x20
// sig: undefined FUN_0061cf68(void)
// callers(0): 
// callees(0): 

undefined4 FUN_0061cf68(int param_1)

{
  return *(undefined4 *)(*(int *)(PTR_PTR_0071b024 + -0x7fe4) + param_1 * 4);
}



//==== 0061cf88  ns=Global  size=0x20
// sig: undefined FUN_0061cf88(void)
// callers(1): 0060f1b0 FUN_0060f1b0
// callees(0): 

void FUN_0061cf88(void)

{
  **(int **)(PTR_PTR_0071b024 + -0x7fdc) = **(int **)(PTR_PTR_0071b024 + -0x7fdc) + 1;
  return;
}



//==== 0061cfa8  ns=Global  size=0x28
// sig: undefined FUN_0061cfa8(void)
// callers(2): 0060efb4 FUN_0060efb4; 0060f1b0 FUN_0060f1b0
// callees(0): 

void FUN_0061cfa8(void)

{
  int iVar1;
  
  iVar1 = **(int **)(PTR_PTR_0071b024 + -0x7fdc);
  if (0 < iVar1) {
    **(int **)(PTR_PTR_0071b024 + -0x7fdc) = iVar1 + -1;
  }
  return;
}



//==== 0061cfd0  ns=Global  size=0x20
// sig: undefined FUN_0061cfd0(void)
// callers(1): 0060edc4 FUN_0060edc4
// callees(0): 

void FUN_0061cfd0(void)

{
  **(int **)(PTR_PTR_0071b024 + -0x7fd8) = **(int **)(PTR_PTR_0071b024 + -0x7fd8) + 1;
  return;
}



//==== 0061cff0  ns=Global  size=0x28
// sig: undefined FUN_0061cff0(void)
// callers(1): 0060edc4 FUN_0060edc4
// callees(0): 

void FUN_0061cff0(void)

{
  int iVar1;
  
  iVar1 = **(int **)(PTR_PTR_0071b024 + -0x7fd8);
  if (0 < iVar1) {
    **(int **)(PTR_PTR_0071b024 + -0x7fd8) = iVar1 + -1;
  }
  return;
}



//==== 0061d018  ns=Global  size=0x74
// sig: undefined FUN_0061d018(void)
// callers(1): 0061d850 FUN_0061d850
// callees(0): 

undefined4 FUN_0061d018(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 4) & 0x80000) == 0) {
    iVar1 = *(int *)(param_1 + 0x228);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = *(uint *)(iVar1 + 4);
    while ((uVar2 & 0x80000) == 0) {
      iVar1 = *(int *)(iVar1 + 0x228);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = *(uint *)(iVar1 + 4);
    }
  }
  return 1;
}



//==== 0061d08c  ns=Global  size=0x74
// sig: undefined FUN_0061d08c(void)
// callers(1): 0061d850 FUN_0061d850
// callees(0): 

undefined4 FUN_0061d08c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 4) & 0x100000) == 0) {
    iVar1 = *(int *)(param_1 + 0x228);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = *(uint *)(iVar1 + 4);
    while ((uVar2 & 0x100000) == 0) {
      iVar1 = *(int *)(iVar1 + 0x228);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = *(uint *)(iVar1 + 4);
    }
  }
  return 1;
}



//==== 0061d100  ns=Global  size=0x248
// sig: undefined FUN_0061d100(void)
// callers(1): 0061c994 FUN_0061c994
// callees(0): 

void FUN_0061d100(void)

{
  undefined4 uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  float fVar8;
  undefined *puVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  float afStack_c0 [32];
  longlong local_40;
  
  puVar9 = PTR_PTR_0071b024;
  iVar16 = 0;
  lVar18 = 0x20;
  uVar1 = *(undefined4 *)(PTR_PTR_0071b024 + -0x7fd0);
  do {
    puVar15 = (undefined4 *)(iVar16 + (int)afStack_c0);
    iVar16 = iVar16 + 4;
    *puVar15 = uVar1;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  piVar3 = *(int **)(PTR_PTR_0071b024 + -0x7fc8);
  iVar16 = *piVar3;
  if (iVar16 != 0) {
    fVar2 = *(float *)(PTR_PTR_0071b024 + -0x7fc0);
    iVar4 = *(int *)(PTR_PTR_0071b024 + -0x7fe8);
    iVar5 = *(int *)(PTR_PTR_0071b024 + -0x7fc4);
    do {
      if (((*(uint *)(iVar16 + 0x24) & 1) == 0) &&
         (iVar17 = *(int *)(iVar16 + 4) * 4, *(uint *)(iVar5 + iVar17) < *(uint *)(iVar4 + iVar17)))
      {
        iVar10 = *(int *)(iVar16 + 0x20);
        iVar17 = *(int *)(iVar16 + 0xc);
        if (iVar17 < iVar10) {
          iVar10 = iVar10 - *(int *)(iVar16 + 0x14);
          *(int *)(iVar16 + 0x20) = iVar10;
          if (iVar10 < iVar17) {
LAB_0061d2e4:
            *(int *)(iVar16 + 0x20) = iVar17;
          }
        }
        else if ((iVar10 < iVar17) &&
                (iVar10 = iVar10 + *(int *)(iVar16 + 0x1c), *(int *)(iVar16 + 0x20) = iVar10,
                iVar17 < iVar10)) {
          *(int *)(iVar16 + 0x20) = iVar17;
        }
      }
      else if (*(int *)(iVar16 + 0x20) < 0x10000) {
        iVar17 = 0x10000;
        uVar12 = *(int *)(iVar16 + 0x20) + *(int *)(iVar16 + 0x1c);
        *(uint *)(iVar16 + 0x20) = uVar12;
        if (0x10000 < uVar12) goto LAB_0061d2e4;
      }
      iVar17 = *(int *)(iVar16 + 0x20);
      uVar14 = 0;
      uVar12 = *(uint *)(iVar16 + 8);
      iVar10 = 0;
      local_40 = (longlong)iVar17;
      lVar18 = 0x20;
      fVar8 = (float)(longlong)iVar17 * fVar2;
      do {
        pfVar11 = (float *)(iVar10 + (int)afStack_c0);
        uVar7 = uVar14 & 0x3f;
        uVar14 = uVar14 + 1;
        iVar10 = iVar10 + 4;
        if (((1 << uVar7 & uVar12) != 0) && (fVar8 < *pfVar11)) {
          *pfVar11 = fVar8;
        }
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      if (((*(uint *)(iVar16 + 0x24) & 1) != 0) && (iVar17 == 0x10000)) {
        iVar17 = *piVar3;
        if (iVar16 == *piVar3) {
          *piVar3 = *(int *)(iVar16 + 0x28);
        }
        else {
          do {
            iVar10 = iVar17;
            iVar17 = *(int *)(iVar10 + 0x28);
            if (iVar17 == 0) goto LAB_0061d240;
          } while (iVar16 != iVar17);
          *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)(iVar16 + 0x28);
        }
      }
LAB_0061d240:
      iVar16 = *(int *)(iVar16 + 0x28);
    } while (iVar16 != 0);
  }
  puVar6 = *(uint **)(puVar9 + -0x7fb8);
  uVar14 = 0;
  lVar18 = 0x20;
  uVar12 = *puVar6;
  pfVar11 = afStack_c0;
  pfVar13 = *(float **)(puVar9 + -0x7fd4);
  do {
    uVar7 = uVar14 & 0x3f;
    uVar14 = uVar14 + 1;
    if (*pfVar13 != *pfVar11) {
      uVar12 = uVar12 | 1 << uVar7;
    }
    *pfVar13 = *pfVar11;
    lVar18 = lVar18 + -1;
    pfVar11 = pfVar11 + 1;
    pfVar13 = pfVar13 + 1;
  } while (lVar18 != 0);
  *puVar6 = uVar12;
  return;
}



//==== 0061d348  ns=Global  size=0x40
// sig: undefined FUN_0061d348(void)
// callers(0): 
// callees(0): 

void FUN_0061d348(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  lVar5 = 0x20;
  iVar1 = *(int *)(PTR_PTR_0071b024 + -0x7fb4);
  do {
    puVar2 = (undefined4 *)(iVar4 + iVar1);
    puVar3 = (undefined4 *)(iVar4 + param_1);
    iVar4 = iVar4 + 4;
    *puVar3 = *puVar2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



//==== 0061d388  ns=Global  size=0x18
// sig: undefined FUN_0061d388(void)
// callers(0): 
// callees(0): 

double FUN_0061d388(void)

{
  return (double)**(float **)(PTR_PTR_0071b024 + -0x7fb0);
}



//==== 0061d3a0  ns=Global  size=0x338
// sig: undefined FUN_0061d3a0(void)
// callers(1): 0061fa5c FUN_0061fa5c
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061d3a0(int param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  puVar7 = PTR_PTR_0071b024;
  if ((((param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= param_1)) ||
      (param_2 == (uint *)0x0)) || (param_3 == (uint *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar7 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar7 + -0x7fa0),0);
  }
  iVar9 = param_1 * 0x68 + **(int **)(puVar7 + -0x8000);
  iVar3 = *(int *)(iVar9 + 0x28);
  uVar11 = *(uint *)(iVar9 + 0x38);
  uVar10 = *(uint *)(iVar9 + 0x40);
  if (iVar3 == 0) goto LAB_0061d51c;
  uVar4 = *(uint *)(iVar3 + 300);
  uVar8 = uVar4;
  if (-1 < (int)uVar4) {
    uVar5 = *(uint *)(iVar3 + 0x130);
    uVar8 = uVar5;
    if ((-1 < (int)uVar5) && (uVar8 = uVar11, -1 < (int)uVar11)) {
      uVar12 = (ulonglong)uVar5 + (ulonglong)*(uint *)(iVar3 + 0x134) +
               (ulonglong)uVar11 + (ulonglong)*(uint *)(iVar3 + 0x138);
      if ((*(uint *)(iVar3 + 4) & 0x10000) != 0) {
        fVar6 = *(float *)(iVar3 + 0x120) * *(float *)(iVar3 + 0x1d0);
        iVar9 = *(char *)(iVar9 + 10) * 4;
        fVar1 = *(float *)(*(int *)(puVar7 + -0x7f9c) + iVar9);
        if (fVar6 < fVar1) {
          fVar2 = *(float *)(*(int *)(puVar7 + -0x7f98) + iVar9);
          if (fVar6 <= fVar2) {
            uVar12 = 0;
          }
          else if ((uVar12 & 0xffffffff) < 0xb5) {
            uVar12 = (ulonglong)((float)(uVar12 & 0xffffffff) * ((fVar6 - fVar2) / (fVar1 - fVar2)))
            ;
          }
          else {
            uVar12 = (ulonglong)
                     (*(float *)(puVar7 + -0x7f94) -
                     (float)(0x168 - uVar12 & 0xffffffff) * ((fVar6 - fVar2) / (fVar1 - fVar2)));
          }
        }
      }
      uVar8 = (int)(uVar12 + uVar4) + (int)((uVar12 + uVar4 << 0x20) / 0x16800000000) * -0x168;
    }
  }
  uVar11 = uVar8;
  if ((*(uint *)(*(int *)(puVar7 + -0x7f8c) + *(char *)(iVar3 + 0x10) * 4) & 8) != 0) {
    if ((int)uVar11 < 0) {
      if (uVar11 == 0x80000001) {
        uVar11 = 0x80000002;
      }
      else {
        uVar4 = 0x80000001;
        if (uVar11 == 0x80000002) {
LAB_0061d664:
          uVar11 = uVar4;
        }
        else if (uVar11 == 0x80000003) {
          uVar11 = 0x80000004;
        }
        else {
          uVar4 = 0x80000003;
          if (uVar11 == 0x80000004) goto LAB_0061d664;
          if (uVar11 == 0x80000007) {
            uVar11 = 0x80000008;
          }
          else {
            uVar4 = 0x80000007;
            if (uVar11 == 0x80000008) goto LAB_0061d664;
            if (uVar11 == 0x80000009) {
              uVar11 = 0x8000000a;
            }
            else {
              uVar4 = 0x80000009;
              if (uVar11 == 0x8000000a) goto LAB_0061d664;
            }
          }
        }
      }
    }
    else {
      uVar11 = 0x168 - uVar11;
    }
  }
  uVar10 = uVar10 + *(int *)(iVar3 + 0x13c);
  if ((int)uVar10 < 0) {
    uVar10 = 0;
  }
  else if (0x168 < uVar10) {
    uVar10 = 0x168;
  }
LAB_0061d51c:
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar11;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar10;
  }
  return;
}



//==== 0061d6d8  ns=Global  size=0x178
// sig: undefined FUN_0061d6d8(void)
// callers(2): 0061d850 FUN_0061d850; 006218e0 FUN_006218e0
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp' | 00702450: '?fff' (raw)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0061d6d8(double param_1,double param_2,int param_3,char param_4)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b024;
  if (((((param_3 == 0) || (param_4 < '\0')) ||
       (param_1 < (double)*(float *)(PTR_PTR_0071b024 + -0x7f78))) ||
      (((double)*(float *)(PTR_PTR_0071b024 + -0x7fd0) < param_1 ||
       (param_2 < (double)*(float *)(PTR_PTR_0071b024 + -0x7f78))))) ||
     ((double)*(float *)(PTR_PTR_0071b024 + -0x7fd0) < param_2)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
  }
  iVar3 = (int)param_4;
  if ((iVar3 < 0x7e) && (param_2 != (double)*(float *)(puVar2 + -0x7f78))) {
    fVar1 = *(float *)(param_3 + 0x11c) * *(float *)(param_3 + 0x120) * *(float *)(param_3 + 0x128)
            * (float)(param_1 *
                     (double)*(float *)(*(int *)(puVar2 + -0x7fb4) + *(char *)(param_3 + 0x10) * 4))
    ;
    if (fVar1 < *(float *)(puVar2 + -0x7f88)) {
      iVar3 = (int)(char)(param_4 -
                         (char)(int)((float)(param_2 *
                                            (double)(fVar1 / *(float *)(puVar2 + -0x7f80) +
                                                    *(float *)(puVar2 + -0x7f88))) *
                                    (float)(longlong)iVar3));
    }
  }
  return iVar3;
}



//==== 0061d850  ns=Global  size=0x264
// sig: undefined FUN_0061d850(void)
// callers(1): 0061fa5c FUN_0061fa5c
// callees(4): 0061948c 989snd::snd_Printf; 0061d018 FUN_0061d018; 0061d08c FUN_0061d08c; 0061d6d8 FUN_0061d6d8
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

double FUN_0061d850(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined1 uVar9;
  int iVar8;
  uint *puVar10;
  longlong lVar11;
  double dVar12;
  
  puVar6 = PTR_PTR_0071b024;
  if ((param_2 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= param_2)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    param_1 = (double)*(float *)(puVar6 + -0x7f78);
    if (**(char **)(puVar6 + -0x7fa4) != '\0') {
      return param_1;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar6 + -0x7fa0),0);
    iVar8 = **(int **)(puVar6 + -0x7fd8);
  }
  else {
    iVar8 = **(int **)(PTR_PTR_0071b024 + -0x7fd8);
  }
  if (iVar8 == 0) {
    piVar2 = *(int **)(puVar6 + -0x8000);
    iVar8 = **(int **)(puVar6 + -0x7fdc);
  }
  else {
    piVar2 = *(int **)(puVar6 + -0x8000);
    iVar8 = FUN_0061d08c(param_1,*(undefined4 *)(param_2 * 0x68 + *piVar2 + 0x28));
    param_1 = (double)*(float *)(puVar6 + -0x7f78);
    if (iVar8 != 0) {
      return param_1;
    }
    iVar8 = **(int **)(puVar6 + -0x7fdc);
  }
  if (iVar8 != 0) {
    iVar8 = FUN_0061d018(param_1,*(undefined4 *)(param_2 * 0x68 + *piVar2 + 0x28));
    if (iVar8 == 0) {
      return (double)*(float *)(puVar6 + -0x7f78);
    }
  }
  iVar8 = param_2 * 0x68 + *piVar2;
  if (*(int *)(iVar8 + 0x28) != 0) {
    uVar9 = FUN_0061d6d8((double)*(float *)(iVar8 + 0x30),(double)*(float *)(iVar8 + 0xc),
                         *(int *)(iVar8 + 0x28),*(undefined1 *)(iVar8 + 8));
    *(undefined1 *)(iVar8 + 9) = uVar9;
  }
  iVar7 = param_2 * 0x68 + *piVar2;
  lVar11 = 0x20;
  iVar8 = *(char *)(iVar7 + 10) * 4;
  puVar10 = *(uint **)(puVar6 + -0x7f8c);
  do {
    if ((*puVar10 & 0x10) != 0) {
      bVar5 = true;
      goto LAB_0061d93c;
    }
    lVar11 = lVar11 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar11 != 0);
  bVar5 = false;
LAB_0061d93c:
  bVar4 = (*(uint *)(*(int *)(puVar6 + -0x7f8c) + iVar8) & 0x20) == 0;
  if ((!bVar4) || (fVar1 = *(float *)(*(int *)(puVar6 + -0x7fb4) + iVar8), bVar5)) {
    fVar1 = *(float *)(puVar6 + -0x7f78);
  }
  if (((*(uint *)(*(int *)(puVar6 + -0x7f8c) + iVar8) & 0x10) != 0) && (bVar4)) {
    fVar1 = *(float *)(*(int *)(puVar6 + -0x7fb4) + iVar8);
  }
  iVar3 = *(int *)(iVar7 + 0x28);
  dVar12 = (double)(fVar1 * *(float *)(iVar7 + 0x30) *
                    *(float *)(*(int *)(puVar6 + -0x7fd4) + iVar8) *
                    *(float *)(*(int *)(puVar6 + -0x7f70) + iVar8) * **(float **)(puVar6 + -0x7fb0)
                   * **(float **)(puVar6 + -0x7f6c));
  if (iVar3 != 0) {
    dVar12 = (double)(float)(dVar12 * (double)(*(float *)(iVar3 + 0x11c) * *(float *)(iVar3 + 0x120)
                                               * *(float *)(iVar3 + 0x124) *
                                              *(float *)(iVar3 + 0x128)));
  }
  return dVar12;
}



//==== 0061dab4  ns=Global  size=0xc0
// sig: undefined FUN_0061dab4(void)
// callers(1): 006199fc FUN_006199fc
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

double FUN_0061dab4(uint param_1)

{
  float fVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 < 0x21) {
    fVar1 = *(float *)(PTR_PTR_0071b024 + -0x7f78);
  }
  else {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return (double)*(float *)(puVar2 + -0x7f78);
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
    fVar1 = *(float *)(puVar2 + -0x7f78);
  }
  if (param_1 != 0x20) {
    if ((int)param_1 < 0x1f) {
      fVar1 = *(float *)(*(int *)(puVar2 + -0x7fd4) + param_1 * 4);
    }
    return (double)fVar1;
  }
  return (double)*(float *)(puVar2 + -0x7fd0);
}



//==== 0061db74  ns=Global  size=0xc4
// sig: undefined FUN_0061db74(void)
// callers(2): 0060b7e0 FUN_0060b7e0; 006199fc FUN_006199fc
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

double FUN_0061db74(uint param_1)

{
  float fVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 < 0x21) {
    fVar1 = *(float *)(PTR_PTR_0071b024 + -0x7f78);
  }
  else {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return (double)*(float *)(puVar2 + -0x7f78);
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
    fVar1 = *(float *)(puVar2 + -0x7f78);
  }
  if (param_1 != 0x20) {
    if ((int)param_1 < 0x1f) {
      fVar1 = *(float *)(*(int *)(puVar2 + -0x7fb4) + param_1 * 4);
    }
    return (double)fVar1;
  }
  return (double)**(float **)(puVar2 + -0x7fb0);
}



//==== 0061dc38  ns=Global  size=0x210
// sig: undefined FUN_0061dc38(void)
// callers(2): 00620b54 FUN_00620b54; 00622094 989snd::snd_InitVoiceAllocator
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061dc38(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined *puVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  
  puVar16 = PTR_PTR_0071b024;
  if (((int)param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= (int)param_1)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar16 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar16 + -0x7fa0),0);
  }
  iVar17 = ((int)param_1 >> 5) + (uint)((int)param_1 < 0 && (param_1 & 0x1f) != 0);
  iVar2 = *(int *)(puVar16 + -0x7f68);
  iVar3 = *(int *)(puVar16 + -0x7f64);
  iVar15 = iVar17 * 4;
  iVar4 = *(int *)(puVar16 + -0x7f60);
  uVar1 = *(undefined4 *)(puVar16 + -0x7fd0);
  uVar14 = 1 << (param_1 + iVar17 * -0x20 & 0x3f);
  uVar18 = ~uVar14;
  puVar19 = (undefined4 *)(param_1 * 0x68 + **(int **)(puVar16 + -0x8000));
  puVar19[0x19] = 0;
  *(undefined1 *)((int)puVar19 + 10) = 0;
  puVar19[4] = 0;
  puVar19[6] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[0xe] = 0;
  puVar19[0x10] = 0;
  *(undefined1 *)((int)puVar19 + 0xb) = 0xff;
  puVar19[7] = 0xffffffff;
  *(undefined1 *)(puVar19 + 2) = 0xff;
  *(undefined1 *)((int)puVar19 + 9) = 0xff;
  uVar8 = *(uint *)(iVar2 + iVar15);
  uVar9 = *(uint *)(iVar3 + iVar15);
  uVar10 = *(uint *)(iVar4 + iVar15);
  puVar19[0x16] = uVar1;
  puVar19[0x14] = uVar1;
  *(uint *)(iVar3 + iVar15) = uVar9 & uVar18;
  *(uint *)(iVar2 + iVar15) = uVar8 | uVar14;
  puVar19[0x12] = 0;
  *puVar19 = 0;
  puVar19[3] = 0;
  puVar19[10] = 0;
  puVar19[0xb] = 0;
  puVar19[0xc] = 0;
  puVar19[0x17] = 0;
  puVar19[0x15] = uVar1;
  puVar19[0x18] = 0;
  *(uint *)(iVar4 + iVar15) = uVar18 & uVar10;
  iVar2 = *(int *)(puVar16 + -0x7f44);
  iVar3 = *(int *)(puVar16 + -0x7f58);
  iVar4 = *(int *)(puVar16 + -0x7f54);
  iVar17 = *(int *)(puVar16 + -0x7f50);
  iVar5 = *(int *)(puVar16 + -0x7ff4);
  iVar6 = *(int *)(puVar16 + -0x7f4c);
  iVar7 = *(int *)(puVar16 + -0x7f48);
  uVar8 = *(uint *)(iVar3 + iVar15);
  uVar9 = *(uint *)(iVar4 + iVar15);
  uVar10 = *(uint *)(iVar17 + iVar15);
  uVar14 = *(uint *)(iVar5 + iVar15);
  uVar11 = *(uint *)(iVar6 + iVar15);
  uVar12 = *(uint *)(iVar7 + iVar15);
  uVar13 = *(uint *)(iVar2 + iVar15);
  *(uint *)(*(int *)(puVar16 + -0x7f5c) + iVar15) =
       uVar18 & *(uint *)(*(int *)(puVar16 + -0x7f5c) + iVar15);
  *(uint *)(iVar2 + iVar15) = uVar18 & uVar13;
  *(uint *)(iVar3 + iVar15) = uVar18 & uVar8;
  *(uint *)(iVar4 + iVar15) = uVar18 & uVar9;
  *(uint *)(iVar17 + iVar15) = uVar18 & uVar10;
  *(uint *)(iVar5 + iVar15) = uVar18 & uVar14;
  *(uint *)(iVar6 + iVar15) = uVar18 & uVar11;
  *(uint *)(iVar7 + iVar15) = uVar18 & uVar12;
  return;
}



//==== 0061de48  ns=Global  size=0x600
// sig: undefined FUN_0061de48(void)
// callers(1): 0061c994 FUN_0061c994
// callees(8): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock; 00629bb8 989snd::snd_SynthUnpauseVoice; 00629c38 989snd::snd_SynthPauseVoice; 00629eb0 989snd::snd_SynthKeyOffVoice; 00629f78 989snd::snd_SynthSilenceVoice; 0062a9b4 989snd::snd_SynthKeyOnVoice
// strings: 0066c4b8: '%s(%d) : Invalid voice channel pending pause states.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4f0: '%s(%d) : Invalid voice channel pending key states.\n' | 0066c528: '%s(%d) : Invalid voice channel.\n'

void FUN_0061de48(void)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined *puVar6;
  uint uVar8;
  ulonglong uVar7;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  char *pcVar12;
  uint *puVar13;
  uint *puVar14;
  uint *unaff_r26;
  uint *puVar15;
  uint *unaff_r27;
  uint *puVar16;
  uint *unaff_r28;
  uint *puVar17;
  char *pcVar18;
  uint *local_b0;
  uint *local_ac;
  uint *local_a8;
  uint *local_a4;
  uint *local_a0;
  uint *local_9c;
  uint *local_98;
  int local_94;
  
  puVar6 = PTR_PTR_0071b024;
  989snd::snd_SynthLock();
  piVar2 = *(int **)(puVar6 + -0x7ff0);
  if (*piVar2 < 1) {
LAB_0061e324:
    989snd::snd_SynthUnlock();
    return;
  }
  pcVar18 = (char *)0x0;
  local_98 = *(uint **)(puVar6 + -0x7f54);
  uVar10 = 0;
  puVar13 = *(uint **)(puVar6 + -0x7f50);
  pcVar12 = *(char **)(puVar6 + -0x7fa4);
  puVar11 = *(uint **)(puVar6 + -0x7fa0);
  local_a0 = *(uint **)(puVar6 + -0x7f60);
  puVar14 = *(uint **)(puVar6 + -0x7f68);
  local_a4 = *(uint **)(puVar6 + -0x7f64);
LAB_0061df44:
  do {
    puVar15 = local_a4;
    puVar16 = puVar14;
    puVar17 = local_a0;
    local_a4 = puVar15;
    local_a0 = puVar17;
    puVar14 = puVar16;
    if ((*(uint *)(uVar10 + (int)local_98) & *(uint *)(uVar10 + (int)puVar13)) != 0) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f40));
      989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fac));
      if (*pcVar12 != '\0') {
        return;
      }
      uVar7 = (ulonglong)*(byte *)puVar11;
      if (*(byte *)puVar11 != 0) goto LAB_0061dfa8;
    }
    if ((*(uint *)(uVar10 + (int)puVar16) & *(uint *)(uVar10 + (int)puVar15) &
        *(uint *)(uVar10 + (int)puVar17)) != 0) goto LAB_0061dfac;
    iVar9 = *piVar2;
    pcVar18 = pcVar18 + 1;
    uVar10 = uVar10 + 4;
    uVar8 = iVar9 + 0x1f;
    unaff_r28 = puVar17;
    unaff_r27 = puVar16;
    unaff_r26 = puVar15;
  } while ((int)pcVar18 < (int)(((int)uVar8 >> 5) + (uint)((int)uVar8 < 0 && (uVar8 & 0x1f) != 0)));
LAB_0061e00c:
  if (0 < iVar9) {
    local_ac = *(uint **)(puVar6 + -0x7f58);
    pcVar12 = (char *)0x0;
    local_b0 = *(uint **)(puVar6 + -0x7f5c);
    local_94 = 0;
    puVar14 = (uint *)0x20;
    local_a8 = (uint *)0x0;
    local_a4 = puVar15;
    local_a0 = puVar16;
    local_9c = puVar13;
    puVar11 = puVar17;
    do {
      if ((((*local_98 != 0) || (*local_9c != 0)) && ((int)pcVar12 < (int)puVar14)) &&
         ((int)pcVar12 < *piVar2)) {
        piVar3 = *(int **)(puVar6 + -0x8000);
        pcVar18 = pcVar12;
        puVar13 = local_a8;
        do {
          uVar10 = 1 << ((uint)(pcVar18 +
                               (((int)pcVar18 >> 5) +
                               (uint)((int)pcVar18 < 0 && ((uint)pcVar18 & 0x1f) != 0)) * -0x20) &
                        0x3f);
          if ((uVar10 & *local_98) == 0) {
            if ((uVar10 & *local_9c) != 0) {
              iVar9 = *piVar3;
              989snd::snd_SynthUnpauseVoice
                        ((double)*(float *)((int)puVar13 + iVar9 + 0x4c),
                         *(undefined4 *)((int)puVar13 + iVar9 + 0x60));
            }
          }
          else {
            989snd::snd_SynthPauseVoice(*(undefined4 *)((int)puVar13 + *piVar3 + 0x60));
          }
          if ((int)puVar14 <= (int)(pcVar18 + 1)) break;
          pcVar18 = pcVar18 + 1;
          puVar13 = puVar13 + 0x1a;
        } while ((int)pcVar18 < *piVar2);
      }
      if ((((*local_a0 != 0) || (*local_a4 != 0)) || (*puVar11 != 0)) &&
         (((int)pcVar12 < (int)puVar14 && ((int)pcVar12 < *piVar2)))) {
        puVar13 = *(uint **)(puVar6 + -0x7fa8);
        pcVar4 = *(char **)(puVar6 + -0x7fa4);
        pbVar5 = *(byte **)(puVar6 + -0x7fa0);
        pcVar18 = pcVar12;
        unaff_r28 = local_a8;
        do {
          uVar10 = 1 << ((uint)(pcVar18 +
                               (((int)pcVar18 >> 5) +
                               (uint)((int)pcVar18 < 0 && ((uint)pcVar18 & 0x1f) != 0)) * -0x20) &
                        0x3f);
          unaff_r27 = local_b0;
          unaff_r26 = local_ac;
          if ((uVar10 & *local_a4) == 0) {
            if ((uVar10 & *local_a0) == 0) {
              if ((uVar10 & *puVar11) != 0) {
                piVar3 = *(int **)(puVar6 + -0x8000);
                if (*(int *)((int)unaff_r28 + *piVar3 + 0x10) == 0) {
                  989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f38));
                  989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fac));
                  if (*pcVar4 != '\0') {
                    return;
                  }
                  bVar1 = *pbVar5;
                  uVar7 = (ulonglong)bVar1;
                  if (bVar1 != 0) goto LAB_0061dfa8;
                }
                989snd::snd_SynthKeyOffVoice(*(undefined4 *)((int)unaff_r28 + *piVar3 + 0x60));
                uVar8 = *local_ac;
                *local_b0 = *local_b0 & ~uVar10;
                *local_ac = uVar10 | uVar8;
              }
            }
            else {
              iVar9 = *(int *)((int)unaff_r28 + **(int **)(puVar6 + -0x8000) + 0x60);
              if (iVar9 != 0) {
                989snd::snd_SynthSilenceVoice(iVar9);
              }
            }
          }
          else {
            piVar3 = *(int **)(puVar6 + -0x8000);
            if (*(int *)((int)unaff_r28 + *piVar3 + 0x10) == 0) {
              989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f38));
              989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fac));
              if (*pcVar4 != '\0') {
                return;
              }
              bVar1 = *pbVar5;
              uVar7 = (ulonglong)bVar1;
              if (bVar1 != 0) goto LAB_0061dfa8;
            }
            989snd::snd_SynthKeyOnVoice(*(undefined4 *)((int)unaff_r28 + *piVar3 + 0x60));
            uVar8 = *local_b0;
            *local_ac = *local_ac & ~uVar10;
            *local_b0 = uVar10 | uVar8;
          }
          if ((int)puVar14 <= (int)(pcVar18 + 1)) break;
          pcVar18 = pcVar18 + 1;
          unaff_r28 = unaff_r28 + 0x1a;
        } while ((int)pcVar18 < *piVar2);
      }
      puVar14 = puVar14 + 8;
      uVar10 = *piVar2 + 0x1f;
      local_94 = local_94 + 1;
      pcVar12 = pcVar12 + 0x20;
      *local_9c = 0;
      local_9c = local_9c + 1;
      local_a8 = local_a8 + 0x340;
      local_ac = local_ac + 1;
      local_b0 = local_b0 + 1;
      *local_98 = 0;
      *local_a0 = 0;
      *local_a4 = 0;
      *puVar11 = 0;
      local_a4 = local_a4 + 1;
      local_a0 = local_a0 + 1;
      local_98 = local_98 + 1;
      puVar11 = puVar11 + 1;
    } while (local_94 < (int)(((int)uVar10 >> 5) + (uint)((int)uVar10 < 0 && (uVar10 & 0x1f) != 0)))
    ;
  }
  goto LAB_0061e324;
LAB_0061dfa8:
  do {
    puVar15 = unaff_r26;
    puVar16 = unaff_r27;
    trapWord(0x1f,uVar7,uVar7);
    puVar17 = unaff_r28;
LAB_0061dfac:
    989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f3c));
    989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fac));
    if (*pcVar12 != '\0') {
      return;
    }
    uVar7 = (ulonglong)*(byte *)puVar11;
    unaff_r28 = puVar17;
    unaff_r27 = puVar16;
    unaff_r26 = puVar15;
  } while (*(byte *)puVar11 != 0);
  iVar9 = *piVar2;
  pcVar18 = pcVar18 + 1;
  uVar10 = uVar10 + 4;
  uVar8 = iVar9 + 0x1f;
  if ((int)pcVar18 < (int)(((int)uVar8 >> 5) + (uint)((int)uVar8 < 0 && (uVar8 & 0x1f) != 0)))
  goto LAB_0061df44;
  goto LAB_0061e00c;
}



//==== 0061e448  ns=Global  size=0x340
// sig: undefined FUN_0061e448(void)
// callers(1): 0060b594 989snd::snd_SetMasterVolumeDucker
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0061e448(uint param_1,uint *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  puVar9 = PTR_PTR_0071b024;
  if (0x1f < param_1) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar9 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar9 + -0x7fa0),0);
  }
  989snd::snd_SynthLock();
  if (param_2 == (uint *)0x0) {
    puVar4 = (uint *)**(int **)(puVar9 + -0x7fc8);
    if (puVar4 != (uint *)0x0) {
      uVar14 = *puVar4;
      while (uVar14 != param_1) {
        puVar4 = (uint *)puVar4[10];
        if (puVar4 == (uint *)0x0) goto LAB_0061e6a8;
        uVar14 = *puVar4;
      }
      puVar4[9] = puVar4[9] | 1;
    }
  }
  else {
    puVar4 = *(uint **)(puVar9 + -0x7f34);
    if (*puVar4 != 0) {
      uVar14 = *param_2;
      if (0x1e < uVar14) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar9 + -0x7fac));
        if (**(char **)(puVar9 + -0x7fa4) != '\0') {
          return;
        }
        trapWord(0x18,(ulonglong)**(byte **)(puVar9 + -0x7fa0),0);
        uVar14 = *param_2;
      }
      piVar5 = *(int **)(puVar9 + -0x7fc8);
      puVar6 = (uint *)*piVar5;
      bVar1 = puVar6 == (uint *)0x0;
      if (bVar1) {
LAB_0061e51c:
        iVar11 = *(int *)(puVar9 + -0x7f30);
        iVar15 = *(int *)(puVar9 + -0x7f30);
        *(uint **)(param_1 * 0x2c + iVar11 + 0x28) = puVar6;
        *piVar5 = param_1 * 0x2c + iVar15;
      }
      else {
        uVar7 = *puVar6;
        puVar8 = puVar6;
        while (uVar7 != param_1) {
          puVar8 = (uint *)puVar8[10];
          bVar1 = puVar8 == (uint *)0x0;
          if (bVar1) goto LAB_0061e51c;
          uVar7 = *puVar8;
        }
        iVar11 = *(int *)(puVar9 + -0x7f30);
      }
      iVar12 = param_1 * 0x2c;
      fVar2 = (float)param_2[2];
      fVar3 = *(float *)(puVar9 + -0x7f78);
      iVar15 = 0;
      *(uint *)(iVar12 + iVar11 + 4) = uVar14;
      *(uint *)(iVar12 + iVar11 + 8) = param_2[1];
      if ((fVar3 <= fVar2) && (iVar15 = 0x10000, fVar2 <= *(float *)(puVar9 + -0x7fd0))) {
        iVar15 = (int)(fVar2 * *(float *)(puVar9 + -0x7f2c));
      }
      fVar2 = (float)param_2[3];
      fVar3 = *(float *)(puVar9 + -0x7f78);
      iVar10 = 0;
      *(int *)(iVar12 + iVar11 + 0xc) = iVar15;
      if ((fVar3 <= fVar2) && (iVar10 = 0xa0000, fVar2 <= *(float *)(puVar9 + -0x7f24))) {
        iVar10 = (int)(fVar2 * *(float *)(puVar9 + -0x7f2c));
      }
      fVar2 = (float)param_2[4];
      fVar3 = *(float *)(puVar9 + -0x7f78);
      iVar15 = 0;
      *(int *)(iVar12 + iVar11 + 0x10) = iVar10;
      if ((fVar3 <= fVar2) && (iVar15 = 0xa0000, fVar2 <= *(float *)(puVar9 + -0x7f24))) {
        iVar15 = (int)(fVar2 * *(float *)(puVar9 + -0x7f2c));
      }
      iVar10 = iVar12 + 0x10 + iVar11;
      *(int *)(iVar10 + 8) = iVar15;
      *(undefined4 *)(iVar12 + iVar11 + 0x24) = 0;
      if (bVar1) {
        *(undefined4 *)(iVar10 + 0x10) = 0x10000;
      }
      iVar13 = (int)(0xf0 / (ulonglong)*puVar4);
      iVar15 = iVar13 * *(int *)(iVar12 + iVar11 + 0x10) >> 0x10;
      if (iVar15 == 0) {
        iVar15 = 1;
      }
      iVar11 = 0x10000 - *(int *)(iVar12 + iVar11 + 0xc);
      iVar15 = iVar11 / iVar15;
      if (iVar15 == 0) {
        iVar15 = 1;
      }
      *(int *)(iVar10 + 4) = iVar15;
      iVar15 = iVar13 * *(int *)(iVar10 + 8) >> 0x10;
      if (iVar15 == 0) {
        iVar15 = 1;
      }
      iVar11 = iVar11 / iVar15;
      if (iVar11 == 0) {
        iVar11 = 1;
      }
      *(int *)(iVar10 + 0xc) = iVar11;
    }
  }
LAB_0061e6a8:
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061e788  ns=Global  size=0xcc
// sig: undefined FUN_0061e788(void)
// callers(1): 0060bd88 FUN_0060bd88
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061e788(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
  }
  989snd::snd_SynthLock();
  uVar5 = 0;
  lVar6 = 0x20;
  puVar4 = *(uint **)(puVar2 + -0x7f8c);
  do {
    uVar1 = uVar5 & 0x3f;
    uVar5 = uVar5 + 1;
    if ((1 << uVar1 & param_1) != 0) {
      uVar3 = ((ulonglong)*puVar4 & 0x1f) << 0x1a | (ulonglong)(*puVar4 >> 6);
      *puVar4 = (uint)(uVar3 << 6) | (uint)uVar3 >> 0x1a;
    }
    lVar6 = lVar6 + -1;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
  **(undefined4 **)(puVar2 + -0x7fb8) = 0xffffffff;
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061e854  ns=Global  size=0xc8
// sig: undefined FUN_0061e854(void)
// callers(1): 0060bd88 FUN_0060bd88
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061e854(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
  }
  989snd::snd_SynthLock();
  uVar4 = 0;
  lVar5 = 0x20;
  puVar3 = *(uint **)(puVar2 + -0x7f8c);
  do {
    uVar1 = uVar4 & 0x3f;
    uVar4 = uVar4 + 1;
    if ((1 << uVar1 & param_1) != 0) {
      *puVar3 = *puVar3 | 0x20;
    }
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 1;
  } while (lVar5 != 0);
  **(undefined4 **)(puVar2 + -0x7fb8) = 0xffffffff;
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061e91c  ns=Global  size=0xcc
// sig: undefined FUN_0061e91c(void)
// callers(1): 0060be34 FUN_0060be34
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061e91c(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
  }
  989snd::snd_SynthLock();
  uVar5 = 0;
  lVar6 = 0x20;
  puVar4 = *(uint **)(puVar2 + -0x7f8c);
  do {
    uVar1 = uVar5 & 0x3f;
    uVar5 = uVar5 + 1;
    if ((1 << uVar1 & param_1) != 0) {
      uVar3 = ((ulonglong)*puVar4 & 0xf) << 0x1b | (ulonglong)(*puVar4 >> 5);
      *puVar4 = (uint)(uVar3 << 5) | (uint)uVar3 >> 0x1b;
    }
    lVar6 = lVar6 + -1;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
  **(undefined4 **)(puVar2 + -0x7fb8) = 0xffffffff;
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061e9e8  ns=Global  size=0xc8
// sig: undefined FUN_0061e9e8(void)
// callers(1): 0060be34 FUN_0060be34
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061e9e8(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
  }
  989snd::snd_SynthLock();
  uVar4 = 0;
  lVar5 = 0x20;
  puVar3 = *(uint **)(puVar2 + -0x7f8c);
  do {
    uVar1 = uVar4 & 0x3f;
    uVar4 = uVar4 + 1;
    if ((1 << uVar1 & param_1) != 0) {
      *puVar3 = *puVar3 | 0x10;
    }
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 1;
  } while (lVar5 != 0);
  **(undefined4 **)(puVar2 + -0x7fb8) = 0xffffffff;
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061eab0  ns=Global  size=0xc0
// sig: undefined FUN_0061eab0(void)
// callers(1): 0060bee0 FUN_0060bee0
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061eab0(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
  }
  989snd::snd_SynthLock();
  uVar5 = 0;
  lVar6 = 0x20;
  puVar4 = *(uint **)(puVar2 + -0x7f8c);
  do {
    uVar1 = uVar5 & 0x3f;
    uVar5 = uVar5 + 1;
    if ((1 << uVar1 & param_1) != 0) {
      uVar3 = ((ulonglong)*puVar4 & 1) << 0x1e | (ulonglong)(*puVar4 >> 2);
      *puVar4 = (uint)(uVar3 << 2) | (uint)uVar3 >> 0x1e;
    }
    lVar6 = lVar6 + -1;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061eb70  ns=Global  size=0xbc
// sig: undefined FUN_0061eb70(void)
// callers(1): 0060bfd8 FUN_0060bfd8
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061eb70(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  
  puVar2 = PTR_PTR_0071b024;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
  }
  989snd::snd_SynthLock();
  uVar4 = 0;
  lVar5 = 0x20;
  puVar3 = *(uint **)(puVar2 + -0x7f8c);
  do {
    uVar1 = uVar4 & 0x3f;
    uVar4 = uVar4 + 1;
    if ((1 << uVar1 & param_1) != 0) {
      *puVar3 = *puVar3 | 2;
    }
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 1;
  } while (lVar5 != 0);
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061ec2c  ns=Global  size=0xb0
// sig: undefined FUN_0061ec2c(void)
// callers(1): 0060b8a0 FUN_0060b8a0
// callees(2): 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_0061ec2c(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  longlong lVar6;
  
  puVar2 = PTR_PTR_0071b024;
  989snd::snd_SynthLock();
  puVar5 = *(uint **)(puVar2 + -0x7f8c);
  uVar3 = 0;
  lVar6 = 0x20;
  do {
    if ((1 << (uVar3 & 0x3f) & param_1) == 0) {
      uVar1 = *puVar5;
      uVar4 = ((ulonglong)uVar1 & 3) << 0x1d | (ulonglong)(uVar1 >> 3);
      if ((uVar1 & 4) != 0) {
        *puVar5 = (uint)(uVar4 << 3) | (uint)uVar4 >> 0x1d;
      }
    }
    else {
      *puVar5 = *puVar5 | 4;
    }
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061ecdc  ns=Global  size=0xb0
// sig: undefined FUN_0061ecdc(void)
// callers(1): 0060b85c FUN_0060b85c
// callees(2): 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_0061ecdc(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  longlong lVar6;
  
  puVar2 = PTR_PTR_0071b024;
  989snd::snd_SynthLock();
  puVar5 = *(uint **)(puVar2 + -0x7f8c);
  uVar3 = 0;
  lVar6 = 0x20;
  do {
    if ((1 << (uVar3 & 0x3f) & param_1) == 0) {
      uVar1 = *puVar5;
      uVar4 = ((ulonglong)uVar1 & 7) << 0x1c | (ulonglong)(uVar1 >> 4);
      if ((uVar1 & 8) != 0) {
        *puVar5 = (uint)(uVar4 << 4) | (uint)uVar4 >> 0x1c;
      }
    }
    else {
      *puVar5 = *puVar5 | 8;
    }
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061ed8c  ns=Global  size=0xac
// sig: undefined FUN_0061ed8c(void)
// callers(1): 0060b8e4 FUN_0060b8e4
// callees(2): 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_0061ed8c(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  
  puVar1 = PTR_PTR_0071b024;
  989snd::snd_SynthLock();
  puVar3 = *(uint **)(puVar1 + -0x7f8c);
  uVar2 = 0;
  lVar4 = 0x20;
  do {
    if ((1 << (uVar2 & 0x3f) & param_1) == 0) {
      if ((*puVar3 & 1) != 0) {
        *puVar3 = *puVar3 & 0xfffffffe;
      }
    }
    else {
      *puVar3 = *puVar3 | 1;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061ee38  ns=989snd  size=0xf0
// sig: undefined snd_UpdateGroupOrMasterVolume(void)
// callers(1): 0060b6b4 989snd::snd_SetMasterVolume
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void 989snd::snd_UpdateGroupOrMasterVolume(double param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  float *pfVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071b024;
  if (((0x20 < param_2) || (param_1 < (double)*(float *)(PTR_PTR_0071b024 + -0x7f78))) ||
     ((double)*(float *)(PTR_PTR_0071b024 + -0x7fd0) < param_1)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar4 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7fa0),0);
  }
  snd_SynthLock();
  if (param_2 == 0x20) {
    pfVar3 = *(float **)(puVar4 + -0x7fb0);
    **(undefined4 **)(puVar4 + -0x7fb8) = 0xffffffff;
    *pfVar3 = (float)param_1;
  }
  else if ((int)param_2 < 0x1f) {
    puVar1 = *(uint **)(puVar4 + -0x7fb8);
    uVar2 = *puVar1;
    *(float *)(*(int *)(puVar4 + -0x7fb4) + param_2 * 4) = (float)param_1;
    *puVar1 = 1 << (param_2 & 0x3f) | uVar2;
  }
  snd_SynthUnlock();
  return;
}



//==== 0061ef28  ns=Global  size=0x60
// sig: undefined FUN_0061ef28(void)
// callers(2): 0060b928 FUN_0060b928; 006154a8 FUN_006154a8
// callees(2): 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_0061ef28(ulonglong param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b024;
  989snd::snd_SynthLock();
  *(undefined4 *)(*(int *)(puVar1 + -0x7f1c) + (int)((param_1 & 0xffffffff) << 2)) = param_2;
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061ef88  ns=Global  size=0x74
// sig: undefined FUN_0061ef88(void)
// callers(1): 0060b9cc 989snd::snd_SetGroupVoiceRange
// callees(2): 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_0061ef88(ulonglong param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b024;
  iVar2 = (int)((param_1 & 0xffffffff) << 2);
  989snd::snd_SynthLock();
  iVar1 = *(int *)(puVar3 + -0x7f18);
  *(undefined2 *)(iVar1 + iVar2) = param_2;
  *(undefined2 *)(iVar2 + iVar1 + 2) = param_3;
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061effc  ns=Global  size=0xf0
// sig: undefined FUN_0061effc(void)
// callers(4): 0061f0ec FUN_0061f0ec; 0061f100 FUN_0061f100; 0061f114 FUN_0061f114; 0061f128 FUN_0061f128
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_0061effc(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  puVar3 = PTR_PTR_0071b024;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar3 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7fa0),0);
  }
  989snd::snd_SynthLock();
  if (0 < **(int **)(puVar3 + -0x7ff0)) {
    uVar4 = **(int **)(puVar3 + -0x7ff0) + 0x1f;
    iVar5 = 0;
    uVar4 = ((int)uVar4 >> 5) + (uint)((int)uVar4 < 0 && (uVar4 & 0x1f) != 0);
    uVar6 = (ulonglong)uVar4;
    if ((int)uVar4 < 1) {
      uVar6 = 1;
    }
    do {
      puVar2 = (uint *)(iVar5 + param_2);
      iVar1 = iVar5 + param_1;
      iVar5 = iVar5 + 4;
      *puVar2 = *puVar2 | *(uint *)(iVar1 + 0x14);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061f0ec  ns=Global  size=0x14
// sig: undefined FUN_0061f0ec(void)
// callers(1): 0061ac6c FUN_0061ac6c
// callees(1): 0061effc FUN_0061effc

void FUN_0061f0ec(undefined8 param_1)

{
  FUN_0061effc(param_1,*(undefined4 *)(PTR_PTR_0071b024 + -0x7f44));
  return;
}



//==== 0061f100  ns=Global  size=0x14
// sig: undefined FUN_0061f100(void)
// callers(7): 0060e810 FUN_0060e810; 00613b4c FUN_00613b4c; 00613c80 FUN_00613c80; 00613da8 FUN_00613da8; 00617084 FUN_00617084; 0061ad24 FUN_0061ad24; 00638ea0 FUN_00638ea0
// callees(1): 0061effc FUN_0061effc

void FUN_0061f100(undefined8 param_1)

{
  FUN_0061effc(param_1,*(undefined4 *)(PTR_PTR_0071b024 + -0x7f48));
  return;
}



//==== 0061f114  ns=Global  size=0x14
// sig: undefined FUN_0061f114(void)
// callers(4): 0060e810 FUN_0060e810; 00617084 FUN_00617084; 0061addc FUN_0061addc; 00638ea0 FUN_00638ea0
// callees(1): 0061effc FUN_0061effc

void FUN_0061f114(undefined8 param_1)

{
  FUN_0061effc(param_1,*(undefined4 *)(PTR_PTR_0071b024 + -0x7f4c));
  return;
}



//==== 0061f128  ns=Global  size=0x14
// sig: undefined FUN_0061f128(void)
// callers(5): 0060e810 FUN_0060e810; 00617084 FUN_00617084; 0061ae90 FUN_0061ae90; 0061fa5c FUN_0061fa5c; 00638ea0 FUN_00638ea0
// callees(1): 0061effc FUN_0061effc

void FUN_0061f128(undefined8 param_1)

{
  FUN_0061effc(param_1,*(undefined4 *)(PTR_PTR_0071b024 + -0x7ff4));
  return;
}



//==== 0061f13c  ns=Global  size=0x2a4
// sig: undefined FUN_0061f13c(void)
// callers(1): 0061af44 FUN_0061af44
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c550: '%s(%d) : Bad voice channel.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c480: '%s(%d) : Invalid parameter.\n'

void FUN_0061f13c(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  
  puVar8 = PTR_PTR_0071b024;
  if (param_1 == 0) goto LAB_0061f3ac;
  do {
    989snd::snd_SynthLock();
    piVar2 = *(int **)(puVar8 + -0x7ff0);
    if (*piVar2 < 1) {
LAB_0061f348:
      989snd::snd_SynthUnlock();
      return;
    }
    puVar13 = (uint *)(param_1 + 0x14);
    iVar12 = 0;
    iVar11 = 0;
    uVar17 = 0;
    while( true ) {
      uVar10 = *puVar13;
      uVar14 = uVar17 + 0x20;
      if ((uVar10 != 0) && ((int)uVar17 < *piVar2)) break;
LAB_0061f320:
      iVar12 = iVar12 + 1;
      puVar13 = puVar13 + 1;
      uVar10 = *piVar2 + 0x1f;
      iVar11 = iVar11 + 0xd00;
      uVar17 = uVar14;
      if ((int)(((int)uVar10 >> 5) + (uint)((int)uVar10 < 0 && (uVar10 & 0x1f) != 0)) <= iVar12)
      goto LAB_0061f348;
    }
    piVar3 = *(int **)(puVar8 + -0x8000);
    pcVar4 = *(char **)(puVar8 + -0x7fa4);
    pbVar5 = *(byte **)(puVar8 + -0x7fa0);
    iVar6 = *(int *)(puVar8 + -0x7f50);
    iVar16 = iVar11;
LAB_0061f22c:
    iVar15 = ((int)uVar17 >> 5) + (uint)((int)uVar17 < 0 && (uVar17 & 0x1f) != 0);
    uVar7 = 1 << (uVar17 + iVar15 * -0x20 & 0x3f);
    if ((uVar7 & uVar10) == 0) goto joined_r0x0061f214;
    iVar9 = iVar16 + *piVar3;
    if ((*(int *)(iVar9 + 0x10) != 0) && (*(int *)(iVar9 + 0x28) == param_1)) {
LAB_0061f2c8:
      if ((*(uint *)(*(int *)(puVar8 + -0x7f8c) + *(char *)(param_1 + 0x10) * 4) & 2) == 0) {
        iVar15 = iVar15 * 4;
        uVar10 = *(uint *)(iVar6 + iVar15);
        *(uint *)(*(int *)(puVar8 + -0x7f54) + iVar15) =
             *(uint *)(*(int *)(puVar8 + -0x7f54) + iVar15) & ~uVar7;
        *(uint *)(iVar6 + iVar15) = uVar7 | uVar10;
      }
joined_r0x0061f214:
      if ((int)uVar14 <= (int)(uVar17 + 1)) goto LAB_0061f320;
      uVar17 = uVar17 + 1;
      iVar16 = iVar16 + 0x68;
      if (*piVar2 <= (int)uVar17) goto LAB_0061f320;
      uVar10 = *puVar13;
      goto LAB_0061f22c;
    }
    989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7f14));
    989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fac));
    if (*pcVar4 != '\0') {
      return;
    }
    bVar1 = *pbVar5;
    if (bVar1 == 0) {
      if (*(int *)(iVar16 + *piVar3 + 0x28) != param_1) goto joined_r0x0061f214;
      goto LAB_0061f2c8;
    }
    trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
LAB_0061f3ac:
    989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fac));
    if (**(char **)(puVar8 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fa0),0);
  } while( true );
}



//==== 0061f3e0  ns=Global  size=0x278
// sig: undefined FUN_0061f3e0(void)
// callers(1): 0061b0c8 FUN_0061b0c8
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c550: '%s(%d) : Bad voice channel.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c480: '%s(%d) : Invalid parameter.\n'

void FUN_0061f3e0(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  
  puVar9 = PTR_PTR_0071b024;
  if (param_1 == 0) goto LAB_0061f624;
  do {
    989snd::snd_SynthLock();
    piVar2 = *(int **)(puVar9 + -0x7ff0);
    if (*piVar2 < 1) {
LAB_0061f5c0:
      989snd::snd_SynthUnlock();
      return;
    }
    puVar14 = (uint *)(param_1 + 0x14);
    iVar13 = 0;
    iVar12 = 0;
    uVar18 = 0;
    while( true ) {
      uVar11 = *puVar14;
      uVar15 = uVar18 + 0x20;
      if ((uVar11 != 0) && ((int)uVar18 < *piVar2)) break;
LAB_0061f598:
      iVar13 = iVar13 + 1;
      puVar14 = puVar14 + 1;
      uVar11 = *piVar2 + 0x1f;
      iVar12 = iVar12 + 0xd00;
      uVar18 = uVar15;
      if ((int)(((int)uVar11 >> 5) + (uint)((int)uVar11 < 0 && (uVar11 & 0x1f) != 0)) <= iVar13)
      goto LAB_0061f5c0;
    }
    piVar3 = *(int **)(puVar9 + -0x8000);
    pcVar4 = *(char **)(puVar9 + -0x7fa4);
    pbVar5 = *(byte **)(puVar9 + -0x7fa0);
    iVar6 = *(int *)(puVar9 + -0x7f50);
    iVar7 = *(int *)(puVar9 + -0x7f54);
    iVar17 = iVar12;
LAB_0061f4d0:
    iVar16 = ((int)uVar18 >> 5) + (uint)((int)uVar18 < 0 && (uVar18 & 0x1f) != 0);
    uVar8 = 1 << (uVar18 + iVar16 * -0x20 & 0x3f);
    if ((uVar8 & uVar11) == 0) goto joined_r0x0061f4b8;
    iVar10 = iVar17 + *piVar3;
    if ((*(int *)(iVar10 + 0x10) != 0) && (*(int *)(iVar10 + 0x28) == param_1)) {
LAB_0061f56c:
      iVar16 = iVar16 * 4;
      uVar11 = *(uint *)(iVar7 + iVar16);
      *(uint *)(iVar6 + iVar16) = *(uint *)(iVar6 + iVar16) & ~uVar8;
      *(uint *)(iVar7 + iVar16) = uVar8 | uVar11;
joined_r0x0061f4b8:
      if ((int)uVar15 <= (int)(uVar18 + 1)) goto LAB_0061f598;
      uVar18 = uVar18 + 1;
      iVar17 = iVar17 + 0x68;
      if (*piVar2 <= (int)uVar18) goto LAB_0061f598;
      uVar11 = *puVar14;
      goto LAB_0061f4d0;
    }
    989snd::snd_Printf((char)*(undefined4 *)(puVar9 + -0x7f14));
    989snd::snd_Printf((char)*(undefined4 *)(puVar9 + -0x7fac));
    if (*pcVar4 != '\0') {
      return;
    }
    bVar1 = *pbVar5;
    if (bVar1 == 0) {
      if (*(int *)(iVar17 + *piVar3 + 0x28) != param_1) goto joined_r0x0061f4b8;
      goto LAB_0061f56c;
    }
    trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
LAB_0061f624:
    989snd::snd_Printf((char)*(undefined4 *)(puVar9 + -0x7fac));
    if (**(char **)(puVar9 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar9 + -0x7fa0),0);
  } while( true );
}



//==== 0061f658  ns=Global  size=0x150
// sig: undefined FUN_0061f658(void)
// callers(0): 
// callees(3): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c570: '%s(%d) : Invlaid voice owner.\n'

void FUN_0061f658(double param_1,int param_2,undefined8 param_3,undefined4 param_4,uint param_5,
                 int param_6)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071b024;
  if ((((param_2 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= param_2)) ||
      (param_1 < (double)*(float *)(PTR_PTR_0071b024 + -0x7f78))) ||
     (((double)*(float *)(PTR_PTR_0071b024 + -0x7fd0) < param_1 || (0x168 < param_5)))) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar1 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fa0),0);
  }
  989snd::snd_SynthLock();
  iVar2 = param_2 * 0x68 + **(int **)(puVar1 + -0x8000);
  if (*(int *)(iVar2 + 0x28) != param_6) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f10));
    989snd::snd_SynthUnlock();
    return;
  }
  *(uint *)(iVar2 + 0x40) = param_5;
  *(float *)(iVar2 + 0x30) = (float)param_1;
  *(undefined4 *)(iVar2 + 0x38) = param_4;
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061f7a8  ns=Global  size=0x24
// sig: undefined FUN_0061f7a8(void)
// callers(0): 
// callees(1): 006271f4 989snd::snd_SynthUnlock

void FUN_0061f7a8(void)

{
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061f7cc  ns=Global  size=0x290
// sig: undefined FUN_0061f7cc(void)
// callers(1): 0061fa5c FUN_0061fa5c
// callees(2): 005dcbd8 FUN_005dcbd8; 0061948c 989snd::snd_Printf
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_0061f7cc(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  double dVar7;
  uint uStack00000008;
  
  puVar5 = PTR_PTR_0071b024;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= param_1)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar5 + -0x7fa4) != '\0') {
      return (double)*(float *)(puVar5 + -0x7f78);
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar5 + -0x7fa0),0);
    piVar2 = *(int **)(puVar5 + -0x8000);
    iVar6 = param_1 * 0x68 + *piVar2;
    iVar3 = *(int *)(iVar6 + 0x28);
  }
  else {
    piVar2 = *(int **)(PTR_PTR_0071b024 + -0x8000);
    iVar6 = param_1 * 0x68 + *piVar2;
    iVar3 = *(int *)(iVar6 + 0x28);
  }
  if (iVar3 == 0) {
    iVar6 = (int)((float)*(uint *)(iVar6 + 0x20) * *(float *)(puVar5 + -0x7f78));
    goto LAB_0061f8bc;
  }
  fVar1 = *(float *)(iVar3 + 0x158) + *(float *)(iVar3 + 0x154) + *(float *)(iVar3 + 0x15c) +
          *(float *)(iVar3 + 0x160);
  if ((int)fVar1 < -1) {
    fVar1 = *(float *)(puVar5 + -0x7f0c);
LAB_0061fa54:
    uVar4 = *(uint *)(iVar6 + 0x24);
LAB_0061fa28:
    fVar1 = fVar1 * (float)uVar4;
  }
  else {
    if (fVar1 <= *(float *)(puVar5 + -0x7fd0)) {
      if (fVar1 < *(float *)(puVar5 + -0x7f78)) goto LAB_0061fa54;
      uVar4 = *(uint *)(iVar6 + 0x20);
      goto LAB_0061fa28;
    }
    fVar1 = (float)*(uint *)(iVar6 + 0x20);
  }
  iVar6 = *(int *)(iVar3 + 0x144) + *(int *)(iVar3 + 0x14c) +
          *(int *)(iVar3 + 0x148) + *(int *)(iVar3 + 0x150) + (int)fVar1;
LAB_0061f8bc:
  if (0x1e00 < iVar6) {
    iVar6 = 0x1e00;
  }
  if (iVar6 < -0x1e00) {
    iVar6 = -0x1e00;
  }
  dVar7 = (double)FUN_005dcbd8((double)*(float *)(puVar5 + -0x7f04),
                               (double)((float)(longlong)iVar6 / *(float *)(puVar5 + -0x7efc)));
  dVar7 = (double)(float)(dVar7 * (double)*(float *)(param_1 * 0x68 + *piVar2 + 0x48));
  if ((**(uint **)(puVar5 + -0x7ef4) & 1) != 0) {
    dVar7 = (double)(float)(dVar7 * (double)**(float **)(puVar5 + -0x7ef0));
  }
  if ((iVar3 != 0) &&
     (iVar3 = *(char *)(iVar3 + 0x10) * 4, (*(uint *)(*(int *)(puVar5 + -0x7eec) + iVar3) & 1) != 0)
     ) {
    dVar7 = (double)(float)(dVar7 * (double)*(float *)(*(int *)(puVar5 + -0x7ee8) + iVar3));
  }
  return dVar7;
}



//==== 0061fa5c  ns=Global  size=0x59c
// sig: undefined FUN_0061fa5c(void)
// callers(1): 0061c994 FUN_0061c994
// callees(11): 00619848 FUN_00619848; 0061d3a0 FUN_0061d3a0; 0061d850 FUN_0061d850; 0061f128 FUN_0061f128; 0061f7cc FUN_0061f7cc; 00625f8c FUN_00625f8c; 00626434 FUN_00626434; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock; 0062c3a0 FUN_0062c3a0; 0062de84 FUN_0062de84

void FUN_0061fa5c(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  double dVar15;
  uint *local_a0;
  uint *local_9c;
  int local_98;
  
  puVar4 = PTR_PTR_0071b024;
  989snd::snd_SynthLock();
  puVar9 = *(uint **)(puVar4 + -0x7fb8);
  if (*puVar9 == 0) {
    piVar1 = *(int **)(puVar4 + -0x7ff0);
    iVar8 = *piVar1;
  }
  else {
    for (iVar8 = FUN_00619848(); iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x224)) {
      while (((1 << ((int)*(char *)(iVar8 + 0x10) & 0x3fU) | 0x80000000U) & *puVar9) != 0) {
        FUN_0061f128(iVar8);
        iVar8 = *(int *)(iVar8 + 0x224);
        if (iVar8 == 0) goto LAB_0061ffd8;
      }
    }
LAB_0061ffd8:
    piVar1 = *(int **)(puVar4 + -0x7ff0);
    *puVar9 = 0;
    iVar8 = *piVar1;
  }
  if (iVar8 < 1) {
    piVar2 = *(int **)(puVar4 + -0x7ee4);
  }
  else {
    iVar12 = 0x20;
    local_98 = 0;
    uVar11 = 0;
    iVar8 = 0;
    piVar2 = *(int **)(puVar4 + -0x7ee4);
    puVar9 = *(uint **)(puVar4 + -0x7f48);
    puVar10 = *(uint **)(puVar4 + -0x7f44);
    local_a0 = *(uint **)(puVar4 + -0x7f4c);
    local_9c = *(uint **)(puVar4 + -0x7ff4);
    do {
      if (((*local_9c != 0) && ((int)uVar11 < iVar12)) && ((int)uVar11 < *piVar1)) {
        piVar3 = *(int **)(puVar4 + -0x8000);
        uVar14 = uVar11;
        iVar13 = iVar8;
        do {
          iVar5 = iVar13 + *piVar3;
          if ((*(int *)(iVar5 + 0x10) != 0) &&
             ((1 << (uVar14 + (((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0))
                              * -0x20 & 0x3f) & *local_9c) != 0)) {
            dVar15 = (double)FUN_0061d850(uVar14);
            iVar6 = *piVar3;
            *(float *)(iVar5 + 0x34) = (float)dVar15;
            iVar6 = iVar13 + iVar6;
            FUN_00625f8c((double)*(float *)(iVar6 + 0x34),(double)*(float *)(iVar6 + 0x50),
                         (double)*(float *)(iVar6 + 0x54),(double)*(float *)(iVar6 + 0x58),
                         *(undefined4 *)(iVar6 + 0x60));
          }
          if (iVar12 <= (int)(uVar14 + 1)) break;
          uVar14 = uVar14 + 1;
          iVar13 = iVar13 + 0x68;
        } while ((int)uVar14 < *piVar1);
      }
      if (((*local_a0 != 0) && ((int)uVar11 < iVar12)) && ((int)uVar11 < *piVar1)) {
        piVar3 = *(int **)(puVar4 + -0x8000);
        uVar14 = uVar11;
        iVar13 = iVar8;
        do {
          iVar5 = iVar13 + *piVar3;
          if (*(int *)(iVar5 + 0x10) != 0) {
            if ((1 << (uVar14 + (((int)uVar14 >> 5) +
                                (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0)) * -0x20 & 0x3f) &
                *local_a0) != 0) {
              FUN_0061d3a0(uVar14,iVar5 + 0x3c,iVar5 + 0x44);
              iVar5 = 0;
              iVar6 = iVar13 + *piVar3;
              if (*(int *)(iVar6 + 0x28) != 0) {
                iVar5 = *(int *)(iVar6 + 0x28) + 0x168;
              }
              FUN_0062c3a0(*(undefined4 *)(iVar6 + 0x60),*(undefined4 *)(iVar6 + 0x3c),
                           *(undefined4 *)(iVar6 + 0x44),iVar5);
            }
          }
          if (iVar12 <= (int)(uVar14 + 1)) break;
          uVar14 = uVar14 + 1;
          iVar13 = iVar13 + 0x68;
        } while ((int)uVar14 < *piVar1);
      }
      if ((((*puVar9 != 0) || (*piVar2 != 0)) && ((int)uVar11 < iVar12)) && ((int)uVar11 < *piVar1))
      {
        piVar3 = *(int **)(puVar4 + -0x8000);
        uVar14 = uVar11;
        iVar13 = iVar8;
        do {
          iVar5 = iVar13 + *piVar3;
          if ((*(int *)(iVar5 + 0x10) != 0) &&
             (((1 << (uVar14 + (((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0)
                               ) * -0x20 & 0x3f) & *puVar9) != 0 || (*piVar2 != 0)))) {
            dVar15 = (double)FUN_0061f7cc(uVar14);
            iVar6 = *piVar3;
            *(float *)(iVar5 + 0x4c) = (float)dVar15;
            iVar6 = iVar13 + iVar6;
            FUN_00626434((double)*(float *)(iVar6 + 0x4c),*(undefined4 *)(iVar6 + 0x60));
          }
          uVar14 = uVar14 + 1;
          iVar13 = iVar13 + 0x68;
        } while (((int)uVar14 < iVar12) && ((int)uVar14 < *piVar1));
      }
      if ((*puVar10 != 0) && (((int)uVar11 < iVar12 && ((int)uVar11 < *piVar1)))) {
        piVar3 = *(int **)(puVar4 + -0x8000);
        uVar14 = uVar11;
        iVar13 = iVar8;
        do {
          iVar5 = iVar13 + *piVar3;
          uVar7 = uVar14 + (((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0)) *
                           -0x20;
          iVar13 = iVar13 + 0x68;
          uVar14 = uVar14 + 1;
          if ((*(int *)(iVar5 + 0x10) != 0) && ((1 << (uVar7 & 0x3f) & *puVar10) != 0)) {
            FUN_0062de84((double)*(float *)(iVar5 + 0x34),(double)*(float *)(iVar5 + 0x50),
                         (double)*(float *)(iVar5 + 0x54),(double)*(float *)(iVar5 + 0x58),
                         *(undefined4 *)(iVar5 + 0x60));
          }
        } while (((int)uVar14 < iVar12) && ((int)uVar14 < *piVar1));
      }
      uVar14 = *piVar1 + 0x1f;
      local_98 = local_98 + 1;
      *local_9c = 0;
      *local_a0 = 0;
      *puVar9 = 0;
      *puVar10 = 0;
      iVar12 = iVar12 + 0x20;
      uVar11 = uVar11 + 0x20;
      iVar8 = iVar8 + 0xd00;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
      local_a0 = local_a0 + 1;
      local_9c = local_9c + 1;
    } while (local_98 < (int)(((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0)))
    ;
  }
  *piVar2 = 0;
  989snd::snd_SynthUnlock();
  return;
}



//==== 0061fff8  ns=Global  size=0x158
// sig: undefined FUN_0061fff8(void)
// callers(1): 00634a14 FUN_00634a14
// callees(2): 0061948c 989snd::snd_Printf; 0062f1f4 989snd::snd_SynthGetVoiceOutputLevel
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

double FUN_0061fff8(uint param_1,undefined1 param_2,undefined1 param_3)

{
  float fVar1;
  undefined *puVar2;
  ulonglong uVar3;
  uint uVar4;
  double dVar5;
  
  puVar2 = PTR_PTR_0071b024;
  if (((int)param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= (int)param_1)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return (double)*(float *)(puVar2 + -0x7f78);
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
    uVar3 = (longlong)((int)param_1 >> 5) + (ulonglong)((int)param_1 < 0 && (param_1 & 0x1f) != 0);
    fVar1 = *(float *)(puVar2 + -0x7f78);
    uVar4 = 1 << (param_1 - (int)((uVar3 & 0xffffffff) << 5) & 0x3f) &
            *(uint *)(*(int *)(puVar2 + -0x7f64) + (int)((uVar3 & 0xffffffff) << 2));
  }
  else {
    uVar3 = (longlong)((int)param_1 >> 5) + (ulonglong)((int)param_1 < 0 && (param_1 & 0x1f) != 0);
    fVar1 = *(float *)(PTR_PTR_0071b024 + -0x7f78);
    uVar4 = 1 << (param_1 - (int)((uVar3 & 0xffffffff) << 5) & 0x3f) &
            *(uint *)(*(int *)(PTR_PTR_0071b024 + -0x7f64) + (int)((uVar3 & 0xffffffff) << 2));
  }
  if (uVar4 != 0) {
    return (double)fVar1;
  }
  dVar5 = (double)989snd::snd_SynthGetVoiceOutputLevel
                            ((double)fVar1,
                             *(undefined4 *)(param_1 * 0x68 + **(int **)(puVar2 + -0x8000) + 0x60),
                             param_2,param_3);
  return dVar5;
}



