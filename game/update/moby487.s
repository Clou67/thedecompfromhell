# game/update/moby487.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M487_0039ed30:   # 0x39ed30, 0x14 bytes
  039ed30  lis 3, 132
  039ed34  lis 4, 1
  039ed38  addic 3, 3, 12612
  039ed3c  stw 4, 72(3)
  039ed40  blr

FUN_0039ed48:   # 0x39ed48, 0xe4 bytes
  039ed48  stdu 1, -144(1)
  039ed4c  mflr 0
  039ed50  std 0, 160(1)
  039ed54  std 29, 120(1)
  039ed58  ori 29, 3, 0
  039ed5c  std 31, 136(1)
  039ed60  li 3, 487
  039ed64  std 30, 128(1)
  039ed68  ori 31, 5, 0
  039ed6c  std 28, 112(1)
  039ed70  ori 30, 4, 0
  039ed74  bl 0xefa28
  039ed78  nop
  039ed7c  ori 28, 3, 0
  039ed80  cmpwi 28, 0
  039ed84  bt 2, 0x39ee08
  039ed88  li 3, 255
  039ed8c  lis 4, 151
  039ed90  li 5, 1
  039ed94  addic 4, 4, -25376
  039ed98  stb 3, 48(28)
  039ed9c  stb 5, 49(28)
  039eda0  sth 3, 50(28)
  039eda4  lwz 3, 8320(4)
  039eda8  lwz 4, 120(28)
  039edac  ld 3, 56(3)
  039edb0  std 3, 56(28)
  039edb4  lfs 1, 0(30)
  039edb8  ori 3, 28, 0
  039edbc  stfs 1, 16(28)
  039edc0  lfs 1, 4(30)
  039edc4  stfs 1, 20(28)
  039edc8  lfs 1, 8(30)
  039edcc  stfs 1, 24(28)
  039edd0  lfs 1, 12(30)
  039edd4  stfs 1, 28(28)
  039edd8  lfs 1, 0(29)
  039eddc  stfs 1, 0(4)
  039ede0  lfs 1, 4(29)
  039ede4  stfs 1, 4(4)
  039ede8  lfs 1, 8(29)
  039edec  stfs 1, 8(4)
  039edf0  lfs 1, 12(29)
  039edf4  stw 31, 16(4)
  039edf8  stfs 1, 12(4)
  039edfc  stb 5, 32(28)
  039ee00  bl 0xf31a8
  039ee04  nop
  039ee08  ori 3, 28, 0
  039ee0c  ld 0, 160(1)
  039ee10  mtlr 0
  039ee14  ld 28, 112(1)
  039ee18  ld 29, 120(1)
  039ee1c  ld 30, 128(1)
  039ee20  ld 31, 136(1)
  039ee24  addi 1, 1, 144
  039ee28  blr

M487_0039ee38:   # 0x39ee38, 0xc8 bytes
  039ee38  lis 5, 151
  039ee3c  lwz 6, 120(3)
  039ee40  lfs 1, 20(3)
  039ee44  addic 5, 5, -25376
  039ee48  lfs 2, 132(5)
  039ee4c  lfs 3, 4(6)
  039ee50  fsubs 1, 1, 2
  039ee54  lfs 4, 0(6)
  039ee58  fmuls 3, 3, 3
  039ee5c  lfs 2, 16(3)
  039ee60  lfs 5, 128(5)
  039ee64  lfs 6, 8(6)
  039ee68  fsubs 2, 2, 5
  039ee6c  lfs 7, 24(3)
  039ee70  lfs 8, 136(5)
  039ee74  fsubs 7, 7, 8
  039ee78  fmuls 1, 1, 1
  039ee7c  fmadds 3, 4, 4, 3
  039ee80  lis 3, 58
  039ee84  addi 3, 3, -4564
  039ee88  fmadds 1, 2, 2, 1
  039ee8c  fmadds 3, 6, 6, 3
  039ee90  fmadds 1, 7, 7, 1
  039ee94  fsqrts 2, 3
  039ee98  lfs 3, 0(3)
  039ee9c  lfs 4, 256(5)
  039eea0  lfs 6, 260(5)
  039eea4  lfs 7, 264(5)
  039eea8  fsqrts 1, 1
  039eeac  fadds 2, 2, 3
  039eeb0  fdivs 1, 1, 2
  039eeb4  fmadds 2, 4, 1, 5
  039eeb8  stfs 2, 0(4)
  039eebc  lfs 2, 132(5)
  039eec0  fmadds 2, 6, 1, 2
  039eec4  stfs 2, 4(4)
  039eec8  lfs 2, 136(5)
  039eecc  fmadds 1, 7, 1, 2
  039eed0  stfs 1, 8(4)
  039eed4  lfs 2, 140(5)
  039eed8  stfs 2, 12(4)
  039eedc  lfs 2, 4(3)
  039eee0  fadds 2, 1, 2
  039eee4  stfs 2, 8(4)
  039eee8  lfs 1, 680(5)
  039eeec  fcmpu 0, 2, 1
  039eef0  cror 6, 1, 2
  039eef4  bt 6, 0x39eefc
  039eef8  stfs 1, 8(4)
  039eefc  blr

