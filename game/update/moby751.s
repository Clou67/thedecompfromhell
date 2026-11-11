# game/update/moby751.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0044cddc:   # 0x44cddc, 0x38 bytes
  044cddc  stdu 1, -112(1)
  044cde0  mflr 0
  044cde4  std 0, 128(1)
  044cde8  li 4, 2
  044cdec  li 5, -66
  044cdf0  lhz 6, 52(3)
  044cdf4  stb 4, 32(3)
  044cdf8  and 4, 6, 5
  044cdfc  sth 4, 52(3)
  044ce00  bl 0x44b460
  044ce04  ld 0, 128(1)
  044ce08  mtlr 0
  044ce0c  addi 1, 1, 112
  044ce10  blr

M751_0044ce14:   # 0x44ce14, 0x14 bytes
  044ce14  lis 3, 134
  044ce18  lis 4, 1
  044ce1c  addic 3, 3, -22492
  044ce20  stw 4, 72(3)
  044ce24  blr

M751_0044ce28:   # 0x44ce28, 0x30 bytes
  044ce28  stdu 1, -112(1)
  044ce2c  mflr 0
  044ce30  std 0, 128(1)
  044ce34  lis 3, 134
  044ce38  li 4, 21
  044ce3c  addic 3, 3, -22336
  044ce40  bl 0x17cfdc
  044ce44  nop
  044ce48  ld 0, 128(1)
  044ce4c  mtlr 0
  044ce50  addi 1, 1, 112
  044ce54  blr

