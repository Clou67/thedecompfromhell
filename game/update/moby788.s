# game/update/moby788.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M788_0045ca38:   # 0x45ca38, 0xf4 bytes
  045ca38  stdu 1, -160(1)
  045ca3c  mflr 0
  045ca40  std 0, 176(1)
  045ca44  std 31, 152(1)
  045ca48  lis 4, 161
  045ca4c  ori 31, 3, 0
  045ca50  lwz 3, 1800(4)
  045ca54  std 30, 144(1)
  045ca58  std 29, 136(1)
  045ca5c  std 28, 128(1)
  045ca60  std 27, 120(1)
  045ca64  cmpwi 3, 2
  045ca68  bf 2, 0x45cb08
  045ca6c  lis 3, 151
  045ca70  lbz 3, -16268(3)
  045ca74  cmpwi 3, 0
  045ca78  bt 2, 0x45cb08
  045ca7c  lis 28, 150
  045ca80  li 27, 0
  045ca84  addic 28, 28, -12976
  045ca88  lhz 3, 68(28)
  045ca8c  extsh 4, 3
  045ca90  cmpwi 4, 0
  045ca94  bf 1, 0x45cb08
  045ca98  lis 29, 162
  045ca9c  ori 30, 28, 0
  045caa0  addic 29, 29, -16512
  045caa4  lwz 4, 376(30)
  045caa8  lhz 5, 166(31)
  045caac  extsh 5, 5
  045cab0  lhz 6, 166(4)
  045cab4  extsh 6, 6
  045cab8  cmpw 6, 5
  045cabc  bf 2, 0x45caf4
  045cac0  lbz 5, 1(29)
  045cac4  cmpwi 5, 0
  045cac8  bf 2, 0x45caf4
  045cacc  ori 3, 4, 0
  045cad0  li 4, 0
  045cad4  ori 5, 29, 0
  045cad8  bl 0xf0ea8
  045cadc  nop
  045cae0  lis 4, 16432
  045cae4  lhz 3, 68(28)
  045cae8  stw 4, 32(29)
  045caec  stw 4, 36(29)
  045caf0  stw 4, 40(29)
  045caf4  extsh 4, 3
  045caf8  addic 27, 27, 1
  045cafc  addic 30, 30, 4
  045cb00  cmpw 27, 4
  045cb04  bt 0, 0x45caa4
  045cb08  ld 0, 176(1)
  045cb0c  mtlr 0
  045cb10  ld 27, 120(1)
  045cb14  ld 28, 128(1)
  045cb18  ld 29, 136(1)
  045cb1c  ld 30, 144(1)
  045cb20  ld 31, 152(1)
  045cb24  addi 1, 1, 160
  045cb28  blr

