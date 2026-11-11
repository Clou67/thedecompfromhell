# game/update/moby113.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0024d2e4:   # 0x24d2e4, 0xf8 bytes
  024d2e4  stdu 1, -64(1)
  024d2e8  lis 8, 250
  024d2ec  li 9, 0
  024d2f0  addic 8, 8, 12172
  024d2f4  std 31, 56(1)
  024d2f8  ori 7, 9, 0
  024d2fc  ori 6, 8, 0
  024d300  lwz 10, 0(8)
  024d304  cmpw 10, 3
  024d308  bf 2, 0x24d314
  024d30c  li 3, 1
  024d310  b 0x24d3d0
  024d314  addic 9, 9, 1
  024d318  addic 8, 8, 4
  024d31c  cmpwi 9, 3
  024d320  bt 0, 0x24d300
  024d324  ori 9, 7, 0
  024d328  ori 8, 6, 0
  024d32c  lwz 10, 0(8)
  024d330  cmpwi 10, 0
  024d334  bf 2, 0x24d3bc
  024d338  slwi 8, 9, 2
  024d33c  lis 10, 250
  024d340  lis 9, 250
  024d344  extsw 8, 8
  024d348  addic 10, 10, 12076
  024d34c  addic 9, 9, 12100
  024d350  lis 11, 250
  024d354  lis 12, 250
  024d358  stwx 3, 6, 8
  024d35c  addic 3, 11, 12088
  024d360  stwx 7, 10, 8
  024d364  lis 6, 250
  024d368  stwx 7, 9, 8
  024d36c  li 10, -1
  024d370  addic 9, 12, 12112
  024d374  addic 6, 6, 12124
  024d378  stwx 7, 3, 8
  024d37c  lis 11, 250
  024d380  lis 3, 250
  024d384  lis 12, 250
  024d388  stwx 10, 9, 8
  024d38c  addic 31, 3, 12136
  024d390  lis 9, 250
  024d394  stwx 10, 6, 8
  024d398  addic 6, 11, 12148
  024d39c  addic 9, 9, 12160
  024d3a0  addic 10, 12, 12064
  024d3a4  li 3, 1
  024d3a8  stwx 4, 31, 8
  024d3ac  stwx 5, 6, 8
  024d3b0  stwx 7, 9, 8
  024d3b4  stwx 3, 10, 8
  024d3b8  b 0x24d3d0
  024d3bc  addic 9, 9, 1
  024d3c0  addic 8, 8, 4
  024d3c4  cmpwi 9, 3
  024d3c8  bt 0, 0x24d32c
  024d3cc  ori 3, 7, 0
  024d3d0  ld 31, 56(1)
  024d3d4  addi 1, 1, 64
  024d3d8  blr

M1338_0024d3dc:   # 0x24d3dc, 0x60 bytes
  024d3dc  li 4, 0
  024d3e0  lis 5, 250
  024d3e4  ori 6, 4, 0
  024d3e8  addic 5, 5, 12172
  024d3ec  lwz 7, 0(5)
  024d3f0  cmpw 7, 3
  024d3f4  bf 2, 0x24d424
  024d3f8  lis 3, 250
  024d3fc  slwi 4, 4, 2
  024d400  addic 3, 3, 12064
  024d404  extsw 4, 4
  024d408  lwzx 5, 3, 4
  024d40c  cmpwi 5, 1
  024d410  bf 2, 0x24d41c
  024d414  li 5, 2
  024d418  stwx 5, 3, 4
  024d41c  li 3, 1
  024d420  b 0x24d438
  024d424  addic 4, 4, 1
  024d428  addic 5, 5, 4
  024d42c  cmpwi 4, 3
  024d430  bt 0, 0x24d3ec
  024d434  ori 3, 6, 0
  024d438  blr

FUN_0024d43c:   # 0x24d43c, 0xd0 bytes
  024d43c  stdu 1, -128(1)
  024d440  mflr 0
  024d444  std 0, 144(1)
  024d448  std 30, 112(1)
  024d44c  std 31, 120(1)
  024d450  lis 30, 250
  024d454  li 31, 0
  024d458  addic 30, 30, 12172
  024d45c  ori 4, 31, 0
  024d460  ori 5, 30, 0
  024d464  lwz 6, 0(5)
  024d468  cmpw 6, 3
  024d46c  bf 2, 0x24d4e0
  024d470  slwi 31, 31, 2
  024d474  lis 3, 250
  024d478  extsw 31, 31
  024d47c  lis 5, 250
  024d480  addic 3, 3, 12064
  024d484  stwx 4, 30, 31
  024d488  addic 30, 5, 12112
  024d48c  stwx 4, 3, 31
  024d490  lwzx 3, 30, 31
  024d494  cmpwi 3, -1
  024d498  bt 2, 0x24d4b0
  024d49c  extsw 3, 3
  024d4a0  bl 0xda9e8
  024d4a4  nop
  024d4a8  li 3, -1
  024d4ac  stwx 3, 30, 31
  024d4b0  lis 30, 250
  024d4b4  addic 30, 30, 12124
  024d4b8  lwzx 3, 30, 31
  024d4bc  cmpwi 3, -1
  024d4c0  bt 2, 0x24d4d8
  024d4c4  extsw 3, 3
  024d4c8  bl 0xda9e8
  024d4cc  nop
  024d4d0  li 3, -1
  024d4d4  stwx 3, 30, 31
  024d4d8  li 3, 1
  024d4dc  b 0x24d4f4
  024d4e0  addic 31, 31, 1
  024d4e4  addic 5, 5, 4
  024d4e8  cmpwi 31, 3
  024d4ec  bt 0, 0x24d464
  024d4f0  ori 3, 4, 0
  024d4f4  ld 0, 144(1)
  024d4f8  mtlr 0
  024d4fc  ld 30, 112(1)
  024d500  ld 31, 120(1)
  024d504  addi 1, 1, 128
  024d508  blr

FUN_0024d50c:   # 0x24d50c, 0xf4 bytes
  024d50c  stdu 1, -128(1)
  024d510  mflr 0
  024d514  std 0, 144(1)
  024d518  std 31, 120(1)
  024d51c  std 30, 112(1)
  024d520  ori 31, 5, 0
  024d524  li 30, 0
  024d528  lis 5, 250
  024d52c  ori 6, 30, 0
  024d530  addic 5, 5, 12172
  024d534  lwz 7, 0(5)
  024d538  cmpw 3, 7
  024d53c  bf 2, 0x24d5d4
  024d540  lis 5, 250
  024d544  slwi 3, 30, 2
  024d548  addic 5, 5, 12064
  024d54c  extsw 3, 3
  024d550  lwzx 6, 5, 3
  024d554  cmpwi 6, 1
  024d558  cmpwi 1, 6, 4
  024d55c  bf 2, 0x24d56c
  024d560  li 6, 2
  024d564  stwx 6, 5, 3
  024d568  b 0x24d578
  024d56c  bf 6, 0x24d578
  024d570  li 6, 3
  024d574  stwx 6, 5, 3
  024d578  lis 3, 250
  024d57c  slwi 6, 30, 6
  024d580  addic 3, 3, 12192
  024d584  li 5, 64
  024d588  addc 3, 3, 6
  024d58c  clrldi 3, 3, 32
  024d590  bl 0x5002cc
  024d594  nop
  024d598  lis 3, 250
  024d59c  slwi 4, 30, 4
  024d5a0  lfs 1, 0(31)
  024d5a4  addic 3, 3, 12384
  024d5a8  addc 3, 3, 4
  024d5ac  clrldi 4, 3, 32
  024d5b0  li 3, 1
  024d5b4  stfs 1, 0(4)
  024d5b8  lfs 1, 4(31)
  024d5bc  stfs 1, 4(4)
  024d5c0  lfs 1, 8(31)
  024d5c4  stfs 1, 8(4)
  024d5c8  lfs 1, 12(31)
  024d5cc  stfs 1, 12(4)
  024d5d0  b 0x24d5e8
  024d5d4  addic 30, 30, 1
  024d5d8  addic 5, 5, 4
  024d5dc  cmpwi 30, 3
  024d5e0  bt 0, 0x24d534
  024d5e4  ori 3, 6, 0
  024d5e8  ld 0, 144(1)
  024d5ec  mtlr 0
  024d5f0  ld 30, 112(1)
  024d5f4  ld 31, 120(1)
  024d5f8  addi 1, 1, 128
  024d5fc  blr

