# game/update/moby1180.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1180_001eebe4:   # 0x1eebe4, 0x28 bytes
  01eebe4  lhz 4, 166(3)
  01eebe8  cmpwi 4, 1179
  01eebec  bf 2, 0x1eec04
  01eebf0  lbz 3, 32(3)
  01eebf4  cmpwi 3, 2
  01eebf8  bf 2, 0x1eec04
  01eebfc  li 3, 1
  01eec00  b 0x1eec08
  01eec04  li 3, 0
  01eec08  blr

FUN_001eec10:   # 0x1eec10, 0x3c bytes
  01eec10  lhz 4, 166(3)
  01eec14  cmpwi 4, 1179
  01eec18  bf 2, 0x1eec48
  01eec1c  lbz 4, 32(3)
  01eec20  cmpwi 4, 2
  01eec24  bf 2, 0x1eec48
  01eec28  lis 4, 31
  01eec2c  lfs 1, 24(3)
  01eec30  addi 4, 4, -5108
  01eec34  lfs 2, 0(4)
  01eec38  li 4, 1
  01eec3c  fadds 1, 1, 2
  01eec40  stb 4, 32(3)
  01eec44  stfs 1, 24(3)
  01eec48  blr

M1180_001eec4c:   # 0x1eec4c, 0x14 bytes
  01eec4c  lis 3, 118
  01eec50  lis 4, 1
  01eec54  addic 3, 3, 24128
  01eec58  stw 4, 72(3)
  01eec5c  blr

UpdateMoby_1180:   # 0x1eec70, 0x174 bytes
  01eec70  stdu 1, -144(1)
  01eec74  mflr 0
  01eec78  std 0, 160(1)
  01eec7c  std 31, 136(1)
  01eec80  lbz 4, 32(3)
  01eec84  std 30, 128(1)
  01eec88  ori 31, 3, 0
  01eec8c  lwz 30, 120(3)
  01eec90  cmpwi 4, 0
  01eec94  cmpwi 1, 4, 2
  01eec98  cmpwi 6, 4, 1
  01eec9c  std 29, 120(1)
  01eeca0  cmpwi 7, 4, -1
  01eeca4  bt 1, 0x1eecb0
  01eeca8  bf 29, 0x1eedc8
  01eecac  b 0x1eecbc
  01eecb0  bf 25, 0x1eecd8
  01eecb4  bf 5, 0x1eed68
  01eecb8  b 0x1eedc8
  01eecbc  li 3, 255
  01eecc0  li 4, 1
  01eecc4  stb 3, 48(31)
  01eecc8  lfs 1, 72(31)
  01eeccc  stb 4, 32(31)
  01eecd0  stfs 1, 8(30)
  01eecd4  b 0x1eedc8
  01eecd8  lis 3, 164
  01eecdc  lwz 4, 0(30)
  01eece0  slwi 4, 4, 8
  01eece4  lwz 3, -28512(3)
  01eece8  addc 3, 3, 4
  01eecec  clrldi 3, 3, 32
  01eecf0  bl 0x1eebe4
  01eecf4  nop
  01eecf8  cmpwi 3, 0
  01eecfc  bt 2, 0x1eedc8
  01eed00  lis 3, 161
  01eed04  lwz 3, 1808(3)
  01eed08  cmpwi 3, 10
  01eed0c  bf 1, 0x1eed40
  01eed10  lis 3, 151
  01eed14  li 6, 1
  01eed18  addic 8, 3, -16400
  01eed1c  li 7, 2
  01eed20  li 3, 0
  01eed24  li 4, 0
  01eed28  ori 5, 31, 0
  01eed2c  stb 6, 91(8)
  01eed30  stb 7, 32(31)
  01eed34  bl 0x15d12c
  01eed38  nop
  01eed3c  b 0x1eedc8
  01eed40  li 3, 3
  01eed44  lis 4, 31
  01eed48  addi 4, 4, -5024
  01eed4c  stb 3, 32(31)
  01eed50  lfs 1, 8(30)
  01eed54  lfs 2, 0(4)
  01eed58  bl 0x502578
  01eed5c  nop
  01eed60  stfs 1, 72(31)
  01eed64  b 0x1eedc8
  01eed68  lis 3, 31
  01eed6c  lfs 1, 8(30)
  01eed70  addi 29, 3, -5024
  01eed74  lfs 2, 0(29)
  01eed78  bl 0x502578
  01eed7c  nop
  01eed80  lis 4, 114
  01eed84  lfs 2, 4(29)
  01eed88  lis 6, 114
  01eed8c  lfs 3, 8(29)
  01eed90  addic 3, 31, 72
  01eed94  addic 5, 30, 4
  01eed98  lfs 4, -3048(4)
  01eed9c  lfs 5, -3052(6)
  01eeda0  fmuls 2, 4, 2
  01eeda4  fmuls 4, 5, 3
  01eeda8  fmr 3, 2
  01eedac  bl 0x10a2e0
  01eedb0  nop
  01eedb4  lfs 2, 12(29)
  01eedb8  fcmpu 0, 1, 2
  01eedbc  bf 2, 0x1eedc8
  01eedc0  li 3, 3
  01eedc4  stb 3, 32(31)
  01eedc8  ld 0, 160(1)
  01eedcc  mtlr 0
  01eedd0  ld 29, 120(1)
  01eedd4  ld 30, 128(1)
  01eedd8  ld 31, 136(1)
  01eeddc  addi 1, 1, 144
  01eede0  blr