M788_0045cb60:   # 0x45cb60, 0x520 bytes
  045cb60  stdu 1, -256(1)
  045cb64  mflr 0
  045cb68  std 0, 272(1)
  045cb6c  stfd 29, 232(1)
  045cb70  stfd 30, 240(1)
  045cb74  stfd 31, 248(1)
  045cb78  std 30, 216(1)
  045cb7c  std 31, 224(1)
  045cb80  lwz 30, 120(3)
  045cb84  ori 31, 3, 0
  045cb88  lwz 3, 384(30)
  045cb8c  cmpwi 3, 1
  045cb90  std 29, 208(1)
  045cb94  std 28, 200(1)
  045cb98  cmpwi 1, 3, 0
  045cb9c  bf 2, 0x45cfc0
  045cba0  lis 3, 151
  045cba4  lwz 4, 328(30)
  045cba8  addic 3, 3, -25248
  045cbac  extsw 4, 4
  045cbb0  bl 0x110b70
  045cbb4  nop
  045cbb8  cmpwi 3, 0
  045cbbc  bf 2, 0x45cc00
  045cbc0  li 3, 0
  045cbc4  lwz 5, 352(30)
  045cbc8  li 4, 0
  045cbcc  stw 3, 384(30)
  045cbd0  extsw 3, 5
  045cbd4  bl 0xc8b28
  045cbd8  nop
  045cbdc  li 31, -1
  045cbe0  lwz 3, 356(30)
  045cbe4  li 4, 0
  045cbe8  extsw 3, 3
  045cbec  stw 31, 352(30)
  045cbf0  bl 0xc8b28
  045cbf4  nop
  045cbf8  stw 31, 356(30)
  045cbfc  b 0x45d054
  045cc00  lwz 3, 332(30)
  045cc04  cmpwi 3, 0
  045cc08  bf 2, 0x45d054
  045cc0c  lwz 3, 336(30)
  045cc10  cmpwi 3, 0
  045cc14  bf 2, 0x45d054
  045cc18  addic 3, 30, 360
  045cc1c  bl 0x4fffb4
  045cc20  nop
  045cc24  cmpwi 3, 0
  045cc28  bt 2, 0x45d054
  045cc2c  lis 3, 70
  045cc30  li 4, 2
  045cc34  addi 29, 3, -13524
  045cc38  lis 3, 114
  045cc3c  stw 4, 384(30)
  045cc40  lfs 1, 0(29)
  045cc44  lfs 2, -3056(3)
  045cc48  fmuls 1, 2, 1
  045cc4c  fctiwz 1, 1
  045cc50  stfd 1, 184(1)
  045cc54  lwz 3, 188(1)
  045cc58  extsw 3, 3
  045cc5c  bl 0x6dad0
  045cc60  nop
  045cc64  lwz 3, 352(30)
  045cc68  li 4, 0
  045cc6c  extsw 3, 3
  045cc70  bl 0xc8b28
  045cc74  nop
  045cc78  li 28, -1
  045cc7c  lwz 3, 356(30)
  045cc80  li 4, 0
  045cc84  extsw 3, 3
  045cc88  stw 28, 352(30)
  045cc8c  bl 0xc8b28
  045cc90  nop
  045cc94  lis 3, 165
  045cc98  lwz 4, 340(30)
  045cc9c  stw 28, 356(30)
  045cca0  slwi 5, 4, 7
  045cca4  slwi 4, 4, 7
  045cca8  lwz 3, 7128(3)
  045ccac  extsw 6, 4
  045ccb0  addc 5, 3, 5
  045ccb4  addc 4, 3, 4
  045ccb8  clrldi 5, 5, 32
  045ccbc  clrldi 4, 4, 32
  045ccc0  lfs 7, 48(5)
  045ccc4  stfs 7, 16(31)
  045ccc8  lfs 6, 52(5)
  045cccc  stfs 6, 20(31)
  045ccd0  lfs 5, 56(5)
  045ccd4  stfs 5, 24(31)
  045ccd8  lfs 4, 60(5)
  045ccdc  stfs 4, 28(31)
  045cce0  lwzx 5, 3, 6
  045cce4  lfsx 1, 3, 6
  045cce8  lwz 3, 4(4)
  045ccec  lfs 2, 4(4)
  045ccf0  fabs 9, 1
  045ccf4  fabs 10, 2
  045ccf8  rlwinm 3, 3, 3, 29, 29
  045ccfc  lis 4, 115
  045cd00  addic 4, 4, 22784
  045cd04  fsubs 1, 9, 10
  045cd08  stfs 1, 144(1)
  045cd0c  lfs 1, 4(29)
  045cd10  lwz 6, 144(1)
  045cd14  lfs 2, 144(1)
  045cd18  rlwimi 3, 6, 2, 30, 30
  045cd1c  fsub 8, 2, 1
  045cd20  fsub 11, 2, 1
  045cd24  rlwimi 3, 5, 4, 28, 28
  045cd28  ori 5, 4, 0
  045cd2c  rlwimi 5, 3, 2, 26, 28
  045cd30  slwi 3, 3, 2
  045cd34  clrldi 5, 5, 32
  045cd38  fsel 8, 8, 9, 10
  045cd3c  lfsx 3, 4, 3
  045cd40  fsel 9, 11, 10, 9
  045cd44  lfs 2, 4(5)
  045cd48  fcmpu 0, 8, 1
  045cd4c  bt 1, 0x45cd54
  045cd50  b 0x45ce78
  045cd54  fsubs 10, 9, 8
  045cd58  fadds 8, 9, 8
  045cd5c  addic 5, 1, 16
  045cd60  li 6, 2
  045cd64  addic 4, 5, 132
  045cd68  addic 3, 5, 148
  045cd6c  mtctr 6
  045cd70  fdivs 8, 10, 8
  045cd74  fmuls 10, 8, 8
  045cd78  stfs 8, 160(1)
  045cd7c  stfs 8, 152(1)
  045cd80  stfs 8, 156(1)
  045cd84  stfs 8, 148(1)
  045cd88  lfs 11, 160(1)
  045cd8c  lfs 12, 152(1)
  045cd90  lfs 13, 156(1)
  045cd94  fmuls 8, 10, 10
  045cd98  fmuls 12, 12, 10
  045cd9c  fmuls 11, 11, 8
  045cda0  fmuls 9, 8, 8
  045cda4  fmuls 8, 13, 8
  045cda8  stfs 12, 152(1)
  045cdac  fmuls 10, 11, 10
  045cdb0  stfs 8, 156(1)
  045cdb4  stfs 10, 160(1)
  045cdb8  lfs 8, 132(5)
  045cdbc  fmuls 8, 8, 9
  045cdc0  stfs 8, 148(5)
  045cdc4  lfs 8, 4(4)
  045cdc8  addic 5, 5, 8
  045cdcc  addic 4, 4, 8
  045cdd0  fmuls 8, 8, 9
  045cdd4  stfs 8, 4(3)
  045cdd8  addic 3, 3, 8
  045cddc  bdnz 0x45cdb8
  045cde0  ori 6, 1, 0
  045cde4  lis 5, 115
  045cde8  li 7, 4
  045cdec  addic 4, 6, 148
  045cdf0  addic 5, 5, 22752
  045cdf4  ori 3, 4, 0
  045cdf8  mtctr 7
  045cdfc  lfs 8, 148(6)
  045ce00  lfs 9, 0(5)
  045ce04  fmuls 8, 8, 9
  045ce08  lfs 9, 4(5)
  045ce0c  addic 5, 5, 8
  045ce10  stfs 8, 148(6)
  045ce14  lfs 8, 4(4)
  045ce18  addic 6, 6, 8
  045ce1c  fmuls 8, 8, 9
  045ce20  stfs 8, 4(4)
  045ce24  addic 4, 4, 8
  045ce28  bdnz 0x45cdfc
  045ce2c  li 5, 2
  045ce30  ori 4, 1, 0
  045ce34  mtctr 5
  045ce38  lfs 8, 148(4)
  045ce3c  fadds 1, 1, 8
  045ce40  addic 4, 4, 16
  045ce44  lfs 8, 4(3)
  045ce48  lfs 9, 8(3)
  045ce4c  lfs 10, 12(3)
  045ce50  addic 3, 3, 16
  045ce54  fadds 1, 1, 8
  045ce58  fadds 1, 1, 9
  045ce5c  fadds 1, 1, 10
  045ce60  bdnz 0x45ce38
  045ce64  lis 3, 70
  045ce68  addi 3, 3, -13524
  045ce6c  lfs 8, 8(3)
  045ce70  fadds 1, 1, 8
  045ce74  fmadds 1, 1, 3, 2
  045ce78  fmr 3, 1
  045ce7c  lis 3, 70
  045ce80  addi 3, 3, -13524
  045ce84  lfs 1, 12(3)
  045ce88  lfs 2, 16(3)
  045ce8c  fadds 1, 3, 1
  045ce90  lfs 8, 20(3)
  045ce94  fsubs 9, 2, 3
  045ce98  fsubs 10, 8, 3
  045ce9c  li 4, 0
  045cea0  fsubs 2, 2, 1
  045cea4  fsub 11, 3, 9
  045cea8  fsubs 8, 8, 1
  045ceac  fsub 13, 1, 2
  045ceb0  fsel 9, 11, 9, 3
  045ceb4  lfs 11, 24(3)
  045ceb8  fsel 1, 13, 2, 1
  045cebc  fsub 2, 10, 9
  045cec0  fsub 13, 8, 1
  045cec4  fsel 2, 2, 10, 9
  045cec8  lfs 9, 28(3)
  045cecc  lfs 10, 32(3)
  045ced0  lfs 12, 36(3)
  045ced4  fsel 1, 13, 8, 1
  045ced8  fmuls 8, 2, 2
  045cedc  fmuls 13, 1, 1
  045cee0  fmuls 0, 8, 2
  045cee4  fmuls 30, 13, 1
  045cee8  fmuls 29, 8, 0
  045ceec  fmadds 2, 0, 11, 2
  045cef0  lfs 0, 40(3)
  045cef4  stw 4, 140(1)
  045cef8  stw 4, 136(1)
  045cefc  stw 4, 132(1)
  045cf00  stw 4, 128(1)
  045cf04  fmuls 31, 13, 30
  045cf08  fmadds 1, 30, 11, 1
  045cf0c  fmuls 11, 8, 29
  045cf10  fmadds 2, 29, 9, 2
  045cf14  fmuls 30, 13, 31
  045cf18  fmadds 1, 31, 9, 1
  045cf1c  fmuls 8, 8, 11
  045cf20  fmadds 2, 11, 10, 2
  045cf24  fmuls 9, 13, 30
  045cf28  fmadds 10, 30, 10, 1
  045cf2c  fmr 1, 3
  045cf30  fmadds 2, 8, 12, 2
  045cf34  fmadds 8, 9, 12, 10
  045cf38  fmadds 2, 2, 0, 6
  045cf3c  fmadds 6, 8, 0, 7
  045cf40  stfs 2, 116(1)
  045cf44  lfs 2, 44(3)
  045cf48  stfs 4, 124(1)
  045cf4c  stfs 5, 120(1)
  045cf50  stfs 3, 72(31)
  045cf54  stfs 6, 112(1)
  045cf58  bl 0x502578
  045cf5c  nop
  045cf60  addic 3, 1, 112
  045cf64  stfs 1, 136(1)
  045cf68  addic 4, 1, 128
  045cf6c  li 5, 0
  045cf70  li 6, 1
  045cf74  bl 0xa0c38
  045cf78  nop
  045cf7c  lis 3, 164
  045cf80  lwz 4, 344(30)
  045cf84  lwz 5, 348(30)
  045cf88  li 6, 1
  045cf8c  slwi 4, 4, 8
  045cf90  slwi 5, 5, 8
  045cf94  lwz 3, -28512(3)
  045cf98  addc 4, 3, 4
  045cf9c  addc 3, 3, 5
  045cfa0  clrldi 4, 4, 32
  045cfa4  clrldi 3, 3, 32
  045cfa8  li 5, 2
  045cfac  stb 6, 188(4)
  045cfb0  stb 6, 188(3)
  045cfb4  sth 5, 54(30)
  045cfb8  stb 6, 8(30)
  045cfbc  b 0x45d054
  045cfc0  bf 6, 0x45d054
  045cfc4  lis 3, 151
  045cfc8  lwz 4, 328(30)
  045cfcc  addic 3, 3, -25248
  045cfd0  extsw 4, 4
  045cfd4  bl 0x110b70
  045cfd8  nop
  045cfdc  cmpwi 3, 0
  045cfe0  bt 2, 0x45d054
  045cfe4  li 3, 1
  045cfe8  lis 4, 112
  045cfec  lis 5, 112
  045cff0  addic 31, 4, 22536
  045cff4  stw 3, 384(30)
  045cff8  lis 4, 112
  045cffc  li 3, 21
  045d000  addic 29, 5, 22672
  045d004  addic 28, 4, 22680
  045d008  addic 8, 30, 332
  045d00c  li 9, 100
  045d010  li 4, 2000
  045d014  ori 5, 31, 0
  045d018  ori 6, 29, 0
  045d01c  ori 7, 28, 0
  045d020  bl 0xc8444
  045d024  nop
  045d028  stw 3, 356(30)
  045d02c  li 3, 23
  045d030  addic 8, 30, 336
  045d034  li 4, 2001
  045d038  ori 5, 31, 0
  045d03c  ori 6, 29, 0
  045d040  ori 7, 28, 0
  045d044  li 9, 7
  045d048  bl 0xc8444
  045d04c  nop
  045d050  stw 3, 352(30)
  045d054  ld 0, 272(1)
  045d058  mtlr 0
  045d05c  lfd 29, 232(1)
  045d060  lfd 30, 240(1)
  045d064  lfd 31, 248(1)
  045d068  ld 28, 200(1)
  045d06c  ld 29, 208(1)
  045d070  ld 30, 216(1)
  045d074  ld 31, 224(1)
  045d078  addi 1, 1, 256
  045d07c  blr

