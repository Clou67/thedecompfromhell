# game/update/moby282.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0032ca80:   # 0x32ca80, 0x320 bytes
  032ca80  stdu 1, -208(1)
  032ca84  mflr 0
  032ca88  std 0, 224(1)
  032ca8c  stfd 31, 200(1)
  032ca90  std 27, 160(1)
  032ca94  ori 27, 3, 0
  032ca98  li 3, 281
  032ca9c  std 30, 184(1)
  032caa0  fmr 31, 1
  032caa4  std 29, 176(1)
  032caa8  std 28, 168(1)
  032caac  ori 30, 7, 0
  032cab0  ori 29, 5, 0
  032cab4  std 31, 192(1)
  032cab8  std 26, 152(1)
  032cabc  ori 28, 4, 0
  032cac0  bl 0xefa28
  032cac4  nop
  032cac8  ori 31, 3, 0
  032cacc  cmpwi 31, 0
  032cad0  bt 2, 0x32cd70
  032cad4  li 3, 255
  032cad8  lwz 7, 120(31)
  032cadc  li 4, 1
  032cae0  vspltisw 3, -1
  032cae4  lis 5, 51
  032cae8  lis 6, 114
  032caec  stb 3, 48(31)
  032caf0  addi 26, 5, -13732
  032caf4  sth 3, 50(31)
  032caf8  li 5, -3056
  032cafc  stb 4, 49(31)
  032cb00  stb 4, 32(31)
  032cb04  stw 27, 32(7)
  032cb08  stfs 31, 36(7)
  032cb0c  stw 30, 40(7)
  032cb10  lvlx 2, 0, 26
  032cb14  vslw 3, 3, 3
  032cb18  li 3, 12
  032cb1c  vspltw 2, 2, 0
  032cb20  li 4, 4
  032cb24  lvlx 4, 5, 6
  032cb28  vmaddfp 2, 4, 2, 3
  032cb2c  vspltisw 3, -1
  032cb30  li 5, 14
  032cb34  vslw 3, 3, 3
  032cb38  vctsxs 2, 2, 0
  032cb3c  vsplth 2, 2, 1
  032cb40  stvehx 2, 3, 7
  032cb44  lvlx 2, 4, 26
  032cb48  vspltw 2, 2, 0
  032cb4c  vmaddfp 2, 4, 2, 3
  032cb50  vctsxs 2, 2, 0
  032cb54  vsplth 2, 2, 1
  032cb58  stvehx 2, 5, 7
  032cb5c  lfs 1, 0(28)
  032cb60  stfs 1, 16(31)
  032cb64  lfs 1, 4(28)
  032cb68  stfs 1, 20(31)
  032cb6c  lfs 1, 8(28)
  032cb70  stfs 1, 24(31)
  032cb74  lfs 1, 12(28)
  032cb78  stfs 1, 28(31)
  032cb7c  lfs 1, 0(29)
  032cb80  stfs 1, 16(7)
  032cb84  lfs 1, 4(29)
  032cb88  stfs 1, 20(7)
  032cb8c  lfs 1, 8(29)
  032cb90  stfs 1, 24(7)
  032cb94  lfs 1, 12(29)
  032cb98  stfs 1, 28(7)
  032cb9c  lfs 1, 8(26)
  032cba0  lfs 2, 12(26)
  032cba4  bl 0xfcbe8
  032cba8  nop
  032cbac  lfs 2, 16(26)
  032cbb0  fmuls 1, 1, 2
  032cbb4  lis 5, 115
  032cbb8  addic 5, 5, 22784
  032cbbc  stfs 1, 64(31)
  032cbc0  lwz 3, 0(29)
  032cbc4  lwz 4, 4(29)
  032cbc8  lfs 1, 0(29)
  032cbcc  lfs 2, 4(29)
  032cbd0  fabs 4, 1
  032cbd4  fabs 5, 2
  032cbd8  rlwinm 4, 4, 3, 29, 29
  032cbdc  fsubs 1, 4, 5
  032cbe0  stfs 1, 112(1)
  032cbe4  lfs 31, 20(26)
  032cbe8  lwz 6, 112(1)
  032cbec  lfs 1, 112(1)
  032cbf0  rlwimi 4, 6, 2, 30, 30
  032cbf4  fsub 3, 1, 31
  032cbf8  fsub 6, 1, 31
  032cbfc  rlwimi 4, 3, 4, 28, 28
  032cc00  ori 3, 5, 0
  032cc04  rlwimi 3, 4, 2, 26, 28
  032cc08  slwi 4, 4, 2
  032cc0c  clrldi 3, 3, 32
  032cc10  fsel 3, 3, 4, 5
  032cc14  lfsx 2, 5, 4
  032cc18  fsel 4, 6, 5, 4
  032cc1c  lfs 1, 4(3)
  032cc20  fcmpu 0, 3, 31
  032cc24  bt 1, 0x32cc2c
  032cc28  b 0x32cd50
  032cc2c  fsubs 5, 4, 3
  032cc30  fadds 3, 4, 3
  032cc34  addic 6, 1, 16
  032cc38  li 3, 2
  032cc3c  addic 5, 6, 100
  032cc40  addic 4, 6, 116
  032cc44  mtctr 3
  032cc48  fdivs 3, 5, 3
  032cc4c  fmuls 5, 3, 3
  032cc50  stfs 3, 128(1)
  032cc54  stfs 3, 120(1)
  032cc58  stfs 3, 124(1)
  032cc5c  stfs 3, 116(1)
  032cc60  lfs 6, 128(1)
  032cc64  lfs 7, 120(1)
  032cc68  lfs 8, 124(1)
  032cc6c  fmuls 3, 5, 5
  032cc70  fmuls 7, 7, 5
  032cc74  fmuls 6, 6, 3
  032cc78  fmuls 4, 3, 3
  032cc7c  fmuls 3, 8, 3
  032cc80  stfs 7, 120(1)
  032cc84  fmuls 5, 6, 5
  032cc88  stfs 3, 124(1)
  032cc8c  stfs 5, 128(1)
  032cc90  lfs 3, 100(6)
  032cc94  fmuls 3, 3, 4
  032cc98  stfs 3, 116(6)
  032cc9c  lfs 3, 4(5)
  032cca0  addic 6, 6, 8
  032cca4  addic 5, 5, 8
  032cca8  fmuls 3, 3, 4
  032ccac  stfs 3, 4(4)
  032ccb0  addic 4, 4, 8
  032ccb4  bdnz 0x32cc90
  032ccb8  ori 7, 1, 0
  032ccbc  lis 6, 115
  032ccc0  li 8, 4
  032ccc4  addic 5, 7, 116
  032ccc8  addic 6, 6, 22752
  032cccc  ori 4, 5, 0
  032ccd0  mtctr 8
  032ccd4  lfs 3, 116(7)
  032ccd8  lfs 4, 0(6)
  032ccdc  fmuls 3, 3, 4
  032cce0  lfs 4, 4(6)
  032cce4  addic 6, 6, 8
  032cce8  stfs 3, 116(7)
  032ccec  lfs 3, 4(5)
  032ccf0  addic 7, 7, 8
  032ccf4  fmuls 3, 3, 4
  032ccf8  stfs 3, 4(5)
  032ccfc  addic 5, 5, 8
  032cd00  bdnz 0x32ccd4
  032cd04  ori 5, 3, 0
  032cd08  ori 3, 1, 0
  032cd0c  mtctr 5
  032cd10  lfs 3, 116(3)
  032cd14  lfs 4, 4(4)
  032cd18  fadds 3, 31, 3
  032cd1c  lfs 5, 8(4)
  032cd20  addic 3, 3, 16
  032cd24  lfs 31, 12(4)
  032cd28  addic 4, 4, 16
  032cd2c  fadds 3, 3, 4
  032cd30  fadds 3, 3, 5
  032cd34  fadds 31, 3, 31
  032cd38  bdnz 0x32cd10
  032cd3c  lis 3, 51
  032cd40  addi 3, 3, -13732
  032cd44  lfs 3, 24(3)
  032cd48  fadds 31, 31, 3
  032cd4c  fmadds 31, 31, 2, 1
  032cd50  lis 3, 51
  032cd54  addi 4, 3, -13732
  032cd58  ori 3, 31, 0
  032cd5c  lfs 1, 28(4)
  032cd60  fadds 1, 31, 1
  032cd64  stfs 1, 72(31)
  032cd68  bl 0xf31a8
  032cd6c  nop
  032cd70  ori 3, 31, 0
  032cd74  ld 0, 224(1)
  032cd78  mtlr 0
  032cd7c  lfd 31, 200(1)
  032cd80  ld 26, 152(1)
  032cd84  ld 27, 160(1)
  032cd88  ld 28, 168(1)
  032cd8c  ld 29, 176(1)
  032cd90  ld 30, 184(1)
  032cd94  ld 31, 192(1)
  032cd98  addi 1, 1, 208
  032cd9c  blr