UpdateMoby_487:   # 0x39ef28, 0xa6c bytes
  039ef28  stdu 1, -496(1)
  039ef2c  mflr 0
  039ef30  std 0, 512(1)
  039ef34  stfd 29, 472(1)
  039ef38  stfd 30, 480(1)
  039ef3c  stfd 31, 488(1)
  039ef40  std 31, 464(1)
  039ef44  lbz 4, 32(3)
  039ef48  std 30, 456(1)
  039ef4c  ori 31, 3, 0
  039ef50  lwz 30, 120(3)
  039ef54  cmpwi 4, 1
  039ef58  cmpwi 1, 4, 3
  039ef5c  cmpwi 6, 4, 2
  039ef60  std 29, 448(1)
  039ef64  std 28, 440(1)
  039ef68  std 27, 432(1)
  039ef6c  std 26, 424(1)
  039ef70  cmpwi 7, 4, 0
  039ef74  bt 1, 0x39ef80
  039ef78  bf 29, 0x39f960
  039ef7c  b 0x39ef8c
  039ef80  bf 25, 0x39f494
  039ef84  bf 5, 0x39f8f0
  039ef88  b 0x39f960
  039ef8c  addic 4, 1, 192
  039ef90  ori 3, 31, 0
  039ef94  bl 0x39ee38
  039ef98  lfs 1, 196(1)
  039ef9c  lfs 2, 20(31)
  039efa0  lfs 3, 192(1)
  039efa4  fsubs 1, 1, 2
  039efa8  lfs 2, 16(31)
  039efac  fsubs 2, 3, 2
  039efb0  lfs 3, 200(1)
  039efb4  lfs 4, 24(31)
  039efb8  fsubs 3, 3, 4
  039efbc  lis 3, 132
  039efc0  fmuls 4, 1, 1
  039efc4  lis 4, 114
  039efc8  lfs 5, 8492(3)
  039efcc  lfs 6, -3052(4)
  039efd0  fmuls 5, 5, 6
  039efd4  fmadds 4, 2, 2, 4
  039efd8  lis 3, 58
  039efdc  stfs 2, 192(1)
  039efe0  stfs 1, 196(1)
  039efe4  addi 3, 3, -4352
  039efe8  stfs 3, 200(1)
  039efec  fmadds 4, 3, 3, 4
  039eff0  lfs 6, 0(3)
  039eff4  lis 4, 114
  039eff8  lis 3, 132
  039effc  fsqrts 4, 4
  039f000  lfs 12, 8496(3)
  039f004  lfs 13, -3048(4)
  039f008  lis 3, 151
  039f00c  addic 4, 3, -25376
  039f010  lis 3, 115
  039f014  addic 3, 3, 22784
  039f018  fmuls 12, 12, 13
  039f01c  fdivs 5, 5, 4
  039f020  fsub 7, 6, 4
  039f024  fsub 8, 6, 4
  039f028  fsub 9, 6, 4
  039f02c  fsub 10, 4, 6
  039f030  fsub 11, 4, 6
  039f034  fsub 4, 4, 6
  039f038  fmuls 2, 2, 5
  039f03c  fmuls 1, 1, 5
  039f040  fmuls 3, 3, 5
  039f044  fsel 5, 7, 6, 2
  039f048  fsel 7, 8, 6, 1
  039f04c  fsel 8, 9, 6, 3
  039f050  fsel 2, 10, 5, 2
  039f054  fsel 1, 11, 7, 1
  039f058  fsel 3, 4, 8, 3
  039f05c  stfs 2, 192(1)
  039f060  stfs 1, 196(1)
  039f064  stfs 3, 200(1)
  039f068  lfs 4, 0(30)
  039f06c  fsubs 2, 2, 4
  039f070  stfs 2, 192(1)
  039f074  lfs 4, 4(30)
  039f078  fsubs 1, 1, 4
  039f07c  fmuls 4, 1, 1
  039f080  stfs 1, 196(1)
  039f084  lfs 5, 8(30)
  039f088  fsubs 3, 3, 5
  039f08c  fmadds 4, 2, 2, 4
  039f090  fmadds 4, 3, 3, 4
  039f094  stfs 3, 200(1)
  039f098  fsqrts 4, 4
  039f09c  fdivs 5, 12, 4
  039f0a0  fsub 7, 6, 4
  039f0a4  fsub 8, 6, 4
  039f0a8  fsub 9, 6, 4
  039f0ac  fsub 10, 4, 6
  039f0b0  fsub 11, 4, 6
  039f0b4  fsub 4, 4, 6
  039f0b8  fmuls 1, 1, 5
  039f0bc  fmuls 2, 2, 5
  039f0c0  fmuls 3, 3, 5
  039f0c4  fsel 5, 7, 6, 1
  039f0c8  fsel 7, 8, 6, 2
  039f0cc  fsel 8, 9, 6, 3
  039f0d0  fsel 1, 10, 5, 1
  039f0d4  fsel 2, 11, 7, 2
  039f0d8  fsel 3, 4, 8, 3
  039f0dc  stfs 1, 196(1)
  039f0e0  stfs 2, 192(1)
  039f0e4  stfs 3, 200(1)
  039f0e8  lfs 1, 0(30)
  039f0ec  fadds 1, 1, 2
  039f0f0  lfs 2, 4(30)
  039f0f4  lfs 3, 8(30)
  039f0f8  stfs 1, 0(30)
  039f0fc  lfs 4, 196(1)
  039f100  fadds 2, 2, 4
  039f104  stfs 2, 4(30)
  039f108  lfs 4, 200(1)
  039f10c  fadds 3, 3, 4
  039f110  stfs 3, 8(30)
  039f114  lfs 3, 128(4)
  039f118  lfs 4, 16(31)
  039f11c  lfs 5, 132(4)
  039f120  lfs 7, 20(31)
  039f124  fsubs 3, 3, 4
  039f128  fsubs 4, 5, 7
  039f12c  fabs 5, 3
  039f130  fabs 7, 4
  039f134  stfs 3, 288(1)
  039f138  stfs 4, 292(1)
  039f13c  fsubs 3, 5, 7
  039f140  stfs 3, 296(1)
  039f144  lwz 4, 288(1)
  039f148  lfs 3, 288(1)
  039f14c  lwz 5, 292(1)
  039f150  lfs 4, 292(1)
  039f154  fabs 3, 3
  039f158  lwz 6, 296(1)
  039f15c  rlwinm 5, 5, 3, 29, 29
  039f160  fabs 8, 4
  039f164  lfs 4, 296(1)
  039f168  rlwimi 5, 6, 2, 30, 30
  039f16c  fsub 9, 4, 6
  039f170  fsub 10, 4, 6
  039f174  rlwimi 5, 4, 4, 28, 28
  039f178  ori 4, 3, 0
  039f17c  rlwimi 4, 5, 2, 26, 28
  039f180  slwi 5, 5, 2
  039f184  clrldi 4, 4, 32
  039f188  fsel 7, 9, 3, 7
  039f18c  lfsx 3, 3, 5
  039f190  lfs 4, 4(4)
  039f194  fsel 5, 10, 8, 5
  039f198  fcmpu 0, 7, 6
  039f19c  bt 1, 0x39f1a8
  039f1a0  fmr 3, 6
  039f1a4  b 0x39f2cc
  039f1a8  fsubs 8, 5, 7
  039f1ac  fadds 5, 5, 7
  039f1b0  addic 4, 1, 16
  039f1b4  li 8, 2
  039f1b8  addic 5, 4, 348
  039f1bc  addic 6, 4, 364
  039f1c0  mtctr 8
  039f1c4  fdivs 5, 8, 5
  039f1c8  fmuls 7, 5, 5
  039f1cc  stfs 5, 376(1)
  039f1d0  stfs 5, 368(1)
  039f1d4  stfs 5, 372(1)
  039f1d8  stfs 5, 364(1)
  039f1dc  lfs 9, 376(1)
  039f1e0  lfs 10, 368(1)
  039f1e4  lfs 11, 372(1)
  039f1e8  fmuls 8, 7, 7
  039f1ec  fmuls 10, 10, 7
  039f1f0  fmuls 9, 9, 8
  039f1f4  fmuls 5, 8, 8
  039f1f8  fmuls 8, 11, 8
  039f1fc  stfs 10, 368(1)
  039f200  fmuls 7, 9, 7
  039f204  stfs 8, 372(1)
  039f208  stfs 7, 376(1)
  039f20c  lfs 7, 348(4)
  039f210  fmuls 7, 7, 5
  039f214  stfs 7, 364(4)
  039f218  lfs 7, 4(5)
  039f21c  addic 4, 4, 8
  039f220  addic 5, 5, 8
  039f224  fmuls 7, 7, 5
  039f228  stfs 7, 4(6)
  039f22c  addic 6, 6, 8
  039f230  bdnz 0x39f20c
  039f234  li 6, 4
  039f238  ori 4, 1, 0
  039f23c  mtctr 6
  039f240  lis 5, 115
  039f244  addic 6, 4, 364
  039f248  addic 5, 5, 22752
  039f24c  ori 7, 6, 0
  039f250  lfs 5, 364(4)
  039f254  lfs 7, 0(5)
  039f258  fmuls 5, 5, 7
  039f25c  lfs 7, 4(5)
  039f260  addic 5, 5, 8
  039f264  stfs 5, 364(4)
  039f268  lfs 5, 4(6)
  039f26c  addic 4, 4, 8
  039f270  fmuls 5, 5, 7
  039f274  stfs 5, 4(6)
  039f278  addic 6, 6, 8
  039f27c  bdnz 0x39f250
  039f280  fmr 5, 6
  039f284  ori 4, 1, 0
  039f288  mtctr 8
  039f28c  lfs 7, 364(4)
  039f290  fadds 5, 5, 7
  039f294  addic 4, 4, 16
  039f298  lfs 7, 4(7)
  039f29c  lfs 8, 8(7)
  039f2a0  lfs 9, 12(7)
  039f2a4  addic 7, 7, 16
  039f2a8  fadds 5, 5, 7
  039f2ac  fadds 5, 5, 8
  039f2b0  fadds 5, 5, 9
  039f2b4  bdnz 0x39f28c
  039f2b8  lis 4, 58
  039f2bc  addi 4, 4, -4352
  039f2c0  lfs 7, 4(4)
  039f2c4  fadds 5, 5, 7
  039f2c8  fmadds 3, 5, 3, 4
  039f2cc  fabs 4, 1
  039f2d0  fabs 5, 2
  039f2d4  stfs 1, 276(1)
  039f2d8  stfs 2, 280(1)
  039f2dc  fsubs 1, 4, 5
  039f2e0  stfs 1, 284(1)
  039f2e4  lwz 4, 276(1)
  039f2e8  lfs 1, 276(1)
  039f2ec  lwz 5, 280(1)
  039f2f0  lfs 2, 280(1)
  039f2f4  fabs 1, 1
  039f2f8  lwz 6, 284(1)
  039f2fc  rlwinm 5, 5, 3, 29, 29
  039f300  lfs 7, 284(1)
  039f304  fabs 2, 2
  039f308  rlwimi 5, 6, 2, 30, 30
  039f30c  fsub 8, 7, 6
  039f310  fsub 7, 7, 6
  039f314  rlwimi 5, 4, 4, 28, 28
  039f318  ori 4, 3, 0
  039f31c  rlwimi 4, 5, 2, 26, 28
  039f320  slwi 5, 5, 2
  039f324  clrldi 4, 4, 32
  039f328  fsel 5, 8, 1, 5
  039f32c  lfsx 1, 3, 5
  039f330  fsel 4, 7, 2, 4
  039f334  lfs 2, 4(4)
  039f338  fcmpu 0, 5, 6
  039f33c  bt 1, 0x39f344
  039f340  b 0x39f464
  039f344  fsubs 7, 4, 5
  039f348  fadds 4, 4, 5
  039f34c  addic 3, 1, 16
  039f350  li 6, 2
  039f354  addic 5, 3, 332
  039f358  addic 4, 3, 316
  039f35c  mtctr 6
  039f360  fdivs 4, 7, 4
  039f364  fmuls 5, 4, 4
  039f368  stfs 4, 344(1)
  039f36c  stfs 4, 336(1)
  039f370  stfs 4, 340(1)
  039f374  stfs 4, 332(1)
  039f378  lfs 8, 344(1)
  039f37c  lfs 9, 336(1)
  039f380  lfs 10, 340(1)
  039f384  fmuls 7, 5, 5
  039f388  fmuls 9, 9, 5
  039f38c  fmuls 8, 8, 7
  039f390  fmuls 4, 7, 7
  039f394  fmuls 7, 10, 7
  039f398  stfs 9, 336(1)
  039f39c  fmuls 5, 8, 5
  039f3a0  stfs 7, 340(1)
  039f3a4  stfs 5, 344(1)
  039f3a8  lfs 5, 316(3)
  039f3ac  fmuls 5, 5, 4
  039f3b0  stfs 5, 332(3)
  039f3b4  lfs 5, 4(4)
  039f3b8  addic 4, 4, 8
  039f3bc  fmuls 5, 5, 4
  039f3c0  addic 3, 3, 8
  039f3c4  stfs 5, 4(5)
  039f3c8  addic 5, 5, 8
  039f3cc  bdnz 0x39f3a8
  039f3d0  li 5, 4
  039f3d4  ori 3, 1, 0
  039f3d8  mtctr 5
  039f3dc  lis 4, 115
  039f3e0  addic 5, 3, 332
  039f3e4  addic 4, 4, 22752
  039f3e8  ori 7, 5, 0
  039f3ec  lfs 4, 332(3)
  039f3f0  lfs 5, 0(4)
  039f3f4  fmuls 4, 4, 5
  039f3f8  lfs 5, 4(4)
  039f3fc  addic 4, 4, 8
  039f400  stfs 4, 332(3)
  039f404  lfs 4, 4(5)
  039f408  addic 3, 3, 8
  039f40c  fmuls 4, 4, 5
  039f410  stfs 4, 4(5)
  039f414  addic 5, 5, 8
  039f418  bdnz 0x39f3ec
  039f41c  ori 3, 1, 0
  039f420  mtctr 6
  039f424  lfs 4, 332(3)
  039f428  lfs 5, 4(7)
  039f42c  fadds 4, 6, 4
  039f430  lfs 6, 8(7)
  039f434  addic 3, 3, 16
  039f438  lfs 7, 12(7)
  039f43c  addic 7, 7, 16
  039f440  fadds 4, 4, 5
  039f444  fadds 6, 4, 6
  039f448  fadds 6, 6, 7
  039f44c  bdnz 0x39f424
  039f450  lis 3, 58
  039f454  addi 3, 3, -4352
  039f458  lfs 4, 4(3)
  039f45c  fadds 6, 6, 4
  039f460  fmadds 6, 6, 1, 2
  039f464  fmr 1, 3
  039f468  fmr 2, 6
  039f46c  bl 0x5026a0
  039f470  nop
  039f474  lis 3, 58
  039f478  addi 3, 3, -4352
  039f47c  lfs 2, 8(3)
  039f480  fcmpu 0, 1, 2
  039f484  cror 6, 0, 2
  039f488  bt 6, 0x39f494
  039f48c  li 3, 2
  039f490  stb 3, 32(31)
  039f494  lfs 1, 16(31)
  039f498  lfs 2, 0(30)
  039f49c  fadds 1, 1, 2
  039f4a0  lfs 2, 20(31)
  039f4a4  lfs 3, 24(31)
  039f4a8  lis 3, 58
  039f4ac  addi 3, 3, -4352
  039f4b0  lis 6, 115
  039f4b4  addic 6, 6, 22784
  039f4b8  stfs 1, 16(31)
  039f4bc  lfs 1, 4(30)
  039f4c0  fadds 1, 2, 1
  039f4c4  stfs 1, 20(31)
  039f4c8  lfs 1, 8(30)
  039f4cc  fadds 1, 3, 1
  039f4d0  stfs 1, 24(31)
  039f4d4  lwz 4, 0(30)
  039f4d8  lwz 5, 4(30)
  039f4dc  lfs 1, 0(30)
  039f4e0  lfs 2, 4(30)
  039f4e4  fabs 3, 1
  039f4e8  fabs 2, 2
  039f4ec  rlwinm 5, 5, 3, 29, 29
  039f4f0  fsubs 1, 3, 2
  039f4f4  stfs 1, 272(1)
  039f4f8  lfs 31, 0(3)
  039f4fc  lwz 3, 272(1)
  039f500  lfs 1, 272(1)
  039f504  rlwimi 5, 3, 2, 30, 30
  039f508  fsub 4, 1, 31
  039f50c  ori 3, 6, 0
  039f510  fsub 5, 1, 31
  039f514  rlwimi 5, 4, 4, 28, 28
  039f518  rlwimi 3, 5, 2, 26, 28
  039f51c  slwi 4, 5, 2
  039f520  clrldi 3, 3, 32
  039f524  lfsx 1, 6, 4
  039f528  fsel 4, 4, 3, 2
  039f52c  fsel 3, 5, 2, 3
  039f530  lfs 2, 4(3)
  039f534  fcmpu 0, 4, 31
  039f538  bt 1, 0x39f544
  039f53c  fmr 1, 31
  039f540  b 0x39f668
  039f544  fsubs 5, 3, 4
  039f548  fadds 3, 3, 4
  039f54c  addic 3, 1, 16
  039f550  li 6, 2
  039f554  addic 5, 3, 300
  039f558  addic 4, 3, 284
  039f55c  mtctr 6
  039f560  fdivs 3, 5, 3
  039f564  fmuls 4, 3, 3
  039f568  stfs 3, 312(1)
  039f56c  stfs 3, 304(1)
  039f570  stfs 3, 308(1)
  039f574  stfs 3, 300(1)
  039f578  lfs 6, 312(1)
  039f57c  lfs 7, 304(1)
  039f580  lfs 8, 308(1)
  039f584  fmuls 5, 4, 4
  039f588  fmuls 7, 7, 4
  039f58c  fmuls 6, 6, 5
  039f590  fmuls 3, 5, 5
  039f594  fmuls 5, 8, 5
  039f598  stfs 7, 304(1)
  039f59c  fmuls 4, 6, 4
  039f5a0  stfs 5, 308(1)
  039f5a4  stfs 4, 312(1)
  039f5a8  lfs 4, 284(3)
  039f5ac  fmuls 4, 4, 3
  039f5b0  stfs 4, 300(3)
  039f5b4  lfs 4, 4(4)
  039f5b8  addic 4, 4, 8
  039f5bc  fmuls 4, 4, 3
  039f5c0  addic 3, 3, 8
  039f5c4  stfs 4, 4(5)
  039f5c8  addic 5, 5, 8
  039f5cc  bdnz 0x39f5a8
  039f5d0  li 5, 4
  039f5d4  ori 3, 1, 0
  039f5d8  mtctr 5
  039f5dc  lis 4, 115
  039f5e0  addic 5, 3, 300
  039f5e4  addic 4, 4, 22752
  039f5e8  ori 7, 5, 0
  039f5ec  lfs 3, 300(3)
  039f5f0  lfs 4, 0(4)
  039f5f4  fmuls 3, 3, 4
  039f5f8  lfs 4, 4(4)
  039f5fc  addic 4, 4, 8
  039f600  stfs 3, 300(3)
  039f604  lfs 3, 4(5)
  039f608  addic 3, 3, 8
  039f60c  fmuls 3, 3, 4
  039f610  stfs 3, 4(5)
  039f614  addic 5, 5, 8
  039f618  bdnz 0x39f5ec
  039f61c  ori 3, 1, 0
  039f620  fmr 3, 31
  039f624  mtctr 6
  039f628  lfs 4, 300(3)
  039f62c  fadds 3, 3, 4
  039f630  lfs 4, 4(7)
  039f634  addic 3, 3, 16
  039f638  lfs 5, 8(7)
  039f63c  lfs 6, 12(7)
  039f640  addic 7, 7, 16
  039f644  fadds 3, 3, 4
  039f648  fadds 3, 3, 5
  039f64c  fadds 3, 3, 6
  039f650  bdnz 0x39f628
  039f654  lis 3, 58
  039f658  addi 3, 3, -4352
  039f65c  lfs 4, 4(3)
  039f660  fadds 3, 3, 4
  039f664  fmadds 1, 3, 1, 2
  039f668  lis 3, 58
  039f66c  stfs 1, 72(31)
  039f670  lis 28, 114
  039f674  lfs 1, 64(31)
  039f678  addi 29, 3, -4352
  039f67c  fmr 30, 31
  039f680  lfs 2, 12(29)
  039f684  lfs 3, -3052(28)
  039f688  fmuls 2, 3, 2
  039f68c  bl 0x502578
  039f690  nop
  039f694  li 3, 0
  039f698  stfs 1, 64(31)
  039f69c  stw 3, 208(1)
  039f6a0  stw 3, 212(1)
  039f6a4  stw 3, 216(1)
  039f6a8  stw 3, 220(1)
  039f6ac  lfs 29, 16(29)
  039f6b0  lfs 31, 20(29)
  039f6b4  fmr 1, 29
  039f6b8  fmr 2, 31
  039f6bc  bl 0xfcbe8
  039f6c0  nop
  039f6c4  stfs 1, 208(1)
  039f6c8  fmr 1, 29
  039f6cc  fmr 2, 31
  039f6d0  bl 0xfcbe8
  039f6d4  nop
  039f6d8  stfs 1, 212(1)
  039f6dc  fmr 2, 31
  039f6e0  fmr 1, 29
  039f6e4  bl 0xfcbe8
  039f6e8  nop
  039f6ec  lfs 2, 212(1)
  039f6f0  lfs 3, 208(1)
  039f6f4  fmuls 4, 2, 2
  039f6f8  stfs 1, 216(1)
  039f6fc  lfs 5, 24(29)
  039f700  lfs 6, -3052(28)
  039f704  fmuls 5, 6, 5
  039f708  fmadds 4, 3, 3, 4
  039f70c  li 3, 30
  039f710  addic 28, 31, 16
  039f714  addic 27, 1, 208
  039f718  li 4, 45
  039f71c  fmadds 4, 1, 1, 4
  039f720  fsqrts 4, 4
  039f724  fdivs 5, 5, 4
  039f728  fsub 6, 30, 4
  039f72c  fsub 7, 30, 4
  039f730  fsub 8, 30, 4
  039f734  fsub 9, 4, 30
  039f738  fsub 10, 4, 30
  039f73c  fsub 4, 4, 30
  039f740  fmuls 3, 3, 5
  039f744  fmuls 2, 2, 5
  039f748  fmuls 1, 1, 5
  039f74c  fsel 5, 6, 30, 3
  039f750  fsel 6, 7, 30, 2
  039f754  fsel 7, 8, 30, 1
  039f758  fsel 3, 9, 5, 3
  039f75c  fsel 2, 10, 6, 2
  039f760  fsel 1, 4, 7, 1
  039f764  stfs 3, 208(1)
  039f768  stfs 2, 212(1)
  039f76c  stfs 1, 216(1)
  039f770  bl 0xfe484
  039f774  nop
  039f778  extsw 3, 3
  039f77c  li 4, 70
  039f780  std 3, 400(1)
  039f784  lfs 29, 28(29)
  039f788  lis 29, 114
  039f78c  li 3, 40
  039f790  lfs 1, -3056(29)
  039f794  lfd 2, 400(1)
  039f798  fcfid 2, 2
  039f79c  frsp 2, 2
  039f7a0  fadds 2, 2, 29
  039f7a4  fmuls 1, 1, 2
  039f7a8  fctiwz 1, 1
  039f7ac  stfd 1, 400(1)
  039f7b0  lwz 5, 404(1)
  039f7b4  extsw 26, 5
  039f7b8  bl 0xfe484
  039f7bc  nop
  039f7c0  ori 9, 3, 0
  039f7c4  lis 5, 28416
  039f7c8  ori 3, 28, 0
  039f7cc  li 6, 255
  039f7d0  ori 7, 26, 0
  039f7d4  li 8, 40
  039f7d8  ori 4, 27, 0
  039f7dc  ori 5, 5, 45055
  039f7e0  li 10, 1
  039f7e4  bl 0x121740
  039f7e8  nop
  039f7ec  li 3, 60
  039f7f0  li 4, 120
  039f7f4  bl 0xfe484
  039f7f8  nop
  039f7fc  extsw 3, 3
  039f800  li 4, 150
  039f804  std 3, 400(1)
  039f808  lfs 1, -3056(29)
  039f80c  lfd 2, 400(1)
  039f810  fcfid 2, 2
  039f814  li 3, 100
  039f818  frsp 2, 2
  039f81c  fadds 2, 2, 29
  039f820  fmuls 1, 1, 2
  039f824  fctiwz 1, 1
  039f828  stfd 1, 400(1)
  039f82c  lwz 5, 404(1)
  039f830  extsw 29, 5
  039f834  bl 0xfe484
  039f838  nop
  039f83c  lis 5, 8191
  039f840  lis 6, 79
  039f844  ori 9, 3, 0
  039f848  ori 7, 29, 0
  039f84c  ori 3, 28, 0
  039f850  li 8, 40
  039f854  ori 4, 27, 0
  039f858  li 10, 0
  039f85c  ori 5, 5, 65535
  039f860  ori 6, 6, 20303
  039f864  bl 0x121740
  039f868  nop
  039f86c  addic 29, 1, 224
  039f870  fmr 1, 30
  039f874  ori 4, 31, 0
  039f878  ori 3, 29, 0
  039f87c  li 5, 0
  039f880  ori 7, 30, 0
  039f884  bl 0x10581c
  039f888  nop
  039f88c  ori 3, 28, 0
  039f890  lwz 6, 16(30)
  039f894  li 4, 128
  039f898  li 5, 0
  039f89c  ori 7, 29, 0
  039f8a0  bl 0x55ac0
  039f8a4  nop
  039f8a8  cmpwi 3, 0
  039f8ac  bt 2, 0x39f960
  039f8b0  lis 4, 161
  039f8b4  addic 4, 4, 2368
  039f8b8  lwz 3, 24(4)
  039f8bc  cmpwi 3, 0
  039f8c0  bt 2, 0x39f8e4
  039f8c4  lis 5, 1
  039f8c8  addic 7, 4, 32
  039f8cc  fmr 1, 31
  039f8d0  ori 8, 30, 0
  039f8d4  ori 4, 31, 0
  039f8d8  ori 5, 5, 1
  039f8dc  bl 0x105c08
  039f8e0  nop
  039f8e4  li 3, 3
  039f8e8  stb 3, 32(31)
  039f8ec  b 0x39f960
  039f8f0  lis 3, 58
  039f8f4  li 7, -1
  039f8f8  addi 4, 3, -4352
  039f8fc  li 6, 1
  039f900  li 11, 0
  039f904  ori 3, 31, 0
  039f908  addic 5, 31, 16
  039f90c  lfs 1, 0(4)
  039f910  li 8, 5
  039f914  lfs 3, 20(4)
  039f918  li 9, 2
  039f91c  lfs 4, 28(4)
  039f920  li 10, 4
  039f924  lfs 5, 32(4)
  039f928  fmr 2, 1
  039f92c  lfs 7, 36(4)
  039f930  fmr 6, 3
  039f934  std 7, 144(1)
  039f938  ori 4, 30, 0
  039f93c  std 6, 160(1)
  039f940  std 6, 168(1)
  039f944  std 7, 176(1)
  039f948  std 11, 184(1)
  039f94c  bl 0x10e030
  039f950  nop
  039f954  ori 3, 31, 0
  039f958  bl 0xefb38
  039f95c  nop
  039f960  ld 0, 512(1)
  039f964  mtlr 0
  039f968  lfd 29, 472(1)
  039f96c  lfd 30, 480(1)
  039f970  lfd 31, 488(1)
  039f974  ld 26, 424(1)
  039f978  ld 27, 432(1)
  039f97c  ld 28, 440(1)
  039f980  ld 29, 448(1)
  039f984  ld 30, 456(1)
  039f988  ld 31, 464(1)
  039f98c  addi 1, 1, 496
  039f990  blr

