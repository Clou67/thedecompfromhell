# game/update/moby157.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M157_0029e140:   # 0x29e140, 0x3dc bytes
  029e140  stdu 1, -368(1)
  029e144  mflr 0
  029e148  std 0, 384(1)
  029e14c  stfd 18, 256(1)
  029e150  stfd 19, 264(1)
  029e154  stfd 20, 272(1)
  029e158  stfd 21, 280(1)
  029e15c  stfd 22, 288(1)
  029e160  stfd 23, 296(1)
  029e164  stfd 24, 304(1)
  029e168  stfd 25, 312(1)
  029e16c  stfd 26, 320(1)
  029e170  stfd 27, 328(1)
  029e174  stfd 28, 336(1)
  029e178  stfd 29, 344(1)
  029e17c  stfd 30, 352(1)
  029e180  stfd 31, 360(1)
  029e184  std 31, 248(1)
  029e188  ori 31, 3, 0
  029e18c  lbz 3, 188(3)
  029e190  std 30, 240(1)
  029e194  std 29, 232(1)
  029e198  std 28, 224(1)
  029e19c  std 27, 216(1)
  029e1a0  std 26, 208(1)
  029e1a4  std 25, 200(1)
  029e1a8  cmpwi 3, 0
  029e1ac  bf 1, 0x29e4b8
  029e1b0  lis 3, 42
  029e1b4  addi 25, 3, -7944
  029e1b8  addic 3, 31, 188
  029e1bc  lfs 31, 8(25)
  029e1c0  lfs 18, 0(25)
  029e1c4  lfs 1, 4(25)
  029e1c8  lfs 2, 12(25)
  029e1cc  fmr 28, 1
  029e1d0  fmr 30, 2
  029e1d4  bl 0x500060
  029e1d8  nop
  029e1dc  lfs 1, 192(31)
  029e1e0  lfs 2, 196(31)
  029e1e4  lfs 3, 200(31)
  029e1e8  lfs 4, 16(31)
  029e1ec  lfs 5, 20(31)
  029e1f0  fmadds 1, 1, 31, 4
  029e1f4  lfs 4, 24(31)
  029e1f8  fmadds 2, 2, 31, 5
  029e1fc  li 26, 0
  029e200  fmadds 3, 3, 31, 4
  029e204  lfs 31, 208(31)
  029e208  lis 27, 151
  029e20c  lfs 6, 212(31)
  029e210  addic 28, 1, 144
  029e214  lfs 29, 216(31)
  029e218  addic 27, 27, -25376
  029e21c  lfs 4, 220(31)
  029e220  addic 29, 1, 160
  029e224  lfs 7, 28(31)
  029e228  lis 30, 114
  029e22c  ori 31, 26, 0
  029e230  fadds 28, 4, 28
  029e234  fmadds 1, 31, 30, 1
  029e238  stfs 7, 156(1)
  029e23c  fmadds 2, 6, 30, 2
  029e240  fmadds 3, 29, 30, 3
  029e244  fmr 30, 6
  029e248  stfs 1, 144(1)
  029e24c  stfs 2, 148(1)
  029e250  stfs 3, 152(1)
  029e254  lfs 19, 16(25)
  029e258  lfs 20, 20(25)
  029e25c  lfs 21, 24(25)
  029e260  lfs 22, 28(25)
  029e264  lfs 23, 32(25)
  029e268  lfs 24, 36(25)
  029e26c  lfs 25, 40(25)
  029e270  lfs 26, 44(25)
  029e274  lfs 27, 48(25)
  029e278  fmr 2, 20
  029e27c  fmr 1, 19
  029e280  bl 0xfcbe8
  029e284  nop
  029e288  fmuls 2, 30, 30
  029e28c  lfs 4, 256(27)
  029e290  lfs 5, 260(27)
  029e294  lfs 6, 320(27)
  029e298  lfs 7, 324(27)
  029e29c  fmadds 2, 31, 31, 2
  029e2a0  stfs 28, 172(1)
  029e2a4  lfs 28, 332(27)
  029e2a8  fmadds 2, 29, 29, 2
  029e2ac  fsqrts 3, 2
  029e2b0  fmr 2, 22
  029e2b4  fdivs 1, 1, 3
  029e2b8  fsub 8, 18, 3
  029e2bc  fsub 9, 18, 3
  029e2c0  fsub 12, 18, 3
  029e2c4  fsub 10, 3, 18
  029e2c8  fsub 11, 3, 18
  029e2cc  fsub 3, 3, 18
  029e2d0  fmuls 13, 31, 1
  029e2d4  fmuls 0, 30, 1
  029e2d8  fmuls 1, 29, 1
  029e2dc  fmuls 31, 6, 21
  029e2e0  fmuls 30, 7, 21
  029e2e4  fmr 29, 18
  029e2e8  fsel 6, 8, 18, 13
  029e2ec  fsel 7, 9, 18, 0
  029e2f0  fsel 8, 12, 18, 1
  029e2f4  fsel 6, 10, 6, 13
  029e2f8  fsel 7, 11, 7, 0
  029e2fc  fsel 3, 3, 8, 1
  029e300  fmr 1, 29
  029e304  fmadds 4, 4, 21, 6
  029e308  fmadds 5, 5, 21, 7
  029e30c  stfs 6, 160(1)
  029e310  stfs 7, 164(1)
  029e314  stfs 3, 168(1)
  029e318  fadds 6, 3, 29
  029e31c  stfs 3, 168(1)
  029e320  fadds 3, 4, 31
  029e324  fadds 7, 5, 30
  029e328  stfs 4, 160(1)
  029e32c  stfs 5, 164(1)
  029e330  stfs 6, 168(1)
  029e334  stfs 3, 160(1)
  029e338  stfs 7, 164(1)
  029e33c  bl 0xfe4f0
  029e340  nop
  029e344  bl 0x502758
  029e348  nop
  029e34c  lfs 1, -3056(30)
  029e350  lis 7, 255
  029e354  ori 8, 3, 0
  029e358  fmr 2, 25
  029e35c  fmuls 5, 1, 23
  029e360  ori 3, 28, 0
  029e364  fmr 1, 24
  029e368  ori 4, 29, 0
  029e36c  li 6, 127
  029e370  fmr 3, 26
  029e374  fmr 4, 29
  029e378  ori 7, 7, 65535
  029e37c  fctiwz 6, 5
  029e380  fmr 5, 27
  029e384  stfd 6, 176(1)
  029e388  lwz 5, 180(1)
  029e38c  extsw 5, 5
  029e390  bl 0x12e3e8
  029e394  nop
  029e398  addic 26, 26, 1
  029e39c  cmpwi 26, 2
  029e3a0  bt 0, 0x29e278
  029e3a4  lis 3, 42
  029e3a8  fmr 2, 20
  029e3ac  fmr 1, 19
  029e3b0  addi 3, 3, -7944
  029e3b4  lfs 29, 52(3)
  029e3b8  lfs 27, 56(3)
  029e3bc  lfs 3, 60(3)
  029e3c0  lfs 4, 64(3)
  029e3c4  fmr 26, 3
  029e3c8  fmr 25, 4
  029e3cc  bl 0xfcbe8
  029e3d0  nop
  029e3d4  fmuls 2, 30, 30
  029e3d8  lfs 3, 256(27)
  029e3dc  lfs 4, 260(27)
  029e3e0  lfs 5, -3056(30)
  029e3e4  lfs 6, 320(27)
  029e3e8  fmuls 8, 5, 27
  029e3ec  fmuls 5, 5, 26
  029e3f0  fmadds 2, 31, 31, 2
  029e3f4  lfs 7, 324(27)
  029e3f8  stw 31, 168(1)
  029e3fc  stfs 28, 172(1)
  029e400  fctiwz 8, 8
  029e404  fctiwz 5, 5
  029e408  stw 31, 168(1)
  029e40c  fmadds 2, 18, 18, 2
  029e410  stw 31, 168(1)
  029e414  fsqrts 2, 2
  029e418  stfd 8, 176(1)
  029e41c  lwz 3, 180(1)
  029e420  stfd 5, 176(1)
  029e424  lwz 4, 180(1)
  029e428  extsw 3, 3
  029e42c  extsw 4, 4
  029e430  fdivs 1, 1, 2
  029e434  fsub 8, 18, 2
  029e438  fsub 9, 18, 2
  029e43c  fsub 10, 2, 18
  029e440  fsub 2, 2, 18
  029e444  fmuls 5, 31, 1
  029e448  fmuls 1, 30, 1
  029e44c  fsel 8, 8, 18, 5
  029e450  fsel 9, 9, 18, 1
  029e454  fsel 5, 10, 8, 5
  029e458  fsel 1, 2, 9, 1
  029e45c  fmadds 2, 3, 29, 5
  029e460  fmadds 3, 4, 29, 1
  029e464  stfs 5, 160(1)
  029e468  stfs 1, 164(1)
  029e46c  fmadds 1, 6, 29, 2
  029e470  fmadds 4, 7, 29, 3
  029e474  stfs 2, 160(1)
  029e478  stfs 3, 164(1)
  029e47c  stfs 1, 160(1)
  029e480  stfs 4, 164(1)
  029e484  bl 0xfe484
  029e488  nop
  029e48c  lis 5, 20224
  029e490  fmr 1, 25
  029e494  lis 6, 8191
  029e498  ori 8, 3, 0
  029e49c  li 9, 1
  029e4a0  ori 3, 28, 0
  029e4a4  ori 4, 29, 0
  029e4a8  ori 5, 5, 32767
  029e4ac  ori 6, 6, 65535
  029e4b0  bl 0x1268f8
  029e4b4  nop
  029e4b8  ld 0, 384(1)
  029e4bc  mtlr 0
  029e4c0  lfd 18, 256(1)
  029e4c4  lfd 19, 264(1)
  029e4c8  lfd 20, 272(1)
  029e4cc  lfd 21, 280(1)
  029e4d0  lfd 22, 288(1)
  029e4d4  lfd 23, 296(1)
  029e4d8  lfd 24, 304(1)
  029e4dc  lfd 25, 312(1)
  029e4e0  lfd 26, 320(1)
  029e4e4  lfd 27, 328(1)
  029e4e8  lfd 28, 336(1)
  029e4ec  lfd 29, 344(1)
  029e4f0  lfd 30, 352(1)
  029e4f4  lfd 31, 360(1)
  029e4f8  ld 25, 200(1)
  029e4fc  ld 26, 208(1)
  029e500  ld 27, 216(1)
  029e504  ld 28, 224(1)
  029e508  ld 29, 232(1)
  029e50c  ld 30, 240(1)
  029e510  ld 31, 248(1)
  029e514  addi 1, 1, 368
  029e518  blr

