# game/update/moby829.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0047ca58:   # 0x47ca58, 0x14c bytes
  047ca58  stdu 1, -144(1)
  047ca5c  mflr 0
  047ca60  std 0, 160(1)
  047ca64  std 31, 136(1)
  047ca68  ori 31, 3, 0
  047ca6c  ori 3, 4, 0
  047ca70  std 30, 128(1)
  047ca74  lbz 4, 32(31)
  047ca78  lwz 30, 120(31)
  047ca7c  std 29, 120(1)
  047ca80  cmpwi 4, 15
  047ca84  bf 2, 0x47cb84
  047ca88  lfs 1, 0(3)
  047ca8c  li 4, -66
  047ca90  stfs 1, 16(31)
  047ca94  lfs 1, 4(3)
  047ca98  li 5, 6
  047ca9c  lwz 6, 36(31)
  047caa0  li 29, 0
  047caa4  stfs 1, 20(31)
  047caa8  lfs 1, 8(3)
  047caac  lhz 7, 52(31)
  047cab0  stfs 1, 24(31)
  047cab4  lfs 1, 12(3)
  047cab8  and 3, 7, 4
  047cabc  stfs 1, 28(31)
  047cac0  ori 3, 3, 4096
  047cac4  lwz 4, 16(6)
  047cac8  stb 5, 32(31)
  047cacc  stw 4, 148(31)
  047cad0  sth 3, 52(31)
  047cad4  stw 29, 76(31)
  047cad8  stw 29, 72(31)
  047cadc  stw 29, 68(31)
  047cae0  stw 29, 64(31)
  047cae4  bl 0xfcc68
  047cae8  nop
  047caec  addic 3, 31, 192
  047caf0  stfs 1, 72(31)
  047caf4  addic 4, 31, 64
  047caf8  bl 0x500b64
  047cafc  nop
  047cb00  lis 3, 72
  047cb04  lis 4, 114
  047cb08  addi 3, 3, -13744
  047cb0c  li 5, 3
  047cb10  li 6, 5
  047cb14  lfs 1, 0(3)
  047cb18  lfs 2, -3048(4)
  047cb1c  lis 4, 114
  047cb20  stw 29, 308(30)
  047cb24  fmuls 1, 2, 1
  047cb28  addic 29, 30, 288
  047cb2c  stfs 1, 304(30)
  047cb30  lfs 1, 4(3)
  047cb34  lfs 2, -3052(4)
  047cb38  stb 5, 349(30)
  047cb3c  fmuls 1, 2, 1
  047cb40  stw 6, 324(30)
  047cb44  stfs 1, 312(30)
  047cb48  stfs 1, 316(30)
  047cb4c  bl 0xfcc68
  047cb50  nop
  047cb54  ori 3, 31, 0
  047cb58  ori 4, 29, 0
  047cb5c  li 6, 2
  047cb60  li 7, 1
  047cb64  li 8, 0
  047cb68  bl 0x10ad80
  047cb6c  nop
  047cb70  lfs 1, 296(30)
  047cb74  li 3, 1
  047cb78  fneg 1, 1
  047cb7c  stfs 1, 296(30)
  047cb80  b 0x47cb88
  047cb84  li 3, 0
  047cb88  ld 0, 160(1)
  047cb8c  mtlr 0
  047cb90  ld 29, 120(1)
  047cb94  ld 30, 128(1)
  047cb98  ld 31, 136(1)
  047cb9c  addi 1, 1, 144
  047cba0  blr

FUN_0047cba4:   # 0x47cba4, 0x24 bytes
  047cba4  lbz 4, 32(3)
  047cba8  cmpwi 4, 3
  047cbac  bf 2, 0x47cbc0
  047cbb0  li 4, 4
  047cbb4  stb 4, 32(3)
  047cbb8  li 3, 1
  047cbbc  b 0x47cbc4
  047cbc0  li 3, 0
  047cbc4  blr

FUN_0047cbc8:   # 0x47cbc8, 0x70 bytes
  047cbc8  lis 4, 165
  047cbcc  sldi 3, 3, 2
  047cbd0  addic 6, 4, -28284
  047cbd4  extsw 7, 3
  047cbd8  lis 5, 164
  047cbdc  li 4, 15
  047cbe0  li 3, 0
  047cbe4  lwzx 6, 6, 7
  047cbe8  lhz 7, 0(6)
  047cbec  lwz 8, -28512(5)
  047cbf0  rlwinm 7, 7, 8, 9, 23
  047cbf4  addc 7, 8, 7
  047cbf8  clrldi 7, 7, 32
  047cbfc  lbz 8, 32(7)
  047cc00  cmpwi 8, 127
  047cc04  bf 0, 0x47cc20
  047cc08  lhz 8, 52(7)
  047cc0c  stb 4, 32(7)
  047cc10  ori 8, 8, 65
  047cc14  stw 3, 148(7)
  047cc18  rlwimi 8, 3, 0, 19, 19
  047cc1c  sth 8, 52(7)
  047cc20  lhz 7, 0(6)
  047cc24  addic 6, 6, 2
  047cc28  extsh 7, 7
  047cc2c  cmpwi 7, 0
  047cc30  bf 0, 0x47cbe8
  047cc34  blr

FUN_0047cc38:   # 0x47cc38, 0x90 bytes
  047cc38  lis 4, 165
  047cc3c  sldi 3, 3, 2
  047cc40  addic 4, 4, -28284
  047cc44  extsw 3, 3
  047cc48  lis 5, 164
  047cc4c  lwzx 4, 4, 3
  047cc50  lwz 3, -28512(5)
  047cc54  cmpwi 4, 0
  047cc58  bf 2, 0x47cc64
  047cc5c  li 3, 1
  047cc60  b 0x47ccc4
  047cc64  lhz 5, 0(4)
  047cc68  rlwinm 5, 5, 8, 9, 23
  047cc6c  addc 5, 3, 5
  047cc70  clrldi 5, 5, 32
  047cc74  cmpwi 5, 0
  047cc78  bt 2, 0x47ccac
  047cc7c  lhz 6, 166(5)
  047cc80  cmpwi 6, 827
  047cc84  bf 2, 0x47ccac
  047cc88  lbz 5, 32(5)
  047cc8c  cmpwi 6, 5, 253
  047cc90  cmpwi 5, 254
  047cc94  cror 2, 2, 26
  047cc98  cmpwi 1, 5, 16
  047cc9c  bt 2, 0x47ccac
  047cca0  bt 6, 0x47ccac
  047cca4  li 3, 0
  047cca8  b 0x47ccc4
  047ccac  lhz 5, 0(4)
  047ccb0  addic 4, 4, 2
  047ccb4  extsh 5, 5
  047ccb8  cmpwi 5, 0
  047ccbc  bf 0, 0x47cc64
  047ccc0  li 3, 1
  047ccc4  blr

