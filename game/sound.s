# game/sound.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

sound_CamOfs:   # 0x15b590, 0x134 bytes
  015b590  stdu 1, -128(1)
  015b594  mflr 0
  015b598  std 0, 144(1)
  015b59c  std 31, 120(1)
  015b5a0  lis 4, 22
  015b5a4  ori 31, 3, 0
  015b5a8  addi 4, 4, -19072
  015b5ac  lfs 1, 0(4)
  015b5b0  std 30, 112(1)
  015b5b4  lfs 2, 4(4)
  015b5b8  bl 0xfe788
  015b5bc  nop
  015b5c0  lis 30, 149
  015b5c4  lfs 1, 0(31)
  015b5c8  lfs 2, 4(31)
  015b5cc  lis 3, 150
  015b5d0  addic 30, 30, 5056
  015b5d4  addic 6, 3, 14176
  015b5d8  addic 3, 30, 320
  015b5dc  ori 4, 31, 0
  015b5e0  lfs 3, 320(30)
  015b5e4  li 5, 130
  015b5e8  fadds 1, 1, 3
  015b5ec  lfs 3, 8(31)
  015b5f0  li 7, 0
  015b5f4  stfs 1, 0(31)
  015b5f8  lfs 1, 324(30)
  015b5fc  lwz 6, 108(6)
  015b600  fadds 1, 2, 1
  015b604  stfs 1, 4(31)
  015b608  lfs 1, 328(30)
  015b60c  fadds 1, 3, 1
  015b610  stfs 1, 8(31)
  015b614  bl 0x57820
  015b618  nop
  015b61c  cmpwi 3, 0
  015b620  bt 2, 0x15b6ac
  015b624  lis 3, 161
  015b628  lfs 1, 320(30)
  015b62c  addic 3, 3, 2368
  015b630  lis 4, 22
  015b634  addi 4, 4, -19072
  015b638  lfs 2, 32(3)
  015b63c  fsubs 1, 2, 1
  015b640  stfs 1, 0(31)
  015b644  lfs 2, 36(3)
  015b648  lfs 3, 324(30)
  015b64c  fsubs 2, 2, 3
  015b650  stfs 2, 4(31)
  015b654  lfs 3, 40(3)
  015b658  lfs 4, 328(30)
  015b65c  fsubs 3, 3, 4
  015b660  stfs 3, 8(31)
  015b664  lfs 4, 8(4)
  015b668  lfs 5, 44(3)
  015b66c  fmuls 1, 1, 4
  015b670  fmuls 2, 2, 4
  015b674  stfs 5, 12(31)
  015b678  fmuls 3, 3, 4
  015b67c  stfs 1, 0(31)
  015b680  stfs 2, 4(31)
  015b684  stfs 3, 8(31)
  015b688  lfs 4, 320(30)
  015b68c  fadds 1, 1, 4
  015b690  stfs 1, 0(31)
  015b694  lfs 1, 324(30)
  015b698  fadds 1, 2, 1
  015b69c  stfs 1, 4(31)
  015b6a0  lfs 1, 328(30)
  015b6a4  fadds 1, 3, 1
  015b6a8  stfs 1, 8(31)
  015b6ac  ld 0, 144(1)
  015b6b0  mtlr 0
  015b6b4  ld 30, 112(1)
  015b6b8  ld 31, 120(1)
  015b6bc  addi 1, 1, 128
  015b6c0  blr

sound_Occl:   # 0x15b6d0, 0x108 bytes
  015b6d0  stdu 1, -128(1)
  015b6d4  mflr 0
  015b6d8  std 0, 144(1)
  015b6dc  ori 6, 3, 0
  015b6e0  lis 5, 149
  015b6e4  lis 3, 22
  015b6e8  addic 5, 5, 5056
  015b6ec  addi 3, 3, -18748
  015b6f0  lfs 1, 32(6)
  015b6f4  lfs 2, 36(6)
  015b6f8  lfs 3, 320(5)
  015b6fc  lfs 4, 324(5)
  015b700  fsubs 3, 1, 3
  015b704  fsubs 2, 2, 4
  015b708  lfs 1, 44(6)
  015b70c  stfs 1, 124(1)
  015b710  lfs 1, 40(6)
  015b714  lfs 4, 328(5)
  015b718  fsubs 1, 1, 4
  015b71c  stfs 3, 112(1)
  015b720  stfs 2, 116(1)
  015b724  lfs 4, 0(3)
  015b728  fmuls 2, 2, 4
  015b72c  fmuls 3, 3, 4
  015b730  fmuls 1, 1, 4
  015b734  fmuls 4, 2, 2
  015b738  stfs 3, 112(1)
  015b73c  stfs 2, 116(1)
  015b740  stfs 1, 120(1)
  015b744  fmadds 4, 3, 3, 4
  015b748  fmadds 5, 1, 1, 4
  015b74c  lfs 4, 4(3)
  015b750  ori 3, 4, 0
  015b754  lwz 4, 24(6)
  015b758  fsqrts 5, 5
  015b75c  fcmpu 0, 5, 4
  015b760  cror 6, 0, 2
  015b764  bt 6, 0x15b784
  015b768  fdivs 4, 4, 5
  015b76c  fmuls 3, 3, 4
  015b770  fmuls 2, 2, 4
  015b774  fmuls 1, 1, 4
  015b778  stfs 3, 112(1)
  015b77c  stfs 2, 116(1)
  015b780  stfs 1, 120(1)
  015b784  ori 6, 5, 0
  015b788  ori 7, 4, 0
  015b78c  addic 4, 1, 112
  015b790  li 5, 130
  015b794  lfs 4, 320(6)
  015b798  lfs 5, 324(6)
  015b79c  fadds 3, 3, 4
  015b7a0  lfs 4, 328(6)
  015b7a4  fadds 2, 2, 5
  015b7a8  ori 6, 7, 0
  015b7ac  fadds 1, 1, 4
  015b7b0  li 7, 0
  015b7b4  stfs 3, 112(1)
  015b7b8  stfs 2, 116(1)
  015b7bc  stfs 1, 120(1)
  015b7c0  bl 0x57820
  015b7c4  nop
  015b7c8  ld 0, 144(1)
  015b7cc  mtlr 0
  015b7d0  addi 1, 1, 128
  015b7d4  blr

sound_GetFade:   # 0x15b7d8, 0x114 bytes
  015b7d8  stdu 1, -144(1)
  015b7dc  mflr 0
  015b7e0  std 0, 160(1)
  015b7e4  stfd 29, 120(1)
  015b7e8  stfd 30, 128(1)
  015b7ec  stfd 31, 136(1)
  015b7f0  std 31, 112(1)
  015b7f4  ori 31, 3, 0
  015b7f8  lbz 3, 25(3)
  015b7fc  fcmpu 1, 1, 3
  015b800  clrlwi 3, 3, 31
  015b804  fcmpu 6, 1, 2
  015b808  fmr 29, 1
  015b80c  cmpwi 3, 0
  015b810  fmr 30, 2
  015b814  fmr 31, 3
  015b818  bt 2, 0x15b878
  015b81c  bt 25, 0x15b828
  015b820  lwz 31, 12(31)
  015b824  b 0x15b874
  015b828  bt 4, 0x15b834
  015b82c  lwz 31, 8(31)
  015b830  b 0x15b874
  015b834  lwz 3, 12(31)
  015b838  lwz 4, 8(31)
  015b83c  subc 3, 3, 4
  015b840  extsw 3, 3
  015b844  bl 0x502730
  015b848  nop
  015b84c  fsubs 2, 31, 29
  015b850  fsubs 3, 31, 30
  015b854  fmuls 2, 2, 2
  015b858  fmuls 3, 3, 3
  015b85c  fmuls 1, 2, 1
  015b860  fdivs 1, 1, 3
  015b864  bl 0x502758
  015b868  nop
  015b86c  lwz 31, 8(31)
  015b870  addc 31, 31, 3
  015b874  b 0x15b8c8
  015b878  bt 25, 0x15b884
  015b87c  lwz 31, 12(31)
  015b880  b 0x15b8c8
  015b884  bt 4, 0x15b890
  015b888  lwz 31, 8(31)
  015b88c  b 0x15b8c8
  015b890  lwz 3, 12(31)
  015b894  lwz 4, 8(31)
  015b898  subc 3, 3, 4
  015b89c  extsw 3, 3
  015b8a0  bl 0x502730
  015b8a4  nop
  015b8a8  fsubs 2, 31, 29
  015b8ac  fsubs 3, 31, 30
  015b8b0  fmuls 1, 2, 1
  015b8b4  fdivs 1, 1, 3
  015b8b8  bl 0x502758
  015b8bc  nop
  015b8c0  lwz 31, 8(31)
  015b8c4  addc 31, 31, 3
  015b8c8  extsw 3, 31
  015b8cc  ld 0, 160(1)
  015b8d0  mtlr 0
  015b8d4  lfd 29, 120(1)
  015b8d8  lfd 30, 128(1)
  015b8dc  lfd 31, 136(1)
  015b8e0  ld 31, 112(1)
  015b8e4  addi 1, 1, 144
  015b8e8  blr

sound_GetFade_channel:   # 0x15b8ec, 0x6c bytes
  015b8ec  stdu 1, -112(1)
  015b8f0  mflr 0
  015b8f4  std 0, 128(1)
  015b8f8  lis 5, 149
  015b8fc  lfs 1, 4(4)
  015b900  addic 5, 5, 5056
  015b904  lfs 2, 0(4)
  015b908  lfs 3, 324(5)
  015b90c  lfs 4, 320(5)
  015b910  fsubs 1, 1, 3
  015b914  fsubs 4, 2, 4
  015b918  lfs 2, 8(4)
  015b91c  lfs 3, 328(5)
  015b920  lwz 4, 8(3)
  015b924  fsubs 5, 2, 3
  015b928  ori 3, 4, 0
  015b92c  lfs 2, 0(4)
  015b930  fmuls 1, 1, 1
  015b934  lfs 3, 4(4)
  015b938  fmadds 1, 4, 4, 1
  015b93c  fmadds 1, 5, 5, 1
  015b940  fsqrts 1, 1
  015b944  bl 0x15b7d8
  015b948  ld 0, 128(1)
  015b94c  mtlr 0
  015b950  addi 1, 1, 112
  015b954  blr