M282_0032cda0:   # 0x32cda0, 0xf4 bytes
  032cda0  stdu 1, -160(1)
  032cda4  mflr 0
  032cda8  std 0, 176(1)
  032cdac  std 31, 152(1)
  032cdb0  lis 4, 161
  032cdb4  ori 31, 3, 0
  032cdb8  lwz 3, 1800(4)
  032cdbc  std 30, 144(1)
  032cdc0  std 29, 136(1)
  032cdc4  std 28, 128(1)
  032cdc8  std 27, 120(1)
  032cdcc  cmpwi 3, 2
  032cdd0  bf 2, 0x32ce70
  032cdd4  lis 3, 151
  032cdd8  lbz 3, -16268(3)
  032cddc  cmpwi 3, 0
  032cde0  bt 2, 0x32ce70
  032cde4  lis 28, 150
  032cde8  li 27, 0
  032cdec  addic 28, 28, -12976
  032cdf0  lhz 3, 68(28)
  032cdf4  extsh 4, 3
  032cdf8  cmpwi 4, 0
  032cdfc  bf 1, 0x32ce70
  032ce00  lis 29, 162
  032ce04  ori 30, 28, 0
  032ce08  addic 29, 29, -16512
  032ce0c  lwz 4, 376(30)
  032ce10  lhz 5, 166(31)
  032ce14  extsh 5, 5
  032ce18  lhz 6, 166(4)
  032ce1c  extsh 6, 6
  032ce20  cmpw 6, 5
  032ce24  bf 2, 0x32ce5c
  032ce28  lbz 5, 1(29)
  032ce2c  cmpwi 5, 0
  032ce30  bf 2, 0x32ce5c
  032ce34  ori 3, 4, 0
  032ce38  li 4, 1
  032ce3c  ori 5, 29, 0
  032ce40  bl 0xf0ea8
  032ce44  nop
  032ce48  lis 4, 16432
  032ce4c  lhz 3, 68(28)
  032ce50  stw 4, 32(29)
  032ce54  stw 4, 36(29)
  032ce58  stw 4, 40(29)
  032ce5c  extsh 4, 3
  032ce60  addic 27, 27, 1
  032ce64  addic 30, 30, 4
  032ce68  cmpw 27, 4
  032ce6c  bt 0, 0x32ce0c
  032ce70  ld 0, 176(1)
  032ce74  mtlr 0
  032ce78  ld 27, 120(1)
  032ce7c  ld 28, 128(1)
  032ce80  ld 29, 136(1)
  032ce84  ld 30, 144(1)
  032ce88  ld 31, 152(1)
  032ce8c  addi 1, 1, 160
  032ce90  blr

