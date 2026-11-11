# game/update/moby1377.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1377_0025d260:   # 0x25d260, 0xf4 bytes
  025d260  stdu 1, -160(1)
  025d264  mflr 0
  025d268  std 0, 176(1)
  025d26c  std 31, 152(1)
  025d270  lis 4, 161
  025d274  ori 31, 3, 0
  025d278  lwz 3, 1800(4)
  025d27c  std 30, 144(1)
  025d280  std 29, 136(1)
  025d284  std 28, 128(1)
  025d288  std 27, 120(1)
  025d28c  cmpwi 3, 2
  025d290  bf 2, 0x25d330
  025d294  lis 3, 151
  025d298  lbz 3, -16268(3)
  025d29c  cmpwi 3, 0
  025d2a0  bt 2, 0x25d330
  025d2a4  lis 28, 150
  025d2a8  li 27, 0
  025d2ac  addic 28, 28, -12976
  025d2b0  lhz 3, 68(28)
  025d2b4  extsh 4, 3
  025d2b8  cmpwi 4, 0
  025d2bc  bf 1, 0x25d330
  025d2c0  lis 29, 162
  025d2c4  ori 30, 28, 0
  025d2c8  addic 29, 29, -16512
  025d2cc  lwz 4, 376(30)
  025d2d0  lhz 5, 166(31)
  025d2d4  extsh 5, 5
  025d2d8  lhz 6, 166(4)
  025d2dc  extsh 6, 6
  025d2e0  cmpw 6, 5
  025d2e4  bf 2, 0x25d31c
  025d2e8  lbz 5, 1(29)
  025d2ec  cmpwi 5, 0
  025d2f0  bf 2, 0x25d31c
  025d2f4  ori 3, 4, 0
  025d2f8  li 4, 1
  025d2fc  ori 5, 29, 0
  025d300  bl 0xf0ea8
  025d304  nop
  025d308  lis 4, 16432
  025d30c  lhz 3, 68(28)
  025d310  stw 4, 32(29)
  025d314  stw 4, 36(29)
  025d318  stw 4, 40(29)
  025d31c  extsh 4, 3
  025d320  addic 27, 27, 1
  025d324  addic 30, 30, 4
  025d328  cmpw 27, 4
  025d32c  bt 0, 0x25d2cc
  025d330  ld 0, 176(1)
  025d334  mtlr 0
  025d338  ld 27, 120(1)
  025d33c  ld 28, 128(1)
  025d340  ld 29, 136(1)
  025d344  ld 30, 144(1)
  025d348  ld 31, 152(1)
  025d34c  addi 1, 1, 160
  025d350  blr

