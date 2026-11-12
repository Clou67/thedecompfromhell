# game/update/moby1224.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1224_0020ca00:   # 0x20ca00, 0x260 bytes
  020ca00  stdu 1, -144(1)
  020ca04  mflr 0
  020ca08  std 0, 160(1)
  020ca0c  stfd 31, 136(1)
  020ca10  std 31, 128(1)
  020ca14  lwz 31, 120(3)
  020ca18  lhz 3, 18(31)
  020ca1c  cmpwi 3, 0
  020ca20  bt 2, 0x20cb64
  020ca24  addic 4, 3, -1
  020ca28  li 5, 23
  020ca2c  addic 3, 31, 64
  020ca30  mtctr 5
  020ca34  sth 4, 18(31)
  020ca38  lfs 1, 32(3)
  020ca3c  lfs 2, 544(3)
  020ca40  lfs 3, 36(3)
  020ca44  fadds 1, 1, 2
  020ca48  lfs 2, 548(3)
  020ca4c  lfs 4, 40(3)
  020ca50  fadds 2, 3, 2
  020ca54  lfs 3, 552(3)
  020ca58  fadds 3, 4, 3
  020ca5c  stfs 1, 32(3)
  020ca60  stfs 2, 36(3)
  020ca64  stfs 3, 40(3)
  020ca68  addic 3, 3, 16
  020ca6c  bdnz 0x20ca38
  020ca70  lis 3, 33
  020ca74  vspltisw 2, 0
  020ca78  li 7, 0
  020ca7c  addi 3, 3, -13832
  020ca80  lvlx 3, 0, 3
  020ca84  lfs 1, 0(3)
  020ca88  vspltw 3, 3, 0
  020ca8c  vcmpgefp. 2, 2, 3
  020ca90  bf 26, 0x20cb10
  020ca94  addic 4, 31, 1056
  020ca98  addic 3, 31, 1312
  020ca9c  li 8, 3
  020caa0  addic 6, 4, 64
  020caa4  addic 5, 3, 64
  020caa8  mtctr 8
  020caac  lfs 2, 0(6)
  020cab0  lfs 3, 0(5)
  020cab4  fadds 2, 2, 3
  020cab8  lfs 3, 4(6)
  020cabc  lfs 4, 8(6)
  020cac0  stfs 2, 0(6)
  020cac4  lfs 2, 4(5)
  020cac8  fadds 2, 3, 2
  020cacc  stfs 2, 4(6)
  020cad0  lfs 2, 8(5)
  020cad4  addic 5, 5, 64
  020cad8  fadds 2, 4, 2
  020cadc  stfs 2, 8(6)
  020cae0  addic 6, 6, 64
  020cae4  bdnz 0x20caac
  020cae8  addic 7, 7, 1
  020caec  extsw 5, 7
  020caf0  addic 4, 4, 16
  020caf4  std 5, 112(1)
  020caf8  addic 3, 3, 16
  020cafc  lfd 2, 112(1)
  020cb00  fcfid 2, 2
  020cb04  frsp 2, 2
  020cb08  fcmpu 0, 2, 1
  020cb0c  bt 0, 0x20ca9c
  020cb10  ori 5, 31, 0
  020cb14  li 3, 4
  020cb18  ori 4, 5, 0
  020cb1c  mtctr 3
  020cb20  addic 3, 4, 32
  020cb24  lbz 6, 24(5)
  020cb28  addic 5, 5, 1
  020cb2c  slwi 6, 6, 4
  020cb30  addc 6, 6, 3
  020cb34  clrldi 6, 6, 32
  020cb38  lfs 1, 0(6)
  020cb3c  stfs 1, 1056(4)
  020cb40  lfs 1, 4(6)
  020cb44  stfs 1, 1060(4)
  020cb48  lfs 1, 8(6)
  020cb4c  stfs 1, 1064(4)
  020cb50  lfs 1, 12(6)
  020cb54  stfs 1, 1068(4)
  020cb58  addic 4, 4, 16
  020cb5c  bdnz 0x20cb24
  020cb60  lhz 3, 18(31)
  020cb64  lis 4, 118
  020cb68  extsh 3, 3
  020cb6c  lwz 4, 27196(4)
  020cb70  cmpw 3, 4
  020cb74  bf 1, 0x20cbd0
  020cb78  subc 3, 3, 4
  020cb7c  extsw 3, 3
  020cb80  bl 0x502730
  020cb84  nop
  020cb88  lis 3, 118
  020cb8c  lwz 4, 1568(31)
  020cb90  fmr 31, 1
  020cb94  lwz 3, 27196(3)
  020cb98  subc 3, 4, 3
  020cb9c  extsw 3, 3
  020cba0  bl 0x502730
  020cba4  nop
  020cba8  lis 3, 118
  020cbac  fdivs 1, 31, 1
  020cbb0  lis 4, 118
  020cbb4  lwz 3, 27216(3)
  020cbb8  lwz 4, 27212(4)
  020cbbc  extsw 3, 3
  020cbc0  extsw 4, 4
  020cbc4  bl 0x5027bc
  020cbc8  nop
  020cbcc  b 0x20cc44
  020cbd0  lis 5, 241
  020cbd4  li 4, 0
  020cbd8  lwz 5, -29124(5)
  020cbdc  cmpw 3, 5
  020cbe0  bf 1, 0x20cc40
  020cbe4  subc 3, 3, 5
  020cbe8  extsw 3, 3
  020cbec  bl 0x502730
  020cbf0  nop
  020cbf4  lis 3, 118
  020cbf8  lis 4, 241
  020cbfc  fmr 31, 1
  020cc00  lwz 3, 27196(3)
  020cc04  lwz 4, -29124(4)
  020cc08  subc 3, 3, 4
  020cc0c  extsw 3, 3
  020cc10  bl 0x502730
  020cc14  nop
  020cc18  lis 3, 118
  020cc1c  fdivs 1, 31, 1
  020cc20  lis 4, 118
  020cc24  lwz 3, 27220(3)
  020cc28  lwz 4, 27216(4)
  020cc2c  extsw 3, 3
  020cc30  extsw 4, 4
  020cc34  bl 0x5027bc
  020cc38  nop
  020cc3c  ori 4, 3, 0
  020cc40  ori 3, 4, 0
  020cc44  stw 3, 20(31)
  020cc48  ld 0, 160(1)
  020cc4c  mtlr 0
  020cc50  lfd 31, 136(1)
  020cc54  ld 31, 128(1)
  020cc58  addi 1, 1, 144
  020cc5c  blr