sound_GetPan:   # 0x15b970, 0x290 bytes
  015b970  stdu 1, -160(1)
  015b974  mflr 0
  015b978  std 0, 176(1)
  015b97c  lis 3, 149
  015b980  lfs 1, 4(4)
  015b984  addic 3, 3, 5056
  015b988  lfs 2, 0(4)
  015b98c  lfs 3, 324(3)
  015b990  lfs 4, 320(3)
  015b994  fsubs 1, 1, 3
  015b998  lfs 3, 20(5)
  015b99c  fsubs 2, 2, 4
  015b9a0  lfs 4, 8(4)
  015b9a4  lfs 5, 328(3)
  015b9a8  lfs 6, 16(5)
  015b9ac  fsubs 4, 4, 5
  015b9b0  lfs 5, 4(5)
  015b9b4  lfs 7, 0(5)
  015b9b8  fmuls 3, 3, 1
  015b9bc  fmuls 1, 6, 1
  015b9c0  lfs 6, 36(5)
  015b9c4  lfs 8, 12(4)
  015b9c8  lfs 9, 32(5)
  015b9cc  lfs 10, 52(5)
  015b9d0  lfs 11, 48(5)
  015b9d4  lis 3, 22
  015b9d8  fmadds 3, 5, 2, 3
  015b9dc  fmadds 1, 7, 2, 1
  015b9e0  addi 3, 3, -18088
  015b9e4  fmadds 2, 6, 4, 3
  015b9e8  fmadds 1, 9, 4, 1
  015b9ec  lfs 4, 0(3)
  015b9f0  lfs 7, 4(3)
  015b9f4  lis 3, 115
  015b9f8  fmadds 2, 10, 8, 2
  015b9fc  fmadds 1, 11, 8, 1
  015ba00  addic 3, 3, 22784
  015ba04  fmuls 3, 2, 2
  015ba08  fabs 6, 1
  015ba0c  fabs 5, 2
  015ba10  stfs 1, 112(1)
  015ba14  fmadds 3, 1, 1, 3
  015ba18  fmr 1, 4
  015ba1c  fsubs 8, 6, 5
  015ba20  fsqrts 9, 3
  015ba24  stfs 8, 120(1)
  015ba28  stfs 2, 116(1)
  015ba2c  fmr 2, 7
  015ba30  lwz 4, 112(1)
  015ba34  lwz 5, 120(1)
  015ba38  lfs 3, 120(1)
  015ba3c  lfs 4, 112(1)
  015ba40  lwz 6, 116(1)
  015ba44  fabs 4, 4
  015ba48  lfs 8, 116(1)
  015ba4c  rlwinm 6, 6, 3, 29, 29
  015ba50  fabs 8, 8
  015ba54  fsub 7, 3, 2
  015ba58  fsub 10, 3, 2
  015ba5c  rlwimi 6, 5, 2, 30, 30
  015ba60  rlwimi 6, 4, 4, 28, 28
  015ba64  ori 4, 3, 0
  015ba68  slwi 5, 6, 2
  015ba6c  rlwimi 4, 6, 2, 26, 28
  015ba70  clrldi 4, 4, 32
  015ba74  fsel 5, 7, 4, 5
  015ba78  fsel 6, 10, 8, 6
  015ba7c  lfsx 4, 3, 5
  015ba80  lfs 3, 4(4)
  015ba84  fcmpu 0, 5, 2
  015ba88  fsubs 7, 9, 1
  015ba8c  fsub 8, 7, 2
  015ba90  fsel 7, 8, 7, 2
  015ba94  fsub 8, 1, 7
  015ba98  fsel 1, 8, 7, 1
  015ba9c  bt 1, 0x15baa4
  015baa0  b 0x15bbc8
  015baa4  fsubs 7, 6, 5
  015baa8  fadds 5, 6, 5
  015baac  addic 6, 1, 16
  015bab0  li 3, 2
  015bab4  addic 4, 6, 124
  015bab8  addic 5, 6, 108
  015babc  mtctr 3
  015bac0  fdivs 5, 7, 5
  015bac4  fmuls 7, 5, 5
  015bac8  stfs 5, 136(1)
  015bacc  stfs 5, 128(1)
  015bad0  stfs 5, 132(1)
  015bad4  stfs 5, 124(1)
  015bad8  lfs 8, 136(1)
  015badc  lfs 9, 128(1)
  015bae0  lfs 10, 132(1)
  015bae4  fmuls 5, 7, 7
  015bae8  fmuls 9, 9, 7
  015baec  fmuls 8, 8, 5
  015baf0  fmuls 6, 5, 5
  015baf4  fmuls 5, 10, 5
  015baf8  stfs 9, 128(1)
  015bafc  fmuls 7, 8, 7
  015bb00  stfs 5, 132(1)
  015bb04  stfs 7, 136(1)
  015bb08  lfs 5, 108(6)
  015bb0c  fmuls 5, 5, 6
  015bb10  stfs 5, 124(6)
  015bb14  lfs 5, 4(5)
  015bb18  addic 5, 5, 8
  015bb1c  fmuls 5, 5, 6
  015bb20  addic 6, 6, 8
  015bb24  stfs 5, 4(4)
  015bb28  addic 4, 4, 8
  015bb2c  bdnz 0x15bb08
  015bb30  ori 7, 1, 0
  015bb34  li 4, 4
  015bb38  lis 6, 115
  015bb3c  addic 5, 7, 124
  015bb40  mtctr 4
  015bb44  addic 6, 6, 22752
  015bb48  ori 4, 5, 0
  015bb4c  lfs 5, 124(7)
  015bb50  lfs 6, 0(6)
  015bb54  fmuls 5, 5, 6
  015bb58  lfs 6, 4(6)
  015bb5c  addic 6, 6, 8
  015bb60  stfs 5, 124(7)
  015bb64  lfs 5, 4(5)
  015bb68  addic 7, 7, 8
  015bb6c  fmuls 5, 5, 6
  015bb70  stfs 5, 4(5)
  015bb74  addic 5, 5, 8
  015bb78  bdnz 0x15bb4c
  015bb7c  ori 5, 3, 0
  015bb80  ori 3, 1, 0
  015bb84  mtctr 5
  015bb88  lfs 5, 124(3)
  015bb8c  fadds 2, 2, 5
  015bb90  lfs 5, 4(4)
  015bb94  addic 3, 3, 16
  015bb98  lfs 6, 8(4)
  015bb9c  lfs 7, 12(4)
  015bba0  addic 4, 4, 16
  015bba4  fadds 2, 2, 5
  015bba8  fadds 2, 2, 6
  015bbac  fadds 2, 2, 7
  015bbb0  bdnz 0x15bb88
  015bbb4  lis 3, 22
  015bbb8  addi 3, 3, -18088
  015bbbc  lfs 5, 8(3)
  015bbc0  fadds 2, 2, 5
  015bbc4  fmadds 2, 2, 4, 3
  015bbc8  lis 3, 22
  015bbcc  addi 3, 3, -18088
  015bbd0  lfs 3, 12(3)
  015bbd4  lfs 4, 16(3)
  015bbd8  fmuls 2, 2, 3
  015bbdc  fmuls 1, 2, 1
  015bbe0  fmuls 1, 1, 4
  015bbe4  fneg 1, 1
  015bbe8  bl 0x502758
  015bbec  nop
  015bbf0  ld 0, 176(1)
  015bbf4  mtlr 0
  015bbf8  addi 1, 1, 160
  015bbfc  blr

sound_Init:   # 0x15bc00, 0x250 bytes
  015bc00  stdu 1, -128(1)
  015bc04  mflr 0
  015bc08  std 0, 144(1)
  015bc0c  std 31, 120(1)
  015bc10  lis 31, 150
  015bc14  li 5, 4
  015bc18  addic 31, 31, 14176
  015bc1c  li 3, 0
  015bc20  ori 4, 31, 0
  015bc24  mtctr 5
  015bc28  stb 3, 0(4)
  015bc2c  stb 3, 1(4)
  015bc30  stb 3, 2(4)
  015bc34  stb 3, 3(4)
  015bc38  stb 3, 4(4)
  015bc3c  stb 3, 5(4)
  015bc40  stb 3, 6(4)
  015bc44  stb 3, 7(4)
  015bc48  stb 3, 8(4)
  015bc4c  stb 3, 9(4)
  015bc50  stb 3, 10(4)
  015bc54  stb 3, 11(4)
  015bc58  stb 3, 12(4)
  015bc5c  stb 3, 13(4)
  015bc60  stb 3, 14(4)
  015bc64  stb 3, 15(4)
  015bc68  addic 4, 4, 16
  015bc6c  bdnz 0x15bc28
  015bc70  li 6, 15
  015bc74  stw 3, 64(31)
  015bc78  addic 5, 31, 112
  015bc7c  addic 4, 31, 116
  015bc80  stw 3, 68(31)
  015bc84  mtctr 6
  015bc88  stw 3, 0(5)
  015bc8c  stb 3, 0(4)
  015bc90  stw 3, 112(5)
  015bc94  stb 3, 112(4)
  015bc98  addic 5, 5, 224
  015bc9c  addic 4, 4, 224
  015bca0  bdnz 0x15bc88
  015bca4  bl 0x505810
  015bca8  nop
  015bcac  lis 3, 114
  015bcb0  li 5, 0
  015bcb4  li 4, 7
  015bcb8  li 6, 6
  015bcbc  lwz 3, -1212(3)
  015bcc0  subc 4, 4, 6
  015bcc4  subc 3, 5, 3
  015bcc8  cntlzw 3, 3
  015bccc  sldi 3, 3, 58
  015bcd0  sradi 3, 3, 63
  015bcd4  and 3, 3, 4
  015bcd8  addc 3, 6, 3
  015bcdc  bl 0x506048
  015bce0  nop
  015bce4  li 3, 8
  015bce8  li 4, 3
  015bcec  bl 0x506040
  015bcf0  nop
  015bcf4  li 3, 0
  015bcf8  li 4, 4
  015bcfc  bl 0x505f44
  015bd00  nop
  015bd04  li 3, 1
  015bd08  li 4, 24
  015bd0c  li 5, 47
  015bd10  bl 0x60b9cc
  015bd14  nop
  015bd18  li 3, 2
  015bd1c  li 4, 24
  015bd20  li 5, 47
  015bd24  bl 0x60b9cc
  015bd28  nop
  015bd2c  li 3, 4
  015bd30  li 4, 24
  015bd34  li 5, 47
  015bd38  bl 0x60b9cc
  015bd3c  nop
  015bd40  lis 3, 114
  015bd44  lis 4, 26214
  015bd48  lis 8, 114
  015bd4c  ori 4, 4, 26215
  015bd50  lwz 3, -1204(3)
  015bd54  slwi 5, 3, 3
  015bd58  mulhw 6, 4, 5
  015bd5c  mulhw 5, 4, 5
  015bd60  sldi 7, 3, 3
  015bd64  srawi 6, 6, 2
  015bd68  subc 7, 7, 3
  015bd6c  mulhw 9, 4, 7
  015bd70  mulhw 4, 4, 7
  015bd74  srawi 5, 5, 2
  015bd78  srwi 10, 6, 31
  015bd7c  srwi 7, 5, 31
  015bd80  addc 6, 6, 10
  015bd84  addc 5, 5, 7
  015bd88  lwz 7, -1208(8)
  015bd8c  srawi 4, 4, 2
  015bd90  stw 6, 72(31)
  015bd94  srawi 6, 9, 2
  015bd98  stw 7, 76(31)
  015bd9c  srwi 8, 4, 31
  015bda0  stw 5, 80(31)
  015bda4  srwi 5, 6, 31
  015bda8  stw 3, 92(31)
  015bdac  addc 4, 4, 8
  015bdb0  addc 3, 6, 5
  015bdb4  stw 4, 84(31)
  015bdb8  stw 3, 88(31)
  015bdbc  bl 0x11ba58
  015bdc0  nop
  015bdc4  lwz 4, 72(31)
  015bdc8  li 3, 0
  015bdcc  extsw 4, 4
  015bdd0  bl 0x505f58
  015bdd4  nop
  015bdd8  lwz 4, 76(31)
  015bddc  li 3, 1
  015bde0  extsw 4, 4
  015bde4  bl 0x505f58
  015bde8  nop
  015bdec  lwz 4, 80(31)
  015bdf0  li 3, 2
  015bdf4  extsw 4, 4
  015bdf8  bl 0x505f58
  015bdfc  nop
  015be00  lwz 4, 84(31)
  015be04  li 3, 3
  015be08  extsw 4, 4
  015be0c  bl 0x505f58
  015be10  nop
  015be14  lwz 4, 88(31)
  015be18  li 3, 4
  015be1c  extsw 4, 4
  015be20  bl 0x505f58
  015be24  nop
  015be28  lwz 4, 92(31)
  015be2c  li 3, 5
  015be30  extsw 4, 4
  015be34  bl 0x505f58
  015be38  nop
  015be3c  ld 0, 144(1)
  015be40  mtlr 0
  015be44  ld 31, 120(1)
  015be48  addi 1, 1, 128
  015be4c  blr