M157_0029e578:   # 0x29e578, 0x4c0 bytes
  029e578  stdu 1, -368(1)
  029e57c  mflr 0
  029e580  std 0, 384(1)
  029e584  stfd 19, 264(1)
  029e588  stfd 20, 272(1)
  029e58c  stfd 21, 280(1)
  029e590  stfd 22, 288(1)
  029e594  stfd 23, 296(1)
  029e598  stfd 24, 304(1)
  029e59c  stfd 25, 312(1)
  029e5a0  stfd 26, 320(1)
  029e5a4  stfd 27, 328(1)
  029e5a8  stfd 28, 336(1)
  029e5ac  stfd 29, 344(1)
  029e5b0  stfd 30, 352(1)
  029e5b4  stfd 31, 360(1)
  029e5b8  std 28, 232(1)
  029e5bc  lis 4, 42
  029e5c0  addi 4, 4, -6884
  029e5c4  std 30, 248(1)
  029e5c8  lis 28, 151
  029e5cc  li 30, 0
  029e5d0  addic 28, 28, -25376
  029e5d4  lfs 1, 0(4)
  029e5d8  lfs 2, 4(4)
  029e5dc  lfs 3, 192(3)
  029e5e0  lfs 4, 196(3)
  029e5e4  lfs 5, 200(3)
  029e5e8  lfs 6, 16(3)
  029e5ec  lfs 7, 20(3)
  029e5f0  lfs 8, 24(3)
  029e5f4  fmadds 3, 3, 1, 6
  029e5f8  lfs 9, 208(3)
  029e5fc  fmadds 4, 4, 1, 7
  029e600  lfs 10, 212(3)
  029e604  fmadds 1, 5, 1, 8
  029e608  lfs 6, 216(3)
  029e60c  std 29, 240(1)
  029e610  lfs 31, 8(4)
  029e614  ori 29, 30, 0
  029e618  std 27, 224(1)
  029e61c  std 25, 208(1)
  029e620  lfs 5, 28(3)
  029e624  addic 27, 28, 1632
  029e628  std 26, 216(1)
  029e62c  lis 25, 114
  029e630  stfs 5, 172(1)
  029e634  std 31, 256(1)
  029e638  addic 26, 28, 1600
  029e63c  ori 31, 3, 0
  029e640  fmadds 3, 9, 2, 3
  029e644  fmadds 4, 10, 2, 4
  029e648  fmadds 1, 6, 2, 1
  029e64c  stfs 3, 160(1)
  029e650  stfs 4, 164(1)
  029e654  stfs 1, 168(1)
  029e658  lfs 30, 12(4)
  029e65c  lfs 29, 16(4)
  029e660  lfs 28, 20(4)
  029e664  lfs 27, 24(4)
  029e668  lfs 26, 28(4)
  029e66c  lfs 25, 32(4)
  029e670  lfs 24, 36(4)
  029e674  lfs 23, 40(4)
  029e678  lfs 22, 44(4)
  029e67c  lfs 21, 48(4)
  029e680  std 24, 200(1)
  029e684  lfs 20, 52(4)
  029e688  lfs 19, 56(4)
  029e68c  fmr 1, 30
  029e690  bl 0x502758
  029e694  nop
  029e698  cmpw 30, 3
  029e69c  bf 0, 0x29e848
  029e6a0  fmr 1, 31
  029e6a4  fmr 2, 29
  029e6a8  bl 0xfe4f0
  029e6ac  nop
  029e6b0  extsw 3, 30
  029e6b4  ori 4, 27, 0
  029e6b8  ori 5, 26, 0
  029e6bc  std 3, 176(1)
  029e6c0  addic 3, 1, 144
  029e6c4  lfd 2, 176(1)
  029e6c8  fcfid 2, 2
  029e6cc  frsp 2, 2
  029e6d0  fmadds 1, 2, 28, 1
  029e6d4  bl 0x1113e0
  029e6d8  nop
  029e6dc  fmr 2, 26
  029e6e0  fmr 1, 27
  029e6e4  bl 0xfcbe8
  029e6e8  nop
  029e6ec  lfs 2, 148(1)
  029e6f0  lfs 3, 144(1)
  029e6f4  fmuls 4, 2, 2
  029e6f8  lfs 5, 152(1)
  029e6fc  li 3, 0
  029e700  li 4, 3
  029e704  fmadds 4, 3, 3, 4
  029e708  fmadds 4, 5, 5, 4
  029e70c  fsqrts 4, 4
  029e710  fdivs 1, 1, 4
  029e714  fsub 6, 31, 4
  029e718  fsub 7, 31, 4
  029e71c  fsub 8, 31, 4
  029e720  fsub 9, 4, 31
  029e724  fsub 10, 4, 31
  029e728  fsub 4, 4, 31
  029e72c  fmuls 3, 3, 1
  029e730  fmuls 2, 2, 1
  029e734  fmuls 1, 5, 1
  029e738  fsel 5, 6, 31, 3
  029e73c  fsel 6, 7, 31, 2
  029e740  fsel 7, 8, 31, 1
  029e744  fsel 3, 9, 5, 3
  029e748  fsel 2, 10, 6, 2
  029e74c  fsel 1, 4, 7, 1
  029e750  stfs 3, 144(1)
  029e754  stfs 2, 148(1)
  029e758  stfs 1, 152(1)
  029e75c  bl 0xfe484
  029e760  nop
  029e764  ori 24, 3, 0
  029e768  li 3, 2
  029e76c  bl 0xfc620
  029e770  nop
  029e774  li 5, 0
  029e778  lwz 4, 768(28)
  029e77c  lfs 1, 256(28)
  029e780  subc 3, 5, 3
  029e784  neg 5, 24
  029e788  lfs 2, 260(28)
  029e78c  cntlzw 3, 3
  029e790  lfs 3, 264(28)
  029e794  subc 6, 24, 5
  029e798  lfs 4, 144(1)
  029e79c  sldi 3, 3, 58
  029e7a0  lfs 5, 148(1)
  029e7a4  cmpwi 4, 0
  029e7a8  lfs 6, 152(1)
  029e7ac  sradi 3, 3, 63
  029e7b0  and 24, 3, 6
  029e7b4  addc 24, 5, 24
  029e7b8  bt 2, 0x29e7d4
  029e7bc  fmadds 1, 1, 25, 4
  029e7c0  fmadds 2, 2, 25, 5
  029e7c4  fmadds 3, 3, 25, 6
  029e7c8  stfs 1, 144(1)
  029e7cc  stfs 2, 148(1)
  029e7d0  stfs 3, 152(1)
  029e7d4  lfs 1, -3056(25)
  029e7d8  fmuls 2, 1, 24
  029e7dc  fmuls 1, 1, 23
  029e7e0  fctiwz 2, 2
  029e7e4  fctiwz 1, 1
  029e7e8  stfd 2, 176(1)
  029e7ec  lwz 3, 180(1)
  029e7f0  stfd 1, 176(1)
  029e7f4  lwz 4, 180(1)
  029e7f8  extsw 3, 3
  029e7fc  extsw 4, 4
  029e800  bl 0xfe484
  029e804  nop
  029e808  lis 7, 255
  029e80c  ori 5, 3, 0
  029e810  fmr 1, 22
  029e814  addic 4, 1, 144
  029e818  fmr 2, 21
  029e81c  ori 8, 24, 0
  029e820  fmr 3, 20
  029e824  addic 3, 1, 160
  029e828  fmr 4, 19
  029e82c  li 6, 30
  029e830  fmr 5, 31
  029e834  ori 7, 7, 65535
  029e838  bl 0x12e3e8
  029e83c  nop
  029e840  addic 30, 30, 1
  029e844  b 0x29e68c
  029e848  lis 3, 42
  029e84c  addi 3, 3, -6884
  029e850  lfs 30, 60(3)
  029e854  lfs 29, 64(3)
  029e858  lfs 28, 68(3)
  029e85c  lfs 25, 72(3)
  029e860  lfs 24, 76(3)
  029e864  lfs 23, 80(3)
  029e868  fmr 1, 30
  029e86c  bl 0x502758
  029e870  nop
  029e874  cmpw 29, 3
  029e878  bf 0, 0x29e99c
  029e87c  fmr 1, 31
  029e880  fmr 2, 29
  029e884  bl 0xfcbe8
  029e888  nop
  029e88c  extsw 3, 29
  029e890  addic 30, 1, 144
  029e894  ori 4, 27, 0
  029e898  std 3, 176(1)
  029e89c  ori 3, 30, 0
  029e8a0  ori 5, 26, 0
  029e8a4  lfd 2, 176(1)
  029e8a8  fcfid 2, 2
  029e8ac  frsp 2, 2
  029e8b0  fmadds 1, 2, 28, 1
  029e8b4  bl 0x1113e0
  029e8b8  nop
  029e8bc  fmr 2, 26
  029e8c0  fmr 1, 27
  029e8c4  bl 0xfcbe8
  029e8c8  nop
  029e8cc  lfs 2, 148(1)
  029e8d0  lfs 3, 144(1)
  029e8d4  fmuls 4, 2, 2
  029e8d8  lfs 5, 152(1)
  029e8dc  lfs 6, -3056(25)
  029e8e0  fmuls 7, 6, 25
  029e8e4  fmuls 6, 6, 24
  029e8e8  fmadds 4, 3, 3, 4
  029e8ec  fctiwz 7, 7
  029e8f0  fctiwz 6, 6
  029e8f4  fmadds 4, 5, 5, 4
  029e8f8  stfd 7, 176(1)
  029e8fc  fsqrts 4, 4
  029e900  lwz 3, 180(1)
  029e904  stfd 6, 176(1)
  029e908  lwz 4, 180(1)
  029e90c  extsw 3, 3
  029e910  extsw 4, 4
  029e914  fdivs 1, 1, 4
  029e918  fsub 6, 31, 4
  029e91c  fsub 7, 31, 4
  029e920  fsub 8, 31, 4
  029e924  fsub 9, 4, 31
  029e928  fsub 10, 4, 31
  029e92c  fsub 4, 4, 31
  029e930  fmuls 3, 3, 1
  029e934  fmuls 2, 2, 1
  029e938  fmuls 1, 5, 1
  029e93c  fsel 5, 6, 31, 3
  029e940  fsel 6, 7, 31, 2
  029e944  fsel 7, 8, 31, 1
  029e948  fsel 3, 9, 5, 3
  029e94c  fsel 2, 10, 6, 2
  029e950  fsel 1, 4, 7, 1
  029e954  stfs 3, 144(1)
  029e958  stfs 2, 148(1)
  029e95c  stfs 1, 152(1)
  029e960  bl 0xfe484
  029e964  nop
  029e968  lis 5, 20224
  029e96c  lis 6, 8191
  029e970  fmr 1, 23
  029e974  ori 8, 3, 0
  029e978  addic 3, 1, 160
  029e97c  li 9, 1
  029e980  ori 4, 30, 0
  029e984  ori 5, 5, 32767
  029e988  ori 6, 6, 65535
  029e98c  bl 0x1268f8
  029e990  nop
  029e994  addic 29, 29, 1
  029e998  b 0x29e868
  029e99c  lis 3, 42
  029e9a0  vspltisw 2, -1
  029e9a4  li 4, -3056
  029e9a8  addi 3, 3, -6884
  029e9ac  li 5, 84
  029e9b0  vslw 2, 2, 2
  029e9b4  <unknown>
  029e9b8  <unknown>
  029e9bc  li 3, 188
  029e9c0  vspltw 4, 4, 0
  029e9c4  vmaddfp 2, 3, 4, 2
  029e9c8  vctsxs 2, 2, 0
  029e9cc  vspltb 2, 2, 3
  029e9d0  stvebx 2, 3, 31
  029e9d4  ld 0, 384(1)
  029e9d8  mtlr 0
  029e9dc  lfd 19, 264(1)
  029e9e0  lfd 20, 272(1)
  029e9e4  lfd 21, 280(1)
  029e9e8  lfd 22, 288(1)
  029e9ec  lfd 23, 296(1)
  029e9f0  lfd 24, 304(1)
  029e9f4  lfd 25, 312(1)
  029e9f8  lfd 26, 320(1)
  029e9fc  lfd 27, 328(1)
  029ea00  lfd 28, 336(1)
  029ea04  lfd 29, 344(1)
  029ea08  lfd 30, 352(1)
  029ea0c  lfd 31, 360(1)
  029ea10  ld 24, 200(1)
  029ea14  ld 25, 208(1)
  029ea18  ld 26, 216(1)
  029ea1c  ld 27, 224(1)
  029ea20  ld 28, 232(1)
  029ea24  ld 29, 240(1)
  029ea28  ld 30, 248(1)
  029ea2c  ld 31, 256(1)
  029ea30  addi 1, 1, 368
  029ea34  blr

