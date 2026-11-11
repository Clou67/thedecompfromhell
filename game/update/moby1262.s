# game/update/moby1262.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1262_0022caa0:   # 0x22caa0, 0x14 bytes
  022caa0  lis 3, 119
  022caa4  lis 4, 1
  022caa8  addic 3, 3, 20752
  022caac  stw 4, 72(3)
  022cab0  blr

M1262_0022cae8:   # 0x22cae8, 0x344 bytes
  022cae8  stdu 1, -256(1)
  022caec  mflr 0
  022caf0  std 0, 272(1)
  022caf4  stfd 20, 160(1)
  022caf8  stfd 21, 168(1)
  022cafc  stfd 22, 176(1)
  022cb00  stfd 23, 184(1)
  022cb04  stfd 24, 192(1)
  022cb08  stfd 25, 200(1)
  022cb0c  stfd 26, 208(1)
  022cb10  stfd 27, 216(1)
  022cb14  stfd 28, 224(1)
  022cb18  stfd 29, 232(1)
  022cb1c  stfd 30, 240(1)
  022cb20  stfd 31, 248(1)
  022cb24  std 30, 144(1)
  022cb28  std 31, 152(1)
  022cb2c  lis 30, 35
  022cb30  ori 31, 3, 0
  022cb34  addi 30, 30, -13640
  022cb38  addic 3, 31, 16
  022cb3c  li 4, 0
  022cb40  std 29, 136(1)
  022cb44  lfs 30, 0(30)
  022cb48  lwz 29, 120(31)
  022cb4c  std 28, 128(1)
  022cb50  std 27, 120(1)
  022cb54  std 26, 112(1)
  022cb58  fmr 1, 30
  022cb5c  bl 0xffb70
  022cb60  nop
  022cb64  lis 3, 161
  022cb68  addic 3, 3, 2368
  022cb6c  lfs 1, 68(3)
  022cb70  lfs 21, 64(3)
  022cb74  fmuls 1, 1, 1
  022cb78  lfs 2, 72(3)
  022cb7c  lfs 31, 4(30)
  022cb80  fmadds 1, 21, 21, 1
  022cb84  fmadds 1, 2, 2, 1
  022cb88  fsqrts 2, 1
  022cb8c  fcmpu 0, 2, 31
  022cb90  bf 2, 0x22cbc0
  022cb94  stfs 21, 512(29)
  022cb98  lfs 1, 68(3)
  022cb9c  li 4, 0
  022cba0  stfs 1, 516(29)
  022cba4  lfs 1, 72(3)
  022cba8  stfs 1, 520(29)
  022cbac  lfs 21, 76(3)
  022cbb0  stw 4, 520(29)
  022cbb4  stw 4, 516(29)
  022cbb8  stw 4, 512(29)
  022cbbc  b 0x22cc1c
  022cbc0  frsqrte 2, 1
  022cbc4  lfs 3, 8(30)
  022cbc8  fmuls 4, 1, 2
  022cbcc  fmuls 5, 30, 2
  022cbd0  fnmsubs 4, 4, 2, 3
  022cbd4  fmadds 2, 4, 5, 2
  022cbd8  fmuls 4, 1, 2
  022cbdc  fmuls 5, 30, 2
  022cbe0  fnmsubs 4, 4, 2, 3
  022cbe4  fmadds 2, 4, 5, 2
  022cbe8  fmuls 1, 1, 2
  022cbec  fmuls 4, 30, 2
  022cbf0  fnmsubs 1, 1, 2, 3
  022cbf4  fmadds 1, 1, 4, 2
  022cbf8  fmuls 2, 21, 1
  022cbfc  stfs 2, 512(29)
  022cc00  lfs 2, 68(3)
  022cc04  fmuls 2, 2, 1
  022cc08  stfs 2, 516(29)
  022cc0c  lfs 2, 72(3)
  022cc10  fmuls 1, 2, 1
  022cc14  stfs 1, 520(29)
  022cc18  lfs 21, 76(3)
  022cc1c  stfs 21, 524(29)
  022cc20  addic 5, 29, 496
  022cc24  ori 3, 31, 0
  022cc28  li 4, 0
  022cc2c  bl 0xf1114
  022cc30  nop
  022cc34  lfs 21, 12(30)
  022cc38  lfs 22, 16(30)
  022cc3c  li 26, 0
  022cc40  lfs 23, 20(30)
  022cc44  addic 27, 29, 528
  022cc48  lfs 24, 24(30)
  022cc4c  addic 28, 29, 540
  022cc50  lfs 25, 28(30)
  022cc54  lfs 26, 32(30)
  022cc58  lfs 27, 36(30)
  022cc5c  lfs 28, 40(30)
  022cc60  lfs 29, 44(30)
  022cc64  lis 4, 119
  022cc68  ori 3, 26, 0
  022cc6c  lfs 1, 20900(4)
  022cc70  fmuls 20, 1, 21
  022cc74  bl 0x502730
  022cc78  nop
  022cc7c  fmsubs 1, 1, 22, 30
  022cc80  lfs 2, 72(31)
  022cc84  fmuls 20, 20, 1
  022cc88  fmr 1, 20
  022cc8c  bl 0x502578
  022cc90  nop
  022cc94  fadds 1, 1, 23
  022cc98  fsubs 2, 24, 1
  022cc9c  fsubs 3, 25, 1
  022cca0  fsub 4, 1, 2
  022cca4  fsel 1, 4, 2, 1
  022cca8  lfs 2, 72(31)
  022ccac  fsub 4, 3, 1
  022ccb0  fsel 3, 4, 3, 1
  022ccb4  fmr 1, 20
  022ccb8  fmuls 4, 3, 3
  022ccbc  fmuls 5, 4, 3
  022ccc0  fmuls 6, 4, 5
  022ccc4  fmadds 3, 5, 26, 3
  022ccc8  fmuls 5, 4, 6
  022cccc  fmadds 3, 6, 27, 3
  022ccd0  fmuls 4, 4, 5
  022ccd4  fmadds 3, 5, 28, 3
  022ccd8  fmadds 20, 4, 29, 3
  022ccdc  bl 0x502578
  022cce0  nop
  022cce4  fsubs 2, 24, 1
  022cce8  fsubs 3, 25, 1
  022ccec  slwi 3, 26, 4
  022ccf0  cmpwi 26, 0
  022ccf4  addc 4, 3, 27
  022ccf8  clrldi 4, 4, 32
  022ccfc  fsub 4, 1, 2
  022cd00  fsel 1, 4, 2, 1
  022cd04  lfs 4, 496(29)
  022cd08  fsub 2, 3, 1
  022cd0c  fsel 1, 2, 3, 1
  022cd10  fmadds 2, 20, 30, 4
  022cd14  fmuls 3, 1, 1
  022cd18  stfs 2, 0(4)
  022cd1c  lfs 2, 500(29)
  022cd20  fmuls 4, 3, 1
  022cd24  fmuls 5, 3, 4
  022cd28  fmadds 1, 4, 26, 1
  022cd2c  fmuls 4, 3, 5
  022cd30  fmadds 1, 5, 27, 1
  022cd34  fmuls 3, 3, 4
  022cd38  fmadds 1, 4, 28, 1
  022cd3c  fmadds 1, 3, 29, 1
  022cd40  fmadds 1, 1, 30, 2
  022cd44  stfs 1, 4(4)
  022cd48  lfs 1, 504(29)
  022cd4c  stfs 1, 8(4)
  022cd50  lfs 1, 508(29)
  022cd54  stfs 1, 12(4)
  022cd58  bt 2, 0x22cd64
  022cd5c  cmpwi 26, 15
  022cd60  bf 2, 0x22cd6c
  022cd64  fmr 1, 31
  022cd68  b 0x22cd70
  022cd6c  lfs 1, 8(30)
  022cd70  addc 3, 3, 28
  022cd74  addic 26, 26, 1
  022cd78  clrldi 3, 3, 32
  022cd7c  extsw 26, 26
  022cd80  cmpwi 26, 16
  022cd84  stfs 1, 0(3)
  022cd88  bt 0, 0x22cc64
  022cd8c  lis 3, 119
  022cd90  li 4, 20904
  022cd94  vspltisw 4, -1
  022cd98  lis 5, 114
  022cd9c  vslw 4, 4, 4
  022cda0  <unknown>
  022cda4  <unknown>
  022cda8  vcfsx 2, 2, 0
  022cdac  li 3, -3056
  022cdb0  vspltw 3, 3, 0
  022cdb4  <unknown>
  022cdb8  li 3, 508
  022cdbc  vaddfp 2, 2, 3
  022cdc0  vmaddfp 2, 5, 2, 4
  022cdc4  vctsxs 2, 2, 0
  022cdc8  vcfsx 2, 2, 0
  022cdcc  vspltw 2, 2, 0
  022cdd0  stvewx 2, 3, 29
  022cdd4  ld 0, 272(1)
  022cdd8  mtlr 0
  022cddc  lfd 20, 160(1)
  022cde0  lfd 21, 168(1)
  022cde4  lfd 22, 176(1)
  022cde8  lfd 23, 184(1)
  022cdec  lfd 24, 192(1)
  022cdf0  lfd 25, 200(1)
  022cdf4  lfd 26, 208(1)
  022cdf8  lfd 27, 216(1)
  022cdfc  lfd 28, 224(1)
  022ce00  lfd 29, 232(1)
  022ce04  lfd 30, 240(1)
  022ce08  lfd 31, 248(1)
  022ce0c  ld 26, 112(1)
  022ce10  ld 27, 120(1)
  022ce14  ld 28, 128(1)
  022ce18  ld 29, 136(1)
  022ce1c  ld 30, 144(1)
  022ce20  ld 31, 152(1)
  022ce24  addi 1, 1, 256
  022ce28  blr

M1262_0022ce50:   # 0x22ce50, 0x4d0 bytes
  022ce50  stdu 1, -336(1)
  022ce54  mflr 0
  022ce58  std 0, 352(1)
  022ce5c  stfd 20, 240(1)
  022ce60  stfd 21, 248(1)
  022ce64  stfd 22, 256(1)
  022ce68  stfd 23, 264(1)
  022ce6c  stfd 24, 272(1)
  022ce70  stfd 25, 280(1)
  022ce74  stfd 26, 288(1)
  022ce78  stfd 27, 296(1)
  022ce7c  stfd 28, 304(1)
  022ce80  stfd 29, 312(1)
  022ce84  stfd 30, 320(1)
  022ce88  stfd 31, 328(1)
  022ce8c  std 30, 224(1)
  022ce90  lis 4, 35
  022ce94  std 29, 216(1)
  022ce98  lwz 30, 120(3)
  022ce9c  li 29, 0
  022cea0  std 31, 232(1)
  022cea4  addi 4, 4, -12756
  022cea8  ori 31, 29, 0
  022ceac  lfs 23, 0(4)
  022ceb0  lfs 24, 4(4)
  022ceb4  lfs 25, 8(4)
  022ceb8  lfs 26, 12(4)
  022cebc  lfs 27, 16(4)
  022cec0  lfs 28, 20(4)
  022cec4  lfs 29, 24(4)
  022cec8  std 28, 208(1)
  022cecc  std 27, 200(1)
  022ced0  std 26, 192(1)
  022ced4  lfs 30, 28(4)
  022ced8  lfs 31, 32(4)
  022cedc  lwz 4, 540(30)
  022cee0  lis 3, 16253
  022cee4  srawi 5, 4, 31
  022cee8  ori 3, 3, 28836
  022ceec  srwi 6, 5, 1
  022cef0  xor 4, 6, 4
  022cef4  subc 4, 4, 5
  022cef8  cmpw 4, 3
  022cefc  bf 0, 0x22cf24
  022cf00  lwz 4, 556(30)
  022cf04  lis 3, 16253
  022cf08  srawi 5, 4, 31
  022cf0c  ori 3, 3, 28836
  022cf10  srwi 6, 5, 1
  022cf14  xor 4, 6, 4
  022cf18  subc 4, 4, 5
  022cf1c  cmpw 4, 3
  022cf20  bt 0, 0x22d2b8
  022cf24  fmr 1, 23
  022cf28  fmr 2, 24
  022cf2c  bl 0xfcbe8
  022cf30  nop
  022cf34  lis 3, 119
  022cf38  lfs 2, 21028(3)
  022cf3c  fcmpu 0, 1, 2
  022cf40  bt 1, 0x22d2b8
  022cf44  bl 0xfcc68
  022cf48  nop
  022cf4c  fmr 22, 1
  022cf50  bl 0xfcc68
  022cf54  nop
  022cf58  fadds 2, 22, 25
  022cf5c  lis 28, 119
  022cf60  lis 27, 119
  022cf64  fmr 21, 1
  022cf68  lfs 1, 21012(28)
  022cf6c  fsubs 3, 26, 2
  022cf70  fsubs 4, 27, 2
  022cf74  fsub 5, 2, 3
  022cf78  fsel 2, 5, 3, 2
  022cf7c  fsub 3, 4, 2
  022cf80  fsel 3, 3, 4, 2
  022cf84  lfs 2, 21016(27)
  022cf88  fmuls 4, 3, 3
  022cf8c  fmuls 5, 4, 3
  022cf90  fmuls 6, 4, 5
  022cf94  fmadds 3, 5, 28, 3
  022cf98  fmuls 5, 4, 6
  022cf9c  fmadds 3, 6, 29, 3
  022cfa0  fmuls 4, 4, 5
  022cfa4  fmadds 3, 5, 30, 3
  022cfa8  fmadds 20, 4, 31, 3
  022cfac  bl 0xfcbe8
  022cfb0  nop
  022cfb4  fsubs 2, 26, 22
  022cfb8  fsubs 3, 27, 22
  022cfbc  lfs 5, 21012(28)
  022cfc0  fmuls 1, 20, 1
  022cfc4  fsub 4, 22, 2
  022cfc8  fsel 2, 4, 2, 22
  022cfcc  fsub 4, 3, 2
  022cfd0  fsel 3, 4, 3, 2
  022cfd4  lfs 2, 21016(27)
  022cfd8  stfs 1, 144(1)
  022cfdc  fmr 1, 5
  022cfe0  fmuls 4, 3, 3
  022cfe4  fmuls 5, 4, 3
  022cfe8  fmuls 6, 4, 5
  022cfec  fmadds 3, 5, 28, 3
  022cff0  fmuls 5, 4, 6
  022cff4  fmadds 3, 6, 29, 3
  022cff8  fmuls 4, 4, 5
  022cffc  fmadds 3, 5, 30, 3
  022d000  fmadds 22, 4, 31, 3
  022d004  bl 0xfcbe8
  022d008  nop
  022d00c  fadds 2, 21, 25
  022d010  fmuls 1, 22, 1
  022d014  stw 31, 152(1)
  022d018  fsubs 3, 26, 2
  022d01c  fsubs 4, 27, 2
  022d020  fsub 5, 2, 3
  022d024  fsel 2, 5, 3, 2
  022d028  lfs 5, 21012(28)
  022d02c  stfs 1, 148(1)
  022d030  fmr 1, 5
  022d034  fsub 3, 4, 2
  022d038  fsel 3, 3, 4, 2
  022d03c  lfs 2, 21016(27)
  022d040  fmuls 4, 3, 3
  022d044  fmuls 5, 4, 3
  022d048  fmuls 6, 4, 5
  022d04c  fmadds 3, 5, 28, 3
  022d050  fmuls 5, 4, 6
  022d054  fmadds 3, 6, 29, 3
  022d058  fmuls 4, 4, 5
  022d05c  fmadds 3, 5, 30, 3
  022d060  fmadds 22, 4, 31, 3
  022d064  bl 0xfcbe8
  022d068  nop
  022d06c  fsubs 2, 26, 21
  022d070  fsubs 3, 27, 21
  022d074  fmuls 1, 22, 1
  022d078  fsub 4, 21, 2
  022d07c  fsel 2, 4, 2, 21
  022d080  fsub 4, 3, 2
  022d084  fsel 3, 4, 3, 2
  022d088  lfs 2, 21012(28)
  022d08c  stfs 1, 160(1)
  022d090  fmr 1, 2
  022d094  lfs 2, 21016(27)
  022d098  fmuls 4, 3, 3
  022d09c  fmuls 6, 4, 3
  022d0a0  fmuls 5, 4, 6
  022d0a4  fmadds 3, 6, 28, 3
  022d0a8  fmuls 6, 4, 5
  022d0ac  fmadds 3, 5, 29, 3
  022d0b0  fmuls 4, 4, 6
  022d0b4  fmadds 3, 6, 30, 3
  022d0b8  fmadds 22, 4, 31, 3
  022d0bc  bl 0xfcbe8
  022d0c0  nop
  022d0c4  fmuls 3, 22, 1
  022d0c8  lis 28, 119
  022d0cc  stw 31, 168(1)
  022d0d0  lis 27, 119
  022d0d4  lfs 1, 21020(28)
  022d0d8  lfs 2, 21024(27)
  022d0dc  stfs 3, 164(1)
  022d0e0  bl 0xfcbe8
  022d0e4  nop
  022d0e8  lfs 2, 21020(28)
  022d0ec  stfs 1, 152(1)
  022d0f0  lfs 3, 21024(27)
  022d0f4  fmr 1, 2
  022d0f8  fmr 2, 3
  022d0fc  bl 0xfcbe8
  022d100  nop
  022d104  lis 3, 119
  022d108  lis 4, 119
  022d10c  stfs 1, 168(1)
  022d110  lfs 1, 20988(3)
  022d114  lfs 2, 20992(4)
  022d118  bl 0xfcbe8
  022d11c  nop
  022d120  lis 28, 114
  022d124  lfs 2, -3056(28)
  022d128  fmuls 1, 1, 2
  022d12c  bl 0x502758
  022d130  nop
  022d134  lis 4, 119
  022d138  lis 5, 119
  022d13c  ori 27, 3, 0
  022d140  lfs 1, 20996(4)
  022d144  lfs 2, 21000(5)
  022d148  bl 0xfcbe8
  022d14c  nop
  022d150  lfs 2, -3056(28)
  022d154  fmuls 1, 1, 2
  022d158  bl 0x502758
  022d15c  nop
  022d160  lis 4, 119
  022d164  lis 5, 119
  022d168  ori 26, 3, 0
  022d16c  lfs 1, 21004(4)
  022d170  lfs 2, 21008(5)
  022d174  bl 0xfcbe8
  022d178  nop
  022d17c  lfs 2, -3056(28)
  022d180  fmuls 1, 1, 2
  022d184  bl 0x502758
  022d188  nop
  022d18c  extsw 4, 27
  022d190  ori 28, 3, 0
  022d194  extsw 3, 28
  022d198  std 4, 176(1)
  022d19c  lfs 3, 144(1)
  022d1a0  lfs 4, 148(1)
  022d1a4  lfd 1, 176(1)
  022d1a8  std 3, 176(1)
  022d1ac  fcfid 1, 1
  022d1b0  lis 3, 119
  022d1b4  lis 4, 119
  022d1b8  frsp 1, 1
  022d1bc  lfd 2, 176(1)
  022d1c0  fdivs 5, 24, 1
  022d1c4  lfs 6, 152(1)
  022d1c8  lfs 7, 160(1)
  022d1cc  lfs 9, 164(1)
  022d1d0  lfs 10, 168(1)
  022d1d4  fcfid 1, 2
  022d1d8  fmr 2, 24
  022d1dc  frsp 1, 1
  022d1e0  fdivs 8, 24, 1
  022d1e4  lfs 1, 20980(3)
  022d1e8  stfs 1, 156(1)
  022d1ec  lfs 1, 20984(4)
  022d1f0  stfs 1, 172(1)
  022d1f4  fmr 1, 23
  022d1f8  fmuls 3, 3, 5
  022d1fc  fmuls 4, 4, 5
  022d200  fmuls 5, 6, 5
  022d204  stfs 3, 144(1)
  022d208  stfs 4, 148(1)
  022d20c  stfs 5, 152(1)
  022d210  fmuls 3, 7, 8
  022d214  fmuls 4, 9, 8
  022d218  fmuls 5, 10, 8
  022d21c  stfs 3, 160(1)
  022d220  stfs 4, 164(1)
  022d224  stfs 5, 168(1)
  022d228  bl 0xfcbe8
  022d22c  nop
  022d230  lfs 2, 528(30)
  022d234  lis 4, 119
  022d238  lfs 4, 532(30)
  022d23c  lis 5, 119
  022d240  fsubs 3, 2, 2
  022d244  lfs 5, 536(30)
  022d248  fsubs 4, 4, 4
  022d24c  lfs 6, 540(30)
  022d250  fsubs 5, 5, 5
  022d254  lis 7, 119
  022d258  lwz 6, 20972(4)
  022d25c  lwz 8, 21032(5)
  022d260  addic 3, 1, 128
  022d264  extsw 11, 8
  022d268  ori 10, 28, 0
  022d26c  addic 4, 1, 144
  022d270  fmadds 2, 1, 3, 2
  022d274  addic 5, 1, 160
  022d278  extsw 6, 6
  022d27c  ori 8, 27, 0
  022d280  ori 9, 26, 0
  022d284  stfs 2, 128(1)
  022d288  lfs 2, 532(30)
  022d28c  lwz 7, 20976(7)
  022d290  fmadds 2, 1, 4, 2
  022d294  std 11, 112(1)
  022d298  extsw 7, 7
  022d29c  stfs 2, 132(1)
  022d2a0  lfs 2, 536(30)
  022d2a4  stfs 6, 140(1)
  022d2a8  fmadds 1, 1, 5, 2
  022d2ac  stfs 1, 136(1)
  022d2b0  bl 0x1206e8
  022d2b4  nop
  022d2b8  addic 29, 29, 1
  022d2bc  addic 30, 30, 16
  022d2c0  cmpwi 29, 15
  022d2c4  bt 0, 0x22cedc
  022d2c8  ld 0, 352(1)
  022d2cc  mtlr 0
  022d2d0  lfd 20, 240(1)
  022d2d4  lfd 21, 248(1)
  022d2d8  lfd 22, 256(1)
  022d2dc  lfd 23, 264(1)
  022d2e0  lfd 24, 272(1)
  022d2e4  lfd 25, 280(1)
  022d2e8  lfd 26, 288(1)
  022d2ec  lfd 27, 296(1)
  022d2f0  lfd 28, 304(1)
  022d2f4  lfd 29, 312(1)
  022d2f8  lfd 30, 320(1)
  022d2fc  lfd 31, 328(1)
  022d300  ld 26, 192(1)
  022d304  ld 27, 200(1)
  022d308  ld 28, 208(1)
  022d30c  ld 29, 216(1)
  022d310  ld 30, 224(1)
  022d314  ld 31, 232(1)
  022d318  addi 1, 1, 336
  022d31c  blr