M1338_0024d620:   # 0x24d620, 0xbe0 bytes
  024d620  stdu 1, -720(1)
  024d624  mflr 0
  024d628  std 0, 736(1)
  024d62c  stfd 23, 648(1)
  024d630  stfd 24, 656(1)
  024d634  stfd 25, 664(1)
  024d638  stfd 26, 672(1)
  024d63c  stfd 27, 680(1)
  024d640  stfd 28, 688(1)
  024d644  stfd 29, 696(1)
  024d648  stfd 30, 704(1)
  024d64c  stfd 31, 712(1)
  024d650  std 28, 616(1)
  024d654  ori 28, 6, 0
  024d658  std 30, 632(1)
  024d65c  std 29, 624(1)
  024d660  lis 6, 37
  024d664  ori 30, 8, 0
  024d668  std 31, 640(1)
  024d66c  ori 29, 7, 0
  024d670  std 27, 608(1)
  024d674  ori 31, 5, 0
  024d678  std 26, 600(1)
  024d67c  ori 27, 4, 0
  024d680  std 25, 592(1)
  024d684  std 24, 584(1)
  024d688  std 23, 576(1)
  024d68c  std 22, 568(1)
  024d690  std 21, 560(1)
  024d694  addi 26, 6, -10752
  024d698  bl 0x685c4
  024d69c  nop
  024d6a0  std 3, 392(1)
  024d6a4  li 4, 2
  024d6a8  li 3, 0
  024d6ac  li 5, 0
  024d6b0  li 6, 1
  024d6b4  li 7, 128
  024d6b8  bl 0x502ea8
  024d6bc  nop
  024d6c0  std 3, 408(1)
  024d6c4  lis 9, 0
  024d6c8  li 3, 0
  024d6cc  li 4, 0
  024d6d0  li 5, 1
  024d6d4  li 6, 1
  024d6d8  li 7, 1
  024d6dc  li 8, 0
  024d6e0  ori 9, 9, 65424
  024d6e4  bl 0x502fd4
  024d6e8  nop
  024d6ec  std 3, 400(1)
  024d6f0  li 4, 0
  024d6f4  li 3, 0
  024d6f8  li 5, 0
  024d6fc  li 6, 0
  024d700  li 7, 0
  024d704  li 8, 0
  024d708  bl 0x502f08
  024d70c  nop
  024d710  lis 4, 127
  024d714  std 3, 384(1)
  024d718  ori 3, 27, 0
  024d71c  ori 4, 4, 32639
  024d720  rlwimi 4, 28, 24, 0, 7
  024d724  stw 4, 348(1)
  024d728  stw 4, 344(1)
  024d72c  stw 4, 340(1)
  024d730  stw 4, 336(1)
  024d734  bl 0x685c4
  024d738  nop
  024d73c  lis 4, 127
  024d740  std 3, 536(1)
  024d744  lis 24, 16256
  024d748  ori 4, 4, 16448
  024d74c  ld 3, 408(1)
  024d750  ld 5, 400(1)
  024d754  li 23, 0
  024d758  rlwimi 4, 29, 24, 0, 7
  024d75c  std 3, 552(1)
  024d760  ld 3, 384(1)
  024d764  lis 28, 250
  024d768  std 5, 544(1)
  024d76c  sldi 27, 30, 2
  024d770  addic 28, 28, 12160
  024d774  stw 4, 492(1)
  024d778  stw 4, 488(1)
  024d77c  extsw 27, 27
  024d780  stw 4, 484(1)
  024d784  stw 4, 480(1)
  024d788  std 3, 528(1)
  024d78c  lfs 28, 0(26)
  024d790  stw 24, 496(1)
  024d794  lis 3, 250
  024d798  lfs 27, 4(26)
  024d79c  stw 23, 500(1)
  024d7a0  stw 24, 504(1)
  024d7a4  addic 3, 3, 12172
  024d7a8  stw 24, 508(1)
  024d7ac  stw 23, 512(1)
  024d7b0  stw 23, 516(1)
  024d7b4  stw 23, 520(1)
  024d7b8  stw 24, 524(1)
  024d7bc  lfsx 1, 28, 27
  024d7c0  fadds 2, 1, 28
  024d7c4  stfs 1, 352(1)
  024d7c8  stw 23, 356(1)
  024d7cc  stfs 1, 360(1)
  024d7d0  stw 24, 364(1)
  024d7d4  lwzx 3, 3, 27
  024d7d8  stw 23, 372(1)
  024d7dc  stw 24, 380(1)
  024d7e0  stfs 2, 368(1)
  024d7e4  stfs 2, 376(1)
  024d7e8  lhz 3, 166(3)
  024d7ec  lfs 31, 8(26)
  024d7f0  cmpwi 3, 28
  024d7f4  bf 2, 0x24d804
  024d7f8  lis 3, 37
  024d7fc  addi 3, 3, -10752
  024d800  lfs 31, 12(3)
  024d804  lis 3, 250
  024d808  sldi 5, 30, 6
  024d80c  addic 3, 3, 12192
  024d810  lis 4, 37
  024d814  addc 3, 3, 5
  024d818  addi 4, 4, -10752
  024d81c  clrldi 3, 3, 32
  024d820  lis 26, 149
  024d824  addic 26, 26, 5056
  024d828  lfs 26, 16(4)
  024d82c  lfs 3, 16(3)
  024d830  stfs 3, 144(1)
  024d834  lfs 6, 20(3)
  024d838  stfs 6, 148(1)
  024d83c  lfs 7, 24(3)
  024d840  stfs 7, 152(1)
  024d844  lfs 1, 28(3)
  024d848  stfs 1, 156(1)
  024d84c  lfs 25, 320(26)
  024d850  lfs 1, 48(3)
  024d854  fsubs 25, 25, 1
  024d858  lfs 1, 324(26)
  024d85c  lfs 2, 328(26)
  024d860  fmr 30, 31
  024d864  fmuls 8, 6, 25
  024d868  stfs 25, 160(1)
  024d86c  lfs 4, 52(3)
  024d870  fsubs 1, 1, 4
  024d874  fmuls 29, 30, 26
  024d878  fmsubs 8, 3, 1, 8
  024d87c  stfs 1, 164(1)
  024d880  lfs 4, 56(3)
  024d884  fsubs 2, 2, 4
  024d888  fmuls 4, 7, 1
  024d88c  fmuls 3, 3, 2
  024d890  fmsubs 6, 6, 2, 4
  024d894  fmr 4, 27
  024d898  fmsubs 7, 7, 25, 3
  024d89c  fmuls 3, 7, 7
  024d8a0  fmadds 9, 6, 6, 3
  024d8a4  lfs 3, 332(26)
  024d8a8  stfs 2, 168(1)
  024d8ac  stfs 3, 172(1)
  024d8b0  fmr 3, 4
  024d8b4  stw 23, 188(1)
  024d8b8  fmadds 9, 8, 8, 9
  024d8bc  fmr 5, 3
  024d8c0  fsqrts 10, 9
  024d8c4  fcmpu 0, 10, 5
  024d8c8  bt 2, 0x24d918
  024d8cc  frsqrte 3, 9
  024d8d0  lis 4, 37
  024d8d4  addi 4, 4, -10752
  024d8d8  lfs 4, 20(4)
  024d8dc  fmuls 5, 9, 3
  024d8e0  fmuls 10, 4, 3
  024d8e4  fnmsubs 5, 5, 3, 28
  024d8e8  fmadds 3, 5, 10, 3
  024d8ec  fmuls 5, 9, 3
  024d8f0  fmuls 10, 4, 3
  024d8f4  fnmsubs 5, 5, 3, 28
  024d8f8  fmadds 3, 5, 10, 3
  024d8fc  fmuls 5, 9, 3
  024d900  fmuls 4, 4, 3
  024d904  fnmsubs 5, 5, 3, 28
  024d908  fmadds 4, 5, 4, 3
  024d90c  fmuls 5, 6, 4
  024d910  fmuls 3, 7, 4
  024d914  fmuls 4, 8, 4
  024d918  fmuls 6, 2, 3
  024d91c  stfs 5, 176(1)
  024d920  fmuls 7, 25, 4
  024d924  stfs 3, 180(1)
  024d928  fmuls 8, 1, 5
  024d92c  stfs 4, 184(1)
  024d930  stw 23, 156(1)
  024d934  lis 4, 250
  024d938  sldi 5, 30, 4
  024d93c  addic 4, 4, 12384
  024d940  addc 4, 4, 5
  024d944  fmsubs 1, 1, 4, 6
  024d948  fmsubs 2, 2, 5, 7
  024d94c  fmsubs 3, 25, 3, 8
  024d950  clrldi 4, 4, 32
  024d954  stfs 1, 144(1)
  024d958  stfs 2, 148(1)
  024d95c  stfs 3, 152(1)
  024d960  lfs 1, 48(3)
  024d964  stfs 1, 192(1)
  024d968  lfs 1, 52(3)
  024d96c  stfs 1, 196(1)
  024d970  lfs 1, 56(3)
  024d974  stfs 1, 200(1)
  024d978  lfs 1, 60(3)
  024d97c  stfs 1, 204(1)
  024d980  lfs 4, 48(3)
  024d984  stfs 4, 256(1)
  024d988  lfs 5, 52(3)
  024d98c  stfs 5, 260(1)
  024d990  lfs 6, 56(3)
  024d994  stfs 6, 264(1)
  024d998  lfs 1, 60(3)
  024d99c  stfs 1, 268(1)
  024d9a0  lfs 1, 4(4)
  024d9a4  lfs 2, 0(4)
  024d9a8  fsubs 5, 1, 5
  024d9ac  lfs 1, 8(4)
  024d9b0  fsubs 4, 2, 4
  024d9b4  fsubs 6, 1, 6
  024d9b8  lfs 25, 12(4)
  024d9bc  fmuls 1, 5, 5
  024d9c0  fmadds 7, 4, 4, 1
  024d9c4  fmr 1, 27
  024d9c8  fmadds 7, 6, 6, 7
  024d9cc  fmr 2, 1
  024d9d0  fsqrts 8, 7
  024d9d4  fmr 3, 2
  024d9d8  fcmpu 0, 8, 3
  024d9dc  bt 2, 0x24da2c
  024d9e0  frsqrte 1, 7
  024d9e4  lis 3, 37
  024d9e8  addi 3, 3, -10752
  024d9ec  lfs 2, 20(3)
  024d9f0  fmuls 3, 7, 1
  024d9f4  fmuls 8, 2, 1
  024d9f8  fnmsubs 3, 3, 1, 28
  024d9fc  fmadds 1, 3, 8, 1
  024da00  fmuls 3, 7, 1
  024da04  fmuls 8, 2, 1
  024da08  fnmsubs 3, 3, 1, 28
  024da0c  fmadds 1, 3, 8, 1
  024da10  fmuls 3, 7, 1
  024da14  fmuls 2, 2, 1
  024da18  fnmsubs 3, 3, 1, 28
  024da1c  fmadds 1, 3, 2, 1
  024da20  fmuls 3, 4, 1
  024da24  fmuls 2, 5, 1
  024da28  fmuls 1, 6, 1
  024da2c  lis 3, 151
  024da30  stfs 25, 220(1)
  024da34  addic 3, 3, -25376
  024da38  lis 6, -32768
  024da3c  lfs 4, 656(3)
  024da40  lfs 5, 664(3)
  024da44  fmuls 6, 4, 1
  024da48  fmuls 8, 5, 2
  024da4c  lfs 7, 660(3)
  024da50  fmuls 9, 7, 3
  024da54  lis 3, 37
  024da58  stfs 3, 208(1)
  024da5c  addi 3, 3, -10752
  024da60  stfs 2, 212(1)
  024da64  fmsubs 5, 5, 3, 6
  024da68  fmsubs 6, 7, 1, 8
  024da6c  fmsubs 4, 4, 2, 9
  024da70  stfs 1, 216(1)
  024da74  fneg 8, 30
  024da78  stw 23, 236(1)
  024da7c  lfs 23, 24(3)
  024da80  stw 23, 252(1)
  024da84  fmuls 7, 5, 5
  024da88  stw 23, 272(1)
  024da8c  stw 23, 276(1)
  024da90  stfs 30, 280(1)
  024da94  stw 24, 284(1)
  024da98  stw 6, 288(1)
  024da9c  stw 6, 292(1)
  024daa0  stw 24, 300(1)
  024daa4  fmadds 7, 6, 6, 7
  024daa8  stw 23, 416(1)
  024daac  stw 23, 420(1)
  024dab0  stfs 29, 424(1)
  024dab4  stw 24, 428(1)
  024dab8  stw 6, 432(1)
  024dabc  stw 6, 436(1)
  024dac0  stfs 8, 296(1)
  024dac4  fmadds 7, 4, 4, 7
  024dac8  fneg 9, 29
  024dacc  addic 29, 1, 208
  024dad0  addic 3, 1, 112
  024dad4  ori 4, 31, 0
  024dad8  fsqrts 7, 7
  024dadc  ori 5, 29, 0
  024dae0  stfs 9, 440(1)
  024dae4  stw 24, 444(1)
  024dae8  fdivs 8, 23, 7
  024daec  fsub 9, 27, 7
  024daf0  fsub 10, 27, 7
  024daf4  fsub 11, 27, 7
  024daf8  fsub 12, 7, 27
  024dafc  fsub 13, 7, 27
  024db00  fsub 7, 7, 27
  024db04  fmuls 6, 6, 8
  024db08  fmuls 5, 5, 8
  024db0c  fmuls 4, 4, 8
  024db10  fsel 8, 9, 27, 6
  024db14  fsel 9, 10, 27, 5
  024db18  fsel 10, 11, 27, 4
  024db1c  fsel 6, 12, 8, 6
  024db20  fsel 5, 13, 9, 5
  024db24  fsel 4, 7, 10, 4
  024db28  fmuls 7, 2, 6
  024db2c  fmuls 8, 1, 5
  024db30  fmuls 9, 3, 4
  024db34  stfs 6, 224(1)
  024db38  stfs 5, 228(1)
  024db3c  stfs 4, 232(1)
  024db40  fmsubs 3, 3, 5, 7
  024db44  fmsubs 2, 2, 4, 8
  024db48  fmsubs 1, 1, 6, 9
  024db4c  stfs 3, 248(1)
  024db50  stfs 2, 240(1)
  024db54  stfs 1, 244(1)
  024db58  bl 0x5e825c
  024db5c  nop
  024db60  addic 30, 31, 16
  024db64  addic 3, 1, 128
  024db68  ori 4, 30, 0
  024db6c  ori 5, 29, 0
  024db70  bl 0x5e825c
  024db74  nop
  024db78  lfs 8, 132(1)
  024db7c  lfs 1, 116(1)
  024db80  lfs 7, 128(1)
  024db84  fsubs 8, 8, 1
  024db88  lfs 25, 112(1)
  024db8c  lfs 9, 136(1)
  024db90  fsubs 7, 7, 25
  024db94  lfs 2, 120(1)
  024db98  fsubs 9, 9, 2
  024db9c  lfs 6, 140(1)
  024dba0  fmr 4, 27
  024dba4  fmuls 3, 8, 8
  024dba8  fmr 5, 4
  024dbac  fmadds 10, 7, 7, 3
  024dbb0  lfs 3, 124(1)
  024dbb4  stfs 6, 156(1)
  024dbb8  fmr 6, 5
  024dbbc  fmadds 10, 9, 9, 10
  024dbc0  fsqrts 11, 10
  024dbc4  fcmpu 0, 11, 6
  024dbc8  bt 2, 0x24dc18
  024dbcc  frsqrte 4, 10
  024dbd0  lis 3, 37
  024dbd4  addi 3, 3, -10752
  024dbd8  lfs 5, 20(3)
  024dbdc  fmuls 6, 10, 4
  024dbe0  fmuls 11, 5, 4
  024dbe4  fnmsubs 6, 6, 4, 28
  024dbe8  fmadds 4, 6, 11, 4
  024dbec  fmuls 6, 10, 4
  024dbf0  fmuls 11, 5, 4
  024dbf4  fnmsubs 6, 6, 4, 28
  024dbf8  fmadds 4, 6, 11, 4
  024dbfc  fmuls 6, 10, 4
  024dc00  fmuls 5, 5, 4
  024dc04  fnmsubs 6, 6, 4, 28
  024dc08  fmadds 4, 6, 5, 4
  024dc0c  fmuls 6, 7, 4
  024dc10  fmuls 5, 8, 4
  024dc14  fmuls 4, 9, 4
  024dc18  lfs 7, 328(26)
  024dc1c  lfs 8, 320(26)
  024dc20  fsubs 10, 7, 2
  024dc24  lfs 7, 324(26)
  024dc28  fsubs 9, 8, 25
  024dc2c  fsubs 0, 7, 1
  024dc30  stfs 6, 144(1)
  024dc34  stfs 5, 148(1)
  024dc38  stfs 4, 152(1)
  024dc3c  fmuls 11, 6, 10
  024dc40  fmuls 12, 5, 9
  024dc44  fmuls 7, 4, 0
  024dc48  stfs 9, 160(1)
  024dc4c  stfs 0, 164(1)
  024dc50  fmsubs 11, 4, 9, 11
  024dc54  fmsubs 12, 6, 0, 12
  024dc58  fmsubs 10, 5, 10, 7
  024dc5c  stw 23, 188(1)
  024dc60  fmuls 7, 11, 11
  024dc64  fmadds 13, 10, 10, 7
  024dc68  fmr 7, 27
  024dc6c  fmadds 13, 12, 12, 13
  024dc70  fmr 8, 7
  024dc74  fsqrts 24, 13
  024dc78  fmr 9, 8
  024dc7c  fcmpu 0, 24, 9
  024dc80  bt 2, 0x24dcd0
  024dc84  frsqrte 7, 13
  024dc88  lis 3, 37
  024dc8c  addi 3, 3, -10752
  024dc90  lfs 8, 20(3)
  024dc94  fmuls 9, 13, 7
  024dc98  fmuls 0, 8, 7
  024dc9c  fnmsubs 9, 9, 7, 28
  024dca0  fmadds 7, 9, 0, 7
  024dca4  fmuls 9, 13, 7
  024dca8  fmuls 0, 8, 7
  024dcac  fnmsubs 9, 9, 7, 28
  024dcb0  fmadds 7, 9, 0, 7
  024dcb4  fmuls 9, 13, 7
  024dcb8  fmuls 8, 8, 7
  024dcbc  fnmsubs 9, 9, 7, 28
  024dcc0  fmadds 7, 9, 8, 7
  024dcc4  fmuls 9, 10, 7
  024dcc8  fmuls 8, 11, 7
  024dccc  fmuls 7, 12, 7
  024dcd0  fmuls 10, 7, 5
  024dcd4  stfs 9, 176(1)
  024dcd8  fmuls 11, 9, 4
  024dcdc  stfs 8, 180(1)
  024dce0  fmuls 12, 8, 6
  024dce4  stfs 7, 184(1)
  024dce8  stw 23, 172(1)
  024dcec  addic 3, 1, 272
  024dcf0  stfs 25, 192(1)
  024dcf4  addic 29, 1, 144
  024dcf8  stfs 1, 196(1)
  024dcfc  ori 4, 3, 0
  024dd00  stfs 2, 200(1)
  024dd04  ori 5, 29, 0
  024dd08  stfs 3, 204(1)
  024dd0c  fmsubs 4, 8, 4, 10
  024dd10  fmsubs 6, 7, 6, 11
  024dd14  fmsubs 5, 9, 5, 12
  024dd18  stfs 4, 160(1)
  024dd1c  stfs 6, 164(1)
  024dd20  stfs 5, 168(1)
  024dd24  bl 0x5e825c
  024dd28  nop
  024dd2c  addic 3, 1, 288
  024dd30  ori 5, 29, 0
  024dd34  ori 4, 3, 0
  024dd38  bl 0x5e825c
  024dd3c  nop
  024dd40  addic 3, 1, 416
  024dd44  ori 5, 29, 0
  024dd48  ori 4, 3, 0
  024dd4c  bl 0x5e825c
  024dd50  nop
  024dd54  addic 3, 1, 432
  024dd58  ori 5, 29, 0
  024dd5c  ori 4, 3, 0
  024dd60  bl 0x5e825c
  024dd64  nop
  024dd68  lis 3, 37
  024dd6c  lis 25, 161
  024dd70  addi 3, 3, -10752
  024dd74  li 29, 1
  024dd78  addic 25, 25, 24396
  024dd7c  lfs 24, 28(3)
  024dd80  lfs 25, 20(3)
  024dd84  fsubs 24, 24, 31
  024dd88  fneg 1, 30
  024dd8c  lis 6, -32768
  024dd90  stw 23, 304(1)
  024dd94  fneg 2, 29
  024dd98  stw 23, 308(1)
  024dd9c  slwi 22, 29, 4
  024dda0  stfs 30, 312(1)
  024dda4  addic 21, 1, 208
  024dda8  stw 24, 316(1)
  024ddac  addc 4, 22, 31
  024ddb0  stw 6, 320(1)
  024ddb4  addic 3, 1, 112
  024ddb8  stw 6, 324(1)
  024ddbc  clrldi 4, 4, 32
  024ddc0  stw 24, 332(1)
  024ddc4  ori 5, 21, 0
  024ddc8  stfs 1, 328(1)
  024ddcc  stw 23, 448(1)
  024ddd0  stw 23, 452(1)
  024ddd4  stfs 29, 456(1)
  024ddd8  stw 24, 460(1)
  024dddc  stw 6, 464(1)
  024dde0  stw 6, 468(1)
  024dde4  stfs 2, 472(1)
  024dde8  stw 24, 476(1)
  024ddec  bl 0x5e825c
  024ddf0  nop
  024ddf4  addc 4, 22, 30
  024ddf8  addic 3, 1, 128
  024ddfc  clrldi 4, 4, 32
  024de00  ori 5, 21, 0
  024de04  bl 0x5e825c
  024de08  nop
  024de0c  lfs 8, 132(1)
  024de10  lfs 1, 116(1)
  024de14  lfs 7, 128(1)
  024de18  fsubs 8, 8, 1
  024de1c  lfs 30, 112(1)
  024de20  lfs 9, 136(1)
  024de24  fsubs 7, 7, 30
  024de28  lfs 2, 120(1)
  024de2c  fsubs 9, 9, 2
  024de30  fmr 4, 27
  024de34  lfs 6, 140(1)
  024de38  fmuls 3, 8, 8
  024de3c  fmr 5, 4
  024de40  fmadds 10, 7, 7, 3
  024de44  lfs 3, 124(1)
  024de48  stfs 6, 156(1)
  024de4c  fmr 6, 5
  024de50  fmadds 10, 9, 9, 10
  024de54  fsqrts 11, 10
  024de58  fcmpu 0, 11, 6
  024de5c  bt 2, 0x24dea0
  024de60  frsqrte 4, 10
  024de64  fmuls 5, 10, 4
  024de68  fmuls 6, 4, 25
  024de6c  fnmsubs 5, 5, 4, 28
  024de70  fmadds 4, 5, 6, 4
  024de74  fmuls 5, 10, 4
  024de78  fmuls 6, 4, 25
  024de7c  fnmsubs 5, 5, 4, 28
  024de80  fmadds 4, 5, 6, 4
  024de84  fmuls 5, 10, 4
  024de88  fmuls 6, 4, 25
  024de8c  fnmsubs 5, 5, 4, 28
  024de90  fmadds 4, 5, 6, 4
  024de94  fmuls 6, 7, 4
  024de98  fmuls 5, 8, 4
  024de9c  fmuls 4, 9, 4
  024dea0  lfs 7, 328(26)
  024dea4  lfs 8, 320(26)
  024dea8  fsubs 7, 7, 2
  024deac  lfs 9, 324(26)
  024deb0  fsubs 13, 8, 30
  024deb4  fsubs 0, 9, 1
  024deb8  fmr 11, 27
  024debc  stfs 6, 144(1)
  024dec0  stfs 5, 148(1)
  024dec4  stfs 4, 152(1)
  024dec8  fmuls 8, 6, 7
  024decc  fmuls 10, 5, 13
  024ded0  fmuls 9, 4, 0
  024ded4  fmr 12, 11
  024ded8  stfs 13, 160(1)
  024dedc  stfs 0, 164(1)
  024dee0  fmsubs 8, 4, 13, 8
  024dee4  fmsubs 7, 5, 7, 9
  024dee8  fmsubs 9, 6, 0, 10
  024deec  stw 23, 188(1)
  024def0  fmr 13, 12
  024def4  fmuls 10, 8, 8
  024def8  fmadds 10, 7, 7, 10
  024defc  fmadds 10, 9, 9, 10
  024df00  fsqrts 29, 10
  024df04  fcmpu 0, 29, 13
  024df08  bt 2, 0x24df4c
  024df0c  frsqrte 11, 10
  024df10  fmuls 12, 10, 11
  024df14  fmuls 13, 11, 25
  024df18  fnmsubs 12, 12, 11, 28
  024df1c  fmadds 11, 12, 13, 11
  024df20  fmuls 12, 10, 11
  024df24  fmuls 13, 11, 25
  024df28  fnmsubs 12, 12, 11, 28
  024df2c  fmadds 11, 12, 13, 11
  024df30  fmuls 10, 10, 11
  024df34  fmuls 12, 11, 25
  024df38  fnmsubs 10, 10, 11, 28
  024df3c  fmadds 11, 10, 12, 11
  024df40  fmuls 13, 7, 11
  024df44  fmuls 12, 8, 11
  024df48  fmuls 11, 9, 11
  024df4c  fmuls 7, 11, 5
  024df50  fmuls 8, 13, 4
  024df54  stfs 13, 176(1)
  024df58  fmuls 9, 12, 6
  024df5c  stfs 12, 180(1)
  024df60  stfs 11, 184(1)
  024df64  addic 3, 1, 304
  024df68  stw 23, 172(1)
  024df6c  addic 22, 1, 144
  024df70  stfs 30, 192(1)
  024df74  ori 4, 3, 0
  024df78  stfs 1, 196(1)
  024df7c  ori 5, 22, 0
  024df80  stfs 2, 200(1)
  024df84  stfs 3, 204(1)
  024df88  fmsubs 4, 12, 4, 7
  024df8c  fmsubs 6, 11, 6, 8
  024df90  fmsubs 5, 13, 5, 9
  024df94  stfs 4, 160(1)
  024df98  stfs 6, 164(1)
  024df9c  stfs 5, 168(1)
  024dfa0  bl 0x5e825c
  024dfa4  nop
  024dfa8  addic 3, 1, 320
  024dfac  ori 5, 22, 0
  024dfb0  ori 4, 3, 0
  024dfb4  bl 0x5e825c
  024dfb8  nop
  024dfbc  addic 3, 1, 448
  024dfc0  ori 5, 22, 0
  024dfc4  ori 4, 3, 0
  024dfc8  bl 0x5e825c
  024dfcc  nop
  024dfd0  addic 3, 1, 464
  024dfd4  ori 5, 22, 0
  024dfd8  ori 4, 3, 0
  024dfdc  bl 0x5e825c
  024dfe0  nop
  024dfe4  cmpwi 29, 1
  024dfe8  bf 2, 0x24e070
  024dfec  lis 3, 255
  024dff0  lis 4, 127
  024dff4  lwz 22, 336(1)
  024dff8  ori 6, 3, 65535
  024dffc  lwz 21, 480(1)
  024e000  ori 8, 4, 16448
  024e004  li 7, 9
  024e008  addic 3, 1, 272
  024e00c  stw 6, 340(1)
  024e010  stw 6, 336(1)
  024e014  li 4, 0
  024e018  lwz 6, 28(25)
  024e01c  li 5, 0
  024e020  stw 8, 484(1)
  024e024  stw 8, 480(1)
  024e028  bl 0x72280
  024e02c  nop
  024e030  lwz 6, 28(25)
  024e034  addic 3, 1, 416
  024e038  li 4, 0
  024e03c  li 5, 0
  024e040  li 7, 9
  024e044  bl 0x72280
  024e048  nop
  024e04c  stw 22, 348(1)
  024e050  stw 22, 344(1)
  024e054  stw 22, 340(1)
  024e058  stw 22, 336(1)
  024e05c  stw 21, 492(1)
  024e060  stw 21, 488(1)
  024e064  stw 21, 484(1)
  024e068  stw 21, 480(1)
  024e06c  b 0x24e0a8
  024e070  addic 3, 1, 272
  024e074  lwz 6, 28(25)
  024e078  li 4, 0
  024e07c  li 5, 0
  024e080  li 7, 9
  024e084  bl 0x72280
  024e088  nop
  024e08c  lwz 6, 28(25)
  024e090  addic 3, 1, 416
  024e094  li 4, 0
  024e098  li 5, 0
  024e09c  li 7, 9
  024e0a0  bl 0x72280
  024e0a4  nop
  024e0a8  lfs 1, 304(1)
  024e0ac  ori 3, 29, 0
  024e0b0  lfs 2, 308(1)
  024e0b4  stfs 1, 272(1)
  024e0b8  lfs 1, 312(1)
  024e0bc  stfs 2, 276(1)
  024e0c0  lfs 2, 316(1)
  024e0c4  stfs 1, 280(1)
  024e0c8  lfs 1, 320(1)
  024e0cc  stfs 2, 284(1)
  024e0d0  lfs 2, 324(1)
  024e0d4  stfs 1, 288(1)
  024e0d8  lfs 1, 328(1)
  024e0dc  stfs 2, 292(1)
  024e0e0  lfs 2, 332(1)
  024e0e4  stfs 1, 296(1)
  024e0e8  lfs 1, 448(1)
  024e0ec  stfs 2, 300(1)
  024e0f0  lfs 2, 452(1)
  024e0f4  stfs 1, 416(1)
  024e0f8  lfs 1, 456(1)
  024e0fc  stfs 2, 420(1)
  024e100  lfs 2, 460(1)
  024e104  stfs 1, 424(1)
  024e108  lfs 1, 464(1)
  024e10c  stfs 2, 428(1)
  024e110  lfs 2, 468(1)
  024e114  stfs 1, 432(1)
  024e118  lfs 1, 472(1)
  024e11c  stfs 2, 436(1)
  024e120  lfs 2, 476(1)
  024e124  stfs 1, 440(1)
  024e128  stfs 2, 444(1)
  024e12c  bl 0x502730
  024e130  nop
  024e134  fmr 30, 1
  024e138  li 3, 20
  024e13c  bl 0x502730
  024e140  nop
  024e144  fdivs 5, 30, 1
  024e148  fmr 1, 23
  024e14c  fmr 2, 27
  024e150  fmr 3, 28
  024e154  fmr 4, 27
  024e158  bl 0xfec94
  024e15c  nop
  024e160  lfsx 2, 28, 27
  024e164  fmadds 30, 1, 24, 31
  024e168  addic 29, 29, 1
  024e16c  fadds 1, 2, 28
  024e170  stfs 2, 352(1)
  024e174  extsw 29, 29
  024e178  stw 23, 356(1)
  024e17c  stfs 2, 360(1)
  024e180  stw 24, 364(1)
  024e184  cmpwi 29, 19
  024e188  stw 23, 372(1)
  024e18c  stw 24, 380(1)
  024e190  fmuls 29, 30, 26
  024e194  stfs 1, 368(1)
  024e198  stfs 1, 376(1)
  024e19c  bt 0, 0x24dd88
  024e1a0  ld 0, 736(1)
  024e1a4  mtlr 0
  024e1a8  lfd 23, 648(1)
  024e1ac  lfd 24, 656(1)
  024e1b0  lfd 25, 664(1)
  024e1b4  lfd 26, 672(1)
  024e1b8  lfd 27, 680(1)
  024e1bc  lfd 28, 688(1)
  024e1c0  lfd 29, 696(1)
  024e1c4  lfd 30, 704(1)
  024e1c8  lfd 31, 712(1)
  024e1cc  ld 21, 560(1)
  024e1d0  ld 22, 568(1)
  024e1d4  ld 23, 576(1)
  024e1d8  ld 24, 584(1)
  024e1dc  ld 25, 592(1)
  024e1e0  ld 26, 600(1)
  024e1e4  ld 27, 608(1)
  024e1e8  ld 28, 616(1)
  024e1ec  ld 29, 624(1)
  024e1f0  ld 30, 632(1)
  024e1f4  ld 31, 640(1)
  024e1f8  addi 1, 1, 720
  024e1fc  blr

