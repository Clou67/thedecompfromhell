# game/update/moby1402.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1402_0026d3cc:   # 0x26d3cc, 0x14 bytes
  026d3cc  lis 3, 122
  026d3d0  lis 4, 1
  026d3d4  addic 3, 3, -13140
  026d3d8  stw 4, 72(3)
  026d3dc  blr

M1402_0026d3e0:   # 0x26d3e0, 0x88 bytes
  026d3e0  lis 4, 165
  026d3e4  lis 6, 164
  026d3e8  addic 7, 4, -28284
  026d3ec  lbz 4, 33(3)
  026d3f0  lis 5, 250
  026d3f4  slwi 8, 4, 2
  026d3f8  lwz 4, -28512(6)
  026d3fc  addic 5, 5, 17352
  026d400  lwzx 8, 7, 8
  026d404  lhz 7, 0(8)
  026d408  lfs 1, 24(3)
  026d40c  rlwinm 9, 7, 8, 9, 23
  026d410  addc 4, 4, 9
  026d414  clrldi 4, 4, 32
  026d418  stfs 1, 24(4)
  026d41c  lwz 7, -28512(6)
  026d420  addc 4, 7, 9
  026d424  clrldi 4, 4, 32
  026d428  lhz 9, 166(4)
  026d42c  cmpwi 9, 1402
  026d430  bf 2, 0x26d44c
  026d434  lwz 4, 120(4)
  026d438  lfs 1, 24(3)
  026d43c  lwz 4, 28(4)
  026d440  mulli 4, 4, 4512
  026d444  extsw 4, 4
  026d448  stfsx 1, 5, 4
  026d44c  ori 4, 7, 0
  026d450  lhz 7, 0(8)
  026d454  addic 8, 8, 2
  026d458  extsh 7, 7
  026d45c  cmpwi 7, 0
  026d460  bf 0, 0x26d404
  026d464  blr