UpdateMoby_788:   # 0x45d0f8, 0xd68 bytes
  045d0f8  stdu 1, -352(1)
  045d0fc  mflr 0
  045d100  std 0, 368(1)
  045d104  stfd 27, 312(1)
  045d108  stfd 28, 320(1)
  045d10c  stfd 29, 328(1)
  045d110  stfd 30, 336(1)
  045d114  stfd 31, 344(1)
  045d118  std 31, 304(1)
  045d11c  lis 4, 161
  045d120  ori 31, 3, 0
  045d124  std 30, 296(1)
  045d128  lwz 4, 1800(4)
  045d12c  lwz 30, 120(3)
  045d130  std 29, 288(1)
  045d134  std 28, 280(1)
  045d138  std 27, 272(1)
  045d13c  std 26, 264(1)
  045d140  cmpwi 4, 2
  045d144  bf 2, 0x45d1e0
  045d148  lis 3, 151
  045d14c  lbz 3, -16268(3)
  045d150  cmpwi 3, 0
  045d154  bt 2, 0x45d1e0
  045d158  lis 28, 150
  045d15c  li 29, 0
  045d160  addic 28, 28, -12976
  045d164  lhz 4, 68(28)
  045d168  extsh 3, 4
  045d16c  cmpwi 3, 0
  045d170  bf 1, 0x45d1e0
  045d174  lis 27, 162
  045d178  ori 26, 28, 0
  045d17c  addic 27, 27, -16512
  045d180  lwz 3, 376(26)
  045d184  lhz 5, 166(31)
  045d188  extsh 5, 5
  045d18c  lhz 6, 166(3)
  045d190  extsh 6, 6
  045d194  cmpw 6, 5
  045d198  bf 2, 0x45d1cc
  045d19c  lbz 5, 1(27)
  045d1a0  cmpwi 5, 0
  045d1a4  bf 2, 0x45d1cc
  045d1a8  li 4, 0
  045d1ac  ori 5, 27, 0
  045d1b0  bl 0xf0ea8
  045d1b4  nop
  045d1b8  lis 3, 16432
  045d1bc  lhz 4, 68(28)
  045d1c0  stw 3, 32(27)
  045d1c4  stw 3, 36(27)
  045d1c8  stw 3, 40(27)
  045d1cc  extsh 3, 4
  045d1d0  addic 29, 29, 1
  045d1d4  addic 26, 26, 4
  045d1d8  cmpw 29, 3
  045d1dc  bt 0, 0x45d180
  045d1e0  ori 3, 31, 0
  045d1e4  bl 0x45cb60
  045d1e8  lbz 3, 32(31)
  045d1ec  lfs 6, 16(31)
  045d1f0  lfs 7, 20(31)
  045d1f4  cmpwi 3, 0
  045d1f8  lfs 8, 24(31)
  045d1fc  bt 1, 0x45d20c
  045d200  cmpwi 3, -1
  045d204  bf 1, 0x45d5a0
  045d208  b 0x45d220
  045d20c  cmpwi 3, 1
  045d210  bf 1, 0x45d288
  045d214  cmpwi 3, 2
  045d218  bf 1, 0x45d4a0
  045d21c  b 0x45d5a0
  045d220  lis 3, 151
  045d224  addic 3, 3, -16027
  045d228  lbz 3, 30(3)
  045d22c  cmpwi 3, 0
  045d230  bt 2, 0x45d244
  045d234  ori 3, 31, 0
  045d238  bl 0xefb38
  045d23c  nop
  045d240  b 0x45de24
  045d244  lis 3, 102
  045d248  li 4, 0
  045d24c  addic 7, 3, -31944
  045d250  li 5, 1
  045d254  li 6, 255
  045d258  stw 4, 384(30)
  045d25c  stw 7, 32(30)
  045d260  ori 3, 31, 0
  045d264  stb 5, 32(31)
  045d268  ori 4, 30, 0
  045d26c  stb 6, 48(31)
  045d270  bl 0x4d3720
  045d274  nop
  045d278  ori 3, 31, 0
  045d27c  bl 0x106308
  045d280  nop
  045d284  b 0x45d5a0
  045d288  lbz 3, 8(30)
  045d28c  cmpwi 3, 1
  045d290  bf 2, 0x45d2c8
  045d294  lis 3, 151
  045d298  lwz 4, 364(30)
  045d29c  addic 3, 3, -25376
  045d2a0  extsw 4, 4
  045d2a4  addic 3, 3, 128
  045d2a8  bl 0x110b70
  045d2ac  nop
  045d2b0  cmpwi 3, 0
  045d2b4  bt 2, 0x45d2c8
  045d2b8  lis 3, 70
  045d2bc  addi 3, 3, -12160
  045d2c0  lfs 1, 0(3)
  045d2c4  b 0x45d2d4
  045d2c8  lis 3, 70
  045d2cc  addi 3, 3, -12160
  045d2d0  lfs 1, 4(3)
  045d2d4  ori 3, 31, 0
  045d2d8  stfs 1, 12(30)
  045d2dc  ori 4, 30, 0
  045d2e0  bl 0x4d3870
  045d2e4  nop
  045d2e8  cmpwi 3, 0
  045d2ec  bt 2, 0x45d310
  045d2f0  lis 3, 70
  045d2f4  addi 4, 3, -12160
  045d2f8  ori 3, 31, 0
  045d2fc  lfs 1, 4(4)
  045d300  bl 0x119488
  045d304  nop
  045d308  li 3, 2
  045d30c  stb 3, 32(31)
  045d310  lhz 3, 4(30)
  045d314  cmpwi 3, 2
  045d318  bf 2, 0x45d380
  045d31c  li 3, 2000
  045d320  li 4, 10
  045d324  bl 0x7b310
  045d328  nop
  045d32c  li 3, 30
  045d330  li 4, 1
  045d334  bl 0x112e18
  045d338  nop
  045d33c  lbz 3, 176(31)
  045d340  bl 0xf1e50
  045d344  nop
  045d348  lis 3, 151
  045d34c  addic 4, 3, -25376
  045d350  addic 3, 4, 128
  045d354  addic 4, 4, 144
  045d358  bl 0x151e70
  045d35c  nop
  045d360  li 3, 0
  045d364  li 4, -1
  045d368  bl 0xe8aa4
  045d36c  nop
  045d370  ori 3, 31, 0
  045d374  bl 0xefb38
  045d378  nop
  045d37c  b 0x45de24
  045d380  lis 3, 70
  045d384  addi 4, 3, -12160
  045d388  lbz 3, 83(31)
  045d38c  cmpwi 3, 0
  045d390  lfs 31, 8(4)
  045d394  bf 2, 0x45d454
  045d398  addic 3, 30, 362
  045d39c  bl 0x4fffb4
  045d3a0  nop
  045d3a4  ori 4, 3, 0
  045d3a8  lbz 3, 83(31)
  045d3ac  cmpwi 4, 0
  045d3b0  bt 2, 0x45d454
  045d3b4  lis 3, 70
  045d3b8  addi 3, 3, -12160
  045d3bc  lfs 1, 12(3)
  045d3c0  lfs 2, 16(3)
  045d3c4  bl 0xfcbe8
  045d3c8  nop
  045d3cc  lis 29, 114
  045d3d0  lfs 2, -3056(29)
  045d3d4  fmuls 1, 1, 2
  045d3d8  bl 0x502758
  045d3dc  nop
  045d3e0  sth 3, 362(30)
  045d3e4  li 3, 2
  045d3e8  bl 0xfc620
  045d3ec  nop
  045d3f0  li 4, 0
  045d3f4  li 5, 2
  045d3f8  subc 3, 4, 3
  045d3fc  li 6, 1
  045d400  cntlzw 3, 3
  045d404  lbz 4, 83(31)
  045d408  subc 5, 5, 6
  045d40c  lfs 1, -3056(29)
  045d410  sldi 3, 3, 58
  045d414  sradi 3, 3, 63
  045d418  and 3, 3, 5
  045d41c  addc 3, 6, 3
  045d420  cmpw 4, 3
  045d424  bt 2, 0x45d5a0
  045d428  fmuls 1, 1, 31
  045d42c  ori 4, 3, 0
  045d430  ori 3, 31, 0
  045d434  li 5, 0
  045d438  fctiwz 1, 1
  045d43c  stfd 1, 248(1)
  045d440  lwz 6, 252(1)
  045d444  extsw 6, 6
  045d448  bl 0xfddc0
  045d44c  nop
  045d450  b 0x45d5a0
  045d454  cmpwi 1, 3, 0
  045d458  lbz 3, 112(31)
  045d45c  rlwinm 3, 3, 0, 30, 30
  045d460  cmpwi 3, 0
  045d464  cror 2, 2, 6
  045d468  bt 2, 0x45d5a0
  045d46c  lis 3, 114
  045d470  li 4, 0
  045d474  li 5, 0
  045d478  lfs 1, -3056(3)
  045d47c  ori 3, 31, 0
  045d480  fmuls 1, 1, 31
  045d484  fctiwz 1, 1
  045d488  stfd 1, 248(1)
  045d48c  lwz 6, 252(1)
  045d490  extsw 6, 6
  045d494  bl 0xfddc0
  045d498  nop
  045d49c  b 0x45d5a0
  045d4a0  lis 29, 150
  045d4a4  addic 29, 29, -12976
  045d4a8  lbz 3, 74(29)
  045d4ac  cmpwi 3, 0
  045d4b0  bf 2, 0x45d588
  045d4b4  lfs 3, 196(31)
  045d4b8  lfs 2, 192(31)
  045d4bc  fmuls 1, 3, 3
  045d4c0  lfs 4, 200(31)
  045d4c4  lis 3, 70
  045d4c8  addi 3, 3, -12160
  045d4cc  fmadds 1, 2, 2, 1
  045d4d0  lfs 5, 20(3)
  045d4d4  fmadds 1, 4, 4, 1
  045d4d8  fsqrts 1, 1
  045d4dc  fcmpu 0, 1, 5
  045d4e0  bf 2, 0x45d4f4
  045d4e4  fmr 2, 5
  045d4e8  lfs 3, 204(31)
  045d4ec  fmr 1, 2
  045d4f0  b 0x45d514
  045d4f4  lis 3, 70
  045d4f8  addi 3, 3, -12160
  045d4fc  lfs 5, 4(3)
  045d500  fdivs 9, 5, 1
  045d504  fmuls 1, 3, 9
  045d508  fmuls 5, 2, 9
  045d50c  lfs 3, 204(31)
  045d510  fmuls 2, 4, 9
  045d514  fadds 4, 5, 6
  045d518  fadds 1, 1, 7
  045d51c  lis 3, 70
  045d520  fadds 2, 2, 8
  045d524  stfs 3, 28(29)
  045d528  addi 28, 3, -12160
  045d52c  addic 3, 29, 16
  045d530  li 4, 0
  045d534  stfs 4, 16(29)
  045d538  stfs 1, 20(29)
  045d53c  lfs 1, 24(28)
  045d540  fadds 1, 2, 1
  045d544  stfs 1, 24(29)
  045d548  lfs 1, 28(28)
  045d54c  bl 0xffb70
  045d550  nop
  045d554  li 3, 0
  045d558  stfs 1, 24(29)
  045d55c  stw 3, 44(29)
  045d560  stw 3, 40(29)
  045d564  stw 3, 36(29)
  045d568  stw 3, 32(29)
  045d56c  lfs 1, 72(31)
  045d570  lfs 2, 32(28)
  045d574  bl 0x502578
  045d578  nop
  045d57c  li 3, 1
  045d580  stfs 1, 40(29)
  045d584  stb 3, 74(29)
  045d588  lis 3, 161
  045d58c  lwz 3, 1800(3)
  045d590  cmpwi 3, 2
  045d594  bt 2, 0x45d5a0
  045d598  li 3, 1
  045d59c  stb 3, 32(31)
  045d5a0  lis 3, 70
  045d5a4  lbz 4, 83(31)
  045d5a8  addi 3, 3, -12160
  045d5ac  cmpwi 4, 0
  045d5b0  lfs 31, 36(3)
  045d5b4  bf 2, 0x45ddbc
  045d5b8  lis 29, 151
  045d5bc  lfs 2, 20(31)
  045d5c0  lfs 1, 16(31)
  045d5c4  addic 29, 29, -25376
  045d5c8  lis 3, 70
  045d5cc  lfs 3, 132(29)
  045d5d0  lfs 4, 128(29)
  045d5d4  fsubs 3, 2, 3
  045d5d8  fsubs 4, 1, 4
  045d5dc  addi 3, 3, -12160
  045d5e0  fmuls 3, 3, 3
  045d5e4  fmadds 3, 4, 4, 3
  045d5e8  lfs 4, 40(3)
  045d5ec  fsqrts 3, 3
  045d5f0  fcmpu 0, 3, 4
  045d5f4  cror 6, 1, 2
  045d5f8  bt 6, 0x45d868
  045d5fc  lfs 3, 208(29)
  045d600  lfs 4, 212(29)
  045d604  lis 3, 70
  045d608  fsubs 1, 3, 1
  045d60c  fsubs 2, 4, 2
  045d610  addi 3, 3, -12160
  045d614  lis 4, 115
  045d618  addic 4, 4, 22784
  045d61c  fabs 5, 1
  045d620  fabs 6, 2
  045d624  stfs 1, 136(1)
  045d628  stfs 2, 140(1)
  045d62c  lfs 3, 72(31)
  045d630  fsubs 1, 5, 6
  045d634  stfs 1, 144(1)
  045d638  lwz 5, 136(1)
  045d63c  lfs 4, 20(3)
  045d640  lfs 1, 136(1)
  045d644  lwz 3, 140(1)
  045d648  lfs 2, 140(1)
  045d64c  fabs 1, 1
  045d650  lwz 6, 144(1)
  045d654  rlwinm 3, 3, 3, 29, 29
  045d658  fabs 7, 2
  045d65c  lfs 2, 144(1)
  045d660  rlwimi 3, 6, 2, 30, 30
  045d664  fsub 8, 2, 4
  045d668  rlwimi 3, 5, 4, 28, 28
  045d66c  fsub 9, 2, 4
  045d670  ori 5, 4, 0
  045d674  rlwimi 5, 3, 2, 26, 28
  045d678  slwi 3, 3, 2
  045d67c  clrldi 5, 5, 32
  045d680  fsel 6, 8, 1, 6
  045d684  lfsx 1, 4, 3
  045d688  lfs 2, 4(5)
  045d68c  fsel 5, 9, 7, 5
  045d690  fcmpu 0, 6, 4
  045d694  bt 1, 0x45d69c
  045d698  b 0x45d7bc
  045d69c  fsubs 7, 5, 6
  045d6a0  fadds 5, 5, 6
  045d6a4  addic 3, 1, 16
  045d6a8  li 6, 2
  045d6ac  addic 5, 3, 212
  045d6b0  addic 4, 3, 196
  045d6b4  mtctr 6
  045d6b8  fdivs 5, 7, 5
  045d6bc  fmuls 6, 5, 5
  045d6c0  stfs 5, 224(1)
  045d6c4  stfs 5, 216(1)
  045d6c8  stfs 5, 220(1)
  045d6cc  stfs 5, 212(1)
  045d6d0  lfs 8, 224(1)
  045d6d4  lfs 9, 216(1)
  045d6d8  lfs 10, 220(1)
  045d6dc  fmuls 7, 6, 6
  045d6e0  fmuls 9, 9, 6
  045d6e4  fmuls 8, 8, 7
  045d6e8  fmuls 5, 7, 7
  045d6ec  fmuls 7, 10, 7
  045d6f0  stfs 9, 216(1)
  045d6f4  fmuls 6, 8, 6
  045d6f8  stfs 7, 220(1)
  045d6fc  stfs 6, 224(1)
  045d700  lfs 6, 196(3)
  045d704  fmuls 6, 6, 5
  045d708  stfs 6, 212(3)
  045d70c  lfs 6, 4(4)
  045d710  addic 4, 4, 8
  045d714  fmuls 6, 6, 5
  045d718  addic 3, 3, 8
  045d71c  stfs 6, 4(5)
  045d720  addic 5, 5, 8
  045d724  bdnz 0x45d700
  045d728  li 5, 4
  045d72c  ori 3, 1, 0
  045d730  mtctr 5
  045d734  lis 4, 115
  045d738  addic 5, 3, 212
  045d73c  addic 4, 4, 22752
  045d740  ori 7, 5, 0
  045d744  lfs 5, 212(3)
  045d748  lfs 6, 0(4)
  045d74c  fmuls 5, 5, 6
  045d750  lfs 6, 4(4)
  045d754  addic 4, 4, 8
  045d758  stfs 5, 212(3)
  045d75c  lfs 5, 4(5)
  045d760  addic 3, 3, 8
  045d764  fmuls 5, 5, 6
  045d768  stfs 5, 4(5)
  045d76c  addic 5, 5, 8
  045d770  bdnz 0x45d744
  045d774  ori 3, 1, 0
  045d778  mtctr 6
  045d77c  lfs 5, 212(3)
  045d780  fadds 4, 4, 5
  045d784  addic 3, 3, 16
  045d788  lfs 5, 4(7)
  045d78c  lfs 6, 8(7)
  045d790  lfs 7, 12(7)
  045d794  addic 7, 7, 16
  045d798  fadds 4, 4, 5
  045d79c  fadds 4, 4, 6
  045d7a0  fadds 4, 4, 7
  045d7a4  bdnz 0x45d77c
  045d7a8  lis 3, 70
  045d7ac  addi 3, 3, -12160
  045d7b0  lfs 5, 44(3)
  045d7b4  fadds 4, 4, 5
  045d7b8  fmadds 4, 4, 1, 2
  045d7bc  fmr 1, 3
  045d7c0  fmr 2, 4
  045d7c4  bl 0x5026a0
  045d7c8  nop
  045d7cc  lis 3, 70
  045d7d0  addi 3, 3, -12160
  045d7d4  lfs 2, 48(3)
  045d7d8  fcmpu 0, 1, 2
  045d7dc  cror 6, 1, 2
  045d7e0  bt 6, 0x45d868
  045d7e4  lfs 1, 260(29)
  045d7e8  lfs 2, 256(29)
  045d7ec  fmuls 1, 1, 1
  045d7f0  lfs 3, 264(29)
  045d7f4  lis 3, 70
  045d7f8  addi 3, 3, -12160
  045d7fc  fmadds 1, 2, 2, 1
  045d800  lfs 2, 52(3)
  045d804  fmadds 1, 3, 3, 1
  045d808  fsqrts 1, 1
  045d80c  fcmpu 0, 1, 2
  045d810  cror 6, 0, 2
  045d814  bt 6, 0x45d858
  045d818  lis 3, 70
  045d81c  vspltisw 2, -1
  045d820  li 5, 56
  045d824  addi 3, 3, -12160
  045d828  lis 4, 114
  045d82c  li 6, -3056
  045d830  vslw 2, 2, 2
  045d834  <unknown>
  045d838  li 3, 392
  045d83c  vspltw 3, 3, 0
  045d840  <unknown>
  045d844  vmaddfp 2, 4, 3, 2
  045d848  vctsxs 2, 2, 0
  045d84c  vspltw 2, 2, 0
  045d850  stvewx 2, 3, 30
  045d854  b 0x45d89c
  045d858  addic 3, 30, 392
  045d85c  bl 0x4fff60
  045d860  nop
  045d864  b 0x45d89c
  045d868  lwz 3, 392(30)
  045d86c  cmpwi 3, 0
  045d870  bt 2, 0x45d89c
  045d874  li 3, 0
  045d878  stw 3, 392(30)
  045d87c  lfs 1, 208(29)
  045d880  stfs 1, 368(30)
  045d884  lfs 1, 212(29)
  045d888  stfs 1, 372(30)
  045d88c  lfs 1, 216(29)
  045d890  stfs 1, 376(30)
  045d894  lfs 1, 220(29)
  045d898  stfs 1, 380(30)
  045d89c  addic 3, 30, 396
  045d8a0  bl 0x4fff60
  045d8a4  nop
  045d8a8  cmpwi 3, 0
  045d8ac  bt 2, 0x45d964
  045d8b0  lis 3, 70
  045d8b4  addi 28, 3, -12160
  045d8b8  lfs 1, 60(28)
  045d8bc  lfs 2, 64(28)
  045d8c0  bl 0xfcbe8
  045d8c4  nop
  045d8c8  lis 3, 114
  045d8cc  lfs 2, -3056(3)
  045d8d0  fmuls 1, 1, 2
  045d8d4  bl 0x502758
  045d8d8  nop
  045d8dc  stw 3, 396(30)
  045d8e0  lfs 1, 68(28)
  045d8e4  lfs 30, 72(31)
  045d8e8  lfs 2, 72(28)
  045d8ec  bl 0xfcbe8
  045d8f0  nop
  045d8f4  lfs 29, 76(28)
  045d8f8  fmuls 2, 1, 29
  045d8fc  fmr 1, 30
  045d900  bl 0x502578
  045d904  nop
  045d908  fmr 30, 1
  045d90c  lfs 1, 20(28)
  045d910  lfs 2, 80(28)
  045d914  bl 0xfcbe8
  045d918  nop
  045d91c  fmuls 3, 1, 29
  045d920  lfs 1, 84(28)
  045d924  addic 3, 30, 368
  045d928  fmr 2, 30
  045d92c  bl 0xfe610
  045d930  nop
  045d934  lfs 1, 368(30)
  045d938  lfs 2, 16(31)
  045d93c  fadds 1, 1, 2
  045d940  lfs 2, 372(30)
  045d944  lfs 3, 376(30)
  045d948  stfs 1, 368(30)
  045d94c  lfs 1, 20(31)
  045d950  fadds 1, 2, 1
  045d954  stfs 1, 372(30)
  045d958  lfs 1, 24(31)
  045d95c  fadds 1, 3, 1
  045d960  stfs 1, 376(30)
  045d964  lwz 3, 392(30)
  045d968  cmpwi 3, 0
  045d96c  bt 2, 0x45d98c
  045d970  lis 3, 70
  045d974  lfs 30, 208(29)
  045d978  lfs 29, 212(29)
  045d97c  addi 3, 3, -12160
  045d980  lfs 28, 216(29)
  045d984  lfs 31, 88(3)
  045d988  b 0x45d998
  045d98c  lfs 30, 368(30)
  045d990  lfs 29, 372(30)
  045d994  lfs 28, 376(30)
  045d998  lfs 1, 16(31)
  045d99c  lis 3, 70
  045d9a0  lfs 2, 20(31)
  045d9a4  fsubs 30, 30, 1
  045d9a8  fsubs 29, 29, 2
  045d9ac  addi 3, 3, -12160
  045d9b0  lis 29, 115
  045d9b4  addic 29, 29, 22784
  045d9b8  lfs 1, 92(3)
  045d9bc  fabs 3, 30
  045d9c0  fabs 4, 29
  045d9c4  stfs 30, 124(1)
  045d9c8  stfs 29, 128(1)
  045d9cc  lfs 5, 24(31)
  045d9d0  fadds 1, 5, 1
  045d9d4  fsubs 2, 3, 4
  045d9d8  fsubs 28, 28, 1
  045d9dc  stfs 2, 132(1)
  045d9e0  lwz 4, 124(1)
  045d9e4  lfs 27, 20(3)
  045d9e8  lfs 2, 124(1)
  045d9ec  lwz 3, 128(1)
  045d9f0  lfs 1, 128(1)
  045d9f4  fabs 2, 2
  045d9f8  lwz 5, 132(1)
  045d9fc  rlwinm 3, 3, 3, 29, 29
  045da00  fabs 5, 1
  045da04  lfs 1, 132(1)
  045da08  rlwimi 3, 5, 2, 30, 30
  045da0c  fsub 6, 1, 27
  045da10  fsub 7, 1, 27
  045da14  rlwimi 3, 4, 4, 28, 28
  045da18  ori 4, 29, 0
  045da1c  rlwimi 4, 3, 2, 26, 28
  045da20  slwi 3, 3, 2
  045da24  clrldi 4, 4, 32
  045da28  fsel 4, 6, 2, 4
  045da2c  lfsx 1, 29, 3
  045da30  fsel 3, 7, 5, 3
  045da34  lfs 2, 4(4)
  045da38  fcmpu 0, 4, 27
  045da3c  bt 1, 0x45da48
  045da40  fmr 1, 27
  045da44  b 0x45db6c
  045da48  fsubs 5, 3, 4
  045da4c  fadds 3, 3, 4
  045da50  addic 3, 1, 16
  045da54  li 6, 2
  045da58  addic 4, 3, 164
  045da5c  addic 5, 3, 180
  045da60  mtctr 6
  045da64  fdivs 3, 5, 3
  045da68  fmuls 4, 3, 3
  045da6c  stfs 3, 192(1)
  045da70  stfs 3, 184(1)
  045da74  stfs 3, 188(1)
  045da78  stfs 3, 180(1)
  045da7c  lfs 6, 192(1)
  045da80  lfs 7, 184(1)
  045da84  lfs 8, 188(1)
  045da88  fmuls 5, 4, 4
  045da8c  fmuls 7, 7, 4
  045da90  fmuls 6, 6, 5
  045da94  fmuls 3, 5, 5
  045da98  fmuls 5, 8, 5
  045da9c  stfs 7, 184(1)
  045daa0  fmuls 4, 6, 4
  045daa4  stfs 5, 188(1)
  045daa8  stfs 4, 192(1)
  045daac  lfs 4, 164(3)
  045dab0  fmuls 4, 4, 3
  045dab4  stfs 4, 180(3)
  045dab8  lfs 4, 4(4)
  045dabc  addic 3, 3, 8
  045dac0  addic 4, 4, 8
  045dac4  fmuls 4, 4, 3
  045dac8  stfs 4, 4(5)
  045dacc  addic 5, 5, 8
  045dad0  bdnz 0x45daac
  045dad4  li 5, 4
  045dad8  ori 3, 1, 0
  045dadc  mtctr 5
  045dae0  lis 4, 115
  045dae4  addic 5, 3, 180
  045dae8  addic 4, 4, 22752
  045daec  ori 7, 5, 0
  045daf0  lfs 3, 180(3)
  045daf4  lfs 4, 0(4)
  045daf8  fmuls 3, 3, 4
  045dafc  lfs 4, 4(4)
  045db00  addic 4, 4, 8
  045db04  stfs 3, 180(3)
  045db08  lfs 3, 4(5)
  045db0c  addic 3, 3, 8
  045db10  fmuls 3, 3, 4
  045db14  stfs 3, 4(5)
  045db18  addic 5, 5, 8
  045db1c  bdnz 0x45daf0
  045db20  fmr 3, 27
  045db24  ori 3, 1, 0
  045db28  mtctr 6
  045db2c  lfs 4, 180(3)
  045db30  fadds 3, 3, 4
  045db34  addic 3, 3, 16
  045db38  lfs 4, 4(7)
  045db3c  lfs 5, 8(7)
  045db40  lfs 6, 12(7)
  045db44  addic 7, 7, 16
  045db48  fadds 3, 3, 4
  045db4c  fadds 3, 3, 5
  045db50  fadds 3, 3, 6
  045db54  bdnz 0x45db2c
  045db58  lis 3, 70
  045db5c  addi 3, 3, -12160
  045db60  lfs 4, 44(3)
  045db64  fadds 3, 3, 4
  045db68  fmadds 1, 3, 1, 2
  045db6c  lfs 2, 72(31)
  045db70  bl 0x5025e0
  045db74  nop
  045db78  fmuls 2, 29, 29
  045db7c  stfs 28, 116(1)
  045db80  fabs 4, 28
  045db84  fmadds 2, 30, 30, 2
  045db88  fsqrts 2, 2
  045db8c  lwz 3, 116(1)
  045db90  lfs 3, 116(1)
  045db94  rlwinm 3, 3, 3, 29, 29
  045db98  fabs 3, 3
  045db9c  fabs 5, 2
  045dba0  stfs 2, 112(1)
  045dba4  fsubs 2, 5, 4
  045dba8  stfs 2, 120(1)
  045dbac  lwz 4, 112(1)
  045dbb0  lfs 2, 112(1)
  045dbb4  lwz 5, 120(1)
  045dbb8  lfs 6, 120(1)
  045dbbc  fabs 2, 2
  045dbc0  rlwimi 3, 5, 2, 30, 30
  045dbc4  fsub 7, 6, 27
  045dbc8  fsub 6, 6, 27
  045dbcc  rlwimi 3, 4, 4, 28, 28
  045dbd0  ori 4, 29, 0
  045dbd4  rlwimi 4, 3, 2, 26, 28
  045dbd8  slwi 3, 3, 2
  045dbdc  clrldi 4, 4, 32
  045dbe0  fsel 4, 7, 2, 4
  045dbe4  lfsx 30, 29, 3
  045dbe8  lfs 2, 4(4)
  045dbec  fsel 3, 6, 3, 5
  045dbf0  fcmpu 0, 4, 27
  045dbf4  bt 1, 0x45dbfc
  045dbf8  b 0x45dd1c
  045dbfc  fsubs 5, 3, 4
  045dc00  fadds 3, 3, 4
  045dc04  addic 3, 1, 16
  045dc08  li 7, 2
  045dc0c  addic 5, 3, 148
  045dc10  addic 4, 3, 132
  045dc14  mtctr 7
  045dc18  fdivs 3, 5, 3
  045dc1c  fmuls 4, 3, 3
  045dc20  stfs 3, 160(1)
  045dc24  stfs 3, 152(1)
  045dc28  stfs 3, 156(1)
  045dc2c  stfs 3, 148(1)
  045dc30  lfs 6, 160(1)
  045dc34  lfs 7, 152(1)
  045dc38  lfs 8, 156(1)
  045dc3c  fmuls 5, 4, 4
  045dc40  fmuls 7, 7, 4
  045dc44  fmuls 6, 6, 5
  045dc48  fmuls 3, 5, 5
  045dc4c  fmuls 5, 8, 5
  045dc50  stfs 7, 152(1)
  045dc54  fmuls 4, 6, 4
  045dc58  stfs 5, 156(1)
  045dc5c  stfs 4, 160(1)
  045dc60  lfs 4, 132(3)
  045dc64  fmuls 4, 4, 3
  045dc68  stfs 4, 148(3)
  045dc6c  lfs 4, 4(4)
  045dc70  addic 4, 4, 8
  045dc74  fmuls 4, 4, 3
  045dc78  addic 3, 3, 8
  045dc7c  stfs 4, 4(5)
  045dc80  addic 5, 5, 8
  045dc84  bdnz 0x45dc60
  045dc88  li 5, 4
  045dc8c  ori 3, 1, 0
  045dc90  mtctr 5
  045dc94  lis 4, 115
  045dc98  addic 5, 3, 148
  045dc9c  addic 4, 4, 22752
  045dca0  ori 6, 5, 0
  045dca4  lfs 3, 148(3)
  045dca8  lfs 4, 0(4)
  045dcac  fmuls 3, 3, 4
  045dcb0  lfs 4, 4(4)
  045dcb4  addic 4, 4, 8
  045dcb8  stfs 3, 148(3)
  045dcbc  lfs 3, 4(5)
  045dcc0  addic 3, 3, 8
  045dcc4  fmuls 3, 3, 4
  045dcc8  stfs 3, 4(5)
  045dccc  addic 5, 5, 8
  045dcd0  bdnz 0x45dca4
  045dcd4  ori 3, 1, 0
  045dcd8  mtctr 7
  045dcdc  lfs 3, 148(3)
  045dce0  lfs 4, 4(6)
  045dce4  fadds 3, 27, 3
  045dce8  lfs 5, 8(6)
  045dcec  addic 3, 3, 16
  045dcf0  lfs 27, 12(6)
  045dcf4  addic 6, 6, 16
  045dcf8  fadds 3, 3, 4
  045dcfc  fadds 3, 3, 5
  045dd00  fadds 27, 3, 27
  045dd04  bdnz 0x45dcdc
  045dd08  lis 3, 70
  045dd0c  addi 3, 3, -12160
  045dd10  lfs 3, 44(3)
  045dd14  fadds 27, 27, 3
  045dd18  fmadds 27, 27, 30, 2
  045dd1c  lis 3, 70
  045dd20  fneg 27, 27
  045dd24  addi 3, 3, -12160
  045dd28  lfs 2, 48(3)
  045dd2c  fcmpu 0, 1, 2
  045dd30  cror 6, 0, 2
  045dd34  bt 6, 0x45dd40
  045dd38  fmr 1, 2
  045dd3c  b 0x45dd5c
  045dd40  lis 3, 70
  045dd44  addi 3, 3, -12160
  045dd48  lfs 2, 96(3)
  045dd4c  fcmpu 0, 1, 2
  045dd50  cror 6, 1, 2
  045dd54  bt 6, 0x45dd5c
  045dd58  fmr 1, 2
  045dd5c  lis 3, 70
  045dd60  addi 3, 3, -12160
  045dd64  lfs 2, 100(3)
  045dd68  fcmpu 0, 27, 2
  045dd6c  cror 6, 0, 2
  045dd70  bt 6, 0x45dd7c
  045dd74  fmr 27, 2
  045dd78  b 0x45dd98
  045dd7c  lis 3, 70
  045dd80  addi 3, 3, -12160
  045dd84  lfs 2, 104(3)
  045dd88  fcmpu 0, 27, 2
  045dd8c  cror 6, 1, 2
  045dd90  bt 6, 0x45dd98
  045dd94  fmr 27, 2
  045dd98  lis 3, 70
  045dd9c  addi 3, 3, -12160
  045dda0  lfs 2, 108(3)
  045dda4  fmuls 2, 1, 2
  045dda8  stfs 2, 168(30)
  045ddac  lfs 2, 112(3)
  045ddb0  stfs 27, 164(30)
  045ddb4  fmuls 1, 1, 2
  045ddb8  stfs 1, 296(30)
  045ddbc  lis 3, 151
  045ddc0  lbz 3, -16268(3)
  045ddc4  cmpwi 3, 0
  045ddc8  bt 2, 0x45ddd4
  045ddcc  lis 3, 16432
  045ddd0  stw 3, 176(30)
  045ddd4  lis 3, 70
  045ddd8  lis 29, 114
  045dddc  addi 5, 3, -12160
  045dde0  addic 4, 30, 64
  045dde4  ori 3, 31, 0
  045dde8  lfs 30, 116(5)
  045ddec  lfs 2, -3060(29)
  045ddf0  li 5, 0
  045ddf4  fmuls 1, 2, 31
  045ddf8  fmuls 2, 2, 30
  045ddfc  bl 0x1167c8
  045de00  nop
  045de04  lfs 2, -3060(29)
  045de08  addic 4, 30, 192
  045de0c  fmuls 1, 2, 31
  045de10  ori 3, 31, 0
  045de14  fmuls 2, 2, 30
  045de18  li 5, 1
  045de1c  bl 0x1167c8
  045de20  nop
  045de24  ld 0, 368(1)
  045de28  mtlr 0
  045de2c  lfd 27, 312(1)
  045de30  lfd 28, 320(1)
  045de34  lfd 29, 328(1)
  045de38  lfd 30, 336(1)
  045de3c  lfd 31, 344(1)
  045de40  ld 26, 264(1)
  045de44  ld 27, 272(1)
  045de48  ld 28, 280(1)
  045de4c  ld 29, 288(1)
  045de50  ld 30, 296(1)
  045de54  ld 31, 304(1)
  045de58  addi 1, 1, 352
  045de5c  blr
