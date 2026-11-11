# game/update/moby240.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M240_0030b548:   # 0x30b548, 0x14 bytes
  030b548  lis 3, 128
  030b54c  lis 4, 1
  030b550  addic 3, 3, -2604
  030b554  stw 4, 72(3)
  030b558  blr

FUN_0030b568:   # 0x30b568, 0x154 bytes
  030b568  stdu 1, -192(1)
  030b56c  mflr 0
  030b570  std 0, 208(1)
  030b574  stfd 30, 176(1)
  030b578  stfd 31, 184(1)
  030b57c  std 28, 144(1)
  030b580  ori 28, 3, 0
  030b584  std 31, 168(1)
  030b588  li 3, 240
  030b58c  std 30, 160(1)
  030b590  ori 31, 6, 0
  030b594  std 29, 152(1)
  030b598  ori 30, 5, 0
  030b59c  std 27, 136(1)
  030b5a0  std 26, 128(1)
  030b5a4  std 25, 120(1)
  030b5a8  ori 29, 4, 0
  030b5ac  bl 0xefa28
  030b5b0  nop
  030b5b4  ori 27, 3, 0
  030b5b8  cmpwi 27, 0
  030b5bc  bt 2, 0x30b684
  030b5c0  li 3, 127
  030b5c4  lis 5, 49
  030b5c8  li 4, 1
  030b5cc  addi 5, 5, -19104
  030b5d0  stb 3, 48(27)
  030b5d4  lis 26, 114
  030b5d8  sth 3, 50(27)
  030b5dc  stb 4, 49(27)
  030b5e0  lfs 31, 0(5)
  030b5e4  lwz 25, 120(27)
  030b5e8  lfs 30, 4(5)
  030b5ec  lfs 3, -3052(26)
  030b5f0  fmuls 1, 3, 31
  030b5f4  fmuls 2, 3, 30
  030b5f8  bl 0xfcbe8
  030b5fc  nop
  030b600  stfs 1, 232(25)
  030b604  lfs 2, -3052(26)
  030b608  fmuls 1, 2, 31
  030b60c  fmuls 2, 2, 30
  030b610  bl 0xfcbe8
  030b614  nop
  030b618  lis 3, 151
  030b61c  stfs 1, 236(25)
  030b620  addic 3, 3, -25376
  030b624  lwz 3, 8320(3)
  030b628  ld 3, 56(3)
  030b62c  std 3, 56(27)
  030b630  lfs 1, 0(28)
  030b634  ori 3, 27, 0
  030b638  stfs 1, 16(27)
  030b63c  lfs 1, 4(28)
  030b640  stfs 1, 20(27)
  030b644  lfs 1, 8(28)
  030b648  stfs 1, 24(27)
  030b64c  lfs 1, 12(28)
  030b650  stfs 1, 28(27)
  030b654  lfs 1, 0(29)
  030b658  stfs 1, 64(25)
  030b65c  lfs 1, 4(29)
  030b660  stfs 1, 68(25)
  030b664  lfs 1, 8(29)
  030b668  stfs 1, 72(25)
  030b66c  lfs 1, 12(29)
  030b670  stfs 1, 76(25)
  030b674  stb 30, 32(27)
  030b678  stw 31, 228(25)
  030b67c  bl 0xf31a8
  030b680  nop
  030b684  ori 3, 27, 0
  030b688  ld 0, 208(1)
  030b68c  mtlr 0
  030b690  lfd 30, 176(1)
  030b694  lfd 31, 184(1)
  030b698  ld 25, 120(1)
  030b69c  ld 26, 128(1)
  030b6a0  ld 27, 136(1)
  030b6a4  ld 28, 144(1)
  030b6a8  ld 29, 152(1)
  030b6ac  ld 30, 160(1)
  030b6b0  ld 31, 168(1)
  030b6b4  addi 1, 1, 192
  030b6b8  blr

M240_0030b6bc:   # 0x30b6bc, 0x58 bytes
  030b6bc  lis 5, 151
  030b6c0  addic 5, 5, -25376
  030b6c4  lwz 6, 8332(5)
  030b6c8  lwz 4, 1272(5)
  030b6cc  cmpwi 6, 3
  030b6d0  bt 2, 0x30b6e0
  030b6d4  lwz 6, 8324(5)
  030b6d8  cmpwi 6, 28
  030b6dc  bf 2, 0x30b6ec
  030b6e0  cmpw 4, 3
  030b6e4  bt 2, 0x30b704
  030b6e8  b 0x30b70c
  030b6ec  lhz 4, 782(5)
  030b6f0  cmpwi 4, 0
  030b6f4  bf 2, 0x30b70c
  030b6f8  lwz 4, 764(5)
  030b6fc  cmpw 4, 3
  030b700  bf 2, 0x30b70c
  030b704  li 3, 1
  030b708  b 0x30b710
  030b70c  li 3, 0
  030b710  blr