sound_Update:   # 0x15be68, 0xe10 bytes
  015be68  stdu 1, -800(1)
  015be6c  mflr 0
  015be70  std 0, 816(1)
  015be74  stfd 24, 736(1)
  015be78  stfd 25, 744(1)
  015be7c  stfd 26, 752(1)
  015be80  stfd 27, 760(1)
  015be84  stfd 28, 768(1)
  015be88  stfd 29, 776(1)
  015be8c  stfd 30, 784(1)
  015be90  stfd 31, 792(1)
  015be94  std 18, 624(1)
  015be98  lis 3, 22
  015be9c  lis 18, 149
  015bea0  addi 3, 3, -16816
  015bea4  addic 18, 18, 5056
  015bea8  std 16, 608(1)
  015beac  lfs 31, 0(3)
  015beb0  lwz 16, 916(18)
  015beb4  fmr 30, 31
  015beb8  std 31, 728(1)
  015bebc  std 30, 720(1)
  015bec0  std 29, 712(1)
  015bec4  std 28, 704(1)
  015bec8  std 27, 696(1)
  015becc  std 26, 688(1)
  015bed0  std 25, 680(1)
  015bed4  std 24, 672(1)
  015bed8  std 23, 664(1)
  015bedc  std 22, 656(1)
  015bee0  std 21, 648(1)
  015bee4  std 20, 640(1)
  015bee8  std 19, 632(1)
  015beec  std 17, 616(1)
  015bef0  std 15, 600(1)
  015bef4  std 14, 592(1)
  015bef8  cmpwi 16, 0
  015befc  bt 2, 0x15bf0c
  015bf00  lis 3, 151
  015bf04  addic 3, 3, -25376
  015bf08  lfs 31, 752(3)
  015bf0c  bl 0x505d20
  015bf10  nop
  015bf14  lis 21, 150
  015bf18  addic 21, 21, 14176
  015bf1c  lbz 3, 107(21)
  015bf20  rlwinm 4, 3, 0, 28, 28
  015bf24  cmpwi 4, 0
  015bf28  bt 2, 0x15bf4c
  015bf2c  li 3, 0
  015bf30  li 4, 5
  015bf34  li 5, 0
  015bf38  li 6, 0
  015bf3c  li 7, 0
  015bf40  bl 0x506074
  015bf44  nop
  015bf48  b 0x15bfa8
  015bf4c  li 4, 19
  015bf50  and 4, 3, 4
  015bf54  cmpwi 4, 0
  015bf58  bt 2, 0x15bf80
  015bf5c  lbz 4, 104(21)
  015bf60  lwz 5, 100(21)
  015bf64  li 3, 0
  015bf68  lbz 6, 105(21)
  015bf6c  lbz 7, 106(21)
  015bf70  extsw 5, 5
  015bf74  bl 0x506074
  015bf78  nop
  015bf7c  b 0x15bfa8
  015bf80  rlwinm 3, 3, 0, 29, 29
  015bf84  cmpwi 3, 0
  015bf88  bt 2, 0x15bfa8
  015bf8c  lwz 4, 100(21)
  015bf90  li 3, 0
  015bf94  li 5, 12
  015bf98  li 6, 3
  015bf9c  extsw 4, 4
  015bfa0  bl 0x505af8
  015bfa4  nop
  015bfa8  lis 15, 161
  015bfac  li 17, 0
  015bfb0  lwz 3, 1800(15)
  015bfb4  stb 17, 107(21)
  015bfb8  cmpwi 3, 0
  015bfbc  cmpwi 1, 3, 2
  015bfc0  bt 2, 0x15bfc8
  015bfc4  bf 6, 0x15bfe0
  015bfc8  lis 3, 161
  015bfcc  lbz 3, 24376(3)
  015bfd0  cmpwi 3, 0
  015bfd4  bf 2, 0x15bfe0
  015bfd8  addic 3, 1, 112
  015bfdc  bl 0x15b590
  015bfe0  lwz 3, 64(21)
  015bfe4  lfs 1, 320(18)
  015bfe8  fmr 29, 30
  015bfec  addic 3, 3, 1
  015bff0  srawi 4, 3, 2
  015bff4  lis 7, 114
  015bff8  addze 4, 4
  015bffc  sldi 4, 4, 2
  015c000  subc 3, 3, 4
  015c004  fmr 28, 29
  015c008  slwi 4, 3, 4
  015c00c  stw 3, 64(21)
  015c010  addc 3, 21, 4
  015c014  clrldi 4, 3, 32
  015c018  lis 3, 22
  015c01c  addi 5, 3, -16816
  015c020  ori 3, 17, 0
  015c024  stfs 1, 0(4)
  015c028  fmr 27, 28
  015c02c  lfs 1, 324(18)
  015c030  stfs 1, 4(4)
  015c034  lfs 1, 328(18)
  015c038  stfs 1, 8(4)
  015c03c  lfs 1, 332(18)
  015c040  stfs 1, 12(4)
  015c044  lfs 4, 4(5)
  015c048  lwz 4, 64(21)
  015c04c  ori 5, 4, 0
  015c050  addic 6, 5, 3
  015c054  fmr 24, 27
  015c058  srawi 8, 6, 2
  015c05c  fmr 25, 28
  015c060  addze 8, 8
  015c064  fmr 26, 29
  015c068  sldi 8, 8, 2
  015c06c  subc 6, 6, 8
  015c070  cmpw 6, 4
  015c074  bt 2, 0x15c0f4
  015c078  sldi 5, 5, 4
  015c07c  sldi 8, 6, 4
  015c080  addc 5, 21, 5
  015c084  addc 8, 21, 8
  015c088  clrldi 5, 5, 32
  015c08c  clrldi 8, 8, 32
  015c090  lfs 2, 4(5)
  015c094  lfs 1, 4(8)
  015c098  lfs 3, 0(5)
  015c09c  fsubs 2, 2, 1
  015c0a0  lfs 1, 0(8)
  015c0a4  fsubs 1, 3, 1
  015c0a8  lfs 3, 8(5)
  015c0ac  lfs 5, 8(8)
  015c0b0  fsubs 3, 3, 5
  015c0b4  fmuls 5, 2, 2
  015c0b8  lfs 6, -3052(7)
  015c0bc  fmuls 6, 6, 4
  015c0c0  fmadds 5, 1, 1, 5
  015c0c4  fmadds 5, 3, 3, 5
  015c0c8  fsqrts 5, 5
  015c0cc  fcmpu 0, 5, 6
  015c0d0  cror 6, 1, 2
  015c0d4  bt 6, 0x15c0f4
  015c0d8  addic 3, 3, 1
  015c0dc  fadds 29, 29, 1
  015c0e0  ori 5, 6, 0
  015c0e4  fadds 28, 28, 2
  015c0e8  extsw 3, 3
  015c0ec  fadds 27, 27, 3
  015c0f0  b 0x15c050
  015c0f4  cmpwi 3, 1
  015c0f8  bf 1, 0x15c120
  015c0fc  bl 0x502730
  015c100  nop
  015c104  lis 3, 22
  015c108  addi 3, 3, -16816
  015c10c  lfs 2, 8(3)
  015c110  fdivs 24, 2, 1
  015c114  fmuls 26, 29, 24
  015c118  fmuls 25, 28, 24
  015c11c  fmuls 24, 27, 24
  015c120  lwz 3, 1800(15)
  015c124  cmpwi 3, 2
  015c128  bf 2, 0x15c178
  015c12c  li 4, 0
  015c130  li 3, 1
  015c134  bl 0x505f58
  015c138  nop
  015c13c  lwz 4, 72(21)
  015c140  li 3, 0
  015c144  srawi 4, 4, 1
  015c148  addze 4, 4
  015c14c  extsw 4, 4
  015c150  bl 0x505f58
  015c154  nop
  015c158  lwz 3, 84(21)
  015c15c  srawi 4, 3, 1
  015c160  li 3, 3
  015c164  addze 4, 4
  015c168  extsw 4, 4
  015c16c  bl 0x505f58
  015c170  nop
  015c174  b 0x15c1e4
  015c178  lwz 3, 76(21)
  015c17c  cmpwi 16, 0
  015c180  extsw 3, 3
  015c184  bt 2, 0x15c1ac
  015c188  addc 4, 3, 3
  015c18c  lis 5, 26214
  015c190  addc 3, 3, 4
  015c194  ori 4, 5, 26215
  015c198  mulhw 3, 4, 3
  015c19c  srawi 3, 3, 1
  015c1a0  srwi 4, 3, 31
  015c1a4  addc 3, 3, 4
  015c1a8  extsw 3, 3
  015c1ac  ori 4, 3, 0
  015c1b0  li 3, 1
  015c1b4  bl 0x505f58
  015c1b8  nop
  015c1bc  lwz 4, 72(21)
  015c1c0  li 3, 0
  015c1c4  extsw 4, 4
  015c1c8  bl 0x505f58
  015c1cc  nop
  015c1d0  lwz 4, 84(21)
  015c1d4  li 3, 3
  015c1d8  extsw 4, 4
  015c1dc  bl 0x505f58
  015c1e0  nop
  015c1e4  lwz 4, 80(21)
  015c1e8  li 3, 2
  015c1ec  extsw 4, 4
  015c1f0  bl 0x505f58
  015c1f4  nop
  015c1f8  lwz 4, 88(21)
  015c1fc  li 3, 4
  015c200  extsw 4, 4
  015c204  bl 0x505f58
  015c208  nop
  015c20c  lwz 4, 92(21)
  015c210  li 3, 5
  015c214  extsw 4, 4
  015c218  bl 0x505f58
  015c21c  nop
  015c220  addic 3, 1, 192
  015c224  li 4, 0
  015c228  li 5, 120
  015c22c  bl 0x5001fc
  015c230  nop
  015c234  addic 3, 1, 312
  015c238  li 4, 0
  015c23c  li 5, 120
  015c240  bl 0x5001fc
  015c244  nop
  015c248  addic 3, 1, 432
  015c24c  li 4, 0
  015c250  li 5, 120
  015c254  bl 0x5001fc
  015c258  nop
  015c25c  addic 24, 21, 116
  015c260  addic 23, 21, 112
  015c264  lis 4, 22
  015c268  addic 25, 21, 136
  015c26c  addic 26, 21, 120
  015c270  std 24, 576(1)
  015c274  addi 4, 4, -16816
  015c278  std 23, 568(1)
  015c27c  addic 14, 21, 144
  015c280  std 25, 560(1)
  015c284  std 26, 552(1)
  015c288  addic 29, 21, 117
  015c28c  ori 30, 1, 0
  015c290  lfs 29, 8(4)
  015c294  ori 19, 17, 0
  015c298  lfs 28, 12(4)
  015c29c  addic 27, 21, 160
  015c2a0  addic 28, 21, 152
  015c2a4  addic 22, 21, 128
  015c2a8  ori 20, 21, 0
  015c2ac  ori 31, 14, 0
  015c2b0  lbz 9, 0(24)
  015c2b4  cmpwi 9, 7
  015c2b8  bt 2, 0x15c2d0
  015c2bc  lwz 3, 0(23)
  015c2c0  cmpwi 3, 0
  015c2c4  cmpwi 1, 3, -1
  015c2c8  bt 2, 0x15c698
  015c2cc  bt 6, 0x15c698
  015c2d0  lwz 8, 136(20)
  015c2d4  ori 7, 17, 0
  015c2d8  cmpwi 8, 0
  015c2dc  bt 2, 0x15c304
  015c2e0  lbz 3, 32(8)
  015c2e4  cmpwi 3, 254
  015c2e8  cmpwi 1, 3, 253
  015c2ec  bt 2, 0x15c2f8
  015c2f0  ori 7, 17, 0
  015c2f4  bf 6, 0x15c304
  015c2f8  lbz 9, 0(24)
  015c2fc  li 7, 1
  015c300  stw 17, 0(25)
  015c304  cmpwi 9, 4
  015c308  bt 2, 0x15c32c
  015c30c  cmpwi 1, 7, 0
  015c310  cmpwi 9, 6
  015c314  cror 2, 2, 6
  015c318  bt 2, 0x15c338
  015c31c  lwz 3, 0(26)
  015c320  lbz 3, 24(3)
  015c324  cmpwi 3, 0
  015c328  bt 2, 0x15c338
  015c32c  li 3, 32
  015c330  stw 3, 192(30)
  015c334  b 0x15c698
  015c338  lwz 7, 1800(15)
  015c33c  cmpwi 1, 7, 2
  015c340  cmpwi 7, 0
  015c344  cror 2, 2, 6
  015c348  bt 2, 0x15c35c
  015c34c  cmpwi 7, 6
  015c350  cmpwi 1, 9, 7
  015c354  bt 2, 0x15c35c
  015c358  bf 6, 0x15c690
  015c35c  lwz 3, 0(25)
  015c360  cmpwi 3, 0
  015c364  bt 2, 0x15c494
  015c368  lbz 7, 0(29)
  015c36c  rlwinm 3, 7, 0, 28, 28
  015c370  cmpwi 3, 0
  015c374  bf 2, 0x15c494
  015c378  rlwinm 3, 7, 0, 25, 25
  015c37c  cmpwi 3, 0
  015c380  bt 2, 0x15c43c
  015c384  lfs 1, 208(8)
  015c388  lfs 2, 4(27)
  015c38c  lfs 3, 212(8)
  015c390  lfs 4, 192(8)
  015c394  lfs 5, 0(27)
  015c398  fmuls 1, 1, 2
  015c39c  lfs 6, 216(8)
  015c3a0  fmuls 3, 3, 2
  015c3a4  lfs 7, 220(8)
  015c3a8  fmuls 6, 6, 2
  015c3ac  fmuls 2, 7, 2
  015c3b0  lfs 8, 196(8)
  015c3b4  lfs 7, 200(8)
  015c3b8  lfs 9, 224(8)
  015c3bc  fmadds 1, 4, 5, 1
  015c3c0  lfs 4, 204(8)
  015c3c4  fmadds 3, 8, 5, 3
  015c3c8  fmadds 6, 7, 5, 6
  015c3cc  fmadds 2, 4, 5, 2
  015c3d0  lfs 8, 8(27)
  015c3d4  lfs 10, 228(8)
  015c3d8  lfs 11, 232(8)
  015c3dc  lfs 4, 236(8)
  015c3e0  lfs 5, 12(27)
  015c3e4  lfs 7, 16(8)
  015c3e8  fmadds 1, 9, 8, 1
  015c3ec  fmadds 3, 10, 8, 3
  015c3f0  fmadds 6, 11, 8, 6
  015c3f4  fmadds 2, 4, 8, 2
  015c3f8  lfs 4, 20(8)
  015c3fc  lfs 8, 24(8)
  015c400  fadds 7, 1, 7
  015c404  lfs 1, 0(31)
  015c408  fadds 3, 3, 4
  015c40c  fadds 6, 6, 8
  015c410  lfs 4, 4(31)
  015c414  fadds 5, 2, 5
  015c418  lfs 8, 8(31)
  015c41c  fsubs 1, 7, 1
  015c420  stfs 7, 0(31)
  015c424  fsubs 2, 3, 4
  015c428  stfs 3, 4(31)
  015c42c  stfs 6, 8(31)
  015c430  fsubs 3, 6, 8
  015c434  stfs 5, 12(31)
  015c438  b 0x15c4a0
  015c43c  lfs 1, 0(28)
  015c440  lwz 3, 0(25)
  015c444  fsubs 1, 1, 29
  015c448  stfs 1, 0(28)
  015c44c  lfs 1, 16(3)
  015c450  lfs 2, 0(31)
  015c454  lfs 3, 20(3)
  015c458  lfs 4, 4(31)
  015c45c  lfs 5, 24(3)
  015c460  lfs 6, 8(31)
  015c464  stfs 1, 0(31)
  015c468  stfs 3, 4(31)
  015c46c  stfs 5, 8(31)
  015c470  fsubs 1, 1, 2
  015c474  lfs 7, 28(3)
  015c478  fsubs 2, 3, 4
  015c47c  fsubs 3, 5, 6
  015c480  stfs 7, 12(31)
  015c484  lfs 4, 0(28)
  015c488  fadds 4, 4, 29
  015c48c  stfs 4, 0(28)
  015c490  b 0x15c4a0
  015c494  fmr 1, 30
  015c498  fmr 2, 1
  015c49c  fmr 3, 2
  015c4a0  lfs 6, 324(18)
  015c4a4  lfs 4, 4(31)
  015c4a8  lfs 5, 320(18)
  015c4ac  fsubs 6, 6, 4
  015c4b0  lfs 4, 0(31)
  015c4b4  lfs 8, 328(18)
  015c4b8  fsubs 4, 5, 4
  015c4bc  lfs 5, 8(31)
  015c4c0  fsubs 8, 8, 5
  015c4c4  fmr 9, 30
  015c4c8  fmuls 5, 6, 6
  015c4cc  fsubs 1, 1, 26
  015c4d0  fsubs 2, 2, 25
  015c4d4  fsubs 3, 3, 24
  015c4d8  fmr 7, 9
  015c4dc  fmadds 10, 4, 4, 5
  015c4e0  fmr 5, 7
  015c4e4  fmadds 10, 8, 8, 10
  015c4e8  fsqrts 11, 10
  015c4ec  fcmpu 0, 11, 5
  015c4f0  bt 2, 0x15c534
  015c4f4  frsqrte 5, 10
  015c4f8  fmuls 7, 10, 5
  015c4fc  fmuls 9, 5, 28
  015c500  fnmsubs 7, 7, 5, 29
  015c504  fmadds 5, 7, 9, 5
  015c508  fmuls 7, 10, 5
  015c50c  fmuls 9, 5, 28
  015c510  fnmsubs 7, 7, 5, 29
  015c514  fmadds 5, 7, 9, 5
  015c518  fmuls 7, 10, 5
  015c51c  fmuls 9, 5, 28
  015c520  fnmsubs 7, 7, 5, 29
  015c524  fmadds 9, 7, 9, 5
  015c528  fmuls 5, 4, 9
  015c52c  fmuls 7, 6, 9
  015c530  fmuls 9, 8, 9
  015c534  fmuls 2, 7, 2
  015c538  lbz 3, 0(29)
  015c53c  rlwinm 3, 3, 0, 27, 27
  015c540  cmpwi 3, 0
  015c544  fmadds 1, 5, 1, 2
  015c548  fmadds 1, 9, 3, 1
  015c54c  stfs 1, 432(30)
  015c550  bf 2, 0x15c5dc
  015c554  lfs 1, 4(31)
  015c558  lfs 2, 324(18)
  015c55c  lfs 3, 0(31)
  015c560  fsubs 1, 1, 2
  015c564  lfs 2, 320(18)
  015c568  fsubs 2, 3, 2
  015c56c  lfs 3, 8(31)
  015c570  lfs 4, 328(18)
  015c574  lwz 4, 8(23)
  015c578  fsubs 4, 3, 4
  015c57c  ori 3, 4, 0
  015c580  fmuls 1, 1, 1
  015c584  fmadds 1, 2, 2, 1
  015c588  lfs 2, 0(4)
  015c58c  lfs 5, 4(4)
  015c590  fmr 3, 5
  015c594  fmadds 1, 4, 4, 1
  015c598  fsqrts 1, 1
  015c59c  bl 0x15b7d8
  015c5a0  ori 9, 3, 0
  015c5a4  lwz 3, 0(22)
  015c5a8  mullw 3, 9, 3
  015c5ac  lwz 4, 0(26)
  015c5b0  srawi 8, 3, 10
  015c5b4  addze 8, 8
  015c5b8  stw 8, 312(30)
  015c5bc  lbz 3, 25(4)
  015c5c0  rlwinm 3, 3, 0, 30, 30
  015c5c4  cmpwi 3, 0
  015c5c8  bf 2, 0x15c5e8
  015c5cc  lwz 3, 192(30)
  015c5d0  ori 3, 3, 8
  015c5d4  stw 3, 192(30)
  015c5d8  b 0x15c5e8
  015c5dc  lwz 8, 0(22)
  015c5e0  li 9, 1024
  015c5e4  stw 8, 312(30)
  015c5e8  cmpwi 16, 0
  015c5ec  ori 7, 8, 0
  015c5f0  bt 2, 0x15c624
  015c5f4  lwz 3, 0(26)
  015c5f8  lbz 3, 25(3)
  015c5fc  rlwinm 3, 3, 0, 29, 29
  015c600  cmpwi 3, 0
  015c604  bf 2, 0x15c624
  015c608  lfs 1, 0(28)
  015c60c  fcmpu 0, 1, 31
  015c610  cror 6, 0, 2
  015c614  bt 6, 0x15c624
  015c618  srawi 7, 8, 1
  015c61c  addze 7, 7
  015c620  stw 7, 312(30)
  015c624  cmpwi 1, 7, 32
  015c628  lwz 7, 192(30)
  015c62c  cmpwi 9, 32
  015c630  crnand 2, 0, 4
  015c634  ori 3, 7, 1
  015c638  stw 3, 192(30)
  015c63c  bt 2, 0x15c65c
  015c640  lbz 3, 0(29)
  015c644  rlwinm 3, 3, 0, 29, 29
  015c648  cmpwi 3, 0
  015c64c  bt 2, 0x15c65c
  015c650  li 3, 32
  015c654  stw 3, 192(30)
  015c658  b 0x15c698
  015c65c  lbz 3, 0(29)
  015c660  clrlwi 3, 3, 31
  015c664  cmpwi 3, 0
  015c668  bf 2, 0x15c698
  015c66c  ori 3, 7, 3
  015c670  lbz 4, 0(29)
  015c674  stw 3, 192(30)
  015c678  rlwinm 3, 4, 0, 26, 26
  015c67c  cmpwi 3, 0
  015c680  bf 2, 0x15c698
  015c684  ori 3, 7, 7
  015c688  stw 3, 192(30)
  015c68c  b 0x15c698
  015c690  li 3, 16
  015c694  stw 3, 192(30)
  015c698  addic 19, 19, 1
  015c69c  addic 23, 23, 112
  015c6a0  cmpwi 19, 30
  015c6a4  addic 20, 20, 112
  015c6a8  addic 22, 22, 112
  015c6ac  addic 24, 24, 112
  015c6b0  addic 26, 26, 112
  015c6b4  addic 27, 27, 112
  015c6b8  addic 28, 28, 112
  015c6bc  addic 25, 25, 112
  015c6c0  addic 29, 29, 112
  015c6c4  addic 31, 31, 112
  015c6c8  addic 30, 30, 4
  015c6cc  bt 0, 0x15c2b0
  015c6d0  ori 22, 17, 0
  015c6d4  ori 23, 1, 0
  015c6d8  ori 26, 22, 0
  015c6dc  ori 24, 21, 0
  015c6e0  lwz 3, 192(23)
  015c6e4  rlwinm 3, 3, 0, 28, 28
  015c6e8  cmpwi 3, 0
  015c6ec  bt 2, 0x15c988
  015c6f0  lbz 3, 116(24)
  015c6f4  cmpwi 3, 7
  015c6f8  bf 2, 0x15c828
  015c6fc  lwz 3, 1800(15)
  015c700  cmpwi 3, 0
  015c704  cmpwi 1, 3, 2
  015c708  bt 2, 0x15c710
  015c70c  bf 6, 0x15c988
  015c710  lis 3, 161
  015c714  lbz 3, 24376(3)
  015c718  cmpwi 3, 0
  015c71c  bf 2, 0x15c988
  015c720  lis 3, 161
  015c724  lwz 3, 1808(3)
  015c728  lwz 4, 3480(21)
  015c72c  cmpw 3, 4
  015c730  bt 2, 0x15c760
  015c734  ori 31, 17, 0
  015c738  addic 30, 21, 3488
  015c73c  ori 3, 30, 0
  015c740  bl 0x15b590
  015c744  addic 31, 31, 1
  015c748  addic 30, 30, 16
  015c74c  cmpwi 31, 6
  015c750  bt 0, 0x15c73c
  015c754  lis 3, 161
  015c758  lwz 3, 1808(3)
  015c75c  stw 3, 3480(21)
  015c760  ori 27, 17, 0
  015c764  addic 31, 21, 180
  015c768  ori 28, 27, 0
  015c76c  addic 29, 21, 3488
  015c770  addc 30, 31, 26
  015c774  addic 25, 24, 112
  015c778  ori 3, 25, 0
  015c77c  ori 4, 29, 0
  015c780  bl 0x15b6d0
  015c784  li 4, 5
  015c788  stb 3, 0(30)
  015c78c  addic 3, 30, 1
  015c790  mtctr 4
  015c794  lbzx 4, 26, 31
  015c798  stb 4, 0(3)
  015c79c  addic 3, 3, 1
  015c7a0  bdnz 0x15c794
  015c7a4  li 4, 0
  015c7a8  lbz 5, 0(30)
  015c7ac  addic 3, 27, 6
  015c7b0  addic 28, 28, 6
  015c7b4  subc 4, 4, 5
  015c7b8  subc 6, 27, 3
  015c7bc  cntlzw 4, 4
  015c7c0  cmpwi 28, 36
  015c7c4  sldi 4, 4, 58
  015c7c8  addic 29, 29, 16
  015c7cc  sradi 4, 4, 63
  015c7d0  addic 30, 30, 6
  015c7d4  and 27, 4, 6
  015c7d8  addic 31, 31, 6
  015c7dc  addc 27, 3, 27
  015c7e0  bt 0, 0x15c778
  015c7e4  cmpwi 27, 36
  015c7e8  cmpwi 1, 27, 18
  015c7ec  bt 0, 0x15c7f8
  015c7f0  stw 17, 312(23)
  015c7f4  b 0x15c988
  015c7f8  bf 5, 0x15c988
  015c7fc  subfic 3, 27, 36
  015c800  lwz 5, 312(23)
  015c804  lis 4, 14563
  015c808  mullw 3, 3, 5
  015c80c  ori 4, 4, 36409
  015c810  mulhw 3, 4, 3
  015c814  srawi 3, 3, 2
  015c818  srwi 4, 3, 31
  015c81c  addc 3, 3, 4
  015c820  stw 3, 312(23)
  015c824  b 0x15c988
  015c828  lwz 3, 1800(15)
  015c82c  cmpwi 3, 0
  015c830  cmpwi 1, 3, 2
  015c834  bt 2, 0x15c83c
  015c838  bf 6, 0x15c938
  015c83c  lis 3, 161
  015c840  lbz 3, 24376(3)
  015c844  cmpwi 3, 0
  015c848  bf 2, 0x15c938
  015c84c  lis 3, 14563
  015c850  lwz 5, 176(24)
  015c854  lis 4, 161
  015c858  ori 3, 3, 36409
  015c85c  addic 6, 5, 1
  015c860  mulhwu 3, 3, 6
  015c864  lwz 4, 1808(4)
  015c868  srwi 3, 3, 3
  015c86c  lbz 6, 117(24)
  015c870  clrlwi 9, 4, 30
  015c874  sldi 8, 3, 5
  015c878  sldi 3, 3, 2
  015c87c  xor 10, 22, 4
  015c880  addc 4, 8, 3
  015c884  clrlwi 7, 22, 30
  015c888  rlwinm 6, 6, 0, 29, 29
  015c88c  li 8, 0
  015c890  subc 7, 7, 9
  015c894  subc 6, 8, 6
  015c898  cntlzw 7, 7
  015c89c  cntlzw 6, 6
  015c8a0  subc 4, 5, 4
  015c8a4  clrlwi 5, 10, 31
  015c8a8  rlwinm 7, 7, 27, 31, 31
  015c8ac  sldi 6, 6, 58
  015c8b0  subc 7, 7, 5
  015c8b4  sradi 6, 6, 63
  015c8b8  addic 3, 4, 1
  015c8bc  and 6, 6, 7
  015c8c0  addc 5, 5, 6
  015c8c4  stw 3, 176(24)
  015c8c8  cmpwi 5, 0
  015c8cc  bt 2, 0x15c8f4
  015c8d0  addic 4, 1, 112
  015c8d4  addic 3, 24, 112
  015c8d8  bl 0x15b6d0
  015c8dc  lwz 4, 176(24)
  015c8e0  addic 5, 21, 180
  015c8e4  addc 4, 4, 5
  015c8e8  clrldi 4, 4, 32
  015c8ec  stbx 3, 4, 26
  015c8f0  b 0x15c938
  015c8f4  lis 5, 14563
  015c8f8  addic 4, 4, 36
  015c8fc  ori 5, 5, 36409
  015c900  mulhwu 4, 5, 4
  015c904  addc 5, 3, 21
  015c908  srwi 4, 4, 3
  015c90c  addic 7, 21, 180
  015c910  sldi 6, 4, 5
  015c914  sldi 4, 4, 2
  015c918  addc 3, 3, 7
  015c91c  addc 4, 6, 4
  015c920  clrldi 3, 3, 32
  015c924  subc 4, 5, 4
  015c928  addic 4, 4, 215
  015c92c  clrldi 4, 4, 32
  015c930  lbzx 4, 4, 26
  015c934  stbx 4, 3, 26
  015c938  addic 3, 24, 180
  015c93c  li 4, 36
  015c940  bl 0x500a88
  015c944  nop
  015c948  cmpwi 3, 36
  015c94c  bt 0, 0x15c958
  015c950  stw 17, 312(23)
  015c954  b 0x15c988
  015c958  cmpwi 3, 18
  015c95c  bf 1, 0x15c988
  015c960  subfic 3, 3, 36
  015c964  lwz 5, 312(23)
  015c968  lis 4, 14563
  015c96c  mullw 3, 3, 5
  015c970  ori 4, 4, 36409
  015c974  mulhw 3, 4, 3
  015c978  srawi 3, 3, 2
  015c97c  srwi 4, 3, 31
  015c980  addc 3, 3, 4
  015c984  stw 3, 312(23)
  015c988  addic 22, 22, 1
  015c98c  addic 23, 23, 4
  015c990  cmpwi 22, 30
  015c994  addic 24, 24, 112
  015c998  addic 26, 26, 112
  015c99c  bt 0, 0x15c6e0
  015c9a0  ld 29, 576(1)
  015c9a4  ld 31, 568(1)
  015c9a8  addic 3, 1, 128
  015c9ac  ld 24, 560(1)
  015c9b0  addic 4, 18, 848
  015c9b4  ld 26, 552(1)
  015c9b8  bl 0x5010c0
  015c9bc  nop
  015c9c0  lis 3, 22
  015c9c4  lis 18, 112
  015c9c8  addi 3, 3, -16816
  015c9cc  lis 23, 112
  015c9d0  ori 30, 1, 0
  015c9d4  ori 22, 17, 0
  015c9d8  addic 25, 21, 140
  015c9dc  lfs 31, 16(3)
  015c9e0  addic 23, 23, 31816
  015c9e4  addic 18, 18, 31808
  015c9e8  ori 28, 21, 0
  015c9ec  ori 27, 14, 0
  015c9f0  lwz 3, 192(30)
  015c9f4  cmpwi 3, 0
  015c9f8  bt 2, 0x15cbac
  015c9fc  lwz 3, 192(30)
  015ca00  li 4, -1
  015ca04  lwz 20, 112(28)
  015ca08  rlwinm 5, 3, 0, 26, 26
  015ca0c  cmpwi 5, 0
  015ca10  stw 4, 0(31)
  015ca14  bt 2, 0x15ca60
  015ca18  lbz 3, 0(29)
  015ca1c  cmpwi 3, 7
  015ca20  bf 2, 0x15ca34
  015ca24  stw 17, 0(24)
  015ca28  stw 17, 0(25)
  015ca2c  stb 17, 0(29)
  015ca30  b 0x15cbac
  015ca34  ori 3, 20, 0
  015ca38  bl 0x506638
  015ca3c  nop
  015ca40  li 6, 6
  015ca44  ori 3, 20, 0
  015ca48  ori 4, 23, 0
  015ca4c  ori 5, 31, 0
  015ca50  stb 6, 0(29)
  015ca54  bl 0x5065dc
  015ca58  nop
  015ca5c  b 0x15cbac
  015ca60  rlwinm 4, 3, 0, 27, 27
  015ca64  cmpwi 4, 0
  015ca68  bt 2, 0x15ca84
  015ca6c  ori 3, 20, 0
  015ca70  ori 4, 23, 0
  015ca74  ori 5, 31, 0
  015ca78  bl 0x5065dc
  015ca7c  nop
  015ca80  b 0x15cbac
  015ca84  lwz 15, 132(28)
  015ca88  li 4, 0
  015ca8c  li 5, 4
  015ca90  extsw 15, 15
  015ca94  li 14, 6
  015ca98  subc 4, 4, 15
  015ca9c  subc 5, 5, 14
  015caa0  cntlzw 4, 4
  015caa4  rlwinm 6, 3, 0, 30, 30
  015caa8  sldi 4, 4, 58
  015caac  cmpwi 6, 0
  015cab0  sradi 4, 4, 63
  015cab4  ori 19, 17, 0
  015cab8  and 4, 4, 5
  015cabc  addc 14, 14, 4
  015cac0  bt 2, 0x15cae0
  015cac4  ori 3, 31, 0
  015cac8  addic 5, 1, 128
  015cacc  ori 14, 14, 8
  015cad0  ori 4, 27, 0
  015cad4  bl 0x15b970
  015cad8  ori 19, 3, 0
  015cadc  lwz 3, 192(30)
  015cae0  rlwinm 4, 3, 0, 29, 29
  015cae4  ori 3, 17, 0
  015cae8  cmpwi 4, 0
  015caec  bt 2, 0x15cb0c
  015caf0  lfs 1, 432(30)
  015caf4  ori 14, 14, 1
  015caf8  fmuls 1, 1, 31
  015cafc  bl 0x502758
  015cb00  nop
  015cb04  bl 0x505d30
  015cb08  nop
  015cb0c  cmpwi 16, 0
  015cb10  bt 2, 0x15cb34
  015cb14  lwz 4, 0(26)
  015cb18  lbz 4, 25(4)
  015cb1c  rlwinm 4, 4, 0, 28, 28
  015cb20  cmpwi 4, 0
  015cb24  bf 2, 0x15cb34
  015cb28  addic 3, 3, -1524
  015cb2c  ori 14, 14, 1
  015cb30  extsw 3, 3
  015cb34  lbz 4, 0(29)
  015cb38  cmpwi 4, 7
  015cb3c  bt 2, 0x15cb70
  015cb40  lwz 5, 312(30)
  015cb44  ori 7, 3, 0
  015cb48  ori 3, 20, 0
  015cb4c  ori 10, 31, 0
  015cb50  ori 4, 14, 0
  015cb54  ori 6, 19, 0
  015cb58  ori 8, 15, 0
  015cb5c  ori 9, 23, 0
  015cb60  extsw 5, 5
  015cb64  bl 0x5063b0
  015cb68  nop
  015cb6c  b 0x15cbac
  015cb70  li 4, 1
  015cb74  ori 7, 3, 0
  015cb78  ori 8, 15, 0
  015cb7c  ori 6, 19, 0
  015cb80  stb 4, 0(29)
  015cb84  ori 9, 18, 0
  015cb88  lwz 3, 120(28)
  015cb8c  ori 10, 31, 0
  015cb90  lwz 5, 312(30)
  015cb94  extsw 5, 5
  015cb98  lhz 11, 26(3)
  015cb9c  lwz 3, 28(3)
  015cba0  extsh 4, 11
  015cba4  bl 0x5062f4
  015cba8  nop
  015cbac  addic 22, 22, 1
  015cbb0  addic 24, 24, 112
  015cbb4  cmpwi 22, 30
  015cbb8  addic 31, 31, 112
  015cbbc  addic 25, 25, 112
  015cbc0  addic 28, 28, 112
  015cbc4  addic 27, 27, 112
  015cbc8  addic 26, 26, 112
  015cbcc  addic 29, 29, 112
  015cbd0  addic 30, 30, 4
  015cbd4  bt 0, 0x15c9f0
  015cbd8  bl 0x11d1f0
  015cbdc  nop
  015cbe0  bl 0x505f4c
  015cbe4  nop
  015cbe8  bl 0x505d20
  015cbec  nop
  015cbf0  bl 0x505f50
  015cbf4  nop
  015cbf8  stw 17, 108(21)
  015cbfc  ori 3, 17, 0
  015cc00  ld 0, 816(1)
  015cc04  mtlr 0
  015cc08  lfd 24, 736(1)
  015cc0c  lfd 25, 744(1)
  015cc10  lfd 26, 752(1)
  015cc14  lfd 27, 760(1)
  015cc18  lfd 28, 768(1)
  015cc1c  lfd 29, 776(1)
  015cc20  lfd 30, 784(1)
  015cc24  lfd 31, 792(1)
  015cc28  ld 14, 592(1)
  015cc2c  ld 15, 600(1)
  015cc30  ld 16, 608(1)
  015cc34  ld 17, 616(1)
  015cc38  ld 18, 624(1)
  015cc3c  ld 19, 632(1)
  015cc40  ld 20, 640(1)
  015cc44  ld 21, 648(1)
  015cc48  ld 22, 656(1)
  015cc4c  ld 23, 664(1)
  015cc50  ld 24, 672(1)
  015cc54  ld 25, 680(1)
  015cc58  ld 26, 688(1)
  015cc5c  ld 27, 696(1)
  015cc60  ld 28, 704(1)
  015cc64  ld 29, 712(1)
  015cc68  ld 30, 720(1)
  015cc6c  ld 31, 728(1)
  015cc70  addi 1, 1, 800
  015cc74  blr

