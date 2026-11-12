# game/update/moby1379.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1379_0025e1a8:   # 0x25e1a8, 0x5e0 bytes
  025e1a8  stdu 1, -672(1)
  025e1ac  mflr 0
  025e1b0  std 0, 688(1)
  025e1b4  stfd 21, 584(1)
  025e1b8  stfd 22, 592(1)
  025e1bc  stfd 23, 600(1)
  025e1c0  stfd 24, 608(1)
  025e1c4  stfd 25, 616(1)
  025e1c8  stfd 26, 624(1)
  025e1cc  stfd 27, 632(1)
  025e1d0  stfd 28, 640(1)
  025e1d4  stfd 29, 648(1)
  025e1d8  stfd 30, 656(1)
  025e1dc  stfd 31, 664(1)
  025e1e0  std 30, 568(1)
  025e1e4  ori 30, 3, 0
  025e1e8  addic 3, 1, 112
  025e1ec  std 31, 576(1)
  025e1f0  addic 4, 30, 192
  025e1f4  std 29, 560(1)
  025e1f8  std 28, 552(1)
  025e1fc  std 27, 544(1)
  025e200  std 26, 536(1)
  025e204  std 25, 528(1)
  025e208  std 24, 520(1)
  025e20c  std 23, 512(1)
  025e210  std 22, 504(1)
  025e214  std 21, 496(1)
  025e218  std 20, 488(1)
  025e21c  std 19, 480(1)
  025e220  std 18, 472(1)
  025e224  std 17, 464(1)
  025e228  lwz 31, 120(30)
  025e22c  bl 0x500f6c
  025e230  nop
  025e234  lfs 1, 16(30)
  025e238  lfs 2, 20(30)
  025e23c  lis 4, 16256
  025e240  li 3, 44
  025e244  stfs 1, 160(1)
  025e248  lfs 1, 24(30)
  025e24c  stfs 2, 164(1)
  025e250  stfs 1, 168(1)
  025e254  stw 4, 172(1)
  025e258  bl 0x685c4
  025e25c  nop
  025e260  std 3, 296(1)
  025e264  lis 9, 0
  025e268  li 3, 0
  025e26c  li 4, 0
  025e270  li 5, 1
  025e274  li 6, 1
  025e278  li 7, 1
  025e27c  li 8, 0
  025e280  ori 9, 9, 65424
  025e284  bl 0x502fd4
  025e288  nop
  025e28c  std 3, 304(1)
  025e290  li 3, 0
  025e294  li 4, 0
  025e298  li 5, 0
  025e29c  li 6, 0
  025e2a0  li 7, 0
  025e2a4  li 8, 0
  025e2a8  bl 0x502f08
  025e2ac  nop
  025e2b0  std 3, 288(1)
  025e2b4  li 3, 44
  025e2b8  bl 0x685c4
  025e2bc  nop
  025e2c0  std 3, 440(1)
  025e2c4  lis 9, 0
  025e2c8  li 3, 0
  025e2cc  li 4, 0
  025e2d0  li 5, 1
  025e2d4  li 6, 1
  025e2d8  li 7, 1
  025e2dc  li 8, 0
  025e2e0  ori 9, 9, 65424
  025e2e4  bl 0x502fd4
  025e2e8  nop
  025e2ec  std 3, 448(1)
  025e2f0  li 3, 0
  025e2f4  li 4, 0
  025e2f8  li 5, 0
  025e2fc  li 6, 0
  025e300  li 7, 0
  025e304  li 8, 0
  025e308  bl 0x502f08
  025e30c  nop
  025e310  li 28, 0
  025e314  std 3, 432(1)
  025e318  lis 5, 122
  025e31c  lis 7, 122
  025e320  li 21, 4
  025e324  stw 28, 396(1)
  025e328  ori 3, 1, 0
  025e32c  stw 28, 388(1)
  025e330  addic 4, 1, 176
  025e334  addic 5, 5, -15808
  025e338  addic 6, 1, 320
  025e33c  addic 7, 7, -15872
  025e340  mtctr 21
  025e344  lfs 1, 0(5)
  025e348  stfs 1, 0(4)
  025e34c  lfs 1, 4(5)
  025e350  stfs 1, 4(4)
  025e354  lfs 1, 8(5)
  025e358  stfs 1, 8(4)
  025e35c  lfs 1, 12(5)
  025e360  stfs 1, 12(4)
  025e364  lfs 1, 0(7)
  025e368  stfs 1, 0(6)
  025e36c  lfs 1, 4(7)
  025e370  stfs 1, 4(6)
  025e374  lfs 1, 8(7)
  025e378  stfs 1, 8(6)
  025e37c  lfs 1, 12(7)
  025e380  stfs 1, 12(6)
  025e384  lfs 1, 176(3)
  025e388  lfs 2, 0(31)
  025e38c  addic 4, 4, 16
  025e390  fmuls 1, 1, 2
  025e394  lfs 2, 320(3)
  025e398  lfs 3, 184(3)
  025e39c  lfs 4, 328(3)
  025e3a0  addic 5, 5, 16
  025e3a4  addic 6, 6, 16
  025e3a8  addic 7, 7, 16
  025e3ac  stfs 1, 176(3)
  025e3b0  lfs 1, 0(31)
  025e3b4  fmuls 1, 2, 1
  025e3b8  stfs 1, 320(3)
  025e3bc  lfs 1, 4(31)
  025e3c0  fmuls 1, 3, 1
  025e3c4  stfs 1, 184(3)
  025e3c8  lfs 1, 4(31)
  025e3cc  fmuls 1, 4, 1
  025e3d0  stfs 1, 328(3)
  025e3d4  addic 3, 3, 16
  025e3d8  bdnz 0x25e344
  025e3dc  lis 3, 122
  025e3e0  lwz 3, -16112(3)
  025e3e4  cmpwi 3, 0
  025e3e8  bf 1, 0x25e710
  025e3ec  ori 27, 28, 0
  025e3f0  ori 30, 27, 0
  025e3f4  ori 18, 30, 0
  025e3f8  lis 3, 122
  025e3fc  lis 4, 122
  025e400  addic 31, 3, -15948
  025e404  lis 3, 122
  025e408  rlwinm 29, 30, 2, 29, 29
  025e40c  addic 26, 4, -15924
  025e410  lis 4, 122
  025e414  addic 25, 3, -15940
  025e418  addic 24, 4, -15932
  025e41c  lwzx 3, 31, 29
  025e420  lwzx 6, 26, 29
  025e424  li 7, 128
  025e428  lwzx 4, 25, 29
  025e42c  lwzx 5, 24, 29
  025e430  bl 0x502ea8
  025e434  nop
  025e438  lwzx 4, 31, 29
  025e43c  li 7, 128
  025e440  std 3, 312(1)
  025e444  ori 3, 4, 0
  025e448  lwzx 4, 25, 29
  025e44c  lwzx 5, 24, 29
  025e450  lwzx 8, 26, 29
  025e454  ori 6, 8, 0
  025e458  bl 0x502ea8
  025e45c  nop
  025e460  lis 4, 122
  025e464  std 3, 456(1)
  025e468  lis 20, 122
  025e46c  addic 3, 4, -16108
  025e470  lis 4, 38
  025e474  lis 19, 122
  025e478  addi 4, 4, -7820
  025e47c  lis 17, 122
  025e480  lwzx 3, 3, 27
  025e484  ori 22, 1, 0
  025e488  ori 31, 28, 0
  025e48c  stw 3, 392(1)
  025e490  stw 3, 384(1)
  025e494  addic 20, 20, -16076
  025e498  stw 3, 252(1)
  025e49c  addic 19, 19, -16012
  025e4a0  stw 3, 248(1)
  025e4a4  addic 17, 17, -15916
  025e4a8  stw 3, 244(1)
  025e4ac  stw 3, 240(1)
  025e4b0  lfs 31, 0(4)
  025e4b4  lfs 30, 4(4)
  025e4b8  lfs 29, 8(4)
  025e4bc  lfs 28, 12(4)
  025e4c0  lfs 27, 16(4)
  025e4c4  lfs 26, 20(4)
  025e4c8  lfs 25, 24(4)
  025e4cc  lfs 24, 28(4)
  025e4d0  lfs 23, 32(4)
  025e4d4  lfs 22, 36(4)
  025e4d8  lfs 21, 40(4)
  025e4dc  ori 29, 28, 0
  025e4e0  ori 26, 22, 0
  025e4e4  addc 25, 20, 18
  025e4e8  addc 24, 19, 18
  025e4ec  ori 23, 17, 0
  025e4f0  lfs 1, 0(25)
  025e4f4  fmuls 1, 1, 31
  025e4f8  bl 0x502758
  025e4fc  nop
  025e500  lis 4, 346
  025e504  lwz 4, -15568(4)
  025e508  divw 5, 4, 3
  025e50c  mullw 3, 5, 3
  025e510  subc 3, 4, 3
  025e514  extsw 3, 3
  025e518  bl 0x502730
  025e51c  nop
  025e520  lfs 2, 0(25)
  025e524  fdivs 1, 1, 2
  025e528  lfs 2, 0(23)
  025e52c  lwz 3, 0(24)
  025e530  cmpwi 3, 0
  025e534  fsubs 1, 1, 30
  025e538  bt 2, 0x25e55c
  025e53c  fmadds 1, 1, 29, 28
  025e540  fsubs 3, 27, 1
  025e544  fsubs 4, 26, 1
  025e548  fsub 5, 1, 3
  025e54c  fsel 1, 5, 3, 1
  025e550  fsub 3, 4, 1
  025e554  fsel 1, 3, 4, 1
  025e558  b 0x25e578
  025e55c  fmuls 1, 1, 29
  025e560  fsubs 3, 27, 1
  025e564  fsubs 4, 26, 1
  025e568  fsub 5, 1, 3
  025e56c  fsel 1, 5, 3, 1
  025e570  fsub 3, 4, 1
  025e574  fsel 1, 3, 4, 1
  025e578  fmuls 3, 1, 1
  025e57c  addic 29, 29, 1
  025e580  addic 25, 25, 4
  025e584  cmpwi 29, 2
  025e588  addic 24, 24, 4
  025e58c  addic 23, 23, 4
  025e590  fmuls 4, 3, 1
  025e594  fmuls 5, 3, 4
  025e598  fmadds 1, 4, 25, 1
  025e59c  fmuls 4, 3, 5
  025e5a0  fmadds 1, 5, 24, 1
  025e5a4  fmuls 3, 3, 4
  025e5a8  fmadds 1, 4, 23, 1
  025e5ac  fmadds 1, 3, 22, 1
  025e5b0  fmadds 1, 1, 21, 2
  025e5b4  stfs 1, 256(26)
  025e5b8  addic 26, 26, 4
  025e5bc  bt 0, 0x25e4f0
  025e5c0  addic 31, 31, 1
  025e5c4  addic 17, 17, 8
  025e5c8  cmpwi 31, 4
  025e5cc  addic 22, 22, 8
  025e5d0  bt 0, 0x25e4dc
  025e5d4  lis 3, 38
  025e5d8  li 4, 40
  025e5dc  vspltisw 3, 0
  025e5e0  addi 3, 3, -7820
  025e5e4  vspltisw 4, 1
  025e5e8  li 6, 2
  025e5ec  li 8, 400
  025e5f0  li 5, 264
  025e5f4  li 7, 280
  025e5f8  lvlx 2, 4, 3
  025e5fc  mtctr 6
  025e600  li 3, 408
  025e604  li 4, 424
  025e608  li 9, 416
  025e60c  vspltw 2, 2, 0
  025e610  addc 6, 1, 8
  025e614  addc 5, 1, 5
  025e618  addc 3, 1, 3
  025e61c  addc 7, 1, 7
  025e620  addc 4, 1, 4
  025e624  addc 8, 1, 9
  025e628  vcfsx 5, 3, 0
  025e62c  lvlx 6, 0, 5
  025e630  lvlx 7, 0, 7
  025e634  addic 5, 5, 4
  025e638  vspltw 8, 6, 0
  025e63c  addic 7, 7, 4
  025e640  vspltw 9, 7, 0
  025e644  vadduwm 3, 3, 4
  025e648  stvewx 8, 0, 6
  025e64c  addic 6, 6, 4
  025e650  vmaddfp 6, 5, 2, 6
  025e654  vmaddfp 5, 5, 2, 7
  025e658  vspltw 6, 6, 0
  025e65c  vspltw 5, 5, 0
  025e660  stvewx 6, 0, 3
  025e664  stvewx 9, 0, 8
  025e668  stvewx 5, 0, 4
  025e66c  addic 3, 3, 4
  025e670  addic 4, 4, 4
  025e674  addic 8, 8, 4
  025e678  bdnz 0x25e628
  025e67c  lis 4, 161
  025e680  addic 31, 1, 112
  025e684  addic 29, 4, 24396
  025e688  addic 3, 1, 176
  025e68c  ori 4, 31, 0
  025e690  li 5, 0
  025e694  li 7, 9
  025e698  lwz 6, 28(29)
  025e69c  bl 0x72280
  025e6a0  nop
  025e6a4  addic 3, 1, 320
  025e6a8  lwz 6, 28(29)
  025e6ac  ori 4, 31, 0
  025e6b0  li 5, 0
  025e6b4  li 7, 9
  025e6b8  bl 0x72280
  025e6bc  nop
  025e6c0  lis 3, 38
  025e6c4  mtctr 21
  025e6c8  addi 4, 3, -7820
  025e6cc  ori 3, 1, 0
  025e6d0  lfs 1, 44(4)
  025e6d4  lfs 2, 180(3)
  025e6d8  lfs 3, 324(3)
  025e6dc  fadds 2, 2, 1
  025e6e0  fadds 3, 3, 1
  025e6e4  stfs 2, 180(3)
  025e6e8  stfs 3, 324(3)
  025e6ec  addic 3, 3, 16
  025e6f0  bdnz 0x25e6d4
  025e6f4  lis 3, 122
  025e6f8  addic 30, 30, 1
  025e6fc  addic 18, 18, 8
  025e700  addic 27, 27, 4
  025e704  lwz 3, -16112(3)
  025e708  cmpw 30, 3
  025e70c  bt 0, 0x25e3f8
  025e710  ld 0, 688(1)
  025e714  mtlr 0
  025e718  lfd 21, 584(1)
  025e71c  lfd 22, 592(1)
  025e720  lfd 23, 600(1)
  025e724  lfd 24, 608(1)
  025e728  lfd 25, 616(1)
  025e72c  lfd 26, 624(1)
  025e730  lfd 27, 632(1)
  025e734  lfd 28, 640(1)
  025e738  lfd 29, 648(1)
  025e73c  lfd 30, 656(1)
  025e740  lfd 31, 664(1)
  025e744  ld 17, 464(1)
  025e748  ld 18, 472(1)
  025e74c  ld 19, 480(1)
  025e750  ld 20, 488(1)
  025e754  ld 21, 496(1)
  025e758  ld 22, 504(1)
  025e75c  ld 23, 512(1)
  025e760  ld 24, 520(1)
  025e764  ld 25, 528(1)
  025e768  ld 26, 536(1)
  025e76c  ld 27, 544(1)
  025e770  ld 28, 552(1)
  025e774  ld 29, 560(1)
  025e778  ld 30, 568(1)
  025e77c  ld 31, 576(1)
  025e780  addi 1, 1, 672
  025e784  blr

M1379_0025e788:   # 0x25e788, 0x14 bytes
  025e788  lis 3, 122
  025e78c  lis 4, 1
  025e790  addic 3, 3, -15740
  025e794  stw 4, 72(3)
  025e798  blr

M1379_0025e7a0:   # 0x25e7a0, 0x4 bytes
  025e7a0  blr

M1379_DrawShapeScaled:   # 0x25e7a4, 0x2a8 bytes
  025e7a4  stdu 1, -240(1)
  025e7a8  mflr 0
  025e7ac  std 0, 256(1)
  025e7b0  addi 0, 1, 128
  025e7b4  stvx 29, 0, 0
  025e7b8  addic 0, 0, 16
  025e7bc  stvx 30, 0, 0
  025e7c0  addic 0, 0, 16
  025e7c4  stvx 31, 0, 0
  025e7c8  std 30, 224(1)
  025e7cc  ori 30, 3, 0
  025e7d0  lis 3, 161
  025e7d4  std 31, 232(1)
  025e7d8  stfs 2, 112(1)
  025e7dc  ori 31, 4, 0
  025e7e0  stfs 2, 116(1)
  025e7e4  addic 4, 3, 24396
  025e7e8  stfs 2, 120(1)
  025e7ec  li 3, 22
  025e7f0  stfs 2, 124(1)
  025e7f4  std 28, 208(1)
  025e7f8  li 0, 112
  025e7fc  std 27, 200(1)
  025e800  std 24, 176(1)
  025e804  rldicl 28, 8, 40, 56
  025e808  rldicl 27, 8, 48, 56
  025e80c  std 26, 192(1)
  025e810  lwz 24, 28(4)
  025e814  rldicl 26, 8, 56, 56
  025e818  lvx 31, 1, 0
  025e81c  li 0, 112
  025e820  stfs 1, 112(1)
  025e824  std 25, 184(1)
  025e828  stfs 1, 116(1)
  025e82c  ori 25, 8, 0
  025e830  stfs 1, 120(1)
  025e834  stfs 1, 124(1)
  025e838  lvx 30, 1, 0
  025e83c  li 0, 112
  025e840  stfs 3, 112(1)
  025e844  stfs 3, 116(1)
  025e848  stfs 3, 120(1)
  025e84c  stfs 3, 124(1)
  025e850  std 29, 216(1)
  025e854  lvx 29, 1, 0
  025e858  bl 0x685c4
  025e85c  nop
  025e860  lis 29, 144
  025e864  sldi 4, 3, 5
  025e868  sldi 3, 3, 2
  025e86c  addic 29, 29, -23532
  025e870  addc 3, 4, 3
  025e874  li 4, 0
  025e878  addc 5, 24, 3
  025e87c  lwz 3, 40(29)
  025e880  clrldi 5, 5, 32
  025e884  bl 0x4d6d00
  025e888  nop
  025e88c  lwz 3, 40(29)
  025e890  bl 0x4d6948
  025e894  nop
  025e898  lwz 3, 40(29)
  025e89c  lis 4, 4
  025e8a0  rlwinm 6, 27, 16, 8, 15
  025e8a4  ori 4, 4, 6472
  025e8a8  rlwimi 6, 28, 24, 0, 7
  025e8ac  lwz 7, 8(3)
  025e8b0  clrlwi 5, 25, 24
  025e8b4  rlwimi 6, 26, 8, 16, 23
  025e8b8  or 5, 6, 5
  025e8bc  lis 6, 16396
  025e8c0  stw 4, 0(7)
  025e8c4  lwz 4, 8(3)
  025e8c8  lis 7, 4
  025e8cc  cmpwi 31, 0
  025e8d0  stw 5, 4(4)
  025e8d4  lwz 4, 8(3)
  025e8d8  ori 5, 6, 5908
  025e8dc  addic 4, 4, 8
  025e8e0  stw 4, 8(3)
  025e8e4  lwz 4, 40(29)
  025e8e8  li 3, 0
  025e8ec  lwz 6, 8(4)
  025e8f0  stw 5, 0(6)
  025e8f4  lwz 5, 8(4)
  025e8f8  ori 6, 7, 6152
  025e8fc  li 7, 6
  025e900  stw 3, 4(5)
  025e904  lwz 5, 8(4)
  025e908  stw 3, 8(5)
  025e90c  lwz 5, 8(4)
  025e910  stw 3, 12(5)
  025e914  lwz 5, 8(4)
  025e918  stw 6, 16(5)
  025e91c  lwz 5, 8(4)
  025e920  stw 7, 20(5)
  025e924  lwz 5, 8(4)
  025e928  addic 5, 5, 24
  025e92c  stw 5, 8(4)
  025e930  bf 1, 0x25e9dc
  025e934  ori 8, 30, 0
  025e938  vspltisw 2, -16
  025e93c  lis 7, 4
  025e940  lis 6, 8
  025e944  li 5, 4
  025e948  li 4, 8
  025e94c  ori 7, 7, 6404
  025e950  addic 30, 8, 2
  025e954  ori 6, 6, 6272
  025e958  lvlx 3, 0, 8
  025e95c  lwz 9, 40(29)
  025e960  lvlx 4, 0, 30
  025e964  vsraw 3, 3, 2
  025e968  vsraw 4, 4, 2
  025e96c  lwz 10, 8(9)
  025e970  vcfsx 3, 3, 0
  025e974  vcfsx 4, 4, 0
  025e978  addic 31, 31, -1
  025e97c  addic 30, 30, 4
  025e980  stw 7, 0(10)
  025e984  lwz 10, 8(9)
  025e988  cmpwi 31, 0
  025e98c  addic 8, 8, 4
  025e990  stw 3, 4(10)
  025e994  lwz 10, 8(9)
  025e998  vmaddfp 3, 3, 29, 30
  025e99c  addic 10, 10, 8
  025e9a0  vmaddfp 4, 4, 29, 31
  025e9a4  stw 10, 8(9)
  025e9a8  lwz 9, 40(29)
  025e9ac  lwz 10, 8(9)
  025e9b0  vspltw 3, 3, 0
  025e9b4  vspltw 4, 4, 0
  025e9b8  stw 6, 0(10)
  025e9bc  lwz 10, 8(9)
  025e9c0  stvewx 3, 5, 10
  025e9c4  lwz 10, 8(9)
  025e9c8  stvewx 4, 4, 10
  025e9cc  lwz 10, 8(9)
  025e9d0  addic 10, 10, 12
  025e9d4  stw 10, 8(9)
  025e9d8  bt 1, 0x25e958
  025e9dc  lwz 5, 40(29)
  025e9e0  lis 4, 4
  025e9e4  ori 4, 4, 6152
  025e9e8  lwz 6, 8(5)
  025e9ec  stw 4, 0(6)
  025e9f0  lwz 4, 8(5)
  025e9f4  stw 3, 4(4)
  025e9f8  lwz 3, 8(5)
  025e9fc  addic 3, 3, 8
  025ea00  stw 3, 8(5)
  025ea04  li 0, 128
  025ea08  lvx 29, 1, 0
  025ea0c  addic 0, 0, 16
  025ea10  lvx 30, 1, 0
  025ea14  addic 0, 0, 16
  025ea18  lvx 31, 1, 0
  025ea1c  ld 0, 256(1)
  025ea20  mtlr 0
  025ea24  ld 24, 176(1)
  025ea28  ld 25, 184(1)
  025ea2c  ld 26, 192(1)
  025ea30  ld 27, 200(1)
  025ea34  ld 28, 208(1)
  025ea38  ld 29, 216(1)
  025ea3c  ld 30, 224(1)
  025ea40  ld 31, 232(1)
  025ea44  addi 1, 1, 240
  025ea48  blr

M1379_DrawShapeRotated:   # 0x25ea4c, 0x314 bytes
  025ea4c  stdu 1, -336(1)
  025ea50  mflr 0
  025ea54  std 0, 352(1)
  025ea58  stfd 31, 328(1)
  025ea5c  addi 0, 1, 208
  025ea60  stvx 29, 0, 0
  025ea64  addic 0, 0, 16
  025ea68  stvx 30, 0, 0
  025ea6c  addic 0, 0, 16
  025ea70  stvx 31, 0, 0
  025ea74  std 31, 320(1)
  025ea78  ori 31, 4, 0
  025ea7c  lis 4, 161
  025ea80  std 30, 312(1)
  025ea84  stfs 2, 192(1)
  025ea88  ori 30, 3, 0
  025ea8c  stfs 2, 196(1)
  025ea90  li 3, 22
  025ea94  stfs 2, 200(1)
  025ea98  addic 4, 4, 24396
  025ea9c  stfs 2, 204(1)
  025eaa0  li 0, 192
  025eaa4  std 28, 296(1)
  025eaa8  fmr 31, 4
  025eaac  std 27, 288(1)
  025eab0  rldicl 28, 8, 40, 56
  025eab4  std 26, 280(1)
  025eab8  rldicl 27, 8, 48, 56
  025eabc  std 24, 264(1)
  025eac0  rldicl 26, 8, 56, 56
  025eac4  lwz 24, 28(4)
  025eac8  std 25, 272(1)
  025eacc  lvx 31, 1, 0
  025ead0  ori 25, 8, 0
  025ead4  li 0, 192
  025ead8  stfs 1, 192(1)
  025eadc  stfs 1, 196(1)
  025eae0  stfs 1, 200(1)
  025eae4  stfs 1, 204(1)
  025eae8  lvx 30, 1, 0
  025eaec  li 0, 192
  025eaf0  stfs 3, 192(1)
  025eaf4  stfs 3, 196(1)
  025eaf8  stfs 3, 200(1)
  025eafc  stfs 3, 204(1)
  025eb00  std 29, 304(1)
  025eb04  lvx 29, 1, 0
  025eb08  bl 0x685c4
  025eb0c  nop
  025eb10  lis 29, 144
  025eb14  sldi 4, 3, 5
  025eb18  sldi 3, 3, 2
  025eb1c  addic 29, 29, -23532
  025eb20  addc 3, 4, 3
  025eb24  li 4, 0
  025eb28  addc 5, 24, 3
  025eb2c  lwz 3, 40(29)
  025eb30  clrldi 5, 5, 32
  025eb34  bl 0x4d6d00
  025eb38  nop
  025eb3c  lwz 3, 40(29)
  025eb40  bl 0x4d6948
  025eb44  nop
  025eb48  lwz 3, 40(29)
  025eb4c  lis 4, 4
  025eb50  rlwinm 5, 27, 16, 8, 15
  025eb54  ori 4, 4, 6472
  025eb58  rlwimi 5, 28, 24, 0, 7
  025eb5c  clrlwi 7, 25, 24
  025eb60  lwz 6, 8(3)
  025eb64  rlwimi 5, 26, 8, 16, 23
  025eb68  li 28, 0
  025eb6c  or 5, 5, 7
  025eb70  stw 4, 0(6)
  025eb74  lwz 4, 8(3)
  025eb78  lis 6, 16396
  025eb7c  stw 5, 4(4)
  025eb80  lwz 4, 8(3)
  025eb84  ori 5, 6, 5908
  025eb88  addic 4, 4, 8
  025eb8c  stw 4, 8(3)
  025eb90  lwz 6, 40(29)
  025eb94  lis 3, 4
  025eb98  ori 7, 3, 6152
  025eb9c  lwz 4, 8(6)
  025eba0  stw 5, 0(4)
  025eba4  lwz 3, 8(6)
  025eba8  li 5, 6
  025ebac  stw 28, 4(3)
  025ebb0  lwz 3, 8(6)
  025ebb4  stw 28, 8(3)
  025ebb8  lwz 4, 8(6)
  025ebbc  addic 3, 1, 128
  025ebc0  stw 28, 12(4)
  025ebc4  lwz 8, 8(6)
  025ebc8  addic 4, 1, 112
  025ebcc  stw 7, 16(8)
  025ebd0  lwz 7, 8(6)
  025ebd4  stw 5, 20(7)
  025ebd8  lwz 5, 8(6)
  025ebdc  stw 28, 112(1)
  025ebe0  addic 5, 5, 24
  025ebe4  stw 28, 116(1)
  025ebe8  stw 28, 124(1)
  025ebec  stw 5, 8(6)
  025ebf0  stfs 31, 120(1)
  025ebf4  bl 0x500ca4
  025ebf8  nop
  025ebfc  cmpwi 31, 0
  025ec00  bf 1, 0x25ecec
  025ec04  li 3, 128
  025ec08  li 4, 144
  025ec0c  vspltisw 2, -16
  025ec10  li 8, 148
  025ec14  lis 7, 4
  025ec18  lis 6, 8
  025ec1c  lvlx 6, 3, 1
  025ec20  li 3, 132
  025ec24  lvlx 5, 4, 1
  025ec28  ori 5, 30, 0
  025ec2c  ori 7, 7, 6404
  025ec30  ori 6, 6, 6272
  025ec34  li 4, 4
  025ec38  lvlx 4, 3, 1
  025ec3c  addic 30, 5, 2
  025ec40  lvlx 3, 8, 1
  025ec44  li 3, 8
  025ec48  lvlx 8, 0, 30
  025ec4c  vspltisw 7, -1
  025ec50  vsraw 8, 8, 2
  025ec54  lvlx 9, 0, 5
  025ec58  vspltisw 10, -1
  025ec5c  vslw 7, 7, 7
  025ec60  vcfsx 8, 8, 0
  025ec64  vsraw 9, 9, 2
  025ec68  lwz 8, 40(29)
  025ec6c  vslw 10, 10, 10
  025ec70  vcfsx 9, 9, 0
  025ec74  addic 31, 31, -1
  025ec78  lwz 9, 8(8)
  025ec7c  cmpwi 31, 0
  025ec80  addic 30, 30, 4
  025ec84  addic 5, 5, 4
  025ec88  stw 7, 0(9)
  025ec8c  vmaddfp 7, 8, 5, 7
  025ec90  vmaddfp 8, 8, 3, 10
  025ec94  lwz 9, 8(8)
  025ec98  stw 28, 4(9)
  025ec9c  lwz 9, 8(8)
  025eca0  addic 9, 9, 8
  025eca4  vmaddfp 7, 9, 6, 7
  025eca8  vmaddfp 8, 9, 4, 8
  025ecac  stw 9, 8(8)
  025ecb0  lwz 8, 40(29)
  025ecb4  lwz 9, 8(8)
  025ecb8  vmaddfp 7, 7, 29, 30
  025ecbc  vmaddfp 8, 8, 29, 31
  025ecc0  stw 6, 0(9)
  025ecc4  lwz 9, 8(8)
  025ecc8  vspltw 7, 7, 0
  025eccc  vspltw 8, 8, 0
  025ecd0  stvewx 7, 4, 9
  025ecd4  lwz 9, 8(8)
  025ecd8  stvewx 8, 3, 9
  025ecdc  lwz 9, 8(8)
  025ece0  addic 9, 9, 12
  025ece4  stw 9, 8(8)
  025ece8  bt 1, 0x25ec48
  025ecec  lwz 4, 40(29)
  025ecf0  lis 3, 4
  025ecf4  ori 3, 3, 6152
  025ecf8  lwz 5, 8(4)
  025ecfc  stw 3, 0(5)
  025ed00  lwz 3, 8(4)
  025ed04  stw 28, 4(3)
  025ed08  lwz 3, 8(4)
  025ed0c  addic 3, 3, 8
  025ed10  stw 3, 8(4)
  025ed14  li 0, 208
  025ed18  lvx 29, 1, 0
  025ed1c  addic 0, 0, 16
  025ed20  lvx 30, 1, 0
  025ed24  addic 0, 0, 16
  025ed28  lvx 31, 1, 0
  025ed2c  ld 0, 352(1)
  025ed30  mtlr 0
  025ed34  lfd 31, 328(1)
  025ed38  ld 24, 264(1)
  025ed3c  ld 25, 272(1)
  025ed40  ld 26, 280(1)
  025ed44  ld 27, 288(1)
  025ed48  ld 28, 296(1)
  025ed4c  ld 29, 304(1)
  025ed50  ld 30, 312(1)
  025ed54  ld 31, 320(1)
  025ed58  addi 1, 1, 336
  025ed5c  blr

M1379_0025ed68:   # 0x25ed68, 0x84 bytes
  025ed68  stdu 1, -176(1)
  025ed6c  mflr 0
  025ed70  std 0, 192(1)
  025ed74  lis 4, 38
  025ed78  li 3, 176
  025ed7c  addi 4, 4, -4768
  025ed80  addc 3, 1, 3
  025ed84  li 5, 0
  025ed88  lwz 6, 124(3)
  025ed8c  lwz 7, 140(3)
  025ed90  lwz 11, 132(3)
  025ed94  clrlwi 6, 6, 24
  025ed98  lwz 12, 148(3)
  025ed9c  rlwinm 7, 7, 16, 8, 15
  025eda0  lfs 6, 0(4)
  025eda4  rlwimi 6, 11, 8, 16, 23
  025eda8  lwz 3, 116(3)
  025edac  rlwimi 7, 12, 24, 0, 7
  025edb0  fmr 7, 6
  025edb4  extsw 3, 3
  025edb8  or 4, 6, 7
  025edbc  extsw 4, 4
  025edc0  std 3, 112(1)
  025edc4  std 4, 120(1)
  025edc8  std 5, 128(1)
  025edcc  std 5, 136(1)
  025edd0  std 5, 160(1)
  025edd4  bl 0x6e740
  025edd8  nop
  025eddc  ld 0, 192(1)
  025ede0  mtlr 0
  025ede4  addi 1, 1, 176
  025ede8  blr

M1379_0025edf8:   # 0x25edf8, 0x228 bytes
  025edf8  stdu 1, -272(1)
  025edfc  mflr 0
  025ee00  std 0, 288(1)
  025ee04  stfd 26, 224(1)
  025ee08  stfd 27, 232(1)
  025ee0c  stfd 28, 240(1)
  025ee10  stfd 29, 248(1)
  025ee14  stfd 30, 256(1)
  025ee18  stfd 31, 264(1)
  025ee1c  fmr 31, 3
  025ee20  lis 3, 38
  025ee24  std 31, 216(1)
  025ee28  fmr 30, 2
  025ee2c  ori 31, 7, 0
  025ee30  std 30, 208(1)
  025ee34  fmr 29, 1
  025ee38  std 28, 192(1)
  025ee3c  addi 30, 3, -4628
  025ee40  fmr 28, 4
  025ee44  std 29, 200(1)
  025ee48  ori 28, 9, 0
  025ee4c  std 27, 184(1)
  025ee50  ori 29, 8, 0
  025ee54  ori 27, 10, 0
  025ee58  li 3, 46
  025ee5c  bl 0x685c4
  025ee60  nop
  025ee64  clrlwi 4, 31, 24
  025ee68  lfs 1, 0(30)
  025ee6c  rlwinm 5, 28, 16, 8, 15
  025ee70  lfs 27, 4(30)
  025ee74  rlwimi 4, 29, 8, 16, 23
  025ee78  fmuls 31, 31, 1
  025ee7c  rlwimi 5, 27, 24, 0, 7
  025ee80  fmr 1, 29
  025ee84  ori 31, 3, 0
  025ee88  fmr 2, 30
  025ee8c  or 3, 4, 5
  025ee90  fmr 5, 28
  025ee94  lis 4, 255
  025ee98  fmr 6, 27
  025ee9c  extsw 28, 3
  025eea0  fmr 7, 27
  025eea4  ori 27, 4, 65523
  025eea8  li 29, 0
  025eeac  li 8, 63
  025eeb0  li 9, 63
  025eeb4  std 27, 112(1)
  025eeb8  ori 10, 31, 0
  025eebc  std 28, 120(1)
  025eec0  fmr 3, 31
  025eec4  std 29, 128(1)
  025eec8  fmr 4, 31
  025eecc  std 29, 136(1)
  025eed0  std 29, 160(1)
  025eed4  bl 0x6e740
  025eed8  nop
  025eedc  fmr 1, 28
  025eee0  lfs 28, 8(30)
  025eee4  fmr 2, 28
  025eee8  bl 0x502578
  025eeec  nop
  025eef0  fmr 26, 1
  025eef4  std 27, 112(1)
  025eef8  fmr 1, 29
  025eefc  std 28, 120(1)
  025ef00  li 8, 63
  025ef04  std 29, 128(1)
  025ef08  li 9, 63
  025ef0c  std 29, 136(1)
  025ef10  fmr 2, 30
  025ef14  ori 10, 31, 0
  025ef18  fmr 3, 31
  025ef1c  fmr 4, 31
  025ef20  std 29, 160(1)
  025ef24  fmr 6, 27
  025ef28  fmr 7, 27
  025ef2c  fmr 5, 26
  025ef30  bl 0x6e740
  025ef34  nop
  025ef38  fmr 1, 26
  025ef3c  fmr 2, 28
  025ef40  bl 0x502578
  025ef44  nop
  025ef48  fmr 26, 1
  025ef4c  std 27, 112(1)
  025ef50  fmr 1, 29
  025ef54  std 28, 120(1)
  025ef58  li 8, 63
  025ef5c  std 29, 128(1)
  025ef60  li 9, 63
  025ef64  std 29, 136(1)
  025ef68  fmr 2, 30
  025ef6c  ori 10, 31, 0
  025ef70  fmr 3, 31
  025ef74  fmr 4, 31
  025ef78  std 29, 160(1)
  025ef7c  fmr 6, 27
  025ef80  fmr 7, 27
  025ef84  fmr 5, 26
  025ef88  bl 0x6e740
  025ef8c  nop
  025ef90  fmr 1, 26
  025ef94  fmr 2, 28
  025ef98  bl 0x502578
  025ef9c  nop
  025efa0  std 27, 112(1)
  025efa4  std 28, 120(1)
  025efa8  fmr 5, 1
  025efac  std 29, 128(1)
  025efb0  li 8, 63
  025efb4  std 29, 136(1)
  025efb8  fmr 1, 29
  025efbc  li 9, 63
  025efc0  fmr 2, 30
  025efc4  ori 10, 31, 0
  025efc8  fmr 3, 31
  025efcc  fmr 4, 31
  025efd0  std 29, 160(1)
  025efd4  fmr 6, 27
  025efd8  fmr 7, 27
  025efdc  bl 0x6e740
  025efe0  nop
  025efe4  ld 0, 288(1)
  025efe8  mtlr 0
  025efec  lfd 26, 224(1)
  025eff0  lfd 27, 232(1)
  025eff4  lfd 28, 240(1)
  025eff8  lfd 29, 248(1)
  025effc  lfd 30, 256(1)
  025f000  lfd 31, 264(1)
  025f004  ld 27, 184(1)
  025f008  ld 28, 192(1)
  025f00c  ld 29, 200(1)
  025f010  ld 30, 208(1)
  025f014  ld 31, 216(1)
  025f018  addi 1, 1, 272
  025f01c  blr