UpdateMoby_157:   # 0x29ead8, 0x145c bytes
  029ead8  stdu 1, -656(1)
  029eadc  mflr 0
  029eae0  std 0, 672(1)
  029eae4  stfd 14, 512(1)
  029eae8  stfd 15, 520(1)
  029eaec  stfd 16, 528(1)
  029eaf0  stfd 17, 536(1)
  029eaf4  stfd 18, 544(1)
  029eaf8  stfd 19, 552(1)
  029eafc  stfd 20, 560(1)
  029eb00  stfd 21, 568(1)
  029eb04  stfd 22, 576(1)
  029eb08  stfd 23, 584(1)
  029eb0c  stfd 24, 592(1)
  029eb10  stfd 25, 600(1)
  029eb14  stfd 26, 608(1)
  029eb18  stfd 27, 616(1)
  029eb1c  stfd 28, 624(1)
  029eb20  stfd 29, 632(1)
  029eb24  stfd 30, 640(1)
  029eb28  stfd 31, 648(1)
  029eb2c  std 31, 504(1)
  029eb30  lis 4, 42
  029eb34  ori 31, 3, 0
  029eb38  addi 4, 4, -5576
  029eb3c  lfs 1, 4(4)
  029eb40  lfs 27, 0(4)
  029eb44  std 30, 496(1)
  029eb48  fmr 31, 1
  029eb4c  std 29, 488(1)
  029eb50  std 28, 480(1)
  029eb54  std 27, 472(1)
  029eb58  std 26, 464(1)
  029eb5c  std 25, 456(1)
  029eb60  std 24, 448(1)
  029eb64  std 23, 440(1)
  029eb68  std 22, 432(1)
  029eb6c  std 21, 424(1)
  029eb70  lwz 30, 120(31)
  029eb74  bl 0x29e140
  029eb78  lbz 3, 32(31)
  029eb7c  stfs 31, 388(1)
  029eb80  cmpwi 3, 0
  029eb84  bf 2, 0x29eba0
  029eb88  li 3, 1
  029eb8c  li 4, -1
  029eb90  li 5, 0
  029eb94  stb 3, 32(31)
  029eb98  sth 4, 28(30)
  029eb9c  sth 5, 30(30)
  029eba0  lis 27, 149
  029eba4  addic 29, 1, 272
  029eba8  addic 27, 27, 5056
  029ebac  ori 3, 29, 0
  029ebb0  ori 4, 27, 0
  029ebb4  bl 0x500fa8
  029ebb8  nop
  029ebbc  addic 3, 1, 320
  029ebc0  ori 4, 29, 0
  029ebc4  bl 0x5010c0
  029ebc8  nop
  029ebcc  ori 3, 30, 0
  029ebd0  bl 0x4fff60
  029ebd4  nop
  029ebd8  addic 3, 30, 20
  029ebdc  bl 0x4fff60
  029ebe0  nop
  029ebe4  cmpwi 3, 0
  029ebe8  bf 2, 0x29ec08
  029ebec  lwz 3, 16(30)
  029ebf0  cmpwi 3, 0
  029ebf4  bt 2, 0x29ec10
  029ebf8  lbz 3, 32(3)
  029ebfc  rlwinm 3, 3, 0, 24, 24
  029ec00  cmpwi 3, 0
  029ec04  bt 2, 0x29ec10
  029ec08  li 3, 0
  029ec0c  stw 3, 16(30)
  029ec10  lis 25, 151
  029ec14  addic 25, 25, -25376
  029ec18  lwz 3, 8324(25)
  029ec1c  cmpwi 3, 1
  029ec20  bf 2, 0x29ec38
  029ec24  li 3, 30
  029ec28  li 4, 1
  029ec2c  bl 0xb72b0
  029ec30  nop
  029ec34  lwz 3, 8324(25)
  029ec38  cmpwi 3, 30
  029ec3c  bf 2, 0x29ef40
  029ec40  lwz 3, 8320(25)
  029ec44  lhz 3, 52(3)
  029ec48  clrlwi 3, 3, 31
  029ec4c  cmpwi 3, 0
  029ec50  bt 2, 0x29ef40
  029ec54  lbz 3, 8364(25)
  029ec58  cmpwi 3, 0
  029ec5c  bf 2, 0x29ef40
  029ec60  li 6, 0
  029ec64  lis 7, 17036
  029ec68  addic 3, 1, 128
  029ec6c  addic 5, 1, 320
  029ec70  stw 6, 128(1)
  029ec74  ori 4, 3, 0
  029ec78  stw 6, 132(1)
  029ec7c  stw 7, 136(1)
  029ec80  stw 6, 140(1)
  029ec84  bl 0x5e825c
  029ec88  nop
  029ec8c  lfs 1, 320(27)
  029ec90  lfs 2, 128(1)
  029ec94  addic 3, 27, 320
  029ec98  lfs 3, 324(27)
  029ec9c  addic 4, 1, 144
  029eca0  fadds 1, 1, 2
  029eca4  li 5, 0
  029eca8  lfs 2, 132(1)
  029ecac  ori 6, 31, 0
  029ecb0  lfs 4, 328(27)
  029ecb4  li 7, 0
  029ecb8  fadds 2, 3, 2
  029ecbc  lfs 3, 136(1)
  029ecc0  fadds 3, 4, 3
  029ecc4  lfs 4, 332(27)
  029ecc8  stfs 4, 156(1)
  029eccc  stfs 1, 144(1)
  029ecd0  stfs 2, 148(1)
  029ecd4  stfs 3, 152(1)
  029ecd8  bl 0x57820
  029ecdc  nop
  029ece0  cmpwi 3, 0
  029ece4  bt 2, 0x29ed5c
  029ece8  lis 4, 161
  029ecec  addic 4, 4, 2368
  029ecf0  lwz 3, 24(4)
  029ecf4  cmpwi 3, 0
  029ecf8  bt 2, 0x29ed5c
  029ecfc  lhz 5, 52(3)
  029ed00  rlwinm 5, 5, 0, 19, 19
  029ed04  cmpwi 5, 0
  029ed08  bt 2, 0x29ed5c
  029ed0c  lis 5, 42
  029ed10  li 6, 8
  029ed14  vspltisw 2, -1
  029ed18  addi 5, 5, -5576
  029ed1c  stw 3, 16(30)
  029ed20  lis 7, 114
  029ed24  li 8, -3056
  029ed28  vslw 2, 2, 2
  029ed2c  <unknown>
  029ed30  li 5, 20
  029ed34  vspltw 3, 3, 0
  029ed38  <unknown>
  029ed3c  vmaddfp 2, 4, 3, 2
  029ed40  vctsxs 2, 2, 0
  029ed44  vspltw 2, 2, 0
  029ed48  stvewx 2, 5, 30
  029ed4c  lfs 1, 40(4)
  029ed50  lfs 2, 24(3)
  029ed54  fsubs 1, 1, 2
  029ed58  stfs 1, 24(30)
  029ed5c  lis 3, 42
  029ed60  lis 28, 114
  029ed64  addi 29, 3, -5576
  029ed68  lis 3, 161
  029ed6c  lfs 31, 16(29)
  029ed70  lfs 1, -3056(28)
  029ed74  lwz 3, 1808(3)
  029ed78  fmuls 1, 1, 31
  029ed7c  lfs 2, 12(29)
  029ed80  fmr 26, 2
  029ed84  fctiwz 1, 1
  029ed88  stfd 1, 408(1)
  029ed8c  lwz 4, 412(1)
  029ed90  divw 5, 3, 4
  029ed94  mullw 4, 5, 4
  029ed98  subc 3, 3, 4
  029ed9c  extsw 3, 3
  029eda0  bl 0x502730
  029eda4  nop
  029eda8  lfs 2, 20(29)
  029edac  lfs 30, 24(29)
  029edb0  lfs 3, -3056(28)
  029edb4  fmuls 1, 1, 2
  029edb8  fmuls 2, 3, 30
  029edbc  lfs 29, 28(29)
  029edc0  fdivs 1, 1, 2
  029edc4  fmuls 1, 1, 29
  029edc8  bl 0x502648
  029edcc  nop
  029edd0  li 5, 4
  029edd4  lfs 28, 32(29)
  029edd8  lis 4, -232
  029eddc  fmr 2, 1
  029ede0  ori 3, 31, 0
  029ede4  fmr 1, 26
  029ede8  ori 4, 4, 2661
  029edec  fmr 3, 28
  029edf0  std 5, 112(1)
  029edf4  li 6, 0
  029edf8  li 7, 39
  029edfc  li 9, -1
  029ee00  bl 0x55284
  029ee04  nop
  029ee08  lwz 3, 16(30)
  029ee0c  cmpwi 3, 0
  029ee10  bt 2, 0x29ef40
  029ee14  lwz 3, 0(30)
  029ee18  cmpwi 3, 0
  029ee1c  bf 2, 0x29ef40
  029ee20  li 3, -1
  029ee24  bl 0x8e0f4
  029ee28  nop
  029ee2c  cmpwi 3, 0
  029ee30  bt 2, 0x29ef40
  029ee34  lwz 3, 16(30)
  029ee38  lfs 1, 324(27)
  029ee3c  lfs 2, 320(27)
  029ee40  lis 4, 42
  029ee44  lfs 3, 20(3)
  029ee48  lfs 4, 16(3)
  029ee4c  fsubs 1, 1, 3
  029ee50  fsubs 2, 2, 4
  029ee54  lfs 3, 328(27)
  029ee58  lfs 5, 24(3)
  029ee5c  addi 29, 4, -5576
  029ee60  fsubs 3, 3, 5
  029ee64  lis 28, 114
  029ee68  fmuls 1, 1, 1
  029ee6c  fmadds 1, 2, 2, 1
  029ee70  lfs 2, 36(29)
  029ee74  stfs 4, 160(1)
  029ee78  lfs 4, 20(3)
  029ee7c  stfs 4, 164(1)
  029ee80  fmadds 1, 3, 3, 1
  029ee84  lfs 3, 24(3)
  029ee88  lfs 4, -3056(28)
  029ee8c  stfs 3, 168(1)
  029ee90  fmuls 4, 4, 31
  029ee94  lfs 5, 28(3)
  029ee98  lis 3, 161
  029ee9c  stfs 5, 172(1)
  029eea0  lfs 5, 24(30)
  029eea4  fsqrts 1, 1
  029eea8  fadds 3, 3, 5
  029eeac  fctiwz 4, 4
  029eeb0  lwz 3, 1808(3)
  029eeb4  stfs 3, 168(1)
  029eeb8  lfs 3, 40(29)
  029eebc  lfs 5, 44(29)
  029eec0  stfd 4, 408(1)
  029eec4  lwz 4, 412(1)
  029eec8  divw 5, 3, 4
  029eecc  mullw 4, 5, 4
  029eed0  fmuls 1, 1, 2
  029eed4  subc 3, 3, 4
  029eed8  extsw 3, 3
  029eedc  fnmsubs 1, 1, 3, 5
  029eee0  fabs 31, 1
  029eee4  bl 0x502730
  029eee8  nop
  029eeec  lfs 2, 48(29)
  029eef0  lfs 3, -3056(28)
  029eef4  fmuls 1, 1, 2
  029eef8  fmuls 3, 3, 30
  029eefc  fdivs 1, 1, 3
  029ef00  fmuls 1, 1, 29
  029ef04  bl 0x502648
  029ef08  nop
  029ef0c  li 5, 4
  029ef10  lis 4, -241
  029ef14  fmr 2, 1
  029ef18  addic 6, 1, 160
  029ef1c  fmr 1, 31
  029ef20  ori 3, 31, 0
  029ef24  fmr 3, 28
  029ef28  ori 4, 4, 65295
  029ef2c  std 5, 112(1)
  029ef30  li 7, 39
  029ef34  li 9, -1
  029ef38  bl 0x55284
  029ef3c  nop
  029ef40  lwz 3, 4784(25)
  029ef44  cmpwi 3, 0
  029ef48  bt 2, 0x29efa8
  029ef4c  lis 3, 42
  029ef50  li 4, 8
  029ef54  lwz 7, 4792(25)
  029ef58  addi 3, 3, -5576
  029ef5c  vspltisw 3, -1
  029ef60  lis 5, 114
  029ef64  stw 7, 16(30)
  029ef68  li 6, -3056
  029ef6c  vslw 3, 3, 3
  029ef70  <unknown>
  029ef74  lis 4, 161
  029ef78  vspltw 2, 2, 0
  029ef7c  li 3, 20
  029ef80  <unknown>
  029ef84  addic 4, 4, 2368
  029ef88  vmaddfp 2, 4, 2, 3
  029ef8c  vctsxs 2, 2, 0
  029ef90  vspltw 2, 2, 0
  029ef94  stvewx 2, 3, 30
  029ef98  lfs 1, 40(4)
  029ef9c  lfs 2, 24(7)
  029efa0  fsubs 1, 1, 2
  029efa4  stfs 1, 24(30)
  029efa8  lis 3, 161
  029efac  lwz 3, 1800(3)
  029efb0  cmpwi 3, 2
  029efb4  bt 2, 0x29fb2c
  029efb8  lwz 3, 0(30)
  029efbc  cmpwi 3, 0
  029efc0  bf 2, 0x29fb2c
  029efc4  lbz 3, 8364(25)
  029efc8  cmpwi 3, 0
  029efcc  bf 2, 0x29fb2c
  029efd0  lbz 3, 82(31)
  029efd4  cmpwi 3, 0
  029efd8  cmpwi 1, 3, 1
  029efdc  bt 2, 0x29efe4
  029efe0  bf 6, 0x29fb2c
  029efe4  lis 3, 150
  029efe8  lwz 4, 4256(25)
  029efec  addic 3, 3, 19008
  029eff0  lwz 3, 160(3)
  029eff4  and 3, 3, 4
  029eff8  cmpwi 3, 0
  029effc  bt 2, 0x29fb2c
  029f000  lis 3, 42
  029f004  lis 4, 114
  029f008  addi 3, 3, -5576
  029f00c  lfs 1, 52(3)
  029f010  lfs 2, -3056(4)
  029f014  lwz 3, 4272(25)
  029f018  fmuls 1, 2, 1
  029f01c  fctiwz 1, 1
  029f020  stfd 1, 408(1)
  029f024  lwz 4, 412(1)
  029f028  cmpw 3, 4
  029f02c  bf 1, 0x29fb2c
  029f030  lis 3, 42
  029f034  addi 3, 3, -5576
  029f038  lfs 28, 56(3)
  029f03c  li 3, 0
  029f040  fmr 3, 28
  029f044  lbz 4, 83(31)
  029f048  stw 3, 176(1)
  029f04c  cmpwi 4, 0
  029f050  stw 3, 180(1)
  029f054  stw 3, 184(1)
  029f058  stw 3, 188(1)
  029f05c  fmr 4, 3
  029f060  fmr 2, 4
  029f064  bf 2, 0x29f0b0
  029f068  lis 3, 42
  029f06c  lis 4, 114
  029f070  addi 3, 3, -5576
  029f074  li 5, 0
  029f078  lfs 1, 60(3)
  029f07c  lfs 2, -3056(4)
  029f080  ori 3, 31, 0
  029f084  fmuls 1, 2, 1
  029f088  li 4, 1
  029f08c  fctiwz 1, 1
  029f090  stfd 1, 408(1)
  029f094  lwz 6, 412(1)
  029f098  extsw 6, 6
  029f09c  bl 0xfddc0
  029f0a0  nop
  029f0a4  lfs 3, 180(1)
  029f0a8  lfs 4, 184(1)
  029f0ac  lfs 2, 188(1)
  029f0b0  lis 3, 42
  029f0b4  lwz 4, 8324(25)
  029f0b8  addi 3, 3, -5576
  029f0bc  cmpwi 4, 30
  029f0c0  lfs 1, 64(3)
  029f0c4  bf 2, 0x29f104
  029f0c8  lwz 3, 8320(25)
  029f0cc  lhz 3, 52(3)
  029f0d0  clrlwi 3, 3, 31
  029f0d4  cmpwi 3, 0
  029f0d8  bt 2, 0x29f104
  029f0dc  lis 5, 114
  029f0e0  addic 3, 1, 176
  029f0e4  ori 4, 3, 0
  029f0e8  lfs 2, -3052(5)
  029f0ec  addic 5, 1, 320
  029f0f0  fmuls 1, 2, 1
  029f0f4  stfs 1, 184(1)
  029f0f8  bl 0x5e825c
  029f0fc  nop
  029f100  b 0x29f184
  029f104  lis 3, 114
  029f108  lfs 5, -3052(3)
  029f10c  fmuls 1, 5, 1
  029f110  lfs 5, 1616(25)
  029f114  lfs 6, 1620(25)
  029f118  lfs 7, 1624(25)
  029f11c  fmuls 5, 5, 3
  029f120  lfs 8, 1600(25)
  029f124  fmuls 6, 6, 3
  029f128  lfs 9, 1612(25)
  029f12c  fmuls 7, 7, 3
  029f130  lfs 10, 1604(25)
  029f134  lfs 11, 1608(25)
  029f138  lfs 12, 1632(25)
  029f13c  fmadds 2, 9, 1, 2
  029f140  lfs 9, 1644(25)
  029f144  fmadds 5, 8, 1, 5
  029f148  fmadds 6, 10, 1, 6
  029f14c  lfs 8, 1636(25)
  029f150  fmadds 7, 11, 1, 7
  029f154  lfs 10, 1640(25)
  029f158  stfs 1, 176(1)
  029f15c  lfs 1, 1628(25)
  029f160  fmadds 2, 9, 4, 2
  029f164  fmadds 5, 12, 4, 5
  029f168  fmadds 6, 8, 4, 6
  029f16c  fmadds 4, 10, 4, 7
  029f170  fmadds 1, 1, 3, 2
  029f174  stfs 5, 176(1)
  029f178  stfs 6, 180(1)
  029f17c  stfs 4, 184(1)
  029f180  stfs 1, 188(1)
  029f184  li 3, -1
  029f188  li 4, 1
  029f18c  bl 0xaa258
  029f190  nop
  029f194  cmpwi 3, 0
  029f198  bt 2, 0x29fae0
  029f19c  lwz 3, 4784(25)
  029f1a0  cmpwi 3, 0
  029f1a4  bt 2, 0x29f1b0
  029f1a8  lfs 19, 4796(25)
  029f1ac  b 0x29f1c4
  029f1b0  lfs 1, 176(1)
  029f1b4  lfs 2, 180(1)
  029f1b8  bl 0x5e8338
  029f1bc  nop
  029f1c0  fmr 19, 1
  029f1c4  lfs 1, 180(1)
  029f1c8  lfs 3, 176(1)
  029f1cc  fmuls 1, 1, 1
  029f1d0  lfs 2, 184(1)
  029f1d4  fmadds 1, 3, 3, 1
  029f1d8  fsqrts 1, 1
  029f1dc  bl 0x5e8338
  029f1e0  nop
  029f1e4  lwz 3, 8324(25)
  029f1e8  stfs 19, 400(1)
  029f1ec  cmpwi 3, 30
  029f1f0  fneg 20, 1
  029f1f4  stfs 20, 396(1)
  029f1f8  bf 2, 0x29f29c
  029f1fc  lwz 3, 8320(25)
  029f200  lhz 3, 52(3)
  029f204  clrlwi 3, 3, 31
  029f208  cmpwi 3, 0
  029f20c  bt 2, 0x29f29c
  029f210  lis 4, 16025
  029f214  stfs 27, 392(1)
  029f218  lis 3, 15897
  029f21c  li 29, 0
  029f220  ori 6, 4, 39322
  029f224  ori 4, 3, 39322
  029f228  lis 7, 16192
  029f22c  stw 29, 204(1)
  029f230  addic 3, 1, 192
  029f234  stw 4, 192(1)
  029f238  stw 6, 196(1)
  029f23c  addic 5, 1, 320
  029f240  stw 7, 200(1)
  029f244  ori 4, 3, 0
  029f248  bl 0x5e825c
  029f24c  nop
  029f250  lfs 1, 192(1)
  029f254  lfs 2, 320(27)
  029f258  lfs 3, 196(1)
  029f25c  fadds 1, 1, 2
  029f260  lfs 2, 324(27)
  029f264  lfs 4, 200(1)
  029f268  fadds 2, 3, 2
  029f26c  lfs 3, 328(27)
  029f270  lwz 3, 16(30)
  029f274  fadds 3, 4, 3
  029f278  cmpwi 3, 0
  029f27c  stfs 1, 192(1)
  029f280  stfs 2, 196(1)
  029f284  stfs 3, 200(1)
  029f288  bt 2, 0x29f6c8
  029f28c  lfs 1, 24(30)
  029f290  li 29, 0
  029f294  stfs 1, 392(1)
  029f298  b 0x29f6c8
  029f29c  ori 3, 31, 0
  029f2a0  addic 5, 1, 192
  029f2a4  stfs 27, 392(1)
  029f2a8  li 4, 0
  029f2ac  bl 0xf1114
  029f2b0  nop
  029f2b4  lis 3, 165
  029f2b8  li 29, 0
  029f2bc  lwz 28, -27836(3)
  029f2c0  cmpwi 28, 0
  029f2c4  bt 2, 0x29f6c8
  029f2c8  lis 3, 42
  029f2cc  li 26, 0
  029f2d0  addi 3, 3, -5576
  029f2d4  lis 23, 115
  029f2d8  lis 24, 151
  029f2dc  lis 21, 165
  029f2e0  addic 24, 24, -25432
  029f2e4  lfs 1, 72(3)
  029f2e8  lfs 24, 68(3)
  029f2ec  addic 23, 23, 22720
  029f2f0  lfs 14, 76(3)
  029f2f4  addic 22, 27, 320
  029f2f8  lfs 15, 80(3)
  029f2fc  addic 21, 21, -27836
  029f300  lfs 16, 84(3)
  029f304  ori 29, 26, 0
  029f308  lfs 21, 88(3)
  029f30c  lfs 22, 92(3)
  029f310  lfs 17, 96(3)
  029f314  lfs 18, 100(3)
  029f318  stfs 1, 384(1)
  029f31c  lfs 26, 12(3)
  029f320  lfs 23, 104(3)
  029f324  lbz 3, 32(28)
  029f328  cmpwi 3, 128
  029f32c  bf 0, 0x29f6b4
  029f330  lfs 1, 16(28)
  029f334  ori 3, 28, 0
  029f338  stfs 1, 208(1)
  029f33c  lfs 1, 20(28)
  029f340  stfs 1, 212(1)
  029f344  lfs 1, 24(28)
  029f348  stfs 1, 216(1)
  029f34c  lfs 1, 28(28)
  029f350  stfs 1, 220(1)
  029f354  bl 0xfcccc
  029f358  nop
  029f35c  ori 27, 3, 0
  029f360  lfs 25, 208(1)
  029f364  lfs 1, 192(1)
  029f368  cmpwi 27, 0
  029f36c  lfs 2, 212(1)
  029f370  lfs 3, 196(1)
  029f374  bt 2, 0x29f384
  029f378  lfs 4, 216(1)
  029f37c  lfs 5, 16(27)
  029f380  b 0x29f38c
  029f384  fmr 5, 24
  029f388  lfs 4, 216(1)
  029f38c  fadds 4, 4, 5
  029f390  stfs 4, 216(1)
  029f394  lhz 3, 52(28)
  029f398  rlwinm 3, 3, 0, 19, 19
  029f39c  cmpwi 3, 0
  029f3a0  bt 2, 0x29f6b4
  029f3a4  lwz 3, 36(28)
  029f3a8  cmpwi 3, 0
  029f3ac  bt 2, 0x29f6b4
  029f3b0  lhz 3, 70(3)
  029f3b4  extsh 3, 3
  029f3b8  cmpwi 3, 5
  029f3bc  bf 2, 0x29f6b4
  029f3c0  fsubs 2, 2, 3
  029f3c4  fsubs 1, 25, 1
  029f3c8  bl 0x5e8338
  029f3cc  nop
  029f3d0  lfs 2, 196(1)
  029f3d4  fmr 25, 1
  029f3d8  lfs 3, 212(1)
  029f3dc  lfs 4, 192(1)
  029f3e0  fsubs 2, 2, 3
  029f3e4  lfs 3, 208(1)
  029f3e8  lfs 1, 216(1)
  029f3ec  fsubs 3, 4, 3
  029f3f0  lfs 4, 200(1)
  029f3f4  fmuls 5, 2, 2
  029f3f8  fsubs 2, 1, 4
  029f3fc  fmadds 1, 3, 3, 5
  029f400  fsqrts 1, 1
  029f404  bl 0x5e8338
  029f408  nop
  029f40c  lfs 2, 196(1)
  029f410  lfs 3, 212(1)
  029f414  lfs 4, 192(1)
  029f418  fsubs 2, 2, 3
  029f41c  lfs 3, 208(1)
  029f420  fsubs 3, 4, 3
  029f424  lfs 4, 200(1)
  029f428  lfs 5, 216(1)
  029f42c  fsubs 4, 4, 5
  029f430  fmuls 2, 2, 2
  029f434  fmadds 2, 3, 3, 2
  029f438  fmr 27, 1
  029f43c  fmadds 30, 4, 4, 2
  029f440  lfs 2, 384(1)
  029f444  fsqrts 30, 30
  029f448  fcmpu 0, 30, 2
  029f44c  cror 6, 1, 2
  029f450  bt 6, 0x29f4bc
  029f454  lwz 3, 8320(25)
  029f458  lfs 1, 16(28)
  029f45c  lfs 2, 128(25)
  029f460  lfs 3, 20(28)
  029f464  fsubs 1, 1, 2
  029f468  lfs 4, 132(25)
  029f46c  lfs 31, 72(3)
  029f470  fsubs 2, 3, 4
  029f474  bl 0x5e8338
  029f478  nop
  029f47c  fmr 2, 1
  029f480  fmr 1, 31
  029f484  bl 0x5026a0
  029f488  nop
  029f48c  fcmpu 0, 1, 14
  029f490  cror 6, 1, 2
  029f494  bt 6, 0x29f4bc
  029f498  fabs 1, 27
  029f49c  fcmpu 0, 1, 15
  029f4a0  cror 6, 1, 2
  029f4a4  bt 6, 0x29f4bc
  029f4a8  fneg 20, 27
  029f4ac  ori 29, 28, 0
  029f4b0  fmr 19, 25
  029f4b4  stfs 30, 388(1)
  029f4b8  b 0x29f6c8
  029f4bc  lfs 1, 388(1)
  029f4c0  fcmpu 0, 1, 30
  029f4c4  bt 0, 0x29f6b4
  029f4c8  lbz 3, 11(24)
  029f4cc  bl 0x502730
  029f4d0  nop
  029f4d4  lfs 3, 740(25)
  029f4d8  fmr 29, 1
  029f4dc  addic 3, 1, 224
  029f4e0  fmr 1, 30
  029f4e4  fmadds 3, 3, 24, 20
  029f4e8  fmr 2, 19
  029f4ec  bl 0xfe610
  029f4f0  nop
  029f4f4  lfs 1, 228(1)
  029f4f8  lfs 2, 196(1)
  029f4fc  lfs 3, 224(1)
  029f500  fadds 1, 1, 2
  029f504  lfs 2, 192(1)
  029f508  lfs 4, 212(1)
  029f50c  fadds 2, 3, 2
  029f510  lfs 3, 232(1)
  029f514  lfs 5, 200(1)
  029f518  lfs 6, 208(1)
  029f51c  fadds 3, 3, 5
  029f520  lfs 5, 216(1)
  029f524  fsubs 4, 1, 4
  029f528  fsubs 6, 2, 6
  029f52c  fsubs 5, 3, 5
  029f530  fmuls 4, 4, 4
  029f534  stfs 2, 224(1)
  029f538  fmuls 2, 30, 21
  029f53c  lis 3, 115
  029f540  stfs 1, 228(1)
  029f544  stfs 3, 232(1)
  029f548  fmadds 4, 6, 6, 4
  029f54c  lfs 1, 4(23)
  029f550  lfs 3, 22720(3)
  029f554  fmadds 4, 5, 5, 4
  029f558  lfs 5, 8(23)
  029f55c  fsqrts 4, 4
  029f560  lfs 6, 12(23)
  029f564  fmadds 29, 29, 16, 17
  029f568  fdivs 2, 4, 2
  029f56c  fabs 4, 2
  029f570  fsub 7, 2, 28
  029f574  fsel 4, 7, 2, 4
  029f578  fsub 2, 2, 28
  029f57c  fsubs 7, 26, 4
  029f580  fmadds 1, 4, 1, 3
  029f584  fmuls 8, 4, 4
  029f588  fsel 2, 2, 26, 23
  029f58c  fsub 9, 7, 28
  029f590  fmuls 4, 8, 4
  029f594  fmadds 1, 8, 5, 1
  029f598  fsel 3, 9, 7, 28
  029f59c  fmadds 1, 4, 6, 1
  029f5a0  fsqrts 3, 3
  029f5a4  fnmsubs 1, 1, 3, 22
  029f5a8  fmuls 31, 1, 2
  029f5ac  fmuls 31, 31, 21
  029f5b0  fcmpu 0, 31, 29
  029f5b4  cror 6, 0, 2
  029f5b8  bt 6, 0x29f648
  029f5bc  cmpwi 27, 0
  029f5c0  bt 2, 0x29f648
  029f5c4  lbz 3, 10(27)
  029f5c8  bl 0x502730
  029f5cc  nop
  029f5d0  fmuls 6, 1, 18
  029f5d4  lis 3, 115
  029f5d8  lfs 9, 4(23)
  029f5dc  lfs 8, 8(23)
  029f5e0  lfs 7, 12(23)
  029f5e4  lfs 10, 22720(3)
  029f5e8  fcmpu 0, 6, 30
  029f5ec  cror 6, 1, 2
  029f5f0  bt 6, 0x29f648
  029f5f4  fdivs 1, 6, 30
  029f5f8  fabs 2, 1
  029f5fc  fsub 3, 1, 28
  029f600  fsel 2, 3, 1, 2
  029f604  fsub 1, 1, 28
  029f608  fsubs 3, 26, 2
  029f60c  fmuls 4, 2, 2
  029f610  fmadds 6, 2, 9, 10
  029f614  fsel 1, 1, 26, 23
  029f618  fsub 5, 3, 28
  029f61c  fmuls 2, 4, 2
  029f620  fmadds 4, 4, 8, 6
  029f624  fsel 3, 5, 3, 28
  029f628  fmadds 2, 2, 7, 4
  029f62c  fsqrts 3, 3
  029f630  fnmsubs 2, 2, 3, 22
  029f634  fnmsubs 31, 2, 1, 31
  029f638  fcmpu 0, 31, 28
  029f63c  cror 6, 1, 2
  029f640  bt 6, 0x29f648
  029f644  fmr 31, 28
  029f648  fcmpu 0, 31, 29
  029f64c  cror 6, 1, 2
  029f650  bt 6, 0x29f6b4
  029f654  ori 3, 22, 0
  029f658  addic 4, 1, 208
  029f65c  li 5, 6
  029f660  ori 6, 31, 0
  029f664  li 7, 0
  029f668  bl 0x57820
  029f66c  nop
  029f670  cmpwi 3, 0
  029f674  bf 2, 0x29f6b4
  029f678  ori 29, 28, 0
  029f67c  fneg 20, 27
  029f680  fmr 19, 25
  029f684  ori 3, 29, 0
  029f688  bl 0x110808
  029f68c  nop
  029f690  cmpwi 3, 0
  029f694  stfs 30, 388(1)
  029f698  bf 2, 0x29f6b4
  029f69c  cmpwi 27, 0
  029f6a0  fmr 1, 24
  029f6a4  stw 28, 16(30)
  029f6a8  bt 2, 0x29f6b0
  029f6ac  lfs 1, 16(27)
  029f6b0  stfs 1, 392(1)
  029f6b4  addic 26, 26, 4
  029f6b8  extsw 3, 26
  029f6bc  lwzx 28, 21, 3
  029f6c0  cmpwi 28, 0
  029f6c4  bf 2, 0x29f324
  029f6c8  li 3, 0
  029f6cc  li 4, 0
  029f6d0  ori 5, 31, 0
  029f6d4  bl 0x15d12c
  029f6d8  nop
  029f6dc  lis 3, 42
  029f6e0  li 4, 108
  029f6e4  vspltisw 3, -1
  029f6e8  addi 3, 3, -5576
  029f6ec  vspltisw 6, -1
  029f6f0  li 5, -3056
  029f6f4  lis 6, 114
  029f6f8  li 7, 112
  029f6fc  vslw 3, 3, 3
  029f700  vslw 6, 6, 6
  029f704  <unknown>
  029f708  <unknown>
  029f70c  <unknown>
  029f710  vspltw 2, 2, 0
  029f714  vspltw 5, 5, 0
  029f718  li 4, 30
  029f71c  lfs 1, -3056(6)
  029f720  vmaddfp 2, 4, 2, 3
  029f724  vmaddfp 3, 4, 5, 6
  029f728  lfs 31, 112(3)
  029f72c  lfs 27, 392(1)
  029f730  vctsxs 2, 2, 0
  029f734  vctsxs 3, 3, 0
  029f738  vadduwm 2, 2, 3
  029f73c  vsplth 2, 2, 1
  029f740  stvehx 2, 4, 30
  029f744  lwz 5, 8324(25)
  029f748  cmpwi 5, 30
  029f74c  bt 2, 0x29f764
  029f750  ori 3, 31, 0
  029f754  bl 0x29e578
  029f758  lis 3, 114
  029f75c  lwz 5, 8324(25)
  029f760  lfs 1, -3056(3)
  029f764  lis 4, 161
  029f768  lis 3, 0
  029f76c  addic 4, 4, -732
  029f770  ori 6, 3, 65535
  029f774  lhz 3, 88(4)
  029f778  cmpw 3, 6
  029f77c  bf 0, 0x29f788
  029f780  addic 3, 3, 1
  029f784  sth 3, 88(4)
  029f788  lis 3, 161
  029f78c  lwz 3, -2344(3)
  029f790  extsw 3, 3
  029f794  std 3, 408(1)
  029f798  lis 3, 42
  029f79c  addi 3, 3, -5576
  029f7a0  lfs 30, 68(3)
  029f7a4  lfd 2, 408(1)
  029f7a8  lis 3, 6990
  029f7ac  fcfid 2, 2
  029f7b0  ori 6, 3, 33205
  029f7b4  lhz 7, 90(4)
  029f7b8  frsp 2, 2
  029f7bc  fadds 2, 2, 30
  029f7c0  fmuls 1, 1, 2
  029f7c4  fctiwz 1, 1
  029f7c8  stfd 1, 408(1)
  029f7cc  lwz 3, 412(1)
  029f7d0  mulhw 6, 6, 3
  029f7d4  srawi 6, 6, 6
  029f7d8  srwi 8, 6, 31
  029f7dc  addc 6, 6, 8
  029f7e0  cmpw 6, 7
  029f7e4  bf 1, 0x29f804
  029f7e8  lis 6, 6990
  029f7ec  ori 6, 6, 33205
  029f7f0  mulhw 3, 6, 3
  029f7f4  srawi 3, 3, 6
  029f7f8  srwi 6, 3, 31
  029f7fc  addc 3, 3, 6
  029f800  sth 3, 90(4)
  029f804  lis 3, 151
  029f808  lwz 8, 92(4)
  029f80c  li 6, 1
  029f810  lis 7, -32768
  029f814  cmpwi 1, 5, 30
  029f818  lwz 3, -25488(3)
  029f81c  lhz 9, 8904(25)
  029f820  slw 3, 6, 3
  029f824  cmpwi 9, 1
  029f828  or 3, 8, 3
  029f82c  crorc 2, 6, 2
  029f830  or 3, 3, 7
  029f834  stw 3, 92(4)
  029f838  bt 2, 0x29f898
  029f83c  lis 3, 114
  029f840  lfs 30, 72(31)
  029f844  addic 3, 3, 7120
  029f848  lfs 29, 1652(3)
  029f84c  lwz 4, 16(30)
  029f850  ori 3, 4, 0
  029f854  bl 0xfcccc
  029f858  nop
  029f85c  cmpwi 3, 0
  029f860  lwz 4, 16(30)
  029f864  bt 2, 0x29f86c
  029f868  lfs 27, 16(3)
  029f86c  ori 7, 4, 0
  029f870  fmr 1, 30
  029f874  addic 4, 1, 192
  029f878  fmr 2, 29
  029f87c  ori 3, 31, 0
  029f880  fmr 3, 27
  029f884  fmr 4, 30
  029f888  fmr 5, 29
  029f88c  bl 0x292d88
  029f890  nop
  029f894  b 0x29fa6c
  029f898  lis 3, 42
  029f89c  lfs 1, 388(1)
  029f8a0  addi 3, 3, -5576
  029f8a4  lfs 2, 88(3)
  029f8a8  fcmpu 0, 1, 2
  029f8ac  cror 6, 1, 2
  029f8b0  bt 6, 0x29f8fc
  029f8b4  lwz 3, 16(30)
  029f8b8  bl 0xfcccc
  029f8bc  nop
  029f8c0  cmpwi 3, 0
  029f8c4  lwz 4, 16(30)
  029f8c8  bt 2, 0x29f8d0
  029f8cc  lfs 27, 16(3)
  029f8d0  ori 7, 4, 0
  029f8d4  addic 4, 1, 192
  029f8d8  fmr 1, 19
  029f8dc  ori 3, 31, 0
  029f8e0  fmr 2, 20
  029f8e4  fmr 3, 27
  029f8e8  fmr 4, 19
  029f8ec  fmr 5, 20
  029f8f0  bl 0x292d88
  029f8f4  nop
  029f8f8  b 0x29fa6c
  029f8fc  lwz 3, 16(30)
  029f900  cmpwi 1, 29, 0
  029f904  cmpwi 3, 0
  029f908  bf 2, 0x29fa44
  029f90c  cmpwi 6, 5, 30
  029f910  bt 6, 0x29fa2c
  029f914  li 3, 6
  029f918  bl 0x2931b8
  029f91c  nop
  029f920  lfs 2, 16(29)
  029f924  fmr 19, 1
  029f928  ori 3, 29, 0
  029f92c  stfs 2, 208(1)
  029f930  lfs 1, 20(29)
  029f934  stfs 1, 212(1)
  029f938  lfs 1, 24(29)
  029f93c  stfs 1, 216(1)
  029f940  lfs 1, 28(29)
  029f944  stfs 1, 220(1)
  029f948  bl 0xfcccc
  029f94c  nop
  029f950  ori 29, 3, 0
  029f954  cmpwi 29, 0
  029f958  bt 2, 0x29f968
  029f95c  lfs 1, 216(1)
  029f960  lfs 2, 16(29)
  029f964  b 0x29f970
  029f968  fmr 2, 30
  029f96c  lfs 1, 216(1)
  029f970  fadds 4, 1, 2
  029f974  lfs 3, 396(1)
  029f978  fmr 1, 19
  029f97c  lfs 2, 740(25)
  029f980  addic 3, 1, 240
  029f984  fnmsubs 3, 2, 30, 3
  029f988  lfs 2, 400(1)
  029f98c  stfs 4, 216(1)
  029f990  stfs 3, 396(1)
  029f994  bl 0xfe610
  029f998  nop
  029f99c  lfs 1, 240(1)
  029f9a0  lfs 2, 192(1)
  029f9a4  lfs 3, 244(1)
  029f9a8  fadds 2, 1, 2
  029f9ac  lfs 1, 196(1)
  029f9b0  lfs 4, 248(1)
  029f9b4  fadds 3, 3, 1
  029f9b8  lfs 1, 200(1)
  029f9bc  fadds 4, 4, 1
  029f9c0  lfs 1, 208(1)
  029f9c4  lfs 5, 212(1)
  029f9c8  fsubs 1, 1, 2
  029f9cc  stfs 2, 240(1)
  029f9d0  fsubs 2, 5, 3
  029f9d4  stfs 3, 244(1)
  029f9d8  stfs 4, 248(1)
  029f9dc  bl 0x5e8338
  029f9e0  nop
  029f9e4  lfs 2, 244(1)
  029f9e8  fmr 19, 1
  029f9ec  lfs 3, 212(1)
  029f9f0  lfs 4, 240(1)
  029f9f4  fsubs 2, 2, 3
  029f9f8  lfs 3, 208(1)
  029f9fc  lfs 1, 216(1)
  029fa00  fsubs 3, 4, 3
  029fa04  lfs 4, 248(1)
  029fa08  fmuls 5, 2, 2
  029fa0c  fsubs 2, 1, 4
  029fa10  fmadds 1, 3, 3, 5
  029fa14  fsqrts 1, 1
  029fa18  bl 0x5e8338
  029fa1c  nop
  029fa20  lwz 3, 16(30)
  029fa24  fneg 20, 1
  029fa28  b 0x29fa44
  029fa2c  bt 26, 0x29fa44
  029fa30  lfs 1, 396(1)
  029fa34  lfs 2, 740(25)
  029fa38  fnmsubs 1, 2, 30, 1
  029fa3c  fnmsubs 20, 2, 30, 20
  029fa40  stfs 1, 396(1)
  029fa44  ori 7, 3, 0
  029fa48  lfs 5, 396(1)
  029fa4c  addic 4, 1, 192
  029fa50  fmr 1, 19
  029fa54  ori 3, 31, 0
  029fa58  fmr 2, 20
  029fa5c  fmr 3, 27
  029fa60  lfs 4, 400(1)
  029fa64  bl 0x292d88
  029fa68  nop
  029fa6c  lwz 3, 8332(25)
  029fa70  cmpwi 3, 0
  029fa74  bt 2, 0x29faa8
  029fa78  lwz 3, 8324(25)
  029fa7c  cmpwi 3, 2
  029fa80  bf 2, 0x29fad4
  029fa84  lwz 4, 8860(25)
  029fa88  lis 3, 16179
  029fa8c  srawi 5, 4, 31
  029fa90  ori 3, 3, 13107
  029fa94  srwi 6, 5, 1
  029fa98  xor 4, 6, 4
  029fa9c  subc 4, 4, 5
  029faa0  cmpw 4, 3
  029faa4  bf 0, 0x29fad4
  029faa8  lis 3, 114
  029faac  li 4, 1
  029fab0  lfs 1, -3056(3)
  029fab4  fmuls 1, 1, 31
  029fab8  li 3, 54
  029fabc  fctidz 1, 1
  029fac0  fcfid 1, 1
  029fac4  frsp 1, 1
  029fac8  bl 0x85300
  029facc  nop
  029fad0  b 0x29faf4
  029fad4  bl 0x99ea8
  029fad8  nop
  029fadc  b 0x29faf4
  029fae0  li 3, 1
  029fae4  li 4, 0
  029fae8  ori 5, 31, 0
  029faec  bl 0x15d12c
  029faf0  nop
  029faf4  lis 3, 42
  029faf8  vspltisw 2, -1
  029fafc  li 5, 116
  029fb00  addi 3, 3, -5576
  029fb04  li 4, -3056
  029fb08  lis 6, 114
  029fb0c  vslw 2, 2, 2
  029fb10  <unknown>
  029fb14  vspltw 3, 3, 0
  029fb18  <unknown>
  029fb1c  vmaddfp 2, 4, 3, 2
  029fb20  vctsxs 2, 2, 0
  029fb24  vspltw 2, 2, 0
  029fb28  stvewx 2, 0, 30
  029fb2c  lbz 3, 82(31)
  029fb30  cmpwi 3, 2
  029fb34  bt 2, 0x29fe5c
  029fb38  lhz 4, 30(30)
  029fb3c  extsh 4, 4
  029fb40  cmpwi 4, 0
  029fb44  bf 1, 0x29fe5c
  029fb48  lis 3, 42
  029fb4c  lis 5, 114
  029fb50  addi 3, 3, -5576
  029fb54  lfs 26, 112(3)
  029fb58  lfs 30, -3056(5)
  029fb5c  fmuls 1, 30, 26
  029fb60  fctiwz 1, 1
  029fb64  stfd 1, 408(1)
  029fb68  lfs 31, 120(3)
  029fb6c  lwz 3, 412(1)
  029fb70  cmpw 4, 3
  029fb74  bf 1, 0x29fc40
  029fb78  lis 5, 42
  029fb7c  fmr 29, 26
  029fb80  addi 5, 5, -5576
  029fb84  lfs 26, 108(5)
  029fb88  fmuls 1, 30, 26
  029fb8c  fctiwz 1, 1
  029fb90  stfd 1, 408(1)
  029fb94  lwz 5, 412(1)
  029fb98  addc 3, 5, 3
  029fb9c  subc 3, 3, 4
  029fba0  extsw 3, 3
  029fba4  bl 0x502730
  029fba8  nop
  029fbac  lis 29, 114
  029fbb0  fmr 30, 1
  029fbb4  lfs 2, -3056(29)
  029fbb8  lhz 3, 30(30)
  029fbbc  fmuls 28, 2, 26
  029fbc0  fmuls 2, 2, 29
  029fbc4  extsh 3, 3
  029fbc8  fctiwz 1, 28
  029fbcc  fctiwz 2, 2
  029fbd0  stfd 1, 408(1)
  029fbd4  lwz 4, 412(1)
  029fbd8  stfd 2, 408(1)
  029fbdc  lwz 5, 412(1)
  029fbe0  addc 4, 4, 5
  029fbe4  subc 3, 4, 3
  029fbe8  extsw 3, 3
  029fbec  bl 0x502730
  029fbf0  nop
  029fbf4  lfs 2, -3056(29)
  029fbf8  lhz 3, 30(30)
  029fbfc  fmuls 27, 2, 26
  029fc00  fmuls 2, 2, 29
  029fc04  fmr 29, 1
  029fc08  extsh 3, 3
  029fc0c  fctiwz 1, 27
  029fc10  fctiwz 2, 2
  029fc14  stfd 1, 408(1)
  029fc18  lwz 4, 412(1)
  029fc1c  stfd 2, 408(1)
  029fc20  lwz 5, 412(1)
  029fc24  addc 4, 4, 5
  029fc28  subc 3, 4, 3
  029fc2c  extsw 3, 3
  029fc30  bl 0x502730
  029fc34  nop
  029fc38  lfs 2, -3056(29)
  029fc3c  b 0x29fc8c
  029fc40  ori 3, 4, 0
  029fc44  bl 0x502730
  029fc48  nop
  029fc4c  lis 29, 114
  029fc50  lhz 3, 30(30)
  029fc54  fmr 30, 1
  029fc58  extsh 3, 3
  029fc5c  lfs 28, -3056(29)
  029fc60  fmuls 28, 28, 26
  029fc64  bl 0x502730
  029fc68  nop
  029fc6c  lfs 27, -3056(29)
  029fc70  fmr 29, 1
  029fc74  lhz 3, 30(30)
  029fc78  fmuls 27, 27, 26
  029fc7c  extsh 3, 3
  029fc80  bl 0x502730
  029fc84  nop
  029fc88  lfs 2, -3056(29)
  029fc8c  fmuls 2, 2, 26
  029fc90  lis 3, 42
  029fc94  fctidz 3, 28
  029fc98  fctidz 4, 27
  029fc9c  addi 29, 3, -5576
  029fca0  fmuls 5, 29, 31
  029fca4  addic 5, 1, 256
  029fca8  ori 3, 31, 0
  029fcac  li 4, 0
  029fcb0  lfs 6, 68(29)
  029fcb4  fctidz 2, 2
  029fcb8  fmuls 31, 1, 6
  029fcbc  fcfid 3, 3
  029fcc0  fcfid 4, 4
  029fcc4  fcfid 1, 2
  029fcc8  frsp 29, 3
  029fccc  frsp 2, 4
  029fcd0  frsp 1, 1
  029fcd4  fdivs 29, 30, 29
  029fcd8  fdivs 31, 31, 1
  029fcdc  fdivs 30, 5, 2
  029fce0  bl 0xf1114
  029fce4  nop
  029fce8  lfs 1, 1648(25)
  029fcec  lfs 2, 1652(25)
  029fcf0  bl 0x5e8338
  029fcf4  nop
  029fcf8  lfs 2, 124(29)
  029fcfc  lfs 28, 128(29)
  029fd00  fadds 1, 1, 2
  029fd04  lfs 27, 132(29)
  029fd08  lfs 26, 136(29)
  029fd0c  lfs 25, 140(29)
  029fd10  lfs 24, 144(29)
  029fd14  lfs 23, 148(29)
  029fd18  fsubs 2, 28, 1
  029fd1c  fsubs 3, 27, 1
  029fd20  fsub 4, 1, 2
  029fd24  fsel 1, 4, 2, 1
  029fd28  fsub 4, 3, 1
  029fd2c  fsel 1, 4, 3, 1
  029fd30  lfs 4, 256(1)
  029fd34  lfs 5, 1648(25)
  029fd38  fmuls 3, 1, 1
  029fd3c  fmuls 2, 3, 1
  029fd40  fmuls 6, 3, 2
  029fd44  fmadds 1, 2, 26, 1
  029fd48  lfs 2, 1652(25)
  029fd4c  fmuls 7, 3, 6
  029fd50  fmadds 6, 6, 25, 1
  029fd54  fmr 1, 5
  029fd58  fmuls 3, 3, 7
  029fd5c  fmadds 5, 7, 24, 6
  029fd60  fmadds 3, 3, 23, 5
  029fd64  fadds 3, 4, 3
  029fd68  stfs 3, 256(1)
  029fd6c  bl 0x5e8338
  029fd70  nop
  029fd74  fsubs 2, 28, 1
  029fd78  fsubs 3, 27, 1
  029fd7c  fsub 4, 1, 2
  029fd80  fsel 1, 4, 2, 1
  029fd84  lfs 4, 260(1)
  029fd88  lfs 5, 264(1)
  029fd8c  fsub 2, 3, 1
  029fd90  fsel 1, 2, 3, 1
  029fd94  fmuls 3, 1, 1
  029fd98  fmuls 2, 3, 1
  029fd9c  fmuls 6, 3, 2
  029fda0  fmadds 1, 2, 26, 1
  029fda4  lfs 2, 256(1)
  029fda8  lhz 25, 28(30)
  029fdac  extsh 25, 25
  029fdb0  cmpwi 25, -1
  029fdb4  fmuls 7, 3, 6
  029fdb8  fmadds 1, 6, 25, 1
  029fdbc  fmuls 3, 3, 7
  029fdc0  fmadds 1, 7, 24, 1
  029fdc4  fmadds 1, 3, 23, 1
  029fdc8  fadds 1, 4, 1
  029fdcc  stfs 1, 260(1)
  029fdd0  lfs 1, 152(29)
  029fdd4  fadds 1, 5, 1
  029fdd8  stfs 1, 264(1)
  029fddc  lfs 1, 156(29)
  029fde0  bf 2, 0x29fe10
  029fde4  lis 3, 42
  029fde8  fmr 3, 29
  029fdec  fmr 4, 30
  029fdf0  addi 4, 3, -5576
  029fdf4  addic 3, 1, 256
  029fdf8  fmr 5, 31
  029fdfc  lfs 2, 56(4)
  029fe00  bl 0xda4ac
  029fe04  nop
  029fe08  sth 3, 28(30)
  029fe0c  b 0x29fe4c
  029fe10  lis 3, 162
  029fe14  sldi 4, 25, 5
  029fe18  addic 3, 3, -8448
  029fe1c  addc 3, 3, 4
  029fe20  lis 4, 16608
  029fe24  clrldi 3, 3, 32
  029fe28  stfs 2, 16(3)
  029fe2c  lfs 1, 260(1)
  029fe30  stfs 1, 20(3)
  029fe34  lfs 1, 264(1)
  029fe38  stw 4, 28(3)
  029fe3c  stfs 1, 24(3)
  029fe40  stfs 29, 0(3)
  029fe44  stfs 30, 4(3)
  029fe48  stfs 31, 8(3)
  029fe4c  addic 3, 30, 30
  029fe50  bl 0x4fffb4
  029fe54  nop
  029fe58  b 0x29fe84
  029fe5c  lhz 3, 28(30)
  029fe60  extsh 3, 3
  029fe64  cmpwi 3, -1
  029fe68  bt 2, 0x29fe84
  029fe6c  bl 0xda9e8
  029fe70  nop
  029fe74  li 3, -1
  029fe78  li 4, 0
  029fe7c  sth 3, 28(30)
  029fe80  sth 4, 30(30)
  029fe84  lbz 3, 83(31)
  029fe88  cmpwi 3, 2
  029fe8c  bf 2, 0x29feb0
  029fe90  lhz 3, 28(30)
  029fe94  extsh 3, 3
  029fe98  bl 0xda9e8
  029fe9c  nop
  029fea0  li 3, -1
  029fea4  li 4, 0
  029fea8  sth 3, 28(30)
  029feac  sth 4, 30(30)
  029feb0  ld 0, 672(1)
  029feb4  mtlr 0
  029feb8  lfd 14, 512(1)
  029febc  lfd 15, 520(1)
  029fec0  lfd 16, 528(1)
  029fec4  lfd 17, 536(1)
  029fec8  lfd 18, 544(1)
  029fecc  lfd 19, 552(1)
  029fed0  lfd 20, 560(1)
  029fed4  lfd 21, 568(1)
  029fed8  lfd 22, 576(1)
  029fedc  lfd 23, 584(1)
  029fee0  lfd 24, 592(1)
  029fee4  lfd 25, 600(1)
  029fee8  lfd 26, 608(1)
  029feec  lfd 27, 616(1)
  029fef0  lfd 28, 624(1)
  029fef4  lfd 29, 632(1)
  029fef8  lfd 30, 640(1)
  029fefc  lfd 31, 648(1)
  029ff00  ld 21, 424(1)
  029ff04  ld 22, 432(1)
  029ff08  ld 23, 440(1)
  029ff0c  ld 24, 448(1)
  029ff10  ld 25, 456(1)
  029ff14  ld 26, 464(1)
  029ff18  ld 27, 472(1)
  029ff1c  ld 28, 480(1)
  029ff20  ld 29, 488(1)
  029ff24  ld 30, 496(1)
  029ff28  ld 31, 504(1)
  029ff2c  addi 1, 1, 656
  029ff30  blr