M1338_0024e228:   # 0x24e228, 0x85c bytes
  024e228  stdu 1, -496(1)
  024e22c  mflr 0
  024e230  std 0, 512(1)
  024e234  stfd 14, 352(1)
  024e238  stfd 15, 360(1)
  024e23c  stfd 16, 368(1)
  024e240  stfd 17, 376(1)
  024e244  stfd 18, 384(1)
  024e248  stfd 19, 392(1)
  024e24c  stfd 20, 400(1)
  024e250  stfd 21, 408(1)
  024e254  stfd 22, 416(1)
  024e258  stfd 23, 424(1)
  024e25c  stfd 24, 432(1)
  024e260  stfd 25, 440(1)
  024e264  stfd 26, 448(1)
  024e268  stfd 27, 456(1)
  024e26c  stfd 28, 464(1)
  024e270  stfd 29, 472(1)
  024e274  stfd 30, 480(1)
  024e278  stfd 31, 488(1)
  024e27c  lis 3, 250
  024e280  sldi 5, 4, 6
  024e284  std 30, 336(1)
  024e288  addic 3, 3, 12240
  024e28c  lis 30, 149
  024e290  addc 3, 3, 5
  024e294  addic 30, 30, 5056
  024e298  clrldi 3, 3, 32
  024e29c  lfs 2, 324(30)
  024e2a0  lfs 20, 4(3)
  024e2a4  lfs 19, 0(3)
  024e2a8  fsubs 2, 2, 20
  024e2ac  lfs 1, 320(30)
  024e2b0  lfs 21, 8(3)
  024e2b4  fsubs 1, 1, 19
  024e2b8  lfs 3, 328(30)
  024e2bc  fsubs 3, 3, 21
  024e2c0  lis 3, 37
  024e2c4  addi 3, 3, -7680
  024e2c8  fmuls 4, 2, 2
  024e2cc  std 31, 344(1)
  024e2d0  lfs 14, 4(3)
  024e2d4  ori 31, 4, 0
  024e2d8  fmr 22, 14
  024e2dc  lfs 5, 0(3)
  024e2e0  lfs 18, 332(30)
  024e2e4  fmadds 4, 1, 1, 4
  024e2e8  stfd 5, 256(1)
  024e2ec  fmr 23, 22
  024e2f0  fmadds 4, 3, 3, 4
  024e2f4  fmr 24, 23
  024e2f8  fsqrts 6, 4
  024e2fc  std 29, 328(1)
  024e300  std 28, 320(1)
  024e304  std 27, 312(1)
  024e308  std 26, 304(1)
  024e30c  std 25, 296(1)
  024e310  fcmpu 0, 6, 24
  024e314  bt 2, 0x24e364
  024e318  frsqrte 6, 4
  024e31c  lis 3, 37
  024e320  addi 3, 3, -7680
  024e324  lfs 7, 8(3)
  024e328  fmuls 8, 4, 6
  024e32c  fmuls 9, 7, 6
  024e330  fnmsubs 8, 8, 6, 5
  024e334  fmadds 6, 8, 9, 6
  024e338  fmuls 8, 4, 6
  024e33c  fmuls 9, 7, 6
  024e340  fnmsubs 8, 8, 6, 5
  024e344  fmadds 6, 8, 9, 6
  024e348  fmuls 4, 4, 6
  024e34c  fmuls 7, 7, 6
  024e350  fnmsubs 4, 4, 6, 5
  024e354  fmadds 22, 4, 7, 6
  024e358  fmuls 24, 1, 22
  024e35c  fmuls 23, 2, 22
  024e360  fmuls 22, 3, 22
  024e364  lis 29, 151
  024e368  addic 29, 29, -25376
  024e36c  lis 3, 37
  024e370  lfs 1, 656(29)
  024e374  lfs 2, 664(29)
  024e378  fmuls 3, 1, 22
  024e37c  fmuls 5, 2, 23
  024e380  lfs 4, 660(29)
  024e384  fmuls 6, 4, 24
  024e388  addi 28, 3, -7680
  024e38c  fmsubs 2, 2, 24, 3
  024e390  fmsubs 3, 4, 22, 5
  024e394  fmsubs 1, 1, 23, 6
  024e398  lfs 5, 12(28)
  024e39c  fmuls 4, 2, 2
  024e3a0  stfd 5, 272(1)
  024e3a4  li 3, 11
  024e3a8  fmadds 4, 3, 3, 4
  024e3ac  fmadds 4, 1, 1, 4
  024e3b0  fsqrts 4, 4
  024e3b4  fdivs 5, 5, 4
  024e3b8  fsub 6, 14, 4
  024e3bc  fsub 7, 14, 4
  024e3c0  fsub 8, 14, 4
  024e3c4  fsub 25, 4, 14
  024e3c8  fsub 26, 4, 14
  024e3cc  fsub 27, 4, 14
  024e3d0  fmuls 3, 3, 5
  024e3d4  fmuls 2, 2, 5
  024e3d8  fmuls 1, 1, 5
  024e3dc  fsel 4, 6, 14, 3
  024e3e0  fsel 5, 7, 14, 2
  024e3e4  fsel 6, 8, 14, 1
  024e3e8  fsel 25, 25, 4, 3
  024e3ec  fsel 26, 26, 5, 2
  024e3f0  fsel 27, 27, 6, 1
  024e3f4  fmuls 30, 23, 25
  024e3f8  fmuls 28, 22, 26
  024e3fc  fmuls 29, 24, 27
  024e400  fmsubs 30, 24, 26, 30
  024e404  fmsubs 28, 23, 27, 28
  024e408  fmsubs 29, 22, 25, 29
  024e40c  bl 0x685c4
  024e410  nop
  024e414  std 3, 232(1)
  024e418  li 4, 1
  024e41c  li 3, 0
  024e420  li 5, 0
  024e424  li 6, 1
  024e428  li 7, 255
  024e42c  bl 0x502ea8
  024e430  nop
  024e434  std 3, 248(1)
  024e438  lis 9, 0
  024e43c  li 3, 0
  024e440  li 4, 0
  024e444  li 5, 1
  024e448  li 6, 1
  024e44c  li 7, 1
  024e450  li 8, 0
  024e454  ori 9, 9, 65424
  024e458  bl 0x502fd4
  024e45c  nop
  024e460  std 3, 240(1)
  024e464  li 3, 1
  024e468  li 4, 1
  024e46c  li 5, 0
  024e470  li 6, 0
  024e474  li 7, 0
  024e478  li 8, 0
  024e47c  bl 0x502f08
  024e480  nop
  024e484  li 4, -1
  024e488  std 3, 224(1)
  024e48c  li 3, 0
  024e490  lis 5, 16256
  024e494  stw 4, 188(1)
  024e498  stw 4, 184(1)
  024e49c  stw 4, 180(1)
  024e4a0  stw 4, 176(1)
  024e4a4  stw 3, 192(1)
  024e4a8  stw 3, 196(1)
  024e4ac  stw 3, 200(1)
  024e4b0  stw 5, 204(1)
  024e4b4  stw 5, 208(1)
  024e4b8  stw 3, 212(1)
  024e4bc  stw 5, 216(1)
  024e4c0  stw 5, 220(1)
  024e4c4  lfs 1, 16(28)
  024e4c8  lfs 2, 20(28)
  024e4cc  bl 0xfcbe8
  024e4d0  nop
  024e4d4  fmr 31, 1
  024e4d8  lfs 17, 24(28)
  024e4dc  fmr 1, 14
  024e4e0  fmr 2, 17
  024e4e4  bl 0xfe4f0
  024e4e8  nop
  024e4ec  fmr 15, 1
  024e4f0  fmr 1, 14
  024e4f4  fmr 2, 17
  024e4f8  bl 0xfe4f0
  024e4fc  nop
  024e500  fmr 16, 1
  024e504  fmr 1, 14
  024e508  fmr 2, 17
  024e50c  bl 0xfe4f0
  024e510  nop
  024e514  lis 26, 122
  024e518  fmr 17, 1
  024e51c  addic 27, 1, 112
  024e520  fmuls 1, 31, 18
  024e524  addic 26, 26, -19312
  024e528  li 25, 4
  024e52c  ori 3, 27, 0
  024e530  ori 4, 26, 0
  024e534  mtctr 25
  024e538  lfs 2, 0(4)
  024e53c  fmuls 3, 2, 31
  024e540  fmadds 5, 3, 24, 15
  024e544  fmadds 6, 3, 23, 16
  024e548  stfs 3, 0(3)
  024e54c  lfs 4, 4(4)
  024e550  fmadds 3, 3, 22, 17
  024e554  fmuls 4, 4, 31
  024e558  stfs 4, 4(3)
  024e55c  lfs 7, 8(4)
  024e560  fmuls 7, 7, 31
  024e564  fmadds 5, 7, 28, 5
  024e568  fmadds 6, 7, 29, 6
  024e56c  fmadds 3, 7, 30, 3
  024e570  stfs 7, 8(3)
  024e574  lfs 7, 12(4)
  024e578  addic 4, 4, 16
  024e57c  fmadds 2, 2, 1, 7
  024e580  fmadds 5, 7, 19, 5
  024e584  fmadds 6, 7, 20, 6
  024e588  fmadds 3, 7, 21, 3
  024e58c  stfs 2, 12(3)
  024e590  fmadds 2, 4, 25, 5
  024e594  fmadds 5, 4, 26, 6
  024e598  fmadds 3, 4, 27, 3
  024e59c  stfs 2, 0(3)
  024e5a0  stfs 5, 4(3)
  024e5a4  stfs 3, 8(3)
  024e5a8  addic 3, 3, 16
  024e5ac  bdnz 0x24e538
  024e5b0  lis 28, 161
  024e5b4  addic 3, 1, 112
  024e5b8  addic 28, 28, 24396
  024e5bc  li 4, 0
  024e5c0  li 5, 0
  024e5c4  li 7, 9
  024e5c8  lwz 6, 28(28)
  024e5cc  bl 0x72280
  024e5d0  nop
  024e5d4  li 3, 0
  024e5d8  li 4, 2
  024e5dc  li 5, 0
  024e5e0  li 6, 1
  024e5e4  li 7, 255
  024e5e8  bl 0x502ea8
  024e5ec  nop
  024e5f0  lis 4, 24703
  024e5f4  std 3, 248(1)
  024e5f8  mtctr 25
  024e5fc  ori 4, 4, 16448
  024e600  lis 3, 37
  024e604  addi 5, 3, -7680
  024e608  stw 4, 188(1)
  024e60c  stw 4, 184(1)
  024e610  ori 3, 27, 0
  024e614  stw 4, 180(1)
  024e618  stw 4, 176(1)
  024e61c  lfs 1, 28(5)
  024e620  ori 4, 26, 0
  024e624  lwz 5, 28(28)
  024e628  fmuls 31, 1, 31
  024e62c  stfd 1, 280(1)
  024e630  fmuls 1, 31, 25
  024e634  fmuls 2, 31, 26
  024e638  fmuls 3, 31, 27
  024e63c  fmuls 4, 31, 18
  024e640  lfs 5, 0(4)
  024e644  fmuls 6, 5, 31
  024e648  stfs 6, 0(3)
  024e64c  lfs 7, 4(4)
  024e650  fmuls 8, 7, 31
  024e654  fmuls 9, 7, 1
  024e658  fmuls 10, 7, 2
  024e65c  fmuls 7, 7, 3
  024e660  fmadds 9, 6, 24, 9
  024e664  stfs 8, 4(3)
  024e668  fmadds 10, 6, 23, 10
  024e66c  lfs 8, 8(4)
  024e670  fmadds 6, 6, 22, 7
  024e674  fmuls 8, 8, 31
  024e678  fmadds 7, 8, 28, 9
  024e67c  fmadds 9, 8, 29, 10
  024e680  fmadds 6, 8, 30, 6
  024e684  stfs 8, 8(3)
  024e688  lfs 8, 12(4)
  024e68c  addic 4, 4, 16
  024e690  fmadds 5, 5, 4, 8
  024e694  fmadds 7, 8, 19, 7
  024e698  fmadds 9, 8, 20, 9
  024e69c  fmadds 6, 8, 21, 6
  024e6a0  stfs 5, 12(3)
  024e6a4  stfs 7, 0(3)
  024e6a8  stfs 9, 4(3)
  024e6ac  stfs 6, 8(3)
  024e6b0  addic 3, 3, 16
  024e6b4  bdnz 0x24e640
  024e6b8  ori 6, 5, 0
  024e6bc  addic 3, 1, 112
  024e6c0  li 4, 0
  024e6c4  li 5, 0
  024e6c8  li 7, 9
  024e6cc  bl 0x72280
  024e6d0  nop
  024e6d4  lis 3, 250
  024e6d8  lfs 4, 324(30)
  024e6dc  sldi 4, 31, 4
  024e6e0  lfs 3, 320(30)
  024e6e4  addic 3, 3, 12432
  024e6e8  addc 3, 3, 4
  024e6ec  clrldi 3, 3, 32
  024e6f0  fmr 22, 14
  024e6f4  lfs 20, 4(3)
  024e6f8  lfs 19, 0(3)
  024e6fc  fsubs 4, 4, 20
  024e700  lfs 21, 8(3)
  024e704  fsubs 3, 3, 19
  024e708  lfs 5, 328(30)
  024e70c  fsubs 5, 5, 21
  024e710  fmr 23, 22
  024e714  lfs 18, 12(3)
  024e718  fmuls 1, 4, 4
  024e71c  fmr 24, 23
  024e720  fmadds 6, 3, 3, 1
  024e724  lfs 1, 332(30)
  024e728  lfs 28, 660(29)
  024e72c  stfd 1, 264(1)
  024e730  lfs 1, 664(29)
  024e734  lfs 2, 656(29)
  024e738  fmadds 6, 5, 5, 6
  024e73c  fsqrts 7, 6
  024e740  fcmpu 0, 7, 24
  024e744  bt 2, 0x24e798
  024e748  frsqrte 7, 6
  024e74c  lis 3, 37
  024e750  lfd 8, 256(1)
  024e754  addi 3, 3, -7680
  024e758  lfs 9, 8(3)
  024e75c  fmuls 10, 6, 7
  024e760  fmuls 11, 9, 7
  024e764  fnmsubs 10, 10, 7, 8
  024e768  fmadds 7, 10, 11, 7
  024e76c  fmuls 10, 6, 7
  024e770  fmuls 11, 9, 7
  024e774  fnmsubs 10, 10, 7, 8
  024e778  fmadds 7, 10, 11, 7
  024e77c  fmuls 6, 6, 7
  024e780  fmuls 9, 9, 7
  024e784  fnmsubs 6, 6, 7, 8
  024e788  fmadds 22, 6, 9, 7
  024e78c  fmuls 24, 3, 22
  024e790  fmuls 23, 4, 22
  024e794  fmuls 22, 5, 22
  024e798  fmuls 3, 2, 22
  024e79c  fmuls 4, 1, 23
  024e7a0  fmuls 5, 28, 24
  024e7a4  lfd 7, 272(1)
  024e7a8  fmsubs 3, 1, 24, 3
  024e7ac  fmsubs 4, 28, 22, 4
  024e7b0  fmsubs 5, 2, 23, 5
  024e7b4  lis 3, 37
  024e7b8  fmuls 1, 3, 3
  024e7bc  addi 3, 3, -7680
  024e7c0  fmadds 1, 4, 4, 1
  024e7c4  fmadds 1, 5, 5, 1
  024e7c8  fsqrts 6, 1
  024e7cc  lfs 1, 32(3)
  024e7d0  lfs 2, 36(3)
  024e7d4  fdivs 7, 7, 6
  024e7d8  fsub 8, 14, 6
  024e7dc  fsub 9, 14, 6
  024e7e0  fsub 10, 14, 6
  024e7e4  fsub 25, 6, 14
  024e7e8  fsub 26, 6, 14
  024e7ec  fsub 27, 6, 14
  024e7f0  fmuls 4, 4, 7
  024e7f4  fmuls 3, 3, 7
  024e7f8  fmuls 5, 5, 7
  024e7fc  fsel 6, 8, 14, 4
  024e800  fsel 7, 9, 14, 3
  024e804  fsel 8, 10, 14, 5
  024e808  fsel 25, 25, 6, 4
  024e80c  fsel 26, 26, 7, 3
  024e810  fsel 27, 27, 8, 5
  024e814  fmuls 30, 23, 25
  024e818  fmuls 28, 22, 26
  024e81c  fmuls 29, 24, 27
  024e820  fmsubs 30, 24, 26, 30
  024e824  fmsubs 28, 23, 27, 28
  024e828  fmsubs 29, 22, 25, 29
  024e82c  bl 0xfcbe8
  024e830  nop
  024e834  li 3, 0
  024e838  fmr 31, 1
  024e83c  li 6, 1
  024e840  li 4, 1
  024e844  li 5, 0
  024e848  li 7, 255
  024e84c  bl 0x502ea8
  024e850  nop
  024e854  li 6, -1
  024e858  std 3, 248(1)
  024e85c  lfd 14, 264(1)
  024e860  ori 4, 27, 0
  024e864  lwz 3, 28(28)
  024e868  ori 5, 26, 0
  024e86c  fmuls 14, 31, 14
  024e870  mtctr 25
  024e874  stw 6, 188(1)
  024e878  stw 6, 184(1)
  024e87c  stw 6, 180(1)
  024e880  stw 6, 176(1)
  024e884  lfs 1, 0(5)
  024e888  fmuls 2, 1, 31
  024e88c  fmuls 1, 1, 14
  024e890  fmadds 4, 2, 24, 15
  024e894  fmadds 5, 2, 23, 16
  024e898  stfs 2, 0(4)
  024e89c  lfs 3, 4(5)
  024e8a0  fmadds 2, 2, 22, 17
  024e8a4  fmuls 3, 3, 31
  024e8a8  stfs 3, 4(4)
  024e8ac  lfs 6, 8(5)
  024e8b0  fmuls 6, 6, 31
  024e8b4  fmadds 4, 6, 28, 4
  024e8b8  fmadds 5, 6, 29, 5
  024e8bc  fmadds 2, 6, 30, 2
  024e8c0  stfs 6, 8(4)
  024e8c4  lfs 6, 12(5)
  024e8c8  addic 5, 5, 16
  024e8cc  fmadds 1, 6, 18, 1
  024e8d0  fmadds 4, 6, 19, 4
  024e8d4  fmadds 5, 6, 20, 5
  024e8d8  fmadds 2, 6, 21, 2
  024e8dc  stfs 1, 12(4)
  024e8e0  fmadds 1, 3, 25, 4
  024e8e4  fmadds 4, 3, 26, 5
  024e8e8  fmadds 2, 3, 27, 2
  024e8ec  stfs 1, 0(4)
  024e8f0  stfs 4, 4(4)
  024e8f4  stfs 2, 8(4)
  024e8f8  addic 4, 4, 16
  024e8fc  bdnz 0x24e884
  024e900  ori 6, 3, 0
  024e904  addic 3, 1, 112
  024e908  li 4, 0
  024e90c  li 5, 0
  024e910  li 7, 9
  024e914  bl 0x72280
  024e918  nop
  024e91c  li 3, 0
  024e920  li 4, 2
  024e924  li 5, 0
  024e928  li 6, 1
  024e92c  li 7, 255
  024e930  bl 0x502ea8
  024e934  nop
  024e938  lfd 1, 280(1)
  024e93c  lis 4, 24703
  024e940  std 3, 248(1)
  024e944  fmuls 31, 1, 31
  024e948  lfd 4, 264(1)
  024e94c  ori 3, 4, 16448
  024e950  mtctr 25
  024e954  stw 3, 188(1)
  024e958  stw 3, 184(1)
  024e95c  stw 3, 180(1)
  024e960  stw 3, 176(1)
  024e964  lwz 28, 28(28)
  024e968  fmuls 1, 31, 25
  024e96c  fmuls 2, 31, 26
  024e970  fmuls 3, 31, 27
  024e974  fmuls 4, 31, 4
  024e978  lfs 5, 0(26)
  024e97c  fmuls 6, 5, 31
  024e980  fmuls 5, 5, 4
  024e984  stfs 6, 0(27)
  024e988  lfs 7, 4(26)
  024e98c  fmuls 8, 7, 31
  024e990  fmuls 9, 7, 1
  024e994  fmuls 10, 7, 2
  024e998  fmuls 7, 7, 3
  024e99c  stfs 8, 4(27)
  024e9a0  fmadds 10, 6, 23, 10
  024e9a4  fmadds 8, 6, 24, 9
  024e9a8  lfs 9, 8(26)
  024e9ac  fmadds 6, 6, 22, 7
  024e9b0  fmuls 9, 9, 31
  024e9b4  fmadds 7, 9, 28, 8
  024e9b8  fmadds 8, 9, 29, 10
  024e9bc  fmadds 6, 9, 30, 6
  024e9c0  stfs 9, 8(27)
  024e9c4  lfs 9, 12(26)
  024e9c8  addic 26, 26, 16
  024e9cc  fmadds 5, 9, 18, 5
  024e9d0  fmadds 7, 9, 19, 7
  024e9d4  fmadds 8, 9, 20, 8
  024e9d8  fmadds 6, 9, 21, 6
  024e9dc  stfs 5, 12(27)
  024e9e0  stfs 7, 0(27)
  024e9e4  stfs 8, 4(27)
  024e9e8  stfs 6, 8(27)
  024e9ec  addic 27, 27, 16
  024e9f0  bdnz 0x24e978
  024e9f4  addic 3, 1, 112
  024e9f8  li 4, 0
  024e9fc  li 5, 0
  024ea00  ori 6, 28, 0
  024ea04  li 7, 9
  024ea08  bl 0x72280
  024ea0c  nop
  024ea10  ld 0, 512(1)
  024ea14  mtlr 0
  024ea18  lfd 14, 352(1)
  024ea1c  lfd 15, 360(1)
  024ea20  lfd 16, 368(1)
  024ea24  lfd 17, 376(1)
  024ea28  lfd 18, 384(1)
  024ea2c  lfd 19, 392(1)
  024ea30  lfd 20, 400(1)
  024ea34  lfd 21, 408(1)
  024ea38  lfd 22, 416(1)
  024ea3c  lfd 23, 424(1)
  024ea40  lfd 24, 432(1)
  024ea44  lfd 25, 440(1)
  024ea48  lfd 26, 448(1)
  024ea4c  lfd 27, 456(1)
  024ea50  lfd 28, 464(1)
  024ea54  lfd 29, 472(1)
  024ea58  lfd 30, 480(1)
  024ea5c  lfd 31, 488(1)
  024ea60  ld 25, 296(1)
  024ea64  ld 26, 304(1)
  024ea68  ld 27, 312(1)
  024ea6c  ld 28, 320(1)
  024ea70  ld 29, 328(1)
  024ea74  ld 30, 336(1)
  024ea78  ld 31, 344(1)
  024ea7c  addi 1, 1, 496
  024ea80  blr

