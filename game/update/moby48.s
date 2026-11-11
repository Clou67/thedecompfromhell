# game/update/moby48.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M479_0039d1c8:   # 0x39d1c8, 0x140 bytes
  039d1c8  stdu 1, -160(1)
  039d1cc  mflr 0
  039d1d0  std 0, 176(1)
  039d1d4  stfd 30, 144(1)
  039d1d8  stfd 31, 152(1)
  039d1dc  std 31, 136(1)
  039d1e0  ori 31, 3, 0
  039d1e4  ori 3, 5, 0
  039d1e8  ori 5, 31, 0
  039d1ec  lbz 31, 33(31)
  039d1f0  std 30, 128(1)
  039d1f4  cmpwi 31, 255
  039d1f8  bf 2, 0x39d24c
  039d1fc  extsw 4, 4
  039d200  extsw 3, 3
  039d204  std 4, 112(1)
  039d208  lwz 31, 120(5)
  039d20c  lfd 1, 112(1)
  039d210  std 3, 112(1)
  039d214  fcfid 1, 1
  039d218  frsp 1, 1
  039d21c  lfd 2, 112(1)
  039d220  fcfid 2, 2
  039d224  frsp 2, 2
  039d228  bl 0xfcbe8
  039d22c  nop
  039d230  lis 3, 114
  039d234  lfs 2, -3056(3)
  039d238  fmuls 1, 1, 2
  039d23c  bl 0x502758
  039d240  nop
  039d244  stw 3, 316(31)
  039d248  b 0x39d2e8
  039d24c  extsw 4, 4
  039d250  rlwinm 5, 31, 2, 22, 29
  039d254  extsw 3, 3
  039d258  std 4, 112(1)
  039d25c  lis 4, 165
  039d260  addic 4, 4, -28284
  039d264  lwzx 31, 4, 5
  039d268  lfd 1, 112(1)
  039d26c  std 3, 112(1)
  039d270  fcfid 30, 1
  039d274  frsp 30, 30
  039d278  lfd 1, 112(1)
  039d27c  fcfid 31, 1
  039d280  frsp 31, 31
  039d284  lis 3, 164
  039d288  lhz 4, 0(31)
  039d28c  rlwinm 4, 4, 8, 9, 23
  039d290  lwz 3, -28512(3)
  039d294  addc 3, 3, 4
  039d298  clrldi 3, 3, 32
  039d29c  lbz 4, 32(3)
  039d2a0  cmpwi 4, 128
  039d2a4  bf 0, 0x39d2d4
  039d2a8  fmr 1, 30
  039d2ac  lwz 30, 120(3)
  039d2b0  fmr 2, 31
  039d2b4  bl 0xfcbe8
  039d2b8  nop
  039d2bc  lis 3, 114
  039d2c0  lfs 2, -3056(3)
  039d2c4  fmuls 1, 1, 2
  039d2c8  bl 0x502758
  039d2cc  nop
  039d2d0  stw 3, 316(30)
  039d2d4  lhz 3, 0(31)
  039d2d8  addic 31, 31, 2
  039d2dc  extsh 3, 3
  039d2e0  cmpwi 3, 0
  039d2e4  bf 0, 0x39d284
  039d2e8  ld 0, 176(1)
  039d2ec  mtlr 0
  039d2f0  lfd 30, 144(1)
  039d2f4  lfd 31, 152(1)
  039d2f8  ld 30, 128(1)
  039d2fc  ld 31, 136(1)
  039d300  addi 1, 1, 160
  039d304  blr

