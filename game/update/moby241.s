# game/update/moby241.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M241_0030d034:   # 0x30d034, 0x14 bytes
  030d034  lis 3, 128
  030d038  lis 4, 1
  030d03c  addic 3, 3, -2444
  030d040  stw 4, 72(3)
  030d044  blr

UpdateMoby_241:   # 0x30d0a0, 0x18c4 bytes
  030d0a0  stdu 1, -784(1)
  030d0a4  mflr 0
  030d0a8  std 0, 800(1)
  030d0ac  stfd 22, 704(1)
  030d0b0  stfd 23, 712(1)
  030d0b4  stfd 24, 720(1)
  030d0b8  stfd 25, 728(1)
  030d0bc  stfd 26, 736(1)
  030d0c0  stfd 27, 744(1)
  030d0c4  stfd 28, 752(1)
  030d0c8  stfd 29, 760(1)
  030d0cc  stfd 30, 768(1)
  030d0d0  stfd 31, 776(1)
  030d0d4  std 31, 696(1)
  030d0d8  ori 31, 3, 0
  030d0dc  lis 4, 33
  030d0e0  std 30, 688(1)
  030d0e4  li 5, 0
  030d0e8  std 29, 680(1)
  030d0ec  lwz 30, 120(31)
  030d0f0  bl 0x10675c
  030d0f4  nop
  030d0f8  ori 29, 3, 0
  030d0fc  addic 3, 30, 356
  030d100  bl 0x4fff60
  030d104  nop
  030d108  cmpwi 29, 0
  030d10c  bt 2, 0x30d880
  030d110  lbz 3, 32(31)
  030d114  cmpwi 1, 3, 4
  030d118  cmpwi 3, 8
  030d11c  cror 2, 2, 6
  030d120  bt 2, 0x30d880
  030d124  lwz 3, 356(30)
  030d128  cmpwi 3, 0
  030d12c  bf 2, 0x30d880
  030d130  lis 3, 15363
  030d134  lis 4, 14851
  030d138  ori 3, 3, 4719
  030d13c  ori 4, 4, 4719
  030d140  lis 5, 49
  030d144  stw 3, 96(30)
  030d148  addi 3, 5, -12216
  030d14c  stw 4, 100(30)
  030d150  li 5, 3
  030d154  lis 4, 114
  030d158  lfs 1, 0(3)
  030d15c  lfs 2, -3052(4)
  030d160  lfs 3, 0(30)
  030d164  fmuls 1, 2, 1
  030d168  li 4, 0
  030d16c  stfs 1, 104(30)
  030d170  lfs 1, 4(3)
  030d174  stb 4, 141(30)
  030d178  fmuls 1, 2, 1
  030d17c  stw 5, 116(30)
  030d180  stfs 1, 108(30)
  030d184  lfs 1, 44(29)
  030d188  fsubs 1, 3, 1
  030d18c  stfs 1, 0(30)
  030d190  lfs 4, 8(3)
  030d194  fcmpu 0, 1, 4
  030d198  cror 6, 0, 2
  030d19c  bt 6, 0x30d67c
  030d1a0  lwz 3, 32(29)
  030d1a4  lhz 3, 166(3)
  030d1a8  cmpwi 3, 176
  030d1ac  cmpwi 1, 3, 177
  030d1b0  bt 2, 0x30d1b8
  030d1b4  bf 6, 0x30d1dc
  030d1b8  lis 3, 49
  030d1bc  li 4, 12
  030d1c0  addi 3, 3, -12216
  030d1c4  li 5, -3056
  030d1c8  lis 6, 114
  030d1cc  <unknown>
  030d1d0  <unknown>
  030d1d4  vspltw 2, 2, 0
  030d1d8  b 0x30d1fc
  030d1dc  lis 3, 49
  030d1e0  li 4, 16
  030d1e4  addi 3, 3, -12216
  030d1e8  lis 5, 114
  030d1ec  li 6, -3056
  030d1f0  <unknown>
  030d1f4  vspltw 2, 2, 0
  030d1f8  <unknown>
  030d1fc  vspltisw 4, -1
  030d200  li 3, 356
  030d204  vspltw 3, 3, 0
  030d208  lis 4, 16512
  030d20c  vslw 4, 4, 4
  030d210  vmaddfp 2, 3, 2, 4
  030d214  vctsxs 2, 2, 0
  030d218  stvewx 2, 3, 30
  030d21c  lwz 3, 44(29)
  030d220  srawi 29, 3, 31
  030d224  srwi 5, 29, 1
  030d228  xor 3, 5, 3
  030d22c  subc 29, 3, 29
  030d230  cmpw 29, 4
  030d234  bf 0, 0x30d280
  030d238  lis 3, 16384
  030d23c  cmpw 29, 3
  030d240  bt 0, 0x30d260
  030d244  lis 3, 49
  030d248  lis 4, 128
  030d24c  addi 3, 3, -12216
  030d250  lfs 1, 20(3)
  030d254  lfs 2, -2296(4)
  030d258  fmuls 1, 2, 1
  030d25c  stfs 1, 364(30)
  030d260  li 3, 5
  030d264  li 4, 0
  030d268  ori 5, 31, 0
  030d26c  bl 0x15d12c
  030d270  nop
  030d274  li 3, 120
  030d278  stb 3, 71(30)
  030d27c  b 0x30d870
  030d280  lis 3, 16576
  030d284  cmpw 29, 3
  030d288  bf 0, 0x30d484
  030d28c  li 3, 200
  030d290  lis 4, 151
  030d294  addic 4, 4, -25376
  030d298  stb 3, 71(30)
  030d29c  lfs 1, 16(31)
  030d2a0  lfs 2, 20(31)
  030d2a4  lfs 3, 128(4)
  030d2a8  lfs 5, 132(4)
  030d2ac  fsubs 1, 1, 3
  030d2b0  fsubs 2, 2, 5
  030d2b4  lis 4, 115
  030d2b8  addic 3, 30, 80
  030d2bc  addic 4, 4, 22784
  030d2c0  fabs 3, 1
  030d2c4  fabs 5, 2
  030d2c8  stfs 1, 480(1)
  030d2cc  stfs 2, 484(1)
  030d2d0  fsubs 1, 3, 5
  030d2d4  stfs 1, 488(1)
  030d2d8  lwz 5, 480(1)
  030d2dc  lfs 1, 480(1)
  030d2e0  lwz 6, 484(1)
  030d2e4  lfs 2, 484(1)
  030d2e8  fabs 1, 1
  030d2ec  lwz 7, 488(1)
  030d2f0  rlwinm 6, 6, 3, 29, 29
  030d2f4  lfs 6, 488(1)
  030d2f8  fabs 2, 2
  030d2fc  rlwimi 6, 7, 2, 30, 30
  030d300  fsub 7, 6, 4
  030d304  fsub 6, 6, 4
  030d308  rlwimi 6, 5, 4, 28, 28
  030d30c  ori 5, 4, 0
  030d310  rlwimi 5, 6, 2, 26, 28
  030d314  slwi 6, 6, 2
  030d318  clrldi 5, 5, 32
  030d31c  fsel 5, 7, 1, 5
  030d320  lfsx 1, 4, 6
  030d324  fsel 3, 6, 2, 3
  030d328  lfs 2, 4(5)
  030d32c  fcmpu 0, 5, 4
  030d330  bt 1, 0x30d338
  030d334  b 0x30d458
  030d338  fsubs 6, 3, 5
  030d33c  fadds 3, 3, 5
  030d340  addic 4, 1, 16
  030d344  li 7, 2
  030d348  addic 6, 4, 620
  030d34c  addic 5, 4, 604
  030d350  mtctr 7
  030d354  fdivs 3, 6, 3
  030d358  fmuls 5, 3, 3
  030d35c  stfs 3, 632(1)
  030d360  stfs 3, 624(1)
  030d364  stfs 3, 628(1)
  030d368  stfs 3, 620(1)
  030d36c  lfs 7, 632(1)
  030d370  lfs 8, 624(1)
  030d374  lfs 9, 628(1)
  030d378  fmuls 6, 5, 5
  030d37c  fmuls 8, 8, 5
  030d380  fmuls 7, 7, 6
  030d384  fmuls 3, 6, 6
  030d388  fmuls 6, 9, 6
  030d38c  stfs 8, 624(1)
  030d390  fmuls 5, 7, 5
  030d394  stfs 6, 628(1)
  030d398  stfs 5, 632(1)
  030d39c  lfs 5, 604(4)
  030d3a0  fmuls 5, 5, 3
  030d3a4  stfs 5, 620(4)
  030d3a8  lfs 5, 4(5)
  030d3ac  addic 5, 5, 8
  030d3b0  fmuls 5, 5, 3
  030d3b4  addic 4, 4, 8
  030d3b8  stfs 5, 4(6)
  030d3bc  addic 6, 6, 8
  030d3c0  bdnz 0x30d39c
  030d3c4  li 6, 4
  030d3c8  ori 4, 1, 0
  030d3cc  mtctr 6
  030d3d0  lis 5, 115
  030d3d4  addic 6, 4, 620
  030d3d8  addic 5, 5, 22752
  030d3dc  ori 8, 6, 0
  030d3e0  lfs 3, 620(4)
  030d3e4  lfs 5, 0(5)
  030d3e8  fmuls 3, 3, 5
  030d3ec  lfs 5, 4(5)
  030d3f0  addic 5, 5, 8
  030d3f4  stfs 3, 620(4)
  030d3f8  lfs 3, 4(6)
  030d3fc  addic 4, 4, 8
  030d400  fmuls 3, 3, 5
  030d404  stfs 3, 4(6)
  030d408  addic 6, 6, 8
  030d40c  bdnz 0x30d3e0
  030d410  ori 4, 1, 0
  030d414  mtctr 7
  030d418  lfs 3, 620(4)
  030d41c  fadds 3, 4, 3
  030d420  addic 4, 4, 16
  030d424  lfs 4, 4(8)
  030d428  lfs 5, 8(8)
  030d42c  lfs 6, 12(8)
  030d430  addic 8, 8, 16
  030d434  fadds 3, 3, 4
  030d438  fadds 4, 3, 5
  030d43c  fadds 4, 4, 6
  030d440  bdnz 0x30d418
  030d444  lis 4, 49
  030d448  addi 4, 4, -12216
  030d44c  lfs 3, 24(4)
  030d450  fadds 4, 4, 3
  030d454  fmadds 4, 4, 1, 2
  030d458  ori 4, 3, 0
  030d45c  ori 3, 31, 0
  030d460  fmr 1, 4
  030d464  li 6, 8
  030d468  li 7, 5
  030d46c  li 8, 0
  030d470  bl 0x10ad80
  030d474  nop
  030d478  li 3, 4
  030d47c  stb 3, 32(31)
  030d480  b 0x30d870
  030d484  li 3, 230
  030d488  lis 4, 151
  030d48c  addic 4, 4, -25376
  030d490  stb 3, 71(30)
  030d494  lfs 1, 16(31)
  030d498  lfs 2, 20(31)
  030d49c  lfs 3, 128(4)
  030d4a0  lfs 5, 132(4)
  030d4a4  fsubs 1, 1, 3
  030d4a8  fsubs 2, 2, 5
  030d4ac  lis 4, 115
  030d4b0  addic 3, 30, 80
  030d4b4  addic 4, 4, 22784
  030d4b8  fabs 3, 1
  030d4bc  fabs 5, 2
  030d4c0  stfs 1, 468(1)
  030d4c4  stfs 2, 472(1)
  030d4c8  fsubs 1, 3, 5
  030d4cc  stfs 1, 476(1)
  030d4d0  lwz 5, 468(1)
  030d4d4  lfs 1, 468(1)
  030d4d8  lwz 6, 472(1)
  030d4dc  lfs 2, 472(1)
  030d4e0  fabs 1, 1
  030d4e4  lwz 7, 476(1)
  030d4e8  rlwinm 6, 6, 3, 29, 29
  030d4ec  lfs 6, 476(1)
  030d4f0  fabs 2, 2
  030d4f4  rlwimi 6, 7, 2, 30, 30
  030d4f8  fsub 7, 6, 4
  030d4fc  fsub 6, 6, 4
  030d500  rlwimi 6, 5, 4, 28, 28
  030d504  ori 5, 4, 0
  030d508  rlwimi 5, 6, 2, 26, 28
  030d50c  slwi 6, 6, 2
  030d510  clrldi 5, 5, 32
  030d514  fsel 5, 7, 1, 5
  030d518  lfsx 1, 4, 6
  030d51c  fsel 3, 6, 2, 3
  030d520  lfs 2, 4(5)
  030d524  fcmpu 0, 5, 4
  030d528  bt 1, 0x30d530
  030d52c  b 0x30d650
  030d530  fsubs 6, 3, 5
  030d534  fadds 3, 3, 5
  030d538  addic 4, 1, 16
  030d53c  li 8, 2
  030d540  addic 6, 4, 588
  030d544  addic 5, 4, 572
  030d548  mtctr 8
  030d54c  fdivs 3, 6, 3
  030d550  fmuls 5, 3, 3
  030d554  stfs 3, 600(1)
  030d558  stfs 3, 592(1)
  030d55c  stfs 3, 596(1)
  030d560  stfs 3, 588(1)
  030d564  lfs 7, 600(1)
  030d568  lfs 8, 592(1)
  030d56c  lfs 9, 596(1)
  030d570  fmuls 6, 5, 5
  030d574  fmuls 8, 8, 5
  030d578  fmuls 7, 7, 6
  030d57c  fmuls 3, 6, 6
  030d580  fmuls 6, 9, 6
  030d584  stfs 8, 592(1)
  030d588  fmuls 5, 7, 5
  030d58c  stfs 6, 596(1)
  030d590  stfs 5, 600(1)
  030d594  lfs 5, 572(4)
  030d598  fmuls 5, 5, 3
  030d59c  stfs 5, 588(4)
  030d5a0  lfs 5, 4(5)
  030d5a4  addic 5, 5, 8
  030d5a8  fmuls 5, 5, 3
  030d5ac  addic 4, 4, 8
  030d5b0  stfs 5, 4(6)
  030d5b4  addic 6, 6, 8
  030d5b8  bdnz 0x30d594
  030d5bc  li 6, 4
  030d5c0  ori 4, 1, 0
  030d5c4  mtctr 6
  030d5c8  lis 5, 115
  030d5cc  addic 6, 4, 588
  030d5d0  addic 5, 5, 22752
  030d5d4  ori 7, 6, 0
  030d5d8  lfs 3, 588(4)
  030d5dc  lfs 5, 0(5)
  030d5e0  fmuls 3, 3, 5
  030d5e4  lfs 5, 4(5)
  030d5e8  addic 5, 5, 8
  030d5ec  stfs 3, 588(4)
  030d5f0  lfs 3, 4(6)
  030d5f4  addic 4, 4, 8
  030d5f8  fmuls 3, 3, 5
  030d5fc  stfs 3, 4(6)
  030d600  addic 6, 6, 8
  030d604  bdnz 0x30d5d8
  030d608  ori 4, 1, 0
  030d60c  mtctr 8
  030d610  lfs 3, 588(4)
  030d614  fadds 3, 4, 3
  030d618  addic 4, 4, 16
  030d61c  lfs 4, 4(7)
  030d620  lfs 5, 8(7)
  030d624  lfs 6, 12(7)
  030d628  addic 7, 7, 16
  030d62c  fadds 3, 3, 4
  030d630  fadds 4, 3, 5
  030d634  fadds 4, 4, 6
  030d638  bdnz 0x30d610
  030d63c  lis 4, 49
  030d640  addi 4, 4, -12216
  030d644  lfs 3, 24(4)
  030d648  fadds 4, 4, 3
  030d64c  fmadds 4, 4, 1, 2
  030d650  ori 4, 3, 0
  030d654  ori 3, 31, 0
  030d658  fmr 1, 4
  030d65c  li 6, 8
  030d660  li 7, 5
  030d664  li 8, 0
  030d668  bl 0x10ad80
  030d66c  nop
  030d670  li 3, 5
  030d674  stb 3, 32(31)
  030d678  b 0x30d870
  030d67c  li 3, 250
  030d680  lis 4, 151
  030d684  addic 4, 4, -25376
  030d688  stb 3, 71(30)
  030d68c  lfs 1, 16(31)
  030d690  lfs 2, 20(31)
  030d694  lfs 3, 128(4)
  030d698  lfs 5, 132(4)
  030d69c  fsubs 1, 1, 3
  030d6a0  fsubs 2, 2, 5
  030d6a4  lis 4, 115
  030d6a8  addic 3, 30, 80
  030d6ac  addic 4, 4, 22784
  030d6b0  fabs 3, 1
  030d6b4  fabs 5, 2
  030d6b8  stfs 1, 456(1)
  030d6bc  stfs 2, 460(1)
  030d6c0  fsubs 1, 3, 5
  030d6c4  stfs 1, 464(1)
  030d6c8  lwz 5, 456(1)
  030d6cc  lfs 1, 456(1)
  030d6d0  lwz 6, 460(1)
  030d6d4  lfs 2, 460(1)
  030d6d8  fabs 1, 1
  030d6dc  lwz 7, 464(1)
  030d6e0  rlwinm 6, 6, 3, 29, 29
  030d6e4  lfs 6, 464(1)
  030d6e8  fabs 2, 2
  030d6ec  rlwimi 6, 7, 2, 30, 30
  030d6f0  fsub 7, 6, 4
  030d6f4  fsub 6, 6, 4
  030d6f8  rlwimi 6, 5, 4, 28, 28
  030d6fc  ori 5, 4, 0
  030d700  rlwimi 5, 6, 2, 26, 28
  030d704  slwi 6, 6, 2
  030d708  clrldi 5, 5, 32
  030d70c  fsel 5, 7, 1, 5
  030d710  lfsx 1, 4, 6
  030d714  fsel 3, 6, 2, 3
  030d718  lfs 2, 4(5)
  030d71c  fcmpu 0, 5, 4
  030d720  bt 1, 0x30d728
  030d724  b 0x30d848
  030d728  fsubs 6, 3, 5
  030d72c  fadds 3, 3, 5
  030d730  addic 4, 1, 16
  030d734  li 8, 2
  030d738  addic 6, 4, 556
  030d73c  addic 5, 4, 540
  030d740  mtctr 8
  030d744  fdivs 3, 6, 3
  030d748  fmuls 5, 3, 3
  030d74c  stfs 3, 568(1)
  030d750  stfs 3, 560(1)
  030d754  stfs 3, 564(1)
  030d758  stfs 3, 556(1)
  030d75c  lfs 7, 568(1)
  030d760  lfs 8, 560(1)
  030d764  lfs 9, 564(1)
  030d768  fmuls 6, 5, 5
  030d76c  fmuls 8, 8, 5
  030d770  fmuls 7, 7, 6
  030d774  fmuls 3, 6, 6
  030d778  fmuls 6, 9, 6
  030d77c  stfs 8, 560(1)
  030d780  fmuls 5, 7, 5
  030d784  stfs 6, 564(1)
  030d788  stfs 5, 568(1)
  030d78c  lfs 5, 540(4)
  030d790  fmuls 5, 5, 3
  030d794  stfs 5, 556(4)
  030d798  lfs 5, 4(5)
  030d79c  addic 5, 5, 8
  030d7a0  fmuls 5, 5, 3
  030d7a4  addic 4, 4, 8
  030d7a8  stfs 5, 4(6)
  030d7ac  addic 6, 6, 8
  030d7b0  bdnz 0x30d78c
  030d7b4  li 6, 4
  030d7b8  ori 4, 1, 0
  030d7bc  mtctr 6
  030d7c0  lis 5, 115
  030d7c4  addic 6, 4, 556
  030d7c8  addic 5, 5, 22752
  030d7cc  ori 7, 6, 0
  030d7d0  lfs 3, 556(4)
  030d7d4  lfs 5, 0(5)
  030d7d8  fmuls 3, 3, 5
  030d7dc  lfs 5, 4(5)
  030d7e0  addic 5, 5, 8
  030d7e4  stfs 3, 556(4)
  030d7e8  lfs 3, 4(6)
  030d7ec  addic 4, 4, 8
  030d7f0  fmuls 3, 3, 5
  030d7f4  stfs 3, 4(6)
  030d7f8  addic 6, 6, 8
  030d7fc  bdnz 0x30d7d0
  030d800  ori 4, 1, 0
  030d804  mtctr 8
  030d808  lfs 3, 556(4)
  030d80c  fadds 3, 4, 3
  030d810  addic 4, 4, 16
  030d814  lfs 4, 4(7)
  030d818  lfs 5, 8(7)
  030d81c  lfs 6, 12(7)
  030d820  addic 7, 7, 16
  030d824  fadds 3, 3, 4
  030d828  fadds 4, 3, 5
  030d82c  fadds 4, 4, 6
  030d830  bdnz 0x30d808
  030d834  lis 4, 49
  030d838  addi 4, 4, -12216
  030d83c  lfs 3, 24(4)
  030d840  fadds 4, 4, 3
  030d844  fmadds 4, 4, 1, 2
  030d848  ori 4, 3, 0
  030d84c  ori 3, 31, 0
  030d850  fmr 1, 4
  030d854  li 6, 9
  030d858  li 7, 5
  030d85c  li 8, 0
  030d860  bl 0x10ad80
  030d864  nop
  030d868  li 3, 8
  030d86c  stb 3, 32(31)
  030d870  addic 4, 30, 64
  030d874  ori 3, 31, 0
  030d878  bl 0x10c808
  030d87c  nop
  030d880  li 4, 255
  030d884  lbz 3, 32(31)
  030d888  cmpwi 3, 3
  030d88c  stb 4, 164(31)
  030d890  cmpwi 1, 3, 0
  030d894  cmpwi 6, 3, -1
  030d898  cmpwi 7, 3, 1
  030d89c  bt 1, 0x30d8bc
  030d8a0  bt 5, 0x30d8ac
  030d8a4  bf 25, 0x30e8bc
  030d8a8  b 0x30d8ec
  030d8ac  bf 29, 0x30d974
  030d8b0  cmpwi 3, 2
  030d8b4  bf 1, 0x30db48
  030d8b8  b 0x30dbf0
  030d8bc  cmpwi 3, 6
  030d8c0  bt 1, 0x30d8d8
  030d8c4  cmpwi 3, 4
  030d8c8  bf 1, 0x30e768
  030d8cc  cmpwi 3, 5
  030d8d0  bf 1, 0x30e804
  030d8d4  b 0x30e850
  030d8d8  cmpwi 3, 7
  030d8dc  bf 1, 0x30e39c
  030d8e0  cmpwi 3, 8
  030d8e4  bf 1, 0x30e890
  030d8e8  b 0x30e8bc
  030d8ec  lis 3, 16656
  030d8f0  li 4, 3
  030d8f4  li 6, 0
  030d8f8  addic 5, 30, 256
  030d8fc  stw 3, 0(30)
  030d900  stb 4, 8(30)
  030d904  stw 6, 356(30)
  030d908  ori 3, 31, 0
  030d90c  stw 6, 364(30)
  030d910  li 4, 6
  030d914  bl 0xf0ea8
  030d918  nop
  030d91c  lfs 1, 72(31)
  030d920  li 3, 1
  030d924  stfs 1, 348(30)
  030d928  lfs 1, 16(31)
  030d92c  stfs 1, 320(30)
  030d930  lfs 1, 20(31)
  030d934  stfs 1, 324(30)
  030d938  lfs 1, 24(31)
  030d93c  stfs 1, 328(30)
  030d940  lfs 1, 28(31)
  030d944  stfs 1, 332(30)
  030d948  lbz 4, 83(31)
  030d94c  stb 3, 32(31)
  030d950  cmpwi 4, 2
  030d954  bt 2, 0x30e8bc
  030d958  ori 3, 31, 0
  030d95c  li 4, 2
  030d960  li 5, 0
  030d964  li 6, 0
  030d968  bl 0xfddc0
  030d96c  nop
  030d970  b 0x30e8bc
  030d974  lis 3, 49
  030d978  li 9, 0
  030d97c  addi 29, 3, -12216
  030d980  addic 3, 30, 348
  030d984  addic 5, 30, 336
  030d988  lfs 31, 8(29)
  030d98c  lfs 2, 28(29)
  030d990  lfs 3, 32(29)
  030d994  lfs 4, 36(29)
  030d998  fmr 1, 31
  030d99c  bl 0x10a050
  030d9a0  nop
  030d9a4  lfs 2, 324(30)
  030d9a8  lfs 6, 20(31)
  030d9ac  lfs 1, 320(30)
  030d9b0  fsubs 2, 2, 6
  030d9b4  lfs 5, 16(31)
  030d9b8  lfs 3, 328(30)
  030d9bc  fsubs 1, 1, 5
  030d9c0  lfs 7, 24(31)
  030d9c4  fsubs 3, 3, 7
  030d9c8  lis 3, 114
  030d9cc  lfs 8, 40(29)
  030d9d0  fmuls 4, 2, 2
  030d9d4  lfs 9, -3052(3)
  030d9d8  lbz 6, 83(31)
  030d9dc  fmuls 8, 9, 8
  030d9e0  lbz 4, 112(31)
  030d9e4  lbz 5, 82(31)
  030d9e8  fmadds 4, 1, 1, 4
  030d9ec  fmadds 4, 3, 3, 4
  030d9f0  fsqrts 4, 4
  030d9f4  fcmpu 0, 4, 8
  030d9f8  cror 6, 0, 2
  030d9fc  bt 6, 0x30da28
  030da00  fcmpu 0, 4, 31
  030da04  bf 2, 0x30da18
  030da08  fmr 1, 31
  030da0c  fmr 2, 1
  030da10  fmr 3, 2
  030da14  b 0x30da28
  030da18  fdivs 4, 8, 4
  030da1c  fmuls 1, 1, 4
  030da20  fmuls 2, 2, 4
  030da24  fmuls 3, 3, 4
  030da28  fadds 4, 5, 1
  030da2c  fadds 2, 6, 2
  030da30  lis 3, 151
  030da34  fadds 1, 7, 3
  030da38  addic 3, 3, -25376
  030da3c  stfs 4, 16(31)
  030da40  stfs 2, 20(31)
  030da44  stfs 1, 24(31)
  030da48  lfs 3, 132(3)
  030da4c  lfs 5, 128(3)
  030da50  fsubs 2, 2, 3
  030da54  fsubs 3, 4, 5
  030da58  fmuls 2, 2, 2
  030da5c  fmadds 2, 3, 3, 2
  030da60  lfs 3, 352(30)
  030da64  fsqrts 2, 2
  030da68  fcmpu 0, 2, 3
  030da6c  cror 6, 1, 2
  030da70  bt 6, 0x30daec
  030da74  lfs 2, 136(3)
  030da78  lis 7, 49
  030da7c  fsubs 1, 1, 2
  030da80  addi 7, 7, -12216
  030da84  lfs 2, 44(7)
  030da88  fabs 1, 1
  030da8c  fcmpu 0, 1, 2
  030da90  cror 6, 1, 2
  030da94  bt 6, 0x30daec
  030da98  lwz 4, 372(30)
  030da9c  cmpwi 4, 0
  030daa0  bt 0, 0x30dac0
  030daa4  addic 3, 3, 128
  030daa8  extsw 4, 4
  030daac  bl 0x110b70
  030dab0  nop
  030dab4  cmpwi 3, 0
  030dab8  bt 2, 0x30e8bc
  030dabc  lbz 6, 83(31)
  030dac0  li 3, 2
  030dac4  cmpwi 6, 3
  030dac8  stb 3, 32(31)
  030dacc  bt 2, 0x30e8bc
  030dad0  ori 3, 31, 0
  030dad4  li 4, 3
  030dad8  li 5, 0
  030dadc  li 6, 3
  030dae0  bl 0xfddc0
  030dae4  nop
  030dae8  b 0x30e8bc
  030daec  rlwinm 3, 4, 0, 30, 30
  030daf0  cmpwi 3, 0
  030daf4  bt 2, 0x30e8bc
  030daf8  cmpwi 5, 1
  030dafc  cmpwi 1, 6, 2
  030db00  cmpwi 6, 6, 1
  030db04  bf 2, 0x30db28
  030db08  bt 6, 0x30e8bc
  030db0c  ori 3, 31, 0
  030db10  li 4, 2
  030db14  li 5, 0
  030db18  li 6, 3
  030db1c  bl 0xfddc0
  030db20  nop
  030db24  b 0x30e8bc
  030db28  bt 26, 0x30e8bc
  030db2c  ori 3, 31, 0
  030db30  li 4, 1
  030db34  li 5, 0
  030db38  li 6, 3
  030db3c  bl 0xfddc0
  030db40  nop
  030db44  b 0x30e8bc
  030db48  lis 4, 49
  030db4c  addic 3, 30, 348
  030db50  addi 4, 4, -12216
  030db54  addic 5, 30, 336
  030db58  li 9, 0
  030db5c  lfs 1, 8(4)
  030db60  lfs 2, 28(4)
  030db64  lfs 3, 32(4)
  030db68  lfs 4, 36(4)
  030db6c  bl 0x10a050
  030db70  nop
  030db74  lbz 3, 112(31)
  030db78  rlwinm 3, 3, 0, 30, 30
  030db7c  cmpwi 3, 0
  030db80  bt 2, 0x30e8bc
  030db84  li 3, 3
  030db88  lbz 4, 83(31)
  030db8c  cmpwi 4, 4
  030db90  stb 3, 32(31)
  030db94  bt 2, 0x30dbb0
  030db98  ori 3, 31, 0
  030db9c  li 4, 4
  030dba0  li 5, 0
  030dba4  li 6, 3
  030dba8  bl 0xfddc0
  030dbac  nop
  030dbb0  lis 3, 49
  030dbb4  li 4, 48
  030dbb8  vspltisw 2, -1
  030dbbc  addi 3, 3, -12216
  030dbc0  lis 5, 114
  030dbc4  li 6, -3056
  030dbc8  vslw 2, 2, 2
  030dbcc  <unknown>
  030dbd0  li 3, 360
  030dbd4  vspltw 3, 3, 0
  030dbd8  <unknown>
  030dbdc  vmaddfp 2, 4, 3, 2
  030dbe0  vctsxs 2, 2, 0
  030dbe4  vspltw 2, 2, 0
  030dbe8  stvewx 2, 3, 30
  030dbec  b 0x30e8bc
  030dbf0  lwz 3, 368(30)
  030dbf4  cmpwi 3, -1
  030dbf8  bf 2, 0x30dc7c
  030dbfc  lis 3, 151
  030dc00  lfs 1, 20(31)
  030dc04  lfs 2, 16(31)
  030dc08  addic 3, 3, -25376
  030dc0c  lis 4, 49
  030dc10  lfs 3, 132(3)
  030dc14  lfs 4, 128(3)
  030dc18  fsubs 1, 1, 3
  030dc1c  fsubs 2, 2, 4
  030dc20  addi 4, 4, -12216
  030dc24  fmuls 1, 1, 1
  030dc28  fmadds 1, 2, 2, 1
  030dc2c  lfs 2, 52(4)
  030dc30  fsqrts 1, 1
  030dc34  fcmpu 0, 1, 2
  030dc38  cror 6, 1, 2
  030dc3c  bt 6, 0x30dc7c
  030dc40  lfs 1, 24(31)
  030dc44  lfs 2, 136(3)
  030dc48  lis 4, 49
  030dc4c  fsubs 1, 1, 2
  030dc50  addi 4, 4, -12216
  030dc54  lfs 2, 44(4)
  030dc58  fabs 1, 1
  030dc5c  fcmpu 0, 1, 2
  030dc60  cror 6, 1, 2
  030dc64  bt 6, 0x30dc7c
  030dc68  lhz 3, 776(3)
  030dc6c  cmpwi 3, 0
  030dc70  bf 2, 0x30dc7c
  030dc74  bl 0x2ed9c
  030dc78  nop
  030dc7c  lfs 2, 324(30)
  030dc80  lfs 6, 20(31)
  030dc84  lfs 1, 320(30)
  030dc88  fsubs 2, 2, 6
  030dc8c  lfs 5, 16(31)
  030dc90  lfs 3, 328(30)
  030dc94  fsubs 1, 1, 5
  030dc98  lfs 7, 24(31)
  030dc9c  fsubs 3, 3, 7
  030dca0  lis 3, 49
  030dca4  lis 4, 114
  030dca8  addi 3, 3, -12216
  030dcac  fmuls 4, 2, 2
  030dcb0  lfs 8, 40(3)
  030dcb4  lfs 9, -3052(4)
  030dcb8  fmuls 8, 9, 8
  030dcbc  fmadds 4, 1, 1, 4
  030dcc0  fmadds 4, 3, 3, 4
  030dcc4  fsqrts 4, 4
  030dcc8  fcmpu 0, 4, 8
  030dccc  cror 6, 0, 2
  030dcd0  bt 6, 0x30dd08
  030dcd4  lis 3, 49
  030dcd8  addi 3, 3, -12216
  030dcdc  lfs 9, 8(3)
  030dce0  fcmpu 0, 4, 9
  030dce4  bf 2, 0x30dcf8
  030dce8  fmr 1, 9
  030dcec  fmr 2, 1
  030dcf0  fmr 3, 2
  030dcf4  b 0x30dd08
  030dcf8  fdivs 4, 8, 4
  030dcfc  fmuls 1, 1, 4
  030dd00  fmuls 2, 2, 4
  030dd04  fmuls 3, 3, 4
  030dd08  fadds 1, 5, 1
  030dd0c  fadds 2, 6, 2
  030dd10  li 3, 0
  030dd14  fadds 3, 7, 3
  030dd18  lis 29, 151
  030dd1c  stw 31, 288(1)
  030dd20  lis 4, 49
  030dd24  lfs 4, 28(31)
  030dd28  addic 29, 29, -25376
  030dd2c  stw 3, 292(1)
  030dd30  addi 4, 4, -12216
  030dd34  stw 3, 304(1)
  030dd38  addic 7, 1, 272
  030dd3c  addic 3, 1, 144
  030dd40  li 5, 0
  030dd44  ori 6, 31, 0
  030dd48  stfs 1, 16(31)
  030dd4c  stfs 2, 20(31)
  030dd50  stfs 3, 24(31)
  030dd54  lfs 5, 128(29)
  030dd58  lfs 6, 132(29)
  030dd5c  stfs 5, 128(1)
  030dd60  lfs 5, 136(29)
  030dd64  stfs 6, 132(1)
  030dd68  lfs 6, 140(29)
  030dd6c  stfs 5, 136(1)
  030dd70  stfs 6, 140(1)
  030dd74  stfs 1, 144(1)
  030dd78  stfs 2, 148(1)
  030dd7c  stfs 4, 156(1)
  030dd80  lfs 1, 56(4)
  030dd84  addic 4, 1, 128
  030dd88  fadds 2, 5, 1
  030dd8c  fadds 1, 3, 1
  030dd90  stfs 2, 136(1)
  030dd94  stfs 1, 152(1)
  030dd98  bl 0x55ab8
  030dd9c  nop
  030dda0  ori 4, 3, 0
  030dda4  lwz 3, 8320(29)
  030dda8  cmpwi 4, 0
  030ddac  bt 2, 0x30e060
  030ddb0  lfs 1, 20(31)
  030ddb4  lfs 2, 132(29)
  030ddb8  lfs 3, 16(31)
  030ddbc  fsubs 1, 1, 2
  030ddc0  lfs 2, 128(29)
  030ddc4  fsubs 2, 3, 2
  030ddc8  lis 4, 128
  030ddcc  fmuls 1, 1, 1
  030ddd0  fmadds 1, 2, 2, 1
  030ddd4  fsqrts 31, 1
  030ddd8  lfs 1, -2304(4)
  030dddc  lis 4, 161
  030dde0  addic 4, 4, 2368
  030dde4  lwz 4, 24(4)
  030dde8  cmpw 4, 3
  030ddec  fsub 2, 31, 1
  030ddf0  fsel 31, 2, 31, 1
  030ddf4  bf 2, 0x30e02c
  030ddf8  addic 5, 1, 160
  030ddfc  ori 3, 31, 0
  030de00  li 4, 4
  030de04  bl 0xf1114
  030de08  nop
  030de0c  lfs 1, 128(29)
  030de10  lfs 2, 160(1)
  030de14  lfs 3, 132(29)
  030de18  fsubs 1, 1, 2
  030de1c  lfs 2, 164(1)
  030de20  lis 3, 49
  030de24  fsubs 2, 3, 2
  030de28  addi 3, 3, -12216
  030de2c  lfs 3, 136(29)
  030de30  lfs 4, 168(1)
  030de34  fsubs 3, 3, 4
  030de38  lis 4, 115
  030de3c  fabs 7, 1
  030de40  addic 4, 4, 22784
  030de44  stfs 1, 444(1)
  030de48  fabs 6, 2
  030de4c  stfs 1, 160(1)
  030de50  stfs 2, 164(1)
  030de54  lfs 1, 140(29)
  030de58  stfs 2, 448(1)
  030de5c  stfs 1, 172(1)
  030de60  stfs 3, 168(1)
  030de64  fsubs 1, 7, 6
  030de68  stfs 1, 452(1)
  030de6c  lwz 5, 444(1)
  030de70  lfs 4, 8(3)
  030de74  lfs 1, 444(1)
  030de78  lwz 6, 448(1)
  030de7c  lfs 2, 448(1)
  030de80  fabs 1, 1
  030de84  lwz 7, 452(1)
  030de88  rlwinm 6, 6, 3, 29, 29
  030de8c  fabs 3, 2
  030de90  lfs 2, 452(1)
  030de94  rlwimi 6, 7, 2, 30, 30
  030de98  fsub 8, 2, 4
  030de9c  rlwimi 6, 5, 4, 28, 28
  030dea0  fsub 9, 2, 4
  030dea4  ori 5, 4, 0
  030dea8  lfs 5, 72(31)
  030deac  addic 3, 30, 348
  030deb0  rlwimi 5, 6, 2, 26, 28
  030deb4  slwi 6, 6, 2
  030deb8  clrldi 5, 5, 32
  030debc  fsel 6, 8, 1, 6
  030dec0  lfsx 1, 4, 6
  030dec4  lfs 2, 4(5)
  030dec8  fsel 3, 9, 3, 7
  030decc  fcmpu 0, 6, 4
  030ded0  bt 1, 0x30ded8
  030ded4  b 0x30dff8
  030ded8  fsubs 7, 3, 6
  030dedc  fadds 3, 3, 6
  030dee0  addic 4, 1, 16
  030dee4  li 8, 2
  030dee8  addic 6, 4, 524
  030deec  addic 5, 4, 508
  030def0  mtctr 8
  030def4  fdivs 3, 7, 3
  030def8  fmuls 6, 3, 3
  030defc  stfs 3, 536(1)
  030df00  stfs 3, 528(1)
  030df04  stfs 3, 532(1)
  030df08  stfs 3, 524(1)
  030df0c  lfs 8, 536(1)
  030df10  lfs 9, 528(1)
  030df14  lfs 10, 532(1)
  030df18  fmuls 7, 6, 6
  030df1c  fmuls 9, 9, 6
  030df20  fmuls 8, 8, 7
  030df24  fmuls 3, 7, 7
  030df28  fmuls 7, 10, 7
  030df2c  stfs 9, 528(1)
  030df30  fmuls 6, 8, 6
  030df34  stfs 7, 532(1)
  030df38  stfs 6, 536(1)
  030df3c  lfs 6, 508(4)
  030df40  fmuls 6, 6, 3
  030df44  stfs 6, 524(4)
  030df48  lfs 6, 4(5)
  030df4c  addic 5, 5, 8
  030df50  fmuls 6, 6, 3
  030df54  addic 4, 4, 8
  030df58  stfs 6, 4(6)
  030df5c  addic 6, 6, 8
  030df60  bdnz 0x30df3c
  030df64  li 6, 4
  030df68  ori 4, 1, 0
  030df6c  mtctr 6
  030df70  lis 5, 115
  030df74  addic 6, 4, 524
  030df78  addic 5, 5, 22752
  030df7c  ori 7, 6, 0
  030df80  lfs 3, 524(4)
  030df84  lfs 6, 0(5)
  030df88  fmuls 3, 3, 6
  030df8c  lfs 6, 4(5)
  030df90  addic 5, 5, 8
  030df94  stfs 3, 524(4)
  030df98  lfs 3, 4(6)
  030df9c  addic 4, 4, 8
  030dfa0  fmuls 3, 3, 6
  030dfa4  stfs 3, 4(6)
  030dfa8  addic 6, 6, 8
  030dfac  bdnz 0x30df80
  030dfb0  ori 4, 1, 0
  030dfb4  mtctr 8
  030dfb8  lfs 3, 524(4)
  030dfbc  fadds 3, 4, 3
  030dfc0  addic 4, 4, 16
  030dfc4  lfs 4, 4(7)
  030dfc8  lfs 6, 8(7)
  030dfcc  lfs 7, 12(7)
  030dfd0  addic 7, 7, 16
  030dfd4  fadds 3, 3, 4
  030dfd8  fadds 4, 3, 6
  030dfdc  fadds 4, 4, 7
  030dfe0  bdnz 0x30dfb8
  030dfe4  lis 4, 49
  030dfe8  addi 4, 4, -12216
  030dfec  lfs 3, 24(4)
  030dff0  fadds 4, 4, 3
  030dff4  fmadds 4, 4, 1, 2
  030dff8  lis 4, 49
  030dffc  fsubs 1, 4, 5
  030e000  addic 5, 30, 336
  030e004  addi 4, 4, -12216
  030e008  li 9, 0
  030e00c  lfs 4, 60(4)
  030e010  lfs 2, 28(4)
  030e014  lfs 5, 32(4)
  030e018  fdivs 4, 4, 31
  030e01c  fmr 3, 5
  030e020  bl 0x10a050
  030e024  nop
  030e028  b 0x30e060
  030e02c  lis 3, 49
  030e030  li 9, 0
  030e034  addi 4, 3, -12216
  030e038  addic 3, 30, 348
  030e03c  addic 5, 30, 336
  030e040  lfs 4, 36(4)
  030e044  lfs 1, 8(4)
  030e048  lfs 2, 28(4)
  030e04c  lfs 5, 32(4)
  030e050  fdivs 4, 4, 31
  030e054  fmr 3, 5
  030e058  bl 0x10a050
  030e05c  nop
  030e060  lis 3, 49
  030e064  lis 4, 114
  030e068  addi 3, 3, -12216
  030e06c  lfs 1, 64(3)
  030e070  lfs 2, -3056(4)
  030e074  lwz 3, 360(30)
  030e078  fmuls 1, 2, 1
  030e07c  fctiwz 1, 1
  030e080  stfd 1, 656(1)
  030e084  lwz 4, 660(1)
  030e088  cmpw 3, 4
  030e08c  bf 1, 0x30e2a0
  030e090  srawi 4, 3, 3
  030e094  addze 4, 4
  030e098  sldi 4, 4, 3
  030e09c  subc 3, 3, 4
  030e0a0  cmpwi 3, 0
  030e0a4  bf 2, 0x30e2a0
  030e0a8  lis 3, 49
  030e0ac  li 4, 0
  030e0b0  addi 3, 3, -12216
  030e0b4  lis 5, 114
  030e0b8  lfs 31, 8(3)
  030e0bc  stw 4, 208(1)
  030e0c0  stw 4, 212(1)
  030e0c4  stw 4, 216(1)
  030e0c8  stw 4, 220(1)
  030e0cc  lfs 2, 68(3)
  030e0d0  lfs 3, -3052(5)
  030e0d4  stw 4, 204(1)
  030e0d8  addic 3, 1, 368
  030e0dc  fmuls 2, 3, 2
  030e0e0  stw 4, 200(1)
  030e0e4  stw 4, 196(1)
  030e0e8  stw 4, 192(1)
  030e0ec  lfs 1, 72(31)
  030e0f0  addic 4, 1, 192
  030e0f4  stfs 2, 208(1)
  030e0f8  lfs 2, 348(30)
  030e0fc  fadds 1, 2, 1
  030e100  stfs 1, 200(1)
  030e104  bl 0x500ca4
  030e108  nop
  030e10c  lis 3, 128
  030e110  lfs 1, 384(1)
  030e114  lfs 2, 368(1)
  030e118  addic 4, 3, -2320
  030e11c  lfs 3, 388(1)
  030e120  lfs 4, -2320(3)
  030e124  lfs 5, 4(4)
  030e128  lfs 8, 392(1)
  030e12c  lfs 9, 396(1)
  030e130  fmuls 6, 1, 5
  030e134  fmuls 7, 3, 5
  030e138  lfs 11, 372(1)
  030e13c  fmuls 10, 8, 5
  030e140  lfs 12, 8(4)
  030e144  fmuls 5, 9, 5
  030e148  lfs 13, 376(1)
  030e14c  lfs 0, 380(1)
  030e150  lfs 30, 400(1)
  030e154  lfs 29, 404(1)
  030e158  addic 3, 1, 208
  030e15c  lis 7, 32
  030e160  ori 6, 31, 0
  030e164  fmadds 6, 2, 4, 6
  030e168  fmadds 7, 11, 4, 7
  030e16c  fmadds 10, 13, 4, 10
  030e170  fmadds 4, 0, 4, 5
  030e174  lfs 5, 12(4)
  030e178  lfs 28, 416(1)
  030e17c  lfs 27, 408(1)
  030e180  lfs 26, 412(1)
  030e184  lfs 25, 212(1)
  030e188  lfs 24, 420(1)
  030e18c  fmuls 1, 1, 25
  030e190  fmadds 6, 30, 12, 6
  030e194  fmadds 7, 29, 12, 7
  030e198  fmadds 10, 27, 12, 10
  030e19c  fmadds 4, 26, 12, 4
  030e1a0  fmuls 3, 3, 25
  030e1a4  fmuls 8, 8, 25
  030e1a8  lfs 12, 424(1)
  030e1ac  fmuls 9, 9, 25
  030e1b0  lfs 23, 428(1)
  030e1b4  lfs 22, 208(1)
  030e1b8  addic 4, 1, 176
  030e1bc  fmadds 1, 2, 22, 1
  030e1c0  fmadds 6, 28, 5, 6
  030e1c4  fmadds 7, 24, 5, 7
  030e1c8  lfs 2, 216(1)
  030e1cc  fmadds 10, 12, 5, 10
  030e1d0  fmadds 4, 23, 5, 4
  030e1d4  fmadds 3, 11, 22, 3
  030e1d8  fmadds 5, 13, 22, 8
  030e1dc  fmadds 9, 0, 22, 9
  030e1e0  lfs 8, 220(1)
  030e1e4  ori 7, 7, 65535
  030e1e8  fmadds 1, 30, 2, 1
  030e1ec  fmadds 3, 29, 2, 3
  030e1f0  fmadds 5, 27, 2, 5
  030e1f4  stfs 4, 188(1)
  030e1f8  fmadds 2, 26, 2, 9
  030e1fc  lfs 4, 16(31)
  030e200  lfs 11, 20(31)
  030e204  fadds 4, 6, 4
  030e208  lfs 6, 24(31)
  030e20c  fadds 7, 7, 11
  030e210  fadds 6, 10, 6
  030e214  fmadds 9, 28, 8, 1
  030e218  fmadds 3, 24, 8, 3
  030e21c  fmadds 5, 12, 8, 5
  030e220  fmadds 2, 23, 8, 2
  030e224  fmr 1, 31
  030e228  stfs 4, 176(1)
  030e22c  stfs 7, 180(1)
  030e230  stfs 6, 184(1)
  030e234  stfs 9, 208(1)
  030e238  stfs 3, 212(1)
  030e23c  stfs 5, 216(1)
  030e240  stfs 2, 220(1)
  030e244  bl 0x366d48
  030e248  nop
  030e24c  cmpwi 3, 0
  030e250  bt 2, 0x30e2a0
  030e254  lis 4, 49
  030e258  lfs 1, 200(1)
  030e25c  li 6, 72
  030e260  vspltisw 3, -1
  030e264  addi 4, 4, -12216
  030e268  stfs 1, 72(3)
  030e26c  li 5, -3056
  030e270  lis 7, 114
  030e274  vslw 3, 3, 3
  030e278  <unknown>
  030e27c  vspltw 2, 2, 0
  030e280  li 4, 1
  030e284  <unknown>
  030e288  lwz 5, 120(3)
  030e28c  vmaddfp 2, 4, 2, 3
  030e290  vctsxs 2, 2, 0
  030e294  vspltw 2, 2, 0
  030e298  stvewx 2, 0, 5
  030e29c  stb 4, 32(3)
  030e2a0  lwz 3, 360(30)
  030e2a4  addic 4, 3, -1
  030e2a8  cmpwi 3, 0
  030e2ac  stw 4, 360(30)
  030e2b0  bf 2, 0x30e2f0
  030e2b4  lis 3, 49
  030e2b8  vspltisw 2, -1
  030e2bc  li 5, 76
  030e2c0  addi 3, 3, -12216
  030e2c4  li 4, -3056
  030e2c8  lis 6, 114
  030e2cc  vslw 2, 2, 2
  030e2d0  <unknown>
  030e2d4  li 3, 360
  030e2d8  vspltw 3, 3, 0
  030e2dc  <unknown>
  030e2e0  vmaddfp 2, 4, 3, 2
  030e2e4  vctsxs 2, 2, 0
  030e2e8  vspltw 2, 2, 0
  030e2ec  stvewx 2, 3, 30
  030e2f0  lfs 1, 20(31)
  030e2f4  lfs 2, 132(29)
  030e2f8  lfs 3, 16(31)
  030e2fc  fsubs 1, 1, 2
  030e300  lfs 2, 128(29)
  030e304  fsubs 2, 3, 2
  030e308  fmuls 1, 1, 1
  030e30c  fmadds 1, 2, 2, 1
  030e310  lfs 2, 352(30)
  030e314  fsqrts 1, 1
  030e318  fcmpu 0, 1, 2
  030e31c  bt 1, 0x30e36c
  030e320  lfs 1, 24(31)
  030e324  lfs 2, 136(29)
  030e328  lis 3, 49
  030e32c  fsubs 1, 1, 2
  030e330  addi 3, 3, -12216
  030e334  lfs 2, 44(3)
  030e338  fabs 1, 1
  030e33c  fcmpu 0, 1, 2
  030e340  bt 1, 0x30e36c
  030e344  lwz 3, 372(30)
  030e348  cmpwi 3, 0
  030e34c  bt 0, 0x30e8bc
  030e350  addic 5, 29, 128
  030e354  extsw 4, 3
  030e358  ori 3, 5, 0
  030e35c  bl 0x110b70
  030e360  nop
  030e364  cmpwi 3, 0
  030e368  bf 2, 0x30e8bc
  030e36c  li 3, 1
  030e370  lbz 4, 83(31)
  030e374  cmpwi 4, 1
  030e378  stb 3, 32(31)
  030e37c  bt 2, 0x30e8bc
  030e380  ori 3, 31, 0
  030e384  li 4, 1
  030e388  li 5, 0
  030e38c  li 6, 3
  030e390  bl 0xfddc0
  030e394  nop
  030e398  b 0x30e8bc
  030e39c  lis 29, 151
  030e3a0  stw 31, 336(1)
  030e3a4  li 3, 0
  030e3a8  addic 29, 29, -25376
  030e3ac  lis 4, 49
  030e3b0  stw 3, 340(1)
  030e3b4  stw 3, 352(1)
  030e3b8  addi 4, 4, -12216
  030e3bc  lfs 1, 128(29)
  030e3c0  addic 3, 1, 240
  030e3c4  lfs 2, 132(29)
  030e3c8  addic 7, 1, 320
  030e3cc  stfs 1, 224(1)
  030e3d0  li 5, 0
  030e3d4  lfs 1, 136(29)
  030e3d8  ori 6, 31, 0
  030e3dc  stfs 2, 228(1)
  030e3e0  lfs 2, 140(29)
  030e3e4  stfs 1, 232(1)
  030e3e8  lfs 3, 16(31)
  030e3ec  stfs 2, 236(1)
  030e3f0  lfs 2, 20(31)
  030e3f4  stfs 3, 240(1)
  030e3f8  lfs 3, 28(31)
  030e3fc  stfs 2, 244(1)
  030e400  stfs 3, 252(1)
  030e404  lfs 2, 80(4)
  030e408  lfs 3, 24(31)
  030e40c  fadds 1, 1, 2
  030e410  addic 4, 1, 224
  030e414  fadds 2, 3, 2
  030e418  stfs 1, 232(1)
  030e41c  stfs 2, 248(1)
  030e420  bl 0x55ab8
  030e424  nop
  030e428  ori 4, 3, 0
  030e42c  lwz 3, 8320(29)
  030e430  cmpwi 4, 0
  030e434  bt 2, 0x30e6ec
  030e438  lfs 1, 20(31)
  030e43c  lfs 2, 132(29)
  030e440  lfs 3, 16(31)
  030e444  fsubs 1, 1, 2
  030e448  lfs 2, 128(29)
  030e44c  fsubs 2, 3, 2
  030e450  lis 4, 128
  030e454  fmuls 1, 1, 1
  030e458  fmadds 1, 2, 2, 1
  030e45c  fsqrts 31, 1
  030e460  lfs 1, -2304(4)
  030e464  lis 4, 161
  030e468  addic 4, 4, 2368
  030e46c  lwz 4, 24(4)
  030e470  cmpw 4, 3
  030e474  fsub 2, 31, 1
  030e478  fsel 31, 2, 31, 1
  030e47c  bf 2, 0x30e6b8
  030e480  addic 5, 1, 256
  030e484  ori 3, 31, 0
  030e488  li 4, 4
  030e48c  bl 0xf1114
  030e490  nop
  030e494  lfs 1, 128(29)
  030e498  lfs 2, 256(1)
  030e49c  lfs 3, 132(29)
  030e4a0  fsubs 1, 1, 2
  030e4a4  lfs 2, 260(1)
  030e4a8  lis 3, 49
  030e4ac  fsubs 2, 3, 2
  030e4b0  addi 3, 3, -12216
  030e4b4  lfs 3, 136(29)
  030e4b8  lfs 4, 264(1)
  030e4bc  fsubs 3, 3, 4
  030e4c0  lis 4, 115
  030e4c4  fabs 7, 1
  030e4c8  addic 4, 4, 22784
  030e4cc  stfs 1, 432(1)
  030e4d0  fabs 6, 2
  030e4d4  stfs 1, 256(1)
  030e4d8  stfs 2, 260(1)
  030e4dc  lfs 1, 140(29)
  030e4e0  stfs 2, 436(1)
  030e4e4  stfs 1, 268(1)
  030e4e8  stfs 3, 264(1)
  030e4ec  addic 29, 30, 348
  030e4f0  fsubs 1, 7, 6
  030e4f4  stfs 1, 440(1)
  030e4f8  lwz 5, 432(1)
  030e4fc  lfs 4, 8(3)
  030e500  lfs 1, 432(1)
  030e504  lwz 3, 436(1)
  030e508  lfs 2, 436(1)
  030e50c  lwz 6, 440(1)
  030e510  rlwinm 3, 3, 3, 29, 29
  030e514  fabs 3, 2
  030e518  lfs 2, 440(1)
  030e51c  fabs 1, 1
  030e520  rlwimi 3, 6, 2, 30, 30
  030e524  fsub 8, 2, 4
  030e528  lfs 5, 72(31)
  030e52c  rlwimi 3, 5, 4, 28, 28
  030e530  fsub 9, 2, 4
  030e534  ori 5, 4, 0
  030e538  rlwimi 5, 3, 2, 26, 28
  030e53c  slwi 3, 3, 2
  030e540  clrldi 5, 5, 32
  030e544  fsel 6, 8, 1, 6
  030e548  lfsx 1, 4, 3
  030e54c  lfs 2, 4(5)
  030e550  fsel 3, 9, 3, 7
  030e554  fcmpu 0, 6, 4
  030e558  bt 1, 0x30e560
  030e55c  b 0x30e680
  030e560  fsubs 7, 3, 6
  030e564  fadds 3, 3, 6
  030e568  addic 3, 1, 16
  030e56c  li 7, 2
  030e570  addic 5, 3, 492
  030e574  addic 4, 3, 476
  030e578  mtctr 7
  030e57c  fdivs 3, 7, 3
  030e580  fmuls 6, 3, 3
  030e584  stfs 3, 504(1)
  030e588  stfs 3, 496(1)
  030e58c  stfs 3, 500(1)
  030e590  stfs 3, 492(1)
  030e594  lfs 8, 504(1)
  030e598  lfs 9, 496(1)
  030e59c  lfs 10, 500(1)
  030e5a0  fmuls 7, 6, 6
  030e5a4  fmuls 9, 9, 6
  030e5a8  fmuls 8, 8, 7
  030e5ac  fmuls 3, 7, 7
  030e5b0  fmuls 7, 10, 7
  030e5b4  stfs 9, 496(1)
  030e5b8  fmuls 6, 8, 6
  030e5bc  stfs 7, 500(1)
  030e5c0  stfs 6, 504(1)
  030e5c4  lfs 6, 476(3)
  030e5c8  fmuls 6, 6, 3
  030e5cc  stfs 6, 492(3)
  030e5d0  lfs 6, 4(4)
  030e5d4  addic 4, 4, 8
  030e5d8  fmuls 6, 6, 3
  030e5dc  addic 3, 3, 8
  030e5e0  stfs 6, 4(5)
  030e5e4  addic 5, 5, 8
  030e5e8  bdnz 0x30e5c4
  030e5ec  li 5, 4
  030e5f0  ori 3, 1, 0
  030e5f4  mtctr 5
  030e5f8  lis 4, 115
  030e5fc  addic 5, 3, 492
  030e600  addic 4, 4, 22752
  030e604  ori 6, 5, 0
  030e608  lfs 3, 492(3)
  030e60c  lfs 6, 0(4)
  030e610  fmuls 3, 3, 6
  030e614  lfs 6, 4(4)
  030e618  addic 4, 4, 8
  030e61c  stfs 3, 492(3)
  030e620  lfs 3, 4(5)
  030e624  addic 3, 3, 8
  030e628  fmuls 3, 3, 6
  030e62c  stfs 3, 4(5)
  030e630  addic 5, 5, 8
  030e634  bdnz 0x30e608
  030e638  ori 3, 1, 0
  030e63c  mtctr 7
  030e640  lfs 3, 492(3)
  030e644  fadds 3, 4, 3
  030e648  addic 3, 3, 16
  030e64c  lfs 4, 4(6)
  030e650  lfs 6, 8(6)
  030e654  lfs 7, 12(6)
  030e658  addic 6, 6, 16
  030e65c  fadds 3, 3, 4
  030e660  fadds 4, 3, 6
  030e664  fadds 4, 4, 7
  030e668  bdnz 0x30e640
  030e66c  lis 3, 49
  030e670  addi 3, 3, -12216
  030e674  lfs 3, 24(3)
  030e678  fadds 4, 4, 3
  030e67c  fmadds 4, 4, 1, 2
  030e680  lis 3, 49
  030e684  fsubs 1, 4, 5
  030e688  addic 5, 30, 336
  030e68c  addi 4, 3, -12216
  030e690  ori 3, 29, 0
  030e694  li 9, 0
  030e698  lfs 4, 60(4)
  030e69c  lfs 2, 28(4)
  030e6a0  lfs 5, 32(4)
  030e6a4  fdivs 4, 4, 31
  030e6a8  fmr 3, 5
  030e6ac  bl 0x10a050
  030e6b0  nop
  030e6b4  b 0x30e6ec
  030e6b8  lis 3, 49
  030e6bc  addic 5, 30, 336
  030e6c0  addi 4, 3, -12216
  030e6c4  addic 3, 30, 348
  030e6c8  li 9, 0
  030e6cc  lfs 4, 36(4)
  030e6d0  lfs 1, 8(4)
  030e6d4  lfs 2, 28(4)
  030e6d8  fdivs 4, 4, 31
  030e6dc  lfs 5, 32(4)
  030e6e0  fmr 3, 5
  030e6e4  bl 0x10a050
  030e6e8  nop
  030e6ec  lbz 3, 112(31)
  030e6f0  rlwinm 3, 3, 0, 30, 30
  030e6f4  cmpwi 3, 0
  030e6f8  bt 2, 0x30e8bc
  030e6fc  lis 3, 49
  030e700  vspltisw 2, -1
  030e704  li 4, 3
  030e708  addi 3, 3, -12216
  030e70c  li 6, 48
  030e710  lis 5, 114
  030e714  stb 4, 32(31)
  030e718  li 4, -3056
  030e71c  vslw 2, 2, 2
  030e720  <unknown>
  030e724  li 3, 360
  030e728  vspltw 3, 3, 0
  030e72c  <unknown>
  030e730  vmaddfp 2, 4, 3, 2
  030e734  vctsxs 2, 2, 0
  030e738  vspltw 2, 2, 0
  030e73c  stvewx 2, 3, 30
  030e740  lbz 3, 83(31)
  030e744  cmpwi 3, 4
  030e748  bt 2, 0x30e8bc
  030e74c  ori 3, 31, 0
  030e750  li 4, 4
  030e754  li 5, 0
  030e758  li 6, 0
  030e75c  bl 0xfddc0
  030e760  nop
  030e764  b 0x30e8bc
  030e768  ori 3, 31, 0
  030e76c  addic 4, 30, 80
  030e770  bl 0x10b030
  030e774  nop
  030e778  rlwinm 3, 3, 0, 25, 25
  030e77c  cmpwi 3, 0
  030e780  bt 2, 0x30e8bc
  030e784  li 3, 3
  030e788  lbz 4, 83(31)
  030e78c  cmpwi 4, 4
  030e790  stb 3, 32(31)
  030e794  bt 2, 0x30e7b0
  030e798  ori 3, 31, 0
  030e79c  li 4, 4
  030e7a0  li 5, 0
  030e7a4  li 6, 3
  030e7a8  bl 0xfddc0
  030e7ac  nop
  030e7b0  lis 3, 49
  030e7b4  li 4, 16
  030e7b8  vspltisw 2, -1
  030e7bc  addi 3, 3, -12216
  030e7c0  lis 5, 114
  030e7c4  li 6, -3056
  030e7c8  vslw 2, 2, 2
  030e7cc  <unknown>
  030e7d0  li 3, 360
  030e7d4  vspltw 3, 3, 0
  030e7d8  <unknown>
  030e7dc  addi 4, 3, 16
  030e7e0  vmaddfp 2, 4, 3, 2
  030e7e4  <unknown>
  030e7e8  <unknown>
  030e7ec  vor 3, 3, 4
  030e7f0  vctsxs 2, 2, 0
  030e7f4  vadduwm 2, 3, 2
  030e7f8  vspltw 2, 2, 0
  030e7fc  stvewx 2, 3, 30
  030e800  b 0x30e8bc
  030e804  ori 3, 31, 0
  030e808  addic 4, 30, 80
  030e80c  bl 0x10b030
  030e810  nop
  030e814  rlwinm 3, 3, 0, 25, 25
  030e818  cmpwi 3, 0
  030e81c  bt 2, 0x30e8bc
  030e820  li 3, 6
  030e824  lbz 4, 83(31)
  030e828  cmpwi 4, 7
  030e82c  stb 3, 32(31)
  030e830  bt 2, 0x30e8bc
  030e834  ori 3, 31, 0
  030e838  li 4, 7
  030e83c  li 5, 0
  030e840  li 6, 3
  030e844  bl 0xfddc0
  030e848  nop
  030e84c  b 0x30e8bc
  030e850  lbz 3, 112(31)
  030e854  rlwinm 3, 3, 0, 30, 30
  030e858  cmpwi 3, 0
  030e85c  bt 2, 0x30e8bc
  030e860  li 3, 2
  030e864  lbz 4, 83(31)
  030e868  cmpwi 4, 3
  030e86c  stb 3, 32(31)
  030e870  bt 2, 0x30e8bc
  030e874  ori 3, 31, 0
  030e878  li 4, 3
  030e87c  li 5, 0
  030e880  li 6, 3
  030e884  bl 0xfddc0
  030e888  nop
  030e88c  b 0x30e8bc
  030e890  ori 3, 31, 0
  030e894  addic 4, 30, 80
  030e898  bl 0x10b030
  030e89c  nop
  030e8a0  rlwinm 3, 3, 0, 25, 25
  030e8a4  cmpwi 3, 0
  030e8a8  bt 2, 0x30e8bc
  030e8ac  ori 3, 31, 0
  030e8b0  bl 0xefb38
  030e8b4  nop
  030e8b8  b 0x30e920
  030e8bc  ori 3, 31, 0
  030e8c0  addic 4, 30, 64
  030e8c4  bl 0x10c9a0
  030e8c8  nop
  030e8cc  lis 3, 128
  030e8d0  lfs 1, 364(30)
  030e8d4  addic 31, 1, 112
  030e8d8  li 4, 1
  030e8dc  lfs 2, -2300(3)
  030e8e0  ori 3, 31, 0
  030e8e4  fmuls 1, 1, 2
  030e8e8  stfs 1, 364(30)
  030e8ec  bl 0x501980
  030e8f0  nop
  030e8f4  addic 29, 30, 272
  030e8f8  li 4, 2
  030e8fc  lfs 1, 348(30)
  030e900  ori 3, 29, 0
  030e904  bl 0x501980
  030e908  nop
  030e90c  ori 3, 29, 0
  030e910  ori 4, 29, 0
  030e914  ori 5, 31, 0
  030e918  bl 0x5017c4
  030e91c  nop
  030e920  ld 0, 800(1)
  030e924  mtlr 0
  030e928  lfd 22, 704(1)
  030e92c  lfd 23, 712(1)
  030e930  lfd 24, 720(1)
  030e934  lfd 25, 728(1)
  030e938  lfd 26, 736(1)
  030e93c  lfd 27, 744(1)
  030e940  lfd 28, 752(1)
  030e944  lfd 29, 760(1)
  030e948  lfd 30, 768(1)
  030e94c  lfd 31, 776(1)
  030e950  ld 29, 680(1)
  030e954  ld 30, 688(1)
  030e958  ld 31, 696(1)
  030e95c  addi 1, 1, 784
  030e960  blr