IsMobyPlayingSound:   # 0x15cc7c, 0x58 bytes
  015cc7c  cmpwi 4, 0
  015cc80  li 5, 0
  015cc84  bt 0, 0x15cccc
  015cc88  sldi 6, 4, 7
  015cc8c  sldi 4, 4, 4
  015cc90  lis 7, 150
  015cc94  subc 4, 6, 4
  015cc98  ori 6, 3, 0
  015cc9c  addic 7, 7, 14176
  015cca0  extsw 3, 4
  015cca4  addc 3, 7, 3
  015cca8  lwz 4, 136(3)
  015ccac  cmpw 4, 6
  015ccb0  bf 2, 0x15cccc
  015ccb4  lbz 3, 116(3)
  015ccb8  cmpwi 3, 1
  015ccbc  cmpwi 1, 3, 2
  015ccc0  bt 2, 0x15ccc8
  015ccc4  bf 6, 0x15cccc
  015ccc8  li 5, 1
  015cccc  ori 3, 5, 0
  015ccd0  blr

sound_LoadLevelWadDebug:   # 0x15ccd4, 0xb0 bytes
  015ccd4  stdu 1, -208(1)
  015ccd8  mflr 0
  015ccdc  std 0, 224(1)
  015cce0  std 29, 184(1)
  015cce4  std 31, 200(1)
  015cce8  lis 29, 150
  015ccec  std 28, 176(1)
  015ccf0  ori 31, 3, 0
  015ccf4  addic 29, 29, 14176
  015ccf8  std 30, 192(1)
  015ccfc  li 28, 0
  015cd00  ori 30, 28, 0
  015cd04  lwz 3, 68(29)
  015cd08  cmpwi 3, 0
  015cd0c  bf 2, 0x15cd60
  015cd10  li 4, 1
  015cd14  lis 5, 151
  015cd18  addic 28, 1, 112
  015cd1c  lis 6, 101
  015cd20  stw 4, 68(29)
  015cd24  ori 3, 28, 0
  015cd28  lwz 5, -25488(5)
  015cd2c  addic 4, 6, 14116
  015cd30  extsw 5, 5
  015cd34  bl 0x5cd2a8
  015cd38  nop
  015cd3c  sldi 4, 31, 11
  015cd40  ori 3, 28, 0
  015cd44  extsw 4, 4
  015cd48  bl 0x505c6c
  015cd4c  nop
  015cd50  ori 28, 3, 0
  015cd54  bl 0x505f48
  015cd58  nop
  015cd5c  stw 30, 68(29)
  015cd60  ori 3, 28, 0
  015cd64  ld 0, 224(1)
  015cd68  mtlr 0
  015cd6c  ld 28, 176(1)
  015cd70  ld 29, 184(1)
  015cd74  ld 30, 192(1)
  015cd78  ld 31, 200(1)
  015cd7c  addi 1, 1, 208
  015cd80  blr