M240_0030b740:   # 0x30b740, 0x474 bytes
  030b740  stdu 1, -288(1)
  030b744  mflr 0
  030b748  std 0, 304(1)
  030b74c  stfd 25, 232(1)
  030b750  stfd 26, 240(1)
  030b754  stfd 27, 248(1)
  030b758  stfd 28, 256(1)
  030b75c  stfd 29, 264(1)
  030b760  stfd 30, 272(1)
  030b764  stfd 31, 280(1)
  030b768  std 31, 224(1)
  030b76c  ori 31, 3, 0
  030b770  lbz 3, 49(3)
  030b774  std 30, 216(1)
  030b778  std 29, 208(1)
  030b77c  std 28, 200(1)
  030b780  std 27, 192(1)
  030b784  cmpwi 3, 0
  030b788  bt 2, 0x30bb74
  030b78c  lis 3, 49
  030b790  lis 29, 114
  030b794  addi 30, 3, -18668
  030b798  lfs 31, 0(30)
  030b79c  lfs 2, 4(30)
  030b7a0  fmr 1, 31
  030b7a4  lfs 3, -3052(29)
  030b7a8  fmuls 2, 3, 2
  030b7ac  bl 0xfcbe8
  030b7b0  nop
  030b7b4  fneg 1, 1
  030b7b8  lfs 2, -3052(29)
  030b7bc  stfs 1, 112(1)
  030b7c0  lfs 30, 8(30)
  030b7c4  lfs 3, 12(30)
  030b7c8  fmuls 1, 2, 30
  030b7cc  fmr 29, 3
  030b7d0  fmuls 2, 2, 29
  030b7d4  bl 0xfcbe8
  030b7d8  nop
  030b7dc  lfs 2, -3052(29)
  030b7e0  stfs 1, 116(1)
  030b7e4  fmuls 1, 2, 30
  030b7e8  fmuls 2, 2, 29
  030b7ec  bl 0xfcbe8
  030b7f0  nop
  030b7f4  lis 28, 128
  030b7f8  lfs 2, 116(1)
  030b7fc  lfs 3, 112(1)
  030b800  lfs 4, 208(31)
  030b804  lfs 5, 220(31)
  030b808  lfs 7, 212(31)
  030b80c  fmuls 6, 4, 2
  030b810  fmuls 8, 5, 2
  030b814  lfs 9, 192(31)
  030b818  lfs 11, 216(31)
  030b81c  fmuls 10, 7, 2
  030b820  lfs 12, 204(31)
  030b824  addic 27, 28, -2464
  030b828  fmuls 2, 11, 2
  030b82c  lfs 13, 196(31)
  030b830  lfs 0, 200(31)
  030b834  lfs 30, 224(31)
  030b838  lfs 29, 236(31)
  030b83c  lfs 28, 228(31)
  030b840  fmadds 6, 9, 3, 6
  030b844  fmadds 8, 12, 3, 8
  030b848  fmadds 10, 13, 3, 10
  030b84c  fmadds 2, 0, 3, 2
  030b850  lfs 3, 232(31)
  030b854  lfs 27, 124(1)
  030b858  fmadds 6, 30, 1, 6
  030b85c  fmadds 8, 29, 1, 8
  030b860  fmadds 10, 28, 1, 10
  030b864  fmadds 1, 3, 1, 2
  030b868  fadds 2, 8, 27
  030b86c  stfs 6, 112(1)
  030b870  stfs 10, 116(1)
  030b874  stfs 1, 120(1)
  030b878  stfs 2, 124(1)
  030b87c  lfs 1, 4(27)
  030b880  lfs 2, -2464(28)
  030b884  fmuls 5, 5, 1
  030b888  fmuls 4, 4, 1
  030b88c  lfs 6, 8(27)
  030b890  fmuls 7, 7, 1
  030b894  lfs 8, 12(27)
  030b898  fmuls 1, 11, 1
  030b89c  fmadds 5, 12, 2, 5
  030b8a0  fmadds 4, 9, 2, 4
  030b8a4  fmadds 7, 13, 2, 7
  030b8a8  fmadds 1, 0, 2, 1
  030b8ac  fmadds 2, 29, 6, 5
  030b8b0  fmadds 4, 30, 6, 4
  030b8b4  fmadds 5, 28, 6, 7
  030b8b8  fmadds 3, 3, 6, 1
  030b8bc  fmr 1, 31
  030b8c0  fadds 2, 2, 8
  030b8c4  stfs 2, 156(1)
  030b8c8  lfs 2, 16(31)
  030b8cc  lfs 6, 20(31)
  030b8d0  fadds 4, 4, 2
  030b8d4  lfs 2, 24(31)
  030b8d8  fadds 5, 5, 6
  030b8dc  fadds 3, 3, 2
  030b8e0  lfs 2, -3052(29)
  030b8e4  stfs 4, 144(1)
  030b8e8  stfs 5, 148(1)
  030b8ec  stfs 3, 152(1)
  030b8f0  bl 0xfcbe8
  030b8f4  nop
  030b8f8  fneg 3, 1
  030b8fc  lfs 2, -3052(29)
  030b900  fneg 1, 2
  030b904  stfs 3, 128(1)
  030b908  bl 0xfcbe8
  030b90c  nop
  030b910  lfs 2, -3052(29)
  030b914  stfs 1, 132(1)
  030b918  fneg 1, 2
  030b91c  bl 0xfcbe8
  030b920  nop
  030b924  lfs 2, 132(1)
  030b928  lfs 3, 128(1)
  030b92c  lfs 4, 208(31)
  030b930  lfs 5, 220(31)
  030b934  lfs 7, 212(31)
  030b938  fmuls 8, 5, 2
  030b93c  lfs 9, 192(31)
  030b940  fmuls 6, 4, 2
  030b944  lfs 11, 216(31)
  030b948  fmuls 10, 7, 2
  030b94c  lfs 12, 204(31)
  030b950  fmuls 2, 11, 2
  030b954  lfs 13, 196(31)
  030b958  lfs 0, 200(31)
  030b95c  lfs 31, 224(31)
  030b960  lfs 30, 236(31)
  030b964  lfs 29, 228(31)
  030b968  fmadds 8, 12, 3, 8
  030b96c  fmadds 6, 9, 3, 6
  030b970  fmadds 10, 13, 3, 10
  030b974  fmadds 2, 0, 3, 2
  030b978  lfs 3, 232(31)
  030b97c  lfs 28, 140(1)
  030b980  lis 29, 114
  030b984  fmadds 8, 30, 1, 8
  030b988  fmadds 6, 31, 1, 6
  030b98c  fmadds 10, 29, 1, 10
  030b990  fmadds 1, 3, 1, 2
  030b994  fadds 2, 8, 28
  030b998  stfs 6, 128(1)
  030b99c  stfs 10, 132(1)
  030b9a0  stfs 1, 136(1)
  030b9a4  stfs 2, 140(1)
  030b9a8  lfs 1, 4(27)
  030b9ac  fmuls 2, 1, 5
  030b9b0  lfs 5, -2464(28)
  030b9b4  fmuls 4, 1, 4
  030b9b8  fmuls 6, 1, 7
  030b9bc  lfs 8, 8(27)
  030b9c0  lfs 10, 12(27)
  030b9c4  fmuls 7, 1, 11
  030b9c8  stfs 5, 160(1)
  030b9cc  stfs 1, 164(1)
  030b9d0  stfs 8, 168(1)
  030b9d4  addic 28, 1, 112
  030b9d8  fneg 2, 2
  030b9dc  fneg 4, 4
  030b9e0  fneg 6, 6
  030b9e4  fneg 7, 7
  030b9e8  fmadds 1, 12, 5, 2
  030b9ec  fmadds 2, 9, 5, 4
  030b9f0  fmadds 4, 13, 5, 6
  030b9f4  fmadds 5, 0, 5, 7
  030b9f8  fmadds 1, 30, 8, 1
  030b9fc  fmadds 2, 31, 8, 2
  030ba00  fmadds 4, 29, 8, 4
  030ba04  fmadds 3, 3, 8, 5
  030ba08  fadds 1, 1, 10
  030ba0c  stfs 1, 172(1)
  030ba10  lfs 1, 16(31)
  030ba14  lfs 5, 20(31)
  030ba18  fadds 1, 2, 1
  030ba1c  fadds 2, 4, 5
  030ba20  lfs 4, 24(31)
  030ba24  fadds 3, 3, 4
  030ba28  lfs 4, -3056(29)
  030ba2c  addic 31, 1, 144
  030ba30  stfs 1, 160(1)
  030ba34  stfs 2, 164(1)
  030ba38  stfs 3, 168(1)
  030ba3c  lfs 31, 20(30)
  030ba40  lfs 30, 16(30)
  030ba44  fmuls 1, 4, 31
  030ba48  fctiwz 1, 1
  030ba4c  stfd 1, 176(1)
  030ba50  lfs 29, 24(30)
  030ba54  lwz 3, 180(1)
  030ba58  fmuls 1, 4, 29
  030ba5c  extsw 3, 3
  030ba60  fctiwz 1, 1
  030ba64  stfd 1, 176(1)
  030ba68  lwz 4, 180(1)
  030ba6c  extsw 4, 4
  030ba70  bl 0xfe484
  030ba74  nop
  030ba78  lis 5, 20224
  030ba7c  fmr 1, 30
  030ba80  lis 6, 8191
  030ba84  ori 8, 3, 0
  030ba88  li 9, 1
  030ba8c  ori 3, 31, 0
  030ba90  ori 4, 28, 0
  030ba94  ori 5, 5, 32767
  030ba98  ori 6, 6, 65535
  030ba9c  bl 0x1268f8
  030baa0  nop
  030baa4  lfs 28, 28(30)
  030baa8  lfs 27, 32(30)
  030baac  lis 10, 64
  030bab0  lfs 26, 36(30)
  030bab4  fmr 1, 28
  030bab8  lfs 25, 40(30)
  030babc  ori 3, 31, 0
  030bac0  addic 30, 1, 128
  030bac4  fmr 2, 27
  030bac8  li 7, 6
  030bacc  fmr 3, 26
  030bad0  ori 8, 30, 0
  030bad4  fmr 4, 25
  030bad8  ori 10, 10, 16448
  030badc  bl 0x126f50
  030bae0  nop
  030bae4  lfs 1, -3056(29)
  030bae8  addic 31, 1, 160
  030baec  fmuls 2, 1, 31
  030baf0  fmuls 1, 1, 29
  030baf4  fctiwz 2, 2
  030baf8  fctiwz 1, 1
  030bafc  stfd 2, 176(1)
  030bb00  lwz 3, 180(1)
  030bb04  stfd 1, 176(1)
  030bb08  lwz 4, 180(1)
  030bb0c  extsw 3, 3
  030bb10  extsw 4, 4
  030bb14  bl 0xfe484
  030bb18  nop
  030bb1c  lis 5, 20224
  030bb20  lis 6, 8191
  030bb24  fmr 1, 30
  030bb28  ori 8, 3, 0
  030bb2c  li 9, 1
  030bb30  ori 3, 31, 0
  030bb34  ori 4, 28, 0
  030bb38  ori 5, 5, 32767
  030bb3c  ori 6, 6, 65535
  030bb40  bl 0x1268f8
  030bb44  nop
  030bb48  lis 10, 64
  030bb4c  fmr 1, 28
  030bb50  ori 3, 31, 0
  030bb54  fmr 2, 27
  030bb58  li 7, 6
  030bb5c  fmr 3, 26
  030bb60  ori 8, 30, 0
  030bb64  fmr 4, 25
  030bb68  ori 10, 10, 16448
  030bb6c  bl 0x126f50
  030bb70  nop
  030bb74  ld 0, 304(1)
  030bb78  mtlr 0
  030bb7c  lfd 25, 232(1)
  030bb80  lfd 26, 240(1)
  030bb84  lfd 27, 248(1)
  030bb88  lfd 28, 256(1)
  030bb8c  lfd 29, 264(1)
  030bb90  lfd 30, 272(1)
  030bb94  lfd 31, 280(1)
  030bb98  ld 27, 192(1)
  030bb9c  ld 28, 200(1)
  030bba0  ld 29, 208(1)
  030bba4  ld 30, 216(1)
  030bba8  ld 31, 224(1)
  030bbac  addi 1, 1, 288
  030bbb0  blr