M1338_0024ea90:   # 0x24ea90, 0x1c4 bytes
  024ea90  stdu 1, -208(1)
  024ea94  mflr 0
  024ea98  std 0, 224(1)
  024ea9c  stfd 29, 184(1)
  024eaa0  stfd 30, 192(1)
  024eaa4  stfd 31, 200(1)
  024eaa8  std 24, 120(1)
  024eaac  lis 5, 37
  024eab0  lwz 24, 120(3)
  024eab4  std 31, 176(1)
  024eab8  li 4, 0
  024eabc  addi 31, 5, -5500
  024eac0  li 3, 1
  024eac4  li 5, 0
  024eac8  li 6, 1
  024eacc  li 7, 0
  024ead0  li 8, 0
  024ead4  li 9, 1
  024ead8  std 30, 168(1)
  024eadc  std 29, 160(1)
  024eae0  std 28, 152(1)
  024eae4  std 27, 144(1)
  024eae8  std 26, 136(1)
  024eaec  std 25, 128(1)
  024eaf0  std 23, 112(1)
  024eaf4  li 10, 2
  024eaf8  bl 0x502f98
  024eafc  nop
  024eb00  ori 4, 3, 0
  024eb04  li 3, 22
  024eb08  bl 0x174f80
  024eb0c  nop
  024eb10  lfs 29, 0(31)
  024eb14  lis 28, 250
  024eb18  lis 29, 250
  024eb1c  lfs 30, 4(31)
  024eb20  lis 30, 250
  024eb24  lfs 31, 8(31)
  024eb28  lis 3, 250
  024eb2c  li 25, 0
  024eb30  addic 28, 28, 12172
  024eb34  addic 29, 29, 12064
  024eb38  addic 30, 30, 12160
  024eb3c  addic 31, 3, 12480
  024eb40  slwi 4, 25, 2
  024eb44  extsw 4, 4
  024eb48  lwzx 3, 28, 4
  024eb4c  cmpwi 3, 0
  024eb50  bt 2, 0x24ec04
  024eb54  lwzx 5, 29, 4
  024eb58  cmpwi 5, 1
  024eb5c  bf 1, 0x24ec04
  024eb60  lis 5, 114
  024eb64  lfsx 1, 30, 4
  024eb68  slwi 26, 25, 1
  024eb6c  addic 27, 26, 1
  024eb70  lfs 2, -3064(5)
  024eb74  fnmsubs 1, 2, 29, 1
  024eb78  fcmpu 0, 1, 30
  024eb7c  stfsx 1, 30, 4
  024eb80  bt 1, 0x24eb8c
  024eb84  fadds 1, 1, 31
  024eb88  stfsx 1, 30, 4
  024eb8c  ori 4, 25, 0
  024eb90  bl 0x24e228
  024eb94  lwz 3, 4(24)
  024eb98  sldi 5, 26, 8
  024eb9c  lwz 4, 0(24)
  024eba0  sldi 6, 26, 6
  024eba4  addic 3, 3, 40
  024eba8  addic 4, 4, 40
  024ebac  addc 5, 5, 6
  024ebb0  extsw 26, 3
  024ebb4  extsw 23, 4
  024ebb8  addc 5, 5, 31
  024ebbc  ori 3, 26, 0
  024ebc0  ori 4, 23, 0
  024ebc4  li 6, 128
  024ebc8  clrldi 5, 5, 32
  024ebcc  li 7, 64
  024ebd0  ori 8, 25, 0
  024ebd4  bl 0x24d620
  024ebd8  sldi 3, 27, 8
  024ebdc  sldi 4, 27, 6
  024ebe0  li 6, 48
  024ebe4  addc 5, 3, 4
  024ebe8  ori 3, 26, 0
  024ebec  addc 5, 5, 31
  024ebf0  ori 4, 23, 0
  024ebf4  clrldi 5, 5, 32
  024ebf8  li 7, 16
  024ebfc  ori 8, 25, 0
  024ec00  bl 0x24d620
  024ec04  addic 25, 25, 1
  024ec08  extsw 25, 25
  024ec0c  cmpwi 25, 3
  024ec10  bt 0, 0x24eb40
  024ec14  ld 0, 224(1)
  024ec18  mtlr 0
  024ec1c  lfd 29, 184(1)
  024ec20  lfd 30, 192(1)
  024ec24  lfd 31, 200(1)
  024ec28  ld 23, 112(1)
  024ec2c  ld 24, 120(1)
  024ec30  ld 25, 128(1)
  024ec34  ld 26, 136(1)
  024ec38  ld 27, 144(1)
  024ec3c  ld 28, 152(1)
  024ec40  ld 29, 160(1)
  024ec44  ld 30, 168(1)
  024ec48  ld 31, 176(1)
  024ec4c  addi 1, 1, 208
  024ec50  blr

