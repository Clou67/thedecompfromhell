# game/update/moby997.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M997_004cf014:   # 0x4cf014, 0x14 bytes
  04cf014  lis 3, 144
  04cf018  lis 4, 1
  04cf01c  addic 3, 3, -28540
  04cf020  stw 4, 72(3)
  04cf024  blr

UpdateMoby_997:   # 0x4cf030, 0x114 bytes
  04cf030  lbz 4, 32(3)
  04cf034  lwz 5, 120(3)
  04cf038  cmpwi 4, 0
  04cf03c  cmpwi 1, 4, 2
  04cf040  cmpwi 6, 4, 1
  04cf044  cmpwi 7, 4, -1
  04cf048  bt 1, 0x4cf054
  04cf04c  bf 29, 0x4cf140
  04cf050  b 0x4cf060
  04cf054  bf 25, 0x4cf0ec
  04cf058  bf 5, 0x4cf128
  04cf05c  b 0x4cf140
  04cf060  lfs 1, 16(3)
  04cf064  lis 4, 165
  04cf068  stfs 1, 0(5)
  04cf06c  addic 6, 4, 17860
  04cf070  lfs 1, 20(3)
  04cf074  stfs 1, 4(5)
  04cf078  lfs 1, 24(3)
  04cf07c  stfs 1, 8(5)
  04cf080  lfs 1, 28(3)
  04cf084  stfs 1, 12(5)
  04cf088  lhz 5, 178(3)
  04cf08c  extsh 4, 5
  04cf090  lbzx 6, 6, 4
  04cf094  cmpwi 6, 0
  04cf098  bf 2, 0x4cf0e0
  04cf09c  lis 7, 151
  04cf0a0  lis 6, 161
  04cf0a4  srawi 4, 4, 5
  04cf0a8  addic 6, 6, -13028
  04cf0ac  sldi 4, 4, 2
  04cf0b0  lwz 7, -25488(7)
  04cf0b4  clrlwi 5, 5, 27
  04cf0b8  addc 4, 4, 6
  04cf0bc  slwi 6, 7, 8
  04cf0c0  clrldi 4, 4, 32
  04cf0c4  extsw 6, 6
  04cf0c8  li 7, 1
  04cf0cc  slw 5, 7, 5
  04cf0d0  lwzx 4, 4, 6
  04cf0d4  and 4, 4, 5
  04cf0d8  cmpwi 4, 0
  04cf0dc  bt 2, 0x4cf140
  04cf0e0  li 4, 1
  04cf0e4  stb 4, 32(3)
  04cf0e8  b 0x4cf140
  04cf0ec  lis 4, 114
  04cf0f0  lfs 1, 24(3)
  04cf0f4  lis 6, 77
  04cf0f8  addi 6, 6, -4056
  04cf0fc  lfs 2, -3052(4)
  04cf100  fadds 1, 1, 2
  04cf104  stfs 1, 24(3)
  04cf108  lfs 2, 0(6)
  04cf10c  lfs 3, 8(5)
  04cf110  fadds 2, 3, 2
  04cf114  fcmpu 0, 1, 2
  04cf118  bt 0, 0x4cf140
  04cf11c  li 4, 2
  04cf120  stb 4, 32(3)
  04cf124  b 0x4cf140
  04cf128  lis 4, 77
  04cf12c  lfs 1, 8(5)
  04cf130  addi 4, 4, -4056
  04cf134  lfs 2, 0(4)
  04cf138  fadds 1, 1, 2
  04cf13c  stfs 1, 24(3)
  04cf140  blr