M829_0047ccd0:   # 0x47ccd0, 0xf0 bytes
  047ccd0  stdu 1, -144(1)
  047ccd4  mflr 0
  047ccd8  std 0, 160(1)
  047ccdc  std 31, 136(1)
  047cce0  std 30, 128(1)
  047cce4  ori 31, 3, 0
  047cce8  bl 0x48a718
  047ccec  nop
  047ccf0  ori 30, 3, 0
  047ccf4  cmpwi 30, 0
  047ccf8  bt 2, 0x47cd48
  047ccfc  lbz 3, 32(31)
  047cd00  cmpwi 1, 3, 9
  047cd04  cmpwi 3, 8
  047cd08  cror 2, 2, 6
  047cd0c  bt 2, 0x47cd28
  047cd10  cmpwi 3, 12
  047cd14  bt 2, 0x47cd28
  047cd18  cmpwi 3, 13
  047cd1c  bt 2, 0x47cd28
  047cd20  cmpwi 3, 16
  047cd24  bf 2, 0x47cd40
  047cd28  cmpwi 3, 16
  047cd2c  bt 2, 0x47cda4
  047cd30  li 4, 16
  047cd34  stb 3, 188(31)
  047cd38  stb 4, 32(31)
  047cd3c  b 0x47cda4
  047cd40  li 30, 0
  047cd44  b 0x47cda4
  047cd48  lbz 3, 32(31)
  047cd4c  cmpwi 3, 16
  047cd50  bf 2, 0x47cda4
  047cd54  li 3, 8
  047cd58  lbz 4, 83(31)
  047cd5c  cmpwi 4, 0
  047cd60  stb 3, 32(31)
  047cd64  bt 2, 0x47cda4
  047cd68  lis 3, 72
  047cd6c  lis 4, 114
  047cd70  addi 3, 3, -13112
  047cd74  li 5, 0
  047cd78  lfs 1, 0(3)
  047cd7c  lfs 2, -3056(4)
  047cd80  ori 3, 31, 0
  047cd84  fmuls 1, 2, 1
  047cd88  li 4, 0
  047cd8c  fctiwz 1, 1
  047cd90  stfd 1, 112(1)
  047cd94  lwz 6, 116(1)
  047cd98  extsw 6, 6
  047cd9c  bl 0xfddc0
  047cda0  nop
  047cda4  ori 3, 30, 0
  047cda8  ld 0, 160(1)
  047cdac  mtlr 0
  047cdb0  ld 30, 128(1)
  047cdb4  ld 31, 136(1)
  047cdb8  addi 1, 1, 144
  047cdbc  blr

M829_0047cdc8:   # 0x47cdc8, 0xc0 bytes
  047cdc8  stdu 1, -144(1)
  047cdcc  mflr 0
  047cdd0  std 0, 160(1)
  047cdd4  std 31, 136(1)
  047cdd8  std 30, 128(1)
  047cddc  ori 31, 3, 0
  047cde0  bl 0x48aa70
  047cde4  nop
  047cde8  ori 30, 3, 0
  047cdec  cmpwi 30, 0
  047cdf0  bt 2, 0x47ce10
  047cdf4  lbz 3, 32(31)
  047cdf8  cmpwi 3, 16
  047cdfc  bt 2, 0x47ce6c
  047ce00  li 4, 16
  047ce04  stb 3, 188(31)
  047ce08  stb 4, 32(31)
  047ce0c  b 0x47ce6c
  047ce10  lbz 3, 32(31)
  047ce14  cmpwi 3, 16
  047ce18  bf 2, 0x47ce6c
  047ce1c  li 3, 8
  047ce20  lbz 4, 83(31)
  047ce24  cmpwi 4, 0
  047ce28  stb 3, 32(31)
  047ce2c  bt 2, 0x47ce6c
  047ce30  lis 3, 72
  047ce34  lis 4, 114
  047ce38  addi 3, 3, -12864
  047ce3c  li 5, 0
  047ce40  lfs 1, 0(3)
  047ce44  lfs 2, -3056(4)
  047ce48  ori 3, 31, 0
  047ce4c  fmuls 1, 2, 1
  047ce50  li 4, 0
  047ce54  fctiwz 1, 1
  047ce58  stfd 1, 112(1)
  047ce5c  lwz 6, 116(1)
  047ce60  extsw 6, 6
  047ce64  bl 0xfddc0
  047ce68  nop
  047ce6c  ori 3, 30, 0
  047ce70  ld 0, 160(1)
  047ce74  mtlr 0
  047ce78  ld 30, 128(1)
  047ce7c  ld 31, 136(1)
  047ce80  addi 1, 1, 144
  047ce84  blr

M829_0047ce90:   # 0x47ce90, 0xc0 bytes
  047ce90  stdu 1, -144(1)
  047ce94  mflr 0
  047ce98  std 0, 160(1)
  047ce9c  std 31, 136(1)
  047cea0  std 30, 128(1)
  047cea4  ori 31, 3, 0
  047cea8  bl 0x48acb8
  047ceac  nop
  047ceb0  ori 30, 3, 0
  047ceb4  cmpwi 30, 0
  047ceb8  bt 2, 0x47ced8
  047cebc  lbz 3, 32(31)
  047cec0  cmpwi 3, 16
  047cec4  bt 2, 0x47cf34
  047cec8  li 4, 16
  047cecc  stb 3, 188(31)
  047ced0  stb 4, 32(31)
  047ced4  b 0x47cf34
  047ced8  lbz 3, 32(31)
  047cedc  cmpwi 3, 16
  047cee0  bf 2, 0x47cf34
  047cee4  li 3, 8
  047cee8  lbz 4, 83(31)
  047ceec  cmpwi 4, 0
  047cef0  stb 3, 32(31)
  047cef4  bt 2, 0x47cf34
  047cef8  lis 3, 72
  047cefc  lis 4, 114
  047cf00  addi 3, 3, -12664
  047cf04  li 5, 0
  047cf08  lfs 1, 0(3)
  047cf0c  lfs 2, -3056(4)
  047cf10  ori 3, 31, 0
  047cf14  fmuls 1, 2, 1
  047cf18  li 4, 0
  047cf1c  fctiwz 1, 1
  047cf20  stfd 1, 112(1)
  047cf24  lwz 6, 116(1)
  047cf28  extsw 6, 6
  047cf2c  bl 0xfddc0
  047cf30  nop
  047cf34  ori 3, 30, 0
  047cf38  ld 0, 160(1)
  047cf3c  mtlr 0
  047cf40  ld 30, 128(1)
  047cf44  ld 31, 136(1)
  047cf48  addi 1, 1, 144
  047cf4c  blr

M829_0047cf50:   # 0x47cf50, 0x50 bytes
  047cf50  stdu 1, -128(1)
  047cf54  mflr 0
  047cf58  std 0, 144(1)
  047cf5c  std 31, 120(1)
  047cf60  ori 31, 3, 0
  047cf64  bl 0x48afe8
  047cf68  nop
  047cf6c  ori 4, 3, 0
  047cf70  lbz 3, 32(31)
  047cf74  cmpwi 3, 16
  047cf78  bt 2, 0x47cf88
  047cf7c  li 5, 16
  047cf80  stb 3, 188(31)
  047cf84  stb 5, 32(31)
  047cf88  ori 3, 4, 0
  047cf8c  ld 0, 144(1)
  047cf90  mtlr 0
  047cf94  ld 31, 120(1)
  047cf98  addi 1, 1, 128
  047cf9c  blr

M829_0047cfa0:   # 0x47cfa0, 0x40 bytes
  047cfa0  cmpwi 3, 0
  047cfa4  bt 2, 0x47cfd8
  047cfa8  li 4, 0
  047cfac  lwz 3, 120(3)
  047cfb0  li 5, 0
  047cfb4  subc 4, 4, 3
  047cfb8  addic 3, 3, 96
  047cfbc  cntlzw 4, 4
  047cfc0  subc 5, 5, 3
  047cfc4  sldi 4, 4, 58
  047cfc8  sradi 4, 4, 63
  047cfcc  and 4, 4, 5
  047cfd0  addc 3, 3, 4
  047cfd4  b 0x47cfdc
  047cfd8  li 3, 0
  047cfdc  blr

