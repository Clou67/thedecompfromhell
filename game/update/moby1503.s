# game/update/moby1503.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1503:   # 0x28d1f8, 0x784 bytes
  028d1f8  stdu 1, -432(1)
  028d1fc  mflr 0
  028d200  std 0, 448(1)
  028d204  stfd 29, 408(1)
  028d208  stfd 30, 416(1)
  028d20c  stfd 31, 424(1)
  028d210  std 30, 392(1)
  028d214  ori 30, 3, 0
  028d218  std 31, 400(1)
  028d21c  lbz 3, 32(30)
  028d220  lwz 31, 120(30)
  028d224  cmpwi 3, 1
  028d228  cmpwi 1, 3, 3
  028d22c  cmpwi 6, 3, 2
  028d230  std 29, 384(1)
  028d234  std 28, 376(1)
  028d238  cmpwi 7, 3, 0
  028d23c  bt 1, 0x28d250
  028d240  cmpwi 3, -1
  028d244  bf 1, 0x28d49c
  028d248  bf 29, 0x28d25c
  028d24c  b 0x28d26c
  028d250  bf 25, 0x28d2dc
  028d254  bf 5, 0x28d430
  028d258  b 0x28d49c
  028d25c  ori 3, 30, 0
  028d260  bl 0xefb38
  028d264  nop
  028d268  b 0x28d950
  028d26c  addic 3, 31, 48
  028d270  bl 0x4fff60
  028d274  nop
  028d278  cmpwi 3, 0
  028d27c  bt 2, 0x28d49c
  028d280  lwz 6, 52(31)
  028d284  li 4, 0
  028d288  clrlwi 6, 6, 31
  028d28c  li 3, 2
  028d290  subc 4, 4, 6
  028d294  li 5, 3
  028d298  cntlzw 4, 4
  028d29c  subc 3, 3, 5
  028d2a0  sldi 4, 4, 58
  028d2a4  lis 6, 41
  028d2a8  sradi 4, 4, 63
  028d2ac  addi 6, 6, -11808
  028d2b0  and 3, 4, 3
  028d2b4  lis 4, 114
  028d2b8  addc 3, 5, 3
  028d2bc  stb 3, 32(30)
  028d2c0  lfs 1, 0(6)
  028d2c4  lfs 2, -3056(4)
  028d2c8  fmuls 1, 2, 1
  028d2cc  bl 0x502758
  028d2d0  nop
  028d2d4  stw 3, 48(31)
  028d2d8  b 0x28d950
  028d2dc  lfs 1, 36(31)
  028d2e0  lfs 2, 32(31)
  028d2e4  lfs 3, 220(30)
  028d2e8  lfs 4, 208(30)
  028d2ec  fmuls 3, 3, 1
  028d2f0  lfs 5, 212(30)
  028d2f4  fmuls 4, 4, 1
  028d2f8  lfs 6, 204(30)
  028d2fc  lfs 7, 40(31)
  028d300  lfs 8, 192(30)
  028d304  fmuls 5, 5, 1
  028d308  lfs 9, 216(30)
  028d30c  lfs 10, 196(30)
  028d310  fmuls 1, 9, 1
  028d314  lfs 9, 200(30)
  028d318  fmadds 3, 6, 2, 3
  028d31c  lfs 6, 236(30)
  028d320  fmadds 4, 8, 2, 4
  028d324  lfs 8, 224(30)
  028d328  fmadds 5, 10, 2, 5
  028d32c  lfs 10, 228(30)
  028d330  lfs 11, 232(30)
  028d334  fmadds 1, 9, 2, 1
  028d338  lfs 12, 44(31)
  028d33c  lwz 3, 52(31)
  028d340  fmadds 2, 6, 7, 3
  028d344  rlwinm 3, 3, 0, 30, 30
  028d348  fmadds 3, 8, 7, 4
  028d34c  cmpwi 3, 0
  028d350  fmadds 4, 10, 7, 5
  028d354  fmadds 1, 11, 7, 1
  028d358  fadds 2, 2, 12
  028d35c  stfs 2, 220(1)
  028d360  lfs 2, 16(30)
  028d364  lfs 5, 20(30)
  028d368  fadds 2, 3, 2
  028d36c  lfs 3, 24(30)
  028d370  fadds 4, 4, 5
  028d374  fadds 1, 1, 3
  028d378  stfs 2, 208(1)
  028d37c  stfs 4, 212(1)
  028d380  stfs 1, 216(1)
  028d384  bt 2, 0x28d3b8
  028d388  lis 3, 41
  028d38c  lfs 1, 44(31)
  028d390  addic 4, 1, 208
  028d394  addi 5, 3, -11808
  028d398  ori 3, 30, 0
  028d39c  li 6, -1
  028d3a0  lfs 3, 4(5)
  028d3a4  lfs 2, 8(5)
  028d3a8  fmuls 1, 1, 3
  028d3ac  bl 0x110040
  028d3b0  nop
  028d3b4  b 0x28d420
  028d3b8  lis 3, 41
  028d3bc  lfs 3, 44(31)
  028d3c0  li 7, -1
  028d3c4  addi 3, 3, -11808
  028d3c8  li 6, 0
  028d3cc  lis 4, 161
  028d3d0  li 9, 3
  028d3d4  addic 4, 4, 23856
  028d3d8  lfs 4, 4(3)
  028d3dc  addic 5, 1, 208
  028d3e0  lfs 1, 8(3)
  028d3e4  li 8, 5
  028d3e8  fmuls 4, 3, 4
  028d3ec  lfs 5, 12(3)
  028d3f0  std 7, 144(1)
  028d3f4  ori 3, 30, 0
  028d3f8  std 6, 160(1)
  028d3fc  li 10, 5
  028d400  std 6, 168(1)
  028d404  fmr 2, 1
  028d408  std 7, 176(1)
  028d40c  fmr 7, 1
  028d410  std 6, 184(1)
  028d414  fmr 6, 4
  028d418  bl 0x10e030
  028d41c  nop
  028d420  ori 3, 30, 0
  028d424  bl 0xefb38
  028d428  nop
  028d42c  b 0x28d950
  028d430  addic 3, 31, 48
  028d434  bl 0x4fff60
  028d438  nop
  028d43c  cmpwi 3, 0
  028d440  bt 2, 0x28d454
  028d444  ori 3, 30, 0
  028d448  bl 0xefb38
  028d44c  nop
  028d450  b 0x28d950
  028d454  lwz 4, 48(31)
  028d458  lis 3, 41
  028d45c  extsw 4, 4
  028d460  addi 3, 3, -11808
  028d464  std 4, 352(1)
  028d468  lis 4, 114
  028d46c  lfs 1, 0(3)
  028d470  lfs 2, -3056(4)
  028d474  fmuls 1, 2, 1
  028d478  lfd 2, 352(1)
  028d47c  fcfid 2, 2
  028d480  frsp 2, 2
  028d484  fdivs 1, 2, 1
  028d488  lfs 2, 16(3)
  028d48c  fmuls 1, 1, 2
  028d490  bl 0x502758
  028d494  nop
  028d498  stb 3, 35(30)
  028d49c  ori 29, 30, 0
  028d4a0  addic 28, 1, 240
  028d4a4  addic 30, 31, 16
  028d4a8  ori 3, 28, 0
  028d4ac  ori 4, 30, 0
  028d4b0  bl 0x500b64
  028d4b4  nop
  028d4b8  lfs 1, 208(29)
  028d4bc  addic 3, 29, 192
  028d4c0  lfs 2, 36(31)
  028d4c4  ori 4, 28, 0
  028d4c8  lfs 3, 212(29)
  028d4cc  ori 5, 3, 0
  028d4d0  lfs 4, 192(29)
  028d4d4  fmuls 1, 1, 2
  028d4d8  lfs 5, 32(31)
  028d4dc  fmuls 3, 3, 2
  028d4e0  lfs 6, 216(29)
  028d4e4  lfs 7, 196(29)
  028d4e8  fmuls 2, 6, 2
  028d4ec  lfs 6, 200(29)
  028d4f0  lfs 8, 224(29)
  028d4f4  lfs 9, 40(31)
  028d4f8  fmadds 1, 4, 5, 1
  028d4fc  fmadds 3, 7, 5, 3
  028d500  lfs 4, 228(29)
  028d504  lfs 7, 232(29)
  028d508  fmadds 2, 6, 5, 2
  028d50c  fmadds 31, 8, 9, 1
  028d510  fmadds 30, 4, 9, 3
  028d514  fmadds 29, 7, 9, 2
  028d518  bl 0x5014d4
  028d51c  nop
  028d520  lfs 1, 208(29)
  028d524  lfs 2, 36(31)
  028d528  lfs 3, 212(29)
  028d52c  lfs 4, 192(29)
  028d530  lfs 5, 32(31)
  028d534  fmuls 1, 1, 2
  028d538  lfs 6, 216(29)
  028d53c  fmuls 3, 3, 2
  028d540  lfs 7, 196(29)
  028d544  fmuls 2, 6, 2
  028d548  lfs 6, 200(29)
  028d54c  lfs 8, 224(29)
  028d550  lfs 9, 40(31)
  028d554  fmadds 1, 4, 5, 1
  028d558  fmadds 3, 7, 5, 3
  028d55c  lfs 4, 228(29)
  028d560  lfs 7, 232(29)
  028d564  fmadds 2, 6, 5, 2
  028d568  addic 3, 1, 192
  028d56c  li 5, 0
  028d570  fmadds 1, 8, 9, 1
  028d574  fmadds 3, 4, 9, 3
  028d578  lfs 4, 16(29)
  028d57c  fmadds 2, 7, 9, 2
  028d580  lfs 5, 20(29)
  028d584  lfs 6, 24(29)
  028d588  fsubs 1, 1, 31
  028d58c  fsubs 3, 3, 30
  028d590  fsubs 2, 2, 29
  028d594  ori 6, 29, 0
  028d598  fsubs 1, 4, 1
  028d59c  fsubs 3, 5, 3
  028d5a0  fsubs 2, 6, 2
  028d5a4  stfs 1, 16(29)
  028d5a8  stfs 3, 20(29)
  028d5ac  stfs 2, 24(29)
  028d5b0  lfs 4, 0(31)
  028d5b4  fadds 1, 1, 4
  028d5b8  stfs 1, 16(29)
  028d5bc  lfs 1, 4(31)
  028d5c0  fadds 1, 3, 1
  028d5c4  stfs 1, 20(29)
  028d5c8  lfs 1, 8(31)
  028d5cc  fadds 1, 2, 1
  028d5d0  stfs 1, 24(29)
  028d5d4  lfs 1, 8(31)
  028d5d8  lfs 2, 56(31)
  028d5dc  fsubs 1, 1, 2
  028d5e0  lfs 2, 44(31)
  028d5e4  lfs 3, 32(31)
  028d5e8  lfs 4, 36(31)
  028d5ec  lfs 5, 40(31)
  028d5f0  stfs 1, 8(31)
  028d5f4  lfs 1, 208(29)
  028d5f8  lfs 6, 212(29)
  028d5fc  lfs 7, 204(29)
  028d600  lfs 8, 192(29)
  028d604  fmuls 1, 1, 4
  028d608  fmadds 7, 7, 3, 2
  028d60c  lfs 9, 216(29)
  028d610  fmuls 6, 6, 4
  028d614  lfs 10, 196(29)
  028d618  fmuls 9, 9, 4
  028d61c  lfs 11, 200(29)
  028d620  lfs 12, 236(29)
  028d624  lfs 13, 224(29)
  028d628  fmadds 1, 8, 3, 1
  028d62c  fmadds 7, 12, 5, 7
  028d630  fmadds 6, 10, 3, 6
  028d634  lfs 8, 228(29)
  028d638  fmadds 3, 11, 3, 9
  028d63c  lfs 10, 220(29)
  028d640  lfs 9, 232(29)
  028d644  fmadds 11, 13, 5, 1
  028d648  fmadds 4, 10, 4, 7
  028d64c  fmadds 6, 8, 5, 6
  028d650  fmadds 3, 9, 5, 3
  028d654  fmr 1, 2
  028d658  stfs 4, 204(1)
  028d65c  lfs 2, 16(29)
  028d660  lfs 4, 20(29)
  028d664  fadds 2, 11, 2
  028d668  lfs 5, 24(29)
  028d66c  fadds 4, 6, 4
  028d670  fadds 3, 3, 5
  028d674  stfs 2, 192(1)
  028d678  stfs 4, 196(1)
  028d67c  stfs 3, 200(1)
  028d680  bl 0x59e20
  028d684  nop
  028d688  cmpwi 3, 0
  028d68c  bt 2, 0x28d950
  028d690  lis 29, 161
  028d694  addic 29, 29, 2368
  028d698  lis 3, 41
  028d69c  lfs 5, 68(29)
  028d6a0  lfs 6, 64(29)
  028d6a4  fmuls 1, 5, 5
  028d6a8  lfs 4, 72(29)
  028d6ac  addi 3, 3, -11808
  028d6b0  lfs 31, 8(3)
  028d6b4  fmadds 3, 6, 6, 1
  028d6b8  fmr 2, 31
  028d6bc  fmadds 3, 4, 4, 3
  028d6c0  fmr 1, 2
  028d6c4  fsqrts 7, 3
  028d6c8  fmr 30, 1
  028d6cc  fcmpu 0, 7, 30
  028d6d0  bt 2, 0x28d724
  028d6d4  frsqrte 1, 3
  028d6d8  lis 3, 41
  028d6dc  addi 3, 3, -11808
  028d6e0  lfs 2, 4(3)
  028d6e4  lfs 7, 20(3)
  028d6e8  fmuls 8, 3, 1
  028d6ec  fmuls 9, 2, 1
  028d6f0  fnmsubs 8, 8, 1, 7
  028d6f4  fmadds 1, 8, 9, 1
  028d6f8  fmuls 8, 3, 1
  028d6fc  fmuls 9, 2, 1
  028d700  fnmsubs 8, 8, 1, 7
  028d704  fmadds 1, 8, 9, 1
  028d708  fmuls 3, 3, 1
  028d70c  fmuls 2, 2, 1
  028d710  fnmsubs 3, 3, 1, 7
  028d714  fmadds 2, 3, 2, 1
  028d718  fmuls 30, 6, 2
  028d71c  fmuls 1, 5, 2
  028d720  fmuls 2, 4, 2
  028d724  stfs 30, 64(29)
  028d728  stfs 1, 68(29)
  028d72c  stfs 2, 72(29)
  028d730  lfs 3, 4(31)
  028d734  lfs 4, 0(31)
  028d738  fmuls 1, 3, 1
  028d73c  lfs 5, 8(31)
  028d740  fmuls 3, 3, 3
  028d744  fmadds 30, 4, 30, 1
  028d748  fmadds 1, 4, 4, 3
  028d74c  fmadds 30, 5, 2, 30
  028d750  fmadds 29, 5, 5, 1
  028d754  fcmpu 0, 30, 31
  028d758  fsqrts 29, 29
  028d75c  cror 6, 1, 2
  028d760  bt 6, 0x28d950
  028d764  addic 5, 29, 64
  028d768  ori 3, 31, 0
  028d76c  ori 4, 31, 0
  028d770  bl 0x500608
  028d774  nop
  028d778  lfs 1, 68(29)
  028d77c  lfs 2, 64(29)
  028d780  fmuls 3, 1, 1
  028d784  lfs 4, 72(29)
  028d788  lis 3, 41
  028d78c  addi 3, 3, -11808
  028d790  fmadds 3, 2, 2, 3
  028d794  lfs 6, 4(3)
  028d798  fmuls 9, 30, 6
  028d79c  lfs 5, 4(31)
  028d7a0  lfs 7, 0(31)
  028d7a4  fmadds 3, 4, 4, 3
  028d7a8  lfs 8, 8(31)
  028d7ac  fsqrts 3, 3
  028d7b0  li 3, 0
  028d7b4  fdivs 9, 9, 3
  028d7b8  fsub 10, 31, 3
  028d7bc  fsub 12, 31, 3
  028d7c0  fsub 13, 31, 3
  028d7c4  fsub 11, 3, 31
  028d7c8  fsub 0, 3, 31
  028d7cc  fsub 3, 3, 31
  028d7d0  fmuls 1, 1, 9
  028d7d4  fmuls 2, 2, 9
  028d7d8  fmuls 4, 4, 9
  028d7dc  fsel 9, 10, 31, 1
  028d7e0  fsel 10, 12, 31, 2
  028d7e4  fsel 12, 13, 31, 4
  028d7e8  fsel 1, 11, 9, 1
  028d7ec  fsel 2, 0, 10, 2
  028d7f0  fsel 3, 3, 12, 4
  028d7f4  fadds 4, 5, 1
  028d7f8  fadds 5, 7, 2
  028d7fc  fadds 3, 8, 3
  028d800  fmuls 1, 4, 4
  028d804  fmadds 1, 5, 5, 1
  028d808  fmadds 1, 3, 3, 1
  028d80c  fsqrts 1, 1
  028d810  fmr 2, 31
  028d814  fdivs 7, 29, 1
  028d818  fsub 8, 31, 1
  028d81c  fsub 9, 31, 1
  028d820  fsub 10, 31, 1
  028d824  fsub 11, 1, 31
  028d828  fsub 12, 1, 31
  028d82c  fsub 13, 1, 31
  028d830  fmr 1, 2
  028d834  fmuls 5, 5, 7
  028d838  fmuls 4, 4, 7
  028d83c  fmuls 3, 3, 7
  028d840  fsel 7, 8, 31, 5
  028d844  fsel 8, 9, 31, 4
  028d848  fsel 9, 10, 31, 3
  028d84c  fsel 7, 11, 7, 5
  028d850  fsel 5, 12, 8, 4
  028d854  fsel 4, 13, 9, 3
  028d858  stfs 7, 0(31)
  028d85c  stfs 5, 4(31)
  028d860  stfs 4, 8(31)
  028d864  lfs 3, 72(29)
  028d868  lfs 8, 68(29)
  028d86c  fmuls 9, 7, 3
  028d870  lfs 10, 64(29)
  028d874  fmuls 11, 4, 8
  028d878  fmuls 12, 5, 10
  028d87c  stw 3, 236(1)
  028d880  fmsubs 4, 4, 10, 9
  028d884  fmsubs 5, 5, 3, 11
  028d888  fmsubs 3, 7, 8, 12
  028d88c  fmuls 7, 4, 4
  028d890  fmadds 29, 5, 5, 7
  028d894  fmadds 29, 3, 3, 29
  028d898  fsqrts 7, 29
  028d89c  fcmpu 0, 7, 31
  028d8a0  bt 2, 0x28d8f0
  028d8a4  frsqrte 1, 29
  028d8a8  lis 3, 41
  028d8ac  addi 3, 3, -11808
  028d8b0  lfs 2, 20(3)
  028d8b4  fmuls 7, 29, 1
  028d8b8  fmuls 8, 6, 1
  028d8bc  fnmsubs 7, 7, 1, 2
  028d8c0  fmadds 1, 7, 8, 1
  028d8c4  fmuls 7, 29, 1
  028d8c8  fmuls 8, 6, 1
  028d8cc  fnmsubs 7, 7, 1, 2
  028d8d0  fmadds 1, 7, 8, 1
  028d8d4  fmuls 7, 29, 1
  028d8d8  fmuls 6, 6, 1
  028d8dc  fnmsubs 2, 7, 1, 2
  028d8e0  fmadds 2, 2, 6, 1
  028d8e4  fmuls 31, 5, 2
  028d8e8  fmuls 1, 4, 2
  028d8ec  fmuls 2, 3, 2
  028d8f0  stfs 31, 224(1)
  028d8f4  stfs 1, 228(1)
  028d8f8  stfs 2, 232(1)
  028d8fc  lfs 1, 20(31)
  028d900  lfs 2, 16(31)
  028d904  fmuls 1, 1, 1
  028d908  lfs 3, 24(31)
  028d90c  addic 31, 1, 224
  028d910  ori 3, 31, 0
  028d914  ori 4, 31, 0
  028d918  fmadds 1, 2, 2, 1
  028d91c  fmadds 1, 3, 3, 1
  028d920  fsqrts 1, 1
  028d924  bl 0x10c038
  028d928  nop
  028d92c  addic 29, 1, 288
  028d930  ori 3, 31, 0
  028d934  ori 4, 29, 0
  028d938  bl 0x501e18
  028d93c  nop
  028d940  ori 3, 29, 0
  028d944  ori 4, 30, 0
  028d948  bl 0x10c1e8
  028d94c  nop
  028d950  ld 0, 448(1)
  028d954  mtlr 0
  028d958  lfd 29, 408(1)
  028d95c  lfd 30, 416(1)
  028d960  lfd 31, 424(1)
  028d964  ld 28, 376(1)
  028d968  ld 29, 384(1)
  028d96c  ld 30, 392(1)
  028d970  ld 31, 400(1)
  028d974  addi 1, 1, 432
  028d978  blr