M48_0039d328:   # 0x39d328, 0x880 bytes
  039d328  stdu 1, -288(1)
  039d32c  mflr 0
  039d330  std 0, 304(1)
  039d334  stfd 29, 264(1)
  039d338  stfd 30, 272(1)
  039d33c  stfd 31, 280(1)
  039d340  std 31, 256(1)
  039d344  ori 31, 3, 0
  039d348  lis 3, 132
  039d34c  lis 4, 58
  039d350  li 7, 0
  039d354  addi 6, 4, -11512
  039d358  lwz 5, 36(31)
  039d35c  lis 4, 51
  039d360  std 27, 224(1)
  039d364  lfs 1, 12304(3)
  039d368  lwz 27, 120(31)
  039d36c  ori 3, 31, 0
  039d370  lfs 2, 36(5)
  039d374  li 5, 0
  039d378  fmuls 1, 2, 1
  039d37c  stfs 1, 44(31)
  039d380  lfs 31, 0(6)
  039d384  std 30, 248(1)
  039d388  std 29, 240(1)
  039d38c  std 28, 232(1)
  039d390  std 26, 216(1)
  039d394  stw 7, 116(1)
  039d398  bl 0x10675c
  039d39c  nop
  039d3a0  ori 30, 3, 0
  039d3a4  ori 3, 31, 0
  039d3a8  ori 4, 30, 0
  039d3ac  addic 5, 27, 32
  039d3b0  li 6, 0
  039d3b4  addic 7, 1, 112
  039d3b8  li 9, 0
  039d3bc  addic 8, 1, 116
  039d3c0  li 10, 4
  039d3c4  bl 0x106840
  039d3c8  nop
  039d3cc  ori 29, 3, 0
  039d3d0  lwz 3, 112(1)
  039d3d4  cmpwi 3, 1
  039d3d8  bt 2, 0x39da68
  039d3dc  lbz 3, 32(31)
  039d3e0  cmpwi 3, 8
  039d3e4  bt 2, 0x39da68
  039d3e8  lbz 28, 33(31)
  039d3ec  cmpwi 28, 255
  039d3f0  bf 2, 0x39d42c
  039d3f4  lis 3, 58
  039d3f8  lwz 28, 120(31)
  039d3fc  addi 3, 3, -11512
  039d400  lfs 1, 4(3)
  039d404  lfs 2, 8(3)
  039d408  bl 0xfcbe8
  039d40c  nop
  039d410  lis 3, 114
  039d414  lfs 2, -3056(3)
  039d418  fmuls 1, 1, 2
  039d41c  bl 0x502758
  039d420  nop
  039d424  stw 3, 316(28)
  039d428  b 0x39d4b0
  039d42c  lis 3, 165
  039d430  lis 5, 58
  039d434  rlwinm 4, 28, 2, 22, 29
  039d438  addic 3, 3, -28284
  039d43c  addi 5, 5, -11512
  039d440  lwzx 28, 3, 4
  039d444  lfs 30, 4(5)
  039d448  lfs 29, 8(5)
  039d44c  lis 3, 164
  039d450  lhz 4, 0(28)
  039d454  rlwinm 4, 4, 8, 9, 23
  039d458  lwz 3, -28512(3)
  039d45c  addc 3, 3, 4
  039d460  clrldi 3, 3, 32
  039d464  lbz 4, 32(3)
  039d468  cmpwi 4, 128
  039d46c  bf 0, 0x39d49c
  039d470  fmr 1, 30
  039d474  lwz 26, 120(3)
  039d478  fmr 2, 29
  039d47c  bl 0xfcbe8
  039d480  nop
  039d484  lis 3, 114
  039d488  lfs 2, -3056(3)
  039d48c  fmuls 1, 1, 2
  039d490  bl 0x502758
  039d494  nop
  039d498  stw 3, 316(26)
  039d49c  lhz 3, 0(28)
  039d4a0  addic 28, 28, 2
  039d4a4  extsh 3, 3
  039d4a8  cmpwi 3, 0
  039d4ac  bf 0, 0x39d44c
  039d4b0  lfs 1, 32(27)
  039d4b4  lfs 2, 116(1)
  039d4b8  fsubs 1, 1, 2
  039d4bc  fcmpu 0, 1, 31
  039d4c0  stfs 1, 32(27)
  039d4c4  bt 1, 0x39d4cc
  039d4c8  li 29, 1
  039d4cc  lis 3, 58
  039d4d0  addi 3, 3, -11512
  039d4d4  lfs 1, 12(3)
  039d4d8  bl 0x502758
  039d4dc  nop
  039d4e0  lis 4, 16128
  039d4e4  lis 5, 132
  039d4e8  lis 6, 114
  039d4ec  li 7, 0
  039d4f0  stw 4, 152(27)
  039d4f4  li 4, 9
  039d4f8  lfs 1, 12308(5)
  039d4fc  lfs 2, -3048(6)
  039d500  cmpwi 29, 2
  039d504  stw 3, 144(27)
  039d508  fmuls 1, 1, 2
  039d50c  stw 7, 132(27)
  039d510  stb 7, 173(27)
  039d514  stw 4, 148(27)
  039d518  stfs 1, 128(27)
  039d51c  bt 1, 0x39d534
  039d520  cmpwi 29, -1
  039d524  cmpwi 1, 29, 0
  039d528  bf 1, 0x39da58
  039d52c  bf 5, 0x39da58
  039d530  b 0x39d7b8
  039d534  cmpwi 29, 10
  039d538  cmpwi 1, 29, 8
  039d53c  bt 1, 0x39da58
  039d540  bf 5, 0x39d550
  039d544  li 3, 250
  039d548  stb 3, 103(27)
  039d54c  b 0x39da58
  039d550  lis 3, 132
  039d554  lis 4, 114
  039d558  lis 5, 132
  039d55c  lfs 1, 12316(3)
  039d560  lfs 2, -3052(4)
  039d564  lis 3, 16624
  039d568  fmuls 1, 1, 2
  039d56c  lis 4, 16688
  039d570  stfs 1, 136(27)
  039d574  lfs 1, 12312(5)
  039d578  stw 3, 192(27)
  039d57c  fmuls 1, 1, 2
  039d580  stw 4, 196(27)
  039d584  stfs 1, 140(27)
  039d588  lwz 3, 32(30)
  039d58c  lfs 1, 16(31)
  039d590  lfs 2, 20(31)
  039d594  lfs 3, 16(3)
  039d598  lfs 4, 20(3)
  039d59c  fsubs 1, 1, 3
  039d5a0  fsubs 2, 2, 4
  039d5a4  lis 3, 115
  039d5a8  addic 3, 3, 22784
  039d5ac  fabs 3, 1
  039d5b0  fabs 4, 2
  039d5b4  stfs 1, 140(1)
  039d5b8  stfs 2, 144(1)
  039d5bc  fsubs 1, 3, 4
  039d5c0  stfs 1, 148(1)
  039d5c4  lwz 4, 140(1)
  039d5c8  lfs 1, 140(1)
  039d5cc  lwz 5, 144(1)
  039d5d0  lfs 2, 144(1)
  039d5d4  lwz 6, 148(1)
  039d5d8  rlwinm 5, 5, 3, 29, 29
  039d5dc  fabs 5, 2
  039d5e0  lfs 2, 148(1)
  039d5e4  fabs 1, 1
  039d5e8  rlwimi 5, 6, 2, 30, 30
  039d5ec  fsub 6, 2, 31
  039d5f0  fsub 7, 2, 31
  039d5f4  rlwimi 5, 4, 4, 28, 28
  039d5f8  ori 4, 3, 0
  039d5fc  rlwimi 4, 5, 2, 26, 28
  039d600  slwi 5, 5, 2
  039d604  clrldi 4, 4, 32
  039d608  fsel 4, 6, 1, 4
  039d60c  lfsx 1, 3, 5
  039d610  fsel 3, 7, 5, 3
  039d614  lfs 2, 4(4)
  039d618  fcmpu 0, 4, 31
  039d61c  bt 1, 0x39d624
  039d620  b 0x39d744
  039d624  fsubs 5, 3, 4
  039d628  fadds 3, 3, 4
  039d62c  addic 3, 1, 16
  039d630  li 7, 2
  039d634  addic 4, 3, 168
  039d638  addic 5, 3, 184
  039d63c  mtctr 7
  039d640  fdivs 3, 5, 3
  039d644  fmuls 4, 3, 3
  039d648  stfs 3, 196(1)
  039d64c  stfs 3, 188(1)
  039d650  stfs 3, 192(1)
  039d654  stfs 3, 184(1)
  039d658  lfs 6, 196(1)
  039d65c  lfs 7, 188(1)
  039d660  lfs 8, 192(1)
  039d664  fmuls 5, 4, 4
  039d668  fmuls 7, 7, 4
  039d66c  fmuls 6, 6, 5
  039d670  fmuls 3, 5, 5
  039d674  fmuls 5, 8, 5
  039d678  stfs 7, 188(1)
  039d67c  fmuls 4, 6, 4
  039d680  stfs 5, 192(1)
  039d684  stfs 4, 196(1)
  039d688  lfs 4, 168(3)
  039d68c  fmuls 4, 4, 3
  039d690  stfs 4, 184(3)
  039d694  lfs 4, 4(4)
  039d698  addic 3, 3, 8
  039d69c  addic 4, 4, 8
  039d6a0  fmuls 4, 4, 3
  039d6a4  stfs 4, 4(5)
  039d6a8  addic 5, 5, 8
  039d6ac  bdnz 0x39d688
  039d6b0  li 5, 4
  039d6b4  ori 3, 1, 0
  039d6b8  mtctr 5
  039d6bc  lis 4, 115
  039d6c0  addic 5, 3, 184
  039d6c4  addic 4, 4, 22752
  039d6c8  ori 6, 5, 0
  039d6cc  lfs 3, 184(3)
  039d6d0  lfs 4, 0(4)
  039d6d4  fmuls 3, 3, 4
  039d6d8  lfs 4, 4(4)
  039d6dc  addic 4, 4, 8
  039d6e0  stfs 3, 184(3)
  039d6e4  lfs 3, 4(5)
  039d6e8  addic 3, 3, 8
  039d6ec  fmuls 3, 3, 4
  039d6f0  stfs 3, 4(5)
  039d6f4  addic 5, 5, 8
  039d6f8  bdnz 0x39d6cc
  039d6fc  ori 3, 1, 0
  039d700  mtctr 7
  039d704  lfs 3, 184(3)
  039d708  lfs 4, 4(6)
  039d70c  fadds 3, 31, 3
  039d710  lfs 5, 8(6)
  039d714  lfs 31, 12(6)
  039d718  addic 3, 3, 16
  039d71c  addic 6, 6, 16
  039d720  fadds 3, 3, 4
  039d724  fadds 3, 3, 5
  039d728  fadds 31, 3, 31
  039d72c  bdnz 0x39d704
  039d730  lis 3, 58
  039d734  addi 3, 3, -11512
  039d738  lfs 3, 16(3)
  039d73c  fadds 31, 31, 3
  039d740  fmadds 31, 31, 1, 2
  039d744  stfs 31, 120(1)
  039d748  addic 5, 1, 120
  039d74c  lfs 1, 16(30)
  039d750  addic 6, 27, 136
  039d754  lfs 2, 24(30)
  039d758  addic 7, 27, 140
  039d75c  stfs 1, 48(1)
  039d760  stfs 2, 56(1)
  039d764  lfs 1, 20(30)
  039d768  lfs 2, 28(30)
  039d76c  stfs 1, 52(1)
  039d770  stfs 2, 60(1)
  039d774  ld 3, 48(1)
  039d778  ld 4, 56(1)
  039d77c  bl 0x107de8
  039d780  nop
  039d784  ori 3, 31, 0
  039d788  lfs 1, 120(1)
  039d78c  addic 4, 27, 112
  039d790  li 6, 7
  039d794  li 7, 1
  039d798  li 8, 0
  039d79c  bl 0x10ad80
  039d7a0  nop
  039d7a4  li 3, 7
  039d7a8  li 4, 120
  039d7ac  stb 3, 32(31)
  039d7b0  stb 4, 103(27)
  039d7b4  b 0x39da58
  039d7b8  lis 3, 132
  039d7bc  lis 4, 114
  039d7c0  li 6, 0
  039d7c4  lis 5, 132
  039d7c8  lfs 1, 12308(3)
  039d7cc  lfs 2, -3048(4)
  039d7d0  lis 3, 114
  039d7d4  lhz 4, 52(31)
  039d7d8  fmuls 1, 1, 2
  039d7dc  rlwimi 4, 6, 0, 19, 19
  039d7e0  lis 6, 132
  039d7e4  sth 4, 52(31)
  039d7e8  lis 4, 16688
  039d7ec  stfs 1, 128(27)
  039d7f0  lfs 1, 12324(5)
  039d7f4  lfs 2, -3052(3)
  039d7f8  lis 3, 16624
  039d7fc  fmuls 1, 1, 2
  039d800  stfs 1, 136(27)
  039d804  lfs 1, 12320(6)
  039d808  stw 3, 192(27)
  039d80c  fmuls 1, 1, 2
  039d810  stw 4, 196(27)
  039d814  stfs 1, 140(27)
  039d818  lwz 3, 32(30)
  039d81c  lfs 1, 16(31)
  039d820  lfs 2, 20(31)
  039d824  lfs 3, 16(3)
  039d828  lfs 4, 20(3)
  039d82c  fsubs 1, 1, 3
  039d830  fsubs 2, 2, 4
  039d834  lis 3, 115
  039d838  addic 3, 3, 22784
  039d83c  fabs 3, 1
  039d840  fabs 4, 2
  039d844  stfs 1, 128(1)
  039d848  stfs 2, 132(1)
  039d84c  fsubs 1, 3, 4
  039d850  stfs 1, 136(1)
  039d854  lwz 4, 128(1)
  039d858  lfs 1, 128(1)
  039d85c  lwz 5, 132(1)
  039d860  lfs 2, 132(1)
  039d864  lwz 6, 136(1)
  039d868  rlwinm 5, 5, 3, 29, 29
  039d86c  fabs 5, 2
  039d870  lfs 2, 136(1)
  039d874  fabs 1, 1
  039d878  rlwimi 5, 6, 2, 30, 30
  039d87c  fsub 6, 2, 31
  039d880  fsub 7, 2, 31
  039d884  rlwimi 5, 4, 4, 28, 28
  039d888  ori 4, 3, 0
  039d88c  rlwimi 4, 5, 2, 26, 28
  039d890  slwi 5, 5, 2
  039d894  clrldi 4, 4, 32
  039d898  fsel 4, 6, 1, 4
  039d89c  lfsx 1, 3, 5
  039d8a0  fsel 3, 7, 5, 3
  039d8a4  lfs 2, 4(4)
  039d8a8  fcmpu 0, 4, 31
  039d8ac  bt 1, 0x39d8b4
  039d8b0  b 0x39d9d4
  039d8b4  fsubs 5, 3, 4
  039d8b8  fadds 3, 3, 4
  039d8bc  addic 3, 1, 16
  039d8c0  li 6, 2
  039d8c4  addic 4, 3, 136
  039d8c8  addic 5, 3, 152
  039d8cc  mtctr 6
  039d8d0  fdivs 3, 5, 3
  039d8d4  fmuls 4, 3, 3
  039d8d8  stfs 3, 164(1)
  039d8dc  stfs 3, 156(1)
  039d8e0  stfs 3, 160(1)
  039d8e4  stfs 3, 152(1)
  039d8e8  lfs 6, 164(1)
  039d8ec  lfs 7, 156(1)
  039d8f0  lfs 8, 160(1)
  039d8f4  fmuls 5, 4, 4
  039d8f8  fmuls 7, 7, 4
  039d8fc  fmuls 6, 6, 5
  039d900  fmuls 3, 5, 5
  039d904  fmuls 5, 8, 5
  039d908  stfs 7, 156(1)
  039d90c  fmuls 4, 6, 4
  039d910  stfs 5, 160(1)
  039d914  stfs 4, 164(1)
  039d918  lfs 4, 136(3)
  039d91c  fmuls 4, 4, 3
  039d920  stfs 4, 152(3)
  039d924  lfs 4, 4(4)
  039d928  addic 3, 3, 8
  039d92c  addic 4, 4, 8
  039d930  fmuls 4, 4, 3
  039d934  stfs 4, 4(5)
  039d938  addic 5, 5, 8
  039d93c  bdnz 0x39d918
  039d940  li 5, 4
  039d944  ori 3, 1, 0
  039d948  mtctr 5
  039d94c  lis 4, 115
  039d950  addic 5, 3, 152
  039d954  addic 4, 4, 22752
  039d958  ori 7, 5, 0
  039d95c  lfs 3, 152(3)
  039d960  lfs 4, 0(4)
  039d964  fmuls 3, 3, 4
  039d968  lfs 4, 4(4)
  039d96c  addic 4, 4, 8
  039d970  stfs 3, 152(3)
  039d974  lfs 3, 4(5)
  039d978  addic 3, 3, 8
  039d97c  fmuls 3, 3, 4
  039d980  stfs 3, 4(5)
  039d984  addic 5, 5, 8
  039d988  bdnz 0x39d95c
  039d98c  ori 3, 1, 0
  039d990  mtctr 6
  039d994  lfs 3, 152(3)
  039d998  lfs 4, 4(7)
  039d99c  fadds 3, 31, 3
  039d9a0  lfs 5, 8(7)
  039d9a4  lfs 31, 12(7)
  039d9a8  addic 3, 3, 16
  039d9ac  addic 7, 7, 16
  039d9b0  fadds 3, 3, 4
  039d9b4  fadds 3, 3, 5
  039d9b8  fadds 31, 3, 31
  039d9bc  bdnz 0x39d994
  039d9c0  lis 3, 58
  039d9c4  addi 3, 3, -11512
  039d9c8  lfs 3, 16(3)
  039d9cc  fadds 31, 31, 3
  039d9d0  fmadds 31, 31, 1, 2
  039d9d4  stfs 31, 124(1)
  039d9d8  addic 5, 1, 124
  039d9dc  lfs 1, 16(30)
  039d9e0  addic 6, 27, 136
  039d9e4  lfs 2, 24(30)
  039d9e8  addic 7, 27, 140
  039d9ec  stfs 1, 48(1)
  039d9f0  stfs 2, 56(1)
  039d9f4  lfs 1, 20(30)
  039d9f8  lfs 2, 28(30)
  039d9fc  stfs 1, 52(1)
  039da00  stfs 2, 60(1)
  039da04  ld 3, 48(1)
  039da08  ld 4, 56(1)
  039da0c  bl 0x107de8
  039da10  nop
  039da14  addic 4, 27, 112
  039da18  lfs 1, 124(1)
  039da1c  ori 3, 31, 0
  039da20  li 6, 8
  039da24  li 7, 1
  039da28  li 8, 0
  039da2c  bl 0x10ad80
  039da30  nop
  039da34  li 4, 8
  039da38  li 5, 240
  039da3c  ori 3, 31, 0
  039da40  stb 4, 32(31)
  039da44  stb 5, 103(27)
  039da48  li 4, 0
  039da4c  li 5, -1
  039da50  bl 0xfd8d0
  039da54  nop
  039da58  addic 4, 27, 96
  039da5c  ori 3, 31, 0
  039da60  bl 0x10c808
  039da64  nop
  039da68  li 5, 255
  039da6c  addic 4, 27, 96
  039da70  ori 3, 31, 0
  039da74  stb 5, 164(31)
  039da78  bl 0x10c9a0
  039da7c  nop
  039da80  addic 3, 27, 316
  039da84  bl 0x4fff60
  039da88  nop
  039da8c  lwz 4, 56(27)
  039da90  lwz 3, 316(27)
  039da94  cmpwi 4, 0
  039da98  bt 2, 0x39dacc
  039da9c  lis 3, 58
  039daa0  addi 3, 3, -11512
  039daa4  lfs 1, 20(3)
  039daa8  lfs 2, 24(3)
  039daac  bl 0xfcbe8
  039dab0  nop
  039dab4  lis 3, 114
  039dab8  lfs 2, -3056(3)
  039dabc  fmuls 1, 1, 2
  039dac0  bl 0x502758
  039dac4  nop
  039dac8  stw 3, 316(27)
  039dacc  li 4, 0
  039dad0  cmpwi 3, 0
  039dad4  stw 4, 56(27)
  039dad8  bt 2, 0x39dafc
  039dadc  lis 4, 58
  039dae0  ori 3, 31, 0
  039dae4  addi 4, 4, -11512
  039dae8  addic 5, 27, 208
  039daec  lfs 1, 28(4)
  039daf0  bl 0x1118d8
  039daf4  nop
  039daf8  b 0x39db58
  039dafc  ori 3, 31, 0
  039db00  lfs 1, 292(27)
  039db04  addic 5, 27, 208
  039db08  bl 0x1118d8
  039db0c  nop
  039db10  cmpwi 3, 2
  039db14  bt 2, 0x39db58
  039db18  lwz 3, 272(27)
  039db1c  lfs 1, 20(31)
  039db20  lfs 2, 16(31)
  039db24  lfs 3, 20(3)
  039db28  lfs 4, 16(3)
  039db2c  fsubs 1, 1, 3
  039db30  fsubs 2, 2, 4
  039db34  fmuls 1, 1, 1
  039db38  fmadds 1, 2, 2, 1
  039db3c  lfs 2, 292(27)
  039db40  fsqrts 1, 1
  039db44  fcmpu 0, 1, 2
  039db48  cror 6, 0, 2
  039db4c  bt 6, 0x39db58
  039db50  li 3, 2
  039db54  stw 3, 276(27)
  039db58  lwz 3, 272(27)
  039db5c  cmpwi 3, 0
  039db60  bf 2, 0x39db74
  039db64  lis 3, 151
  039db68  addic 3, 3, -25376
  039db6c  lwz 3, 8320(3)
  039db70  stw 3, 272(27)
  039db74  ld 0, 304(1)
  039db78  mtlr 0
  039db7c  lfd 29, 264(1)
  039db80  lfd 30, 272(1)
  039db84  lfd 31, 280(1)
  039db88  ld 26, 216(1)
  039db8c  ld 27, 224(1)
  039db90  ld 28, 232(1)
  039db94  ld 29, 240(1)
  039db98  ld 30, 248(1)
  039db9c  ld 31, 256(1)
  039dba0  addi 1, 1, 288
  039dba4  blr

