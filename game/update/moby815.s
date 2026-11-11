# game/update/moby815.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M815_0046d660:   # 0x46d660, 0x148 bytes
  046d660  stdu 1, -144(1)
  046d664  mflr 0
  046d668  std 0, 160(1)
  046d66c  std 31, 136(1)
  046d670  ori 31, 3, 0
  046d674  li 4, 0
  046d678  lis 5, 71
  046d67c  std 30, 128(1)
  046d680  addic 3, 1, 112
  046d684  addi 30, 5, -10664
  046d688  lwz 7, 120(31)
  046d68c  li 5, 0
  046d690  stw 4, 112(1)
  046d694  li 6, 0
  046d698  lwz 4, 0(7)
  046d69c  std 29, 120(1)
  046d6a0  extsw 4, 4
  046d6a4  bl 0x104800
  046d6a8  nop
  046d6ac  lwz 3, 112(1)
  046d6b0  li 4, 128
  046d6b4  li 5, 1
  046d6b8  stb 4, 48(3)
  046d6bc  lwz 6, 112(1)
  046d6c0  lwz 29, 120(3)
  046d6c4  sth 4, 50(6)
  046d6c8  lwz 3, 112(1)
  046d6cc  ld 4, 56(31)
  046d6d0  std 4, 56(3)
  046d6d4  lwz 3, 112(1)
  046d6d8  stb 5, 49(3)
  046d6dc  lwz 3, 112(1)
  046d6e0  lis 5, 16256
  046d6e4  lwz 4, 36(3)
  046d6e8  lwz 4, 16(4)
  046d6ec  stw 4, 148(3)
  046d6f0  lwz 3, 112(1)
  046d6f4  lhz 4, 52(3)
  046d6f8  ori 4, 4, 4128
  046d6fc  sth 4, 52(3)
  046d700  lwz 3, 112(1)
  046d704  lwz 4, 36(3)
  046d708  lfs 1, 36(4)
  046d70c  lis 4, 16448
  046d710  stfs 1, 44(3)
  046d714  lwz 3, 112(1)
  046d718  lfs 1, 16(31)
  046d71c  stfs 1, 16(3)
  046d720  lfs 1, 20(31)
  046d724  stfs 1, 20(3)
  046d728  lfs 1, 24(31)
  046d72c  stfs 1, 24(3)
  046d730  lfs 1, 28(31)
  046d734  stfs 1, 28(3)
  046d738  lwz 3, 112(1)
  046d73c  lfs 1, 64(31)
  046d740  stfs 1, 64(3)
  046d744  lfs 1, 68(31)
  046d748  stfs 1, 68(3)
  046d74c  lfs 1, 72(31)
  046d750  stfs 1, 72(3)
  046d754  lfs 1, 76(31)
  046d758  stfs 1, 76(3)
  046d75c  stw 4, 32(29)
  046d760  stw 5, 592(29)
  046d764  lfs 1, 0(30)
  046d768  bl 0x502758
  046d76c  nop
  046d770  stw 3, 368(29)
  046d774  lis 3, 16880
  046d778  stw 3, 548(29)
  046d77c  lwz 3, 112(1)
  046d780  bl 0xf31a8
  046d784  nop
  046d788  lwz 3, 112(1)
  046d78c  ld 0, 160(1)
  046d790  mtlr 0
  046d794  ld 29, 120(1)
  046d798  ld 30, 128(1)
  046d79c  ld 31, 136(1)
  046d7a0  addi 1, 1, 144
  046d7a4  blr

