# game/update/moby258.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M258_0031d370:   # 0x31d370, 0x14 bytes
  031d370  lis 3, 128
  031d374  lis 4, 1
  031d378  addic 3, 3, -252
  031d37c  stw 4, 72(3)
  031d380  blr

M258_0031d388:   # 0x31d388, 0x258 bytes
  031d388  lis 6, 164
  031d38c  sldi 3, 3, 8
  031d390  lwz 6, -28512(6)
  031d394  addc 3, 6, 3
  031d398  clrldi 3, 3, 32
  031d39c  cmpwi 3, 0
  031d3a0  bt 2, 0x31d5dc
  031d3a4  clrlwi 5, 5, 24
  031d3a8  cmpwi 5, 0
  031d3ac  bt 2, 0x31d4b4
  031d3b0  lbz 5, 124(4)
  031d3b4  extsb 5, 5
  031d3b8  cmpwi 1, 5, 0
  031d3bc  bf 5, 0x31d3d4
  031d3c0  li 5, 0
  031d3c4  lhz 6, 52(3)
  031d3c8  rlwimi 6, 5, 0, 30, 30
  031d3cc  sth 6, 52(3)
  031d3d0  b 0x31d3e4
  031d3d4  bf 4, 0x31d3e4
  031d3d8  lhz 5, 52(3)
  031d3dc  ori 5, 5, 2
  031d3e0  sth 5, 52(3)
  031d3e4  lbz 6, 125(4)
  031d3e8  extsb 6, 6
  031d3ec  cmpwi 6, 0
  031d3f0  bf 1, 0x31d430
  031d3f4  lhz 5, 166(3)
  031d3f8  cmpwi 1, 5, 942
  031d3fc  cmpwi 5, 902
  031d400  cror 2, 2, 6
  031d404  bt 2, 0x31d430
  031d408  cmpwi 5, 1263
  031d40c  bt 2, 0x31d430
  031d410  cmpwi 5, 1393
  031d414  bt 2, 0x31d430
  031d418  li 5, 1
  031d41c  lhz 6, 52(3)
  031d420  stb 5, 49(3)
  031d424  rlwinm 5, 6, 0, 0, 30
  031d428  sth 5, 52(3)
  031d42c  b 0x31d470
  031d430  cmpwi 6, 0
  031d434  bf 0, 0x31d470
  031d438  lhz 5, 166(3)
  031d43c  cmpwi 1, 5, 942
  031d440  cmpwi 5, 902
  031d444  cror 2, 2, 6
  031d448  bt 2, 0x31d470
  031d44c  cmpwi 5, 1263
  031d450  bt 2, 0x31d470
  031d454  cmpwi 5, 1393
  031d458  bt 2, 0x31d470
  031d45c  lhz 6, 52(3)
  031d460  li 5, 0
  031d464  ori 6, 6, 1
  031d468  stb 5, 49(3)
  031d46c  sth 6, 52(3)
  031d470  lbz 4, 127(4)
  031d474  extsb 4, 4
  031d478  cmpwi 1, 4, 0
  031d47c  bf 5, 0x31d498
  031d480  lwz 4, 36(3)
  031d484  cmpwi 4, 0
  031d488  bt 2, 0x31d498
  031d48c  lwz 4, 16(4)
  031d490  stw 4, 148(3)
  031d494  b 0x31d5dc
  031d498  bf 4, 0x31d5dc
  031d49c  lwz 4, 36(3)
  031d4a0  cmpwi 4, 0
  031d4a4  bt 2, 0x31d5dc
  031d4a8  li 4, 0
  031d4ac  stw 4, 148(3)
  031d4b0  b 0x31d5dc
  031d4b4  lbz 6, 124(4)
  031d4b8  extsb 6, 6
  031d4bc  cmpwi 6, 0
  031d4c0  bf 1, 0x31d4f0
  031d4c4  lhz 5, 166(3)
  031d4c8  cmpwi 1, 5, 942
  031d4cc  cmpwi 5, 902
  031d4d0  cror 2, 2, 6
  031d4d4  bt 2, 0x31d4f0
  031d4d8  cmpwi 5, 1263
  031d4dc  bt 2, 0x31d4f0
  031d4e0  lhz 5, 52(3)
  031d4e4  ori 5, 5, 2
  031d4e8  sth 5, 52(3)
  031d4ec  b 0x31d524
  031d4f0  cmpwi 6, 0
  031d4f4  bf 0, 0x31d524
  031d4f8  lhz 5, 166(3)
  031d4fc  cmpwi 1, 5, 942
  031d500  cmpwi 5, 902
  031d504  cror 2, 2, 6
  031d508  bt 2, 0x31d524
  031d50c  cmpwi 5, 1263
  031d510  bt 2, 0x31d524
  031d514  li 5, 0
  031d518  lhz 6, 52(3)
  031d51c  rlwimi 6, 5, 0, 30, 30
  031d520  sth 6, 52(3)
  031d524  lbz 6, 125(4)
  031d528  extsb 6, 6
  031d52c  cmpwi 6, 0
  031d530  bf 1, 0x31d570
  031d534  lhz 5, 166(3)
  031d538  cmpwi 1, 5, 942
  031d53c  cmpwi 5, 902
  031d540  cror 2, 2, 6
  031d544  bt 2, 0x31d570
  031d548  cmpwi 5, 1263
  031d54c  bt 2, 0x31d570
  031d550  cmpwi 5, 1393
  031d554  bt 2, 0x31d570
  031d558  li 5, 0
  031d55c  lhz 6, 52(3)
  031d560  stb 5, 49(3)
  031d564  ori 5, 6, 1
  031d568  sth 5, 52(3)
  031d56c  b 0x31d5b0
  031d570  cmpwi 6, 0
  031d574  bf 0, 0x31d5b0
  031d578  lhz 5, 166(3)
  031d57c  cmpwi 1, 5, 942
  031d580  cmpwi 5, 902
  031d584  cror 2, 2, 6
  031d588  bt 2, 0x31d5b0
  031d58c  cmpwi 5, 1263
  031d590  bt 2, 0x31d5b0
  031d594  cmpwi 5, 1393
  031d598  bt 2, 0x31d5b0
  031d59c  lhz 6, 52(3)
  031d5a0  li 5, 1
  031d5a4  rlwinm 6, 6, 0, 0, 30
  031d5a8  stb 5, 49(3)
  031d5ac  sth 6, 52(3)
  031d5b0  lbz 4, 127(4)
  031d5b4  extsb 4, 4
  031d5b8  cmpwi 1, 4, 0
  031d5bc  bf 5, 0x31d5cc
  031d5c0  li 4, 0
  031d5c4  stw 4, 148(3)
  031d5c8  b 0x31d5dc
  031d5cc  bf 4, 0x31d5dc
  031d5d0  lwz 4, 36(3)
  031d5d4  lwz 4, 16(4)
  031d5d8  stw 4, 148(3)
  031d5dc  blr