UpdateMoby_751:   # 0x44cee0, 0xaa0 bytes
  044cee0  stdu 1, -448(1)
  044cee4  mflr 0
  044cee8  std 0, 464(1)
  044ceec  stfd 17, 328(1)
  044cef0  stfd 18, 336(1)
  044cef4  stfd 19, 344(1)
  044cef8  stfd 20, 352(1)
  044cefc  stfd 21, 360(1)
  044cf00  stfd 22, 368(1)
  044cf04  stfd 23, 376(1)
  044cf08  stfd 24, 384(1)
  044cf0c  stfd 25, 392(1)
  044cf10  stfd 26, 400(1)
  044cf14  stfd 27, 408(1)
  044cf18  stfd 28, 416(1)
  044cf1c  stfd 29, 424(1)
  044cf20  stfd 30, 432(1)
  044cf24  stfd 31, 440(1)
  044cf28  std 26, 280(1)
  044cf2c  lbz 4, 32(3)
  044cf30  std 19, 224(1)
  044cf34  lis 26, 69
  044cf38  lwz 19, 120(3)
  044cf3c  std 31, 320(1)
  044cf40  cmpwi 4, 0
  044cf44  ori 31, 3, 0
  044cf48  addi 26, 26, -12712
  044cf4c  cmpwi 1, 4, -1
  044cf50  std 30, 312(1)
  044cf54  std 29, 304(1)
  044cf58  std 28, 296(1)
  044cf5c  std 27, 288(1)
  044cf60  std 25, 272(1)
  044cf64  std 24, 264(1)
  044cf68  std 23, 256(1)
  044cf6c  std 22, 248(1)
  044cf70  std 21, 240(1)
  044cf74  std 20, 232(1)
  044cf78  std 18, 216(1)
  044cf7c  cmpwi 6, 4, 1
  044cf80  bt 1, 0x44cf8c
  044cf84  bf 5, 0x44d8fc
  044cf88  b 0x44cf94
  044cf8c  bf 25, 0x44d3ec
  044cf90  b 0x44d8fc
  044cf94  li 3, 1
  044cf98  li 4, 255
  044cf9c  stb 3, 32(31)
  044cfa0  stb 4, 48(31)
  044cfa4  lfs 1, 0(26)
  044cfa8  lis 3, 134
  044cfac  lfs 2, 24(31)
  044cfb0  li 4, 21
  044cfb4  fadds 1, 2, 1
  044cfb8  stfs 1, 24(31)
  044cfbc  addic 31, 3, -22336
  044cfc0  ori 3, 31, 0
  044cfc4  bl 0x17b230
  044cfc8  nop
  044cfcc  lis 3, 135
  044cfd0  li 4, 8
  044cfd4  lis 6, -17711
  044cfd8  lis 8, 135
  044cfdc  lis 5, 135
  044cfe0  stw 4, -20124(3)
  044cfe4  ori 3, 6, 46871
  044cfe8  lis 4, 135
  044cfec  lis 7, 135
  044cff0  lis 6, 135
  044cff4  stw 3, -15640(8)
  044cff8  li 30, 0
  044cffc  lis 8, 135
  044d000  stw 3, -24664(5)
  044d004  lis 5, 135
  044d008  stw 3, -20152(4)
  044d00c  lis 4, 135
  044d010  stw 3, -29176(7)
  044d014  lfs 31, 4(26)
  044d018  stw 30, -15636(6)
  044d01c  stw 30, -20148(8)
  044d020  stw 30, -24660(5)
  044d024  stw 30, -29172(4)
  044d028  lfs 1, 8(26)
  044d02c  bl 0x17b780
  044d030  nop
  044d034  lis 3, 162
  044d038  lis 6, 116
  044d03c  addic 3, 3, -9472
  044d040  lis 7, 16768
  044d044  lis 8, 16256
  044d048  lis 9, 16230
  044d04c  lis 10, 15820
  044d050  lwz 4, 16(3)
  044d054  lwz 5, 20(3)
  044d058  ori 9, 9, 26214
  044d05c  lfs 1, 16(3)
  044d060  ori 10, 10, 52429
  044d064  lfs 2, 20(3)
  044d068  fabs 3, 1
  044d06c  fabs 5, 2
  044d070  addic 3, 6, -22016
  044d074  stw 7, -22016(6)
  044d078  lis 6, -16128
  044d07c  rlwinm 5, 5, 3, 29, 29
  044d080  fsubs 1, 3, 5
  044d084  stfs 1, 160(1)
  044d088  stw 7, 4(3)
  044d08c  stw 6, 8(3)
  044d090  stw 6, 12(3)
  044d094  stw 8, 16(3)
  044d098  stw 8, 20(3)
  044d09c  stw 9, 24(3)
  044d0a0  lis 7, 115
  044d0a4  stw 10, 32(3)
  044d0a8  lwz 6, 160(1)
  044d0ac  lfs 1, 160(1)
  044d0b0  addic 7, 7, 22784
  044d0b4  rlwimi 5, 6, 2, 30, 30
  044d0b8  fsub 4, 1, 31
  044d0bc  fsub 6, 1, 31
  044d0c0  rlwimi 5, 4, 4, 28, 28
  044d0c4  ori 4, 7, 0
  044d0c8  rlwimi 4, 5, 2, 26, 28
  044d0cc  slwi 5, 5, 2
  044d0d0  clrldi 4, 4, 32
  044d0d4  fsel 4, 4, 3, 5
  044d0d8  lfsx 1, 7, 5
  044d0dc  lfs 2, 4(4)
  044d0e0  fsel 3, 6, 5, 3
  044d0e4  fcmpu 0, 4, 31
  044d0e8  bt 1, 0x44d0f0
  044d0ec  b 0x44d208
  044d0f0  fsubs 5, 3, 4
  044d0f4  fadds 3, 3, 4
  044d0f8  addic 4, 1, 16
  044d0fc  li 7, 2
  044d100  addic 6, 4, 164
  044d104  addic 5, 4, 148
  044d108  mtctr 7
  044d10c  fdivs 3, 5, 3
  044d110  fmuls 4, 3, 3
  044d114  stfs 3, 176(1)
  044d118  stfs 3, 168(1)
  044d11c  stfs 3, 172(1)
  044d120  stfs 3, 164(1)
  044d124  lfs 6, 176(1)
  044d128  lfs 7, 168(1)
  044d12c  lfs 8, 172(1)
  044d130  fmuls 5, 4, 4
  044d134  fmuls 7, 7, 4
  044d138  fmuls 6, 6, 5
  044d13c  fmuls 3, 5, 5
  044d140  fmuls 5, 8, 5
  044d144  stfs 7, 168(1)
  044d148  fmuls 4, 6, 4
  044d14c  stfs 5, 172(1)
  044d150  stfs 4, 176(1)
  044d154  lfs 4, 148(4)
  044d158  fmuls 4, 4, 3
  044d15c  stfs 4, 164(4)
  044d160  lfs 4, 4(5)
  044d164  addic 5, 5, 8
  044d168  fmuls 4, 4, 3
  044d16c  addic 4, 4, 8
  044d170  stfs 4, 4(6)
  044d174  addic 6, 6, 8
  044d178  bdnz 0x44d154
  044d17c  li 6, 4
  044d180  ori 4, 1, 0
  044d184  mtctr 6
  044d188  lis 5, 115
  044d18c  addic 6, 4, 164
  044d190  addic 5, 5, 22752
  044d194  ori 8, 6, 0
  044d198  lfs 3, 164(4)
  044d19c  lfs 4, 0(5)
  044d1a0  fmuls 3, 3, 4
  044d1a4  lfs 4, 4(5)
  044d1a8  addic 5, 5, 8
  044d1ac  stfs 3, 164(4)
  044d1b0  lfs 3, 4(6)
  044d1b4  addic 4, 4, 8
  044d1b8  fmuls 3, 3, 4
  044d1bc  stfs 3, 4(6)
  044d1c0  addic 6, 6, 8
  044d1c4  bdnz 0x44d198
  044d1c8  ori 4, 1, 0
  044d1cc  mtctr 7
  044d1d0  lfs 3, 164(4)
  044d1d4  lfs 4, 4(8)
  044d1d8  fadds 3, 31, 3
  044d1dc  lfs 5, 8(8)
  044d1e0  addic 4, 4, 16
  044d1e4  lfs 31, 12(8)
  044d1e8  addic 8, 8, 16
  044d1ec  fadds 3, 3, 4
  044d1f0  fadds 3, 3, 5
  044d1f4  fadds 31, 3, 31
  044d1f8  bdnz 0x44d1d0
  044d1fc  lfs 3, 12(26)
  044d200  fadds 31, 31, 3
  044d204  fmadds 31, 31, 1, 2
  044d208  lfs 1, 16(26)
  044d20c  lfs 2, 20(26)
  044d210  fadds 1, 31, 1
  044d214  fsubs 4, 2, 31
  044d218  lfs 3, 24(26)
  044d21c  lis 4, -16621
  044d220  li 5, 41
  044d224  ori 4, 4, 52534
  044d228  li 6, 28
  044d22c  li 7, 42
  044d230  fsubs 2, 2, 1
  044d234  fsub 6, 31, 4
  044d238  fsubs 5, 3, 1
  044d23c  fsubs 3, 3, 31
  044d240  lis 27, 269
  044d244  lis 8, 18176
  044d248  addic 27, 27, -12992
  044d24c  lis 9, 16960
  044d250  fsub 7, 1, 2
  044d254  fsel 4, 6, 4, 31
  044d258  lfs 6, 28(26)
  044d25c  ori 28, 31, 0
  044d260  ori 29, 30, 0
  044d264  fsel 1, 7, 2, 1
  044d268  fsub 2, 3, 4
  044d26c  fsub 8, 5, 1
  044d270  fsel 2, 2, 3, 4
  044d274  lfs 3, 32(26)
  044d278  lfs 4, 36(26)
  044d27c  lfs 9, 40(26)
  044d280  fsel 1, 8, 5, 1
  044d284  fmuls 5, 2, 2
  044d288  fmuls 7, 1, 1
  044d28c  fmuls 8, 5, 2
  044d290  fmuls 10, 7, 1
  044d294  fmuls 11, 5, 8
  044d298  fmadds 2, 8, 6, 2
  044d29c  lfs 8, 44(26)
  044d2a0  stw 5, 40(3)
  044d2a4  li 5, 64
  044d2a8  stw 4, 56(3)
  044d2ac  lis 4, 230
  044d2b0  stb 6, 60(3)
  044d2b4  stw 7, 44(3)
  044d2b8  lis 6, 230
  044d2bc  li 7, 21
  044d2c0  fmuls 12, 7, 10
  044d2c4  fmadds 1, 10, 6, 1
  044d2c8  fmuls 6, 5, 11
  044d2cc  fmadds 2, 11, 3, 2
  044d2d0  stb 5, 61(3)
  044d2d4  lis 5, 230
  044d2d8  fmuls 10, 7, 12
  044d2dc  fmadds 1, 12, 3, 1
  044d2e0  fmuls 3, 5, 6
  044d2e4  fmadds 2, 6, 4, 2
  044d2e8  fmuls 5, 7, 10
  044d2ec  fmadds 1, 10, 4, 1
  044d2f0  fmadds 2, 3, 9, 2
  044d2f4  fmadds 1, 5, 9, 1
  044d2f8  fmuls 2, 2, 8
  044d2fc  fmuls 1, 1, 8
  044d300  stfs 2, 52(3)
  044d304  stw 31, -21888(4)
  044d308  lis 4, 230
  044d30c  stw 27, -21884(6)
  044d310  lis 6, 116
  044d314  stfs 1, 48(3)
  044d318  stw 7, -21880(5)
  044d31c  lis 3, 116
  044d320  stw 30, -21856(4)
  044d324  lis 5, 17279
  044d328  stw 8, -22168(6)
  044d32c  lis 4, 116
  044d330  stw 5, -22164(3)
  044d334  stw 9, -22160(4)
  044d338  ori 3, 28, 0
  044d33c  ori 4, 27, 0
  044d340  bl 0x17b4b0
  044d344  nop
  044d348  addic 29, 29, 1
  044d34c  addic 28, 28, 4512
  044d350  cmpwi 29, 21
  044d354  addic 27, 27, 16
  044d358  bt 0, 0x44d338
  044d35c  lfs 31, 48(26)
  044d360  ori 29, 30, 0
  044d364  lfs 30, 52(26)
  044d368  ori 28, 31, 0
  044d36c  lfs 29, 56(26)
  044d370  lfs 28, 60(26)
  044d374  ori 26, 29, 0
  044d378  ori 27, 30, 0
  044d37c  fmr 1, 31
  044d380  fmr 2, 30
  044d384  bl 0xfcbe8
  044d388  nop
  044d38c  lfsx 3, 31, 26
  044d390  fmr 2, 30
  044d394  fadds 27, 3, 1
  044d398  fmr 1, 31
  044d39c  bl 0xfcbe8
  044d3a0  nop
  044d3a4  lfs 2, 4(28)
  044d3a8  ori 3, 31, 0
  044d3ac  fmr 3, 29
  044d3b0  li 4, 21
  044d3b4  fadds 2, 2, 1
  044d3b8  fmr 1, 27
  044d3bc  fmr 4, 28
  044d3c0  bl 0x17c3b0
  044d3c4  nop
  044d3c8  addic 27, 27, 1
  044d3cc  cmpwi 27, 2
  044d3d0  bt 0, 0x44d37c
  044d3d4  addic 29, 29, 1
  044d3d8  addic 28, 28, 4512
  044d3dc  cmpwi 29, 21
  044d3e0  addic 26, 26, 4512
  044d3e4  bt 0, 0x44d378
  044d3e8  b 0x44d8fc
  044d3ec  li 29, 0
  044d3f0  li 30, -1
  044d3f4  ori 24, 29, 0
  044d3f8  ori 18, 24, 0
  044d3fc  lwz 3, 0(19)
  044d400  cmpwi 3, -1
  044d404  bt 2, 0x44d424
  044d408  lis 5, 149
  044d40c  extsw 4, 3
  044d410  addic 3, 5, 5376
  044d414  bl 0x110b70
  044d418  nop
  044d41c  cmpwi 3, 0
  044d420  bf 2, 0x44d474
  044d424  lis 4, 135
  044d428  ori 3, 24, 0
  044d42c  addic 4, 4, 6992
  044d430  lwzx 4, 4, 18
  044d434  cmpwi 4, 0
  044d438  bf 1, 0x44d59c
  044d43c  lis 5, 134
  044d440  lis 6, 135
  044d444  addic 5, 5, -22336
  044d448  addic 6, 6, 6964
  044d44c  lwzx 7, 6, 18
  044d450  addc 7, 7, 3
  044d454  mulli 7, 7, 4512
  044d458  addic 3, 3, 1
  044d45c  extsw 7, 7
  044d460  cmpw 3, 4
  044d464  addc 7, 5, 7
  044d468  sth 24, 30(7)
  044d46c  bt 0, 0x44d44c
  044d470  b 0x44d59c
  044d474  lis 27, 135
  044d478  ori 30, 29, 0
  044d47c  addic 27, 27, 6992
  044d480  ori 28, 24, 0
  044d484  lwzx 3, 27, 18
  044d488  cmpwi 3, 0
  044d48c  bf 1, 0x44d59c
  044d490  lfs 31, 64(26)
  044d494  lis 23, 135
  044d498  lfs 30, 68(26)
  044d49c  lis 22, 135
  044d4a0  lfs 29, 8(26)
  044d4a4  lis 21, 134
  044d4a8  lfs 28, 72(26)
  044d4ac  lis 20, 135
  044d4b0  ori 25, 24, 0
  044d4b4  addic 23, 23, 6880
  044d4b8  addic 22, 22, 6964
  044d4bc  addic 21, 21, -22336
  044d4c0  addic 20, 20, 7020
  044d4c4  lwzx 3, 22, 18
  044d4c8  addc 3, 3, 28
  044d4cc  mulli 4, 3, 4512
  044d4d0  slwi 3, 3, 2
  044d4d4  extsw 4, 4
  044d4d8  extsw 5, 3
  044d4dc  addc 4, 4, 21
  044d4e0  lwzx 3, 20, 18
  044d4e4  extsw 3, 3
  044d4e8  lwzx 5, 23, 5
  044d4ec  sth 5, 30(4)
  044d4f0  bl 0xfc620
  044d4f4  nop
  044d4f8  cmpwi 3, 0
  044d4fc  bf 2, 0x44d588
  044d500  fmr 1, 31
  044d504  fmr 2, 30
  044d508  bl 0xfcbe8
  044d50c  nop
  044d510  lwzx 3, 22, 18
  044d514  fmr 2, 30
  044d518  addc 3, 3, 28
  044d51c  mulli 3, 3, 4512
  044d520  extsw 3, 3
  044d524  lfsx 3, 21, 3
  044d528  fadds 27, 3, 1
  044d52c  fmr 1, 31
  044d530  bl 0xfcbe8
  044d534  nop
  044d538  lwzx 3, 22, 18
  044d53c  mulli 5, 3, 4512
  044d540  addc 3, 3, 28
  044d544  mulli 3, 3, 4512
  044d548  lis 6, 230
  044d54c  extsw 3, 3
  044d550  fmr 3, 29
  044d554  li 4, 1
  044d558  fmr 4, 28
  044d55c  addc 3, 3, 21
  044d560  li 9, 1
  044d564  lwz 6, -21888(6)
  044d568  addc 5, 6, 5
  044d56c  lfs 2, 4(3)
  044d570  addc 3, 5, 25
  044d574  fadds 2, 2, 1
  044d578  clrldi 3, 3, 32
  044d57c  fmr 1, 27
  044d580  bl 0x17bd90
  044d584  nop
  044d588  addic 28, 28, 1
  044d58c  lwzx 3, 27, 18
  044d590  addic 25, 25, 4512
  044d594  cmpw 28, 3
  044d598  bt 0, 0x44d4c4
  044d59c  addic 29, 29, 1
  044d5a0  addic 18, 18, 4
  044d5a4  cmpwi 29, 7
  044d5a8  addic 19, 19, 4
  044d5ac  bt 0, 0x44d3fc
  044d5b0  cmpwi 30, 0
  044d5b4  bt 0, 0x44d654
  044d5b8  cmpwi 1, 30, 3
  044d5bc  cmpwi 30, 1
  044d5c0  cror 2, 0, 5
  044d5c4  bt 2, 0x44d610
  044d5c8  lis 3, 116
  044d5cc  lis 4, 116
  044d5d0  li 6, 40
  044d5d4  lis 7, 116
  044d5d8  lis 5, 116
  044d5dc  stb 24, -22176(3)
  044d5e0  li 8, 48
  044d5e4  lis 3, 116
  044d5e8  stb 6, -22175(4)
  044d5ec  lis 9, 116
  044d5f0  li 4, 64
  044d5f4  lis 10, 116
  044d5f8  stb 24, -22172(7)
  044d5fc  stb 8, -22174(3)
  044d600  stb 4, -22173(5)
  044d604  stb 8, -22170(9)
  044d608  stb 6, -22171(10)
  044d60c  b 0x44d654
  044d610  lis 3, 116
  044d614  li 4, 24
  044d618  lis 6, 116
  044d61c  lis 5, 116
  044d620  lis 8, 116
  044d624  stb 4, -22176(3)
  044d628  lis 7, 116
  044d62c  li 3, 48
  044d630  li 10, 144
  044d634  lis 9, 116
  044d638  lis 11, 116
  044d63c  stb 3, -22175(6)
  044d640  stb 3, -22173(5)
  044d644  stb 10, -22174(8)
  044d648  stb 4, -22172(7)
  044d64c  stb 3, -22171(9)
  044d650  stb 10, -22170(11)
  044d654  lis 3, 134
  044d658  li 4, 21
  044d65c  addic 3, 3, -22336
  044d660  bl 0x17b8b8
  044d664  nop
  044d668  lis 3, 113
  044d66c  ori 4, 31, 0
  044d670  addic 3, 3, -6200
  044d674  bl 0x6d720
  044d678  nop
  044d67c  cmpwi 30, 0
  044d680  bt 2, 0x44d68c
  044d684  cmpwi 30, 6
  044d688  bf 2, 0x44d74c
  044d68c  lis 3, 269
  044d690  lwz 4, -12656(3)
  044d694  addic 4, 4, -1
  044d698  cmpwi 4, 0
  044d69c  stw 4, -12656(3)
  044d6a0  bt 1, 0x44d74c
  044d6a4  li 3, 5
  044d6a8  bl 0xfc620
  044d6ac  nop
  044d6b0  lis 4, 135
  044d6b4  sldi 3, 3, 4
  044d6b8  addic 4, 4, 7056
  044d6bc  addc 3, 4, 3
  044d6c0  clrldi 3, 3, 32
  044d6c4  lfs 1, 0(3)
  044d6c8  stfs 1, 112(1)
  044d6cc  lfs 1, 4(3)
  044d6d0  stfs 1, 116(1)
  044d6d4  lfs 1, 8(3)
  044d6d8  stfs 1, 120(1)
  044d6dc  lfs 1, 12(3)
  044d6e0  stfs 1, 124(1)
  044d6e4  lfs 31, 76(26)
  044d6e8  lfs 30, 80(26)
  044d6ec  fmr 1, 31
  044d6f0  fmr 2, 30
  044d6f4  bl 0xfcbe8
  044d6f8  nop
  044d6fc  lfs 2, 112(1)
  044d700  fadds 3, 2, 1
  044d704  fmr 1, 31
  044d708  fmr 2, 30
  044d70c  stfs 3, 112(1)
  044d710  bl 0xfcbe8
  044d714  nop
  044d718  lfs 2, 116(1)
  044d71c  addic 3, 1, 112
  044d720  fadds 1, 2, 1
  044d724  stfs 1, 116(1)
  044d728  lfs 1, 60(26)
  044d72c  bl 0x45c4e0
  044d730  nop
  044d734  li 4, 1200
  044d738  li 3, 300
  044d73c  bl 0xfe484
  044d740  nop
  044d744  lis 4, 269
  044d748  stw 3, -12656(4)
  044d74c  cmpwi 30, 5
  044d750  bf 2, 0x44d8fc
  044d754  lis 3, 161
  044d758  lis 4, 26214
  044d75c  lis 6, 135
  044d760  ori 4, 4, 26215
  044d764  addic 6, 6, 7256
  044d768  lwz 3, 1808(3)
  044d76c  mulhw 4, 4, 3
  044d770  srawi 4, 4, 3
  044d774  srwi 5, 4, 31
  044d778  addc 4, 4, 5
  044d77c  sldi 5, 4, 4
  044d780  sldi 4, 4, 2
  044d784  addc 4, 5, 4
  044d788  subc 3, 3, 4
  044d78c  lis 4, 15523
  044d790  extsw 3, 3
  044d794  lbzx 3, 6, 3
  044d798  clrldi 3, 3, 32
  044d79c  std 3, 200(1)
  044d7a0  ori 3, 4, 55050
  044d7a4  lfs 21, 84(26)
  044d7a8  stw 3, 128(1)
  044d7ac  lfs 30, 4(26)
  044d7b0  stw 24, 132(1)
  044d7b4  stw 24, 136(1)
  044d7b8  lfs 29, 88(26)
  044d7bc  lfs 28, 92(26)
  044d7c0  lfd 1, 200(1)
  044d7c4  fmr 2, 28
  044d7c8  fcfid 3, 1
  044d7cc  fmr 1, 29
  044d7d0  frsp 3, 3
  044d7d4  fmuls 31, 3, 21
  044d7d8  bl 0xfcbe8
  044d7dc  nop
  044d7e0  lfs 2, 96(26)
  044d7e4  fadds 1, 1, 2
  044d7e8  stfs 1, 144(1)
  044d7ec  lfs 27, 100(26)
  044d7f0  lfs 26, 104(26)
  044d7f4  fmr 1, 27
  044d7f8  fmr 2, 26
  044d7fc  bl 0xfcbe8
  044d800  nop
  044d804  lfs 25, 108(26)
  044d808  lis 3, 16924
  044d80c  lfs 24, 112(26)
  044d810  fmadds 2, 31, 25, 24
  044d814  fadds 1, 2, 1
  044d818  stfs 1, 148(1)
  044d81c  lfs 23, 116(26)
  044d820  stw 3, 152(1)
  044d824  lfs 22, 8(26)
  044d828  lfs 1, 120(26)
  044d82c  lfs 2, 0(26)
  044d830  bl 0xfcbe8
  044d834  nop
  044d838  fmr 2, 1
  044d83c  addic 3, 1, 144
  044d840  fmr 1, 22
  044d844  addic 4, 1, 128
  044d848  bl 0x1305b0
  044d84c  nop
  044d850  stw 24, 128(1)
  044d854  stw 24, 132(1)
  044d858  fmr 31, 30
  044d85c  stw 24, 136(1)
  044d860  lfs 20, 124(26)
  044d864  lfs 19, 128(26)
  044d868  lfs 18, 68(26)
  044d86c  lfs 17, 132(26)
  044d870  li 3, 32
  044d874  bl 0xfc620
  044d878  nop
  044d87c  cmpwi 3, 0
  044d880  bf 2, 0x44d8f0
  044d884  fmr 1, 29
  044d888  fmr 2, 28
  044d88c  bl 0xfcbe8
  044d890  nop
  044d894  fadds 3, 1, 20
  044d898  fmr 1, 27
  044d89c  fmr 2, 26
  044d8a0  stfs 3, 144(1)
  044d8a4  bl 0xfcbe8
  044d8a8  nop
  044d8ac  fmadds 3, 31, 25, 24
  044d8b0  fmr 2, 30
  044d8b4  fadds 3, 3, 1
  044d8b8  fmr 1, 19
  044d8bc  stfs 3, 148(1)
  044d8c0  bl 0xfcbe8
  044d8c4  nop
  044d8c8  fadds 3, 1, 23
  044d8cc  fmr 1, 18
  044d8d0  fmr 2, 17
  044d8d4  stfs 3, 152(1)
  044d8d8  bl 0xfcbe8
  044d8dc  nop
  044d8e0  addic 3, 1, 144
  044d8e4  addic 4, 1, 128
  044d8e8  bl 0x1303a8
  044d8ec  nop
  044d8f0  fadds 31, 31, 21
  044d8f4  fcmpu 0, 31, 22
  044d8f8  bt 0, 0x44d870
  044d8fc  ld 0, 464(1)
  044d900  mtlr 0
  044d904  lfd 17, 328(1)
  044d908  lfd 18, 336(1)
  044d90c  lfd 19, 344(1)
  044d910  lfd 20, 352(1)
  044d914  lfd 21, 360(1)
  044d918  lfd 22, 368(1)
  044d91c  lfd 23, 376(1)
  044d920  lfd 24, 384(1)
  044d924  lfd 25, 392(1)
  044d928  lfd 26, 400(1)
  044d92c  lfd 27, 408(1)
  044d930  lfd 28, 416(1)
  044d934  lfd 29, 424(1)
  044d938  lfd 30, 432(1)
  044d93c  lfd 31, 440(1)
  044d940  ld 18, 216(1)
  044d944  ld 19, 224(1)
  044d948  ld 20, 232(1)
  044d94c  ld 21, 240(1)
  044d950  ld 22, 248(1)
  044d954  ld 23, 256(1)
  044d958  ld 24, 264(1)
  044d95c  ld 25, 272(1)
  044d960  ld 26, 280(1)
  044d964  ld 27, 288(1)
  044d968  ld 28, 296(1)
  044d96c  ld 29, 304(1)
  044d970  ld 30, 312(1)
  044d974  ld 31, 320(1)
  044d978  addi 1, 1, 448
  044d97c  blr