UpdateMoby_815:   # 0x46d7c0, 0x330 bytes
  046d7c0  stdu 1, -208(1)
  046d7c4  mflr 0
  046d7c8  std 0, 224(1)
  046d7cc  stfd 31, 200(1)
  046d7d0  std 30, 184(1)
  046d7d4  lbz 4, 32(3)
  046d7d8  std 31, 192(1)
  046d7dc  ori 30, 3, 0
  046d7e0  lwz 31, 120(3)
  046d7e4  cmpwi 4, 0
  046d7e8  cmpwi 1, 4, 1
  046d7ec  std 29, 176(1)
  046d7f0  std 28, 168(1)
  046d7f4  cmpwi 6, 4, -1
  046d7f8  bt 1, 0x46d804
  046d7fc  bf 25, 0x46dacc
  046d800  b 0x46d80c
  046d804  bf 5, 0x46d818
  046d808  b 0x46dacc
  046d80c  li 3, 1
  046d810  stb 3, 32(30)
  046d814  b 0x46dacc
  046d818  lwz 3, 0(31)
  046d81c  cmpwi 3, -1
  046d820  bf 1, 0x46dacc
  046d824  extsw 3, 3
  046d828  li 4, 12
  046d82c  bl 0x104214
  046d830  nop
  046d834  cmpwi 3, 0
  046d838  bf 2, 0x46dacc
  046d83c  lis 4, 135
  046d840  lwz 3, 8(31)
  046d844  lwz 4, 30536(4)
  046d848  cmpw 3, 4
  046d84c  bf 0, 0x46dacc
  046d850  addic 4, 3, 1
  046d854  ori 3, 30, 0
  046d858  stw 4, 8(31)
  046d85c  bl 0x46d660
  046d860  ori 31, 3, 0
  046d864  cmpwi 31, 0
  046d868  bt 2, 0x46dacc
  046d86c  lis 4, 71
  046d870  lwz 28, 120(31)
  046d874  li 3, 8
  046d878  addi 29, 4, -10328
  046d87c  stw 3, 132(28)
  046d880  lfs 31, 0(29)
  046d884  lfs 2, 592(28)
  046d888  lfs 1, 4(29)
  046d88c  fmuls 2, 2, 31
  046d890  fmuls 1, 2, 1
  046d894  bl 0x502758
  046d898  nop
  046d89c  lfs 1, 592(28)
  046d8a0  li 4, 0
  046d8a4  stw 3, 128(28)
  046d8a8  fmuls 1, 1, 31
  046d8ac  lis 6, 151
  046d8b0  lis 3, 16608
  046d8b4  lis 5, 16720
  046d8b8  addic 6, 6, -25376
  046d8bc  stfs 1, 136(28)
  046d8c0  lfs 1, 8(29)
  046d8c4  stw 4, 120(28)
  046d8c8  stw 4, 124(28)
  046d8cc  stw 3, 176(28)
  046d8d0  stw 5, 180(28)
  046d8d4  lfs 2, 128(6)
  046d8d8  lfs 3, 16(30)
  046d8dc  lfs 4, 132(6)
  046d8e0  lfs 5, 20(30)
  046d8e4  fsubs 2, 2, 3
  046d8e8  fsubs 3, 4, 5
  046d8ec  lis 3, 115
  046d8f0  addic 30, 28, 96
  046d8f4  addic 3, 3, 22784
  046d8f8  fabs 5, 2
  046d8fc  fabs 4, 3
  046d900  stfs 2, 112(1)
  046d904  stfs 3, 116(1)
  046d908  fsubs 2, 5, 4
  046d90c  stfs 2, 120(1)
  046d910  lwz 4, 112(1)
  046d914  lfs 2, 112(1)
  046d918  lwz 5, 116(1)
  046d91c  lfs 3, 116(1)
  046d920  lwz 6, 120(1)
  046d924  rlwinm 5, 5, 3, 29, 29
  046d928  fabs 6, 3
  046d92c  lfs 3, 120(1)
  046d930  fabs 2, 2
  046d934  rlwimi 5, 6, 2, 30, 30
  046d938  fsub 7, 3, 1
  046d93c  fsub 8, 3, 1
  046d940  rlwimi 5, 4, 4, 28, 28
  046d944  ori 4, 3, 0
  046d948  rlwimi 4, 5, 2, 26, 28
  046d94c  slwi 5, 5, 2
  046d950  clrldi 4, 4, 32
  046d954  fsel 4, 7, 2, 4
  046d958  lfsx 3, 3, 5
  046d95c  fsel 5, 8, 6, 5
  046d960  lfs 2, 4(4)
  046d964  fcmpu 0, 4, 1
  046d968  bt 1, 0x46d970
  046d96c  b 0x46da94
  046d970  fsubs 6, 5, 4
  046d974  fadds 4, 5, 4
  046d978  addic 6, 1, 16
  046d97c  li 3, 2
  046d980  addic 5, 6, 108
  046d984  addic 4, 6, 124
  046d988  mtctr 3
  046d98c  fdivs 4, 6, 4
  046d990  fmuls 6, 4, 4
  046d994  stfs 4, 136(1)
  046d998  stfs 4, 128(1)
  046d99c  stfs 4, 132(1)
  046d9a0  stfs 4, 124(1)
  046d9a4  lfs 7, 136(1)
  046d9a8  lfs 8, 128(1)
  046d9ac  lfs 9, 132(1)
  046d9b0  fmuls 4, 6, 6
  046d9b4  fmuls 8, 8, 6
  046d9b8  fmuls 7, 7, 4
  046d9bc  fmuls 5, 4, 4
  046d9c0  fmuls 4, 9, 4
  046d9c4  stfs 8, 128(1)
  046d9c8  fmuls 6, 7, 6
  046d9cc  stfs 4, 132(1)
  046d9d0  stfs 6, 136(1)
  046d9d4  lfs 4, 108(6)
  046d9d8  fmuls 4, 4, 5
  046d9dc  stfs 4, 124(6)
  046d9e0  lfs 4, 4(5)
  046d9e4  addic 6, 6, 8
  046d9e8  addic 5, 5, 8
  046d9ec  fmuls 4, 4, 5
  046d9f0  stfs 4, 4(4)
  046d9f4  addic 4, 4, 8
  046d9f8  bdnz 0x46d9d4
  046d9fc  ori 7, 1, 0
  046da00  lis 6, 115
  046da04  li 8, 4
  046da08  addic 5, 7, 124
  046da0c  addic 6, 6, 22752
  046da10  ori 4, 5, 0
  046da14  mtctr 8
  046da18  lfs 4, 124(7)
  046da1c  lfs 5, 0(6)
  046da20  fmuls 4, 4, 5
  046da24  lfs 5, 4(6)
  046da28  addic 6, 6, 8
  046da2c  stfs 4, 124(7)
  046da30  lfs 4, 4(5)
  046da34  addic 7, 7, 8
  046da38  fmuls 4, 4, 5
  046da3c  stfs 4, 4(5)
  046da40  addic 5, 5, 8
  046da44  bdnz 0x46da18
  046da48  ori 5, 3, 0
  046da4c  ori 3, 1, 0
  046da50  mtctr 5
  046da54  lfs 4, 124(3)
  046da58  fadds 1, 1, 4
  046da5c  addic 3, 3, 16
  046da60  lfs 4, 4(4)
  046da64  lfs 5, 8(4)
  046da68  lfs 6, 12(4)
  046da6c  addic 4, 4, 16
  046da70  fadds 1, 1, 4
  046da74  fadds 1, 1, 5
  046da78  fadds 1, 1, 6
  046da7c  bdnz 0x46da54
  046da80  lis 3, 71
  046da84  addi 3, 3, -10328
  046da88  lfs 4, 12(3)
  046da8c  fadds 1, 1, 4
  046da90  fmadds 1, 1, 3, 2
  046da94  lis 3, 71
  046da98  addi 3, 3, -10328
  046da9c  lfs 2, 16(3)
  046daa0  bl 0x502578
  046daa4  nop
  046daa8  ori 3, 31, 0
  046daac  ori 4, 30, 0
  046dab0  li 6, 5
  046dab4  li 7, 8
  046dab8  li 8, 0
  046dabc  bl 0x10ad80
  046dac0  nop
  046dac4  li 3, 9
  046dac8  stb 3, 32(31)
  046dacc  ld 0, 224(1)
  046dad0  mtlr 0
  046dad4  lfd 31, 200(1)
  046dad8  ld 28, 168(1)
  046dadc  ld 29, 176(1)
  046dae0  ld 30, 184(1)
  046dae4  ld 31, 192(1)
  046dae8  addi 1, 1, 208
  046daec  blr