M1379_WorldToScreen:   # 0x25f028, 0xe0 bytes
  025f028  stdu 1, -192(1)
  025f02c  mflr 0
  025f030  std 0, 208(1)
  025f034  stfd 31, 184(1)
  025f038  std 31, 176(1)
  025f03c  std 29, 160(1)
  025f040  ori 31, 4, 0
  025f044  ori 29, 5, 0
  025f048  lis 5, 38
  025f04c  ori 4, 3, 0
  025f050  std 30, 168(1)
  025f054  addic 3, 1, 112
  025f058  std 28, 152(1)
  025f05c  ori 30, 6, 0
  025f060  std 27, 144(1)
  025f064  addi 28, 5, -4064
  025f068  bl 0x65490
  025f06c  nop
  025f070  lis 3, 150
  025f074  addic 27, 3, 27392
  025f078  lwz 3, 16(27)
  025f07c  extsw 3, 3
  025f080  std 3, 128(1)
  025f084  lfs 1, 112(1)
  025f088  lfs 31, 0(28)
  025f08c  lfd 2, 128(1)
  025f090  fcfid 2, 2
  025f094  frsp 2, 2
  025f098  fsubs 1, 1, 2
  025f09c  fmuls 1, 1, 31
  025f0a0  bl 0x502758
  025f0a4  nop
  025f0a8  stw 3, 0(31)
  025f0ac  lwz 3, 20(27)
  025f0b0  extsw 3, 3
  025f0b4  std 3, 128(1)
  025f0b8  lfs 1, 116(1)
  025f0bc  lfd 2, 128(1)
  025f0c0  fcfid 2, 2
  025f0c4  frsp 2, 2
  025f0c8  fsubs 1, 1, 2
  025f0cc  fmuls 1, 1, 31
  025f0d0  bl 0x502758
  025f0d4  nop
  025f0d8  addc 3, 3, 30
  025f0dc  stw 3, 0(29)
  025f0e0  ld 0, 208(1)
  025f0e4  mtlr 0
  025f0e8  lfd 31, 184(1)
  025f0ec  ld 27, 144(1)
  025f0f0  ld 28, 152(1)
  025f0f4  ld 29, 160(1)
  025f0f8  ld 30, 168(1)
  025f0fc  ld 31, 176(1)
  025f100  addi 1, 1, 192
  025f104  blr

M1379_0025f120:   # 0x25f120, 0x284 bytes
  025f120  stdu 1, -288(1)
  025f124  mflr 0
  025f128  std 0, 304(1)
  025f12c  stfd 29, 264(1)
  025f130  stfd 30, 272(1)
  025f134  stfd 31, 280(1)
  025f138  std 27, 224(1)
  025f13c  ori 27, 3, 0
  025f140  vspltisw 2, 0
  025f144  li 3, 112
  025f148  lis 9, 38
  025f14c  std 26, 216(1)
  025f150  fmr 31, 1
  025f154  ori 26, 8, 0
  025f158  addi 8, 9, -3832
  025f15c  std 25, 208(1)
  025f160  lis 9, 16329
  025f164  addic 25, 1, 112
  025f168  stvx 2, 3, 1
  025f16c  ori 9, 9, 4059
  025f170  std 28, 232(1)
  025f174  lwz 3, 4(27)
  025f178  ori 28, 4, 0
  025f17c  std 29, 240(1)
  025f180  lfs 30, 8(27)
  025f184  ori 29, 5, 0
  025f188  srawi 10, 3, 31
  025f18c  stfs 30, 120(1)
  025f190  srwi 11, 10, 1
  025f194  std 30, 248(1)
  025f198  lfs 1, 0(8)
  025f19c  ori 30, 6, 0
  025f1a0  std 31, 256(1)
  025f1a4  xor 3, 11, 3
  025f1a8  ori 31, 7, 0
  025f1ac  subc 3, 3, 10
  025f1b0  cmpw 3, 9
  025f1b4  bt 1, 0x25f1c8
  025f1b8  lis 4, -16330
  025f1bc  ori 4, 4, 61477
  025f1c0  cmpw 3, 4
  025f1c4  bf 0, 0x25f1d0
  025f1c8  fneg 30, 30
  025f1cc  stfs 30, 120(1)
  025f1d0  fmr 2, 30
  025f1d4  bl 0x5025e0
  025f1d8  nop
  025f1dc  stfs 1, 120(1)
  025f1e0  addic 3, 1, 128
  025f1e4  ori 4, 25, 0
  025f1e8  bl 0x500ca4
  025f1ec  nop
  025f1f0  lfs 1, 20(29)
  025f1f4  lis 3, 38
  025f1f8  lfs 2, 4(28)
  025f1fc  lfs 3, 16(29)
  025f200  fsubs 1, 1, 2
  025f204  lfs 2, 0(28)
  025f208  lfs 4, 148(1)
  025f20c  addi 28, 3, -3832
  025f210  fsubs 2, 3, 2
  025f214  lfs 3, 144(1)
  025f218  lfs 5, 132(1)
  025f21c  lfs 6, 28(29)
  025f220  lfs 7, 128(1)
  025f224  lfs 8, 180(1)
  025f228  lfs 9, 152(1)
  025f22c  fmuls 4, 4, 1
  025f230  fmuls 3, 3, 1
  025f234  lfs 10, 4(28)
  025f238  fmuls 1, 9, 1
  025f23c  lfs 9, 176(1)
  025f240  lfs 11, 136(1)
  025f244  fmadds 4, 5, 2, 4
  025f248  fmadds 3, 7, 2, 3
  025f24c  lfs 5, 184(1)
  025f250  fmadds 1, 11, 2, 1
  025f254  fmadds 2, 8, 6, 4
  025f258  fmadds 3, 9, 6, 3
  025f25c  fmadds 4, 5, 6, 1
  025f260  fmuls 29, 2, 10
  025f264  fmuls 1, 3, 10
  025f268  fmuls 2, 4, 10
  025f26c  fmuls 3, 29, 29
  025f270  fmadds 3, 1, 1, 3
  025f274  fmadds 30, 2, 2, 3
  025f278  fsqrts 30, 30
  025f27c  bl 0x502758
  025f280  nop
  025f284  fneg 1, 29
  025f288  ori 25, 3, 0
  025f28c  bl 0x502758
  025f290  nop
  025f294  lfs 1, 8(28)
  025f298  ori 28, 3, 0
  025f29c  fcmpu 0, 30, 1
  025f2a0  cror 6, 1, 2
  025f2a4  bt 6, 0x25f36c
  025f2a8  lis 3, 38
  025f2ac  addi 3, 3, -3832
  025f2b0  lfs 2, 12(3)
  025f2b4  fcmpu 0, 30, 2
  025f2b8  cror 6, 0, 2
  025f2bc  bt 6, 0x25f2fc
  025f2c0  fsubs 30, 1, 30
  025f2c4  rldicl 3, 26, 40, 56
  025f2c8  bl 0x502730
  025f2cc  nop
  025f2d0  fmuls 1, 1, 30
  025f2d4  lis 3, 38
  025f2d8  clrlwi 26, 26, 8
  025f2dc  addi 3, 3, -3832
  025f2e0  lfs 2, 16(3)
  025f2e4  fmuls 1, 1, 2
  025f2e8  bl 0x502758
  025f2ec  nop
  025f2f0  slwi 3, 3, 24
  025f2f4  extsw 3, 3
  025f2f8  or 26, 26, 3
  025f2fc  lfs 1, 72(29)
  025f300  lfs 2, 8(27)
  025f304  bl 0x5025e0
  025f308  nop
  025f30c  addic 3, 25, 432
  025f310  lis 4, 150
  025f314  fneg 4, 1
  025f318  extsw 3, 3
  025f31c  addic 4, 4, 27392
  025f320  lis 7, 255
  025f324  fmr 3, 31
  025f328  std 3, 192(1)
  025f32c  ori 7, 7, 65523
  025f330  lwz 3, 4(4)
  025f334  lfd 1, 192(1)
  025f338  addc 3, 28, 3
  025f33c  fcfid 1, 1
  025f340  addic 3, 3, -80
  025f344  extsw 5, 3
  025f348  ori 3, 30, 0
  025f34c  ori 4, 31, 0
  025f350  std 5, 192(1)
  025f354  ori 8, 26, 0
  025f358  frsp 1, 1
  025f35c  lfd 2, 192(1)
  025f360  fcfid 2, 2
  025f364  frsp 2, 2
  025f368  bl 0x25ea4c
  025f36c  ld 0, 304(1)
  025f370  mtlr 0
  025f374  lfd 29, 264(1)
  025f378  lfd 30, 272(1)
  025f37c  lfd 31, 280(1)
  025f380  ld 25, 208(1)
  025f384  ld 26, 216(1)
  025f388  ld 27, 224(1)
  025f38c  ld 28, 232(1)
  025f390  ld 29, 240(1)
  025f394  ld 30, 248(1)
  025f398  ld 31, 256(1)
  025f39c  addi 1, 1, 288
  025f3a0  blr

M1379_0025f3c8:   # 0x25f3c8, 0x4e0 bytes
  025f3c8  stdu 1, -384(1)
  025f3cc  mflr 0
  025f3d0  std 0, 400(1)
  025f3d4  stfd 22, 304(1)
  025f3d8  stfd 23, 312(1)
  025f3dc  stfd 24, 320(1)
  025f3e0  stfd 25, 328(1)
  025f3e4  stfd 26, 336(1)
  025f3e8  stfd 27, 344(1)
  025f3ec  stfd 28, 352(1)
  025f3f0  stfd 29, 360(1)
  025f3f4  stfd 30, 368(1)
  025f3f8  stfd 31, 376(1)
  025f3fc  std 25, 248(1)
  025f400  lis 5, 38
  025f404  lis 25, 122
  025f408  std 28, 272(1)
  025f40c  addi 5, 5, -3164
  025f410  std 27, 264(1)
  025f414  std 26, 256(1)
  025f418  lis 28, 122
  025f41c  lis 26, 122
  025f420  std 29, 280(1)
  025f424  lis 27, 122
  025f428  lis 29, 122
  025f42c  std 24, 240(1)
  025f430  lfs 23, 0(5)
  025f434  li 24, 1
  025f438  lfs 24, 4(5)
  025f43c  addic 25, 25, -14864
  025f440  lfs 25, 8(5)
  025f444  addic 26, 26, -14848
  025f448  lfs 26, 12(5)
  025f44c  addic 27, 27, -14832
  025f450  lfs 27, 16(5)
  025f454  addic 28, 28, -14816
  025f458  lfs 28, 20(5)
  025f45c  addic 29, 29, -14800
  025f460  std 30, 288(1)
  025f464  lfs 29, 24(5)
  025f468  ori 30, 3, 0
  025f46c  std 31, 296(1)
  025f470  lfs 30, 28(5)
  025f474  std 23, 232(1)
  025f478  std 22, 224(1)
  025f47c  std 21, 216(1)
  025f480  std 20, 208(1)
  025f484  std 19, 200(1)
  025f488  ori 31, 4, 0
  025f48c  lfs 31, 32(5)
  025f490  lis 3, 122
  025f494  lfs 22, 100(31)
  025f498  lfs 1, -15596(3)
  025f49c  fdivs 22, 22, 1
  025f4a0  li 3, 0
  025f4a4  stw 3, 112(1)
  025f4a8  stw 3, 116(1)
  025f4ac  stw 3, 120(1)
  025f4b0  stw 3, 124(1)
  025f4b4  fcmpu 0, 22, 23
  025f4b8  fcmpu 1, 22, 24
  025f4bc  cror 2, 0, 2
  025f4c0  bt 2, 0x25f4cc
  025f4c4  fmr 22, 23
  025f4c8  b 0x25f4d4
  025f4cc  bf 4, 0x25f4d4
  025f4d0  fmr 22, 24
  025f4d4  ori 4, 24, 0
  025f4d8  addic 5, 1, 128
  025f4dc  ori 3, 30, 0
  025f4e0  bl 0xf1114
  025f4e4  nop
  025f4e8  li 4, 0
  025f4ec  lfs 1, 128(1)
  025f4f0  addic 23, 1, 144
  025f4f4  lfs 2, 132(1)
  025f4f8  stfs 1, 144(1)
  025f4fc  stw 4, 140(1)
  025f500  ori 3, 23, 0
  025f504  lfs 3, 136(1)
  025f508  stfs 2, 148(1)
  025f50c  stfs 3, 152(1)
  025f510  stw 4, 156(1)
  025f514  stfs 1, 160(1)
  025f518  stfs 2, 164(1)
  025f51c  stfs 3, 168(1)
  025f520  stw 4, 172(1)
  025f524  stfs 1, 176(1)
  025f528  stfs 2, 180(1)
  025f52c  lfs 1, 196(31)
  025f530  stfs 3, 184(1)
  025f534  stw 4, 188(1)
  025f538  fmadds 1, 1, 25, 25
  025f53c  bl 0x110950
  025f540  nop
  025f544  lfs 1, 196(31)
  025f548  addic 22, 1, 160
  025f54c  fmadds 1, 1, 25, 25
  025f550  ori 3, 22, 0
  025f554  bl 0x110950
  025f558  nop
  025f55c  lfs 1, 196(31)
  025f560  addic 21, 1, 176
  025f564  fmadds 1, 1, 26, 25
  025f568  ori 3, 21, 0
  025f56c  bl 0x110950
  025f570  nop
  025f574  fmr 1, 27
  025f578  fmr 2, 28
  025f57c  bl 0xfcbe8
  025f580  nop
  025f584  lfs 2, 196(31)
  025f588  lis 20, 114
  025f58c  fmadds 1, 2, 29, 1
  025f590  addic 19, 1, 112
  025f594  ori 3, 30, 0
  025f598  lfs 2, -3052(20)
  025f59c  ori 4, 23, 0
  025f5a0  ori 5, 19, 0
  025f5a4  ori 6, 25, 0
  025f5a8  li 7, 1
  025f5ac  fmuls 1, 1, 2
  025f5b0  fmuls 1, 1, 22
  025f5b4  fneg 1, 1
  025f5b8  stfs 1, 112(1)
  025f5bc  bl 0x1349f0
  025f5c0  nop
  025f5c4  fmr 1, 27
  025f5c8  fmr 2, 28
  025f5cc  bl 0xfcbe8
  025f5d0  nop
  025f5d4  lfs 2, 196(31)
  025f5d8  ori 3, 30, 0
  025f5dc  fmadds 1, 2, 30, 1
  025f5e0  lfs 2, -3052(20)
  025f5e4  ori 4, 22, 0
  025f5e8  ori 5, 19, 0
  025f5ec  ori 6, 26, 0
  025f5f0  li 7, 1
  025f5f4  fmuls 1, 1, 2
  025f5f8  fmuls 1, 1, 22
  025f5fc  fneg 1, 1
  025f600  stfs 1, 112(1)
  025f604  bl 0x1349f0
  025f608  nop
  025f60c  fmr 1, 27
  025f610  fmr 2, 28
  025f614  bl 0xfcbe8
  025f618  nop
  025f61c  lfs 2, 196(31)
  025f620  ori 3, 30, 0
  025f624  fmadds 1, 2, 31, 1
  025f628  lfs 2, -3052(20)
  025f62c  ori 4, 21, 0
  025f630  ori 5, 19, 0
  025f634  ori 6, 27, 0
  025f638  li 7, 1
  025f63c  fmuls 1, 1, 2
  025f640  fmuls 1, 1, 22
  025f644  fneg 1, 1
  025f648  stfs 1, 112(1)
  025f64c  bl 0x1349f0
  025f650  nop
  025f654  lwz 3, 196(31)
  025f658  lis 4, 16128
  025f65c  lfs 1, 196(31)
  025f660  srawi 5, 3, 31
  025f664  srwi 6, 5, 1
  025f668  xor 3, 6, 3
  025f66c  subc 3, 3, 5
  025f670  cmpw 3, 4
  025f674  bf 1, 0x25f82c
  025f678  addic 23, 1, 144
  025f67c  fmadds 1, 1, 25, 26
  025f680  ori 3, 23, 0
  025f684  bl 0x110950
  025f688  nop
  025f68c  lfs 1, 196(31)
  025f690  addic 22, 1, 160
  025f694  fmadds 1, 1, 25, 26
  025f698  ori 3, 22, 0
  025f69c  bl 0x110950
  025f6a0  nop
  025f6a4  lfs 1, 196(31)
  025f6a8  addic 21, 1, 176
  025f6ac  fmadds 1, 1, 26, 26
  025f6b0  ori 3, 21, 0
  025f6b4  bl 0x110950
  025f6b8  nop
  025f6bc  fmr 1, 27
  025f6c0  fmr 2, 28
  025f6c4  bl 0xfcbe8
  025f6c8  nop
  025f6cc  lfs 2, 196(31)
  025f6d0  lis 20, 114
  025f6d4  fmadds 1, 2, 29, 1
  025f6d8  addic 19, 1, 112
  025f6dc  ori 3, 30, 0
  025f6e0  lfs 2, -3052(20)
  025f6e4  ori 4, 23, 0
  025f6e8  ori 5, 19, 0
  025f6ec  ori 6, 25, 0
  025f6f0  li 7, 1
  025f6f4  fmuls 1, 1, 2
  025f6f8  fmuls 1, 1, 22
  025f6fc  fneg 1, 1
  025f700  stfs 1, 112(1)
  025f704  bl 0x1349f0
  025f708  nop
  025f70c  fmr 1, 27
  025f710  fmr 2, 28
  025f714  bl 0xfcbe8
  025f718  nop
  025f71c  lfs 2, 196(31)
  025f720  ori 3, 30, 0
  025f724  fmadds 1, 2, 30, 1
  025f728  lfs 2, -3052(20)
  025f72c  ori 4, 22, 0
  025f730  ori 5, 19, 0
  025f734  ori 6, 26, 0
  025f738  li 7, 1
  025f73c  fmuls 1, 1, 2
  025f740  fmuls 1, 1, 22
  025f744  fneg 1, 1
  025f748  stfs 1, 112(1)
  025f74c  bl 0x1349f0
  025f750  nop
  025f754  fmr 1, 27
  025f758  fmr 2, 28
  025f75c  bl 0xfcbe8
  025f760  nop
  025f764  lfs 2, 196(31)
  025f768  ori 3, 30, 0
  025f76c  fmadds 1, 2, 31, 1
  025f770  lfs 2, -3052(20)
  025f774  ori 4, 21, 0
  025f778  ori 5, 19, 0
  025f77c  ori 6, 27, 0
  025f780  li 7, 1
  025f784  fmuls 1, 1, 2
  025f788  fmuls 1, 1, 22
  025f78c  fneg 1, 1
  025f790  stfs 1, 112(1)
  025f794  bl 0x1349f0
  025f798  nop
  025f79c  fmr 1, 27
  025f7a0  fmr 2, 28
  025f7a4  bl 0xfcbe8
  025f7a8  nop
  025f7ac  lfs 2, 196(31)
  025f7b0  ori 3, 30, 0
  025f7b4  fmadds 1, 2, 29, 1
  025f7b8  lfs 2, -3052(20)
  025f7bc  ori 4, 23, 0
  025f7c0  ori 5, 19, 0
  025f7c4  ori 6, 28, 0
  025f7c8  li 7, 1
  025f7cc  fmuls 1, 1, 2
  025f7d0  fmuls 1, 1, 22
  025f7d4  fneg 1, 1
  025f7d8  stfs 1, 112(1)
  025f7dc  bl 0x1349f0
  025f7e0  nop
  025f7e4  fmr 1, 27
  025f7e8  fmr 2, 28
  025f7ec  bl 0xfcbe8
  025f7f0  nop
  025f7f4  lfs 2, 196(31)
  025f7f8  addic 4, 1, 128
  025f7fc  fmadds 1, 2, 30, 1
  025f800  lfs 2, -3052(20)
  025f804  ori 3, 30, 0
  025f808  ori 5, 19, 0
  025f80c  ori 6, 29, 0
  025f810  li 7, 1
  025f814  fmuls 1, 1, 2
  025f818  fmuls 1, 1, 22
  025f81c  fneg 1, 1
  025f820  stfs 1, 112(1)
  025f824  bl 0x1349f0
  025f828  nop
  025f82c  addic 24, 24, 1
  025f830  extsw 24, 24
  025f834  cmpwi 24, 2
  025f838  bf 1, 0x25f490
  025f83c  ld 0, 400(1)
  025f840  mtlr 0
  025f844  lfd 22, 304(1)
  025f848  lfd 23, 312(1)
  025f84c  lfd 24, 320(1)
  025f850  lfd 25, 328(1)
  025f854  lfd 26, 336(1)
  025f858  lfd 27, 344(1)
  025f85c  lfd 28, 352(1)
  025f860  lfd 29, 360(1)
  025f864  lfd 30, 368(1)
  025f868  lfd 31, 376(1)
  025f86c  ld 19, 200(1)
  025f870  ld 20, 208(1)
  025f874  ld 21, 216(1)
  025f878  ld 22, 224(1)
  025f87c  ld 23, 232(1)
  025f880  ld 24, 240(1)
  025f884  ld 25, 248(1)
  025f888  ld 26, 256(1)
  025f88c  ld 27, 264(1)
  025f890  ld 28, 272(1)
  025f894  ld 29, 280(1)
  025f898  ld 30, 288(1)
  025f89c  ld 31, 296(1)
  025f8a0  addi 1, 1, 384
  025f8a4  blr

M1379_DrawRadarIcon:   # 0x25f8c0, 0x2a0 bytes
  025f8c0  stdu 1, -288(1)
  025f8c4  mflr 0
  025f8c8  std 0, 304(1)
  025f8cc  stfd 30, 272(1)
  025f8d0  stfd 31, 280(1)
  025f8d4  vspltisw 2, 0
  025f8d8  std 27, 232(1)
  025f8dc  li 10, 128
  025f8e0  lis 9, 38
  025f8e4  std 28, 240(1)
  025f8e8  ori 27, 5, 0
  025f8ec  std 26, 224(1)
  025f8f0  addi 28, 9, -1880
  025f8f4  ori 26, 4, 0
  025f8f8  std 29, 248(1)
  025f8fc  stvx 2, 10, 1
  025f900  lfs 2, 8(3)
  025f904  std 31, 264(1)
  025f908  ori 29, 7, 0
  025f90c  ori 31, 8, 0
  025f910  stfs 2, 136(1)
  025f914  std 30, 256(1)
  025f918  lfs 1, 0(28)
  025f91c  ori 30, 6, 0
  025f920  bl 0x5025e0
  025f924  nop
  025f928  stfs 1, 136(1)
  025f92c  addic 3, 1, 144
  025f930  addic 4, 1, 128
  025f934  bl 0x500ca4
  025f938  nop
  025f93c  lfs 1, 20(27)
  025f940  lfs 2, 4(26)
  025f944  lfs 3, 16(27)
  025f948  fsubs 1, 1, 2
  025f94c  lfs 2, 0(26)
  025f950  lfs 4, 164(1)
  025f954  fsubs 2, 3, 2
  025f958  lfs 3, 160(1)
  025f95c  lfs 5, 148(1)
  025f960  lfs 6, 28(27)
  025f964  lfs 7, 144(1)
  025f968  lfs 8, 196(1)
  025f96c  lfs 9, 168(1)
  025f970  fmuls 4, 4, 1
  025f974  lfs 10, 4(28)
  025f978  fmuls 3, 3, 1
  025f97c  fmuls 1, 9, 1
  025f980  lfs 9, 192(1)
  025f984  lfs 11, 152(1)
  025f988  lis 3, 151
  025f98c  li 4, 0
  025f990  addic 3, 3, -16268
  025f994  fmadds 4, 5, 2, 4
  025f998  fmadds 3, 7, 2, 3
  025f99c  lfs 5, 200(1)
  025f9a0  fmadds 1, 11, 2, 1
  025f9a4  li 5, 1
  025f9a8  lbz 3, 4(3)
  025f9ac  li 6, -1
  025f9b0  subc 3, 4, 3
  025f9b4  subc 4, 5, 6
  025f9b8  cntlzw 3, 3
  025f9bc  fmadds 2, 8, 6, 4
  025f9c0  fmadds 3, 9, 6, 3
  025f9c4  fmadds 1, 5, 6, 1
  025f9c8  sldi 3, 3, 58
  025f9cc  sradi 3, 3, 63
  025f9d0  and 3, 3, 4
  025f9d4  fmuls 30, 2, 10
  025f9d8  fmuls 2, 3, 10
  025f9dc  fmuls 1, 1, 10
  025f9e0  addc 3, 6, 3
  025f9e4  extsw 3, 3
  025f9e8  fmuls 3, 30, 30
  025f9ec  std 3, 208(1)
  025f9f0  fmadds 3, 2, 2, 3
  025f9f4  fmadds 31, 1, 1, 3
  025f9f8  lfd 1, 208(1)
  025f9fc  fcfid 1, 1
  025fa00  fsqrts 31, 31
  025fa04  frsp 1, 1
  025fa08  fmuls 1, 1, 2
  025fa0c  bl 0x502758
  025fa10  nop
  025fa14  fneg 1, 30
  025fa18  ori 27, 3, 0
  025fa1c  bl 0x502758
  025fa20  nop
  025fa24  lfs 1, 8(28)
  025fa28  ori 28, 3, 0
  025fa2c  fcmpu 0, 31, 1
  025fa30  cror 6, 1, 2
  025fa34  bt 6, 0x25fb30
  025fa38  lis 3, 38
  025fa3c  addi 3, 3, -1880
  025fa40  lfs 2, 12(3)
  025fa44  fcmpu 0, 31, 2
  025fa48  cror 6, 0, 2
  025fa4c  bt 6, 0x25fa8c
  025fa50  fsubs 31, 1, 31
  025fa54  rldicl 3, 29, 40, 56
  025fa58  bl 0x502730
  025fa5c  nop
  025fa60  fmuls 1, 1, 31
  025fa64  lis 3, 38
  025fa68  clrlwi 29, 29, 8
  025fa6c  addi 3, 3, -1880
  025fa70  lfs 2, 16(3)
  025fa74  fmuls 1, 1, 2
  025fa78  bl 0x502758
  025fa7c  nop
  025fa80  slwi 3, 3, 24
  025fa84  extsw 3, 3
  025fa88  or 29, 29, 3
  025fa8c  lis 3, 122
  025fa90  sldi 4, 30, 4
  025fa94  addic 3, 3, -14784
  025fa98  lis 5, 150
  025fa9c  addc 3, 3, 4
  025faa0  addic 4, 5, 27392
  025faa4  clrldi 30, 3, 32
  025faa8  lwz 3, 4(4)
  025faac  lhz 4, 0(30)
  025fab0  addc 28, 28, 3
  025fab4  extsh 3, 4
  025fab8  addc 3, 31, 3
  025fabc  addic 3, 3, 40
  025fac0  extsw 3, 3
  025fac4  bl 0x685c4
  025fac8  nop
  025facc  ori 10, 3, 0
  025fad0  lhz 3, 12(30)
  025fad4  lhz 4, 14(30)
  025fad8  extsh 3, 3
  025fadc  lhz 5, 6(30)
  025fae0  extsh 4, 4
  025fae4  lhz 6, 8(30)
  025fae8  subc 3, 27, 3
  025faec  lhz 7, 2(30)
  025faf0  subc 4, 28, 4
  025faf4  lhz 8, 4(30)
  025faf8  addic 3, 3, 432
  025fafc  std 29, 112(1)
  025fb00  extsh 5, 5
  025fb04  std 10, 120(1)
  025fb08  addic 4, 4, -80
  025fb0c  extsh 6, 6
  025fb10  extsw 3, 3
  025fb14  extsw 4, 4
  025fb18  extsh 7, 7
  025fb1c  extsh 8, 8
  025fb20  ori 9, 5, 0
  025fb24  ori 10, 6, 0
  025fb28  bl 0x6a5c4
  025fb2c  nop
  025fb30  ld 0, 304(1)
  025fb34  mtlr 0
  025fb38  lfd 30, 272(1)
  025fb3c  lfd 31, 280(1)
  025fb40  ld 26, 224(1)
  025fb44  ld 27, 232(1)
  025fb48  ld 28, 240(1)
  025fb4c  ld 29, 248(1)
  025fb50  ld 30, 256(1)
  025fb54  ld 31, 264(1)
  025fb58  addi 1, 1, 288
  025fb5c  blr

