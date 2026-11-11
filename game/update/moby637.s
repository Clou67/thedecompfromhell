# game/update/moby637.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M637_003f9cc0:   # 0x3f9cc0, 0x14 bytes
  03f9cc0  lis 3, 133
  03f9cc4  lis 4, 1
  03f9cc8  addic 3, 3, 17812
  03f9ccc  stw 4, 72(3)
  03f9cd0  blr

UpdateMoby_637:   # 0x3f9ce0, 0x90 bytes
  03f9ce0  stdu 1, -112(1)
  03f9ce4  mflr 0
  03f9ce8  std 0, 128(1)
  03f9cec  lis 4, 151
  03f9cf0  addic 4, 4, -25376
  03f9cf4  lbz 5, 8356(4)
  03f9cf8  cmpwi 5, 0
  03f9cfc  bf 2, 0x3f9d60
  03f9d00  lfs 1, 132(4)
  03f9d04  lfs 2, 20(3)
  03f9d08  lfs 3, 128(4)
  03f9d0c  fsubs 1, 1, 2
  03f9d10  lfs 2, 16(3)
  03f9d14  fsubs 2, 3, 2
  03f9d18  lfs 3, 136(4)
  03f9d1c  lfs 4, 24(3)
  03f9d20  fsubs 3, 3, 4
  03f9d24  fmuls 1, 1, 1
  03f9d28  lis 4, 64
  03f9d2c  addi 4, 4, -25384
  03f9d30  fmadds 1, 2, 2, 1
  03f9d34  lfs 2, 0(4)
  03f9d38  fmadds 1, 3, 3, 1
  03f9d3c  fsqrts 1, 1
  03f9d40  fcmpu 0, 1, 2
  03f9d44  cror 6, 1, 2
  03f9d48  bt 6, 0x3f9d60
  03f9d4c  ori 5, 3, 0
  03f9d50  li 3, 2
  03f9d54  li 4, 90
  03f9d58  bl 0x86b60
  03f9d5c  nop
  03f9d60  ld 0, 128(1)
  03f9d64  mtlr 0
  03f9d68  addi 1, 1, 112
  03f9d6c  blr
