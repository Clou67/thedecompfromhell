# game/update/moby1439.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1439:   # 0x27c788, 0x364 bytes
  027c788  stdu 1, -240(1)
  027c78c  mflr 0
  027c790  std 0, 256(1)
  027c794  stfd 31, 232(1)
  027c798  std 31, 224(1)
  027c79c  lis 4, 40
  027c7a0  std 29, 208(1)
  027c7a4  ori 31, 3, 0
  027c7a8  addi 29, 4, -14504
  027c7ac  lis 4, 114
  027c7b0  lfs 1, 0(29)
  027c7b4  lfs 2, -3056(4)
  027c7b8  lis 4, 161
  027c7bc  fmuls 1, 2, 1
  027c7c0  std 30, 216(1)
  027c7c4  lwz 4, 1808(4)
  027c7c8  lwz 30, 120(31)
  027c7cc  fctiwz 1, 1
  027c7d0  stfd 1, 176(1)
  027c7d4  std 28, 200(1)
  027c7d8  lwz 3, 180(1)
  027c7dc  extsw 28, 3
  027c7e0  divw 5, 4, 28
  027c7e4  mullw 3, 5, 3
  027c7e8  subc 3, 4, 3
  027c7ec  extsw 3, 3
  027c7f0  bl 0x502730
  027c7f4  nop
  027c7f8  fmr 31, 1
  027c7fc  ori 3, 28, 0
  027c800  bl 0x502730
  027c804  nop
  027c808  fdivs 1, 31, 1
  027c80c  lfs 2, 4(29)
  027c810  lfs 3, 8(29)
  027c814  lfs 4, 12(29)
  027c818  lfs 5, 16(29)
  027c81c  lfs 6, 20(29)
  027c820  lis 3, 123
  027c824  lfs 7, 24(29)
  027c828  lis 4, 123
  027c82c  lfs 8, 28(29)
  027c830  lfs 9, 32(29)
  027c834  lfs 10, 36(29)
  027c838  lwz 3, -22720(3)
  027c83c  lwz 4, -22716(4)
  027c840  extsw 3, 3
  027c844  extsw 4, 4
  027c848  fmsubs 1, 1, 2, 3
  027c84c  fsubs 2, 4, 1
  027c850  fsubs 3, 5, 1
  027c854  fsub 4, 1, 2
  027c858  fsel 1, 4, 2, 1
  027c85c  fsub 2, 3, 1
  027c860  fsel 1, 2, 3, 1
  027c864  fmuls 2, 1, 1
  027c868  fmuls 3, 2, 1
  027c86c  fmuls 4, 2, 3
  027c870  fmadds 1, 3, 6, 1
  027c874  fmuls 3, 2, 4
  027c878  fmadds 1, 4, 7, 1
  027c87c  fmuls 2, 2, 3
  027c880  fmadds 1, 3, 8, 1
  027c884  fmadds 1, 2, 9, 1
  027c888  fmadds 1, 1, 10, 10
  027c88c  bl 0x5027bc
  027c890  nop
  027c894  stw 3, 144(31)
  027c898  lbz 3, 32(31)
  027c89c  cmpwi 3, 0
  027c8a0  bt 1, 0x27c8b0
  027c8a4  cmpwi 3, -1
  027c8a8  bf 1, 0x27cac8
  027c8ac  b 0x27c8c4
  027c8b0  cmpwi 3, 1
  027c8b4  bf 1, 0x27c8d8
  027c8b8  cmpwi 3, 2
  027c8bc  bf 1, 0x27caa4
  027c8c0  b 0x27cac8
  027c8c4  li 3, 255
  027c8c8  li 4, 1
  027c8cc  stb 3, 48(31)
  027c8d0  stb 4, 32(31)
  027c8d4  b 0x27cac8
  027c8d8  lis 29, 151
  027c8dc  lfs 1, 20(31)
  027c8e0  addic 29, 29, -25376
  027c8e4  lfs 2, 16(31)
  027c8e8  lis 3, 40
  027c8ec  lfs 3, 132(29)
  027c8f0  lfs 4, 128(29)
  027c8f4  fsubs 1, 1, 3
  027c8f8  fsubs 2, 2, 4
  027c8fc  lfs 3, 24(31)
  027c900  lfs 4, 136(29)
  027c904  fsubs 3, 3, 4
  027c908  addi 3, 3, -14504
  027c90c  fmuls 1, 1, 1
  027c910  fmadds 1, 2, 2, 1
  027c914  lfs 2, 40(3)
  027c918  fmadds 1, 3, 3, 1
  027c91c  fsqrts 1, 1
  027c920  fcmpu 0, 1, 2
  027c924  cror 6, 1, 2
  027c928  bt 6, 0x27cac8
  027c92c  addic 3, 1, 112
  027c930  addic 4, 31, 192
  027c934  bl 0x5010c0
  027c938  nop
  027c93c  lfs 1, 132(29)
  027c940  lfs 2, 20(31)
  027c944  lfs 3, 128(29)
  027c948  fsubs 1, 1, 2
  027c94c  lfs 2, 16(31)
  027c950  lfs 4, 128(1)
  027c954  fsubs 2, 3, 2
  027c958  lfs 3, 136(29)
  027c95c  lfs 5, 24(31)
  027c960  lfs 6, 112(1)
  027c964  fsubs 3, 3, 5
  027c968  lis 3, 123
  027c96c  lfs 5, 144(1)
  027c970  lfs 7, 132(1)
  027c974  fmuls 4, 4, 1
  027c978  lfs 8, 140(29)
  027c97c  lfs 9, 136(1)
  027c980  fmuls 7, 7, 1
  027c984  lfs 10, 160(1)
  027c988  fmuls 1, 9, 1
  027c98c  lfs 9, 116(1)
  027c990  lfs 11, 120(1)
  027c994  fmadds 4, 6, 2, 4
  027c998  fmadds 6, 9, 2, 7
  027c99c  lfs 7, 148(1)
  027c9a0  fmadds 1, 11, 2, 1
  027c9a4  fmadds 2, 5, 3, 4
  027c9a8  lfs 4, 152(1)
  027c9ac  fmadds 6, 7, 3, 6
  027c9b0  lfs 5, -22744(3)
  027c9b4  fmadds 3, 4, 3, 1
  027c9b8  lfs 7, 164(1)
  027c9bc  lfs 4, 168(1)
  027c9c0  fmadds 1, 10, 8, 2
  027c9c4  fmadds 2, 7, 8, 6
  027c9c8  fmadds 3, 4, 8, 3
  027c9cc  fcmpu 0, 1, 5
  027c9d0  cror 6, 0, 2
  027c9d4  bt 6, 0x27cac8
  027c9d8  lis 3, 123
  027c9dc  addic 3, 3, -22744
  027c9e0  lfs 4, 4(3)
  027c9e4  fcmpu 0, 1, 4
  027c9e8  cror 6, 1, 2
  027c9ec  bt 6, 0x27cac8
  027c9f0  lfs 1, 8(3)
  027c9f4  fcmpu 0, 2, 1
  027c9f8  cror 6, 0, 2
  027c9fc  bt 6, 0x27cac8
  027ca00  lfs 1, 12(3)
  027ca04  fcmpu 0, 2, 1
  027ca08  cror 6, 1, 2
  027ca0c  bt 6, 0x27cac8
  027ca10  lfs 1, 16(3)
  027ca14  fcmpu 0, 3, 1
  027ca18  cror 6, 0, 2
  027ca1c  bt 6, 0x27cac8
  027ca20  lfs 1, 20(3)
  027ca24  fcmpu 0, 3, 1
  027ca28  cror 6, 1, 2
  027ca2c  bt 6, 0x27cac8
  027ca30  li 3, 2
  027ca34  li 4, 1
  027ca38  vspltisw 4, -1
  027ca3c  lis 5, 123
  027ca40  li 6, -22748
  027ca44  stb 3, 32(31)
  027ca48  li 7, 36
  027ca4c  stb 4, 188(31)
  027ca50  lis 3, 40
  027ca54  lis 4, 114
  027ca58  vslw 4, 4, 4
  027ca5c  addi 3, 3, -14504
  027ca60  <unknown>
  027ca64  vcfsx 2, 2, 0
  027ca68  ori 5, 31, 0
  027ca6c  <unknown>
  027ca70  li 3, -3056
  027ca74  vspltw 3, 3, 0
  027ca78  <unknown>
  027ca7c  li 3, 1
  027ca80  li 4, 0
  027ca84  vaddfp 2, 2, 3
  027ca88  vmaddfp 2, 5, 2, 4
  027ca8c  vctsxs 2, 2, 0
  027ca90  vspltw 2, 2, 0
  027ca94  stvewx 2, 0, 30
  027ca98  bl 0x15d12c
  027ca9c  nop
  027caa0  b 0x27cac8
  027caa4  ori 3, 30, 0
  027caa8  bl 0x4fff60
  027caac  nop
  027cab0  cmpwi 3, 0
  027cab4  bt 2, 0x27cac8
  027cab8  li 3, 1
  027cabc  li 4, 0
  027cac0  stb 3, 32(31)
  027cac4  stb 4, 188(31)
  027cac8  ld 0, 256(1)
  027cacc  mtlr 0
  027cad0  lfd 31, 232(1)
  027cad4  ld 28, 200(1)
  027cad8  ld 29, 208(1)
  027cadc  ld 30, 216(1)
  027cae0  ld 31, 224(1)
  027cae4  addi 1, 1, 240
  027cae8  blr