M1338_0024ec54:   # 0x24ec54, 0x14 bytes
  024ec54  lis 3, 122
  024ec58  lis 4, 1
  024ec5c  addic 3, 3, -19240
  024ec60  stw 4, 72(3)
  024ec64  blr

FUN_0024ec68:   # 0x24ec68, 0x11c bytes
  024ec68  stdu 1, -144(1)
  024ec6c  mflr 0
  024ec70  std 0, 160(1)
  024ec74  std 30, 128(1)
  024ec78  ori 30, 3, 0
  024ec7c  std 31, 136(1)
  024ec80  ori 3, 5, 0
  024ec84  std 29, 120(1)
  024ec88  std 28, 112(1)
  024ec8c  ori 31, 4, 0
  024ec90  bl 0xefa28
  024ec94  nop
  024ec98  ori 29, 3, 0
  024ec9c  cmpwi 29, 0
  024eca0  bt 2, 0x24ed60
  024eca4  lwz 3, 36(29)
  024eca8  lfs 1, 44(30)
  024ecac  lwz 4, 36(30)
  024ecb0  lfs 2, 36(3)
  024ecb4  fmuls 1, 2, 1
  024ecb8  lfs 2, 36(4)
  024ecbc  li 6, 1
  024ecc0  li 4, 255
  024ecc4  li 7, 0
  024ecc8  addic 5, 29, 16
  024eccc  ori 3, 30, 0
  024ecd0  stb 4, 48(29)
  024ecd4  sth 4, 50(29)
  024ecd8  fdivs 1, 1, 2
  024ecdc  stb 6, 49(29)
  024ece0  stb 7, 32(29)
  024ece4  ori 4, 31, 0
  024ece8  lwz 28, 120(29)
  024ecec  stw 31, 68(28)
  024ecf0  stfs 1, 44(29)
  024ecf4  bl 0xf1114
  024ecf8  nop
  024ecfc  stw 30, 60(28)
  024ed00  ori 3, 29, 0
  024ed04  bl 0xf31a8
  024ed08  nop
  024ed0c  lfs 1, 64(30)
  024ed10  addic 3, 30, 192
  024ed14  stfs 1, 64(29)
  024ed18  lfs 1, 68(30)
  024ed1c  li 5, 208
  024ed20  li 6, 224
  024ed24  stfs 1, 68(29)
  024ed28  lfs 1, 72(30)
  024ed2c  addic 4, 29, 192
  024ed30  stfs 1, 72(29)
  024ed34  lfs 1, 76(30)
  024ed38  stfs 1, 76(29)
  024ed3c  lvx 2, 0, 3
  024ed40  lvx 3, 5, 30
  024ed44  ori 3, 29, 0
  024ed48  lvx 4, 6, 30
  024ed4c  stvx 2, 0, 4
  024ed50  stvx 3, 5, 29
  024ed54  stvx 4, 6, 29
  024ed58  bl 0xf31a8
  024ed5c  nop
  024ed60  ori 3, 29, 0
  024ed64  ld 0, 160(1)
  024ed68  mtlr 0
  024ed6c  ld 28, 112(1)
  024ed70  ld 29, 120(1)
  024ed74  ld 30, 128(1)
  024ed78  ld 31, 136(1)
  024ed7c  addi 1, 1, 144
  024ed80  blr