???_Unused_SetStride20Field1c:   # 0x15cd84, 0x2c bytes
  015cd84  cmpwi 5, 0
  015cd88  bf 1, 0x15cdac
  015cd8c  ori 6, 5, 0
  015cd90  ori 5, 3, 0
  015cd94  ori 3, 6, 0
  015cd98  addic 3, 3, -1
  015cd9c  stw 4, 28(5)
  015cda0  cmpwi 3, 0
  015cda4  addic 5, 5, 32
  015cda8  bt 1, 0x15cd98
  015cdac  blr

sound_Kill:   # 0x15cdb0, 0x60 bytes
  015cdb0  cmpwi 3, 0
  015cdb4  bt 0, 0x15ce0c
  015cdb8  sldi 4, 3, 7
  015cdbc  sldi 3, 3, 4
  015cdc0  lis 5, 150
  015cdc4  subc 3, 4, 3
  015cdc8  addic 5, 5, 14176
  015cdcc  extsw 3, 3
  015cdd0  addc 3, 5, 3
  015cdd4  lbz 4, 116(3)
  015cdd8  cmpwi 4, 7
  015cddc  cmpwi 1, 4, 6
  015cde0  cmpwi 6, 4, 0
  015cde4  bf 2, 0x15cdfc
  015cde8  li 4, 0
  015cdec  stw 4, 136(3)
  015cdf0  stw 4, 140(3)
  015cdf4  stb 4, 116(3)
  015cdf8  b 0x15ce0c
  015cdfc  bt 26, 0x15ce0c
  015ce00  bt 6, 0x15ce0c
  015ce04  li 4, 4
  015ce08  stb 4, 116(3)
  015ce0c  blr