M1262_0022d358:   # 0x22d358, 0x568 bytes
  022d358  stdu 1, -352(1)
  022d35c  mflr 0
  022d360  std 0, 368(1)
  022d364  stfd 24, 288(1)
  022d368  stfd 25, 296(1)
  022d36c  stfd 26, 304(1)
  022d370  stfd 27, 312(1)
  022d374  stfd 28, 320(1)
  022d378  stfd 29, 328(1)
  022d37c  stfd 30, 336(1)
  022d380  stfd 31, 344(1)
  022d384  std 31, 280(1)
  022d388  std 30, 272(1)
  022d38c  ori 31, 3, 0
  022d390  lwz 30, 120(31)
  022d394  std 29, 264(1)
  022d398  std 28, 256(1)
  022d39c  std 27, 248(1)
  022d3a0  std 26, 240(1)
  022d3a4  std 25, 232(1)
  022d3a8  lfs 1, 508(30)
  022d3ac  bl 0x502758
  022d3b0  nop
  022d3b4  stw 3, 224(1)
  022d3b8  addic 3, 1, 224
  022d3bc  bl 0x4fff60
  022d3c0  nop
  022d3c4  li 4, 224
  022d3c8  li 5, 508
  022d3cc  lwz 3, 224(1)
  022d3d0  <unknown>
  022d3d4  cmpwi 3, 0
  022d3d8  vcfsx 2, 2, 0
  022d3dc  vspltw 2, 2, 0
  022d3e0  stvewx 2, 5, 30
  022d3e4  bt 2, 0x22d874
  022d3e8  cmpwi 3, 20
  022d3ec  bf 2, 0x22d434
  022d3f0  lis 3, 16250
  022d3f4  li 6, 0
  022d3f8  ori 5, 30, 0
  022d3fc  lis 4, 16256
  022d400  ori 3, 3, 57672
  022d404  lwz 7, 540(5)
  022d408  srawi 8, 7, 31
  022d40c  srwi 9, 8, 1
  022d410  xor 7, 9, 7
  022d414  subc 7, 7, 8
  022d418  cmpw 7, 4
  022d41c  bt 0, 0x22d424
  022d420  stw 3, 540(5)
  022d424  addic 6, 6, 1
  022d428  addic 5, 5, 16
  022d42c  cmpwi 6, 16
  022d430  bt 0, 0x22d404
  022d434  lis 3, 35
  022d438  li 25, 0
  022d43c  addi 3, 3, -11488
  022d440  lis 28, 161
  022d444  ori 26, 30, 0
  022d448  ori 29, 25, 0
  022d44c  addic 28, 28, 2368
  022d450  lfs 25, 0(3)
  022d454  lfs 26, 4(3)
  022d458  lfs 31, 8(3)
  022d45c  lfs 27, 12(3)
  022d460  lfs 28, 16(3)
  022d464  lfs 29, 20(3)
  022d468  lfs 1, 528(26)
  022d46c  lfs 2, 496(30)
  022d470  fsubs 1, 1, 2
  022d474  lis 3, 119
  022d478  lis 4, 114
  022d47c  stfs 1, 112(1)
  022d480  lfs 2, 532(26)
  022d484  lfs 3, 500(30)
  022d488  fsubs 2, 2, 3
  022d48c  lfs 4, 20896(3)
  022d490  lfs 5, -3052(4)
  022d494  fmuls 4, 4, 5
  022d498  fmuls 3, 2, 2
  022d49c  stfs 2, 116(1)
  022d4a0  lfs 6, 536(26)
  022d4a4  lfs 7, 504(30)
  022d4a8  fmadds 3, 1, 1, 3
  022d4ac  fsubs 5, 6, 7
  022d4b0  fsqrts 3, 3
  022d4b4  stfs 5, 120(1)
  022d4b8  lfs 5, 540(26)
  022d4bc  stw 29, 120(1)
  022d4c0  stfs 5, 124(1)
  022d4c4  stw 29, 120(1)
  022d4c8  lfs 8, 20(31)
  022d4cc  lfs 9, 16(31)
  022d4d0  lfs 10, 24(31)
  022d4d4  addic 3, 1, 128
  022d4d8  addic 27, 26, 528
  022d4dc  addic 4, 1, 144
  022d4e0  li 5, 2
  022d4e4  li 6, 0
  022d4e8  li 7, 0
  022d4ec  fdivs 4, 4, 3
  022d4f0  fsub 5, 25, 3
  022d4f4  fsub 6, 25, 3
  022d4f8  fsub 7, 3, 25
  022d4fc  fsub 3, 3, 25
  022d500  fmuls 1, 1, 4
  022d504  fmuls 2, 2, 4
  022d508  fsel 4, 5, 25, 1
  022d50c  fsel 5, 6, 25, 2
  022d510  fsel 1, 7, 4, 1
  022d514  fsel 2, 3, 5, 2
  022d518  stfs 1, 112(1)
  022d51c  stfs 2, 116(1)
  022d520  lfs 3, 528(26)
  022d524  fadds 1, 3, 1
  022d528  stfs 1, 112(1)
  022d52c  lfs 3, 532(26)
  022d530  fsubs 1, 1, 9
  022d534  fadds 2, 3, 2
  022d538  stfs 2, 116(1)
  022d53c  lfs 3, 536(26)
  022d540  fsubs 2, 2, 8
  022d544  stfs 3, 120(1)
  022d548  lfs 4, 540(26)
  022d54c  stfs 4, 124(1)
  022d550  lfs 4, 516(30)
  022d554  lfs 5, 512(30)
  022d558  fmuls 6, 4, 4
  022d55c  lfs 7, 520(30)
  022d560  fmuls 2, 2, 4
  022d564  fsubs 3, 3, 10
  022d568  fmadds 6, 5, 5, 6
  022d56c  fmadds 1, 1, 5, 2
  022d570  fmadds 4, 7, 7, 6
  022d574  fnmadds 1, 3, 7, 1
  022d578  fsqrts 2, 4
  022d57c  lfs 4, 528(26)
  022d580  stfs 4, 128(1)
  022d584  lfs 4, 532(26)
  022d588  stfs 4, 132(1)
  022d58c  lfs 4, 536(26)
  022d590  stfs 4, 136(1)
  022d594  lfs 5, 540(26)
  022d598  stfs 5, 140(1)
  022d59c  fadds 1, 1, 26
  022d5a0  fadds 3, 4, 31
  022d5a4  stfs 3, 136(1)
  022d5a8  lfs 3, 528(26)
  022d5ac  stfs 3, 144(1)
  022d5b0  lfs 3, 532(26)
  022d5b4  stfs 3, 148(1)
  022d5b8  lfs 3, 536(26)
  022d5bc  stfs 3, 152(1)
  022d5c0  lfs 4, 540(26)
  022d5c4  stfs 4, 156(1)
  022d5c8  fdivs 1, 1, 2
  022d5cc  fsub 4, 25, 2
  022d5d0  fsub 30, 2, 25
  022d5d4  fsubs 2, 3, 27
  022d5d8  stfs 2, 152(1)
  022d5dc  fmuls 1, 7, 1
  022d5e0  fsel 2, 4, 25, 1
  022d5e4  fsel 30, 30, 2, 1
  022d5e8  bl 0x57820
  022d5ec  nop
  022d5f0  cmpwi 3, 0
  022d5f4  bt 2, 0x22d628
  022d5f8  lfs 1, 120(1)
  022d5fc  fcmpu 0, 1, 30
  022d600  cror 6, 0, 2
  022d604  bt 6, 0x22d628
  022d608  lis 4, 114
  022d60c  lfs 1, 40(28)
  022d610  addic 3, 1, 120
  022d614  fadds 1, 1, 26
  022d618  lfs 2, -3052(4)
  022d61c  fmuls 2, 2, 28
  022d620  bl 0x109af0
  022d624  nop
  022d628  lwz 4, 540(26)
  022d62c  lis 3, 16256
  022d630  srawi 5, 4, 31
  022d634  srwi 6, 5, 1
  022d638  xor 4, 6, 4
  022d63c  subc 4, 4, 5
  022d640  cmpw 4, 3
  022d644  bt 0, 0x22d67c
  022d648  ori 3, 27, 0
  022d64c  addic 4, 1, 112
  022d650  li 5, 2
  022d654  li 6, 0
  022d658  li 7, 0
  022d65c  bl 0x57820
  022d660  nop
  022d664  cmpwi 3, 0
  022d668  bt 2, 0x22d67c
  022d66c  lis 3, 16250
  022d670  ori 3, 3, 57672
  022d674  stw 3, 124(1)
  022d678  b 0x22d6b8
  022d67c  lwz 4, 124(1)
  022d680  lis 3, 16256
  022d684  srawi 5, 4, 31
  022d688  srwi 6, 5, 1
  022d68c  xor 4, 6, 4
  022d690  subc 4, 4, 5
  022d694  cmpw 4, 3
  022d698  bf 0, 0x22d6b8
  022d69c  lis 4, 114
  022d6a0  fmr 1, 25
  022d6a4  addic 3, 1, 124
  022d6a8  lfs 2, -3052(4)
  022d6ac  fmuls 2, 2, 29
  022d6b0  bl 0x109af0
  022d6b4  nop
  022d6b8  lfs 1, 112(1)
  022d6bc  addic 25, 25, 1
  022d6c0  stfs 1, 528(26)
  022d6c4  lfs 1, 116(1)
  022d6c8  cmpwi 25, 16
  022d6cc  stfs 1, 532(26)
  022d6d0  lfs 1, 120(1)
  022d6d4  stfs 1, 536(26)
  022d6d8  lfs 1, 124(1)
  022d6dc  stfs 1, 540(26)
  022d6e0  addic 26, 26, 16
  022d6e4  bt 0, 0x22d468
  022d6e8  lis 3, 35
  022d6ec  ori 28, 29, 0
  022d6f0  addi 3, 3, -11488
  022d6f4  lfs 24, 24(3)
  022d6f8  lfs 25, 28(3)
  022d6fc  lfs 26, 32(3)
  022d700  lfs 27, 36(3)
  022d704  lfs 28, 40(3)
  022d708  lfs 29, 44(3)
  022d70c  lfs 30, 48(3)
  022d710  lwz 4, 540(30)
  022d714  lis 3, 16250
  022d718  srawi 5, 4, 31
  022d71c  ori 3, 3, 57672
  022d720  srwi 6, 5, 1
  022d724  xor 4, 6, 4
  022d728  subc 4, 4, 5
  022d72c  cmpw 4, 3
  022d730  bt 0, 0x22d848
  022d734  lwz 4, 556(30)
  022d738  lis 3, 16250
  022d73c  srawi 5, 4, 31
  022d740  ori 3, 3, 57672
  022d744  srwi 6, 5, 1
  022d748  xor 4, 6, 4
  022d74c  subc 4, 4, 5
  022d750  cmpw 4, 3
  022d754  bt 0, 0x22d848
  022d758  lfs 1, 72(31)
  022d75c  fadds 2, 1, 24
  022d760  fsubs 3, 25, 1
  022d764  fsubs 4, 26, 1
  022d768  lis 3, 17839
  022d76c  lis 4, 16256
  022d770  ori 3, 3, 57190
  022d774  lis 5, 1
  022d778  addic 27, 1, 176
  022d77c  fsubs 5, 25, 2
  022d780  fsub 6, 1, 3
  022d784  fsubs 7, 26, 2
  022d788  stw 4, 168(1)
  022d78c  stw 3, 172(1)
  022d790  ori 5, 5, 1
  022d794  addic 7, 1, 160
  022d798  ori 3, 27, 0
  022d79c  ori 4, 31, 0
  022d7a0  fsub 8, 2, 5
  022d7a4  fsel 1, 6, 3, 1
  022d7a8  fsel 2, 8, 5, 2
  022d7ac  fsub 3, 4, 1
  022d7b0  fsub 5, 7, 2
  022d7b4  fsel 1, 3, 4, 1
  022d7b8  fsel 2, 5, 7, 2
  022d7bc  fmuls 3, 1, 1
  022d7c0  fmuls 4, 2, 2
  022d7c4  fmuls 5, 3, 1
  022d7c8  fmuls 6, 4, 2
  022d7cc  fmuls 7, 3, 5
  022d7d0  fmadds 1, 5, 27, 1
  022d7d4  fmuls 5, 4, 6
  022d7d8  fmadds 2, 6, 27, 2
  022d7dc  fmuls 6, 3, 7
  022d7e0  fmadds 1, 7, 28, 1
  022d7e4  fmuls 7, 4, 5
  022d7e8  fmadds 2, 5, 28, 2
  022d7ec  fmuls 3, 3, 6
  022d7f0  fmadds 1, 6, 29, 1
  022d7f4  fmuls 4, 4, 7
  022d7f8  fmadds 2, 7, 29, 2
  022d7fc  fmadds 3, 3, 30, 1
  022d800  fmr 1, 31
  022d804  fmadds 2, 4, 30, 2
  022d808  stfs 3, 164(1)
  022d80c  stfs 2, 160(1)
  022d810  bl 0x10581c
  022d814  nop
  022d818  li 5, 1
  022d81c  stb 29, 200(1)
  022d820  addic 3, 30, 528
  022d824  lhz 6, 166(31)
  022d828  addic 4, 30, 544
  022d82c  ori 7, 27, 0
  022d830  stb 5, 201(1)
  022d834  sth 6, 202(1)
  022d838  li 5, 0
  022d83c  ori 6, 31, 0
  022d840  bl 0x57820
  022d844  nop
  022d848  addic 28, 28, 1
  022d84c  addic 30, 30, 16
  022d850  cmpwi 28, 15
  022d854  bt 0, 0x22d710
  022d858  lis 3, 113
  022d85c  ori 4, 31, 0
  022d860  addic 3, 3, -26136
  022d864  bl 0x6d720
  022d868  nop
  022d86c  ori 3, 31, 0
  022d870  bl 0x22ce50
  022d874  ld 0, 368(1)
  022d878  mtlr 0
  022d87c  lfd 24, 288(1)
  022d880  lfd 25, 296(1)
  022d884  lfd 26, 304(1)
  022d888  lfd 27, 312(1)
  022d88c  lfd 28, 320(1)
  022d890  lfd 29, 328(1)
  022d894  lfd 30, 336(1)
  022d898  lfd 31, 344(1)
  022d89c  ld 25, 232(1)
  022d8a0  ld 26, 240(1)
  022d8a4  ld 27, 248(1)
  022d8a8  ld 28, 256(1)
  022d8ac  ld 29, 264(1)
  022d8b0  ld 30, 272(1)
  022d8b4  ld 31, 280(1)
  022d8b8  addi 1, 1, 352
  022d8bc  blr

