// sdk/libfios/psarclib_md5.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 11 functions, 0x52eb40-0x52fba8
#include <string.h>
#include "sdk/libfios/psarclib_md5.h"

// SDK libfios.a(psarclib_md5.ppu.o): cell::fios::PSArc::MD5::encode(unsigned char*, unsigned int*, unsigned int)  [exact match]
// 0x052eb40 (0x50 bytes)
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


// SDK libfios.a(psarclib_md5.ppu.o): cell::fios::PSArc::MD5::decode(unsigned int*, unsigned char const*, unsigned int)  [exact match]
// 0x052eb90 (0x58 bytes)
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


// SDK libfios.a(psarclib_md5.ppu.o): cell::fios::PSArc::MD5::transform(unsigned char const*)  [exact match]
// 0x052ebe8 (0xb4c bytes)
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


// SDK libfios.a(psarclib_md5.ppu.o): cell::fios::PSArc::MD5::init()  [exact match]
// 0x052f734 (0x8c bytes)
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


// 0x052f7c0 (0x4 bytes)
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


// 0x052f7c4 (0x4 bytes)
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


// SDK libfios.a(psarclib_md5.ppu.o): cell::fios::PSArc::MD5::update(unsigned char const*, unsigned int)  [exact match]
// 0x052f7c8 (0x170 bytes)
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
      memcpy((void *)((int)param_1 + 0x18 + uVar2),param_2,uVar1);
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
    param_1 = memcpy((void *)((int)param_1 + uVar2 + 0x18),(void *)((int)param_2 + uVar4),
                           param_3 - uVar4);
  }
  return param_1;
}


// SDK libfios.a(psarclib_md5.ppu.o): cell::fios::PSArc::MD5::finalize()  [exact match]
// 0x052f938 (0xe0 bytes)
void FUN_0052f938(int param_1)

{
  uint uVar1;
  int iVar2;
  GPiece<16> auStack_30;
  
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


// SDK libfios.a(psarclib_md5.ppu.o): cell::fios::PSArc::MD5::updateString(char const*, bool)  [exact match]
// 0x052fa18 (0xe0 bytes)
void FUN_0052fa18(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  size_t sVar2;
  GPiece<24> local_30;
  
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
  sVar2 = strlen(param_2);
  FUN_0052f7c8(param_1,param_2,sVar2);
  FUN_0052f938(param_1);
  return;
}


// 0x052faf8 (0x58 bytes)
// strings: 0052f734: '=@gE=' (raw)

void FUN_0052faf8(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  FUN_0052f734();
  FUN_0052fa18(param_1,param_2,param_3);
  FUN_0052f938(param_1);
  return;
}


// 0x052fb50 (0x58 bytes)
// strings: 0052f734: '=@gE=' (raw)

void FUN_0052fb50(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  FUN_0052f734();
  FUN_0052fa18(param_1,param_2,param_3);
  FUN_0052f938(param_1);
  return;
}