UpdateMoby_282:   # 0x32cef0, 0xbd4 bytes
  032cef0  stdu 1, -352(1)
  032cef4  mflr 0
  032cef8  std 0, 368(1)
  032cefc  stfd 27, 312(1)
  032cf00  stfd 28, 320(1)
  032cf04  stfd 29, 328(1)
  032cf08  stfd 30, 336(1)
  032cf0c  stfd 31, 344(1)
  032cf10  std 31, 304(1)
  032cf14  lis 4, 161
  032cf18  ori 31, 3, 0
  032cf1c  std 30, 296(1)
  032cf20  lwz 4, 1800(4)
  032cf24  lwz 30, 120(3)
  032cf28  std 29, 288(1)
  032cf2c  std 28, 280(1)
  032cf30  std 27, 272(1)
  032cf34  std 26, 264(1)
  032cf38  cmpwi 4, 2
  032cf3c  bf 2, 0x32cfd8
  032cf40  lis 3, 151
  032cf44  lbz 3, -16268(3)
  032cf48  cmpwi 3, 0
  032cf4c  bt 2, 0x32cfd8
  032cf50  lis 28, 150
  032cf54  li 29, 0
  032cf58  addic 28, 28, -12976
  032cf5c  lhz 4, 68(28)
  032cf60  extsh 3, 4
  032cf64  cmpwi 3, 0
  032cf68  bf 1, 0x32cfd8
  032cf6c  lis 27, 162
  032cf70  ori 26, 28, 0
  032cf74  addic 27, 27, -16512
  032cf78  lwz 3, 376(26)
  032cf7c  lhz 5, 166(31)
  032cf80  extsh 5, 5
  032cf84  lhz 6, 166(3)
  032cf88  extsh 6, 6
  032cf8c  cmpw 6, 5
  032cf90  bf 2, 0x32cfc4
  032cf94  lbz 5, 1(27)
  032cf98  cmpwi 5, 0
  032cf9c  bf 2, 0x32cfc4
  032cfa0  li 4, 1
  032cfa4  ori 5, 27, 0
  032cfa8  bl 0xf0ea8
  032cfac  nop
  032cfb0  lis 3, 16432
  032cfb4  lhz 4, 68(28)
  032cfb8  stw 3, 32(27)
  032cfbc  stw 3, 36(27)
  032cfc0  stw 3, 40(27)
  032cfc4  extsh 3, 4
  032cfc8  addic 29, 29, 1
  032cfcc  addic 26, 26, 4
  032cfd0  cmpw 29, 3
  032cfd4  bt 0, 0x32cf78
  032cfd8  lbz 3, 32(31)
  032cfdc  cmpwi 3, 0
  032cfe0  cmpwi 1, 3, 2
  032cfe4  cmpwi 6, 3, 1
  032cfe8  cmpwi 7, 3, -1
  032cfec  bt 1, 0x32cff8
  032cff0  bf 29, 0x32d160
  032cff4  b 0x32d004
  032cff8  bf 25, 0x32d050
  032cffc  bf 5, 0x32d0a8
  032d000  b 0x32d160
  032d004  lis 3, 151
  032d008  addic 3, 3, -16400
  032d00c  lbz 3, 1(3)
  032d010  cmpwi 3, 0
  032d014  bt 2, 0x32d028
  032d018  ori 3, 31, 0
  032d01c  bl 0xefb38
  032d020  nop
  032d024  b 0x32da88
  032d028  li 5, 1
  032d02c  ori 3, 31, 0
  032d030  addic 4, 30, 32
  032d034  stb 5, 32(31)
  032d038  bl 0x4d3720
  032d03c  nop
  032d040  ori 3, 31, 0
  032d044  bl 0x106308
  032d048  nop
  032d04c  b 0x32d160
  032d050  lis 3, 151
  032d054  addic 3, 3, -16400
  032d058  lbz 3, 1(3)
  032d05c  cmpwi 3, 0
  032d060  bf 2, 0x32d160
  032d064  ori 3, 31, 0
  032d068  addic 4, 30, 32
  032d06c  bl 0x4d3870
  032d070  nop
  032d074  cmpwi 3, 0
  032d078  bt 2, 0x32d160
  032d07c  lis 3, 51
  032d080  addi 4, 3, -12652
  032d084  ori 3, 31, 0
  032d088  lfs 1, 0(4)
  032d08c  bl 0x119488
  032d090  nop
  032d094  li 3, 2
  032d098  li 4, 0
  032d09c  stb 3, 32(31)
  032d0a0  stw 4, 88(31)
  032d0a4  b 0x32d160
  032d0a8  lis 3, 161
  032d0ac  lwz 3, 1800(3)
  032d0b0  cmpwi 3, 2
  032d0b4  bt 2, 0x32d160
  032d0b8  lis 3, 16256
  032d0bc  lis 4, 151
  032d0c0  li 29, 1
  032d0c4  addic 28, 4, -16400
  032d0c8  lis 4, 51
  032d0cc  stw 3, 88(31)
  032d0d0  addi 3, 4, -12652
  032d0d4  lis 4, 114
  032d0d8  stb 29, 1(28)
  032d0dc  lfs 1, 4(3)
  032d0e0  lfs 2, -3056(4)
  032d0e4  li 3, 12007
  032d0e8  fmuls 1, 2, 1
  032d0ec  fctiwz 1, 1
  032d0f0  stfd 1, 248(1)
  032d0f4  lwz 4, 252(1)
  032d0f8  extsw 4, 4
  032d0fc  bl 0x112a38
  032d100  nop
  032d104  stb 29, 97(28)
  032d108  lbz 3, 176(31)
  032d10c  bl 0xf1e50
  032d110  nop
  032d114  lwz 3, 368(30)
  032d118  cmpwi 3, -1
  032d11c  bt 2, 0x32d148
  032d120  lis 4, 165
  032d124  slwi 3, 3, 7
  032d128  lwz 4, 7128(4)
  032d12c  addc 3, 4, 3
  032d130  addic 4, 3, 48
  032d134  addic 5, 3, 112
  032d138  clrldi 3, 4, 32
  032d13c  clrldi 4, 5, 32
  032d140  bl 0x151e70
  032d144  nop
  032d148  li 3, 0
  032d14c  li 4, -1
  032d150  bl 0xe8aa4
  032d154  nop
  032d158  li 3, 1
  032d15c  stb 3, 32(31)
  032d160  lis 3, 51
  032d164  lbz 4, 83(31)
  032d168  addi 3, 3, -12652
  032d16c  cmpwi 4, 0
  032d170  lfs 31, 8(3)
  032d174  bf 2, 0x32d97c
  032d178  lis 29, 151
  032d17c  lfs 2, 20(31)
  032d180  lfs 1, 16(31)
  032d184  addic 29, 29, -25376
  032d188  lis 3, 51
  032d18c  lfs 3, 132(29)
  032d190  lfs 4, 128(29)
  032d194  fsubs 3, 2, 3
  032d198  fsubs 4, 1, 4
  032d19c  addi 3, 3, -12652
  032d1a0  fmuls 3, 3, 3
  032d1a4  fmadds 3, 4, 4, 3
  032d1a8  lfs 4, 12(3)
  032d1ac  fsqrts 3, 3
  032d1b0  fcmpu 0, 3, 4
  032d1b4  cror 6, 1, 2
  032d1b8  bt 6, 0x32d428
  032d1bc  lfs 3, 208(29)
  032d1c0  lfs 4, 212(29)
  032d1c4  lis 3, 51
  032d1c8  fsubs 1, 3, 1
  032d1cc  fsubs 2, 4, 2
  032d1d0  addi 3, 3, -12652
  032d1d4  lis 4, 115
  032d1d8  addic 4, 4, 22784
  032d1dc  fabs 5, 1
  032d1e0  fabs 6, 2
  032d1e4  stfs 1, 136(1)
  032d1e8  stfs 2, 140(1)
  032d1ec  lfs 3, 72(31)
  032d1f0  fsubs 1, 5, 6
  032d1f4  stfs 1, 144(1)
  032d1f8  lwz 5, 136(1)
  032d1fc  lfs 4, 16(3)
  032d200  lfs 1, 136(1)
  032d204  lwz 3, 140(1)
  032d208  lfs 2, 140(1)
  032d20c  fabs 1, 1
  032d210  lwz 6, 144(1)
  032d214  rlwinm 3, 3, 3, 29, 29
  032d218  fabs 7, 2
  032d21c  lfs 2, 144(1)
  032d220  rlwimi 3, 6, 2, 30, 30
  032d224  fsub 8, 2, 4
  032d228  rlwimi 3, 5, 4, 28, 28
  032d22c  fsub 9, 2, 4
  032d230  ori 5, 4, 0
  032d234  rlwimi 5, 3, 2, 26, 28
  032d238  slwi 3, 3, 2
  032d23c  clrldi 5, 5, 32
  032d240  fsel 6, 8, 1, 6
  032d244  lfsx 1, 4, 3
  032d248  lfs 2, 4(5)
  032d24c  fsel 5, 9, 7, 5
  032d250  fcmpu 0, 6, 4
  032d254  bt 1, 0x32d25c
  032d258  b 0x32d37c
  032d25c  fsubs 7, 5, 6
  032d260  fadds 5, 5, 6
  032d264  addic 3, 1, 16
  032d268  li 6, 2
  032d26c  addic 5, 3, 212
  032d270  addic 4, 3, 196
  032d274  mtctr 6
  032d278  fdivs 5, 7, 5
  032d27c  fmuls 6, 5, 5
  032d280  stfs 5, 224(1)
  032d284  stfs 5, 216(1)
  032d288  stfs 5, 220(1)
  032d28c  stfs 5, 212(1)
  032d290  lfs 8, 224(1)
  032d294  lfs 9, 216(1)
  032d298  lfs 10, 220(1)
  032d29c  fmuls 7, 6, 6
  032d2a0  fmuls 9, 9, 6
  032d2a4  fmuls 8, 8, 7
  032d2a8  fmuls 5, 7, 7
  032d2ac  fmuls 7, 10, 7
  032d2b0  stfs 9, 216(1)
  032d2b4  fmuls 6, 8, 6
  032d2b8  stfs 7, 220(1)
  032d2bc  stfs 6, 224(1)
  032d2c0  lfs 6, 196(3)
  032d2c4  fmuls 6, 6, 5
  032d2c8  stfs 6, 212(3)
  032d2cc  lfs 6, 4(4)
  032d2d0  addic 4, 4, 8
  032d2d4  fmuls 6, 6, 5
  032d2d8  addic 3, 3, 8
  032d2dc  stfs 6, 4(5)
  032d2e0  addic 5, 5, 8
  032d2e4  bdnz 0x32d2c0
  032d2e8  li 5, 4
  032d2ec  ori 3, 1, 0
  032d2f0  mtctr 5
  032d2f4  lis 4, 115
  032d2f8  addic 5, 3, 212
  032d2fc  addic 4, 4, 22752
  032d300  ori 7, 5, 0
  032d304  lfs 5, 212(3)
  032d308  lfs 6, 0(4)
  032d30c  fmuls 5, 5, 6
  032d310  lfs 6, 4(4)
  032d314  addic 4, 4, 8
  032d318  stfs 5, 212(3)
  032d31c  lfs 5, 4(5)
  032d320  addic 3, 3, 8
  032d324  fmuls 5, 5, 6
  032d328  stfs 5, 4(5)
  032d32c  addic 5, 5, 8
  032d330  bdnz 0x32d304
  032d334  ori 3, 1, 0
  032d338  mtctr 6
  032d33c  lfs 5, 212(3)
  032d340  fadds 4, 4, 5
  032d344  addic 3, 3, 16
  032d348  lfs 5, 4(7)
  032d34c  lfs 6, 8(7)
  032d350  lfs 7, 12(7)
  032d354  addic 7, 7, 16
  032d358  fadds 4, 4, 5
  032d35c  fadds 4, 4, 6
  032d360  fadds 4, 4, 7
  032d364  bdnz 0x32d33c
  032d368  lis 3, 51
  032d36c  addi 3, 3, -12652
  032d370  lfs 5, 20(3)
  032d374  fadds 4, 4, 5
  032d378  fmadds 4, 4, 1, 2
  032d37c  fmr 1, 3
  032d380  fmr 2, 4
  032d384  bl 0x5026a0
  032d388  nop
  032d38c  lis 3, 51
  032d390  addi 3, 3, -12652
  032d394  lfs 2, 24(3)
  032d398  fcmpu 0, 1, 2
  032d39c  cror 6, 1, 2
  032d3a0  bt 6, 0x32d428
  032d3a4  lfs 1, 260(29)
  032d3a8  lfs 2, 256(29)
  032d3ac  fmuls 1, 1, 1
  032d3b0  lfs 3, 264(29)
  032d3b4  lis 3, 51
  032d3b8  addi 3, 3, -12652
  032d3bc  fmadds 1, 2, 2, 1
  032d3c0  lfs 2, 28(3)
  032d3c4  fmadds 1, 3, 3, 1
  032d3c8  fsqrts 1, 1
  032d3cc  fcmpu 0, 1, 2
  032d3d0  cror 6, 0, 2
  032d3d4  bt 6, 0x32d418
  032d3d8  lis 3, 51
  032d3dc  vspltisw 2, -1
  032d3e0  li 5, 32
  032d3e4  addi 3, 3, -12652
  032d3e8  lis 4, 114
  032d3ec  li 6, -3056
  032d3f0  vslw 2, 2, 2
  032d3f4  lvlx 3, 5, 3
  032d3f8  li 3, 376
  032d3fc  vspltw 3, 3, 0
  032d400  lvlx 4, 6, 4
  032d404  vmaddfp 2, 4, 3, 2
  032d408  vctsxs 2, 2, 0
  032d40c  vspltw 2, 2, 0
  032d410  stvewx 2, 3, 30
  032d414  b 0x32d45c
  032d418  addic 3, 30, 376
  032d41c  bl 0x4fff60
  032d420  nop
  032d424  b 0x32d45c
  032d428  lwz 3, 376(30)
  032d42c  cmpwi 3, 0
  032d430  bt 2, 0x32d45c
  032d434  li 3, 0
  032d438  stw 3, 376(30)
  032d43c  lfs 1, 208(29)
  032d440  stfs 1, 352(30)
  032d444  lfs 1, 212(29)
  032d448  stfs 1, 356(30)
  032d44c  lfs 1, 216(29)
  032d450  stfs 1, 360(30)
  032d454  lfs 1, 220(29)
  032d458  stfs 1, 364(30)
  032d45c  addic 3, 30, 380
  032d460  bl 0x4fff60
  032d464  nop
  032d468  cmpwi 3, 0
  032d46c  bt 2, 0x32d524
  032d470  lis 3, 51
  032d474  addi 28, 3, -12652
  032d478  lfs 1, 36(28)
  032d47c  lfs 2, 40(28)
  032d480  bl 0xfcbe8
  032d484  nop
  032d488  lis 3, 114
  032d48c  lfs 2, -3056(3)
  032d490  fmuls 1, 1, 2
  032d494  bl 0x502758
  032d498  nop
  032d49c  stw 3, 380(30)
  032d4a0  lfs 1, 44(28)
  032d4a4  lfs 30, 72(31)
  032d4a8  lfs 2, 48(28)
  032d4ac  bl 0xfcbe8
  032d4b0  nop
  032d4b4  lfs 29, 52(28)
  032d4b8  fmuls 2, 1, 29
  032d4bc  fmr 1, 30
  032d4c0  bl 0x502578
  032d4c4  nop
  032d4c8  fmr 30, 1
  032d4cc  lfs 1, 16(28)
  032d4d0  lfs 2, 56(28)
  032d4d4  bl 0xfcbe8
  032d4d8  nop
  032d4dc  fmuls 3, 1, 29
  032d4e0  lfs 1, 60(28)
  032d4e4  addic 3, 30, 352
  032d4e8  fmr 2, 30
  032d4ec  bl 0xfe610
  032d4f0  nop
  032d4f4  lfs 1, 352(30)
  032d4f8  lfs 2, 16(31)
  032d4fc  fadds 1, 1, 2
  032d500  lfs 2, 356(30)
  032d504  lfs 3, 360(30)
  032d508  stfs 1, 352(30)
  032d50c  lfs 1, 20(31)
  032d510  fadds 1, 2, 1
  032d514  stfs 1, 356(30)
  032d518  lfs 1, 24(31)
  032d51c  fadds 1, 3, 1
  032d520  stfs 1, 360(30)
  032d524  lwz 3, 376(30)
  032d528  cmpwi 3, 0
  032d52c  bt 2, 0x32d54c
  032d530  lis 3, 51
  032d534  lfs 30, 208(29)
  032d538  lfs 29, 212(29)
  032d53c  addi 3, 3, -12652
  032d540  lfs 28, 216(29)
  032d544  lfs 31, 64(3)
  032d548  b 0x32d558
  032d54c  lfs 30, 352(30)
  032d550  lfs 29, 356(30)
  032d554  lfs 28, 360(30)
  032d558  lfs 1, 16(31)
  032d55c  lis 3, 51
  032d560  lfs 2, 20(31)
  032d564  fsubs 30, 30, 1
  032d568  fsubs 29, 29, 2
  032d56c  addi 3, 3, -12652
  032d570  lis 29, 115
  032d574  addic 29, 29, 22784
  032d578  lfs 1, 68(3)
  032d57c  fabs 3, 30
  032d580  fabs 4, 29
  032d584  stfs 30, 124(1)
  032d588  stfs 29, 128(1)
  032d58c  lfs 5, 24(31)
  032d590  fadds 1, 5, 1
  032d594  fsubs 2, 3, 4
  032d598  fsubs 28, 28, 1
  032d59c  stfs 2, 132(1)
  032d5a0  lwz 4, 124(1)
  032d5a4  lfs 27, 16(3)
  032d5a8  lfs 2, 124(1)
  032d5ac  lwz 3, 128(1)
  032d5b0  lfs 1, 128(1)
  032d5b4  fabs 2, 2
  032d5b8  lwz 5, 132(1)
  032d5bc  rlwinm 3, 3, 3, 29, 29
  032d5c0  fabs 5, 1
  032d5c4  lfs 1, 132(1)
  032d5c8  rlwimi 3, 5, 2, 30, 30
  032d5cc  fsub 6, 1, 27
  032d5d0  fsub 7, 1, 27
  032d5d4  rlwimi 3, 4, 4, 28, 28
  032d5d8  ori 4, 29, 0
  032d5dc  rlwimi 4, 3, 2, 26, 28
  032d5e0  slwi 3, 3, 2
  032d5e4  clrldi 4, 4, 32
  032d5e8  fsel 4, 6, 2, 4
  032d5ec  lfsx 1, 29, 3
  032d5f0  fsel 3, 7, 5, 3
  032d5f4  lfs 2, 4(4)
  032d5f8  fcmpu 0, 4, 27
  032d5fc  bt 1, 0x32d608
  032d600  fmr 1, 27
  032d604  b 0x32d72c
  032d608  fsubs 5, 3, 4
  032d60c  fadds 3, 3, 4
  032d610  addic 3, 1, 16
  032d614  li 6, 2
  032d618  addic 4, 3, 164
  032d61c  addic 5, 3, 180
  032d620  mtctr 6
  032d624  fdivs 3, 5, 3
  032d628  fmuls 4, 3, 3
  032d62c  stfs 3, 192(1)
  032d630  stfs 3, 184(1)
  032d634  stfs 3, 188(1)
  032d638  stfs 3, 180(1)
  032d63c  lfs 6, 192(1)
  032d640  lfs 7, 184(1)
  032d644  lfs 8, 188(1)
  032d648  fmuls 5, 4, 4
  032d64c  fmuls 7, 7, 4
  032d650  fmuls 6, 6, 5
  032d654  fmuls 3, 5, 5
  032d658  fmuls 5, 8, 5
  032d65c  stfs 7, 184(1)
  032d660  fmuls 4, 6, 4
  032d664  stfs 5, 188(1)
  032d668  stfs 4, 192(1)
  032d66c  lfs 4, 164(3)
  032d670  fmuls 4, 4, 3
  032d674  stfs 4, 180(3)
  032d678  lfs 4, 4(4)
  032d67c  addic 3, 3, 8
  032d680  addic 4, 4, 8
  032d684  fmuls 4, 4, 3
  032d688  stfs 4, 4(5)
  032d68c  addic 5, 5, 8
  032d690  bdnz 0x32d66c
  032d694  li 5, 4
  032d698  ori 3, 1, 0
  032d69c  mtctr 5
  032d6a0  lis 4, 115
  032d6a4  addic 5, 3, 180
  032d6a8  addic 4, 4, 22752
  032d6ac  ori 7, 5, 0
  032d6b0  lfs 3, 180(3)
  032d6b4  lfs 4, 0(4)
  032d6b8  fmuls 3, 3, 4
  032d6bc  lfs 4, 4(4)
  032d6c0  addic 4, 4, 8
  032d6c4  stfs 3, 180(3)
  032d6c8  lfs 3, 4(5)
  032d6cc  addic 3, 3, 8
  032d6d0  fmuls 3, 3, 4
  032d6d4  stfs 3, 4(5)
  032d6d8  addic 5, 5, 8
  032d6dc  bdnz 0x32d6b0
  032d6e0  fmr 3, 27
  032d6e4  ori 3, 1, 0
  032d6e8  mtctr 6
  032d6ec  lfs 4, 180(3)
  032d6f0  fadds 3, 3, 4
  032d6f4  addic 3, 3, 16
  032d6f8  lfs 4, 4(7)
  032d6fc  lfs 5, 8(7)
  032d700  lfs 6, 12(7)
  032d704  addic 7, 7, 16
  032d708  fadds 3, 3, 4
  032d70c  fadds 3, 3, 5
  032d710  fadds 3, 3, 6
  032d714  bdnz 0x32d6ec
  032d718  lis 3, 51
  032d71c  addi 3, 3, -12652
  032d720  lfs 4, 20(3)
  032d724  fadds 3, 3, 4
  032d728  fmadds 1, 3, 1, 2
  032d72c  lfs 2, 72(31)
  032d730  bl 0x5025e0
  032d734  nop
  032d738  fmuls 2, 29, 29
  032d73c  stfs 28, 116(1)
  032d740  fabs 4, 28
  032d744  fmadds 2, 30, 30, 2
  032d748  fsqrts 2, 2
  032d74c  lwz 3, 116(1)
  032d750  lfs 3, 116(1)
  032d754  rlwinm 3, 3, 3, 29, 29
  032d758  fabs 3, 3
  032d75c  fabs 5, 2
  032d760  stfs 2, 112(1)
  032d764  fsubs 2, 5, 4
  032d768  stfs 2, 120(1)
  032d76c  lwz 4, 112(1)
  032d770  lfs 2, 112(1)
  032d774  lwz 5, 120(1)
  032d778  lfs 6, 120(1)
  032d77c  fabs 2, 2
  032d780  rlwimi 3, 5, 2, 30, 30
  032d784  fsub 7, 6, 27
  032d788  fsub 6, 6, 27
  032d78c  rlwimi 3, 4, 4, 28, 28
  032d790  ori 4, 29, 0
  032d794  rlwimi 4, 3, 2, 26, 28
  032d798  slwi 3, 3, 2
  032d79c  clrldi 4, 4, 32
  032d7a0  fsel 4, 7, 2, 4
  032d7a4  lfsx 30, 29, 3
  032d7a8  lfs 2, 4(4)
  032d7ac  fsel 3, 6, 3, 5
  032d7b0  fcmpu 0, 4, 27
  032d7b4  bt 1, 0x32d7bc
  032d7b8  b 0x32d8dc
  032d7bc  fsubs 5, 3, 4
  032d7c0  fadds 3, 3, 4
  032d7c4  addic 3, 1, 16
  032d7c8  li 6, 2
  032d7cc  addic 5, 3, 148
  032d7d0  addic 4, 3, 132
  032d7d4  mtctr 6
  032d7d8  fdivs 3, 5, 3
  032d7dc  fmuls 4, 3, 3
  032d7e0  stfs 3, 160(1)
  032d7e4  stfs 3, 152(1)
  032d7e8  stfs 3, 156(1)
  032d7ec  stfs 3, 148(1)
  032d7f0  lfs 6, 160(1)
  032d7f4  lfs 7, 152(1)
  032d7f8  lfs 8, 156(1)
  032d7fc  fmuls 5, 4, 4
  032d800  fmuls 7, 7, 4
  032d804  fmuls 6, 6, 5
  032d808  fmuls 3, 5, 5
  032d80c  fmuls 5, 8, 5
  032d810  stfs 7, 152(1)
  032d814  fmuls 4, 6, 4
  032d818  stfs 5, 156(1)
  032d81c  stfs 4, 160(1)
  032d820  lfs 4, 132(3)
  032d824  fmuls 4, 4, 3
  032d828  stfs 4, 148(3)
  032d82c  lfs 4, 4(4)
  032d830  addic 4, 4, 8
  032d834  fmuls 4, 4, 3
  032d838  addic 3, 3, 8
  032d83c  stfs 4, 4(5)
  032d840  addic 5, 5, 8
  032d844  bdnz 0x32d820
  032d848  li 5, 4
  032d84c  ori 3, 1, 0
  032d850  mtctr 5
  032d854  lis 4, 115
  032d858  addic 5, 3, 148
  032d85c  addic 4, 4, 22752
  032d860  ori 7, 5, 0
  032d864  lfs 3, 148(3)
  032d868  lfs 4, 0(4)
  032d86c  fmuls 3, 3, 4
  032d870  lfs 4, 4(4)
  032d874  addic 4, 4, 8
  032d878  stfs 3, 148(3)
  032d87c  lfs 3, 4(5)
  032d880  addic 3, 3, 8
  032d884  fmuls 3, 3, 4
  032d888  stfs 3, 4(5)
  032d88c  addic 5, 5, 8
  032d890  bdnz 0x32d864
  032d894  ori 3, 1, 0
  032d898  mtctr 6
  032d89c  lfs 3, 148(3)
  032d8a0  lfs 4, 4(7)
  032d8a4  fadds 3, 27, 3
  032d8a8  lfs 5, 8(7)
  032d8ac  addic 3, 3, 16
  032d8b0  lfs 27, 12(7)
  032d8b4  addic 7, 7, 16
  032d8b8  fadds 3, 3, 4
  032d8bc  fadds 3, 3, 5
  032d8c0  fadds 27, 3, 27
  032d8c4  bdnz 0x32d89c
  032d8c8  lis 3, 51
  032d8cc  addi 3, 3, -12652
  032d8d0  lfs 3, 20(3)
  032d8d4  fadds 27, 27, 3
  032d8d8  fmadds 27, 27, 30, 2
  032d8dc  lis 3, 51
  032d8e0  fneg 27, 27
  032d8e4  addi 3, 3, -12652
  032d8e8  lfs 2, 24(3)
  032d8ec  fcmpu 0, 1, 2
  032d8f0  cror 6, 0, 2
  032d8f4  bt 6, 0x32d900
  032d8f8  fmr 1, 2
  032d8fc  b 0x32d91c
  032d900  lis 3, 51
  032d904  addi 3, 3, -12652
  032d908  lfs 2, 72(3)
  032d90c  fcmpu 0, 1, 2
  032d910  cror 6, 1, 2
  032d914  bt 6, 0x32d91c
  032d918  fmr 1, 2
  032d91c  lis 3, 51
  032d920  addi 3, 3, -12652
  032d924  lfs 2, 76(3)
  032d928  fcmpu 0, 27, 2
  032d92c  cror 6, 0, 2
  032d930  bt 6, 0x32d93c
  032d934  fmr 27, 2
  032d938  b 0x32d958
  032d93c  lis 3, 51
  032d940  addi 3, 3, -12652
  032d944  lfs 2, 80(3)
  032d948  fcmpu 0, 27, 2
  032d94c  cror 6, 1, 2
  032d950  bt 6, 0x32d958
  032d954  fmr 27, 2
  032d958  lis 3, 51
  032d95c  addi 3, 3, -12652
  032d960  lfs 2, 84(3)
  032d964  fmuls 2, 1, 2
  032d968  stfs 2, 200(30)
  032d96c  lfs 2, 88(3)
  032d970  stfs 27, 196(30)
  032d974  fmuls 1, 1, 2
  032d978  stfs 1, 328(30)
  032d97c  lis 3, 151
  032d980  lbz 3, -16268(3)
  032d984  cmpwi 3, 0
  032d988  bt 2, 0x32d994
  032d98c  lis 3, 16432
  032d990  stw 3, 208(30)
  032d994  lis 3, 51
  032d998  lis 29, 114
  032d99c  addi 5, 3, -12652
  032d9a0  addic 4, 30, 96
  032d9a4  ori 3, 31, 0
  032d9a8  lfs 30, 84(5)
  032d9ac  lfs 2, -3060(29)
  032d9b0  li 5, 1
  032d9b4  fmuls 1, 2, 31
  032d9b8  fmuls 2, 2, 30
  032d9bc  bl 0x1167c8
  032d9c0  nop
  032d9c4  lfs 2, -3060(29)
  032d9c8  ori 3, 31, 0
  032d9cc  fmuls 1, 2, 31
  032d9d0  addic 4, 30, 224
  032d9d4  fmuls 2, 2, 30
  032d9d8  li 5, 0
  032d9dc  bl 0x1167c8
  032d9e0  nop
  032d9e4  lwz 3, 384(30)
  032d9e8  cmpwi 3, 0
  032d9ec  bf 2, 0x32da74
  032d9f0  li 3, 287
  032d9f4  bl 0xefa28
  032d9f8  nop
  032d9fc  cmpwi 3, 0
  032da00  stw 3, 384(30)
  032da04  bt 2, 0x32da88
  032da08  lhz 5, 50(31)
  032da0c  li 4, 1
  032da10  sth 5, 50(3)
  032da14  lwz 3, 384(30)
  032da18  stb 4, 49(3)
  032da1c  lwz 3, 384(30)
  032da20  lfs 1, 16(31)
  032da24  stfs 1, 16(3)
  032da28  lfs 1, 20(31)
  032da2c  stfs 1, 20(3)
  032da30  lfs 1, 24(31)
  032da34  stfs 1, 24(3)
  032da38  lfs 1, 28(31)
  032da3c  stfs 1, 28(3)
  032da40  lwz 4, 384(30)
  032da44  ori 3, 31, 0
  032da48  lfs 1, 64(31)
  032da4c  stfs 1, 64(4)
  032da50  lfs 1, 68(31)
  032da54  stfs 1, 68(4)
  032da58  lfs 1, 72(31)
  032da5c  stfs 1, 72(4)
  032da60  lfs 1, 76(31)
  032da64  stfs 1, 76(4)
  032da68  bl 0xf31a8
  032da6c  nop
  032da70  b 0x32da88
  032da74  ori 4, 3, 0
  032da78  ori 3, 31, 0
  032da7c  li 5, 2
  032da80  bl 0x117f38
  032da84  nop
  032da88  ld 0, 368(1)
  032da8c  mtlr 0
  032da90  lfd 27, 312(1)
  032da94  lfd 28, 320(1)
  032da98  lfd 29, 328(1)
  032da9c  lfd 30, 336(1)
  032daa0  lfd 31, 344(1)
  032daa4  ld 26, 264(1)
  032daa8  ld 27, 272(1)
  032daac  ld 28, 280(1)
  032dab0  ld 29, 288(1)
  032dab4  ld 30, 296(1)
  032dab8  ld 31, 304(1)
  032dabc  addi 1, 1, 352
  032dac0  blr
