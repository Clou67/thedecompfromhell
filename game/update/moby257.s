# game/update/moby257.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M257_0031cfd0:   # 0x31cfd0, 0x14 bytes
  031cfd0  lis 3, 128
  031cfd4  lis 4, 1
  031cfd8  addic 3, 3, -364
  031cfdc  stw 4, 72(3)
  031cfe0  blr

UpdateMoby_257:   # 0x31cff8, 0x378 bytes
  031cff8  stdu 1, -160(1)
  031cffc  mflr 0
  031d000  std 0, 176(1)
  031d004  std 31, 152(1)
  031d008  std 29, 136(1)
  031d00c  ori 31, 3, 0
  031d010  lis 3, 165
  031d014  std 30, 144(1)
  031d018  addic 29, 3, 7136
  031d01c  lwz 30, 120(31)
  031d020  lbz 4, 32(31)
  031d024  cmpwi 4, 1
  031d028  cmpwi 1, 4, -1
  031d02c  lwz 3, 4(30)
  031d030  cmpwi 6, 4, 0
  031d034  cmpwi 7, 4, 2
  031d038  slwi 5, 3, 2
  031d03c  extsw 5, 5
  031d040  std 28, 128(1)
  031d044  lwzx 29, 29, 5
  031d048  bt 1, 0x31d058
  031d04c  bf 5, 0x31d350
  031d050  bf 25, 0x31d068
  031d054  b 0x31d0f4
  031d058  bf 29, 0x31d138
  031d05c  cmpwi 4, 3
  031d060  bf 1, 0x31d27c
  031d064  b 0x31d350
  031d068  lwz 4, 0(30)
  031d06c  cmpwi 4, -1
  031d070  bt 2, 0x31d07c
  031d074  cmpwi 3, -1
  031d078  bf 2, 0x31d08c
  031d07c  ori 3, 31, 0
  031d080  bl 0xefb38
  031d084  nop
  031d088  b 0x31d350
  031d08c  lfs 1, 20(29)
  031d090  lfs 2, 36(29)
  031d094  lfs 3, 16(29)
  031d098  fsubs 1, 1, 2
  031d09c  lfs 2, 32(29)
  031d0a0  fsubs 2, 3, 2
  031d0a4  lfs 3, 24(29)
  031d0a8  lfs 4, 40(29)
  031d0ac  fsubs 3, 3, 4
  031d0b0  fmuls 1, 1, 1
  031d0b4  lis 3, 114
  031d0b8  li 4, 0
  031d0bc  li 5, 1
  031d0c0  fmadds 1, 2, 2, 1
  031d0c4  lfs 2, 8(30)
  031d0c8  fmadds 1, 3, 3, 1
  031d0cc  lfs 3, -3052(3)
  031d0d0  fmuls 2, 2, 3
  031d0d4  li 3, 100
  031d0d8  fsqrts 1, 1
  031d0dc  fdivs 1, 2, 1
  031d0e0  stfs 1, 12(30)
  031d0e4  stb 3, 48(31)
  031d0e8  stb 4, 188(31)
  031d0ec  stb 5, 32(31)
  031d0f0  b 0x31d350
  031d0f4  lis 3, 151
  031d0f8  addic 3, 3, -25376
  031d0fc  lwz 4, 8332(3)
  031d100  cmpwi 4, 15
  031d104  bf 2, 0x31d350
  031d108  addic 3, 3, 208
  031d10c  lwz 4, 0(30)
  031d110  extsw 4, 4
  031d114  bl 0x110b70
  031d118  nop
  031d11c  cmpwi 3, 0
  031d120  bt 2, 0x31d350
  031d124  li 3, 2
  031d128  li 4, 0
  031d12c  stb 3, 32(31)
  031d130  sth 4, 22(30)
  031d134  b 0x31d350
  031d138  li 3, 16
  031d13c  vspltisw 2, 1
  031d140  li 4, 12
  031d144  addi 5, 3, 16
  031d148  addi 6, 4, 16
  031d14c  lvlx 3, 3, 30
  031d150  lvlx 4, 4, 30
  031d154  lvrx 5, 5, 30
  031d158  lvrx 6, 6, 30
  031d15c  vor 3, 3, 5
  031d160  lvlx 5, 0, 29
  031d164  vor 4, 4, 6
  031d168  vsubuwm 2, 5, 2
  031d16c  lfs 1, 16(30)
  031d170  vaddfp 3, 3, 4
  031d174  vcfsx 2, 2, 0
  031d178  lfs 2, 12(30)
  031d17c  fadds 1, 1, 2
  031d180  vspltw 3, 3, 0
  031d184  vspltw 2, 2, 0
  031d188  vcmpgefp. 2, 3, 2
  031d18c  stvewx 3, 3, 30
  031d190  bt 26, 0x31d1a8
  031d194  li 3, 255
  031d198  li 4, 3
  031d19c  stb 3, 48(31)
  031d1a0  stb 4, 32(31)
  031d1a4  b 0x31d1c4
  031d1a8  addic 6, 31, 16
  031d1ac  addic 7, 31, 64
  031d1b0  ori 3, 29, 0
  031d1b4  li 5, 0
  031d1b8  li 8, 0
  031d1bc  bl 0x117390
  031d1c0  nop
  031d1c4  lbz 3, 188(31)
  031d1c8  cmpwi 3, 0
  031d1cc  bt 2, 0x31d1d8
  031d1d0  li 3, 0
  031d1d4  stw 3, 148(31)
  031d1d8  ori 3, 31, 0
  031d1dc  lhz 4, 20(30)
  031d1e0  extsh 4, 4
  031d1e4  bl 0x15cc7c
  031d1e8  nop
  031d1ec  cmpwi 3, 0
  031d1f0  bf 2, 0x31d20c
  031d1f4  li 3, 0
  031d1f8  li 4, 4
  031d1fc  ori 5, 31, 0
  031d200  bl 0x15d12c
  031d204  nop
  031d208  sth 3, 20(30)
  031d20c  lhz 3, 22(30)
  031d210  cmpwi 3, 0
  031d214  bf 2, 0x31d350
  031d218  lis 3, 151
  031d21c  lfs 1, 20(31)
  031d220  lfs 2, 16(31)
  031d224  addic 3, 3, -25376
  031d228  lfs 3, 132(3)
  031d22c  lfs 4, 128(3)
  031d230  fsubs 1, 1, 3
  031d234  fsubs 2, 2, 4
  031d238  lis 3, 50
  031d23c  addi 3, 3, -12312
  031d240  fmuls 1, 1, 1
  031d244  fmadds 1, 2, 2, 1
  031d248  lfs 2, 0(3)
  031d24c  fsqrts 1, 1
  031d250  fcmpu 0, 1, 2
  031d254  cror 6, 1, 2
  031d258  bt 6, 0x31d350
  031d25c  li 6, 1
  031d260  li 3, 1
  031d264  li 4, 0
  031d268  ori 5, 31, 0
  031d26c  sth 6, 22(30)
  031d270  bl 0x15d12c
  031d274  nop
  031d278  b 0x31d350
  031d27c  lbz 3, 49(31)
  031d280  cmpwi 3, 0
  031d284  bf 2, 0x31d2a0
  031d288  li 3, 0
  031d28c  lhz 4, 52(31)
  031d290  ori 4, 4, 1
  031d294  stb 3, 49(31)
  031d298  stw 3, 148(31)
  031d29c  sth 4, 52(31)
  031d2a0  lis 3, 151
  031d2a4  addic 3, 3, -25376
  031d2a8  lwz 3, 8332(3)
  031d2ac  cmpwi 3, 15
  031d2b0  bt 2, 0x31d350
  031d2b4  lfs 1, 16(29)
  031d2b8  lis 5, 50
  031d2bc  stfs 1, 112(1)
  031d2c0  lis 4, 16448
  031d2c4  lfs 1, 20(29)
  031d2c8  addi 5, 5, -12312
  031d2cc  stfs 1, 116(1)
  031d2d0  lfs 1, 24(29)
  031d2d4  addic 3, 1, 112
  031d2d8  stw 4, 124(1)
  031d2dc  stfs 1, 120(1)
  031d2e0  lfs 1, 4(5)
  031d2e4  bl 0x502910
  031d2e8  nop
  031d2ec  cmpwi 3, -1
  031d2f0  bf 2, 0x31d350
  031d2f4  lis 3, 50
  031d2f8  li 28, 0
  031d2fc  addi 4, 3, -12312
  031d300  ori 3, 29, 0
  031d304  addic 6, 31, 16
  031d308  stb 28, 188(31)
  031d30c  addic 7, 31, 64
  031d310  li 5, 0
  031d314  lfs 1, 8(4)
  031d318  stw 28, 16(30)
  031d31c  li 8, 0
  031d320  bl 0x117390
  031d324  nop
  031d328  lhz 3, 52(31)
  031d32c  li 5, 1
  031d330  lwz 4, 36(31)
  031d334  rlwinm 3, 3, 0, 0, 30
  031d338  stb 5, 49(31)
  031d33c  sth 3, 52(31)
  031d340  lwz 3, 16(4)
  031d344  sth 28, 22(30)
  031d348  stw 3, 148(31)
  031d34c  stb 5, 32(31)
  031d350  ld 0, 176(1)
  031d354  mtlr 0
  031d358  ld 28, 128(1)
  031d35c  ld 29, 136(1)
  031d360  ld 30, 144(1)
  031d364  ld 31, 152(1)
  031d368  addi 1, 1, 160
  031d36c  blr
