# game/update/moby875.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_875:   # 0x49e5d0, 0x48c bytes
  049e5d0  stdu 1, -240(1)
  049e5d4  mflr 0
  049e5d8  std 0, 256(1)
  049e5dc  stfd 22, 160(1)
  049e5e0  stfd 23, 168(1)
  049e5e4  stfd 24, 176(1)
  049e5e8  stfd 25, 184(1)
  049e5ec  stfd 26, 192(1)
  049e5f0  stfd 27, 200(1)
  049e5f4  stfd 28, 208(1)
  049e5f8  stfd 29, 216(1)
  049e5fc  stfd 30, 224(1)
  049e600  stfd 31, 232(1)
  049e604  std 31, 152(1)
  049e608  cmpwi 3, 0
  049e60c  std 30, 144(1)
  049e610  std 29, 136(1)
  049e614  ori 31, 3, 0
  049e618  bt 2, 0x49ea18
  049e61c  lwz 30, 120(31)
  049e620  cmpwi 30, 0
  049e624  bt 2, 0x49ea18
  049e628  lbz 3, 32(31)
  049e62c  lfs 28, 16(31)
  049e630  lfs 29, 20(31)
  049e634  cmpwi 3, 1
  049e638  lfs 30, 24(31)
  049e63c  cmpwi 1, 3, 3
  049e640  cmpwi 6, 3, 2
  049e644  cmpwi 7, 3, 0
  049e648  bt 1, 0x49e65c
  049e64c  cmpwi 3, -1
  049e650  bf 1, 0x49e9d4
  049e654  bf 29, 0x49e668
  049e658  b 0x49e70c
  049e65c  bf 25, 0x49e7d0
  049e660  bf 5, 0x49e910
  049e664  b 0x49e9d4
  049e668  li 6, 0
  049e66c  li 7, 4
  049e670  li 8, 13
  049e674  ori 3, 31, 0
  049e678  stw 6, 32(30)
  049e67c  sth 6, 36(30)
  049e680  li 4, 80
  049e684  stb 7, 40(30)
  049e688  li 5, 64
  049e68c  li 6, 16
  049e690  sth 8, 62(30)
  049e694  bl 0xf1ec8
  049e698  nop
  049e69c  lis 3, 74
  049e6a0  addi 29, 3, -6784
  049e6a4  lfs 31, 0(29)
  049e6a8  lfs 27, 4(29)
  049e6ac  fmr 1, 31
  049e6b0  fmr 2, 27
  049e6b4  bl 0xfcbe8
  049e6b8  nop
  049e6bc  lfs 2, 64(31)
  049e6c0  fadds 3, 2, 1
  049e6c4  fmr 1, 31
  049e6c8  fmr 2, 27
  049e6cc  stfs 3, 64(31)
  049e6d0  bl 0xfcbe8
  049e6d4  nop
  049e6d8  lfs 2, 68(31)
  049e6dc  fadds 1, 2, 1
  049e6e0  stfs 1, 68(31)
  049e6e4  lfs 1, 8(29)
  049e6e8  lfs 2, 12(29)
  049e6ec  bl 0xfcbe8
  049e6f0  nop
  049e6f4  lfs 2, 24(31)
  049e6f8  li 3, 1
  049e6fc  fadds 1, 2, 1
  049e700  stb 3, 32(31)
  049e704  stfs 1, 24(31)
  049e708  b 0x49e9d4
  049e70c  lis 3, 151
  049e710  addic 3, 3, -25376
  049e714  lwz 4, 8332(3)
  049e718  cmpwi 4, 3
  049e71c  bt 2, 0x49e72c
  049e720  lwz 4, 8324(3)
  049e724  cmpwi 4, 28
  049e728  bf 2, 0x49e73c
  049e72c  lwz 3, 1272(3)
  049e730  cmpw 3, 31
  049e734  bt 2, 0x49e754
  049e738  b 0x49e9d4
  049e73c  lhz 4, 782(3)
  049e740  cmpwi 4, 0
  049e744  bf 2, 0x49e9d4
  049e748  lwz 3, 764(3)
  049e74c  cmpw 3, 31
  049e750  bf 2, 0x49e9d4
  049e754  lis 3, 74
  049e758  lfs 1, 64(31)
  049e75c  li 5, 16
  049e760  vspltisw 3, -1
  049e764  addi 3, 3, -6784
  049e768  stfs 1, 168(30)
  049e76c  lfs 1, 68(31)
  049e770  lis 4, 114
  049e774  li 6, -3056
  049e778  stfs 1, 172(30)
  049e77c  vslw 3, 3, 3
  049e780  <unknown>
  049e784  li 3, 160
  049e788  vspltw 2, 2, 0
  049e78c  <unknown>
  049e790  vmaddfp 2, 4, 2, 3
  049e794  vctsxs 2, 2, 0
  049e798  vsplth 2, 2, 1
  049e79c  stvehx 2, 3, 30
  049e7a0  lhz 3, 162(30)
  049e7a4  extsh 3, 3
  049e7a8  cmpwi 3, -1
  049e7ac  bt 2, 0x49e7c4
  049e7b0  clrldi 3, 3, 32
  049e7b4  li 4, 0
  049e7b8  ori 5, 31, 0
  049e7bc  bl 0x15d12c
  049e7c0  nop
  049e7c4  li 3, 2
  049e7c8  stb 3, 32(31)
  049e7cc  b 0x49e9d4
  049e7d0  lhz 3, 160(30)
  049e7d4  extsh 3, 3
  049e7d8  bl 0x502730
  049e7dc  nop
  049e7e0  lis 3, 74
  049e7e4  addi 29, 3, -6784
  049e7e8  lfs 2, 20(29)
  049e7ec  fmuls 1, 1, 2
  049e7f0  bl 0x10de78
  049e7f4  nop
  049e7f8  lfs 31, 24(29)
  049e7fc  lfs 27, 28(29)
  049e800  fsubs 2, 31, 1
  049e804  fsubs 3, 27, 1
  049e808  lfs 5, 32(29)
  049e80c  lfs 25, 36(29)
  049e810  fmr 26, 5
  049e814  lfs 24, 40(29)
  049e818  lfs 23, 44(29)
  049e81c  lfs 22, 48(29)
  049e820  fsub 4, 1, 2
  049e824  fsel 1, 4, 2, 1
  049e828  fsub 4, 3, 1
  049e82c  fsel 1, 4, 3, 1
  049e830  fmuls 3, 1, 1
  049e834  fmuls 4, 3, 1
  049e838  fmuls 2, 3, 4
  049e83c  fmadds 1, 4, 26, 1
  049e840  fmuls 4, 3, 2
  049e844  fmadds 1, 2, 25, 1
  049e848  fmuls 2, 3, 4
  049e84c  fmadds 1, 4, 24, 1
  049e850  fmadds 1, 2, 23, 1
  049e854  fmuls 1, 1, 22
  049e858  stfs 1, 64(31)
  049e85c  lhz 3, 160(30)
  049e860  extsh 3, 3
  049e864  bl 0x502730
  049e868  nop
  049e86c  lfs 2, 52(29)
  049e870  fmuls 1, 1, 2
  049e874  bl 0x10de78
  049e878  nop
  049e87c  lfs 2, 56(29)
  049e880  fadds 1, 1, 2
  049e884  lis 4, 114
  049e888  addic 3, 30, 160
  049e88c  fsubs 2, 31, 1
  049e890  fsubs 3, 27, 1
  049e894  fsub 4, 1, 2
  049e898  fsel 1, 4, 2, 1
  049e89c  lfs 4, 24(31)
  049e8a0  fsub 2, 3, 1
  049e8a4  fsel 1, 2, 3, 1
  049e8a8  fmuls 2, 1, 1
  049e8ac  fmuls 3, 2, 1
  049e8b0  fmuls 5, 2, 3
  049e8b4  fmadds 1, 3, 26, 1
  049e8b8  fmuls 3, 2, 5
  049e8bc  fmadds 1, 5, 25, 1
  049e8c0  fmuls 2, 2, 3
  049e8c4  fmadds 1, 3, 24, 1
  049e8c8  fmadds 1, 2, 23, 1
  049e8cc  fmuls 1, 1, 22
  049e8d0  stfs 1, 68(31)
  049e8d4  lfs 31, 60(29)
  049e8d8  lfs 1, -3064(4)
  049e8dc  fnmsubs 1, 1, 31, 4
  049e8e0  stfs 1, 24(31)
  049e8e4  bl 0x4fffb4
  049e8e8  nop
  049e8ec  cmpwi 3, 0
  049e8f0  bt 2, 0x49e9d4
  049e8f4  lis 3, 114
  049e8f8  li 4, 3
  049e8fc  lfs 1, -3064(3)
  049e900  fmuls 1, 1, 31
  049e904  stfs 1, 164(30)
  049e908  stb 4, 32(31)
  049e90c  b 0x49e9d4
  049e910  lis 3, 74
  049e914  lfs 1, 64(31)
  049e918  addi 3, 3, -6784
  049e91c  lfs 2, 64(3)
  049e920  lfs 3, 68(3)
  049e924  fsubs 2, 2, 1
  049e928  lfs 4, 24(3)
  049e92c  lfs 5, 28(3)
  049e930  lfs 6, 32(3)
  049e934  lis 4, 114
  049e938  fmuls 2, 2, 3
  049e93c  fsubs 3, 4, 2
  049e940  fsubs 4, 5, 2
  049e944  fadds 1, 1, 2
  049e948  fsub 5, 2, 3
  049e94c  fsel 3, 5, 3, 2
  049e950  lfs 5, 36(3)
  049e954  fsub 7, 4, 3
  049e958  fsel 3, 7, 4, 3
  049e95c  lfs 4, 40(3)
  049e960  lfs 7, 44(3)
  049e964  lfs 8, 72(3)
  049e968  stfs 1, 64(31)
  049e96c  fmuls 2, 3, 3
  049e970  fmuls 9, 2, 3
  049e974  fmuls 10, 2, 9
  049e978  fmadds 3, 9, 6, 3
  049e97c  fmuls 1, 2, 10
  049e980  fmadds 3, 10, 5, 3
  049e984  fmuls 2, 2, 1
  049e988  fmadds 1, 1, 4, 3
  049e98c  fmadds 1, 2, 7, 1
  049e990  fnmsubs 1, 1, 8, 30
  049e994  stfs 1, 24(31)
  049e998  lfs 1, 76(3)
  049e99c  lfs 2, 164(30)
  049e9a0  lfs 3, -3048(4)
  049e9a4  fmadds 1, 3, 1, 2
  049e9a8  stfs 1, 164(30)
  049e9ac  lfs 2, 24(31)
  049e9b0  fsubs 1, 2, 1
  049e9b4  fcmpu 0, 1, 8
  049e9b8  stfs 1, 24(31)
  049e9bc  cror 6, 1, 2
  049e9c0  bt 6, 0x49e9d4
  049e9c4  ori 3, 31, 0
  049e9c8  bl 0xefb38
  049e9cc  nop
  049e9d0  b 0x49ea18
  049e9d4  lfs 1, 16(31)
  049e9d8  lfs 2, 20(31)
  049e9dc  addic 5, 31, 64
  049e9e0  fsubs 1, 1, 28
  049e9e4  lfs 3, 24(31)
  049e9e8  fsubs 2, 2, 29
  049e9ec  lfs 4, 28(31)
  049e9f0  fsubs 3, 3, 30
  049e9f4  addic 3, 30, 96
  049e9f8  stfs 4, 124(1)
  049e9fc  addic 4, 1, 112
  049ea00  ori 6, 5, 0
  049ea04  stfs 1, 112(1)
  049ea08  stfs 2, 116(1)
  049ea0c  stfs 3, 120(1)
  049ea10  bl 0x112900
  049ea14  nop
  049ea18  ld 0, 256(1)
  049ea1c  mtlr 0
  049ea20  lfd 22, 160(1)
  049ea24  lfd 23, 168(1)
  049ea28  lfd 24, 176(1)
  049ea2c  lfd 25, 184(1)
  049ea30  lfd 26, 192(1)
  049ea34  lfd 27, 200(1)
  049ea38  lfd 28, 208(1)
  049ea3c  lfd 29, 216(1)
  049ea40  lfd 30, 224(1)
  049ea44  lfd 31, 232(1)
  049ea48  ld 29, 136(1)
  049ea4c  ld 30, 144(1)
  049ea50  ld 31, 152(1)
  049ea54  addi 1, 1, 240
  049ea58  blr

M1080_0049ea5c:   # 0x49ea5c, 0x14 bytes
  049ea5c  lis 3, 140
  049ea60  lis 4, 1
  049ea64  addic 3, 3, 32740
  049ea68  stw 4, 72(3)
  049ea6c  blr