M1224_0020cc88:   # 0x20cc88, 0x738 bytes
  020cc88  stdu 1, -320(1)
  020cc8c  mflr 0
  020cc90  std 0, 336(1)
  020cc94  stfd 28, 288(1)
  020cc98  stfd 29, 296(1)
  020cc9c  stfd 30, 304(1)
  020cca0  stfd 31, 312(1)
  020cca4  std 30, 272(1)
  020cca8  lis 4, 33
  020ccac  std 31, 280(1)
  020ccb0  lwz 30, 120(3)
  020ccb4  ori 31, 3, 0
  020ccb8  addi 4, 4, -13216
  020ccbc  lfs 2, 16(3)
  020ccc0  lfs 31, 0(4)
  020ccc4  lfs 1, 20(3)
  020ccc8  lwz 3, 28(30)
  020cccc  std 29, 264(1)
  020ccd0  std 28, 256(1)
  020ccd4  std 27, 248(1)
  020ccd8  std 26, 240(1)
  020ccdc  cmpwi 3, 0
  020cce0  bt 2, 0x20d388
  020cce4  lis 3, 33
  020cce8  lis 4, 151
  020ccec  lfs 3, 72(31)
  020ccf0  addi 3, 3, -13216
  020ccf4  addic 4, 4, -25376
  020ccf8  lfs 4, 4(3)
  020ccfc  lfs 5, 8(3)
  020cd00  lfs 6, 12(3)
  020cd04  fadds 4, 3, 4
  020cd08  lfs 8, 132(4)
  020cd0c  fsubs 7, 5, 3
  020cd10  lfs 9, 128(4)
  020cd14  fsubs 10, 8, 1
  020cd18  fsubs 2, 9, 2
  020cd1c  fsubs 1, 6, 3
  020cd20  li 5, 3
  020cd24  fsubs 5, 5, 4
  020cd28  fsub 8, 3, 7
  020cd2c  fsubs 6, 6, 4
  020cd30  fmuls 9, 10, 10
  020cd34  lis 4, 17839
  020cd38  lis 6, 16256
  020cd3c  li 7, 1
  020cd40  ori 4, 4, 57190
  020cd44  fsub 11, 4, 5
  020cd48  fsel 3, 8, 7, 3
  020cd4c  fmadds 8, 2, 2, 9
  020cd50  lfs 7, 16(3)
  020cd54  lfs 9, 20(3)
  020cd58  fsel 4, 11, 5, 4
  020cd5c  fsub 5, 1, 3
  020cd60  lfs 11, 24(3)
  020cd64  fsqrts 8, 8
  020cd68  lfs 12, 28(3)
  020cd6c  stb 5, 216(1)
  020cd70  li 5, 0
  020cd74  stw 6, 200(1)
  020cd78  stb 7, 217(1)
  020cd7c  lis 3, 1
  020cd80  stw 4, 204(1)
  020cd84  ori 3, 3, 1
  020cd88  stw 5, 192(1)
  020cd8c  stw 5, 196(1)
  020cd90  stw 7, 224(1)
  020cd94  fsub 13, 6, 4
  020cd98  fsel 3, 5, 1, 3
  020cd9c  fmr 5, 9
  020cda0  fmr 9, 11
  020cda4  fmr 1, 12
  020cda8  lhz 4, 166(31)
  020cdac  sth 4, 218(1)
  020cdb0  fsel 4, 13, 6, 4
  020cdb4  fmuls 6, 3, 3
  020cdb8  stw 6, 220(1)
  020cdbc  stw 3, 212(1)
  020cdc0  stw 31, 208(1)
  020cdc4  fmuls 11, 4, 4
  020cdc8  fmuls 12, 6, 3
  020cdcc  fmuls 13, 11, 4
  020cdd0  fmuls 0, 6, 12
  020cdd4  fmadds 3, 12, 7, 3
  020cdd8  fmuls 12, 11, 13
  020cddc  fmadds 4, 13, 7, 4
  020cde0  fmuls 7, 6, 0
  020cde4  fmadds 3, 0, 5, 3
  020cde8  fcmpu 0, 8, 31
  020cdec  fmuls 13, 11, 12
  020cdf0  fmadds 12, 12, 5, 4
  020cdf4  fmuls 5, 6, 7
  020cdf8  fmadds 4, 7, 9, 3
  020cdfc  fmuls 8, 11, 13
  020ce00  fmadds 7, 13, 9, 12
  020ce04  fmadds 3, 5, 1, 4
  020ce08  fmadds 6, 8, 1, 7
  020ce0c  fmuls 9, 10, 3
  020ce10  fmadds 2, 2, 6, 9
  020ce14  bt 2, 0x20ce38
  020ce18  fnmadds 4, 5, 1, 4
  020ce1c  fsub 5, 2, 31
  020ce20  fnmadds 1, 8, 1, 7
  020ce24  fsub 2, 2, 31
  020ce28  fsel 3, 5, 3, 4
  020ce2c  fsel 1, 2, 6, 1
  020ce30  stfs 3, 196(1)
  020ce34  stfs 1, 192(1)
  020ce38  lis 3, 165
  020ce3c  lwz 4, 0(30)
  020ce40  slwi 4, 4, 7
  020ce44  lwz 3, 7128(3)
  020ce48  lhz 5, 8(30)
  020ce4c  addc 4, 3, 4
  020ce50  cmpwi 5, 0
  020ce54  clrldi 4, 4, 32
  020ce58  lfs 4, 48(4)
  020ce5c  stfs 4, 112(1)
  020ce60  lfs 3, 52(4)
  020ce64  stfs 3, 116(1)
  020ce68  lfs 2, 56(4)
  020ce6c  stfs 2, 120(1)
  020ce70  lfs 1, 60(4)
  020ce74  stfs 1, 124(1)
  020ce78  bt 2, 0x20cf7c
  020ce7c  lwz 4, 0(30)
  020ce80  slwi 4, 4, 7
  020ce84  addc 3, 3, 4
  020ce88  clrldi 8, 3, 32
  020ce8c  addic 3, 1, 112
  020ce90  addic 4, 1, 128
  020ce94  li 5, 0
  020ce98  lfs 5, 16(8)
  020ce9c  ori 6, 31, 0
  020cea0  fadds 4, 4, 5
  020cea4  li 7, 0
  020cea8  stfs 4, 128(1)
  020ceac  lfs 4, 20(8)
  020ceb0  fadds 3, 3, 4
  020ceb4  stfs 3, 132(1)
  020ceb8  lfs 3, 24(8)
  020cebc  stfs 1, 140(1)
  020cec0  fadds 2, 2, 3
  020cec4  stfs 2, 136(1)
  020cec8  bl 0x57820
  020cecc  nop
  020ced0  cmpwi 3, 0
  020ced4  bt 2, 0x20cf5c
  020ced8  lis 3, 161
  020cedc  lfs 1, 116(1)
  020cee0  addic 3, 3, 2368
  020cee4  lfs 2, 36(3)
  020cee8  lfs 3, 32(3)
  020ceec  fsubs 1, 2, 1
  020cef0  lfs 2, 112(1)
  020cef4  lfs 4, 40(3)
  020cef8  lfs 5, 120(1)
  020cefc  fsubs 3, 3, 2
  020cf00  fsubs 4, 4, 5
  020cf04  lis 3, 33
  020cf08  fmuls 5, 1, 1
  020cf0c  addi 3, 3, -13216
  020cf10  lfs 6, 32(3)
  020cf14  fmadds 5, 3, 3, 5
  020cf18  li 3, 0
  020cf1c  fmadds 5, 4, 4, 5
  020cf20  sth 3, 8(30)
  020cf24  fsqrts 5, 5
  020cf28  fmuls 6, 5, 6
  020cf2c  fdivs 5, 6, 5
  020cf30  fmadds 2, 3, 5, 2
  020cf34  stfs 2, 1584(30)
  020cf38  lfs 2, 116(1)
  020cf3c  fmadds 1, 1, 5, 2
  020cf40  stfs 1, 1588(30)
  020cf44  lfs 1, 120(1)
  020cf48  fmadds 1, 4, 5, 1
  020cf4c  stfs 1, 1592(30)
  020cf50  lfs 1, 124(1)
  020cf54  stfs 1, 1596(30)
  020cf58  b 0x20cf7c
  020cf5c  lfs 1, 128(1)
  020cf60  stfs 1, 1584(30)
  020cf64  lfs 1, 132(1)
  020cf68  stfs 1, 1588(30)
  020cf6c  lfs 1, 136(1)
  020cf70  stfs 1, 1592(30)
  020cf74  lfs 1, 140(1)
  020cf78  stfs 1, 1596(30)
  020cf7c  lhz 3, 10(30)
  020cf80  cmpwi 3, 0
  020cf84  bt 2, 0x20d0a0
  020cf88  lis 3, 165
  020cf8c  lwz 4, 0(30)
  020cf90  slwi 4, 4, 7
  020cf94  li 5, 0
  020cf98  lwz 3, 7128(3)
  020cf9c  lfs 1, 112(1)
  020cfa0  addc 3, 3, 4
  020cfa4  lfs 2, 116(1)
  020cfa8  clrldi 8, 3, 32
  020cfac  addic 3, 1, 112
  020cfb0  addic 4, 1, 144
  020cfb4  ori 6, 31, 0
  020cfb8  lfs 3, 16(8)
  020cfbc  li 7, 0
  020cfc0  fsubs 1, 1, 3
  020cfc4  lfs 3, 120(1)
  020cfc8  lfs 4, 124(1)
  020cfcc  stfs 1, 144(1)
  020cfd0  lfs 1, 20(8)
  020cfd4  fsubs 1, 2, 1
  020cfd8  stfs 1, 148(1)
  020cfdc  lfs 1, 24(8)
  020cfe0  stfs 4, 156(1)
  020cfe4  fsubs 1, 3, 1
  020cfe8  stfs 1, 152(1)
  020cfec  bl 0x57820
  020cff0  nop
  020cff4  cmpwi 3, 0
  020cff8  bt 2, 0x20d080
  020cffc  lis 3, 161
  020d000  lfs 1, 116(1)
  020d004  addic 3, 3, 2368
  020d008  lfs 2, 36(3)
  020d00c  lfs 3, 32(3)
  020d010  fsubs 1, 2, 1
  020d014  lfs 2, 112(1)
  020d018  lfs 4, 40(3)
  020d01c  lfs 5, 120(1)
  020d020  fsubs 3, 3, 2
  020d024  fsubs 4, 4, 5
  020d028  lis 3, 33
  020d02c  fmuls 5, 1, 1
  020d030  addi 3, 3, -13216
  020d034  lfs 6, 32(3)
  020d038  fmadds 5, 3, 3, 5
  020d03c  li 3, 0
  020d040  sth 3, 10(30)
  020d044  fmadds 5, 4, 4, 5
  020d048  fsqrts 5, 5
  020d04c  fmuls 6, 5, 6
  020d050  fdivs 5, 6, 5
  020d054  fmadds 2, 3, 5, 2
  020d058  stfs 2, 1600(30)
  020d05c  lfs 2, 116(1)
  020d060  fmadds 1, 1, 5, 2
  020d064  stfs 1, 1604(30)
  020d068  lfs 1, 120(1)
  020d06c  fmadds 1, 4, 5, 1
  020d070  stfs 1, 1608(30)
  020d074  lfs 1, 124(1)
  020d078  stfs 1, 1612(30)
  020d07c  b 0x20d0a0
  020d080  lfs 1, 144(1)
  020d084  stfs 1, 1600(30)
  020d088  lfs 1, 148(1)
  020d08c  stfs 1, 1604(30)
  020d090  lfs 1, 152(1)
  020d094  stfs 1, 1608(30)
  020d098  lfs 1, 156(1)
  020d09c  stfs 1, 1612(30)
  020d0a0  lfs 1, 1584(30)
  020d0a4  lis 29, 165
  020d0a8  stfs 1, 128(1)
  020d0ac  lfs 2, 1588(30)
  020d0b0  stfs 2, 132(1)
  020d0b4  lfs 3, 1592(30)
  020d0b8  stfs 3, 136(1)
  020d0bc  lfs 4, 1596(30)
  020d0c0  stfs 4, 140(1)
  020d0c4  lfs 5, 1600(30)
  020d0c8  lwz 3, 0(30)
  020d0cc  stfs 5, 144(1)
  020d0d0  lfs 6, 1604(30)
  020d0d4  slwi 3, 3, 7
  020d0d8  lwz 4, 7128(29)
  020d0dc  stfs 6, 148(1)
  020d0e0  addc 3, 4, 3
  020d0e4  lfs 7, 1608(30)
  020d0e8  clrldi 3, 3, 32
  020d0ec  stfs 7, 152(1)
  020d0f0  lfs 8, 1612(30)
  020d0f4  stfs 8, 156(1)
  020d0f8  lfs 9, 4(3)
  020d0fc  lfs 10, 0(3)
  020d100  fmuls 11, 9, 9
  020d104  lfs 12, 8(3)
  020d108  lfs 13, 28(30)
  020d10c  stfs 4, 172(1)
  020d110  stfs 8, 188(1)
  020d114  fmadds 11, 10, 10, 11
  020d118  addic 28, 1, 160
  020d11c  addic 27, 1, 176
  020d120  addic 26, 1, 192
  020d124  fmadds 11, 12, 12, 11
  020d128  ori 3, 28, 0
  020d12c  ori 4, 27, 0
  020d130  li 5, 1
  020d134  fsqrts 11, 11
  020d138  ori 6, 31, 0
  020d13c  ori 7, 26, 0
  020d140  fdivs 4, 13, 11
  020d144  fsub 8, 31, 11
  020d148  fsub 13, 31, 11
  020d14c  fsub 0, 31, 11
  020d150  fsub 30, 11, 31
  020d154  fsub 29, 11, 31
  020d158  fsub 11, 11, 31
  020d15c  fmuls 12, 12, 4
  020d160  fmuls 9, 9, 4
  020d164  fmuls 4, 10, 4
  020d168  fsel 8, 8, 31, 12
  020d16c  fsel 10, 13, 31, 9
  020d170  fsel 13, 0, 31, 4
  020d174  fsel 30, 30, 8, 12
  020d178  fsel 29, 29, 10, 9
  020d17c  fsel 28, 11, 13, 4
  020d180  fadds 3, 3, 30
  020d184  fadds 2, 2, 29
  020d188  fadds 1, 1, 28
  020d18c  fadds 4, 5, 28
  020d190  fadds 5, 6, 29
  020d194  fadds 6, 7, 30
  020d198  stfs 3, 168(1)
  020d19c  stfs 2, 164(1)
  020d1a0  stfs 1, 160(1)
  020d1a4  stfs 4, 176(1)
  020d1a8  stfs 5, 180(1)
  020d1ac  stfs 6, 184(1)
  020d1b0  bl 0x57820
  020d1b4  nop
  020d1b8  lfs 1, 128(1)
  020d1bc  ori 3, 28, 0
  020d1c0  lfs 2, 132(1)
  020d1c4  ori 4, 27, 0
  020d1c8  fsubs 1, 1, 28
  020d1cc  lfs 3, 136(1)
  020d1d0  fsubs 2, 2, 29
  020d1d4  lfs 4, 144(1)
  020d1d8  fsubs 3, 3, 30
  020d1dc  lfs 5, 148(1)
  020d1e0  fsubs 4, 4, 28
  020d1e4  lfs 6, 152(1)
  020d1e8  fsubs 5, 5, 29
  020d1ec  lfs 7, 140(1)
  020d1f0  fsubs 6, 6, 30
  020d1f4  lfs 8, 156(1)
  020d1f8  stfs 7, 172(1)
  020d1fc  li 5, 1
  020d200  stfs 8, 188(1)
  020d204  ori 6, 31, 0
  020d208  ori 7, 26, 0
  020d20c  stfs 1, 160(1)
  020d210  stfs 2, 164(1)
  020d214  stfs 3, 168(1)
  020d218  stfs 4, 176(1)
  020d21c  stfs 5, 180(1)
  020d220  stfs 6, 184(1)
  020d224  bl 0x57820
  020d228  nop
  020d22c  lwz 3, 0(30)
  020d230  lwz 4, 7128(29)
  020d234  slwi 3, 3, 7
  020d238  addc 3, 4, 3
  020d23c  clrldi 3, 3, 32
  020d240  lfs 1, 36(3)
  020d244  lfs 2, 32(3)
  020d248  fmuls 3, 1, 1
  020d24c  lfs 4, 40(3)
  020d250  lfs 5, 28(30)
  020d254  lfs 6, 128(1)
  020d258  lfs 7, 132(1)
  020d25c  lfs 8, 136(1)
  020d260  fmadds 3, 2, 2, 3
  020d264  lfs 9, 144(1)
  020d268  lfs 10, 148(1)
  020d26c  lfs 11, 152(1)
  020d270  lfs 12, 140(1)
  020d274  lfs 13, 156(1)
  020d278  fmadds 3, 4, 4, 3
  020d27c  stfs 12, 172(1)
  020d280  stfs 13, 188(1)
  020d284  ori 3, 28, 0
  020d288  ori 4, 27, 0
  020d28c  li 5, 1
  020d290  fsqrts 3, 3
  020d294  ori 6, 31, 0
  020d298  ori 7, 26, 0
  020d29c  fdivs 5, 5, 3
  020d2a0  fsub 12, 31, 3
  020d2a4  fsub 13, 31, 3
  020d2a8  fsub 0, 31, 3
  020d2ac  fsub 30, 3, 31
  020d2b0  fsub 29, 3, 31
  020d2b4  fsub 3, 3, 31
  020d2b8  fmuls 4, 4, 5
  020d2bc  fmuls 1, 1, 5
  020d2c0  fmuls 2, 2, 5
  020d2c4  fsel 5, 12, 31, 4
  020d2c8  fsel 12, 13, 31, 1
  020d2cc  fsel 13, 0, 31, 2
  020d2d0  fsel 31, 30, 5, 4
  020d2d4  fsel 30, 29, 12, 1
  020d2d8  fsel 29, 3, 13, 2
  020d2dc  fadds 1, 8, 31
  020d2e0  fadds 2, 7, 30
  020d2e4  fadds 3, 6, 29
  020d2e8  fadds 4, 9, 29
  020d2ec  fadds 5, 10, 30
  020d2f0  fadds 6, 11, 31
  020d2f4  stfs 1, 168(1)
  020d2f8  stfs 2, 164(1)
  020d2fc  stfs 3, 160(1)
  020d300  stfs 4, 176(1)
  020d304  stfs 5, 180(1)
  020d308  stfs 6, 184(1)
  020d30c  bl 0x57820
  020d310  nop
  020d314  lfs 1, 128(1)
  020d318  lfs 2, 132(1)
  020d31c  ori 3, 28, 0
  020d320  fsubs 1, 1, 29
  020d324  lfs 3, 136(1)
  020d328  fsubs 2, 2, 30
  020d32c  lfs 4, 144(1)
  020d330  fsubs 3, 3, 31
  020d334  lfs 5, 148(1)
  020d338  fsubs 4, 4, 29
  020d33c  lfs 6, 152(1)
  020d340  fsubs 5, 5, 30
  020d344  lfs 7, 140(1)
  020d348  fsubs 6, 6, 31
  020d34c  lfs 8, 156(1)
  020d350  stfs 7, 172(1)
  020d354  ori 4, 27, 0
  020d358  stfs 8, 188(1)
  020d35c  li 5, 1
  020d360  ori 6, 31, 0
  020d364  ori 7, 26, 0
  020d368  stfs 1, 160(1)
  020d36c  stfs 2, 164(1)
  020d370  stfs 3, 168(1)
  020d374  stfs 4, 176(1)
  020d378  stfs 5, 180(1)
  020d37c  stfs 6, 184(1)
  020d380  bl 0x57820
  020d384  nop
  020d388  ld 0, 336(1)
  020d38c  mtlr 0
  020d390  lfd 28, 288(1)
  020d394  lfd 29, 296(1)
  020d398  lfd 30, 304(1)
  020d39c  lfd 31, 312(1)
  020d3a0  ld 26, 240(1)
  020d3a4  ld 27, 248(1)
  020d3a8  ld 28, 256(1)
  020d3ac  ld 29, 264(1)
  020d3b0  ld 30, 272(1)
  020d3b4  ld 31, 280(1)
  020d3b8  addi 1, 1, 320
  020d3bc  blr

