# game/update/moby1285.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1288_0023d33c:   # 0x23d33c, 0x14 bytes
  023d33c  lis 3, 121
  023d340  lis 4, 1
  023d344  addic 3, 3, -8936
  023d348  stw 4, 72(3)
  023d34c  blr

M1288_0023d358:   # 0x23d358, 0x118 bytes
  023d358  stdu 1, -128(1)
  023d35c  mflr 0
  023d360  std 0, 144(1)
  023d364  std 31, 120(1)
  023d368  ori 31, 3, 0
  023d36c  std 30, 112(1)
  023d370  ori 3, 4, 0
  023d374  bl 0xefa28
  023d378  nop
  023d37c  ori 30, 3, 0
  023d380  cmpwi 30, 0
  023d384  bt 2, 0x23d454
  023d388  li 3, 255
  023d38c  vspltisw 3, -1
  023d390  li 4, 1
  023d394  li 5, 0
  023d398  stb 3, 48(30)
  023d39c  sth 3, 50(30)
  023d3a0  stb 4, 49(30)
  023d3a4  lis 3, 36
  023d3a8  stb 5, 32(30)
  023d3ac  lis 4, 114
  023d3b0  lfs 1, 16(31)
  023d3b4  addi 3, 3, -11440
  023d3b8  li 5, -3056
  023d3bc  vslw 3, 3, 3
  023d3c0  stfs 1, 16(30)
  023d3c4  lfs 1, 20(31)
  023d3c8  stfs 1, 20(30)
  023d3cc  lfs 1, 24(31)
  023d3d0  stfs 1, 24(30)
  023d3d4  lfs 1, 28(31)
  023d3d8  stfs 1, 28(30)
  023d3dc  lfs 1, 64(31)
  023d3e0  stfs 1, 64(30)
  023d3e4  lfs 1, 68(31)
  023d3e8  stfs 1, 68(30)
  023d3ec  lfs 1, 72(31)
  023d3f0  stfs 1, 72(30)
  023d3f4  lfs 1, 76(31)
  023d3f8  stfs 1, 76(30)
  023d3fc  lvlx 2, 0, 3
  023d400  lvlx 4, 5, 4
  023d404  vspltw 2, 2, 0
  023d408  li 4, 188
  023d40c  ori 3, 30, 0
  023d410  vmaddfp 2, 4, 2, 3
  023d414  vctsxs 2, 2, 0
  023d418  vspltb 2, 2, 3
  023d41c  stvebx 2, 4, 30
  023d420  bl 0xf31a8
  023d424  nop
  023d428  ori 3, 30, 0
  023d42c  bl 0x10c000
  023d430  nop
  023d434  lfs 1, 44(31)
  023d438  stfs 1, 44(30)
  023d43c  lhz 3, 52(31)
  023d440  lwz 4, 120(30)
  023d444  sth 3, 52(30)
  023d448  lwz 3, 120(31)
  023d44c  lwz 3, 0(3)
  023d450  stw 3, 0(4)
  023d454  ori 3, 30, 0
  023d458  ld 0, 144(1)
  023d45c  mtlr 0
  023d460  ld 30, 112(1)
  023d464  ld 31, 120(1)
  023d468  addi 1, 1, 128
  023d46c  blr

