# game/update/moby1440.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1440_0027caec:   # 0x27caec, 0x14 bytes
  027caec  lis 3, 123
  027caf0  lis 4, 1
  027caf4  addic 3, 3, -22708
  027caf8  stw 4, 72(3)
  027cafc  blr

M1440_0027cb28:   # 0x27cb28, 0x208 bytes
  027cb28  stdu 1, -240(1)
  027cb2c  mflr 0
  027cb30  std 0, 256(1)
  027cb34  stfd 28, 208(1)
  027cb38  stfd 29, 216(1)
  027cb3c  stfd 30, 224(1)
  027cb40  stfd 31, 232(1)
  027cb44  addi 0, 1, 144
  027cb48  stvx 31, 0, 0
  027cb4c  std 31, 200(1)
  027cb50  std 30, 192(1)
  027cb54  ori 31, 3, 0
  027cb58  lis 30, 40
  027cb5c  std 28, 176(1)
  027cb60  li 4, 1
  027cb64  addi 30, 30, -13568
  027cb68  std 29, 184(1)
  027cb6c  lwz 28, 120(31)
  027cb70  addic 29, 28, 448
  027cb74  std 27, 168(1)
  027cb78  std 26, 160(1)
  027cb7c  ori 5, 29, 0
  027cb80  bl 0xf1114
  027cb84  nop
  027cb88  lfs 1, 0(30)
  027cb8c  addic 27, 1, 112
  027cb90  lfs 2, 456(28)
  027cb94  ori 3, 27, 0
  027cb98  fsubs 1, 2, 1
  027cb9c  stfs 1, 456(28)
  027cba0  lfs 1, 4(30)
  027cba4  lfs 2, 8(30)
  027cba8  bl 0xfe788
  027cbac  nop
  027cbb0  ori 3, 29, 0
  027cbb4  ori 4, 27, 0
  027cbb8  li 5, 127
  027cbbc  ori 6, 31, 0
  027cbc0  bl 0x133580
  027cbc4  nop
  027cbc8  ori 28, 3, 0
  027cbcc  cmpwi 28, 0
  027cbd0  bt 2, 0x27cbe8
  027cbd4  lfs 1, 12(30)
  027cbd8  lfs 2, 16(30)
  027cbdc  bl 0xfcbe8
  027cbe0  nop
  027cbe4  stfs 1, 12(28)
  027cbe8  li 3, 28
  027cbec  lfs 28, 20(30)
  027cbf0  lfs 29, 24(30)
  027cbf4  lis 28, 161
  027cbf8  lfs 30, 28(30)
  027cbfc  li 26, 0
  027cc00  addic 28, 28, 23856
  027cc04  lvlx 31, 3, 30
  027cc08  lfs 31, 32(30)
  027cc0c  vspltw 31, 31, 0
  027cc10  ori 3, 29, 0
  027cc14  ori 4, 28, 0
  027cc18  li 5, 127
  027cc1c  ori 6, 31, 0
  027cc20  bl 0x133580
  027cc24  nop
  027cc28  ori 27, 3, 0
  027cc2c  cmpwi 27, 0
  027cc30  bt 2, 0x27ccd0
  027cc34  cmpwi 26, 2
  027cc38  bf 2, 0x27cc58
  027cc3c  li 3, 8
  027cc40  bl 0xfc620
  027cc44  nop
  027cc48  cmpwi 3, 0
  027cc4c  bf 2, 0x27cc58
  027cc50  lfs 1, 36(30)
  027cc54  b 0x27cc68
  027cc58  fmr 1, 28
  027cc5c  fmr 2, 29
  027cc60  bl 0xfcbe8
  027cc64  nop
  027cc68  vspltisw 2, -1
  027cc6c  lis 3, 114
  027cc70  li 4, -3056
  027cc74  stfs 1, 12(27)
  027cc78  vslw 2, 2, 2
  027cc7c  lvlx 3, 4, 3
  027cc80  lfs 1, -3056(3)
  027cc84  li 4, 10
  027cc88  vmaddfp 2, 3, 31, 2
  027cc8c  fmuls 1, 1, 30
  027cc90  fctiwz 1, 1
  027cc94  vctsxs 2, 2, 0
  027cc98  stfd 1, 128(1)
  027cc9c  vsplth 2, 2, 1
  027cca0  lwz 3, 132(1)
  027cca4  extsh 3, 3
  027cca8  stvehx 2, 4, 27
  027ccac  bl 0x502730
  027ccb0  nop
  027ccb4  fdivs 1, 31, 1
  027ccb8  lis 3, 127
  027ccbc  li 4, 3
  027ccc0  ori 3, 3, 32639
  027ccc4  sth 4, 54(27)
  027ccc8  stw 3, 56(27)
  027cccc  stfs 1, 48(27)
  027ccd0  addic 26, 26, 1
  027ccd4  cmpwi 26, 3
  027ccd8  bt 0, 0x27cc10
  027ccdc  lis 3, 113
  027cce0  ori 4, 31, 0
  027cce4  addic 3, 3, -22928
  027cce8  bl 0x6d7e0
  027ccec  nop
  027ccf0  li 0, 144
  027ccf4  lvx 31, 1, 0
  027ccf8  ld 0, 256(1)
  027ccfc  mtlr 0
  027cd00  lfd 28, 208(1)
  027cd04  lfd 29, 216(1)
  027cd08  lfd 30, 224(1)
  027cd0c  lfd 31, 232(1)
  027cd10  ld 26, 160(1)
  027cd14  ld 27, 168(1)
  027cd18  ld 28, 176(1)
  027cd1c  ld 29, 184(1)
  027cd20  ld 30, 192(1)
  027cd24  ld 31, 200(1)
  027cd28  addi 1, 1, 240
  027cd2c  blr