M487_0039f994:   # 0x39f994, 0x14 bytes
  039f994  lis 3, 132
  039f998  lis 4, 1
  039f99c  addic 3, 3, 12788
  039f9a0  stw 4, 72(3)
  039f9a4  blr

M487_0039f9a8:   # 0x39f9a8, 0x238 bytes
  039f9a8  stdu 1, -208(1)
  039f9ac  mflr 0
  039f9b0  std 0, 224(1)
  039f9b4  std 31, 200(1)
  039f9b8  ori 31, 3, 0
  039f9bc  std 29, 184(1)
  039f9c0  lis 3, 269
  039f9c4  std 28, 176(1)
  039f9c8  lis 29, 114
  039f9cc  std 30, 192(1)
  039f9d0  addic 28, 1, 128
  039f9d4  lwz 30, 120(31)
  039f9d8  lfs 3, -28080(3)
  039f9dc  lis 3, 132
  039f9e0  lfs 1, 0(30)
  039f9e4  fmuls 2, 1, 3
  039f9e8  lfs 1, 12936(3)
  039f9ec  lfs 4, -3052(29)
  039f9f0  fmuls 1, 1, 4
  039f9f4  ori 3, 28, 0
  039f9f8  stfs 2, 144(1)
  039f9fc  lfs 2, 4(30)
  039fa00  fmuls 4, 2, 3
  039fa04  fmr 2, 1
  039fa08  stfs 4, 148(1)
  039fa0c  lfs 4, 8(30)
  039fa10  fmuls 3, 4, 3
  039fa14  stfs 3, 152(1)
  039fa18  lfs 3, 12(30)
  039fa1c  stfs 3, 156(1)
  039fa20  bl 0xfea60
  039fa24  nop
  039fa28  lfs 1, 144(1)
  039fa2c  lis 3, 269
  039fa30  lfs 2, 128(1)
  039fa34  lfs 3, 148(1)
  039fa38  fadds 1, 1, 2
  039fa3c  lfs 2, 132(1)
  039fa40  lfs 4, 152(1)
  039fa44  fadds 2, 3, 2
  039fa48  lfs 3, 136(1)
  039fa4c  fadds 3, 4, 3
  039fa50  lfs 4, -28076(3)
  039fa54  lis 3, 132
  039fa58  stfs 1, 144(1)
  039fa5c  stfs 2, 148(1)
  039fa60  stfs 3, 152(1)
  039fa64  lfs 1, 0(30)
  039fa68  fmuls 2, 1, 4
  039fa6c  lfs 1, -3052(29)
  039fa70  lfs 3, 12940(3)
  039fa74  fmuls 1, 3, 1
  039fa78  ori 3, 28, 0
  039fa7c  stfs 2, 160(1)
  039fa80  lfs 2, 4(30)
  039fa84  fmuls 3, 2, 4
  039fa88  fmr 2, 1
  039fa8c  stfs 3, 164(1)
  039fa90  lfs 3, 8(30)
  039fa94  fmuls 3, 3, 4
  039fa98  stfs 3, 168(1)
  039fa9c  lfs 3, 12(30)
  039faa0  stfs 3, 172(1)
  039faa4  bl 0xfea60
  039faa8  nop
  039faac  lfs 1, 160(1)
  039fab0  lfs 2, 128(1)
  039fab4  lis 3, 132
  039fab8  lfs 3, 164(1)
  039fabc  lis 4, 132
  039fac0  fadds 1, 1, 2
  039fac4  lis 5, 132
  039fac8  lfs 2, 132(1)
  039facc  lis 6, 132
  039fad0  lfs 4, 168(1)
  039fad4  fadds 2, 3, 2
  039fad8  lfs 3, 136(1)
  039fadc  fadds 3, 4, 3
  039fae0  lfs 4, 12904(3)
  039fae4  lfs 5, 12908(4)
  039fae8  stfs 4, 156(1)
  039faec  stfs 1, 160(1)
  039faf0  lfs 1, 12912(5)
  039faf4  stfs 2, 164(1)
  039faf8  stfs 5, 172(1)
  039fafc  stfs 3, 168(1)
  039fb00  lfs 2, 12916(6)
  039fb04  bl 0xfcbe8
  039fb08  nop
  039fb0c  lis 30, 114
  039fb10  lfs 2, -3056(30)
  039fb14  fmuls 1, 1, 2
  039fb18  bl 0x502758
  039fb1c  nop
  039fb20  lis 4, 132
  039fb24  lis 5, 132
  039fb28  ori 29, 3, 0
  039fb2c  lfs 1, 12920(4)
  039fb30  lfs 2, 12924(5)
  039fb34  bl 0xfcbe8
  039fb38  nop
  039fb3c  lfs 2, -3056(30)
  039fb40  fmuls 1, 1, 2
  039fb44  bl 0x502758
  039fb48  nop
  039fb4c  lis 4, 132
  039fb50  lis 5, 132
  039fb54  ori 28, 3, 0
  039fb58  lfs 1, 12928(4)
  039fb5c  lfs 2, 12932(5)
  039fb60  bl 0xfcbe8
  039fb64  nop
  039fb68  lfs 2, -3056(30)
  039fb6c  fmuls 1, 1, 2
  039fb70  bl 0x502758
  039fb74  nop
  039fb78  lis 5, 132
  039fb7c  lis 6, 132
  039fb80  lis 7, 132
  039fb84  ori 10, 3, 0
  039fb88  addic 3, 31, 16
  039fb8c  lwz 9, 12896(5)
  039fb90  lwz 11, 12948(6)
  039fb94  addic 4, 1, 144
  039fb98  lwz 7, 12900(7)
  039fb9c  extsw 6, 9
  039fba0  extsw 11, 11
  039fba4  addic 5, 1, 160
  039fba8  ori 8, 29, 0
  039fbac  ori 9, 28, 0
  039fbb0  extsw 7, 7
  039fbb4  std 11, 112(1)
  039fbb8  bl 0x1206e8
  039fbbc  nop
  039fbc0  ld 0, 224(1)
  039fbc4  mtlr 0
  039fbc8  ld 28, 176(1)
  039fbcc  ld 29, 184(1)
  039fbd0  ld 30, 192(1)
  039fbd4  ld 31, 200(1)
  039fbd8  addi 1, 1, 208
  039fbdc  blr