M829_0047cfe0:   # 0x47cfe0, 0x14 bytes
  047cfe0  lis 3, 135
  047cfe4  lis 4, 1
  047cfe8  addic 3, 3, 31596
  047cfec  stw 4, 72(3)
  047cff0  blr

UpdateMoby_829:   # 0x47d068, 0xed0 bytes
  047d068  stdu 1, -352(1)
  047d06c  mflr 0
  047d070  std 0, 368(1)
  047d074  stfd 31, 344(1)
  047d078  std 31, 336(1)
  047d07c  ori 31, 3, 0
  047d080  std 30, 328(1)
  047d084  lbz 3, 32(31)
  047d088  lwz 30, 120(31)
  047d08c  cmpwi 3, 5
  047d090  lfs 2, 24(31)
  047d094  cmpwi 1, 3, 4
  047d098  cmpwi 6, 3, 3
  047d09c  std 29, 320(1)
  047d0a0  std 28, 312(1)
  047d0a4  std 27, 304(1)
  047d0a8  cmpwi 7, 3, 2
  047d0ac  bt 2, 0x47d960
  047d0b0  bt 6, 0x47d6fc
  047d0b4  bt 26, 0x47d5f0
  047d0b8  bt 30, 0x47d1dc
  047d0bc  cmpwi 3, 1
  047d0c0  bt 2, 0x47d114
  047d0c4  cmpwi 3, 0
  047d0c8  bf 2, 0x47df10
  047d0cc  lis 3, 72
  047d0d0  addi 3, 3, -12296
  047d0d4  lfs 1, 0(3)
  047d0d8  lfs 2, 4(3)
  047d0dc  bl 0xfcbe8
  047d0e0  nop
  047d0e4  lis 3, 114
  047d0e8  lfs 2, -3056(3)
  047d0ec  fmuls 1, 1, 2
  047d0f0  bl 0x502758
  047d0f4  nop
  047d0f8  stw 3, 48(30)
  047d0fc  li 4, 255
  047d100  li 3, 1
  047d104  stb 3, 32(31)
  047d108  stb 4, 48(31)
  047d10c  sth 4, 50(31)
  047d110  b 0x47df10
  047d114  addic 3, 30, 48
  047d118  bl 0x4fff60
  047d11c  nop
  047d120  cmpwi 3, 0
  047d124  bt 2, 0x47df10
  047d128  li 3, 2
  047d12c  lis 4, 165
  047d130  stb 3, 32(31)
  047d134  lwz 3, 28(30)
  047d138  lwz 4, 7120(4)
  047d13c  lwz 5, 24(30)
  047d140  slwi 3, 3, 7
  047d144  slwi 5, 5, 7
  047d148  addc 3, 4, 3
  047d14c  addc 4, 4, 5
  047d150  clrldi 3, 3, 32
  047d154  clrldi 4, 4, 32
  047d158  lis 5, 72
  047d15c  lfs 1, 48(3)
  047d160  lfs 2, 48(4)
  047d164  addi 5, 5, -12296
  047d168  fsubs 1, 2, 1
  047d16c  stfs 1, 32(30)
  047d170  lfs 2, 52(4)
  047d174  lfs 3, 52(3)
  047d178  fsubs 2, 2, 3
  047d17c  stfs 2, 36(30)
  047d180  lfs 3, 56(4)
  047d184  lfs 4, 56(3)
  047d188  fsubs 3, 3, 4
  047d18c  stfs 3, 40(30)
  047d190  lfs 4, 60(4)
  047d194  stfs 4, 44(30)
  047d198  lfs 4, 8(5)
  047d19c  fmuls 1, 1, 4
  047d1a0  fmuls 2, 2, 4
  047d1a4  fmuls 3, 3, 4
  047d1a8  stfs 1, 32(30)
  047d1ac  stfs 2, 36(30)
  047d1b0  stfs 3, 40(30)
  047d1b4  lfs 4, 48(3)
  047d1b8  fadds 1, 1, 4
  047d1bc  stfs 1, 32(30)
  047d1c0  lfs 1, 52(3)
  047d1c4  fadds 1, 2, 1
  047d1c8  stfs 1, 36(30)
  047d1cc  lfs 1, 56(3)
  047d1d0  fadds 1, 3, 1
  047d1d4  stfs 1, 40(30)
  047d1d8  b 0x47df10
  047d1dc  lwz 3, 16(31)
  047d1e0  lfs 5, 32(30)
  047d1e4  lfs 1, 16(31)
  047d1e8  lwz 4, 20(31)
  047d1ec  lfs 6, 36(30)
  047d1f0  lfs 7, 20(31)
  047d1f4  fsubs 2, 5, 1
  047d1f8  lis 5, 72
  047d1fc  fsubs 3, 6, 7
  047d200  addi 5, 5, -12296
  047d204  srawi 6, 3, 31
  047d208  srawi 8, 4, 31
  047d20c  srwi 7, 6, 1
  047d210  xor 3, 7, 3
  047d214  srwi 7, 8, 1
  047d218  fabs 4, 2
  047d21c  subc 6, 3, 6
  047d220  fabs 8, 3
  047d224  stfs 2, 156(1)
  047d228  stfs 3, 160(1)
  047d22c  lis 9, 115
  047d230  fsubs 2, 4, 8
  047d234  stfs 2, 164(1)
  047d238  lwz 10, 156(1)
  047d23c  lfs 31, 12(5)
  047d240  lfs 2, 156(1)
  047d244  xor 5, 7, 4
  047d248  lwz 3, 160(1)
  047d24c  lfs 3, 160(1)
  047d250  lwz 7, 164(1)
  047d254  rlwinm 3, 3, 3, 29, 29
  047d258  fabs 9, 3
  047d25c  addic 4, 9, 22784
  047d260  lfs 3, 164(1)
  047d264  fabs 2, 2
  047d268  rlwimi 3, 7, 2, 30, 30
  047d26c  fsub 10, 3, 31
  047d270  fsub 11, 3, 31
  047d274  rlwimi 3, 10, 4, 28, 28
  047d278  ori 7, 4, 0
  047d27c  subc 5, 5, 8
  047d280  rlwimi 7, 3, 2, 26, 28
  047d284  slwi 3, 3, 2
  047d288  clrldi 7, 7, 32
  047d28c  fsel 8, 10, 2, 8
  047d290  lfsx 2, 4, 3
  047d294  fsel 4, 11, 9, 4
  047d298  lfs 3, 4(7)
  047d29c  fcmpu 0, 8, 31
  047d2a0  bt 1, 0x47d2ac
  047d2a4  fmr 2, 31
  047d2a8  b 0x47d3d0
  047d2ac  fsubs 9, 4, 8
  047d2b0  fadds 4, 4, 8
  047d2b4  addic 3, 1, 16
  047d2b8  li 9, 2
  047d2bc  addic 7, 3, 264
  047d2c0  addic 4, 3, 248
  047d2c4  mtctr 9
  047d2c8  fdivs 4, 9, 4
  047d2cc  fmuls 8, 4, 4
  047d2d0  stfs 4, 276(1)
  047d2d4  stfs 4, 268(1)
  047d2d8  stfs 4, 272(1)
  047d2dc  stfs 4, 264(1)
  047d2e0  lfs 10, 276(1)
  047d2e4  lfs 11, 268(1)
  047d2e8  lfs 12, 272(1)
  047d2ec  fmuls 9, 8, 8
  047d2f0  fmuls 11, 11, 8
  047d2f4  fmuls 10, 10, 9
  047d2f8  fmuls 4, 9, 9
  047d2fc  fmuls 9, 12, 9
  047d300  stfs 11, 268(1)
  047d304  fmuls 8, 10, 8
  047d308  stfs 9, 272(1)
  047d30c  stfs 8, 276(1)
  047d310  lfs 8, 248(3)
  047d314  fmuls 8, 8, 4
  047d318  stfs 8, 264(3)
  047d31c  lfs 8, 4(4)
  047d320  addic 4, 4, 8
  047d324  fmuls 8, 8, 4
  047d328  addic 3, 3, 8
  047d32c  stfs 8, 4(7)
  047d330  addic 7, 7, 8
  047d334  bdnz 0x47d310
  047d338  li 7, 4
  047d33c  ori 3, 1, 0
  047d340  mtctr 7
  047d344  lis 4, 115
  047d348  addic 7, 3, 264
  047d34c  addic 4, 4, 22752
  047d350  ori 8, 7, 0
  047d354  lfs 4, 264(3)
  047d358  lfs 8, 0(4)
  047d35c  fmuls 4, 4, 8
  047d360  lfs 8, 4(4)
  047d364  addic 4, 4, 8
  047d368  stfs 4, 264(3)
  047d36c  lfs 4, 4(7)
  047d370  addic 3, 3, 8
  047d374  fmuls 4, 4, 8
  047d378  stfs 4, 4(7)
  047d37c  addic 7, 7, 8
  047d380  bdnz 0x47d354
  047d384  ori 3, 1, 0
  047d388  fmr 4, 31
  047d38c  mtctr 9
  047d390  lfs 8, 264(3)
  047d394  fadds 4, 4, 8
  047d398  lfs 8, 4(8)
  047d39c  addic 3, 3, 16
  047d3a0  lfs 9, 8(8)
  047d3a4  lfs 10, 12(8)
  047d3a8  addic 8, 8, 16
  047d3ac  fadds 4, 4, 8
  047d3b0  fadds 4, 4, 9
  047d3b4  fadds 4, 4, 10
  047d3b8  bdnz 0x47d390
  047d3bc  lis 3, 72
  047d3c0  addi 3, 3, -12296
  047d3c4  lfs 8, 16(3)
  047d3c8  fadds 4, 4, 8
  047d3cc  fmadds 2, 4, 2, 3
  047d3d0  fsubs 3, 7, 6
  047d3d4  fsubs 4, 1, 5
  047d3d8  li 3, 0
  047d3dc  lis 4, 72
  047d3e0  stw 3, 112(1)
  047d3e4  addi 3, 4, -12296
  047d3e8  fmuls 3, 3, 3
  047d3ec  fmadds 3, 4, 4, 3
  047d3f0  lfs 4, 20(3)
  047d3f4  fsqrts 3, 3
  047d3f8  fcmpu 0, 3, 4
  047d3fc  bt 0, 0x47d428
  047d400  lis 3, 17402
  047d404  cmpw 6, 3
  047d408  cmpw 6, 5, 3
  047d40c  bt 1, 0x47d428
  047d410  lis 3, 16672
  047d414  cmpw 6, 3
  047d418  cmpw 1, 5, 3
  047d41c  bt 0, 0x47d428
  047d420  bt 25, 0x47d428
  047d424  bf 4, 0x47d47c
  047d428  lwz 4, 20(30)
  047d42c  lis 3, 15820
  047d430  srawi 5, 4, 31
  047d434  ori 3, 3, 52429
  047d438  srwi 6, 5, 1
  047d43c  xor 4, 6, 4
  047d440  subc 4, 4, 5
  047d444  cmpw 4, 3
  047d448  bf 0, 0x47d480
  047d44c  li 3, 3
  047d450  lis 4, 17402
  047d454  stb 3, 32(31)
  047d458  stfs 1, 32(30)
  047d45c  lfs 1, 20(31)
  047d460  stfs 1, 36(30)
  047d464  lfs 1, 24(31)
  047d468  stfs 1, 40(30)
  047d46c  lfs 1, 28(31)
  047d470  stw 4, 40(30)
  047d474  stfs 1, 44(30)
  047d478  b 0x47df10
  047d47c  fmr 31, 3
  047d480  lis 3, 72
  047d484  lis 28, 114
  047d488  fmr 1, 2
  047d48c  addi 29, 3, -12296
  047d490  lis 27, 114
  047d494  addic 3, 31, 72
  047d498  addic 5, 30, 16
  047d49c  lfs 4, 24(29)
  047d4a0  lfs 3, -3048(28)
  047d4a4  lfs 5, 28(29)
  047d4a8  fmuls 3, 3, 4
  047d4ac  lfs 6, -3052(27)
  047d4b0  fmuls 4, 6, 5
  047d4b4  fmr 2, 3
  047d4b8  bl 0x10a2e0
  047d4bc  nop
  047d4c0  lis 4, 135
  047d4c4  lfs 1, 16(30)
  047d4c8  addic 3, 1, 112
  047d4cc  addic 5, 30, 20
  047d4d0  lfs 2, 31704(4)
  047d4d4  fmuls 2, 1, 2
  047d4d8  fmr 1, 31
  047d4dc  stfs 2, 64(31)
  047d4e0  lfs 2, 32(29)
  047d4e4  lfs 4, 36(29)
  047d4e8  lfs 3, -3048(28)
  047d4ec  lfs 5, -3052(27)
  047d4f0  fmuls 2, 3, 2
  047d4f4  fmuls 3, 3, 4
  047d4f8  fmuls 4, 5, 4
  047d4fc  bl 0x109c30
  047d500  nop
  047d504  lfs 1, 40(29)
  047d508  lfs 2, 72(31)
  047d50c  lfs 3, 44(29)
  047d510  fadds 1, 2, 1
  047d514  lfs 4, 48(29)
  047d518  lfs 7, 52(29)
  047d51c  fsubs 2, 3, 1
  047d520  fsubs 5, 4, 1
  047d524  li 3, 0
  047d528  fsub 6, 1, 2
  047d52c  fsel 1, 6, 2, 1
  047d530  lfs 2, 56(29)
  047d534  fsub 6, 5, 1
  047d538  fsel 1, 6, 5, 1
  047d53c  lfs 5, 60(29)
  047d540  lfs 6, 64(29)
  047d544  lfs 9, 20(30)
  047d548  fmuls 8, 1, 1
  047d54c  fmuls 10, 8, 1
  047d550  fmuls 11, 8, 10
  047d554  fmadds 1, 10, 7, 1
  047d558  fmuls 10, 8, 11
  047d55c  fmadds 1, 11, 2, 1
  047d560  fmuls 8, 8, 10
  047d564  fmadds 1, 10, 5, 1
  047d568  fmadds 1, 8, 6, 1
  047d56c  fmuls 1, 1, 9
  047d570  stfs 1, 0(30)
  047d574  lfs 8, 72(31)
  047d578  fsubs 3, 3, 8
  047d57c  fsubs 4, 4, 8
  047d580  stw 3, 8(30)
  047d584  fsub 10, 8, 3
  047d588  fsel 3, 10, 3, 8
  047d58c  fsub 8, 4, 3
  047d590  fsel 3, 8, 4, 3
  047d594  fmuls 4, 3, 3
  047d598  fmuls 8, 4, 3
  047d59c  fmuls 10, 4, 8
  047d5a0  fmadds 3, 8, 7, 3
  047d5a4  fmuls 7, 4, 10
  047d5a8  fmadds 2, 10, 2, 3
  047d5ac  fmuls 3, 4, 7
  047d5b0  fmadds 2, 7, 5, 2
  047d5b4  fmadds 2, 3, 6, 2
  047d5b8  fmuls 2, 2, 9
  047d5bc  stfs 2, 4(30)
  047d5c0  lfs 2, 16(31)
  047d5c4  fadds 1, 2, 1
  047d5c8  lfs 2, 20(31)
  047d5cc  lfs 3, 24(31)
  047d5d0  stfs 1, 16(31)
  047d5d4  lfs 1, 4(30)
  047d5d8  fadds 1, 2, 1
  047d5dc  stfs 1, 20(31)
  047d5e0  lfs 1, 8(30)
  047d5e4  fadds 1, 3, 1
  047d5e8  stfs 1, 24(31)
  047d5ec  b 0x47df10
  047d5f0  lis 3, 72
  047d5f4  lis 4, 114
  047d5f8  addi 29, 3, -12296
  047d5fc  addic 3, 31, 68
  047d600  addic 5, 30, 16
  047d604  lfs 1, 72(29)
  047d608  lfs 31, 68(29)
  047d60c  lfs 2, -3048(4)
  047d610  lis 4, 114
  047d614  fmuls 2, 2, 1
  047d618  lfs 4, 28(29)
  047d61c  fmr 1, 31
  047d620  lfs 3, -3052(4)
  047d624  fmuls 4, 3, 4
  047d628  fmr 3, 2
  047d62c  bl 0x10a2e0
  047d630  nop
  047d634  lfs 1, 68(31)
  047d638  fmr 2, 31
  047d63c  bl 0x5026a0
  047d640  nop
  047d644  lfs 2, 76(29)
  047d648  fcmpu 0, 1, 2
  047d64c  cror 6, 1, 2
  047d650  bt 6, 0x47d698
  047d654  lis 3, 72
  047d658  lis 4, 114
  047d65c  addi 6, 3, -12296
  047d660  lis 7, 114
  047d664  addic 3, 31, 24
  047d668  addic 5, 30, 20
  047d66c  lfs 3, 36(6)
  047d670  lfs 4, 84(6)
  047d674  lfs 5, 88(6)
  047d678  lfs 1, 80(6)
  047d67c  lfs 6, -3048(4)
  047d680  lfs 7, -3052(7)
  047d684  fmuls 2, 6, 3
  047d688  fmuls 3, 6, 4
  047d68c  fmuls 4, 7, 5
  047d690  bl 0x109c30
  047d694  nop
  047d698  lwz 4, 24(31)
  047d69c  lis 3, 17402
  047d6a0  srawi 5, 4, 31
  047d6a4  srwi 6, 5, 1
  047d6a8  xor 4, 6, 4
  047d6ac  subc 4, 4, 5
  047d6b0  cmpw 4, 3
  047d6b4  bt 0, 0x47df10
  047d6b8  lis 4, 72
  047d6bc  li 3, 4
  047d6c0  li 5, 0
  047d6c4  addi 4, 4, -12296
  047d6c8  stb 3, 32(31)
  047d6cc  sth 5, 50(31)
  047d6d0  lfs 1, 92(4)
  047d6d4  lfs 2, 0(4)
  047d6d8  bl 0xfcbe8
  047d6dc  nop
  047d6e0  lis 3, 114
  047d6e4  lfs 2, -3056(3)
  047d6e8  fmuls 1, 1, 2
  047d6ec  bl 0x502758
  047d6f0  nop
  047d6f4  stw 3, 48(30)
  047d6f8  b 0x47df10
  047d6fc  addic 3, 30, 48
  047d700  bl 0x4fff60
  047d704  nop
  047d708  cmpwi 3, 0
  047d70c  bt 2, 0x47df10
  047d710  li 3, 5
  047d714  lis 4, 165
  047d718  lis 5, 72
  047d71c  li 6, 0
  047d720  stb 3, 32(31)
  047d724  lwz 3, 24(30)
  047d728  addi 5, 5, -12296
  047d72c  lwz 4, 7120(4)
  047d730  slwi 3, 3, 7
  047d734  addc 3, 4, 3
  047d738  li 4, 255
  047d73c  clrldi 3, 3, 32
  047d740  lfs 1, 48(3)
  047d744  stfs 1, 32(30)
  047d748  lfs 1, 52(3)
  047d74c  stfs 1, 36(30)
  047d750  lfs 1, 56(3)
  047d754  stfs 1, 40(30)
  047d758  lfs 1, 60(3)
  047d75c  sth 4, 50(31)
  047d760  lis 3, 114
  047d764  stfs 1, 44(30)
  047d768  lfs 4, 12(5)
  047d76c  stw 6, 76(31)
  047d770  stw 6, 72(31)
  047d774  stw 6, 68(31)
  047d778  stw 6, 64(31)
  047d77c  stw 6, 12(30)
  047d780  stw 6, 4(30)
  047d784  stw 6, 0(30)
  047d788  lfs 1, 96(5)
  047d78c  lfs 2, -3052(3)
  047d790  lfs 3, 32(30)
  047d794  fmuls 1, 2, 1
  047d798  lfs 5, 36(30)
  047d79c  lis 3, 115
  047d7a0  addic 3, 3, 22784
  047d7a4  stfs 1, 8(30)
  047d7a8  lfs 1, 16(31)
  047d7ac  lfs 2, 20(31)
  047d7b0  fsubs 1, 3, 1
  047d7b4  fsubs 2, 5, 2
  047d7b8  fabs 3, 1
  047d7bc  fabs 5, 2
  047d7c0  stfs 1, 144(1)
  047d7c4  stfs 2, 148(1)
  047d7c8  fsubs 1, 3, 5
  047d7cc  stfs 1, 152(1)
  047d7d0  lwz 4, 144(1)
  047d7d4  lfs 1, 144(1)
  047d7d8  lwz 5, 148(1)
  047d7dc  lfs 2, 148(1)
  047d7e0  fabs 1, 1
  047d7e4  lwz 6, 152(1)
  047d7e8  rlwinm 5, 5, 3, 29, 29
  047d7ec  lfs 6, 152(1)
  047d7f0  fabs 2, 2
  047d7f4  rlwimi 5, 6, 2, 30, 30
  047d7f8  fsub 7, 6, 4
  047d7fc  fsub 6, 6, 4
  047d800  rlwimi 5, 4, 4, 28, 28
  047d804  ori 4, 3, 0
  047d808  rlwimi 4, 5, 2, 26, 28
  047d80c  slwi 5, 5, 2
  047d810  clrldi 4, 4, 32
  047d814  fsel 5, 7, 1, 5
  047d818  lfsx 1, 3, 5
  047d81c  fsel 3, 6, 2, 3
  047d820  lfs 2, 4(4)
  047d824  fcmpu 0, 5, 4
  047d828  bt 1, 0x47d830
  047d82c  b 0x47d950
  047d830  fsubs 6, 3, 5
  047d834  fadds 3, 3, 5
  047d838  addic 3, 1, 16
  047d83c  li 7, 2
  047d840  addic 5, 3, 232
  047d844  addic 4, 3, 216
  047d848  mtctr 7
  047d84c  fdivs 3, 6, 3
  047d850  fmuls 5, 3, 3
  047d854  stfs 3, 244(1)
  047d858  stfs 3, 236(1)
  047d85c  stfs 3, 240(1)
  047d860  stfs 3, 232(1)
  047d864  lfs 7, 244(1)
  047d868  lfs 8, 236(1)
  047d86c  lfs 9, 240(1)
  047d870  fmuls 6, 5, 5
  047d874  fmuls 8, 8, 5
  047d878  fmuls 7, 7, 6
  047d87c  fmuls 3, 6, 6
  047d880  fmuls 6, 9, 6
  047d884  stfs 8, 236(1)
  047d888  fmuls 5, 7, 5
  047d88c  stfs 6, 240(1)
  047d890  stfs 5, 244(1)
  047d894  lfs 5, 216(3)
  047d898  fmuls 5, 5, 3
  047d89c  stfs 5, 232(3)
  047d8a0  lfs 5, 4(4)
  047d8a4  addic 4, 4, 8
  047d8a8  fmuls 5, 5, 3
  047d8ac  addic 3, 3, 8
  047d8b0  stfs 5, 4(5)
  047d8b4  addic 5, 5, 8
  047d8b8  bdnz 0x47d894
  047d8bc  li 5, 4
  047d8c0  ori 3, 1, 0
  047d8c4  mtctr 5
  047d8c8  lis 4, 115
  047d8cc  addic 5, 3, 232
  047d8d0  addic 4, 4, 22752
  047d8d4  ori 6, 5, 0
  047d8d8  lfs 3, 232(3)
  047d8dc  lfs 5, 0(4)
  047d8e0  fmuls 3, 3, 5
  047d8e4  lfs 5, 4(4)
  047d8e8  addic 4, 4, 8
  047d8ec  stfs 3, 232(3)
  047d8f0  lfs 3, 4(5)
  047d8f4  addic 3, 3, 8
  047d8f8  fmuls 3, 3, 5
  047d8fc  stfs 3, 4(5)
  047d900  addic 5, 5, 8
  047d904  bdnz 0x47d8d8
  047d908  ori 3, 1, 0
  047d90c  mtctr 7
  047d910  lfs 3, 232(3)
  047d914  fadds 3, 4, 3
  047d918  addic 3, 3, 16
  047d91c  lfs 4, 4(6)
  047d920  lfs 5, 8(6)
  047d924  lfs 6, 12(6)
  047d928  addic 6, 6, 16
  047d92c  fadds 3, 3, 4
  047d930  fadds 4, 3, 5
  047d934  fadds 4, 4, 6
  047d938  bdnz 0x47d910
  047d93c  lis 3, 72
  047d940  addi 3, 3, -12296
  047d944  lfs 3, 16(3)
  047d948  fadds 4, 4, 3
  047d94c  fmadds 4, 4, 1, 2
  047d950  li 3, 0
  047d954  stfs 4, 72(31)
  047d958  stw 3, 20(30)
  047d95c  b 0x47df10
  047d960  lfs 1, 32(30)
  047d964  lfs 3, 16(31)
  047d968  lfs 4, 36(30)
  047d96c  lfs 5, 20(31)
  047d970  fsubs 1, 1, 3
  047d974  lis 3, 72
  047d978  fsubs 3, 4, 5
  047d97c  addi 3, 3, -12296
  047d980  lis 29, 115
  047d984  addic 29, 29, 22784
  047d988  fabs 4, 1
  047d98c  fabs 5, 3
  047d990  stfs 1, 132(1)
  047d994  stfs 3, 136(1)
  047d998  fsubs 1, 4, 5
  047d99c  stfs 1, 140(1)
  047d9a0  lwz 4, 132(1)
  047d9a4  lfs 31, 12(3)
  047d9a8  lfs 1, 132(1)
  047d9ac  lwz 3, 136(1)
  047d9b0  lfs 3, 136(1)
  047d9b4  lwz 5, 140(1)
  047d9b8  rlwinm 3, 3, 3, 29, 29
  047d9bc  fabs 6, 3
  047d9c0  lfs 3, 140(1)
  047d9c4  fabs 1, 1
  047d9c8  rlwimi 3, 5, 2, 30, 30
  047d9cc  fsub 7, 3, 31
  047d9d0  rlwimi 3, 4, 4, 28, 28
  047d9d4  fsub 8, 3, 31
  047d9d8  ori 4, 29, 0
  047d9dc  rlwimi 4, 3, 2, 26, 28
  047d9e0  slwi 3, 3, 2
  047d9e4  clrldi 4, 4, 32
  047d9e8  fsel 5, 7, 1, 5
  047d9ec  lfsx 1, 29, 3
  047d9f0  lfs 3, 4(4)
  047d9f4  fsel 4, 8, 6, 4
  047d9f8  fcmpu 0, 5, 31
  047d9fc  bt 1, 0x47da08
  047da00  fmr 1, 31
  047da04  b 0x47db2c
  047da08  fsubs 6, 4, 5
  047da0c  fadds 4, 4, 5
  047da10  addic 3, 1, 16
  047da14  li 6, 2
  047da18  addic 5, 3, 200
  047da1c  addic 4, 3, 184
  047da20  mtctr 6
  047da24  fdivs 4, 6, 4
  047da28  fmuls 5, 4, 4
  047da2c  stfs 4, 212(1)
  047da30  stfs 4, 204(1)
  047da34  stfs 4, 208(1)
  047da38  stfs 4, 200(1)
  047da3c  lfs 7, 212(1)
  047da40  lfs 8, 204(1)
  047da44  lfs 9, 208(1)
  047da48  fmuls 6, 5, 5
  047da4c  fmuls 8, 8, 5
  047da50  fmuls 7, 7, 6
  047da54  fmuls 4, 6, 6
  047da58  fmuls 6, 9, 6
  047da5c  stfs 8, 204(1)
  047da60  fmuls 5, 7, 5
  047da64  stfs 6, 208(1)
  047da68  stfs 5, 212(1)
  047da6c  lfs 5, 184(3)
  047da70  fmuls 5, 5, 4
  047da74  stfs 5, 200(3)
  047da78  lfs 5, 4(4)
  047da7c  addic 4, 4, 8
  047da80  fmuls 5, 5, 4
  047da84  addic 3, 3, 8
  047da88  stfs 5, 4(5)
  047da8c  addic 5, 5, 8
  047da90  bdnz 0x47da6c
  047da94  li 5, 4
  047da98  ori 3, 1, 0
  047da9c  mtctr 5
  047daa0  lis 4, 115
  047daa4  addic 5, 3, 200
  047daa8  addic 4, 4, 22752
  047daac  ori 7, 5, 0
  047dab0  lfs 4, 200(3)
  047dab4  lfs 5, 0(4)
  047dab8  fmuls 4, 4, 5
  047dabc  lfs 5, 4(4)
  047dac0  addic 4, 4, 8
  047dac4  stfs 4, 200(3)
  047dac8  lfs 4, 4(5)
  047dacc  addic 3, 3, 8
  047dad0  fmuls 4, 4, 5
  047dad4  stfs 4, 4(5)
  047dad8  addic 5, 5, 8
  047dadc  bdnz 0x47dab0
  047dae0  ori 3, 1, 0
  047dae4  fmr 4, 31
  047dae8  mtctr 6
  047daec  lfs 5, 200(3)
  047daf0  fadds 4, 4, 5
  047daf4  lfs 5, 4(7)
  047daf8  addic 3, 3, 16
  047dafc  lfs 6, 8(7)
  047db00  lfs 7, 12(7)
  047db04  addic 7, 7, 16
  047db08  fadds 4, 4, 5
  047db0c  fadds 4, 4, 6
  047db10  fadds 4, 4, 7
  047db14  bdnz 0x47daec
  047db18  lis 3, 72
  047db1c  addi 3, 3, -12296
  047db20  lfs 5, 16(3)
  047db24  fadds 4, 4, 5
  047db28  fmadds 1, 4, 1, 3
  047db2c  lis 3, 72
  047db30  stfs 2, 116(1)
  047db34  lis 4, 114
  047db38  addi 3, 3, -12296
  047db3c  lis 6, 114
  047db40  addic 5, 30, 16
  047db44  lfs 2, 24(3)
  047db48  lfs 3, -3048(4)
  047db4c  lfs 4, 28(3)
  047db50  fmuls 2, 3, 2
  047db54  lfs 5, -3052(6)
  047db58  addic 3, 31, 72
  047db5c  fmuls 4, 5, 4
  047db60  fmr 3, 2
  047db64  bl 0x10a2e0
  047db68  nop
  047db6c  lis 3, 135
  047db70  lfs 1, 16(30)
  047db74  lfs 2, 31704(3)
  047db78  fmuls 1, 1, 2
  047db7c  stfs 1, 64(31)
  047db80  lfs 1, 4(30)
  047db84  lfs 2, 0(30)
  047db88  fmuls 1, 1, 1
  047db8c  lfs 3, 16(31)
  047db90  lfs 4, 20(31)
  047db94  lwz 3, 8(30)
  047db98  rlwinm 3, 3, 3, 29, 29
  047db9c  fmadds 1, 2, 2, 1
  047dba0  lfs 2, 8(30)
  047dba4  fabs 5, 2
  047dba8  fsqrts 1, 1
  047dbac  fabs 2, 1
  047dbb0  stfs 1, 124(1)
  047dbb4  fsubs 1, 2, 5
  047dbb8  stfs 1, 128(1)
  047dbbc  lwz 4, 124(1)
  047dbc0  lfs 1, 124(1)
  047dbc4  lwz 5, 128(1)
  047dbc8  fabs 6, 1
  047dbcc  lfs 1, 128(1)
  047dbd0  rlwimi 3, 5, 2, 30, 30
  047dbd4  fsub 7, 1, 31
  047dbd8  rlwimi 3, 4, 4, 28, 28
  047dbdc  fsub 8, 1, 31
  047dbe0  ori 4, 29, 0
  047dbe4  rlwimi 4, 3, 2, 26, 28
  047dbe8  slwi 3, 3, 2
  047dbec  clrldi 4, 4, 32
  047dbf0  lfsx 1, 29, 3
  047dbf4  fsel 6, 7, 6, 5
  047dbf8  fsel 5, 8, 5, 2
  047dbfc  lfs 2, 4(4)
  047dc00  fcmpu 0, 6, 31
  047dc04  bt 1, 0x47dc0c
  047dc08  b 0x47dd2c
  047dc0c  fsubs 7, 5, 6
  047dc10  fadds 5, 5, 6
  047dc14  addic 3, 1, 16
  047dc18  li 6, 2
  047dc1c  addic 4, 3, 152
  047dc20  addic 5, 3, 168
  047dc24  mtctr 6
  047dc28  fdivs 5, 7, 5
  047dc2c  fmuls 6, 5, 5
  047dc30  stfs 5, 180(1)
  047dc34  stfs 5, 172(1)
  047dc38  stfs 5, 176(1)
  047dc3c  stfs 5, 168(1)
  047dc40  lfs 8, 180(1)
  047dc44  lfs 9, 172(1)
  047dc48  lfs 10, 176(1)
  047dc4c  fmuls 7, 6, 6
  047dc50  fmuls 9, 9, 6
  047dc54  fmuls 8, 8, 7
  047dc58  fmuls 5, 7, 7
  047dc5c  fmuls 7, 10, 7
  047dc60  stfs 9, 172(1)
  047dc64  fmuls 6, 8, 6
  047dc68  stfs 7, 176(1)
  047dc6c  stfs 6, 180(1)
  047dc70  lfs 6, 152(3)
  047dc74  fmuls 6, 6, 5
  047dc78  stfs 6, 168(3)
  047dc7c  lfs 6, 4(4)
  047dc80  addic 3, 3, 8
  047dc84  addic 4, 4, 8
  047dc88  fmuls 6, 6, 5
  047dc8c  stfs 6, 4(5)
  047dc90  addic 5, 5, 8
  047dc94  bdnz 0x47dc70
  047dc98  li 5, 4
  047dc9c  ori 3, 1, 0
  047dca0  mtctr 5
  047dca4  lis 4, 115
  047dca8  addic 5, 3, 168
  047dcac  addic 4, 4, 22752
  047dcb0  ori 7, 5, 0
  047dcb4  lfs 5, 168(3)
  047dcb8  lfs 6, 0(4)
  047dcbc  fmuls 5, 5, 6
  047dcc0  lfs 6, 4(4)
  047dcc4  addic 4, 4, 8
  047dcc8  stfs 5, 168(3)
  047dccc  lfs 5, 4(5)
  047dcd0  addic 3, 3, 8
  047dcd4  fmuls 5, 5, 6
  047dcd8  stfs 5, 4(5)
  047dcdc  addic 5, 5, 8
  047dce0  bdnz 0x47dcb4
  047dce4  ori 3, 1, 0
  047dce8  mtctr 6
  047dcec  lfs 5, 168(3)
  047dcf0  lfs 6, 4(7)
  047dcf4  fadds 5, 31, 5
  047dcf8  lfs 7, 8(7)
  047dcfc  lfs 31, 12(7)
  047dd00  addic 3, 3, 16
  047dd04  addic 7, 7, 16
  047dd08  fadds 5, 5, 6
  047dd0c  fadds 5, 5, 7
  047dd10  fadds 31, 5, 31
  047dd14  bdnz 0x47dcec
  047dd18  lis 3, 72
  047dd1c  addi 3, 3, -12296
  047dd20  lfs 5, 16(3)
  047dd24  fadds 31, 31, 5
  047dd28  fmadds 31, 31, 1, 2
  047dd2c  fneg 1, 31
  047dd30  li 3, 0
  047dd34  lis 4, 72
  047dd38  lis 28, 114
  047dd3c  addi 29, 4, -12296
  047dd40  stw 3, 120(1)
  047dd44  lis 27, 114
  047dd48  addic 3, 1, 120
  047dd4c  addic 5, 30, 20
  047dd50  stfs 1, 68(31)
  047dd54  lfs 1, 36(30)
  047dd58  lfs 2, 32(30)
  047dd5c  fsubs 1, 4, 1
  047dd60  lfs 31, 32(29)
  047dd64  fsubs 3, 3, 2
  047dd68  lfs 4, -3048(28)
  047dd6c  lfs 6, 36(29)
  047dd70  fmuls 2, 4, 31
  047dd74  lfs 5, -3052(27)
  047dd78  fmuls 4, 5, 6
  047dd7c  fmuls 1, 1, 1
  047dd80  fmadds 1, 3, 3, 1
  047dd84  fmr 3, 2
  047dd88  fsqrts 1, 1
  047dd8c  bl 0x109c30
  047dd90  nop
  047dd94  lfs 1, 40(29)
  047dd98  lfs 2, 72(31)
  047dd9c  lfs 3, 44(29)
  047dda0  fadds 1, 2, 1
  047dda4  lfs 4, 48(29)
  047dda8  lfs 7, 52(29)
  047ddac  fsubs 2, 3, 1
  047ddb0  fsubs 5, 4, 1
  047ddb4  fsub 6, 1, 2
  047ddb8  addic 3, 1, 116
  047ddbc  fsel 1, 6, 2, 1
  047ddc0  lfs 2, 56(29)
  047ddc4  fsub 6, 5, 1
  047ddc8  addic 5, 30, 8
  047ddcc  fsel 1, 6, 5, 1
  047ddd0  lfs 5, 60(29)
  047ddd4  lfs 6, 64(29)
  047ddd8  lfs 9, 20(30)
  047dddc  fmuls 8, 1, 1
  047dde0  fmuls 10, 8, 1
  047dde4  fmuls 11, 8, 10
  047dde8  fmadds 1, 10, 7, 1
  047ddec  fmuls 10, 8, 11
  047ddf0  fmadds 1, 11, 2, 1
  047ddf4  fmuls 8, 8, 10
  047ddf8  fmadds 1, 10, 5, 1
  047ddfc  fmadds 1, 8, 6, 1
  047de00  fmuls 1, 1, 9
  047de04  stfs 1, 0(30)
  047de08  lfs 8, 72(31)
  047de0c  fsubs 3, 3, 8
  047de10  fsubs 4, 4, 8
  047de14  fsub 10, 8, 3
  047de18  fsel 3, 10, 3, 8
  047de1c  fsub 8, 4, 3
  047de20  fsel 3, 8, 4, 3
  047de24  fmuls 4, 3, 3
  047de28  fmuls 8, 4, 3
  047de2c  fmuls 10, 4, 8
  047de30  fmadds 3, 8, 7, 3
  047de34  fmuls 7, 4, 10
  047de38  fmadds 2, 10, 2, 3
  047de3c  fmuls 3, 4, 7
  047de40  fmadds 2, 7, 5, 2
  047de44  fmadds 2, 3, 6, 2
  047de48  fmuls 2, 2, 9
  047de4c  stfs 2, 4(30)
  047de50  lfs 2, 16(31)
  047de54  fadds 1, 2, 1
  047de58  lfs 2, 20(31)
  047de5c  lfs 3, 24(31)
  047de60  stfs 1, 16(31)
  047de64  lfs 1, 4(30)
  047de68  fadds 1, 2, 1
  047de6c  stfs 1, 20(31)
  047de70  lfs 1, 8(30)
  047de74  fadds 1, 3, 1
  047de78  stfs 1, 24(31)
  047de7c  lfs 3, 100(29)
  047de80  lfs 4, 104(29)
  047de84  lfs 1, 40(30)
  047de88  lfs 5, -3048(28)
  047de8c  lfs 6, -3052(27)
  047de90  fmuls 2, 5, 31
  047de94  fmuls 3, 5, 3
  047de98  fmuls 4, 6, 4
  047de9c  bl 0x109c30
  047dea0  nop
  047dea4  lfs 1, 20(31)
  047dea8  lfs 2, 36(30)
  047deac  lfs 3, 16(31)
  047deb0  fsubs 1, 1, 2
  047deb4  lfs 2, 32(30)
  047deb8  fsubs 2, 3, 2
  047debc  fmuls 1, 1, 1
  047dec0  fmadds 1, 2, 2, 1
  047dec4  lfs 2, 20(29)
  047dec8  fsqrts 1, 1
  047decc  fcmpu 0, 1, 2
  047ded0  cror 6, 1, 2
  047ded4  bt 6, 0x47df10
  047ded8  lis 3, 72
  047dedc  li 4, 1
  047dee0  addi 3, 3, -12296
  047dee4  stb 4, 32(31)
  047dee8  lfs 1, 92(3)
  047deec  lfs 2, 0(3)
  047def0  bl 0xfcbe8
  047def4  nop
  047def8  lis 3, 114
  047defc  lfs 2, -3056(3)
  047df00  fmuls 1, 1, 2
  047df04  bl 0x502758
  047df08  nop
  047df0c  stw 3, 48(30)
  047df10  ld 0, 368(1)
  047df14  mtlr 0
  047df18  lfd 31, 344(1)
  047df1c  ld 27, 304(1)
  047df20  ld 28, 312(1)
  047df24  ld 29, 320(1)
  047df28  ld 30, 328(1)
  047df2c  ld 31, 336(1)
  047df30  addi 1, 1, 352
  047df34  blr