M1224_0020d3e0:   # 0x20d3e0, 0x914 bytes
  020d3e0  stdu 1, -1456(1)
  020d3e4  mflr 0
  020d3e8  std 0, 1472(1)
  020d3ec  stfd 28, 1424(1)
  020d3f0  stfd 29, 1432(1)
  020d3f4  stfd 30, 1440(1)
  020d3f8  stfd 31, 1448(1)
  020d3fc  std 30, 1408(1)
  020d400  std 31, 1416(1)
  020d404  lis 30, 165
  020d408  lwz 31, 120(3)
  020d40c  lis 4, 16256
  020d410  std 28, 1392(1)
  020d414  lis 5, 118
  020d418  lis 28, 33
  020d41c  lwz 3, 7128(30)
  020d420  addi 28, 28, -11328
  020d424  lwz 6, 0(31)
  020d428  slwi 6, 6, 7
  020d42c  addc 3, 3, 6
  020d430  clrldi 3, 3, 32
  020d434  stw 4, 60(3)
  020d438  lwz 3, 27188(5)
  020d43c  extsw 3, 3
  020d440  std 3, 1312(1)
  020d444  lis 3, 114
  020d448  lfs 29, 0(28)
  020d44c  lfs 1, -3056(3)
  020d450  lfd 2, 1312(1)
  020d454  fcfid 2, 2
  020d458  lis 3, 118
  020d45c  lwz 3, 27192(3)
  020d460  extsw 3, 3
  020d464  frsp 2, 2
  020d468  fadds 2, 2, 29
  020d46c  fmuls 2, 1, 2
  020d470  fctiwz 2, 2
  020d474  stfd 2, 1312(1)
  020d478  lwz 4, 1316(1)
  020d47c  std 3, 1312(1)
  020d480  extsw 3, 4
  020d484  lfd 2, 1312(1)
  020d488  fcfid 2, 2
  020d48c  frsp 2, 2
  020d490  fadds 2, 2, 29
  020d494  fmuls 1, 1, 2
  020d498  fctiwz 1, 1
  020d49c  stfd 1, 1312(1)
  020d4a0  lwz 4, 1316(1)
  020d4a4  std 29, 1400(1)
  020d4a8  std 27, 1384(1)
  020d4ac  std 26, 1376(1)
  020d4b0  std 25, 1368(1)
  020d4b4  std 24, 1360(1)
  020d4b8  std 23, 1352(1)
  020d4bc  std 22, 1344(1)
  020d4c0  std 21, 1336(1)
  020d4c4  std 20, 1328(1)
  020d4c8  extsw 4, 4
  020d4cc  bl 0xfe484
  020d4d0  nop
  020d4d4  lwz 4, 0(31)
  020d4d8  lwz 5, 7128(30)
  020d4dc  slwi 4, 4, 7
  020d4e0  addc 4, 5, 4
  020d4e4  clrldi 4, 4, 32
  020d4e8  li 30, 0
  020d4ec  lfs 1, 20(4)
  020d4f0  lfs 2, 16(4)
  020d4f4  fmuls 1, 1, 1
  020d4f8  lfs 3, 24(4)
  020d4fc  addic 23, 1, 288
  020d500  extsh 4, 3
  020d504  sth 3, 18(31)
  020d508  lis 25, 118
  020d50c  ori 26, 30, 0
  020d510  addic 22, 1, 800
  020d514  stw 4, 1568(31)
  020d518  fmadds 1, 2, 2, 1
  020d51c  lis 24, 114
  020d520  fmadds 1, 3, 3, 1
  020d524  fsqrts 31, 1
  020d528  lfs 1, 4(28)
  020d52c  lfs 28, 8(28)
  020d530  fmuls 31, 31, 1
  020d534  ori 3, 30, 0
  020d538  bl 0x502730
  020d53c  nop
  020d540  fmr 30, 1
  020d544  li 3, 31
  020d548  bl 0x502730
  020d54c  nop
  020d550  fdivs 30, 30, 1
  020d554  slwi 27, 30, 4
  020d558  cmpwi 30, 3
  020d55c  addc 3, 27, 23
  020d560  addc 29, 27, 22
  020d564  clrldi 3, 3, 32
  020d568  clrldi 29, 29, 32
  020d56c  fsubs 30, 29, 30
  020d570  bt 0, 0x20d57c
  020d574  cmpwi 30, 28
  020d578  bf 1, 0x20d5a0
  020d57c  stw 26, 12(3)
  020d580  stw 26, 8(3)
  020d584  stw 26, 4(3)
  020d588  stw 26, 0(3)
  020d58c  stw 26, 12(29)
  020d590  stw 26, 8(29)
  020d594  stw 26, 4(29)
  020d598  stw 26, 0(29)
  020d59c  b 0x20d5d0
  020d5a0  lis 4, 118
  020d5a4  fmr 1, 28
  020d5a8  lfs 2, 27288(4)
  020d5ac  bl 0xfea60
  020d5b0  nop
  020d5b4  lfs 2, 27292(25)
  020d5b8  lfs 3, -3052(24)
  020d5bc  ori 3, 29, 0
  020d5c0  fmr 1, 28
  020d5c4  fmuls 2, 2, 3
  020d5c8  bl 0xfea60
  020d5cc  nop
  020d5d0  addc 3, 27, 1
  020d5d4  lis 4, 16256
  020d5d8  clrldi 3, 3, 32
  020d5dc  addic 30, 30, 1
  020d5e0  extsw 30, 30
  020d5e4  lfs 1, 292(3)
  020d5e8  cmpwi 30, 32
  020d5ec  stw 4, 300(3)
  020d5f0  fmadds 1, 30, 31, 1
  020d5f4  stfs 1, 292(3)
  020d5f8  bt 0, 0x20d534
  020d5fc  ori 3, 26, 0
  020d600  ori 4, 31, 0
  020d604  lfs 1, 12(28)
  020d608  addic 8, 1, 816
  020d60c  addic 5, 1, 272
  020d610  addic 6, 1, 304
  020d614  addic 7, 1, 784
  020d618  cmpwi 3, 0
  020d61c  cmpwi 1, 3, 31
  020d620  bt 2, 0x20d628
  020d624  bf 6, 0x20d668
  020d628  lfs 2, 0(23)
  020d62c  stfs 2, 32(4)
  020d630  lfs 2, 4(23)
  020d634  stfs 2, 36(4)
  020d638  lfs 2, 8(23)
  020d63c  stfs 2, 40(4)
  020d640  lfs 2, 12(23)
  020d644  stfs 2, 44(4)
  020d648  lfs 2, 0(22)
  020d64c  stfs 2, 544(4)
  020d650  lfs 2, 4(22)
  020d654  stfs 2, 548(4)
  020d658  lfs 2, 8(22)
  020d65c  stfs 2, 552(4)
  020d660  lfs 2, 12(22)
  020d664  b 0x20d71c
  020d668  lfs 2, 0(5)
  020d66c  lfs 3, 0(23)
  020d670  lfs 4, 4(5)
  020d674  lfs 5, 4(23)
  020d678  fadds 2, 2, 3
  020d67c  lfs 3, 8(5)
  020d680  lfs 6, 8(23)
  020d684  fadds 4, 4, 5
  020d688  lfs 5, 0(6)
  020d68c  fadds 3, 3, 6
  020d690  lfs 6, 4(6)
  020d694  lfs 7, 8(6)
  020d698  lfs 8, 12(5)
  020d69c  stfs 8, 44(4)
  020d6a0  fadds 2, 2, 5
  020d6a4  fadds 4, 4, 6
  020d6a8  fadds 3, 3, 7
  020d6ac  fmuls 2, 2, 1
  020d6b0  fmuls 4, 4, 1
  020d6b4  fmuls 3, 3, 1
  020d6b8  stfs 2, 32(4)
  020d6bc  stfs 4, 36(4)
  020d6c0  stfs 3, 40(4)
  020d6c4  lfs 2, 0(7)
  020d6c8  lfs 3, 0(22)
  020d6cc  lfs 4, 4(7)
  020d6d0  lfs 5, 4(22)
  020d6d4  fadds 2, 2, 3
  020d6d8  lfs 3, 8(7)
  020d6dc  lfs 6, 8(22)
  020d6e0  fadds 4, 4, 5
  020d6e4  fadds 3, 3, 6
  020d6e8  lfs 5, 0(8)
  020d6ec  lfs 6, 4(8)
  020d6f0  lfs 7, 8(8)
  020d6f4  fadds 5, 2, 5
  020d6f8  lfs 2, 12(7)
  020d6fc  fadds 4, 4, 6
  020d700  fadds 3, 3, 7
  020d704  fmuls 5, 5, 1
  020d708  fmuls 4, 4, 1
  020d70c  fmuls 3, 3, 1
  020d710  stfs 5, 544(4)
  020d714  stfs 4, 548(4)
  020d718  stfs 3, 552(4)
  020d71c  addic 3, 3, 1
  020d720  stfs 2, 556(4)
  020d724  addic 5, 5, 16
  020d728  cmpwi 3, 32
  020d72c  addic 23, 23, 16
  020d730  addic 6, 6, 16
  020d734  addic 7, 7, 16
  020d738  addic 22, 22, 16
  020d73c  addic 8, 8, 16
  020d740  addic 4, 4, 16
  020d744  bt 0, 0x20d618
  020d748  ori 27, 31, 0
  020d74c  ori 30, 26, 0
  020d750  ori 20, 27, 0
  020d754  lis 4, 118
  020d758  addic 3, 1, 128
  020d75c  lfs 2, 27288(4)
  020d760  fmr 1, 2
  020d764  bl 0xfea60
  020d768  nop
  020d76c  extsw 3, 30
  020d770  addic 29, 30, 1
  020d774  std 3, 1312(1)
  020d778  extsw 3, 29
  020d77c  lfs 2, 16(28)
  020d780  lfd 1, 1312(1)
  020d784  fcfid 1, 1
  020d788  std 3, 1312(1)
  020d78c  frsp 1, 1
  020d790  fmuls 1, 1, 2
  020d794  lfd 3, 1312(1)
  020d798  fcfid 3, 3
  020d79c  frsp 3, 3
  020d7a0  fmuls 2, 3, 2
  020d7a4  bl 0xfcbe8
  020d7a8  nop
  020d7ac  bl 0x502758
  020d7b0  nop
  020d7b4  addic 3, 3, 4
  020d7b8  addic 4, 31, 32
  020d7bc  sldi 5, 3, 4
  020d7c0  addc 4, 5, 4
  020d7c4  stb 3, 24(27)
  020d7c8  li 30, 1
  020d7cc  clrldi 3, 4, 32
  020d7d0  addic 4, 31, 544
  020d7d4  addic 23, 20, 1376
  020d7d8  addc 4, 5, 4
  020d7dc  addic 22, 20, 1120
  020d7e0  lfs 1, 0(3)
  020d7e4  clrldi 4, 4, 32
  020d7e8  addic 21, 20, 1056
  020d7ec  stfs 1, 1056(20)
  020d7f0  lfs 1, 4(3)
  020d7f4  stfs 1, 1060(20)
  020d7f8  lfs 1, 8(3)
  020d7fc  stfs 1, 1064(20)
  020d800  lfs 1, 12(3)
  020d804  stfs 1, 1068(20)
  020d808  lfs 1, 0(4)
  020d80c  stfs 1, 1312(20)
  020d810  lfs 1, 4(4)
  020d814  stfs 1, 1316(20)
  020d818  lfs 1, 8(4)
  020d81c  stfs 1, 1320(20)
  020d820  lfs 1, 12(4)
  020d824  stfs 1, 1324(20)
  020d828  lfs 31, 20(28)
  020d82c  fmr 2, 31
  020d830  addic 3, 1, 144
  020d834  fmr 1, 31
  020d838  bl 0xfea60
  020d83c  nop
  020d840  lfs 2, 27292(25)
  020d844  fmr 1, 28
  020d848  lfs 3, -3052(24)
  020d84c  ori 3, 23, 0
  020d850  fmuls 2, 2, 3
  020d854  bl 0xfea60
  020d858  nop
  020d85c  lfs 1, 0(21)
  020d860  lfs 2, 128(1)
  020d864  fadds 1, 1, 2
  020d868  addic 30, 30, 1
  020d86c  addic 23, 23, 64
  020d870  cmpwi 30, 4
  020d874  stfs 1, 0(22)
  020d878  lfs 2, 4(21)
  020d87c  lfs 3, 132(1)
  020d880  fadds 2, 2, 3
  020d884  stfs 2, 4(22)
  020d888  lfs 3, 8(21)
  020d88c  lfs 4, 136(1)
  020d890  fadds 3, 3, 4
  020d894  stfs 3, 8(22)
  020d898  lfs 4, 12(21)
  020d89c  stfs 4, 12(22)
  020d8a0  lfs 5, 144(1)
  020d8a4  addic 21, 21, 64
  020d8a8  fadds 1, 1, 5
  020d8ac  stfs 1, 0(22)
  020d8b0  lfs 1, 148(1)
  020d8b4  fadds 1, 2, 1
  020d8b8  stfs 1, 4(22)
  020d8bc  lfs 1, 152(1)
  020d8c0  stfs 4, 12(22)
  020d8c4  fadds 1, 3, 1
  020d8c8  stfs 1, 8(22)
  020d8cc  addic 22, 22, 64
  020d8d0  bt 0, 0x20d82c
  020d8d4  ori 30, 29, 0
  020d8d8  addic 27, 27, 1
  020d8dc  cmpwi 30, 4
  020d8e0  addic 20, 20, 16
  020d8e4  bt 0, 0x20d754
  020d8e8  lis 3, 165
  020d8ec  lwz 5, 0(31)
  020d8f0  lis 4, 149
  020d8f4  addic 4, 4, 5056
  020d8f8  lwz 30, 7128(3)
  020d8fc  slwi 3, 5, 7
  020d900  addc 30, 30, 3
  020d904  lfs 1, 324(4)
  020d908  lfs 2, 320(4)
  020d90c  clrldi 3, 30, 32
  020d910  lfs 3, 52(3)
  020d914  lfs 4, 48(3)
  020d918  fsubs 1, 3, 1
  020d91c  fsubs 2, 4, 2
  020d920  fmuls 1, 1, 1
  020d924  fmadds 1, 2, 2, 1
  020d928  lfs 2, 24(28)
  020d92c  fsqrts 1, 1
  020d930  fcmpu 0, 1, 2
  020d934  bt 0, 0x20dca4
  020d938  addic 4, 30, 112
  020d93c  addic 3, 1, 224
  020d940  clrldi 4, 4, 32
  020d944  bl 0x500ca4
  020d948  nop
  020d94c  lis 3, 165
  020d950  lwz 4, 0(31)
  020d954  ori 30, 26, 0
  020d958  ori 29, 31, 0
  020d95c  slwi 4, 4, 7
  020d960  lwz 3, 7128(3)
  020d964  addc 3, 3, 4
  020d968  clrldi 3, 3, 32
  020d96c  lfs 1, 48(3)
  020d970  stfs 1, 272(1)
  020d974  lfs 2, 52(3)
  020d978  stfs 2, 276(1)
  020d97c  lfs 3, 56(3)
  020d980  stfs 3, 280(1)
  020d984  lfs 4, 60(3)
  020d988  stfs 4, 284(1)
  020d98c  lfs 5, 240(1)
  020d990  lfs 6, 36(29)
  020d994  lfs 7, 244(1)
  020d998  lfs 8, 224(1)
  020d99c  fmuls 5, 5, 6
  020d9a0  lfs 9, 32(29)
  020d9a4  fmuls 7, 7, 6
  020d9a8  lfs 10, 248(1)
  020d9ac  lfs 11, 228(1)
  020d9b0  lfs 12, 252(1)
  020d9b4  fmuls 10, 10, 6
  020d9b8  lfs 13, 232(1)
  020d9bc  fmuls 6, 12, 6
  020d9c0  lfs 12, 256(1)
  020d9c4  lfs 0, 40(29)
  020d9c8  fmadds 5, 8, 9, 5
  020d9cc  lfs 8, 236(1)
  020d9d0  fmadds 7, 11, 9, 7
  020d9d4  lfs 11, 260(1)
  020d9d8  fmadds 10, 13, 9, 10
  020d9dc  lfs 31, 264(1)
  020d9e0  lfs 13, 44(29)
  020d9e4  fmadds 6, 8, 9, 6
  020d9e8  lfs 8, 268(1)
  020d9ec  lis 4, 118
  020d9f0  li 3, 2
  020d9f4  fmadds 5, 12, 0, 5
  020d9f8  fmadds 7, 11, 0, 7
  020d9fc  fmadds 9, 31, 0, 10
  020da00  fmadds 6, 8, 0, 6
  020da04  fmadds 1, 1, 13, 5
  020da08  fmadds 2, 2, 13, 7
  020da0c  fmadds 3, 3, 13, 9
  020da10  fmadds 4, 4, 13, 6
  020da14  stfs 1, 160(1)
  020da18  stfs 2, 164(1)
  020da1c  stfs 3, 168(1)
  020da20  stfs 4, 172(1)
  020da24  lfs 1, 544(29)
  020da28  stfs 1, 176(1)
  020da2c  lfs 1, 548(29)
  020da30  stfs 1, 180(1)
  020da34  lfs 1, 552(29)
  020da38  lfs 2, 27312(4)
  020da3c  stfs 1, 184(1)
  020da40  lfs 1, 556(29)
  020da44  stfs 1, 188(1)
  020da48  stfs 2, 188(1)
  020da4c  bl 0xfc620
  020da50  nop
  020da54  lis 4, 118
  020da58  lis 5, 118
  020da5c  cmpwi 3, 0
  020da60  lwz 3, 27300(4)
  020da64  lwz 4, 27304(5)
  020da68  bt 2, 0x20da78
  020da6c  lis 5, 118
  020da70  lwz 5, 27320(5)
  020da74  b 0x20da80
  020da78  lis 5, 118
  020da7c  lwz 5, 27324(5)
  020da80  extsw 27, 3
  020da84  li 3, 10
  020da88  extsw 28, 5
  020da8c  extsw 25, 4
  020da90  srawi 24, 30, 1
  020da94  bl 0xfc620
  020da98  nop
  020da9c  addic 3, 3, 20
  020daa0  extsw 3, 3
  020daa4  addic 4, 1, 176
  020daa8  std 3, 1312(1)
  020daac  lis 3, 114
  020dab0  ori 6, 27, 0
  020dab4  ori 7, 25, 0
  020dab8  ori 8, 24, 0
  020dabc  lfs 1, -3056(3)
  020dac0  std 28, 112(1)
  020dac4  lfd 2, 1312(1)
  020dac8  fcfid 2, 2
  020dacc  addic 3, 1, 160
  020dad0  li 9, 15
  020dad4  ori 5, 4, 0
  020dad8  frsp 2, 2
  020dadc  fadds 2, 2, 29
  020dae0  fmuls 1, 1, 2
  020dae4  fctiwz 1, 1
  020dae8  stfd 1, 1312(1)
  020daec  lwz 10, 1316(1)
  020daf0  extsw 10, 10
  020daf4  bl 0x1206e8
  020daf8  nop
  020dafc  addic 30, 30, 8
  020db00  lfs 1, 272(1)
  020db04  addic 29, 29, 128
  020db08  lfs 2, 276(1)
  020db0c  cmpwi 30, 32
  020db10  lfs 3, 280(1)
  020db14  lfs 4, 284(1)
  020db18  bt 0, 0x20d98c
  020db1c  ori 30, 31, 0
  020db20  lfs 1, 240(1)
  020db24  lfs 2, 1252(30)
  020db28  lfs 3, 244(1)
  020db2c  lfs 4, 224(1)
  020db30  lfs 5, 1248(30)
  020db34  fmuls 1, 1, 2
  020db38  lfs 6, 248(1)
  020db3c  fmuls 3, 3, 2
  020db40  lfs 7, 228(1)
  020db44  lfs 8, 252(1)
  020db48  fmuls 6, 6, 2
  020db4c  lfs 9, 232(1)
  020db50  fmuls 2, 8, 2
  020db54  lfs 8, 256(1)
  020db58  lis 4, 118
  020db5c  li 3, 2
  020db60  fmadds 1, 4, 5, 1
  020db64  lfs 4, 1256(30)
  020db68  fmadds 3, 7, 5, 3
  020db6c  lfs 7, 236(1)
  020db70  fmadds 6, 9, 5, 6
  020db74  lfs 10, 260(1)
  020db78  fmadds 2, 7, 5, 2
  020db7c  lfs 11, 272(1)
  020db80  lfs 9, 264(1)
  020db84  lfs 12, 1260(30)
  020db88  lfs 5, 268(1)
  020db8c  lfs 7, 276(1)
  020db90  fmadds 1, 8, 4, 1
  020db94  lfs 8, 280(1)
  020db98  fmadds 3, 10, 4, 3
  020db9c  fmadds 6, 9, 4, 6
  020dba0  fmadds 2, 5, 4, 2
  020dba4  lfs 9, 284(1)
  020dba8  fmadds 1, 11, 12, 1
  020dbac  fmadds 3, 7, 12, 3
  020dbb0  fmadds 4, 8, 12, 6
  020dbb4  fmadds 2, 9, 12, 2
  020dbb8  stfs 1, 192(1)
  020dbbc  stfs 3, 196(1)
  020dbc0  stfs 4, 200(1)
  020dbc4  stfs 2, 204(1)
  020dbc8  lfs 1, 1504(30)
  020dbcc  stfs 1, 208(1)
  020dbd0  lfs 1, 1508(30)
  020dbd4  stfs 1, 212(1)
  020dbd8  lfs 1, 1512(30)
  020dbdc  lfs 2, 27312(4)
  020dbe0  stfs 1, 216(1)
  020dbe4  lfs 1, 1516(30)
  020dbe8  stfs 1, 220(1)
  020dbec  stfs 2, 220(1)
  020dbf0  bl 0xfc620
  020dbf4  nop
  020dbf8  lis 4, 118
  020dbfc  lbz 6, 24(31)
  020dc00  lis 5, 118
  020dc04  li 3, 10
  020dc08  srwi 29, 6, 1
  020dc0c  lwz 4, 27300(4)
  020dc10  lwz 5, 27304(5)
  020dc14  extsw 28, 4
  020dc18  extsw 27, 5
  020dc1c  bl 0xfc620
  020dc20  nop
  020dc24  addic 3, 3, 20
  020dc28  lis 5, 118
  020dc2c  extsw 3, 3
  020dc30  addic 4, 1, 208
  020dc34  std 3, 1312(1)
  020dc38  lis 3, 114
  020dc3c  ori 6, 28, 0
  020dc40  ori 7, 27, 0
  020dc44  ori 8, 29, 0
  020dc48  lfs 1, -3056(3)
  020dc4c  lwz 5, 27324(5)
  020dc50  lfd 2, 1312(1)
  020dc54  addic 3, 1, 192
  020dc58  fcfid 2, 2
  020dc5c  extsw 5, 5
  020dc60  li 9, 15
  020dc64  std 5, 112(1)
  020dc68  ori 5, 4, 0
  020dc6c  frsp 2, 2
  020dc70  fadds 2, 2, 29
  020dc74  fmuls 1, 1, 2
  020dc78  fctiwz 1, 1
  020dc7c  stfd 1, 1312(1)
  020dc80  lwz 10, 1316(1)
  020dc84  extsw 10, 10
  020dc88  bl 0x1206e8
  020dc8c  nop
  020dc90  addic 26, 26, 1
  020dc94  addic 31, 31, 1
  020dc98  cmpwi 26, 2
  020dc9c  addic 30, 30, 16
  020dca0  bt 0, 0x20db20
  020dca4  ld 0, 1472(1)
  020dca8  mtlr 0
  020dcac  lfd 28, 1424(1)
  020dcb0  lfd 29, 1432(1)
  020dcb4  lfd 30, 1440(1)
  020dcb8  lfd 31, 1448(1)
  020dcbc  ld 20, 1328(1)
  020dcc0  ld 21, 1336(1)
  020dcc4  ld 22, 1344(1)
  020dcc8  ld 23, 1352(1)
  020dccc  ld 24, 1360(1)
  020dcd0  ld 25, 1368(1)
  020dcd4  ld 26, 1376(1)
  020dcd8  ld 27, 1384(1)
  020dcdc  ld 28, 1392(1)
  020dce0  ld 29, 1400(1)
  020dce4  ld 30, 1408(1)
  020dce8  ld 31, 1416(1)
  020dcec  addi 1, 1, 1456
  020dcf0  blr

