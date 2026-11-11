# game/update/moby1405.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1405_0026e3a4:   # 0x26e3a4, 0x14 bytes
  026e3a4  lis 3, 122
  026e3a8  lis 4, 1
  026e3ac  addic 3, 3, -8540
  026e3b0  stw 4, 72(3)
  026e3b4  blr

M1405_0026e3e0:   # 0x26e3e0, 0x514 bytes
  026e3e0  stdu 1, -336(1)
  026e3e4  mflr 0
  026e3e8  std 0, 352(1)
  026e3ec  stfd 24, 272(1)
  026e3f0  stfd 25, 280(1)
  026e3f4  stfd 26, 288(1)
  026e3f8  stfd 27, 296(1)
  026e3fc  stfd 28, 304(1)
  026e400  stfd 29, 312(1)
  026e404  stfd 30, 320(1)
  026e408  stfd 31, 328(1)
  026e40c  std 31, 264(1)
  026e410  ori 31, 3, 0
  026e414  std 26, 224(1)
  026e418  lis 3, 161
  026e41c  lis 26, 39
  026e420  std 30, 256(1)
  026e424  addi 26, 26, -7240
  026e428  lwz 30, 120(31)
  026e42c  lwz 3, 1808(3)
  026e430  std 29, 248(1)
  026e434  std 28, 240(1)
  026e438  std 27, 232(1)
  026e43c  std 25, 216(1)
  026e440  std 24, 208(1)
  026e444  std 23, 200(1)
  026e448  std 22, 192(1)
  026e44c  std 21, 184(1)
  026e450  std 20, 176(1)
  026e454  std 19, 168(1)
  026e458  std 18, 160(1)
  026e45c  std 17, 152(1)
  026e460  std 16, 144(1)
  026e464  extsw 3, 3
  026e468  bl 0x502730
  026e46c  nop
  026e470  lis 3, 122
  026e474  lis 29, 114
  026e478  lis 4, 122
  026e47c  lfs 2, -4496(3)
  026e480  lfs 3, -3052(29)
  026e484  lwz 3, -4516(4)
  026e488  fmuls 31, 2, 3
  026e48c  extsw 3, 3
  026e490  fmuls 31, 31, 1
  026e494  bl 0x685c4
  026e498  nop
  026e49c  ori 4, 3, 0
  026e4a0  li 3, 24
  026e4a4  bl 0x174f80
  026e4a8  nop
  026e4ac  lis 7, 122
  026e4b0  li 3, 0
  026e4b4  li 4, 1
  026e4b8  li 5, 0
  026e4bc  li 6, 1
  026e4c0  lwz 7, -4520(7)
  026e4c4  bl 0x502ea8
  026e4c8  nop
  026e4cc  ori 4, 3, 0
  026e4d0  li 3, 3
  026e4d4  bl 0x174f80
  026e4d8  nop
  026e4dc  li 3, 0
  026e4e0  li 4, 0
  026e4e4  li 8, 0
  026e4e8  li 5, 0
  026e4ec  li 6, 0
  026e4f0  li 7, 0
  026e4f4  bl 0x502f08
  026e4f8  nop
  026e4fc  ori 4, 3, 0
  026e500  li 3, 6
  026e504  bl 0x174f80
  026e508  nop
  026e50c  lis 9, 0
  026e510  li 3, 0
  026e514  li 4, 0
  026e518  ori 9, 9, 65424
  026e51c  li 5, 1
  026e520  li 6, 1
  026e524  li 7, 1
  026e528  li 8, 0
  026e52c  bl 0x502fd4
  026e530  nop
  026e534  ori 4, 3, 0
  026e538  li 3, 26
  026e53c  bl 0x174f80
  026e540  nop
  026e544  lis 3, 122
  026e548  lfs 1, 4(30)
  026e54c  lis 4, 114
  026e550  stfs 1, 0(30)
  026e554  lfs 2, 0(26)
  026e558  lfs 3, -4504(3)
  026e55c  lfs 4, -3056(4)
  026e560  fmuls 3, 3, 4
  026e564  lfs 4, 4(26)
  026e568  fdivs 2, 2, 3
  026e56c  lfs 3, -3052(29)
  026e570  fmuls 2, 2, 4
  026e574  fmuls 2, 2, 3
  026e578  bl 0x502578
  026e57c  nop
  026e580  ori 3, 31, 0
  026e584  stfs 1, 4(30)
  026e588  addic 4, 1, 112
  026e58c  addic 5, 1, 116
  026e590  addic 6, 1, 120
  026e594  bl 0xf1ef0
  026e598  nop
  026e59c  lis 3, 122
  026e5a0  lwz 4, 120(1)
  026e5a4  li 18, 0
  026e5a8  lwz 5, 116(1)
  026e5ac  slwi 4, 4, 16
  026e5b0  slwi 5, 5, 8
  026e5b4  lwz 3, -4512(3)
  026e5b8  lwz 6, 112(1)
  026e5bc  ori 23, 18, 0
  026e5c0  slwi 3, 3, 24
  026e5c4  or 29, 5, 6
  026e5c8  or 3, 3, 4
  026e5cc  ori 19, 23, 0
  026e5d0  or 29, 3, 29
  026e5d4  lis 27, 122
  026e5d8  ori 28, 23, 0
  026e5dc  addic 27, 27, -8432
  026e5e0  lwzx 3, 27, 19
  026e5e4  cmpwi 3, 0
  026e5e8  bf 1, 0x26e71c
  026e5ec  lfs 30, 8(26)
  026e5f0  lfs 29, 12(26)
  026e5f4  ori 25, 23, 0
  026e5f8  lfs 28, 16(26)
  026e5fc  lis 22, 122
  026e600  lfs 27, 20(26)
  026e604  lis 21, 122
  026e608  lis 20, 122
  026e60c  lfs 26, 24(26)
  026e610  lfs 25, 28(26)
  026e614  ori 24, 25, 0
  026e618  addic 22, 22, -4544
  026e61c  lfs 24, 32(26)
  026e620  addic 21, 21, -4568
  026e624  addic 20, 20, -4552
  026e628  lwzx 3, 22, 19
  026e62c  lis 17, 122
  026e630  addc 3, 3, 25
  026e634  clrldi 16, 3, 32
  026e638  lfs 2, -4508(17)
  026e63c  lfs 1, 4(16)
  026e640  lfs 3, 0(16)
  026e644  fmuls 1, 1, 1
  026e648  fmadds 1, 3, 3, 1
  026e64c  fsqrts 1, 1
  026e650  bl 0x502798
  026e654  nop
  026e658  lfs 2, -4508(17)
  026e65c  fmuls 1, 1, 30
  026e660  fdivs 1, 1, 2
  026e664  bl 0x502648
  026e668  nop
  026e66c  lfs 2, 4(30)
  026e670  bl 0x502578
  026e674  nop
  026e678  lfs 4, 0(16)
  026e67c  lis 3, 122
  026e680  lfs 6, 16(31)
  026e684  lwzx 4, 21, 19
  026e688  fadds 4, 4, 6
  026e68c  addc 5, 4, 25
  026e690  addic 28, 28, 1
  026e694  fsubs 2, 29, 1
  026e698  fsubs 3, 28, 1
  026e69c  fsub 5, 1, 2
  026e6a0  fsel 1, 5, 2, 1
  026e6a4  lfs 2, -4500(3)
  026e6a8  lfs 5, 20(31)
  026e6ac  lfs 6, 24(31)
  026e6b0  lwzx 3, 20, 19
  026e6b4  stfsx 4, 4, 25
  026e6b8  clrldi 4, 5, 32
  026e6bc  fsub 7, 3, 1
  026e6c0  addic 25, 25, 12
  026e6c4  fsel 1, 7, 3, 1
  026e6c8  lfs 3, 4(16)
  026e6cc  fadds 3, 3, 5
  026e6d0  fmuls 4, 1, 1
  026e6d4  stfs 3, 4(4)
  026e6d8  lfs 3, 8(16)
  026e6dc  fadds 3, 3, 6
  026e6e0  fmuls 5, 4, 1
  026e6e4  fmuls 6, 4, 5
  026e6e8  fmadds 1, 5, 27, 1
  026e6ec  fmuls 5, 4, 6
  026e6f0  fmadds 1, 6, 26, 1
  026e6f4  fmuls 4, 4, 5
  026e6f8  fmadds 1, 5, 25, 1
  026e6fc  fmadds 1, 4, 24, 1
  026e700  fmadds 1, 2, 1, 3
  026e704  stfs 1, 8(4)
  026e708  stwx 29, 3, 24
  026e70c  lwzx 3, 27, 19
  026e710  addic 24, 24, 4
  026e714  cmpw 28, 3
  026e718  bt 0, 0x26e628
  026e71c  addic 18, 18, 1
  026e720  addic 19, 19, 4
  026e724  cmpwi 18, 2
  026e728  bt 0, 0x26e5d4
  026e72c  lis 3, 122
  026e730  lis 29, 122
  026e734  lfs 30, 36(26)
  026e738  ori 31, 23, 0
  026e73c  ori 30, 1, 0
  026e740  addic 26, 3, -4536
  026e744  addic 29, 29, -4560
  026e748  ori 28, 23, 0
  026e74c  ori 22, 27, 0
  026e750  ori 21, 28, 0
  026e754  lwz 3, 0(22)
  026e758  ori 25, 23, 0
  026e75c  cmpwi 3, 0
  026e760  bf 1, 0x26e800
  026e764  ori 24, 23, 0
  026e768  lis 3, 16256
  026e76c  fmr 2, 30
  026e770  lis 4, -16608
  026e774  lis 5, 16160
  026e778  ori 4, 4, 55676
  026e77c  stw 3, 124(1)
  026e780  stw 3, 132(1)
  026e784  ori 5, 5, 55676
  026e788  stw 4, 128(1)
  026e78c  lfs 1, 124(30)
  026e790  stw 5, 136(1)
  026e794  fmuls 1, 1, 31
  026e798  bl 0x502798
  026e79c  nop
  026e7a0  lwzx 3, 26, 21
  026e7a4  lwzx 4, 29, 21
  026e7a8  lfs 3, 128(30)
  026e7ac  fmr 2, 30
  026e7b0  lfsx 4, 3, 24
  026e7b4  fadds 4, 4, 1
  026e7b8  fmuls 1, 3, 31
  026e7bc  stfsx 4, 4, 24
  026e7c0  bl 0x502798
  026e7c4  nop
  026e7c8  lwzx 3, 26, 21
  026e7cc  addic 25, 25, 1
  026e7d0  lwzx 4, 29, 21
  026e7d4  addc 3, 3, 24
  026e7d8  addc 4, 4, 24
  026e7dc  clrldi 3, 3, 32
  026e7e0  addic 24, 24, 8
  026e7e4  lfs 2, 4(3)
  026e7e8  clrldi 3, 4, 32
  026e7ec  fadds 1, 2, 1
  026e7f0  stfs 1, 4(3)
  026e7f4  lwzx 3, 27, 21
  026e7f8  cmpw 25, 3
  026e7fc  bt 0, 0x26e768
  026e800  addic 28, 28, 1
  026e804  addic 21, 21, 4
  026e808  cmpwi 28, 2
  026e80c  addic 22, 22, 4
  026e810  bt 0, 0x26e754
  026e814  bl 0x71170
  026e818  nop
  026e81c  lis 24, 122
  026e820  lis 22, 122
  026e824  ori 28, 23, 0
  026e828  ori 25, 27, 0
  026e82c  addic 24, 24, -4568
  026e830  addic 22, 22, -4552
  026e834  ori 21, 29, 0
  026e838  lwz 3, 0(25)
  026e83c  li 7, 9
  026e840  lwz 4, 0(24)
  026e844  lwz 5, 0(22)
  026e848  extsw 3, 3
  026e84c  lwz 6, 0(21)
  026e850  bl 0x74604
  026e854  nop
  026e858  addic 28, 28, 1
  026e85c  addic 25, 25, 4
  026e860  cmpwi 28, 2
  026e864  addic 24, 24, 4
  026e868  addic 22, 22, 4
  026e86c  addic 21, 21, 4
  026e870  bt 0, 0x26e838
  026e874  addic 31, 31, 1
  026e878  addic 30, 30, 8
  026e87c  cmpwi 31, 2
  026e880  bt 0, 0x26e748
  026e884  ld 0, 352(1)
  026e888  mtlr 0
  026e88c  lfd 24, 272(1)
  026e890  lfd 25, 280(1)
  026e894  lfd 26, 288(1)
  026e898  lfd 27, 296(1)
  026e89c  lfd 28, 304(1)
  026e8a0  lfd 29, 312(1)
  026e8a4  lfd 30, 320(1)
  026e8a8  lfd 31, 328(1)
  026e8ac  ld 16, 144(1)
  026e8b0  ld 17, 152(1)
  026e8b4  ld 18, 160(1)
  026e8b8  ld 19, 168(1)
  026e8bc  ld 20, 176(1)
  026e8c0  ld 21, 184(1)
  026e8c4  ld 22, 192(1)
  026e8c8  ld 23, 200(1)
  026e8cc  ld 24, 208(1)
  026e8d0  ld 25, 216(1)
  026e8d4  ld 26, 224(1)
  026e8d8  ld 27, 232(1)
  026e8dc  ld 28, 240(1)
  026e8e0  ld 29, 248(1)
  026e8e4  ld 30, 256(1)
  026e8e8  ld 31, 264(1)
  026e8ec  addi 1, 1, 336
  026e8f0  blr

UpdateMoby_1405:   # 0x26e8f4, 0x80 bytes
  026e8f4  stdu 1, -128(1)
  026e8f8  mflr 0
  026e8fc  std 0, 144(1)
  026e900  std 31, 120(1)
  026e904  ori 31, 3, 0
  026e908  lbz 3, 32(3)
  026e90c  cmpwi 3, 0
  026e910  bf 2, 0x26e938
  026e914  ori 3, 31, 0
  026e918  li 4, 64
  026e91c  li 5, 64
  026e920  li 6, 64
  026e924  bl 0xf1ec8
  026e928  nop
  026e92c  li 3, 1
  026e930  stb 3, 32(31)
  026e934  b 0x26e960
  026e938  lis 3, 113
  026e93c  ori 4, 31, 0
  026e940  addic 3, 3, -23632
  026e944  bl 0x6d7e0
  026e948  nop
  026e94c  lhz 4, 52(31)
  026e950  li 3, 0
  026e954  ori 4, 4, 1
  026e958  sth 3, 50(31)
  026e95c  sth 4, 52(31)
  026e960  ld 0, 144(1)
  026e964  mtlr 0
  026e968  ld 31, 120(1)
  026e96c  addi 1, 1, 128
  026e970  blr
