# game/update/moby852.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M852_0048e730:   # 0x48e730, 0x14 bytes
  048e730  lis 3, 139
  048e734  lis 4, 1
  048e738  addic 3, 3, -11420
  048e73c  stw 4, 72(3)
  048e740  blr

UpdateMoby_852:   # 0x48e760, 0x260 bytes
  048e760  stdu 1, -128(1)
  048e764  mflr 0
  048e768  std 0, 144(1)
  048e76c  std 31, 120(1)
  048e770  lbz 4, 32(3)
  048e774  std 30, 112(1)
  048e778  ori 31, 3, 0
  048e77c  lwz 30, 120(3)
  048e780  cmpwi 4, 0
  048e784  cmpwi 1, 4, 2
  048e788  cmpwi 6, 4, 1
  048e78c  cmpwi 7, 4, -1
  048e790  bt 1, 0x48e79c
  048e794  bf 29, 0x48e9a8
  048e798  b 0x48e7a8
  048e79c  bf 25, 0x48e7dc
  048e7a0  bf 5, 0x48e830
  048e7a4  b 0x48e9a8
  048e7a8  lis 3, 73
  048e7ac  lfs 1, 24(31)
  048e7b0  addi 3, 3, -6328
  048e7b4  li 4, 1
  048e7b8  lfs 2, 0(3)
  048e7bc  fadds 1, 1, 2
  048e7c0  stfs 1, 12(30)
  048e7c4  lfs 1, 4(3)
  048e7c8  lfs 2, 24(31)
  048e7cc  stb 4, 32(31)
  048e7d0  fsubs 1, 2, 1
  048e7d4  stfs 1, 24(31)
  048e7d8  b 0x48e9a8
  048e7dc  lis 3, 164
  048e7e0  lwz 4, 0(30)
  048e7e4  slwi 4, 4, 8
  048e7e8  lwz 3, -28512(3)
  048e7ec  addc 3, 3, 4
  048e7f0  clrldi 3, 3, 32
  048e7f4  lbz 3, 188(3)
  048e7f8  cmpwi 3, 1
  048e7fc  cmpwi 1, 3, 2
  048e800  bf 2, 0x48e810
  048e804  li 3, 2
  048e808  stb 3, 32(31)
  048e80c  b 0x48e9a8
  048e810  bf 6, 0x48e9a8
  048e814  li 3, 0
  048e818  li 4, 3
  048e81c  lfs 1, 12(30)
  048e820  stw 3, 68(31)
  048e824  stfs 1, 24(31)
  048e828  stb 4, 32(31)
  048e82c  b 0x48e9a8
  048e830  addic 3, 30, 4
  048e834  bl 0x4fff60
  048e838  nop
  048e83c  cmpwi 3, 0
  048e840  bt 2, 0x48e8f0
  048e844  lis 4, 139
  048e848  lis 6, 114
  048e84c  lfs 1, 12(30)
  048e850  lis 8, 139
  048e854  lis 7, 114
  048e858  lis 9, 139
  048e85c  lfs 2, -11312(4)
  048e860  lfs 3, -3048(6)
  048e864  addic 3, 31, 24
  048e868  lfs 4, -11308(8)
  048e86c  addic 5, 30, 16
  048e870  lfs 5, -3052(7)
  048e874  fmuls 2, 2, 3
  048e878  lfs 6, -11304(9)
  048e87c  fmuls 3, 4, 3
  048e880  fmuls 4, 6, 5
  048e884  bl 0x109c30
  048e888  nop
  048e88c  lhz 3, 166(31)
  048e890  cmpwi 3, 853
  048e894  bf 2, 0x48e8f0
  048e898  lfs 3, 24(31)
  048e89c  lis 3, 73
  048e8a0  lfs 2, 12(30)
  048e8a4  addi 3, 3, -6328
  048e8a8  fsubs 4, 3, 2
  048e8ac  lfs 1, 8(3)
  048e8b0  fabs 4, 4
  048e8b4  fcmpu 0, 4, 1
  048e8b8  cror 6, 1, 2
  048e8bc  bt 6, 0x48e8f0
  048e8c0  fsubs 2, 2, 3
  048e8c4  lfs 3, 16(30)
  048e8c8  fadds 2, 2, 3
  048e8cc  fabs 2, 2
  048e8d0  fcmpu 0, 2, 1
  048e8d4  cror 6, 0, 2
  048e8d8  bt 6, 0x48e8f0
  048e8dc  li 3, 0
  048e8e0  li 4, 0
  048e8e4  ori 5, 31, 0
  048e8e8  bl 0x15d12c
  048e8ec  nop
  048e8f0  addic 3, 30, 8
  048e8f4  bl 0x4fff60
  048e8f8  nop
  048e8fc  cmpwi 3, 0
  048e900  bt 2, 0x48e97c
  048e904  lis 3, 73
  048e908  lis 5, 139
  048e90c  addi 4, 3, -6328
  048e910  lis 3, 139
  048e914  lis 7, 139
  048e918  lis 6, 114
  048e91c  lfs 2, 16(4)
  048e920  lfs 3, -11300(5)
  048e924  lfs 4, -11296(3)
  048e928  lfs 1, 12(4)
  048e92c  fmuls 3, 3, 2
  048e930  lfs 5, -11292(7)
  048e934  fmuls 4, 4, 2
  048e938  lis 4, 114
  048e93c  lfs 6, -3048(6)
  048e940  fmuls 5, 5, 2
  048e944  addic 3, 31, 68
  048e948  addic 5, 30, 20
  048e94c  lfs 7, -3052(4)
  048e950  fmuls 2, 3, 6
  048e954  fmuls 3, 4, 6
  048e958  fmuls 4, 5, 7
  048e95c  bl 0x10a2e0
  048e960  nop
  048e964  lwz 3, 68(31)
  048e968  cmpwi 3, 0
  048e96c  bf 2, 0x48e9a8
  048e970  li 3, 3
  048e974  stb 3, 32(31)
  048e978  b 0x48e9a8
  048e97c  lwz 3, 8(30)
  048e980  cmpwi 3, 1
  048e984  bf 2, 0x48e9a8
  048e988  lhz 3, 166(31)
  048e98c  cmpwi 3, 852
  048e990  bf 2, 0x48e9a8
  048e994  li 3, 0
  048e998  li 4, 0
  048e99c  ori 5, 31, 0
  048e9a0  bl 0x15d12c
  048e9a4  nop
  048e9a8  ld 0, 144(1)
  048e9ac  mtlr 0
  048e9b0  ld 30, 112(1)
  048e9b4  ld 31, 120(1)
  048e9b8  addi 1, 1, 128
  048e9bc  blr