M1379_ScanTargets:   # 0x25fbd0, 0x12cc bytes
  025fbd0  stdu 1, -704(1)
  025fbd4  mflr 0
  025fbd8  std 0, 720(1)
  025fbdc  stfd 21, 616(1)
  025fbe0  stfd 22, 624(1)
  025fbe4  stfd 23, 632(1)
  025fbe8  stfd 24, 640(1)
  025fbec  stfd 25, 648(1)
  025fbf0  stfd 26, 656(1)
  025fbf4  stfd 27, 664(1)
  025fbf8  stfd 28, 672(1)
  025fbfc  stfd 29, 680(1)
  025fc00  stfd 30, 688(1)
  025fc04  stfd 31, 696(1)
  025fc08  lis 8, 38
  025fc0c  li 7, 0
  025fc10  addi 8, 8, -1184
  025fc14  lis 11, 164
  025fc18  li 9, 820
  025fc1c  std 19, 512(1)
  025fc20  stw 7, 232(4)
  025fc24  lis 19, 32767
  025fc28  std 27, 576(1)
  025fc2c  lfs 31, 0(8)
  025fc30  std 15, 480(1)
  025fc34  lwz 27, -28500(11)
  025fc38  ori 15, 7, 0
  025fc3c  lwz 8, 820(1)
  025fc40  std 25, 560(1)
  025fc44  ori 19, 19, 65535
  025fc48  cmpwi 27, 0
  025fc4c  std 8, 424(1)
  025fc50  std 23, 544(1)
  025fc54  ori 25, 4, 0
  025fc58  std 3, 432(1)
  025fc5c  std 24, 552(1)
  025fc60  ori 23, 5, 0
  025fc64  std 16, 488(1)
  025fc68  ori 24, 6, 0
  025fc6c  std 31, 608(1)
  025fc70  std 30, 600(1)
  025fc74  std 29, 592(1)
  025fc78  std 28, 584(1)
  025fc7c  std 26, 568(1)
  025fc80  std 22, 536(1)
  025fc84  std 21, 528(1)
  025fc88  std 20, 520(1)
  025fc8c  std 18, 504(1)
  025fc90  std 17, 496(1)
  025fc94  std 14, 472(1)
  025fc98  ori 16, 10, 0
  025fc9c  bt 2, 0x260e14
  025fca0  lis 3, 38
  025fca4  ori 15, 7, 0
  025fca8  addi 3, 3, -1184
  025fcac  lis 4, -256
  025fcb0  lis 22, 149
  025fcb4  ori 17, 15, 0
  025fcb8  lis 26, 150
  025fcbc  lfs 30, 4(3)
  025fcc0  lfs 29, 8(3)
  025fcc4  lis 21, 122
  025fcc8  lfs 28, 12(3)
  025fccc  lis 20, 151
  025fcd0  lfs 27, 16(3)
  025fcd4  ori 4, 4, 65280
  025fcd8  lfs 26, 20(3)
  025fcdc  ori 14, 17, 0
  025fce0  lfs 25, 24(3)
  025fce4  addic 26, 26, 27392
  025fce8  lfs 24, 28(3)
  025fcec  addic 22, 22, 5056
  025fcf0  addic 21, 21, -14984
  025fcf4  lfs 23, 32(3)
  025fcf8  addic 20, 20, -25376
  025fcfc  clrldi 18, 4, 32
  025fd00  lhz 3, 52(27)
  025fd04  rlwinm 3, 3, 0, 19, 19
  025fd08  cmpwi 3, 0
  025fd0c  bt 2, 0x25ff68
  025fd10  lbz 3, 49(27)
  025fd14  cmpwi 3, 0
  025fd18  bt 2, 0x25ff68
  025fd1c  lwz 3, 36(27)
  025fd20  cmpwi 3, 0
  025fd24  bt 2, 0x25ff68
  025fd28  lhz 3, 70(3)
  025fd2c  extsh 3, 3
  025fd30  cmpwi 3, 5
  025fd34  bf 2, 0x25ff68
  025fd38  addic 3, 1, 208
  025fd3c  addic 4, 27, 16
  025fd40  bl 0x65490
  025fd44  nop
  025fd48  lwz 3, 16(26)
  025fd4c  extsw 3, 3
  025fd50  std 3, 440(1)
  025fd54  lfs 1, 208(1)
  025fd58  lfd 2, 440(1)
  025fd5c  fcfid 2, 2
  025fd60  frsp 2, 2
  025fd64  fsubs 1, 1, 2
  025fd68  fmuls 1, 1, 30
  025fd6c  bl 0x502758
  025fd70  nop
  025fd74  lwz 4, 20(26)
  025fd78  extsw 4, 4
  025fd7c  ori 31, 3, 0
  025fd80  std 4, 440(1)
  025fd84  lfs 1, 212(1)
  025fd88  lfd 2, 440(1)
  025fd8c  fcfid 2, 2
  025fd90  frsp 2, 2
  025fd94  fsubs 1, 1, 2
  025fd98  fmuls 1, 1, 30
  025fd9c  bl 0x502758
  025fda0  nop
  025fda4  lfs 1, 864(22)
  025fda8  lfs 2, 868(22)
  025fdac  ori 30, 3, 0
  025fdb0  stfs 1, 112(1)
  025fdb4  lfs 3, 872(22)
  025fdb8  stfs 2, 116(1)
  025fdbc  lfs 4, 876(22)
  025fdc0  stfs 3, 120(1)
  025fdc4  stfs 4, 124(1)
  025fdc8  lfs 5, 12(27)
  025fdcc  li 6, -1
  025fdd0  stfs 4, 124(1)
  025fdd4  fmuls 5, 5, 29
  025fdd8  lwz 4, 224(25)
  025fddc  li 7, 1
  025fde0  lwz 3, 228(25)
  025fde4  subc 28, 31, 4
  025fde8  subc 29, 30, 3
  025fdec  li 3, 0
  025fdf0  extsw 4, 28
  025fdf4  subc 6, 6, 7
  025fdf8  subc 3, 4, 3
  025fdfc  fmuls 1, 1, 5
  025fe00  fmuls 2, 2, 5
  025fe04  sradi 3, 3, 63
  025fe08  fmuls 3, 3, 5
  025fe0c  extsw 5, 29
  025fe10  li 4, 0
  025fe14  and 3, 3, 6
  025fe18  subc 4, 5, 4
  025fe1c  li 5, -1
  025fe20  li 6, 1
  025fe24  addc 3, 7, 3
  025fe28  mullw 28, 28, 3
  025fe2c  stfs 1, 112(1)
  025fe30  stfs 2, 116(1)
  025fe34  subc 5, 5, 6
  025fe38  stfs 3, 120(1)
  025fe3c  sradi 3, 4, 63
  025fe40  lfs 4, 16(27)
  025fe44  addic 4, 1, 112
  025fe48  and 3, 3, 5
  025fe4c  fadds 1, 1, 4
  025fe50  addc 3, 6, 3
  025fe54  mullw 29, 29, 3
  025fe58  stfs 1, 112(1)
  025fe5c  addic 3, 1, 192
  025fe60  lfs 1, 20(27)
  025fe64  fadds 1, 2, 1
  025fe68  stfs 1, 116(1)
  025fe6c  lfs 1, 24(27)
  025fe70  std 29, 456(1)
  025fe74  fadds 1, 3, 1
  025fe78  stfs 1, 120(1)
  025fe7c  bl 0x65490
  025fe80  nop
  025fe84  lwz 3, 16(26)
  025fe88  extsw 3, 3
  025fe8c  std 3, 440(1)
  025fe90  lfs 1, 192(1)
  025fe94  lfd 2, 440(1)
  025fe98  fcfid 2, 2
  025fe9c  frsp 2, 2
  025fea0  fsubs 1, 1, 2
  025fea4  fmuls 1, 1, 30
  025fea8  bl 0x502758
  025feac  nop
  025feb0  lwz 4, 20(26)
  025feb4  ori 29, 3, 0
  025feb8  extsw 4, 4
  025febc  std 4, 440(1)
  025fec0  lfs 1, 196(1)
  025fec4  lfd 2, 440(1)
  025fec8  fcfid 2, 2
  025fecc  frsp 2, 2
  025fed0  fsubs 1, 1, 2
  025fed4  fmuls 1, 1, 30
  025fed8  bl 0x502758
  025fedc  nop
  025fee0  subc 4, 29, 31
  025fee4  subc 3, 3, 30
  025fee8  mullw 4, 4, 4
  025feec  mullw 3, 3, 3
  025fef0  addc 3, 4, 3
  025fef4  extsw 3, 3
  025fef8  bl 0x502730
  025fefc  nop
  025ff00  fsqrts 1, 1
  025ff04  bl 0x502758
  025ff08  nop
  025ff0c  addic 3, 3, 28
  025ff10  ld 29, 456(1)
  025ff14  cmpw 28, 3
  025ff18  bf 0, 0x25ff68
  025ff1c  cmpw 29, 3
  025ff20  bf 0, 0x25ff68
  025ff24  ld 3, 424(1)
  025ff28  cmpwi 16, 0
  025ff2c  cmpw 1, 27, 3
  025ff30  bt 2, 0x25ff48
  025ff34  cmpw 27, 16
  025ff38  bf 2, 0x25ff68
  025ff3c  ori 15, 27, 0
  025ff40  li 19, 0
  025ff44  b 0x25ff68
  025ff48  bt 6, 0x25ff68
  025ff4c  mullw 3, 28, 28
  025ff50  mullw 4, 29, 29
  025ff54  addc 3, 3, 4
  025ff58  cmpw 19, 3
  025ff5c  bf 1, 0x25ff68
  025ff60  ori 19, 3, 0
  025ff64  ori 15, 27, 0
  025ff68  lhz 3, 166(27)
  025ff6c  extsh 3, 3
  025ff70  cmpwi 3, 398
  025ff74  cmpwi 1, 3, 387
  025ff78  cmpwi 6, 3, 347
  025ff7c  cmpwi 7, 3, 228
  025ff80  bt 1, 0x25ffc8
  025ff84  bt 5, 0x25ffb4
  025ff88  bt 26, 0x260278
  025ff8c  bt 30, 0x260074
  025ff90  cmpwi 3, 224
  025ff94  bt 2, 0x26004c
  025ff98  cmpwi 3, 111
  025ff9c  bt 2, 0x260460
  025ffa0  cmpwi 3, 83
  025ffa4  bt 2, 0x2600c4
  025ffa8  cmpwi 3, 82
  025ffac  bt 2, 0x26009c
  025ffb0  b 0x260634
  025ffb4  cmpwi 3, 388
  025ffb8  bf 1, 0x2600ec
  025ffbc  cmpwi 3, 396
  025ffc0  bf 1, 0x260674
  025ffc4  b 0x260634
  025ffc8  cmpwi 3, 1213
  025ffcc  bt 1, 0x25fff0
  025ffd0  cmpwi 3, 401
  025ffd4  bt 1, 0x25ffe4
  025ffd8  cmpwi 3, 400
  025ffdc  bf 1, 0x260674
  025ffe0  b 0x2600ec
  025ffe4  cmpwi 3, 1003
  025ffe8  bt 2, 0x2600ec
  025ffec  b 0x260634
  025fff0  cmpwi 3, 1219
  025fff4  bt 1, 0x260018
  025fff8  cmpwi 3, 1215
  025fffc  bt 1, 0x26000c
  0260000  cmpwi 3, 1214
  0260004  bf 1, 0x260460
  0260008  b 0x260544
  026000c  cmpwi 3, 1218
  0260010  bt 2, 0x26004c
  0260014  b 0x260634
  0260018  cmpwi 3, 1331
  026001c  bt 1, 0x260040
  0260020  cmpwi 3, 1283
  0260024  bt 1, 0x260034
  0260028  cmpwi 3, 1220
  026002c  bf 1, 0x260074
  0260030  b 0x260634
  0260034  cmpwi 3, 1284
  0260038  bf 1, 0x2600ec
  026003c  b 0x260634
  0260040  cmpwi 3, 1338
  0260044  bf 1, 0x260674
  0260048  b 0x260634
  026004c  lis 7, 28800
  0260050  lwz 8, 260(25)
  0260054  ori 3, 24, 0
  0260058  ori 4, 23, 0
  026005c  ori 5, 27, 0
  0260060  li 6, 2
  0260064  ori 7, 7, 32896
  0260068  extsw 8, 8
  026006c  bl 0x25f8c0
  0260070  b 0x260674
  0260074  lis 7, 28800
  0260078  lwz 8, 260(25)
  026007c  ori 3, 24, 0
  0260080  ori 4, 23, 0
  0260084  ori 5, 27, 0
  0260088  li 6, 2
  026008c  ori 7, 7, 32896
  0260090  extsw 8, 8
  0260094  bl 0x25f8c0
  0260098  b 0x260674
  026009c  lis 7, 28672
  02600a0  lwz 8, 260(25)
  02600a4  ori 3, 24, 0
  02600a8  ori 4, 23, 0
  02600ac  ori 5, 27, 0
  02600b0  li 6, 1
  02600b4  ori 7, 7, 16512
  02600b8  extsw 8, 8
  02600bc  bl 0x25f8c0
  02600c0  b 0x260674
  02600c4  lis 7, 28672
  02600c8  lwz 8, 260(25)
  02600cc  ori 3, 24, 0
  02600d0  ori 4, 23, 0
  02600d4  ori 5, 27, 0
  02600d8  li 6, 1
  02600dc  ori 7, 7, 28800
  02600e0  extsw 8, 8
  02600e4  bl 0x25f8c0
  02600e8  b 0x260674
  02600ec  addic 3, 1, 128
  02600f0  addic 4, 27, 16
  02600f4  bl 0x65490
  02600f8  nop
  02600fc  lhz 3, 166(27)
  0260100  cmpwi 3, 388
  0260104  bt 2, 0x26023c
  0260108  lbz 4, 49(27)
  026010c  cmpwi 4, 0
  0260110  bt 2, 0x26023c
  0260114  lwz 3, 16(26)
  0260118  lis 31, 161
  026011c  lwz 4, 20(26)
  0260120  extsw 3, 3
  0260124  std 3, 440(1)
  0260128  extsw 3, 4
  026012c  lfs 1, 128(1)
  0260130  lfs 2, 132(1)
  0260134  lwz 4, 1808(31)
  0260138  lfd 3, 440(1)
  026013c  std 3, 440(1)
  0260140  fcfid 3, 3
  0260144  extsw 3, 4
  0260148  frsp 3, 3
  026014c  lfd 4, 440(1)
  0260150  fsubs 1, 1, 3
  0260154  fcfid 4, 4
  0260158  fmuls 22, 1, 30
  026015c  frsp 3, 4
  0260160  fsubs 1, 2, 3
  0260164  fmuls 21, 1, 30
  0260168  bl 0x502730
  026016c  nop
  0260170  fmuls 1, 1, 27
  0260174  bl 0x10de78
  0260178  nop
  026017c  lis 7, 255
  0260180  lis 8, 20480
  0260184  fmr 4, 1
  0260188  ori 3, 21, 0
  026018c  fmr 1, 22
  0260190  li 4, 30
  0260194  fmr 2, 21
  0260198  fmr 3, 28
  026019c  ori 7, 7, 65523
  02601a0  ori 8, 8, 255
  02601a4  bl 0x25ea4c
  02601a8  lwz 3, 16(26)
  02601ac  lwz 4, 20(26)
  02601b0  extsw 3, 3
  02601b4  extsw 4, 4
  02601b8  std 3, 440(1)
  02601bc  lfs 1, 128(1)
  02601c0  lfs 2, 132(1)
  02601c4  lwz 3, 1808(31)
  02601c8  lfd 3, 440(1)
  02601cc  std 4, 440(1)
  02601d0  fcfid 3, 3
  02601d4  extsw 3, 3
  02601d8  frsp 3, 3
  02601dc  lfd 4, 440(1)
  02601e0  fsubs 1, 1, 3
  02601e4  fcfid 4, 4
  02601e8  fmuls 22, 1, 30
  02601ec  frsp 3, 4
  02601f0  fsubs 1, 2, 3
  02601f4  fmuls 21, 1, 30
  02601f8  bl 0x502730
  02601fc  nop
  0260200  fmuls 1, 1, 27
  0260204  bl 0x10de78
  0260208  nop
  026020c  lis 7, 255
  0260210  fneg 4, 1
  0260214  lis 8, 20480
  0260218  fmr 1, 22
  026021c  ori 3, 21, 0
  0260220  fmr 2, 21
  0260224  li 4, 30
  0260228  fmr 3, 26
  026022c  ori 7, 7, 65523
  0260230  ori 8, 8, 255
  0260234  bl 0x25ea4c
  0260238  lhz 3, 166(27)
  026023c  cmpwi 3, 401
  0260240  bt 2, 0x260250
  0260244  lwz 3, 232(25)
  0260248  addic 3, 3, 1
  026024c  stw 3, 232(25)
  0260250  lis 7, 28800
  0260254  lwz 8, 260(25)
  0260258  ori 3, 24, 0
  026025c  ori 4, 23, 0
  0260260  ori 5, 27, 0
  0260264  li 6, 0
  0260268  ori 7, 7, 32896
  026026c  extsw 8, 8
  0260270  bl 0x25f8c0
  0260274  b 0x260674
  0260278  lfs 1, 16(27)
  026027c  addic 3, 1, 128
  0260280  stfs 1, 144(1)
  0260284  lfs 1, 20(27)
  0260288  addic 4, 1, 144
  026028c  stfs 1, 148(1)
  0260290  lfs 1, 24(27)
  0260294  fadds 2, 1, 25
  0260298  stfs 1, 152(1)
  026029c  lfs 1, 28(27)
  02602a0  stfs 1, 156(1)
  02602a4  stfs 2, 152(1)
  02602a8  bl 0x65490
  02602ac  nop
  02602b0  lbz 3, 49(27)
  02602b4  cmpwi 3, 0
  02602b8  bt 2, 0x2603e4
  02602bc  lwz 3, 16(26)
  02602c0  lis 31, 161
  02602c4  extsw 3, 3
  02602c8  std 3, 440(1)
  02602cc  lwz 3, 20(26)
  02602d0  lfs 1, 128(1)
  02602d4  extsw 3, 3
  02602d8  lfs 2, 132(1)
  02602dc  lwz 4, 1808(31)
  02602e0  lfd 3, 440(1)
  02602e4  std 3, 440(1)
  02602e8  fcfid 3, 3
  02602ec  extsw 3, 4
  02602f0  frsp 3, 3
  02602f4  fsubs 1, 1, 3
  02602f8  lfd 4, 440(1)
  02602fc  fcfid 4, 4
  0260300  fmuls 22, 1, 30
  0260304  frsp 3, 4
  0260308  fsubs 1, 2, 3
  026030c  fmuls 21, 1, 30
  0260310  bl 0x502730
  0260314  nop
  0260318  fmuls 1, 1, 27
  026031c  bl 0x10de78
  0260320  nop
  0260324  lis 7, 255
  0260328  fmr 4, 1
  026032c  lis 8, 16384
  0260330  fmr 1, 22
  0260334  ori 3, 21, 0
  0260338  fmr 2, 21
  026033c  li 4, 30
  0260340  fmr 3, 24
  0260344  ori 7, 7, 65523
  0260348  ori 8, 8, 255
  026034c  bl 0x25ea4c
  0260350  lwz 3, 16(26)
  0260354  extsw 3, 3
  0260358  std 3, 440(1)
  026035c  lwz 3, 20(26)
  0260360  lfs 1, 128(1)
  0260364  extsw 4, 3
  0260368  lfs 2, 132(1)
  026036c  lwz 3, 1808(31)
  0260370  lfd 3, 440(1)
  0260374  std 4, 440(1)
  0260378  fcfid 3, 3
  026037c  extsw 3, 3
  0260380  frsp 3, 3
  0260384  lfd 4, 440(1)
  0260388  fsubs 1, 1, 3
  026038c  fcfid 4, 4
  0260390  fmuls 22, 1, 30
  0260394  frsp 3, 4
  0260398  fsubs 1, 2, 3
  026039c  fmuls 21, 1, 30
  02603a0  bl 0x502730
  02603a4  nop
  02603a8  fmuls 1, 1, 27
  02603ac  bl 0x10de78
  02603b0  nop
  02603b4  lis 7, 255
  02603b8  lis 8, 16384
  02603bc  fneg 4, 1
  02603c0  ori 3, 21, 0
  02603c4  fmr 1, 22
  02603c8  li 4, 30
  02603cc  fmr 2, 21
  02603d0  fmr 3, 23
  02603d4  ori 7, 7, 65523
  02603d8  ori 8, 8, 255
  02603dc  bl 0x25ea4c
  02603e0  li 14, 1
  02603e4  lfs 1, 20(27)
  02603e8  lfs 2, 132(20)
  02603ec  lfs 3, 16(27)
  02603f0  fsubs 1, 1, 2
  02603f4  lfs 2, 128(20)
  02603f8  fsubs 2, 3, 2
  02603fc  lfs 3, 24(27)
  0260400  lfs 4, 136(20)
  0260404  fsubs 3, 3, 4
  0260408  fmuls 1, 1, 1
  026040c  fmadds 1, 2, 2, 1
  0260410  fmadds 1, 3, 3, 1
  0260414  fsqrts 1, 1
  0260418  fcmpu 0, 31, 1
  026041c  cror 6, 0, 2
  0260420  bt 6, 0x26042c
  0260424  fmr 31, 1
  0260428  ori 17, 27, 0
  026042c  lis 7, 28800
  0260430  lwz 8, 260(25)
  0260434  ori 3, 24, 0
  0260438  addic 4, 1, 144
  026043c  ori 5, 27, 0
  0260440  li 6, 0
  0260444  ori 7, 7, 32896
  0260448  extsw 8, 8
  026044c  bl 0x25f8c0
  0260450  lwz 3, 232(25)
  0260454  addic 3, 3, 1
  0260458  stw 3, 232(25)
  026045c  b 0x260674
  0260460  lhz 3, 52(27)
  0260464  clrlwi 3, 3, 31
  0260468  cmpwi 3, 0
  026046c  bf 2, 0x260674
  0260470  addic 3, 1, 128
  0260474  addic 4, 27, 16
  0260478  bl 0x65490
  026047c  nop
  0260480  lbz 3, 49(27)
  0260484  cmpwi 3, 0
  0260488  bt 2, 0x26051c
  026048c  lwz 3, 16(26)
  0260490  lwz 4, 20(26)
  0260494  extsw 3, 3
  0260498  std 3, 440(1)
  026049c  extsw 3, 4
  02604a0  lis 4, 161
  02604a4  lfs 1, 128(1)
  02604a8  lfs 2, 132(1)
  02604ac  lwz 4, 1808(4)
  02604b0  lfd 3, 440(1)
  02604b4  std 3, 440(1)
  02604b8  fcfid 3, 3
  02604bc  extsw 3, 4
  02604c0  frsp 3, 3
  02604c4  lfd 4, 440(1)
  02604c8  fsubs 1, 1, 3
  02604cc  fcfid 4, 4
  02604d0  fmuls 22, 1, 30
  02604d4  frsp 3, 4
  02604d8  fsubs 1, 2, 3
  02604dc  fmuls 21, 1, 30
  02604e0  bl 0x502730
  02604e4  nop
  02604e8  fmuls 1, 1, 27
  02604ec  bl 0x10de78
  02604f0  nop
  02604f4  lis 7, 255
  02604f8  fneg 4, 1
  02604fc  ori 3, 21, 0
  0260500  li 4, 30
  0260504  fmr 1, 22
  0260508  fmr 2, 21
  026050c  ori 8, 18, 0
  0260510  fmr 3, 28
  0260514  ori 7, 7, 65523
  0260518  bl 0x25ea4c
  026051c  lis 7, 28800
  0260520  lwz 8, 260(25)
  0260524  ori 3, 24, 0
  0260528  ori 4, 23, 0
  026052c  ori 5, 27, 0
  0260530  li 6, 1
  0260534  ori 7, 7, 32896
  0260538  extsw 8, 8
  026053c  bl 0x25f8c0
  0260540  b 0x260674
  0260544  lhz 3, 52(27)
  0260548  clrlwi 3, 3, 31
  026054c  cmpwi 3, 0
  0260550  bf 2, 0x260674
  0260554  lbz 3, 32(27)
  0260558  cmpwi 3, 1
  026055c  bf 1, 0x260674
  0260560  addic 3, 1, 128
  0260564  addic 4, 27, 16
  0260568  bl 0x65490
  026056c  nop
  0260570  lbz 3, 49(27)
  0260574  cmpwi 3, 0
  0260578  bt 2, 0x26060c
  026057c  lwz 3, 16(26)
  0260580  lwz 4, 20(26)
  0260584  extsw 3, 3
  0260588  std 3, 440(1)
  026058c  extsw 3, 4
  0260590  lis 4, 161
  0260594  lfs 1, 128(1)
  0260598  lfs 2, 132(1)
  026059c  lwz 4, 1808(4)
  02605a0  lfd 3, 440(1)
  02605a4  std 3, 440(1)
  02605a8  fcfid 3, 3
  02605ac  extsw 3, 4
  02605b0  frsp 3, 3
  02605b4  lfd 4, 440(1)
  02605b8  fsubs 1, 1, 3
  02605bc  fcfid 4, 4
  02605c0  fmuls 22, 1, 30
  02605c4  frsp 3, 4
  02605c8  fsubs 1, 2, 3
  02605cc  fmuls 21, 1, 30
  02605d0  bl 0x502730
  02605d4  nop
  02605d8  fmuls 1, 1, 27
  02605dc  bl 0x10de78
  02605e0  nop
  02605e4  lis 7, 255
  02605e8  fneg 4, 1
  02605ec  ori 3, 21, 0
  02605f0  li 4, 30
  02605f4  fmr 1, 22
  02605f8  fmr 2, 21
  02605fc  ori 8, 18, 0
  0260600  fmr 3, 28
  0260604  ori 7, 7, 65523
  0260608  bl 0x25ea4c
  026060c  lis 7, 28800
  0260610  lwz 8, 260(25)
  0260614  ori 3, 24, 0
  0260618  ori 4, 23, 0
  026061c  ori 5, 27, 0
  0260620  li 6, 1
  0260624  ori 7, 7, 32896
  0260628  extsw 8, 8
  026062c  bl 0x25f8c0
  0260630  b 0x260674
  0260634  lwz 3, 36(27)
  0260638  cmpwi 3, 0
  026063c  bt 2, 0x260674
  0260640  lhz 3, 70(3)
  0260644  extsh 3, 3
  0260648  cmpwi 3, 5
  026064c  bf 2, 0x260674
  0260650  lis 7, 28800
  0260654  lwz 8, 260(25)
  0260658  ori 3, 24, 0
  026065c  ori 4, 23, 0
  0260660  ori 5, 27, 0
  0260664  li 6, 1
  0260668  ori 7, 7, 32896
  026066c  extsw 8, 8
  0260670  bl 0x25f8c0
  0260674  lwz 27, 40(27)
  0260678  cmpwi 27, 0
  026067c  bf 2, 0x25fd00
  0260680  cmpwi 14, 0
  0260684  cmpwi 1, 17, 0
  0260688  bf 2, 0x260e14
  026068c  bt 6, 0x260e14
  0260690  lfs 1, 16(17)
  0260694  addic 3, 1, 160
  0260698  stfs 1, 176(1)
  026069c  lfs 1, 20(17)
  02606a0  addic 4, 1, 176
  02606a4  stfs 1, 180(1)
  02606a8  lfs 1, 24(17)
  02606ac  fadds 2, 1, 25
  02606b0  stfs 1, 184(1)
  02606b4  lfs 1, 28(17)
  02606b8  stfs 1, 188(1)
  02606bc  stfs 2, 184(1)
  02606c0  bl 0x65490
  02606c4  nop
  02606c8  addic 3, 1, 224
  02606cc  addic 4, 22, 848
  02606d0  bl 0x5010c0
  02606d4  nop
  02606d8  lfs 1, 20(17)
  02606dc  lfs 2, 132(20)
  02606e0  lfs 3, 16(17)
  02606e4  fsubs 1, 1, 2
  02606e8  lfs 2, 128(20)
  02606ec  fsubs 2, 3, 2
  02606f0  lfs 3, 248(1)
  02606f4  lfs 4, 24(17)
  02606f8  lfs 5, 136(20)
  02606fc  lfs 6, 244(1)
  0260700  fsubs 4, 4, 5
  0260704  lfs 5, 232(1)
  0260708  fmuls 3, 3, 1
  026070c  fmuls 1, 6, 1
  0260710  lfs 7, 228(1)
  0260714  lfs 6, 264(1)
  0260718  lfs 8, 28(17)
  026071c  lfs 9, 260(1)
  0260720  lfs 10, 280(1)
  0260724  lfs 11, 276(1)
  0260728  lis 3, 38
  026072c  fmadds 3, 5, 2, 3
  0260730  fmadds 1, 7, 2, 1
  0260734  addi 3, 3, -1184
  0260738  fmadds 2, 6, 4, 3
  026073c  fmadds 1, 9, 4, 1
  0260740  lfs 4, 40(3)
  0260744  lfs 31, 36(3)
  0260748  fnmadds 2, 10, 8, 2
  026074c  fnmadds 1, 11, 8, 1
  0260750  lis 22, 115
  0260754  fmuls 3, 2, 2
  0260758  addic 22, 22, 22784
  026075c  fmadds 3, 1, 1, 3
  0260760  fsqrts 3, 3
  0260764  fdivs 4, 4, 3
  0260768  fsub 5, 31, 3
  026076c  fsub 6, 31, 3
  0260770  fsub 30, 3, 31
  0260774  fsub 29, 3, 31
  0260778  fmuls 2, 2, 4
  026077c  fmuls 1, 1, 4
  0260780  fsel 3, 5, 31, 2
  0260784  fsel 4, 6, 31, 1
  0260788  fsel 30, 30, 3, 2
  026078c  fsel 29, 29, 4, 1
  0260790  fabs 4, 30
  0260794  fabs 3, 29
  0260798  stfs 29, 312(1)
  026079c  stfs 30, 316(1)
  02607a0  fsubs 1, 3, 4
  02607a4  stfs 1, 320(1)
  02607a8  lwz 4, 312(1)
  02607ac  lfs 1, 312(1)
  02607b0  lwz 5, 316(1)
  02607b4  lfs 2, 316(1)
  02607b8  fabs 1, 1
  02607bc  lfs 25, 44(3)
  02607c0  rlwinm 5, 5, 3, 29, 29
  02607c4  fabs 5, 2
  02607c8  lwz 3, 320(1)
  02607cc  lfs 2, 320(1)
  02607d0  rlwimi 5, 3, 2, 30, 30
  02607d4  fsub 6, 2, 31
  02607d8  ori 3, 22, 0
  02607dc  fsub 7, 2, 31
  02607e0  rlwimi 5, 4, 4, 28, 28
  02607e4  rlwimi 3, 5, 2, 26, 28
  02607e8  slwi 4, 5, 2
  02607ec  clrldi 3, 3, 32
  02607f0  fsel 4, 6, 1, 4
  02607f4  lfsx 1, 22, 4
  02607f8  fsel 3, 7, 5, 3
  02607fc  lfs 2, 4(3)
  0260800  fcmpu 0, 4, 31
  0260804  bt 1, 0x260810
  0260808  fmr 1, 31
  026080c  b 0x260928
  0260810  fsubs 5, 3, 4
  0260814  fadds 3, 3, 4
  0260818  addic 3, 1, 16
  026081c  li 6, 2
  0260820  addic 5, 3, 388
  0260824  addic 4, 3, 372
  0260828  mtctr 6
  026082c  fdivs 3, 5, 3
  0260830  fmuls 4, 3, 3
  0260834  stfs 3, 400(1)
  0260838  stfs 3, 392(1)
  026083c  stfs 3, 396(1)
  0260840  stfs 3, 388(1)
  0260844  lfs 6, 400(1)
  0260848  lfs 7, 392(1)
  026084c  lfs 8, 396(1)
  0260850  fmuls 5, 4, 4
  0260854  fmuls 7, 7, 4
  0260858  fmuls 6, 6, 5
  026085c  fmuls 3, 5, 5
  0260860  fmuls 5, 8, 5
  0260864  stfs 7, 392(1)
  0260868  fmuls 4, 6, 4
  026086c  stfs 5, 396(1)
  0260870  stfs 4, 400(1)
  0260874  lfs 4, 372(3)
  0260878  fmuls 4, 4, 3
  026087c  stfs 4, 388(3)
  0260880  lfs 4, 4(4)
  0260884  addic 4, 4, 8
  0260888  fmuls 4, 4, 3
  026088c  addic 3, 3, 8
  0260890  stfs 4, 4(5)
  0260894  addic 5, 5, 8
  0260898  bdnz 0x260874
  026089c  li 5, 4
  02608a0  ori 3, 1, 0
  02608a4  mtctr 5
  02608a8  lis 4, 115
  02608ac  addic 5, 3, 388
  02608b0  addic 4, 4, 22752
  02608b4  ori 7, 5, 0
  02608b8  lfs 3, 388(3)
  02608bc  lfs 4, 0(4)
  02608c0  fmuls 3, 3, 4
  02608c4  lfs 4, 4(4)
  02608c8  addic 4, 4, 8
  02608cc  stfs 3, 388(3)
  02608d0  lfs 3, 4(5)
  02608d4  addic 3, 3, 8
  02608d8  fmuls 3, 3, 4
  02608dc  stfs 3, 4(5)
  02608e0  addic 5, 5, 8
  02608e4  bdnz 0x2608b8
  02608e8  ori 3, 1, 0
  02608ec  fmr 3, 31
  02608f0  mtctr 6
  02608f4  lfs 4, 388(3)
  02608f8  fadds 3, 3, 4
  02608fc  lfs 4, 4(7)
  0260900  addic 3, 3, 16
  0260904  lfs 5, 8(7)
  0260908  lfs 6, 12(7)
  026090c  addic 7, 7, 16
  0260910  fadds 3, 3, 4
  0260914  fadds 3, 3, 5
  0260918  fadds 3, 3, 6
  026091c  bdnz 0x2608f4
  0260920  fadds 3, 3, 25
  0260924  fmadds 1, 3, 1, 2
  0260928  lis 3, 38
  026092c  fmr 28, 30
  0260930  addi 31, 3, -1184
  0260934  lfs 2, 48(31)
  0260938  bl 0x502578
  026093c  nop
  0260940  ld 8, 432(1)
  0260944  lfs 2, 16(17)
  0260948  lfs 3, 20(17)
  026094c  fmr 30, 1
  0260950  lfs 4, 16(8)
  0260954  lfs 5, 20(8)
  0260958  fsubs 6, 2, 4
  026095c  fsubs 7, 3, 5
  0260960  lfs 8, 52(31)
  0260964  fsubs 3, 5, 3
  0260968  lfs 9, 56(31)
  026096c  fsubs 2, 4, 2
  0260970  lfs 10, 24(17)
  0260974  fabs 11, 6
  0260978  fabs 5, 7
  026097c  stfs 6, 300(1)
  0260980  fmuls 3, 3, 3
  0260984  stfs 7, 304(1)
  0260988  fmr 7, 8
  026098c  lfs 6, 24(8)
  0260990  fsubs 6, 6, 10
  0260994  fsubs 4, 11, 5
  0260998  fmadds 2, 2, 2, 3
  026099c  fmr 3, 9
  02609a0  fadds 29, 29, 7
  02609a4  stfs 4, 308(1)
  02609a8  lwz 3, 300(1)
  02609ac  lfs 1, 300(1)
  02609b0  lwz 4, 304(1)
  02609b4  fabs 4, 1
  02609b8  lfs 1, 304(1)
  02609bc  lwz 5, 308(1)
  02609c0  rlwinm 4, 4, 3, 29, 29
  02609c4  lfs 7, 308(1)
  02609c8  fmadds 27, 6, 6, 2
  02609cc  rlwimi 4, 5, 2, 30, 30
  02609d0  fabs 6, 1
  02609d4  fsub 8, 7, 31
  02609d8  lfs 1, 56(25)
  02609dc  rlwimi 4, 3, 4, 28, 28
  02609e0  fadds 28, 28, 3
  02609e4  ori 3, 22, 0
  02609e8  rlwimi 3, 4, 2, 26, 28
  02609ec  slwi 4, 4, 2
  02609f0  clrldi 3, 3, 32
  02609f4  fsqrts 27, 27
  02609f8  lfsx 2, 22, 4
  02609fc  lfs 3, 4(3)
  0260a00  fsel 5, 8, 4, 5
  0260a04  fsub 4, 7, 31
  0260a08  fcmpu 0, 5, 31
  0260a0c  fsel 4, 4, 6, 11
  0260a10  bt 1, 0x260a1c
  0260a14  fmr 2, 31
  0260a18  b 0x260b34
  0260a1c  fsubs 6, 4, 5
  0260a20  fadds 4, 4, 5
  0260a24  addic 3, 1, 16
  0260a28  li 6, 2
  0260a2c  addic 4, 3, 340
  0260a30  addic 5, 3, 356
  0260a34  mtctr 6
  0260a38  fdivs 4, 6, 4
  0260a3c  fmuls 5, 4, 4
  0260a40  stfs 4, 368(1)
  0260a44  stfs 4, 360(1)
  0260a48  stfs 4, 364(1)
  0260a4c  stfs 4, 356(1)
  0260a50  lfs 7, 368(1)
  0260a54  lfs 8, 360(1)
  0260a58  lfs 9, 364(1)
  0260a5c  fmuls 6, 5, 5
  0260a60  fmuls 8, 8, 5
  0260a64  fmuls 7, 7, 6
  0260a68  fmuls 4, 6, 6
  0260a6c  fmuls 6, 9, 6
  0260a70  stfs 8, 360(1)
  0260a74  fmuls 5, 7, 5
  0260a78  stfs 6, 364(1)
  0260a7c  stfs 5, 368(1)
  0260a80  lfs 5, 340(3)
  0260a84  fmuls 5, 5, 4
  0260a88  stfs 5, 356(3)
  0260a8c  lfs 5, 4(4)
  0260a90  addic 3, 3, 8
  0260a94  addic 4, 4, 8
  0260a98  fmuls 5, 5, 4
  0260a9c  stfs 5, 4(5)
  0260aa0  addic 5, 5, 8
  0260aa4  bdnz 0x260a80
  0260aa8  li 5, 4
  0260aac  ori 3, 1, 0
  0260ab0  mtctr 5
  0260ab4  lis 4, 115
  0260ab8  addic 5, 3, 356
  0260abc  addic 4, 4, 22752
  0260ac0  ori 7, 5, 0
  0260ac4  lfs 4, 356(3)
  0260ac8  lfs 5, 0(4)
  0260acc  fmuls 4, 4, 5
  0260ad0  lfs 5, 4(4)
  0260ad4  addic 4, 4, 8
  0260ad8  stfs 4, 356(3)
  0260adc  lfs 4, 4(5)
  0260ae0  addic 3, 3, 8
  0260ae4  fmuls 4, 4, 5
  0260ae8  stfs 4, 4(5)
  0260aec  addic 5, 5, 8
  0260af0  bdnz 0x260ac4
  0260af4  fmr 4, 31
  0260af8  ori 3, 1, 0
  0260afc  mtctr 6
  0260b00  lfs 5, 356(3)
  0260b04  fadds 4, 4, 5
  0260b08  addic 3, 3, 16
  0260b0c  lfs 5, 4(7)
  0260b10  lfs 6, 8(7)
  0260b14  lfs 7, 12(7)
  0260b18  addic 7, 7, 16
  0260b1c  fadds 4, 4, 5
  0260b20  fadds 4, 4, 6
  0260b24  fadds 4, 4, 7
  0260b28  bdnz 0x260b00
  0260b2c  fadds 4, 4, 25
  0260b30  fmadds 2, 4, 2, 3
  0260b34  fmr 3, 1
  0260b38  ori 31, 8, 0
  0260b3c  fmr 1, 2
  0260b40  fmr 2, 3
  0260b44  bl 0x5025e0
  0260b48  nop
  0260b4c  lfs 2, 20(31)
  0260b50  lfs 3, 20(17)
  0260b54  lfs 4, 16(31)
  0260b58  fsubs 2, 2, 3
  0260b5c  lfs 3, 16(17)
  0260b60  fsubs 3, 4, 3
  0260b64  lfs 4, 24(17)
  0260b68  fabs 26, 1
  0260b6c  lfs 5, 24(31)
  0260b70  fsubs 4, 4, 5
  0260b74  fmuls 2, 2, 2
  0260b78  fabs 5, 4
  0260b7c  fmadds 2, 3, 3, 2
  0260b80  lfs 3, 52(25)
  0260b84  stfs 4, 292(1)
  0260b88  fsqrts 2, 2
  0260b8c  fabs 4, 2
  0260b90  stfs 2, 288(1)
  0260b94  lwz 3, 292(1)
  0260b98  rlwinm 3, 3, 3, 29, 29
  0260b9c  fsubs 1, 4, 5
  0260ba0  stfs 1, 296(1)
  0260ba4  lwz 4, 288(1)
  0260ba8  lfs 1, 288(1)
  0260bac  lfs 2, 292(1)
  0260bb0  lwz 5, 296(1)
  0260bb4  fabs 6, 2
  0260bb8  lfs 2, 296(1)
  0260bbc  fabs 1, 1
  0260bc0  rlwimi 3, 5, 2, 30, 30
  0260bc4  fsub 7, 2, 31
  0260bc8  fsub 8, 2, 31
  0260bcc  rlwimi 3, 4, 4, 28, 28
  0260bd0  ori 4, 22, 0
  0260bd4  rlwimi 4, 3, 2, 26, 28
  0260bd8  slwi 3, 3, 2
  0260bdc  clrldi 4, 4, 32
  0260be0  fsel 5, 7, 1, 5
  0260be4  lfsx 2, 22, 3
  0260be8  fsel 4, 8, 6, 4
  0260bec  lfs 1, 4(4)
  0260bf0  fcmpu 0, 5, 31
  0260bf4  bt 1, 0x260bfc
  0260bf8  b 0x260d10
  0260bfc  fsubs 6, 4, 5
  0260c00  fadds 4, 4, 5
  0260c04  addic 3, 1, 16
  0260c08  li 6, 2
  0260c0c  addic 4, 3, 308
  0260c10  addic 5, 3, 324
  0260c14  mtctr 6
  0260c18  fdivs 4, 6, 4
  0260c1c  fmuls 5, 4, 4
  0260c20  stfs 4, 336(1)
  0260c24  stfs 4, 328(1)
  0260c28  stfs 4, 332(1)
  0260c2c  stfs 4, 324(1)
  0260c30  lfs 7, 336(1)
  0260c34  lfs 8, 328(1)
  0260c38  lfs 9, 332(1)
  0260c3c  fmuls 6, 5, 5
  0260c40  fmuls 8, 8, 5
  0260c44  fmuls 7, 7, 6
  0260c48  fmuls 4, 6, 6
  0260c4c  fmuls 6, 9, 6
  0260c50  stfs 8, 328(1)
  0260c54  fmuls 5, 7, 5
  0260c58  stfs 6, 332(1)
  0260c5c  stfs 5, 336(1)
  0260c60  lfs 5, 308(3)
  0260c64  fmuls 5, 5, 4
  0260c68  stfs 5, 324(3)
  0260c6c  lfs 5, 4(4)
  0260c70  addic 3, 3, 8
  0260c74  addic 4, 4, 8
  0260c78  fmuls 5, 5, 4
  0260c7c  stfs 5, 4(5)
  0260c80  addic 5, 5, 8
  0260c84  bdnz 0x260c60
  0260c88  li 5, 4
  0260c8c  ori 3, 1, 0
  0260c90  mtctr 5
  0260c94  lis 4, 115
  0260c98  addic 5, 3, 324
  0260c9c  addic 4, 4, 22752
  0260ca0  ori 7, 5, 0
  0260ca4  lfs 4, 324(3)
  0260ca8  lfs 5, 0(4)
  0260cac  fmuls 4, 4, 5
  0260cb0  lfs 5, 4(4)
  0260cb4  addic 4, 4, 8
  0260cb8  stfs 4, 324(3)
  0260cbc  lfs 4, 4(5)
  0260cc0  addic 3, 3, 8
  0260cc4  fmuls 4, 4, 5
  0260cc8  stfs 4, 4(5)
  0260ccc  addic 5, 5, 8
  0260cd0  bdnz 0x260ca4
  0260cd4  ori 3, 1, 0
  0260cd8  mtctr 6
  0260cdc  lfs 4, 324(3)
  0260ce0  lfs 5, 4(7)
  0260ce4  fadds 4, 31, 4
  0260ce8  lfs 6, 8(7)
  0260cec  lfs 31, 12(7)
  0260cf0  addic 3, 3, 16
  0260cf4  addic 7, 7, 16
  0260cf8  fadds 4, 4, 5
  0260cfc  fadds 4, 4, 6
  0260d00  fadds 31, 4, 31
  0260d04  bdnz 0x260cdc
  0260d08  fadds 31, 31, 25
  0260d0c  fmadds 31, 31, 2, 1
  0260d10  fneg 1, 31
  0260d14  fmr 2, 3
  0260d18  bl 0x5025e0
  0260d1c  nop
  0260d20  fabs 1, 1
  0260d24  lis 3, 38
  0260d28  addi 31, 3, -1184
  0260d2c  fmuls 1, 1, 1
  0260d30  lfs 5, 60(31)
  0260d34  lfs 3, 64(31)
  0260d38  lfs 4, 276(25)
  0260d3c  fmadds 1, 26, 26, 1
  0260d40  fsqrts 2, 1
  0260d44  fmr 1, 4
  0260d48  fmuls 2, 2, 5
  0260d4c  fdivs 2, 3, 2
  0260d50  bl 0x502578
  0260d54  nop
  0260d58  lfs 2, 68(31)
  0260d5c  lfs 3, 72(31)
  0260d60  fsubs 2, 2, 1
  0260d64  fsubs 3, 3, 1
  0260d68  fsub 4, 1, 2
  0260d6c  fsel 2, 4, 2, 1
  0260d70  lfs 4, 76(31)
  0260d74  lfs 5, 80(31)
  0260d78  fsub 6, 3, 2
  0260d7c  fsel 2, 6, 3, 2
  0260d80  lfs 3, 84(31)
  0260d84  lfs 6, 88(31)
  0260d88  lfs 8, 92(31)
  0260d8c  lfs 10, 96(31)
  0260d90  stfs 1, 276(25)
  0260d94  fmuls 7, 2, 2
  0260d98  fmuls 9, 7, 2
  0260d9c  fmadds 2, 9, 4, 2
  0260da0  fmuls 11, 7, 9
  0260da4  fmr 4, 10
  0260da8  fmuls 9, 7, 11
  0260dac  fmadds 2, 11, 5, 2
  0260db0  fmuls 1, 7, 9
  0260db4  fmadds 2, 9, 3, 2
  0260db8  fmadds 1, 1, 6, 2
  0260dbc  fadds 1, 1, 8
  0260dc0  fmuls 1, 1, 4
  0260dc4  bl 0x502758
  0260dc8  nop
  0260dcc  lfs 1, 100(31)
  0260dd0  fdivs 3, 1, 27
  0260dd4  lis 4, 0
  0260dd8  lfs 5, 104(31)
  0260ddc  lis 5, 122
  0260de0  ori 4, 4, 32768
  0260de4  addic 5, 5, -15216
  0260de8  rlwimi 4, 3, 24, 0, 7
  0260dec  lis 7, 255
  0260df0  extsw 8, 4
  0260df4  ori 3, 5, 0
  0260df8  li 4, 3
  0260dfc  ori 7, 7, 65523
  0260e00  fmr 1, 29
  0260e04  fmr 2, 28
  0260e08  fmr 4, 30
  0260e0c  fadds 3, 3, 5
  0260e10  bl 0x25ea4c
  0260e14  ori 3, 15, 0
  0260e18  ld 0, 720(1)
  0260e1c  mtlr 0
  0260e20  lfd 21, 616(1)
  0260e24  lfd 22, 624(1)
  0260e28  lfd 23, 632(1)
  0260e2c  lfd 24, 640(1)
  0260e30  lfd 25, 648(1)
  0260e34  lfd 26, 656(1)
  0260e38  lfd 27, 664(1)
  0260e3c  lfd 28, 672(1)
  0260e40  lfd 29, 680(1)
  0260e44  lfd 30, 688(1)
  0260e48  lfd 31, 696(1)
  0260e4c  ld 14, 472(1)
  0260e50  ld 15, 480(1)
  0260e54  ld 16, 488(1)
  0260e58  ld 17, 496(1)
  0260e5c  ld 18, 504(1)
  0260e60  ld 19, 512(1)
  0260e64  ld 20, 520(1)
  0260e68  ld 21, 528(1)
  0260e6c  ld 22, 536(1)
  0260e70  ld 23, 544(1)
  0260e74  ld 24, 552(1)
  0260e78  ld 25, 560(1)
  0260e7c  ld 26, 568(1)
  0260e80  ld 27, 576(1)
  0260e84  ld 28, 584(1)
  0260e88  ld 29, 592(1)
  0260e8c  ld 30, 600(1)
  0260e90  ld 31, 608(1)
  0260e94  addi 1, 1, 704
  0260e98  blr