M1440_0027cd50:   # 0x27cd50, 0x70c bytes
  027cd50  stdu 1, -224(1)
  027cd54  mflr 0
  027cd58  std 0, 240(1)
  027cd5c  stfd 31, 216(1)
  027cd60  std 31, 208(1)
  027cd64  lbz 4, 32(3)
  027cd68  std 30, 200(1)
  027cd6c  ori 31, 3, 0
  027cd70  lwz 30, 120(3)
  027cd74  std 29, 192(1)
  027cd78  std 28, 184(1)
  027cd7c  cmpwi 4, 0
  027cd80  bt 2, 0x27d438
  027cd84  lwz 3, 56(30)
  027cd88  cmpwi 3, 0
  027cd8c  bt 2, 0x27cde8
  027cd90  li 5, 0
  027cd94  li 3, 180
  027cd98  li 4, 300
  027cd9c  stw 5, 56(30)
  027cda0  bl 0xfe484
  027cda4  nop
  027cda8  extsw 3, 3
  027cdac  lis 4, 114
  027cdb0  std 3, 168(1)
  027cdb4  lis 3, 40
  027cdb8  addi 3, 3, -13008
  027cdbc  lfs 1, 0(3)
  027cdc0  lfs 2, -3056(4)
  027cdc4  lfd 3, 168(1)
  027cdc8  fcfid 3, 3
  027cdcc  frsp 3, 3
  027cdd0  fadds 1, 3, 1
  027cdd4  fmuls 1, 2, 1
  027cdd8  fctiwz 1, 1
  027cddc  stfd 1, 168(1)
  027cde0  lwz 3, 172(1)
  027cde4  sth 3, 474(30)
  027cde8  addic 3, 30, 474
  027cdec  bl 0x4fffb4
  027cdf0  nop
  027cdf4  lis 3, 40
  027cdf8  li 6, 0
  027cdfc  addi 7, 3, -13008
  027ce00  ori 3, 31, 0
  027ce04  lis 4, 51
  027ce08  li 5, 0
  027ce0c  lfs 31, 4(7)
  027ce10  stw 6, 116(1)
  027ce14  bl 0x10675c
  027ce18  nop
  027ce1c  ori 29, 3, 0
  027ce20  ori 3, 31, 0
  027ce24  addic 5, 30, 32
  027ce28  li 6, 0
  027ce2c  addic 7, 1, 112
  027ce30  li 9, 0
  027ce34  addic 8, 1, 116
  027ce38  ori 4, 29, 0
  027ce3c  li 10, 4
  027ce40  bl 0x106840
  027ce44  nop
  027ce48  lwz 3, 112(1)
  027ce4c  cmpwi 3, 1
  027ce50  bt 2, 0x27d250
  027ce54  lbz 3, 32(31)
  027ce58  cmpwi 3, 8
  027ce5c  bt 2, 0x27d250
  027ce60  lwz 3, 116(1)
  027ce64  lfs 3, 116(1)
  027ce68  cmpwi 3, 0
  027ce6c  bt 2, 0x27d250
  027ce70  lfs 1, 32(30)
  027ce74  lis 3, 40
  027ce78  fsubs 1, 1, 3
  027ce7c  li 4, 512
  027ce80  addi 3, 3, -13008
  027ce84  lis 5, 16128
  027ce88  lis 6, 123
  027ce8c  stw 4, 144(30)
  027ce90  lis 7, 123
  027ce94  lis 4, 114
  027ce98  lis 9, 123
  027ce9c  lis 8, 123
  027cea0  li 10, 0
  027cea4  fcmpu 0, 1, 31
  027cea8  stfs 1, 32(30)
  027ceac  lfs 3, 0(3)
  027ceb0  stw 5, 152(30)
  027ceb4  lfs 2, -22588(6)
  027ceb8  lfs 4, -3048(4)
  027cebc  lis 4, 114
  027cec0  fmuls 2, 2, 4
  027cec4  stfs 2, 128(30)
  027cec8  lfs 1, -22584(7)
  027cecc  fmuls 1, 1, 4
  027ced0  stfs 1, 132(30)
  027ced4  lfs 1, -22580(9)
  027ced8  lfs 4, -3052(4)
  027cedc  lfs 2, -22576(8)
  027cee0  stb 10, 173(30)
  027cee4  lfs 5, 8(3)
  027cee8  fmuls 1, 1, 4
  027ceec  fmuls 2, 2, 4
  027cef0  fmuls 4, 4, 5
  027cef4  stfs 4, 188(30)
  027cef8  bt 1, 0x27cfc4
  027cefc  stfs 2, 140(30)
  027cf00  li 28, 0
  027cf04  stfs 1, 136(30)
  027cf08  li 3, 41
  027cf0c  lhz 4, 52(31)
  027cf10  addic 5, 1, 120
  027cf14  addic 6, 30, 136
  027cf18  rlwimi 4, 28, 0, 19, 19
  027cf1c  stw 3, 148(30)
  027cf20  addic 7, 30, 140
  027cf24  sth 4, 52(31)
  027cf28  lfs 1, 16(29)
  027cf2c  lfs 2, 24(29)
  027cf30  stfs 1, 48(1)
  027cf34  stfs 2, 56(1)
  027cf38  lfs 1, 20(29)
  027cf3c  lfs 2, 28(29)
  027cf40  stfs 1, 52(1)
  027cf44  stfs 2, 60(1)
  027cf48  ld 3, 48(1)
  027cf4c  ld 4, 56(1)
  027cf50  bl 0x107de8
  027cf54  nop
  027cf58  ori 3, 31, 0
  027cf5c  addic 4, 30, 112
  027cf60  lfs 1, 120(1)
  027cf64  li 6, 11
  027cf68  li 7, 1
  027cf6c  li 8, 0
  027cf70  bl 0x10ad80
  027cf74  nop
  027cf78  lis 3, 16608
  027cf7c  lis 6, 16768
  027cf80  li 7, 8
  027cf84  li 5, 120
  027cf88  stw 3, 192(30)
  027cf8c  stw 28, 148(31)
  027cf90  addic 4, 30, 96
  027cf94  stw 6, 196(30)
  027cf98  ori 3, 31, 0
  027cf9c  stb 7, 32(31)
  027cfa0  stb 5, 103(30)
  027cfa4  bl 0x10c808
  027cfa8  nop
  027cfac  ori 3, 31, 0
  027cfb0  li 4, 0
  027cfb4  li 5, -1
  027cfb8  bl 0xfd8d0
  027cfbc  nop
  027cfc0  b 0x27d244
  027cfc4  lis 3, 40
  027cfc8  fmuls 2, 2, 3
  027cfcc  li 4, 9
  027cfd0  addi 3, 3, -13008
  027cfd4  addic 5, 1, 124
  027cfd8  addic 6, 30, 136
  027cfdc  addic 7, 30, 140
  027cfe0  lfs 3, 12(3)
  027cfe4  stw 4, 148(30)
  027cfe8  fmuls 1, 1, 3
  027cfec  stfs 2, 140(30)
  027cff0  stfs 1, 136(30)
  027cff4  lfs 1, 16(29)
  027cff8  lfs 2, 24(29)
  027cffc  stfs 1, 48(1)
  027d000  stfs 2, 56(1)
  027d004  lfs 1, 20(29)
  027d008  lfs 2, 28(29)
  027d00c  stfs 1, 52(1)
  027d010  stfs 2, 60(1)
  027d014  ld 3, 48(1)
  027d018  ld 4, 56(1)
  027d01c  bl 0x107de8
  027d020  nop
  027d024  lwz 4, 16(29)
  027d028  lwz 3, 20(29)
  027d02c  lfs 1, 16(29)
  027d030  lfs 2, 20(29)
  027d034  fabs 4, 1
  027d038  fabs 5, 2
  027d03c  rlwinm 5, 3, 3, 29, 29
  027d040  lis 6, 115
  027d044  addic 3, 30, 112
  027d048  addic 6, 6, 22784
  027d04c  fsubs 1, 4, 5
  027d050  stfs 1, 128(1)
  027d054  lwz 7, 128(1)
  027d058  lfs 1, 128(1)
  027d05c  rlwimi 5, 7, 2, 30, 30
  027d060  fsub 3, 1, 31
  027d064  fsub 6, 1, 31
  027d068  rlwimi 5, 4, 4, 28, 28
  027d06c  ori 4, 6, 0
  027d070  rlwimi 4, 5, 2, 26, 28
  027d074  slwi 5, 5, 2
  027d078  clrldi 4, 4, 32
  027d07c  fsel 3, 3, 4, 5
  027d080  lfsx 2, 6, 5
  027d084  lfs 1, 4(4)
  027d088  fsel 4, 6, 5, 4
  027d08c  fcmpu 0, 3, 31
  027d090  bt 1, 0x27d098
  027d094  b 0x27d1bc
  027d098  fsubs 5, 4, 3
  027d09c  fadds 3, 4, 3
  027d0a0  addic 7, 1, 16
  027d0a4  li 4, 2
  027d0a8  addic 5, 7, 132
  027d0ac  addic 6, 7, 116
  027d0b0  mtctr 4
  027d0b4  fdivs 3, 5, 3
  027d0b8  fmuls 5, 3, 3
  027d0bc  stfs 3, 144(1)
  027d0c0  stfs 3, 136(1)
  027d0c4  stfs 3, 140(1)
  027d0c8  stfs 3, 132(1)
  027d0cc  lfs 6, 144(1)
  027d0d0  lfs 7, 136(1)
  027d0d4  lfs 8, 140(1)
  027d0d8  fmuls 3, 5, 5
  027d0dc  fmuls 7, 7, 5
  027d0e0  fmuls 6, 6, 3
  027d0e4  fmuls 4, 3, 3
  027d0e8  fmuls 3, 8, 3
  027d0ec  stfs 7, 136(1)
  027d0f0  fmuls 5, 6, 5
  027d0f4  stfs 3, 140(1)
  027d0f8  stfs 5, 144(1)
  027d0fc  lfs 3, 116(7)
  027d100  fmuls 3, 3, 4
  027d104  stfs 3, 132(7)
  027d108  lfs 3, 4(6)
  027d10c  addic 6, 6, 8
  027d110  fmuls 3, 3, 4
  027d114  addic 7, 7, 8
  027d118  stfs 3, 4(5)
  027d11c  addic 5, 5, 8
  027d120  bdnz 0x27d0fc
  027d124  ori 8, 1, 0
  027d128  li 5, 4
  027d12c  lis 7, 115
  027d130  addic 6, 8, 132
  027d134  mtctr 5
  027d138  addic 7, 7, 22752
  027d13c  ori 5, 6, 0
  027d140  lfs 3, 132(8)
  027d144  lfs 4, 0(7)
  027d148  fmuls 3, 3, 4
  027d14c  lfs 4, 4(7)
  027d150  addic 7, 7, 8
  027d154  stfs 3, 132(8)
  027d158  lfs 3, 4(6)
  027d15c  addic 8, 8, 8
  027d160  fmuls 3, 3, 4
  027d164  stfs 3, 4(6)
  027d168  addic 6, 6, 8
  027d16c  bdnz 0x27d140
  027d170  ori 6, 4, 0
  027d174  ori 4, 1, 0
  027d178  mtctr 6
  027d17c  lfs 3, 132(4)
  027d180  lfs 4, 4(5)
  027d184  fadds 3, 31, 3
  027d188  lfs 5, 8(5)
  027d18c  lfs 31, 12(5)
  027d190  addic 4, 4, 16
  027d194  addic 5, 5, 16
  027d198  fadds 3, 3, 4
  027d19c  fadds 3, 3, 5
  027d1a0  fadds 31, 3, 31
  027d1a4  bdnz 0x27d17c
  027d1a8  lis 4, 40
  027d1ac  addi 4, 4, -13008
  027d1b0  lfs 3, 16(4)
  027d1b4  fadds 31, 31, 3
  027d1b8  fmadds 31, 31, 2, 1
  027d1bc  ori 4, 3, 0
  027d1c0  fmr 1, 31
  027d1c4  ori 3, 31, 0
  027d1c8  li 6, 8
  027d1cc  li 7, 1
  027d1d0  li 8, 0
  027d1d4  bl 0x10ad80
  027d1d8  nop
  027d1dc  lis 3, -16512
  027d1e0  vspltisw 2, -1
  027d1e4  lis 6, 40
  027d1e8  li 5, 7
  027d1ec  li 4, 20
  027d1f0  stw 3, 192(30)
  027d1f4  stw 3, 196(30)
  027d1f8  li 7, 250
  027d1fc  addi 3, 6, -13008
  027d200  stb 5, 32(31)
  027d204  lis 5, 114
  027d208  vslw 2, 2, 2
  027d20c  li 6, -3056
  027d210  stb 7, 103(30)
  027d214  lvlx 3, 4, 3
  027d218  vspltw 3, 3, 0
  027d21c  lvlx 4, 6, 5
  027d220  addic 4, 30, 96
  027d224  li 5, 38
  027d228  vmaddfp 2, 4, 3, 2
  027d22c  ori 3, 31, 0
  027d230  vctsxs 2, 2, 0
  027d234  vsplth 2, 2, 1
  027d238  stvehx 2, 5, 30
  027d23c  bl 0x10c808
  027d240  nop
  027d244  ori 3, 31, 0
  027d248  bl 0x288888
  027d24c  nop
  027d250  li 5, 255
  027d254  ori 3, 31, 0
  027d258  addic 4, 30, 96
  027d25c  stb 5, 164(31)
  027d260  bl 0x10c9a0
  027d264  nop
  027d268  lbz 3, 32(31)
  027d26c  cmpwi 3, 1
  027d270  bf 2, 0x27d2c0
  027d274  lis 3, 165
  027d278  lwz 6, 436(30)
  027d27c  lis 4, 40
  027d280  addic 5, 3, 7136
  027d284  slwi 6, 6, 2
  027d288  addi 3, 4, -13008
  027d28c  extsw 7, 6
  027d290  addic 4, 30, 208
  027d294  li 6, 0
  027d298  lfs 1, 24(3)
  027d29c  lwzx 5, 5, 7
  027d2a0  ori 3, 31, 0
  027d2a4  li 7, 0
  027d2a8  addic 8, 5, 16
  027d2ac  lwz 9, 0(5)
  027d2b0  extsw 9, 9
  027d2b4  bl 0x111ba0
  027d2b8  nop
  027d2bc  b 0x27d33c
  027d2c0  cmpwi 3, 5
  027d2c4  bt 2, 0x27d33c
  027d2c8  lis 3, 123
  027d2cc  lfs 31, -22592(3)
  027d2d0  lhz 3, 474(30)
  027d2d4  cmpwi 3, 0
  027d2d8  bt 2, 0x27d2e8
  027d2dc  lis 3, 40
  027d2e0  addi 3, 3, -13008
  027d2e4  lfs 31, 28(3)
  027d2e8  ori 3, 31, 0
  027d2ec  addic 5, 30, 208
  027d2f0  fmr 1, 31
  027d2f4  bl 0x1118d8
  027d2f8  nop
  027d2fc  cmpwi 3, 2
  027d300  bt 2, 0x27d33c
  027d304  lfs 1, 20(31)
  027d308  lfs 2, 212(30)
  027d30c  lfs 3, 16(31)
  027d310  fsubs 1, 1, 2
  027d314  lfs 2, 208(30)
  027d318  fsubs 2, 3, 2
  027d31c  fmuls 1, 1, 1
  027d320  fmadds 1, 2, 2, 1
  027d324  fsqrts 1, 1
  027d328  fcmpu 0, 1, 31
  027d32c  cror 6, 0, 2
  027d330  bt 6, 0x27d33c
  027d334  li 3, 2
  027d338  stw 3, 276(30)
  027d33c  lwz 3, 272(30)
  027d340  cmpwi 3, 0
  027d344  bf 2, 0x27d378
  027d348  lis 3, 151
  027d34c  addic 4, 3, -25376
  027d350  lfs 1, 128(4)
  027d354  lwz 3, 8320(4)
  027d358  stfs 1, 208(30)
  027d35c  lfs 1, 132(4)
  027d360  stw 3, 272(30)
  027d364  stfs 1, 212(30)
  027d368  lfs 1, 136(4)
  027d36c  stfs 1, 216(30)
  027d370  lfs 1, 140(4)
  027d374  stfs 1, 220(30)
  027d378  lwz 4, 444(30)
  027d37c  cmpwi 4, -1
  027d380  bf 1, 0x27d438
  027d384  lis 5, 164
  027d388  slwi 4, 4, 8
  027d38c  lwz 5, -28512(5)
  027d390  addc 4, 5, 4
  027d394  clrldi 4, 4, 32
  027d398  cmpwi 4, 0
  027d39c  bt 2, 0x27d3b4
  027d3a0  lbz 5, 32(4)
  027d3a4  cmpwi 5, 254
  027d3a8  cmpwi 1, 5, 253
  027d3ac  bt 2, 0x27d3b4
  027d3b0  bf 6, 0x27d3c0
  027d3b4  li 3, -1
  027d3b8  stw 3, 444(30)
  027d3bc  b 0x27d438
  027d3c0  lfs 1, 20(31)
  027d3c4  lfs 2, 20(4)
  027d3c8  lfs 3, 20(3)
  027d3cc  fsubs 2, 1, 2
  027d3d0  lfs 4, 16(31)
  027d3d4  fsubs 1, 1, 3
  027d3d8  lfs 3, 16(4)
  027d3dc  lfs 5, 16(3)
  027d3e0  fsubs 3, 4, 3
  027d3e4  fsubs 4, 4, 5
  027d3e8  fmuls 2, 2, 2
  027d3ec  fmuls 1, 1, 1
  027d3f0  fmadds 2, 3, 3, 2
  027d3f4  fmadds 1, 4, 4, 1
  027d3f8  fsqrts 2, 2
  027d3fc  fsqrts 1, 1
  027d400  fcmpu 0, 2, 1
  027d404  cror 6, 1, 2
  027d408  bt 6, 0x27d438
  027d40c  stw 4, 272(30)
  027d410  li 3, 1
  027d414  lfs 1, 16(4)
  027d418  stfs 1, 208(30)
  027d41c  lfs 1, 20(4)
  027d420  stfs 1, 212(30)
  027d424  lfs 1, 24(4)
  027d428  stfs 1, 216(30)
  027d42c  lfs 1, 28(4)
  027d430  stw 3, 276(30)
  027d434  stfs 1, 220(30)
  027d438  ld 0, 240(1)
  027d43c  mtlr 0
  027d440  lfd 31, 216(1)
  027d444  ld 28, 184(1)
  027d448  ld 29, 192(1)
  027d44c  ld 30, 200(1)
  027d450  ld 31, 208(1)
  027d454  addi 1, 1, 224
  027d458  blr

