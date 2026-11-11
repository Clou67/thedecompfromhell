# game/update/moby1407.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1407_0026eed0:   # 0x26eed0, 0x488 bytes
  026eed0  stdu 1, -304(1)
  026eed4  mflr 0
  026eed8  std 0, 320(1)
  026eedc  stfd 24, 240(1)
  026eee0  stfd 25, 248(1)
  026eee4  stfd 26, 256(1)
  026eee8  stfd 27, 264(1)
  026eeec  stfd 28, 272(1)
  026eef0  stfd 29, 280(1)
  026eef4  stfd 30, 288(1)
  026eef8  stfd 31, 296(1)
  026eefc  std 31, 232(1)
  026ef00  ori 31, 3, 0
  026ef04  std 29, 216(1)
  026ef08  lis 3, 161
  026ef0c  lis 4, 39
  026ef10  std 30, 224(1)
  026ef14  addi 29, 4, -4440
  026ef18  lwz 30, 120(31)
  026ef1c  lwz 3, 1808(3)
  026ef20  std 28, 208(1)
  026ef24  std 27, 200(1)
  026ef28  std 26, 192(1)
  026ef2c  std 25, 184(1)
  026ef30  std 24, 176(1)
  026ef34  std 23, 168(1)
  026ef38  std 22, 160(1)
  026ef3c  std 21, 152(1)
  026ef40  std 20, 144(1)
  026ef44  extsw 3, 3
  026ef48  bl 0x502730
  026ef4c  nop
  026ef50  lis 3, 122
  026ef54  lis 28, 114
  026ef58  lis 4, 122
  026ef5c  lfs 2, -1476(3)
  026ef60  lfs 3, -3052(28)
  026ef64  lwz 3, -1496(4)
  026ef68  fmuls 31, 2, 3
  026ef6c  extsw 3, 3
  026ef70  fmuls 31, 31, 1
  026ef74  bl 0x685c4
  026ef78  nop
  026ef7c  ori 4, 3, 0
  026ef80  li 3, 24
  026ef84  bl 0x174f80
  026ef88  nop
  026ef8c  lis 7, 122
  026ef90  li 3, 0
  026ef94  li 4, 1
  026ef98  li 5, 0
  026ef9c  li 6, 1
  026efa0  lwz 7, -1500(7)
  026efa4  bl 0x502ea8
  026efa8  nop
  026efac  ori 4, 3, 0
  026efb0  li 3, 3
  026efb4  bl 0x174f80
  026efb8  nop
  026efbc  li 3, 0
  026efc0  li 4, 0
  026efc4  li 8, 0
  026efc8  li 5, 0
  026efcc  li 6, 0
  026efd0  li 7, 0
  026efd4  bl 0x502f08
  026efd8  nop
  026efdc  ori 4, 3, 0
  026efe0  li 3, 6
  026efe4  bl 0x174f80
  026efe8  nop
  026efec  lis 9, 0
  026eff0  li 3, 0
  026eff4  li 4, 0
  026eff8  ori 9, 9, 65424
  026effc  li 5, 1
  026f000  li 6, 1
  026f004  li 7, 1
  026f008  li 8, 0
  026f00c  bl 0x502fd4
  026f010  nop
  026f014  ori 4, 3, 0
  026f018  li 3, 26
  026f01c  bl 0x174f80
  026f020  nop
  026f024  lis 3, 122
  026f028  lfs 1, 4(30)
  026f02c  lis 4, 114
  026f030  stfs 1, 0(30)
  026f034  lfs 2, 0(29)
  026f038  lfs 3, -1484(3)
  026f03c  lfs 4, -3056(4)
  026f040  fmuls 3, 3, 4
  026f044  lfs 4, 4(29)
  026f048  fdivs 2, 2, 3
  026f04c  lfs 3, -3052(28)
  026f050  fmuls 2, 2, 4
  026f054  fmuls 2, 2, 3
  026f058  bl 0x502578
  026f05c  nop
  026f060  ori 3, 31, 0
  026f064  stfs 1, 4(30)
  026f068  addic 4, 1, 112
  026f06c  addic 5, 1, 116
  026f070  addic 6, 1, 120
  026f074  bl 0xf1ef0
  026f078  nop
  026f07c  lis 3, 122
  026f080  lwz 4, 120(1)
  026f084  lis 27, 122
  026f088  lwz 5, 116(1)
  026f08c  li 28, 0
  026f090  slwi 4, 4, 16
  026f094  slwi 5, 5, 8
  026f098  lwz 3, -1492(3)
  026f09c  ori 26, 28, 0
  026f0a0  lwz 6, 112(1)
  026f0a4  slwi 3, 3, 24
  026f0a8  or 29, 5, 6
  026f0ac  lwz 7, -2624(27)
  026f0b0  or 3, 3, 4
  026f0b4  or 29, 3, 29
  026f0b8  ori 3, 7, 0
  026f0bc  cmpwi 3, 0
  026f0c0  bf 1, 0x26f1ec
  026f0c4  lis 3, 39
  026f0c8  lis 25, 251
  026f0cc  addi 3, 3, -4440
  026f0d0  lis 21, 122
  026f0d4  addic 25, 25, -23772
  026f0d8  lis 22, 251
  026f0dc  addic 21, 21, -2592
  026f0e0  lfs 30, 8(3)
  026f0e4  addic 24, 25, 4
  026f0e8  lfs 29, 12(3)
  026f0ec  addic 23, 25, 8
  026f0f0  lfs 28, 16(3)
  026f0f4  addic 22, 22, -22872
  026f0f8  lfs 27, 20(3)
  026f0fc  lfs 26, 24(3)
  026f100  lfs 25, 28(3)
  026f104  lfs 24, 32(3)
  026f108  lfs 1, 4(21)
  026f10c  lfs 3, 0(21)
  026f110  fmuls 1, 1, 1
  026f114  lis 20, 122
  026f118  lfs 2, -1488(20)
  026f11c  fmadds 1, 3, 3, 1
  026f120  fsqrts 1, 1
  026f124  bl 0x502798
  026f128  nop
  026f12c  lfs 2, -1488(20)
  026f130  fmuls 1, 1, 30
  026f134  fdivs 1, 1, 2
  026f138  bl 0x502648
  026f13c  nop
  026f140  lfs 2, 4(30)
  026f144  bl 0x502578
  026f148  nop
  026f14c  lfs 5, 0(21)
  026f150  lfs 6, 16(31)
  026f154  lis 3, 122
  026f158  addic 28, 28, 1
  026f15c  fsubs 2, 29, 1
  026f160  fsubs 3, 28, 1
  026f164  fsub 4, 1, 2
  026f168  fsel 1, 4, 2, 1
  026f16c  fadds 4, 5, 6
  026f170  lfs 2, 4(21)
  026f174  lfs 5, 8(21)
  026f178  addic 21, 21, 12
  026f17c  fsub 6, 3, 1
  026f180  stfs 4, 0(25)
  026f184  addic 25, 25, 12
  026f188  fsel 1, 6, 3, 1
  026f18c  lfs 3, 20(31)
  026f190  fadds 2, 2, 3
  026f194  lfs 3, -1480(3)
  026f198  lwz 3, -2624(27)
  026f19c  cmpw 28, 3
  026f1a0  fmuls 4, 1, 1
  026f1a4  stfs 2, 0(24)
  026f1a8  lfs 2, 24(31)
  026f1ac  addic 24, 24, 12
  026f1b0  fadds 2, 5, 2
  026f1b4  fmuls 6, 4, 1
  026f1b8  stw 29, 0(22)
  026f1bc  addic 22, 22, 4
  026f1c0  fmuls 7, 4, 6
  026f1c4  fmadds 1, 6, 27, 1
  026f1c8  fmuls 5, 4, 7
  026f1cc  fmadds 1, 7, 26, 1
  026f1d0  fmuls 4, 4, 5
  026f1d4  fmadds 1, 5, 25, 1
  026f1d8  fmadds 1, 4, 24, 1
  026f1dc  fmadds 1, 3, 1, 2
  026f1e0  stfs 1, 0(23)
  026f1e4  addic 23, 23, 12
  026f1e8  bt 0, 0x26f108
  026f1ec  lis 4, 39
  026f1f0  ori 31, 26, 0
  026f1f4  addi 4, 4, -4440
  026f1f8  ori 23, 1, 0
  026f1fc  lfs 30, 36(4)
  026f200  cmpwi 3, 0
  026f204  ori 30, 26, 0
  026f208  bf 1, 0x26f2b0
  026f20c  lis 29, 122
  026f210  lis 28, 251
  026f214  lis 25, 122
  026f218  lis 24, 251
  026f21c  addic 29, 29, -2052
  026f220  addic 28, 28, -23232
  026f224  addic 25, 25, -2048
  026f228  addic 24, 24, -23228
  026f22c  lis 3, 16256
  026f230  lis 4, -16608
  026f234  fmr 2, 30
  026f238  lis 5, 16160
  026f23c  ori 4, 4, 55676
  026f240  stw 3, 124(1)
  026f244  ori 5, 5, 55676
  026f248  stw 3, 132(1)
  026f24c  stw 4, 128(1)
  026f250  lfs 1, 124(23)
  026f254  stw 5, 136(1)
  026f258  fmuls 1, 1, 31
  026f25c  bl 0x502798
  026f260  nop
  026f264  lfs 2, 0(29)
  026f268  fadds 3, 2, 1
  026f26c  lfs 1, 128(23)
  026f270  fmr 2, 30
  026f274  fmuls 1, 1, 31
  026f278  stfs 3, 0(28)
  026f27c  bl 0x502798
  026f280  nop
  026f284  lfs 2, 0(25)
  026f288  addic 30, 30, 1
  026f28c  lwz 3, -2624(27)
  026f290  fadds 1, 2, 1
  026f294  addic 29, 29, 8
  026f298  cmpw 30, 3
  026f29c  addic 28, 28, 8
  026f2a0  addic 25, 25, 8
  026f2a4  stfs 1, 0(24)
  026f2a8  addic 24, 24, 8
  026f2ac  bt 0, 0x26f22c
  026f2b0  bl 0x71170
  026f2b4  nop
  026f2b8  lis 4, 122
  026f2bc  lwz 3, -2624(27)
  026f2c0  lis 5, 122
  026f2c4  lis 6, 122
  026f2c8  extsw 3, 3
  026f2cc  li 7, 9
  026f2d0  lwz 4, -1512(4)
  026f2d4  lwz 5, -1504(5)
  026f2d8  lwz 6, -1508(6)
  026f2dc  bl 0x74604
  026f2e0  nop
  026f2e4  addic 31, 31, 1
  026f2e8  lwz 3, -2624(27)
  026f2ec  addic 23, 23, 8
  026f2f0  cmpwi 31, 2
  026f2f4  bt 0, 0x26f200
  026f2f8  ld 0, 320(1)
  026f2fc  mtlr 0
  026f300  lfd 24, 240(1)
  026f304  lfd 25, 248(1)
  026f308  lfd 26, 256(1)
  026f30c  lfd 27, 264(1)
  026f310  lfd 28, 272(1)
  026f314  lfd 29, 280(1)
  026f318  lfd 30, 288(1)
  026f31c  lfd 31, 296(1)
  026f320  ld 20, 144(1)
  026f324  ld 21, 152(1)
  026f328  ld 22, 160(1)
  026f32c  ld 23, 168(1)
  026f330  ld 24, 176(1)
  026f334  ld 25, 184(1)
  026f338  ld 26, 192(1)
  026f33c  ld 27, 200(1)
  026f340  ld 28, 208(1)
  026f344  ld 29, 216(1)
  026f348  ld 30, 224(1)
  026f34c  ld 31, 232(1)
  026f350  addi 1, 1, 304
  026f354  blr