UpdateMoby_113:   # 0x24eda0, 0x34c bytes
  024eda0  stdu 1, -208(1)
  024eda4  mflr 0
  024eda8  std 0, 224(1)
  024edac  std 31, 200(1)
  024edb0  ori 31, 3, 0
  024edb4  std 30, 192(1)
  024edb8  lbz 3, 32(31)
  024edbc  lwz 30, 120(31)
  024edc0  cmpwi 3, 4
  024edc4  cmpwi 1, 3, 3
  024edc8  cmpwi 6, 3, 2
  024edcc  cmpwi 7, 3, 1
  024edd0  bt 2, 0x24f064
  024edd4  bt 6, 0x24ee78
  024edd8  bt 26, 0x24f0d4
  024eddc  bt 30, 0x24ee68
  024ede0  cmpwi 3, 0
  024ede4  bf 2, 0x24f0d4
  024ede8  li 3, 1
  024edec  li 5, 0
  024edf0  li 7, 33
  024edf4  li 4, 34
  024edf8  li 6, 35
  024edfc  stb 3, 32(31)
  024ee00  li 8, 37
  024ee04  stb 5, 32(30)
  024ee08  li 3, 38
  024ee0c  stbx 5, 30, 7
  024ee10  li 9, 39
  024ee14  stbx 5, 30, 4
  024ee18  stbx 5, 30, 6
  024ee1c  li 7, 41
  024ee20  stb 5, 36(30)
  024ee24  li 4, 42
  024ee28  stbx 5, 30, 8
  024ee2c  li 6, 43
  024ee30  stbx 5, 30, 3
  024ee34  li 8, 46
  024ee38  stbx 5, 30, 9
  024ee3c  li 3, 45
  024ee40  stb 5, 40(30)
  024ee44  li 9, 47
  024ee48  stbx 5, 30, 7
  024ee4c  stbx 5, 30, 4
  024ee50  stbx 5, 30, 6
  024ee54  stb 5, 44(30)
  024ee58  stbx 5, 30, 3
  024ee5c  stbx 5, 30, 8
  024ee60  stbx 5, 30, 9
  024ee64  b 0x24f0d4
  024ee68  lwz 3, 60(30)
  024ee6c  ld 3, 56(3)
  024ee70  std 3, 56(31)
  024ee74  b 0x24f0d4
  024ee78  lfs 1, 16(31)
  024ee7c  lfs 2, 16(30)
  024ee80  fadds 1, 1, 2
  024ee84  lis 3, 37
  024ee88  lfs 2, 20(31)
  024ee8c  lfs 3, 24(31)
  024ee90  addi 4, 3, -4732
  024ee94  lis 7, 114
  024ee98  addic 3, 31, 16
  024ee9c  li 5, 0
  024eea0  ori 6, 31, 0
  024eea4  stfs 1, 16(31)
  024eea8  lfs 1, 20(30)
  024eeac  fadds 1, 2, 1
  024eeb0  stfs 1, 20(31)
  024eeb4  lfs 1, 24(30)
  024eeb8  fadds 1, 3, 1
  024eebc  stfs 1, 24(31)
  024eec0  lfs 1, 0(4)
  024eec4  lfs 2, 16(30)
  024eec8  lfs 3, 20(30)
  024eecc  fmuls 2, 2, 1
  024eed0  fmuls 3, 3, 1
  024eed4  lfs 4, 24(30)
  024eed8  stfs 2, 16(30)
  024eedc  stfs 3, 20(30)
  024eee0  lfs 2, 4(4)
  024eee4  lfs 3, -3048(7)
  024eee8  fmuls 2, 3, 2
  024eeec  fmsubs 1, 4, 1, 2
  024eef0  stfs 1, 24(30)
  024eef4  lfs 1, 8(4)
  024eef8  bl 0x59e20
  024eefc  nop
  024ef00  cmpwi 3, 0
  024ef04  bt 2, 0x24ef88
  024ef08  lis 3, 161
  024ef0c  addic 3, 3, 2368
  024ef10  lwz 4, 24(3)
  024ef14  cmpwi 4, 0
  024ef18  bt 2, 0x24ef68
  024ef1c  lhz 4, 166(4)
  024ef20  cmpwi 1, 4, 1284
  024ef24  cmpwi 4, 113
  024ef28  cror 2, 2, 6
  024ef2c  bt 2, 0x24ef88
  024ef30  cmpwi 4, 1332
  024ef34  bt 2, 0x24ef88
  024ef38  cmpwi 4, 1333
  024ef3c  bt 2, 0x24ef88
  024ef40  cmpwi 4, 1334
  024ef44  bt 2, 0x24ef88
  024ef48  cmpwi 4, 1335
  024ef4c  bt 2, 0x24ef88
  024ef50  cmpwi 4, 1336
  024ef54  bt 2, 0x24ef88
  024ef58  cmpwi 4, 1337
  024ef5c  bt 2, 0x24ef88
  024ef60  cmpwi 4, 1338
  024ef64  bt 2, 0x24ef88
  024ef68  addic 4, 30, 16
  024ef6c  ori 5, 3, 0
  024ef70  ori 3, 4, 0
  024ef74  addic 5, 5, 64
  024ef78  bl 0x500608
  024ef7c  nop
  024ef80  li 3, 4
  024ef84  stb 3, 32(31)
  024ef88  lfs 1, 64(31)
  024ef8c  lfs 2, 48(30)
  024ef90  bl 0x502578
  024ef94  nop
  024ef98  stfs 1, 64(31)
  024ef9c  lfs 1, 68(31)
  024efa0  lfs 2, 52(30)
  024efa4  bl 0x502578
  024efa8  nop
  024efac  stfs 1, 68(31)
  024efb0  lfs 1, 72(31)
  024efb4  lfs 2, 56(30)
  024efb8  bl 0x502578
  024efbc  nop
  024efc0  lwz 3, 16(31)
  024efc4  lis 4, 16672
  024efc8  stfs 1, 72(31)
  024efcc  srawi 30, 3, 31
  024efd0  srwi 5, 30, 1
  024efd4  xor 3, 5, 3
  024efd8  subc 30, 3, 30
  024efdc  cmpw 30, 4
  024efe0  bt 0, 0x24f054
  024efe4  lis 3, 17533
  024efe8  ori 3, 3, 16384
  024efec  cmpw 30, 3
  024eff0  bt 1, 0x24f054
  024eff4  lwz 5, 20(31)
  024eff8  lis 3, 17533
  024effc  srawi 6, 5, 31
  024f000  lis 4, 16672
  024f004  srwi 7, 6, 1
  024f008  ori 3, 3, 16384
  024f00c  xor 5, 7, 5
  024f010  subc 5, 5, 6
  024f014  cmpw 1, 5, 3
  024f018  cmpw 5, 4
  024f01c  cror 2, 0, 5
  024f020  bt 2, 0x24f054
  024f024  lwz 5, 24(31)
  024f028  lis 3, 17533
  024f02c  srawi 6, 5, 31
  024f030  lis 4, 16672
  024f034  srwi 7, 6, 1
  024f038  ori 3, 3, 16384
  024f03c  xor 5, 7, 5
  024f040  subc 5, 5, 6
  024f044  cmpw 5, 4
  024f048  cmpw 1, 5, 3
  024f04c  bt 0, 0x24f054
  024f050  bf 5, 0x24f0d4
  024f054  ori 3, 31, 0
  024f058  bl 0xefb38
  024f05c  nop
  024f060  b 0x24f0d4
  024f064  lis 3, 37
  024f068  li 7, -1
  024f06c  addi 3, 3, -4732
  024f070  li 6, 1
  024f074  li 11, 0
  024f078  addic 4, 30, 16
  024f07c  li 5, 0
  024f080  lfs 2, 12(3)
  024f084  lfs 1, 8(3)
  024f088  li 8, 10
  024f08c  lfs 5, 16(3)
  024f090  li 9, 3
  024f094  lfs 6, 20(3)
  024f098  li 10, 16
  024f09c  lfs 7, 24(3)
  024f0a0  fmr 3, 2
  024f0a4  std 7, 144(1)
  024f0a8  ori 3, 31, 0
  024f0ac  std 6, 160(1)
  024f0b0  fmr 4, 1
  024f0b4  std 6, 168(1)
  024f0b8  std 7, 176(1)
  024f0bc  std 11, 184(1)
  024f0c0  bl 0x10e030
  024f0c4  nop
  024f0c8  ori 3, 31, 0
  024f0cc  bl 0xefb38
  024f0d0  nop
  024f0d4  ld 0, 224(1)
  024f0d8  mtlr 0
  024f0dc  ld 30, 192(1)
  024f0e0  ld 31, 200(1)
  024f0e4  addi 1, 1, 208
  024f0e8  blr