sound_Play:   # 0x15ce18, 0x314 bytes
  015ce18  stdu 1, -160(1)
  015ce1c  mflr 0
  015ce20  std 0, 176(1)
  015ce24  std 31, 152(1)
  015ce28  std 30, 144(1)
  015ce2c  ori 31, 3, 0
  015ce30  ori 30, 4, 0
  015ce34  lhz 3, 26(31)
  015ce38  extsh 4, 3
  015ce3c  std 29, 136(1)
  015ce40  std 28, 128(1)
  015ce44  std 27, 120(1)
  015ce48  cmpwi 4, 0
  015ce4c  bf 0, 0x15ce58
  015ce50  li 3, -1
  015ce54  b 0x15d108
  015ce58  rlwinm 4, 30, 0, 29, 29
  015ce5c  lbz 8, 24(31)
  015ce60  cntlzw 4, 4
  015ce64  cntlzw 8, 8
  015ce68  rlwinm 4, 4, 27, 31, 31
  015ce6c  rlwinm 8, 8, 27, 31, 31
  015ce70  xor 4, 8, 4
  015ce74  cmpwi 4, 0
  015ce78  bt 2, 0x15ce84
  015ce7c  li 3, -1
  015ce80  b 0x15d108
  015ce84  cmpwi 5, 0
  015ce88  li 8, 26
  015ce8c  bt 2, 0x15cec0
  015ce90  lis 4, 151
  015ce94  addic 4, 4, -25376
  015ce98  lwz 9, 8320(4)
  015ce9c  cmpw 9, 5
  015cea0  bt 2, 0x15cebc
  015cea4  lwz 4, 4240(4)
  015cea8  cmpw 4, 5
  015ceac  bt 2, 0x15cebc
  015ceb0  lhz 4, 166(5)
  015ceb4  cmpwi 4, 1138
  015ceb8  bf 2, 0x15cec0
  015cebc  li 8, 30
  015cec0  li 28, 0
  015cec4  lis 4, 150
  015cec8  cmpwi 8, 0
  015cecc  ori 29, 28, 0
  015ced0  addic 4, 4, 14176
  015ced4  bf 1, 0x15cf08
  015ced8  sldi 9, 28, 7
  015cedc  sldi 10, 28, 4
  015cee0  subc 9, 9, 10
  015cee4  extsw 9, 9
  015cee8  addc 9, 4, 9
  015ceec  lbz 9, 116(9)
  015cef0  cmpwi 9, 0
  015cef4  bt 2, 0x15cf08
  015cef8  addic 28, 28, 1
  015cefc  extsw 28, 28
  015cf00  cmpw 28, 8
  015cf04  bt 0, 0x15ced8
  015cf08  cmpw 28, 8
  015cf0c  bf 0, 0x15d100
  015cf10  sldi 8, 28, 7
  015cf14  sldi 9, 28, 4
  015cf18  li 10, 161
  015cf1c  subc 8, 8, 9
  015cf20  li 9, -1
  015cf24  extsw 27, 8
  015cf28  li 11, 166
  015cf2c  addc 27, 4, 27
  015cf30  addc 4, 4, 8
  015cf34  li 8, 163
  015cf38  li 12, 167
  015cf3c  cmpwi 6, 0
  015cf40  sth 3, 124(27)
  015cf44  stw 31, 120(27)
  015cf48  clrldi 3, 4, 32
  015cf4c  sth 9, 126(27)
  015cf50  li 4, 162
  015cf54  stw 7, 128(27)
  015cf58  li 9, 165
  015cf5c  stw 29, 136(27)
  015cf60  stw 29, 140(27)
  015cf64  stb 29, 160(3)
  015cf68  stbx 29, 3, 10
  015cf6c  stbx 29, 3, 4
  015cf70  li 10, 169
  015cf74  stbx 29, 3, 8
  015cf78  li 4, 170
  015cf7c  stb 29, 164(3)
  015cf80  li 8, 171
  015cf84  stbx 29, 3, 9
  015cf88  stbx 29, 3, 11
  015cf8c  stbx 29, 3, 12
  015cf90  li 9, 173
  015cf94  stb 29, 168(3)
  015cf98  li 11, 174
  015cf9c  stbx 29, 3, 10
  015cfa0  li 12, 175
  015cfa4  stbx 29, 3, 4
  015cfa8  stbx 29, 3, 8
  015cfac  stb 29, 172(3)
  015cfb0  stbx 29, 3, 9
  015cfb4  stbx 29, 3, 11
  015cfb8  stbx 29, 3, 12
  015cfbc  bf 2, 0x15cfc8
  015cfc0  cmpwi 5, 0
  015cfc4  bt 2, 0x15d030
  015cfc8  cmpwi 5, 0
  015cfcc  bt 2, 0x15d00c
  015cfd0  lfs 1, 16(5)
  015cfd4  lis 4, 22
  015cfd8  stfs 1, 144(3)
  015cfdc  lfs 1, 20(5)
  015cfe0  addi 4, 4, -12784
  015cfe4  stfs 1, 148(3)
  015cfe8  lfs 1, 24(5)
  015cfec  stfs 1, 152(3)
  015cff0  lfs 1, 28(5)
  015cff4  stfs 1, 156(3)
  015cff8  lfs 1, 0(4)
  015cffc  lfs 2, 152(27)
  015d000  fadds 1, 2, 1
  015d004  stfs 1, 152(27)
  015d008  b 0x15d044
  015d00c  lfs 1, 0(6)
  015d010  stfs 1, 144(3)
  015d014  lfs 1, 4(6)
  015d018  stfs 1, 148(3)
  015d01c  lfs 1, 8(6)
  015d020  stfs 1, 152(3)
  015d024  lfs 1, 12(6)
  015d028  stfs 1, 156(3)
  015d02c  b 0x15d044
  015d030  stw 29, 156(3)
  015d034  stw 29, 152(3)
  015d038  ori 30, 30, 17
  015d03c  stw 29, 148(3)
  015d040  stw 29, 144(3)
  015d044  rlwinm 5, 30, 0, 27, 27
  015d048  ori 4, 7, 0
  015d04c  cmpwi 5, 0
  015d050  bf 2, 0x15d0a8
  015d054  lis 4, 149
  015d058  lfs 1, 148(3)
  015d05c  lfs 2, 144(3)
  015d060  addic 4, 4, 5056
  015d064  lfs 3, 324(4)
  015d068  lfs 4, 320(4)
  015d06c  fsubs 1, 1, 3
  015d070  fsubs 4, 2, 4
  015d074  lfs 2, 152(3)
  015d078  lfs 3, 328(4)
  015d07c  lwz 4, 120(3)
  015d080  fsubs 5, 2, 3
  015d084  ori 3, 4, 0
  015d088  lfs 2, 0(4)
  015d08c  fmuls 1, 1, 1
  015d090  lfs 3, 4(4)
  015d094  fmadds 1, 4, 4, 1
  015d098  fmadds 1, 5, 5, 1
  015d09c  fsqrts 1, 1
  015d0a0  bl 0x15b7d8
  015d0a4  ori 4, 3, 0
  015d0a8  cmpwi 4, 32
  015d0ac  bf 0, 0x15d0b8
  015d0b0  li 3, -1
  015d0b4  b 0x15d108
  015d0b8  li 3, 7
  015d0bc  stb 30, 117(27)
  015d0c0  stb 3, 116(27)
  015d0c4  stw 29, 176(27)
  015d0c8  lwz 3, 20(31)
  015d0cc  lwz 30, 16(31)
  015d0d0  cmpw 3, 30
  015d0d4  bt 2, 0x15d0f0
  015d0d8  subc 3, 3, 30
  015d0dc  extsw 3, 3
  015d0e0  bl 0xfc620
  015d0e4  nop
  015d0e8  lwz 4, 16(31)
  015d0ec  addc 3, 3, 4
  015d0f0  li 4, -1
  015d0f4  stw 3, 132(27)
  015d0f8  stw 4, 112(27)
  015d0fc  b 0x15d104
  015d100  li 28, -1
  015d104  ori 3, 28, 0
  015d108  ld 0, 176(1)
  015d10c  mtlr 0
  015d110  ld 27, 120(1)
  015d114  ld 28, 128(1)
  015d118  ld 29, 136(1)
  015d11c  ld 30, 144(1)
  015d120  ld 31, 152(1)
  015d124  addi 1, 1, 160
  015d128  blr

