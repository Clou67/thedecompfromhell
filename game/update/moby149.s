# game/update/moby149.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_149:   # 0x28cf20, 0x2c0 bytes
  028cf20  stdu 1, -160(1)
  028cf24  mflr 0
  028cf28  std 0, 176(1)
  028cf2c  stfd 31, 152(1)
  028cf30  std 31, 144(1)
  028cf34  ori 31, 3, 0
  028cf38  lis 4, 41
  028cf3c  addi 3, 4, -12532
  028cf40  std 30, 136(1)
  028cf44  lis 4, 114
  028cf48  lwz 30, 120(31)
  028cf4c  lfs 1, 0(3)
  028cf50  lfs 2, -3048(4)
  028cf54  lfs 3, 24(30)
  028cf58  lfs 4, 16(30)
  028cf5c  fnmsubs 1, 2, 1, 3
  028cf60  stfs 1, 24(30)
  028cf64  lfs 1, 16(31)
  028cf68  lfs 3, 20(31)
  028cf6c  fadds 2, 1, 4
  028cf70  lfs 4, 24(31)
  028cf74  lfs 1, 64(31)
  028cf78  stfs 2, 16(31)
  028cf7c  lfs 2, 20(30)
  028cf80  fadds 2, 3, 2
  028cf84  stfs 2, 20(31)
  028cf88  lfs 2, 24(30)
  028cf8c  fadds 2, 4, 2
  028cf90  stfs 2, 24(31)
  028cf94  std 29, 128(1)
  028cf98  std 28, 120(1)
  028cf9c  lfs 2, 32(30)
  028cfa0  bl 0x502578
  028cfa4  nop
  028cfa8  stfs 1, 64(31)
  028cfac  lfs 1, 68(31)
  028cfb0  lfs 2, 36(30)
  028cfb4  bl 0x502578
  028cfb8  nop
  028cfbc  stfs 1, 68(31)
  028cfc0  lfs 1, 72(31)
  028cfc4  lfs 2, 40(30)
  028cfc8  bl 0x502578
  028cfcc  nop
  028cfd0  lbz 3, 32(31)
  028cfd4  stfs 1, 72(31)
  028cfd8  cmpwi 3, 0
  028cfdc  bt 1, 0x28cfec
  028cfe0  cmpwi 3, -1
  028cfe4  bf 1, 0x28d1bc
  028cfe8  b 0x28cff8
  028cfec  cmpwi 3, 1
  028cff0  bf 1, 0x28d17c
  028cff4  b 0x28d1bc
  028cff8  lis 3, 41
  028cffc  lfs 1, 4(30)
  028d000  addi 3, 3, -12532
  028d004  lfs 2, 4(3)
  028d008  lfs 3, 24(31)
  028d00c  fsubs 1, 1, 2
  028d010  fcmpu 0, 3, 1
  028d014  cror 6, 1, 2
  028d018  bt 6, 0x28d028
  028d01c  li 3, 1
  028d020  stb 3, 32(31)
  028d024  b 0x28d1bc
  028d028  addic 3, 30, 14
  028d02c  bl 0x4fffb4
  028d030  nop
  028d034  cmpwi 3, 0
  028d038  bt 2, 0x28d1bc
  028d03c  lhz 3, 12(30)
  028d040  cmpwi 3, 0
  028d044  bt 2, 0x28d1bc
  028d048  addic 3, 31, 16
  028d04c  li 5, 2
  028d050  lfs 1, 8(30)
  028d054  li 6, 0
  028d058  bl 0x59e20
  028d05c  nop
  028d060  cmpwi 3, 0
  028d064  bt 2, 0x28d1bc
  028d068  lis 3, 161
  028d06c  lfs 1, 20(30)
  028d070  lis 4, 41
  028d074  addic 3, 3, 2368
  028d078  lfs 2, 16(30)
  028d07c  addi 4, 4, -12532
  028d080  lfs 3, 68(3)
  028d084  lfs 4, 64(3)
  028d088  fmuls 1, 1, 3
  028d08c  lfs 3, 24(30)
  028d090  lfs 5, 72(3)
  028d094  fmadds 1, 2, 4, 1
  028d098  lfs 2, 8(4)
  028d09c  fmadds 1, 3, 5, 1
  028d0a0  fcmpu 0, 1, 2
  028d0a4  cror 6, 1, 2
  028d0a8  bt 6, 0x28d1bc
  028d0ac  ori 6, 3, 0
  028d0b0  addic 4, 30, 16
  028d0b4  addic 5, 6, 64
  028d0b8  ori 3, 4, 0
  028d0bc  lfs 1, 48(6)
  028d0c0  stfs 1, 16(31)
  028d0c4  lfs 1, 52(6)
  028d0c8  lhz 7, 12(30)
  028d0cc  stfs 1, 20(31)
  028d0d0  lfs 1, 56(6)
  028d0d4  addic 7, 7, -1
  028d0d8  stfs 1, 24(31)
  028d0dc  lfs 1, 60(6)
  028d0e0  sth 7, 12(30)
  028d0e4  stfs 1, 28(31)
  028d0e8  bl 0x500608
  028d0ec  nop
  028d0f0  lis 3, 41
  028d0f4  lfs 1, 16(30)
  028d0f8  lis 29, 251
  028d0fc  addi 31, 3, -12532
  028d100  lfs 2, 20(30)
  028d104  li 3, 0
  028d108  lis 28, 123
  028d10c  lfs 3, 12(31)
  028d110  lfs 4, 24(30)
  028d114  fmuls 1, 1, 3
  028d118  stw 3, 32(30)
  028d11c  fmuls 2, 2, 3
  028d120  fmuls 3, 4, 3
  028d124  stfs 1, 16(30)
  028d128  stfs 2, 20(30)
  028d12c  stfs 3, 24(30)
  028d130  lfs 1, -9632(29)
  028d134  lfs 2, -20048(28)
  028d138  bl 0xfe4f0
  028d13c  nop
  028d140  lfs 31, 16(31)
  028d144  lis 31, 114
  028d148  fmuls 1, 1, 31
  028d14c  lfs 2, -3052(31)
  028d150  fmuls 1, 1, 2
  028d154  stfs 1, 36(30)
  028d158  lfs 1, -9632(29)
  028d15c  lfs 2, -20048(28)
  028d160  bl 0xfe4f0
  028d164  nop
  028d168  fmuls 1, 1, 31
  028d16c  lfs 2, -3052(31)
  028d170  fmuls 1, 1, 2
  028d174  stfs 1, 40(30)
  028d178  b 0x28d1bc
  028d17c  lis 3, 123
  028d180  lfs 1, 44(31)
  028d184  lis 5, 123
  028d188  lfs 2, -20016(3)
  028d18c  lbz 4, 35(31)
  028d190  fmuls 1, 1, 2
  028d194  lwz 3, -20012(5)
  028d198  cmpw 4, 3
  028d19c  stfs 1, 44(31)
  028d1a0  bf 0, 0x28d1b4
  028d1a4  ori 3, 31, 0
  028d1a8  bl 0xefb38
  028d1ac  nop
  028d1b0  b 0x28d1bc
  028d1b4  subc 3, 4, 3
  028d1b8  stb 3, 35(31)
  028d1bc  ld 0, 176(1)
  028d1c0  mtlr 0
  028d1c4  lfd 31, 152(1)
  028d1c8  ld 28, 120(1)
  028d1cc  ld 29, 128(1)
  028d1d0  ld 30, 136(1)
  028d1d4  ld 31, 144(1)
  028d1d8  addi 1, 1, 160
  028d1dc  blr
