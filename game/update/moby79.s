# game/update/moby79.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M789_0045e140:   # 0x45e140, 0x14c bytes
  045e140  stdu 1, -144(1)
  045e144  mflr 0
  045e148  std 0, 160(1)
  045e14c  ori 5, 4, 0
  045e150  lis 4, 70
  045e154  li 6, 12
  045e158  addi 7, 4, -7880
  045e15c  lwz 4, 120(3)
  045e160  addi 8, 6, 16
  045e164  vspltisw 5, -1
  045e168  vspltisw 9, -1
  045e16c  <unknown>
  045e170  <unknown>
  045e174  <unknown>
  045e178  vslw 5, 5, 5
  045e17c  vor 3, 3, 4
  045e180  vspltw 4, 2, 0
  045e184  lis 6, 135
  045e188  lis 7, 114
  045e18c  vspltisw 6, -1
  045e190  vrefp 2, 3
  045e194  li 8, 15424
  045e198  li 10, -3052
  045e19c  lfs 1, 15424(6)
  045e1a0  lfs 2, -3052(7)
  045e1a4  li 9, 8
  045e1a8  vslw 6, 6, 6
  045e1ac  fmuls 1, 1, 2
  045e1b0  <unknown>
  045e1b4  addi 11, 9, 16
  045e1b8  lfs 2, 12(4)
  045e1bc  <unknown>
  045e1c0  std 31, 136(1)
  045e1c4  <unknown>
  045e1c8  ori 31, 3, 0
  045e1cc  vnmsubfp 7, 2, 3, 4
  045e1d0  fdivs 1, 1, 2
  045e1d4  ori 3, 5, 0
  045e1d8  vmaddfp 2, 2, 7, 5
  045e1dc  vslw 5, 9, 9
  045e1e0  <unknown>
  045e1e4  lfs 2, 8(4)
  045e1e8  vor 7, 11, 7
  045e1ec  vmaddfp 5, 8, 10, 5
  045e1f0  vspltisw 8, -1
  045e1f4  lwz 6, 0(5)
  045e1f8  <unknown>
  045e1fc  vslw 8, 8, 8
  045e200  vnmsubfp 9, 2, 3, 4
  045e204  extsw 6, 6
  045e208  vmaddfp 6, 2, 9, 6
  045e20c  vcfsx 2, 10, 0
  045e210  vnmsubfp 3, 6, 3, 4
  045e214  vspltw 4, 2, 0
  045e218  vmaddfp 3, 6, 3, 8
  045e21c  fadds 1, 2, 1
  045e220  vmaddfp 3, 3, 5, 7
  045e224  vspltw 5, 3, 0
  045e228  vcmpgtfp. 4, 5, 4
  045e22c  stvewx 5, 9, 4
  045e230  std 6, 112(1)
  045e234  lfd 2, 112(1)
  045e238  fcfid 2, 2
  045e23c  frsp 2, 2
  045e240  bt 26, 0x45e258
  045e244  vsubfp 2, 3, 2
  045e248  li 5, 8
  045e24c  fsubs 1, 1, 2
  045e250  vspltw 2, 2, 0
  045e254  stvewx 2, 5, 4
  045e258  addic 6, 31, 16
  045e25c  addic 7, 31, 64
  045e260  li 5, 1
  045e264  li 8, 0
  045e268  bl 0x117390
  045e26c  nop
  045e270  lfs 1, 76(31)
  045e274  stfs 1, 64(31)
  045e278  ld 0, 160(1)
  045e27c  mtlr 0
  045e280  ld 31, 136(1)
  045e284  addi 1, 1, 144
  045e288  blr