M1262_0022d900:   # 0x22d900, 0xbf8 bytes
  022d900  stdu 1, -368(1)
  022d904  mflr 0
  022d908  std 0, 384(1)
  022d90c  stfd 29, 344(1)
  022d910  stfd 30, 352(1)
  022d914  stfd 31, 360(1)
  022d918  std 31, 336(1)
  022d91c  ori 31, 3, 0
  022d920  lis 3, 119
  022d924  lwz 4, 36(31)
  022d928  std 30, 328(1)
  022d92c  lfs 1, 20860(3)
  022d930  lwz 30, 120(31)
  022d934  ori 3, 31, 0
  022d938  lfs 2, 36(4)
  022d93c  fmuls 1, 2, 1
  022d940  std 29, 320(1)
  022d944  stfs 1, 44(31)
  022d948  bl 0x22d358
  022d94c  lwz 3, 56(30)
  022d950  cmpwi 3, 0
  022d954  bt 2, 0x22d990
  022d958  lis 3, 35
  022d95c  addi 3, 3, -10048
  022d960  lfs 1, 0(3)
  022d964  lfs 2, 4(3)
  022d968  bl 0xfcbe8
  022d96c  nop
  022d970  lis 3, 114
  022d974  lfs 2, -3056(3)
  022d978  fmuls 1, 1, 2
  022d97c  bl 0x502758
  022d980  nop
  022d984  stw 3, 388(30)
  022d988  li 3, 0
  022d98c  stw 3, 56(30)
  022d990  addic 3, 30, 388
  022d994  bl 0x4fff60
  022d998  nop
  022d99c  lis 4, 35
  022d9a0  li 7, 0
  022d9a4  addi 6, 4, -10048
  022d9a8  ori 3, 31, 0
  022d9ac  lis 4, 51
  022d9b0  li 5, 0
  022d9b4  lfs 30, 8(6)
  022d9b8  stw 7, 196(1)
  022d9bc  bl 0x10675c
  022d9c0  nop
  022d9c4  ori 29, 3, 0
  022d9c8  addic 5, 30, 32
  022d9cc  ori 4, 29, 0
  022d9d0  li 6, 0
  022d9d4  addic 7, 1, 192
  022d9d8  li 9, 0
  022d9dc  addic 8, 1, 196
  022d9e0  ori 3, 31, 0
  022d9e4  li 10, 4
  022d9e8  bl 0x106840
  022d9ec  nop
  022d9f0  lwz 4, 192(1)
  022d9f4  cmpwi 4, 1
  022d9f8  bt 2, 0x22def8
  022d9fc  lbz 4, 32(31)
  022da00  cmpwi 4, 16
  022da04  bt 2, 0x22def8
  022da08  cmpwi 29, 0
  022da0c  bt 2, 0x22da30
  022da10  lwz 4, 32(29)
  022da14  cmpwi 4, 0
  022da18  bt 2, 0x22da30
  022da1c  lhz 4, 166(4)
  022da20  cmpwi 4, 1262
  022da24  bf 2, 0x22da30
  022da28  li 4, 0
  022da2c  stw 4, 196(1)
  022da30  lfs 1, 32(30)
  022da34  lfs 2, 196(1)
  022da38  fsubs 1, 1, 2
  022da3c  fcmpu 0, 1, 30
  022da40  stfs 1, 32(30)
  022da44  bt 1, 0x22da4c
  022da48  li 3, 1
  022da4c  lis 4, 16179
  022da50  li 5, 717
  022da54  ori 4, 4, 13107
  022da58  cmpwi 3, 2
  022da5c  cmpwi 6, 3, -1
  022da60  stw 5, 128(30)
  022da64  stw 4, 136(30)
  022da68  cmpwi 1, 3, 10
  022da6c  bt 1, 0x22da80
  022da70  cmpwi 1, 3, 0
  022da74  bf 25, 0x22dee8
  022da78  bf 5, 0x22dee8
  022da7c  b 0x22dcc4
  022da80  bt 5, 0x22dee8
  022da84  lis 3, 35
  022da88  vspltisw 2, -1
  022da8c  li 4, 15
  022da90  addi 3, 3, -10048
  022da94  li 6, 12
  022da98  lis 5, 114
  022da9c  stb 4, 32(31)
  022daa0  li 4, -3056
  022daa4  vslw 2, 2, 2
  022daa8  <unknown>
  022daac  lis 3, 119
  022dab0  vspltw 3, 3, 0
  022dab4  <unknown>
  022dab8  lis 6, 16752
  022dabc  lis 4, 114
  022dac0  li 5, 38
  022dac4  vmaddfp 2, 4, 3, 2
  022dac8  lfs 1, 20868(3)
  022dacc  lis 3, 119
  022dad0  lfs 2, -3052(4)
  022dad4  lis 4, 16640
  022dad8  fmuls 1, 1, 2
  022dadc  vctsxs 2, 2, 0
  022dae0  vsplth 2, 2, 1
  022dae4  stvehx 2, 5, 30
  022dae8  stfs 1, 120(30)
  022daec  lfs 1, 20872(3)
  022daf0  stw 4, 176(30)
  022daf4  fmuls 1, 1, 2
  022daf8  stw 6, 180(30)
  022dafc  lis 6, 115
  022db00  addic 6, 6, 22784
  022db04  stfs 1, 124(30)
  022db08  lwz 4, 16(29)
  022db0c  lwz 3, 20(29)
  022db10  lfs 1, 16(29)
  022db14  lfs 2, 20(29)
  022db18  fabs 3, 1
  022db1c  fabs 5, 2
  022db20  rlwinm 5, 3, 3, 29, 29
  022db24  addic 3, 30, 96
  022db28  fsubs 1, 3, 5
  022db2c  stfs 1, 212(1)
  022db30  lwz 7, 212(1)
  022db34  lfs 1, 212(1)
  022db38  rlwimi 5, 7, 2, 30, 30
  022db3c  fsub 4, 1, 30
  022db40  fsub 6, 1, 30
  022db44  rlwimi 5, 4, 4, 28, 28
  022db48  ori 4, 6, 0
  022db4c  rlwimi 4, 5, 2, 26, 28
  022db50  slwi 5, 5, 2
  022db54  clrldi 4, 4, 32
  022db58  fsel 4, 4, 3, 5
  022db5c  lfsx 1, 6, 5
  022db60  fsel 3, 6, 5, 3
  022db64  lfs 2, 4(4)
  022db68  fcmpu 0, 4, 30
  022db6c  bt 1, 0x22db78
  022db70  fmr 1, 30
  022db74  b 0x22dc9c
  022db78  fsubs 5, 3, 4
  022db7c  fadds 3, 3, 4
  022db80  addic 4, 1, 16
  022db84  li 7, 2
  022db88  addic 6, 4, 280
  022db8c  addic 5, 4, 264
  022db90  mtctr 7
  022db94  fdivs 3, 5, 3
  022db98  fmuls 4, 3, 3
  022db9c  stfs 3, 292(1)
  022dba0  stfs 3, 284(1)
  022dba4  stfs 3, 288(1)
  022dba8  stfs 3, 280(1)
  022dbac  lfs 6, 292(1)
  022dbb0  lfs 7, 284(1)
  022dbb4  lfs 8, 288(1)
  022dbb8  fmuls 5, 4, 4
  022dbbc  fmuls 7, 7, 4
  022dbc0  fmuls 6, 6, 5
  022dbc4  fmuls 3, 5, 5
  022dbc8  fmuls 5, 8, 5
  022dbcc  stfs 7, 284(1)
  022dbd0  fmuls 4, 6, 4
  022dbd4  stfs 5, 288(1)
  022dbd8  stfs 4, 292(1)
  022dbdc  lfs 4, 264(4)
  022dbe0  fmuls 4, 4, 3
  022dbe4  stfs 4, 280(4)
  022dbe8  lfs 4, 4(5)
  022dbec  addic 5, 5, 8
  022dbf0  fmuls 4, 4, 3
  022dbf4  addic 4, 4, 8
  022dbf8  stfs 4, 4(6)
  022dbfc  addic 6, 6, 8
  022dc00  bdnz 0x22dbdc
  022dc04  li 6, 4
  022dc08  ori 4, 1, 0
  022dc0c  mtctr 6
  022dc10  lis 5, 115
  022dc14  addic 6, 4, 280
  022dc18  addic 5, 5, 22752
  022dc1c  ori 8, 6, 0
  022dc20  lfs 3, 280(4)
  022dc24  lfs 4, 0(5)
  022dc28  fmuls 3, 3, 4
  022dc2c  lfs 4, 4(5)
  022dc30  addic 5, 5, 8
  022dc34  stfs 3, 280(4)
  022dc38  lfs 3, 4(6)
  022dc3c  addic 4, 4, 8
  022dc40  fmuls 3, 3, 4
  022dc44  stfs 3, 4(6)
  022dc48  addic 6, 6, 8
  022dc4c  bdnz 0x22dc20
  022dc50  ori 4, 1, 0
  022dc54  fmr 3, 30
  022dc58  mtctr 7
  022dc5c  lfs 4, 280(4)
  022dc60  fadds 3, 3, 4
  022dc64  lfs 4, 4(8)
  022dc68  addic 4, 4, 16
  022dc6c  lfs 5, 8(8)
  022dc70  lfs 6, 12(8)
  022dc74  addic 8, 8, 16
  022dc78  fadds 3, 3, 4
  022dc7c  fadds 3, 3, 5
  022dc80  fadds 3, 3, 6
  022dc84  bdnz 0x22dc5c
  022dc88  lis 4, 35
  022dc8c  addi 4, 4, -10048
  022dc90  lfs 4, 16(4)
  022dc94  fadds 3, 3, 4
  022dc98  fmadds 1, 3, 1, 2
  022dc9c  ori 4, 3, 0
  022dca0  ori 3, 31, 0
  022dca4  li 6, 7
  022dca8  li 7, 1
  022dcac  li 8, 0
  022dcb0  bl 0x10ad80
  022dcb4  nop
  022dcb8  li 3, 250
  022dcbc  stb 3, 279(30)
  022dcc0  b 0x22dee8
  022dcc4  li 3, 16
  022dcc8  lis 4, 119
  022dccc  lis 5, 114
  022dcd0  lis 6, 16776
  022dcd4  stb 3, 32(31)
  022dcd8  lis 3, 119
  022dcdc  lfs 1, 20876(4)
  022dce0  lfs 2, -3052(5)
  022dce4  lhz 4, 52(31)
  022dce8  li 5, 0
  022dcec  fmuls 1, 1, 2
  022dcf0  rlwimi 4, 5, 0, 19, 19
  022dcf4  lis 5, 16656
  022dcf8  sth 4, 52(31)
  022dcfc  stfs 1, 120(30)
  022dd00  lfs 1, 20880(3)
  022dd04  stw 5, 176(30)
  022dd08  fmuls 1, 1, 2
  022dd0c  stw 6, 180(30)
  022dd10  lis 6, 115
  022dd14  addic 6, 6, 22784
  022dd18  stfs 1, 124(30)
  022dd1c  lwz 4, 16(29)
  022dd20  lwz 3, 20(29)
  022dd24  lfs 1, 16(29)
  022dd28  lfs 2, 20(29)
  022dd2c  fabs 3, 1
  022dd30  fabs 2, 2
  022dd34  rlwinm 5, 3, 3, 29, 29
  022dd38  addic 3, 30, 96
  022dd3c  fsubs 1, 3, 2
  022dd40  stfs 1, 208(1)
  022dd44  lwz 7, 208(1)
  022dd48  lfs 1, 208(1)
  022dd4c  rlwimi 5, 7, 2, 30, 30
  022dd50  fsub 4, 1, 30
  022dd54  fsub 5, 1, 30
  022dd58  rlwimi 5, 4, 4, 28, 28
  022dd5c  ori 4, 6, 0
  022dd60  rlwimi 4, 5, 2, 26, 28
  022dd64  slwi 5, 5, 2
  022dd68  clrldi 4, 4, 32
  022dd6c  fsel 4, 4, 3, 2
  022dd70  lfsx 1, 6, 5
  022dd74  fsel 3, 5, 2, 3
  022dd78  lfs 2, 4(4)
  022dd7c  fcmpu 0, 4, 30
  022dd80  bt 1, 0x22dd8c
  022dd84  fmr 1, 30
  022dd88  b 0x22deb0
  022dd8c  fsubs 5, 3, 4
  022dd90  fadds 3, 3, 4
  022dd94  addic 4, 1, 16
  022dd98  li 7, 2
  022dd9c  addic 5, 4, 232
  022dda0  addic 6, 4, 248
  022dda4  mtctr 7
  022dda8  fdivs 3, 5, 3
  022ddac  fmuls 4, 3, 3
  022ddb0  stfs 3, 260(1)
  022ddb4  stfs 3, 252(1)
  022ddb8  stfs 3, 256(1)
  022ddbc  stfs 3, 248(1)
  022ddc0  lfs 6, 260(1)
  022ddc4  lfs 7, 252(1)
  022ddc8  lfs 8, 256(1)
  022ddcc  fmuls 5, 4, 4
  022ddd0  fmuls 7, 7, 4
  022ddd4  fmuls 6, 6, 5
  022ddd8  fmuls 3, 5, 5
  022dddc  fmuls 5, 8, 5
  022dde0  stfs 7, 252(1)
  022dde4  fmuls 4, 6, 4
  022dde8  stfs 5, 256(1)
  022ddec  stfs 4, 260(1)
  022ddf0  lfs 4, 232(4)
  022ddf4  fmuls 4, 4, 3
  022ddf8  stfs 4, 248(4)
  022ddfc  lfs 4, 4(5)
  022de00  addic 4, 4, 8
  022de04  addic 5, 5, 8
  022de08  fmuls 4, 4, 3
  022de0c  stfs 4, 4(6)
  022de10  addic 6, 6, 8
  022de14  bdnz 0x22ddf0
  022de18  li 6, 4
  022de1c  ori 4, 1, 0
  022de20  mtctr 6
  022de24  lis 5, 115
  022de28  addic 6, 4, 248
  022de2c  addic 5, 5, 22752
  022de30  ori 8, 6, 0
  022de34  lfs 3, 248(4)
  022de38  lfs 4, 0(5)
  022de3c  fmuls 3, 3, 4
  022de40  lfs 4, 4(5)
  022de44  addic 5, 5, 8
  022de48  stfs 3, 248(4)
  022de4c  lfs 3, 4(6)
  022de50  addic 4, 4, 8
  022de54  fmuls 3, 3, 4
  022de58  stfs 3, 4(6)
  022de5c  addic 6, 6, 8
  022de60  bdnz 0x22de34
  022de64  fmr 3, 30
  022de68  ori 4, 1, 0
  022de6c  mtctr 7
  022de70  lfs 4, 248(4)
  022de74  fadds 3, 3, 4
  022de78  addic 4, 4, 16
  022de7c  lfs 4, 4(8)
  022de80  lfs 5, 8(8)
  022de84  lfs 6, 12(8)
  022de88  addic 8, 8, 16
  022de8c  fadds 3, 3, 4
  022de90  fadds 3, 3, 5
  022de94  fadds 3, 3, 6
  022de98  bdnz 0x22de70
  022de9c  lis 4, 35
  022dea0  addi 4, 4, -10048
  022dea4  lfs 4, 16(4)
  022dea8  fadds 3, 3, 4
  022deac  fmadds 1, 3, 1, 2
  022deb0  ori 4, 3, 0
  022deb4  li 6, 8
  022deb8  ori 3, 31, 0
  022debc  li 7, 1
  022dec0  li 8, 0
  022dec4  bl 0x10ad80
  022dec8  nop
  022decc  li 6, 250
  022ded0  ori 3, 31, 0
  022ded4  li 4, 0
  022ded8  li 5, -1
  022dedc  stb 6, 279(30)
  022dee0  bl 0xfd8d0
  022dee4  nop
  022dee8  addic 4, 30, 272
  022deec  ori 3, 31, 0
  022def0  bl 0x10c808
  022def4  nop
  022def8  li 5, 255
  022defc  addic 4, 30, 272
  022df00  ori 3, 31, 0
  022df04  stb 5, 164(31)
  022df08  bl 0x10c9a0
  022df0c  nop
  022df10  lwz 4, 388(30)
  022df14  lwz 3, 384(30)
  022df18  cmpwi 4, 0
  022df1c  bt 2, 0x22df28
  022df20  lfs 1, 416(30)
  022df24  b 0x22df2c
  022df28  lfs 1, 412(30)
  022df2c  lis 4, 165
  022df30  stfs 1, 400(30)
  022df34  slwi 3, 3, 2
  022df38  addic 5, 4, 7136
  022df3c  extsw 6, 3
  022df40  ori 3, 31, 0
  022df44  addic 4, 30, 288
  022df48  li 7, 0
  022df4c  lwzx 5, 5, 6
  022df50  li 6, 0
  022df54  addic 8, 5, 16
  022df58  lwz 9, 0(5)
  022df5c  extsw 9, 9
  022df60  bl 0x111ba0
  022df64  nop
  022df68  cmpwi 3, 2
  022df6c  bt 2, 0x22e00c
  022df70  lfs 1, 372(30)
  022df74  lfs 2, 292(30)
  022df78  lfs 3, 368(30)
  022df7c  fsubs 1, 1, 2
  022df80  lfs 2, 288(30)
  022df84  fsubs 2, 3, 2
  022df88  fmuls 1, 1, 1
  022df8c  fmadds 1, 2, 2, 1
  022df90  lfs 2, 400(30)
  022df94  fsqrts 1, 1
  022df98  fcmpu 0, 1, 2
  022df9c  bt 1, 0x22dfc8
  022dfa0  lfs 1, 24(31)
  022dfa4  lfs 2, 296(30)
  022dfa8  lis 3, 35
  022dfac  fsubs 1, 1, 2
  022dfb0  addi 3, 3, -10048
  022dfb4  lfs 2, 20(3)
  022dfb8  fabs 1, 1
  022dfbc  fcmpu 0, 1, 2
  022dfc0  cror 6, 0, 2
  022dfc4  bt 6, 0x22dfd0
  022dfc8  li 3, 2
  022dfcc  stw 3, 356(30)
  022dfd0  lwz 3, 420(30)
  022dfd4  cmpwi 3, -1
  022dfd8  bt 2, 0x22e004
  022dfdc  addic 5, 30, 288
  022dfe0  extsw 4, 3
  022dfe4  ori 3, 5, 0
  022dfe8  bl 0x110b70
  022dfec  nop
  022dff0  cmpwi 3, 0
  022dff4  bf 2, 0x22e004
  022dff8  li 3, 2
  022dffc  stw 3, 356(30)
  022e000  b 0x22e00c
  022e004  li 3, -1
  022e008  stw 3, 420(30)
  022e00c  lwz 3, 352(30)
  022e010  cmpwi 3, 0
  022e014  bf 2, 0x22e028
  022e018  lis 3, 151
  022e01c  addic 3, 3, -25376
  022e020  lwz 3, 8320(3)
  022e024  stw 3, 352(30)
  022e028  lis 4, 35
  022e02c  addic 3, 31, 16
  022e030  addi 5, 4, -10048
  022e034  li 4, 0
  022e038  lfs 1, 24(5)
  022e03c  bl 0xffb70
  022e040  nop
  022e044  fmr 31, 1
  022e048  fcmpu 0, 31, 30
  022e04c  bt 2, 0x22e400
  022e050  bl 0x60780
  022e054  nop
  022e058  lhz 4, 52(31)
  022e05c  lbz 5, 32(31)
  022e060  cmpwi 3, 3
  022e064  lfs 10, 24(31)
  022e068  lfs 8, 16(31)
  022e06c  lfs 9, 20(31)
  022e070  bt 1, 0x22e094
  022e074  cmpwi 3, 1
  022e078  bt 1, 0x22e088
  022e07c  cmpwi 3, -1
  022e080  bf 1, 0x22e148
  022e084  b 0x22e0b0
  022e088  cmpwi 3, 2
  022e08c  bf 1, 0x22e148
  022e090  b 0x22e0b0
  022e094  cmpwi 3, 11
  022e098  bt 1, 0x22e0a8
  022e09c  cmpwi 3, 10
  022e0a0  bf 1, 0x22e148
  022e0a4  b 0x22e0b0
  022e0a8  cmpwi 3, 13
  022e0ac  bf 2, 0x22e148
  022e0b0  li 30, 0
  022e0b4  ori 6, 4, 0
  022e0b8  ori 3, 31, 0
  022e0bc  rlwimi 6, 30, 0, 19, 19
  022e0c0  li 4, 0
  022e0c4  li 5, -1
  022e0c8  sth 6, 52(31)
  022e0cc  bl 0xfd8d0
  022e0d0  nop
  022e0d4  lis 3, 35
  022e0d8  fmr 1, 30
  022e0dc  li 11, -1
  022e0e0  fmr 2, 30
  022e0e4  addi 6, 3, -10048
  022e0e8  li 7, 1
  022e0ec  lis 4, 115
  022e0f0  ori 3, 31, 0
  022e0f4  addic 4, 4, 20672
  022e0f8  lfs 3, 28(6)
  022e0fc  lfs 4, 32(6)
  022e100  li 5, 0
  022e104  lfs 5, 36(6)
  022e108  li 8, 10
  022e10c  lfs 6, 40(6)
  022e110  li 9, 3
  022e114  lfs 7, 44(6)
  022e118  li 10, 16
  022e11c  std 11, 144(1)
  022e120  std 7, 160(1)
  022e124  std 7, 168(1)
  022e128  std 11, 176(1)
  022e12c  std 30, 184(1)
  022e130  bl 0x10e030
  022e134  nop
  022e138  ori 3, 31, 0
  022e13c  bl 0xefb38
  022e140  nop
  022e144  b 0x22e4d0
  022e148  cmpwi 5, 15
  022e14c  bf 0, 0x22e43c
  022e150  lis 3, 161
  022e154  addic 3, 3, 2368
  022e158  lfs 6, 68(3)
  022e15c  lfs 5, 64(3)
  022e160  fmuls 7, 6, 6
  022e164  lwz 5, 72(3)
  022e168  lfs 4, 72(3)
  022e16c  lis 4, 115
  022e170  fabs 3, 4
  022e174  addic 4, 4, 22784
  022e178  fmadds 7, 5, 5, 7
  022e17c  fsqrts 1, 7
  022e180  fabs 11, 1
  022e184  stfs 1, 200(1)
  022e188  fsubs 1, 3, 11
  022e18c  stfs 1, 204(1)
  022e190  lwz 3, 200(1)
  022e194  lfs 1, 200(1)
  022e198  lwz 6, 204(1)
  022e19c  rlwinm 3, 3, 3, 29, 29
  022e1a0  fabs 2, 1
  022e1a4  lfs 1, 204(1)
  022e1a8  rlwimi 3, 6, 2, 30, 30
  022e1ac  fsub 12, 1, 30
  022e1b0  fsub 13, 1, 30
  022e1b4  rlwimi 3, 5, 4, 28, 28
  022e1b8  ori 5, 4, 0
  022e1bc  rlwimi 5, 3, 2, 26, 28
  022e1c0  slwi 3, 3, 2
  022e1c4  clrldi 5, 5, 32
  022e1c8  fsel 11, 12, 3, 11
  022e1cc  lfsx 1, 4, 3
  022e1d0  fsel 3, 13, 2, 3
  022e1d4  lfs 2, 4(5)
  022e1d8  fcmpu 0, 11, 30
  022e1dc  bt 1, 0x22e1e8
  022e1e0  fmr 1, 30
  022e1e4  b 0x22e30c
  022e1e8  fsubs 12, 3, 11
  022e1ec  fadds 3, 3, 11
  022e1f0  addic 3, 1, 16
  022e1f4  li 7, 2
  022e1f8  addic 4, 3, 200
  022e1fc  addic 5, 3, 216
  022e200  mtctr 7
  022e204  fdivs 3, 12, 3
  022e208  fmuls 11, 3, 3
  022e20c  stfs 3, 228(1)
  022e210  stfs 3, 220(1)
  022e214  stfs 3, 224(1)
  022e218  stfs 3, 216(1)
  022e21c  lfs 13, 228(1)
  022e220  lfs 0, 220(1)
  022e224  lfs 29, 224(1)
  022e228  fmuls 12, 11, 11
  022e22c  fmuls 0, 0, 11
  022e230  fmuls 13, 13, 12
  022e234  fmuls 3, 12, 12
  022e238  fmuls 12, 29, 12
  022e23c  stfs 0, 220(1)
  022e240  fmuls 11, 13, 11
  022e244  stfs 12, 224(1)
  022e248  stfs 11, 228(1)
  022e24c  lfs 11, 200(3)
  022e250  fmuls 11, 11, 3
  022e254  stfs 11, 216(3)
  022e258  lfs 11, 4(4)
  022e25c  addic 3, 3, 8
  022e260  addic 4, 4, 8
  022e264  fmuls 11, 11, 3
  022e268  stfs 11, 4(5)
  022e26c  addic 5, 5, 8
  022e270  bdnz 0x22e24c
  022e274  li 5, 4
  022e278  ori 3, 1, 0
  022e27c  mtctr 5
  022e280  lis 4, 115
  022e284  addic 5, 3, 216
  022e288  addic 4, 4, 22752
  022e28c  ori 6, 5, 0
  022e290  lfs 3, 216(3)
  022e294  lfs 11, 0(4)
  022e298  fmuls 3, 3, 11
  022e29c  lfs 11, 4(4)
  022e2a0  addic 4, 4, 8
  022e2a4  stfs 3, 216(3)
  022e2a8  lfs 3, 4(5)
  022e2ac  addic 3, 3, 8
  022e2b0  fmuls 3, 3, 11
  022e2b4  stfs 3, 4(5)
  022e2b8  addic 5, 5, 8
  022e2bc  bdnz 0x22e290
  022e2c0  fmr 3, 30
  022e2c4  ori 3, 1, 0
  022e2c8  mtctr 7
  022e2cc  lfs 11, 216(3)
  022e2d0  fadds 3, 3, 11
  022e2d4  addic 3, 3, 16
  022e2d8  lfs 11, 4(6)
  022e2dc  lfs 12, 8(6)
  022e2e0  lfs 13, 12(6)
  022e2e4  addic 6, 6, 16
  022e2e8  fadds 3, 3, 11
  022e2ec  fadds 3, 3, 12
  022e2f0  fadds 3, 3, 13
  022e2f4  bdnz 0x22e2cc
  022e2f8  lis 3, 35
  022e2fc  addi 3, 3, -10048
  022e300  lfs 11, 16(3)
  022e304  fadds 3, 3, 11
  022e308  fmadds 1, 3, 1, 2
  022e30c  lis 3, 35
  022e310  addi 3, 3, -10048
  022e314  lfs 2, 48(3)
  022e318  fcmpu 0, 1, 2
  022e31c  cror 6, 0, 2
  022e320  bt 6, 0x22e390
  022e324  fmadds 1, 4, 4, 7
  022e328  lis 3, 35
  022e32c  addi 3, 3, -10048
  022e330  fsqrts 1, 1
  022e334  lfs 2, 52(3)
  022e338  fdivs 2, 2, 1
  022e33c  fsub 3, 30, 1
  022e340  fsub 7, 30, 1
  022e344  fsub 11, 30, 1
  022e348  fsub 12, 1, 30
  022e34c  fsub 13, 1, 30
  022e350  fsub 1, 1, 30
  022e354  fmuls 4, 4, 2
  022e358  fmuls 6, 6, 2
  022e35c  fmuls 2, 5, 2
  022e360  fsel 3, 3, 30, 4
  022e364  fsel 5, 7, 30, 6
  022e368  fsel 7, 11, 30, 2
  022e36c  fsel 3, 12, 3, 4
  022e370  fsel 4, 13, 5, 6
  022e374  fsel 1, 1, 7, 2
  022e378  fadds 10, 10, 3
  022e37c  fadds 2, 9, 4
  022e380  fadds 1, 8, 1
  022e384  stfs 10, 24(31)
  022e388  stfs 2, 20(31)
  022e38c  stfs 1, 16(31)
  022e390  fcmpu 1, 10, 31
  022e394  bf 5, 0x22e3e4
  022e398  lis 3, 35
  022e39c  lfs 1, 104(30)
  022e3a0  lis 4, 114
  022e3a4  addi 3, 3, -10048
  022e3a8  lfs 2, 56(3)
  022e3ac  lfs 3, -3048(4)
  022e3b0  fnmsubs 10, 3, 2, 1
  022e3b4  stfs 10, 104(30)
  022e3b8  lfs 1, 24(31)
  022e3bc  fadds 10, 1, 10
  022e3c0  fcmpu 0, 10, 31
  022e3c4  stfs 10, 24(31)
  022e3c8  cror 6, 1, 2
  022e3cc  bt 6, 0x22e43c
  022e3d0  li 3, 0
  022e3d4  fmr 10, 31
  022e3d8  stw 3, 104(30)
  022e3dc  stfs 31, 24(31)
  022e3e0  b 0x22e43c
  022e3e4  bf 4, 0x22e43c
  022e3e8  lis 3, 35
  022e3ec  addi 3, 3, -10048
  022e3f0  lfs 1, 52(3)
  022e3f4  fadds 10, 10, 1
  022e3f8  stfs 10, 24(31)
  022e3fc  b 0x22e43c
  022e400  lbz 3, 32(31)
  022e404  lfs 10, 24(31)
  022e408  cmpwi 3, 15
  022e40c  bf 0, 0x22e43c
  022e410  lis 3, 35
  022e414  lfs 1, 104(30)
  022e418  lis 4, 114
  022e41c  addi 3, 3, -10048
  022e420  lfs 2, 56(3)
  022e424  lfs 3, -3048(4)
  022e428  fnmsubs 10, 3, 2, 1
  022e42c  stfs 10, 104(30)
  022e430  lfs 1, 24(31)
  022e434  fadds 10, 1, 10
  022e438  stfs 10, 24(31)
  022e43c  lis 3, 35
  022e440  lwz 5, 16(31)
  022e444  lis 4, 16384
  022e448  addi 3, 3, -10048
  022e44c  srawi 6, 5, 31
  022e450  lfs 1, 32(3)
  022e454  srwi 3, 6, 1
  022e458  xor 3, 3, 5
  022e45c  subc 3, 3, 6
  022e460  cmpw 3, 4
  022e464  bt 0, 0x22e4c4
  022e468  lis 4, 35
  022e46c  lis 5, 17535
  022e470  addi 4, 4, -10048
  022e474  ori 5, 5, 16384
  022e478  cmpw 3, 5
  022e47c  lfs 2, 60(4)
  022e480  bt 1, 0x22e4c4
  022e484  lwz 5, 20(31)
  022e488  lis 3, 17535
  022e48c  srawi 6, 5, 31
  022e490  lis 4, 16384
  022e494  srwi 7, 6, 1
  022e498  ori 3, 3, 16384
  022e49c  xor 5, 7, 5
  022e4a0  subc 5, 5, 6
  022e4a4  cmpw 5, 4
  022e4a8  cmpw 1, 5, 3
  022e4ac  bt 0, 0x22e4c4
  022e4b0  fcmpu 6, 10, 1
  022e4b4  bt 5, 0x22e4c4
  022e4b8  fcmpu 1, 10, 2
  022e4bc  bt 24, 0x22e4c4
  022e4c0  bf 5, 0x22e4d0
  022e4c4  ori 3, 31, 0
  022e4c8  bl 0xefb38
  022e4cc  nop
  022e4d0  ld 0, 384(1)
  022e4d4  mtlr 0
  022e4d8  lfd 29, 344(1)
  022e4dc  lfd 30, 352(1)
  022e4e0  lfd 31, 360(1)
  022e4e4  ld 29, 320(1)
  022e4e8  ld 30, 328(1)
  022e4ec  ld 31, 336(1)
  022e4f0  addi 1, 1, 368
  022e4f4  blr