UpdateMoby_1440:   # 0x27d4c8, 0x17f4 bytes
  027d4c8  stdu 1, -608(1)
  027d4cc  mflr 0
  027d4d0  std 0, 624(1)
  027d4d4  stfd 27, 568(1)
  027d4d8  stfd 28, 576(1)
  027d4dc  stfd 29, 584(1)
  027d4e0  stfd 30, 592(1)
  027d4e4  stfd 31, 600(1)
  027d4e8  std 31, 560(1)
  027d4ec  ori 31, 3, 0
  027d4f0  std 29, 544(1)
  027d4f4  lis 3, 40
  027d4f8  addi 29, 3, -11172
  027d4fc  std 30, 552(1)
  027d500  ori 3, 31, 0
  027d504  std 28, 536(1)
  027d508  std 27, 528(1)
  027d50c  std 26, 520(1)
  027d510  lwz 30, 120(31)
  027d514  bl 0x27cd50
  027d518  addic 28, 30, 288
  027d51c  lfs 1, 0(29)
  027d520  lwz 29, 272(30)
  027d524  ori 3, 28, 0
  027d528  bl 0x119ac0
  027d52c  nop
  027d530  lis 3, 151
  027d534  addic 3, 3, -16268
  027d538  lbz 3, 7(3)
  027d53c  cmpwi 3, 0
  027d540  bt 2, 0x27d578
  027d544  lis 3, 40
  027d548  lis 4, 114
  027d54c  addi 3, 3, -11172
  027d550  li 5, 2
  027d554  lfs 1, 4(3)
  027d558  lfs 2, 8(3)
  027d55c  lfs 3, -3060(4)
  027d560  ori 3, 31, 0
  027d564  ori 4, 28, 0
  027d568  fmuls 1, 3, 1
  027d56c  fmuls 2, 3, 2
  027d570  bl 0x1167c8
  027d574  nop
  027d578  lbz 3, 49(31)
  027d57c  cmpwi 3, 0
  027d580  bt 2, 0x27d5ec
  027d584  lis 3, 149
  027d588  lfs 1, 20(31)
  027d58c  addic 3, 3, 5056
  027d590  lfs 2, 16(31)
  027d594  lfs 3, 324(3)
  027d598  lfs 4, 320(3)
  027d59c  fsubs 1, 1, 3
  027d5a0  fsubs 2, 2, 4
  027d5a4  lfs 3, 24(31)
  027d5a8  lfs 4, 328(3)
  027d5ac  fsubs 3, 3, 4
  027d5b0  lis 3, 40
  027d5b4  fmuls 1, 1, 1
  027d5b8  addi 3, 3, -11172
  027d5bc  fmadds 1, 2, 2, 1
  027d5c0  lfs 2, 12(3)
  027d5c4  fmadds 1, 3, 3, 1
  027d5c8  fsqrts 1, 1
  027d5cc  fcmpu 0, 1, 2
  027d5d0  cror 6, 1, 2
  027d5d4  bt 6, 0x27d5ec
  027d5d8  ori 3, 31, 0
  027d5dc  bl 0x106360
  027d5e0  nop
  027d5e4  li 3, 21
  027d5e8  stb 3, 127(31)
  027d5ec  lbz 3, 32(31)
  027d5f0  cmpwi 3, 3
  027d5f4  cmpwi 1, 3, 0
  027d5f8  cmpwi 6, 3, -1
  027d5fc  cmpwi 7, 3, 1
  027d600  bt 1, 0x27d620
  027d604  bt 5, 0x27d610
  027d608  bf 25, 0x27ec78
  027d60c  b 0x27d650
  027d610  bf 29, 0x27d79c
  027d614  cmpwi 3, 2
  027d618  bf 1, 0x27d8c0
  027d61c  b 0x27dc74
  027d620  cmpwi 3, 6
  027d624  bt 1, 0x27d63c
  027d628  cmpwi 3, 4
  027d62c  bf 1, 0x27dff0
  027d630  cmpwi 3, 5
  027d634  bf 1, 0x27e25c
  027d638  b 0x27e884
  027d63c  cmpwi 3, 7
  027d640  bf 1, 0x27eae8
  027d644  cmpwi 3, 8
  027d648  bf 1, 0x27eb5c
  027d64c  b 0x27ec78
  027d650  lfs 1, 16(31)
  027d654  lis 3, 16384
  027d658  li 4, 2
  027d65c  stfs 1, 416(30)
  027d660  lfs 1, 20(31)
  027d664  lis 5, 40
  027d668  li 29, 1
  027d66c  stfs 1, 420(30)
  027d670  lfs 1, 24(31)
  027d674  li 6, 0
  027d678  addi 28, 5, -11172
  027d67c  stfs 1, 424(30)
  027d680  lfs 1, 28(31)
  027d684  stw 3, 32(30)
  027d688  stfs 1, 428(30)
  027d68c  sth 4, 36(30)
  027d690  stb 29, 40(30)
  027d694  stb 6, 41(30)
  027d698  lfs 1, 16(28)
  027d69c  bl 0x502758
  027d6a0  nop
  027d6a4  stb 3, 88(30)
  027d6a8  lfs 1, 20(28)
  027d6ac  bl 0x502758
  027d6b0  nop
  027d6b4  stb 3, 90(30)
  027d6b8  li 3, 2
  027d6bc  stw 29, 476(30)
  027d6c0  bl 0xfc620
  027d6c4  nop
  027d6c8  cmpwi 3, 0
  027d6cc  lbz 4, 83(31)
  027d6d0  bt 2, 0x27d6e8
  027d6d4  lis 3, 0
  027d6d8  lhz 5, 52(31)
  027d6dc  ori 3, 3, 32768
  027d6e0  or 3, 5, 3
  027d6e4  sth 3, 52(31)
  027d6e8  lwz 3, 440(30)
  027d6ec  cmpwi 3, -1
  027d6f0  bf 1, 0x27d770
  027d6f4  lwz 5, 436(30)
  027d6f8  cmpwi 5, -1
  027d6fc  bf 2, 0x27d710
  027d700  ori 3, 31, 0
  027d704  bl 0xefb38
  027d708  nop
  027d70c  b 0x27ec80
  027d710  lis 5, 165
  027d714  slwi 3, 3, 2
  027d718  addic 5, 5, 7136
  027d71c  extsw 3, 3
  027d720  li 6, 1
  027d724  cmpwi 4, 1
  027d728  lwzx 3, 5, 3
  027d72c  lfs 1, 16(3)
  027d730  stfs 1, 16(31)
  027d734  lfs 1, 20(3)
  027d738  stfs 1, 20(31)
  027d73c  lfs 1, 24(3)
  027d740  stfs 1, 24(31)
  027d744  lfs 1, 28(3)
  027d748  stb 6, 32(31)
  027d74c  stfs 1, 28(31)
  027d750  bt 2, 0x27ec78
  027d754  ori 3, 31, 0
  027d758  li 4, 1
  027d75c  li 5, 0
  027d760  li 6, 5
  027d764  bl 0xfddc0
  027d768  nop
  027d76c  b 0x27ec78
  027d770  li 3, 3
  027d774  cmpwi 4, 1
  027d778  stb 3, 32(31)
  027d77c  bt 2, 0x27ec78
  027d780  ori 3, 31, 0
  027d784  li 4, 1
  027d788  li 5, 0
  027d78c  li 6, 5
  027d790  bl 0xfddc0
  027d794  nop
  027d798  b 0x27ec78
  027d79c  lbz 3, 112(31)
  027d7a0  rlwinm 3, 3, 0, 30, 30
  027d7a4  cmpwi 3, 0
  027d7a8  bt 2, 0x27d860
  027d7ac  lbz 3, 83(31)
  027d7b0  cmpwi 3, 1
  027d7b4  bf 2, 0x27d81c
  027d7b8  li 3, 4
  027d7bc  bl 0xfc620
  027d7c0  nop
  027d7c4  ori 4, 3, 0
  027d7c8  lbz 3, 83(31)
  027d7cc  cmpwi 4, 0
  027d7d0  bf 2, 0x27d81c
  027d7d4  cmpwi 3, 2
  027d7d8  bt 2, 0x27d860
  027d7dc  lis 3, 40
  027d7e0  lis 4, 114
  027d7e4  addi 3, 3, -11172
  027d7e8  li 5, 0
  027d7ec  lfs 1, 24(3)
  027d7f0  lfs 2, -3056(4)
  027d7f4  ori 3, 31, 0
  027d7f8  li 4, 2
  027d7fc  fmuls 1, 2, 1
  027d800  fctiwz 1, 1
  027d804  stfd 1, 496(1)
  027d808  lwz 6, 500(1)
  027d80c  extsw 6, 6
  027d810  bl 0xfddc0
  027d814  nop
  027d818  b 0x27d860
  027d81c  cmpwi 3, 1
  027d820  bt 2, 0x27d860
  027d824  lis 3, 40
  027d828  lis 4, 114
  027d82c  addi 3, 3, -11172
  027d830  li 5, 0
  027d834  lfs 1, 24(3)
  027d838  lfs 2, -3056(4)
  027d83c  ori 3, 31, 0
  027d840  li 4, 1
  027d844  fmuls 1, 2, 1
  027d848  fctiwz 1, 1
  027d84c  stfd 1, 496(1)
  027d850  lwz 6, 500(1)
  027d854  extsw 6, 6
  027d858  bl 0xfddc0
  027d85c  nop
  027d860  lwz 3, 276(30)
  027d864  cmpwi 3, 2
  027d868  bt 2, 0x27ec78
  027d86c  li 3, 2
  027d870  lbz 4, 83(31)
  027d874  cmpwi 4, 9
  027d878  stb 3, 32(31)
  027d87c  bt 2, 0x27ec78
  027d880  lis 3, 40
  027d884  lis 4, 114
  027d888  addi 3, 3, -11172
  027d88c  li 5, 0
  027d890  lfs 1, 28(3)
  027d894  lfs 2, -3056(4)
  027d898  ori 3, 31, 0
  027d89c  fmuls 1, 2, 1
  027d8a0  li 4, 9
  027d8a4  fctiwz 1, 1
  027d8a8  stfd 1, 496(1)
  027d8ac  lwz 6, 500(1)
  027d8b0  extsw 6, 6
  027d8b4  bl 0xfddc0
  027d8b8  nop
  027d8bc  b 0x27ec78
  027d8c0  lis 3, 40
  027d8c4  li 4, 0
  027d8c8  addi 3, 3, -11172
  027d8cc  lis 5, 165
  027d8d0  addic 29, 5, 7136
  027d8d4  lfs 27, 32(3)
  027d8d8  stw 4, 272(1)
  027d8dc  lwz 3, 440(30)
  027d8e0  lwz 4, 476(30)
  027d8e4  slwi 3, 3, 2
  027d8e8  lfs 1, 16(31)
  027d8ec  slwi 4, 4, 4
  027d8f0  extsw 3, 3
  027d8f4  lwzx 29, 29, 3
  027d8f8  lfs 2, 20(31)
  027d8fc  addc 3, 29, 4
  027d900  clrldi 3, 3, 32
  027d904  lis 4, 115
  027d908  lfs 31, 16(3)
  027d90c  lfs 30, 20(3)
  027d910  fsubs 1, 31, 1
  027d914  lfs 29, 24(3)
  027d918  fsubs 2, 30, 2
  027d91c  addic 4, 4, 22784
  027d920  addic 3, 31, 72
  027d924  fabs 3, 1
  027d928  fabs 4, 2
  027d92c  stfs 1, 324(1)
  027d930  stfs 2, 328(1)
  027d934  fsubs 1, 3, 4
  027d938  stfs 1, 332(1)
  027d93c  lwz 5, 324(1)
  027d940  lfs 1, 324(1)
  027d944  lwz 6, 328(1)
  027d948  lfs 2, 328(1)
  027d94c  fabs 1, 1
  027d950  lwz 7, 332(1)
  027d954  rlwinm 6, 6, 3, 29, 29
  027d958  fabs 5, 2
  027d95c  lfs 2, 332(1)
  027d960  rlwimi 6, 7, 2, 30, 30
  027d964  fsub 6, 2, 27
  027d968  fsub 7, 2, 27
  027d96c  rlwimi 6, 5, 4, 28, 28
  027d970  ori 5, 4, 0
  027d974  rlwimi 5, 6, 2, 26, 28
  027d978  slwi 6, 6, 2
  027d97c  clrldi 5, 5, 32
  027d980  fsel 4, 6, 1, 4
  027d984  lfsx 1, 4, 6
  027d988  lfs 2, 4(5)
  027d98c  fsel 3, 7, 5, 3
  027d990  fcmpu 0, 4, 27
  027d994  bt 1, 0x27d9a0
  027d998  fmr 1, 27
  027d99c  b 0x27dac4
  027d9a0  fsubs 5, 3, 4
  027d9a4  fadds 3, 3, 4
  027d9a8  addic 4, 1, 16
  027d9ac  li 7, 2
  027d9b0  addic 5, 4, 448
  027d9b4  addic 6, 4, 464
  027d9b8  mtctr 7
  027d9bc  fdivs 3, 5, 3
  027d9c0  fmuls 4, 3, 3
  027d9c4  stfs 3, 476(1)
  027d9c8  stfs 3, 468(1)
  027d9cc  stfs 3, 472(1)
  027d9d0  stfs 3, 464(1)
  027d9d4  lfs 6, 476(1)
  027d9d8  lfs 7, 468(1)
  027d9dc  lfs 8, 472(1)
  027d9e0  fmuls 5, 4, 4
  027d9e4  fmuls 7, 7, 4
  027d9e8  fmuls 6, 6, 5
  027d9ec  fmuls 3, 5, 5
  027d9f0  fmuls 5, 8, 5
  027d9f4  stfs 7, 468(1)
  027d9f8  fmuls 4, 6, 4
  027d9fc  stfs 5, 472(1)
  027da00  stfs 4, 476(1)
  027da04  lfs 4, 448(4)
  027da08  fmuls 4, 4, 3
  027da0c  stfs 4, 464(4)
  027da10  lfs 4, 4(5)
  027da14  addic 4, 4, 8
  027da18  addic 5, 5, 8
  027da1c  fmuls 4, 4, 3
  027da20  stfs 4, 4(6)
  027da24  addic 6, 6, 8
  027da28  bdnz 0x27da04
  027da2c  li 6, 4
  027da30  ori 4, 1, 0
  027da34  mtctr 6
  027da38  lis 5, 115
  027da3c  addic 6, 4, 464
  027da40  addic 5, 5, 22752
  027da44  ori 8, 6, 0
  027da48  lfs 3, 464(4)
  027da4c  lfs 4, 0(5)
  027da50  fmuls 3, 3, 4
  027da54  lfs 4, 4(5)
  027da58  addic 5, 5, 8
  027da5c  stfs 3, 464(4)
  027da60  lfs 3, 4(6)
  027da64  addic 4, 4, 8
  027da68  fmuls 3, 3, 4
  027da6c  stfs 3, 4(6)
  027da70  addic 6, 6, 8
  027da74  bdnz 0x27da48
  027da78  fmr 3, 27
  027da7c  ori 4, 1, 0
  027da80  mtctr 7
  027da84  lfs 4, 464(4)
  027da88  fadds 3, 3, 4
  027da8c  addic 4, 4, 16
  027da90  lfs 4, 4(8)
  027da94  lfs 5, 8(8)
  027da98  lfs 6, 12(8)
  027da9c  addic 8, 8, 16
  027daa0  fadds 3, 3, 4
  027daa4  fadds 3, 3, 5
  027daa8  fadds 3, 3, 6
  027daac  bdnz 0x27da84
  027dab0  lis 4, 40
  027dab4  addi 4, 4, -11172
  027dab8  lfs 4, 36(4)
  027dabc  fadds 3, 3, 4
  027dac0  fmadds 1, 3, 1, 2
  027dac4  lis 4, 40
  027dac8  lis 27, 114
  027dacc  addi 28, 4, -11172
  027dad0  lis 26, 114
  027dad4  addic 5, 30, 464
  027dad8  lfs 4, 40(28)
  027dadc  lfs 3, -3048(27)
  027dae0  lfs 5, -3052(26)
  027dae4  fmuls 2, 3, 4
  027dae8  fmuls 4, 5, 4
  027daec  fmr 3, 2
  027daf0  bl 0x10a2e0
  027daf4  nop
  027daf8  lwz 3, 0(29)
  027dafc  lfs 1, 20(31)
  027db00  slwi 3, 3, 4
  027db04  lfs 2, 16(31)
  027db08  lfs 3, 24(31)
  027db0c  fsubs 30, 30, 1
  027db10  addc 3, 29, 3
  027db14  fsubs 31, 31, 2
  027db18  clrldi 3, 3, 32
  027db1c  fsubs 29, 29, 3
  027db20  addic 5, 30, 468
  027db24  lfs 4, 4(3)
  027db28  lfs 5, 0(3)
  027db2c  fsubs 1, 1, 4
  027db30  fsubs 4, 2, 5
  027db34  lfs 5, 8(3)
  027db38  lfs 6, 20(28)
  027db3c  addic 3, 1, 272
  027db40  fsubs 5, 3, 5
  027db44  lfs 7, 44(28)
  027db48  lfs 8, 48(28)
  027db4c  lfs 3, -3048(27)
  027db50  lfs 9, -3052(26)
  027db54  fmuls 2, 3, 6
  027db58  fmuls 1, 1, 1
  027db5c  fmuls 3, 3, 7
  027db60  fmadds 1, 4, 4, 1
  027db64  fmuls 4, 9, 8
  027db68  fmadds 1, 5, 5, 1
  027db6c  fsqrts 1, 1
  027db70  bl 0x109c30
  027db74  nop
  027db78  fmuls 1, 30, 30
  027db7c  fmadds 1, 31, 31, 1
  027db80  fmadds 28, 29, 29, 1
  027db84  lfs 1, 52(28)
  027db88  lfs 2, 468(30)
  027db8c  fmuls 1, 2, 1
  027db90  fsqrts 28, 28
  027db94  fcmpu 0, 28, 1
  027db98  cror 6, 1, 2
  027db9c  bt 6, 0x27dc08
  027dba0  lwz 3, 476(30)
  027dba4  addic 3, 3, 1
  027dba8  stw 3, 476(30)
  027dbac  lwz 4, 0(29)
  027dbb0  cmpw 3, 4
  027dbb4  bf 2, 0x27dc08
  027dbb8  li 3, 3
  027dbbc  lbz 4, 83(31)
  027dbc0  cmpwi 4, 1
  027dbc4  stb 3, 32(31)
  027dbc8  bt 2, 0x27dc08
  027dbcc  lis 3, 40
  027dbd0  lis 4, 114
  027dbd4  addi 3, 3, -11172
  027dbd8  li 5, 0
  027dbdc  lfs 1, 28(3)
  027dbe0  lfs 2, -3056(4)
  027dbe4  ori 3, 31, 0
  027dbe8  li 4, 1
  027dbec  fmuls 1, 2, 1
  027dbf0  fctiwz 1, 1
  027dbf4  stfd 1, 496(1)
  027dbf8  lwz 6, 500(1)
  027dbfc  extsw 6, 6
  027dc00  bl 0xfddc0
  027dc04  nop
  027dc08  lfs 1, 468(30)
  027dc0c  fdivs 1, 1, 28
  027dc10  lfs 2, 16(31)
  027dc14  lfs 3, 20(31)
  027dc18  lfs 4, 24(31)
  027dc1c  fsub 5, 27, 28
  027dc20  fsub 6, 27, 28
  027dc24  fsub 7, 27, 28
  027dc28  fsub 8, 28, 27
  027dc2c  fsub 9, 28, 27
  027dc30  fsub 10, 28, 27
  027dc34  fmuls 11, 29, 1
  027dc38  fmuls 12, 30, 1
  027dc3c  fmuls 1, 31, 1
  027dc40  fsel 5, 5, 27, 11
  027dc44  fsel 6, 6, 27, 12
  027dc48  fsel 7, 7, 27, 1
  027dc4c  fsel 5, 8, 5, 11
  027dc50  fsel 6, 9, 6, 12
  027dc54  fsel 1, 10, 7, 1
  027dc58  fadds 4, 4, 5
  027dc5c  fadds 3, 3, 6
  027dc60  fadds 1, 2, 1
  027dc64  stfs 4, 24(31)
  027dc68  stfs 3, 20(31)
  027dc6c  stfs 1, 16(31)
  027dc70  b 0x27ec78
  027dc74  lfs 1, 16(29)
  027dc78  lfs 2, 16(31)
  027dc7c  lfs 3, 20(29)
  027dc80  lfs 4, 20(31)
  027dc84  fsubs 1, 1, 2
  027dc88  lis 3, 40
  027dc8c  fsubs 2, 3, 4
  027dc90  addi 4, 3, -11172
  027dc94  lis 5, 115
  027dc98  addic 3, 31, 72
  027dc9c  addic 5, 5, 22784
  027dca0  fabs 3, 1
  027dca4  fabs 5, 2
  027dca8  stfs 1, 312(1)
  027dcac  stfs 2, 316(1)
  027dcb0  fsubs 1, 3, 5
  027dcb4  stfs 1, 320(1)
  027dcb8  lwz 6, 312(1)
  027dcbc  lfs 4, 32(4)
  027dcc0  lfs 1, 312(1)
  027dcc4  lwz 4, 316(1)
  027dcc8  lfs 2, 316(1)
  027dccc  fabs 1, 1
  027dcd0  lwz 7, 320(1)
  027dcd4  rlwinm 4, 4, 3, 29, 29
  027dcd8  fabs 6, 2
  027dcdc  lfs 2, 320(1)
  027dce0  rlwimi 4, 7, 2, 30, 30
  027dce4  fsub 7, 2, 4
  027dce8  rlwimi 4, 6, 4, 28, 28
  027dcec  fsub 8, 2, 4
  027dcf0  ori 6, 5, 0
  027dcf4  rlwimi 6, 4, 2, 26, 28
  027dcf8  slwi 4, 4, 2
  027dcfc  clrldi 6, 6, 32
  027dd00  fsel 5, 7, 1, 5
  027dd04  lfsx 1, 5, 4
  027dd08  lfs 2, 4(6)
  027dd0c  fsel 3, 8, 6, 3
  027dd10  fcmpu 0, 5, 4
  027dd14  bt 1, 0x27dd1c
  027dd18  b 0x27de3c
  027dd1c  fsubs 6, 3, 5
  027dd20  fadds 3, 3, 5
  027dd24  addic 4, 1, 16
  027dd28  li 8, 2
  027dd2c  addic 6, 4, 432
  027dd30  addic 5, 4, 416
  027dd34  mtctr 8
  027dd38  fdivs 3, 6, 3
  027dd3c  fmuls 5, 3, 3
  027dd40  stfs 3, 444(1)
  027dd44  stfs 3, 436(1)
  027dd48  stfs 3, 440(1)
  027dd4c  stfs 3, 432(1)
  027dd50  lfs 7, 444(1)
  027dd54  lfs 8, 436(1)
  027dd58  lfs 9, 440(1)
  027dd5c  fmuls 6, 5, 5
  027dd60  fmuls 8, 8, 5
  027dd64  fmuls 7, 7, 6
  027dd68  fmuls 3, 6, 6
  027dd6c  fmuls 6, 9, 6
  027dd70  stfs 8, 436(1)
  027dd74  fmuls 5, 7, 5
  027dd78  stfs 6, 440(1)
  027dd7c  stfs 5, 444(1)
  027dd80  lfs 5, 416(4)
  027dd84  fmuls 5, 5, 3
  027dd88  stfs 5, 432(4)
  027dd8c  lfs 5, 4(5)
  027dd90  addic 5, 5, 8
  027dd94  fmuls 5, 5, 3
  027dd98  addic 4, 4, 8
  027dd9c  stfs 5, 4(6)
  027dda0  addic 6, 6, 8
  027dda4  bdnz 0x27dd80
  027dda8  li 6, 4
  027ddac  ori 4, 1, 0
  027ddb0  mtctr 6
  027ddb4  lis 5, 115
  027ddb8  addic 6, 4, 432
  027ddbc  addic 5, 5, 22752
  027ddc0  ori 7, 6, 0
  027ddc4  lfs 3, 432(4)
  027ddc8  lfs 5, 0(5)
  027ddcc  fmuls 3, 3, 5
  027ddd0  lfs 5, 4(5)
  027ddd4  addic 5, 5, 8
  027ddd8  stfs 3, 432(4)
  027dddc  lfs 3, 4(6)
  027dde0  addic 4, 4, 8
  027dde4  fmuls 3, 3, 5
  027dde8  stfs 3, 4(6)
  027ddec  addic 6, 6, 8
  027ddf0  bdnz 0x27ddc4
  027ddf4  ori 4, 1, 0
  027ddf8  mtctr 8
  027ddfc  lfs 3, 432(4)
  027de00  fadds 3, 4, 3
  027de04  addic 4, 4, 16
  027de08  lfs 4, 4(7)
  027de0c  lfs 5, 8(7)
  027de10  lfs 6, 12(7)
  027de14  addic 7, 7, 16
  027de18  fadds 3, 3, 4
  027de1c  fadds 4, 3, 5
  027de20  fadds 4, 4, 6
  027de24  bdnz 0x27ddfc
  027de28  lis 4, 40
  027de2c  addi 4, 4, -11172
  027de30  lfs 3, 36(4)
  027de34  fadds 4, 4, 3
  027de38  fmadds 4, 4, 1, 2
  027de3c  lis 4, 40
  027de40  lis 5, 114
  027de44  fmr 1, 4
  027de48  addi 29, 4, -11172
  027de4c  lis 4, 114
  027de50  lfs 3, 40(29)
  027de54  lfs 2, -3048(5)
  027de58  lfs 5, -3052(4)
  027de5c  addic 5, 30, 464
  027de60  fmuls 2, 2, 3
  027de64  fmuls 4, 5, 3
  027de68  fmr 3, 2
  027de6c  bl 0x10a2e0
  027de70  nop
  027de74  lis 3, 151
  027de78  lfs 1, 20(31)
  027de7c  addic 3, 3, -25376
  027de80  lfs 2, 16(31)
  027de84  lfs 3, 132(3)
  027de88  lfs 4, 128(3)
  027de8c  fsubs 1, 1, 3
  027de90  fsubs 2, 2, 4
  027de94  fmuls 1, 1, 1
  027de98  fmadds 1, 2, 2, 1
  027de9c  lfs 2, 56(29)
  027dea0  fsqrts 1, 1
  027dea4  fcmpu 0, 1, 2
  027dea8  cror 6, 1, 2
  027deac  bt 6, 0x27defc
  027deb0  lbz 3, 83(31)
  027deb4  cmpwi 3, 4
  027deb8  bt 2, 0x27df74
  027debc  lis 3, 40
  027dec0  lis 4, 114
  027dec4  addi 3, 3, -11172
  027dec8  li 5, 0
  027decc  lfs 1, 24(3)
  027ded0  lfs 2, -3056(4)
  027ded4  ori 3, 31, 0
  027ded8  li 4, 4
  027dedc  fmuls 1, 2, 1
  027dee0  fctiwz 1, 1
  027dee4  stfd 1, 496(1)
  027dee8  lwz 6, 500(1)
  027deec  extsw 6, 6
  027def0  bl 0xfddc0
  027def4  nop
  027def8  b 0x27df74
  027defc  lbz 3, 112(31)
  027df00  rlwinm 3, 3, 0, 30, 30
  027df04  cmpwi 3, 0
  027df08  bt 2, 0x27df74
  027df0c  li 3, 2
  027df10  lbz 29, 83(31)
  027df14  bl 0xfc620
  027df18  nop
  027df1c  addic 3, 3, 1
  027df20  cmpw 29, 3
  027df24  bt 2, 0x27df74
  027df28  li 3, 2
  027df2c  bl 0xfc620
  027df30  nop
  027df34  lis 4, 40
  027df38  lis 6, 114
  027df3c  addi 4, 4, -11172
  027df40  li 5, 0
  027df44  lfs 1, 24(4)
  027df48  lfs 2, -3056(6)
  027df4c  addic 4, 3, 1
  027df50  ori 3, 31, 0
  027df54  fmuls 1, 2, 1
  027df58  extsw 4, 4
  027df5c  fctiwz 1, 1
  027df60  stfd 1, 496(1)
  027df64  lwz 6, 500(1)
  027df68  extsw 6, 6
  027df6c  bl 0xfddc0
  027df70  nop
  027df74  lwz 3, 276(30)
  027df78  cmpwi 3, 2
  027df7c  bt 2, 0x27ec78
  027df80  ori 3, 31, 0
  027df84  li 4, 0
  027df88  li 5, 0
  027df8c  bl 0x288730
  027df90  nop
  027df94  cmpwi 3, 0
  027df98  bt 2, 0x27ec78
  027df9c  li 3, 4
  027dfa0  lbz 4, 83(31)
  027dfa4  cmpwi 4, 5
  027dfa8  stb 3, 32(31)
  027dfac  bt 2, 0x27ec78
  027dfb0  lis 3, 40
  027dfb4  lis 4, 114
  027dfb8  addi 3, 3, -11172
  027dfbc  li 5, 0
  027dfc0  lfs 1, 28(3)
  027dfc4  lfs 2, -3056(4)
  027dfc8  ori 3, 31, 0
  027dfcc  fmuls 1, 2, 1
  027dfd0  li 4, 5
  027dfd4  fctiwz 1, 1
  027dfd8  stfd 1, 496(1)
  027dfdc  lwz 6, 500(1)
  027dfe0  extsw 6, 6
  027dfe4  bl 0xfddc0
  027dfe8  nop
  027dfec  b 0x27ec78
  027dff0  lfs 1, 16(29)
  027dff4  lfs 2, 16(31)
  027dff8  lfs 3, 20(29)
  027dffc  lis 3, 40
  027e000  lfs 4, 20(31)
  027e004  fsubs 1, 1, 2
  027e008  addi 4, 3, -11172
  027e00c  fsubs 2, 3, 4
  027e010  lis 5, 115
  027e014  addic 3, 31, 72
  027e018  addic 5, 5, 22784
  027e01c  fabs 3, 1
  027e020  fabs 5, 2
  027e024  stfs 1, 300(1)
  027e028  stfs 2, 304(1)
  027e02c  fsubs 1, 3, 5
  027e030  stfs 1, 308(1)
  027e034  lwz 6, 300(1)
  027e038  lfs 4, 32(4)
  027e03c  lfs 1, 300(1)
  027e040  lwz 4, 304(1)
  027e044  lfs 2, 304(1)
  027e048  lwz 7, 308(1)
  027e04c  rlwinm 4, 4, 3, 29, 29
  027e050  fabs 6, 2
  027e054  lfs 2, 308(1)
  027e058  fabs 1, 1
  027e05c  rlwimi 4, 7, 2, 30, 30
  027e060  fsub 7, 2, 4
  027e064  rlwimi 4, 6, 4, 28, 28
  027e068  fsub 8, 2, 4
  027e06c  ori 6, 5, 0
  027e070  rlwimi 6, 4, 2, 26, 28
  027e074  slwi 4, 4, 2
  027e078  clrldi 6, 6, 32
  027e07c  fsel 5, 7, 1, 5
  027e080  lfsx 1, 5, 4
  027e084  lfs 2, 4(6)
  027e088  fsel 3, 8, 6, 3
  027e08c  fcmpu 0, 5, 4
  027e090  bt 1, 0x27e098
  027e094  b 0x27e1b8
  027e098  fsubs 6, 3, 5
  027e09c  fadds 3, 3, 5
  027e0a0  addic 4, 1, 16
  027e0a4  li 8, 2
  027e0a8  addic 5, 4, 384
  027e0ac  addic 6, 4, 400
  027e0b0  mtctr 8
  027e0b4  fdivs 3, 6, 3
  027e0b8  fmuls 5, 3, 3
  027e0bc  stfs 3, 412(1)
  027e0c0  stfs 3, 404(1)
  027e0c4  stfs 3, 408(1)
  027e0c8  stfs 3, 400(1)
  027e0cc  lfs 7, 412(1)
  027e0d0  lfs 8, 404(1)
  027e0d4  lfs 9, 408(1)
  027e0d8  fmuls 6, 5, 5
  027e0dc  fmuls 8, 8, 5
  027e0e0  fmuls 7, 7, 6
  027e0e4  fmuls 3, 6, 6
  027e0e8  fmuls 6, 9, 6
  027e0ec  stfs 8, 404(1)
  027e0f0  fmuls 5, 7, 5
  027e0f4  stfs 6, 408(1)
  027e0f8  stfs 5, 412(1)
  027e0fc  lfs 5, 384(4)
  027e100  fmuls 5, 5, 3
  027e104  stfs 5, 400(4)
  027e108  lfs 5, 4(5)
  027e10c  addic 4, 4, 8
  027e110  addic 5, 5, 8
  027e114  fmuls 5, 5, 3
  027e118  stfs 5, 4(6)
  027e11c  addic 6, 6, 8
  027e120  bdnz 0x27e0fc
  027e124  li 6, 4
  027e128  ori 4, 1, 0
  027e12c  mtctr 6
  027e130  lis 5, 115
  027e134  addic 6, 4, 400
  027e138  addic 5, 5, 22752
  027e13c  ori 7, 6, 0
  027e140  lfs 3, 400(4)
  027e144  lfs 5, 0(5)
  027e148  fmuls 3, 3, 5
  027e14c  lfs 5, 4(5)
  027e150  addic 5, 5, 8
  027e154  stfs 3, 400(4)
  027e158  lfs 3, 4(6)
  027e15c  addic 4, 4, 8
  027e160  fmuls 3, 3, 5
  027e164  stfs 3, 4(6)
  027e168  addic 6, 6, 8
  027e16c  bdnz 0x27e140
  027e170  ori 4, 1, 0
  027e174  mtctr 8
  027e178  lfs 3, 400(4)
  027e17c  fadds 3, 4, 3
  027e180  lfs 4, 4(7)
  027e184  addic 4, 4, 16
  027e188  lfs 5, 8(7)
  027e18c  lfs 6, 12(7)
  027e190  addic 7, 7, 16
  027e194  fadds 3, 3, 4
  027e198  fadds 4, 3, 5
  027e19c  fadds 4, 4, 6
  027e1a0  bdnz 0x27e178
  027e1a4  lis 4, 40
  027e1a8  addi 4, 4, -11172
  027e1ac  lfs 3, 36(4)
  027e1b0  fadds 4, 4, 3
  027e1b4  fmadds 4, 4, 1, 2
  027e1b8  lis 4, 40
  027e1bc  fmr 1, 4
  027e1c0  lis 6, 114
  027e1c4  addi 4, 4, -11172
  027e1c8  lis 5, 114
  027e1cc  lfs 3, 40(4)
  027e1d0  lfs 2, -3048(6)
  027e1d4  lfs 5, -3052(5)
  027e1d8  fmuls 2, 2, 3
  027e1dc  addic 5, 30, 464
  027e1e0  fmuls 4, 5, 3
  027e1e4  fmr 3, 2
  027e1e8  bl 0x10a2e0
  027e1ec  nop
  027e1f0  lbz 3, 112(31)
  027e1f4  rlwinm 3, 3, 0, 30, 30
  027e1f8  cmpwi 3, 0
  027e1fc  bt 2, 0x27ec78
  027e200  li 3, 0
  027e204  li 4, 5
  027e208  sth 3, 472(30)
  027e20c  lbz 3, 83(31)
  027e210  stb 4, 32(31)
  027e214  cmpwi 3, 6
  027e218  bt 2, 0x27ec78
  027e21c  lis 3, 40
  027e220  lis 4, 114
  027e224  addi 3, 3, -11172
  027e228  li 5, 0
  027e22c  lfs 1, 28(3)
  027e230  lfs 2, -3056(4)
  027e234  ori 3, 31, 0
  027e238  li 4, 6
  027e23c  fmuls 1, 2, 1
  027e240  fctiwz 1, 1
  027e244  stfd 1, 496(1)
  027e248  lwz 6, 500(1)
  027e24c  extsw 6, 6
  027e250  bl 0xfddc0
  027e254  nop
  027e258  b 0x27ec78
  027e25c  lfs 1, 208(30)
  027e260  lfs 2, 16(31)
  027e264  lfs 3, 212(30)
  027e268  lfs 4, 20(31)
  027e26c  fsubs 1, 1, 2
  027e270  lis 3, 40
  027e274  fsubs 2, 3, 4
  027e278  addi 3, 3, -11172
  027e27c  lis 4, 115
  027e280  addic 4, 4, 22784
  027e284  fabs 3, 1
  027e288  fabs 4, 2
  027e28c  stfs 1, 288(1)
  027e290  stfs 2, 292(1)
  027e294  fsubs 1, 3, 4
  027e298  stfs 1, 296(1)
  027e29c  lwz 5, 288(1)
  027e2a0  lfs 31, 32(3)
  027e2a4  lfs 1, 288(1)
  027e2a8  lwz 3, 292(1)
  027e2ac  lfs 2, 292(1)
  027e2b0  lwz 6, 296(1)
  027e2b4  rlwinm 3, 3, 3, 29, 29
  027e2b8  fabs 5, 2
  027e2bc  lfs 2, 296(1)
  027e2c0  fabs 1, 1
  027e2c4  rlwimi 3, 6, 2, 30, 30
  027e2c8  fsub 6, 2, 31
  027e2cc  rlwimi 3, 5, 4, 28, 28
  027e2d0  fsub 7, 2, 31
  027e2d4  ori 5, 4, 0
  027e2d8  rlwimi 5, 3, 2, 26, 28
  027e2dc  slwi 3, 3, 2
  027e2e0  clrldi 5, 5, 32
  027e2e4  fsel 4, 6, 1, 4
  027e2e8  lfsx 1, 4, 3
  027e2ec  lfs 2, 4(5)
  027e2f0  fsel 3, 7, 5, 3
  027e2f4  fcmpu 0, 4, 31
  027e2f8  bt 1, 0x27e304
  027e2fc  fmr 1, 31
  027e300  b 0x27e428
  027e304  fsubs 5, 3, 4
  027e308  fadds 3, 3, 4
  027e30c  addic 3, 1, 16
  027e310  li 7, 2
  027e314  addic 5, 3, 368
  027e318  addic 4, 3, 352
  027e31c  mtctr 7
  027e320  fdivs 3, 5, 3
  027e324  fmuls 4, 3, 3
  027e328  stfs 3, 380(1)
  027e32c  stfs 3, 372(1)
  027e330  stfs 3, 376(1)
  027e334  stfs 3, 368(1)
  027e338  lfs 6, 380(1)
  027e33c  lfs 7, 372(1)
  027e340  lfs 8, 376(1)
  027e344  fmuls 5, 4, 4
  027e348  fmuls 7, 7, 4
  027e34c  fmuls 6, 6, 5
  027e350  fmuls 3, 5, 5
  027e354  fmuls 5, 8, 5
  027e358  stfs 7, 372(1)
  027e35c  fmuls 4, 6, 4
  027e360  stfs 5, 376(1)
  027e364  stfs 4, 380(1)
  027e368  lfs 4, 352(3)
  027e36c  fmuls 4, 4, 3
  027e370  stfs 4, 368(3)
  027e374  lfs 4, 4(4)
  027e378  addic 4, 4, 8
  027e37c  fmuls 4, 4, 3
  027e380  addic 3, 3, 8
  027e384  stfs 4, 4(5)
  027e388  addic 5, 5, 8
  027e38c  bdnz 0x27e368
  027e390  li 5, 4
  027e394  ori 3, 1, 0
  027e398  mtctr 5
  027e39c  lis 4, 115
  027e3a0  addic 5, 3, 368
  027e3a4  addic 4, 4, 22752
  027e3a8  ori 6, 5, 0
  027e3ac  lfs 3, 368(3)
  027e3b0  lfs 4, 0(4)
  027e3b4  fmuls 3, 3, 4
  027e3b8  lfs 4, 4(4)
  027e3bc  addic 4, 4, 8
  027e3c0  stfs 3, 368(3)
  027e3c4  lfs 3, 4(5)
  027e3c8  addic 3, 3, 8
  027e3cc  fmuls 3, 3, 4
  027e3d0  stfs 3, 4(5)
  027e3d4  addic 5, 5, 8
  027e3d8  bdnz 0x27e3ac
  027e3dc  ori 3, 1, 0
  027e3e0  fmr 3, 31
  027e3e4  mtctr 7
  027e3e8  lfs 4, 368(3)
  027e3ec  fadds 3, 3, 4
  027e3f0  lfs 4, 4(6)
  027e3f4  addic 3, 3, 16
  027e3f8  lfs 5, 8(6)
  027e3fc  lfs 6, 12(6)
  027e400  addic 6, 6, 16
  027e404  fadds 3, 3, 4
  027e408  fadds 3, 3, 5
  027e40c  fadds 3, 3, 6
  027e410  bdnz 0x27e3e8
  027e414  lis 3, 40
  027e418  addi 3, 3, -11172
  027e41c  lfs 4, 36(3)
  027e420  fadds 3, 3, 4
  027e424  fmadds 1, 3, 1, 2
  027e428  lhz 3, 52(31)
  027e42c  rlwinm 3, 3, 0, 16, 16
  027e430  cmpwi 3, 0
  027e434  bt 2, 0x27e44c
  027e438  lis 3, 123
  027e43c  lfs 2, -22564(3)
  027e440  bl 0x502578
  027e444  nop
  027e448  b 0x27e45c
  027e44c  lis 3, 123
  027e450  lfs 2, -22564(3)
  027e454  bl 0x5025e0
  027e458  nop
  027e45c  lis 3, 40
  027e460  lis 4, 114
  027e464  addi 28, 3, -11172
  027e468  lis 3, 114
  027e46c  addic 5, 30, 464
  027e470  lfs 2, 60(28)
  027e474  lfs 3, -3048(3)
  027e478  lfs 4, 40(28)
  027e47c  addic 3, 31, 72
  027e480  fmuls 2, 3, 2
  027e484  lfs 5, -3052(4)
  027e488  fmuls 4, 5, 4
  027e48c  fmr 3, 2
  027e490  bl 0x10a2e0
  027e494  nop
  027e498  addic 5, 1, 208
  027e49c  ori 3, 31, 0
  027e4a0  li 4, 0
  027e4a4  bl 0xf1038
  027e4a8  nop
  027e4ac  lfs 1, 196(31)
  027e4b0  lfs 2, 192(31)
  027e4b4  fmuls 3, 1, 1
  027e4b8  lis 3, 123
  027e4bc  li 4, 1
  027e4c0  lfs 4, -22572(3)
  027e4c4  fmadds 3, 2, 2, 3
  027e4c8  lfs 5, 256(1)
  027e4cc  lfs 6, 260(1)
  027e4d0  lfs 7, 264(1)
  027e4d4  lfs 8, 268(1)
  027e4d8  stfs 7, 136(1)
  027e4dc  fsqrts 3, 3
  027e4e0  lfs 7, 72(31)
  027e4e4  stfs 8, 140(1)
  027e4e8  lis 3, 1
  027e4ec  stw 31, 176(1)
  027e4f0  lis 5, 16256
  027e4f4  stw 3, 180(1)
  027e4f8  stw 4, 192(1)
  027e4fc  lis 3, 17839
  027e500  li 29, 0
  027e504  ori 3, 3, 57190
  027e508  lbz 6, 82(31)
  027e50c  lbz 7, 83(31)
  027e510  lhz 8, 166(31)
  027e514  xor 6, 6, 7
  027e518  cmpwi 6, 0
  027e51c  fdivs 4, 4, 3
  027e520  fsub 8, 31, 3
  027e524  fsub 9, 31, 3
  027e528  fsub 10, 3, 31
  027e52c  fsub 3, 3, 31
  027e530  fmuls 1, 1, 4
  027e534  fmuls 2, 2, 4
  027e538  fsel 4, 8, 31, 1
  027e53c  fsel 8, 9, 31, 2
  027e540  fsel 1, 10, 4, 1
  027e544  fsel 2, 3, 8, 2
  027e548  fadds 1, 6, 1
  027e54c  fadds 2, 5, 2
  027e550  stfs 1, 132(1)
  027e554  stfs 2, 128(1)
  027e558  lfs 31, 64(28)
  027e55c  stw 5, 188(1)
  027e560  lfs 1, 68(28)
  027e564  lfs 2, 72(28)
  027e568  fadds 1, 7, 1
  027e56c  lfs 3, 76(28)
  027e570  fsubs 4, 2, 7
  027e574  fsubs 5, 3, 7
  027e578  fsubs 2, 2, 1
  027e57c  fsub 6, 7, 4
  027e580  fsubs 3, 3, 1
  027e584  fsub 8, 1, 2
  027e588  fsel 4, 6, 4, 7
  027e58c  lfs 6, 80(28)
  027e590  fsel 1, 8, 2, 1
  027e594  fsub 2, 5, 4
  027e598  fsub 8, 3, 1
  027e59c  fsel 2, 2, 5, 4
  027e5a0  lfs 4, 84(28)
  027e5a4  lfs 5, 88(28)
  027e5a8  lfs 9, 92(28)
  027e5ac  stw 5, 168(1)
  027e5b0  stw 3, 172(1)
  027e5b4  stb 29, 184(1)
  027e5b8  fsel 1, 8, 3, 1
  027e5bc  fmuls 3, 2, 2
  027e5c0  stb 4, 185(1)
  027e5c4  sth 8, 186(1)
  027e5c8  fmuls 7, 1, 1
  027e5cc  fmuls 8, 3, 2
  027e5d0  fmuls 10, 7, 1
  027e5d4  fmuls 11, 3, 8
  027e5d8  fmadds 2, 8, 6, 2
  027e5dc  fmuls 8, 7, 10
  027e5e0  fmadds 1, 10, 6, 1
  027e5e4  fmuls 6, 3, 11
  027e5e8  fmadds 2, 11, 4, 2
  027e5ec  fmuls 10, 7, 8
  027e5f0  fmadds 1, 8, 4, 1
  027e5f4  fmuls 3, 3, 6
  027e5f8  fmadds 2, 6, 5, 2
  027e5fc  fmuls 4, 7, 10
  027e600  fmadds 1, 10, 5, 1
  027e604  fmadds 2, 3, 9, 2
  027e608  fmadds 1, 4, 9, 1
  027e60c  stfs 2, 164(1)
  027e610  stfs 1, 160(1)
  027e614  bf 2, 0x27e640
  027e618  ori 3, 31, 0
  027e61c  bl 0xefe40
  027e620  nop
  027e624  fcmpu 0, 1, 31
  027e628  cror 6, 0, 2
  027e62c  bt 6, 0x27e640
  027e630  lwz 3, 180(1)
  027e634  li 29, 1
  027e638  ori 3, 3, 1
  027e63c  stw 3, 180(1)
  027e640  lis 3, 40
  027e644  lfs 1, 16(31)
  027e648  lfs 2, 20(31)
  027e64c  addic 4, 1, 144
  027e650  addi 3, 3, -11172
  027e654  stfs 1, 144(1)
  027e658  lfs 1, 28(31)
  027e65c  addic 7, 1, 160
  027e660  stfs 2, 148(1)
  027e664  li 5, 0
  027e668  stfs 1, 156(1)
  027e66c  ori 6, 31, 0
  027e670  lfs 1, 96(3)
  027e674  lfs 2, 24(31)
  027e678  addic 3, 1, 256
  027e67c  fadds 1, 2, 1
  027e680  stfs 1, 152(1)
  027e684  bl 0x57820
  027e688  nop
  027e68c  cmpwi 3, 0
  027e690  bt 2, 0x27e718
  027e694  cmpwi 29, 0
  027e698  bt 2, 0x27e718
  027e69c  lis 3, 161
  027e6a0  lis 4, 151
  027e6a4  addic 3, 3, 2368
  027e6a8  addic 4, 4, -25376
  027e6ac  lwz 3, 24(3)
  027e6b0  lwz 4, 8320(4)
  027e6b4  cmpw 3, 4
  027e6b8  bf 2, 0x27e718
  027e6bc  ori 3, 31, 0
  027e6c0  bl 0x288888
  027e6c4  nop
  027e6c8  li 4, 6
  027e6cc  lbz 3, 83(31)
  027e6d0  cmpwi 3, 7
  027e6d4  stb 4, 32(31)
  027e6d8  bt 2, 0x27e718
  027e6dc  lis 3, 40
  027e6e0  lis 4, 114
  027e6e4  addi 3, 3, -11172
  027e6e8  li 5, 0
  027e6ec  lfs 1, 28(3)
  027e6f0  lfs 2, -3056(4)
  027e6f4  ori 3, 31, 0
  027e6f8  li 4, 7
  027e6fc  fmuls 1, 2, 1
  027e700  fctiwz 1, 1
  027e704  stfd 1, 496(1)
  027e708  lwz 6, 500(1)
  027e70c  extsw 6, 6
  027e710  bl 0xfddc0
  027e714  nop
  027e718  addic 3, 1, 256
  027e71c  addic 4, 1, 128
  027e720  addic 7, 1, 160
  027e724  li 5, 0
  027e728  ori 6, 31, 0
  027e72c  bl 0x57820
  027e730  nop
  027e734  cmpwi 3, 0
  027e738  bt 2, 0x27e7e0
  027e73c  lis 3, 161
  027e740  cmpwi 29, 0
  027e744  addic 3, 3, 2368
  027e748  lfs 1, 32(3)
  027e74c  lfs 2, 36(3)
  027e750  stfs 1, 128(1)
  027e754  lfs 1, 40(3)
  027e758  stfs 2, 132(1)
  027e75c  lfs 2, 44(3)
  027e760  stfs 1, 136(1)
  027e764  stfs 2, 140(1)
  027e768  bt 2, 0x27e7e0
  027e76c  lis 4, 151
  027e770  lwz 3, 24(3)
  027e774  addic 4, 4, -25376
  027e778  lwz 4, 8320(4)
  027e77c  cmpw 3, 4
  027e780  bf 2, 0x27e7e0
  027e784  ori 3, 31, 0
  027e788  bl 0x288888
  027e78c  nop
  027e790  li 4, 6
  027e794  lbz 3, 83(31)
  027e798  cmpwi 3, 7
  027e79c  stb 4, 32(31)
  027e7a0  bt 2, 0x27e7e0
  027e7a4  lis 3, 40
  027e7a8  lis 4, 114
  027e7ac  addi 3, 3, -11172
  027e7b0  li 5, 0
  027e7b4  lfs 1, 28(3)
  027e7b8  lfs 2, -3056(4)
  027e7bc  ori 3, 31, 0
  027e7c0  li 4, 7
  027e7c4  fmuls 1, 2, 1
  027e7c8  fctiwz 1, 1
  027e7cc  stfd 1, 496(1)
  027e7d0  lwz 6, 500(1)
  027e7d4  extsw 6, 6
  027e7d8  bl 0xfddc0
  027e7dc  nop
  027e7e0  ori 3, 31, 0
  027e7e4  addic 4, 1, 208
  027e7e8  addic 5, 1, 128
  027e7ec  bl 0x288958
  027e7f0  nop
  027e7f4  lbz 3, 112(31)
  027e7f8  rlwinm 3, 3, 0, 30, 30
  027e7fc  cmpwi 3, 0
  027e800  bt 2, 0x27ec78
  027e804  lhz 4, 472(30)
  027e808  lis 3, 123
  027e80c  extsh 4, 4
  027e810  addic 5, 4, 1
  027e814  sth 5, 472(30)
  027e818  lwz 3, -22568(3)
  027e81c  cmpw 4, 3
  027e820  bf 2, 0x27ec78
  027e824  ori 3, 31, 0
  027e828  bl 0x288888
  027e82c  nop
  027e830  li 4, 6
  027e834  lbz 3, 83(31)
  027e838  cmpwi 3, 12
  027e83c  stb 4, 32(31)
  027e840  bt 2, 0x27ec78
  027e844  lis 3, 40
  027e848  lis 4, 114
  027e84c  addi 3, 3, -11172
  027e850  li 5, 0
  027e854  lfs 1, 28(3)
  027e858  lfs 2, -3056(4)
  027e85c  ori 3, 31, 0
  027e860  li 4, 12
  027e864  fmuls 1, 2, 1
  027e868  fctiwz 1, 1
  027e86c  stfd 1, 496(1)
  027e870  lwz 6, 500(1)
  027e874  extsw 6, 6
  027e878  bl 0xfddc0
  027e87c  nop
  027e880  b 0x27ec78
  027e884  lfs 1, 16(29)
  027e888  lfs 2, 16(31)
  027e88c  lfs 3, 20(29)
  027e890  lfs 4, 20(31)
  027e894  fsubs 1, 1, 2
  027e898  lis 3, 40
  027e89c  fsubs 2, 3, 4
  027e8a0  addi 4, 3, -11172
  027e8a4  lis 5, 115
  027e8a8  addic 3, 31, 72
  027e8ac  addic 5, 5, 22784
  027e8b0  fabs 3, 1
  027e8b4  fabs 5, 2
  027e8b8  stfs 1, 276(1)
  027e8bc  stfs 2, 280(1)
  027e8c0  fsubs 1, 3, 5
  027e8c4  stfs 1, 284(1)
  027e8c8  lwz 6, 276(1)
  027e8cc  lfs 4, 32(4)
  027e8d0  lfs 1, 276(1)
  027e8d4  lwz 4, 280(1)
  027e8d8  lfs 2, 280(1)
  027e8dc  fabs 1, 1
  027e8e0  lwz 7, 284(1)
  027e8e4  rlwinm 4, 4, 3, 29, 29
  027e8e8  fabs 6, 2
  027e8ec  lfs 2, 284(1)
  027e8f0  rlwimi 4, 7, 2, 30, 30
  027e8f4  fsub 7, 2, 4
  027e8f8  rlwimi 4, 6, 4, 28, 28
  027e8fc  fsub 8, 2, 4
  027e900  ori 6, 5, 0
  027e904  rlwimi 6, 4, 2, 26, 28
  027e908  slwi 4, 4, 2
  027e90c  clrldi 6, 6, 32
  027e910  fsel 5, 7, 1, 5
  027e914  lfsx 1, 5, 4
  027e918  lfs 2, 4(6)
  027e91c  fsel 3, 8, 6, 3
  027e920  fcmpu 0, 5, 4
  027e924  bt 1, 0x27e92c
  027e928  b 0x27ea4c
  027e92c  fsubs 6, 3, 5
  027e930  fadds 3, 3, 5
  027e934  addic 4, 1, 16
  027e938  li 7, 2
  027e93c  addic 6, 4, 336
  027e940  addic 5, 4, 320
  027e944  mtctr 7
  027e948  fdivs 3, 6, 3
  027e94c  fmuls 5, 3, 3
  027e950  stfs 3, 348(1)
  027e954  stfs 3, 340(1)
  027e958  stfs 3, 344(1)
  027e95c  stfs 3, 336(1)
  027e960  lfs 7, 348(1)
  027e964  lfs 8, 340(1)
  027e968  lfs 9, 344(1)
  027e96c  fmuls 6, 5, 5
  027e970  fmuls 8, 8, 5
  027e974  fmuls 7, 7, 6
  027e978  fmuls 3, 6, 6
  027e97c  fmuls 6, 9, 6
  027e980  stfs 8, 340(1)
  027e984  fmuls 5, 7, 5
  027e988  stfs 6, 344(1)
  027e98c  stfs 5, 348(1)
  027e990  lfs 5, 320(4)
  027e994  fmuls 5, 5, 3
  027e998  stfs 5, 336(4)
  027e99c  lfs 5, 4(5)
  027e9a0  addic 5, 5, 8
  027e9a4  fmuls 5, 5, 3
  027e9a8  addic 4, 4, 8
  027e9ac  stfs 5, 4(6)
  027e9b0  addic 6, 6, 8
  027e9b4  bdnz 0x27e990
  027e9b8  li 6, 4
  027e9bc  ori 4, 1, 0
  027e9c0  mtctr 6
  027e9c4  lis 5, 115
  027e9c8  addic 6, 4, 336
  027e9cc  addic 5, 5, 22752
  027e9d0  ori 8, 6, 0
  027e9d4  lfs 3, 336(4)
  027e9d8  lfs 5, 0(5)
  027e9dc  fmuls 3, 3, 5
  027e9e0  lfs 5, 4(5)
  027e9e4  addic 5, 5, 8
  027e9e8  stfs 3, 336(4)
  027e9ec  lfs 3, 4(6)
  027e9f0  addic 4, 4, 8
  027e9f4  fmuls 3, 3, 5
  027e9f8  stfs 3, 4(6)
  027e9fc  addic 6, 6, 8
  027ea00  bdnz 0x27e9d4
  027ea04  ori 4, 1, 0
  027ea08  mtctr 7
  027ea0c  lfs 3, 336(4)
  027ea10  fadds 3, 4, 3
  027ea14  addic 4, 4, 16
  027ea18  lfs 4, 4(8)
  027ea1c  lfs 5, 8(8)
  027ea20  lfs 6, 12(8)
  027ea24  addic 8, 8, 16
  027ea28  fadds 3, 3, 4
  027ea2c  fadds 4, 3, 5
  027ea30  fadds 4, 4, 6
  027ea34  bdnz 0x27ea0c
  027ea38  lis 4, 40
  027ea3c  addi 4, 4, -11172
  027ea40  lfs 3, 36(4)
  027ea44  fadds 4, 4, 3
  027ea48  fmadds 4, 4, 1, 2
  027ea4c  lis 4, 40
  027ea50  lis 6, 114
  027ea54  fmr 1, 4
  027ea58  addi 4, 4, -11172
  027ea5c  lis 5, 114
  027ea60  lfs 3, 40(4)
  027ea64  lfs 2, -3048(6)
  027ea68  lfs 5, -3052(5)
  027ea6c  fmuls 2, 2, 3
  027ea70  fmuls 4, 5, 3
  027ea74  addic 5, 30, 464
  027ea78  fmr 3, 2
  027ea7c  bl 0x10a2e0
  027ea80  nop
  027ea84  lbz 3, 112(31)
  027ea88  rlwinm 3, 3, 0, 30, 30
  027ea8c  cmpwi 3, 0
  027ea90  bt 2, 0x27ec78
  027ea94  li 3, 3
  027ea98  lbz 4, 83(31)
  027ea9c  cmpwi 4, 1
  027eaa0  stb 3, 32(31)
  027eaa4  bt 2, 0x27ec78
  027eaa8  lis 3, 40
  027eaac  lis 4, 114
  027eab0  addi 3, 3, -11172
  027eab4  li 5, 0
  027eab8  lfs 1, 28(3)
  027eabc  lfs 2, -3056(4)
  027eac0  ori 3, 31, 0
  027eac4  fmuls 1, 2, 1
  027eac8  li 4, 1
  027eacc  fctiwz 1, 1
  027ead0  stfd 1, 496(1)
  027ead4  lwz 6, 500(1)
  027ead8  extsw 6, 6
  027eadc  bl 0xfddc0
  027eae0  nop
  027eae4  b 0x27ec78
  027eae8  addic 4, 30, 112
  027eaec  ori 3, 31, 0
  027eaf0  bl 0x10b030
  027eaf4  nop
  027eaf8  li 4, 320
  027eafc  and 3, 3, 4
  027eb00  cmpwi 3, 0
  027eb04  bt 2, 0x27ec78
  027eb08  li 3, 3
  027eb0c  lbz 4, 83(31)
  027eb10  cmpwi 4, 1
  027eb14  stb 3, 32(31)
  027eb18  bt 2, 0x27ec78
  027eb1c  lis 3, 40
  027eb20  lis 4, 114
  027eb24  addi 3, 3, -11172
  027eb28  li 5, 0
  027eb2c  lfs 1, 28(3)
  027eb30  lfs 2, -3056(4)
  027eb34  ori 3, 31, 0
  027eb38  li 4, 1
  027eb3c  fmuls 1, 2, 1
  027eb40  fctiwz 1, 1
  027eb44  stfd 1, 496(1)
  027eb48  lwz 6, 500(1)
  027eb4c  extsw 6, 6
  027eb50  bl 0xfddc0
  027eb54  nop
  027eb58  b 0x27ec78
  027eb5c  addic 4, 30, 112
  027eb60  ori 3, 31, 0
  027eb64  bl 0x10b030
  027eb68  nop
  027eb6c  li 4, 320
  027eb70  and 3, 3, 4
  027eb74  cmpwi 3, 0
  027eb78  bt 2, 0x27ec78
  027eb7c  lis 3, 40
  027eb80  addic 30, 31, 16
  027eb84  addi 29, 3, -11172
  027eb88  ori 3, 31, 0
  027eb8c  ori 4, 30, 0
  027eb90  li 6, -1
  027eb94  lfs 1, 100(29)
  027eb98  lfs 2, 104(29)
  027eb9c  bl 0x10fb28
  027eba0  nop
  027eba4  ori 3, 31, 0
  027eba8  li 4, 1963
  027ebac  li 5, 1
  027ebb0  li 6, 1963
  027ebb4  li 7, 1
  027ebb8  li 8, 4
  027ebbc  li 9, 0
  027ebc0  bl 0x11aa78
  027ebc4  nop
  027ebc8  lis 3, 161
  027ebcc  lfs 31, 32(29)
  027ebd0  addic 29, 31, 64
  027ebd4  addic 28, 3, 23856
  027ebd8  li 8, 0
  027ebdc  fmr 1, 31
  027ebe0  ori 3, 31, 0
  027ebe4  ori 10, 28, 0
  027ebe8  std 28, 112(1)
  027ebec  li 4, 1933
  027ebf0  std 28, 120(1)
  027ebf4  ori 5, 30, 0
  027ebf8  ori 6, 29, 0
  027ebfc  li 7, 0
  027ec00  bl 0x11a560
  027ec04  nop
  027ec08  std 28, 112(1)
  027ec0c  ori 3, 31, 0
  027ec10  std 28, 120(1)
  027ec14  li 4, 1934
  027ec18  ori 10, 28, 0
  027ec1c  fmr 1, 31
  027ec20  ori 5, 30, 0
  027ec24  ori 6, 29, 0
  027ec28  li 7, 0
  027ec2c  li 8, 0
  027ec30  bl 0x11a560
  027ec34  nop
  027ec38  ori 3, 31, 0
  027ec3c  std 28, 112(1)
  027ec40  li 4, 1935
  027ec44  fmr 1, 31
  027ec48  ori 10, 28, 0
  027ec4c  std 28, 120(1)
  027ec50  ori 5, 30, 0
  027ec54  ori 6, 29, 0
  027ec58  li 7, 0
  027ec5c  li 8, 0
  027ec60  bl 0x11a560
  027ec64  nop
  027ec68  ori 3, 31, 0
  027ec6c  bl 0xefb38
  027ec70  nop
  027ec74  b 0x27ec80
  027ec78  ori 3, 31, 0
  027ec7c  bl 0x27cb28
  027ec80  ld 0, 624(1)
  027ec84  mtlr 0
  027ec88  lfd 27, 568(1)
  027ec8c  lfd 28, 576(1)
  027ec90  lfd 29, 584(1)
  027ec94  lfd 30, 592(1)
  027ec98  lfd 31, 600(1)
  027ec9c  ld 26, 520(1)
  027eca0  ld 27, 528(1)
  027eca4  ld 28, 536(1)
  027eca8  ld 29, 544(1)
  027ecac  ld 30, 552(1)
  027ecb0  ld 31, 560(1)
  027ecb4  addi 1, 1, 608
  027ecb8  blr
