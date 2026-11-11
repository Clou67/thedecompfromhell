# game/update/moby937.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M937_004c29c0:   # 0x4c29c0, 0x14 bytes
  04c29c0  lis 3, 143
  04c29c4  lis 4, 1
  04c29c8  addic 3, 3, 19328
  04c29cc  stw 4, 72(3)
  04c29d0  blr

UpdateMoby_937:   # 0x4c29e0, 0x120 bytes
  04c29e0  stdu 1, -128(1)
  04c29e4  mflr 0
  04c29e8  std 0, 144(1)
  04c29ec  std 31, 120(1)
  04c29f0  lwz 4, 120(3)
  04c29f4  ori 31, 3, 0
  04c29f8  lwz 4, 0(4)
  04c29fc  cmpwi 1, 4, -1
  04c2a00  bt 6, 0x4c2aec
  04c2a04  lis 3, 164
  04c2a08  slwi 4, 4, 8
  04c2a0c  lwz 3, -28512(3)
  04c2a10  addc 3, 3, 4
  04c2a14  clrldi 3, 3, 32
  04c2a18  lwz 4, 120(3)
  04c2a1c  bt 6, 0x4c2aec
  04c2a20  lis 5, 76
  04c2a24  lbz 7, 32(3)
  04c2a28  addi 6, 5, 10712
  04c2a2c  cmpwi 7, 2
  04c2a30  lis 5, 143
  04c2a34  lis 3, 114
  04c2a38  cmpwi 1, 7, 4
  04c2a3c  lfs 1, 0(6)
  04c2a40  bf 2, 0x4c2a98
  04c2a44  lwz 4, 16(4)
  04c2a48  lfs 2, 72(31)
  04c2a4c  cmpwi 4, 0
  04c2a50  bt 2, 0x4c2a6c
  04c2a54  lfs 3, 19436(5)
  04c2a58  fmuls 1, 3, 1
  04c2a5c  lfs 3, -3052(3)
  04c2a60  fmuls 1, 1, 3
  04c2a64  fneg 1, 1
  04c2a68  b 0x4c2a7c
  04c2a6c  lfs 3, 19436(5)
  04c2a70  fmuls 1, 3, 1
  04c2a74  lfs 3, -3052(3)
  04c2a78  fmuls 1, 1, 3
  04c2a7c  fmr 3, 1
  04c2a80  fmr 1, 2
  04c2a84  fmr 2, 3
  04c2a88  bl 0x502578
  04c2a8c  nop
  04c2a90  stfs 1, 72(31)
  04c2a94  b 0x4c2aec
  04c2a98  bf 6, 0x4c2aec
  04c2a9c  lwz 4, 16(4)
  04c2aa0  lfs 2, 72(31)
  04c2aa4  cmpwi 4, 0
  04c2aa8  bt 2, 0x4c2ac0
  04c2aac  lfs 3, 19436(5)
  04c2ab0  fmuls 1, 3, 1
  04c2ab4  lfs 3, -3052(3)
  04c2ab8  fmuls 1, 1, 3
  04c2abc  b 0x4c2ad4
  04c2ac0  lfs 3, 19436(5)
  04c2ac4  fmuls 1, 3, 1
  04c2ac8  lfs 3, -3052(3)
  04c2acc  fmuls 1, 1, 3
  04c2ad0  fneg 1, 1
  04c2ad4  fmr 3, 1
  04c2ad8  fmr 1, 2
  04c2adc  fmr 2, 3
  04c2ae0  bl 0x502578
  04c2ae4  nop
  04c2ae8  stfs 1, 72(31)
  04c2aec  ld 0, 144(1)
  04c2af0  mtlr 0
  04c2af4  ld 31, 120(1)
  04c2af8  addi 1, 1, 128
  04c2afc  blr