M258_0031d5e0:   # 0x31d5e0, 0x80 bytes
  031d5e0  stdu 1, -144(1)
  031d5e4  mflr 0
  031d5e8  std 0, 160(1)
  031d5ec  lis 3, 165
  031d5f0  sldi 5, 5, 2
  031d5f4  addic 3, 3, -28284
  031d5f8  std 31, 136(1)
  031d5fc  std 29, 120(1)
  031d600  extsw 5, 5
  031d604  ori 31, 4, 0
  031d608  std 30, 128(1)
  031d60c  clrlwi 29, 6, 24
  031d610  lwzx 30, 3, 5
  031d614  cmpwi 30, 0
  031d618  bt 2, 0x31d644
  031d61c  lhz 3, 0(30)
  031d620  ori 4, 31, 0
  031d624  ori 5, 29, 0
  031d628  clrlwi 3, 3, 17
  031d62c  bl 0x31d388
  031d630  lhz 3, 0(30)
  031d634  addic 30, 30, 2
  031d638  extsh 3, 3
  031d63c  cmpwi 3, 0
  031d640  bf 0, 0x31d61c
  031d644  ld 0, 160(1)
  031d648  mtlr 0
  031d64c  ld 29, 120(1)
  031d650  ld 30, 128(1)
  031d654  ld 31, 136(1)
  031d658  addi 1, 1, 144
  031d65c  blr