M1379_UpdateTargetLock:   # 0x260ea8, 0x2b8 bytes
  0260ea8  stdu 1, -192(1)
  0260eac  mflr 0
  0260eb0  std 0, 208(1)
  0260eb4  std 29, 168(1)
  0260eb8  std 28, 160(1)
  0260ebc  lis 5, 161
  0260ec0  ori 29, 3, 0
  0260ec4  std 31, 184(1)
  0260ec8  li 28, 0
  0260ecc  std 30, 176(1)
  0260ed0  ori 31, 4, 0
  0260ed4  ori 30, 28, 0
  0260ed8  lwz 3, 1800(5)
  0260edc  cmpwi 1, 3, 4
  0260ee0  cmpwi 3, 3
  0260ee4  cror 2, 2, 6
  0260ee8  bt 2, 0x260ef8
  0260eec  addic 3, 31, 140
  0260ef0  bl 0x4fff60
  0260ef4  nop
  0260ef8  lwz 3, 140(31)
  0260efc  cmpwi 3, 0
  0260f00  bt 2, 0x260f70
  0260f04  lwz 3, 136(31)
  0260f08  cmpwi 3, 0
  0260f0c  bt 2, 0x260f70
  0260f10  lhz 4, 166(3)
  0260f14  lwz 5, 296(31)
  0260f18  extsh 4, 4
  0260f1c  cmpw 4, 5
  0260f20  bf 2, 0x260f70
  0260f24  lbz 4, 32(3)
  0260f28  cmpwi 1, 4, 253
  0260f2c  cmpwi 4, 254
  0260f30  cror 2, 2, 6
  0260f34  bt 2, 0x260f70
  0260f38  lbz 4, 49(3)
  0260f3c  cmpwi 4, 0
  0260f40  bt 2, 0x260f70
  0260f44  lis 4, 150
  0260f48  addic 4, 4, 19008
  0260f4c  lwz 4, 180(4)
  0260f50  rlwinm 4, 4, 0, 18, 18
  0260f54  cmpwi 4, 0
  0260f58  bf 2, 0x260f70
  0260f5c  lis 4, 151
  0260f60  addic 4, 4, -25376
  0260f64  lbz 4, 5622(4)
  0260f68  cmpwi 4, 0
  0260f6c  bf 2, 0x260fa0
  0260f70  lis 3, 150
  0260f74  addic 3, 3, 19008
  0260f78  lwz 3, 180(3)
  0260f7c  rlwinm 3, 3, 0, 18, 18
  0260f80  cmpwi 3, 0
  0260f84  bt 2, 0x260f8c
  0260f88  lwz 28, 136(31)
  0260f8c  li 4, -1
  0260f90  stw 30, 236(31)
  0260f94  ori 3, 30, 0
  0260f98  stw 30, 136(31)
  0260f9c  stw 4, 296(31)
  0260fa0  ori 10, 3, 0
  0260fa4  lis 3, 149
  0260fa8  addic 6, 1, 128
  0260fac  addic 5, 3, 5056
  0260fb0  lis 3, 38
  0260fb4  ori 4, 31, 0
  0260fb8  addi 3, 3, 3740
  0260fbc  lfs 1, 336(5)
  0260fc0  lfs 2, 340(5)
  0260fc4  stfs 1, 128(1)
  0260fc8  lfs 1, 344(5)
  0260fcc  stfs 2, 132(1)
  0260fd0  lfs 2, 348(5)
  0260fd4  stfs 1, 136(1)
  0260fd8  stfs 2, 140(1)
  0260fdc  addic 5, 5, 320
  0260fe0  lfs 1, 0(3)
  0260fe4  lfs 3, 4(3)
  0260fe8  ori 3, 29, 0
  0260fec  std 28, 112(1)
  0260ff0  fmr 2, 1
  0260ff4  bl 0x25fbd0
  0260ff8  lwz 29, 136(31)
  0260ffc  cmpw 3, 29
  0261000  bt 2, 0x261010
  0261004  lwz 4, 140(31)
  0261008  cmpwi 4, 500
  026100c  bt 1, 0x261024
  0261010  lis 4, 151
  0261014  addic 4, 4, -25376
  0261018  lbz 4, 5622(4)
  026101c  cmpwi 4, 0
  0261020  bf 2, 0x261038
  0261024  li 4, -1
  0261028  stw 30, 236(31)
  026102c  stw 30, 136(31)
  0261030  ori 29, 30, 0
  0261034  stw 4, 296(31)
  0261038  cmpwi 3, 0
  026103c  ori 4, 29, 0
  0261040  bt 2, 0x2610a0
  0261044  ori 4, 29, 0
  0261048  cmpwi 4, 0
  026104c  bt 2, 0x261068
  0261050  lhz 5, 166(4)
  0261054  cmpwi 5, 1003
  0261058  bt 2, 0x2610a0
  026105c  lhz 5, 166(3)
  0261060  cmpwi 5, 1003
  0261064  bf 2, 0x2610a0
  0261068  lis 5, 151
  026106c  addic 5, 5, -25376
  0261070  lbz 5, 5622(5)
  0261074  cmpwi 5, 0
  0261078  bf 1, 0x2610a0
  026107c  ori 29, 3, 0
  0261080  stw 3, 136(31)
  0261084  lis 5, 122
  0261088  ori 4, 29, 0
  026108c  lhz 6, 166(4)
  0261090  extsh 6, 6
  0261094  stw 6, 296(31)
  0261098  lwz 5, -15240(5)
  026109c  stw 5, 140(31)
  02610a0  cmpw 3, 4
  02610a4  cmpwi 1, 29, 0
  02610a8  bt 2, 0x2610f8
  02610ac  lis 3, 38
  02610b0  lwz 5, 280(31)
  02610b4  lis 4, 114
  02610b8  addi 3, 3, 3740
  02610bc  addic 5, 5, 1
  02610c0  lfs 1, -3056(4)
  02610c4  stw 5, 280(31)
  02610c8  lfs 2, 8(3)
  02610cc  fmuls 1, 1, 2
  02610d0  fctiwz 1, 1
  02610d4  stfd 1, 144(1)
  02610d8  lwz 3, 148(1)
  02610dc  cmpw 5, 3
  02610e0  bf 1, 0x2610fc
  02610e4  li 3, -1
  02610e8  stw 30, 236(31)
  02610ec  stw 30, 136(31)
  02610f0  stw 3, 296(31)
  02610f4  b 0x261140
  02610f8  stw 30, 280(31)
  02610fc  bt 6, 0x261140
  0261100  lwz 3, 132(31)
  0261104  cmpwi 3, 0
  0261108  bf 2, 0x261140
  026110c  lhz 3, 166(29)
  0261110  lwz 4, 296(31)
  0261114  extsh 3, 3
  0261118  cmpw 3, 4
  026111c  bf 2, 0x261134
  0261120  lbz 3, 32(29)
  0261124  cmpwi 3, 254
  0261128  cmpwi 1, 3, 253
  026112c  bt 2, 0x261134
  0261130  bf 6, 0x261140
  0261134  li 3, -1
  0261138  stw 30, 136(31)
  026113c  stw 3, 296(31)
  0261140  ld 0, 208(1)
  0261144  mtlr 0
  0261148  ld 28, 160(1)
  026114c  ld 29, 168(1)
  0261150  ld 30, 176(1)
  0261154  ld 31, 184(1)
  0261158  addi 1, 1, 192
  026115c  blr

M1379_Hud_Draw:   # 0x2611a0, 0x828 bytes
  02611a0  stdu 1, -336(1)
  02611a4  mflr 0
  02611a8  std 0, 352(1)
  02611ac  stfd 27, 296(1)
  02611b0  stfd 28, 304(1)
  02611b4  stfd 29, 312(1)
  02611b8  stfd 30, 320(1)
  02611bc  stfd 31, 328(1)
  02611c0  std 31, 288(1)
  02611c4  ori 31, 3, 0
  02611c8  lis 3, 38
  02611cc  std 29, 272(1)
  02611d0  li 4, 1
  02611d4  addi 29, 3, 4448
  02611d8  std 30, 280(1)
  02611dc  li 3, 0
  02611e0  lwz 30, 120(31)
  02611e4  li 5, 0
  02611e8  li 6, 1
  02611ec  std 28, 264(1)
  02611f0  std 27, 256(1)
  02611f4  std 26, 248(1)
  02611f8  std 25, 240(1)
  02611fc  std 24, 232(1)
  0261200  std 23, 224(1)
  0261204  li 7, 128
  0261208  bl 0x502ea8
  026120c  nop
  0261210  ori 4, 3, 0
  0261214  li 3, 3
  0261218  bl 0x174f80
  026121c  nop
  0261220  lis 4, 144
  0261224  lis 3, 144
  0261228  li 5, 13
  026122c  addic 28, 3, -23532
  0261230  lwz 27, -23196(4)
  0261234  ori 3, 27, 0
  0261238  lwz 4, 40(28)
  026123c  bl 0x4d82b8
  0261240  nop
  0261244  li 3, 244
  0261248  vspltisw 4, -1
  026124c  addi 4, 3, 16
  0261250  li 6, 192
  0261254  lvlx 2, 3, 30
  0261258  vslw 4, 4, 4
  026125c  lvrx 3, 4, 30
  0261260  vor 2, 2, 3
  0261264  ori 3, 27, 0
  0261268  lvlx 3, 0, 29
  026126c  lis 5, 101
  0261270  li 4, 13
  0261274  vspltw 3, 3, 0
  0261278  vcfsx 2, 2, 0
  026127c  addic 5, 5, 21868
  0261280  vmaddfp 2, 2, 3, 4
  0261284  vspltw 2, 2, 0
  0261288  stvewx 2, 6, 1
  026128c  bl 0x4de9c4
  0261290  nop
  0261294  ori 6, 3, 0
  0261298  lwz 4, 40(28)
  026129c  ori 3, 27, 0
  02612a0  addic 7, 1, 192
  02612a4  li 5, 13
  02612a8  li 8, 1
  02612ac  bl 0x4dd6f0
  02612b0  nop
  02612b4  lwz 3, 260(30)
  02612b8  addic 3, 3, 40
  02612bc  extsw 3, 3
  02612c0  bl 0x685c4
  02612c4  nop
  02612c8  lis 29, 150
  02612cc  lis 6, 28800
  02612d0  addic 29, 29, 27392
  02612d4  ori 26, 6, 32896
  02612d8  ori 4, 3, 0
  02612dc  li 3, 368
  02612e0  li 5, 128
  02612e4  lwz 8, 4(29)
  02612e8  std 26, 112(1)
  02612ec  li 6, 128
  02612f0  addic 9, 8, -144
  02612f4  std 4, 120(1)
  02612f8  li 7, 0
  02612fc  extsw 4, 9
  0261300  li 8, 0
  0261304  li 9, 128
  0261308  li 10, 128
  026130c  bl 0x6a5c4
  0261310  nop
  0261314  lwz 4, 40(28)
  0261318  ori 3, 27, 0
  026131c  li 5, 12
  0261320  bl 0x4d82b8
  0261324  nop
  0261328  lwz 3, 260(30)
  026132c  addic 3, 3, 41
  0261330  extsw 3, 3
  0261334  bl 0x685c4
  0261338  nop
  026133c  ori 8, 3, 0
  0261340  lwz 4, 4(29)
  0261344  li 3, 368
  0261348  std 26, 112(1)
  026134c  li 5, 128
  0261350  addic 4, 4, -144
  0261354  std 8, 120(1)
  0261358  li 6, 128
  026135c  extsw 4, 4
  0261360  li 7, 0
  0261364  li 8, 0
  0261368  li 9, 128
  026136c  li 10, 128
  0261370  bl 0x6a5c4
  0261374  nop
  0261378  li 3, 0
  026137c  li 4, 2
  0261380  li 5, 0
  0261384  li 6, 1
  0261388  li 7, 128
  026138c  bl 0x502ea8
  0261390  nop
  0261394  ori 4, 3, 0
  0261398  li 3, 3
  026139c  bl 0x174f80
  02613a0  nop
  02613a4  ori 3, 31, 0
  02613a8  ori 4, 30, 0
  02613ac  bl 0x260ea8
  02613b0  lwz 28, 136(30)
  02613b4  cmpwi 28, 0
  02613b8  bt 2, 0x2615c4
  02613bc  addic 3, 1, 176
  02613c0  addic 4, 28, 16
  02613c4  bl 0x65490
  02613c8  nop
  02613cc  lwz 3, 16(29)
  02613d0  extsw 3, 3
  02613d4  std 3, 200(1)
  02613d8  lis 3, 38
  02613dc  lfs 1, 176(1)
  02613e0  addi 3, 3, 4448
  02613e4  lfs 31, 4(3)
  02613e8  lfd 2, 200(1)
  02613ec  fcfid 2, 2
  02613f0  frsp 2, 2
  02613f4  fsubs 1, 1, 2
  02613f8  fmuls 1, 1, 31
  02613fc  bl 0x502758
  0261400  nop
  0261404  lwz 4, 20(29)
  0261408  ori 28, 3, 0
  026140c  extsw 4, 4
  0261410  std 4, 200(1)
  0261414  lfs 1, 180(1)
  0261418  lfd 2, 200(1)
  026141c  fcfid 2, 2
  0261420  frsp 2, 2
  0261424  fsubs 1, 1, 2
  0261428  fmuls 1, 1, 31
  026142c  bl 0x502758
  0261430  nop
  0261434  lis 5, 122
  0261438  lwz 4, 140(30)
  026143c  ori 29, 3, 0
  0261440  lwz 3, -15236(5)
  0261444  cmpw 4, 3
  0261448  bf 1, 0x261528
  026144c  subc 3, 4, 3
  0261450  extsw 3, 3
  0261454  bl 0x502730
  0261458  nop
  026145c  fmr 31, 1
  0261460  lis 3, 122
  0261464  lwz 3, -15232(3)
  0261468  extsw 3, 3
  026146c  bl 0x502730
  0261470  nop
  0261474  fdivs 1, 31, 1
  0261478  lis 3, 38
  026147c  addi 27, 3, 4448
  0261480  lfs 2, 12(27)
  0261484  lfs 3, 16(27)
  0261488  lfs 4, 8(27)
  026148c  lfs 5, 20(27)
  0261490  fsubs 6, 2, 1
  0261494  fmadds 31, 1, 4, 2
  0261498  fmuls 1, 6, 3
  026149c  fsub 3, 2, 1
  02614a0  fsel 1, 3, 1, 2
  02614a4  fmuls 1, 1, 5
  02614a8  bl 0x502758
  02614ac  nop
  02614b0  clrlwi 26, 3, 24
  02614b4  ori 3, 28, 0
  02614b8  bl 0x502730
  02614bc  nop
  02614c0  ori 3, 29, 0
  02614c4  fmr 30, 1
  02614c8  bl 0x502730
  02614cc  nop
  02614d0  lis 3, 161
  02614d4  fmr 29, 1
  02614d8  lwz 3, 1808(3)
  02614dc  extsw 3, 3
  02614e0  bl 0x502730
  02614e4  nop
  02614e8  lfs 2, 24(27)
  02614ec  fmuls 1, 1, 2
  02614f0  bl 0x10de78
  02614f4  nop
  02614f8  fmr 4, 1
  02614fc  li 7, 0
  0261500  fmr 1, 30
  0261504  li 8, 255
  0261508  fmr 2, 29
  026150c  li 9, 0
  0261510  fmr 3, 31
  0261514  ori 10, 26, 0
  0261518  bl 0x25edf8
  026151c  li 3, 0
  0261520  stw 3, 236(30)
  0261524  b 0x2615c4
  0261528  lis 3, 38
  026152c  lis 5, 114
  0261530  addi 27, 3, 4448
  0261534  li 3, 255
  0261538  li 6, 0
  026153c  lfs 1, 28(27)
  0261540  lfs 2, -3056(5)
  0261544  subc 7, 3, 6
  0261548  fmuls 1, 2, 1
  026154c  li 5, 0
  0261550  ori 3, 28, 0
  0261554  fctiwz 1, 1
  0261558  stfd 1, 200(1)
  026155c  lwz 8, 204(1)
  0261560  divw 4, 4, 8
  0261564  clrlwi 4, 4, 31
  0261568  subc 4, 5, 4
  026156c  cntlzw 4, 4
  0261570  sldi 4, 4, 58
  0261574  sradi 4, 4, 63
  0261578  and 4, 4, 7
  026157c  addc 28, 6, 4
  0261580  bl 0x502730
  0261584  nop
  0261588  fmr 31, 1
  026158c  ori 3, 29, 0
  0261590  bl 0x502730
  0261594  nop
  0261598  lfs 3, 12(27)
  026159c  fmr 2, 1
  02615a0  lfs 4, 32(27)
  02615a4  li 7, 255
  02615a8  ori 8, 28, 0
  02615ac  fmr 1, 31
  02615b0  li 9, 0
  02615b4  li 10, 96
  02615b8  bl 0x25edf8
  02615bc  lwz 3, 136(30)
  02615c0  stw 3, 236(30)
  02615c4  lis 26, 151
  02615c8  li 23, 0
  02615cc  addic 26, 26, -25376
  02615d0  li 24, 64
  02615d4  li 25, 24
  02615d8  ori 27, 23, 0
  02615dc  lbz 3, 5623(26)
  02615e0  cmpwi 3, 0
  02615e4  bf 1, 0x2616ec
  02615e8  lis 3, 38
  02615ec  lis 28, 122
  02615f0  addi 3, 3, 4448
  02615f4  addic 28, 28, -15204
  02615f8  lfs 31, 36(3)
  02615fc  extsw 3, 24
  0261600  extsw 4, 25
  0261604  ori 29, 23, 0
  0261608  std 3, 200(1)
  026160c  lbz 3, 5622(26)
  0261610  lfd 1, 200(1)
  0261614  std 4, 200(1)
  0261618  cmpw 29, 3
  026161c  fcfid 1, 1
  0261620  frsp 1, 1
  0261624  lfd 2, 200(1)
  0261628  fcfid 2, 2
  026162c  frsp 2, 2
  0261630  bf 0, 0x261664
  0261634  fmr 3, 1
  0261638  lis 7, 255
  026163c  fmr 1, 2
  0261640  lis 8, 20480
  0261644  ori 3, 28, 0
  0261648  li 4, 25
  026164c  ori 7, 7, 65523
  0261650  ori 8, 8, 36608
  0261654  fmr 2, 3
  0261658  fmr 3, 31
  026165c  bl 0x25e7a4
  0261660  b 0x261690
  0261664  fmr 3, 1
  0261668  fmr 1, 2
  026166c  lis 7, 255
  0261670  lis 8, 8192
  0261674  ori 3, 28, 0
  0261678  li 4, 25
  026167c  ori 7, 7, 65523
  0261680  ori 8, 8, 20224
  0261684  fmr 2, 3
  0261688  fmr 3, 31
  026168c  bl 0x25e7a4
  0261690  lbz 5, 5623(26)
  0261694  li 4, 46
  0261698  srawi 6, 5, 1
  026169c  addze 6, 6
  02616a0  subc 4, 4, 24
  02616a4  subc 7, 6, 23
  02616a8  subc 6, 6, 29
  02616ac  cntlzw 7, 7
  02616b0  cntlzw 6, 6
  02616b4  sldi 7, 7, 58
  02616b8  addic 3, 25, 30
  02616bc  sradi 7, 7, 63
  02616c0  sldi 6, 6, 58
  02616c4  and 4, 7, 4
  02616c8  subc 3, 3, 25
  02616cc  addc 24, 24, 4
  02616d0  sradi 4, 6, 63
  02616d4  addic 23, 23, 1
  02616d8  and 3, 4, 3
  02616dc  cmpw 23, 5
  02616e0  addic 24, 24, 18
  02616e4  addc 25, 25, 3
  02616e8  bt 0, 0x2615fc
  02616ec  lwz 29, 224(30)
  02616f0  li 3, 17
  02616f4  lwz 28, 228(30)
  02616f8  bl 0x685c4
  02616fc  nop
  0261700  extsw 4, 29
  0261704  lis 5, 38
  0261708  lis 6, -224
  026170c  addi 29, 5, 4448
  0261710  std 4, 200(1)
  0261714  lis 5, 255
  0261718  std 27, 128(1)
  026171c  extsw 4, 28
  0261720  std 27, 136(1)
  0261724  ori 28, 5, 65523
  0261728  ori 25, 6, 65312
  026172c  ori 10, 3, 0
  0261730  std 28, 112(1)
  0261734  std 25, 120(1)
  0261738  lfd 1, 200(1)
  026173c  std 4, 200(1)
  0261740  fcfid 1, 1
  0261744  lfs 31, 40(29)
  0261748  li 8, 63
  026174c  lfs 30, 32(29)
  0261750  li 9, 63
  0261754  lfs 29, 36(29)
  0261758  fmr 3, 31
  026175c  std 27, 160(1)
  0261760  fmr 4, 31
  0261764  fmr 5, 30
  0261768  fmr 6, 29
  026176c  fmr 7, 29
  0261770  frsp 28, 1
  0261774  lfd 1, 200(1)
  0261778  fcfid 2, 1
  026177c  fmr 1, 28
  0261780  frsp 27, 2
  0261784  fmr 2, 27
  0261788  bl 0x6e740
  026178c  nop
  0261790  li 3, 18
  0261794  bl 0x685c4
  0261798  nop
  026179c  std 28, 112(1)
  02617a0  fmr 3, 31
  02617a4  std 25, 120(1)
  02617a8  ori 10, 3, 0
  02617ac  std 27, 128(1)
  02617b0  fmr 1, 28
  02617b4  std 27, 136(1)
  02617b8  fmr 2, 27
  02617bc  std 27, 160(1)
  02617c0  li 8, 63
  02617c4  li 9, 63
  02617c8  fmr 4, 31
  02617cc  fmr 5, 30
  02617d0  fmr 6, 29
  02617d4  fmr 7, 29
  02617d8  bl 0x6e740
  02617dc  nop
  02617e0  li 3, 8
  02617e4  bl 0x685c4
  02617e8  nop
  02617ec  lfs 3, 44(29)
  02617f0  fmr 1, 28
  02617f4  std 28, 112(1)
  02617f8  li 8, 31
  02617fc  std 25, 120(1)
  0261800  li 9, 31
  0261804  std 27, 128(1)
  0261808  fmr 2, 27
  026180c  std 27, 136(1)
  0261810  ori 10, 3, 0
  0261814  std 27, 160(1)
  0261818  fmr 5, 30
  026181c  fmr 6, 29
  0261820  fmr 7, 29
  0261824  fmr 4, 3
  0261828  bl 0x6e740
  026182c  nop
  0261830  lfs 1, 48(29)
  0261834  lfs 2, 5632(26)
  0261838  lfs 3, 5628(26)
  026183c  fmuls 1, 2, 1
  0261840  fcmpu 0, 3, 1
  0261844  cror 6, 1, 2
  0261848  bt 6, 0x2618ac
  026184c  lis 3, 161
  0261850  lis 4, -18933
  0261854  ori 4, 4, 24759
  0261858  lwz 3, 1808(3)
  026185c  mulhw 4, 4, 3
  0261860  addc 3, 4, 3
  0261864  srawi 3, 3, 6
  0261868  srwi 4, 3, 31
  026186c  addc 3, 3, 4
  0261870  clrlwi 3, 3, 31
  0261874  cmpwi 3, 0
  0261878  bt 2, 0x2618ac
  026187c  li 3, 21097
  0261880  bl 0x7b740
  0261884  nop
  0261888  lis 4, -32768
  026188c  ori 6, 3, 0
  0261890  ori 5, 4, 128
  0261894  li 3, 256
  0261898  li 4, 390
  026189c  clrldi 5, 5, 32
  02618a0  li 7, 100
  02618a4  bl 0x70834
  02618a8  nop
  02618ac  lbz 3, 32(31)
  02618b0  cmpwi 3, 8
  02618b4  bf 2, 0x2618e8
  02618b8  li 3, 21054
  02618bc  bl 0x7b740
  02618c0  nop
  02618c4  lis 5, -32768
  02618c8  ori 6, 3, 0
  02618cc  ori 5, 5, 20608
  02618d0  li 4, 200
  02618d4  li 7, 100
  02618d8  li 3, 256
  02618dc  clrldi 5, 5, 32
  02618e0  bl 0x70834
  02618e4  nop
  02618e8  lfs 1, 5628(26)
  02618ec  lfs 2, 240(30)
  02618f0  lis 3, 38
  02618f4  fsubs 1, 1, 2
  02618f8  addi 3, 3, 4448
  02618fc  lfs 3, 52(3)
  0261900  fmuls 1, 1, 3
  0261904  lfs 3, 12(3)
  0261908  fabs 4, 1
  026190c  fdivs 5, 1, 4
  0261910  fsub 3, 3, 4
  0261914  fsel 1, 3, 1, 5
  0261918  fadds 1, 2, 1
  026191c  stfs 1, 240(30)
  0261920  lfs 2, 56(3)
  0261924  lfs 3, 5632(26)
  0261928  fmuls 1, 1, 2
  026192c  fdivs 1, 1, 3
  0261930  bl 0x502758
  0261934  nop
  0261938  addic 3, 3, 2
  026193c  li 4, 253
  0261940  extsw 5, 3
  0261944  li 6, 253
  0261948  subc 4, 4, 5
  026194c  subc 5, 6, 3
  0261950  sradi 4, 4, 63
  0261954  li 6, 2
  0261958  and 4, 4, 5
  026195c  li 5, 2
  0261960  addc 3, 3, 4
  0261964  extsw 4, 3
  0261968  subc 5, 5, 3
  026196c  subc 4, 4, 6
  0261970  sradi 4, 4, 63
  0261974  and 4, 4, 5
  0261978  addc 3, 3, 4
  026197c  stw 3, 244(30)
  0261980  ld 0, 352(1)
  0261984  mtlr 0
  0261988  lfd 27, 296(1)
  026198c  lfd 28, 304(1)
  0261990  lfd 29, 312(1)
  0261994  lfd 30, 320(1)
  0261998  lfd 31, 328(1)
  026199c  ld 23, 224(1)
  02619a0  ld 24, 232(1)
  02619a4  ld 25, 240(1)
  02619a8  ld 26, 248(1)
  02619ac  ld 27, 256(1)
  02619b0  ld 28, 264(1)
  02619b4  ld 29, 272(1)
  02619b8  ld 30, 280(1)
  02619bc  ld 31, 288(1)
  02619c0  addi 1, 1, 336
  02619c4  blr

M1379_UpdateGunsMissiles:   # 0x2619e0, 0x2fc bytes
  02619e0  stdu 1, -256(1)
  02619e4  mflr 0
  02619e8  std 0, 272(1)
  02619ec  stfd 29, 232(1)
  02619f0  stfd 30, 240(1)
  02619f4  stfd 31, 248(1)
  02619f8  std 31, 224(1)
  02619fc  ori 31, 4, 0
  0261a00  lis 4, 122
  0261a04  fmr 3, 2
  0261a08  lis 5, 122
  0261a0c  std 30, 216(1)
  0261a10  fmr 2, 1
  0261a14  ori 30, 3, 0
  0261a18  addic 3, 1, 112
  0261a1c  lfs 1, -15492(4)
  0261a20  lfs 4, -15440(5)
  0261a24  std 29, 208(1)
  0261a28  std 28, 200(1)
  0261a2c  fmuls 1, 1, 4
  0261a30  bl 0xfe610
  0261a34  nop
  0261a38  lfs 1, 112(1)
  0261a3c  lfs 2, 0(31)
  0261a40  addic 3, 31, 128
  0261a44  lfs 3, 116(1)
  0261a48  fadds 1, 1, 2
  0261a4c  lfs 2, 4(31)
  0261a50  lfs 4, 120(1)
  0261a54  fadds 2, 3, 2
  0261a58  lfs 3, 8(31)
  0261a5c  fadds 3, 4, 3
  0261a60  stfs 1, 112(1)
  0261a64  stfs 2, 116(1)
  0261a68  stfs 3, 120(1)
  0261a6c  bl 0x4fff60
  0261a70  nop
  0261a74  cmpwi 3, 0
  0261a78  bt 2, 0x261b90
  0261a7c  lis 3, 150
  0261a80  li 4, 132
  0261a84  addic 3, 3, 19008
  0261a88  lwz 3, 176(3)
  0261a8c  and 3, 3, 4
  0261a90  cmpwi 3, 0
  0261a94  bt 2, 0x261b90
  0261a98  li 3, 3
  0261a9c  li 4, 0
  0261aa0  ori 5, 30, 0
  0261aa4  bl 0x15d12c
  0261aa8  nop
  0261aac  lfs 1, 116(1)
  0261ab0  lfs 2, 112(1)
  0261ab4  fmuls 3, 1, 1
  0261ab8  lfs 4, 120(1)
  0261abc  lis 3, 38
  0261ac0  addi 29, 3, 6600
  0261ac4  fmadds 3, 2, 2, 3
  0261ac8  lfs 5, 4(29)
  0261acc  lfs 6, 0(29)
  0261ad0  addic 28, 1, 128
  0261ad4  lbz 4, 97(31)
  0261ad8  ori 3, 30, 0
  0261adc  ori 5, 28, 0
  0261ae0  fmadds 3, 4, 4, 3
  0261ae4  clrlwi 4, 4, 31
  0261ae8  addic 4, 4, 3
  0261aec  fsqrts 3, 3
  0261af0  fdivs 5, 5, 3
  0261af4  fsub 7, 6, 3
  0261af8  fsub 8, 6, 3
  0261afc  fsub 9, 6, 3
  0261b00  fsub 10, 3, 6
  0261b04  fsub 11, 3, 6
  0261b08  fsub 3, 3, 6
  0261b0c  fmuls 4, 4, 5
  0261b10  fmuls 1, 1, 5
  0261b14  fmuls 2, 2, 5
  0261b18  fsel 5, 7, 6, 4
  0261b1c  fsel 7, 8, 6, 1
  0261b20  fsel 6, 9, 6, 2
  0261b24  fsel 31, 10, 5, 4
  0261b28  fsel 30, 11, 7, 1
  0261b2c  fsel 29, 3, 6, 2
  0261b30  bl 0xf1114
  0261b34  nop
  0261b38  lfs 1, 128(1)
  0261b3c  lfs 2, 132(1)
  0261b40  ori 3, 30, 0
  0261b44  fadds 1, 1, 29
  0261b48  lfs 3, 136(1)
  0261b4c  fadds 2, 2, 30
  0261b50  addic 4, 1, 112
  0261b54  fadds 3, 3, 31
  0261b58  ori 5, 28, 0
  0261b5c  stfs 1, 128(1)
  0261b60  stfs 2, 132(1)
  0261b64  stfs 3, 136(1)
  0261b68  lfs 1, 8(29)
  0261b6c  lfs 2, 12(29)
  0261b70  bl 0x184670
  0261b74  nop
  0261b78  lis 3, 122
  0261b7c  lbz 4, 97(31)
  0261b80  xori 4, 4, 1
  0261b84  lwz 3, -15488(3)
  0261b88  stw 3, 128(31)
  0261b8c  stb 4, 97(31)
  0261b90  lfs 1, 116(1)
  0261b94  lfs 2, 112(1)
  0261b98  fmuls 3, 1, 1
  0261b9c  lfs 4, 120(1)
  0261ba0  lis 3, 38
  0261ba4  addi 29, 3, 6600
  0261ba8  fmadds 3, 2, 2, 3
  0261bac  lfs 5, 16(29)
  0261bb0  lfs 6, 0(29)
  0261bb4  lfs 7, 16(30)
  0261bb8  lfs 8, 20(30)
  0261bbc  fmadds 3, 4, 4, 3
  0261bc0  lfs 9, 24(30)
  0261bc4  lfs 10, 124(1)
  0261bc8  addic 3, 1, 160
  0261bcc  stfs 10, 156(1)
  0261bd0  addic 4, 1, 144
  0261bd4  fsqrts 3, 3
  0261bd8  fdivs 5, 5, 3
  0261bdc  fsub 10, 6, 3
  0261be0  fsub 11, 6, 3
  0261be4  fsub 12, 6, 3
  0261be8  fsub 13, 3, 6
  0261bec  fsub 0, 3, 6
  0261bf0  fsub 3, 3, 6
  0261bf4  fmuls 2, 2, 5
  0261bf8  fmuls 1, 1, 5
  0261bfc  fmuls 4, 4, 5
  0261c00  fsel 5, 10, 6, 2
  0261c04  fsel 10, 11, 6, 1
  0261c08  fsel 6, 12, 6, 4
  0261c0c  fsel 2, 13, 5, 2
  0261c10  fsel 1, 0, 10, 1
  0261c14  fsel 3, 3, 6, 4
  0261c18  fadds 4, 2, 7
  0261c1c  fadds 5, 1, 8
  0261c20  fadds 6, 3, 9
  0261c24  stfs 2, 112(1)
  0261c28  stfs 1, 116(1)
  0261c2c  stfs 3, 120(1)
  0261c30  stfs 4, 144(1)
  0261c34  stfs 5, 148(1)
  0261c38  stfs 6, 152(1)
  0261c3c  bl 0x65490
  0261c40  nop
  0261c44  lis 3, 150
  0261c48  addic 30, 3, 27392
  0261c4c  lwz 3, 16(30)
  0261c50  extsw 3, 3
  0261c54  std 3, 176(1)
  0261c58  lfs 1, 160(1)
  0261c5c  lfs 31, 20(29)
  0261c60  lfd 2, 176(1)
  0261c64  fcfid 2, 2
  0261c68  frsp 2, 2
  0261c6c  fsubs 1, 1, 2
  0261c70  fmuls 1, 1, 31
  0261c74  bl 0x502758
  0261c78  nop
  0261c7c  stw 3, 224(31)
  0261c80  lwz 3, 20(30)
  0261c84  extsw 3, 3
  0261c88  std 3, 176(1)
  0261c8c  lfs 1, 164(1)
  0261c90  lfd 2, 176(1)
  0261c94  fcfid 2, 2
  0261c98  frsp 2, 2
  0261c9c  fsubs 1, 1, 2
  0261ca0  fmuls 1, 1, 31
  0261ca4  bl 0x502758
  0261ca8  nop
  0261cac  stw 3, 228(31)
  0261cb0  ld 0, 272(1)
  0261cb4  mtlr 0
  0261cb8  lfd 29, 232(1)
  0261cbc  lfd 30, 240(1)
  0261cc0  lfd 31, 248(1)
  0261cc4  ld 28, 200(1)
  0261cc8  ld 29, 208(1)
  0261ccc  ld 30, 216(1)
  0261cd0  ld 31, 224(1)
  0261cd4  addi 1, 1, 256
  0261cd8  blr

M1379_UpdateMissiles:   # 0x261ce8, 0x1d4 bytes
  0261ce8  stdu 1, -192(1)
  0261cec  mflr 0
  0261cf0  std 0, 208(1)
  0261cf4  stfd 30, 176(1)
  0261cf8  stfd 31, 184(1)
  0261cfc  std 31, 168(1)
  0261d00  std 30, 160(1)
  0261d04  ori 31, 4, 0
  0261d08  ori 30, 3, 0
  0261d0c  std 29, 152(1)
  0261d10  std 28, 144(1)
  0261d14  addic 3, 31, 132
  0261d18  bl 0x4fff60
  0261d1c  nop
  0261d20  cmpwi 3, 0
  0261d24  bt 2, 0x261e94
  0261d28  lis 3, 150
  0261d2c  li 4, 40
  0261d30  addic 3, 3, 19008
  0261d34  lwz 3, 176(3)
  0261d38  and 3, 3, 4
  0261d3c  cmpwi 3, 0
  0261d40  bt 2, 0x261e94
  0261d44  lis 29, 151
  0261d48  addic 29, 29, -25376
  0261d4c  lbz 3, 5622(29)
  0261d50  cmpwi 3, 0
  0261d54  bf 1, 0x261e94
  0261d58  lhz 4, 106(31)
  0261d5c  addic 28, 1, 112
  0261d60  ori 3, 30, 0
  0261d64  addic 4, 4, 1
  0261d68  ori 5, 28, 0
  0261d6c  clrlwi 6, 4, 30
  0261d70  extsh 4, 6
  0261d74  sth 6, 106(31)
  0261d78  addic 4, 4, 7
  0261d7c  bl 0xf1114
  0261d80  nop
  0261d84  lfs 2, 4(31)
  0261d88  lfs 3, 0(31)
  0261d8c  fmuls 1, 2, 2
  0261d90  lfs 4, 8(31)
  0261d94  lis 3, 38
  0261d98  addi 7, 3, 7388
  0261d9c  lis 3, 114
  0261da0  fmadds 1, 3, 3, 1
  0261da4  lfs 10, 4(7)
  0261da8  lfs 6, 0(7)
  0261dac  lis 4, 122
  0261db0  lfs 7, 112(1)
  0261db4  lis 8, 122
  0261db8  lfs 8, 116(1)
  0261dbc  lfs 9, 120(1)
  0261dc0  lwz 5, 236(31)
  0261dc4  fmadds 1, 4, 4, 1
  0261dc8  lfs 11, -3056(3)
  0261dcc  addic 6, 30, 64
  0261dd0  ori 3, 30, 0
  0261dd4  fsqrts 5, 1
  0261dd8  lfs 1, -15484(4)
  0261ddc  lfs 12, -15440(8)
  0261de0  ori 4, 28, 0
  0261de4  fmuls 1, 1, 12
  0261de8  fdivs 10, 10, 5
  0261dec  fsub 12, 6, 5
  0261df0  fsub 13, 6, 5
  0261df4  fsub 0, 6, 5
  0261df8  fsub 31, 5, 6
  0261dfc  fsub 30, 5, 6
  0261e00  fsub 5, 5, 6
  0261e04  fmuls 4, 4, 10
  0261e08  fmuls 2, 2, 10
  0261e0c  fmuls 3, 3, 10
  0261e10  fsel 10, 12, 6, 4
  0261e14  fsel 12, 13, 6, 2
  0261e18  fsel 6, 0, 6, 3
  0261e1c  fsel 4, 31, 10, 4
  0261e20  fsel 2, 30, 12, 2
  0261e24  fsel 3, 5, 6, 3
  0261e28  fadds 4, 9, 4
  0261e2c  fadds 2, 8, 2
  0261e30  fadds 3, 7, 3
  0261e34  stfs 4, 120(1)
  0261e38  stfs 2, 116(1)
  0261e3c  stfs 3, 112(1)
  0261e40  lfs 2, 8(7)
  0261e44  fmuls 2, 11, 2
  0261e48  fctiwz 2, 2
  0261e4c  stfd 2, 128(1)
  0261e50  lwz 8, 132(1)
  0261e54  extsw 8, 8
  0261e58  bl 0x334aa8
  0261e5c  nop
  0261e60  cmpwi 3, 0
  0261e64  bt 2, 0x261e94
  0261e68  li 3, 2
  0261e6c  li 4, 0
  0261e70  ori 5, 30, 0
  0261e74  bl 0x15d12c
  0261e78  nop
  0261e7c  lis 3, 122
  0261e80  lbz 4, 5622(29)
  0261e84  addic 4, 4, -1
  0261e88  lwz 3, -15480(3)
  0261e8c  stb 4, 5622(29)
  0261e90  stw 3, 132(31)
  0261e94  ld 0, 208(1)
  0261e98  mtlr 0
  0261e9c  lfd 30, 176(1)
  0261ea0  lfd 31, 184(1)
  0261ea4  ld 28, 144(1)
  0261ea8  ld 29, 152(1)
  0261eac  ld 30, 160(1)
  0261eb0  ld 31, 168(1)
  0261eb4  addi 1, 1, 192
  0261eb8  blr