UpdateMoby_1402:   # 0x26d478, 0x460 bytes
  026d478  stdu 1, -144(1)
  026d47c  mflr 0
  026d480  std 0, 160(1)
  026d484  std 31, 136(1)
  026d488  ori 31, 3, 0
  026d48c  std 30, 128(1)
  026d490  lbz 3, 32(31)
  026d494  lwz 30, 120(31)
  026d498  cmpwi 3, 1
  026d49c  cmpwi 1, 3, -1
  026d4a0  cmpwi 6, 3, 0
  026d4a4  std 29, 120(1)
  026d4a8  cmpwi 7, 3, 2
  026d4ac  bt 1, 0x26d4bc
  026d4b0  bf 5, 0x26d808
  026d4b4  bf 25, 0x26d4cc
  026d4b8  b 0x26d528
  026d4bc  bf 29, 0x26d6ac
  026d4c0  cmpwi 3, 3
  026d4c4  bf 1, 0x26d59c
  026d4c8  b 0x26d808
  026d4cc  lis 3, 251
  026d4d0  lwz 3, -30140(3)
  026d4d4  cmpwi 3, 0
  026d4d8  bt 2, 0x26d4e8
  026d4dc  lis 4, 151
  026d4e0  addic 4, 4, -25376
  026d4e4  stb 3, 8368(4)
  026d4e8  lis 3, 251
  026d4ec  li 6, 0
  026d4f0  li 4, 255
  026d4f4  li 5, 1
  026d4f8  lwz 7, -30144(3)
  026d4fc  lhz 8, 52(31)
  026d500  stw 7, 28(30)
  026d504  ori 8, 8, 1
  026d508  sth 6, 50(31)
  026d50c  addic 7, 7, 1
  026d510  stw 6, 148(31)
  026d514  sth 8, 52(31)
  026d518  stw 7, -30144(3)
  026d51c  stb 4, 48(31)
  026d520  stb 5, 32(31)
  026d524  b 0x26d808
  026d528  lis 3, 151
  026d52c  addic 4, 3, -16400
  026d530  lwz 3, 8(30)
  026d534  lbz 4, 126(4)
  026d538  cmpwi 4, 0
  026d53c  bt 2, 0x26d54c
  026d540  addic 3, 3, 1
  026d544  clrlwi 3, 3, 31
  026d548  stw 3, 8(30)
  026d54c  lis 4, 251
  026d550  cmpwi 3, 0
  026d554  li 3, 0
  026d558  stw 3, -30144(4)
  026d55c  bt 2, 0x26d588
  026d560  lis 3, 151
  026d564  addic 3, 3, -25376
  026d568  lbz 3, 8368(3)
  026d56c  cmpwi 3, 0
  026d570  bf 2, 0x26d588
  026d574  li 3, 2
  026d578  stb 3, 32(31)
  026d57c  lfs 1, 0(30)
  026d580  stfs 1, 24(31)
  026d584  b 0x26d808
  026d588  li 3, 3
  026d58c  stb 3, 32(31)
  026d590  lfs 1, 4(30)
  026d594  stfs 1, 24(31)
  026d598  b 0x26d808
  026d59c  lbz 3, 188(31)
  026d5a0  rlwinm 3, 3, 0, 29, 29
  026d5a4  cmpwi 3, 0
  026d5a8  bt 2, 0x26d5dc
  026d5ac  lis 3, 251
  026d5b0  li 4, 0
  026d5b4  li 5, 2
  026d5b8  stw 4, -30140(3)
  026d5bc  stb 5, 32(31)
  026d5c0  lwz 3, 8(30)
  026d5c4  cmpwi 3, 0
  026d5c8  bf 2, 0x26d5dc
  026d5cc  lis 3, 151
  026d5d0  li 4, 1
  026d5d4  addic 3, 3, -16400
  026d5d8  stb 4, 126(3)
  026d5dc  lis 3, 39
  026d5e0  lis 4, 114
  026d5e4  addi 3, 3, -11160
  026d5e8  lis 6, 114
  026d5ec  addic 5, 30, 24
  026d5f0  lfs 4, 0(3)
  026d5f4  lfs 2, -3048(4)
  026d5f8  addic 3, 31, 24
  026d5fc  lfs 1, 4(30)
  026d600  fmuls 2, 2, 4
  026d604  lfs 3, -3052(6)
  026d608  fmuls 4, 3, 4
  026d60c  fmr 3, 2
  026d610  bl 0x109c30
  026d614  nop
  026d618  lis 3, 165
  026d61c  lbz 4, 33(31)
  026d620  lis 5, 164
  026d624  addic 6, 3, -28284
  026d628  slwi 7, 4, 2
  026d62c  lis 4, 250
  026d630  lwz 3, -28512(5)
  026d634  addic 4, 4, 17352
  026d638  lwzx 6, 6, 7
  026d63c  lhz 7, 0(6)
  026d640  lis 5, 164
  026d644  lfs 1, 24(31)
  026d648  rlwinm 7, 7, 8, 9, 23
  026d64c  addc 3, 3, 7
  026d650  clrldi 3, 3, 32
  026d654  stfs 1, 24(3)
  026d658  lwz 5, -28512(5)
  026d65c  addc 3, 5, 7
  026d660  clrldi 3, 3, 32
  026d664  lhz 7, 166(3)
  026d668  cmpwi 7, 1402
  026d66c  bf 2, 0x26d688
  026d670  lwz 3, 120(3)
  026d674  lfs 1, 24(31)
  026d678  lwz 3, 28(3)
  026d67c  mulli 3, 3, 4512
  026d680  extsw 3, 3
  026d684  stfsx 1, 4, 3
  026d688  ori 3, 5, 0
  026d68c  lhz 5, 0(6)
  026d690  addic 6, 6, 2
  026d694  extsh 5, 5
  026d698  cmpwi 5, 0
  026d69c  bf 0, 0x26d63c
  026d6a0  li 3, 1
  026d6a4  stb 3, 188(31)
  026d6a8  b 0x26d808
  026d6ac  lbz 3, 188(31)
  026d6b0  rlwinm 3, 3, 0, 28, 28
  026d6b4  cmpwi 3, 0
  026d6b8  bt 2, 0x26d6d0
  026d6bc  li 3, 3
  026d6c0  lis 4, 251
  026d6c4  li 5, 1
  026d6c8  stb 3, 32(31)
  026d6cc  stw 5, -30140(4)
  026d6d0  lis 3, 165
  026d6d4  li 4, 2
  026d6d8  addic 6, 3, -28284
  026d6dc  lbz 3, 33(31)
  026d6e0  lis 5, 164
  026d6e4  slwi 7, 3, 2
  026d6e8  stb 4, 188(31)
  026d6ec  lis 4, 250
  026d6f0  lwz 3, -28512(5)
  026d6f4  addic 4, 4, 17352
  026d6f8  lwzx 7, 6, 7
  026d6fc  lhz 6, 0(7)
  026d700  lfs 1, 24(31)
  026d704  rlwinm 8, 6, 8, 9, 23
  026d708  addc 3, 3, 8
  026d70c  clrldi 3, 3, 32
  026d710  stfs 1, 24(3)
  026d714  lwz 6, -28512(5)
  026d718  addc 3, 6, 8
  026d71c  clrldi 3, 3, 32
  026d720  lhz 8, 166(3)
  026d724  cmpwi 8, 1402
  026d728  bf 2, 0x26d744
  026d72c  lwz 3, 120(3)
  026d730  lfs 1, 24(31)
  026d734  lwz 3, 28(3)
  026d738  mulli 3, 3, 4512
  026d73c  extsw 3, 3
  026d740  stfsx 1, 4, 3
  026d744  ori 3, 6, 0
  026d748  lhz 6, 0(7)
  026d74c  addic 7, 7, 2
  026d750  extsh 6, 6
  026d754  cmpwi 6, 0
  026d758  bf 0, 0x26d6fc
  026d75c  lis 3, 39
  026d760  lis 4, 114
  026d764  addi 29, 3, -11160
  026d768  lis 6, 114
  026d76c  addic 3, 31, 24
  026d770  addic 5, 30, 24
  026d774  lfs 4, 0(29)
  026d778  lfs 2, -3048(4)
  026d77c  lfs 1, 0(30)
  026d780  fmuls 2, 2, 4
  026d784  lfs 3, -3052(6)
  026d788  fmuls 4, 3, 4
  026d78c  fmr 3, 2
  026d790  bl 0x109c30
  026d794  nop
  026d798  lwz 3, 24(31)
  026d79c  lfs 1, 24(31)
  026d7a0  lfs 2, 0(30)
  026d7a4  lfs 3, 4(29)
  026d7a8  srawi 4, 3, 31
  026d7ac  fsubs 2, 1, 2
  026d7b0  srwi 5, 4, 1
  026d7b4  xor 3, 5, 3
  026d7b8  subc 3, 3, 4
  026d7bc  fabs 2, 2
  026d7c0  fcmpu 0, 2, 3
  026d7c4  cror 6, 0, 2
  026d7c8  bt 6, 0x26d808
  026d7cc  lis 4, 151
  026d7d0  addic 4, 4, -25376
  026d7d4  lwz 5, 8332(4)
  026d7d8  cmpwi 5, 17
  026d7dc  cmpwi 1, 5, 18
  026d7e0  bt 2, 0x26d7e8
  026d7e4  bf 6, 0x26d808
  026d7e8  lwz 5, 752(4)
  026d7ec  srawi 6, 5, 31
  026d7f0  srwi 7, 6, 1
  026d7f4  xor 5, 7, 5
  026d7f8  subc 5, 5, 6
  026d7fc  cmpw 3, 5
  026d800  bf 1, 0x26d808
  026d804  stfs 1, 752(4)
  026d808  lwz 3, 20(30)
  026d80c  cmpwi 3, 0
  026d810  cmpwi 1, 3, -1
  026d814  cmpwi 6, 3, 1
  026d818  cmpwi 7, 3, 2
  026d81c  bt 1, 0x26d828
  026d820  bf 5, 0x26d8bc
  026d824  b 0x26d8a8
  026d828  bf 25, 0x26d834
  026d82c  bf 29, 0x26d890
  026d830  b 0x26d8bc
  026d834  lis 3, 122
  026d838  lis 4, 114
  026d83c  lis 5, 251
  026d840  lis 6, 39
  026d844  lfs 2, -13016(3)
  026d848  lfs 1, -3052(4)
  026d84c  lfs 3, -30136(5)
  026d850  addi 3, 6, -11160
  026d854  fmadds 2, 2, 1, 3
  026d858  stfs 2, -30136(5)
  026d85c  lfs 1, 8(3)
  026d860  fcmpu 0, 2, 1
  026d864  cror 6, 0, 2
  026d868  bt 6, 0x26d878
  026d86c  fsubs 1, 2, 1
  026d870  lis 3, 251
  026d874  stfs 1, -30136(3)
  026d878  lis 3, 113
  026d87c  ori 4, 31, 0
  026d880  addic 3, 3, -23688
  026d884  bl 0x6d720
  026d888  nop
  026d88c  b 0x26d8bc
  026d890  lis 3, 113
  026d894  ori 4, 31, 0
  026d898  addic 3, 3, -23680
  026d89c  bl 0x6d720
  026d8a0  nop
  026d8a4  b 0x26d8bc
  026d8a8  lis 3, 113
  026d8ac  ori 4, 31, 0
  026d8b0  addic 3, 3, -23672
  026d8b4  bl 0x6d720
  026d8b8  nop
  026d8bc  ld 0, 160(1)
  026d8c0  mtlr 0
  026d8c4  ld 29, 120(1)
  026d8c8  ld 30, 128(1)
  026d8cc  ld 31, 136(1)
  026d8d0  addi 1, 1, 144
  026d8d4  blr