M487_0039fbe8:   # 0x39fbe8, 0xb8 bytes
  039fbe8  stdu 1, -144(1)
  039fbec  mflr 0
  039fbf0  std 0, 160(1)
  039fbf4  lis 4, 132
  039fbf8  lis 5, 114
  039fbfc  lis 6, 161
  039fc00  lis 7, 132
  039fc04  lwz 4, 12956(4)
  039fc08  extsw 4, 4
  039fc0c  lis 10, 132
  039fc10  std 4, 128(1)
  039fc14  lis 4, 58
  039fc18  addi 4, 4, -1056
  039fc1c  lfs 1, 0(4)
  039fc20  lfs 2, -3056(5)
  039fc24  lfd 3, 128(1)
  039fc28  lis 5, 132
  039fc2c  fcfid 3, 3
  039fc30  addic 4, 3, 16
  039fc34  lfs 4, 12952(5)
  039fc38  addic 5, 6, 23856
  039fc3c  lis 6, 132
  039fc40  frsp 3, 3
  039fc44  lwz 8, 12964(6)
  039fc48  lis 6, 269
  039fc4c  lwz 9, 12968(7)
  039fc50  lwz 7, 12960(10)
  039fc54  clrlwi 8, 8, 24
  039fc58  clrlwi 9, 9, 24
  039fc5c  lwz 10, -28072(6)
  039fc60  clrlwi 6, 7, 24
  039fc64  fadds 3, 3, 1
  039fc68  clrlwi 10, 10, 24
  039fc6c  fmr 1, 4
  039fc70  std 6, 112(1)
  039fc74  fmuls 2, 2, 3
  039fc78  fctiwz 2, 2
  039fc7c  stfd 2, 128(1)
  039fc80  lwz 7, 132(1)
  039fc84  extsw 7, 7
  039fc88  bl 0x1d4d88
  039fc8c  nop
  039fc90  ld 0, 160(1)
  039fc94  mtlr 0
  039fc98  addi 1, 1, 144
  039fc9c  blr