UpdateMoby_48:   # 0x39dbd0, 0xd24 bytes
  039dbd0  stdu 1, -384(1)
  039dbd4  mflr 0
  039dbd8  std 0, 400(1)
  039dbdc  stfd 27, 344(1)
  039dbe0  stfd 28, 352(1)
  039dbe4  stfd 29, 360(1)
  039dbe8  stfd 30, 368(1)
  039dbec  stfd 31, 376(1)
  039dbf0  std 31, 336(1)
  039dbf4  std 30, 328(1)
  039dbf8  ori 31, 3, 0
  039dbfc  std 29, 320(1)
  039dc00  lwz 30, 120(31)
  039dc04  bl 0x39d328
  039dc08  lwz 3, 272(30)
  039dc0c  lbz 4, 32(31)
  039dc10  lfs 1, 16(31)
  039dc14  lfs 2, 20(31)
  039dc18  lhz 5, 166(3)
  039dc1c  cmpwi 5, 0
  039dc20  bf 2, 0x39dc40
  039dc24  lis 3, 151
  039dc28  addic 3, 3, -25376
  039dc2c  lfs 31, 192(3)
  039dc30  lfs 30, 196(3)
  039dc34  lfs 29, 200(3)
  039dc38  lfs 28, 204(3)
  039dc3c  b 0x39dc50
  039dc40  lfs 31, 16(3)
  039dc44  lfs 30, 20(3)
  039dc48  lfs 29, 24(3)
  039dc4c  lfs 28, 28(3)
  039dc50  cmpwi 4, 3
  039dc54  bt 1, 0x39dc80
  039dc58  cmpwi 4, 0
  039dc5c  bt 1, 0x39dc6c
  039dc60  cmpwi 4, -1
  039dc64  bf 1, 0x39e8c4
  039dc68  b 0x39dcb0
  039dc6c  cmpwi 4, 1
  039dc70  bf 1, 0x39dd74
  039dc74  cmpwi 4, 2
  039dc78  bf 1, 0x39de08
  039dc7c  b 0x39de80
  039dc80  cmpwi 4, 6
  039dc84  bt 1, 0x39dc9c
  039dc88  cmpwi 4, 4
  039dc8c  bf 1, 0x39e0dc
  039dc90  cmpwi 4, 5
  039dc94  bf 1, 0x39e4ac
  039dc98  b 0x39e740
  039dc9c  cmpwi 4, 7
  039dca0  bf 1, 0x39e800
  039dca4  cmpwi 4, 8
  039dca8  bf 1, 0x39e894
  039dcac  b 0x39e8c4
  039dcb0  li 4, 2
  039dcb4  lis 5, 16448
  039dcb8  lwz 7, 288(30)
  039dcbc  lis 3, 165
  039dcc0  li 6, 3
  039dcc4  stb 4, 40(30)
  039dcc8  addic 3, 3, 7136
  039dccc  slwi 4, 7, 2
  039dcd0  stw 5, 32(30)
  039dcd4  extsw 5, 4
  039dcd8  sth 6, 36(30)
  039dcdc  lis 6, 58
  039dce0  li 4, 0
  039dce4  addi 29, 6, -9304
  039dce8  lwzx 5, 3, 5
  039dcec  addic 3, 1, 112
  039dcf0  lfs 1, 16(5)
  039dcf4  stfs 1, 112(1)
  039dcf8  lfs 1, 20(5)
  039dcfc  stfs 1, 116(1)
  039dd00  lfs 31, 24(5)
  039dd04  stfs 31, 120(1)
  039dd08  lfs 1, 28(5)
  039dd0c  stfs 1, 124(1)
  039dd10  lfs 1, 0(29)
  039dd14  bl 0xffb70
  039dd18  nop
  039dd1c  lfs 2, 4(29)
  039dd20  lwz 3, 296(30)
  039dd24  fadds 1, 1, 2
  039dd28  fcmpu 0, 31, 1
  039dd2c  cror 6, 0, 2
  039dd30  bt 6, 0x39dd3c
  039dd34  li 4, 1
  039dd38  stb 4, 303(30)
  039dd3c  cmpwi 3, 0
  039dd40  bt 2, 0x39dd68
  039dd44  li 3, 9
  039dd48  lhz 5, 52(31)
  039dd4c  li 4, 0
  039dd50  stb 3, 32(31)
  039dd54  ori 3, 5, 1
  039dd58  stb 4, 49(31)
  039dd5c  stw 4, 148(31)
  039dd60  sth 3, 52(31)
  039dd64  b 0x39e8c4
  039dd68  li 3, 2
  039dd6c  stb 3, 32(31)
  039dd70  b 0x39e8c4
  039dd74  lwz 6, 288(30)
  039dd78  lis 4, 165
  039dd7c  ori 3, 31, 0
  039dd80  slwi 6, 6, 2
  039dd84  addic 4, 4, 7136
  039dd88  extsw 6, 6
  039dd8c  li 5, 1
  039dd90  lwzx 4, 4, 6
  039dd94  addic 4, 4, 16
  039dd98  bl 0x39cdf0
  039dd9c  lis 3, 58
  039dda0  addi 3, 3, -9304
  039dda4  lfs 2, 8(3)
  039dda8  fcmpu 0, 1, 2
  039ddac  cror 6, 1, 2
  039ddb0  bt 6, 0x39e8c4
  039ddb4  li 3, 2
  039ddb8  lbz 4, 83(31)
  039ddbc  cmpwi 4, 0
  039ddc0  stb 3, 32(31)
  039ddc4  bt 2, 0x39e8c4
  039ddc8  lis 3, 58
  039ddcc  lis 4, 114
  039ddd0  addi 3, 3, -9304
  039ddd4  li 5, 0
  039ddd8  lfs 1, 12(3)
  039dddc  lfs 2, -3056(4)
  039dde0  ori 3, 31, 0
  039dde4  fmuls 1, 2, 1
  039dde8  li 4, 0
  039ddec  fctiwz 1, 1
  039ddf0  stfd 1, 296(1)
  039ddf4  lwz 6, 300(1)
  039ddf8  extsw 6, 6
  039ddfc  bl 0xfddc0
  039de00  nop
  039de04  b 0x39e8c4
  039de08  addic 3, 30, 312
  039de0c  bl 0x4fff60
  039de10  nop
  039de14  lwz 3, 276(30)
  039de18  cmpwi 3, 2
  039de1c  bt 2, 0x39e8c4
  039de20  lwz 3, 312(30)
  039de24  cmpwi 3, 0
  039de28  bf 2, 0x39e8c4
  039de2c  li 3, 3
  039de30  lbz 4, 83(31)
  039de34  cmpwi 4, 4
  039de38  stb 3, 32(31)
  039de3c  bt 2, 0x39e8c4
  039de40  lis 3, 58
  039de44  lis 4, 114
  039de48  addi 3, 3, -9304
  039de4c  li 5, 0
  039de50  lfs 1, 12(3)
  039de54  lfs 2, -3056(4)
  039de58  ori 3, 31, 0
  039de5c  fmuls 1, 2, 1
  039de60  li 4, 4
  039de64  fctiwz 1, 1
  039de68  stfd 1, 296(1)
  039de6c  lwz 6, 300(1)
  039de70  extsw 6, 6
  039de74  bl 0xfddc0
  039de78  nop
  039de7c  b 0x39e8c4
  039de80  fsubs 1, 31, 1
  039de84  lis 3, 58
  039de88  fsubs 2, 30, 2
  039de8c  addi 4, 3, -9304
  039de90  lis 5, 115
  039de94  addic 3, 31, 72
  039de98  addic 5, 5, 22784
  039de9c  fabs 3, 1
  039dea0  fabs 4, 2
  039dea4  stfs 1, 184(1)
  039dea8  stfs 2, 188(1)
  039deac  fsubs 1, 3, 4
  039deb0  stfs 1, 192(1)
  039deb4  lwz 6, 184(1)
  039deb8  lfs 2, 16(4)
  039debc  lfs 1, 184(1)
  039dec0  lwz 4, 188(1)
  039dec4  lfs 5, 188(1)
  039dec8  lwz 7, 192(1)
  039decc  rlwinm 4, 4, 3, 29, 29
  039ded0  lfs 6, 192(1)
  039ded4  fabs 1, 1
  039ded8  rlwimi 4, 7, 2, 30, 30
  039dedc  fabs 5, 5
  039dee0  fsub 7, 6, 2
  039dee4  rlwimi 4, 6, 4, 28, 28
  039dee8  fsub 6, 6, 2
  039deec  ori 6, 5, 0
  039def0  rlwimi 6, 4, 2, 26, 28
  039def4  slwi 4, 4, 2
  039def8  clrldi 6, 6, 32
  039defc  fsel 4, 7, 1, 4
  039df00  lfsx 31, 5, 4
  039df04  lfs 1, 4(6)
  039df08  fsel 3, 6, 5, 3
  039df0c  fcmpu 0, 4, 2
  039df10  bt 1, 0x39df18
  039df14  b 0x39e038
  039df18  fsubs 5, 3, 4
  039df1c  fadds 3, 3, 4
  039df20  addic 4, 1, 16
  039df24  li 7, 2
  039df28  addic 5, 4, 244
  039df2c  addic 6, 4, 260
  039df30  mtctr 7
  039df34  fdivs 3, 5, 3
  039df38  fmuls 4, 3, 3
  039df3c  stfs 3, 272(1)
  039df40  stfs 3, 264(1)
  039df44  stfs 3, 268(1)
  039df48  stfs 3, 260(1)
  039df4c  lfs 6, 272(1)
  039df50  lfs 7, 264(1)
  039df54  lfs 8, 268(1)
  039df58  fmuls 5, 4, 4
  039df5c  fmuls 7, 7, 4
  039df60  fmuls 6, 6, 5
  039df64  fmuls 3, 5, 5
  039df68  fmuls 5, 8, 5
  039df6c  stfs 7, 264(1)
  039df70  fmuls 4, 6, 4
  039df74  stfs 5, 268(1)
  039df78  stfs 4, 272(1)
  039df7c  lfs 4, 244(4)
  039df80  fmuls 4, 4, 3
  039df84  stfs 4, 260(4)
  039df88  lfs 4, 4(5)
  039df8c  addic 4, 4, 8
  039df90  addic 5, 5, 8
  039df94  fmuls 4, 4, 3
  039df98  stfs 4, 4(6)
  039df9c  addic 6, 6, 8
  039dfa0  bdnz 0x39df7c
  039dfa4  li 6, 4
  039dfa8  ori 4, 1, 0
  039dfac  mtctr 6
  039dfb0  lis 5, 115
  039dfb4  addic 6, 4, 260
  039dfb8  addic 5, 5, 22752
  039dfbc  ori 8, 6, 0
  039dfc0  lfs 3, 260(4)
  039dfc4  lfs 4, 0(5)
  039dfc8  fmuls 3, 3, 4
  039dfcc  lfs 4, 4(5)
  039dfd0  addic 5, 5, 8
  039dfd4  stfs 3, 260(4)
  039dfd8  lfs 3, 4(6)
  039dfdc  addic 4, 4, 8
  039dfe0  fmuls 3, 3, 4
  039dfe4  stfs 3, 4(6)
  039dfe8  addic 6, 6, 8
  039dfec  bdnz 0x39dfc0
  039dff0  ori 4, 1, 0
  039dff4  mtctr 7
  039dff8  lfs 3, 260(4)
  039dffc  fadds 2, 2, 3
  039e000  lfs 3, 4(8)
  039e004  addic 4, 4, 16
  039e008  lfs 4, 8(8)
  039e00c  lfs 5, 12(8)
  039e010  addic 8, 8, 16
  039e014  fadds 2, 2, 3
  039e018  fadds 2, 2, 4
  039e01c  fadds 2, 2, 5
  039e020  bdnz 0x39dff8
  039e024  lis 4, 58
  039e028  addi 4, 4, -9304
  039e02c  lfs 3, 20(4)
  039e030  fadds 2, 2, 3
  039e034  fmadds 2, 2, 31, 1
  039e038  lis 4, 58
  039e03c  fmr 1, 2
  039e040  lis 5, 114
  039e044  addi 4, 4, -9304
  039e048  lis 6, 114
  039e04c  lfs 4, 24(4)
  039e050  lfs 3, -3048(5)
  039e054  lfs 5, -3052(6)
  039e058  fmuls 3, 3, 4
  039e05c  addic 5, 30, 308
  039e060  fmuls 4, 5, 4
  039e064  fmr 2, 3
  039e068  bl 0x10a2e0
  039e06c  nop
  039e070  lbz 3, 112(31)
  039e074  rlwinm 3, 3, 0, 30, 30
  039e078  cmpwi 3, 0
  039e07c  bt 2, 0x39e8c4
  039e080  li 3, 0
  039e084  li 4, 4
  039e088  stb 3, 302(30)
  039e08c  lbz 3, 83(31)
  039e090  stb 4, 32(31)
  039e094  cmpwi 3, 5
  039e098  bt 2, 0x39e8c4
  039e09c  lis 3, 58
  039e0a0  lis 4, 114
  039e0a4  addi 3, 3, -9304
  039e0a8  li 5, 0
  039e0ac  lfs 1, 12(3)
  039e0b0  lfs 2, -3056(4)
  039e0b4  ori 3, 31, 0
  039e0b8  li 4, 5
  039e0bc  fmuls 1, 2, 1
  039e0c0  fctiwz 1, 1
  039e0c4  stfd 1, 296(1)
  039e0c8  lwz 6, 300(1)
  039e0cc  extsw 6, 6
  039e0d0  bl 0xfddc0
  039e0d4  nop
  039e0d8  b 0x39e8c4
  039e0dc  fsubs 1, 31, 1
  039e0e0  fsubs 2, 30, 2
  039e0e4  lis 3, 58
  039e0e8  addi 4, 3, -9304
  039e0ec  lis 5, 115
  039e0f0  addic 3, 31, 72
  039e0f4  addic 5, 5, 22784
  039e0f8  fabs 3, 1
  039e0fc  fabs 4, 2
  039e100  stfs 1, 172(1)
  039e104  stfs 2, 176(1)
  039e108  fsubs 1, 3, 4
  039e10c  stfs 1, 180(1)
  039e110  lwz 6, 172(1)
  039e114  lfs 27, 16(4)
  039e118  lfs 1, 172(1)
  039e11c  lwz 4, 176(1)
  039e120  lfs 2, 176(1)
  039e124  fabs 1, 1
  039e128  lwz 7, 180(1)
  039e12c  rlwinm 4, 4, 3, 29, 29
  039e130  fabs 5, 2
  039e134  lfs 2, 180(1)
  039e138  rlwimi 4, 7, 2, 30, 30
  039e13c  fsub 6, 2, 27
  039e140  rlwimi 4, 6, 4, 28, 28
  039e144  fsub 7, 2, 27
  039e148  ori 6, 5, 0
  039e14c  rlwimi 6, 4, 2, 26, 28
  039e150  slwi 4, 4, 2
  039e154  clrldi 6, 6, 32
  039e158  fsel 4, 6, 1, 4
  039e15c  lfsx 1, 5, 4
  039e160  lfs 2, 4(6)
  039e164  fsel 3, 7, 5, 3
  039e168  fcmpu 0, 4, 27
  039e16c  bt 1, 0x39e178
  039e170  fmr 1, 27
  039e174  b 0x39e29c
  039e178  fsubs 5, 3, 4
  039e17c  fadds 3, 3, 4
  039e180  addic 4, 1, 16
  039e184  li 7, 2
  039e188  addic 5, 4, 212
  039e18c  addic 6, 4, 228
  039e190  mtctr 7
  039e194  fdivs 3, 5, 3
  039e198  fmuls 4, 3, 3
  039e19c  stfs 3, 240(1)
  039e1a0  stfs 3, 232(1)
  039e1a4  stfs 3, 236(1)
  039e1a8  stfs 3, 228(1)
  039e1ac  lfs 6, 240(1)
  039e1b0  lfs 7, 232(1)
  039e1b4  lfs 8, 236(1)
  039e1b8  fmuls 5, 4, 4
  039e1bc  fmuls 7, 7, 4
  039e1c0  fmuls 6, 6, 5
  039e1c4  fmuls 3, 5, 5
  039e1c8  fmuls 5, 8, 5
  039e1cc  stfs 7, 232(1)
  039e1d0  fmuls 4, 6, 4
  039e1d4  stfs 5, 236(1)
  039e1d8  stfs 4, 240(1)
  039e1dc  lfs 4, 212(4)
  039e1e0  fmuls 4, 4, 3
  039e1e4  stfs 4, 228(4)
  039e1e8  lfs 4, 4(5)
  039e1ec  addic 4, 4, 8
  039e1f0  addic 5, 5, 8
  039e1f4  fmuls 4, 4, 3
  039e1f8  stfs 4, 4(6)
  039e1fc  addic 6, 6, 8
  039e200  bdnz 0x39e1dc
  039e204  li 6, 4
  039e208  ori 4, 1, 0
  039e20c  mtctr 6
  039e210  lis 5, 115
  039e214  addic 6, 4, 228
  039e218  addic 5, 5, 22752
  039e21c  ori 8, 6, 0
  039e220  lfs 3, 228(4)
  039e224  lfs 4, 0(5)
  039e228  fmuls 3, 3, 4
  039e22c  lfs 4, 4(5)
  039e230  addic 5, 5, 8
  039e234  stfs 3, 228(4)
  039e238  lfs 3, 4(6)
  039e23c  addic 4, 4, 8
  039e240  fmuls 3, 3, 4
  039e244  stfs 3, 4(6)
  039e248  addic 6, 6, 8
  039e24c  bdnz 0x39e220
  039e250  fmr 3, 27
  039e254  ori 4, 1, 0
  039e258  mtctr 7
  039e25c  lfs 4, 228(4)
  039e260  fadds 3, 3, 4
  039e264  addic 4, 4, 16
  039e268  lfs 4, 4(8)
  039e26c  lfs 5, 8(8)
  039e270  lfs 6, 12(8)
  039e274  addic 8, 8, 16
  039e278  fadds 3, 3, 4
  039e27c  fadds 3, 3, 5
  039e280  fadds 3, 3, 6
  039e284  bdnz 0x39e25c
  039e288  lis 4, 58
  039e28c  addi 4, 4, -9304
  039e290  lfs 4, 20(4)
  039e294  fadds 3, 3, 4
  039e298  fmadds 1, 3, 1, 2
  039e29c  lis 4, 58
  039e2a0  lis 6, 114
  039e2a4  addi 29, 4, -9304
  039e2a8  lis 4, 114
  039e2ac  addic 5, 30, 308
  039e2b0  lfs 4, 24(29)
  039e2b4  lfs 3, -3048(4)
  039e2b8  lfs 5, -3052(6)
  039e2bc  fmuls 2, 3, 4
  039e2c0  fmuls 4, 5, 4
  039e2c4  fmr 3, 2
  039e2c8  bl 0x10a2e0
  039e2cc  nop
  039e2d0  ori 3, 31, 0
  039e2d4  lfs 1, 28(29)
  039e2d8  bl 0x113e88
  039e2dc  nop
  039e2e0  cmpwi 3, 0
  039e2e4  bt 2, 0x39e43c
  039e2e8  lis 3, 132
  039e2ec  lbz 5, 302(30)
  039e2f0  addic 4, 3, 12336
  039e2f4  addic 5, 5, 1
  039e2f8  stb 5, 302(30)
  039e2fc  lfs 1, 4(4)
  039e300  lfs 2, 12336(3)
  039e304  lfs 3, 220(31)
  039e308  lfs 4, 212(31)
  039e30c  fmuls 3, 3, 1
  039e310  fmuls 4, 4, 1
  039e314  lfs 5, 204(31)
  039e318  lfs 6, 8(4)
  039e31c  lfs 7, 208(31)
  039e320  lfs 8, 196(31)
  039e324  fmuls 7, 7, 1
  039e328  lfs 9, 192(31)
  039e32c  lfs 10, 236(31)
  039e330  fmadds 3, 5, 2, 3
  039e334  fmadds 4, 8, 2, 4
  039e338  lfs 5, 228(31)
  039e33c  lfs 8, 216(31)
  039e340  fmuls 1, 8, 1
  039e344  fmadds 7, 9, 2, 7
  039e348  lfs 9, 224(31)
  039e34c  lfs 11, 12(4)
  039e350  lfs 8, 200(31)
  039e354  fmadds 3, 10, 6, 3
  039e358  fmadds 4, 5, 6, 4
  039e35c  lfs 5, 232(31)
  039e360  fmadds 1, 8, 2, 1
  039e364  fmadds 7, 9, 6, 7
  039e368  fadds 2, 3, 11
  039e36c  lis 3, 132
  039e370  lis 4, 114
  039e374  fmadds 1, 5, 6, 1
  039e378  stfs 2, 140(1)
  039e37c  lfs 2, 20(31)
  039e380  lfs 3, 16(31)
  039e384  fadds 2, 4, 2
  039e388  lfs 4, 24(31)
  039e38c  fadds 3, 7, 3
  039e390  fadds 1, 1, 4
  039e394  lfs 8, 12352(3)
  039e398  lfs 9, -3052(4)
  039e39c  fsubs 4, 30, 2
  039e3a0  fsubs 5, 31, 3
  039e3a4  fsubs 6, 29, 1
  039e3a8  stfs 3, 128(1)
  039e3ac  stfs 2, 132(1)
  039e3b0  stfs 1, 136(1)
  039e3b4  fmuls 7, 4, 4
  039e3b8  fmuls 1, 8, 9
  039e3bc  addic 4, 1, 144
  039e3c0  stfs 5, 144(1)
  039e3c4  stfs 4, 148(1)
  039e3c8  fmadds 7, 5, 5, 7
  039e3cc  stfs 6, 152(1)
  039e3d0  stfs 28, 156(1)
  039e3d4  addic 5, 1, 128
  039e3d8  ori 3, 31, 0
  039e3dc  fmadds 7, 6, 6, 7
  039e3e0  fsqrts 7, 7
  039e3e4  fdivs 1, 1, 7
  039e3e8  fsub 2, 27, 7
  039e3ec  fsub 3, 27, 7
  039e3f0  fsub 8, 27, 7
  039e3f4  fsub 9, 7, 27
  039e3f8  fsub 10, 7, 27
  039e3fc  fsub 7, 7, 27
  039e400  fmuls 5, 5, 1
  039e404  fmuls 4, 4, 1
  039e408  fmuls 1, 6, 1
  039e40c  fsel 2, 2, 27, 5
  039e410  fsel 3, 3, 27, 4
  039e414  fsel 6, 8, 27, 1
  039e418  fsel 2, 9, 2, 5
  039e41c  fsel 3, 10, 3, 4
  039e420  fsel 1, 7, 6, 1
  039e424  stfs 2, 144(1)
  039e428  stfs 3, 148(1)
  039e42c  stfs 1, 152(1)
  039e430  bl 0x3a01e0
  039e434  nop
  039e438  b 0x39e8c4
  039e43c  lbz 3, 302(30)
  039e440  cmpwi 3, 3
  039e444  bt 0, 0x39e8c4
  039e448  lbz 3, 112(31)
  039e44c  rlwinm 3, 3, 0, 30, 30
  039e450  cmpwi 3, 0
  039e454  bt 2, 0x39e8c4
  039e458  li 3, 5
  039e45c  lbz 4, 83(31)
  039e460  cmpwi 4, 6
  039e464  stb 3, 32(31)
  039e468  bt 2, 0x39e8c4
  039e46c  lis 3, 58
  039e470  lis 4, 114
  039e474  addi 3, 3, -9304
  039e478  li 5, 0
  039e47c  lfs 1, 12(3)
  039e480  lfs 2, -3056(4)
  039e484  ori 3, 31, 0
  039e488  li 4, 6
  039e48c  fmuls 1, 2, 1
  039e490  fctiwz 1, 1
  039e494  stfd 1, 296(1)
  039e498  lwz 6, 300(1)
  039e49c  extsw 6, 6
  039e4a0  bl 0xfddc0
  039e4a4  nop
  039e4a8  b 0x39e8c4
  039e4ac  fsubs 1, 31, 1
  039e4b0  fsubs 2, 30, 2
  039e4b4  lis 3, 58
  039e4b8  addi 4, 3, -9304
  039e4bc  lis 5, 115
  039e4c0  addic 3, 31, 72
  039e4c4  addic 5, 5, 22784
  039e4c8  fabs 3, 1
  039e4cc  fabs 4, 2
  039e4d0  stfs 1, 160(1)
  039e4d4  stfs 2, 164(1)
  039e4d8  fsubs 1, 3, 4
  039e4dc  stfs 1, 168(1)
  039e4e0  lwz 6, 160(1)
  039e4e4  lfs 2, 16(4)
  039e4e8  lfs 1, 160(1)
  039e4ec  lwz 4, 164(1)
  039e4f0  lfs 5, 164(1)
  039e4f4  fabs 1, 1
  039e4f8  lwz 7, 168(1)
  039e4fc  rlwinm 4, 4, 3, 29, 29
  039e500  lfs 6, 168(1)
  039e504  fabs 5, 5
  039e508  rlwimi 4, 7, 2, 30, 30
  039e50c  fsub 7, 6, 2
  039e510  rlwimi 4, 6, 4, 28, 28
  039e514  fsub 6, 6, 2
  039e518  ori 6, 5, 0
  039e51c  rlwimi 6, 4, 2, 26, 28
  039e520  slwi 4, 4, 2
  039e524  clrldi 6, 6, 32
  039e528  fsel 4, 7, 1, 4
  039e52c  lfsx 31, 5, 4
  039e530  lfs 1, 4(6)
  039e534  fsel 3, 6, 5, 3
  039e538  fcmpu 0, 4, 2
  039e53c  bt 1, 0x39e544
  039e540  b 0x39e664
  039e544  fsubs 5, 3, 4
  039e548  fadds 3, 3, 4
  039e54c  addic 4, 1, 16
  039e550  li 8, 2
  039e554  addic 6, 4, 196
  039e558  addic 5, 4, 180
  039e55c  mtctr 8
  039e560  fdivs 3, 5, 3
  039e564  fmuls 4, 3, 3
  039e568  stfs 3, 208(1)
  039e56c  stfs 3, 200(1)
  039e570  stfs 3, 204(1)
  039e574  stfs 3, 196(1)
  039e578  lfs 6, 208(1)
  039e57c  lfs 7, 200(1)
  039e580  lfs 8, 204(1)
  039e584  fmuls 5, 4, 4
  039e588  fmuls 7, 7, 4
  039e58c  fmuls 6, 6, 5
  039e590  fmuls 3, 5, 5
  039e594  fmuls 5, 8, 5
  039e598  stfs 7, 200(1)
  039e59c  fmuls 4, 6, 4
  039e5a0  stfs 5, 204(1)
  039e5a4  stfs 4, 208(1)
  039e5a8  lfs 4, 180(4)
  039e5ac  fmuls 4, 4, 3
  039e5b0  stfs 4, 196(4)
  039e5b4  lfs 4, 4(5)
  039e5b8  addic 5, 5, 8
  039e5bc  fmuls 4, 4, 3
  039e5c0  addic 4, 4, 8
  039e5c4  stfs 4, 4(6)
  039e5c8  addic 6, 6, 8
  039e5cc  bdnz 0x39e5a8
  039e5d0  li 6, 4
  039e5d4  ori 4, 1, 0
  039e5d8  mtctr 6
  039e5dc  lis 5, 115
  039e5e0  addic 6, 4, 196
  039e5e4  addic 5, 5, 22752
  039e5e8  ori 7, 6, 0
  039e5ec  lfs 3, 196(4)
  039e5f0  lfs 4, 0(5)
  039e5f4  fmuls 3, 3, 4
  039e5f8  lfs 4, 4(5)
  039e5fc  addic 5, 5, 8
  039e600  stfs 3, 196(4)
  039e604  lfs 3, 4(6)
  039e608  addic 4, 4, 8
  039e60c  fmuls 3, 3, 4
  039e610  stfs 3, 4(6)
  039e614  addic 6, 6, 8
  039e618  bdnz 0x39e5ec
  039e61c  ori 4, 1, 0
  039e620  mtctr 8
  039e624  lfs 3, 196(4)
  039e628  fadds 2, 2, 3
  039e62c  addic 4, 4, 16
  039e630  lfs 3, 4(7)
  039e634  lfs 4, 8(7)
  039e638  lfs 5, 12(7)
  039e63c  addic 7, 7, 16
  039e640  fadds 2, 2, 3
  039e644  fadds 2, 2, 4
  039e648  fadds 2, 2, 5
  039e64c  bdnz 0x39e624
  039e650  lis 4, 58
  039e654  addi 4, 4, -9304
  039e658  lfs 3, 20(4)
  039e65c  fadds 2, 2, 3
  039e660  fmadds 2, 2, 31, 1
  039e664  lis 4, 58
  039e668  lis 5, 114
  039e66c  fmr 1, 2
  039e670  addi 4, 4, -9304
  039e674  lfs 4, 24(4)
  039e678  lfs 3, -3048(5)
  039e67c  lis 4, 114
  039e680  addic 5, 30, 308
  039e684  fmuls 3, 3, 4
  039e688  lfs 2, -3052(4)
  039e68c  fmuls 4, 2, 4
  039e690  fmr 2, 3
  039e694  bl 0x10a2e0
  039e698  nop
  039e69c  lbz 3, 112(31)
  039e6a0  rlwinm 3, 3, 0, 30, 30
  039e6a4  cmpwi 3, 0
  039e6a8  bt 2, 0x39e8c4
  039e6ac  li 3, 6
  039e6b0  lbz 4, 83(31)
  039e6b4  cmpwi 4, 2
  039e6b8  stb 3, 32(31)
  039e6bc  bt 2, 0x39e6fc
  039e6c0  lis 3, 58
  039e6c4  lis 4, 114
  039e6c8  addi 3, 3, -9304
  039e6cc  li 5, 0
  039e6d0  lfs 1, 12(3)
  039e6d4  lfs 2, -3056(4)
  039e6d8  ori 3, 31, 0
  039e6dc  fmuls 1, 2, 1
  039e6e0  li 4, 2
  039e6e4  fctiwz 1, 1
  039e6e8  stfd 1, 296(1)
  039e6ec  lwz 6, 300(1)
  039e6f0  extsw 6, 6
  039e6f4  bl 0xfddc0
  039e6f8  nop
  039e6fc  lhz 4, 300(30)
  039e700  lis 3, 58
  039e704  addic 4, 4, 1
  039e708  addi 3, 3, -9304
  039e70c  clrlwi 4, 4, 31
  039e710  sth 4, 300(30)
  039e714  lfs 1, 32(3)
  039e718  lfs 2, 36(3)
  039e71c  bl 0xfcbe8
  039e720  nop
  039e724  lis 3, 114
  039e728  lfs 2, -3056(3)
  039e72c  fmuls 1, 1, 2
  039e730  bl 0x502758
  039e734  nop
  039e738  stw 3, 312(30)
  039e73c  b 0x39e8c4
  039e740  lis 3, 165
  039e744  addic 4, 3, 7136
  039e748  lwz 3, 288(30)
  039e74c  lhz 5, 300(30)
  039e750  slwi 3, 3, 2
  039e754  extsh 5, 5
  039e758  extsw 6, 3
  039e75c  sldi 7, 5, 4
  039e760  lbz 5, 303(30)
  039e764  ori 3, 31, 0
  039e768  lwzx 4, 4, 6
  039e76c  addc 4, 4, 7
  039e770  addic 4, 4, 16
  039e774  clrldi 4, 4, 32
  039e778  bl 0x39cdf0
  039e77c  addic 3, 30, 312
  039e780  fmr 31, 1
  039e784  bl 0x4fff60
  039e788  nop
  039e78c  lis 3, 58
  039e790  addi 4, 3, -9304
  039e794  lbz 3, 83(31)
  039e798  lfs 1, 8(4)
  039e79c  fcmpu 0, 31, 1
  039e7a0  bt 0, 0x39e7b0
  039e7a4  lwz 4, 312(30)
  039e7a8  cmpwi 4, 0
  039e7ac  bf 2, 0x39e8c4
  039e7b0  li 4, 2
  039e7b4  cmpwi 3, 0
  039e7b8  stb 4, 32(31)
  039e7bc  bt 2, 0x39e8c4
  039e7c0  lis 3, 58
  039e7c4  lis 4, 114
  039e7c8  addi 3, 3, -9304
  039e7cc  li 5, 0
  039e7d0  lfs 1, 12(3)
  039e7d4  lfs 2, -3056(4)
  039e7d8  ori 3, 31, 0
  039e7dc  li 4, 0
  039e7e0  fmuls 1, 2, 1
  039e7e4  fctiwz 1, 1
  039e7e8  stfd 1, 296(1)
  039e7ec  lwz 6, 300(1)
  039e7f0  extsw 6, 6
  039e7f4  bl 0xfddc0
  039e7f8  nop
  039e7fc  b 0x39e8c4
  039e800  ori 3, 31, 0
  039e804  addic 4, 30, 112
  039e808  bl 0x10b030
  039e80c  nop
  039e810  ori 30, 3, 0
  039e814  rlwinm 3, 30, 0, 25, 25
  039e818  cmpwi 3, 0
  039e81c  bt 2, 0x39e874
  039e820  li 3, 2
  039e824  lbz 4, 83(31)
  039e828  cmpwi 4, 0
  039e82c  stb 3, 32(31)
  039e830  bt 2, 0x39e8c4
  039e834  lis 3, 58
  039e838  lis 4, 114
  039e83c  addi 3, 3, -9304
  039e840  li 5, 0
  039e844  lfs 1, 12(3)
  039e848  lfs 2, -3056(4)
  039e84c  ori 3, 31, 0
  039e850  fmuls 1, 2, 1
  039e854  li 4, 0
  039e858  fctiwz 1, 1
  039e85c  stfd 1, 296(1)
  039e860  lwz 6, 300(1)
  039e864  extsw 6, 6
  039e868  bl 0xfddc0
  039e86c  nop
  039e870  b 0x39e8c4
  039e874  li 3, 288
  039e878  and 3, 30, 3
  039e87c  cmpwi 3, 0
  039e880  bt 2, 0x39e8c4
  039e884  ori 3, 31, 0
  039e888  bl 0xefb38
  039e88c  nop
  039e890  b 0x39e8c4
  039e894  addic 4, 30, 112
  039e898  ori 3, 31, 0
  039e89c  bl 0x10b030
  039e8a0  nop
  039e8a4  li 4, 352
  039e8a8  and 3, 3, 4
  039e8ac  cmpwi 3, 0
  039e8b0  bt 2, 0x39e8c4
  039e8b4  ori 3, 31, 0
  039e8b8  bl 0xefb38
  039e8bc  nop
  039e8c0  b 0x39e8c4
  039e8c4  ld 0, 400(1)
  039e8c8  mtlr 0
  039e8cc  lfd 27, 344(1)
  039e8d0  lfd 28, 352(1)
  039e8d4  lfd 29, 360(1)
  039e8d8  lfd 30, 368(1)
  039e8dc  lfd 31, 376(1)
  039e8e0  ld 29, 320(1)
  039e8e4  ld 30, 328(1)
  039e8e8  ld 31, 336(1)
  039e8ec  addi 1, 1, 384
  039e8f0  blr