UpdateMoby_1224:   # 0x20dd00, 0x3f8 bytes
  020dd00  stdu 1, -144(1)
  020dd04  mflr 0
  020dd08  std 0, 160(1)
  020dd0c  std 31, 136(1)
  020dd10  ori 31, 3, 0
  020dd14  std 30, 128(1)
  020dd18  lbz 3, 32(31)
  020dd1c  lwz 30, 120(31)
  020dd20  cmpwi 3, 0
  020dd24  bt 2, 0x20dd74
  020dd28  lfs 1, 16(31)
  020dd2c  lis 4, 33
  020dd30  lfs 2, 20(31)
  020dd34  addic 3, 1, 112
  020dd38  stfs 1, 112(1)
  020dd3c  addi 4, 4, -8972
  020dd40  lfs 1, 24(31)
  020dd44  stfs 2, 116(1)
  020dd48  lfs 2, 28(31)
  020dd4c  stfs 1, 120(1)
  020dd50  stfs 2, 124(1)
  020dd54  lfs 1, 1572(30)
  020dd58  stfs 1, 124(1)
  020dd5c  lfs 1, 0(4)
  020dd60  bl 0x502910
  020dd64  nop
  020dd68  cmpwi 3, 0
  020dd6c  bt 0, 0x20e0e0
  020dd70  lbz 3, 32(31)
  020dd74  lis 4, 241
  020dd78  cmpwi 1, 3, 1
  020dd7c  lwz 4, -29120(4)
  020dd80  cmpwi 4, 0
  020dd84  bf 2, 0x20e0e0
  020dd88  cmpwi 6, 3, -1
  020dd8c  cmpwi 7, 3, 2
  020dd90  bt 5, 0x20dda4
  020dd94  cmpwi 1, 3, 0
  020dd98  bf 25, 0x20e024
  020dd9c  bf 5, 0x20ddb4
  020dda0  b 0x20de64
  020dda4  cmpwi 1, 3, 3
  020dda8  bf 29, 0x20de98
  020ddac  bf 5, 0x20df20
  020ddb0  b 0x20e024
  020ddb4  ori 3, 31, 0
  020ddb8  bl 0x20d3e0
  020ddbc  li 3, 12
  020ddc0  vspltisw 4, -1
  020ddc4  lis 5, 33
  020ddc8  addi 4, 3, 16
  020ddcc  vslw 4, 4, 4
  020ddd0  lvlx 2, 3, 30
  020ddd4  addi 3, 5, -8972
  020ddd8  lvrx 3, 4, 30
  020dddc  li 4, 4
  020dde0  vor 2, 2, 3
  020dde4  lis 5, 165
  020dde8  vcfsx 2, 2, 0
  020ddec  lvlx 3, 4, 3
  020ddf0  lis 3, 114
  020ddf4  vspltw 3, 3, 0
  020ddf8  li 4, -3056
  020ddfc  lvlx 5, 4, 3
  020de00  li 3, 16
  020de04  li 4, 2
  020de08  vaddfp 2, 2, 3
  020de0c  vmaddfp 2, 5, 2, 4
  020de10  vctsxs 2, 2, 0
  020de14  vsplth 2, 2, 1
  020de18  stvehx 2, 3, 30
  020de1c  stb 4, 32(31)
  020de20  lwz 3, 0(30)
  020de24  lwz 4, 7128(5)
  020de28  slwi 3, 3, 7
  020de2c  addc 3, 4, 3
  020de30  clrldi 3, 3, 32
  020de34  lfs 1, 20(3)
  020de38  lfs 2, 16(3)
  020de3c  fmuls 1, 1, 1
  020de40  lfs 3, 24(3)
  020de44  li 3, 1
  020de48  sth 3, 8(30)
  020de4c  sth 3, 10(30)
  020de50  fmadds 1, 2, 2, 1
  020de54  fmadds 1, 3, 3, 1
  020de58  fsqrts 1, 1
  020de5c  stfs 1, 1572(30)
  020de60  b 0x20e024
  020de64  lis 3, 241
  020de68  lwz 3, -29128(3)
  020de6c  cmpwi 3, 0
  020de70  bt 2, 0x20e024
  020de74  lhz 4, 18(30)
  020de78  cmpwi 4, 0
  020de7c  bf 2, 0x20e024
  020de80  lis 4, 241
  020de84  addic 5, 3, -1
  020de88  ori 3, 31, 0
  020de8c  stw 5, -29128(4)
  020de90  bl 0x20d3e0
  020de94  b 0x20e024
  020de98  addic 3, 30, 16
  020de9c  bl 0x4fffb4
  020dea0  nop
  020dea4  cmpwi 3, 0
  020dea8  bt 2, 0x20e024
  020deac  li 3, 4
  020deb0  li 4, 3
  020deb4  addi 5, 3, 16
  020deb8  vspltisw 4, -1
  020debc  stb 4, 32(31)
  020dec0  lvlx 2, 3, 30
  020dec4  li 4, 4
  020dec8  lvrx 3, 5, 30
  020decc  lis 3, 33
  020ded0  lis 5, 114
  020ded4  vslw 4, 4, 4
  020ded8  vor 2, 2, 3
  020dedc  addi 3, 3, -8972
  020dee0  vspltisw 3, -16
  020dee4  vsraw 2, 2, 3
  020dee8  lvlx 3, 4, 3
  020deec  li 3, -3056
  020def0  vspltw 3, 3, 0
  020def4  vcfsx 2, 2, 0
  020def8  li 4, 16
  020defc  lvlx 5, 3, 5
  020df00  ori 3, 31, 0
  020df04  vaddfp 2, 2, 3
  020df08  vmaddfp 2, 5, 2, 4
  020df0c  vctsxs 2, 2, 0
  020df10  vsplth 2, 2, 1
  020df14  stvehx 2, 4, 30
  020df18  bl 0x20d3e0
  020df1c  b 0x20e024
  020df20  addic 3, 30, 16
  020df24  bl 0x4fffb4
  020df28  nop
  020df2c  cmpwi 3, 0
  020df30  bt 2, 0x20e010
  020df34  lhz 3, 6(30)
  020df38  cmpwi 3, 0
  020df3c  bt 2, 0x20dfac
  020df40  li 3, 6
  020df44  li 4, 2
  020df48  addi 5, 3, 16
  020df4c  vspltisw 4, -1
  020df50  stb 4, 32(31)
  020df54  lvlx 2, 3, 30
  020df58  li 4, 4
  020df5c  lvrx 3, 5, 30
  020df60  lis 3, 33
  020df64  lis 5, 114
  020df68  vslw 4, 4, 4
  020df6c  vor 2, 2, 3
  020df70  addi 3, 3, -8972
  020df74  vspltisw 3, -16
  020df78  vsraw 2, 2, 3
  020df7c  lvlx 3, 4, 3
  020df80  li 3, -3056
  020df84  vspltw 3, 3, 0
  020df88  vcfsx 2, 2, 0
  020df8c  lvlx 5, 3, 5
  020df90  li 3, 16
  020df94  vaddfp 2, 2, 3
  020df98  vmaddfp 2, 5, 2, 4
  020df9c  vctsxs 2, 2, 0
  020dfa0  vsplth 2, 2, 1
  020dfa4  stvehx 2, 3, 30
  020dfa8  b 0x20e024
  020dfac  li 3, 4
  020dfb0  vspltisw 4, -1
  020dfb4  addi 4, 3, 16
  020dfb8  lvlx 2, 3, 30
  020dfbc  lis 3, 33
  020dfc0  lvrx 3, 4, 30
  020dfc4  addi 3, 3, -8972
  020dfc8  vslw 4, 4, 4
  020dfcc  vor 2, 2, 3
  020dfd0  li 4, 4
  020dfd4  vspltisw 3, -16
  020dfd8  vsraw 2, 2, 3
  020dfdc  lvlx 3, 4, 3
  020dfe0  lis 3, 114
  020dfe4  vspltw 3, 3, 0
  020dfe8  li 4, -3056
  020dfec  vcfsx 2, 2, 0
  020dff0  lvlx 5, 4, 3
  020dff4  li 3, 16
  020dff8  vaddfp 2, 2, 3
  020dffc  vmaddfp 2, 5, 2, 4
  020e000  vctsxs 2, 2, 0
  020e004  vsplth 2, 2, 1
  020e008  stvehx 2, 3, 30
  020e00c  b 0x20e024
  020e010  lhz 3, 18(30)
  020e014  cmpwi 3, 0
  020e018  bf 2, 0x20e024
  020e01c  ori 3, 31, 0
  020e020  bl 0x20d3e0
  020e024  lis 3, 241
  020e028  lwz 3, -29108(3)
  020e02c  cmpwi 3, 0
  020e030  bf 2, 0x20e080
  020e034  lis 3, 151
  020e038  lfs 1, 20(31)
  020e03c  addic 3, 3, -25376
  020e040  lfs 2, 16(31)
  020e044  lfs 3, 132(3)
  020e048  lfs 4, 128(3)
  020e04c  fsubs 1, 1, 3
  020e050  fsubs 2, 2, 4
  020e054  lis 3, 33
  020e058  addi 3, 3, -8972
  020e05c  fmuls 1, 1, 1
  020e060  fmadds 1, 2, 2, 1
  020e064  lfs 2, 8(3)
  020e068  fsqrts 1, 1
  020e06c  fcmpu 0, 1, 2
  020e070  cror 6, 1, 2
  020e074  bt 6, 0x20e080
  020e078  ori 3, 31, 0
  020e07c  bl 0x20cc88
  020e080  lhz 3, 18(30)
  020e084  cmpwi 3, 0
  020e088  bt 2, 0x20e0e0
  020e08c  lis 4, 241
  020e090  lwz 4, -29116(4)
  020e094  cmpwi 4, 0
  020e098  bf 2, 0x20e0a8
  020e09c  ori 3, 31, 0
  020e0a0  bl 0x20ca00
  020e0a4  lhz 3, 18(30)
  020e0a8  lis 4, 241
  020e0ac  extsh 3, 3
  020e0b0  lwz 4, -29124(4)
  020e0b4  cmpw 3, 4
  020e0b8  bf 1, 0x20e0e0
  020e0bc  lis 3, 241
  020e0c0  lwz 3, -29112(3)
  020e0c4  cmpwi 3, 0
  020e0c8  bf 2, 0x20e0e0
  020e0cc  lis 3, 113
  020e0d0  ori 4, 31, 0
  020e0d4  addic 3, 3, -27344
  020e0d8  bl 0x6d7e0
  020e0dc  nop
  020e0e0  ld 0, 160(1)
  020e0e4  mtlr 0
  020e0e8  ld 30, 128(1)
  020e0ec  ld 31, 136(1)
  020e0f0  addi 1, 1, 144
  020e0f4  blr