M240_0030bbd0:   # 0x30bbd0, 0x2b8 bytes
  030bbd0  stdu 1, -176(1)
  030bbd4  mflr 0
  030bbd8  std 0, 192(1)
  030bbdc  stfd 31, 168(1)
  030bbe0  lfs 7, 4(5)
  030bbe4  std 29, 144(1)
  030bbe8  lfs 1, 20(3)
  030bbec  lwz 29, 120(3)
  030bbf0  fsubs 7, 7, 1
  030bbf4  lfs 8, 0(5)
  030bbf8  lfs 1, 16(3)
  030bbfc  cmpwi 7, 0
  030bc00  fsubs 8, 8, 1
  030bc04  lfs 1, 68(29)
  030bc08  lfs 6, 8(5)
  030bc0c  lfs 2, 24(3)
  030bc10  fmuls 1, 1, 1
  030bc14  lfs 3, 64(29)
  030bc18  fsubs 6, 6, 2
  030bc1c  lfs 4, 72(29)
  030bc20  std 30, 152(1)
  030bc24  fmuls 2, 7, 7
  030bc28  lfs 5, 12(5)
  030bc2c  std 31, 160(1)
  030bc30  ori 30, 3, 0
  030bc34  ori 31, 4, 0
  030bc38  fmadds 1, 3, 3, 1
  030bc3c  fmadds 2, 8, 8, 2
  030bc40  fmadds 3, 4, 4, 1
  030bc44  fmadds 4, 6, 6, 2
  030bc48  fsqrts 3, 3
  030bc4c  std 28, 136(1)
  030bc50  std 27, 128(1)
  030bc54  std 26, 120(1)
  030bc58  fsqrts 4, 4
  030bc5c  bt 2, 0x30bcec
  030bc60  lis 3, 49
  030bc64  addi 3, 3, -17484
  030bc68  lfs 1, 0(3)
  030bc6c  fcmpu 0, 3, 1
  030bc70  bf 2, 0x30bc8c
  030bc74  lis 3, 49
  030bc78  lis 4, 114
  030bc7c  addi 3, 3, -17484
  030bc80  lfs 1, 4(3)
  030bc84  lfs 3, -3052(4)
  030bc88  fmuls 3, 3, 1
  030bc8c  lis 3, 49
  030bc90  fmuls 1, 3, 3
  030bc94  addi 3, 3, -17484
  030bc98  lfs 2, 8(3)
  030bc9c  fmuls 9, 4, 2
  030bca0  lis 3, 114
  030bca4  lfs 2, 212(29)
  030bca8  fdivs 9, 1, 9
  030bcac  lfs 1, -3048(3)
  030bcb0  fmuls 10, 2, 1
  030bcb4  fcmpu 0, 9, 10
  030bcb8  cror 6, 0, 2
  030bcbc  bt 6, 0x30bcc8
  030bcc0  fnmsubs 3, 2, 1, 3
  030bcc4  b 0x30bd2c
  030bcc8  lis 3, 114
  030bccc  lfs 9, 208(29)
  030bcd0  lfs 10, -3052(3)
  030bcd4  fmuls 9, 9, 10
  030bcd8  fcmpu 0, 3, 9
  030bcdc  cror 6, 1, 2
  030bce0  bt 6, 0x30bd2c
  030bce4  fmadds 3, 2, 1, 3
  030bce8  b 0x30bd2c
  030bcec  lis 3, 114
  030bcf0  lfs 1, 208(29)
  030bcf4  lfs 2, -3052(3)
  030bcf8  fmuls 1, 1, 2
  030bcfc  fcmpu 1, 3, 1
  030bd00  bf 4, 0x30bd18
  030bd04  lis 3, 114
  030bd08  lfs 1, 212(29)
  030bd0c  lfs 2, -3048(3)
  030bd10  fmadds 3, 1, 2, 3
  030bd14  b 0x30bd2c
  030bd18  bf 5, 0x30bd2c
  030bd1c  lis 3, 114
  030bd20  lfs 1, 212(29)
  030bd24  lfs 2, -3048(3)
  030bd28  fnmsubs 3, 1, 2, 3
  030bd2c  fdivs 1, 3, 4
  030bd30  lis 3, 49
  030bd34  addi 28, 3, -17484
  030bd38  addic 27, 30, 64
  030bd3c  lfs 2, 0(28)
  030bd40  stfs 5, 76(29)
  030bd44  fsub 3, 2, 4
  030bd48  fsub 5, 2, 4
  030bd4c  fsub 9, 2, 4
  030bd50  fsub 10, 4, 2
  030bd54  fsub 11, 4, 2
  030bd58  fsub 4, 4, 2
  030bd5c  fmuls 8, 8, 1
  030bd60  fmuls 7, 7, 1
  030bd64  fmuls 1, 6, 1
  030bd68  fsel 3, 3, 2, 8
  030bd6c  fsel 5, 5, 2, 7
  030bd70  fsel 2, 9, 2, 1
  030bd74  fsel 3, 10, 3, 8
  030bd78  fsel 5, 11, 5, 7
  030bd7c  fsel 1, 4, 2, 1
  030bd80  stfs 3, 64(29)
  030bd84  stfs 5, 68(29)
  030bd88  stfs 1, 72(29)
  030bd8c  lfs 31, 0(31)
  030bd90  lfs 2, 64(30)
  030bd94  fmr 1, 31
  030bd98  bl 0x5026a0
  030bd9c  nop
  030bda0  lis 26, 128
  030bda4  ori 3, 27, 0
  030bda8  lfs 2, -2472(26)
  030bdac  fdivs 2, 1, 2
  030bdb0  fmr 1, 31
  030bdb4  bl 0x109af0
  030bdb8  nop
  030bdbc  lfs 31, 4(31)
  030bdc0  addic 27, 30, 68
  030bdc4  lfs 2, 68(30)
  030bdc8  fmr 1, 31
  030bdcc  bl 0x5026a0
  030bdd0  nop
  030bdd4  lfs 2, -2472(26)
  030bdd8  ori 3, 27, 0
  030bddc  fdivs 2, 1, 2
  030bde0  fmr 1, 31
  030bde4  bl 0x109af0
  030bde8  nop
  030bdec  lis 4, 114
  030bdf0  lfs 3, 12(28)
  030bdf4  lfs 4, 16(28)
  030bdf8  lis 6, 114
  030bdfc  lfs 5, 20(28)
  030be00  addic 3, 30, 72
  030be04  lfs 1, 8(31)
  030be08  addic 5, 29, 248
  030be0c  li 9, 0
  030be10  lfs 6, -3060(4)
  030be14  lfs 7, -3052(6)
  030be18  fmuls 2, 6, 3
  030be1c  fmuls 3, 6, 4
  030be20  fmuls 4, 7, 5
  030be24  bl 0x10a050
  030be28  nop
  030be2c  lfs 1, 16(30)
  030be30  lfs 2, 64(29)
  030be34  fadds 1, 1, 2
  030be38  lfs 2, 20(30)
  030be3c  lfs 3, 24(30)
  030be40  stfs 1, 16(30)
  030be44  lfs 1, 68(29)
  030be48  fadds 1, 2, 1
  030be4c  stfs 1, 20(30)
  030be50  lfs 1, 72(29)
  030be54  fadds 1, 3, 1
  030be58  stfs 1, 24(30)
  030be5c  ld 0, 192(1)
  030be60  mtlr 0
  030be64  lfd 31, 168(1)
  030be68  ld 26, 120(1)
  030be6c  ld 27, 128(1)
  030be70  ld 28, 136(1)
  030be74  ld 29, 144(1)
  030be78  ld 30, 152(1)
  030be7c  ld 31, 160(1)
  030be80  addi 1, 1, 176
  030be84  blr

M240_0030be90:   # 0x30be90, 0x120 bytes
  030be90  stdu 1, -240(1)
  030be94  mflr 0
  030be98  std 0, 256(1)
  030be9c  stfd 28, 208(1)
  030bea0  stfd 29, 216(1)
  030bea4  stfd 30, 224(1)
  030bea8  stfd 31, 232(1)
  030beac  std 31, 200(1)
  030beb0  cmpwi 5, 0
  030beb4  ori 31, 4, 0
  030beb8  bt 2, 0x30bf74
  030bebc  lis 4, 151
  030bec0  lfs 1, 20(3)
  030bec4  lfs 2, 72(3)
  030bec8  li 5, 0
  030becc  addic 4, 4, -25376
  030bed0  fneg 2, 2
  030bed4  lfs 3, 132(4)
  030bed8  lfs 4, 128(4)
  030bedc  fsubs 31, 3, 1
  030bee0  lfs 1, 16(3)
  030bee4  lfs 3, 136(4)
  030bee8  fsubs 30, 4, 1
  030beec  lfs 1, 24(3)
  030bef0  lfs 29, 140(4)
  030bef4  stw 5, 124(1)
  030bef8  fsubs 28, 3, 1
  030befc  stw 5, 116(1)
  030bf00  addic 3, 1, 128
  030bf04  stw 5, 112(1)
  030bf08  addic 4, 1, 112
  030bf0c  stfs 2, 120(1)
  030bf10  bl 0x500ca4
  030bf14  nop
  030bf18  lfs 1, 148(1)
  030bf1c  lfs 2, 132(1)
  030bf20  fmuls 1, 1, 31
  030bf24  lfs 3, 164(1)
  030bf28  lis 3, 128
  030bf2c  lfs 4, 180(1)
  030bf30  fmadds 1, 2, 30, 1
  030bf34  lfs 2, -2476(3)
  030bf38  lfs 5, 144(1)
  030bf3c  fmuls 5, 5, 31
  030bf40  fmadds 1, 3, 28, 1
  030bf44  lfs 3, 128(1)
  030bf48  lfs 6, 160(1)
  030bf4c  fmadds 3, 3, 30, 5
  030bf50  fnmadds 1, 4, 29, 1
  030bf54  fmadds 3, 6, 28, 3
  030bf58  fdivs 1, 1, 2
  030bf5c  lfs 2, 176(1)
  030bf60  fmadds 2, 2, 29, 3
  030bf64  stfs 1, 0(31)
  030bf68  lfs 1, -2476(3)
  030bf6c  fdivs 1, 2, 1
  030bf70  b 0x30bf88
  030bf74  lis 3, 49
  030bf78  li 4, 0
  030bf7c  addi 3, 3, -16760
  030bf80  stw 4, 0(31)
  030bf84  lfs 1, 0(3)
  030bf88  stfs 1, 4(31)
  030bf8c  ld 0, 256(1)
  030bf90  mtlr 0
  030bf94  lfd 28, 208(1)
  030bf98  lfd 29, 216(1)
  030bf9c  lfd 30, 224(1)
  030bfa0  lfd 31, 232(1)
  030bfa4  ld 31, 200(1)
  030bfa8  addi 1, 1, 240
  030bfac  blr

