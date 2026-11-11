# game/update/moby855.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M855_0048ec58:   # 0x48ec58, 0x14 bytes
  048ec58  lis 3, 140
  048ec5c  lis 4, 1
  048ec60  addic 3, 3, 31476
  048ec64  stw 4, 72(3)
  048ec68  blr

UpdateMoby_855:   # 0x48ecd0, 0x92c bytes
  048ecd0  stdu 1, -416(1)
  048ecd4  mflr 0
  048ecd8  std 0, 432(1)
  048ecdc  stfd 14, 272(1)
  048ece0  stfd 15, 280(1)
  048ece4  stfd 16, 288(1)
  048ece8  stfd 17, 296(1)
  048ecec  stfd 18, 304(1)
  048ecf0  stfd 19, 312(1)
  048ecf4  stfd 20, 320(1)
  048ecf8  stfd 21, 328(1)
  048ecfc  stfd 22, 336(1)
  048ed00  stfd 23, 344(1)
  048ed04  stfd 24, 352(1)
  048ed08  stfd 25, 360(1)
  048ed0c  stfd 26, 368(1)
  048ed10  stfd 27, 376(1)
  048ed14  stfd 28, 384(1)
  048ed18  stfd 29, 392(1)
  048ed1c  stfd 30, 400(1)
  048ed20  stfd 31, 408(1)
  048ed24  std 30, 256(1)
  048ed28  std 27, 232(1)
  048ed2c  lwz 30, 120(3)
  048ed30  lis 27, 73
  048ed34  std 31, 264(1)
  048ed38  cmpwi 30, 0
  048ed3c  ori 31, 3, 0
  048ed40  std 29, 248(1)
  048ed44  std 28, 240(1)
  048ed48  std 26, 224(1)
  048ed4c  std 25, 216(1)
  048ed50  std 24, 208(1)
  048ed54  addi 27, 27, -5008
  048ed58  bt 2, 0x48f584
  048ed5c  lbz 3, 32(31)
  048ed60  cmpwi 3, 0
  048ed64  cmpwi 1, 3, 2
  048ed68  cmpwi 6, 3, 1
  048ed6c  cmpwi 7, 3, -1
  048ed70  bt 1, 0x48ed7c
  048ed74  bf 29, 0x48f584
  048ed78  b 0x48ed88
  048ed7c  bf 25, 0x48ede0
  048ed80  bf 5, 0x48ee20
  048ed84  b 0x48f584
  048ed88  lis 3, 151
  048ed8c  lbz 5, 176(31)
  048ed90  lis 4, 161
  048ed94  li 6, 255
  048ed98  addic 4, 4, -13692
  048ed9c  li 7, 1
  048eda0  lwz 3, -25488(3)
  048eda4  addc 4, 5, 4
  048eda8  li 5, 3
  048edac  slwi 3, 3, 4
  048edb0  clrldi 4, 4, 32
  048edb4  extsw 3, 3
  048edb8  lbzx 3, 4, 3
  048edbc  subc 4, 5, 7
  048edc0  subc 3, 6, 3
  048edc4  cntlzw 3, 3
  048edc8  sldi 3, 3, 58
  048edcc  sradi 3, 3, 63
  048edd0  and 3, 3, 4
  048edd4  addc 3, 7, 3
  048edd8  stb 3, 32(31)
  048eddc  b 0x48f584
  048ede0  lwz 30, 8(30)
  048ede4  cmpwi 30, 0
  048ede8  bt 0, 0x48f584
  048edec  lis 3, 164
  048edf0  slwi 4, 30, 8
  048edf4  lwz 3, -28512(3)
  048edf8  addc 3, 3, 4
  048edfc  clrldi 3, 3, 32
  048ee00  lbz 3, 188(3)
  048ee04  cmpwi 3, 0
  048ee08  bt 2, 0x48f584
  048ee0c  li 4, 2
  048ee10  lbz 3, 33(31)
  048ee14  bl 0x1042ec
  048ee18  nop
  048ee1c  b 0x48f584
  048ee20  lis 3, 149
  048ee24  lfs 7, 20(31)
  048ee28  lfs 6, 16(31)
  048ee2c  addic 3, 3, 5056
  048ee30  lfs 4, 324(3)
  048ee34  lfs 3, 320(3)
  048ee38  fsubs 2, 7, 4
  048ee3c  lfs 1, 24(31)
  048ee40  fsubs 8, 6, 3
  048ee44  lfs 5, 328(3)
  048ee48  fsubs 9, 1, 5
  048ee4c  lwz 3, 16(30)
  048ee50  addic 3, 3, 1
  048ee54  fmuls 2, 2, 2
  048ee58  stw 3, 16(30)
  048ee5c  fmadds 2, 8, 8, 2
  048ee60  lfs 8, 0(27)
  048ee64  fmadds 2, 9, 9, 2
  048ee68  fsqrts 2, 2
  048ee6c  fcmpu 0, 2, 8
  048ee70  cror 6, 1, 2
  048ee74  bt 6, 0x48f070
  048ee78  lwz 3, 12(30)
  048ee7c  lwz 3, 0(3)
  048ee80  cmpwi 3, 0
  048ee84  bt 0, 0x48efb0
  048ee88  sldi 4, 3, 7
  048ee8c  sldi 3, 3, 4
  048ee90  lis 5, 150
  048ee94  subc 3, 4, 3
  048ee98  addic 5, 5, 14176
  048ee9c  extsw 4, 3
  048eea0  addc 4, 5, 4
  048eea4  lwz 4, 136(4)
  048eea8  cmpwi 4, 0
  048eeac  bt 2, 0x48efb0
  048eeb0  lhz 4, 166(4)
  048eeb4  cmpwi 4, 855
  048eeb8  bf 2, 0x48efb0
  048eebc  addc 4, 5, 3
  048eec0  clrldi 4, 4, 32
  048eec4  lwz 4, 136(4)
  048eec8  cmpw 4, 31
  048eecc  bt 2, 0x48f070
  048eed0  lbz 6, 32(4)
  048eed4  cmpwi 6, 2
  048eed8  bf 2, 0x48ef10
  048eedc  lfs 8, 20(4)
  048eee0  lfs 9, 16(4)
  048eee4  fsubs 4, 8, 4
  048eee8  fsubs 3, 9, 3
  048eeec  lfs 8, 24(4)
  048eef0  fsubs 5, 8, 5
  048eef4  fmuls 4, 4, 4
  048eef8  fmadds 3, 3, 3, 4
  048eefc  fmadds 3, 5, 5, 3
  048ef00  fsqrts 3, 3
  048ef04  fcmpu 0, 2, 3
  048ef08  cror 6, 1, 2
  048ef0c  bt 6, 0x48f070
  048ef10  lfs 4, 196(31)
  048ef14  lfs 3, 192(31)
  048ef18  fmuls 2, 4, 4
  048ef1c  lfs 5, 200(31)
  048ef20  lfs 8, 4(27)
  048ef24  fmadds 2, 3, 3, 2
  048ef28  fmadds 2, 5, 5, 2
  048ef2c  fsqrts 2, 2
  048ef30  fcmpu 0, 2, 8
  048ef34  bf 2, 0x48ef4c
  048ef38  fmr 2, 8
  048ef3c  lfs 5, 204(31)
  048ef40  fmr 3, 2
  048ef44  fmr 4, 3
  048ef48  b 0x48ef68
  048ef4c  lfs 8, 8(27)
  048ef50  fdivs 8, 8, 2
  048ef54  lfs 9, 204(31)
  048ef58  fmuls 2, 3, 8
  048ef5c  fmuls 3, 4, 8
  048ef60  fmuls 4, 5, 8
  048ef64  fmr 5, 9
  048ef68  fadds 2, 2, 6
  048ef6c  addc 3, 5, 3
  048ef70  fadds 3, 3, 7
  048ef74  fadds 4, 4, 1
  048ef78  clrldi 3, 3, 32
  048ef7c  stfs 5, 156(3)
  048ef80  stfs 2, 144(3)
  048ef84  stfs 3, 148(3)
  048ef88  stfs 4, 152(3)
  048ef8c  lwz 3, 12(30)
  048ef90  lwz 3, 0(3)
  048ef94  sldi 4, 3, 7
  048ef98  sldi 3, 3, 4
  048ef9c  subc 3, 4, 3
  048efa0  extsw 3, 3
  048efa4  addc 3, 5, 3
  048efa8  stw 31, 136(3)
  048efac  b 0x48f070
  048efb0  li 4, 13
  048efb4  li 3, 0
  048efb8  ori 5, 31, 0
  048efbc  bl 0x15d12c
  048efc0  nop
  048efc4  lwz 4, 12(30)
  048efc8  cmpwi 3, 0
  048efcc  stw 3, 0(4)
  048efd0  lfs 1, 24(31)
  048efd4  lfs 7, 16(31)
  048efd8  lfs 8, 20(31)
  048efdc  bt 0, 0x48f070
  048efe0  lfs 4, 196(31)
  048efe4  lfs 3, 192(31)
  048efe8  fmuls 2, 4, 4
  048efec  lfs 5, 200(31)
  048eff0  lfs 6, 4(27)
  048eff4  fmadds 2, 3, 3, 2
  048eff8  fmadds 2, 5, 5, 2
  048effc  fsqrts 2, 2
  048f000  fcmpu 0, 2, 6
  048f004  bf 2, 0x48f01c
  048f008  fmr 2, 6
  048f00c  lfs 5, 204(31)
  048f010  fmr 3, 2
  048f014  fmr 4, 3
  048f018  b 0x48f038
  048f01c  lfs 6, 8(27)
  048f020  fdivs 6, 6, 2
  048f024  lfs 9, 204(31)
  048f028  fmuls 2, 3, 6
  048f02c  fmuls 3, 4, 6
  048f030  fmuls 4, 5, 6
  048f034  fmr 5, 9
  048f038  fadds 2, 2, 7
  048f03c  sldi 5, 3, 7
  048f040  lis 4, 150
  048f044  fadds 3, 3, 8
  048f048  sldi 3, 3, 4
  048f04c  fadds 4, 4, 1
  048f050  addic 4, 4, 14176
  048f054  subc 3, 5, 3
  048f058  addc 3, 4, 3
  048f05c  clrldi 3, 3, 32
  048f060  stfs 2, 144(3)
  048f064  stfs 3, 148(3)
  048f068  stfs 5, 156(3)
  048f06c  stfs 4, 152(3)
  048f070  lwz 4, 4(30)
  048f074  lis 3, 230
  048f078  mulli 4, 4, 4512
  048f07c  lwz 3, -21888(3)
  048f080  addc 3, 3, 4
  048f084  clrldi 3, 3, 32
  048f088  lfs 20, 8(3)
  048f08c  fcmpu 0, 20, 1
  048f090  cror 6, 0, 2
  048f094  bt 6, 0x48f0a0
  048f098  li 3, 3
  048f09c  stb 3, 32(31)
  048f0a0  lis 3, 140
  048f0a4  vspltisw 2, 0
  048f0a8  li 4, 31616
  048f0ac  li 29, 0
  048f0b0  ori 26, 29, 0
  048f0b4  <unknown>
  048f0b8  vspltw 3, 3, 0
  048f0bc  vcmpgefp. 2, 2, 3
  048f0c0  bf 26, 0x48f584
  048f0c4  lfs 1, 12(27)
  048f0c8  lfs 2, 20(27)
  048f0cc  lis 25, 161
  048f0d0  lfs 3, 24(27)
  048f0d4  lfs 4, 28(27)
  048f0d8  lfs 30, 4(27)
  048f0dc  addic 25, 25, 23856
  048f0e0  lfs 21, 16(27)
  048f0e4  lfs 22, 32(27)
  048f0e8  lfs 23, 36(27)
  048f0ec  lfs 14, 40(27)
  048f0f0  lfs 15, 44(27)
  048f0f4  stfd 1, 168(1)
  048f0f8  stfs 2, 160(1)
  048f0fc  lfs 17, 76(27)
  048f100  stfd 3, 152(1)
  048f104  stfd 4, 144(1)
  048f108  lfs 16, 48(27)
  048f10c  fadds 17, 20, 17
  048f110  lfs 24, 52(27)
  048f114  lfs 25, 56(27)
  048f118  lfs 26, 60(27)
  048f11c  lfs 27, 64(27)
  048f120  lfs 28, 68(27)
  048f124  lfs 29, 72(27)
  048f128  lfs 18, 80(27)
  048f12c  lfs 19, 84(27)
  048f130  fmr 1, 30
  048f134  lfd 2, 168(1)
  048f138  ori 28, 26, 0
  048f13c  bl 0xfcbe8
  048f140  nop
  048f144  fmr 2, 1
  048f148  lis 3, 140
  048f14c  lis 4, 140
  048f150  lis 5, 140
  048f154  lfs 3, 31620(3)
  048f158  lfs 31, 31608(4)
  048f15c  lfs 1, 31604(5)
  048f160  lfs 12, 16(31)
  048f164  fcmpu 0, 2, 3
  048f168  lfs 11, 20(31)
  048f16c  lfs 10, 24(31)
  048f170  lfs 9, 28(31)
  048f174  bt 1, 0x48f180
  048f178  fmr 31, 1
  048f17c  li 28, 1
  048f180  stfs 18, 180(1)
  048f184  lis 3, 140
  048f188  stfs 19, 176(1)
  048f18c  stfs 12, 112(1)
  048f190  stfs 11, 116(1)
  048f194  stfs 10, 120(1)
  048f198  lfs 2, 31612(3)
  048f19c  stfs 9, 124(1)
  048f1a0  fneg 1, 2
  048f1a4  bl 0xfcbe8
  048f1a8  nop
  048f1ac  lfs 3, 212(31)
  048f1b0  lfs 4, 208(31)
  048f1b4  fmuls 2, 3, 3
  048f1b8  lfs 5, 216(31)
  048f1bc  lis 24, 140
  048f1c0  lfs 7, 112(1)
  048f1c4  lfs 8, 116(1)
  048f1c8  fmadds 2, 4, 4, 2
  048f1cc  lfs 9, 120(1)
  048f1d0  fmadds 2, 5, 5, 2
  048f1d4  fsqrts 6, 2
  048f1d8  lfs 2, 31600(24)
  048f1dc  fdivs 10, 1, 6
  048f1e0  fsub 11, 30, 6
  048f1e4  fsub 12, 30, 6
  048f1e8  fsub 13, 30, 6
  048f1ec  fsub 0, 6, 30
  048f1f0  fsub 19, 6, 30
  048f1f4  fsub 6, 6, 30
  048f1f8  fmr 1, 31
  048f1fc  fmuls 5, 5, 10
  048f200  fmuls 3, 3, 10
  048f204  fmuls 4, 4, 10
  048f208  fsel 10, 11, 30, 5
  048f20c  fsel 11, 12, 30, 3
  048f210  fsel 12, 13, 30, 4
  048f214  fsel 5, 0, 10, 5
  048f218  fsel 3, 19, 11, 3
  048f21c  fsel 4, 6, 12, 4
  048f220  fadds 5, 9, 5
  048f224  fadds 3, 8, 3
  048f228  fadds 4, 7, 4
  048f22c  stfs 5, 120(1)
  048f230  stfs 3, 116(1)
  048f234  stfs 4, 112(1)
  048f238  bl 0xfcbe8
  048f23c  nop
  048f240  fmr 19, 1
  048f244  lfs 2, 31600(24)
  048f248  fmr 1, 31
  048f24c  bl 0xfcbe8
  048f250  nop
  048f254  lfs 2, 31600(24)
  048f258  fmr 18, 1
  048f25c  fmr 1, 31
  048f260  bl 0xfcbe8
  048f264  nop
  048f268  lfs 2, 196(31)
  048f26c  lfs 3, 192(31)
  048f270  fmuls 4, 2, 2
  048f274  lfs 5, 200(31)
  048f278  fsub 6, 19, 18
  048f27c  lis 3, 114
  048f280  lis 24, 140
  048f284  lfs 8, -3052(3)
  048f288  fmadds 4, 3, 3, 4
  048f28c  fsel 6, 6, 19, 18
  048f290  lfs 9, 204(31)
  048f294  lis 3, 140
  048f298  lfs 31, 120(1)
  048f29c  cmpwi 28, 0
  048f2a0  stfs 9, 140(1)
  048f2a4  fmadds 4, 5, 5, 4
  048f2a8  fsub 7, 6, 1
  048f2ac  lwz 24, 31584(24)
  048f2b0  lwz 3, 31588(3)
  048f2b4  fsqrts 4, 4
  048f2b8  fsel 1, 7, 6, 1
  048f2bc  fmuls 1, 8, 1
  048f2c0  fdivs 1, 1, 4
  048f2c4  fsub 6, 30, 4
  048f2c8  fsub 7, 30, 4
  048f2cc  fsub 8, 30, 4
  048f2d0  fsub 9, 4, 30
  048f2d4  fsub 10, 4, 30
  048f2d8  fsub 4, 4, 30
  048f2dc  fmuls 3, 3, 1
  048f2e0  fmuls 2, 2, 1
  048f2e4  fmuls 1, 5, 1
  048f2e8  fsel 5, 6, 30, 3
  048f2ec  fsel 6, 7, 30, 2
  048f2f0  fsel 7, 8, 30, 1
  048f2f4  fsel 3, 9, 5, 3
  048f2f8  fsel 2, 10, 6, 2
  048f2fc  fsel 1, 4, 7, 1
  048f300  stfs 3, 128(1)
  048f304  stfs 2, 132(1)
  048f308  stfs 1, 136(1)
  048f30c  lfs 19, 176(1)
  048f310  lfs 18, 180(1)
  048f314  bt 2, 0x48f348
  048f318  lis 3, 140
  048f31c  lfs 1, 160(1)
  048f320  fmr 2, 21
  048f324  lfs 31, 31592(3)
  048f328  bl 0xfcbe8
  048f32c  nop
  048f330  lis 4, 140
  048f334  fmr 2, 1
  048f338  lfs 1, 120(1)
  048f33c  ori 3, 24, 0
  048f340  lfs 3, 31612(4)
  048f344  b 0x48f360
  048f348  lis 4, 140
  048f34c  fmr 1, 31
  048f350  lis 5, 140
  048f354  fmr 2, 21
  048f358  lfs 31, 31596(4)
  048f35c  lfs 3, 31612(5)
  048f360  fmr 4, 1
  048f364  fsubs 1, 3, 31
  048f368  extsw 24, 3
  048f36c  fadds 6, 1, 2
  048f370  lfd 2, 144(1)
  048f374  lfd 5, 152(1)
  048f378  fmr 1, 5
  048f37c  fadds 3, 6, 4
  048f380  stfs 3, 120(1)
  048f384  bl 0xfcbe8
  048f388  nop
  048f38c  lis 5, 114
  048f390  addic 3, 1, 112
  048f394  fmuls 1, 31, 1
  048f398  fmr 2, 20
  048f39c  addic 4, 1, 128
  048f3a0  ori 7, 24, 0
  048f3a4  ori 8, 28, 0
  048f3a8  lfs 3, -3048(5)
  048f3ac  fmuls 3, 3, 22
  048f3b0  bl 0x12f1f8
  048f3b4  nop
  048f3b8  li 3, 2
  048f3bc  bl 0xfc620
  048f3c0  nop
  048f3c4  cmpwi 3, 0
  048f3c8  bt 2, 0x48f55c
  048f3cc  lfs 1, 24(31)
  048f3d0  lis 3, 114
  048f3d4  fsubs 1, 1, 20
  048f3d8  lfs 2, -3048(3)
  048f3dc  fmuls 2, 2, 22
  048f3e0  fmuls 1, 1, 23
  048f3e4  lwz 3, 16(30)
  048f3e8  extsw 3, 3
  048f3ec  fdivs 10, 1, 2
  048f3f0  std 3, 184(1)
  048f3f4  lfd 1, 184(1)
  048f3f8  fcfid 1, 1
  048f3fc  frsp 1, 1
  048f400  fsqrts 10, 10
  048f404  fcmpu 0, 10, 1
  048f408  cror 6, 1, 2
  048f40c  bt 6, 0x48f55c
  048f410  lis 3, 114
  048f414  lfs 1, -3052(3)
  048f418  stfs 14, 180(1)
  048f41c  fmuls 1, 1, 14
  048f420  fmuls 31, 1, 10
  048f424  bl 0xfcc68
  048f428  nop
  048f42c  fmr 14, 1
  048f430  fmr 2, 15
  048f434  fmr 1, 30
  048f438  bl 0xfcbe8
  048f43c  nop
  048f440  fadds 2, 14, 16
  048f444  fsubs 3, 24, 14
  048f448  fsubs 4, 25, 14
  048f44c  fsubs 5, 24, 2
  048f450  fsub 6, 14, 3
  048f454  fsubs 7, 25, 2
  048f458  fsub 8, 2, 5
  048f45c  fsel 3, 6, 3, 14
  048f460  lfs 6, 192(31)
  048f464  fsel 2, 8, 5, 2
  048f468  fsub 5, 4, 3
  048f46c  fsub 8, 7, 2
  048f470  fsel 3, 5, 4, 3
  048f474  lfs 4, 196(31)
  048f478  fsel 2, 8, 7, 2
  048f47c  lfs 7, 16(31)
  048f480  fmuls 5, 3, 3
  048f484  fmadds 6, 6, 31, 7
  048f488  lfs 8, 20(31)
  048f48c  fmadds 4, 4, 31, 8
  048f490  lfs 8, 204(31)
  048f494  fmuls 7, 2, 2
  048f498  fmuls 9, 5, 3
  048f49c  stfs 17, 120(1)
  048f4a0  stfs 8, 124(1)
  048f4a4  fmuls 10, 7, 2
  048f4a8  fmuls 11, 5, 9
  048f4ac  fmadds 3, 9, 26, 3
  048f4b0  fmuls 9, 7, 10
  048f4b4  fmadds 2, 10, 26, 2
  048f4b8  fmuls 10, 5, 11
  048f4bc  fmadds 3, 11, 27, 3
  048f4c0  fmuls 11, 7, 9
  048f4c4  fmadds 2, 9, 27, 2
  048f4c8  fmuls 5, 5, 10
  048f4cc  fmadds 3, 10, 28, 3
  048f4d0  fmuls 7, 7, 11
  048f4d4  fmadds 9, 11, 28, 2
  048f4d8  fmr 2, 19
  048f4dc  fmadds 3, 5, 29, 3
  048f4e0  fmadds 5, 7, 29, 9
  048f4e4  fmadds 3, 3, 1, 4
  048f4e8  fmadds 4, 5, 1, 6
  048f4ec  fmr 1, 18
  048f4f0  stfs 3, 116(1)
  048f4f4  stfs 4, 112(1)
  048f4f8  bl 0xfcbe8
  048f4fc  nop
  048f500  li 3, 2
  048f504  fmr 31, 1
  048f508  bl 0xfc620
  048f50c  nop
  048f510  lis 4, 230
  048f514  lfs 10, 88(27)
  048f518  cmpwi 3, 0
  048f51c  lwz 3, -21888(4)
  048f520  lwz 4, 4(30)
  048f524  lfs 14, 180(1)
  048f528  bt 2, 0x48f530
  048f52c  fmr 10, 23
  048f530  mulli 4, 4, 4512
  048f534  ori 5, 3, 0
  048f538  addic 3, 1, 112
  048f53c  fmr 1, 31
  048f540  addc 5, 5, 4
  048f544  fmr 2, 10
  048f548  ori 4, 25, 0
  048f54c  addic 7, 5, 8
  048f550  clrldi 7, 7, 32
  048f554  bl 0x12e8c8
  048f558  nop
  048f55c  addic 29, 29, 1
  048f560  extsw 3, 29
  048f564  std 3, 184(1)
  048f568  lis 3, 140
  048f56c  lfs 1, 31616(3)
  048f570  lfd 2, 184(1)
  048f574  fcfid 2, 2
  048f578  frsp 2, 2
  048f57c  fcmpu 0, 2, 1
  048f580  bt 0, 0x48f130
  048f584  ld 0, 432(1)
  048f588  mtlr 0
  048f58c  lfd 14, 272(1)
  048f590  lfd 15, 280(1)
  048f594  lfd 16, 288(1)
  048f598  lfd 17, 296(1)
  048f59c  lfd 18, 304(1)
  048f5a0  lfd 19, 312(1)
  048f5a4  lfd 20, 320(1)
  048f5a8  lfd 21, 328(1)
  048f5ac  lfd 22, 336(1)
  048f5b0  lfd 23, 344(1)
  048f5b4  lfd 24, 352(1)
  048f5b8  lfd 25, 360(1)
  048f5bc  lfd 26, 368(1)
  048f5c0  lfd 27, 376(1)
  048f5c4  lfd 28, 384(1)
  048f5c8  lfd 29, 392(1)
  048f5cc  lfd 30, 400(1)
  048f5d0  lfd 31, 408(1)
  048f5d4  ld 24, 208(1)
  048f5d8  ld 25, 216(1)
  048f5dc  ld 26, 224(1)
  048f5e0  ld 27, 232(1)
  048f5e4  ld 28, 240(1)
  048f5e8  ld 29, 248(1)
  048f5ec  ld 30, 256(1)
  048f5f0  ld 31, 264(1)
  048f5f4  addi 1, 1, 416
  048f5f8  blr