UpdateMoby_258:   # 0x31d660, 0x264 bytes
  031d660  stdu 1, -192(1)
  031d664  mflr 0
  031d668  std 0, 208(1)
  031d66c  std 30, 176(1)
  031d670  std 28, 160(1)
  031d674  li 4, 255
  031d678  lwz 30, 120(3)
  031d67c  std 31, 184(1)
  031d680  ori 28, 3, 0
  031d684  li 31, 0
  031d688  stb 4, 48(3)
  031d68c  std 29, 168(1)
  031d690  lfs 7, 16(3)
  031d694  ori 29, 31, 0
  031d698  lfs 5, 20(3)
  031d69c  lfs 3, 24(3)
  031d6a0  lbz 3, 126(30)
  031d6a4  std 27, 152(1)
  031d6a8  std 26, 144(1)
  031d6ac  std 25, 136(1)
  031d6b0  cmpwi 3, 0
  031d6b4  bt 2, 0x31d6e0
  031d6b8  lis 3, 149
  031d6bc  addic 3, 3, 5056
  031d6c0  lfs 6, 320(3)
  031d6c4  lfs 4, 324(3)
  031d6c8  stfs 6, 112(1)
  031d6cc  lfs 2, 328(3)
  031d6d0  stfs 4, 116(1)
  031d6d4  lfs 1, 332(3)
  031d6d8  stfs 2, 120(1)
  031d6dc  b 0x31d704
  031d6e0  lis 3, 151
  031d6e4  addic 3, 3, -25376
  031d6e8  lfs 6, 128(3)
  031d6ec  lfs 4, 132(3)
  031d6f0  stfs 6, 112(1)
  031d6f4  lfs 2, 136(3)
  031d6f8  stfs 4, 116(1)
  031d6fc  lfs 1, 140(3)
  031d700  stfs 2, 120(1)
  031d704  stfs 1, 124(1)
  031d708  lwz 3, 4(30)
  031d70c  lfs 1, 4(30)
  031d710  cmpwi 3, 0
  031d714  bf 1, 0x31d73c
  031d718  fsubs 4, 5, 4
  031d71c  fsubs 2, 3, 2
  031d720  fsubs 5, 7, 6
  031d724  fmuls 3, 4, 4
  031d728  fmadds 3, 5, 5, 3
  031d72c  fmadds 2, 2, 2, 3
  031d730  fsqrts 2, 2
  031d734  fcmpu 0, 2, 1
  031d738  bt 0, 0x31d7c8
  031d73c  lwz 3, 0(30)
  031d740  cmpwi 3, -1
  031d744  bt 2, 0x31d77c
  031d748  lis 4, 165
  031d74c  slwi 3, 3, 2
  031d750  addic 4, 4, 7136
  031d754  extsw 3, 3
  031d758  lwzx 6, 4, 3
  031d75c  addic 3, 1, 112
  031d760  addic 4, 6, 16
  031d764  lwz 5, 0(6)
  031d768  extsw 5, 5
  031d76c  bl 0x104e44
  031d770  nop
  031d774  cmpwi 3, 0
  031d778  bf 2, 0x31d7c8
  031d77c  ori 26, 31, 0
  031d780  ori 27, 30, 0
  031d784  lwz 3, 8(27)
  031d788  cmpwi 3, -1
  031d78c  bt 2, 0x31d7a8
  031d790  extsw 4, 3
  031d794  addic 3, 1, 112
  031d798  bl 0x110b70
  031d79c  nop
  031d7a0  cmpwi 3, 0
  031d7a4  bf 2, 0x31d7c8
  031d7a8  addic 26, 26, 1
  031d7ac  addic 27, 27, 4
  031d7b0  cmpwi 26, 6
  031d7b4  bt 0, 0x31d784
  031d7b8  lbz 3, 188(28)
  031d7bc  cmpwi 3, 0
  031d7c0  bf 2, 0x31d7e4
  031d7c4  b 0x31d7d8
  031d7c8  lbz 3, 188(28)
  031d7cc  li 31, 1
  031d7d0  cmpwi 3, 0
  031d7d4  bt 2, 0x31d7e4
  031d7d8  lbz 3, 32(28)
  031d7dc  cmpwi 3, 0
  031d7e0  bf 2, 0x31d898
  031d7e4  cntlzw 3, 31
  031d7e8  lis 4, 165
  031d7ec  rlwinm 3, 3, 27, 31, 31
  031d7f0  ori 27, 30, 0
  031d7f4  xori 3, 3, 1
  031d7f8  ori 26, 29, 0
  031d7fc  addic 5, 3, 1
  031d800  stb 3, 188(28)
  031d804  stb 5, 32(28)
  031d808  addic 28, 4, -28284
  031d80c  lwz 25, 32(27)
  031d810  cmpwi 25, -1
  031d814  bt 2, 0x31d854
  031d818  slwi 3, 25, 2
  031d81c  extsw 3, 3
  031d820  lwzx 25, 28, 3
  031d824  cmpwi 25, 0
  031d828  bt 2, 0x31d854
  031d82c  lhz 3, 0(25)
  031d830  ori 4, 30, 0
  031d834  ori 5, 31, 0
  031d838  clrlwi 3, 3, 17
  031d83c  bl 0x31d388
  031d840  lhz 3, 0(25)
  031d844  addic 25, 25, 2
  031d848  extsh 3, 3
  031d84c  cmpwi 3, 0
  031d850  bf 0, 0x31d82c
  031d854  addic 26, 26, 1
  031d858  addic 27, 27, 4
  031d85c  cmpwi 26, 12
  031d860  bt 0, 0x31d80c
  031d864  ori 28, 29, 0
  031d868  ori 29, 30, 0
  031d86c  lwz 3, 80(29)
  031d870  cmpwi 3, -1
  031d874  bt 2, 0x31d888
  031d878  extsw 3, 3
  031d87c  ori 4, 30, 0
  031d880  ori 5, 31, 0
  031d884  bl 0x31d388
  031d888  addic 28, 28, 1
  031d88c  addic 29, 29, 4
  031d890  cmpwi 28, 11
  031d894  bt 0, 0x31d86c
  031d898  ld 0, 208(1)
  031d89c  mtlr 0
  031d8a0  ld 25, 136(1)
  031d8a4  ld 26, 144(1)
  031d8a8  ld 27, 152(1)
  031d8ac  ld 28, 160(1)
  031d8b0  ld 29, 168(1)
  031d8b4  ld 30, 176(1)
  031d8b8  ld 31, 184(1)
  031d8bc  addi 1, 1, 192
  031d8c0  blr