PlayMobySound:   # 0x15d12c, 0xd8 bytes
  015d12c  stdu 1, -128(1)
  015d130  mflr 0
  015d134  std 0, 144(1)
  015d138  std 30, 112(1)
  015d13c  ori 30, 3, 0
  015d140  cmpwi 5, 0
  015d144  std 31, 120(1)
  015d148  ori 3, 4, 0
  015d14c  ori 31, 5, 0
  015d150  bf 2, 0x15d15c
  015d154  li 3, -1
  015d158  b 0x15d1ec
  015d15c  lwz 5, 36(31)
  015d160  cmpwi 5, 0
  015d164  bf 2, 0x15d170
  015d168  li 3, -1
  015d16c  b 0x15d1ec
  015d170  lwz 4, 40(5)
  015d174  cmpwi 4, 0
  015d178  bf 2, 0x15d184
  015d17c  li 3, -1
  015d180  b 0x15d1ec
  015d184  lbz 5, 13(5)
  015d188  cmpw 5, 30
  015d18c  bt 1, 0x15d198
  015d190  li 3, -1
  015d194  b 0x15d1ec
  015d198  ori 6, 4, 0
  015d19c  slwi 7, 30, 5
  015d1a0  ori 4, 3, 0
  015d1a4  addc 3, 6, 7
  015d1a8  ori 5, 31, 0
  015d1ac  clrldi 3, 3, 32
  015d1b0  li 6, 0
  015d1b4  li 7, 1024
  015d1b8  bl 0x15ce18
  015d1bc  cmpwi 3, 0
  015d1c0  bt 0, 0x15d1ec
  015d1c4  sldi 4, 3, 7
  015d1c8  sldi 7, 3, 4
  015d1cc  lis 5, 150
  015d1d0  subc 4, 4, 7
  015d1d4  lis 6, 150
  015d1d8  addic 5, 5, 14312
  015d1dc  extsw 4, 4
  015d1e0  addic 6, 6, 14302
  015d1e4  stwx 31, 5, 4
  015d1e8  sthx 30, 6, 4
  015d1ec  ld 0, 144(1)
  015d1f0  mtlr 0
  015d1f4  ld 30, 112(1)
  015d1f8  ld 31, 120(1)
  015d1fc  addi 1, 1, 128
  015d200  blr

sound_MobyPlay_oClass:   # 0x15d204, 0xd0 bytes
  015d204  stdu 1, -128(1)
  015d208  mflr 0
  015d20c  std 0, 144(1)
  015d210  lis 7, 163
  015d214  lis 8, 163
  015d218  addic 7, 7, 21696
  015d21c  std 30, 112(1)
  015d220  addic 8, 8, 19456
  015d224  ori 30, 3, 0
  015d228  std 31, 120(1)
  015d22c  ori 3, 4, 0
  015d230  ori 31, 5, 0
  015d234  lbzx 6, 7, 6
  015d238  slwi 6, 6, 2
  015d23c  lwzx 4, 8, 6
  015d240  cmpwi 4, 0
  015d244  bf 2, 0x15d250
  015d248  li 3, -1
  015d24c  b 0x15d2bc
  015d250  lbz 5, 13(4)
  015d254  cmpw 5, 30
  015d258  bt 1, 0x15d264
  015d25c  li 3, -1
  015d260  b 0x15d2bc
  015d264  ori 7, 4, 0
  015d268  ori 4, 3, 0
  015d26c  slwi 8, 30, 5
  015d270  ori 5, 31, 0
  015d274  li 6, 0
  015d278  lwz 3, 40(7)
  015d27c  li 7, 1024
  015d280  addc 3, 3, 8
  015d284  clrldi 3, 3, 32
  015d288  bl 0x15ce18
  015d28c  cmpwi 3, 0
  015d290  bt 0, 0x15d2bc
  015d294  sldi 4, 3, 7
  015d298  sldi 7, 3, 4
  015d29c  lis 5, 150
  015d2a0  subc 4, 4, 7
  015d2a4  lis 6, 150
  015d2a8  addic 5, 5, 14312
  015d2ac  extsw 4, 4
  015d2b0  addic 6, 6, 14302
  015d2b4  stwx 31, 5, 4
  015d2b8  sthx 30, 6, 4
  015d2bc  ld 0, 144(1)
  015d2c0  mtlr 0
  015d2c4  ld 30, 112(1)
  015d2c8  ld 31, 120(1)
  015d2cc  addi 1, 1, 128
  015d2d0  blr

sound_CorePlay:   # 0x15d2d4, 0xac bytes
  015d2d4  stdu 1, -128(1)
  015d2d8  mflr 0
  015d2dc  std 0, 144(1)
  015d2e0  lis 6, 114
  015d2e4  std 30, 112(1)
  015d2e8  ori 7, 3, 0
  015d2ec  ori 30, 3, 0
  015d2f0  std 31, 120(1)
  015d2f4  ori 3, 4, 0
  015d2f8  ori 31, 5, 0
  015d2fc  lwz 4, -1072(6)
  015d300  cmpw 4, 7
  015d304  bt 1, 0x15d310
  015d308  li 3, -1
  015d30c  b 0x15d368
  015d310  lis 6, 161
  015d314  ori 4, 3, 0
  015d318  slwi 3, 30, 5
  015d31c  ori 5, 31, 0
  015d320  li 7, 1024
  015d324  lwz 8, 1844(6)
  015d328  li 6, 0
  015d32c  addc 3, 8, 3
  015d330  clrldi 3, 3, 32
  015d334  bl 0x15ce18
  015d338  cmpwi 3, 0
  015d33c  bt 0, 0x15d368
  015d340  sldi 4, 3, 7
  015d344  sldi 7, 3, 4
  015d348  lis 5, 150
  015d34c  subc 4, 4, 7
  015d350  lis 6, 150
  015d354  addic 5, 5, 14312
  015d358  extsw 4, 4
  015d35c  addic 6, 6, 14302
  015d360  stwx 31, 5, 4
  015d364  sthx 30, 6, 4
  015d368  ld 0, 144(1)
  015d36c  mtlr 0
  015d370  ld 30, 112(1)
  015d374  ld 31, 120(1)
  015d378  addi 1, 1, 128
  015d37c  blr

sound_LevelPlay:   # 0x15d380, 0xb4 bytes
  015d380  stdu 1, -128(1)
  015d384  mflr 0
  015d388  std 0, 144(1)
  015d38c  lis 6, 114
  015d390  std 30, 112(1)
  015d394  lis 7, 161
  015d398  ori 30, 3, 0
  015d39c  std 31, 120(1)
  015d3a0  ori 3, 4, 0
  015d3a4  ori 31, 5, 0
  015d3a8  lwz 4, -1072(6)
  015d3ac  lwz 5, 1840(7)
  015d3b0  addc 30, 30, 4
  015d3b4  cmpw 5, 30
  015d3b8  bt 1, 0x15d3c4
  015d3bc  li 3, -1
  015d3c0  b 0x15d41c
  015d3c4  lis 6, 161
  015d3c8  ori 4, 3, 0
  015d3cc  slwi 3, 30, 5
  015d3d0  ori 5, 31, 0
  015d3d4  li 7, 1024
  015d3d8  lwz 8, 1844(6)
  015d3dc  li 6, 0
  015d3e0  addc 3, 8, 3
  015d3e4  clrldi 3, 3, 32
  015d3e8  bl 0x15ce18
  015d3ec  cmpwi 3, 0
  015d3f0  bt 0, 0x15d41c
  015d3f4  sldi 4, 3, 7
  015d3f8  sldi 7, 3, 4
  015d3fc  lis 5, 150
  015d400  subc 4, 4, 7
  015d404  lis 6, 150
  015d408  addic 5, 5, 14312
  015d40c  extsw 4, 4
  015d410  addic 6, 6, 14302
  015d414  stwx 31, 5, 4
  015d418  sthx 30, 6, 4
  015d41c  ld 0, 144(1)
  015d420  mtlr 0
  015d424  ld 30, 112(1)
  015d428  ld 31, 120(1)
  015d42c  addi 1, 1, 128
  015d430  blr

sound_AmbientPlay:   # 0x15d434, 0xa8 bytes
  015d434  stdu 1, -128(1)
  015d438  mflr 0
  015d43c  std 0, 144(1)
  015d440  std 30, 112(1)
  015d444  lis 7, 161
  015d448  ori 8, 3, 0
  015d44c  std 31, 120(1)
  015d450  ori 30, 3, 0
  015d454  ori 31, 5, 0
  015d458  lwz 3, 1840(7)
  015d45c  cmpw 3, 8
  015d460  ori 3, 6, 0
  015d464  bt 1, 0x15d470
  015d468  li 3, -1
  015d46c  b 0x15d4c4
  015d470  lis 5, 161
  015d474  slwi 8, 30, 5
  015d478  ori 7, 3, 0
  015d47c  addic 6, 31, 64
  015d480  lwz 9, 1844(5)
  015d484  li 5, 0
  015d488  addc 3, 9, 8
  015d48c  clrldi 3, 3, 32
  015d490  bl 0x15ce18
  015d494  cmpwi 3, 0
  015d498  bt 0, 0x15d4c4
  015d49c  sldi 4, 3, 7
  015d4a0  sldi 7, 3, 4
  015d4a4  lis 6, 150
  015d4a8  subc 4, 4, 7
  015d4ac  lis 5, 150
  015d4b0  addic 6, 6, 14316
  015d4b4  extsw 4, 4
  015d4b8  addic 5, 5, 14302
  015d4bc  stwx 31, 6, 4
  015d4c0  sthx 30, 5, 4
  015d4c4  ld 0, 144(1)
  015d4c8  mtlr 0
  015d4cc  ld 30, 112(1)
  015d4d0  ld 31, 120(1)
  015d4d4  addi 1, 1, 128
  015d4d8  blr

sound_FootstepPlay:   # 0x15d4dc, 0xdc bytes
  015d4dc  stdu 1, -128(1)
  015d4e0  mflr 0
  015d4e4  std 0, 144(1)
  015d4e8  lis 8, 151
  015d4ec  lis 9, 115
  015d4f0  lis 10, 114
  015d4f4  addic 9, 9, 7144
  015d4f8  slwi 11, 3, 2
  015d4fc  lwz 8, -25488(8)
  015d500  ori 3, 6, 0
  015d504  slwi 4, 4, 1
  015d508  std 30, 112(1)
  015d50c  extsw 8, 8
  015d510  lwz 30, -1072(10)
  015d514  std 31, 120(1)
  015d518  lis 12, 161
  015d51c  ori 31, 7, 0
  015d520  lbzx 6, 9, 8
  015d524  lwz 8, 1840(12)
  015d528  addc 6, 6, 11
  015d52c  addc 4, 6, 4
  015d530  addc 4, 4, 5
  015d534  addc 30, 4, 30
  015d538  cmpw 8, 30
  015d53c  bt 1, 0x15d548
  015d540  li 3, -1
  015d544  b 0x15d5a0
  015d548  lis 6, 161
  015d54c  ori 4, 3, 0
  015d550  sldi 3, 30, 5
  015d554  ori 5, 31, 0
  015d558  li 7, 1024
  015d55c  lwz 8, 1844(6)
  015d560  li 6, 0
  015d564  addc 3, 8, 3
  015d568  clrldi 3, 3, 32
  015d56c  bl 0x15ce18
  015d570  cmpwi 3, 0
  015d574  bt 0, 0x15d5a0
  015d578  sldi 4, 3, 7
  015d57c  sldi 7, 3, 4
  015d580  lis 5, 150
  015d584  subc 4, 4, 7
  015d588  lis 6, 150
  015d58c  addic 5, 5, 14312
  015d590  extsw 4, 4
  015d594  addic 6, 6, 14302
  015d598  stwx 31, 5, 4
  015d59c  sthx 30, 6, 4
  015d5a0  ld 0, 144(1)
  015d5a4  mtlr 0
  015d5a8  ld 30, 112(1)
  015d5ac  ld 31, 120(1)
  015d5b0  addi 1, 1, 128
  015d5b4  blr