UpdateMoby_1377:   # 0x25d3a8, 0xb70 bytes
  025d3a8  stdu 1, -352(1)
  025d3ac  mflr 0
  025d3b0  std 0, 368(1)
  025d3b4  stfd 27, 312(1)
  025d3b8  stfd 28, 320(1)
  025d3bc  stfd 29, 328(1)
  025d3c0  stfd 30, 336(1)
  025d3c4  stfd 31, 344(1)
  025d3c8  std 31, 304(1)
  025d3cc  lis 4, 161
  025d3d0  std 30, 296(1)
  025d3d4  ori 31, 3, 0
  025d3d8  std 28, 280(1)
  025d3dc  lwz 30, 120(3)
  025d3e0  addic 28, 30, 32
  025d3e4  lwz 3, 1800(4)
  025d3e8  std 29, 288(1)
  025d3ec  std 27, 272(1)
  025d3f0  std 26, 264(1)
  025d3f4  std 25, 256(1)
  025d3f8  cmpwi 3, 2
  025d3fc  bf 2, 0x25d498
  025d400  lis 3, 151
  025d404  lbz 3, -16268(3)
  025d408  cmpwi 3, 0
  025d40c  bt 2, 0x25d498
  025d410  lis 27, 150
  025d414  li 29, 0
  025d418  addic 27, 27, -12976
  025d41c  lhz 4, 68(27)
  025d420  extsh 3, 4
  025d424  cmpwi 3, 0
  025d428  bf 1, 0x25d498
  025d42c  lis 26, 162
  025d430  ori 25, 27, 0
  025d434  addic 26, 26, -16512
  025d438  lwz 3, 376(25)
  025d43c  lhz 5, 166(31)
  025d440  extsh 5, 5
  025d444  lhz 6, 166(3)
  025d448  extsh 6, 6
  025d44c  cmpw 6, 5
  025d450  bf 2, 0x25d484
  025d454  lbz 5, 1(26)
  025d458  cmpwi 5, 0
  025d45c  bf 2, 0x25d484
  025d460  li 4, 1
  025d464  ori 5, 26, 0
  025d468  bl 0xf0ea8
  025d46c  nop
  025d470  lis 3, 16432
  025d474  lhz 4, 68(27)
  025d478  stw 3, 32(26)
  025d47c  stw 3, 36(26)
  025d480  stw 3, 40(26)
  025d484  extsh 3, 4
  025d488  addic 29, 29, 1
  025d48c  addic 25, 25, 4
  025d490  cmpw 29, 3
  025d494  bt 0, 0x25d438
  025d498  lbz 3, 32(31)
  025d49c  cmpwi 3, 0
  025d4a0  cmpwi 1, 3, 2
  025d4a4  cmpwi 6, 3, 1
  025d4a8  cmpwi 7, 3, -1
  025d4ac  bt 1, 0x25d4b8
  025d4b0  bf 29, 0x25d5ec
  025d4b4  b 0x25d4c4
  025d4b8  bf 25, 0x25d4f0
  025d4bc  bf 5, 0x25d558
  025d4c0  b 0x25d5ec
  025d4c4  ori 3, 31, 0
  025d4c8  ori 4, 28, 0
  025d4cc  bl 0x4d3720
  025d4d0  nop
  025d4d4  li 3, 1
  025d4d8  lis 4, 16800
  025d4dc  li 5, 255
  025d4e0  stb 3, 32(31)
  025d4e4  stw 4, 44(30)
  025d4e8  stb 5, 48(31)
  025d4ec  b 0x25d5ec
  025d4f0  lis 3, 151
  025d4f4  addic 3, 3, -25376
  025d4f8  lhz 4, 782(3)
  025d4fc  cmpwi 4, 0
  025d500  bf 2, 0x25d5ec
  025d504  lwz 4, 8332(3)
  025d508  cmpwi 1, 4, 22
  025d50c  cmpwi 4, 15
  025d510  cror 2, 2, 6
  025d514  bt 2, 0x25d5ec
  025d518  addic 3, 3, 128
  025d51c  lwz 4, 352(30)
  025d520  extsw 4, 4
  025d524  bl 0x110b70
  025d528  nop
  025d52c  cmpwi 3, 0
  025d530  bt 2, 0x25d5ec
  025d534  ori 3, 31, 0
  025d538  ori 4, 28, 0
  025d53c  bl 0x4d3870
  025d540  nop
  025d544  cmpwi 3, 0
  025d548  bt 2, 0x25d5ec
  025d54c  li 3, 2
  025d550  stb 3, 32(31)
  025d554  b 0x25d5ec
  025d558  lis 3, 161
  025d55c  lwz 3, 1800(3)
  025d560  cmpwi 3, 2
  025d564  bt 2, 0x25d5ec
  025d568  li 4, 1
  025d56c  lis 3, 122
  025d570  lis 7, 122
  025d574  addic 3, 3, -16256
  025d578  stb 4, 32(31)
  025d57c  li 5, 0
  025d580  li 6, 1
  025d584  addic 4, 7, -16240
  025d588  bl 0xa0c38
  025d58c  nop
  025d590  li 3, 16002
  025d594  li 4, 132
  025d598  bl 0x7b310
  025d59c  nop
  025d5a0  li 3, 33
  025d5a4  li 4, 1
  025d5a8  bl 0x112e18
  025d5ac  nop
  025d5b0  lbz 3, 176(31)
  025d5b4  bl 0xf1e50
  025d5b8  nop
  025d5bc  lis 3, 151
  025d5c0  addic 4, 3, -25376
  025d5c4  addic 3, 4, 128
  025d5c8  addic 4, 4, 144
  025d5cc  bl 0x151e70
  025d5d0  nop
  025d5d4  li 3, 0
  025d5d8  li 4, -1
  025d5dc  bl 0xe8aa4
  025d5e0  nop
  025d5e4  li 3, 3
  025d5e8  stb 3, 32(31)
  025d5ec  lis 29, 151
  025d5f0  addic 29, 29, -16400
  025d5f4  lbz 3, 112(29)
  025d5f8  cmpwi 3, 0
  025d5fc  bf 2, 0x25d62c
  025d600  lis 3, 151
  025d604  lwz 4, 356(30)
  025d608  addic 3, 3, -25376
  025d60c  extsw 4, 4
  025d610  addic 3, 3, 128
  025d614  bl 0x110b70
  025d618  nop
  025d61c  cmpwi 3, 0
  025d620  bt 2, 0x25d62c
  025d624  li 3, 1
  025d628  stb 3, 112(29)
  025d62c  lbz 3, 113(29)
  025d630  cmpwi 3, 0
  025d634  bf 2, 0x25d654
  025d638  lis 3, 151
  025d63c  addic 3, 3, -25376
  025d640  lwz 3, 8332(3)
  025d644  cmpwi 3, 15
  025d648  bf 2, 0x25d654
  025d64c  li 3, 1
  025d650  stb 3, 113(29)
  025d654  lis 3, 38
  025d658  lbz 4, 83(31)
  025d65c  addi 3, 3, -11436
  025d660  cmpwi 4, 0
  025d664  lfs 31, 0(3)
  025d668  bf 2, 0x25de70
  025d66c  lis 29, 151
  025d670  lfs 2, 20(31)
  025d674  addic 29, 29, -25376
  025d678  lfs 1, 16(31)
  025d67c  lis 3, 38
  025d680  lfs 3, 132(29)
  025d684  lfs 4, 128(29)
  025d688  fsubs 3, 2, 3
  025d68c  fsubs 4, 1, 4
  025d690  addi 3, 3, -11436
  025d694  fmuls 3, 3, 3
  025d698  fmadds 3, 4, 4, 3
  025d69c  lfs 4, 4(3)
  025d6a0  fsqrts 3, 3
  025d6a4  fcmpu 0, 3, 4
  025d6a8  cror 6, 1, 2
  025d6ac  bt 6, 0x25d91c
  025d6b0  lfs 3, 208(29)
  025d6b4  lis 3, 38
  025d6b8  lfs 4, 212(29)
  025d6bc  fsubs 1, 3, 1
  025d6c0  fsubs 2, 4, 2
  025d6c4  addi 3, 3, -11436
  025d6c8  lis 4, 115
  025d6cc  addic 4, 4, 22784
  025d6d0  fabs 5, 1
  025d6d4  fabs 6, 2
  025d6d8  stfs 1, 136(1)
  025d6dc  stfs 2, 140(1)
  025d6e0  lfs 3, 72(31)
  025d6e4  fsubs 1, 5, 6
  025d6e8  stfs 1, 144(1)
  025d6ec  lwz 5, 136(1)
  025d6f0  lfs 4, 8(3)
  025d6f4  lfs 1, 136(1)
  025d6f8  lwz 3, 140(1)
  025d6fc  lfs 2, 140(1)
  025d700  lwz 6, 144(1)
  025d704  rlwinm 3, 3, 3, 29, 29
  025d708  fabs 7, 2
  025d70c  lfs 2, 144(1)
  025d710  fabs 1, 1
  025d714  rlwimi 3, 6, 2, 30, 30
  025d718  fsub 8, 2, 4
  025d71c  rlwimi 3, 5, 4, 28, 28
  025d720  fsub 9, 2, 4
  025d724  ori 5, 4, 0
  025d728  rlwimi 5, 3, 2, 26, 28
  025d72c  slwi 3, 3, 2
  025d730  clrldi 5, 5, 32
  025d734  fsel 6, 8, 1, 6
  025d738  lfsx 1, 4, 3
  025d73c  lfs 2, 4(5)
  025d740  fsel 5, 9, 7, 5
  025d744  fcmpu 0, 6, 4
  025d748  bt 1, 0x25d750
  025d74c  b 0x25d870
  025d750  fsubs 7, 5, 6
  025d754  fadds 5, 5, 6
  025d758  addic 3, 1, 16
  025d75c  li 7, 2
  025d760  addic 4, 3, 196
  025d764  addic 5, 3, 212
  025d768  mtctr 7
  025d76c  fdivs 5, 7, 5
  025d770  fmuls 6, 5, 5
  025d774  stfs 5, 224(1)
  025d778  stfs 5, 216(1)
  025d77c  stfs 5, 220(1)
  025d780  stfs 5, 212(1)
  025d784  lfs 8, 224(1)
  025d788  lfs 9, 216(1)
  025d78c  lfs 10, 220(1)
  025d790  fmuls 7, 6, 6
  025d794  fmuls 9, 9, 6
  025d798  fmuls 8, 8, 7
  025d79c  fmuls 5, 7, 7
  025d7a0  fmuls 7, 10, 7
  025d7a4  stfs 9, 216(1)
  025d7a8  fmuls 6, 8, 6
  025d7ac  stfs 7, 220(1)
  025d7b0  stfs 6, 224(1)
  025d7b4  lfs 6, 196(3)
  025d7b8  fmuls 6, 6, 5
  025d7bc  stfs 6, 212(3)
  025d7c0  lfs 6, 4(4)
  025d7c4  addic 3, 3, 8
  025d7c8  addic 4, 4, 8
  025d7cc  fmuls 6, 6, 5
  025d7d0  stfs 6, 4(5)
  025d7d4  addic 5, 5, 8
  025d7d8  bdnz 0x25d7b4
  025d7dc  li 5, 4
  025d7e0  ori 3, 1, 0
  025d7e4  mtctr 5
  025d7e8  lis 4, 115
  025d7ec  addic 5, 3, 212
  025d7f0  addic 4, 4, 22752
  025d7f4  ori 6, 5, 0
  025d7f8  lfs 5, 212(3)
  025d7fc  lfs 6, 0(4)
  025d800  fmuls 5, 5, 6
  025d804  lfs 6, 4(4)
  025d808  addic 4, 4, 8
  025d80c  stfs 5, 212(3)
  025d810  lfs 5, 4(5)
  025d814  addic 3, 3, 8
  025d818  fmuls 5, 5, 6
  025d81c  stfs 5, 4(5)
  025d820  addic 5, 5, 8
  025d824  bdnz 0x25d7f8
  025d828  ori 3, 1, 0
  025d82c  mtctr 7
  025d830  lfs 5, 212(3)
  025d834  fadds 4, 4, 5
  025d838  lfs 5, 4(6)
  025d83c  addic 3, 3, 16
  025d840  lfs 6, 8(6)
  025d844  lfs 7, 12(6)
  025d848  addic 6, 6, 16
  025d84c  fadds 4, 4, 5
  025d850  fadds 4, 4, 6
  025d854  fadds 4, 4, 7
  025d858  bdnz 0x25d830
  025d85c  lis 3, 38
  025d860  addi 3, 3, -11436
  025d864  lfs 5, 12(3)
  025d868  fadds 4, 4, 5
  025d86c  fmadds 4, 4, 1, 2
  025d870  fmr 1, 3
  025d874  fmr 2, 4
  025d878  bl 0x5026a0
  025d87c  nop
  025d880  lis 3, 38
  025d884  addi 3, 3, -11436
  025d888  lfs 2, 16(3)
  025d88c  fcmpu 0, 1, 2
  025d890  cror 6, 1, 2
  025d894  bt 6, 0x25d91c
  025d898  lfs 1, 260(29)
  025d89c  lfs 2, 256(29)
  025d8a0  fmuls 1, 1, 1
  025d8a4  lfs 3, 264(29)
  025d8a8  lis 3, 38
  025d8ac  addi 3, 3, -11436
  025d8b0  fmadds 1, 2, 2, 1
  025d8b4  lfs 2, 20(3)
  025d8b8  fmadds 1, 3, 3, 1
  025d8bc  fsqrts 1, 1
  025d8c0  fcmpu 0, 1, 2
  025d8c4  cror 6, 0, 2
  025d8c8  bt 6, 0x25d90c
  025d8cc  lis 3, 38
  025d8d0  li 4, 24
  025d8d4  vspltisw 2, -1
  025d8d8  addi 3, 3, -11436
  025d8dc  lis 5, 114
  025d8e0  li 6, -3056
  025d8e4  vslw 2, 2, 2
  025d8e8  <unknown>
  025d8ec  li 3, 360
  025d8f0  vspltw 3, 3, 0
  025d8f4  <unknown>
  025d8f8  vmaddfp 2, 4, 3, 2
  025d8fc  vctsxs 2, 2, 0
  025d900  vspltw 2, 2, 0
  025d904  stvewx 2, 3, 30
  025d908  b 0x25d950
  025d90c  addic 3, 30, 360
  025d910  bl 0x4fff60
  025d914  nop
  025d918  b 0x25d950
  025d91c  lwz 3, 360(30)
  025d920  cmpwi 3, 0
  025d924  bt 2, 0x25d950
  025d928  li 3, 0
  025d92c  stw 3, 360(30)
  025d930  lfs 1, 208(29)
  025d934  stfs 1, 368(30)
  025d938  lfs 1, 212(29)
  025d93c  stfs 1, 372(30)
  025d940  lfs 1, 216(29)
  025d944  stfs 1, 376(30)
  025d948  lfs 1, 220(29)
  025d94c  stfs 1, 380(30)
  025d950  addic 3, 30, 364
  025d954  bl 0x4fff60
  025d958  nop
  025d95c  cmpwi 3, 0
  025d960  bt 2, 0x25da18
  025d964  lis 3, 38
  025d968  addi 28, 3, -11436
  025d96c  lfs 1, 28(28)
  025d970  lfs 2, 32(28)
  025d974  bl 0xfcbe8
  025d978  nop
  025d97c  lis 3, 114
  025d980  lfs 2, -3056(3)
  025d984  fmuls 1, 1, 2
  025d988  bl 0x502758
  025d98c  nop
  025d990  stw 3, 364(30)
  025d994  lfs 1, 36(28)
  025d998  lfs 30, 72(31)
  025d99c  lfs 2, 40(28)
  025d9a0  bl 0xfcbe8
  025d9a4  nop
  025d9a8  lfs 29, 44(28)
  025d9ac  fmuls 2, 1, 29
  025d9b0  fmr 1, 30
  025d9b4  bl 0x502578
  025d9b8  nop
  025d9bc  fmr 30, 1
  025d9c0  lfs 1, 8(28)
  025d9c4  lfs 2, 48(28)
  025d9c8  bl 0xfcbe8
  025d9cc  nop
  025d9d0  fmuls 3, 1, 29
  025d9d4  addic 3, 30, 368
  025d9d8  lfs 1, 52(28)
  025d9dc  fmr 2, 30
  025d9e0  bl 0xfe610
  025d9e4  nop
  025d9e8  lfs 1, 368(30)
  025d9ec  lfs 2, 16(31)
  025d9f0  fadds 1, 1, 2
  025d9f4  lfs 2, 372(30)
  025d9f8  lfs 3, 376(30)
  025d9fc  stfs 1, 368(30)
  025da00  lfs 1, 20(31)
  025da04  fadds 1, 2, 1
  025da08  stfs 1, 372(30)
  025da0c  lfs 1, 24(31)
  025da10  fadds 1, 3, 1
  025da14  stfs 1, 376(30)
  025da18  lwz 3, 360(30)
  025da1c  cmpwi 3, 0
  025da20  bt 2, 0x25da40
  025da24  lis 3, 38
  025da28  lfs 30, 208(29)
  025da2c  addi 3, 3, -11436
  025da30  lfs 29, 212(29)
  025da34  lfs 28, 216(29)
  025da38  lfs 31, 56(3)
  025da3c  b 0x25da4c
  025da40  lfs 30, 368(30)
  025da44  lfs 29, 372(30)
  025da48  lfs 28, 376(30)
  025da4c  lfs 1, 16(31)
  025da50  lfs 2, 20(31)
  025da54  lis 3, 38
  025da58  fsubs 30, 30, 1
  025da5c  fsubs 29, 29, 2
  025da60  addi 3, 3, -11436
  025da64  lis 29, 115
  025da68  addic 29, 29, 22784
  025da6c  lfs 1, 60(3)
  025da70  fabs 3, 30
  025da74  fabs 4, 29
  025da78  stfs 30, 124(1)
  025da7c  stfs 29, 128(1)
  025da80  lfs 5, 24(31)
  025da84  fadds 1, 5, 1
  025da88  fsubs 2, 3, 4
  025da8c  fsubs 28, 28, 1
  025da90  stfs 2, 132(1)
  025da94  lwz 4, 124(1)
  025da98  lfs 27, 8(3)
  025da9c  lfs 2, 124(1)
  025daa0  lwz 3, 128(1)
  025daa4  lfs 5, 128(1)
  025daa8  lwz 5, 132(1)
  025daac  rlwinm 3, 3, 3, 29, 29
  025dab0  lfs 1, 132(1)
  025dab4  fabs 2, 2
  025dab8  rlwimi 3, 5, 2, 30, 30
  025dabc  fabs 5, 5
  025dac0  fsub 6, 1, 27
  025dac4  fsub 7, 1, 27
  025dac8  rlwimi 3, 4, 4, 28, 28
  025dacc  ori 4, 29, 0
  025dad0  rlwimi 4, 3, 2, 26, 28
  025dad4  slwi 3, 3, 2
  025dad8  clrldi 4, 4, 32
  025dadc  fsel 4, 6, 2, 4
  025dae0  lfsx 1, 29, 3
  025dae4  fsel 3, 7, 5, 3
  025dae8  lfs 2, 4(4)
  025daec  fcmpu 0, 4, 27
  025daf0  bt 1, 0x25dafc
  025daf4  fmr 1, 27
  025daf8  b 0x25dc20
  025dafc  fsubs 5, 3, 4
  025db00  fadds 3, 3, 4
  025db04  addic 3, 1, 16
  025db08  li 6, 2
  025db0c  addic 5, 3, 180
  025db10  addic 4, 3, 164
  025db14  mtctr 6
  025db18  fdivs 3, 5, 3
  025db1c  fmuls 4, 3, 3
  025db20  stfs 3, 192(1)
  025db24  stfs 3, 184(1)
  025db28  stfs 3, 188(1)
  025db2c  stfs 3, 180(1)
  025db30  lfs 6, 192(1)
  025db34  lfs 7, 184(1)
  025db38  lfs 8, 188(1)
  025db3c  fmuls 5, 4, 4
  025db40  fmuls 7, 7, 4
  025db44  fmuls 6, 6, 5
  025db48  fmuls 3, 5, 5
  025db4c  fmuls 5, 8, 5
  025db50  stfs 7, 184(1)
  025db54  fmuls 4, 6, 4
  025db58  stfs 5, 188(1)
  025db5c  stfs 4, 192(1)
  025db60  lfs 4, 164(3)
  025db64  fmuls 4, 4, 3
  025db68  stfs 4, 180(3)
  025db6c  lfs 4, 4(4)
  025db70  addic 4, 4, 8
  025db74  fmuls 4, 4, 3
  025db78  addic 3, 3, 8
  025db7c  stfs 4, 4(5)
  025db80  addic 5, 5, 8
  025db84  bdnz 0x25db60
  025db88  li 5, 4
  025db8c  ori 3, 1, 0
  025db90  mtctr 5
  025db94  lis 4, 115
  025db98  addic 5, 3, 180
  025db9c  addic 4, 4, 22752
  025dba0  ori 7, 5, 0
  025dba4  lfs 3, 180(3)
  025dba8  lfs 4, 0(4)
  025dbac  fmuls 3, 3, 4
  025dbb0  lfs 4, 4(4)
  025dbb4  addic 4, 4, 8
  025dbb8  stfs 3, 180(3)
  025dbbc  lfs 3, 4(5)
  025dbc0  addic 3, 3, 8
  025dbc4  fmuls 3, 3, 4
  025dbc8  stfs 3, 4(5)
  025dbcc  addic 5, 5, 8
  025dbd0  bdnz 0x25dba4
  025dbd4  ori 3, 1, 0
  025dbd8  fmr 3, 27
  025dbdc  mtctr 6
  025dbe0  lfs 4, 180(3)
  025dbe4  fadds 3, 3, 4
  025dbe8  lfs 4, 4(7)
  025dbec  addic 3, 3, 16
  025dbf0  lfs 5, 8(7)
  025dbf4  lfs 6, 12(7)
  025dbf8  addic 7, 7, 16
  025dbfc  fadds 3, 3, 4
  025dc00  fadds 3, 3, 5
  025dc04  fadds 3, 3, 6
  025dc08  bdnz 0x25dbe0
  025dc0c  lis 3, 38
  025dc10  addi 3, 3, -11436
  025dc14  lfs 4, 12(3)
  025dc18  fadds 3, 3, 4
  025dc1c  fmadds 1, 3, 1, 2
  025dc20  lfs 2, 72(31)
  025dc24  bl 0x5025e0
  025dc28  nop
  025dc2c  fmuls 2, 29, 29
  025dc30  stfs 28, 116(1)
  025dc34  fabs 4, 28
  025dc38  fmadds 2, 30, 30, 2
  025dc3c  fsqrts 2, 2
  025dc40  lwz 3, 116(1)
  025dc44  lfs 3, 116(1)
  025dc48  rlwinm 3, 3, 3, 29, 29
  025dc4c  fabs 3, 3
  025dc50  fabs 5, 2
  025dc54  stfs 2, 112(1)
  025dc58  fsubs 2, 5, 4
  025dc5c  stfs 2, 120(1)
  025dc60  lwz 4, 112(1)
  025dc64  lfs 2, 112(1)
  025dc68  lwz 5, 120(1)
  025dc6c  lfs 6, 120(1)
  025dc70  fabs 2, 2
  025dc74  rlwimi 3, 5, 2, 30, 30
  025dc78  fsub 7, 6, 27
  025dc7c  fsub 6, 6, 27
  025dc80  rlwimi 3, 4, 4, 28, 28
  025dc84  ori 4, 29, 0
  025dc88  rlwimi 4, 3, 2, 26, 28
  025dc8c  slwi 3, 3, 2
  025dc90  clrldi 4, 4, 32
  025dc94  fsel 4, 7, 2, 4
  025dc98  lfsx 30, 29, 3
  025dc9c  fsel 3, 6, 3, 5
  025dca0  lfs 2, 4(4)
  025dca4  fcmpu 0, 4, 27
  025dca8  bt 1, 0x25dcb0
  025dcac  b 0x25ddd0
  025dcb0  fsubs 5, 3, 4
  025dcb4  fadds 3, 3, 4
  025dcb8  addic 3, 1, 16
  025dcbc  li 6, 2
  025dcc0  addic 4, 3, 132
  025dcc4  addic 5, 3, 148
  025dcc8  mtctr 6
  025dccc  fdivs 3, 5, 3
  025dcd0  fmuls 4, 3, 3
  025dcd4  stfs 3, 160(1)
  025dcd8  stfs 3, 152(1)
  025dcdc  stfs 3, 156(1)
  025dce0  stfs 3, 148(1)
  025dce4  lfs 6, 160(1)
  025dce8  lfs 7, 152(1)
  025dcec  lfs 8, 156(1)
  025dcf0  fmuls 5, 4, 4
  025dcf4  fmuls 7, 7, 4
  025dcf8  fmuls 6, 6, 5
  025dcfc  fmuls 3, 5, 5
  025dd00  fmuls 5, 8, 5
  025dd04  stfs 7, 152(1)
  025dd08  fmuls 4, 6, 4
  025dd0c  stfs 5, 156(1)
  025dd10  stfs 4, 160(1)
  025dd14  lfs 4, 132(3)
  025dd18  fmuls 4, 4, 3
  025dd1c  stfs 4, 148(3)
  025dd20  lfs 4, 4(4)
  025dd24  addic 3, 3, 8
  025dd28  addic 4, 4, 8
  025dd2c  fmuls 4, 4, 3
  025dd30  stfs 4, 4(5)
  025dd34  addic 5, 5, 8
  025dd38  bdnz 0x25dd14
  025dd3c  li 5, 4
  025dd40  ori 3, 1, 0
  025dd44  mtctr 5
  025dd48  lis 4, 115
  025dd4c  addic 5, 3, 148
  025dd50  addic 4, 4, 22752
  025dd54  ori 7, 5, 0
  025dd58  lfs 3, 148(3)
  025dd5c  lfs 4, 0(4)
  025dd60  fmuls 3, 3, 4
  025dd64  lfs 4, 4(4)
  025dd68  addic 4, 4, 8
  025dd6c  stfs 3, 148(3)
  025dd70  lfs 3, 4(5)
  025dd74  addic 3, 3, 8
  025dd78  fmuls 3, 3, 4
  025dd7c  stfs 3, 4(5)
  025dd80  addic 5, 5, 8
  025dd84  bdnz 0x25dd58
  025dd88  ori 3, 1, 0
  025dd8c  mtctr 6
  025dd90  lfs 3, 148(3)
  025dd94  lfs 4, 4(7)
  025dd98  fadds 3, 27, 3
  025dd9c  lfs 5, 8(7)
  025dda0  lfs 27, 12(7)
  025dda4  addic 3, 3, 16
  025dda8  addic 7, 7, 16
  025ddac  fadds 3, 3, 4
  025ddb0  fadds 3, 3, 5
  025ddb4  fadds 27, 3, 27
  025ddb8  bdnz 0x25dd90
  025ddbc  lis 3, 38
  025ddc0  addi 3, 3, -11436
  025ddc4  lfs 3, 12(3)
  025ddc8  fadds 27, 27, 3
  025ddcc  fmadds 27, 27, 30, 2
  025ddd0  lis 3, 38
  025ddd4  fneg 27, 27
  025ddd8  addi 3, 3, -11436
  025dddc  lfs 2, 16(3)
  025dde0  fcmpu 0, 1, 2
  025dde4  cror 6, 0, 2
  025dde8  bt 6, 0x25ddf4
  025ddec  fmr 1, 2
  025ddf0  b 0x25de10
  025ddf4  lis 3, 38
  025ddf8  addi 3, 3, -11436
  025ddfc  lfs 2, 64(3)
  025de00  fcmpu 0, 1, 2
  025de04  cror 6, 1, 2
  025de08  bt 6, 0x25de10
  025de0c  fmr 1, 2
  025de10  lis 3, 38
  025de14  addi 3, 3, -11436
  025de18  lfs 2, 68(3)
  025de1c  fcmpu 0, 27, 2
  025de20  cror 6, 0, 2
  025de24  bt 6, 0x25de30
  025de28  fmr 27, 2
  025de2c  b 0x25de4c
  025de30  lis 3, 38
  025de34  addi 3, 3, -11436
  025de38  lfs 2, 72(3)
  025de3c  fcmpu 0, 27, 2
  025de40  cror 6, 1, 2
  025de44  bt 6, 0x25de4c
  025de48  fmr 27, 2
  025de4c  lis 3, 38
  025de50  addi 3, 3, -11436
  025de54  lfs 2, 76(3)
  025de58  fmuls 2, 1, 2
  025de5c  stfs 2, 200(30)
  025de60  lfs 2, 80(3)
  025de64  stfs 27, 196(30)
  025de68  fmuls 1, 1, 2
  025de6c  stfs 1, 328(30)
  025de70  lis 3, 151
  025de74  lbz 3, -16268(3)
  025de78  cmpwi 3, 0
  025de7c  bt 2, 0x25de88
  025de80  lis 3, 16432
  025de84  stw 3, 208(30)
  025de88  lis 3, 38
  025de8c  lis 29, 114
  025de90  addi 3, 3, -11436
  025de94  addic 4, 30, 96
  025de98  li 5, 0
  025de9c  lfs 30, 80(3)
  025dea0  lfs 2, -3060(29)
  025dea4  ori 3, 31, 0
  025dea8  fmuls 1, 2, 31
  025deac  fmuls 2, 2, 30
  025deb0  bl 0x1167c8
  025deb4  nop
  025deb8  lfs 2, -3060(29)
  025debc  addic 4, 30, 224
  025dec0  ori 3, 31, 0
  025dec4  fmuls 1, 2, 31
  025dec8  li 5, 2
  025decc  fmuls 2, 2, 30
  025ded0  bl 0x1167c8
  025ded4  nop
  025ded8  ld 0, 368(1)
  025dedc  mtlr 0
  025dee0  lfd 27, 312(1)
  025dee4  lfd 28, 320(1)
  025dee8  lfd 29, 328(1)
  025deec  lfd 30, 336(1)
  025def0  lfd 31, 344(1)
  025def4  ld 25, 256(1)
  025def8  ld 26, 264(1)
  025defc  ld 27, 272(1)
  025df00  ld 28, 280(1)
  025df04  ld 29, 288(1)
  025df08  ld 30, 296(1)
  025df0c  ld 31, 304(1)
  025df10  addi 1, 1, 352
  025df14  blr