UpdateMoby_1285:   # 0x23d4d8, 0x7d8 bytes
  023d4d8  stdu 1, -560(1)
  023d4dc  mflr 0
  023d4e0  std 0, 576(1)
  023d4e4  stfd 14, 416(1)
  023d4e8  stfd 15, 424(1)
  023d4ec  stfd 16, 432(1)
  023d4f0  stfd 17, 440(1)
  023d4f4  stfd 18, 448(1)
  023d4f8  stfd 19, 456(1)
  023d4fc  stfd 20, 464(1)
  023d500  stfd 21, 472(1)
  023d504  stfd 22, 480(1)
  023d508  stfd 23, 488(1)
  023d50c  stfd 24, 496(1)
  023d510  stfd 25, 504(1)
  023d514  stfd 26, 512(1)
  023d518  stfd 27, 520(1)
  023d51c  stfd 28, 528(1)
  023d520  stfd 29, 536(1)
  023d524  stfd 30, 544(1)
  023d528  stfd 31, 552(1)
  023d52c  std 31, 408(1)
  023d530  lbz 4, 32(3)
  023d534  std 30, 400(1)
  023d538  ori 31, 3, 0
  023d53c  lwz 30, 120(3)
  023d540  std 29, 392(1)
  023d544  std 28, 384(1)
  023d548  std 27, 376(1)
  023d54c  std 26, 368(1)
  023d550  std 25, 360(1)
  023d554  std 24, 352(1)
  023d558  cmpwi 4, 0
  023d55c  bf 2, 0x23d58c
  023d560  lwz 3, 0(30)
  023d564  cmpwi 3, -1
  023d568  bt 2, 0x23d584
  023d56c  lis 4, 151
  023d570  extsw 3, 3
  023d574  addic 4, 4, -16400
  023d578  li 5, 0
  023d57c  addc 3, 4, 3
  023d580  stb 5, 67(3)
  023d584  li 3, 1
  023d588  stb 3, 32(31)
  023d58c  lbz 3, 176(31)
  023d590  cmpwi 3, 255
  023d594  bt 2, 0x23d5f8
  023d598  lis 4, 151
  023d59c  lis 5, 161
  023d5a0  addic 5, 5, -13692
  023d5a4  lwz 4, -25488(4)
  023d5a8  addc 3, 3, 5
  023d5ac  slwi 4, 4, 4
  023d5b0  clrldi 3, 3, 32
  023d5b4  extsw 4, 4
  023d5b8  lbzx 3, 3, 4
  023d5bc  cmpwi 3, 255
  023d5c0  bf 2, 0x23d5f8
  023d5c4  lwz 30, 0(30)
  023d5c8  cmpwi 30, -1
  023d5cc  bt 2, 0x23d5e8
  023d5d0  lis 3, 151
  023d5d4  extsw 4, 30
  023d5d8  addic 3, 3, -16400
  023d5dc  li 5, 1
  023d5e0  addc 3, 3, 4
  023d5e4  stb 5, 67(3)
  023d5e8  ori 3, 31, 0
  023d5ec  bl 0xefb38
  023d5f0  nop
  023d5f4  b 0x23dc38
  023d5f8  li 29, 0
  023d5fc  ori 3, 31, 0
  023d600  ori 25, 29, 0
  023d604  lis 4, 4
  023d608  li 5, 0
  023d60c  bl 0x10675c
  023d610  nop
  023d614  ori 28, 3, 0
  023d618  addic 3, 31, 188
  023d61c  bl 0x500060
  023d620  nop
  023d624  cmpwi 3, 0
  023d628  bt 2, 0x23dc38
  023d62c  cmpwi 28, 0
  023d630  bt 2, 0x23dc38
  023d634  lhz 3, 166(31)
  023d638  extsh 3, 3
  023d63c  cmpwi 3, 1288
  023d640  bf 0, 0x23d65c
  023d644  addic 4, 3, 1
  023d648  ori 3, 31, 0
  023d64c  bl 0x23d358
  023d650  cmpwi 3, 0
  023d654  bt 2, 0x23d65c
  023d658  li 29, 1
  023d65c  lis 3, 36
  023d660  vspltisw 2, -1
  023d664  lis 4, 114
  023d668  addi 3, 3, -11152
  023d66c  li 5, -3056
  023d670  vslw 2, 2, 2
  023d674  lvlx 3, 0, 3
  023d678  lvlx 4, 5, 4
  023d67c  li 3, 188
  023d680  vspltw 3, 3, 0
  023d684  lfs 1, 16(31)
  023d688  lfs 2, 20(31)
  023d68c  lfs 3, 24(31)
  023d690  vmaddfp 2, 4, 3, 2
  023d694  lhz 4, 166(31)
  023d698  lfs 4, 28(31)
  023d69c  extsh 4, 4
  023d6a0  cmpwi 4, 1288
  023d6a4  vctsxs 2, 2, 0
  023d6a8  vspltb 2, 2, 3
  023d6ac  stvebx 2, 3, 31
  023d6b0  stfs 1, 192(1)
  023d6b4  stfs 2, 196(1)
  023d6b8  stfd 1, 336(1)
  023d6bc  stfs 3, 200(1)
  023d6c0  stfd 2, 328(1)
  023d6c4  stfs 4, 204(1)
  023d6c8  stfd 3, 320(1)
  023d6cc  bf 0, 0x23d6e8
  023d6d0  li 3, 0
  023d6d4  li 4, 0
  023d6d8  ori 5, 31, 0
  023d6dc  bl 0x15d12c
  023d6e0  nop
  023d6e4  b 0x23d6fc
  023d6e8  li 3, 0
  023d6ec  li 4, 0
  023d6f0  ori 5, 31, 0
  023d6f4  bl 0x15d12c
  023d6f8  nop
  023d6fc  li 3, 255
  023d700  lis 4, 161
  023d704  lis 5, 16217
  023d708  li 27, 40
  023d70c  stb 3, 164(31)
  023d710  lwz 3, 1812(4)
  023d714  ori 4, 5, 39322
  023d718  srawi 5, 3, 31
  023d71c  srwi 6, 5, 1
  023d720  xor 3, 6, 3
  023d724  subc 3, 3, 5
  023d728  cmpw 3, 4
  023d72c  bt 1, 0x23d758
  023d730  lis 3, 161
  023d734  lis 4, 16217
  023d738  ori 4, 4, 39322
  023d73c  lwz 3, 1816(3)
  023d740  srawi 5, 3, 31
  023d744  srwi 6, 5, 1
  023d748  xor 3, 6, 3
  023d74c  subc 3, 3, 5
  023d750  cmpw 3, 4
  023d754  bf 1, 0x23d75c
  023d758  li 27, 30
  023d75c  lis 3, 36
  023d760  cmpwi 27, 0
  023d764  addi 3, 3, -11152
  023d768  ori 26, 25, 0
  023d76c  lfs 25, 4(3)
  023d770  bf 1, 0x23db88
  023d774  lis 3, 36
  023d778  addi 3, 3, -11152
  023d77c  lfs 1, 12(3)
  023d780  lfs 2, 16(3)
  023d784  lfs 3, 20(3)
  023d788  lfs 4, 24(3)
  023d78c  lfs 5, 32(3)
  023d790  lfs 6, 36(3)
  023d794  lfs 27, 8(3)
  023d798  lfs 14, 28(3)
  023d79c  lfs 7, 64(3)
  023d7a0  lfs 8, 68(3)
  023d7a4  stfd 1, 240(1)
  023d7a8  stfd 2, 232(1)
  023d7ac  fmr 1, 7
  023d7b0  lfs 15, 40(3)
  023d7b4  fmr 2, 8
  023d7b8  stfd 3, 312(1)
  023d7bc  stfs 4, 224(1)
  023d7c0  lfs 3, 76(3)
  023d7c4  lfs 16, 44(3)
  023d7c8  stfd 5, 304(1)
  023d7cc  lfs 4, 80(3)
  023d7d0  lfs 17, 48(3)
  023d7d4  stfd 6, 296(1)
  023d7d8  lfs 18, 52(3)
  023d7dc  lfs 5, 84(3)
  023d7e0  lfs 19, 56(3)
  023d7e4  lfs 6, 88(3)
  023d7e8  lfs 20, 60(3)
  023d7ec  lfs 21, 72(3)
  023d7f0  stfd 1, 288(1)
  023d7f4  stfd 2, 280(1)
  023d7f8  stfd 3, 272(1)
  023d7fc  stfd 4, 264(1)
  023d800  stfd 5, 256(1)
  023d804  stfs 6, 248(1)
  023d808  stw 25, 208(1)
  023d80c  stw 25, 212(1)
  023d810  lfd 31, 232(1)
  023d814  stw 25, 216(1)
  023d818  lfd 30, 240(1)
  023d81c  fmr 2, 31
  023d820  stw 25, 220(1)
  023d824  fmr 1, 30
  023d828  bl 0xfcbe8
  023d82c  nop
  023d830  lfs 2, 224(1)
  023d834  stfs 1, 208(1)
  023d838  lfd 1, 312(1)
  023d83c  bl 0xfcbe8
  023d840  nop
  023d844  stfs 1, 212(1)
  023d848  fmr 1, 30
  023d84c  fmr 2, 31
  023d850  bl 0xfcbe8
  023d854  nop
  023d858  lfd 2, 304(1)
  023d85c  stfs 1, 216(1)
  023d860  fmr 1, 14
  023d864  bl 0xfcbe8
  023d868  nop
  023d86c  lfd 2, 296(1)
  023d870  fsubs 3, 15, 25
  023d874  fadds 2, 25, 2
  023d878  fsubs 7, 16, 25
  023d87c  fsub 6, 25, 3
  023d880  fsubs 4, 15, 2
  023d884  fsubs 5, 16, 2
  023d888  fsel 3, 6, 3, 25
  023d88c  fsub 8, 2, 4
  023d890  fsel 2, 8, 4, 2
  023d894  fsub 4, 7, 3
  023d898  fsub 6, 5, 2
  023d89c  fsel 3, 4, 7, 3
  023d8a0  lfs 4, 208(1)
  023d8a4  lfs 8, 216(1)
  023d8a8  fsel 2, 6, 5, 2
  023d8ac  fmuls 5, 3, 3
  023d8b0  fmuls 6, 2, 2
  023d8b4  fmuls 7, 5, 3
  023d8b8  fmuls 9, 6, 2
  023d8bc  fmuls 10, 5, 7
  023d8c0  fmadds 3, 7, 17, 3
  023d8c4  lfs 7, 196(31)
  023d8c8  fmuls 11, 6, 9
  023d8cc  fmadds 2, 9, 17, 2
  023d8d0  fmuls 9, 5, 10
  023d8d4  fmadds 3, 10, 18, 3
  023d8d8  lfs 10, 192(31)
  023d8dc  lfs 12, 228(31)
  023d8e0  lfs 26, 212(1)
  023d8e4  fmuls 13, 6, 11
  023d8e8  fmadds 2, 11, 18, 2
  023d8ec  fmuls 5, 5, 9
  023d8f0  fmadds 3, 9, 19, 3
  023d8f4  lfs 9, 224(31)
  023d8f8  lfs 11, 212(31)
  023d8fc  fmuls 6, 6, 13
  023d900  fmadds 2, 13, 19, 2
  023d904  lfs 13, 200(31)
  023d908  fmadds 3, 5, 20, 3
  023d90c  lfs 5, 208(31)
  023d910  lfd 0, 328(1)
  023d914  fmadds 2, 6, 20, 2
  023d918  lfs 6, 232(31)
  023d91c  fmadds 3, 1, 3, 8
  023d920  lfs 31, 196(1)
  023d924  lfd 8, 336(1)
  023d928  lfs 30, 216(31)
  023d92c  fmadds 1, 1, 2, 4
  023d930  lfs 2, 192(1)
  023d934  lfd 4, 320(1)
  023d938  lfs 29, 200(1)
  023d93c  lfs 28, 204(31)
  023d940  lfs 24, 220(1)
  023d944  fmadds 7, 7, 1, 0
  023d948  fmadds 8, 10, 1, 8
  023d94c  fmadds 4, 13, 1, 4
  023d950  fmadds 1, 28, 1, 24
  023d954  lfs 10, 236(31)
  023d958  lfs 13, 220(31)
  023d95c  fmadds 7, 12, 3, 7
  023d960  fmadds 8, 9, 3, 8
  023d964  fmadds 4, 6, 3, 4
  023d968  fmadds 1, 10, 3, 1
  023d96c  fmadds 3, 11, 26, 7
  023d970  fmadds 5, 5, 26, 8
  023d974  fmadds 4, 30, 26, 4
  023d978  fmadds 26, 13, 26, 1
  023d97c  fsubs 6, 3, 31
  023d980  fsubs 7, 5, 2
  023d984  fsubs 8, 4, 29
  023d988  stfs 3, 212(1)
  023d98c  stfs 5, 208(1)
  023d990  stfs 26, 220(1)
  023d994  stfs 4, 216(1)
  023d998  lfs 3, 20(28)
  023d99c  lfs 4, 16(28)
  023d9a0  fmuls 1, 6, 6
  023d9a4  lfs 5, 24(28)
  023d9a8  fmuls 2, 3, 3
  023d9ac  lfd 9, 288(1)
  023d9b0  lfd 10, 280(1)
  023d9b4  fmadds 1, 7, 7, 1
  023d9b8  fmadds 2, 4, 4, 2
  023d9bc  lfd 11, 272(1)
  023d9c0  fmadds 1, 8, 8, 1
  023d9c4  fmadds 2, 5, 5, 2
  023d9c8  fsqrts 1, 1
  023d9cc  fsqrts 2, 2
  023d9d0  fsubs 1, 9, 1
  023d9d4  fabs 1, 1
  023d9d8  fmuls 31, 1, 10
  023d9dc  fmuls 1, 31, 31
  023d9e0  fsub 10, 27, 2
  023d9e4  fsub 12, 27, 2
  023d9e8  fsub 13, 2, 27
  023d9ec  fsub 0, 27, 2
  023d9f0  fsub 30, 2, 27
  023d9f4  fsub 29, 2, 27
  023d9f8  fmuls 1, 1, 21
  023d9fc  fdivs 9, 1, 2
  023da00  fmr 1, 11
  023da04  fmr 2, 21
  023da08  fmuls 3, 3, 9
  023da0c  fmuls 5, 5, 9
  023da10  fmuls 4, 4, 9
  023da14  fsel 9, 10, 27, 3
  023da18  fsel 10, 12, 27, 5
  023da1c  fsel 11, 0, 27, 4
  023da20  fsel 3, 13, 9, 3
  023da24  fsel 5, 30, 10, 5
  023da28  fsel 4, 29, 11, 4
  023da2c  fadds 30, 6, 3
  023da30  fadds 29, 8, 5
  023da34  fadds 28, 7, 4
  023da38  bl 0xfcbe8
  023da3c  nop
  023da40  fmuls 2, 30, 30
  023da44  lis 3, 114
  023da48  lfs 3, -3052(3)
  023da4c  fmuls 1, 1, 3
  023da50  fmadds 2, 28, 28, 2
  023da54  lhz 3, 166(31)
  023da58  cmpwi 3, 1288
  023da5c  fmuls 1, 1, 31
  023da60  fmadds 2, 29, 29, 2
  023da64  fsqrts 2, 2
  023da68  fdivs 1, 1, 2
  023da6c  fsub 3, 27, 2
  023da70  fsub 4, 27, 2
  023da74  fsub 5, 27, 2
  023da78  fsub 22, 2, 27
  023da7c  fsub 23, 2, 27
  023da80  fsub 24, 2, 27
  023da84  fmuls 2, 29, 1
  023da88  fmuls 6, 30, 1
  023da8c  fmuls 1, 28, 1
  023da90  fsel 3, 3, 27, 2
  023da94  fsel 4, 4, 27, 6
  023da98  fsel 5, 5, 27, 1
  023da9c  fsel 22, 22, 3, 2
  023daa0  fsel 23, 23, 4, 6
  023daa4  fsel 24, 24, 5, 1
  023daa8  bf 2, 0x23db10
  023daac  lfd 2, 256(1)
  023dab0  lfd 1, 264(1)
  023dab4  clrlwi 24, 26, 31
  023dab8  bl 0xfcbe8
  023dabc  nop
  023dac0  lfs 2, 208(1)
  023dac4  ori 3, 31, 0
  023dac8  lfs 3, 216(1)
  023dacc  ori 9, 24, 0
  023dad0  stfs 2, 64(1)
  023dad4  stfs 3, 72(1)
  023dad8  stfs 24, 80(1)
  023dadc  stfs 22, 88(1)
  023dae0  lfs 2, 212(1)
  023dae4  lfs 3, 220(1)
  023dae8  stfs 2, 68(1)
  023daec  stfs 3, 76(1)
  023daf0  stfs 23, 84(1)
  023daf4  stfs 26, 92(1)
  023daf8  ld 5, 64(1)
  023dafc  ld 6, 72(1)
  023db00  ld 7, 80(1)
  023db04  ld 8, 88(1)
  023db08  bl 0x341590
  023db0c  nop
  023db10  lis 3, 21845
  023db14  ori 3, 3, 21846
  023db18  mulhw 3, 3, 26
  023db1c  srwi 4, 3, 31
  023db20  addc 3, 3, 4
  023db24  addc 4, 3, 3
  023db28  addc 3, 3, 4
  023db2c  subc 3, 26, 3
  023db30  cmpwi 3, 0
  023db34  bf 2, 0x23db60
  023db38  lfs 2, 224(1)
  023db3c  fmr 1, 14
  023db40  bl 0xfcbe8
  023db44  nop
  023db48  addic 4, 1, 208
  023db4c  fmr 2, 27
  023db50  ori 3, 31, 0
  023db54  li 6, -1
  023db58  bl 0x10fb28
  023db5c  nop
  023db60  addic 26, 26, 1
  023db64  lfs 31, 248(1)
  023db68  ori 3, 27, 0
  023db6c  extsw 26, 26
  023db70  bl 0x502730
  023db74  nop
  023db78  fdivs 1, 31, 1
  023db7c  cmpw 27, 26
  023db80  fadds 25, 25, 1
  023db84  bt 1, 0x23d808
  023db88  lis 3, 36
  023db8c  li 7, -1
  023db90  addi 3, 3, -11152
  023db94  li 6, 1
  023db98  addic 4, 28, 16
  023db9c  addic 5, 1, 192
  023dba0  li 8, 10
  023dba4  lfs 1, 8(3)
  023dba8  lfs 5, 80(3)
  023dbac  li 9, 3
  023dbb0  lfs 3, 92(3)
  023dbb4  li 10, 16
  023dbb8  lfs 4, 96(3)
  023dbbc  fmr 2, 1
  023dbc0  lfs 7, 100(3)
  023dbc4  fmr 6, 5
  023dbc8  std 7, 144(1)
  023dbcc  ori 3, 31, 0
  023dbd0  std 6, 160(1)
  023dbd4  std 6, 168(1)
  023dbd8  std 7, 176(1)
  023dbdc  std 25, 184(1)
  023dbe0  bl 0x10e030
  023dbe4  nop
  023dbe8  lhz 28, 166(31)
  023dbec  cmpwi 28, 1288
  023dbf0  bf 2, 0x23dc1c
  023dbf4  lwz 30, 0(30)
  023dbf8  cmpwi 30, -1
  023dbfc  bt 2, 0x23dc1c
  023dc00  lis 3, 151
  023dc04  extsw 5, 30
  023dc08  addic 3, 3, -16400
  023dc0c  li 4, 1
  023dc10  addc 3, 3, 5
  023dc14  stb 4, 67(3)
  023dc18  lhz 28, 166(31)
  023dc1c  cmpwi 28, 1288
  023dc20  cmpwi 1, 29, 0
  023dc24  bt 2, 0x23dc2c
  023dc28  bt 6, 0x23dc38
  023dc2c  ori 3, 31, 0
  023dc30  bl 0xefb38
  023dc34  nop
  023dc38  ld 0, 576(1)
  023dc3c  mtlr 0
  023dc40  lfd 14, 416(1)
  023dc44  lfd 15, 424(1)
  023dc48  lfd 16, 432(1)
  023dc4c  lfd 17, 440(1)
  023dc50  lfd 18, 448(1)
  023dc54  lfd 19, 456(1)
  023dc58  lfd 20, 464(1)
  023dc5c  lfd 21, 472(1)
  023dc60  lfd 22, 480(1)
  023dc64  lfd 23, 488(1)
  023dc68  lfd 24, 496(1)
  023dc6c  lfd 25, 504(1)
  023dc70  lfd 26, 512(1)
  023dc74  lfd 27, 520(1)
  023dc78  lfd 28, 528(1)
  023dc7c  lfd 29, 536(1)
  023dc80  lfd 30, 544(1)
  023dc84  lfd 31, 552(1)
  023dc88  ld 24, 352(1)
  023dc8c  ld 25, 360(1)
  023dc90  ld 26, 368(1)
  023dc94  ld 27, 376(1)
  023dc98  ld 28, 384(1)
  023dc9c  ld 29, 392(1)
  023dca0  ld 30, 400(1)
  023dca4  ld 31, 408(1)
  023dca8  addi 1, 1, 560
  023dcac  blr