UpdateMoby_79:   # 0x45e2e0, 0x139c bytes
  045e2e0  stdu 1, -512(1)
  045e2e4  mflr 0
  045e2e8  std 0, 528(1)
  045e2ec  stfd 29, 488(1)
  045e2f0  stfd 30, 496(1)
  045e2f4  stfd 31, 504(1)
  045e2f8  std 28, 456(1)
  045e2fc  lis 4, 149
  045e300  std 31, 480(1)
  045e304  lwz 28, 120(3)
  045e308  ori 31, 3, 0
  045e30c  addic 4, 4, 5056
  045e310  std 24, 424(1)
  045e314  lis 5, 16988
  045e318  ori 24, 1, 0
  045e31c  lwz 4, 328(4)
  045e320  srawi 3, 4, 31
  045e324  srwi 6, 3, 1
  045e328  xor 4, 6, 4
  045e32c  subc 3, 4, 3
  045e330  std 30, 472(1)
  045e334  std 29, 464(1)
  045e338  std 27, 448(1)
  045e33c  std 26, 440(1)
  045e340  std 25, 432(1)
  045e344  cmpw 3, 5
  045e348  bt 0, 0x45f640
  045e34c  ori 3, 31, 0
  045e350  li 30, 0
  045e354  lis 4, 1
  045e358  li 5, 0
  045e35c  bl 0x10675c
  045e360  nop
  045e364  ori 29, 3, 0
  045e368  lbz 3, 32(31)
  045e36c  cmpwi 3, 0
  045e370  bt 1, 0x45e380
  045e374  cmpwi 3, -1
  045e378  bf 1, 0x45f628
  045e37c  b 0x45e394
  045e380  cmpwi 3, 1
  045e384  bf 1, 0x45ef6c
  045e388  cmpwi 3, 2
  045e38c  bf 1, 0x45f4b0
  045e390  b 0x45f628
  045e394  li 3, 255
  045e398  lwz 5, 36(31)
  045e39c  lis 4, 135
  045e3a0  stb 3, 48(31)
  045e3a4  sth 3, 50(31)
  045e3a8  lfs 1, 15428(4)
  045e3ac  lfs 2, 36(5)
  045e3b0  fmuls 1, 2, 1
  045e3b4  stfs 1, 44(31)
  045e3b8  bl 0xfcc68
  045e3bc  nop
  045e3c0  li 3, -1
  045e3c4  stfs 1, 28(28)
  045e3c8  stw 3, 808(28)
  045e3cc  bl 0xfcc68
  045e3d0  nop
  045e3d4  lwz 3, 0(28)
  045e3d8  lis 4, 165
  045e3dc  stfs 1, 872(28)
  045e3e0  slwi 3, 3, 2
  045e3e4  addic 27, 4, 7136
  045e3e8  extsw 3, 3
  045e3ec  lis 4, -16512
  045e3f0  lwzx 27, 27, 3
  045e3f4  lwz 3, 28(27)
  045e3f8  cmpw 3, 4
  045e3fc  bf 2, 0x45eef4
  045e400  lwz 3, 0(27)
  045e404  lfs 4, 16(27)
  045e408  slwi 3, 3, 4
  045e40c  lfs 5, 20(27)
  045e410  extsw 4, 3
  045e414  addc 3, 27, 3
  045e418  clrldi 3, 3, 32
  045e41c  lfsx 1, 27, 4
  045e420  fsubs 1, 4, 1
  045e424  lfs 2, 4(3)
  045e428  lis 3, 70
  045e42c  fsubs 2, 5, 2
  045e430  addi 3, 3, -7540
  045e434  lis 26, 115
  045e438  addic 26, 26, 22784
  045e43c  fabs 3, 1
  045e440  stfs 1, 204(1)
  045e444  fabs 6, 2
  045e448  stfs 2, 208(1)
  045e44c  fsubs 1, 3, 6
  045e450  stfs 1, 212(1)
  045e454  lwz 4, 204(1)
  045e458  lfs 29, 0(3)
  045e45c  lfs 1, 204(1)
  045e460  lwz 5, 208(1)
  045e464  lfs 2, 208(1)
  045e468  fabs 1, 1
  045e46c  lfs 30, 4(3)
  045e470  rlwinm 5, 5, 3, 29, 29
  045e474  fabs 7, 2
  045e478  lwz 3, 212(1)
  045e47c  lfs 2, 212(1)
  045e480  rlwimi 5, 3, 2, 30, 30
  045e484  fsub 8, 2, 29
  045e488  ori 3, 26, 0
  045e48c  fsub 9, 2, 29
  045e490  rlwimi 5, 4, 4, 28, 28
  045e494  rlwimi 3, 5, 2, 26, 28
  045e498  slwi 4, 5, 2
  045e49c  clrldi 3, 3, 32
  045e4a0  fsel 6, 8, 1, 6
  045e4a4  lfsx 1, 26, 4
  045e4a8  fsel 3, 9, 7, 3
  045e4ac  lfs 2, 4(3)
  045e4b0  fcmpu 0, 6, 29
  045e4b4  bt 1, 0x45e4c0
  045e4b8  fmr 1, 29
  045e4bc  b 0x45e5d8
  045e4c0  fsubs 7, 3, 6
  045e4c4  fadds 3, 3, 6
  045e4c8  addic 3, 1, 16
  045e4cc  li 6, 2
  045e4d0  addic 5, 3, 376
  045e4d4  addic 4, 3, 360
  045e4d8  mtctr 6
  045e4dc  fdivs 3, 7, 3
  045e4e0  fmuls 6, 3, 3
  045e4e4  stfs 3, 376(24)
  045e4e8  stfs 3, 380(24)
  045e4ec  stfs 3, 384(24)
  045e4f0  stfs 3, 388(24)
  045e4f4  lfs 3, 388(1)
  045e4f8  lfs 7, 380(1)
  045e4fc  lfs 9, 384(1)
  045e500  fmuls 8, 6, 6
  045e504  fmuls 7, 7, 6
  045e508  fmuls 10, 3, 8
  045e50c  fmuls 9, 9, 8
  045e510  fmuls 3, 8, 8
  045e514  stfs 7, 380(1)
  045e518  fmuls 6, 10, 6
  045e51c  stfs 9, 384(1)
  045e520  stfs 6, 388(1)
  045e524  lfs 6, 360(3)
  045e528  fmuls 6, 6, 3
  045e52c  stfs 6, 376(3)
  045e530  lfs 6, 4(4)
  045e534  addic 4, 4, 8
  045e538  fmuls 6, 6, 3
  045e53c  addic 3, 3, 8
  045e540  stfs 6, 4(5)
  045e544  addic 5, 5, 8
  045e548  bdnz 0x45e524
  045e54c  li 5, 4
  045e550  ori 3, 1, 0
  045e554  mtctr 5
  045e558  lis 4, 115
  045e55c  addic 5, 3, 376
  045e560  addic 4, 4, 22752
  045e564  ori 7, 5, 0
  045e568  lfs 3, 376(3)
  045e56c  lfs 6, 0(4)
  045e570  fmuls 3, 3, 6
  045e574  lfs 6, 4(4)
  045e578  addic 4, 4, 8
  045e57c  stfs 3, 376(3)
  045e580  lfs 3, 4(5)
  045e584  addic 3, 3, 8
  045e588  fmuls 3, 3, 6
  045e58c  stfs 3, 4(5)
  045e590  addic 5, 5, 8
  045e594  bdnz 0x45e568
  045e598  ori 3, 1, 0
  045e59c  fmr 3, 29
  045e5a0  mtctr 6
  045e5a4  lfs 6, 376(3)
  045e5a8  fadds 3, 3, 6
  045e5ac  lfs 6, 4(7)
  045e5b0  addic 3, 3, 16
  045e5b4  lfs 7, 8(7)
  045e5b8  lfs 8, 12(7)
  045e5bc  addic 7, 7, 16
  045e5c0  fadds 3, 3, 6
  045e5c4  fadds 3, 3, 7
  045e5c8  fadds 3, 3, 8
  045e5cc  bdnz 0x45e5a4
  045e5d0  fadds 3, 3, 30
  045e5d4  fmadds 1, 3, 1, 2
  045e5d8  lfs 2, 32(27)
  045e5dc  lfs 3, 36(27)
  045e5e0  fsubs 2, 2, 4
  045e5e4  fsubs 3, 3, 5
  045e5e8  fabs 6, 2
  045e5ec  fabs 5, 3
  045e5f0  stfs 2, 192(1)
  045e5f4  stfs 3, 196(1)
  045e5f8  fsubs 2, 6, 5
  045e5fc  stfs 2, 200(1)
  045e600  lwz 3, 192(1)
  045e604  lfs 2, 192(1)
  045e608  lwz 4, 196(1)
  045e60c  lfs 3, 196(1)
  045e610  fabs 2, 2
  045e614  lwz 5, 200(1)
  045e618  rlwinm 4, 4, 3, 29, 29
  045e61c  lfs 4, 200(1)
  045e620  fabs 3, 3
  045e624  rlwimi 4, 5, 2, 30, 30
  045e628  fsub 7, 4, 29
  045e62c  fsub 8, 4, 29
  045e630  rlwimi 4, 3, 4, 28, 28
  045e634  ori 3, 26, 0
  045e638  rlwimi 3, 4, 2, 26, 28
  045e63c  slwi 4, 4, 2
  045e640  clrldi 3, 3, 32
  045e644  fsel 5, 7, 2, 5
  045e648  lfsx 4, 26, 4
  045e64c  fsel 3, 8, 3, 6
  045e650  lfs 2, 4(3)
  045e654  fcmpu 0, 5, 29
  045e658  bt 1, 0x45e664
  045e65c  fmr 4, 29
  045e660  b 0x45e77c
  045e664  fsubs 6, 3, 5
  045e668  fadds 3, 3, 5
  045e66c  addic 3, 1, 16
  045e670  li 6, 2
  045e674  addic 4, 3, 328
  045e678  addic 5, 3, 344
  045e67c  mtctr 6
  045e680  fdivs 3, 6, 3
  045e684  fmuls 5, 3, 3
  045e688  stfs 3, 344(24)
  045e68c  stfs 3, 348(24)
  045e690  stfs 3, 352(24)
  045e694  stfs 3, 356(24)
  045e698  lfs 3, 356(1)
  045e69c  lfs 6, 348(1)
  045e6a0  lfs 8, 352(1)
  045e6a4  fmuls 7, 5, 5
  045e6a8  fmuls 6, 6, 5
  045e6ac  fmuls 9, 3, 7
  045e6b0  fmuls 8, 8, 7
  045e6b4  fmuls 3, 7, 7
  045e6b8  stfs 6, 348(1)
  045e6bc  fmuls 5, 9, 5
  045e6c0  stfs 8, 352(1)
  045e6c4  stfs 5, 356(1)
  045e6c8  lfs 5, 328(3)
  045e6cc  fmuls 5, 5, 3
  045e6d0  stfs 5, 344(3)
  045e6d4  lfs 5, 4(4)
  045e6d8  addic 3, 3, 8
  045e6dc  addic 4, 4, 8
  045e6e0  fmuls 5, 5, 3
  045e6e4  stfs 5, 4(5)
  045e6e8  addic 5, 5, 8
  045e6ec  bdnz 0x45e6c8
  045e6f0  li 5, 4
  045e6f4  ori 3, 1, 0
  045e6f8  mtctr 5
  045e6fc  lis 4, 115
  045e700  addic 5, 3, 344
  045e704  addic 4, 4, 22752
  045e708  ori 7, 5, 0
  045e70c  lfs 3, 344(3)
  045e710  lfs 5, 0(4)
  045e714  fmuls 3, 3, 5
  045e718  lfs 5, 4(4)
  045e71c  addic 4, 4, 8
  045e720  stfs 3, 344(3)
  045e724  lfs 3, 4(5)
  045e728  addic 3, 3, 8
  045e72c  fmuls 3, 3, 5
  045e730  stfs 3, 4(5)
  045e734  addic 5, 5, 8
  045e738  bdnz 0x45e70c
  045e73c  fmr 3, 29
  045e740  ori 3, 1, 0
  045e744  mtctr 6
  045e748  lfs 5, 344(3)
  045e74c  fadds 3, 3, 5
  045e750  addic 3, 3, 16
  045e754  lfs 5, 4(7)
  045e758  lfs 6, 8(7)
  045e75c  lfs 7, 12(7)
  045e760  addic 7, 7, 16
  045e764  fadds 3, 3, 5
  045e768  fadds 3, 3, 6
  045e76c  fadds 3, 3, 7
  045e770  bdnz 0x45e748
  045e774  fadds 3, 3, 30
  045e778  fmadds 4, 3, 4, 2
  045e77c  fmr 2, 1
  045e780  fmr 1, 4
  045e784  bl 0x5025e0
  045e788  nop
  045e78c  lwz 3, 0(27)
  045e790  li 29, 1
  045e794  stfs 1, 28(27)
  045e798  fmr 31, 29
  045e79c  addic 4, 3, -1
  045e7a0  cmpwi 4, 1
  045e7a4  bf 1, 0x45eb38
  045e7a8  addic 25, 27, 16
  045e7ac  fmr 31, 29
  045e7b0  lfs 4, 16(25)
  045e7b4  lfs 1, 0(25)
  045e7b8  lfs 5, 20(25)
  045e7bc  lfs 2, 4(25)
  045e7c0  fsubs 1, 4, 1
  045e7c4  fsubs 2, 5, 2
  045e7c8  fabs 3, 1
  045e7cc  fabs 6, 2
  045e7d0  stfs 1, 180(1)
  045e7d4  stfs 2, 184(1)
  045e7d8  fsubs 1, 3, 6
  045e7dc  stfs 1, 188(1)
  045e7e0  lwz 3, 180(1)
  045e7e4  lfs 1, 180(1)
  045e7e8  lwz 4, 184(1)
  045e7ec  lfs 2, 184(1)
  045e7f0  fabs 1, 1
  045e7f4  lwz 5, 188(1)
  045e7f8  rlwinm 4, 4, 3, 29, 29
  045e7fc  lfs 7, 188(1)
  045e800  fabs 2, 2
  045e804  rlwimi 4, 5, 2, 30, 30
  045e808  fsub 8, 7, 29
  045e80c  fsub 7, 7, 29
  045e810  rlwimi 4, 3, 4, 28, 28
  045e814  ori 3, 26, 0
  045e818  rlwimi 3, 4, 2, 26, 28
  045e81c  slwi 4, 4, 2
  045e820  clrldi 3, 3, 32
  045e824  fsel 6, 8, 1, 6
  045e828  lfsx 1, 26, 4
  045e82c  fsel 3, 7, 2, 3
  045e830  lfs 2, 4(3)
  045e834  fcmpu 0, 6, 29
  045e838  bt 1, 0x45e844
  045e83c  fmr 1, 29
  045e840  b 0x45e95c
  045e844  fsubs 7, 3, 6
  045e848  fadds 3, 3, 6
  045e84c  addic 3, 1, 16
  045e850  li 6, 2
  045e854  addic 4, 3, 296
  045e858  addic 5, 3, 312
  045e85c  mtctr 6
  045e860  fdivs 3, 7, 3
  045e864  fmuls 6, 3, 3
  045e868  stfs 3, 312(24)
  045e86c  stfs 3, 316(24)
  045e870  stfs 3, 320(24)
  045e874  stfs 3, 324(24)
  045e878  lfs 3, 324(1)
  045e87c  lfs 7, 316(1)
  045e880  lfs 9, 320(1)
  045e884  fmuls 8, 6, 6
  045e888  fmuls 7, 7, 6
  045e88c  fmuls 10, 3, 8
  045e890  fmuls 9, 9, 8
  045e894  fmuls 3, 8, 8
  045e898  stfs 7, 316(1)
  045e89c  fmuls 6, 10, 6
  045e8a0  stfs 9, 320(1)
  045e8a4  stfs 6, 324(1)
  045e8a8  lfs 6, 296(3)
  045e8ac  fmuls 6, 6, 3
  045e8b0  stfs 6, 312(3)
  045e8b4  lfs 6, 4(4)
  045e8b8  addic 3, 3, 8
  045e8bc  addic 4, 4, 8
  045e8c0  fmuls 6, 6, 3
  045e8c4  stfs 6, 4(5)
  045e8c8  addic 5, 5, 8
  045e8cc  bdnz 0x45e8a8
  045e8d0  li 5, 4
  045e8d4  ori 3, 1, 0
  045e8d8  mtctr 5
  045e8dc  lis 4, 115
  045e8e0  addic 5, 3, 312
  045e8e4  addic 4, 4, 22752
  045e8e8  ori 7, 5, 0
  045e8ec  lfs 3, 312(3)
  045e8f0  lfs 6, 0(4)
  045e8f4  fmuls 3, 3, 6
  045e8f8  lfs 6, 4(4)
  045e8fc  addic 4, 4, 8
  045e900  stfs 3, 312(3)
  045e904  lfs 3, 4(5)
  045e908  addic 3, 3, 8
  045e90c  fmuls 3, 3, 6
  045e910  stfs 3, 4(5)
  045e914  addic 5, 5, 8
  045e918  bdnz 0x45e8ec
  045e91c  fmr 3, 29
  045e920  ori 3, 1, 0
  045e924  mtctr 6
  045e928  lfs 6, 312(3)
  045e92c  fadds 3, 3, 6
  045e930  addic 3, 3, 16
  045e934  lfs 6, 4(7)
  045e938  lfs 7, 8(7)
  045e93c  lfs 8, 12(7)
  045e940  addic 7, 7, 16
  045e944  fadds 3, 3, 6
  045e948  fadds 3, 3, 7
  045e94c  fadds 3, 3, 8
  045e950  bdnz 0x45e928
  045e954  fadds 3, 3, 30
  045e958  fmadds 1, 3, 1, 2
  045e95c  lfs 2, 32(25)
  045e960  lfs 3, 36(25)
  045e964  fsubs 2, 2, 4
  045e968  fsubs 3, 3, 5
  045e96c  fabs 6, 2
  045e970  fabs 5, 3
  045e974  stfs 2, 168(1)
  045e978  stfs 3, 172(1)
  045e97c  fsubs 2, 6, 5
  045e980  stfs 2, 176(1)
  045e984  lwz 3, 168(1)
  045e988  lfs 2, 168(1)
  045e98c  lwz 4, 172(1)
  045e990  lfs 3, 172(1)
  045e994  lwz 5, 176(1)
  045e998  rlwinm 4, 4, 3, 29, 29
  045e99c  lfs 4, 176(1)
  045e9a0  fabs 2, 2
  045e9a4  rlwimi 4, 5, 2, 30, 30
  045e9a8  fabs 3, 3
  045e9ac  fsub 7, 4, 29
  045e9b0  fsub 8, 4, 29
  045e9b4  rlwimi 4, 3, 4, 28, 28
  045e9b8  ori 3, 26, 0
  045e9bc  rlwimi 3, 4, 2, 26, 28
  045e9c0  slwi 4, 4, 2
  045e9c4  clrldi 3, 3, 32
  045e9c8  fsel 5, 7, 2, 5
  045e9cc  lfsx 4, 26, 4
  045e9d0  fsel 3, 8, 3, 6
  045e9d4  lfs 2, 4(3)
  045e9d8  fcmpu 0, 5, 29
  045e9dc  bt 1, 0x45e9e8
  045e9e0  fmr 4, 29
  045e9e4  b 0x45eb00
  045e9e8  fsubs 6, 3, 5
  045e9ec  fadds 3, 3, 5
  045e9f0  addic 3, 1, 16
  045e9f4  li 7, 2
  045e9f8  addic 5, 3, 280
  045e9fc  addic 4, 3, 264
  045ea00  mtctr 7
  045ea04  fdivs 3, 6, 3
  045ea08  fmuls 5, 3, 3
  045ea0c  stfs 3, 280(24)
  045ea10  stfs 3, 284(24)
  045ea14  stfs 3, 288(24)
  045ea18  stfs 3, 292(24)
  045ea1c  lfs 3, 292(1)
  045ea20  lfs 6, 284(1)
  045ea24  lfs 8, 288(1)
  045ea28  fmuls 7, 5, 5
  045ea2c  fmuls 6, 6, 5
  045ea30  fmuls 9, 3, 7
  045ea34  fmuls 8, 8, 7
  045ea38  fmuls 3, 7, 7
  045ea3c  stfs 6, 284(1)
  045ea40  fmuls 5, 9, 5
  045ea44  stfs 8, 288(1)
  045ea48  stfs 5, 292(1)
  045ea4c  lfs 5, 264(3)
  045ea50  fmuls 5, 5, 3
  045ea54  stfs 5, 280(3)
  045ea58  lfs 5, 4(4)
  045ea5c  addic 4, 4, 8
  045ea60  fmuls 5, 5, 3
  045ea64  addic 3, 3, 8
  045ea68  stfs 5, 4(5)
  045ea6c  addic 5, 5, 8
  045ea70  bdnz 0x45ea4c
  045ea74  li 5, 4
  045ea78  ori 3, 1, 0
  045ea7c  mtctr 5
  045ea80  lis 4, 115
  045ea84  addic 5, 3, 280
  045ea88  addic 4, 4, 22752
  045ea8c  ori 6, 5, 0
  045ea90  lfs 3, 280(3)
  045ea94  lfs 5, 0(4)
  045ea98  fmuls 3, 3, 5
  045ea9c  lfs 5, 4(4)
  045eaa0  addic 4, 4, 8
  045eaa4  stfs 3, 280(3)
  045eaa8  lfs 3, 4(5)
  045eaac  addic 3, 3, 8
  045eab0  fmuls 3, 3, 5
  045eab4  stfs 3, 4(5)
  045eab8  addic 5, 5, 8
  045eabc  bdnz 0x45ea90
  045eac0  ori 3, 1, 0
  045eac4  fmr 3, 29
  045eac8  mtctr 7
  045eacc  lfs 5, 280(3)
  045ead0  fadds 3, 3, 5
  045ead4  lfs 5, 4(6)
  045ead8  addic 3, 3, 16
  045eadc  lfs 6, 8(6)
  045eae0  lfs 7, 12(6)
  045eae4  addic 6, 6, 16
  045eae8  fadds 3, 3, 5
  045eaec  fadds 3, 3, 6
  045eaf0  fadds 3, 3, 7
  045eaf4  bdnz 0x45eacc
  045eaf8  fadds 3, 3, 30
  045eafc  fmadds 4, 3, 4, 2
  045eb00  fmr 2, 1
  045eb04  fmr 1, 4
  045eb08  bl 0x5025e0
  045eb0c  nop
  045eb10  fabs 2, 1
  045eb14  stfs 1, 28(25)
  045eb18  addic 29, 29, 1
  045eb1c  lwz 3, 0(27)
  045eb20  addic 25, 25, 16
  045eb24  addic 4, 3, -1
  045eb28  cmpw 29, 4
  045eb2c  fsub 1, 31, 2
  045eb30  fsel 31, 1, 31, 2
  045eb34  bt 0, 0x45e7b0
  045eb38  slwi 3, 3, 4
  045eb3c  addc 4, 27, 3
  045eb40  extsw 3, 3
  045eb44  clrldi 4, 4, 32
  045eb48  lfsx 4, 27, 3
  045eb4c  lfs 1, -16(4)
  045eb50  lfs 5, 4(4)
  045eb54  lfs 2, -12(4)
  045eb58  fsubs 1, 4, 1
  045eb5c  fsubs 2, 5, 2
  045eb60  fabs 3, 1
  045eb64  fabs 6, 2
  045eb68  stfs 1, 156(1)
  045eb6c  stfs 2, 160(1)
  045eb70  fsubs 1, 3, 6
  045eb74  stfs 1, 164(1)
  045eb78  lwz 3, 156(1)
  045eb7c  lfs 1, 156(1)
  045eb80  lwz 4, 160(1)
  045eb84  lfs 2, 160(1)
  045eb88  lwz 5, 164(1)
  045eb8c  rlwinm 4, 4, 3, 29, 29
  045eb90  fabs 7, 2
  045eb94  lfs 2, 164(1)
  045eb98  fabs 1, 1
  045eb9c  rlwimi 4, 5, 2, 30, 30
  045eba0  fsub 8, 2, 29
  045eba4  fsub 9, 2, 29
  045eba8  rlwimi 4, 3, 4, 28, 28
  045ebac  ori 3, 26, 0
  045ebb0  rlwimi 3, 4, 2, 26, 28
  045ebb4  slwi 4, 4, 2
  045ebb8  clrldi 3, 3, 32
  045ebbc  fsel 6, 8, 1, 6
  045ebc0  lfsx 1, 26, 4
  045ebc4  fsel 3, 9, 7, 3
  045ebc8  lfs 2, 4(3)
  045ebcc  fcmpu 0, 6, 29
  045ebd0  bt 1, 0x45ebdc
  045ebd4  fmr 1, 29
  045ebd8  b 0x45ecf4
  045ebdc  fsubs 7, 3, 6
  045ebe0  fadds 3, 3, 6
  045ebe4  addic 3, 1, 16
  045ebe8  li 7, 2
  045ebec  addic 5, 3, 248
  045ebf0  addic 4, 3, 232
  045ebf4  mtctr 7
  045ebf8  fdivs 3, 7, 3
  045ebfc  fmuls 6, 3, 3
  045ec00  stfs 3, 248(24)
  045ec04  stfs 3, 252(24)
  045ec08  stfs 3, 256(24)
  045ec0c  stfs 3, 260(24)
  045ec10  lfs 3, 260(1)
  045ec14  lfs 7, 252(1)
  045ec18  lfs 9, 256(1)
  045ec1c  fmuls 8, 6, 6
  045ec20  fmuls 7, 7, 6
  045ec24  fmuls 10, 3, 8
  045ec28  fmuls 9, 9, 8
  045ec2c  fmuls 3, 8, 8
  045ec30  stfs 7, 252(1)
  045ec34  fmuls 6, 10, 6
  045ec38  stfs 9, 256(1)
  045ec3c  stfs 6, 260(1)
  045ec40  lfs 6, 232(3)
  045ec44  fmuls 6, 6, 3
  045ec48  stfs 6, 248(3)
  045ec4c  lfs 6, 4(4)
  045ec50  addic 4, 4, 8
  045ec54  fmuls 6, 6, 3
  045ec58  addic 3, 3, 8
  045ec5c  stfs 6, 4(5)
  045ec60  addic 5, 5, 8
  045ec64  bdnz 0x45ec40
  045ec68  li 5, 4
  045ec6c  ori 3, 1, 0
  045ec70  mtctr 5
  045ec74  lis 4, 115
  045ec78  addic 5, 3, 248
  045ec7c  addic 4, 4, 22752
  045ec80  ori 6, 5, 0
  045ec84  lfs 3, 248(3)
  045ec88  lfs 6, 0(4)
  045ec8c  fmuls 3, 3, 6
  045ec90  lfs 6, 4(4)
  045ec94  addic 4, 4, 8
  045ec98  stfs 3, 248(3)
  045ec9c  lfs 3, 4(5)
  045eca0  addic 3, 3, 8
  045eca4  fmuls 3, 3, 6
  045eca8  stfs 3, 4(5)
  045ecac  addic 5, 5, 8
  045ecb0  bdnz 0x45ec84
  045ecb4  ori 3, 1, 0
  045ecb8  fmr 3, 29
  045ecbc  mtctr 7
  045ecc0  lfs 6, 248(3)
  045ecc4  fadds 3, 3, 6
  045ecc8  lfs 6, 4(6)
  045eccc  addic 3, 3, 16
  045ecd0  lfs 7, 8(6)
  045ecd4  lfs 8, 12(6)
  045ecd8  addic 6, 6, 16
  045ecdc  fadds 3, 3, 6
  045ece0  fadds 3, 3, 7
  045ece4  fadds 3, 3, 8
  045ece8  bdnz 0x45ecc0
  045ecec  fadds 3, 3, 30
  045ecf0  fmadds 1, 3, 1, 2
  045ecf4  lfs 2, 16(27)
  045ecf8  lfs 3, 20(27)
  045ecfc  fsubs 2, 2, 4
  045ed00  fsubs 3, 3, 5
  045ed04  fabs 6, 2
  045ed08  fabs 5, 3
  045ed0c  stfs 2, 144(1)
  045ed10  stfs 3, 148(1)
  045ed14  fsubs 2, 6, 5
  045ed18  stfs 2, 152(1)
  045ed1c  lwz 3, 144(1)
  045ed20  lfs 2, 144(1)
  045ed24  lwz 4, 148(1)
  045ed28  lfs 3, 148(1)
  045ed2c  fabs 2, 2
  045ed30  lwz 5, 152(1)
  045ed34  rlwinm 4, 4, 3, 29, 29
  045ed38  lfs 4, 152(1)
  045ed3c  fabs 3, 3
  045ed40  rlwimi 4, 5, 2, 30, 30
  045ed44  fsub 7, 4, 29
  045ed48  fsub 8, 4, 29
  045ed4c  rlwimi 4, 3, 4, 28, 28
  045ed50  ori 3, 26, 0
  045ed54  rlwimi 3, 4, 2, 26, 28
  045ed58  slwi 4, 4, 2
  045ed5c  clrldi 3, 3, 32
  045ed60  fsel 5, 7, 2, 5
  045ed64  lfsx 4, 26, 4
  045ed68  fsel 3, 8, 3, 6
  045ed6c  lfs 2, 4(3)
  045ed70  fcmpu 0, 5, 29
  045ed74  bt 1, 0x45ed7c
  045ed78  b 0x45ee90
  045ed7c  fsubs 6, 3, 5
  045ed80  fadds 3, 3, 5
  045ed84  li 5, 2
  045ed88  mtctr 5
  045ed8c  fdivs 3, 6, 3
  045ed90  fmuls 5, 3, 3
  045ed94  stfs 3, 216(24)
  045ed98  stfs 3, 220(24)
  045ed9c  stfs 3, 224(24)
  045eda0  stfs 3, 228(24)
  045eda4  lfs 3, 228(1)
  045eda8  lfs 6, 220(1)
  045edac  addic 24, 1, 16
  045edb0  lfs 8, 224(1)
  045edb4  fmuls 7, 5, 5
  045edb8  fmuls 6, 6, 5
  045edbc  addic 3, 24, 200
  045edc0  addic 4, 24, 216
  045edc4  fmuls 9, 3, 7
  045edc8  fmuls 8, 8, 7
  045edcc  fmuls 3, 7, 7
  045edd0  stfs 6, 220(1)
  045edd4  fmuls 5, 9, 5
  045edd8  stfs 8, 224(1)
  045eddc  stfs 5, 228(1)
  045ede0  lfs 5, 200(24)
  045ede4  fmuls 5, 5, 3
  045ede8  stfs 5, 216(24)
  045edec  lfs 5, 4(3)
  045edf0  addic 3, 3, 8
  045edf4  fmuls 5, 5, 3
  045edf8  addic 24, 24, 8
  045edfc  stfs 5, 4(4)
  045ee00  addic 4, 4, 8
  045ee04  bdnz 0x45ede0
  045ee08  li 6, 4
  045ee0c  ori 3, 1, 0
  045ee10  mtctr 6
  045ee14  lis 4, 115
  045ee18  addic 6, 3, 216
  045ee1c  addic 4, 4, 22752
  045ee20  ori 7, 6, 0
  045ee24  lfs 3, 216(3)
  045ee28  lfs 5, 0(4)
  045ee2c  fmuls 3, 3, 5
  045ee30  lfs 5, 4(4)
  045ee34  addic 4, 4, 8
  045ee38  stfs 3, 216(3)
  045ee3c  lfs 3, 4(6)
  045ee40  addic 3, 3, 8
  045ee44  fmuls 3, 3, 5
  045ee48  stfs 3, 4(6)
  045ee4c  addic 6, 6, 8
  045ee50  bdnz 0x45ee24
  045ee54  ori 3, 1, 0
  045ee58  mtctr 5
  045ee5c  lfs 3, 216(3)
  045ee60  lfs 5, 4(7)
  045ee64  fadds 3, 29, 3
  045ee68  lfs 6, 8(7)
  045ee6c  addic 3, 3, 16
  045ee70  lfs 29, 12(7)
  045ee74  addic 7, 7, 16
  045ee78  fadds 3, 3, 5
  045ee7c  fadds 3, 3, 6
  045ee80  fadds 29, 3, 29
  045ee84  bdnz 0x45ee5c
  045ee88  fadds 29, 29, 30
  045ee8c  fmadds 29, 29, 4, 2
  045ee90  fmr 2, 1
  045ee94  fmr 1, 29
  045ee98  bl 0x5025e0
  045ee9c  nop
  045eea0  lwz 3, 0(27)
  045eea4  lis 4, 70
  045eea8  slwi 3, 3, 4
  045eeac  addi 4, 4, -7540
  045eeb0  addc 3, 27, 3
  045eeb4  clrldi 3, 3, 32
  045eeb8  stfs 1, 12(3)
  045eebc  lfs 1, 8(4)
  045eec0  lwz 3, 0(27)
  045eec4  fdivs 31, 1, 31
  045eec8  cmpwi 3, 0
  045eecc  bf 1, 0x45eef4
  045eed0  ori 3, 27, 0
  045eed4  lfs 1, 28(3)
  045eed8  addic 30, 30, 1
  045eedc  fmuls 1, 1, 31
  045eee0  stfs 1, 28(3)
  045eee4  lwz 4, 0(27)
  045eee8  addic 3, 3, 16
  045eeec  cmpw 30, 4
  045eef0  bt 0, 0x45eed4
  045eef4  lfs 1, 20(27)
  045eef8  lfs 2, 36(27)
  045eefc  lfs 3, 16(27)
  045ef00  fsubs 1, 1, 2
  045ef04  lfs 2, 32(27)
  045ef08  fsubs 2, 3, 2
  045ef0c  lfs 3, 24(27)
  045ef10  lfs 4, 40(27)
  045ef14  fsubs 3, 3, 4
  045ef18  fmuls 1, 1, 1
  045ef1c  li 3, 1
  045ef20  li 4, 4
  045ef24  vspltisw 2, -1
  045ef28  li 6, 8
  045ef2c  addi 5, 4, 16
  045ef30  vslw 2, 2, 2
  045ef34  fmadds 1, 2, 2, 1
  045ef38  fmadds 1, 3, 3, 1
  045ef3c  fsqrts 1, 1
  045ef40  stfs 1, 12(28)
  045ef44  stb 3, 32(31)
  045ef48  <unknown>
  045ef4c  <unknown>
  045ef50  vcfsx 3, 3, 0
  045ef54  <unknown>
  045ef58  vor 4, 4, 5
  045ef5c  vmaddfp 2, 3, 4, 2
  045ef60  vspltw 2, 2, 0
  045ef64  stvewx 2, 6, 28
  045ef68  b 0x45f628
  045ef6c  lis 3, 70
  045ef70  lis 26, 114
  045ef74  lfs 1, 28(28)
  045ef78  addi 27, 3, -7540
  045ef7c  lfs 2, 12(27)
  045ef80  lfs 3, -3052(26)
  045ef84  fmuls 2, 3, 2
  045ef88  bl 0x502578
  045ef8c  nop
  045ef90  lfs 2, 16(27)
  045ef94  lfs 3, 20(27)
  045ef98  fsubs 2, 2, 1
  045ef9c  fsubs 3, 3, 1
  045efa0  lfs 5, 24(27)
  045efa4  lis 3, 135
  045efa8  lis 4, 135
  045efac  fsub 4, 1, 2
  045efb0  fsel 2, 4, 2, 1
  045efb4  lfs 4, 28(27)
  045efb8  fsub 6, 3, 2
  045efbc  fsel 2, 6, 3, 2
  045efc0  lfs 3, 32(27)
  045efc4  lfs 6, 36(27)
  045efc8  lfs 8, 40(27)
  045efcc  lwz 3, 15432(3)
  045efd0  lwz 4, 15436(4)
  045efd4  extsw 3, 3
  045efd8  extsw 4, 4
  045efdc  fmuls 7, 2, 2
  045efe0  fmuls 9, 7, 2
  045efe4  fmuls 10, 7, 9
  045efe8  fmadds 2, 9, 5, 2
  045efec  fmuls 9, 7, 10
  045eff0  fmadds 2, 10, 4, 2
  045eff4  lfs 4, 44(27)
  045eff8  stfs 1, 28(28)
  045effc  fmuls 5, 7, 9
  045f000  fmadds 2, 9, 3, 2
  045f004  fmadds 1, 5, 6, 2
  045f008  fadds 1, 1, 8
  045f00c  fmuls 1, 1, 4
  045f010  bl 0x5027bc
  045f014  nop
  045f018  stw 3, 144(31)
  045f01c  li 4, 12
  045f020  lwz 3, 120(31)
  045f024  li 6, 48
  045f028  addi 5, 4, 16
  045f02c  vspltisw 5, -1
  045f030  vspltisw 9, -1
  045f034  li 7, -3052
  045f038  vspltisw 6, -1
  045f03c  <unknown>
  045f040  <unknown>
  045f044  lis 4, 135
  045f048  vslw 5, 5, 5
  045f04c  vor 2, 2, 3
  045f050  <unknown>
  045f054  li 5, 15424
  045f058  vspltw 3, 3, 0
  045f05c  vrefp 4, 2
  045f060  lfs 1, 15424(4)
  045f064  li 6, 8
  045f068  vslw 6, 6, 6
  045f06c  lfs 2, -3052(26)
  045f070  addi 8, 6, 16
  045f074  <unknown>
  045f078  fmuls 1, 1, 2
  045f07c  <unknown>
  045f080  <unknown>
  045f084  lis 4, 165
  045f088  addic 4, 4, 7136
  045f08c  vnmsubfp 7, 4, 2, 3
  045f090  vmaddfp 4, 4, 7, 5
  045f094  vslw 5, 9, 9
  045f098  <unknown>
  045f09c  lfs 2, 12(3)
  045f0a0  vor 7, 11, 7
  045f0a4  fdivs 2, 1, 2
  045f0a8  vnmsubfp 9, 4, 2, 3
  045f0ac  vmaddfp 5, 8, 10, 5
  045f0b0  vspltisw 8, -1
  045f0b4  lwz 5, 0(28)
  045f0b8  lfs 1, 8(3)
  045f0bc  slwi 5, 5, 2
  045f0c0  vslw 8, 8, 8
  045f0c4  extsw 5, 5
  045f0c8  vmaddfp 4, 4, 9, 6
  045f0cc  lwzx 4, 4, 5
  045f0d0  vnmsubfp 2, 4, 2, 3
  045f0d4  vmaddfp 2, 4, 2, 8
  045f0d8  vmaddfp 2, 2, 5, 7
  045f0dc  fadds 2, 1, 2
  045f0e0  vspltw 4, 2, 0
  045f0e4  stvewx 4, 6, 3
  045f0e8  lwz 5, 0(4)
  045f0ec  <unknown>
  045f0f0  extsw 5, 5
  045f0f4  vcfsx 3, 3, 0
  045f0f8  std 5, 408(1)
  045f0fc  vspltw 5, 3, 0
  045f100  vcmpgtfp. 4, 4, 5
  045f104  lfd 1, 408(1)
  045f108  fcfid 1, 1
  045f10c  frsp 1, 1
  045f110  bt 26, 0x45f128
  045f114  vsubfp 2, 2, 3
  045f118  li 5, 8
  045f11c  fsubs 2, 2, 1
  045f120  vspltw 2, 2, 0
  045f124  stvewx 2, 5, 3
  045f128  fmr 1, 2
  045f12c  addic 6, 31, 16
  045f130  addic 7, 31, 64
  045f134  ori 3, 4, 0
  045f138  li 5, 1
  045f13c  li 8, 0
  045f140  bl 0x117390
  045f144  nop
  045f148  lfs 1, 76(31)
  045f14c  ori 3, 31, 0
  045f150  lwz 4, 808(28)
  045f154  stfs 1, 64(31)
  045f158  extsw 4, 4
  045f15c  bl 0x15cc7c
  045f160  nop
  045f164  cmpwi 3, 0
  045f168  bf 2, 0x45f184
  045f16c  li 3, 1
  045f170  li 4, 4
  045f174  ori 5, 31, 0
  045f178  bl 0x15d12c
  045f17c  nop
  045f180  stw 3, 808(28)
  045f184  lis 3, 161
  045f188  lwz 3, 1808(3)
  045f18c  clrlwi 4, 3, 30
  045f190  cmpwi 4, 0
  045f194  bf 2, 0x45f1fc
  045f198  li 4, 800
  045f19c  vspltisw 2, -16
  045f1a0  addi 5, 4, 16
  045f1a4  <unknown>
  045f1a8  lis 4, 135
  045f1ac  <unknown>
  045f1b0  li 5, 15440
  045f1b4  vor 3, 3, 4
  045f1b8  vsraw 4, 3, 2
  045f1bc  <unknown>
  045f1c0  vsrw 2, 3, 2
  045f1c4  vspltw 5, 5, 0
  045f1c8  vcfsx 4, 4, 0
  045f1cc  lhz 4, 802(28)
  045f1d0  addic 4, 4, 1
  045f1d4  clrlwi 4, 4, 28
  045f1d8  sth 4, 802(28)
  045f1dc  vspltw 3, 4, 0
  045f1e0  vcmpgefp. 3, 3, 5
  045f1e4  bf 26, 0x45f1fc
  045f1e8  vspltisw 3, 1
  045f1ec  li 4, 800
  045f1f0  vadduwm 2, 2, 3
  045f1f4  vsplth 2, 2, 1
  045f1f8  stvehx 2, 4, 28
  045f1fc  lis 4, 70
  045f200  addi 4, 4, -7540
  045f204  lis 6, 16256
  045f208  lfs 1, 56(4)
  045f20c  lfs 2, 52(4)
  045f210  lfs 3, 208(31)
  045f214  lfs 4, 60(4)
  045f218  fmuls 3, 3, 1
  045f21c  lfs 5, 192(31)
  045f220  lfs 6, 212(31)
  045f224  lfs 7, 224(31)
  045f228  fmuls 6, 6, 1
  045f22c  lfs 8, 196(31)
  045f230  lfs 9, 216(31)
  045f234  lfs 10, 228(31)
  045f238  lfs 11, 200(31)
  045f23c  fmuls 9, 9, 1
  045f240  lhz 5, 802(28)
  045f244  extsh 5, 5
  045f248  fmadds 3, 5, 2, 3
  045f24c  sldi 5, 5, 4
  045f250  fmadds 5, 8, 2, 6
  045f254  addc 5, 28, 5
  045f258  lfs 6, 16(31)
  045f25c  lfs 8, 220(31)
  045f260  clrldi 5, 5, 32
  045f264  fmadds 9, 11, 2, 9
  045f268  lfs 11, 232(31)
  045f26c  fmuls 1, 8, 1
  045f270  fmadds 3, 7, 4, 3
  045f274  lfs 7, 204(31)
  045f278  lfs 8, 236(31)
  045f27c  fmadds 5, 10, 4, 5
  045f280  fmadds 9, 11, 4, 9
  045f284  fmadds 1, 7, 2, 1
  045f288  fadds 3, 3, 6
  045f28c  fmadds 1, 8, 4, 1
  045f290  stfs 3, 32(5)
  045f294  lfs 3, 20(31)
  045f298  fadds 3, 5, 3
  045f29c  stfs 3, 36(5)
  045f2a0  lfs 3, 24(31)
  045f2a4  stfs 1, 44(5)
  045f2a8  fadds 3, 9, 3
  045f2ac  stfs 3, 40(5)
  045f2b0  lhz 5, 802(28)
  045f2b4  extsh 7, 5
  045f2b8  sldi 7, 7, 4
  045f2bc  addc 7, 28, 7
  045f2c0  clrldi 7, 7, 32
  045f2c4  extsh 5, 5
  045f2c8  sldi 5, 5, 4
  045f2cc  stw 6, 44(7)
  045f2d0  lfs 1, 64(4)
  045f2d4  addc 5, 28, 5
  045f2d8  lfs 3, 68(4)
  045f2dc  lfs 5, 192(31)
  045f2e0  lfs 6, 224(31)
  045f2e4  clrldi 5, 5, 32
  045f2e8  fmuls 5, 5, 1
  045f2ec  lfs 7, 196(31)
  045f2f0  lfs 8, 228(31)
  045f2f4  fmuls 7, 7, 1
  045f2f8  lfs 9, 16(31)
  045f2fc  lfs 10, 200(31)
  045f300  lfs 11, 232(31)
  045f304  fmuls 10, 10, 1
  045f308  fmadds 5, 6, 3, 5
  045f30c  fmadds 6, 8, 3, 7
  045f310  lfs 7, 204(31)
  045f314  lfs 8, 236(31)
  045f318  fmuls 1, 7, 1
  045f31c  fmadds 7, 11, 3, 10
  045f320  fadds 5, 5, 9
  045f324  fmadds 1, 8, 3, 1
  045f328  stfs 5, 288(5)
  045f32c  lfs 3, 20(31)
  045f330  fadds 3, 6, 3
  045f334  stfs 3, 292(5)
  045f338  lfs 3, 24(31)
  045f33c  stfs 1, 300(5)
  045f340  fadds 3, 7, 3
  045f344  stfs 3, 296(5)
  045f348  lhz 5, 802(28)
  045f34c  extsh 7, 5
  045f350  sldi 7, 7, 4
  045f354  addc 7, 28, 7
  045f358  clrldi 7, 7, 32
  045f35c  stw 6, 300(7)
  045f360  lfs 1, 72(4)
  045f364  lfs 3, 208(31)
  045f368  lfs 5, 192(31)
  045f36c  fmuls 3, 3, 1
  045f370  lfs 6, 212(31)
  045f374  extsh 4, 5
  045f378  lfs 7, 224(31)
  045f37c  fmuls 6, 6, 1
  045f380  lfs 8, 196(31)
  045f384  sldi 4, 4, 4
  045f388  lfs 9, 216(31)
  045f38c  lfs 10, 228(31)
  045f390  fmuls 9, 9, 1
  045f394  addc 4, 28, 4
  045f398  clrldi 4, 4, 32
  045f39c  fmadds 3, 5, 2, 3
  045f3a0  fmadds 5, 8, 2, 6
  045f3a4  lfs 6, 200(31)
  045f3a8  lfs 8, 16(31)
  045f3ac  fmadds 6, 6, 2, 9
  045f3b0  lfs 9, 220(31)
  045f3b4  fmadds 3, 7, 4, 3
  045f3b8  fmuls 1, 9, 1
  045f3bc  lfs 7, 232(31)
  045f3c0  fmadds 5, 10, 4, 5
  045f3c4  lfs 10, 204(31)
  045f3c8  lfs 9, 236(31)
  045f3cc  fmadds 6, 7, 4, 6
  045f3d0  fadds 3, 3, 8
  045f3d4  fmadds 1, 10, 2, 1
  045f3d8  fmadds 1, 9, 4, 1
  045f3dc  stfs 3, 544(4)
  045f3e0  lfs 2, 20(31)
  045f3e4  fadds 2, 5, 2
  045f3e8  stfs 2, 548(4)
  045f3ec  lfs 2, 24(31)
  045f3f0  stfs 1, 556(4)
  045f3f4  fadds 2, 6, 2
  045f3f8  stfs 2, 552(4)
  045f3fc  lhz 4, 802(28)
  045f400  extsh 4, 4
  045f404  sldi 4, 4, 4
  045f408  addc 4, 28, 4
  045f40c  lwz 28, 804(28)
  045f410  clrldi 4, 4, 32
  045f414  stw 6, 556(4)
  045f418  lwz 4, 0(28)
  045f41c  cmpw 3, 4
  045f420  bt 2, 0x45f440
  045f424  ori 5, 3, 0
  045f428  lis 3, 113
  045f42c  ori 4, 31, 0
  045f430  addic 3, 3, -5568
  045f434  stw 5, 0(28)
  045f438  bl 0x6d720
  045f43c  nop
  045f440  lwz 4, 16(31)
  045f444  lis 3, 16640
  045f448  srawi 5, 4, 31
  045f44c  srwi 6, 5, 1
  045f450  xor 4, 6, 4
  045f454  subc 4, 4, 5
  045f458  cmpw 4, 3
  045f45c  bt 0, 0x45f480
  045f460  lwz 4, 20(31)
  045f464  lis 3, 16640
  045f468  srawi 5, 4, 31
  045f46c  srwi 6, 5, 1
  045f470  xor 4, 6, 4
  045f474  subc 4, 4, 5
  045f478  cmpw 4, 3
  045f47c  bf 0, 0x45f484
  045f480  b 0x45f48c
  045f484  lwz 3, 36(31)
  045f488  lwz 30, 16(3)
  045f48c  cmpwi 29, 0
  045f490  stw 30, 148(31)
  045f494  bt 2, 0x45f628
  045f498  lwz 3, 44(29)
  045f49c  cmpwi 3, 0
  045f4a0  bf 1, 0x45f628
  045f4a4  li 3, 2
  045f4a8  stb 3, 32(31)
  045f4ac  b 0x45f628
  045f4b0  li 3, 0
  045f4b4  li 4, 0
  045f4b8  ori 5, 31, 0
  045f4bc  bl 0x15d12c
  045f4c0  nop
  045f4c4  lis 3, 135
  045f4c8  lis 4, 114
  045f4cc  lfs 1, 200(31)
  045f4d0  lis 30, 114
  045f4d4  lis 27, 114
  045f4d8  lfs 2, 15448(3)
  045f4dc  lfs 3, -3064(4)
  045f4e0  lis 3, 135
  045f4e4  lfs 4, 192(31)
  045f4e8  fmuls 2, 2, 3
  045f4ec  lfs 5, 196(31)
  045f4f0  lfs 6, 204(31)
  045f4f4  lis 4, 70
  045f4f8  addi 7, 4, -7540
  045f4fc  lfs 7, 15452(3)
  045f500  stfs 6, 140(1)
  045f504  lis 4, 161
  045f508  addic 29, 31, 16
  045f50c  addic 26, 4, 23856
  045f510  addic 28, 31, 64
  045f514  fmuls 1, 1, 2
  045f518  fmuls 4, 4, 2
  045f51c  fmuls 2, 5, 2
  045f520  addic 25, 1, 128
  045f524  ori 3, 31, 0
  045f528  li 4, 1838
  045f52c  ori 5, 29, 0
  045f530  ori 6, 28, 0
  045f534  li 8, 0
  045f538  fmadds 3, 7, 3, 1
  045f53c  ori 10, 25, 0
  045f540  stfs 1, 136(1)
  045f544  stfs 4, 128(1)
  045f548  stfs 2, 132(1)
  045f54c  lfs 1, -3056(30)
  045f550  stfs 3, 136(1)
  045f554  lfs 31, 76(7)
  045f558  lfs 2, -3048(27)
  045f55c  fmuls 1, 1, 31
  045f560  std 26, 112(1)
  045f564  std 26, 120(1)
  045f568  fctiwz 1, 1
  045f56c  stfd 1, 408(1)
  045f570  lfs 30, 80(7)
  045f574  lwz 7, 412(1)
  045f578  fmuls 1, 2, 30
  045f57c  extsw 7, 7
  045f580  bl 0x11a560
  045f584  nop
  045f588  lfs 1, -3056(30)
  045f58c  ori 3, 31, 0
  045f590  li 4, 1838
  045f594  fmuls 2, 1, 31
  045f598  lfs 1, -3048(27)
  045f59c  ori 5, 29, 0
  045f5a0  std 26, 112(1)
  045f5a4  ori 6, 28, 0
  045f5a8  std 26, 120(1)
  045f5ac  fmuls 1, 1, 30
  045f5b0  li 8, 0
  045f5b4  ori 10, 25, 0
  045f5b8  fctiwz 2, 2
  045f5bc  stfd 2, 408(1)
  045f5c0  lwz 7, 412(1)
  045f5c4  extsw 7, 7
  045f5c8  bl 0x11a560
  045f5cc  nop
  045f5d0  lfs 1, -3056(30)
  045f5d4  ori 3, 31, 0
  045f5d8  li 4, 1838
  045f5dc  fmuls 2, 1, 31
  045f5e0  lfs 1, -3048(27)
  045f5e4  ori 5, 29, 0
  045f5e8  std 26, 112(1)
  045f5ec  ori 6, 28, 0
  045f5f0  std 26, 120(1)
  045f5f4  fmuls 1, 1, 30
  045f5f8  li 8, 0
  045f5fc  ori 10, 25, 0
  045f600  fctiwz 2, 2
  045f604  stfd 2, 408(1)
  045f608  lwz 7, 412(1)
  045f60c  extsw 7, 7
  045f610  bl 0x11a560
  045f614  nop
  045f618  ori 3, 31, 0
  045f61c  bl 0xefb38
  045f620  nop
  045f624  b 0x45f640
  045f628  lis 3, 135
  045f62c  lwz 3, 15444(3)
  045f630  cmpwi 3, 0
  045f634  bt 2, 0x45f640
  045f638  ori 3, 31, 0
  045f63c  bl 0x45dfb0
  045f640  ld 0, 528(1)
  045f644  mtlr 0
  045f648  lfd 29, 488(1)
  045f64c  lfd 30, 496(1)
  045f650  lfd 31, 504(1)
  045f654  ld 24, 424(1)
  045f658  ld 25, 432(1)
  045f65c  ld 26, 440(1)
  045f660  ld 27, 448(1)
  045f664  ld 28, 456(1)
  045f668  ld 29, 464(1)
  045f66c  ld 30, 472(1)
  045f670  ld 31, 480(1)
  045f674  addi 1, 1, 512
  045f678  blr