UpdateMoby_240:   # 0x30c010, 0x1024 bytes
  030c010  stdu 1, -448(1)
  030c014  mflr 0
  030c018  std 0, 464(1)
  030c01c  stfd 29, 424(1)
  030c020  stfd 30, 432(1)
  030c024  stfd 31, 440(1)
  030c028  std 31, 416(1)
  030c02c  ori 31, 3, 0
  030c030  lfs 1, 72(31)
  030c034  lfs 31, 16(31)
  030c038  std 30, 408(1)
  030c03c  lfs 30, 20(31)
  030c040  lwz 30, 120(31)
  030c044  lfs 29, 24(31)
  030c048  fmr 4, 31
  030c04c  lfs 2, 28(31)
  030c050  fmr 5, 30
  030c054  lfs 3, 64(31)
  030c058  fmr 6, 29
  030c05c  lfs 7, 68(31)
  030c060  stfs 3, 192(1)
  030c064  lbz 3, 32(31)
  030c068  stfs 7, 196(1)
  030c06c  lfs 3, 76(31)
  030c070  cmpwi 3, 0
  030c074  stfs 1, 200(1)
  030c078  std 29, 400(1)
  030c07c  std 28, 392(1)
  030c080  stfs 3, 204(1)
  030c084  bt 2, 0x30c108
  030c088  lwz 4, 252(30)
  030c08c  cmpwi 4, -1
  030c090  bt 2, 0x30c0c0
  030c094  lis 5, 164
  030c098  slwi 4, 4, 8
  030c09c  lwz 5, -28512(5)
  030c0a0  addc 4, 5, 4
  030c0a4  clrldi 4, 4, 32
  030c0a8  lbz 4, 32(4)
  030c0ac  cmpwi 4, 128
  030c0b0  bf 0, 0x30c0c0
  030c0b4  ori 3, 31, 0
  030c0b8  bl 0x30b740
  030c0bc  b 0x30d008
  030c0c0  lwz 4, 220(30)
  030c0c4  cmpwi 4, -1
  030c0c8  bt 2, 0x30c108
  030c0cc  extsw 3, 4
  030c0d0  li 4, -1
  030c0d4  bl 0x104214
  030c0d8  nop
  030c0dc  lfs 4, 16(31)
  030c0e0  cmpwi 3, 0
  030c0e4  lfs 1, 72(31)
  030c0e8  lfs 5, 20(31)
  030c0ec  lfs 6, 24(31)
  030c0f0  lfs 2, 28(31)
  030c0f4  lbz 3, 32(31)
  030c0f8  bt 2, 0x30c108
  030c0fc  ori 3, 31, 0
  030c100  bl 0x30b740
  030c104  b 0x30d008
  030c108  cmpwi 3, 4
  030c10c  cmpwi 1, 3, 1
  030c110  bt 1, 0x30c140
  030c114  cmpwi 6, 3, -1
  030c118  cmpwi 7, 3, 2
  030c11c  bt 5, 0x30c130
  030c120  cmpwi 1, 3, 0
  030c124  bf 25, 0x30cfc4
  030c128  bf 5, 0x30c170
  030c12c  b 0x30cfc4
  030c130  cmpwi 1, 3, 3
  030c134  bf 29, 0x30c6f4
  030c138  bf 5, 0x30cadc
  030c13c  b 0x30c94c
  030c140  cmpwi 3, 7
  030c144  cmpwi 6, 3, 5
  030c148  cmpwi 7, 3, 8
  030c14c  bt 1, 0x30c160
  030c150  cmpwi 1, 3, 6
  030c154  bf 25, 0x30cbec
  030c158  bf 5, 0x30cc88
  030c15c  b 0x30c39c
  030c160  cmpwi 1, 3, 9
  030c164  bf 29, 0x30cd20
  030c168  bf 5, 0x30ce9c
  030c16c  b 0x30cfc4
  030c170  lwz 3, 228(30)
  030c174  cmpwi 3, 4
  030c178  cmpwi 1, 3, 3
  030c17c  cmpwi 6, 3, 2
  030c180  cmpwi 7, 3, 1
  030c184  bt 2, 0x30c378
  030c188  bt 6, 0x30c360
  030c18c  bt 26, 0x30c2c0
  030c190  bt 30, 0x30c228
  030c194  cmpwi 3, 0
  030c198  bf 2, 0x30cfc4
  030c19c  lwz 4, 36(31)
  030c1a0  lis 3, 165
  030c1a4  lwz 5, 180(30)
  030c1a8  li 6, 1
  030c1ac  addic 3, 3, 7136
  030c1b0  slwi 5, 5, 2
  030c1b4  lwz 4, 16(4)
  030c1b8  extsw 5, 5
  030c1bc  stw 4, 148(31)
  030c1c0  lwz 7, 208(30)
  030c1c4  li 4, 0
  030c1c8  lwz 8, 212(30)
  030c1cc  lwzx 3, 3, 5
  030c1d0  cmpwi 7, 0
  030c1d4  stb 6, 164(30)
  030c1d8  cmpwi 1, 8, 0
  030c1dc  stw 3, 176(30)
  030c1e0  stw 4, 160(30)
  030c1e4  lhz 3, 62(30)
  030c1e8  bf 2, 0x30c1f4
  030c1ec  lis 4, 16576
  030c1f0  stw 4, 208(30)
  030c1f4  bf 6, 0x30c200
  030c1f8  lis 4, 16576
  030c1fc  stw 4, 212(30)
  030c200  ori 3, 3, 9
  030c204  li 4, 0
  030c208  li 5, 7
  030c20c  sth 3, 62(30)
  030c210  stw 4, 76(30)
  030c214  stw 4, 72(30)
  030c218  stw 4, 68(30)
  030c21c  stw 4, 64(30)
  030c220  stb 5, 32(31)
  030c224  b 0x30cfc4
  030c228  lwz 5, 36(31)
  030c22c  lwz 6, 180(30)
  030c230  lis 3, 165
  030c234  lwz 7, 212(30)
  030c238  li 4, 1
  030c23c  slwi 6, 6, 2
  030c240  addic 3, 3, 7136
  030c244  extsw 6, 6
  030c248  lwz 5, 16(5)
  030c24c  cmpwi 7, 0
  030c250  stw 5, 148(31)
  030c254  li 5, 0
  030c258  lwz 8, 208(30)
  030c25c  lwzx 3, 3, 6
  030c260  cmpwi 1, 8, 0
  030c264  stb 4, 164(30)
  030c268  stw 3, 176(30)
  030c26c  stw 5, 160(30)
  030c270  bf 2, 0x30c27c
  030c274  lis 3, 16384
  030c278  stw 3, 212(30)
  030c27c  bf 6, 0x30c288
  030c280  lis 3, 16512
  030c284  stw 3, 208(30)
  030c288  bl 0xfcc68
  030c28c  nop
  030c290  lhz 3, 62(30)
  030c294  li 4, 0
  030c298  stfs 1, 216(30)
  030c29c  ori 3, 3, 9
  030c2a0  li 5, 2
  030c2a4  stw 4, 76(30)
  030c2a8  sth 3, 62(30)
  030c2ac  stw 4, 72(30)
  030c2b0  stw 4, 68(30)
  030c2b4  stw 4, 64(30)
  030c2b8  stb 5, 32(31)
  030c2bc  b 0x30cfc4
  030c2c0  lwz 4, 36(31)
  030c2c4  lis 3, 49
  030c2c8  lis 5, 165
  030c2cc  addi 3, 3, -16464
  030c2d0  addic 5, 5, 7136
  030c2d4  lwz 4, 16(4)
  030c2d8  li 6, 0
  030c2dc  stw 4, 148(31)
  030c2e0  lfs 2, 0(3)
  030c2e4  lwz 3, 180(30)
  030c2e8  lis 4, -16439
  030c2ec  fadds 1, 1, 2
  030c2f0  slwi 3, 3, 2
  030c2f4  ori 4, 4, 4059
  030c2f8  extsw 3, 3
  030c2fc  stw 4, 68(31)
  030c300  li 4, 1
  030c304  lwzx 3, 5, 3
  030c308  stw 6, 160(30)
  030c30c  stw 3, 176(30)
  030c310  stfs 1, 72(31)
  030c314  lwz 3, 212(30)
  030c318  stb 4, 164(30)
  030c31c  cmpwi 3, 0
  030c320  lwz 3, 208(30)
  030c324  cmpwi 1, 3, 0
  030c328  bf 2, 0x30c334
  030c32c  lis 3, 16640
  030c330  stw 3, 212(30)
  030c334  bf 6, 0x30c340
  030c338  lis 3, 16640
  030c33c  stw 3, 208(30)
  030c340  li 3, 0
  030c344  li 4, 4
  030c348  stw 3, 76(30)
  030c34c  stw 3, 72(30)
  030c350  stw 3, 68(30)
  030c354  stw 3, 64(30)
  030c358  stb 4, 32(31)
  030c35c  b 0x30cfc4
  030c360  li 3, 1
  030c364  li 4, 0
  030c368  stb 3, 32(31)
  030c36c  sth 4, 50(31)
  030c370  stw 4, 148(31)
  030c374  b 0x30cfc4
  030c378  li 3, 9
  030c37c  lis 4, 16512
  030c380  stb 3, 32(31)
  030c384  lhz 3, 62(30)
  030c388  stw 4, 212(30)
  030c38c  rlwinm 3, 3, 0, 0, 30
  030c390  stw 4, 208(30)
  030c394  sth 3, 62(30)
  030c398  b 0x30cfc4
  030c39c  ori 3, 31, 0
  030c3a0  bl 0x30b740
  030c3a4  lwz 4, 176(30)
  030c3a8  lwz 3, 160(30)
  030c3ac  lbz 5, 164(30)
  030c3b0  extsb 5, 5
  030c3b4  lwz 6, 0(4)
  030c3b8  addc 3, 3, 6
  030c3bc  addc 3, 3, 5
  030c3c0  divw 5, 3, 6
  030c3c4  mullw 5, 5, 6
  030c3c8  subc 3, 3, 5
  030c3cc  sldi 5, 3, 4
  030c3d0  addc 4, 4, 5
  030c3d4  clrldi 4, 4, 32
  030c3d8  lfs 1, 16(4)
  030c3dc  stfs 1, 240(1)
  030c3e0  lfs 1, 20(4)
  030c3e4  stfs 1, 244(1)
  030c3e8  lfs 1, 24(4)
  030c3ec  stfs 1, 248(1)
  030c3f0  lfs 1, 28(4)
  030c3f4  stfs 1, 252(1)
  030c3f8  lwz 4, 176(30)
  030c3fc  lfs 1, 20(31)
  030c400  addc 4, 4, 5
  030c404  lfs 2, 16(31)
  030c408  clrldi 4, 4, 32
  030c40c  lis 5, 49
  030c410  lfs 3, 20(4)
  030c414  lfs 4, 16(4)
  030c418  fsubs 1, 1, 3
  030c41c  fsubs 2, 2, 4
  030c420  lfs 3, 24(31)
  030c424  lfs 4, 24(4)
  030c428  fsubs 3, 3, 4
  030c42c  addi 5, 5, -16464
  030c430  fmuls 1, 1, 1
  030c434  fmadds 1, 2, 2, 1
  030c438  lfs 2, 4(5)
  030c43c  fmadds 1, 3, 3, 1
  030c440  fsqrts 1, 1
  030c444  fcmpu 0, 1, 2
  030c448  cror 6, 1, 2
  030c44c  bt 6, 0x30c46c
  030c450  stw 3, 160(30)
  030c454  lis 5, -16512
  030c458  lwz 3, 28(4)
  030c45c  lfs 1, 28(4)
  030c460  cmpw 3, 5
  030c464  bt 2, 0x30c46c
  030c468  stfs 1, 208(30)
  030c46c  lfs 1, 240(1)
  030c470  lfs 2, 16(31)
  030c474  lfs 3, 244(1)
  030c478  lfs 4, 20(31)
  030c47c  fsubs 1, 1, 2
  030c480  lis 3, 49
  030c484  fsubs 2, 3, 4
  030c488  addi 3, 3, -16464
  030c48c  lis 4, 115
  030c490  addic 4, 4, 22784
  030c494  fabs 3, 1
  030c498  fabs 5, 2
  030c49c  stfs 1, 336(1)
  030c4a0  stfs 2, 340(1)
  030c4a4  fsubs 1, 3, 5
  030c4a8  stfs 1, 344(1)
  030c4ac  lwz 5, 336(1)
  030c4b0  lfs 4, 8(3)
  030c4b4  lfs 1, 336(1)
  030c4b8  lwz 3, 340(1)
  030c4bc  lfs 2, 340(1)
  030c4c0  lwz 6, 344(1)
  030c4c4  rlwinm 3, 3, 3, 29, 29
  030c4c8  fabs 6, 2
  030c4cc  lfs 2, 344(1)
  030c4d0  fabs 1, 1
  030c4d4  rlwimi 3, 6, 2, 30, 30
  030c4d8  fsub 7, 2, 4
  030c4dc  rlwimi 3, 5, 4, 28, 28
  030c4e0  fsub 8, 2, 4
  030c4e4  ori 5, 4, 0
  030c4e8  rlwimi 5, 3, 2, 26, 28
  030c4ec  slwi 3, 3, 2
  030c4f0  clrldi 5, 5, 32
  030c4f4  fsel 5, 7, 1, 5
  030c4f8  lfsx 1, 4, 3
  030c4fc  lfs 2, 4(5)
  030c500  fsel 3, 8, 6, 3
  030c504  fcmpu 0, 5, 4
  030c508  bt 1, 0x30c510
  030c50c  b 0x30c630
  030c510  fsubs 6, 3, 5
  030c514  fadds 3, 3, 5
  030c518  addic 3, 1, 16
  030c51c  li 7, 2
  030c520  addic 4, 3, 332
  030c524  addic 5, 3, 348
  030c528  mtctr 7
  030c52c  fdivs 3, 6, 3
  030c530  fmuls 5, 3, 3
  030c534  stfs 3, 360(1)
  030c538  stfs 3, 352(1)
  030c53c  stfs 3, 356(1)
  030c540  stfs 3, 348(1)
  030c544  lfs 7, 360(1)
  030c548  lfs 8, 352(1)
  030c54c  lfs 9, 356(1)
  030c550  fmuls 6, 5, 5
  030c554  fmuls 8, 8, 5
  030c558  fmuls 7, 7, 6
  030c55c  fmuls 3, 6, 6
  030c560  fmuls 6, 9, 6
  030c564  stfs 8, 352(1)
  030c568  fmuls 5, 7, 5
  030c56c  stfs 6, 356(1)
  030c570  stfs 5, 360(1)
  030c574  lfs 5, 332(3)
  030c578  fmuls 5, 5, 3
  030c57c  stfs 5, 348(3)
  030c580  lfs 5, 4(4)
  030c584  addic 3, 3, 8
  030c588  addic 4, 4, 8
  030c58c  fmuls 5, 5, 3
  030c590  stfs 5, 4(5)
  030c594  addic 5, 5, 8
  030c598  bdnz 0x30c574
  030c59c  li 5, 4
  030c5a0  ori 3, 1, 0
  030c5a4  mtctr 5
  030c5a8  lis 4, 115
  030c5ac  addic 5, 3, 348
  030c5b0  addic 4, 4, 22752
  030c5b4  ori 6, 5, 0
  030c5b8  lfs 3, 348(3)
  030c5bc  lfs 5, 0(4)
  030c5c0  fmuls 3, 3, 5
  030c5c4  lfs 5, 4(4)
  030c5c8  addic 4, 4, 8
  030c5cc  stfs 3, 348(3)
  030c5d0  lfs 3, 4(5)
  030c5d4  addic 3, 3, 8
  030c5d8  fmuls 3, 3, 5
  030c5dc  stfs 3, 4(5)
  030c5e0  addic 5, 5, 8
  030c5e4  bdnz 0x30c5b8
  030c5e8  ori 3, 1, 0
  030c5ec  mtctr 7
  030c5f0  lfs 3, 348(3)
  030c5f4  fadds 3, 4, 3
  030c5f8  lfs 4, 4(6)
  030c5fc  addic 3, 3, 16
  030c600  lfs 5, 8(6)
  030c604  lfs 6, 12(6)
  030c608  addic 6, 6, 16
  030c60c  fadds 3, 3, 4
  030c610  fadds 4, 3, 5
  030c614  fadds 4, 4, 6
  030c618  bdnz 0x30c5f0
  030c61c  lis 3, 49
  030c620  addi 3, 3, -16464
  030c624  lfs 3, 12(3)
  030c628  fadds 4, 4, 3
  030c62c  fmadds 4, 4, 1, 2
  030c630  lis 3, 151
  030c634  stfs 4, 232(1)
  030c638  addic 3, 3, -25376
  030c63c  lwz 5, 8332(3)
  030c640  lwz 4, 1272(3)
  030c644  cmpwi 5, 3
  030c648  bt 2, 0x30c658
  030c64c  lwz 5, 8324(3)
  030c650  cmpwi 5, 28
  030c654  bf 2, 0x30c668
  030c658  cmpw 4, 31
  030c65c  bf 2, 0x30c688
  030c660  li 3, 1
  030c664  b 0x30c68c
  030c668  lhz 4, 782(3)
  030c66c  cmpwi 4, 0
  030c670  bf 2, 0x30c688
  030c674  lwz 3, 764(3)
  030c678  cmpw 3, 31
  030c67c  bf 2, 0x30c688
  030c680  li 3, 1
  030c684  b 0x30c68c
  030c688  li 3, 0
  030c68c  cmpwi 3, 0
  030c690  bt 2, 0x30c6c4
  030c694  addic 29, 1, 224
  030c698  ori 3, 31, 0
  030c69c  ori 4, 29, 0
  030c6a0  li 5, 1
  030c6a4  bl 0x30be90
  030c6a8  addic 5, 1, 240
  030c6ac  ori 3, 31, 0
  030c6b0  ori 4, 29, 0
  030c6b4  li 6, 1
  030c6b8  li 7, 0
  030c6bc  bl 0x30bbd0
  030c6c0  b 0x30cfc4
  030c6c4  addic 29, 1, 224
  030c6c8  ori 3, 31, 0
  030c6cc  ori 4, 29, 0
  030c6d0  li 5, 0
  030c6d4  bl 0x30be90
  030c6d8  addic 5, 1, 240
  030c6dc  ori 3, 31, 0
  030c6e0  ori 4, 29, 0
  030c6e4  li 6, 0
  030c6e8  li 7, 0
  030c6ec  bl 0x30bbd0
  030c6f0  b 0x30cfc4
  030c6f4  li 3, 0
  030c6f8  lis 4, 49
  030c6fc  addi 28, 4, -16464
  030c700  stw 3, 212(30)
  030c704  lis 3, 114
  030c708  lfs 1, 216(30)
  030c70c  lfs 2, 16(28)
  030c710  lwz 29, 176(30)
  030c714  lfs 3, -3052(3)
  030c718  fmuls 2, 3, 2
  030c71c  bl 0x502578
  030c720  nop
  030c724  stfs 1, 216(30)
  030c728  lfs 2, 20(28)
  030c72c  lfs 3, 24(28)
  030c730  fsubs 2, 2, 1
  030c734  fsubs 3, 3, 1
  030c738  lfs 6, 28(28)
  030c73c  fmr 4, 1
  030c740  fsub 5, 1, 2
  030c744  fsel 2, 5, 2, 1
  030c748  lfs 5, 32(28)
  030c74c  fsub 7, 3, 2
  030c750  fsel 2, 7, 3, 2
  030c754  lfs 7, 36(28)
  030c758  lfs 8, 44(28)
  030c75c  fcmpu 0, 1, 8
  030c760  lfs 3, 16(29)
  030c764  lfs 9, 40(28)
  030c768  fmuls 10, 2, 2
  030c76c  cror 6, 0, 2
  030c770  fmuls 8, 10, 2
  030c774  fmuls 11, 10, 8
  030c778  fmadds 2, 8, 6, 2
  030c77c  fmuls 6, 10, 11
  030c780  fmadds 2, 11, 5, 2
  030c784  fmuls 5, 10, 6
  030c788  fmadds 2, 6, 7, 2
  030c78c  fmadds 2, 5, 9, 2
  030c790  bt 6, 0x30c7bc
  030c794  lis 3, 49
  030c798  addi 3, 3, -16464
  030c79c  lfs 5, 0(3)
  030c7a0  fcmpu 0, 1, 5
  030c7a4  cror 6, 1, 2
  030c7a8  bt 6, 0x30c7bc
  030c7ac  lis 3, 49
  030c7b0  addi 3, 3, -16464
  030c7b4  lfs 5, 48(3)
  030c7b8  fsubs 2, 5, 2
  030c7bc  lis 3, 49
  030c7c0  addi 3, 3, -16464
  030c7c4  lfs 5, 52(3)
  030c7c8  fcmpu 0, 4, 5
  030c7cc  cror 6, 0, 2
  030c7d0  bt 6, 0x30c7fc
  030c7d4  lis 3, 49
  030c7d8  addi 3, 3, -16464
  030c7dc  lfs 4, 56(3)
  030c7e0  fcmpu 0, 1, 4
  030c7e4  cror 6, 1, 2
  030c7e8  bt 6, 0x30c7fc
  030c7ec  lis 3, 49
  030c7f0  addi 3, 3, -16464
  030c7f4  lfs 1, 48(3)
  030c7f8  fsubs 2, 1, 2
  030c7fc  lis 3, 49
  030c800  ori 4, 29, 0
  030c804  addi 3, 3, -16464
  030c808  addic 29, 31, 16
  030c80c  lfs 1, 4(3)
  030c810  lfs 4, 60(3)
  030c814  fmadds 1, 2, 1, 1
  030c818  lfs 5, 48(3)
  030c81c  stfs 3, 64(1)
  030c820  lfs 3, 24(4)
  030c824  ori 3, 29, 0
  030c828  lfs 6, 32(4)
  030c82c  stfs 3, 72(1)
  030c830  stfs 6, 80(1)
  030c834  lfs 2, 40(4)
  030c838  stfs 2, 88(1)
  030c83c  fsubs 3, 1, 5
  030c840  fsub 4, 4, 1
  030c844  lfs 2, 20(4)
  030c848  stfs 2, 68(1)
  030c84c  lfs 2, 28(4)
  030c850  lfs 5, 36(4)
  030c854  stfs 2, 76(1)
  030c858  ld 5, 64(1)
  030c85c  stfs 5, 84(1)
  030c860  lfs 2, 44(4)
  030c864  ld 6, 72(1)
  030c868  fsel 1, 4, 1, 3
  030c86c  stfs 2, 92(1)
  030c870  ld 7, 80(1)
  030c874  ld 8, 88(1)
  030c878  fabs 1, 1
  030c87c  bl 0x1099f8
  030c880  nop
  030c884  lis 3, 151
  030c888  lfs 1, 72(31)
  030c88c  addic 3, 3, -25376
  030c890  stfs 1, 264(1)
  030c894  lwz 5, 8332(3)
  030c898  lwz 4, 1272(3)
  030c89c  cmpwi 5, 3
  030c8a0  bt 2, 0x30c8b0
  030c8a4  lwz 5, 8324(3)
  030c8a8  cmpwi 5, 28
  030c8ac  bf 2, 0x30c8c0
  030c8b0  cmpw 4, 31
  030c8b4  bf 2, 0x30c8e0
  030c8b8  li 3, 1
  030c8bc  b 0x30c8e4
  030c8c0  lhz 4, 782(3)
  030c8c4  cmpwi 4, 0
  030c8c8  bf 2, 0x30c8e0
  030c8cc  lwz 3, 764(3)
  030c8d0  cmpw 3, 31
  030c8d4  bf 2, 0x30c8e0
  030c8d8  li 3, 1
  030c8dc  b 0x30c8e4
  030c8e0  li 3, 0
  030c8e4  cmpwi 3, 0
  030c8e8  bt 2, 0x30c91c
  030c8ec  addic 28, 1, 256
  030c8f0  ori 3, 31, 0
  030c8f4  ori 4, 28, 0
  030c8f8  li 5, 1
  030c8fc  bl 0x30be90
  030c900  ori 3, 31, 0
  030c904  ori 4, 28, 0
  030c908  ori 5, 29, 0
  030c90c  li 6, 1
  030c910  li 7, 1
  030c914  bl 0x30bbd0
  030c918  b 0x30cfc4
  030c91c  addic 28, 1, 256
  030c920  ori 3, 31, 0
  030c924  ori 4, 28, 0
  030c928  li 5, 0
  030c92c  bl 0x30be90
  030c930  ori 3, 31, 0
  030c934  ori 4, 28, 0
  030c938  ori 5, 29, 0
  030c93c  li 6, 0
  030c940  li 7, 1
  030c944  bl 0x30bbd0
  030c948  b 0x30cfc4
  030c94c  lis 3, 49
  030c950  lfs 1, 216(30)
  030c954  addi 28, 3, -16464
  030c958  lis 3, 114
  030c95c  lfs 2, 16(28)
  030c960  lwz 29, 176(30)
  030c964  lfs 3, -3052(3)
  030c968  fmuls 2, 3, 2
  030c96c  bl 0x502578
  030c970  nop
  030c974  stfs 1, 216(30)
  030c978  lfs 2, 20(28)
  030c97c  lfs 3, 24(28)
  030c980  fsubs 2, 2, 1
  030c984  fsubs 3, 3, 1
  030c988  lfs 6, 28(28)
  030c98c  fmr 4, 1
  030c990  fsub 5, 1, 2
  030c994  fsel 2, 5, 2, 1
  030c998  lfs 5, 32(28)
  030c99c  fsub 7, 3, 2
  030c9a0  fsel 2, 7, 3, 2
  030c9a4  lfs 7, 36(28)
  030c9a8  lfs 8, 44(28)
  030c9ac  fcmpu 0, 1, 8
  030c9b0  lfs 3, 16(29)
  030c9b4  lfs 9, 40(28)
  030c9b8  fmuls 10, 2, 2
  030c9bc  cror 6, 0, 2
  030c9c0  fmuls 8, 10, 2
  030c9c4  fmuls 11, 10, 8
  030c9c8  fmadds 2, 8, 6, 2
  030c9cc  fmuls 6, 10, 11
  030c9d0  fmadds 2, 11, 5, 2
  030c9d4  fmuls 5, 10, 6
  030c9d8  fmadds 2, 6, 7, 2
  030c9dc  fmadds 2, 5, 9, 2
  030c9e0  bt 6, 0x30ca0c
  030c9e4  lis 3, 49
  030c9e8  addi 3, 3, -16464
  030c9ec  lfs 5, 0(3)
  030c9f0  fcmpu 0, 1, 5
  030c9f4  cror 6, 1, 2
  030c9f8  bt 6, 0x30ca0c
  030c9fc  lis 3, 49
  030ca00  addi 3, 3, -16464
  030ca04  lfs 5, 48(3)
  030ca08  fsubs 2, 5, 2
  030ca0c  lis 3, 49
  030ca10  addi 3, 3, -16464
  030ca14  lfs 5, 52(3)
  030ca18  fcmpu 0, 4, 5
  030ca1c  cror 6, 0, 2
  030ca20  bt 6, 0x30ca4c
  030ca24  lis 3, 49
  030ca28  addi 3, 3, -16464
  030ca2c  lfs 4, 56(3)
  030ca30  fcmpu 0, 1, 4
  030ca34  cror 6, 1, 2
  030ca38  bt 6, 0x30ca4c
  030ca3c  lis 3, 49
  030ca40  addi 3, 3, -16464
  030ca44  lfs 1, 48(3)
  030ca48  fsubs 2, 1, 2
  030ca4c  lis 3, 49
  030ca50  addi 3, 3, -16464
  030ca54  lfs 1, 4(3)
  030ca58  lfs 4, 60(3)
  030ca5c  fmadds 1, 2, 1, 1
  030ca60  lfs 5, 48(3)
  030ca64  stfs 3, 64(1)
  030ca68  lfs 3, 24(29)
  030ca6c  addic 3, 31, 16
  030ca70  lfs 6, 32(29)
  030ca74  stfs 3, 72(1)
  030ca78  stfs 6, 80(1)
  030ca7c  lfs 2, 40(29)
  030ca80  stfs 2, 88(1)
  030ca84  fsubs 5, 1, 5
  030ca88  fsub 4, 4, 1
  030ca8c  lfs 2, 20(29)
  030ca90  lfs 3, 28(29)
  030ca94  stfs 2, 68(1)
  030ca98  stfs 3, 76(1)
  030ca9c  lfs 2, 36(29)
  030caa0  ld 5, 64(1)
  030caa4  stfs 2, 84(1)
  030caa8  ld 6, 72(1)
  030caac  lfs 2, 44(29)
  030cab0  fsel 1, 4, 1, 5
  030cab4  stfs 2, 92(1)
  030cab8  ld 7, 80(1)
  030cabc  ld 8, 88(1)
  030cac0  fabs 1, 1
  030cac4  bl 0x1099f8
  030cac8  nop
  030cacc  lis 3, -16439
  030cad0  ori 3, 3, 4059
  030cad4  stw 3, 68(31)
  030cad8  b 0x30cfc4
  030cadc  addic 3, 30, 224
  030cae0  stfs 1, 280(1)
  030cae4  bl 0x4fff60
  030cae8  nop
  030caec  cmpwi 3, 0
  030caf0  bt 2, 0x30cb2c
  030caf4  li 4, 1
  030caf8  lbz 6, 164(30)
  030cafc  li 3, 2
  030cb00  li 5, 1
  030cb04  subc 4, 4, 6
  030cb08  subc 3, 3, 5
  030cb0c  cntlzw 4, 4
  030cb10  li 6, 2
  030cb14  sldi 4, 4, 58
  030cb18  sradi 4, 4, 63
  030cb1c  and 3, 4, 3
  030cb20  addc 3, 5, 3
  030cb24  stb 3, 164(30)
  030cb28  stb 6, 32(31)
  030cb2c  lis 3, 151
  030cb30  addic 3, 3, -25376
  030cb34  lwz 4, 8332(3)
  030cb38  cmpwi 4, 3
  030cb3c  bt 2, 0x30cb4c
  030cb40  lwz 4, 8324(3)
  030cb44  cmpwi 4, 28
  030cb48  bf 2, 0x30cb60
  030cb4c  lwz 3, 1272(3)
  030cb50  cmpw 3, 31
  030cb54  bf 2, 0x30cb80
  030cb58  li 3, 1
  030cb5c  b 0x30cb84
  030cb60  lhz 4, 782(3)
  030cb64  cmpwi 4, 0
  030cb68  bf 2, 0x30cb80
  030cb6c  lwz 3, 764(3)
  030cb70  cmpw 3, 31
  030cb74  bf 2, 0x30cb80
  030cb78  li 3, 1
  030cb7c  b 0x30cb84
  030cb80  li 3, 0
  030cb84  cmpwi 3, 0
  030cb88  bt 2, 0x30cbbc
  030cb8c  addic 29, 1, 272
  030cb90  ori 3, 31, 0
  030cb94  ori 4, 29, 0
  030cb98  li 5, 1
  030cb9c  bl 0x30be90
  030cba0  addic 5, 31, 16
  030cba4  ori 3, 31, 0
  030cba8  ori 4, 29, 0
  030cbac  li 6, 1
  030cbb0  li 7, 1
  030cbb4  bl 0x30bbd0
  030cbb8  b 0x30cfc4
  030cbbc  addic 29, 1, 272
  030cbc0  ori 3, 31, 0
  030cbc4  ori 4, 29, 0
  030cbc8  li 5, 0
  030cbcc  bl 0x30be90
  030cbd0  addic 5, 31, 16
  030cbd4  ori 3, 31, 0
  030cbd8  ori 4, 29, 0
  030cbdc  li 6, 0
  030cbe0  li 7, 1
  030cbe4  bl 0x30bbd0
  030cbe8  b 0x30cfc4
  030cbec  addic 3, 30, 224
  030cbf0  bl 0x4fff60
  030cbf4  nop
  030cbf8  cmpwi 3, 0
  030cbfc  bt 2, 0x30cc38
  030cc00  li 3, 1
  030cc04  lbz 6, 164(30)
  030cc08  li 4, 2
  030cc0c  subc 3, 3, 6
  030cc10  li 5, 1
  030cc14  cntlzw 3, 3
  030cc18  subc 4, 4, 5
  030cc1c  sldi 3, 3, 58
  030cc20  li 6, 4
  030cc24  sradi 3, 3, 63
  030cc28  and 3, 3, 4
  030cc2c  addc 3, 5, 3
  030cc30  stb 3, 164(30)
  030cc34  stb 6, 32(31)
  030cc38  lbz 3, 164(30)
  030cc3c  cmpwi 3, 2
  030cc40  bf 2, 0x30cc4c
  030cc44  ori 3, 31, 0
  030cc48  bl 0x30b740
  030cc4c  lfs 1, 64(31)
  030cc50  addic 4, 1, 288
  030cc54  lfs 2, 68(31)
  030cc58  addic 5, 31, 16
  030cc5c  stfs 1, 288(1)
  030cc60  ori 3, 31, 0
  030cc64  lfs 1, 72(31)
  030cc68  li 6, 0
  030cc6c  stfs 2, 292(1)
  030cc70  li 7, 1
  030cc74  lfs 2, 76(31)
  030cc78  stfs 1, 296(1)
  030cc7c  stfs 2, 300(1)
  030cc80  bl 0x30bbd0
  030cc84  b 0x30cfc4
  030cc88  lfs 2, 68(30)
  030cc8c  lfs 1, 64(30)
  030cc90  fmuls 3, 2, 2
  030cc94  lfs 2, 72(30)
  030cc98  lis 3, 49
  030cc9c  lis 4, 114
  030cca0  addi 3, 3, -16464
  030cca4  fmadds 3, 1, 1, 3
  030cca8  fmadds 3, 2, 2, 3
  030ccac  fsqrts 7, 3
  030ccb0  lfs 3, 64(3)
  030ccb4  lfs 8, -3052(4)
  030ccb8  fmuls 8, 8, 3
  030ccbc  fcmpu 0, 7, 8
  030ccc0  cror 6, 1, 2
  030ccc4  bt 6, 0x30cce4
  030ccc8  lis 3, 114
  030cccc  lfs 4, -3048(3)
  030ccd0  fmadds 2, 4, 3, 2
  030ccd4  stfs 2, 72(30)
  030ccd8  lfs 4, 16(31)
  030ccdc  lfs 5, 20(31)
  030cce0  lfs 6, 24(31)
  030cce4  fadds 1, 4, 1
  030cce8  lbz 3, 49(31)
  030ccec  cmpwi 3, 0
  030ccf0  stfs 1, 16(31)
  030ccf4  lfs 1, 68(30)
  030ccf8  fadds 1, 5, 1
  030ccfc  stfs 1, 20(31)
  030cd00  lfs 1, 72(30)
  030cd04  fadds 1, 6, 1
  030cd08  stfs 1, 24(31)
  030cd0c  bf 2, 0x30cfc4
  030cd10  ori 3, 31, 0
  030cd14  bl 0xefb38
  030cd18  nop
  030cd1c  b 0x30cfc4
  030cd20  lfs 1, 64(30)
  030cd24  addic 3, 31, 16
  030cd28  fadds 1, 4, 1
  030cd2c  li 4, 1536
  030cd30  li 5, 0
  030cd34  ori 6, 31, 0
  030cd38  li 7, 0
  030cd3c  stfs 1, 16(31)
  030cd40  lfs 1, 68(30)
  030cd44  fadds 1, 5, 1
  030cd48  stfs 1, 20(31)
  030cd4c  lfs 1, 72(30)
  030cd50  fadds 1, 6, 1
  030cd54  stfs 1, 24(31)
  030cd58  bl 0x55ac0
  030cd5c  nop
  030cd60  cmpwi 3, 0
  030cd64  bt 2, 0x30cde8
  030cd68  lwz 3, 176(30)
  030cd6c  cmpwi 3, 0
  030cd70  bf 2, 0x30cde8
  030cd74  lis 3, 49
  030cd78  li 7, -1
  030cd7c  addi 5, 3, -16464
  030cd80  li 6, 1
  030cd84  li 11, 0
  030cd88  ori 3, 31, 0
  030cd8c  addic 4, 30, 64
  030cd90  lfs 1, 48(5)
  030cd94  li 8, 10
  030cd98  lfs 2, 8(5)
  030cd9c  li 9, 3
  030cda0  lfs 3, 68(5)
  030cda4  li 10, 16
  030cda8  lfs 5, 72(5)
  030cdac  fmr 4, 1
  030cdb0  lfs 6, 60(5)
  030cdb4  lfs 7, 76(5)
  030cdb8  std 7, 144(1)
  030cdbc  li 5, 0
  030cdc0  std 6, 160(1)
  030cdc4  std 6, 168(1)
  030cdc8  std 7, 176(1)
  030cdcc  std 11, 184(1)
  030cdd0  bl 0x10e030
  030cdd4  nop
  030cdd8  ori 3, 31, 0
  030cddc  bl 0xefb38
  030cde0  nop
  030cde4  b 0x30d008
  030cde8  lis 3, 49
  030cdec  lis 4, 114
  030cdf0  lfs 2, 72(30)
  030cdf4  addi 3, 3, -16464
  030cdf8  lfs 4, 80(3)
  030cdfc  lfs 3, -3048(4)
  030ce00  lfs 1, 232(30)
  030ce04  fnmsubs 2, 3, 4, 2
  030ce08  stfs 2, 72(30)
  030ce0c  lfs 2, 64(31)
  030ce10  bl 0x502578
  030ce14  nop
  030ce18  stfs 1, 64(31)
  030ce1c  lfs 1, 236(30)
  030ce20  lfs 2, 68(31)
  030ce24  bl 0x502578
  030ce28  nop
  030ce2c  lwz 3, 176(30)
  030ce30  stfs 1, 68(31)
  030ce34  cmpwi 3, 0
  030ce38  lwz 4, 24(31)
  030ce3c  bt 2, 0x30ce84
  030ce40  lfs 1, 20(31)
  030ce44  lfs 2, 20(3)
  030ce48  lfs 3, 16(31)
  030ce4c  fsubs 1, 1, 2
  030ce50  lfs 2, 16(3)
  030ce54  fsubs 2, 3, 2
  030ce58  lis 3, 49
  030ce5c  addi 3, 3, -16464
  030ce60  fmuls 1, 1, 1
  030ce64  fmadds 1, 2, 2, 1
  030ce68  lfs 2, 4(3)
  030ce6c  fsqrts 1, 1
  030ce70  fcmpu 0, 1, 2
  030ce74  cror 6, 1, 2
  030ce78  bt 6, 0x30ce84
  030ce7c  li 3, 0
  030ce80  stb 3, 32(31)
  030ce84  cmpwi 4, 0
  030ce88  bf 0, 0x30cfc4
  030ce8c  ori 3, 31, 0
  030ce90  bl 0xefb38
  030ce94  nop
  030ce98  b 0x30cfc4
  030ce9c  lis 4, 164
  030cea0  lwz 6, 240(30)
  030cea4  lis 3, 151
  030cea8  slwi 6, 6, 8
  030ceac  addic 3, 3, -25376
  030ceb0  li 5, 0
  030ceb4  lwz 4, -28512(4)
  030ceb8  stfs 4, 304(1)
  030cebc  addc 4, 4, 6
  030cec0  stfs 5, 308(1)
  030cec4  stfs 6, 312(1)
  030cec8  clrldi 6, 4, 32
  030cecc  stfs 2, 316(1)
  030ced0  lwz 7, 8332(3)
  030ced4  lwz 4, 1272(3)
  030ced8  cmpwi 7, 3
  030cedc  lfs 4, 24(6)
  030cee0  stw 5, 332(1)
  030cee4  stfs 4, 312(1)
  030cee8  stw 5, 324(1)
  030ceec  stw 5, 320(1)
  030cef0  stfs 1, 328(1)
  030cef4  bt 2, 0x30cf04
  030cef8  lwz 5, 8324(3)
  030cefc  cmpwi 5, 28
  030cf00  bf 2, 0x30cf14
  030cf04  cmpw 4, 31
  030cf08  bf 2, 0x30cf34
  030cf0c  li 3, 1
  030cf10  b 0x30cf38
  030cf14  lhz 4, 782(3)
  030cf18  cmpwi 4, 0
  030cf1c  bf 2, 0x30cf34
  030cf20  lwz 3, 764(3)
  030cf24  cmpw 3, 31
  030cf28  bf 2, 0x30cf34
  030cf2c  li 3, 1
  030cf30  b 0x30cf38
  030cf34  li 3, 0
  030cf38  cmpwi 3, 0
  030cf3c  bt 2, 0x30cf84
  030cf40  lis 3, 49
  030cf44  addic 29, 1, 320
  030cf48  addi 4, 3, -16464
  030cf4c  ori 3, 31, 0
  030cf50  li 5, 1
  030cf54  lfs 1, 84(4)
  030cf58  ori 4, 29, 0
  030cf5c  fadds 1, 4, 1
  030cf60  stfs 1, 312(1)
  030cf64  bl 0x30be90
  030cf68  addic 5, 1, 304
  030cf6c  ori 3, 31, 0
  030cf70  ori 4, 29, 0
  030cf74  li 6, 1
  030cf78  li 7, 1
  030cf7c  bl 0x30bbd0
  030cf80  b 0x30cfc4
  030cf84  lis 3, 49
  030cf88  addic 29, 1, 320
  030cf8c  addi 3, 3, -16464
  030cf90  ori 4, 29, 0
  030cf94  li 5, 0
  030cf98  lfs 1, 88(3)
  030cf9c  ori 3, 31, 0
  030cfa0  fadds 1, 4, 1
  030cfa4  stfs 1, 312(1)
  030cfa8  bl 0x30be90
  030cfac  addic 5, 1, 304
  030cfb0  ori 3, 31, 0
  030cfb4  ori 4, 29, 0
  030cfb8  li 6, 0
  030cfbc  li 7, 1
  030cfc0  bl 0x30bbd0
  030cfc4  lfs 1, 16(31)
  030cfc8  addic 3, 30, 96
  030cfcc  lfs 2, 20(31)
  030cfd0  addic 4, 1, 208
  030cfd4  fsubs 1, 1, 31
  030cfd8  lfs 3, 24(31)
  030cfdc  fsubs 2, 2, 30
  030cfe0  lfs 4, 28(31)
  030cfe4  fsubs 3, 3, 29
  030cfe8  addic 5, 1, 192
  030cfec  stfs 4, 220(1)
  030cff0  addic 6, 31, 64
  030cff4  stfs 1, 208(1)
  030cff8  stfs 2, 212(1)
  030cffc  stfs 3, 216(1)
  030d000  bl 0x112900
  030d004  nop
  030d008  ld 0, 464(1)
  030d00c  mtlr 0
  030d010  lfd 29, 424(1)
  030d014  lfd 30, 432(1)
  030d018  lfd 31, 440(1)
  030d01c  ld 28, 392(1)
  030d020  ld 29, 400(1)
  030d024  ld 30, 408(1)
  030d028  ld 31, 416(1)
  030d02c  addi 1, 1, 448
  030d030  blr