M1379_BlendByDist:   # 0x261ec8, 0xcc bytes
  0261ec8  stdu 1, -128(1)
  0261ecc  mflr 0
  0261ed0  std 0, 144(1)
  0261ed4  stfd 30, 112(1)
  0261ed8  stfd 31, 120(1)
  0261edc  fcmpu 0, 1, 4
  0261ee0  fmr 31, 2
  0261ee4  cmpwi 1, 9, 1
  0261ee8  fmr 2, 3
  0261eec  cror 2, 0, 2
  0261ef0  bt 2, 0x261f78
  0261ef4  fsubs 1, 1, 4
  0261ef8  fsubs 3, 5, 4
  0261efc  lis 3, 38
  0261f00  addi 3, 3, 7868
  0261f04  lfs 5, 0(3)
  0261f08  fdivs 3, 1, 3
  0261f0c  lfs 1, 4(3)
  0261f10  fsub 4, 3, 5
  0261f14  fsel 30, 4, 3, 5
  0261f18  fsub 3, 1, 30
  0261f1c  fsel 30, 3, 30, 1
  0261f20  bf 5, 0x261f38
  0261f24  addic 3, 9, -1
  0261f28  addic 3, 3, -1
  0261f2c  fmuls 30, 30, 30
  0261f30  cmpwi 3, 0
  0261f34  bt 1, 0x261f28
  0261f38  clrlwi 3, 6, 24
  0261f3c  fsubs 1, 1, 30
  0261f40  cmpwi 3, 0
  0261f44  bt 2, 0x261f6c
  0261f48  fmr 1, 2
  0261f4c  fmr 2, 31
  0261f50  bl 0x5025e0
  0261f54  nop
  0261f58  fmuls 2, 30, 1
  0261f5c  fmr 1, 31
  0261f60  bl 0x502578
  0261f64  nop
  0261f68  b 0x261f7c
  0261f6c  fmuls 2, 30, 2
  0261f70  fmadds 1, 1, 31, 2
  0261f74  b 0x261f7c
  0261f78  fmr 1, 31
  0261f7c  ld 0, 144(1)
  0261f80  mtlr 0
  0261f84  lfd 30, 112(1)
  0261f88  lfd 31, 120(1)
  0261f8c  addi 1, 1, 128
  0261f90  blr

M1379_00261f94:   # 0x261f94, 0x70 bytes
  0261f94  stdu 1, -160(1)
  0261f98  mflr 0
  0261f9c  std 0, 176(1)
  0261fa0  stfd 31, 152(1)
  0261fa4  std 30, 136(1)
  0261fa8  fmr 31, 1
  0261fac  std 31, 144(1)
  0261fb0  addic 30, 1, 112
  0261fb4  std 29, 128(1)
  0261fb8  ori 31, 7, 0
  0261fbc  ori 29, 6, 0
  0261fc0  ori 5, 30, 0
  0261fc4  bl 0xf1114
  0261fc8  nop
  0261fcc  fmr 1, 31
  0261fd0  ori 3, 30, 0
  0261fd4  ori 5, 29, 0
  0261fd8  ori 6, 31, 0
  0261fdc  bl 0x59e20
  0261fe0  nop
  0261fe4  ld 0, 176(1)
  0261fe8  mtlr 0
  0261fec  lfd 31, 152(1)
  0261ff0  ld 29, 128(1)
  0261ff4  ld 30, 136(1)
  0261ff8  ld 31, 144(1)
  0261ffc  addi 1, 1, 160
  0262000  blr

M1379_00262030:   # 0x262030, 0x6a0 bytes
  0262030  stdu 1, -288(1)
  0262034  mflr 0
  0262038  std 0, 304(1)
  026203c  stfd 29, 264(1)
  0262040  stfd 30, 272(1)
  0262044  stfd 31, 280(1)
  0262048  addi 0, 1, 160
  026204c  stvx 28, 0, 0
  0262050  addic 0, 0, 16
  0262054  stvx 29, 0, 0
  0262058  addic 0, 0, 16
  026205c  stvx 30, 0, 0
  0262060  addic 0, 0, 16
  0262064  stvx 31, 0, 0
  0262068  lis 6, 38
  026206c  lis 7, 114
  0262070  vspltisw 3, -1
  0262074  addi 6, 6, 8196
  0262078  li 8, -3056
  026207c  vslw 3, 3, 3
  0262080  lis 11, 165
  0262084  lfs 1, 0(6)
  0262088  lfs 2, -3056(7)
  026208c  lvlx 2, 0, 6
  0262090  fmuls 1, 2, 1
  0262094  vspltw 2, 2, 0
  0262098  std 29, 240(1)
  026209c  lvlx 4, 8, 7
  02620a0  lwz 29, 120(3)
  02620a4  li 7, 100
  02620a8  vmaddfp 2, 4, 2, 3
  02620ac  addi 8, 7, 16
  02620b0  lfs 2, 100(29)
  02620b4  lvlx 3, 7, 29
  02620b8  fctidz 1, 1
  02620bc  li 7, 16
  02620c0  lvrx 4, 8, 29
  02620c4  addi 9, 7, 16
  02620c8  vor 3, 3, 4
  02620cc  li 8, 20
  02620d0  vspltisw 4, -1
  02620d4  lfs 3, 16(29)
  02620d8  addi 10, 8, 16
  02620dc  lvlx 5, 7, 29
  02620e0  vctsxs 2, 2, 0
  02620e4  lfs 4, 20(29)
  02620e8  vslw 4, 4, 4
  02620ec  lvrx 6, 9, 29
  02620f0  fcfid 1, 1
  02620f4  lfs 5, 16(3)
  02620f8  std 31, 256(1)
  02620fc  vor 5, 5, 6
  0262100  std 30, 248(1)
  0262104  ori 31, 4, 0
  0262108  ori 30, 5, 0
  026210c  vcfsx 2, 2, 0
  0262110  frsp 1, 1
  0262114  fmuls 1, 2, 1
  0262118  vmaddfp 30, 3, 2, 4
  026211c  lvlx 2, 8, 29
  0262120  lvrx 3, 10, 29
  0262124  lfs 6, 20(3)
  0262128  lwz 9, 300(29)
  026212c  vor 2, 2, 3
  0262130  lwz 10, 7128(11)
  0262134  slwi 9, 9, 7
  0262138  lvlx 3, 7, 3
  026213c  addc 7, 10, 9
  0262140  fmadds 2, 3, 1, 5
  0262144  li 10, 52
  0262148  fmadds 1, 4, 1, 6
  026214c  clrldi 7, 7, 32
  0262150  lvlx 4, 8, 3
  0262154  li 9, 24
  0262158  vmaddfp 3, 5, 30, 3
  026215c  li 8, 48
  0262160  vmaddfp 2, 2, 30, 4
  0262164  addi 11, 9, 16
  0262168  lfs 3, 48(7)
  026216c  lfs 4, 52(7)
  0262170  lvlx 4, 8, 7
  0262174  li 8, 40
  0262178  fsubs 2, 2, 3
  026217c  fsubs 1, 1, 4
  0262180  vsubfp 3, 3, 4
  0262184  lvlx 4, 10, 7
  0262188  lvlx 5, 9, 29
  026218c  li 10, 56
  0262190  vsubfp 2, 2, 4
  0262194  lvrx 6, 11, 29
  0262198  fabs 5, 2
  026219c  lfs 3, 0(7)
  02621a0  fabs 6, 1
  02621a4  lfs 4, 4(7)
  02621a8  lvlx 31, 8, 7
  02621ac  li 8, 112
  02621b0  lvlx 4, 10, 7
  02621b4  li 7, 116
  02621b8  fmuls 4, 4, 4
  02621bc  vspltw 3, 3, 0
  02621c0  fmuls 1, 1, 1
  02621c4  vspltw 2, 2, 0
  02621c8  fsubs 7, 5, 6
  02621cc  stvewx 3, 8, 1
  02621d0  vaddfp 28, 31, 4
  02621d4  stvewx 2, 7, 1
  02621d8  lwz 7, 112(1)
  02621dc  lfs 8, 112(1)
  02621e0  lvlx 3, 9, 3
  02621e4  fmadds 30, 3, 3, 4
  02621e8  fmadds 31, 2, 2, 1
  02621ec  vor 2, 5, 6
  02621f0  stfs 7, 120(1)
  02621f4  lfs 29, 4(6)
  02621f8  lwz 3, 116(1)
  02621fc  lis 6, 115
  0262200  lfs 3, 116(1)
  0262204  fabs 7, 8
  0262208  lwz 4, 120(1)
  026220c  rlwinm 3, 3, 3, 29, 29
  0262210  lfs 8, 120(1)
  0262214  addic 6, 6, 22784
  0262218  rlwimi 3, 4, 2, 30, 30
  026221c  fabs 3, 3
  0262220  fsub 4, 8, 29
  0262224  ori 4, 6, 0
  0262228  rlwimi 3, 7, 4, 28, 28
  026222c  vmaddfp 30, 2, 30, 3
  0262230  vsubfp 31, 4, 31
  0262234  rlwimi 4, 3, 2, 26, 28
  0262238  slwi 3, 3, 2
  026223c  fsqrts 31, 31
  0262240  clrldi 4, 4, 32
  0262244  lfsx 1, 6, 3
  0262248  lfs 2, 4(4)
  026224c  fsel 4, 4, 7, 6
  0262250  fsub 6, 8, 29
  0262254  fsqrts 30, 30
  0262258  fcmpu 0, 4, 29
  026225c  std 28, 232(1)
  0262260  fsel 3, 6, 3, 5
  0262264  bt 1, 0x262270
  0262268  fmr 1, 29
  026226c  b 0x262394
  0262270  fsubs 5, 3, 4
  0262274  fadds 3, 3, 4
  0262278  addic 3, 1, 16
  026227c  li 7, 2
  0262280  addic 5, 3, 124
  0262284  addic 4, 3, 108
  0262288  mtctr 7
  026228c  fdivs 3, 5, 3
  0262290  fmuls 4, 3, 3
  0262294  stfs 3, 136(1)
  0262298  stfs 3, 128(1)
  026229c  stfs 3, 132(1)
  02622a0  stfs 3, 124(1)
  02622a4  lfs 6, 136(1)
  02622a8  lfs 7, 128(1)
  02622ac  lfs 8, 132(1)
  02622b0  fmuls 5, 4, 4
  02622b4  fmuls 7, 7, 4
  02622b8  fmuls 6, 6, 5
  02622bc  fmuls 3, 5, 5
  02622c0  fmuls 5, 8, 5
  02622c4  stfs 7, 128(1)
  02622c8  fmuls 4, 6, 4
  02622cc  stfs 5, 132(1)
  02622d0  stfs 4, 136(1)
  02622d4  lfs 4, 108(3)
  02622d8  fmuls 4, 4, 3
  02622dc  stfs 4, 124(3)
  02622e0  lfs 4, 4(4)
  02622e4  addic 4, 4, 8
  02622e8  fmuls 4, 4, 3
  02622ec  addic 3, 3, 8
  02622f0  stfs 4, 4(5)
  02622f4  addic 5, 5, 8
  02622f8  bdnz 0x2622d4
  02622fc  li 5, 4
  0262300  ori 3, 1, 0
  0262304  mtctr 5
  0262308  lis 4, 115
  026230c  addic 5, 3, 124
  0262310  addic 4, 4, 22752
  0262314  ori 6, 5, 0
  0262318  lfs 3, 124(3)
  026231c  lfs 4, 0(4)
  0262320  fmuls 3, 3, 4
  0262324  lfs 4, 4(4)
  0262328  addic 4, 4, 8
  026232c  stfs 3, 124(3)
  0262330  lfs 3, 4(5)
  0262334  addic 3, 3, 8
  0262338  fmuls 3, 3, 4
  026233c  stfs 3, 4(5)
  0262340  addic 5, 5, 8
  0262344  bdnz 0x262318
  0262348  ori 3, 1, 0
  026234c  fmr 3, 29
  0262350  mtctr 7
  0262354  lfs 4, 124(3)
  0262358  fadds 3, 3, 4
  026235c  lfs 4, 4(6)
  0262360  addic 3, 3, 16
  0262364  lfs 5, 8(6)
  0262368  lfs 6, 12(6)
  026236c  addic 6, 6, 16
  0262370  fadds 3, 3, 4
  0262374  fadds 3, 3, 5
  0262378  fadds 3, 3, 6
  026237c  bdnz 0x262354
  0262380  lis 3, 38
  0262384  addi 3, 3, 8196
  0262388  lfs 4, 8(3)
  026238c  fadds 3, 3, 4
  0262390  fmadds 1, 3, 1, 2
  0262394  lis 3, 38
  0262398  addi 28, 3, 8196
  026239c  lfs 2, 12(28)
  02623a0  bl 0x502578
  02623a4  nop
  02623a8  lfs 2, 16(28)
  02623ac  li 3, 16
  02623b0  fsubs 3, 30, 2
  02623b4  lvlx 29, 3, 28
  02623b8  vspltw 29, 29, 0
  02623bc  fcmpu 0, 31, 3
  02623c0  cror 6, 0, 2
  02623c4  bt 6, 0x262460
  02623c8  fsubs 3, 31, 30
  02623cc  lis 3, 38
  02623d0  lfs 4, 56(29)
  02623d4  addi 28, 3, 8196
  02623d8  lfs 5, 20(28)
  02623dc  fadds 3, 3, 2
  02623e0  fmr 31, 5
  02623e4  fmr 2, 4
  02623e8  fmuls 31, 3, 31
  02623ec  bl 0x5025e0
  02623f0  nop
  02623f4  lfs 2, 24(28)
  02623f8  fcmpu 0, 31, 2
  02623fc  cror 6, 0, 2
  0262400  bt 6, 0x26240c
  0262404  fmr 31, 2
  0262408  b 0x26241c
  026240c  fcmpu 0, 31, 29
  0262410  cror 6, 1, 2
  0262414  bt 6, 0x26241c
  0262418  fmr 31, 29
  026241c  fcmpu 0, 1, 29
  0262420  cror 6, 0, 2
  0262424  bt 6, 0x26243c
  0262428  lis 3, 38
  026242c  lfs 1, 0(31)
  0262430  addi 3, 3, 8196
  0262434  lfs 2, 28(3)
  0262438  b 0x262440
  026243c  lfs 1, 0(31)
  0262440  fsubs 2, 2, 1
  0262444  lis 3, 151
  0262448  addic 3, 3, -25376
  026244c  fmadds 1, 2, 31, 1
  0262450  stfs 1, 0(31)
  0262454  lbz 4, 5647(3)
  0262458  ori 4, 4, 2
  026245c  stb 4, 5647(3)
  0262460  vsubfp 3, 28, 29
  0262464  vspltw 2, 30, 0
  0262468  vspltw 3, 3, 0
  026246c  vcmpgtfp. 3, 2, 3
  0262470  bt 26, 0x262580
  0262474  vsubfp 2, 30, 28
  0262478  lis 3, 38
  026247c  li 4, 20
  0262480  vspltisw 3, -1
  0262484  addi 3, 3, 8196
  0262488  li 5, 52
  026248c  li 6, 24
  0262490  vslw 3, 3, 3
  0262494  lvlx 4, 4, 3
  0262498  addi 4, 5, 16
  026249c  lvlx 5, 5, 29
  02624a0  li 5, 32
  02624a4  vspltw 4, 4, 0
  02624a8  vaddfp 2, 2, 29
  02624ac  lvrx 6, 4, 29
  02624b0  li 4, 36
  02624b4  lvlx 7, 5, 3
  02624b8  vor 5, 5, 6
  02624bc  vmaddfp 3, 2, 4, 3
  02624c0  vspltw 4, 7, 0
  02624c4  lvlx 2, 6, 3
  02624c8  vspltw 2, 2, 0
  02624cc  vsubfp 30, 4, 5
  02624d0  vspltisw 4, -1
  02624d4  lvlx 5, 4, 3
  02624d8  vspltw 5, 5, 0
  02624dc  vslw 6, 4, 4
  02624e0  vspltw 4, 3, 0
  02624e4  vcmpgtfp. 7, 4, 2
  02624e8  vmaddfp 30, 30, 5, 6
  02624ec  bt 26, 0x2624f8
  02624f0  vsldoi 3, 2, 2, 0
  02624f4  b 0x262508
  02624f8  vspltisw 5, 0
  02624fc  vcmpgefp. 4, 4, 5
  0262500  bf 26, 0x262508
  0262504  vspltisw 3, 0
  0262508  vspltw 4, 3, 0
  026250c  vspltw 3, 30, 0
  0262510  vcmpgtfp. 5, 3, 2
  0262514  bt 26, 0x262520
  0262518  vsldoi 30, 2, 2, 0
  026251c  b 0x262530
  0262520  vspltisw 2, 0
  0262524  vcmpgefp. 2, 3, 2
  0262528  bf 26, 0x262530
  026252c  vspltisw 30, 0
  0262530  lis 3, 38
  0262534  vspltisw 2, -1
  0262538  li 4, 28
  026253c  addi 3, 3, 8196
  0262540  vspltw 3, 30, 0
  0262544  lvlx 5, 0, 30
  0262548  vslw 2, 2, 2
  026254c  lvlx 6, 4, 3
  0262550  lis 3, 151
  0262554  vmaddfp 2, 4, 3, 2
  0262558  vspltw 3, 6, 0
  026255c  addic 3, 3, -25376
  0262560  vsubfp 3, 3, 5
  0262564  vmaddfp 2, 3, 2, 5
  0262568  vspltw 2, 2, 0
  026256c  stvewx 2, 0, 30
  0262570  lbz 4, 5647(3)
  0262574  ori 4, 4, 2
  0262578  stb 4, 5647(3)
  026257c  b 0x262684
  0262580  vaddfp 3, 31, 29
  0262584  vspltw 3, 3, 0
  0262588  vcmpgefp. 2, 2, 3
  026258c  bf 26, 0x262684
  0262590  vsubfp 2, 31, 30
  0262594  lis 3, 38
  0262598  vspltisw 3, -1
  026259c  li 4, 20
  02625a0  addi 3, 3, 8196
  02625a4  li 5, 52
  02625a8  vslw 31, 3, 3
  02625ac  li 6, 24
  02625b0  lvlx 3, 4, 3
  02625b4  addi 4, 5, 16
  02625b8  lvlx 5, 5, 29
  02625bc  vspltw 3, 3, 0
  02625c0  li 5, 32
  02625c4  vaddfp 4, 2, 29
  02625c8  lvlx 2, 6, 3
  02625cc  lvrx 6, 4, 29
  02625d0  li 6, 36
  02625d4  lvlx 7, 5, 3
  02625d8  vor 5, 5, 6
  02625dc  vspltw 2, 2, 0
  02625e0  vspltisw 6, -1
  02625e4  vslw 6, 6, 6
  02625e8  vmaddfp 31, 4, 3, 31
  02625ec  vspltw 3, 7, 0
  02625f0  lvlx 4, 6, 3
  02625f4  vspltw 4, 4, 0
  02625f8  vaddfp 5, 5, 3
  02625fc  vspltw 3, 31, 0
  0262600  vcmpgtfp. 7, 3, 2
  0262604  vmaddfp 4, 5, 4, 6
  0262608  bt 26, 0x262614
  026260c  vsldoi 31, 2, 2, 0
  0262610  b 0x262624
  0262614  vspltisw 5, 0
  0262618  vcmpgefp. 3, 3, 5
  026261c  bf 26, 0x262624
  0262620  vspltisw 31, 0
  0262624  vspltw 3, 4, 0
  0262628  vspltw 31, 31, 0
  026262c  vcmpgtfp. 5, 3, 2
  0262630  bt 26, 0x26263c
  0262634  vsldoi 4, 2, 2, 0
  0262638  b 0x26264c
  026263c  vspltisw 5, 0
  0262640  vcmpgefp. 3, 3, 5
  0262644  bf 26, 0x26264c
  0262648  vspltisw 4, 0
  026264c  vspltw 3, 4, 0
  0262650  vspltisw 4, -1
  0262654  lvlx 5, 0, 30
  0262658  lis 3, 151
  026265c  vsubfp 2, 2, 5
  0262660  vslw 4, 4, 4
  0262664  addic 3, 3, -25376
  0262668  vmaddfp 3, 31, 3, 4
  026266c  vmaddfp 2, 2, 3, 5
  0262670  vspltw 2, 2, 0
  0262674  stvewx 2, 0, 30
  0262678  lbz 4, 5647(3)
  026267c  ori 4, 4, 2
  0262680  stb 4, 5647(3)
  0262684  li 0, 160
  0262688  lvx 28, 1, 0
  026268c  addic 0, 0, 16
  0262690  lvx 29, 1, 0
  0262694  addic 0, 0, 16
  0262698  lvx 30, 1, 0
  026269c  addic 0, 0, 16
  02626a0  lvx 31, 1, 0
  02626a4  ld 0, 304(1)
  02626a8  mtlr 0
  02626ac  lfd 29, 264(1)
  02626b0  lfd 30, 272(1)
  02626b4  lfd 31, 280(1)
  02626b8  ld 28, 232(1)
  02626bc  ld 29, 240(1)
  02626c0  ld 30, 248(1)
  02626c4  ld 31, 256(1)
  02626c8  addi 1, 1, 288
  02626cc  blr