UpdateMoby_1407:   # 0x26f358, 0x80 bytes
  026f358  stdu 1, -128(1)
  026f35c  mflr 0
  026f360  std 0, 144(1)
  026f364  std 31, 120(1)
  026f368  ori 31, 3, 0
  026f36c  lbz 3, 32(3)
  026f370  cmpwi 3, 0
  026f374  bf 2, 0x26f39c
  026f378  ori 3, 31, 0
  026f37c  li 4, 64
  026f380  li 5, 64
  026f384  li 6, 64
  026f388  bl 0xf1ec8
  026f38c  nop
  026f390  li 3, 1
  026f394  stb 3, 32(31)
  026f398  b 0x26f3c4
  026f39c  lis 3, 113
  026f3a0  ori 4, 31, 0
  026f3a4  addic 3, 3, -23600
  026f3a8  bl 0x6d7e0
  026f3ac  nop
  026f3b0  lhz 4, 52(31)
  026f3b4  li 3, 0
  026f3b8  ori 4, 4, 1
  026f3bc  sth 3, 50(31)
  026f3c0  sth 4, 52(31)
  026f3c4  ld 0, 144(1)
  026f3c8  mtlr 0
  026f3cc  ld 31, 120(1)
  026f3d0  addi 1, 1, 128
  026f3d4  blr
