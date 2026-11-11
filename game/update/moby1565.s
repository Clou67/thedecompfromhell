# game/update/moby1565.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1565_0029d610:   # 0x29d610, 0x45c bytes
  029d610  stdu 1, -304(1)
  029d614  mflr 0
  029d618  std 0, 320(1)
  029d61c  stfd 24, 240(1)
  029d620  stfd 25, 248(1)
  029d624  stfd 26, 256(1)
  029d628  stfd 27, 264(1)
  029d62c  stfd 28, 272(1)
  029d630  stfd 29, 280(1)
  029d634  stfd 30, 288(1)
  029d638  stfd 31, 296(1)
  029d63c  std 30, 224(1)
  029d640  ori 30, 3, 0
  029d644  lis 3, 161
  029d648  std 29, 216(1)
  029d64c  lis 4, 42
  029d650  std 22, 160(1)
  029d654  addi 29, 4, -10776
  029d658  lwz 22, 120(30)
  029d65c  lwz 3, 1808(3)
  029d660  std 31, 232(1)
  029d664  std 28, 208(1)
  029d668  std 27, 200(1)
  029d66c  std 26, 192(1)
  029d670  std 25, 184(1)
  029d674  std 24, 176(1)
  029d678  std 23, 168(1)
  029d67c  std 21, 152(1)
  029d680  extsw 3, 3
  029d684  bl 0x502730
  029d688  nop
  029d68c  lis 3, 123
  029d690  lis 31, 114
  029d694  lis 4, 123
  029d698  lfs 2, -16684(3)
  029d69c  lfs 3, -3052(31)
  029d6a0  lwz 3, -16704(4)
  029d6a4  fmuls 31, 2, 3
  029d6a8  extsw 3, 3
  029d6ac  fmuls 31, 31, 1
  029d6b0  bl 0x685c4
  029d6b4  nop
  029d6b8  ori 4, 3, 0
  029d6bc  li 3, 24
  029d6c0  bl 0x174f80
  029d6c4  nop
  029d6c8  lis 7, 123
  029d6cc  li 3, 0
  029d6d0  li 4, 1
  029d6d4  li 5, 0
  029d6d8  li 6, 1
  029d6dc  lwz 7, -16708(7)
  029d6e0  bl 0x502ea8
  029d6e4  nop
  029d6e8  ori 4, 3, 0
  029d6ec  li 3, 3
  029d6f0  bl 0x174f80
  029d6f4  nop
  029d6f8  li 3, 0
  029d6fc  li 4, 0
  029d700  li 8, 0
  029d704  li 5, 0
  029d708  li 6, 0
  029d70c  li 7, 0
  029d710  bl 0x502f08
  029d714  nop
  029d718  ori 4, 3, 0
  029d71c  li 3, 6
  029d720  bl 0x174f80
  029d724  nop
  029d728  lis 9, 0
  029d72c  li 3, 0
  029d730  li 4, 0
  029d734  ori 9, 9, 65424
  029d738  li 5, 1
  029d73c  li 6, 1
  029d740  li 7, 1
  029d744  li 8, 0
  029d748  bl 0x502fd4
  029d74c  nop
  029d750  ori 4, 3, 0
  029d754  li 3, 26
  029d758  bl 0x174f80
  029d75c  nop
  029d760  lis 3, 123
  029d764  lfs 1, 4(22)
  029d768  lis 4, 114
  029d76c  stfs 1, 0(22)
  029d770  lfs 2, 0(29)
  029d774  lfs 3, -16692(3)
  029d778  lfs 4, -3056(4)
  029d77c  fmuls 3, 3, 4
  029d780  lfs 4, 4(29)
  029d784  fdivs 2, 2, 3
  029d788  lfs 3, -3052(31)
  029d78c  fmuls 2, 2, 4
  029d790  fmuls 2, 2, 3
  029d794  bl 0x502578
  029d798  nop
  029d79c  ori 3, 30, 0
  029d7a0  stfs 1, 4(22)
  029d7a4  addic 4, 1, 112
  029d7a8  addic 5, 1, 116
  029d7ac  addic 6, 1, 120
  029d7b0  bl 0xf1ef0
  029d7b4  nop
  029d7b8  lis 3, 123
  029d7bc  lwz 4, 120(1)
  029d7c0  lis 25, 251
  029d7c4  lwz 5, 116(1)
  029d7c8  li 24, 0
  029d7cc  slwi 4, 4, 16
  029d7d0  slwi 5, 5, 8
  029d7d4  lwz 3, -16700(3)
  029d7d8  addic 25, 25, -9264
  029d7dc  lwz 6, 112(1)
  029d7e0  lis 28, 251
  029d7e4  lfs 24, 8(29)
  029d7e8  slwi 3, 3, 24
  029d7ec  lfs 25, 12(29)
  029d7f0  or 23, 5, 6
  029d7f4  lfs 26, 16(29)
  029d7f8  lis 5, 123
  029d7fc  lfs 27, 20(29)
  029d800  or 3, 3, 4
  029d804  lfs 28, 24(29)
  029d808  ori 31, 24, 0
  029d80c  lfs 29, 28(29)
  029d810  or 23, 3, 23
  029d814  lfs 30, 32(29)
  029d818  addic 26, 25, 4
  029d81c  addic 27, 25, 8
  029d820  addic 28, 28, -8344
  029d824  addic 29, 5, -17824
  029d828  lfs 1, 4(29)
  029d82c  lfs 3, 0(29)
  029d830  fmuls 1, 1, 1
  029d834  lis 21, 123
  029d838  lfs 2, -16696(21)
  029d83c  fmadds 1, 3, 3, 1
  029d840  fsqrts 1, 1
  029d844  bl 0x502798
  029d848  nop
  029d84c  lfs 2, -16696(21)
  029d850  fmuls 1, 1, 24
  029d854  fdivs 1, 1, 2
  029d858  bl 0x502648
  029d85c  nop
  029d860  lfs 2, 4(22)
  029d864  bl 0x502578
  029d868  nop
  029d86c  lis 3, 123
  029d870  lfs 5, 0(29)
  029d874  addic 24, 24, 1
  029d878  lfs 6, -16680(3)
  029d87c  lfs 7, 16(30)
  029d880  lis 3, 123
  029d884  cmplwi 24, 46
  029d888  fsubs 2, 25, 1
  029d88c  fsubs 3, 26, 1
  029d890  fsub 4, 1, 2
  029d894  fsel 1, 4, 2, 1
  029d898  fmadds 4, 6, 5, 7
  029d89c  lfs 2, 4(29)
  029d8a0  lfs 5, 8(29)
  029d8a4  addic 29, 29, 12
  029d8a8  fsub 7, 3, 1
  029d8ac  stfs 4, 0(25)
  029d8b0  addic 25, 25, 12
  029d8b4  fsel 1, 7, 3, 1
  029d8b8  lfs 3, 20(30)
  029d8bc  lfs 4, -16688(3)
  029d8c0  fmadds 2, 6, 2, 3
  029d8c4  fmuls 3, 1, 1
  029d8c8  stfs 2, 0(26)
  029d8cc  lfs 2, 24(30)
  029d8d0  addic 26, 26, 12
  029d8d4  fmadds 2, 6, 5, 2
  029d8d8  fmuls 7, 3, 1
  029d8dc  stw 23, 0(28)
  029d8e0  addic 28, 28, 4
  029d8e4  fmuls 5, 3, 7
  029d8e8  fmadds 1, 7, 27, 1
  029d8ec  fmuls 6, 3, 5
  029d8f0  fmadds 1, 5, 28, 1
  029d8f4  fmuls 3, 3, 6
  029d8f8  fmadds 1, 6, 29, 1
  029d8fc  fmadds 1, 3, 30, 1
  029d900  fmadds 1, 4, 1, 2
  029d904  stfs 1, 0(27)
  029d908  addic 27, 27, 12
  029d90c  bt 0, 0x29d828
  029d910  lis 3, 42
  029d914  ori 24, 31, 0
  029d918  addi 3, 3, -10776
  029d91c  ori 30, 1, 0
  029d920  lfs 30, 36(3)
  029d924  lis 26, 123
  029d928  lis 27, 251
  029d92c  lis 28, 123
  029d930  lis 29, 251
  029d934  ori 25, 31, 0
  029d938  addic 26, 26, -17272
  029d93c  addic 27, 27, -8712
  029d940  addic 28, 28, -17268
  029d944  addic 29, 29, -8708
  029d948  lis 3, 16256
  029d94c  lis 4, -16608
  029d950  fmr 2, 30
  029d954  lis 5, 16160
  029d958  ori 4, 4, 55676
  029d95c  stw 3, 124(1)
  029d960  ori 5, 5, 55676
  029d964  stw 3, 132(1)
  029d968  stw 4, 128(1)
  029d96c  lfs 1, 124(30)
  029d970  stw 5, 136(1)
  029d974  fmuls 1, 1, 31
  029d978  bl 0x502798
  029d97c  nop
  029d980  lfs 2, 0(26)
  029d984  fadds 3, 2, 1
  029d988  lfs 1, 128(30)
  029d98c  fmr 2, 30
  029d990  fmuls 1, 1, 31
  029d994  stfs 3, 0(27)
  029d998  bl 0x502798
  029d99c  nop
  029d9a0  lfs 2, 0(28)
  029d9a4  addic 25, 25, 1
  029d9a8  fadds 1, 2, 1
  029d9ac  cmplwi 25, 46
  029d9b0  addic 26, 26, 8
  029d9b4  addic 27, 27, 8
  029d9b8  addic 28, 28, 8
  029d9bc  stfs 1, 0(29)
  029d9c0  addic 29, 29, 8
  029d9c4  bt 0, 0x29d948
  029d9c8  bl 0x71170
  029d9cc  nop
  029d9d0  lis 3, 123
  029d9d4  lis 4, 123
  029d9d8  lis 5, 123
  029d9dc  lis 6, 123
  029d9e0  li 7, 9
  029d9e4  lwz 3, -17856(3)
  029d9e8  lwz 4, -16720(4)
  029d9ec  lwz 5, -16712(5)
  029d9f0  extsw 3, 3
  029d9f4  lwz 6, -16716(6)
  029d9f8  bl 0x74604
  029d9fc  nop
  029da00  addic 24, 24, 1
  029da04  addic 30, 30, 8
  029da08  cmpwi 24, 2
  029da0c  bt 0, 0x29d924
  029da10  ld 0, 320(1)
  029da14  mtlr 0
  029da18  lfd 24, 240(1)
  029da1c  lfd 25, 248(1)
  029da20  lfd 26, 256(1)
  029da24  lfd 27, 264(1)
  029da28  lfd 28, 272(1)
  029da2c  lfd 29, 280(1)
  029da30  lfd 30, 288(1)
  029da34  lfd 31, 296(1)
  029da38  ld 21, 152(1)
  029da3c  ld 22, 160(1)
  029da40  ld 23, 168(1)
  029da44  ld 24, 176(1)
  029da48  ld 25, 184(1)
  029da4c  ld 26, 192(1)
  029da50  ld 27, 200(1)
  029da54  ld 28, 208(1)
  029da58  ld 29, 216(1)
  029da5c  ld 30, 224(1)
  029da60  ld 31, 232(1)
  029da64  addi 1, 1, 304
  029da68  blr

UpdateMoby_1565:   # 0x29da6c, 0x80 bytes
  029da6c  stdu 1, -128(1)
  029da70  mflr 0
  029da74  std 0, 144(1)
  029da78  std 31, 120(1)
  029da7c  ori 31, 3, 0
  029da80  lbz 3, 32(3)
  029da84  cmpwi 3, 0
  029da88  bf 2, 0x29dab0
  029da8c  ori 3, 31, 0
  029da90  li 4, 64
  029da94  li 5, 64
  029da98  li 6, 64
  029da9c  bl 0xf1ec8
  029daa0  nop
  029daa4  li 3, 1
  029daa8  stb 3, 32(31)
  029daac  b 0x29dad8
  029dab0  lis 3, 113
  029dab4  ori 4, 31, 0
  029dab8  addic 3, 3, -21816
  029dabc  bl 0x6d7e0
  029dac0  nop
  029dac4  lhz 4, 52(31)
  029dac8  li 3, 0
  029dacc  ori 4, 4, 1
  029dad0  sth 3, 50(31)
  029dad4  sth 4, 52(31)
  029dad8  ld 0, 144(1)
  029dadc  mtlr 0
  029dae0  ld 31, 120(1)
  029dae4  addi 1, 1, 128
  029dae8  blr