M1379_UpdateFlight:   # 0x262730, 0x1ac8 bytes
  0262730  stdu 1, -768(1)
  0262734  mflr 0
  0262738  std 0, 784(1)
  026273c  stfd 20, 672(1)
  0262740  stfd 21, 680(1)
  0262744  stfd 22, 688(1)
  0262748  stfd 23, 696(1)
  026274c  stfd 24, 704(1)
  0262750  stfd 25, 712(1)
  0262754  stfd 26, 720(1)
  0262758  stfd 27, 728(1)
  026275c  stfd 28, 736(1)
  0262760  stfd 29, 744(1)
  0262764  stfd 30, 752(1)
  0262768  stfd 31, 760(1)
  026276c  lis 5, 38
  0262770  li 6, 0
  0262774  addi 5, 5, 9936
  0262778  std 31, 664(1)
  026277c  lis 7, 114
  0262780  std 30, 656(1)
  0262784  ori 31, 3, 0
  0262788  ori 30, 4, 0
  026278c  lfs 23, 0(5)
  0262790  stw 6, 192(1)
  0262794  stw 6, 196(1)
  0262798  stw 6, 200(1)
  026279c  stw 6, 204(1)
  02627a0  lfs 22, 4(5)
  02627a4  lfs 1, -3052(7)
  02627a8  lis 5, 122
  02627ac  fmuls 1, 1, 22
  02627b0  lfs 2, -15440(5)
  02627b4  lhz 5, 52(3)
  02627b8  lbz 7, 188(3)
  02627bc  rlwimi 5, 6, 0, 23, 23
  02627c0  cmpwi 7, 0
  02627c4  fmuls 1, 1, 2
  02627c8  sth 5, 52(3)
  02627cc  std 29, 648(1)
  02627d0  std 28, 640(1)
  02627d4  std 27, 632(1)
  02627d8  std 26, 624(1)
  02627dc  std 25, 616(1)
  02627e0  std 24, 608(1)
  02627e4  stfs 1, 200(1)
  02627e8  bf 2, 0x2629c8
  02627ec  lis 4, 122
  02627f0  lhz 3, 104(30)
  02627f4  extsh 5, 3
  02627f8  lwz 4, -15600(4)
  02627fc  cmpw 5, 4
  0262800  bf 1, 0x2629a0
  0262804  lis 29, 150
  0262808  addic 29, 29, 19008
  026280c  lwz 3, 180(29)
  0262810  rlwinm 3, 3, 0, 25, 25
  0262814  cmpwi 3, 0
  0262818  bt 2, 0x26288c
  026281c  lwz 3, 268(30)
  0262820  cmpwi 3, -1
  0262824  bt 2, 0x262868
  0262828  sldi 4, 3, 7
  026282c  sldi 6, 3, 4
  0262830  lis 5, 150
  0262834  subc 4, 4, 6
  0262838  addic 5, 5, 14176
  026283c  extsw 4, 4
  0262840  addc 4, 5, 4
  0262844  lwz 5, 136(4)
  0262848  cmpw 5, 31
  026284c  bf 2, 0x262868
  0262850  lbz 4, 116(4)
  0262854  cmpwi 4, 0
  0262858  bt 2, 0x262868
  026285c  extsw 3, 3
  0262860  bl 0x15cdb0
  0262864  nop
  0262868  li 6, -1
  026286c  li 3, 1
  0262870  li 4, 4
  0262874  ori 5, 31, 0
  0262878  stw 6, 268(30)
  026287c  bl 0x15d12c
  0262880  nop
  0262884  stw 3, 268(30)
  0262888  b 0x2628f0
  026288c  lwz 3, 184(29)
  0262890  rlwinm 3, 3, 0, 25, 25
  0262894  cmpwi 3, 0
  0262898  bt 2, 0x2628f0
  026289c  lwz 3, 268(30)
  02628a0  cmpwi 3, -1
  02628a4  bt 2, 0x2628e8
  02628a8  sldi 4, 3, 7
  02628ac  sldi 6, 3, 4
  02628b0  lis 5, 150
  02628b4  subc 4, 4, 6
  02628b8  addic 5, 5, 14176
  02628bc  extsw 4, 4
  02628c0  addc 4, 5, 4
  02628c4  lwz 5, 136(4)
  02628c8  cmpw 5, 31
  02628cc  bf 2, 0x2628e8
  02628d0  lbz 4, 116(4)
  02628d4  cmpwi 4, 0
  02628d8  bt 2, 0x2628e8
  02628dc  extsw 3, 3
  02628e0  bl 0x15cdb0
  02628e4  nop
  02628e8  li 3, -1
  02628ec  stw 3, 268(30)
  02628f0  lwz 3, 176(29)
  02628f4  rlwinm 3, 3, 0, 25, 25
  02628f8  cmpwi 3, 0
  02628fc  bt 2, 0x262940
  0262900  lis 3, 122
  0262904  lfs 1, 100(30)
  0262908  lis 4, 122
  026290c  lis 5, 122
  0262910  lfs 2, -15588(3)
  0262914  lfs 3, -15440(4)
  0262918  fmadds 2, 2, 3, 1
  026291c  stfs 2, 100(30)
  0262920  lfs 1, -15592(5)
  0262924  lfs 3, -15440(4)
  0262928  fmuls 1, 1, 3
  026292c  fcmpu 0, 2, 1
  0262930  cror 6, 0, 2
  0262934  bt 6, 0x2629d4
  0262938  stfs 1, 100(30)
  026293c  b 0x2629d4
  0262940  lis 3, 122
  0262944  lis 4, 122
  0262948  lis 5, 122
  026294c  lfs 3, -15440(3)
  0262950  lfs 1, -15604(4)
  0262954  lfs 4, -15596(5)
  0262958  fmuls 5, 1, 3
  026295c  lfs 2, 100(30)
  0262960  fmsubs 5, 4, 3, 5
  0262964  fcmpu 0, 2, 5
  0262968  cror 6, 1, 2
  026296c  bt 6, 0x262978
  0262970  fmadds 1, 1, 3, 2
  0262974  b 0x262998
  0262978  fmuls 1, 4, 3
  026297c  fcmpu 0, 2, 1
  0262980  cror 6, 0, 2
  0262984  bt 6, 0x262998
  0262988  fmsubs 1, 4, 3, 2
  026298c  lis 3, 122
  0262990  lfs 3, -15584(3)
  0262994  fmadds 1, 1, 3, 2
  0262998  stfs 1, 100(30)
  026299c  b 0x2629d4
  02629a0  lis 4, 122
  02629a4  lis 5, 122
  02629a8  lfs 1, 100(30)
  02629ac  addic 3, 3, 1
  02629b0  lfs 2, -15608(4)
  02629b4  lfs 3, -15440(5)
  02629b8  sth 3, 104(30)
  02629bc  fmadds 1, 2, 3, 1
  02629c0  stfs 1, 100(30)
  02629c4  b 0x2629d4
  02629c8  lis 3, 14545
  02629cc  ori 3, 3, 46871
  02629d0  stw 3, 100(30)
  02629d4  lis 3, 122
  02629d8  lhz 4, 104(30)
  02629dc  extsh 4, 4
  02629e0  lwz 3, -15580(3)
  02629e4  cmpw 4, 3
  02629e8  bf 1, 0x262bfc
  02629ec  lis 3, 122
  02629f0  lis 5, 151
  02629f4  lis 4, 122
  02629f8  lis 6, 150
  02629fc  addic 5, 5, -25376
  0262a00  addic 6, 6, 19008
  0262a04  lfs 31, -15420(3)
  0262a08  lfs 30, -15404(4)
  0262a0c  lfs 1, 7456(5)
  0262a10  lwz 3, 160(6)
  0262a14  lfs 2, 7460(5)
  0262a18  rlwinm 3, 3, 0, 22, 22
  0262a1c  stfs 1, 336(1)
  0262a20  cmpwi 3, 0
  0262a24  stfs 2, 340(1)
  0262a28  bt 2, 0x262a7c
  0262a2c  lis 3, 122
  0262a30  lis 4, 122
  0262a34  lis 5, 122
  0262a38  lfs 3, -15560(3)
  0262a3c  lfs 4, -15564(4)
  0262a40  fdivs 1, 1, 3
  0262a44  lis 3, 122
  0262a48  lis 4, 122
  0262a4c  lis 6, 122
  0262a50  lfs 3, -15552(3)
  0262a54  lfs 31, -15416(4)
  0262a58  fdivs 2, 2, 4
  0262a5c  lfs 4, -15556(5)
  0262a60  lfs 30, -15400(6)
  0262a64  fmuls 3, 3, 1
  0262a68  stfs 1, 336(1)
  0262a6c  stfs 3, 336(1)
  0262a70  fmuls 1, 4, 2
  0262a74  stfs 2, 340(1)
  0262a78  stfs 1, 340(1)
  0262a7c  addic 4, 1, 336
  0262a80  addic 5, 1, 340
  0262a84  ori 3, 31, 0
  0262a88  bl 0x262030
  0262a8c  lis 4, 122
  0262a90  lis 6, 122
  0262a94  lfs 1, 336(1)
  0262a98  addic 3, 30, 108
  0262a9c  fmr 4, 31
  0262aa0  addic 5, 30, 144
  0262aa4  lfs 2, -15428(4)
  0262aa8  lfs 3, -15424(6)
  0262aac  bl 0x109b40
  0262ab0  nop
  0262ab4  lis 4, 122
  0262ab8  lis 6, 122
  0262abc  lfs 1, 340(1)
  0262ac0  addic 5, 30, 148
  0262ac4  fmr 4, 30
  0262ac8  addic 3, 30, 112
  0262acc  lfs 2, -15412(4)
  0262ad0  lfs 3, -15408(6)
  0262ad4  bl 0x109b40
  0262ad8  nop
  0262adc  lis 4, 122
  0262ae0  lis 6, 122
  0262ae4  lfs 1, 108(30)
  0262ae8  lis 7, 122
  0262aec  lis 8, 122
  0262af0  addic 3, 30, 48
  0262af4  lfs 2, -15460(4)
  0262af8  addic 5, 30, 152
  0262afc  fmuls 1, 1, 2
  0262b00  lfs 2, -15396(6)
  0262b04  li 9, 0
  0262b08  lfs 3, -15392(7)
  0262b0c  lfs 5, -15388(8)
  0262b10  fmr 4, 5
  0262b14  bl 0x10a050
  0262b18  nop
  0262b1c  lis 3, 122
  0262b20  lfs 1, 52(30)
  0262b24  lfs 2, 112(30)
  0262b28  lfs 3, -15564(3)
  0262b2c  fmuls 2, 2, 3
  0262b30  bl 0x5025e0
  0262b34  nop
  0262b38  lis 3, 122
  0262b3c  stfs 1, 52(30)
  0262b40  lfs 1, 56(30)
  0262b44  lfs 2, 108(30)
  0262b48  lfs 3, -15560(3)
  0262b4c  fmuls 2, 2, 3
  0262b50  bl 0x5025e0
  0262b54  nop
  0262b58  lwz 3, 52(30)
  0262b5c  lis 4, 16306
  0262b60  stfs 1, 56(30)
  0262b64  srawi 5, 3, 31
  0262b68  lwz 6, 68(31)
  0262b6c  ori 9, 4, 47298
  0262b70  srwi 8, 5, 1
  0262b74  srawi 7, 6, 31
  0262b78  xor 4, 8, 3
  0262b7c  srwi 3, 7, 1
  0262b80  subc 4, 4, 5
  0262b84  xor 3, 3, 6
  0262b88  cmpw 4, 9
  0262b8c  subc 3, 3, 7
  0262b90  bf 1, 0x262ba4
  0262b94  lis 4, 16306
  0262b98  ori 4, 4, 47298
  0262b9c  stw 4, 52(30)
  0262ba0  b 0x262bc0
  0262ba4  lis 5, -16307
  0262ba8  ori 5, 5, 18238
  0262bac  cmpw 4, 5
  0262bb0  bf 0, 0x262bc0
  0262bb4  lis 4, -16462
  0262bb8  ori 4, 4, 47298
  0262bbc  stw 4, 52(30)
  0262bc0  lis 4, 16306
  0262bc4  ori 4, 4, 47298
  0262bc8  cmpw 3, 4
  0262bcc  bf 1, 0x262be0
  0262bd0  lis 3, 16306
  0262bd4  ori 3, 3, 47298
  0262bd8  stw 3, 68(31)
  0262bdc  b 0x262bfc
  0262be0  lis 4, -16307
  0262be4  ori 4, 4, 18238
  0262be8  cmpw 3, 4
  0262bec  bf 0, 0x262bfc
  0262bf0  lis 3, -16462
  0262bf4  ori 3, 3, 47298
  0262bf8  stw 3, 68(31)
  0262bfc  lis 3, 38
  0262c00  addi 4, 3, 9936
  0262c04  lwz 3, 272(30)
  0262c08  cmpwi 3, -1
  0262c0c  lfs 31, 8(4)
  0262c10  lfs 30, 12(4)
  0262c14  bt 2, 0x262c8c
  0262c18  lis 4, 165
  0262c1c  slwi 3, 3, 7
  0262c20  lwz 4, 7128(4)
  0262c24  addc 3, 4, 3
  0262c28  clrldi 3, 3, 32
  0262c2c  lfs 1, 4(3)
  0262c30  lfs 2, 20(3)
  0262c34  lfs 3, 36(3)
  0262c38  fadds 1, 1, 2
  0262c3c  lfs 2, 0(3)
  0262c40  lfs 4, 16(3)
  0262c44  fmuls 3, 3, 3
  0262c48  lfs 5, 32(3)
  0262c4c  fadds 2, 2, 4
  0262c50  lfs 4, 8(3)
  0262c54  lfs 6, 24(3)
  0262c58  lfs 7, 40(3)
  0262c5c  fadds 4, 4, 6
  0262c60  lfs 29, 48(3)
  0262c64  fmuls 1, 1, 1
  0262c68  lfs 28, 52(3)
  0262c6c  fmadds 3, 5, 5, 3
  0262c70  lfs 27, 56(3)
  0262c74  fmadds 1, 2, 2, 1
  0262c78  fmadds 31, 7, 7, 3
  0262c7c  fmadds 30, 4, 4, 1
  0262c80  fsqrts 31, 31
  0262c84  fsqrts 30, 30
  0262c88  b 0x262ca0
  0262c8c  lis 3, 122
  0262c90  addic 4, 3, -14736
  0262c94  lfs 29, -14736(3)
  0262c98  lfs 28, 4(4)
  0262c9c  lfs 27, 8(4)
  0262ca0  lfs 1, 16(31)
  0262ca4  lis 3, 122
  0262ca8  lfs 2, 20(31)
  0262cac  fsubs 3, 29, 1
  0262cb0  fsubs 4, 28, 2
  0262cb4  addic 4, 3, -14736
  0262cb8  lis 5, 38
  0262cbc  lfs 5, -14736(3)
  0262cc0  addi 5, 5, 9936
  0262cc4  fsubs 5, 1, 5
  0262cc8  lis 29, 115
  0262ccc  addic 29, 29, 22784
  0262cd0  fabs 7, 3
  0262cd4  fabs 6, 4
  0262cd8  stfs 3, 392(1)
  0262cdc  lfs 3, 4(4)
  0262ce0  stfs 4, 396(1)
  0262ce4  fsubs 3, 2, 3
  0262ce8  fsubs 4, 7, 6
  0262cec  fmuls 3, 3, 3
  0262cf0  stfs 4, 400(1)
  0262cf4  lwz 3, 392(1)
  0262cf8  lfs 4, 392(1)
  0262cfc  fmadds 26, 5, 5, 3
  0262d00  lwz 4, 396(1)
  0262d04  lfs 24, 56(30)
  0262d08  lfs 3, 396(1)
  0262d0c  fabs 4, 4
  0262d10  lfs 25, 16(5)
  0262d14  rlwinm 4, 4, 3, 29, 29
  0262d18  fabs 5, 3
  0262d1c  lwz 5, 400(1)
  0262d20  lfs 3, 400(1)
  0262d24  rlwimi 4, 5, 2, 30, 30
  0262d28  fsub 8, 3, 23
  0262d2c  fsub 3, 3, 23
  0262d30  rlwimi 4, 3, 4, 28, 28
  0262d34  fsqrts 26, 26
  0262d38  ori 3, 29, 0
  0262d3c  rlwimi 3, 4, 2, 26, 28
  0262d40  slwi 4, 4, 2
  0262d44  clrldi 3, 3, 32
  0262d48  fsel 6, 8, 4, 6
  0262d4c  lfsx 4, 29, 4
  0262d50  fsel 5, 3, 5, 7
  0262d54  lfs 3, 4(3)
  0262d58  fcmpu 0, 6, 23
  0262d5c  bt 1, 0x262d68
  0262d60  fmr 4, 23
  0262d64  b 0x262e80
  0262d68  fsubs 7, 5, 6
  0262d6c  fadds 5, 5, 6
  0262d70  addic 3, 1, 16
  0262d74  li 7, 2
  0262d78  addic 4, 3, 548
  0262d7c  addic 5, 3, 564
  0262d80  mtctr 7
  0262d84  fdivs 5, 7, 5
  0262d88  fmuls 6, 5, 5
  0262d8c  stfs 5, 576(1)
  0262d90  stfs 5, 568(1)
  0262d94  stfs 5, 572(1)
  0262d98  stfs 5, 564(1)
  0262d9c  lfs 8, 576(1)
  0262da0  lfs 9, 568(1)
  0262da4  lfs 10, 572(1)
  0262da8  fmuls 7, 6, 6
  0262dac  fmuls 9, 9, 6
  0262db0  fmuls 8, 8, 7
  0262db4  fmuls 5, 7, 7
  0262db8  fmuls 7, 10, 7
  0262dbc  stfs 9, 568(1)
  0262dc0  fmuls 6, 8, 6
  0262dc4  stfs 7, 572(1)
  0262dc8  stfs 6, 576(1)
  0262dcc  lfs 6, 548(3)
  0262dd0  fmuls 6, 6, 5
  0262dd4  stfs 6, 564(3)
  0262dd8  lfs 6, 4(4)
  0262ddc  addic 3, 3, 8
  0262de0  addic 4, 4, 8
  0262de4  fmuls 6, 6, 5
  0262de8  stfs 6, 4(5)
  0262dec  addic 5, 5, 8
  0262df0  bdnz 0x262dcc
  0262df4  li 5, 4
  0262df8  ori 3, 1, 0
  0262dfc  mtctr 5
  0262e00  lis 4, 115
  0262e04  addic 5, 3, 564
  0262e08  addic 4, 4, 22752
  0262e0c  ori 6, 5, 0
  0262e10  lfs 5, 564(3)
  0262e14  lfs 6, 0(4)
  0262e18  fmuls 5, 5, 6
  0262e1c  lfs 6, 4(4)
  0262e20  addic 4, 4, 8
  0262e24  stfs 5, 564(3)
  0262e28  lfs 5, 4(5)
  0262e2c  addic 3, 3, 8
  0262e30  fmuls 5, 5, 6
  0262e34  stfs 5, 4(5)
  0262e38  addic 5, 5, 8
  0262e3c  bdnz 0x262e10
  0262e40  fmr 5, 23
  0262e44  ori 3, 1, 0
  0262e48  mtctr 7
  0262e4c  lfs 6, 564(3)
  0262e50  fadds 5, 5, 6
  0262e54  addic 3, 3, 16
  0262e58  lfs 6, 4(6)
  0262e5c  lfs 7, 8(6)
  0262e60  lfs 8, 12(6)
  0262e64  addic 6, 6, 16
  0262e68  fadds 5, 5, 6
  0262e6c  fadds 5, 5, 7
  0262e70  fadds 5, 5, 8
  0262e74  bdnz 0x262e4c
  0262e78  fadds 5, 5, 25
  0262e7c  fmadds 4, 5, 4, 3
  0262e80  lis 3, 38
  0262e84  fmr 3, 24
  0262e88  addi 3, 3, 9936
  0262e8c  lfs 21, 20(3)
  0262e90  fcmpu 0, 26, 21
  0262e94  cror 6, 0, 2
  0262e98  bt 6, 0x262f00
  0262e9c  fsubs 1, 26, 21
  0262ea0  fsubs 2, 30, 21
  0262ea4  lis 3, 38
  0262ea8  addi 3, 3, 9936
  0262eac  fdivs 3, 1, 2
  0262eb0  lfs 5, 24(3)
  0262eb4  fmr 1, 4
  0262eb8  fmr 2, 24
  0262ebc  fsub 4, 3, 23
  0262ec0  fsel 3, 4, 3, 23
  0262ec4  fsub 4, 5, 3
  0262ec8  fsel 3, 4, 3, 5
  0262ecc  fmuls 3, 3, 3
  0262ed0  fmuls 3, 3, 3
  0262ed4  fmuls 3, 3, 3
  0262ed8  fmuls 20, 3, 3
  0262edc  bl 0x5025e0
  0262ee0  nop
  0262ee4  fmuls 2, 20, 1
  0262ee8  fmr 1, 24
  0262eec  bl 0x502578
  0262ef0  nop
  0262ef4  fmr 3, 1
  0262ef8  lfs 1, 16(31)
  0262efc  lfs 2, 20(31)
  0262f00  stfs 3, 56(30)
  0262f04  fmr 4, 2
  0262f08  fmr 3, 1
  0262f0c  fsubs 5, 28, 4
  0262f10  fsubs 6, 29, 3
  0262f14  fabs 8, 5
  0262f18  fabs 7, 6
  0262f1c  stfs 6, 380(1)
  0262f20  stfs 5, 384(1)
  0262f24  lfs 24, 72(31)
  0262f28  fsubs 5, 7, 8
  0262f2c  stfs 5, 388(1)
  0262f30  lwz 3, 380(1)
  0262f34  lfs 5, 380(1)
  0262f38  lwz 4, 384(1)
  0262f3c  lfs 6, 384(1)
  0262f40  lwz 5, 388(1)
  0262f44  rlwinm 4, 4, 3, 29, 29
  0262f48  fabs 9, 6
  0262f4c  lfs 6, 388(1)
  0262f50  fabs 5, 5
  0262f54  rlwimi 4, 5, 2, 30, 30
  0262f58  fsub 10, 6, 23
  0262f5c  fsub 11, 6, 23
  0262f60  rlwimi 4, 3, 4, 28, 28
  0262f64  ori 3, 29, 0
  0262f68  rlwimi 3, 4, 2, 26, 28
  0262f6c  slwi 4, 4, 2
  0262f70  clrldi 3, 3, 32
  0262f74  fsel 8, 10, 5, 8
  0262f78  lfsx 5, 29, 4
  0262f7c  fsel 7, 11, 9, 7
  0262f80  lfs 6, 4(3)
  0262f84  fcmpu 0, 8, 23
  0262f88  bt 1, 0x262f94
  0262f8c  fmr 6, 23
  0262f90  b 0x2630ac
  0262f94  fsubs 9, 7, 8
  0262f98  fadds 7, 7, 8
  0262f9c  addic 3, 1, 16
  0262fa0  li 7, 2
  0262fa4  addic 5, 3, 532
  0262fa8  addic 4, 3, 516
  0262fac  mtctr 7
  0262fb0  fdivs 7, 9, 7
  0262fb4  fmuls 8, 7, 7
  0262fb8  stfs 7, 544(1)
  0262fbc  stfs 7, 536(1)
  0262fc0  stfs 7, 540(1)
  0262fc4  stfs 7, 532(1)
  0262fc8  lfs 10, 544(1)
  0262fcc  lfs 11, 536(1)
  0262fd0  lfs 12, 540(1)
  0262fd4  fmuls 9, 8, 8
  0262fd8  fmuls 11, 11, 8
  0262fdc  fmuls 10, 10, 9
  0262fe0  fmuls 7, 9, 9
  0262fe4  fmuls 9, 12, 9
  0262fe8  stfs 11, 536(1)
  0262fec  fmuls 8, 10, 8
  0262ff0  stfs 9, 540(1)
  0262ff4  stfs 8, 544(1)
  0262ff8  lfs 8, 516(3)
  0262ffc  fmuls 8, 8, 7
  0263000  stfs 8, 532(3)
  0263004  lfs 8, 4(4)
  0263008  addic 4, 4, 8
  026300c  fmuls 8, 8, 7
  0263010  addic 3, 3, 8
  0263014  stfs 8, 4(5)
  0263018  addic 5, 5, 8
  026301c  bdnz 0x262ff8
  0263020  li 5, 4
  0263024  ori 3, 1, 0
  0263028  mtctr 5
  026302c  lis 4, 115
  0263030  addic 5, 3, 532
  0263034  addic 4, 4, 22752
  0263038  ori 6, 5, 0
  026303c  lfs 7, 532(3)
  0263040  lfs 8, 0(4)
  0263044  fmuls 7, 7, 8
  0263048  lfs 8, 4(4)
  026304c  addic 4, 4, 8
  0263050  stfs 7, 532(3)
  0263054  lfs 7, 4(5)
  0263058  addic 3, 3, 8
  026305c  fmuls 7, 7, 8
  0263060  stfs 7, 4(5)
  0263064  addic 5, 5, 8
  0263068  bdnz 0x26303c
  026306c  ori 3, 1, 0
  0263070  fmr 7, 23
  0263074  mtctr 7
  0263078  lfs 8, 532(3)
  026307c  fadds 7, 7, 8
  0263080  lfs 8, 4(6)
  0263084  addic 3, 3, 16
  0263088  lfs 9, 8(6)
  026308c  lfs 10, 12(6)
  0263090  addic 6, 6, 16
  0263094  fadds 7, 7, 8
  0263098  fadds 7, 7, 9
  026309c  fadds 7, 7, 10
  02630a0  bdnz 0x263078
  02630a4  fadds 7, 7, 25
  02630a8  fmadds 6, 7, 5, 6
  02630ac  fcmpu 0, 26, 21
  02630b0  fmr 5, 24
  02630b4  cror 6, 0, 2
  02630b8  bt 6, 0x263128
  02630bc  fsubs 1, 26, 21
  02630c0  fsubs 2, 30, 21
  02630c4  lis 3, 38
  02630c8  addi 3, 3, 9936
  02630cc  fdivs 3, 1, 2
  02630d0  lfs 4, 24(3)
  02630d4  fmr 1, 6
  02630d8  fmr 2, 24
  02630dc  fsub 5, 3, 23
  02630e0  fsel 3, 5, 3, 23
  02630e4  fsub 5, 4, 3
  02630e8  fsel 3, 5, 3, 4
  02630ec  fmuls 3, 3, 3
  02630f0  fmuls 3, 3, 3
  02630f4  fmuls 3, 3, 3
  02630f8  fmuls 30, 3, 3
  02630fc  bl 0x5025e0
  0263100  nop
  0263104  fmuls 2, 30, 1
  0263108  fmr 1, 24
  026310c  bl 0x502578
  0263110  nop
  0263114  lfs 3, 16(31)
  0263118  lfs 4, 20(31)
  026311c  fmr 5, 1
  0263120  fmr 1, 3
  0263124  fmr 2, 4
  0263128  fsubs 4, 4, 28
  026312c  fsubs 3, 3, 29
  0263130  lfs 6, 24(31)
  0263134  stfs 5, 72(31)
  0263138  fmr 5, 6
  026313c  lfs 30, 52(30)
  0263140  fmuls 4, 4, 4
  0263144  fsubs 6, 27, 5
  0263148  fmadds 3, 3, 3, 4
  026314c  stfs 6, 372(1)
  0263150  fsqrts 4, 3
  0263154  fabs 3, 6
  0263158  fcmpu 1, 3, 21
  026315c  fabs 7, 4
  0263160  stfs 4, 368(1)
  0263164  lwz 3, 372(1)
  0263168  lfs 6, 372(1)
  026316c  rlwinm 3, 3, 3, 29, 29
  0263170  fabs 9, 6
  0263174  fsubs 4, 7, 3
  0263178  stfs 4, 376(1)
  026317c  lwz 4, 368(1)
  0263180  lfs 4, 368(1)
  0263184  lwz 5, 376(1)
  0263188  fabs 8, 4
  026318c  lfs 4, 376(1)
  0263190  rlwimi 3, 5, 2, 30, 30
  0263194  fsub 6, 4, 23
  0263198  fsub 10, 4, 23
  026319c  rlwimi 3, 4, 4, 28, 28
  02631a0  ori 4, 29, 0
  02631a4  rlwimi 4, 3, 2, 26, 28
  02631a8  slwi 3, 3, 2
  02631ac  clrldi 4, 4, 32
  02631b0  fsel 8, 6, 8, 3
  02631b4  lfsx 4, 29, 3
  02631b8  lfs 6, 4(4)
  02631bc  fsel 7, 10, 9, 7
  02631c0  fcmpu 0, 8, 23
  02631c4  bt 1, 0x2631d0
  02631c8  fmr 6, 23
  02631cc  b 0x2632e8
  02631d0  fsubs 9, 7, 8
  02631d4  fadds 7, 7, 8
  02631d8  addic 3, 1, 16
  02631dc  li 7, 2
  02631e0  addic 4, 3, 484
  02631e4  addic 5, 3, 500
  02631e8  mtctr 7
  02631ec  fdivs 7, 9, 7
  02631f0  fmuls 8, 7, 7
  02631f4  stfs 7, 512(1)
  02631f8  stfs 7, 504(1)
  02631fc  stfs 7, 508(1)
  0263200  stfs 7, 500(1)
  0263204  lfs 10, 512(1)
  0263208  lfs 11, 504(1)
  026320c  lfs 12, 508(1)
  0263210  fmuls 9, 8, 8
  0263214  fmuls 11, 11, 8
  0263218  fmuls 10, 10, 9
  026321c  fmuls 7, 9, 9
  0263220  fmuls 9, 12, 9
  0263224  stfs 11, 504(1)
  0263228  fmuls 8, 10, 8
  026322c  stfs 9, 508(1)
  0263230  stfs 8, 512(1)
  0263234  lfs 8, 484(3)
  0263238  fmuls 8, 8, 7
  026323c  stfs 8, 500(3)
  0263240  lfs 8, 4(4)
  0263244  addic 3, 3, 8
  0263248  addic 4, 4, 8
  026324c  fmuls 8, 8, 7
  0263250  stfs 8, 4(5)
  0263254  addic 5, 5, 8
  0263258  bdnz 0x263234
  026325c  li 5, 4
  0263260  ori 3, 1, 0
  0263264  mtctr 5
  0263268  lis 4, 115
  026326c  addic 5, 3, 500
  0263270  addic 4, 4, 22752
  0263274  ori 6, 5, 0
  0263278  lfs 7, 500(3)
  026327c  lfs 8, 0(4)
  0263280  fmuls 7, 7, 8
  0263284  lfs 8, 4(4)
  0263288  addic 4, 4, 8
  026328c  stfs 7, 500(3)
  0263290  lfs 7, 4(5)
  0263294  addic 3, 3, 8
  0263298  fmuls 7, 7, 8
  026329c  stfs 7, 4(5)
  02632a0  addic 5, 5, 8
  02632a4  bdnz 0x263278
  02632a8  fmr 7, 23
  02632ac  ori 3, 1, 0
  02632b0  mtctr 7
  02632b4  lfs 8, 500(3)
  02632b8  fadds 7, 7, 8
  02632bc  addic 3, 3, 16
  02632c0  lfs 8, 4(6)
  02632c4  lfs 9, 8(6)
  02632c8  lfs 10, 12(6)
  02632cc  addic 6, 6, 16
  02632d0  fadds 7, 7, 8
  02632d4  fadds 7, 7, 9
  02632d8  fadds 7, 7, 10
  02632dc  bdnz 0x2632b4
  02632e0  fadds 7, 7, 25
  02632e4  fmadds 6, 7, 4, 6
  02632e8  fmr 4, 30
  02632ec  bf 5, 0x263358
  02632f0  fsubs 1, 3, 21
  02632f4  fsubs 2, 31, 21
  02632f8  lis 3, 38
  02632fc  addi 3, 3, 9936
  0263300  fdivs 3, 1, 2
  0263304  lfs 4, 24(3)
  0263308  fneg 1, 6
  026330c  fmr 2, 30
  0263310  fsub 5, 3, 23
  0263314  fsel 3, 5, 3, 23
  0263318  fsub 5, 4, 3
  026331c  fsel 3, 5, 3, 4
  0263320  fmuls 3, 3, 3
  0263324  fmuls 3, 3, 3
  0263328  fmuls 3, 3, 3
  026332c  fmuls 26, 3, 3
  0263330  bl 0x5025e0
  0263334  nop
  0263338  fmuls 2, 26, 1
  026333c  fmr 1, 30
  0263340  bl 0x502578
  0263344  nop
  0263348  fmr 4, 1
  026334c  lfs 5, 24(31)
  0263350  lfs 1, 16(31)
  0263354  lfs 2, 20(31)
  0263358  fsubs 2, 2, 28
  026335c  fsubs 1, 1, 29
  0263360  fmuls 2, 2, 2
  0263364  fmadds 1, 1, 1, 2
  0263368  fsubs 2, 27, 5
  026336c  fsqrts 3, 1
  0263370  stfs 2, 360(1)
  0263374  stfs 4, 52(30)
  0263378  lfs 27, 68(31)
  026337c  fabs 1, 2
  0263380  lwz 3, 360(1)
  0263384  lfs 2, 360(1)
  0263388  rlwinm 3, 3, 3, 29, 29
  026338c  fabs 2, 2
  0263390  fcmpu 1, 1, 21
  0263394  fabs 6, 3
  0263398  stfs 3, 356(1)
  026339c  fsubs 3, 6, 1
  02633a0  stfs 3, 364(1)
  02633a4  lwz 4, 356(1)
  02633a8  lfs 3, 356(1)
  02633ac  lwz 5, 364(1)
  02633b0  fabs 5, 3
  02633b4  lfs 3, 364(1)
  02633b8  rlwimi 3, 5, 2, 30, 30
  02633bc  fsub 7, 3, 23
  02633c0  fsub 3, 3, 23
  02633c4  rlwimi 3, 4, 4, 28, 28
  02633c8  ori 4, 29, 0
  02633cc  rlwimi 4, 3, 2, 26, 28
  02633d0  slwi 3, 3, 2
  02633d4  clrldi 4, 4, 32
  02633d8  fsel 5, 7, 5, 1
  02633dc  lfsx 29, 29, 3
  02633e0  fsel 3, 3, 2, 6
  02633e4  lfs 2, 4(4)
  02633e8  fcmpu 0, 5, 23
  02633ec  bt 1, 0x2633f8
  02633f0  fmr 29, 23
  02633f4  b 0x263510
  02633f8  fsubs 6, 3, 5
  02633fc  fadds 3, 3, 5
  0263400  addic 3, 1, 16
  0263404  li 7, 2
  0263408  addic 4, 3, 452
  026340c  addic 5, 3, 468
  0263410  mtctr 7
  0263414  fdivs 3, 6, 3
  0263418  fmuls 5, 3, 3
  026341c  stfs 3, 480(1)
  0263420  stfs 3, 472(1)
  0263424  stfs 3, 476(1)
  0263428  stfs 3, 468(1)
  026342c  lfs 7, 480(1)
  0263430  lfs 8, 472(1)
  0263434  lfs 9, 476(1)
  0263438  fmuls 6, 5, 5
  026343c  fmuls 8, 8, 5
  0263440  fmuls 7, 7, 6
  0263444  fmuls 3, 6, 6
  0263448  fmuls 6, 9, 6
  026344c  stfs 8, 472(1)
  0263450  fmuls 5, 7, 5
  0263454  stfs 6, 476(1)
  0263458  stfs 5, 480(1)
  026345c  lfs 5, 452(3)
  0263460  fmuls 5, 5, 3
  0263464  stfs 5, 468(3)
  0263468  lfs 5, 4(4)
  026346c  addic 3, 3, 8
  0263470  addic 4, 4, 8
  0263474  fmuls 5, 5, 3
  0263478  stfs 5, 4(5)
  026347c  addic 5, 5, 8
  0263480  bdnz 0x26345c
  0263484  li 5, 4
  0263488  ori 3, 1, 0
  026348c  mtctr 5
  0263490  lis 4, 115
  0263494  addic 5, 3, 468
  0263498  addic 4, 4, 22752
  026349c  ori 6, 5, 0
  02634a0  lfs 3, 468(3)
  02634a4  lfs 5, 0(4)
  02634a8  fmuls 3, 3, 5
  02634ac  lfs 5, 4(4)
  02634b0  addic 4, 4, 8
  02634b4  stfs 3, 468(3)
  02634b8  lfs 3, 4(5)
  02634bc  addic 3, 3, 8
  02634c0  fmuls 3, 3, 5
  02634c4  stfs 3, 4(5)
  02634c8  addic 5, 5, 8
  02634cc  bdnz 0x2634a0
  02634d0  fmr 3, 23
  02634d4  ori 3, 1, 0
  02634d8  mtctr 7
  02634dc  lfs 5, 468(3)
  02634e0  fadds 3, 3, 5
  02634e4  addic 3, 3, 16
  02634e8  lfs 5, 4(6)
  02634ec  lfs 6, 8(6)
  02634f0  lfs 7, 12(6)
  02634f4  addic 6, 6, 16
  02634f8  fadds 3, 3, 5
  02634fc  fadds 3, 3, 6
  0263500  fadds 3, 3, 7
  0263504  bdnz 0x2634dc
  0263508  fadds 3, 3, 25
  026350c  fmadds 29, 3, 29, 2
  0263510  fmr 2, 27
  0263514  bf 5, 0x263578
  0263518  fsubs 1, 1, 21
  026351c  fsubs 2, 31, 21
  0263520  lis 3, 38
  0263524  addi 3, 3, 9936
  0263528  fdivs 3, 1, 2
  026352c  lfs 4, 24(3)
  0263530  fneg 1, 29
  0263534  fmr 2, 27
  0263538  fsub 5, 3, 23
  026353c  fsel 3, 5, 3, 23
  0263540  fsub 5, 4, 3
  0263544  fsel 3, 5, 3, 4
  0263548  fmuls 3, 3, 3
  026354c  fmuls 3, 3, 3
  0263550  fmuls 3, 3, 3
  0263554  fmuls 31, 3, 3
  0263558  bl 0x5025e0
  026355c  nop
  0263560  fmuls 2, 31, 1
  0263564  fmr 1, 27
  0263568  bl 0x502578
  026356c  nop
  0263570  fmr 2, 1
  0263574  lfs 4, 52(30)
  0263578  stfs 2, 68(31)
  026357c  fneg 3, 4
  0263580  lfs 1, 100(30)
  0263584  addic 3, 1, 208
  0263588  lfs 2, 56(30)
  026358c  bl 0xfe610
  0263590  nop
  0263594  lfs 3, 212(1)
  0263598  lfs 1, 208(1)
  026359c  fmuls 2, 3, 3
  02635a0  lfs 4, 216(1)
  02635a4  lfs 5, 100(30)
  02635a8  lfs 6, 112(30)
  02635ac  lfs 7, 108(30)
  02635b0  lfs 8, 16(31)
  02635b4  lfs 9, 20(31)
  02635b8  fmadds 2, 1, 1, 2
  02635bc  lfs 10, 24(31)
  02635c0  lbz 3, 188(31)
  02635c4  lbz 4, 96(30)
  02635c8  fmadds 2, 4, 4, 2
  02635cc  fsqrts 11, 2
  02635d0  fcmpu 0, 11, 23
  02635d4  bf 2, 0x2635ec
  02635d8  fmr 11, 23
  02635dc  lfs 2, 220(1)
  02635e0  fmr 12, 11
  02635e4  fmr 13, 12
  02635e8  b 0x263644
  02635ec  frsqrte 11, 2
  02635f0  lis 5, 38
  02635f4  addi 5, 5, 9936
  02635f8  lfs 12, 28(5)
  02635fc  lfs 13, 24(5)
  0263600  lfs 30, 220(1)
  0263604  fmuls 0, 2, 11
  0263608  fmuls 31, 12, 11
  026360c  fnmsubs 0, 0, 11, 13
  0263610  fmadds 11, 0, 31, 11
  0263614  fmuls 0, 2, 11
  0263618  fmuls 31, 12, 11
  026361c  fnmsubs 0, 0, 11, 13
  0263620  fmadds 11, 0, 31, 11
  0263624  fmuls 0, 2, 11
  0263628  fmuls 12, 12, 11
  026362c  fmr 2, 30
  0263630  fnmsubs 13, 0, 11, 13
  0263634  fmadds 11, 13, 12, 11
  0263638  fmuls 13, 1, 11
  026363c  fmuls 12, 3, 11
  0263640  fmuls 11, 4, 11
  0263644  stfs 13, 16(30)
  0263648  stfs 12, 20(30)
  026364c  cmpwi 3, 0
  0263650  stfs 11, 24(30)
  0263654  stfs 2, 28(30)
  0263658  bf 2, 0x263674
  026365c  fadds 1, 8, 1
  0263660  fadds 2, 9, 3
  0263664  fadds 3, 10, 4
  0263668  stfs 1, 16(31)
  026366c  stfs 2, 20(31)
  0263670  stfs 3, 24(31)
  0263674  lis 3, 122
  0263678  lis 5, 122
  026367c  lfs 1, -15596(3)
  0263680  lfs 3, -15592(5)
  0263684  fsubs 2, 5, 1
  0263688  fsubs 1, 3, 1
  026368c  li 3, 0
  0263690  lis 6, 122
  0263694  lis 7, 122
  0263698  lis 8, 122
  026369c  stw 3, 268(1)
  02636a0  stw 3, 276(1)
  02636a4  lis 10, 122
  02636a8  fsub 3, 2, 23
  02636ac  stw 3, 284(1)
  02636b0  lis 9, 122
  02636b4  lis 11, 122
  02636b8  lis 12, 122
  02636bc  lis 27, 122
  02636c0  lis 28, 122
  02636c4  rlwinm 3, 4, 4, 20, 27
  02636c8  fsel 2, 3, 2, 23
  02636cc  lis 4, 122
  02636d0  addc 3, 1, 3
  02636d4  lis 26, 122
  02636d8  clrldi 25, 3, 32
  02636dc  lis 24, 122
  02636e0  addic 3, 30, 180
  02636e4  addic 5, 30, 200
  02636e8  fdivs 31, 2, 1
  02636ec  stfs 31, 196(30)
  02636f0  lfs 1, -15288(6)
  02636f4  lfs 2, -15548(7)
  02636f8  fnmsubs 1, 6, 1, 2
  02636fc  lfs 2, -15280(8)
  0263700  lfs 3, -15456(10)
  0263704  lfs 4, -15284(9)
  0263708  lfs 5, -15544(11)
  026370c  fmuls 3, 7, 3
  0263710  lfs 7, -15444(12)
  0263714  fmadds 4, 6, 4, 5
  0263718  lfs 5, -15540(27)
  026371c  fnmsubs 1, 2, 31, 1
  0263720  fmuls 2, 5, 7
  0263724  lfs 5, -15536(28)
  0263728  lfs 6, -15324(4)
  026372c  fmuls 3, 3, 7
  0263730  fmuls 5, 5, 7
  0263734  fmuls 4, 4, 7
  0263738  fmuls 1, 1, 7
  026373c  stfs 2, 272(1)
  0263740  fmr 2, 6
  0263744  stfs 3, 260(1)
  0263748  stfs 4, 264(1)
  026374c  stfs 5, 280(1)
  0263750  stfs 1, 256(1)
  0263754  lfs 1, 256(25)
  0263758  lfs 3, -15320(26)
  026375c  lfs 4, -15316(24)
  0263760  bl 0x109b40
  0263764  nop
  0263768  lbz 3, 96(30)
  026376c  lis 4, 122
  0263770  lis 7, 122
  0263774  slwi 3, 3, 4
  0263778  lis 8, 122
  026377c  addc 3, 1, 3
  0263780  lfs 2, -15312(4)
  0263784  addic 5, 30, 204
  0263788  clrldi 6, 3, 32
  026378c  addic 3, 30, 184
  0263790  lfs 1, 260(6)
  0263794  lfs 3, -15308(7)
  0263798  lfs 4, -15304(8)
  026379c  bl 0x109b40
  02637a0  nop
  02637a4  lbz 3, 96(30)
  02637a8  lis 4, 122
  02637ac  slwi 3, 3, 4
  02637b0  lis 6, 122
  02637b4  addc 3, 1, 3
  02637b8  addic 5, 30, 208
  02637bc  clrldi 7, 3, 32
  02637c0  lfs 2, -15300(4)
  02637c4  addic 3, 30, 188
  02637c8  lis 4, 122
  02637cc  lfs 3, -15296(6)
  02637d0  lfs 1, 264(7)
  02637d4  lfs 4, -15292(4)
  02637d8  bl 0x109b40
  02637dc  nop
  02637e0  lfs 30, 180(30)
  02637e4  addic 3, 1, 288
  02637e8  lfs 29, 184(30)
  02637ec  addic 4, 30, 48
  02637f0  lfs 28, 188(30)
  02637f4  bl 0x500b64
  02637f8  nop
  02637fc  lfs 1, 304(1)
  0263800  lfs 2, 308(1)
  0263804  fmuls 1, 1, 29
  0263808  lfs 3, 312(1)
  026380c  fmuls 2, 2, 29
  0263810  lfs 4, 288(1)
  0263814  fmuls 3, 3, 29
  0263818  lfs 5, 292(1)
  026381c  lfs 6, 296(1)
  0263820  lfs 7, 320(1)
  0263824  addic 3, 1, 240
  0263828  lfs 8, 324(1)
  026382c  lfs 9, 328(1)
  0263830  fmadds 1, 4, 30, 1
  0263834  fmadds 2, 5, 30, 2
  0263838  lfs 4, 16(31)
  026383c  fmadds 3, 6, 30, 3
  0263840  lfs 5, 20(31)
  0263844  lfs 6, 24(31)
  0263848  fmadds 1, 7, 28, 1
  026384c  fmadds 2, 8, 28, 2
  0263850  lfs 7, 28(31)
  0263854  fmadds 3, 9, 28, 3
  0263858  stfs 7, 252(1)
  026385c  fadds 1, 4, 1
  0263860  fadds 2, 5, 2
  0263864  fadds 3, 6, 3
  0263868  stfs 1, 240(1)
  026386c  stfs 2, 244(1)
  0263870  stfs 3, 248(1)
  0263874  bl 0x47b98
  0263878  nop
  026387c  lis 3, 122
  0263880  lfs 1, 48(30)
  0263884  lis 4, 122
  0263888  lfs 2, 108(30)
  026388c  lfs 3, -15528(3)
  0263890  lfs 4, -15532(4)
  0263894  fmuls 1, 1, 3
  0263898  fmuls 2, 2, 4
  026389c  bl 0x502578
  02638a0  nop
  02638a4  lis 3, 122
  02638a8  fmr 30, 1
  02638ac  lfs 1, 52(30)
  02638b0  lfs 2, -15524(3)
  02638b4  bl 0x502578
  02638b8  nop
  02638bc  lis 3, 122
  02638c0  lfs 2, 112(30)
  02638c4  lfs 3, -15564(3)
  02638c8  fmuls 2, 2, 3
  02638cc  bl 0x5025e0
  02638d0  nop
  02638d4  lis 4, 122
  02638d8  lis 6, 122
  02638dc  fmr 29, 1
  02638e0  lis 7, 122
  02638e4  lfs 28, 56(30)
  02638e8  addic 3, 30, 32
  02638ec  fmr 1, 30
  02638f0  addic 5, 30, 160
  02638f4  lfs 2, -15360(4)
  02638f8  lfs 3, -15356(6)
  02638fc  li 9, 0
  0263900  lfs 4, -15352(7)
  0263904  bl 0x10a050
  0263908  nop
  026390c  lis 4, 122
  0263910  lis 6, 122
  0263914  fmr 1, 29
  0263918  lis 7, 122
  026391c  addic 3, 30, 36
  0263920  addic 5, 30, 164
  0263924  lfs 2, -15348(4)
  0263928  lfs 3, -15344(6)
  026392c  li 9, 0
  0263930  lfs 4, -15340(7)
  0263934  bl 0x10a050
  0263938  nop
  026393c  lis 4, 122
  0263940  lis 6, 122
  0263944  fmr 1, 28
  0263948  lis 7, 122
  026394c  addic 3, 30, 40
  0263950  addic 5, 30, 168
  0263954  lfs 2, -15336(4)
  0263958  lfs 3, -15332(6)
  026395c  li 9, 0
  0263960  lfs 4, -15328(7)
  0263964  bl 0x10a050
  0263968  nop
  026396c  lfs 1, 32(30)
  0263970  lfs 2, 40(30)
  0263974  addic 3, 1, 224
  0263978  stfs 1, 224(1)
  026397c  lfs 1, 36(30)
  0263980  stfs 2, 232(1)
  0263984  stfs 1, 228(1)
  0263988  bl 0x47c08
  026398c  nop
  0263990  lis 3, 122
  0263994  lis 4, 122
  0263998  lis 5, 122
  026399c  lis 6, 122
  02639a0  lfs 1, -15272(3)
  02639a4  lfs 5, -15276(4)
  02639a8  lis 4, 122
  02639ac  lfs 2, -15268(5)
  02639b0  fsubs 1, 1, 5
  02639b4  addic 3, 30, 176
  02639b8  lfs 3, -15264(6)
  02639bc  addic 5, 30, 192
  02639c0  lfs 4, -15260(4)
  02639c4  fmadds 1, 1, 31, 5
  02639c8  bl 0x109b40
  02639cc  nop
  02639d0  lis 3, 38
  02639d4  lfs 1, 176(30)
  02639d8  addi 28, 3, 9936
  02639dc  lfs 2, 28(28)
  02639e0  lfs 3, 32(28)
  02639e4  fmuls 1, 1, 2
  02639e8  lfs 4, 56(28)
  02639ec  lfs 2, 36(28)
  02639f0  lis 3, 150
  02639f4  fsubs 5, 3, 1
  02639f8  fadds 4, 1, 4
  02639fc  fsubs 6, 2, 1
  0263a00  addic 3, 3, -12416
  0263a04  fsub 7, 1, 5
  0263a08  fsubs 3, 3, 4
  0263a0c  fsubs 2, 2, 4
  0263a10  fsel 1, 7, 5, 1
  0263a14  fsub 5, 4, 3
  0263a18  lfs 7, 40(28)
  0263a1c  fsub 9, 6, 1
  0263a20  fsel 3, 5, 3, 4
  0263a24  lfs 4, 44(28)
  0263a28  lfs 5, 48(28)
  0263a2c  fsel 1, 9, 6, 1
  0263a30  fsub 6, 2, 3
  0263a34  fmuls 8, 1, 1
  0263a38  fsel 2, 6, 2, 3
  0263a3c  lfs 3, 52(28)
  0263a40  fmuls 6, 8, 1
  0263a44  fmuls 9, 2, 2
  0263a48  fmuls 10, 8, 6
  0263a4c  fmadds 1, 6, 7, 1
  0263a50  fmuls 6, 9, 2
  0263a54  fmuls 11, 8, 10
  0263a58  fmadds 1, 10, 4, 1
  0263a5c  fmuls 10, 9, 6
  0263a60  fmadds 2, 6, 7, 2
  0263a64  fmuls 6, 8, 11
  0263a68  fmadds 1, 11, 5, 1
  0263a6c  fmuls 7, 9, 10
  0263a70  fmadds 2, 10, 4, 2
  0263a74  fmadds 1, 6, 3, 1
  0263a78  fmuls 4, 9, 7
  0263a7c  fmadds 2, 7, 5, 2
  0263a80  fmadds 2, 4, 3, 2
  0263a84  fdivs 1, 1, 2
  0263a88  stfs 1, 176(3)
  0263a8c  bl 0x668d0
  0263a90  nop
  0263a94  lis 3, 122
  0263a98  lfs 1, 48(30)
  0263a9c  lfs 2, 108(30)
  0263aa0  lfs 3, -15248(3)
  0263aa4  fmuls 2, 2, 3
  0263aa8  bl 0x502578
  0263aac  nop
  0263ab0  lis 3, 122
  0263ab4  stfs 1, 64(31)
  0263ab8  lfs 1, 112(30)
  0263abc  lfs 2, 52(30)
  0263ac0  lfs 3, -15244(3)
  0263ac4  fmuls 3, 1, 3
  0263ac8  fmr 1, 2
  0263acc  fneg 2, 3
  0263ad0  bl 0x502578
  0263ad4  nop
  0263ad8  lis 3, 250
  0263adc  stfs 1, 68(31)
  0263ae0  lfs 1, 108(30)
  0263ae4  lfs 2, 56(30)
  0263ae8  lfs 3, 16172(3)
  0263aec  fmuls 3, 1, 3
  0263af0  fmr 1, 2
  0263af4  fneg 2, 3
  0263af8  bl 0x502578
  0263afc  nop
  0263b00  addic 3, 31, 16
  0263b04  stfs 1, 72(31)
  0263b08  lfs 1, 60(28)
  0263b0c  li 5, 0
  0263b10  ori 6, 31, 0
  0263b14  bl 0x59e20
  0263b18  nop
  0263b1c  cmpwi 3, 0
  0263b20  bt 2, 0x264120
  0263b24  lis 27, 161
  0263b28  addic 27, 27, 2368
  0263b2c  lwz 3, 24(27)
  0263b30  cmpwi 3, 0
  0263b34  bt 2, 0x263b6c
  0263b38  lhz 3, 166(3)
  0263b3c  cmpwi 1, 3, 402
  0263b40  cmpwi 3, 0
  0263b44  cror 2, 2, 6
  0263b48  bt 2, 0x264120
  0263b4c  cmpwi 3, 1218
  0263b50  bt 2, 0x264120
  0263b54  cmpwi 3, 1219
  0263b58  bt 2, 0x264120
  0263b5c  cmpwi 3, 82
  0263b60  bt 2, 0x264120
  0263b64  cmpwi 3, 83
  0263b68  bt 2, 0x264120
  0263b6c  lfs 1, 48(27)
  0263b70  addic 3, 1, 208
  0263b74  stfs 1, 16(31)
  0263b78  lfs 1, 52(27)
  0263b7c  addic 28, 27, 64
  0263b80  ori 4, 3, 0
  0263b84  stfs 1, 20(31)
  0263b88  lfs 1, 56(27)
  0263b8c  ori 5, 28, 0
  0263b90  stfs 1, 24(31)
  0263b94  lfs 1, 60(27)
  0263b98  stfs 1, 28(31)
  0263b9c  bl 0x500608
  0263ba0  nop
  0263ba4  lwz 3, 208(1)
  0263ba8  lwz 4, 212(1)
  0263bac  lfs 1, 208(1)
  0263bb0  lfs 2, 212(1)
  0263bb4  fabs 3, 1
  0263bb8  fabs 5, 2
  0263bbc  lfs 31, 56(30)
  0263bc0  rlwinm 4, 4, 3, 29, 29
  0263bc4  fsubs 1, 3, 5
  0263bc8  stfs 1, 352(1)
  0263bcc  lwz 5, 352(1)
  0263bd0  lfs 1, 352(1)
  0263bd4  rlwimi 4, 5, 2, 30, 30
  0263bd8  fsub 4, 1, 23
  0263bdc  fsub 6, 1, 23
  0263be0  rlwimi 4, 3, 4, 28, 28
  0263be4  ori 3, 29, 0
  0263be8  rlwimi 3, 4, 2, 26, 28
  0263bec  slwi 4, 4, 2
  0263bf0  clrldi 3, 3, 32
  0263bf4  fsel 4, 4, 3, 5
  0263bf8  lfsx 1, 29, 4
  0263bfc  fsel 3, 6, 5, 3
  0263c00  lfs 2, 4(3)
  0263c04  fcmpu 0, 4, 23
  0263c08  bt 1, 0x263c14
  0263c0c  fmr 1, 23
  0263c10  b 0x263d2c
  0263c14  fsubs 5, 3, 4
  0263c18  fadds 3, 3, 4
  0263c1c  addic 3, 1, 16
  0263c20  li 7, 2
  0263c24  addic 5, 3, 436
  0263c28  addic 4, 3, 420
  0263c2c  mtctr 7
  0263c30  fdivs 3, 5, 3
  0263c34  fmuls 4, 3, 3
  0263c38  stfs 3, 448(1)
  0263c3c  stfs 3, 440(1)
  0263c40  stfs 3, 444(1)
  0263c44  stfs 3, 436(1)
  0263c48  lfs 6, 448(1)
  0263c4c  lfs 7, 440(1)
  0263c50  lfs 8, 444(1)
  0263c54  fmuls 5, 4, 4
  0263c58  fmuls 7, 7, 4
  0263c5c  fmuls 6, 6, 5
  0263c60  fmuls 3, 5, 5
  0263c64  fmuls 5, 8, 5
  0263c68  stfs 7, 440(1)
  0263c6c  fmuls 4, 6, 4
  0263c70  stfs 5, 444(1)
  0263c74  stfs 4, 448(1)
  0263c78  lfs 4, 420(3)
  0263c7c  fmuls 4, 4, 3
  0263c80  stfs 4, 436(3)
  0263c84  lfs 4, 4(4)
  0263c88  addic 4, 4, 8
  0263c8c  fmuls 4, 4, 3
  0263c90  addic 3, 3, 8
  0263c94  stfs 4, 4(5)
  0263c98  addic 5, 5, 8
  0263c9c  bdnz 0x263c78
  0263ca0  li 5, 4
  0263ca4  ori 3, 1, 0
  0263ca8  mtctr 5
  0263cac  lis 4, 115
  0263cb0  addic 5, 3, 436
  0263cb4  addic 4, 4, 22752
  0263cb8  ori 6, 5, 0
  0263cbc  lfs 3, 436(3)
  0263cc0  lfs 4, 0(4)
  0263cc4  fmuls 3, 3, 4
  0263cc8  lfs 4, 4(4)
  0263ccc  addic 4, 4, 8
  0263cd0  stfs 3, 436(3)
  0263cd4  lfs 3, 4(5)
  0263cd8  addic 3, 3, 8
  0263cdc  fmuls 3, 3, 4
  0263ce0  stfs 3, 4(5)
  0263ce4  addic 5, 5, 8
  0263ce8  bdnz 0x263cbc
  0263cec  ori 3, 1, 0
  0263cf0  fmr 3, 23
  0263cf4  mtctr 7
  0263cf8  lfs 4, 436(3)
  0263cfc  fadds 3, 3, 4
  0263d00  lfs 4, 4(6)
  0263d04  addic 3, 3, 16
  0263d08  lfs 5, 8(6)
  0263d0c  lfs 6, 12(6)
  0263d10  addic 6, 6, 16
  0263d14  fadds 3, 3, 4
  0263d18  fadds 3, 3, 5
  0263d1c  fadds 3, 3, 6
  0263d20  bdnz 0x263cf8
  0263d24  fadds 3, 3, 25
  0263d28  fmadds 1, 3, 1, 2
  0263d2c  fmr 2, 31
  0263d30  bl 0x5025e0
  0263d34  nop
  0263d38  lis 3, 122
  0263d3c  lfs 2, -15576(3)
  0263d40  fmuls 2, 1, 2
  0263d44  fmr 1, 31
  0263d48  bl 0x502578
  0263d4c  nop
  0263d50  lfs 2, 212(1)
  0263d54  lfs 3, 208(1)
  0263d58  fmuls 2, 2, 2
  0263d5c  stfs 1, 56(30)
  0263d60  lfs 31, 52(30)
  0263d64  lwz 3, 216(1)
  0263d68  lfs 1, 216(1)
  0263d6c  rlwinm 3, 3, 3, 29, 29
  0263d70  fmadds 2, 3, 3, 2
  0263d74  fabs 3, 1
  0263d78  fsqrts 2, 2
  0263d7c  fabs 5, 2
  0263d80  stfs 2, 344(1)
  0263d84  fsubs 1, 5, 3
  0263d88  stfs 1, 348(1)
  0263d8c  lwz 4, 344(1)
  0263d90  lfs 1, 344(1)
  0263d94  lwz 5, 348(1)
  0263d98  fabs 4, 1
  0263d9c  lfs 1, 348(1)
  0263da0  rlwimi 3, 5, 2, 30, 30
  0263da4  fsub 2, 1, 23
  0263da8  fsub 6, 1, 23
  0263dac  rlwimi 3, 4, 4, 28, 28
  0263db0  ori 4, 29, 0
  0263db4  rlwimi 4, 3, 2, 26, 28
  0263db8  slwi 3, 3, 2
  0263dbc  clrldi 4, 4, 32
  0263dc0  fsel 4, 2, 4, 3
  0263dc4  lfsx 1, 29, 3
  0263dc8  lfs 2, 4(4)
  0263dcc  fsel 3, 6, 3, 5
  0263dd0  fcmpu 0, 4, 23
  0263dd4  bt 1, 0x263de0
  0263dd8  fmr 25, 23
  0263ddc  b 0x263ef8
  0263de0  fsubs 5, 3, 4
  0263de4  fadds 3, 3, 4
  0263de8  addic 3, 1, 16
  0263dec  li 7, 2
  0263df0  addic 4, 3, 388
  0263df4  addic 5, 3, 404
  0263df8  mtctr 7
  0263dfc  fdivs 3, 5, 3
  0263e00  fmuls 4, 3, 3
  0263e04  stfs 3, 416(1)
  0263e08  stfs 3, 408(1)
  0263e0c  stfs 3, 412(1)
  0263e10  stfs 3, 404(1)
  0263e14  lfs 6, 416(1)
  0263e18  lfs 7, 408(1)
  0263e1c  lfs 8, 412(1)
  0263e20  fmuls 5, 4, 4
  0263e24  fmuls 7, 7, 4
  0263e28  fmuls 6, 6, 5
  0263e2c  fmuls 3, 5, 5
  0263e30  fmuls 5, 8, 5
  0263e34  stfs 7, 408(1)
  0263e38  fmuls 4, 6, 4
  0263e3c  stfs 5, 412(1)
  0263e40  stfs 4, 416(1)
  0263e44  lfs 4, 388(3)
  0263e48  fmuls 4, 4, 3
  0263e4c  stfs 4, 404(3)
  0263e50  lfs 4, 4(4)
  0263e54  addic 3, 3, 8
  0263e58  addic 4, 4, 8
  0263e5c  fmuls 4, 4, 3
  0263e60  stfs 4, 4(5)
  0263e64  addic 5, 5, 8
  0263e68  bdnz 0x263e44
  0263e6c  li 5, 4
  0263e70  ori 3, 1, 0
  0263e74  mtctr 5
  0263e78  lis 4, 115
  0263e7c  addic 5, 3, 404
  0263e80  addic 4, 4, 22752
  0263e84  ori 6, 5, 0
  0263e88  lfs 3, 404(3)
  0263e8c  lfs 4, 0(4)
  0263e90  fmuls 3, 3, 4
  0263e94  lfs 4, 4(4)
  0263e98  addic 4, 4, 8
  0263e9c  stfs 3, 404(3)
  0263ea0  lfs 3, 4(5)
  0263ea4  addic 3, 3, 8
  0263ea8  fmuls 3, 3, 4
  0263eac  stfs 3, 4(5)
  0263eb0  addic 5, 5, 8
  0263eb4  bdnz 0x263e88
  0263eb8  fmr 3, 23
  0263ebc  ori 3, 1, 0
  0263ec0  mtctr 7
  0263ec4  lfs 4, 404(3)
  0263ec8  fadds 3, 3, 4
  0263ecc  addic 3, 3, 16
  0263ed0  lfs 4, 4(6)
  0263ed4  lfs 5, 8(6)
  0263ed8  lfs 6, 12(6)
  0263edc  addic 6, 6, 16
  0263ee0  fadds 3, 3, 4
  0263ee4  fadds 3, 3, 5
  0263ee8  fadds 3, 3, 6
  0263eec  bdnz 0x263ec4
  0263ef0  fadds 25, 3, 25
  0263ef4  fmadds 25, 25, 1, 2
  0263ef8  fneg 1, 25
  0263efc  fmr 2, 31
  0263f00  bl 0x5025e0
  0263f04  nop
  0263f08  lis 3, 122
  0263f0c  lfs 2, -15572(3)
  0263f10  fmuls 2, 1, 2
  0263f14  fmr 1, 31
  0263f18  bl 0x502578
  0263f1c  nop
  0263f20  lis 3, 122
  0263f24  stfs 1, 52(30)
  0263f28  lfs 1, 100(30)
  0263f2c  lwz 27, 24(27)
  0263f30  cmpwi 27, 0
  0263f34  lfs 2, -15508(3)
  0263f38  fmuls 1, 1, 2
  0263f3c  stfs 1, 100(30)
  0263f40  bt 2, 0x264090
  0263f44  lhz 3, 166(27)
  0263f48  cmpwi 3, 347
  0263f4c  bt 2, 0x264090
  0263f50  lwz 3, 220(30)
  0263f54  cmpwi 3, 0
  0263f58  bf 2, 0x264120
  0263f5c  lis 3, 151
  0263f60  lis 4, 122
  0263f64  addic 3, 3, -25376
  0263f68  lfs 1, -15504(4)
  0263f6c  lfs 2, 5628(3)
  0263f70  fsubs 1, 2, 1
  0263f74  fcmpu 0, 1, 23
  0263f78  stfs 1, 5628(3)
  0263f7c  cror 6, 1, 2
  0263f80  bt 6, 0x264080
  0263f84  addic 29, 1, 192
  0263f88  addic 4, 1, 208
  0263f8c  ori 3, 29, 0
  0263f90  ori 5, 28, 0
  0263f94  bl 0x500608
  0263f98  nop
  0263f9c  lfs 2, 196(1)
  0263fa0  lfs 3, 192(1)
  0263fa4  fmuls 1, 2, 2
  0263fa8  lfs 5, 200(1)
  0263fac  lis 3, 38
  0263fb0  addi 6, 3, 9936
  0263fb4  lis 3, 114
  0263fb8  fmadds 1, 3, 3, 1
  0263fbc  lfs 4, 64(6)
  0263fc0  li 11, -1
  0263fc4  fmr 7, 21
  0263fc8  li 7, 1
  0263fcc  li 12, 0
  0263fd0  fmadds 1, 5, 5, 1
  0263fd4  ori 4, 29, 0
  0263fd8  li 5, 0
  0263fdc  li 8, 30
  0263fe0  li 9, 10
  0263fe4  fsqrts 6, 1
  0263fe8  lfs 1, -3052(3)
  0263fec  li 10, 24
  0263ff0  std 11, 144(1)
  0263ff4  ori 3, 31, 0
  0263ff8  std 7, 160(1)
  0263ffc  std 7, 168(1)
  0264000  std 11, 176(1)
  0264004  std 12, 184(1)
  0264008  fmuls 8, 1, 4
  026400c  fmr 1, 22
  0264010  fmr 4, 22
  0264014  fdivs 8, 8, 6
  0264018  fsub 9, 23, 6
  026401c  fsub 10, 23, 6
  0264020  fsub 11, 23, 6
  0264024  fsub 12, 6, 23
  0264028  fsub 13, 6, 23
  026402c  fsub 6, 6, 23
  0264030  fmuls 3, 3, 8
  0264034  fmuls 2, 2, 8
  0264038  fmuls 5, 5, 8
  026403c  fsel 8, 9, 23, 3
  0264040  fsel 9, 10, 23, 2
  0264044  fsel 10, 11, 23, 5
  0264048  fsel 3, 12, 8, 3
  026404c  fsel 2, 13, 9, 2
  0264050  fsel 5, 6, 10, 5
  0264054  stfs 3, 192(1)
  0264058  stfs 2, 196(1)
  026405c  stfs 5, 200(1)
  0264060  lfs 2, 68(6)
  0264064  lfs 3, 72(6)
  0264068  lfs 5, 76(6)
  026406c  lfs 6, 24(6)
  0264070  bl 0x10e030
  0264074  nop
  0264078  li 3, 7
  026407c  stb 3, 32(31)
  0264080  lis 3, 122
  0264084  lwz 3, -15252(3)
  0264088  stw 3, 220(30)
  026408c  b 0x264120
  0264090  lis 3, 151
  0264094  fmr 1, 22
  0264098  lis 5, 38
  026409c  fmr 4, 22
  02640a0  addic 3, 3, -25376
  02640a4  fmr 7, 21
  02640a8  li 6, 0
  02640ac  addi 7, 5, 9936
  02640b0  li 12, -1
  02640b4  li 11, 1
  02640b8  stw 6, 5628(3)
  02640bc  addic 4, 1, 192
  02640c0  ori 3, 31, 0
  02640c4  lfs 2, 68(7)
  02640c8  lfs 3, 72(7)
  02640cc  li 8, 30
  02640d0  lfs 5, 76(7)
  02640d4  li 5, 0
  02640d8  lfs 6, 24(7)
  02640dc  li 9, 10
  02640e0  std 12, 144(1)
  02640e4  li 10, 24
  02640e8  std 11, 160(1)
  02640ec  std 11, 168(1)
  02640f0  std 12, 176(1)
  02640f4  std 6, 184(1)
  02640f8  bl 0x10e030
  02640fc  nop
  0264100  lis 3, 122
  0264104  li 4, 7
  0264108  lwz 3, -15224(3)
  026410c  sth 3, 98(30)
  0264110  lhz 3, 52(31)
  0264114  stb 4, 32(31)
  0264118  ori 3, 3, 65
  026411c  sth 3, 52(31)
  0264120  lis 3, 113
  0264124  ori 4, 31, 0
  0264128  addic 3, 3, -24136
  026412c  bl 0x6d720
  0264130  nop
  0264134  ori 3, 31, 0
  0264138  ori 4, 30, 0
  026413c  bl 0x261ce8
  0264140  lis 3, 38
  0264144  lfs 2, 108(30)
  0264148  addi 29, 3, 9936
  026414c  lfs 1, 40(30)
  0264150  lfs 3, 80(29)
  0264154  fmuls 2, 2, 3
  0264158  fneg 2, 2
  026415c  bl 0x502578
  0264160  nop
  0264164  fmr 31, 1
  0264168  lfs 2, 84(29)
  026416c  lfs 3, 88(29)
  0264170  lfs 4, 112(30)
  0264174  lfs 1, 36(30)
  0264178  fmsubs 2, 4, 2, 3
  026417c  bl 0x502578
  0264180  nop
  0264184  fneg 2, 1
  0264188  ori 3, 31, 0
  026418c  ori 4, 30, 0
  0264190  fmr 1, 31
  0264194  bl 0x2619e0
  0264198  ld 0, 784(1)
  026419c  mtlr 0
  02641a0  lfd 20, 672(1)
  02641a4  lfd 21, 680(1)
  02641a8  lfd 22, 688(1)
  02641ac  lfd 23, 696(1)
  02641b0  lfd 24, 704(1)
  02641b4  lfd 25, 712(1)
  02641b8  lfd 26, 720(1)
  02641bc  lfd 27, 728(1)
  02641c0  lfd 28, 736(1)
  02641c4  lfd 29, 744(1)
  02641c8  lfd 30, 752(1)
  02641cc  lfd 31, 760(1)
  02641d0  ld 24, 608(1)
  02641d4  ld 25, 616(1)
  02641d8  ld 26, 624(1)
  02641dc  ld 27, 632(1)
  02641e0  ld 28, 640(1)
  02641e4  ld 29, 648(1)
  02641e8  ld 30, 656(1)
  02641ec  ld 31, 664(1)
  02641f0  addi 1, 1, 768
  02641f4  blr