M829_0047df40:   # 0x47df40, 0x178 bytes
  047df40  stdu 1, -144(1)
  047df44  mflr 0
  047df48  std 0, 160(1)
  047df4c  std 29, 120(1)
  047df50  ori 29, 3, 0
  047df54  std 31, 136(1)
  047df58  li 3, 83
  047df5c  std 30, 128(1)
  047df60  ori 31, 5, 0
  047df64  std 28, 112(1)
  047df68  ori 30, 4, 0
  047df6c  bl 0xefa28
  047df70  nop
  047df74  ori 28, 3, 0
  047df78  cmpwi 28, 0
  047df7c  bt 2, 0x47e094
  047df80  li 3, 255
  047df84  li 4, 1
  047df88  lis 6, 72
  047df8c  li 5, 0
  047df90  stb 3, 48(28)
  047df94  addi 6, 6, -8392
  047df98  sth 3, 50(28)
  047df9c  stb 4, 49(28)
  047dfa0  stb 5, 32(28)
  047dfa4  stb 5, 188(28)
  047dfa8  lfs 1, 0(6)
  047dfac  lwz 3, 36(28)
  047dfb0  lwz 7, 120(28)
  047dfb4  li 9, 20
  047dfb8  lis 10, 16128
  047dfbc  vspltisw 3, -1
  047dfc0  li 8, 4
  047dfc4  lfs 2, 36(3)
  047dfc8  stw 29, 116(7)
  047dfcc  fmuls 1, 2, 1
  047dfd0  lis 3, 16800
  047dfd4  vslw 3, 3, 3
  047dfd8  lis 11, 114
  047dfdc  stfs 1, 44(28)
  047dfe0  lfs 1, 0(30)
  047dfe4  stfs 1, 16(28)
  047dfe8  lfs 1, 4(30)
  047dfec  stfs 1, 20(28)
  047dff0  lfs 1, 8(30)
  047dff4  stfs 1, 24(28)
  047dff8  lfs 1, 12(30)
  047dffc  stfs 1, 28(28)
  047e000  lfs 1, 0(31)
  047e004  stfs 1, 96(7)
  047e008  lfs 1, 4(31)
  047e00c  stfs 1, 100(7)
  047e010  lfs 1, 8(31)
  047e014  stfs 1, 104(7)
  047e018  lfs 1, 12(31)
  047e01c  stw 3, 32(7)
  047e020  stfs 1, 108(7)
  047e024  li 3, -3056
  047e028  sth 9, 36(7)
  047e02c  stw 10, 48(7)
  047e030  stb 5, 40(7)
  047e034  stb 4, 41(7)
  047e038  lvlx 2, 8, 6
  047e03c  lvlx 4, 3, 11
  047e040  vspltw 2, 2, 0
  047e044  li 3, 112
  047e048  vmaddfp 2, 4, 2, 3
  047e04c  vctsxs 2, 2, 0
  047e050  vspltw 2, 2, 0
  047e054  stvewx 2, 3, 7
  047e058  lbz 3, 83(28)
  047e05c  cmpwi 3, 1
  047e060  bt 2, 0x47e07c
  047e064  ori 3, 28, 0
  047e068  li 4, 1
  047e06c  li 5, 0
  047e070  li 6, 10
  047e074  bl 0xfddc0
  047e078  nop
  047e07c  ori 3, 28, 0
  047e080  bl 0xf31a8
  047e084  nop
  047e088  ori 3, 28, 0
  047e08c  bl 0x10c000
  047e090  nop
  047e094  ori 3, 28, 0
  047e098  ld 0, 160(1)
  047e09c  mtlr 0
  047e0a0  ld 28, 112(1)
  047e0a4  ld 29, 120(1)
  047e0a8  ld 30, 128(1)
  047e0ac  ld 31, 136(1)
  047e0b0  addi 1, 1, 144
  047e0b4  blr