sound_SetOffset:   # 0x15d5b8, 0x58 bytes
  015d5b8  sldi 5, 3, 7
  015d5bc  lis 6, 150
  015d5c0  sldi 3, 3, 4
  015d5c4  addic 6, 6, 14176
  015d5c8  subc 3, 5, 3
  015d5cc  addc 5, 6, 3
  015d5d0  extsw 3, 3
  015d5d4  clrldi 5, 5, 32
  015d5d8  addc 6, 6, 3
  015d5dc  li 3, 1
  015d5e0  lbz 7, 117(6)
  015d5e4  ori 7, 7, 64
  015d5e8  stb 7, 117(6)
  015d5ec  lfs 1, 0(4)
  015d5f0  stfs 1, 160(5)
  015d5f4  lfs 1, 4(4)
  015d5f8  stfs 1, 164(5)
  015d5fc  lfs 1, 8(4)
  015d600  stfs 1, 168(5)
  015d604  lfs 1, 12(4)
  015d608  stfs 1, 172(5)
  015d60c  blr

sound_AddOffset:   # 0x15d610, 0x54 bytes
  015d610  sldi 6, 3, 7
  015d614  lfs 1, 0(4)
  015d618  lis 5, 150
  015d61c  lfs 2, 4(4)
  015d620  sldi 3, 3, 4
  015d624  lfs 3, 8(4)
  015d628  addic 5, 5, 14336
  015d62c  subc 3, 6, 3
  015d630  addc 3, 5, 3
  015d634  clrldi 5, 3, 32
  015d638  li 3, 1
  015d63c  lfs 4, 0(5)
  015d640  lfs 5, 4(5)
  015d644  fadds 1, 4, 1
  015d648  lfs 4, 8(5)
  015d64c  fadds 2, 5, 2
  015d650  fadds 3, 4, 3
  015d654  stfs 1, 0(5)
  015d658  stfs 2, 4(5)
  015d65c  stfs 3, 8(5)
  015d660  blr

sound_ClearOffset:   # 0x15d664, 0xac bytes
  015d664  sldi 4, 3, 7
  015d668  lis 5, 150
  015d66c  sldi 3, 3, 4
  015d670  addic 5, 5, 14176
  015d674  subc 3, 4, 3
  015d678  li 6, 161
  015d67c  addc 4, 5, 3
  015d680  extsw 3, 3
  015d684  clrldi 4, 4, 32
  015d688  addc 3, 5, 3
  015d68c  li 5, 0
  015d690  li 9, 162
  015d694  li 11, 163
  015d698  li 7, 165
  015d69c  lbz 8, 117(3)
  015d6a0  li 10, 166
  015d6a4  rlwimi 8, 5, 0, 25, 25
  015d6a8  stb 8, 117(3)
  015d6ac  stb 5, 160(4)
  015d6b0  li 3, 167
  015d6b4  stbx 5, 4, 6
  015d6b8  li 8, 170
  015d6bc  stbx 5, 4, 9
  015d6c0  li 6, 169
  015d6c4  stbx 5, 4, 11
  015d6c8  li 9, 173
  015d6cc  stb 5, 164(4)
  015d6d0  li 11, 175
  015d6d4  stbx 5, 4, 7
  015d6d8  li 7, 171
  015d6dc  stbx 5, 4, 10
  015d6e0  stbx 5, 4, 3
  015d6e4  stb 5, 168(4)
  015d6e8  li 10, 174
  015d6ec  stbx 5, 4, 6
  015d6f0  li 3, 1
  015d6f4  stbx 5, 4, 8
  015d6f8  stbx 5, 4, 7
  015d6fc  stb 5, 172(4)
  015d700  stbx 5, 4, 9
  015d704  stbx 5, 4, 10
  015d708  stbx 5, 4, 11
  015d70c  blr

sound_SetVol:   # 0x15d710, 0x24 bytes
  015d710  sldi 5, 3, 7
  015d714  sldi 3, 3, 4
  015d718  lis 6, 150
  015d71c  subc 5, 5, 3
  015d720  addic 6, 6, 14304
  015d724  extsw 5, 5
  015d728  li 3, 1
  015d72c  stwx 4, 6, 5
  015d730  blr

sound_SetPitch:   # 0x15d734, 0x24 bytes
  015d734  sldi 5, 3, 7
  015d738  sldi 3, 3, 4
  015d73c  lis 6, 150
  015d740  subc 5, 5, 3
  015d744  addic 6, 6, 14308
  015d748  extsw 5, 5
  015d74c  li 3, 1
  015d750  stwx 4, 6, 5
  015d754  blr

sound_SetupAmbientFunctions:   # 0x15d758, 0x54 bytes
  015d758  lis 5, 147
  015d75c  li 7, 0
  015d760  addic 5, 5, -11268
  015d764  ori 4, 5, 0
  015d768  lwz 6, 0(4)
  015d76c  cmpwi 6, -1
  015d770  bt 2, 0x15d790
  015d774  lhz 8, 0(3)
  015d778  extsh 8, 8
  015d77c  cmpw 6, 8
  015d780  bt 2, 0x15d790
  015d784  addic 4, 4, 8
  015d788  addic 7, 7, 1
  015d78c  b 0x15d768
  015d790  slwi 4, 7, 3
  015d794  sth 7, 2(3)
  015d798  extsw 4, 4
  015d79c  addc 4, 5, 4
  015d7a0  lwz 4, 4(4)
  015d7a4  stw 4, 4(3)
  015d7a8  blr

sound_UpdateAmbient:   # 0x15d7ac, 0x98 bytes
  015d7ac  stdu 1, -144(1)
  015d7b0  mflr 0
  015d7b4  std 0, 160(1)
  015d7b8  std 31, 136(1)
  015d7bc  std 29, 120(1)
  015d7c0  lis 31, 150
  015d7c4  li 29, 0
  015d7c8  addic 31, 31, 14176
  015d7cc  lwz 3, 3472(31)
  015d7d0  std 30, 128(1)
  015d7d4  cmpwi 3, 0
  015d7d8  bf 1, 0x15d828
  015d7dc  ori 30, 29, 0
  015d7e0  lwz 4, 3476(31)
  015d7e4  addc 4, 4, 30
  015d7e8  clrldi 4, 4, 32
  015d7ec  lwz 5, 4(4)
  015d7f0  cmpwi 5, 0
  015d7f4  bt 2, 0x15d818
  015d7f8  ori 3, 4, 0
  015d7fc  lwz 4, 0(5)
  015d800  std 2, 40(1)
  015d804  mtctr 4
  015d808  lwz 2, 4(5)
  015d80c  bcctrl 20, 30
  015d810  ld 2, 40(1)
  015d814  lwz 3, 3472(31)
  015d818  addic 29, 29, 1
  015d81c  addic 30, 30, 144
  015d820  cmpw 29, 3
  015d824  bt 0, 0x15d7e0
  015d828  ld 0, 160(1)
  015d82c  mtlr 0
  015d830  ld 29, 120(1)
  015d834  ld 30, 128(1)
  015d838  ld 31, 136(1)
  015d83c  addi 1, 1, 144
  015d840  blr

sound_SetReverb:   # 0x15d844, 0x70 bytes
  015d844  lis 8, 150
  015d848  addic 8, 8, 14176
  015d84c  lbz 9, 104(8)
  015d850  lwz 10, 100(8)
  015d854  stw 3, 96(8)
  015d858  cmpw 9, 4
  015d85c  lbz 3, 105(8)
  015d860  cmpw 7, 10, 5
  015d864  lbz 9, 106(8)
  015d868  cmpw 6, 3, 6
  015d86c  lbz 3, 107(8)
  015d870  cmpw 1, 9, 7
  015d874  bt 2, 0x15d884
  015d878  ori 3, 3, 1
  015d87c  stb 3, 107(8)
  015d880  stb 4, 104(8)
  015d884  ori 4, 3, 0
  015d888  bt 30, 0x15d898
  015d88c  ori 4, 3, 4
  015d890  stb 4, 107(8)
  015d894  stw 5, 100(8)
  015d898  bf 26, 0x15d8a0
  015d89c  bt 6, 0x15d8b0
  015d8a0  ori 3, 4, 2
  015d8a4  stb 3, 107(8)
  015d8a8  stb 6, 105(8)
  015d8ac  stb 7, 106(8)
  015d8b0  blr

sound_StopAllSounds:   # 0x15d8b4, 0xd4 bytes
  015d8b4  stdu 1, -112(1)
  015d8b8  mflr 0
  015d8bc  std 0, 128(1)
  015d8c0  bl 0x505f4c
  015d8c4  nop
  015d8c8  bl 0x505d20
  015d8cc  nop
  015d8d0  bl 0x60c0d0
  015d8d4  nop
  015d8d8  bl 0x505d20
  015d8dc  nop
  015d8e0  cmpwi 3, 0
  015d8e4  bf 2, 0x15d8d8
  015d8e8  lis 3, 150
  015d8ec  li 6, 4
  015d8f0  addic 3, 3, 14176
  015d8f4  li 4, 0
  015d8f8  ori 5, 3, 0
  015d8fc  mtctr 6
  015d900  stb 4, 0(5)
  015d904  stb 4, 1(5)
  015d908  stb 4, 2(5)
  015d90c  stb 4, 3(5)
  015d910  stb 4, 4(5)
  015d914  stb 4, 5(5)
  015d918  stb 4, 6(5)
  015d91c  stb 4, 7(5)
  015d920  stb 4, 8(5)
  015d924  stb 4, 9(5)
  015d928  stb 4, 10(5)
  015d92c  stb 4, 11(5)
  015d930  stb 4, 12(5)
  015d934  stb 4, 13(5)
  015d938  stb 4, 14(5)
  015d93c  stb 4, 15(5)
  015d940  addic 5, 5, 16
  015d944  bdnz 0x15d900
  015d948  li 6, 15
  015d94c  addic 5, 3, 112
  015d950  stw 4, 64(3)
  015d954  mtctr 6
  015d958  addic 3, 3, 116
  015d95c  stw 4, 0(5)
  015d960  stb 4, 0(3)
  015d964  stw 4, 112(5)
  015d968  stb 4, 112(3)
  015d96c  addic 5, 5, 224
  015d970  addic 3, 3, 224
  015d974  bdnz 0x15d95c
  015d978  ld 0, 128(1)
  015d97c  mtlr 0
  015d980  addi 1, 1, 112
  015d984  blr

sound_BasicCB:   # 0x15d988, 0x10 bytes
  015d988  cmpwi 4, 0
  015d98c  bt 2, 0x15d994
  015d990  stw 3, 0(4)
  015d994  blr

sound_PlayCB:   # 0x15d998, 0x40 bytes
  015d998  cmpwi 4, 0
  015d99c  bt 2, 0x15d9d4
  015d9a0  cmpwi 3, 0
  015d9a4  stw 3, 0(4)
  015d9a8  bt 2, 0x15d9c4
  015d9ac  lbz 3, 4(4)
  015d9b0  cmpwi 3, 1
  015d9b4  bf 2, 0x15d9d4
  015d9b8  li 3, 2
  015d9bc  stb 3, 4(4)
  015d9c0  b 0x15d9d4
  015d9c4  li 3, 0
  015d9c8  stw 3, 24(4)
  015d9cc  stw 3, 28(4)
  015d9d0  stb 3, 4(4)
  015d9d4  blr

sound_FreshenCB:   # 0x15d9d8, 0x28 bytes
  015d9d8  cmpwi 4, 0
  015d9dc  bt 2, 0x15d9fc
  015d9e0  cmpwi 3, 0
  015d9e4  stw 3, 0(4)
  015d9e8  bf 2, 0x15d9fc
  015d9ec  li 3, 0
  015d9f0  stw 3, 24(4)
  015d9f4  stw 3, 28(4)
  015d9f8  stb 3, 4(4)
  015d9fc  blr
