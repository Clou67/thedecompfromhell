// sdk/xUnk3.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5d97dc-0x5d9b44
#include "sdk/xUnk3.h"
#include "sdk/libc/asctime.h"

// 0x05d97dc (0x35c bytes)
byte * _mbrtowc(undefined2 *param_1,byte *param_2,uint param_3,uint *param_4,
                     undefined4 *param_5)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar11;
  byte bVar12;
  ulonglong uVar13;
  uint uVar10;
  
  puVar4 = (ushort *)*param_5;
  bVar12 = *(byte *)((int)param_4 + 7);
  uVar9 = (ulonglong)(ushort)*param_4;
  uVar10 = (uint)(ushort)*param_4;
  if (puVar4 == (ushort *)0x0) {
    if (param_2 == (byte *)0x0) {
      uVar10 = *(uint *)PTR_DAT_0071c554;
      uVar3 = *(undefined2 *)(PTR_DAT_0071c554 + 4);
      *(undefined2 *)((int)param_4 + 6) = *(undefined2 *)(PTR_DAT_0071c554 + 6);
      *param_4 = uVar10;
      *(undefined2 *)(param_4 + 1) = uVar3;
      return (byte *)0x0;
    }
    uVar13 = (ulonglong)param_3;
    pbVar7 = param_2;
    if (param_3 != 0) {
      do {
        if ((char)bVar12 < '\x01') {
          bVar1 = *pbVar7;
          uVar11 = (ulonglong)bVar1;
          uVar9 = uVar11;
          if (-1 < (char)bVar1) goto LAB_005d99a8;
          uVar9 = uVar11 & 0x1f;
          bVar12 = 1;
          if ((bVar1 & 0xe0) != 0xc0) {
            uVar9 = uVar11 & 0xf;
            bVar12 = 2;
            if ((bVar1 & 0xf0) != 0xe0) goto LAB_005d9a08;
          }
        }
        else {
          bVar12 = bVar12 - 1;
          uVar9 = (uVar9 & 0xffff) << 6 | (ulonglong)*pbVar7 & 0x3f;
          if ((*pbVar7 & 0xc0) != 0x80) goto LAB_005d9a08;
LAB_005d99a8:
          if (bVar12 == 0) {
            if (param_1 != (undefined2 *)0x0) {
              *param_1 = (short)uVar9;
            }
            *(undefined2 *)((int)param_4 + 6) = 0;
            pbVar7 = pbVar7 + (1 - (int)param_2);
            goto joined_r0x005d9ab0;
          }
        }
        uVar10 = (uint)uVar9;
        pbVar7 = pbVar7 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  else {
    if (param_2 == (byte *)0x0) {
      uVar10 = *(uint *)PTR_DAT_0071c554;
      uVar3 = *(undefined2 *)(PTR_DAT_0071c554 + 4);
      *(undefined2 *)((int)param_4 + 6) = *(undefined2 *)(PTR_DAT_0071c554 + 6);
      *param_4 = uVar10;
      *(undefined2 *)(param_4 + 1) = uVar3;
      return (byte *)(*puVar4 & 0xf00);
    }
    if (param_3 != 0) {
      if (((char)bVar12 < '\x10') && (iVar5 = param_5[(char)bVar12], iVar5 != 0)) {
        bVar1 = *param_2;
        iVar8 = 1;
        pbVar7 = param_2;
        while( true ) {
          uVar2 = *(ushort *)((uint)bVar1 * 2 + iVar5);
          if (uVar2 == 0) break;
          bVar12 = (byte)(uVar2 >> 8) & 0xf;
          if ((short)uVar2 < 0) {
            uVar9 = uVar9 & 0xffffff00 | (ulonglong)uVar2 & 0xff;
          }
          if ((uVar2 & 0x1000) != 0) {
            uVar9 = (uVar9 & 0xffff) << 8 | ((uVar9 & 0xffff) << 0x20) >> 0x28;
          }
          uVar10 = (uint)uVar9;
          if (((uVar2 & 0x4000) != 0) && (bVar1 != 0)) {
            pbVar7 = pbVar7 + 1;
            param_3 = param_3 - 1;
            iVar8 = 0;
          }
          if ((uVar2 & 0x2000) != 0) {
            if (param_1 != (undefined2 *)0x0) {
              *param_1 = (short)uVar9;
            }
            *(short *)((int)param_4 + 6) = (short)(char)bVar12;
            pbVar7 = pbVar7 + -(int)param_2;
            *param_4 = uVar10 & 0xffff;
joined_r0x005d9ab0:
            if ((uVar9 & 0xffff) != 0) {
              return pbVar7;
            }
            return (byte *)0x0;
          }
          if (param_3 == 0) goto LAB_005d9adc;
          if (((0xf < bVar12) ||
              (iVar5 = *(int *)((int)param_5 + (int)((longlong)(char)bVar12 << 2)), iVar5 == 0)) ||
             (iVar8 = iVar8 + 1, 0xfef < iVar8)) break;
          bVar1 = *pbVar7;
        }
      }
LAB_005d9a08:
      puVar6 = (undefined4 *)FUN_005d5904();
      *puVar6 = 0x8001001d;
      return (byte *)0xffffffff;
    }
  }
LAB_005d9adc:
  *(short *)((int)param_4 + 6) = (short)(char)bVar12;
  *param_4 = uVar10 & 0xffff;
  return (byte *)0xfffffffe;
}


// 0x05d9b38 (0xc bytes)
size_t mbrtowc(wchar_t *__pwc,char *__s,size_t __n,mbstate_t *__p)

{
  size_t sVar1;
  longlong in_r13;
  
  sVar1 = _mbrtowc(__pwc,__s,__n,__p,in_r13 + -0x6f0c);
  return sVar1;
}