UpdateMoby_1262:   # 0x22e580, 0x1720 bytes
  022e580  stdu 1, -592(1)
  022e584  mflr 0
  022e588  std 0, 608(1)
  022e58c  stfd 30, 576(1)
  022e590  stfd 31, 584(1)
  022e594  std 31, 568(1)
  022e598  ori 31, 3, 0
  022e59c  std 29, 552(1)
  022e5a0  lis 3, 35
  022e5a4  addi 29, 3, -6920
  022e5a8  std 30, 560(1)
  022e5ac  ori 3, 31, 0
  022e5b0  std 28, 544(1)
  022e5b4  std 27, 536(1)
  022e5b8  std 26, 528(1)
  022e5bc  lwz 30, 120(31)
  022e5c0  bl 0x22d900
  022e5c4  lfs 1, 0(29)
  022e5c8  ori 3, 31, 0
  022e5cc  lwz 29, 352(30)
  022e5d0  addic 5, 30, 1024
  022e5d4  li 4, 1
  022e5d8  bl 0x119a18
  022e5dc  nop
  022e5e0  lbz 3, 49(31)
  022e5e4  cmpwi 3, 0
  022e5e8  bt 2, 0x22e654
  022e5ec  lis 3, 149
  022e5f0  lfs 1, 20(31)
  022e5f4  lfs 2, 16(31)
  022e5f8  addic 3, 3, 5056
  022e5fc  lfs 3, 324(3)
  022e600  lfs 4, 320(3)
  022e604  fsubs 1, 1, 3
  022e608  fsubs 2, 2, 4
  022e60c  lfs 3, 24(31)
  022e610  lfs 4, 328(3)
  022e614  fsubs 3, 3, 4
  022e618  lis 3, 35
  022e61c  fmuls 1, 1, 1
  022e620  addi 3, 3, -6920
  022e624  fmadds 1, 2, 2, 1
  022e628  lfs 2, 4(3)
  022e62c  fmadds 1, 3, 3, 1
  022e630  fsqrts 1, 1
  022e634  fcmpu 0, 1, 2
  022e638  cror 6, 1, 2
  022e63c  bt 6, 0x22e654
  022e640  ori 3, 31, 0
  022e644  bl 0x106360
  022e648  nop
  022e64c  li 3, 22
  022e650  stb 3, 127(31)
  022e654  lbz 3, 32(31)
  022e658  cmpwi 1, 3, 6
  022e65c  cmpwi 6, 3, 5
  022e660  cmpwi 7, 3, 4
  022e664  bt 5, 0x22e698
  022e668  bt 6, 0x22f000
  022e66c  bt 26, 0x22ed90
  022e670  bt 30, 0x22ebc0
  022e674  cmpwi 3, 3
  022e678  bt 2, 0x22ea70
  022e67c  cmpwi 3, 2
  022e680  bt 2, 0x22ea04
  022e684  cmpwi 3, 1
  022e688  bt 2, 0x22e7b0
  022e68c  cmpwi 3, 0
  022e690  bt 2, 0x22e6cc
  022e694  b 0x22fc70
  022e698  cmpwi 3, 16
  022e69c  bt 2, 0x22fbdc
  022e6a0  cmpwi 3, 15
  022e6a4  bt 2, 0x22fad8
  022e6a8  cmpwi 3, 13
  022e6ac  bt 2, 0x22f8ac
  022e6b0  cmpwi 3, 12
  022e6b4  bt 2, 0x22f69c
  022e6b8  cmpwi 3, 11
  022e6bc  bt 2, 0x22f3d0
  022e6c0  cmpwi 3, 7
  022e6c4  bt 2, 0x22f064
  022e6c8  b 0x22fc70
  022e6cc  lis 29, 16384
  022e6d0  li 5, 2
  022e6d4  li 28, 1
  022e6d8  lis 7, 16320
  022e6dc  li 4, 8
  022e6e0  stw 29, 32(30)
  022e6e4  li 6, 12
  022e6e8  sth 5, 36(30)
  022e6ec  stb 28, 40(30)
  022e6f0  addic 3, 30, 192
  022e6f4  stw 7, 48(30)
  022e6f8  stb 4, 90(30)
  022e6fc  stb 6, 88(30)
  022e700  bl 0x100f8c
  022e704  nop
  022e708  lis 4, 35
  022e70c  stw 29, 200(30)
  022e710  lis 3, 16128
  022e714  addi 29, 4, -6920
  022e718  lis 27, 119
  022e71c  stw 3, 204(30)
  022e720  lfs 1, 8(29)
  022e724  lfs 2, 20860(27)
  022e728  fmuls 1, 2, 1
  022e72c  bl 0x502758
  022e730  nop
  022e734  stw 3, 192(30)
  022e738  lfs 1, 12(29)
  022e73c  lfs 2, 20860(27)
  022e740  fmuls 1, 2, 1
  022e744  stfs 1, 196(30)
  022e748  lfs 1, 16(29)
  022e74c  lfs 2, 20(29)
  022e750  bl 0xfcbe8
  022e754  nop
  022e758  lis 3, 119
  022e75c  lis 4, 114
  022e760  addic 5, 30, 480
  022e764  lfs 2, 20892(3)
  022e768  lfs 3, -3052(4)
  022e76c  fmuls 2, 2, 3
  022e770  ori 3, 31, 0
  022e774  li 4, 0
  022e778  fmuls 1, 2, 1
  022e77c  stfs 1, 228(30)
  022e780  lfs 1, 16(31)
  022e784  stfs 1, 368(30)
  022e788  lfs 1, 20(31)
  022e78c  stfs 1, 372(30)
  022e790  lfs 1, 24(31)
  022e794  stfs 1, 376(30)
  022e798  lfs 1, 28(31)
  022e79c  stfs 1, 380(30)
  022e7a0  bl 0xf1114
  022e7a4  nop
  022e7a8  stb 28, 32(31)
  022e7ac  b 0x22fc70
  022e7b0  lfs 1, 16(29)
  022e7b4  lfs 2, 16(31)
  022e7b8  addic 28, 31, 72
  022e7bc  lfs 3, 20(29)
  022e7c0  lfs 4, 20(31)
  022e7c4  fsubs 1, 1, 2
  022e7c8  fsubs 2, 3, 4
  022e7cc  bl 0x5e8338
  022e7d0  nop
  022e7d4  lis 3, 35
  022e7d8  lis 4, 114
  022e7dc  addi 3, 3, -6920
  022e7e0  lis 6, 114
  022e7e4  addic 5, 30, 392
  022e7e8  lfs 2, 24(3)
  022e7ec  lfs 3, -3048(4)
  022e7f0  lfs 4, 28(3)
  022e7f4  fmuls 2, 3, 2
  022e7f8  lfs 5, -3052(6)
  022e7fc  ori 3, 28, 0
  022e800  fmuls 4, 5, 4
  022e804  fmr 3, 2
  022e808  bl 0x10a2e0
  022e80c  nop
  022e810  lwz 3, 356(30)
  022e814  cmpwi 3, 2
  022e818  bt 2, 0x22e9a4
  022e81c  lfs 2, 20(31)
  022e820  lfs 1, 20(29)
  022e824  lfs 4, 16(31)
  022e828  fsubs 5, 2, 1
  022e82c  lfs 3, 16(29)
  022e830  fsubs 6, 4, 3
  022e834  lis 3, 119
  022e838  fmuls 5, 5, 5
  022e83c  fmadds 31, 6, 6, 5
  022e840  lfs 5, 20888(3)
  022e844  fsqrts 31, 31
  022e848  fcmpu 0, 5, 31
  022e84c  cror 6, 1, 2
  022e850  bt 6, 0x22e950
  022e854  fsubs 3, 3, 4
  022e858  lfs 30, 72(31)
  022e85c  fsubs 2, 1, 2
  022e860  fmr 1, 3
  022e864  bl 0x5e8338
  022e868  nop
  022e86c  fmr 2, 1
  022e870  fmr 1, 30
  022e874  bl 0x5026a0
  022e878  nop
  022e87c  lis 3, 35
  022e880  addi 4, 3, -6920
  022e884  lbz 3, 83(31)
  022e888  lfs 2, 32(4)
  022e88c  fcmpu 0, 1, 2
  022e890  cror 6, 1, 2
  022e894  bt 6, 0x22e900
  022e898  lis 4, 35
  022e89c  addi 4, 4, -6920
  022e8a0  lfs 1, 36(4)
  022e8a4  fcmpu 0, 31, 1
  022e8a8  cror 6, 1, 2
  022e8ac  bt 6, 0x22e900
  022e8b0  li 4, 2
  022e8b4  cmpwi 3, 3
  022e8b8  stb 4, 32(31)
  022e8bc  bt 2, 0x22fc70
  022e8c0  lis 3, 35
  022e8c4  lis 4, 114
  022e8c8  addi 3, 3, -6920
  022e8cc  li 5, 0
  022e8d0  lfs 1, 40(3)
  022e8d4  lfs 2, -3056(4)
  022e8d8  ori 3, 31, 0
  022e8dc  li 4, 3
  022e8e0  fmuls 1, 2, 1
  022e8e4  fctiwz 1, 1
  022e8e8  stfd 1, 512(1)
  022e8ec  lwz 6, 516(1)
  022e8f0  extsw 6, 6
  022e8f4  bl 0xfddc0
  022e8f8  nop
  022e8fc  b 0x22fc70
  022e900  li 4, 7
  022e904  cmpwi 3, 1
  022e908  stb 4, 32(31)
  022e90c  bt 2, 0x22fc70
  022e910  lis 3, 35
  022e914  lis 4, 114
  022e918  addi 3, 3, -6920
  022e91c  li 5, 0
  022e920  lfs 1, 44(3)
  022e924  lfs 2, -3056(4)
  022e928  ori 3, 31, 0
  022e92c  li 4, 1
  022e930  fmuls 1, 2, 1
  022e934  fctiwz 1, 1
  022e938  stfd 1, 512(1)
  022e93c  lwz 6, 516(1)
  022e940  extsw 6, 6
  022e944  bl 0xfddc0
  022e948  nop
  022e94c  b 0x22fc70
  022e950  li 3, 5
  022e954  lbz 4, 83(31)
  022e958  cmpwi 4, 6
  022e95c  stb 3, 32(31)
  022e960  bt 2, 0x22fc70
  022e964  lis 3, 35
  022e968  lis 4, 114
  022e96c  addi 3, 3, -6920
  022e970  li 5, 0
  022e974  lfs 1, 40(3)
  022e978  lfs 2, -3056(4)
  022e97c  ori 3, 31, 0
  022e980  fmuls 1, 2, 1
  022e984  li 4, 6
  022e988  fctiwz 1, 1
  022e98c  stfd 1, 512(1)
  022e990  lwz 6, 516(1)
  022e994  extsw 6, 6
  022e998  bl 0xfddc0
  022e99c  nop
  022e9a0  b 0x22fc70
  022e9a4  lwz 3, 388(30)
  022e9a8  cmpwi 3, 0
  022e9ac  bt 2, 0x22fc70
  022e9b0  li 3, 11
  022e9b4  lbz 4, 83(31)
  022e9b8  cmpwi 4, 1
  022e9bc  stb 3, 32(31)
  022e9c0  bt 2, 0x22fc70
  022e9c4  lis 3, 35
  022e9c8  lis 4, 114
  022e9cc  addi 3, 3, -6920
  022e9d0  li 5, 0
  022e9d4  lfs 1, 44(3)
  022e9d8  lfs 2, -3056(4)
  022e9dc  ori 3, 31, 0
  022e9e0  fmuls 1, 2, 1
  022e9e4  li 4, 1
  022e9e8  fctiwz 1, 1
  022e9ec  stfd 1, 512(1)
  022e9f0  lwz 6, 516(1)
  022e9f4  extsw 6, 6
  022e9f8  bl 0xfddc0
  022e9fc  nop
  022ea00  b 0x22fc70
  022ea04  lbz 3, 112(31)
  022ea08  rlwinm 3, 3, 0, 30, 30
  022ea0c  cmpwi 3, 0
  022ea10  bt 2, 0x22fc70
  022ea14  li 4, 3
  022ea18  ori 3, 31, 0
  022ea1c  stb 4, 32(31)
  022ea20  bl 0x22cae8
  022ea24  lbz 3, 83(31)
  022ea28  cmpwi 3, 5
  022ea2c  bt 2, 0x22fc70
  022ea30  lis 3, 35
  022ea34  lis 4, 114
  022ea38  addi 3, 3, -6920
  022ea3c  li 5, 0
  022ea40  lfs 1, 40(3)
  022ea44  lfs 2, -3056(4)
  022ea48  ori 3, 31, 0
  022ea4c  fmuls 1, 2, 1
  022ea50  li 4, 5
  022ea54  fctiwz 1, 1
  022ea58  stfd 1, 512(1)
  022ea5c  lwz 6, 516(1)
  022ea60  extsw 6, 6
  022ea64  bl 0xfddc0
  022ea68  nop
  022ea6c  b 0x22fc70
  022ea70  lbz 3, 112(31)
  022ea74  rlwinm 3, 3, 0, 30, 30
  022ea78  cmpwi 3, 0
  022ea7c  bt 2, 0x22fc70
  022ea80  lfs 1, 20(31)
  022ea84  lfs 2, 20(29)
  022ea88  lfs 3, 16(31)
  022ea8c  fsubs 1, 1, 2
  022ea90  lfs 2, 16(29)
  022ea94  lwz 3, 356(30)
  022ea98  fsubs 2, 3, 2
  022ea9c  cmpwi 3, 2
  022eaa0  fmuls 1, 1, 1
  022eaa4  fmadds 1, 2, 2, 1
  022eaa8  fsqrts 1, 1
  022eaac  bt 2, 0x22eb6c
  022eab0  lis 3, 35
  022eab4  addi 3, 3, -6920
  022eab8  lfs 2, 36(3)
  022eabc  fcmpu 0, 1, 2
  022eac0  cror 6, 1, 2
  022eac4  bt 6, 0x22eb6c
  022eac8  li 3, 4
  022eacc  lbz 4, 83(31)
  022ead0  cmpwi 4, 4
  022ead4  stb 3, 32(31)
  022ead8  bt 2, 0x22eb18
  022eadc  lis 3, 35
  022eae0  lis 4, 114
  022eae4  addi 3, 3, -6920
  022eae8  li 5, 0
  022eaec  lfs 1, 44(3)
  022eaf0  lfs 2, -3056(4)
  022eaf4  ori 3, 31, 0
  022eaf8  li 4, 4
  022eafc  fmuls 1, 2, 1
  022eb00  fctiwz 1, 1
  022eb04  stfd 1, 512(1)
  022eb08  lwz 6, 516(1)
  022eb0c  extsw 6, 6
  022eb10  bl 0xfddc0
  022eb14  nop
  022eb18  lis 3, 119
  022eb1c  vspltisw 4, -1
  022eb20  li 4, 20884
  022eb24  lis 5, 35
  022eb28  li 6, 48
  022eb2c  addi 5, 5, -6920
  022eb30  vslw 4, 4, 4
  022eb34  <unknown>
  022eb38  lis 3, 114
  022eb3c  vcfsx 2, 2, 0
  022eb40  <unknown>
  022eb44  li 4, -3056
  022eb48  vspltw 3, 3, 0
  022eb4c  <unknown>
  022eb50  li 3, 404
  022eb54  vaddfp 2, 2, 3
  022eb58  vmaddfp 2, 5, 2, 4
  022eb5c  vctsxs 2, 2, 0
  022eb60  vspltw 2, 2, 0
  022eb64  stvewx 2, 3, 30
  022eb68  b 0x22fc70
  022eb6c  li 3, 1
  022eb70  lbz 4, 83(31)
  022eb74  cmpwi 4, 0
  022eb78  stb 3, 32(31)
  022eb7c  bt 2, 0x22fc70
  022eb80  lis 3, 35
  022eb84  lis 4, 114
  022eb88  addi 3, 3, -6920
  022eb8c  li 5, 0
  022eb90  lfs 1, 44(3)
  022eb94  lfs 2, -3056(4)
  022eb98  ori 3, 31, 0
  022eb9c  fmuls 1, 2, 1
  022eba0  li 4, 0
  022eba4  fctiwz 1, 1
  022eba8  stfd 1, 512(1)
  022ebac  lwz 6, 516(1)
  022ebb0  extsw 6, 6
  022ebb4  bl 0xfddc0
  022ebb8  nop
  022ebbc  b 0x22fc70
  022ebc0  lfs 1, 16(29)
  022ebc4  addic 28, 31, 72
  022ebc8  lfs 2, 16(31)
  022ebcc  lfs 3, 20(29)
  022ebd0  lfs 4, 20(31)
  022ebd4  fsubs 1, 1, 2
  022ebd8  fsubs 2, 3, 4
  022ebdc  bl 0x5e8338
  022ebe0  nop
  022ebe4  lis 3, 35
  022ebe8  lis 4, 114
  022ebec  addi 3, 3, -6920
  022ebf0  lis 6, 114
  022ebf4  addic 5, 30, 392
  022ebf8  lfs 2, 24(3)
  022ebfc  lfs 3, -3048(4)
  022ec00  lfs 4, 28(3)
  022ec04  fmuls 2, 3, 2
  022ec08  lfs 5, -3052(6)
  022ec0c  ori 3, 28, 0
  022ec10  fmuls 4, 5, 4
  022ec14  fmr 3, 2
  022ec18  bl 0x10a2e0
  022ec1c  nop
  022ec20  addic 3, 30, 404
  022ec24  bl 0x4fff60
  022ec28  nop
  022ec2c  cmpwi 3, 0
  022ec30  bt 2, 0x22ec90
  022ec34  li 4, 3
  022ec38  ori 3, 31, 0
  022ec3c  stb 4, 32(31)
  022ec40  bl 0x22cae8
  022ec44  lbz 3, 83(31)
  022ec48  cmpwi 3, 5
  022ec4c  bt 2, 0x22fc70
  022ec50  lis 3, 35
  022ec54  lis 4, 114
  022ec58  addi 3, 3, -6920
  022ec5c  li 5, 0
  022ec60  lfs 1, 52(3)
  022ec64  lfs 2, -3056(4)
  022ec68  ori 3, 31, 0
  022ec6c  li 4, 5
  022ec70  fmuls 1, 2, 1
  022ec74  fctiwz 1, 1
  022ec78  stfd 1, 512(1)
  022ec7c  lwz 6, 516(1)
  022ec80  extsw 6, 6
  022ec84  bl 0xfddc0
  022ec88  nop
  022ec8c  b 0x22fc70
  022ec90  lfs 1, 20(31)
  022ec94  lfs 2, 20(29)
  022ec98  lfs 3, 16(31)
  022ec9c  fsubs 1, 1, 2
  022eca0  lfs 2, 16(29)
  022eca4  fsubs 2, 3, 2
  022eca8  lis 3, 119
  022ecac  fmuls 1, 1, 1
  022ecb0  fmadds 1, 2, 2, 1
  022ecb4  lfs 2, 20888(3)
  022ecb8  fsqrts 1, 1
  022ecbc  fcmpu 0, 1, 2
  022ecc0  cror 6, 1, 2
  022ecc4  bt 6, 0x22ed30
  022ecc8  li 4, 0
  022eccc  addic 5, 30, 480
  022ecd0  ori 3, 31, 0
  022ecd4  bl 0xf1114
  022ecd8  nop
  022ecdc  li 4, 5
  022ece0  lbz 3, 83(31)
  022ece4  cmpwi 3, 6
  022ece8  stb 4, 32(31)
  022ecec  bt 2, 0x22fc70
  022ecf0  lis 3, 35
  022ecf4  lis 4, 114
  022ecf8  addi 3, 3, -6920
  022ecfc  li 5, 0
  022ed00  lfs 1, 40(3)
  022ed04  lfs 2, -3056(4)
  022ed08  ori 3, 31, 0
  022ed0c  li 4, 6
  022ed10  fmuls 1, 2, 1
  022ed14  fctiwz 1, 1
  022ed18  stfd 1, 512(1)
  022ed1c  lwz 6, 516(1)
  022ed20  extsw 6, 6
  022ed24  bl 0xfddc0
  022ed28  nop
  022ed2c  b 0x22fc70
  022ed30  lwz 3, 388(30)
  022ed34  cmpwi 3, 0
  022ed38  bt 2, 0x22fc70
  022ed3c  li 3, 11
  022ed40  lbz 4, 83(31)
  022ed44  cmpwi 4, 1
  022ed48  stb 3, 32(31)
  022ed4c  bt 2, 0x22fc70
  022ed50  lis 3, 35
  022ed54  lis 4, 114
  022ed58  addi 3, 3, -6920
  022ed5c  li 5, 0
  022ed60  lfs 1, 44(3)
  022ed64  lfs 2, -3056(4)
  022ed68  ori 3, 31, 0
  022ed6c  li 4, 1
  022ed70  fmuls 1, 2, 1
  022ed74  fctiwz 1, 1
  022ed78  stfd 1, 512(1)
  022ed7c  lwz 6, 516(1)
  022ed80  extsw 6, 6
  022ed84  bl 0xfddc0
  022ed88  nop
  022ed8c  b 0x22fc70
  022ed90  lfs 1, 16(29)
  022ed94  lfs 2, 16(31)
  022ed98  addic 28, 31, 72
  022ed9c  lfs 3, 20(29)
  022eda0  lfs 4, 20(31)
  022eda4  fsubs 1, 1, 2
  022eda8  fsubs 2, 3, 4
  022edac  bl 0x5e8338
  022edb0  nop
  022edb4  lis 3, 35
  022edb8  lis 4, 114
  022edbc  addi 29, 3, -6920
  022edc0  lis 3, 114
  022edc4  addic 5, 30, 392
  022edc8  lfs 2, 24(29)
  022edcc  lfs 3, -3048(3)
  022edd0  lfs 4, 28(29)
  022edd4  fmuls 2, 3, 2
  022edd8  lfs 5, -3052(4)
  022eddc  ori 3, 28, 0
  022ede0  fmuls 4, 5, 4
  022ede4  fmr 3, 2
  022ede8  bl 0x10a2e0
  022edec  nop
  022edf0  addic 5, 1, 192
  022edf4  ori 3, 31, 0
  022edf8  li 4, 0
  022edfc  bl 0xf1114
  022ee00  nop
  022ee04  lfs 1, 16(31)
  022ee08  ori 3, 31, 0
  022ee0c  lfs 2, 20(31)
  022ee10  stfs 1, 208(1)
  022ee14  lfs 1, 28(31)
  022ee18  stfs 2, 212(1)
  022ee1c  stfs 1, 220(1)
  022ee20  lfs 1, 56(29)
  022ee24  lfs 2, 24(31)
  022ee28  fadds 1, 2, 1
  022ee2c  stfs 1, 216(1)
  022ee30  bl 0xefe40
  022ee34  nop
  022ee38  lfs 2, 60(29)
  022ee3c  fcmpu 0, 1, 2
  022ee40  bt 0, 0x22ef74
  022ee44  lis 3, 35
  022ee48  addi 3, 3, -6920
  022ee4c  lfs 2, 36(3)
  022ee50  fcmpu 0, 1, 2
  022ee54  bt 1, 0x22ef74
  022ee58  lis 3, 35
  022ee5c  lfs 1, 72(31)
  022ee60  addi 6, 3, -6920
  022ee64  lis 3, 17839
  022ee68  lfs 2, 64(6)
  022ee6c  lfs 3, 68(6)
  022ee70  fadds 2, 1, 2
  022ee74  fsubs 5, 3, 1
  022ee78  lfs 4, 72(6)
  022ee7c  fsubs 6, 4, 1
  022ee80  lis 8, 16256
  022ee84  ori 9, 3, 57190
  022ee88  addic 29, 1, 416
  022ee8c  ori 4, 31, 0
  022ee90  fsubs 3, 3, 2
  022ee94  fsub 7, 1, 5
  022ee98  fsubs 4, 4, 2
  022ee9c  ori 3, 29, 0
  022eea0  li 5, 1
  022eea4  addic 7, 1, 224
  022eea8  fsub 8, 2, 3
  022eeac  fsel 1, 7, 5, 1
  022eeb0  lfs 5, 76(6)
  022eeb4  fsel 2, 8, 3, 2
  022eeb8  fsub 3, 6, 1
  022eebc  fsub 7, 4, 2
  022eec0  fsel 1, 3, 6, 1
  022eec4  lfs 3, 80(6)
  022eec8  lfs 6, 84(6)
  022eecc  fsel 2, 7, 4, 2
  022eed0  fmuls 4, 1, 1
  022eed4  fmuls 7, 2, 2
  022eed8  fmuls 8, 4, 1
  022eedc  fmuls 10, 7, 2
  022eee0  fmuls 11, 4, 8
  022eee4  fmadds 1, 8, 5, 1
  022eee8  lfs 8, 88(6)
  022eeec  fmuls 9, 7, 10
  022eef0  fmadds 2, 10, 5, 2
  022eef4  fmuls 5, 4, 11
  022eef8  fmadds 1, 11, 3, 1
  022eefc  fmuls 10, 7, 9
  022ef00  fmadds 2, 9, 3, 2
  022ef04  fmuls 3, 4, 5
  022ef08  fmadds 1, 5, 6, 1
  022ef0c  fmuls 4, 7, 10
  022ef10  fmadds 2, 10, 6, 2
  022ef14  fmadds 1, 3, 8, 1
  022ef18  fmadds 2, 4, 8, 2
  022ef1c  stfs 1, 228(1)
  022ef20  lfs 1, 92(6)
  022ef24  stw 8, 232(1)
  022ef28  stw 9, 236(1)
  022ef2c  stfs 2, 224(1)
  022ef30  bl 0x10581c
  022ef34  nop
  022ef38  li 3, 0
  022ef3c  li 6, 1
  022ef40  lhz 8, 166(31)
  022ef44  addic 4, 1, 208
  022ef48  ori 7, 31, 0
  022ef4c  stb 3, 440(1)
  022ef50  addic 5, 30, 480
  022ef54  sth 8, 442(1)
  022ef58  addic 3, 1, 192
  022ef5c  stb 6, 441(1)
  022ef60  ori 8, 29, 0
  022ef64  li 9, 5
  022ef68  ori 6, 4, 0
  022ef6c  bl 0x105d58
  022ef70  nop
  022ef74  lfs 1, 192(1)
  022ef78  stfs 1, 480(30)
  022ef7c  lfs 1, 196(1)
  022ef80  stfs 1, 484(30)
  022ef84  lfs 1, 200(1)
  022ef88  stfs 1, 488(30)
  022ef8c  lfs 1, 204(1)
  022ef90  stfs 1, 492(30)
  022ef94  lbz 3, 112(31)
  022ef98  rlwinm 3, 3, 0, 30, 30
  022ef9c  cmpwi 3, 0
  022efa0  bt 2, 0x22fc70
  022efa4  li 3, 6
  022efa8  lbz 5, 83(31)
  022efac  li 4, 1
  022efb0  cmpwi 5, 2
  022efb4  stb 3, 32(31)
  022efb8  stb 4, 188(31)
  022efbc  bt 2, 0x22fc70
  022efc0  lis 3, 35
  022efc4  lis 4, 114
  022efc8  addi 3, 3, -6920
  022efcc  li 5, 0
  022efd0  lfs 1, 40(3)
  022efd4  lfs 2, -3056(4)
  022efd8  ori 3, 31, 0
  022efdc  li 4, 2
  022efe0  fmuls 1, 2, 1
  022efe4  fctiwz 1, 1
  022efe8  stfd 1, 512(1)
  022efec  lwz 6, 516(1)
  022eff0  extsw 6, 6
  022eff4  bl 0xfddc0
  022eff8  nop
  022effc  b 0x22fc70
  022f000  lbz 3, 112(31)
  022f004  rlwinm 3, 3, 0, 30, 30
  022f008  cmpwi 3, 0
  022f00c  bt 2, 0x22fc70
  022f010  lbz 3, 188(31)
  022f014  lbz 4, 83(31)
  022f018  stb 3, 32(31)
  022f01c  cmpwi 4, 0
  022f020  bt 2, 0x22fc70
  022f024  lis 3, 35
  022f028  lis 4, 114
  022f02c  addi 3, 3, -6920
  022f030  li 5, 0
  022f034  lfs 1, 44(3)
  022f038  lfs 2, -3056(4)
  022f03c  ori 3, 31, 0
  022f040  fmuls 1, 2, 1
  022f044  li 4, 0
  022f048  fctiwz 1, 1
  022f04c  stfd 1, 512(1)
  022f050  lwz 6, 516(1)
  022f054  extsw 6, 6
  022f058  bl 0xfddc0
  022f05c  nop
  022f060  b 0x22fc70
  022f064  lfs 1, 16(29)
  022f068  lfs 2, 16(31)
  022f06c  lfs 3, 20(29)
  022f070  lfs 4, 20(31)
  022f074  fsubs 1, 1, 2
  022f078  fsubs 2, 3, 4
  022f07c  bl 0x5e8338
  022f080  nop
  022f084  lfs 2, 424(30)
  022f088  bl 0x502578
  022f08c  nop
  022f090  lis 3, 35
  022f094  lis 4, 114
  022f098  addi 28, 3, -6920
  022f09c  addic 5, 30, 392
  022f0a0  ori 3, 31, 0
  022f0a4  lfs 4, 24(28)
  022f0a8  lfs 2, 96(28)
  022f0ac  lfs 5, 56(28)
  022f0b0  lfs 6, -3052(4)
  022f0b4  fmr 3, 5
  022f0b8  fmuls 4, 6, 4
  022f0bc  bl 0xff2e8
  022f0c0  nop
  022f0c4  lfs 1, 64(28)
  022f0c8  lfs 2, 68(28)
  022f0cc  lfs 3, 72(31)
  022f0d0  lfs 4, 72(28)
  022f0d4  fadds 1, 3, 1
  022f0d8  fsubs 5, 2, 3
  022f0dc  fsubs 6, 4, 3
  022f0e0  li 7, 0
  022f0e4  ori 3, 31, 0
  022f0e8  addic 4, 30, 192
  022f0ec  addic 5, 1, 240
  022f0f0  fsubs 2, 2, 1
  022f0f4  fsub 7, 3, 5
  022f0f8  fsubs 4, 4, 1
  022f0fc  addic 6, 1, 256
  022f100  fsub 8, 1, 2
  022f104  fsel 3, 7, 5, 3
  022f108  lfs 5, 76(28)
  022f10c  fsel 1, 8, 2, 1
  022f110  fsub 2, 6, 3
  022f114  fsub 8, 4, 1
  022f118  fsel 2, 2, 6, 3
  022f11c  lfs 3, 80(28)
  022f120  lfs 6, 84(28)
  022f124  fsel 1, 8, 4, 1
  022f128  fmuls 4, 2, 2
  022f12c  fmuls 7, 1, 1
  022f130  fmuls 8, 4, 2
  022f134  fmuls 10, 7, 1
  022f138  fmuls 11, 4, 8
  022f13c  fmadds 2, 8, 5, 2
  022f140  lfs 8, 88(28)
  022f144  lfs 9, 100(28)
  022f148  fmuls 12, 7, 10
  022f14c  fmadds 1, 10, 5, 1
  022f150  fmuls 5, 4, 11
  022f154  fmadds 2, 11, 3, 2
  022f158  fmuls 10, 7, 12
  022f15c  fmadds 1, 12, 3, 1
  022f160  fmuls 3, 4, 5
  022f164  fmadds 2, 5, 6, 2
  022f168  fmuls 4, 7, 10
  022f16c  fmadds 1, 10, 6, 1
  022f170  fmadds 2, 3, 8, 2
  022f174  fmadds 1, 4, 8, 1
  022f178  fmuls 2, 2, 9
  022f17c  fmuls 3, 1, 9
  022f180  stfs 2, 244(1)
  022f184  lfs 31, 104(28)
  022f188  stw 7, 248(1)
  022f18c  lfs 1, 92(28)
  022f190  stfs 3, 240(1)
  022f194  bl 0x101058
  022f198  nop
  022f19c  rlwinm 3, 3, 0, 30, 30
  022f1a0  cmpwi 3, 0
  022f1a4  bt 2, 0x22f1e4
  022f1a8  bl 0x5c8318
  022f1ac  nop
  022f1b0  sldi 3, 3, 1
  022f1b4  srawi 4, 3, 1
  022f1b8  addze 4, 4
  022f1bc  sldi 4, 4, 1
  022f1c0  subc 3, 3, 4
  022f1c4  addic 3, 3, -1
  022f1c8  extsw 3, 3
  022f1cc  bl 0x502730
  022f1d0  nop
  022f1d4  lis 3, 35
  022f1d8  addi 3, 3, -6920
  022f1dc  lfs 31, 108(3)
  022f1e0  fmuls 31, 1, 31
  022f1e4  lis 3, 35
  022f1e8  stfs 31, 424(30)
  022f1ec  lwz 4, 408(30)
  022f1f0  addic 28, 31, 16
  022f1f4  addi 3, 3, -6920
  022f1f8  ori 5, 28, 0
  022f1fc  ori 6, 28, 0
  022f200  lfs 1, 112(3)
  022f204  extsw 3, 4
  022f208  bl 0x1145d8
  022f20c  nop
  022f210  lwz 3, 408(30)
  022f214  addic 5, 29, 16
  022f218  addic 6, 1, 272
  022f21c  extsw 3, 3
  022f220  ori 4, 28, 0
  022f224  bl 0xfc948
  022f228  nop
  022f22c  lfs 3, 16(31)
  022f230  cmpwi 3, 0
  022f234  lfs 2, 16(29)
  022f238  li 3, 0
  022f23c  lfs 1, 20(31)
  022f240  lfs 31, 20(29)
  022f244  lbz 30, 83(31)
  022f248  bt 2, 0x22f298
  022f24c  lfs 4, 276(1)
  022f250  lfs 5, 272(1)
  022f254  fsubs 4, 1, 4
  022f258  lfs 6, 24(31)
  022f25c  fsubs 5, 3, 5
  022f260  lfs 7, 280(1)
  022f264  fsubs 6, 6, 7
  022f268  lis 3, 35
  022f26c  addi 3, 3, -6920
  022f270  fmuls 4, 4, 4
  022f274  fmadds 4, 5, 5, 4
  022f278  lfs 5, 116(3)
  022f27c  li 3, 0
  022f280  fmadds 4, 6, 6, 4
  022f284  fsqrts 4, 4
  022f288  fcmpu 0, 4, 5
  022f28c  cror 6, 1, 2
  022f290  bt 6, 0x22f298
  022f294  li 3, 1
  022f298  fsubs 1, 1, 31
  022f29c  fsubs 2, 3, 2
  022f2a0  lis 4, 35
  022f2a4  cmpwi 1, 3, 0
  022f2a8  addi 4, 4, -6920
  022f2ac  fmuls 1, 1, 1
  022f2b0  fmadds 3, 2, 2, 1
  022f2b4  lfs 1, 36(4)
  022f2b8  fsqrts 3, 3
  022f2bc  fcmpu 0, 3, 1
  022f2c0  cror 2, 1, 2
  022f2c4  bt 2, 0x22f318
  022f2c8  li 3, 2
  022f2cc  cmpwi 30, 3
  022f2d0  stb 3, 32(31)
  022f2d4  bt 2, 0x22fc70
  022f2d8  lis 3, 35
  022f2dc  lis 4, 114
  022f2e0  addi 3, 3, -6920
  022f2e4  li 5, 0
  022f2e8  lfs 1, 40(3)
  022f2ec  lfs 2, -3056(4)
  022f2f0  ori 3, 31, 0
  022f2f4  li 4, 3
  022f2f8  fmuls 1, 2, 1
  022f2fc  fctiwz 1, 1
  022f300  stfd 1, 512(1)
  022f304  lwz 6, 516(1)
  022f308  extsw 6, 6
  022f30c  bl 0xfddc0
  022f310  nop
  022f314  b 0x22fc70
  022f318  bt 6, 0x22f36c
  022f31c  li 3, 2
  022f320  cmpwi 30, 3
  022f324  stb 3, 32(31)
  022f328  bt 2, 0x22fc70
  022f32c  lis 3, 35
  022f330  lis 4, 114
  022f334  addi 3, 3, -6920
  022f338  li 5, 0
  022f33c  lfs 1, 40(3)
  022f340  lfs 2, -3056(4)
  022f344  ori 3, 31, 0
  022f348  fmuls 1, 2, 1
  022f34c  li 4, 3
  022f350  fctiwz 1, 1
  022f354  stfd 1, 512(1)
  022f358  lwz 6, 516(1)
  022f35c  extsw 6, 6
  022f360  bl 0xfddc0
  022f364  nop
  022f368  b 0x22fc70
  022f36c  lis 3, 119
  022f370  lfs 1, 20888(3)
  022f374  fcmpu 0, 1, 3
  022f378  cror 6, 0, 2
  022f37c  bt 6, 0x22fc70
  022f380  li 3, 5
  022f384  cmpwi 30, 6
  022f388  stb 3, 32(31)
  022f38c  bt 2, 0x22fc70
  022f390  lis 3, 35
  022f394  lis 4, 114
  022f398  addi 3, 3, -6920
  022f39c  li 5, 0
  022f3a0  lfs 1, 40(3)
  022f3a4  lfs 2, -3056(4)
  022f3a8  ori 3, 31, 0
  022f3ac  li 4, 6
  022f3b0  fmuls 1, 2, 1
  022f3b4  fctiwz 1, 1
  022f3b8  stfd 1, 512(1)
  022f3bc  lwz 6, 516(1)
  022f3c0  extsw 6, 6
  022f3c4  bl 0xfddc0
  022f3c8  nop
  022f3cc  b 0x22fc70
  022f3d0  lfs 1, 16(29)
  022f3d4  lfs 2, 16(31)
  022f3d8  lfs 3, 20(29)
  022f3dc  lfs 4, 20(31)
  022f3e0  fsubs 1, 1, 2
  022f3e4  fsubs 2, 3, 4
  022f3e8  bl 0x5e8338
  022f3ec  nop
  022f3f0  lis 3, 35
  022f3f4  lis 4, 114
  022f3f8  addi 28, 3, -6920
  022f3fc  addic 5, 30, 392
  022f400  ori 3, 31, 0
  022f404  lfs 4, 24(28)
  022f408  lfs 2, 96(28)
  022f40c  lfs 5, 56(28)
  022f410  lfs 6, -3052(4)
  022f414  fmr 3, 5
  022f418  fmuls 4, 6, 4
  022f41c  bl 0xff2e8
  022f420  nop
  022f424  lfs 1, 64(28)
  022f428  lfs 2, 68(28)
  022f42c  lfs 3, 72(31)
  022f430  lfs 4, 72(28)
  022f434  fadds 1, 3, 1
  022f438  fsubs 5, 2, 3
  022f43c  fsubs 6, 4, 3
  022f440  li 27, 0
  022f444  ori 3, 31, 0
  022f448  addic 4, 30, 192
  022f44c  addic 5, 1, 288
  022f450  fsubs 2, 2, 1
  022f454  fsub 7, 3, 5
  022f458  fsubs 4, 4, 1
  022f45c  addic 6, 1, 304
  022f460  fsub 8, 1, 2
  022f464  fsel 3, 7, 5, 3
  022f468  lfs 5, 76(28)
  022f46c  fsel 1, 8, 2, 1
  022f470  fsub 2, 6, 3
  022f474  fsub 7, 4, 1
  022f478  fsel 2, 2, 6, 3
  022f47c  lfs 3, 80(28)
  022f480  lfs 6, 84(28)
  022f484  fsel 1, 7, 4, 1
  022f488  fmuls 4, 2, 2
  022f48c  fmuls 7, 1, 1
  022f490  fmuls 8, 4, 2
  022f494  fmuls 10, 7, 1
  022f498  fmuls 11, 4, 8
  022f49c  fmadds 2, 8, 5, 2
  022f4a0  lfs 8, 88(28)
  022f4a4  lfs 9, 100(28)
  022f4a8  stw 27, 296(1)
  022f4ac  fmuls 12, 7, 10
  022f4b0  fmadds 1, 10, 5, 1
  022f4b4  fmuls 5, 4, 11
  022f4b8  fmadds 2, 11, 3, 2
  022f4bc  fmuls 10, 7, 12
  022f4c0  fmadds 1, 12, 3, 1
  022f4c4  fmuls 3, 4, 5
  022f4c8  fmadds 2, 5, 6, 2
  022f4cc  fmuls 4, 7, 10
  022f4d0  fmadds 1, 10, 6, 1
  022f4d4  fmadds 2, 3, 8, 2
  022f4d8  fmadds 1, 4, 8, 1
  022f4dc  fmuls 2, 2, 9
  022f4e0  fmuls 3, 1, 9
  022f4e4  stfs 2, 292(1)
  022f4e8  lfs 1, 92(28)
  022f4ec  stfs 3, 288(1)
  022f4f0  bl 0x101058
  022f4f4  nop
  022f4f8  lwz 3, 408(30)
  022f4fc  addic 26, 31, 16
  022f500  lfs 1, 112(28)
  022f504  extsw 3, 3
  022f508  ori 5, 26, 0
  022f50c  ori 6, 26, 0
  022f510  bl 0x1145d8
  022f514  nop
  022f518  lwz 3, 408(30)
  022f51c  ori 4, 26, 0
  022f520  extsw 3, 3
  022f524  addic 5, 29, 16
  022f528  addic 6, 1, 320
  022f52c  bl 0xfc948
  022f530  nop
  022f534  lwz 4, 388(30)
  022f538  cmpwi 3, 0
  022f53c  lbz 3, 83(31)
  022f540  ori 5, 27, 0
  022f544  lfs 2, 16(31)
  022f548  lfs 1, 20(31)
  022f54c  bt 2, 0x22f598
  022f550  lfs 3, 324(1)
  022f554  lfs 4, 320(1)
  022f558  fsubs 3, 1, 3
  022f55c  fsubs 4, 2, 4
  022f560  lfs 5, 24(31)
  022f564  lfs 6, 328(1)
  022f568  fsubs 5, 5, 6
  022f56c  lis 6, 35
  022f570  fmuls 3, 3, 3
  022f574  addi 6, 6, -6920
  022f578  fmadds 3, 4, 4, 3
  022f57c  lfs 4, 116(6)
  022f580  fmadds 3, 5, 5, 3
  022f584  fsqrts 3, 3
  022f588  fcmpu 0, 3, 4
  022f58c  cror 6, 1, 2
  022f590  bt 6, 0x22f598
  022f594  li 5, 1
  022f598  cmpwi 4, 0
  022f59c  cmpwi 1, 5, 0
  022f5a0  bf 2, 0x22f5b0
  022f5a4  li 3, 13
  022f5a8  stb 3, 32(31)
  022f5ac  b 0x22fc70
  022f5b0  bt 6, 0x22f604
  022f5b4  li 4, 12
  022f5b8  cmpwi 3, 6
  022f5bc  stb 4, 32(31)
  022f5c0  bt 2, 0x22fc70
  022f5c4  lis 3, 35
  022f5c8  lis 4, 114
  022f5cc  addi 3, 3, -6920
  022f5d0  li 5, 0
  022f5d4  lfs 1, 40(3)
  022f5d8  lfs 2, -3056(4)
  022f5dc  ori 3, 31, 0
  022f5e0  fmuls 1, 2, 1
  022f5e4  li 4, 6
  022f5e8  fctiwz 1, 1
  022f5ec  stfd 1, 512(1)
  022f5f0  lwz 6, 516(1)
  022f5f4  extsw 6, 6
  022f5f8  bl 0xfddc0
  022f5fc  nop
  022f600  b 0x22fc70
  022f604  lfs 3, 20(29)
  022f608  lfs 4, 16(29)
  022f60c  fsubs 1, 1, 3
  022f610  fsubs 2, 2, 4
  022f614  lis 3, 119
  022f618  fmuls 1, 1, 1
  022f61c  fmadds 1, 2, 2, 1
  022f620  lfs 2, 20888(3)
  022f624  fsqrts 1, 1
  022f628  fcmpu 0, 1, 2
  022f62c  cror 6, 1, 2
  022f630  bt 6, 0x22fc70
  022f634  ori 3, 31, 0
  022f638  addic 5, 30, 480
  022f63c  li 4, 0
  022f640  bl 0xf1114
  022f644  nop
  022f648  li 3, 12
  022f64c  lbz 4, 83(31)
  022f650  cmpwi 4, 6
  022f654  stb 3, 32(31)
  022f658  bt 2, 0x22fc70
  022f65c  lis 3, 35
  022f660  lis 4, 114
  022f664  addi 3, 3, -6920
  022f668  li 5, 0
  022f66c  lfs 1, 40(3)
  022f670  lfs 2, -3056(4)
  022f674  ori 3, 31, 0
  022f678  fmuls 1, 2, 1
  022f67c  li 4, 6
  022f680  fctiwz 1, 1
  022f684  stfd 1, 512(1)
  022f688  lwz 6, 516(1)
  022f68c  extsw 6, 6
  022f690  bl 0xfddc0
  022f694  nop
  022f698  b 0x22fc70
  022f69c  li 4, 0
  022f6a0  addic 5, 1, 336
  022f6a4  ori 3, 31, 0
  022f6a8  bl 0xf1114
  022f6ac  nop
  022f6b0  lis 4, 35
  022f6b4  lfs 1, 16(31)
  022f6b8  ori 3, 31, 0
  022f6bc  lfs 2, 20(31)
  022f6c0  addi 29, 4, -6920
  022f6c4  stfs 1, 352(1)
  022f6c8  lfs 1, 28(31)
  022f6cc  stfs 2, 356(1)
  022f6d0  stfs 1, 364(1)
  022f6d4  lfs 1, 120(29)
  022f6d8  lfs 2, 24(31)
  022f6dc  fadds 1, 2, 1
  022f6e0  stfs 1, 360(1)
  022f6e4  bl 0xefe40
  022f6e8  nop
  022f6ec  lfs 2, 60(29)
  022f6f0  fcmpu 0, 1, 2
  022f6f4  bt 0, 0x22f828
  022f6f8  lis 3, 35
  022f6fc  addi 3, 3, -6920
  022f700  lfs 2, 36(3)
  022f704  fcmpu 0, 1, 2
  022f708  bt 1, 0x22f828
  022f70c  lis 3, 35
  022f710  lfs 1, 72(31)
  022f714  addi 6, 3, -6920
  022f718  lis 3, 17839
  022f71c  lfs 2, 64(6)
  022f720  lfs 3, 68(6)
  022f724  fadds 2, 1, 2
  022f728  lfs 4, 72(6)
  022f72c  fsubs 5, 3, 1
  022f730  fsubs 6, 4, 1
  022f734  lis 8, 16256
  022f738  ori 9, 3, 57190
  022f73c  addic 29, 1, 464
  022f740  li 5, 1
  022f744  fsubs 3, 3, 2
  022f748  fsub 7, 1, 5
  022f74c  fsubs 4, 4, 2
  022f750  ori 3, 29, 0
  022f754  addic 7, 1, 368
  022f758  ori 4, 31, 0
  022f75c  fsub 9, 2, 3
  022f760  fsel 1, 7, 5, 1
  022f764  lfs 5, 76(6)
  022f768  fsel 2, 9, 3, 2
  022f76c  fsub 3, 6, 1
  022f770  fsub 8, 4, 2
  022f774  fsel 1, 3, 6, 1
  022f778  lfs 3, 80(6)
  022f77c  lfs 6, 84(6)
  022f780  lfs 7, 88(6)
  022f784  fsel 2, 8, 4, 2
  022f788  fmuls 4, 1, 1
  022f78c  fmuls 8, 2, 2
  022f790  fmuls 9, 4, 1
  022f794  fmuls 10, 8, 2
  022f798  fmuls 11, 4, 9
  022f79c  fmadds 1, 9, 5, 1
  022f7a0  fmuls 9, 8, 10
  022f7a4  fmadds 2, 10, 5, 2
  022f7a8  fmuls 5, 4, 11
  022f7ac  fmadds 1, 11, 3, 1
  022f7b0  fmuls 10, 8, 9
  022f7b4  fmadds 2, 9, 3, 2
  022f7b8  fmuls 3, 4, 5
  022f7bc  fmadds 1, 5, 6, 1
  022f7c0  fmuls 4, 8, 10
  022f7c4  fmadds 2, 10, 6, 2
  022f7c8  fmadds 1, 3, 7, 1
  022f7cc  fmadds 2, 4, 7, 2
  022f7d0  stfs 1, 372(1)
  022f7d4  lfs 1, 92(6)
  022f7d8  stw 8, 376(1)
  022f7dc  stw 9, 380(1)
  022f7e0  stfs 2, 368(1)
  022f7e4  bl 0x10581c
  022f7e8  nop
  022f7ec  li 3, 0
  022f7f0  lhz 7, 166(31)
  022f7f4  li 6, 1
  022f7f8  addic 4, 1, 352
  022f7fc  addic 5, 30, 480
  022f800  stb 3, 488(1)
  022f804  sth 7, 490(1)
  022f808  addic 3, 1, 336
  022f80c  stb 6, 489(1)
  022f810  ori 7, 31, 0
  022f814  ori 8, 29, 0
  022f818  li 9, 5
  022f81c  ori 6, 4, 0
  022f820  bl 0x105d58
  022f824  nop
  022f828  lfs 1, 336(1)
  022f82c  stfs 1, 480(30)
  022f830  lfs 1, 340(1)
  022f834  stfs 1, 484(30)
  022f838  lfs 1, 344(1)
  022f83c  stfs 1, 488(30)
  022f840  lfs 1, 348(1)
  022f844  stfs 1, 492(30)
  022f848  lbz 3, 112(31)
  022f84c  rlwinm 3, 3, 0, 30, 30
  022f850  cmpwi 3, 0
  022f854  bt 2, 0x22fc70
  022f858  li 3, 11
  022f85c  lbz 4, 83(31)
  022f860  cmpwi 4, 1
  022f864  stb 3, 32(31)
  022f868  bt 2, 0x22fc70
  022f86c  lis 3, 35
  022f870  lis 4, 114
  022f874  addi 3, 3, -6920
  022f878  li 5, 0
  022f87c  lfs 1, 44(3)
  022f880  lfs 2, -3056(4)
  022f884  ori 3, 31, 0
  022f888  fmuls 1, 2, 1
  022f88c  li 4, 1
  022f890  fctiwz 1, 1
  022f894  stfd 1, 512(1)
  022f898  lwz 6, 516(1)
  022f89c  extsw 6, 6
  022f8a0  bl 0xfddc0
  022f8a4  nop
  022f8a8  b 0x22fc70
  022f8ac  lfs 1, 368(30)
  022f8b0  lfs 2, 16(31)
  022f8b4  lfs 3, 372(30)
  022f8b8  lfs 4, 20(31)
  022f8bc  fsubs 1, 1, 2
  022f8c0  fsubs 2, 3, 4
  022f8c4  bl 0x5e8338
  022f8c8  nop
  022f8cc  lis 3, 35
  022f8d0  lis 4, 114
  022f8d4  addi 29, 3, -6920
  022f8d8  addic 5, 30, 392
  022f8dc  ori 3, 31, 0
  022f8e0  lfs 4, 24(29)
  022f8e4  lfs 2, 96(29)
  022f8e8  lfs 5, 56(29)
  022f8ec  lfs 6, -3052(4)
  022f8f0  fmr 3, 5
  022f8f4  fmuls 4, 6, 4
  022f8f8  bl 0xff2e8
  022f8fc  nop
  022f900  lfs 1, 64(29)
  022f904  lfs 31, 72(31)
  022f908  lfs 2, 68(29)
  022f90c  fadds 1, 31, 1
  022f910  lfs 3, 72(29)
  022f914  fsubs 4, 2, 31
  022f918  li 3, 0
  022f91c  fsubs 2, 2, 1
  022f920  fsub 6, 31, 4
  022f924  fsubs 5, 3, 1
  022f928  fsubs 3, 3, 31
  022f92c  fsub 7, 1, 2
  022f930  fsel 4, 6, 4, 31
  022f934  lfs 6, 76(29)
  022f938  fsel 1, 7, 2, 1
  022f93c  fsub 2, 3, 4
  022f940  fsub 8, 5, 1
  022f944  fsel 2, 2, 3, 4
  022f948  lfs 3, 80(29)
  022f94c  lfs 4, 84(29)
  022f950  lfs 9, 88(29)
  022f954  fsel 1, 8, 5, 1
  022f958  fmuls 5, 2, 2
  022f95c  fmuls 7, 1, 1
  022f960  fmuls 8, 5, 2
  022f964  fmuls 10, 7, 1
  022f968  fmuls 11, 5, 8
  022f96c  fmadds 2, 8, 6, 2
  022f970  lfs 8, 100(29)
  022f974  fmuls 12, 7, 10
  022f978  fmadds 1, 10, 6, 1
  022f97c  fmuls 6, 5, 11
  022f980  fmadds 2, 11, 3, 2
  022f984  lfs 10, 20(31)
  022f988  lfs 11, 16(31)
  022f98c  stw 3, 392(1)
  022f990  fmuls 13, 7, 12
  022f994  fmadds 1, 12, 3, 1
  022f998  fmuls 3, 5, 6
  022f99c  fmadds 2, 6, 4, 2
  022f9a0  fmuls 5, 7, 13
  022f9a4  fmadds 1, 13, 4, 1
  022f9a8  fmadds 2, 3, 9, 2
  022f9ac  fmadds 1, 5, 9, 1
  022f9b0  fmuls 2, 2, 8
  022f9b4  fmuls 1, 1, 8
  022f9b8  stfs 2, 388(1)
  022f9bc  stfs 1, 384(1)
  022f9c0  lfs 1, 368(30)
  022f9c4  lfs 2, 372(30)
  022f9c8  fsubs 1, 1, 11
  022f9cc  fsubs 2, 2, 10
  022f9d0  bl 0x5e8338
  022f9d4  nop
  022f9d8  fmr 2, 1
  022f9dc  fmr 1, 31
  022f9e0  bl 0x5026a0
  022f9e4  nop
  022f9e8  lfs 2, 124(29)
  022f9ec  fcmpu 0, 1, 2
  022f9f0  cror 6, 1, 2
  022f9f4  bt 6, 0x22fa38
  022f9f8  lis 3, 35
  022f9fc  addic 5, 1, 384
  022fa00  addi 29, 3, -6920
  022fa04  ori 3, 31, 0
  022fa08  addic 4, 30, 192
  022fa0c  addic 6, 1, 400
  022fa10  lfs 1, 92(29)
  022fa14  bl 0x101058
  022fa18  nop
  022fa1c  addic 5, 31, 16
  022fa20  lwz 3, 408(30)
  022fa24  lfs 1, 112(29)
  022fa28  ori 6, 5, 0
  022fa2c  extsw 3, 3
  022fa30  bl 0x1145d8
  022fa34  nop
  022fa38  lfs 1, 372(30)
  022fa3c  lfs 2, 20(31)
  022fa40  lfs 3, 368(30)
  022fa44  fsubs 1, 1, 2
  022fa48  lfs 2, 16(31)
  022fa4c  fsubs 2, 3, 2
  022fa50  lfs 3, 376(30)
  022fa54  lfs 4, 24(31)
  022fa58  fsubs 3, 3, 4
  022fa5c  fmuls 1, 1, 1
  022fa60  lis 3, 35
  022fa64  addi 3, 3, -6920
  022fa68  fmadds 1, 2, 2, 1
  022fa6c  lfs 2, 92(3)
  022fa70  fmadds 1, 3, 3, 1
  022fa74  fsqrts 1, 1
  022fa78  fcmpu 0, 1, 2
  022fa7c  cror 6, 1, 2
  022fa80  bt 6, 0x22fc70
  022fa84  li 3, 1
  022fa88  lbz 4, 83(31)
  022fa8c  cmpwi 4, 0
  022fa90  stb 3, 32(31)
  022fa94  bt 2, 0x22fc70
  022fa98  lis 3, 35
  022fa9c  lis 4, 114
  022faa0  addi 3, 3, -6920
  022faa4  li 5, 0
  022faa8  lfs 1, 44(3)
  022faac  lfs 2, -3056(4)
  022fab0  ori 3, 31, 0
  022fab4  li 4, 0
  022fab8  fmuls 1, 2, 1
  022fabc  fctiwz 1, 1
  022fac0  stfd 1, 512(1)
  022fac4  lwz 6, 516(1)
  022fac8  extsw 6, 6
  022facc  bl 0xfddc0
  022fad0  nop
  022fad4  b 0x22fc70
  022fad8  ori 3, 31, 0
  022fadc  addic 4, 30, 96
  022fae0  bl 0x10b030
  022fae4  nop
  022fae8  rlwinm 4, 3, 0, 25, 25
  022faec  cmpwi 4, 0
  022faf0  bt 2, 0x22fbbc
  022faf4  li 3, 0
  022faf8  li 5, 97
  022fafc  li 7, 98
  022fb00  li 4, 99
  022fb04  li 6, 101
  022fb08  stb 3, 96(30)
  022fb0c  li 8, 102
  022fb10  stbx 3, 30, 5
  022fb14  li 9, 103
  022fb18  stbx 3, 30, 7
  022fb1c  stbx 3, 30, 4
  022fb20  li 5, 105
  022fb24  stb 3, 100(30)
  022fb28  li 7, 106
  022fb2c  stbx 3, 30, 6
  022fb30  li 4, 107
  022fb34  stbx 3, 30, 8
  022fb38  li 6, 109
  022fb3c  stbx 3, 30, 9
  022fb40  li 8, 110
  022fb44  stb 3, 104(30)
  022fb48  li 9, 111
  022fb4c  stbx 3, 30, 5
  022fb50  stbx 3, 30, 7
  022fb54  stbx 3, 30, 4
  022fb58  stb 3, 108(30)
  022fb5c  stbx 3, 30, 6
  022fb60  li 4, 1
  022fb64  stbx 3, 30, 8
  022fb68  stbx 3, 30, 9
  022fb6c  lbz 3, 83(31)
  022fb70  stb 4, 32(31)
  022fb74  cmpwi 3, 0
  022fb78  bt 2, 0x22fc70
  022fb7c  lis 3, 35
  022fb80  lis 4, 114
  022fb84  addi 3, 3, -6920
  022fb88  li 5, 0
  022fb8c  lfs 1, 40(3)
  022fb90  lfs 2, -3056(4)
  022fb94  ori 3, 31, 0
  022fb98  fmuls 1, 2, 1
  022fb9c  li 4, 0
  022fba0  fctiwz 1, 1
  022fba4  stfd 1, 512(1)
  022fba8  lwz 6, 516(1)
  022fbac  extsw 6, 6
  022fbb0  bl 0xfddc0
  022fbb4  nop
  022fbb8  b 0x22fc70
  022fbbc  li 4, 288
  022fbc0  and 3, 3, 4
  022fbc4  cmpwi 3, 0
  022fbc8  bt 2, 0x22fc70
  022fbcc  ori 3, 31, 0
  022fbd0  bl 0xefb38
  022fbd4  nop
  022fbd8  b 0x22fc70
  022fbdc  addic 4, 30, 96
  022fbe0  ori 3, 31, 0
  022fbe4  bl 0x10b030
  022fbe8  nop
  022fbec  li 4, 352
  022fbf0  and 3, 3, 4
  022fbf4  cmpwi 3, 0
  022fbf8  bt 2, 0x22fc70
  022fbfc  lis 3, 35
  022fc00  li 7, -1
  022fc04  addi 5, 3, -6920
  022fc08  li 6, 1
  022fc0c  li 11, 0
  022fc10  ori 3, 31, 0
  022fc14  addic 4, 30, 96
  022fc18  lfs 1, 104(5)
  022fc1c  li 8, 10
  022fc20  lfs 3, 128(5)
  022fc24  li 9, 3
  022fc28  lfs 4, 100(5)
  022fc2c  li 10, 16
  022fc30  lfs 5, 60(5)
  022fc34  fmr 2, 1
  022fc38  lfs 6, 92(5)
  022fc3c  lfs 7, 36(5)
  022fc40  std 7, 144(1)
  022fc44  li 5, 0
  022fc48  std 6, 160(1)
  022fc4c  std 6, 168(1)
  022fc50  std 7, 176(1)
  022fc54  std 11, 184(1)
  022fc58  bl 0x10e030
  022fc5c  nop
  022fc60  ori 3, 31, 0
  022fc64  bl 0xefb38
  022fc68  nop
  022fc6c  b 0x22fc70
  022fc70  ld 0, 608(1)
  022fc74  mtlr 0
  022fc78  lfd 30, 576(1)
  022fc7c  lfd 31, 584(1)
  022fc80  ld 26, 528(1)
  022fc84  ld 27, 536(1)
  022fc88  ld 28, 544(1)
  022fc8c  ld 29, 552(1)
  022fc90  ld 30, 560(1)
  022fc94  ld 31, 568(1)
  022fc98  addi 1, 1, 592
  022fc9c  blr