UpdateMoby_1379_JetFighterFleet:   # 0x264238, 0x17d8 bytes
  0264238  stdu 1, -416(1)
  026423c  mflr 0
  0264240  std 0, 432(1)
  0264244  stfd 29, 392(1)
  0264248  stfd 30, 400(1)
  026424c  stfd 31, 408(1)
  0264250  std 31, 384(1)
  0264254  cmpwi 3, 0
  0264258  std 30, 376(1)
  026425c  std 29, 368(1)
  0264260  std 28, 360(1)
  0264264  std 27, 352(1)
  0264268  std 26, 344(1)
  026426c  ori 31, 3, 0
  0264270  bt 2, 0x2659dc
  0264274  lwz 30, 120(31)
  0264278  addic 3, 30, 220
  026427c  bl 0x4fff60
  0264280  nop
  0264284  lbz 3, 32(31)
  0264288  cmpwi 3, 7
  026428c  bt 2, 0x26491c
  0264290  cmpwi 3, 1
  0264294  bt 2, 0x26491c
  0264298  cmpwi 3, 2
  026429c  bt 2, 0x26491c
  02642a0  lis 4, 3
  02642a4  ori 3, 31, 0
  02642a8  ori 4, 4, 1
  02642ac  li 5, 0
  02642b0  bl 0x10675c
  02642b4  nop
  02642b8  ori 29, 3, 0
  02642bc  cmpwi 29, 0
  02642c0  bt 2, 0x26491c
  02642c4  lbz 3, 32(31)
  02642c8  cmpwi 3, 4
  02642cc  bf 2, 0x26491c
  02642d0  lis 28, 151
  02642d4  lwz 3, 44(29)
  02642d8  addic 28, 28, -25376
  02642dc  srawi 5, 3, 31
  02642e0  srwi 7, 5, 1
  02642e4  lwz 4, 5628(28)
  02642e8  xor 3, 7, 3
  02642ec  lfs 1, 5628(28)
  02642f0  srawi 6, 4, 31
  02642f4  subc 3, 3, 5
  02642f8  lfs 2, 44(29)
  02642fc  srwi 8, 6, 1
  0264300  xor 4, 8, 4
  0264304  subc 4, 4, 6
  0264308  cmpw 4, 3
  026430c  bf 1, 0x2647d8
  0264310  fsubs 1, 1, 2
  0264314  stfs 1, 5628(28)
  0264318  lwz 3, 48(29)
  026431c  clrlwi 3, 3, 31
  0264320  cmpwi 3, 0
  0264324  bt 2, 0x26491c
  0264328  lis 4, 38
  026432c  lis 3, 149
  0264330  vspltisw 3, -1
  0264334  addi 28, 4, 16888
  0264338  addic 4, 3, 5056
  026433c  lis 3, 16256
  0264340  lis 5, 114
  0264344  li 6, -3056
  0264348  vslw 3, 3, 3
  026434c  stw 3, 352(4)
  0264350  lvlx 2, 0, 28
  0264354  vspltw 2, 2, 0
  0264358  lvlx 4, 6, 5
  026435c  lis 6, 122
  0264360  li 5, 360
  0264364  vmaddfp 2, 4, 2, 3
  0264368  addic 3, 1, 192
  026436c  lfs 31, -15464(6)
  0264370  vctsxs 2, 2, 0
  0264374  vspltw 2, 2, 0
  0264378  stvewx 2, 5, 4
  026437c  lfs 1, 44(29)
  0264380  fmuls 31, 1, 31
  0264384  lfs 1, 100(30)
  0264388  lfs 2, 56(30)
  026438c  lfs 4, 52(30)
  0264390  fneg 3, 4
  0264394  bl 0xfe610
  0264398  nop
  026439c  lfs 4, 20(29)
  02643a0  lfs 2, 16(29)
  02643a4  fmuls 1, 4, 4
  02643a8  lfs 6, 24(29)
  02643ac  lis 3, 114
  02643b0  lfs 7, 4(28)
  02643b4  lfs 9, -3052(3)
  02643b8  fmadds 1, 2, 2, 1
  02643bc  fmuls 7, 9, 7
  02643c0  fmadds 8, 6, 6, 1
  02643c4  lfs 1, 16(31)
  02643c8  lfs 3, 20(31)
  02643cc  lfs 5, 24(31)
  02643d0  fsqrts 8, 8
  02643d4  fcmpu 0, 7, 8
  02643d8  cror 6, 1, 2
  02643dc  bt 6, 0x2643fc
  02643e0  fdivs 7, 7, 8
  02643e4  fmuls 2, 2, 7
  02643e8  fmuls 4, 4, 7
  02643ec  fmuls 6, 6, 7
  02643f0  stfs 2, 16(29)
  02643f4  stfs 4, 20(29)
  02643f8  stfs 6, 24(29)
  02643fc  fadds 1, 1, 2
  0264400  addic 3, 1, 192
  0264404  fadds 2, 3, 4
  0264408  addic 5, 29, 16
  026440c  fadds 3, 5, 6
  0264410  ori 4, 3, 0
  0264414  stfs 1, 16(31)
  0264418  stfs 2, 20(31)
  026441c  stfs 3, 24(31)
  0264420  bl 0x500608
  0264424  nop
  0264428  lwz 3, 192(1)
  026442c  lwz 4, 196(1)
  0264430  lis 5, 38
  0264434  lfs 1, 192(1)
  0264438  lfs 2, 196(1)
  026443c  fabs 3, 1
  0264440  addi 5, 5, 16888
  0264444  fabs 5, 2
  0264448  lfs 30, 56(30)
  026444c  rlwinm 4, 4, 3, 29, 29
  0264450  lis 29, 115
  0264454  addic 29, 29, 22784
  0264458  fsubs 1, 3, 5
  026445c  stfs 1, 240(1)
  0264460  lfs 29, 8(5)
  0264464  lwz 5, 240(1)
  0264468  lfs 1, 240(1)
  026446c  rlwimi 4, 5, 2, 30, 30
  0264470  fsub 4, 1, 29
  0264474  fsub 6, 1, 29
  0264478  rlwimi 4, 3, 4, 28, 28
  026447c  ori 3, 29, 0
  0264480  rlwimi 3, 4, 2, 26, 28
  0264484  slwi 4, 4, 2
  0264488  clrldi 3, 3, 32
  026448c  fsel 4, 4, 3, 5
  0264490  lfsx 1, 29, 4
  0264494  lfs 2, 4(3)
  0264498  fsel 3, 6, 5, 3
  026449c  fcmpu 0, 4, 29
  02644a0  bt 1, 0x2644ac
  02644a4  fmr 1, 29
  02644a8  b 0x2645d0
  02644ac  fsubs 5, 3, 4
  02644b0  fadds 3, 3, 4
  02644b4  addic 3, 1, 16
  02644b8  li 7, 2
  02644bc  addic 4, 3, 292
  02644c0  addic 5, 3, 308
  02644c4  mtctr 7
  02644c8  fdivs 3, 5, 3
  02644cc  fmuls 4, 3, 3
  02644d0  stfs 3, 320(1)
  02644d4  stfs 3, 312(1)
  02644d8  stfs 3, 316(1)
  02644dc  stfs 3, 308(1)
  02644e0  lfs 6, 320(1)
  02644e4  lfs 7, 312(1)
  02644e8  lfs 8, 316(1)
  02644ec  fmuls 5, 4, 4
  02644f0  fmuls 7, 7, 4
  02644f4  fmuls 6, 6, 5
  02644f8  fmuls 3, 5, 5
  02644fc  fmuls 5, 8, 5
  0264500  stfs 7, 312(1)
  0264504  fmuls 4, 6, 4
  0264508  stfs 5, 316(1)
  026450c  stfs 4, 320(1)
  0264510  lfs 4, 292(3)
  0264514  fmuls 4, 4, 3
  0264518  stfs 4, 308(3)
  026451c  lfs 4, 4(4)
  0264520  addic 3, 3, 8
  0264524  addic 4, 4, 8
  0264528  fmuls 4, 4, 3
  026452c  stfs 4, 4(5)
  0264530  addic 5, 5, 8
  0264534  bdnz 0x264510
  0264538  li 5, 4
  026453c  ori 3, 1, 0
  0264540  mtctr 5
  0264544  lis 4, 115
  0264548  addic 5, 3, 308
  026454c  addic 4, 4, 22752
  0264550  ori 6, 5, 0
  0264554  lfs 3, 308(3)
  0264558  lfs 4, 0(4)
  026455c  fmuls 3, 3, 4
  0264560  lfs 4, 4(4)
  0264564  addic 4, 4, 8
  0264568  stfs 3, 308(3)
  026456c  lfs 3, 4(5)
  0264570  addic 3, 3, 8
  0264574  fmuls 3, 3, 4
  0264578  stfs 3, 4(5)
  026457c  addic 5, 5, 8
  0264580  bdnz 0x264554
  0264584  fmr 3, 29
  0264588  ori 3, 1, 0
  026458c  mtctr 7
  0264590  lfs 4, 308(3)
  0264594  fadds 3, 3, 4
  0264598  addic 3, 3, 16
  026459c  lfs 4, 4(6)
  02645a0  lfs 5, 8(6)
  02645a4  lfs 6, 12(6)
  02645a8  addic 6, 6, 16
  02645ac  fadds 3, 3, 4
  02645b0  fadds 3, 3, 5
  02645b4  fadds 3, 3, 6
  02645b8  bdnz 0x264590
  02645bc  lis 3, 38
  02645c0  addi 3, 3, 16888
  02645c4  lfs 4, 12(3)
  02645c8  fadds 3, 3, 4
  02645cc  fmadds 1, 3, 1, 2
  02645d0  fmr 2, 30
  02645d4  bl 0x5025e0
  02645d8  nop
  02645dc  lis 3, 122
  02645e0  lfs 2, -15576(3)
  02645e4  fmuls 2, 1, 2
  02645e8  fmr 1, 30
  02645ec  fmuls 2, 2, 31
  02645f0  bl 0x502578
  02645f4  nop
  02645f8  stfs 1, 56(30)
  02645fc  lfs 1, 196(1)
  0264600  lfs 2, 192(1)
  0264604  fmuls 1, 1, 1
  0264608  lfs 30, 52(30)
  026460c  lwz 3, 200(1)
  0264610  rlwinm 3, 3, 3, 29, 29
  0264614  fmadds 1, 2, 2, 1
  0264618  lfs 2, 200(1)
  026461c  fabs 3, 2
  0264620  fsqrts 1, 1
  0264624  fabs 2, 1
  0264628  stfs 1, 232(1)
  026462c  fsubs 1, 2, 3
  0264630  stfs 1, 236(1)
  0264634  lwz 4, 232(1)
  0264638  lfs 1, 232(1)
  026463c  lwz 5, 236(1)
  0264640  fabs 4, 1
  0264644  lfs 1, 236(1)
  0264648  rlwimi 3, 5, 2, 30, 30
  026464c  fsub 5, 1, 29
  0264650  rlwimi 3, 4, 4, 28, 28
  0264654  fsub 6, 1, 29
  0264658  ori 4, 29, 0
  026465c  rlwimi 4, 3, 2, 26, 28
  0264660  slwi 3, 3, 2
  0264664  clrldi 4, 4, 32
  0264668  lfsx 1, 29, 3
  026466c  fsel 4, 5, 4, 3
  0264670  fsel 3, 6, 3, 2
  0264674  lfs 2, 4(4)
  0264678  fcmpu 0, 4, 29
  026467c  bt 1, 0x264684
  0264680  b 0x2647a4
  0264684  fsubs 5, 3, 4
  0264688  fadds 3, 3, 4
  026468c  addic 3, 1, 16
  0264690  li 7, 2
  0264694  addic 4, 3, 260
  0264698  addic 5, 3, 276
  026469c  mtctr 7
  02646a0  fdivs 3, 5, 3
  02646a4  fmuls 4, 3, 3
  02646a8  stfs 3, 288(1)
  02646ac  stfs 3, 280(1)
  02646b0  stfs 3, 284(1)
  02646b4  stfs 3, 276(1)
  02646b8  lfs 6, 288(1)
  02646bc  lfs 7, 280(1)
  02646c0  lfs 8, 284(1)
  02646c4  fmuls 5, 4, 4
  02646c8  fmuls 7, 7, 4
  02646cc  fmuls 6, 6, 5
  02646d0  fmuls 3, 5, 5
  02646d4  fmuls 5, 8, 5
  02646d8  stfs 7, 280(1)
  02646dc  fmuls 4, 6, 4
  02646e0  stfs 5, 284(1)
  02646e4  stfs 4, 288(1)
  02646e8  lfs 4, 260(3)
  02646ec  fmuls 4, 4, 3
  02646f0  stfs 4, 276(3)
  02646f4  lfs 4, 4(4)
  02646f8  addic 3, 3, 8
  02646fc  addic 4, 4, 8
  0264700  fmuls 4, 4, 3
  0264704  stfs 4, 4(5)
  0264708  addic 5, 5, 8
  026470c  bdnz 0x2646e8
  0264710  li 5, 4
  0264714  ori 3, 1, 0
  0264718  mtctr 5
  026471c  lis 4, 115
  0264720  addic 5, 3, 276
  0264724  addic 4, 4, 22752
  0264728  ori 6, 5, 0
  026472c  lfs 3, 276(3)
  0264730  lfs 4, 0(4)
  0264734  fmuls 3, 3, 4
  0264738  lfs 4, 4(4)
  026473c  addic 4, 4, 8
  0264740  stfs 3, 276(3)
  0264744  lfs 3, 4(5)
  0264748  addic 3, 3, 8
  026474c  fmuls 3, 3, 4
  0264750  stfs 3, 4(5)
  0264754  addic 5, 5, 8
  0264758  bdnz 0x26472c
  026475c  ori 3, 1, 0
  0264760  mtctr 7
  0264764  lfs 3, 276(3)
  0264768  lfs 4, 4(6)
  026476c  fadds 3, 29, 3
  0264770  lfs 5, 8(6)
  0264774  lfs 29, 12(6)
  0264778  addic 3, 3, 16
  026477c  addic 6, 6, 16
  0264780  fadds 3, 3, 4
  0264784  fadds 3, 3, 5
  0264788  fadds 29, 3, 29
  026478c  bdnz 0x264764
  0264790  lis 3, 38
  0264794  addi 3, 3, 16888
  0264798  lfs 3, 12(3)
  026479c  fadds 29, 29, 3
  02647a0  fmadds 29, 29, 1, 2
  02647a4  fmr 1, 29
  02647a8  fmr 2, 30
  02647ac  bl 0x5025e0
  02647b0  nop
  02647b4  lis 3, 122
  02647b8  lfs 2, -15572(3)
  02647bc  fmuls 2, 1, 2
  02647c0  fmr 1, 30
  02647c4  fmuls 2, 2, 31
  02647c8  bl 0x502578
  02647cc  nop
  02647d0  stfs 1, 52(30)
  02647d4  b 0x26491c
  02647d8  lfs 1, 100(30)
  02647dc  addic 29, 1, 208
  02647e0  lfs 2, 56(30)
  02647e4  lfs 3, 52(30)
  02647e8  ori 3, 29, 0
  02647ec  fneg 3, 3
  02647f0  bl 0xfe610
  02647f4  nop
  02647f8  lis 3, 38
  02647fc  lis 6, 15948
  0264800  vspltisw 3, -1
  0264804  addi 27, 3, 16888
  0264808  lis 3, 149
  026480c  li 4, 20
  0264810  addic 3, 3, 5056
  0264814  ori 6, 6, 52429
  0264818  vslw 3, 3, 3
  026481c  lfs 1, 16(27)
  0264820  lis 7, 114
  0264824  li 8, -3056
  0264828  stw 6, 352(3)
  026482c  lvlx 2, 4, 27
  0264830  li 26, 0
  0264834  li 4, 360
  0264838  vspltw 2, 2, 0
  026483c  lvlx 4, 8, 7
  0264840  li 6, 7
  0264844  li 9, 24
  0264848  vmaddfp 2, 4, 2, 3
  026484c  vspltisw 3, -1
  0264850  li 5, 98
  0264854  vslw 3, 3, 3
  0264858  vctsxs 2, 2, 0
  026485c  vspltw 2, 2, 0
  0264860  stvewx 2, 4, 3
  0264864  lfs 31, 8(27)
  0264868  stw 26, 5628(28)
  026486c  stb 6, 32(31)
  0264870  lvlx 2, 9, 27
  0264874  lvlx 4, 8, 7
  0264878  vspltw 2, 2, 0
  026487c  li 3, 0
  0264880  li 4, 1
  0264884  vmaddfp 2, 4, 2, 3
  0264888  vctsxs 2, 2, 0
  026488c  vsplth 2, 2, 1
  0264890  stvehx 2, 5, 30
  0264894  lfs 2, 136(28)
  0264898  lwz 5, 8320(28)
  026489c  fadds 1, 2, 1
  02648a0  stfs 1, 136(28)
  02648a4  stw 26, 152(5)
  02648a8  bl 0xb72b0
  02648ac  nop
  02648b0  li 6, -1
  02648b4  stw 26, 5616(28)
  02648b8  li 7, 1
  02648bc  ori 3, 31, 0
  02648c0  fmr 1, 31
  02648c4  ori 4, 29, 0
  02648c8  fmr 2, 31
  02648cc  sth 6, 5620(28)
  02648d0  li 5, 0
  02648d4  lfs 3, 28(27)
  02648d8  li 8, 10
  02648dc  lfs 4, 32(27)
  02648e0  li 9, 3
  02648e4  lfs 5, 36(27)
  02648e8  li 10, 16
  02648ec  lfs 6, 40(27)
  02648f0  lfs 7, 44(27)
  02648f4  std 6, 144(1)
  02648f8  std 7, 160(1)
  02648fc  std 7, 168(1)
  0264900  std 6, 176(1)
  0264904  std 26, 184(1)
  0264908  bl 0x10e030
  026490c  nop
  0264910  lhz 3, 52(31)
  0264914  ori 3, 3, 65
  0264918  sth 3, 52(31)
  026491c  lis 29, 151
  0264920  li 3, 255
  0264924  addic 29, 29, -25376
  0264928  stb 3, 164(31)
  026492c  lwz 3, 5616(29)
  0264930  cmpw 3, 31
  0264934  bf 2, 0x2649c8
  0264938  lis 3, 122
  026493c  li 4, -15468
  0264940  vspltisw 5, -1
  0264944  lis 6, 38
  0264948  li 5, 32
  026494c  addi 6, 6, 16888
  0264950  vspltisw 7, -1
  0264954  vslw 5, 5, 5
  0264958  lvlx 2, 4, 3
  026495c  vrefp 3, 2
  0264960  lvlx 4, 5, 6
  0264964  vspltw 4, 4, 0
  0264968  vslw 7, 7, 7
  026496c  vspltisw 8, -1
  0264970  li 3, 5628
  0264974  vspltisw 11, -1
  0264978  vslw 8, 8, 8
  026497c  vnmsubfp 6, 3, 2, 4
  0264980  vmaddfp 3, 3, 6, 5
  0264984  vspltisw 5, -1
  0264988  lvlx 6, 3, 29
  026498c  li 3, 48
  0264990  vslw 5, 5, 5
  0264994  lvlx 10, 3, 6
  0264998  li 3, 5640
  026499c  vspltw 10, 10, 0
  02649a0  vnmsubfp 9, 3, 2, 4
  02649a4  vmaddfp 3, 3, 9, 7
  02649a8  vslw 7, 11, 11
  02649ac  vnmsubfp 2, 3, 2, 4
  02649b0  vmaddfp 2, 3, 2, 5
  02649b4  vmaddfp 2, 2, 6, 8
  02649b8  vmaddfp 2, 2, 10, 7
  02649bc  vctsxs 2, 2, 0
  02649c0  vspltw 2, 2, 0
  02649c4  stvewx 2, 3, 29
  02649c8  lbz 3, 32(31)
  02649cc  cmpwi 3, 4
  02649d0  cmpwi 1, 3, 1
  02649d4  cmpwi 6, 3, -1
  02649d8  cmpwi 7, 3, 0
  02649dc  bt 1, 0x264a04
  02649e0  bt 5, 0x2649f0
  02649e4  bf 25, 0x2658a0
  02649e8  bf 29, 0x264a34
  02649ec  b 0x264d24
  02649f0  cmpwi 3, 2
  02649f4  bf 1, 0x264e34
  02649f8  cmpwi 3, 3
  02649fc  bf 1, 0x2658a0
  0264a00  b 0x26511c
  0264a04  cmpwi 3, 7
  0264a08  bt 1, 0x264a20
  0264a0c  cmpwi 3, 5
  0264a10  bf 1, 0x265220
  0264a14  cmpwi 3, 6
  0264a18  bf 1, 0x2658a0
  0264a1c  b 0x2653c4
  0264a20  cmpwi 3, 8
  0264a24  bf 1, 0x26552c
  0264a28  cmpwi 3, 9
  0264a2c  bf 1, 0x265844
  0264a30  b 0x2658a0
  0264a34  li 3, 1
  0264a38  li 4, 0
  0264a3c  lis 5, 150
  0264a40  lis 6, 38
  0264a44  stb 3, 32(31)
  0264a48  stb 4, 96(30)
  0264a4c  lwz 3, 36(31)
  0264a50  addic 4, 5, -12416
  0264a54  addi 5, 6, 16888
  0264a58  lfs 1, 36(3)
  0264a5c  stfs 1, 44(31)
  0264a60  lfs 1, 48(30)
  0264a64  lfs 2, 52(30)
  0264a68  stfs 1, 32(30)
  0264a6c  stfs 2, 36(30)
  0264a70  lwz 3, 176(4)
  0264a74  lfs 1, 176(4)
  0264a78  lfs 2, 40(5)
  0264a7c  fabs 3, 1
  0264a80  lis 4, 16256
  0264a84  rlwinm 3, 3, 3, 29, 29
  0264a88  stw 4, 224(1)
  0264a8c  lis 4, 115
  0264a90  addic 4, 4, 22784
  0264a94  fsubs 1, 2, 3
  0264a98  stfs 1, 228(1)
  0264a9c  lfs 4, 8(5)
  0264aa0  lfs 1, 224(1)
  0264aa4  lwz 5, 228(1)
  0264aa8  fabs 5, 1
  0264aac  lfs 1, 228(1)
  0264ab0  rlwimi 3, 5, 2, 30, 30
  0264ab4  ori 5, 4, 0
  0264ab8  fsub 6, 1, 4
  0264abc  fsub 7, 1, 4
  0264ac0  rlwimi 5, 3, 2, 27, 28
  0264ac4  slwi 3, 3, 2
  0264ac8  clrldi 5, 5, 32
  0264acc  lfsx 1, 4, 3
  0264ad0  fsel 5, 6, 5, 3
  0264ad4  fsel 3, 7, 3, 2
  0264ad8  lfs 2, 4(5)
  0264adc  fcmpu 0, 5, 4
  0264ae0  bt 1, 0x264ae8
  0264ae4  b 0x264c08
  0264ae8  fsubs 6, 3, 5
  0264aec  fadds 3, 3, 5
  0264af0  addic 3, 1, 16
  0264af4  li 7, 2
  0264af8  addic 5, 3, 244
  0264afc  addic 4, 3, 228
  0264b00  mtctr 7
  0264b04  fdivs 3, 6, 3
  0264b08  fmuls 5, 3, 3
  0264b0c  stfs 3, 256(1)
  0264b10  stfs 3, 248(1)
  0264b14  stfs 3, 252(1)
  0264b18  stfs 3, 244(1)
  0264b1c  lfs 7, 256(1)
  0264b20  lfs 8, 248(1)
  0264b24  lfs 9, 252(1)
  0264b28  fmuls 6, 5, 5
  0264b2c  fmuls 8, 8, 5
  0264b30  fmuls 7, 7, 6
  0264b34  fmuls 3, 6, 6
  0264b38  fmuls 6, 9, 6
  0264b3c  stfs 8, 248(1)
  0264b40  fmuls 5, 7, 5
  0264b44  stfs 6, 252(1)
  0264b48  stfs 5, 256(1)
  0264b4c  lfs 5, 228(3)
  0264b50  fmuls 5, 5, 3
  0264b54  stfs 5, 244(3)
  0264b58  lfs 5, 4(4)
  0264b5c  addic 4, 4, 8
  0264b60  fmuls 5, 5, 3
  0264b64  addic 3, 3, 8
  0264b68  stfs 5, 4(5)
  0264b6c  addic 5, 5, 8
  0264b70  bdnz 0x264b4c
  0264b74  li 5, 4
  0264b78  ori 3, 1, 0
  0264b7c  mtctr 5
  0264b80  lis 4, 115
  0264b84  addic 5, 3, 244
  0264b88  addic 4, 4, 22752
  0264b8c  ori 6, 5, 0
  0264b90  lfs 3, 244(3)
  0264b94  lfs 5, 0(4)
  0264b98  fmuls 3, 3, 5
  0264b9c  lfs 5, 4(4)
  0264ba0  addic 4, 4, 8
  0264ba4  stfs 3, 244(3)
  0264ba8  lfs 3, 4(5)
  0264bac  addic 3, 3, 8
  0264bb0  fmuls 3, 3, 5
  0264bb4  stfs 3, 4(5)
  0264bb8  addic 5, 5, 8
  0264bbc  bdnz 0x264b90
  0264bc0  ori 3, 1, 0
  0264bc4  mtctr 7
  0264bc8  lfs 3, 244(3)
  0264bcc  fadds 3, 4, 3
  0264bd0  addic 3, 3, 16
  0264bd4  lfs 4, 4(6)
  0264bd8  lfs 5, 8(6)
  0264bdc  lfs 6, 12(6)
  0264be0  addic 6, 6, 16
  0264be4  fadds 3, 3, 4
  0264be8  fadds 4, 3, 5
  0264bec  fadds 4, 4, 6
  0264bf0  bdnz 0x264bc8
  0264bf4  lis 3, 38
  0264bf8  addi 3, 3, 16888
  0264bfc  lfs 3, 12(3)
  0264c00  fadds 4, 4, 3
  0264c04  fmadds 4, 4, 1, 2
  0264c08  lis 3, 38
  0264c0c  li 4, 0
  0264c10  addi 3, 3, 16888
  0264c14  lfs 1, 32(3)
  0264c18  stw 4, 192(30)
  0264c1c  fmuls 1, 4, 1
  0264c20  lis 3, 250
  0264c24  li 4, 1
  0264c28  stfs 1, 172(30)
  0264c2c  stfs 1, 176(30)
  0264c30  lfs 1, 64(31)
  0264c34  stfs 1, 48(30)
  0264c38  lfs 1, 68(31)
  0264c3c  stfs 1, 52(30)
  0264c40  lfs 1, 72(31)
  0264c44  stfs 1, 56(30)
  0264c48  lfs 1, 76(31)
  0264c4c  stfs 1, 60(30)
  0264c50  lfs 1, 64(31)
  0264c54  stfs 1, 80(30)
  0264c58  lfs 1, 68(31)
  0264c5c  stfs 1, 84(30)
  0264c60  lfs 1, 72(31)
  0264c64  stfs 1, 88(30)
  0264c68  lfs 1, 76(31)
  0264c6c  stfs 1, 92(30)
  0264c70  lfs 1, 16(31)
  0264c74  stfs 1, 64(30)
  0264c78  lfs 1, 20(31)
  0264c7c  stfs 1, 68(30)
  0264c80  lfs 1, 24(31)
  0264c84  stfs 1, 72(30)
  0264c88  lfs 1, 28(31)
  0264c8c  stfs 1, 76(30)
  0264c90  stb 4, 17200(3)
  0264c94  stw 4, 248(30)
  0264c98  stw 4, 232(30)
  0264c9c  lbz 3, 176(31)
  0264ca0  cmpwi 3, 255
  0264ca4  bt 2, 0x264cdc
  0264ca8  lis 4, 151
  0264cac  lis 5, 161
  0264cb0  addic 5, 5, -13692
  0264cb4  lwz 4, -25488(4)
  0264cb8  addc 3, 3, 5
  0264cbc  slwi 4, 4, 4
  0264cc0  clrldi 3, 3, 32
  0264cc4  extsw 4, 4
  0264cc8  lbzx 3, 3, 4
  0264ccc  cmpwi 3, 255
  0264cd0  bf 2, 0x264cdc
  0264cd4  li 3, 9
  0264cd8  stb 3, 32(31)
  0264cdc  lwz 3, 284(30)
  0264ce0  cmpwi 3, 0
  0264ce4  bf 1, 0x264d00
  0264ce8  extsw 3, 3
  0264cec  li 4, 0
  0264cf0  li 5, 0
  0264cf4  li 6, 0
  0264cf8  bl 0x10434c
  0264cfc  nop
  0264d00  li 3, 805
  0264d04  li 4, 1
  0264d08  li 5, 1
  0264d0c  li 6, -1
  0264d10  bl 0x104430
  0264d14  nop
  0264d18  li 3, -1
  0264d1c  stw 3, 292(30)
  0264d20  b 0x2658a0
  0264d24  ori 3, 31, 0
  0264d28  lwz 4, 8320(29)
  0264d2c  bl 0xf20f0
  0264d30  nop
  0264d34  lis 3, 122
  0264d38  lfs 2, -15632(3)
  0264d3c  fcmpu 0, 1, 2
  0264d40  cror 6, 1, 2
  0264d44  bt 6, 0x264dc8
  0264d48  lwz 3, 8324(29)
  0264d4c  cmpwi 1, 3, 29
  0264d50  cmpwi 3, 50
  0264d54  cror 2, 2, 6
  0264d58  bt 2, 0x264dc8
  0264d5c  lbz 3, 8356(29)
  0264d60  cmpwi 3, 0
  0264d64  bf 2, 0x264dc8
  0264d68  li 3, 7
  0264d6c  li 4, 21476
  0264d70  bl 0x11aeec
  0264d74  nop
  0264d78  cmpwi 3, 0
  0264d7c  bt 2, 0x264dc8
  0264d80  lis 3, 150
  0264d84  addic 3, 3, 19008
  0264d88  lwz 3, 164(3)
  0264d8c  rlwinm 3, 3, 0, 27, 27
  0264d90  cmpwi 3, 0
  0264d94  bt 2, 0x264dc8
  0264d98  li 3, 7
  0264d9c  bl 0x11b0b0
  0264da0  nop
  0264da4  li 3, 50
  0264da8  li 4, 1
  0264dac  bl 0xb72b0
  0264db0  nop
  0264db4  li 3, 2
  0264db8  li 4, -1
  0264dbc  stb 3, 32(31)
  0264dc0  stw 4, 292(30)
  0264dc4  b 0x264e10
  0264dc8  lis 3, 38
  0264dcc  lwz 4, 304(30)
  0264dd0  addi 3, 3, 16888
  0264dd4  cmpwi 4, 0
  0264dd8  lfs 1, 8(3)
  0264ddc  bt 2, 0x264e10
  0264de0  lis 3, 38
  0264de4  lis 5, 114
  0264de8  addi 4, 3, 16888
  0264dec  addic 3, 30, 304
  0264df0  lfs 2, 28(4)
  0264df4  lfs 3, -3052(5)
  0264df8  fmuls 2, 3, 2
  0264dfc  bl 0x109af0
  0264e00  nop
  0264e04  lis 3, 150
  0264e08  lfs 1, 304(30)
  0264e0c  stfs 1, -12528(3)
  0264e10  lis 4, 122
  0264e14  lis 5, 122
  0264e18  ori 3, 31, 0
  0264e1c  lfs 1, -15444(4)
  0264e20  lfs 2, -15516(5)
  0264e24  fmuls 1, 1, 2
  0264e28  bl 0x106150
  0264e2c  nop
  0264e30  b 0x2658a0
  0264e34  lis 3, 38
  0264e38  lis 4, 114
  0264e3c  addi 5, 3, 16888
  0264e40  addic 3, 30, 304
  0264e44  lis 28, 16256
  0264e48  lfs 3, 28(5)
  0264e4c  lfs 1, 40(5)
  0264e50  lfs 4, -3052(4)
  0264e54  fmuls 2, 4, 3
  0264e58  bl 0x109af0
  0264e5c  nop
  0264e60  lis 3, 150
  0264e64  lwz 4, 304(30)
  0264e68  lfs 1, 304(30)
  0264e6c  cmpw 4, 28
  0264e70  stfs 1, -12528(3)
  0264e74  bf 2, 0x2658a0
  0264e78  lis 3, 122
  0264e7c  li 4, 1
  0264e80  lhz 8, 166(31)
  0264e84  lis 5, 122
  0264e88  stw 31, 5616(29)
  0264e8c  sth 8, 5620(29)
  0264e90  lis 6, 122
  0264e94  li 7, 0
  0264e98  lwz 3, -15500(3)
  0264e9c  stb 4, 5646(29)
  0264ea0  li 9, 255
  0264ea4  lwz 4, -15496(5)
  0264ea8  lis 10, 122
  0264eac  stb 3, 5622(29)
  0264eb0  lis 5, 17096
  0264eb4  stb 4, 5623(29)
  0264eb8  li 8, 3
  0264ebc  lfs 1, -15512(6)
  0264ec0  li 3, 2
  0264ec4  stb 4, 5624(29)
  0264ec8  stfs 1, 5628(29)
  0264ecc  stw 7, 240(30)
  0264ed0  li 4, 4
  0264ed4  stw 9, 244(30)
  0264ed8  lfs 1, -15468(10)
  0264edc  stw 5, 5636(29)
  0264ee0  stfs 1, 5632(29)
  0264ee4  stb 8, 5625(29)
  0264ee8  stb 8, 5626(29)
  0264eec  stb 8, 5627(29)
  0264ef0  stb 7, 5647(29)
  0264ef4  bl 0x11ccc8
  0264ef8  nop
  0264efc  lwz 3, 288(30)
  0264f00  cmpwi 3, -1
  0264f04  bt 2, 0x264f9c
  0264f08  lis 28, 165
  0264f0c  slwi 3, 3, 7
  0264f10  li 5, 50
  0264f14  li 6, 1
  0264f18  lwz 4, 7128(28)
  0264f1c  addc 3, 4, 3
  0264f20  addic 4, 3, 48
  0264f24  addic 7, 3, 112
  0264f28  clrldi 3, 4, 32
  0264f2c  clrldi 4, 7, 32
  0264f30  bl 0xa0c38
  0264f34  nop
  0264f38  lwz 3, 288(30)
  0264f3c  lwz 4, 7128(28)
  0264f40  slwi 3, 3, 7
  0264f44  addc 3, 4, 3
  0264f48  clrldi 3, 3, 32
  0264f4c  lfs 1, 48(3)
  0264f50  stfs 1, 16(31)
  0264f54  lfs 1, 52(3)
  0264f58  stfs 1, 20(31)
  0264f5c  lfs 1, 56(3)
  0264f60  stfs 1, 24(31)
  0264f64  lfs 1, 60(3)
  0264f68  stfs 1, 28(31)
  0264f6c  lwz 3, 288(30)
  0264f70  slwi 3, 3, 7
  0264f74  addc 3, 4, 3
  0264f78  clrldi 3, 3, 32
  0264f7c  lfs 1, 112(3)
  0264f80  stfs 1, 64(31)
  0264f84  lfs 1, 116(3)
  0264f88  stfs 1, 68(31)
  0264f8c  lfs 1, 120(3)
  0264f90  stfs 1, 72(31)
  0264f94  lfs 1, 124(3)
  0264f98  stfs 1, 76(31)
  0264f9c  li 4, 0
  0264fa0  li 3, 6
  0264fa4  bl 0x11afac
  0264fa8  nop
  0264fac  addic 4, 31, 64
  0264fb0  addic 3, 31, 16
  0264fb4  li 5, 1
  0264fb8  li 6, 0
  0264fbc  li 7, 0
  0264fc0  bl 0x47f74
  0264fc4  nop
  0264fc8  lis 4, 122
  0264fcc  li 3, 0
  0264fd0  li 6, 255
  0264fd4  lis 5, 122
  0264fd8  lis 7, 122
  0264fdc  lfs 1, -15628(4)
  0264fe0  sth 3, 104(30)
  0264fe4  stfs 1, 100(30)
  0264fe8  stw 3, 108(30)
  0264fec  stw 3, 112(30)
  0264ff0  stw 3, 132(30)
  0264ff4  stw 3, 128(30)
  0264ff8  sth 6, 50(31)
  0264ffc  lfs 1, 72(31)
  0265000  stb 6, 48(31)
  0265004  stfs 1, 40(30)
  0265008  stfs 1, 56(30)
  026500c  lfs 1, -15548(5)
  0265010  lfs 2, -15444(7)
  0265014  lis 5, 122
  0265018  stw 3, 184(30)
  026501c  fmuls 1, 1, 2
  0265020  li 6, -1
  0265024  ori 3, 30, 0
  0265028  stfs 1, 180(30)
  026502c  lfs 1, -15544(5)
  0265030  fmuls 1, 1, 2
  0265034  stfs 1, 188(30)
  0265038  lwz 5, 8320(29)
  026503c  stw 6, 152(5)
  0265040  lfs 1, -15628(4)
  0265044  lfs 2, 56(30)
  0265048  lfs 3, 52(30)
  026504c  fneg 3, 3
  0265050  bl 0xfe610
  0265054  nop
  0265058  lwz 3, 284(30)
  026505c  cmpwi 3, 0
  0265060  bf 1, 0x26507c
  0265064  extsw 3, 3
  0265068  li 4, 1
  026506c  li 5, 1
  0265070  li 6, 1
  0265074  bl 0x10434c
  0265078  nop
  026507c  li 3, 805
  0265080  li 4, 0
  0265084  li 5, 0
  0265088  li 6, -1
  026508c  bl 0x104430
  0265090  nop
  0265094  lis 3, 38
  0265098  lfs 1, 24(31)
  026509c  lis 4, 122
  02650a0  addi 3, 3, 16888
  02650a4  li 5, 1
  02650a8  lfs 2, 4(3)
  02650ac  lwz 3, 36(31)
  02650b0  fadds 1, 1, 2
  02650b4  stfs 1, 24(31)
  02650b8  lfs 1, 36(3)
  02650bc  lfs 2, -15444(4)
  02650c0  fmuls 1, 1, 2
  02650c4  stfs 1, 44(31)
  02650c8  stb 5, 8357(29)
  02650cc  lwz 3, 264(30)
  02650d0  cmpwi 3, -1
  02650d4  bf 2, 0x2650f0
  02650d8  li 3, 0
  02650dc  li 4, 4
  02650e0  ori 5, 31, 0
  02650e4  bl 0x15d12c
  02650e8  nop
  02650ec  stw 3, 264(30)
  02650f0  bl 0x7b7d8
  02650f4  nop
  02650f8  lis 5, 161
  02650fc  li 6, 2
  0265100  ori 3, 31, 0
  0265104  ori 4, 30, 0
  0265108  stw 6, 2248(5)
  026510c  bl 0x262730
  0265110  li 3, 4
  0265114  stb 3, 32(31)
  0265118  b 0x2658a0
  026511c  li 3, 6
  0265120  li 4, 0
  0265124  bl 0x11afac
  0265128  nop
  026512c  lis 3, 161
  0265130  li 4, 2
  0265134  lis 5, 150
  0265138  stw 4, 2248(3)
  026513c  lwz 4, 264(30)
  0265140  addic 3, 5, 14176
  0265144  sldi 5, 4, 7
  0265148  sldi 4, 4, 4
  026514c  subc 4, 5, 4
  0265150  extsw 4, 4
  0265154  addc 3, 3, 4
  0265158  lwz 4, 136(3)
  026515c  cmpw 4, 31
  0265160  bf 2, 0x265170
  0265164  lbz 3, 116(3)
  0265168  cmpwi 3, 0
  026516c  bf 2, 0x265190
  0265170  li 6, -1
  0265174  li 3, 0
  0265178  li 4, 4
  026517c  ori 5, 31, 0
  0265180  stw 6, 264(30)
  0265184  bl 0x15d12c
  0265188  nop
  026518c  stw 3, 264(30)
  0265190  ori 3, 31, 0
  0265194  ori 4, 30, 0
  0265198  bl 0x262730
  026519c  lwz 3, 232(30)
  02651a0  cmpwi 3, 0
  02651a4  bt 1, 0x2651bc
  02651a8  lis 3, 122
  02651ac  li 4, 8
  02651b0  lwz 3, -15228(3)
  02651b4  stw 3, 248(30)
  02651b8  stb 4, 32(31)
  02651bc  lis 3, 38
  02651c0  lwz 4, 304(30)
  02651c4  addi 3, 3, 16888
  02651c8  cmpwi 4, 0
  02651cc  lfs 1, 8(3)
  02651d0  bt 2, 0x265204
  02651d4  lis 3, 38
  02651d8  lis 5, 114
  02651dc  addi 4, 3, 16888
  02651e0  addic 3, 30, 304
  02651e4  lfs 2, 28(4)
  02651e8  lfs 3, -3052(5)
  02651ec  fmuls 2, 3, 2
  02651f0  bl 0x109af0
  02651f4  nop
  02651f8  lis 3, 150
  02651fc  lfs 1, 304(30)
  0265200  stfs 1, -12528(3)
  0265204  lbz 3, 5647(29)
  0265208  clrlwi 3, 3, 31
  026520c  cmpwi 3, 0
  0265210  bt 2, 0x2658a0
  0265214  li 3, 5
  0265218  stb 3, 32(31)
  026521c  b 0x2658a0
  0265220  li 5, 0
  0265224  lwz 6, 8320(29)
  0265228  li 3, 0
  026522c  li 4, 1
  0265230  stb 5, 8357(29)
  0265234  stw 5, 152(6)
  0265238  bl 0xb72b0
  026523c  nop
  0265240  li 3, 0
  0265244  bl 0x481d0
  0265248  nop
  026524c  lhz 3, 5644(29)
  0265250  li 4, 0
  0265254  extsh 3, 3
  0265258  bl 0xc8b28
  026525c  nop
  0265260  lfs 1, 64(30)
  0265264  ori 3, 31, 0
  0265268  stfs 1, 16(31)
  026526c  lfs 1, 68(30)
  0265270  stfs 1, 20(31)
  0265274  lfs 1, 72(30)
  0265278  stfs 1, 24(31)
  026527c  lfs 1, 76(30)
  0265280  stfs 1, 28(31)
  0265284  lfs 1, 80(30)
  0265288  stfs 1, 64(31)
  026528c  lfs 1, 84(30)
  0265290  lwz 4, 36(31)
  0265294  stfs 1, 68(31)
  0265298  lfs 1, 88(30)
  026529c  stfs 1, 72(31)
  02652a0  lfs 1, 92(30)
  02652a4  stfs 1, 76(31)
  02652a8  lfs 1, 36(4)
  02652ac  stfs 1, 44(31)
  02652b0  bl 0xf30a0
  02652b4  nop
  02652b8  lis 3, 165
  02652bc  lwz 4, 252(30)
  02652c0  li 5, 0
  02652c4  li 6, 1
  02652c8  slwi 4, 4, 7
  02652cc  lwz 3, 7128(3)
  02652d0  addc 3, 3, 4
  02652d4  addic 4, 3, 48
  02652d8  addic 7, 3, 112
  02652dc  clrldi 3, 4, 32
  02652e0  clrldi 4, 7, 32
  02652e4  bl 0xa0c38
  02652e8  nop
  02652ec  li 3, 0
  02652f0  li 4, 5
  02652f4  bl 0x11ccc8
  02652f8  nop
  02652fc  lwz 3, 264(30)
  0265300  cmpwi 3, -1
  0265304  bt 2, 0x265348
  0265308  sldi 4, 3, 7
  026530c  sldi 6, 3, 4
  0265310  lis 5, 150
  0265314  subc 4, 4, 6
  0265318  addic 5, 5, 14176
  026531c  extsw 4, 4
  0265320  addc 4, 5, 4
  0265324  lwz 5, 136(4)
  0265328  cmpw 5, 31
  026532c  bf 2, 0x265348
  0265330  lbz 4, 116(4)
  0265334  cmpwi 4, 0
  0265338  bt 2, 0x265348
  026533c  extsw 3, 3
  0265340  bl 0x15cdb0
  0265344  nop
  0265348  li 4, -1
  026534c  lwz 3, 268(30)
  0265350  cmpwi 3, -1
  0265354  stw 4, 264(30)
  0265358  bt 2, 0x26539c
  026535c  sldi 4, 3, 7
  0265360  sldi 6, 3, 4
  0265364  lis 5, 150
  0265368  subc 4, 4, 6
  026536c  addic 5, 5, 14176
  0265370  extsw 4, 4
  0265374  addc 4, 5, 4
  0265378  lwz 5, 136(4)
  026537c  cmpw 5, 31
  0265380  bf 2, 0x26539c
  0265384  lbz 4, 116(4)
  0265388  cmpwi 4, 0
  026538c  bt 2, 0x26539c
  0265390  extsw 3, 3
  0265394  bl 0x15cdb0
  0265398  nop
  026539c  li 3, -1
  02653a0  lis 6, 16253
  02653a4  li 5, 1
  02653a8  lis 4, 150
  02653ac  stw 3, 268(30)
  02653b0  ori 3, 6, 28836
  02653b4  stb 5, 32(31)
  02653b8  stw 3, 304(30)
  02653bc  stw 3, -12528(4)
  02653c0  b 0x2658a0
  02653c4  li 4, 0
  02653c8  li 3, 6
  02653cc  bl 0x11afac
  02653d0  nop
  02653d4  lis 4, 161
  02653d8  li 5, 2
  02653dc  addic 3, 30, 98
  02653e0  stw 5, 2248(4)
  02653e4  bl 0x4fffb4
  02653e8  nop
  02653ec  cmpwi 3, 0
  02653f0  bt 2, 0x2658a0
  02653f4  bl 0x7b868
  02653f8  nop
  02653fc  lwz 3, 8320(29)
  0265400  li 4, 0
  0265404  stw 4, 152(3)
  0265408  bl 0x83950
  026540c  nop
  0265410  li 3, 0
  0265414  bl 0x481d0
  0265418  nop
  026541c  li 3, 0
  0265420  li 4, 5
  0265424  bl 0x11ccc8
  0265428  nop
  026542c  lfs 1, 64(30)
  0265430  ori 3, 31, 0
  0265434  stfs 1, 16(31)
  0265438  lfs 1, 68(30)
  026543c  stfs 1, 20(31)
  0265440  lfs 1, 72(30)
  0265444  stfs 1, 24(31)
  0265448  lfs 1, 76(30)
  026544c  stfs 1, 28(31)
  0265450  lfs 1, 80(30)
  0265454  stfs 1, 64(31)
  0265458  lfs 1, 84(30)
  026545c  stfs 1, 68(31)
  0265460  lfs 1, 88(30)
  0265464  stfs 1, 72(31)
  0265468  lfs 1, 92(30)
  026546c  stfs 1, 76(31)
  0265470  bl 0xf30a0
  0265474  nop
  0265478  lwz 3, 264(30)
  026547c  cmpwi 3, -1
  0265480  bt 2, 0x2654c4
  0265484  sldi 4, 3, 7
  0265488  sldi 6, 3, 4
  026548c  lis 5, 150
  0265490  subc 4, 4, 6
  0265494  addic 5, 5, 14176
  0265498  extsw 4, 4
  026549c  addc 4, 5, 4
  02654a0  lwz 5, 136(4)
  02654a4  cmpw 5, 31
  02654a8  bf 2, 0x2654c4
  02654ac  lbz 4, 116(4)
  02654b0  cmpwi 4, 0
  02654b4  bt 2, 0x2654c4
  02654b8  extsw 3, 3
  02654bc  bl 0x15cdb0
  02654c0  nop
  02654c4  li 4, -1
  02654c8  lwz 3, 268(30)
  02654cc  cmpwi 3, -1
  02654d0  stw 4, 264(30)
  02654d4  bt 2, 0x265518
  02654d8  sldi 4, 3, 7
  02654dc  sldi 6, 3, 4
  02654e0  lis 5, 150
  02654e4  subc 4, 4, 6
  02654e8  addic 5, 5, 14176
  02654ec  extsw 4, 4
  02654f0  addc 4, 5, 4
  02654f4  lwz 5, 136(4)
  02654f8  cmpw 5, 31
  02654fc  bf 2, 0x265518
  0265500  lbz 4, 116(4)
  0265504  cmpwi 4, 0
  0265508  bt 2, 0x265518
  026550c  extsw 3, 3
  0265510  bl 0x15cdb0
  0265514  nop
  0265518  li 3, -1
  026551c  li 4, 0
  0265520  stw 3, 268(30)
  0265524  stb 4, 32(31)
  0265528  b 0x2658a0
  026552c  li 3, 6
  0265530  li 4, 0
  0265534  bl 0x11afac
  0265538  nop
  026553c  lis 5, 161
  0265540  li 6, 2
  0265544  ori 3, 31, 0
  0265548  ori 4, 30, 0
  026554c  stw 6, 2248(5)
  0265550  bl 0x262730
  0265554  addic 3, 30, 248
  0265558  bl 0x4fff60
  026555c  nop
  0265560  cmpwi 3, 0
  0265564  lfs 1, 304(30)
  0265568  bt 2, 0x2655a0
  026556c  lis 3, 38
  0265570  lis 5, 114
  0265574  addi 4, 3, 16888
  0265578  addic 3, 30, 304
  026557c  lfs 3, 28(4)
  0265580  lfs 1, 40(4)
  0265584  lfs 4, -3052(5)
  0265588  fmuls 2, 4, 3
  026558c  bl 0x109af0
  0265590  nop
  0265594  lfs 1, 304(30)
  0265598  lis 3, 150
  026559c  stfs 1, -12528(3)
  02655a0  lis 3, 38
  02655a4  addi 3, 3, 16888
  02655a8  lfs 2, 40(3)
  02655ac  fcmpu 0, 1, 2
  02655b0  bt 0, 0x2658a0
  02655b4  li 5, 0
  02655b8  lwz 6, 8320(29)
  02655bc  li 3, 0
  02655c0  li 4, 1
  02655c4  stb 5, 8357(29)
  02655c8  stw 5, 152(6)
  02655cc  bl 0xb72b0
  02655d0  nop
  02655d4  li 3, 0
  02655d8  bl 0x481d0
  02655dc  nop
  02655e0  li 3, 0
  02655e4  li 4, 5
  02655e8  bl 0x11ccc8
  02655ec  nop
  02655f0  lwz 3, 256(30)
  02655f4  cmpwi 3, -1
  02655f8  bf 2, 0x26564c
  02655fc  lis 3, 101
  0265600  addic 3, 3, 21880
  0265604  bl 0x5cd098
  0265608  nop
  026560c  lfs 1, 64(30)
  0265610  stfs 1, 16(31)
  0265614  lfs 1, 68(30)
  0265618  stfs 1, 20(31)
  026561c  lfs 1, 72(30)
  0265620  stfs 1, 24(31)
  0265624  lfs 1, 76(30)
  0265628  stfs 1, 28(31)
  026562c  lfs 1, 80(30)
  0265630  stfs 1, 64(31)
  0265634  lfs 1, 84(30)
  0265638  stfs 1, 68(31)
  026563c  lfs 1, 88(30)
  0265640  stfs 1, 72(31)
  0265644  lfs 1, 92(30)
  0265648  b 0x2656c0
  026564c  lis 4, 165
  0265650  slwi 3, 3, 7
  0265654  lwz 4, 7128(4)
  0265658  addc 3, 4, 3
  026565c  clrldi 3, 3, 32
  0265660  lfs 1, 48(3)
  0265664  stfs 1, 16(31)
  0265668  lfs 1, 52(3)
  026566c  stfs 1, 20(31)
  0265670  lfs 2, 56(3)
  0265674  stfs 2, 24(31)
  0265678  lfs 1, 60(3)
  026567c  stfs 1, 28(31)
  0265680  lwz 3, 256(30)
  0265684  slwi 3, 3, 7
  0265688  addc 3, 4, 3
  026568c  lis 4, 38
  0265690  clrldi 3, 3, 32
  0265694  addi 4, 4, 16888
  0265698  lfs 1, 112(3)
  026569c  stfs 1, 64(31)
  02656a0  lfs 1, 116(3)
  02656a4  stfs 1, 68(31)
  02656a8  lfs 1, 120(3)
  02656ac  stfs 1, 72(31)
  02656b0  lfs 3, 52(4)
  02656b4  lfs 1, 124(3)
  02656b8  fadds 2, 2, 3
  02656bc  stfs 2, 24(31)
  02656c0  lwz 4, 36(31)
  02656c4  ori 3, 31, 0
  02656c8  stfs 1, 76(31)
  02656cc  lfs 1, 36(4)
  02656d0  stfs 1, 44(31)
  02656d4  bl 0xf30a0
  02656d8  nop
  02656dc  lwz 3, 252(30)
  02656e0  cmpwi 3, -1
  02656e4  bf 2, 0x2656fc
  02656e8  lis 3, 101
  02656ec  addic 3, 3, 21936
  02656f0  bl 0x5cd098
  02656f4  nop
  02656f8  b 0x26576c
  02656fc  lwz 3, 284(30)
  0265700  cmpwi 3, 0
  0265704  bf 1, 0x265720
  0265708  extsw 3, 3
  026570c  li 4, 0
  0265710  li 5, 0
  0265714  li 6, 0
  0265718  bl 0x10434c
  026571c  nop
  0265720  li 3, 805
  0265724  li 4, 1
  0265728  li 5, 1
  026572c  li 6, -1
  0265730  bl 0x104430
  0265734  nop
  0265738  lis 3, 165
  026573c  lwz 4, 252(30)
  0265740  li 5, 0
  0265744  slwi 4, 4, 7
  0265748  li 6, 1
  026574c  lwz 3, 7128(3)
  0265750  addc 3, 3, 4
  0265754  addic 4, 3, 48
  0265758  addic 7, 3, 112
  026575c  clrldi 3, 4, 32
  0265760  clrldi 4, 7, 32
  0265764  bl 0xa0c38
  0265768  nop
  026576c  lbz 3, 176(31)
  0265770  cmpwi 3, 255
  0265774  bt 2, 0x265780
  0265778  bl 0xf1e50
  026577c  nop
  0265780  lwz 3, 264(30)
  0265784  cmpwi 3, -1
  0265788  bt 2, 0x2657cc
  026578c  sldi 4, 3, 7
  0265790  sldi 6, 3, 4
  0265794  lis 5, 150
  0265798  subc 4, 4, 6
  026579c  addic 5, 5, 14176
  02657a0  extsw 4, 4
  02657a4  addc 4, 5, 4
  02657a8  lwz 5, 136(4)
  02657ac  cmpw 5, 31
  02657b0  bf 2, 0x2657cc
  02657b4  lbz 4, 116(4)
  02657b8  cmpwi 4, 0
  02657bc  bt 2, 0x2657cc
  02657c0  extsw 3, 3
  02657c4  bl 0x15cdb0
  02657c8  nop
  02657cc  li 4, -1
  02657d0  lwz 3, 268(30)
  02657d4  cmpwi 3, -1
  02657d8  stw 4, 264(30)
  02657dc  bt 2, 0x265820
  02657e0  sldi 4, 3, 7
  02657e4  sldi 6, 3, 4
  02657e8  lis 5, 150
  02657ec  subc 4, 4, 6
  02657f0  addic 5, 5, 14176
  02657f4  extsw 4, 4
  02657f8  addc 4, 5, 4
  02657fc  lwz 5, 136(4)
  0265800  cmpw 5, 31
  0265804  bf 2, 0x265820
  0265808  lbz 4, 116(4)
  026580c  cmpwi 4, 0
  0265810  bt 2, 0x265820
  0265814  extsw 3, 3
  0265818  bl 0x15cdb0
  026581c  nop
  0265820  li 5, -1
  0265824  addic 3, 29, 128
  0265828  addic 4, 29, 144
  026582c  stw 5, 268(30)
  0265830  bl 0x151e70
  0265834  nop
  0265838  li 3, 9
  026583c  stb 3, 32(31)
  0265840  b 0x2658a0
  0265844  lis 3, 38
  0265848  lwz 4, 304(30)
  026584c  addi 3, 3, 16888
  0265850  cmpwi 4, 0
  0265854  lfs 1, 8(3)
  0265858  bt 2, 0x265890
  026585c  lis 3, 38
  0265860  lis 5, 114
  0265864  addi 4, 3, 16888
  0265868  addic 3, 30, 304
  026586c  lfs 2, 28(4)
  0265870  lfs 3, -3052(5)
  0265874  fmuls 2, 3, 2
  0265878  bl 0x109af0
  026587c  nop
  0265880  lis 3, 150
  0265884  lfs 1, 304(30)
  0265888  stfs 1, -12528(3)
  026588c  b 0x2658a0
  0265890  ori 3, 31, 0
  0265894  bl 0xefb38
  0265898  nop
  026589c  b 0x2659dc
  02658a0  lis 4, 38
  02658a4  lwz 5, 16(31)
  02658a8  lis 3, 16752
  02658ac  addi 4, 4, 16888
  02658b0  lfs 3, 16(31)
  02658b4  srawi 6, 5, 31
  02658b8  srwi 7, 6, 1
  02658bc  xor 5, 7, 5
  02658c0  lfs 1, 44(4)
  02658c4  subc 4, 5, 6
  02658c8  cmpw 4, 3
  02658cc  bf 0, 0x2658d8
  02658d0  fmr 3, 1
  02658d4  stw 3, 16(31)
  02658d8  lis 4, 38
  02658dc  addi 4, 4, 16888
  02658e0  lfs 2, 56(4)
  02658e4  fcmpu 0, 3, 2
  02658e8  cror 6, 0, 2
  02658ec  bt 6, 0x2658fc
  02658f0  lis 4, 17532
  02658f4  fmr 3, 2
  02658f8  stw 4, 16(31)
  02658fc  lwz 4, 20(31)
  0265900  lfs 4, 20(31)
  0265904  srawi 5, 4, 31
  0265908  srwi 6, 5, 1
  026590c  xor 4, 6, 4
  0265910  subc 4, 4, 5
  0265914  cmpw 4, 3
  0265918  bf 0, 0x265924
  026591c  fmr 4, 1
  0265920  stw 3, 20(31)
  0265924  fcmpu 0, 4, 2
  0265928  cror 6, 0, 2
  026592c  bt 6, 0x26593c
  0265930  lis 4, 17532
  0265934  fmr 4, 2
  0265938  stw 4, 20(31)
  026593c  lwz 4, 24(31)
  0265940  lfs 5, 24(31)
  0265944  srawi 5, 4, 31
  0265948  srwi 6, 5, 1
  026594c  xor 4, 6, 4
  0265950  subc 4, 4, 5
  0265954  cmpw 4, 3
  0265958  bf 0, 0x265964
  026595c  fmr 5, 1
  0265960  stw 3, 24(31)
  0265964  fmr 1, 5
  0265968  fcmpu 0, 1, 2
  026596c  cror 6, 0, 2
  0265970  bt 6, 0x265980
  0265974  lis 3, 17532
  0265978  fmr 1, 2
  026597c  stw 3, 24(31)
  0265980  lbz 3, 32(31)
  0265984  cmpwi 3, 4
  0265988  cmpwi 1, 3, 2
  026598c  cmpwi 6, 3, 5
  0265990  bf 2, 0x2659c8
  0265994  stfs 3, 128(29)
  0265998  stfs 4, 132(29)
  026599c  stfs 1, 136(29)
  02659a0  lfs 1, 28(31)
  02659a4  stfs 1, 140(29)
  02659a8  lfs 1, 48(30)
  02659ac  stfs 1, 144(29)
  02659b0  lfs 1, 52(30)
  02659b4  stfs 1, 148(29)
  02659b8  lfs 1, 56(30)
  02659bc  stfs 1, 152(29)
  02659c0  lfs 1, 60(30)
  02659c4  stfs 1, 156(29)
  02659c8  bf 5, 0x2659dc
  02659cc  bf 24, 0x2659dc
  02659d0  ori 3, 31, 0
  02659d4  ori 4, 30, 0
  02659d8  bl 0x25f3c8
  02659dc  ld 0, 432(1)
  02659e0  mtlr 0
  02659e4  lfd 29, 392(1)
  02659e8  lfd 30, 400(1)
  02659ec  lfd 31, 408(1)
  02659f0  ld 26, 344(1)
  02659f4  ld 27, 352(1)
  02659f8  ld 28, 360(1)
  02659fc  ld 29, 368(1)
  0265a00  ld 30, 376(1)
  0265a04  ld 31, 384(1)
  0265a08  addi 1, 1, 416
  0265a0c  blr
