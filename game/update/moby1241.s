# game/update/moby1241.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0021b5e8:   # 0x21b5e8, 0x108 bytes
  021b5e8  stdu 1, -160(1)
  021b5ec  mflr 0
  021b5f0  std 0, 176(1)
  021b5f4  std 30, 144(1)
  021b5f8  ori 30, 3, 0
  021b5fc  std 31, 152(1)
  021b600  ori 3, 5, 0
  021b604  std 29, 136(1)
  021b608  std 28, 128(1)
  021b60c  std 27, 120(1)
  021b610  ori 31, 4, 0
  021b614  bl 0xefa28
  021b618  nop
  021b61c  ori 29, 3, 0
  021b620  cmpwi 29, 0
  021b624  bt 2, 0x21b6c8
  021b628  li 3, 255
  021b62c  li 4, 1
  021b630  li 28, 0
  021b634  stb 3, 48(29)
  021b638  stb 4, 49(29)
  021b63c  stb 28, 32(29)
  021b640  stb 28, 188(29)
  021b644  lfs 1, 0(30)
  021b648  lwz 27, 120(29)
  021b64c  stfs 1, 16(29)
  021b650  lfs 1, 4(30)
  021b654  stfs 1, 20(29)
  021b658  lfs 1, 8(30)
  021b65c  stfs 1, 24(29)
  021b660  lfs 1, 12(30)
  021b664  sth 3, 50(29)
  021b668  stfs 1, 28(29)
  021b66c  lfs 1, 0(31)
  021b670  stfs 1, 16(27)
  021b674  lfs 1, 4(31)
  021b678  stfs 1, 20(27)
  021b67c  lfs 1, 8(31)
  021b680  stfs 1, 24(27)
  021b684  lfs 1, 12(31)
  021b688  stfs 1, 28(27)
  021b68c  bl 0xfcc68
  021b690  nop
  021b694  lis 3, 16201
  021b698  stfs 1, 72(29)
  021b69c  lis 4, 16256
  021b6a0  stw 28, 64(29)
  021b6a4  ori 5, 3, 4059
  021b6a8  ori 3, 29, 0
  021b6ac  stw 5, 68(29)
  021b6b0  stw 4, 76(27)
  021b6b4  bl 0xf31a8
  021b6b8  nop
  021b6bc  ori 3, 29, 0
  021b6c0  bl 0x10c000
  021b6c4  nop
  021b6c8  ori 3, 29, 0
  021b6cc  ld 0, 176(1)
  021b6d0  mtlr 0
  021b6d4  ld 27, 120(1)
  021b6d8  ld 28, 128(1)
  021b6dc  ld 29, 136(1)
  021b6e0  ld 30, 144(1)
  021b6e4  ld 31, 152(1)
  021b6e8  addi 1, 1, 160
  021b6ec  blr

M1241_0021b6f0:   # 0x21b6f0, 0x134 bytes
  021b6f0  stdu 1, -128(1)
  021b6f4  mflr 0
  021b6f8  std 0, 144(1)
  021b6fc  std 30, 112(1)
  021b700  ori 30, 3, 0
  021b704  std 31, 120(1)
  021b708  lwz 3, 52(4)
  021b70c  ori 31, 4, 0
  021b710  cmpwi 3, 0
  021b714  bf 2, 0x21b728
  021b718  ori 3, 30, 0
  021b71c  bl 0x20b6b0
  021b720  nop
  021b724  stw 3, 52(31)
  021b728  cmpwi 3, 0
  021b72c  bt 2, 0x21b7dc
  021b730  lbz 4, 32(3)
  021b734  cmpwi 1, 4, 253
  021b738  cmpwi 4, 254
  021b73c  cror 2, 2, 6
  021b740  bt 2, 0x21b7dc
  021b744  addic 5, 3, 16
  021b748  li 4, 6
  021b74c  ori 3, 30, 0
  021b750  bl 0xf1114
  021b754  nop
  021b758  lwz 4, 52(31)
  021b75c  lfs 1, 64(30)
  021b760  ori 3, 4, 0
  021b764  stfs 1, 64(4)
  021b768  lfs 1, 68(30)
  021b76c  stfs 1, 68(4)
  021b770  lfs 1, 72(30)
  021b774  stfs 1, 72(4)
  021b778  lfs 1, 76(30)
  021b77c  stfs 1, 76(4)
  021b780  bl 0xf31a8
  021b784  nop
  021b788  lwz 3, 52(31)
  021b78c  li 4, 0
  021b790  ori 5, 31, 0
  021b794  bl 0xf1114
  021b798  nop
  021b79c  lfs 1, 16(30)
  021b7a0  lfs 2, 0(31)
  021b7a4  li 3, 1
  021b7a8  fsubs 1, 1, 2
  021b7ac  lfs 2, 4(31)
  021b7b0  lfs 3, 8(31)
  021b7b4  stfs 1, 32(31)
  021b7b8  lfs 1, 20(30)
  021b7bc  fsubs 1, 1, 2
  021b7c0  stfs 1, 36(31)
  021b7c4  lfs 1, 24(30)
  021b7c8  fsubs 1, 1, 3
  021b7cc  stfs 1, 40(31)
  021b7d0  lfs 1, 28(30)
  021b7d4  stfs 1, 44(31)
  021b7d8  b 0x21b80c
  021b7dc  lfs 1, 16(30)
  021b7e0  li 4, 32
  021b7e4  vspltisw 2, 0
  021b7e8  li 3, 0
  021b7ec  stfs 1, 0(31)
  021b7f0  lfs 1, 20(30)
  021b7f4  stfs 1, 4(31)
  021b7f8  lfs 1, 24(30)
  021b7fc  stfs 1, 8(31)
  021b800  lfs 1, 28(30)
  021b804  stfs 1, 12(31)
  021b808  stvx 2, 4, 31
  021b80c  ld 0, 144(1)
  021b810  mtlr 0
  021b814  ld 30, 112(1)
  021b818  ld 31, 120(1)
  021b81c  addi 1, 1, 128
  021b820  blr

UpdateMoby_1241:   # 0x21b8c0, 0x13fc bytes
  021b8c0  stdu 1, -608(1)
  021b8c4  mflr 0
  021b8c8  std 0, 624(1)
  021b8cc  stfd 16, 480(1)
  021b8d0  stfd 17, 488(1)
  021b8d4  stfd 18, 496(1)
  021b8d8  stfd 19, 504(1)
  021b8dc  stfd 20, 512(1)
  021b8e0  stfd 21, 520(1)
  021b8e4  stfd 22, 528(1)
  021b8e8  stfd 23, 536(1)
  021b8ec  stfd 24, 544(1)
  021b8f0  stfd 25, 552(1)
  021b8f4  stfd 26, 560(1)
  021b8f8  stfd 27, 568(1)
  021b8fc  stfd 28, 576(1)
  021b900  stfd 29, 584(1)
  021b904  stfd 30, 592(1)
  021b908  stfd 31, 600(1)
  021b90c  std 27, 440(1)
  021b910  std 24, 416(1)
  021b914  lis 4, 34
  021b918  lis 27, 151
  021b91c  std 31, 472(1)
  021b920  addi 24, 4, -18396
  021b924  ori 31, 3, 0
  021b928  std 29, 456(1)
  021b92c  addic 27, 27, -25376
  021b930  li 29, 0
  021b934  std 25, 424(1)
  021b938  lis 4, 51
  021b93c  lfs 31, 0(24)
  021b940  std 30, 464(1)
  021b944  ori 25, 29, 0
  021b948  lwz 30, 120(31)
  021b94c  std 26, 432(1)
  021b950  li 5, 0
  021b954  lwz 26, 5616(27)
  021b958  std 28, 448(1)
  021b95c  std 23, 408(1)
  021b960  fmr 30, 31
  021b964  bl 0x10675c
  021b968  nop
  021b96c  addic 23, 1, 192
  021b970  ori 28, 3, 0
  021b974  ori 3, 31, 0
  021b978  li 4, 0
  021b97c  ori 5, 23, 0
  021b980  bl 0xf1114
  021b984  nop
  021b988  ori 3, 23, 0
  021b98c  lfs 1, 4(24)
  021b990  li 5, 0
  021b994  ori 6, 31, 0
  021b998  bl 0x59e20
  021b99c  nop
  021b9a0  cmpwi 3, 0
  021b9a4  bt 2, 0x21baac
  021b9a8  lis 3, 161
  021b9ac  addic 3, 3, 2368
  021b9b0  lwz 3, 24(3)
  021b9b4  cmpwi 3, 0
  021b9b8  bt 2, 0x21ba44
  021b9bc  lhz 3, 166(3)
  021b9c0  cmpwi 3, 1242
  021b9c4  cmpwi 1, 3, 69
  021b9c8  bt 2, 0x21b9d0
  021b9cc  bf 6, 0x21b9d8
  021b9d0  li 29, 1
  021b9d4  b 0x21baac
  021b9d8  lis 3, 34
  021b9dc  li 7, -1
  021b9e0  addi 3, 3, -18396
  021b9e4  li 6, 1
  021b9e8  addic 4, 30, 16
  021b9ec  addic 5, 1, 192
  021b9f0  li 8, 3
  021b9f4  lfs 2, 16(3)
  021b9f8  li 9, 2
  021b9fc  lfs 3, 20(3)
  021ba00  li 10, 5
  021ba04  lfs 1, 8(3)
  021ba08  fmr 6, 2
  021ba0c  lfs 5, 12(3)
  021ba10  fmr 4, 3
  021ba14  std 7, 144(1)
  021ba18  ori 3, 31, 0
  021ba1c  std 29, 160(1)
  021ba20  fmr 7, 3
  021ba24  std 6, 168(1)
  021ba28  std 7, 176(1)
  021ba2c  std 29, 184(1)
  021ba30  bl 0x10e030
  021ba34  nop
  021ba38  li 3, 4
  021ba3c  stb 3, 32(31)
  021ba40  b 0x21baac
  021ba44  lis 3, 34
  021ba48  li 7, -1
  021ba4c  addi 3, 3, -18396
  021ba50  li 6, 1
  021ba54  addic 4, 30, 16
  021ba58  addic 5, 1, 192
  021ba5c  li 8, 3
  021ba60  lfs 2, 16(3)
  021ba64  lfs 3, 20(3)
  021ba68  li 9, 2
  021ba6c  lfs 1, 8(3)
  021ba70  li 10, 5
  021ba74  lfs 5, 12(3)
  021ba78  fmr 6, 2
  021ba7c  std 7, 144(1)
  021ba80  ori 3, 31, 0
  021ba84  std 29, 160(1)
  021ba88  fmr 4, 3
  021ba8c  std 6, 168(1)
  021ba90  fmr 7, 3
  021ba94  std 7, 176(1)
  021ba98  std 29, 184(1)
  021ba9c  bl 0x10e030
  021baa0  nop
  021baa4  li 3, 4
  021baa8  stb 3, 32(31)
  021baac  lbz 3, 32(31)
  021bab0  cmpwi 3, 4
  021bab4  bf 0, 0x21bc64
  021bab8  lwz 3, 56(30)
  021babc  cmpwi 3, 0
  021bac0  bf 2, 0x21bb0c
  021bac4  li 3, 344
  021bac8  bl 0xefa28
  021bacc  nop
  021bad0  cmpwi 3, 0
  021bad4  stw 3, 56(30)
  021bad8  bt 2, 0x21bb0c
  021badc  li 4, 64
  021bae0  li 5, 1
  021bae4  sth 4, 50(3)
  021bae8  lwz 3, 56(30)
  021baec  stb 4, 48(3)
  021baf0  lwz 3, 56(30)
  021baf4  stb 5, 49(3)
  021baf8  lwz 3, 56(30)
  021bafc  lhz 4, 52(3)
  021bb00  ori 4, 4, 256
  021bb04  sth 4, 52(3)
  021bb08  lwz 3, 56(30)
  021bb0c  cmpwi 3, 0
  021bb10  bt 2, 0x21bb84
  021bb14  addic 5, 1, 208
  021bb18  ori 3, 31, 0
  021bb1c  li 4, 4
  021bb20  bl 0xf1114
  021bb24  nop
  021bb28  addic 24, 1, 256
  021bb2c  ori 3, 31, 0
  021bb30  li 4, 4
  021bb34  ori 5, 24, 0
  021bb38  bl 0xf1038
  021bb3c  nop
  021bb40  lwz 3, 56(30)
  021bb44  ori 4, 24, 0
  021bb48  addic 3, 3, 192
  021bb4c  bl 0x500fa8
  021bb50  nop
  021bb54  lwz 3, 56(30)
  021bb58  lfs 1, 208(1)
  021bb5c  stfs 1, 16(3)
  021bb60  lfs 1, 212(1)
  021bb64  stfs 1, 20(3)
  021bb68  lfs 1, 216(1)
  021bb6c  stfs 1, 24(3)
  021bb70  lfs 1, 220(1)
  021bb74  stfs 1, 28(3)
  021bb78  lwz 3, 56(30)
  021bb7c  bl 0xf31a8
  021bb80  nop
  021bb84  lwz 3, 8324(27)
  021bb88  cmpwi 3, 50
  021bb8c  bf 2, 0x21bc24
  021bb90  cmpwi 26, 0
  021bb94  bt 2, 0x21bc24
  021bb98  lbz 3, 32(26)
  021bb9c  cmpwi 1, 3, 253
  021bba0  cmpwi 3, 254
  021bba4  cror 2, 2, 6
  021bba8  bt 2, 0x21bc24
  021bbac  lhz 3, 166(26)
  021bbb0  cmpwi 3, 1242
  021bbb4  cmpwi 1, 3, 69
  021bbb8  bt 2, 0x21bbc0
  021bbbc  bf 6, 0x21bc24
  021bbc0  lfs 1, 20(26)
  021bbc4  lfs 2, 20(31)
  021bbc8  lis 3, 34
  021bbcc  lfs 3, 16(26)
  021bbd0  lfs 5, 4(30)
  021bbd4  fsubs 4, 1, 2
  021bbd8  addi 3, 3, -18396
  021bbdc  fadds 2, 2, 5
  021bbe0  lfs 6, 16(31)
  021bbe4  fsubs 7, 3, 6
  021bbe8  lfs 5, 24(3)
  021bbec  lfs 8, 0(30)
  021bbf0  fadds 6, 6, 8
  021bbf4  lfs 8, 24(26)
  021bbf8  fmuls 4, 4, 4
  021bbfc  fnmsubs 1, 2, 5, 1
  021bc00  lfs 9, 24(31)
  021bc04  fsubs 8, 8, 9
  021bc08  fnmsubs 2, 6, 5, 3
  021bc0c  fmadds 3, 7, 7, 4
  021bc10  fmuls 1, 1, 1
  021bc14  fmadds 31, 8, 8, 3
  021bc18  fmadds 30, 2, 2, 1
  021bc1c  fsqrts 31, 31
  021bc20  fsqrts 30, 30
  021bc24  cmpwi 29, 0
  021bc28  bf 2, 0x21bc48
  021bc2c  lis 3, 34
  021bc30  addi 3, 3, -18396
  021bc34  lfs 1, 28(3)
  021bc38  fcmpu 0, 31, 1
  021bc3c  fcmpu 1, 30, 1
  021bc40  bt 0, 0x21bc48
  021bc44  bf 4, 0x21bc64
  021bc48  stw 25, 148(31)
  021bc4c  lwz 3, 52(30)
  021bc50  cmpwi 3, 0
  021bc54  bt 2, 0x21bc5c
  021bc58  stw 25, 148(3)
  021bc5c  li 3, 4
  021bc60  stb 3, 32(31)
  021bc64  cmpwi 28, 0
  021bc68  bt 2, 0x21bd38
  021bc6c  lwz 3, 76(30)
  021bc70  lwz 4, 44(28)
  021bc74  srawi 5, 3, 31
  021bc78  lfs 1, 76(30)
  021bc7c  srawi 6, 4, 31
  021bc80  lfs 2, 44(28)
  021bc84  srwi 7, 5, 1
  021bc88  srwi 8, 6, 1
  021bc8c  xor 3, 7, 3
  021bc90  xor 4, 8, 4
  021bc94  subc 3, 3, 5
  021bc98  subc 4, 4, 6
  021bc9c  cmpw 3, 4
  021bca0  bt 1, 0x21bd28
  021bca4  lis 3, 34
  021bca8  li 11, -1
  021bcac  addi 6, 3, -18396
  021bcb0  li 7, 1
  021bcb4  addic 4, 28, 16
  021bcb8  ori 3, 31, 0
  021bcbc  li 5, 0
  021bcc0  lfs 1, 20(6)
  021bcc4  stw 25, 76(30)
  021bcc8  li 8, 10
  021bccc  lfs 3, 28(6)
  021bcd0  li 9, 3
  021bcd4  lfs 4, 8(6)
  021bcd8  li 10, 16
  021bcdc  lfs 5, 12(6)
  021bce0  fmr 2, 1
  021bce4  lfs 6, 16(6)
  021bce8  lfs 7, 32(6)
  021bcec  std 11, 144(1)
  021bcf0  std 7, 160(1)
  021bcf4  std 7, 168(1)
  021bcf8  std 11, 176(1)
  021bcfc  std 25, 184(1)
  021bd00  bl 0x10e030
  021bd04  nop
  021bd08  lwz 28, 52(30)
  021bd0c  cmpwi 28, 0
  021bd10  bt 2, 0x21bd1c
  021bd14  li 3, 3
  021bd18  stb 3, 32(28)
  021bd1c  li 3, 4
  021bd20  stb 3, 32(31)
  021bd24  b 0x21bd30
  021bd28  fsubs 1, 1, 2
  021bd2c  stfs 1, 76(30)
  021bd30  li 3, 255
  021bd34  stb 3, 164(31)
  021bd38  lbz 3, 32(31)
  021bd3c  cmpwi 3, 4
  021bd40  cmpwi 1, 3, 3
  021bd44  cmpwi 6, 3, 2
  021bd48  cmpwi 7, 3, 1
  021bd4c  bt 2, 0x21cb14
  021bd50  bt 6, 0x21ca98
  021bd54  bt 26, 0x21be88
  021bd58  bt 30, 0x21bd90
  021bd5c  cmpwi 3, 0
  021bd60  bf 2, 0x21cb3c
  021bd64  ori 3, 31, 0
  021bd68  stw 25, 52(30)
  021bd6c  ori 4, 30, 0
  021bd70  bl 0x21b6f0
  021bd74  li 3, 1
  021bd78  lis 4, 16256
  021bd7c  stw 25, 48(30)
  021bd80  stb 25, 188(31)
  021bd84  stb 3, 32(31)
  021bd88  stw 4, 68(30)
  021bd8c  b 0x21cb3c
  021bd90  lis 3, 34
  021bd94  lfs 1, 16(30)
  021bd98  lis 4, 114
  021bd9c  addi 3, 3, -18396
  021bda0  lfs 2, 36(3)
  021bda4  lfs 3, 20(30)
  021bda8  fmuls 1, 1, 2
  021bdac  lfs 4, 24(30)
  021bdb0  fmuls 3, 3, 2
  021bdb4  lfs 5, 4(30)
  021bdb8  lfs 6, 0(30)
  021bdbc  lfs 7, 8(30)
  021bdc0  lfs 8, 32(30)
  021bdc4  stfs 1, 16(30)
  021bdc8  stfs 3, 20(30)
  021bdcc  fadds 1, 6, 1
  021bdd0  fadds 3, 5, 3
  021bdd4  lfs 9, 40(3)
  021bdd8  lfs 10, -3048(4)
  021bddc  fmuls 5, 10, 9
  021bde0  ori 3, 31, 0
  021bde4  ori 4, 30, 0
  021bde8  stfs 3, 4(30)
  021bdec  fadds 3, 1, 8
  021bdf0  stfs 1, 0(30)
  021bdf4  fmsubs 1, 4, 2, 5
  021bdf8  fadds 2, 7, 1
  021bdfc  stfs 1, 24(30)
  021be00  stfs 2, 8(30)
  021be04  stfs 3, 16(31)
  021be08  lfs 1, 4(30)
  021be0c  lfs 2, 36(30)
  021be10  fadds 1, 1, 2
  021be14  stfs 1, 20(31)
  021be18  lfs 1, 40(30)
  021be1c  lfs 2, 8(30)
  021be20  fadds 1, 2, 1
  021be24  stfs 1, 24(31)
  021be28  lfs 1, 12(30)
  021be2c  stfs 1, 28(31)
  021be30  bl 0x21b6f0
  021be34  cmpwi 3, 0
  021be38  bt 2, 0x21cb3c
  021be3c  lwz 3, 52(30)
  021be40  lbz 3, 82(3)
  021be44  cmpwi 3, 1
  021be48  bf 2, 0x21cb3c
  021be4c  lis 3, 34
  021be50  lfs 1, 16(30)
  021be54  addi 3, 3, -18396
  021be58  lfs 2, 44(3)
  021be5c  lfs 3, 20(30)
  021be60  li 3, 2
  021be64  lfs 4, 24(30)
  021be68  fmuls 1, 1, 2
  021be6c  fmuls 3, 3, 2
  021be70  fmuls 2, 4, 2
  021be74  stfs 1, 16(30)
  021be78  stfs 3, 20(30)
  021be7c  stfs 2, 24(30)
  021be80  stb 3, 32(31)
  021be84  b 0x21cb3c
  021be88  lis 3, 34
  021be8c  lis 28, 114
  021be90  lfs 1, 72(31)
  021be94  addi 29, 3, -18396
  021be98  lfs 2, 48(29)
  021be9c  lfs 3, -3052(28)
  021bea0  fmuls 2, 3, 2
  021bea4  bl 0x502578
  021bea8  nop
  021beac  stfs 1, 72(31)
  021beb0  lfs 3, 52(29)
  021beb4  lfs 1, 48(30)
  021beb8  lfs 4, -3052(28)
  021bebc  fmuls 2, 4, 3
  021bec0  bl 0x502578
  021bec4  nop
  021bec8  lfs 23, 56(29)
  021becc  lfs 22, 60(29)
  021bed0  fadds 2, 1, 23
  021bed4  lfs 21, 64(29)
  021bed8  lfs 20, 68(29)
  021bedc  lfs 19, 72(29)
  021bee0  lfs 18, 76(29)
  021bee4  lfs 17, 80(29)
  021bee8  lfs 30, 84(29)
  021beec  stfs 1, 48(30)
  021bef0  fsubs 3, 22, 2
  021bef4  fsubs 4, 21, 2
  021bef8  lis 3, 114
  021befc  fsub 5, 2, 3
  021bf00  fsel 2, 5, 3, 2
  021bf04  fsub 3, 4, 2
  021bf08  fsel 2, 3, 4, 2
  021bf0c  fmuls 3, 2, 2
  021bf10  fmuls 4, 3, 2
  021bf14  fmuls 5, 3, 4
  021bf18  fmadds 2, 4, 20, 2
  021bf1c  fmuls 1, 3, 5
  021bf20  fmadds 2, 5, 19, 2
  021bf24  fmuls 3, 3, 1
  021bf28  fmadds 1, 1, 18, 2
  021bf2c  fmadds 1, 3, 17, 1
  021bf30  fmuls 1, 1, 30
  021bf34  stfs 1, 68(31)
  021bf38  lfs 4, 88(29)
  021bf3c  lfs 2, 16(30)
  021bf40  lfs 3, 20(30)
  021bf44  fmuls 2, 2, 4
  021bf48  lfs 5, 24(30)
  021bf4c  fmuls 3, 3, 4
  021bf50  lfs 1, 0(30)
  021bf54  lfs 6, 4(30)
  021bf58  lfs 7, 8(30)
  021bf5c  fadds 1, 1, 2
  021bf60  fadds 6, 6, 3
  021bf64  stfs 2, 16(30)
  021bf68  stfs 3, 20(30)
  021bf6c  lfs 8, 40(29)
  021bf70  lfs 9, -3048(3)
  021bf74  fmuls 8, 9, 8
  021bf78  stfs 1, 0(30)
  021bf7c  stfs 6, 4(30)
  021bf80  fmsubs 4, 5, 4, 8
  021bf84  lfs 5, 32(30)
  021bf88  fadds 6, 7, 4
  021bf8c  stfs 4, 24(30)
  021bf90  stfs 6, 8(30)
  021bf94  lfs 6, 92(29)
  021bf98  fcmpu 0, 31, 6
  021bf9c  cror 6, 1, 2
  021bfa0  bt 6, 0x21c058
  021bfa4  lbz 3, 49(31)
  021bfa8  cmpwi 3, 0
  021bfac  bt 2, 0x21c058
  021bfb0  fsqrts 6, 31
  021bfb4  lfs 7, 20(31)
  021bfb8  lis 3, 34
  021bfbc  lfs 8, 20(26)
  021bfc0  lfs 9, 16(31)
  021bfc4  lfs 10, 16(26)
  021bfc8  addi 3, 3, -18396
  021bfcc  lfs 11, 24(31)
  021bfd0  lfs 12, 24(26)
  021bfd4  lfs 13, 44(3)
  021bfd8  fsubs 7, 7, 8
  021bfdc  fsubs 8, 9, 10
  021bfe0  fsubs 9, 11, 12
  021bfe4  fmr 10, 13
  021bfe8  fmuls 11, 7, 7
  021bfec  fmadds 11, 8, 8, 11
  021bff0  fmadds 11, 9, 9, 11
  021bff4  fdivs 6, 10, 6
  021bff8  fsqrts 10, 11
  021bffc  lfs 11, 20(3)
  021c000  fdivs 6, 6, 10
  021c004  fsub 12, 11, 10
  021c008  fsub 13, 11, 10
  021c00c  fsub 0, 11, 10
  021c010  fsub 31, 10, 11
  021c014  fsub 29, 10, 11
  021c018  fsub 10, 10, 11
  021c01c  fmuls 9, 6, 9
  021c020  fmuls 7, 6, 7
  021c024  fmuls 6, 6, 8
  021c028  fsel 8, 12, 11, 9
  021c02c  fsel 12, 13, 11, 7
  021c030  fsel 11, 0, 11, 6
  021c034  fsel 8, 31, 8, 9
  021c038  fsel 7, 29, 12, 7
  021c03c  fsel 6, 10, 11, 6
  021c040  fadds 4, 4, 8
  021c044  fadds 3, 3, 7
  021c048  fadds 2, 2, 6
  021c04c  stfs 4, 24(30)
  021c050  stfs 3, 20(30)
  021c054  stfs 2, 16(30)
  021c058  fadds 1, 1, 5
  021c05c  stfs 1, 16(31)
  021c060  lfs 1, 4(30)
  021c064  lfs 2, 36(30)
  021c068  fadds 1, 1, 2
  021c06c  stfs 1, 20(31)
  021c070  lfs 1, 8(30)
  021c074  lfs 2, 40(30)
  021c078  fadds 1, 1, 2
  021c07c  stfs 1, 24(31)
  021c080  lfs 1, 12(30)
  021c084  stfs 1, 28(31)
  021c088  lwz 3, 60(30)
  021c08c  cmpwi 3, 0
  021c090  bt 0, 0x21c0d8
  021c094  addic 3, 30, 60
  021c098  bl 0x4fff60
  021c09c  nop
  021c0a0  ori 4, 3, 0
  021c0a4  lbz 3, 112(31)
  021c0a8  cmpwi 4, 0
  021c0ac  lbz 29, 83(31)
  021c0b0  bt 2, 0x21ca28
  021c0b4  lwz 4, 8324(27)
  021c0b8  cmpwi 4, 50
  021c0bc  bf 2, 0x21ca28
  021c0c0  lwz 4, 5616(27)
  021c0c4  lhz 4, 166(4)
  021c0c8  cmpwi 4, 1242
  021c0cc  cmpwi 1, 4, 69
  021c0d0  bt 2, 0x21c0d8
  021c0d4  bf 6, 0x21ca28
  021c0d8  lbz 3, 49(31)
  021c0dc  cmpwi 3, 0
  021c0e0  bt 2, 0x21c9b8
  021c0e4  lwz 3, 5616(27)
  021c0e8  lfs 4, 16(31)
  021c0ec  lfs 5, 20(31)
  021c0f0  lis 4, 34
  021c0f4  lfs 1, 16(3)
  021c0f8  lfs 2, 20(3)
  021c0fc  fsubs 3, 1, 4
  021c100  addi 5, 4, -18396
  021c104  fsubs 6, 2, 5
  021c108  lis 4, 115
  021c10c  addic 4, 4, 22784
  021c110  fabs 8, 3
  021c114  fabs 7, 6
  021c118  stfs 3, 332(1)
  021c11c  stfs 6, 336(1)
  021c120  fsubs 3, 8, 7
  021c124  stfs 3, 340(1)
  021c128  lwz 6, 332(1)
  021c12c  lfs 16, 20(5)
  021c130  lfs 3, 332(1)
  021c134  lwz 5, 336(1)
  021c138  lfs 6, 336(1)
  021c13c  lwz 7, 340(1)
  021c140  rlwinm 5, 5, 3, 29, 29
  021c144  lfs 9, 340(1)
  021c148  fabs 3, 3
  021c14c  rlwimi 5, 7, 2, 30, 30
  021c150  fabs 6, 6
  021c154  fsub 10, 9, 16
  021c158  rlwimi 5, 6, 4, 28, 28
  021c15c  fsub 9, 9, 16
  021c160  ori 6, 4, 0
  021c164  rlwimi 6, 5, 2, 26, 28
  021c168  slwi 5, 5, 2
  021c16c  clrldi 6, 6, 32
  021c170  fsel 7, 10, 3, 7
  021c174  lfsx 31, 4, 5
  021c178  lfs 3, 4(6)
  021c17c  fsel 6, 9, 6, 8
  021c180  fcmpu 0, 7, 16
  021c184  bt 1, 0x21c190
  021c188  fmr 31, 16
  021c18c  b 0x21c2a8
  021c190  fsubs 8, 6, 7
  021c194  fadds 6, 6, 7
  021c198  addic 5, 1, 16
  021c19c  li 9, 2
  021c1a0  addic 7, 5, 376
  021c1a4  addic 6, 5, 360
  021c1a8  mtctr 9
  021c1ac  fdivs 6, 8, 6
  021c1b0  fmuls 7, 6, 6
  021c1b4  stfs 6, 388(1)
  021c1b8  stfs 6, 380(1)
  021c1bc  stfs 6, 384(1)
  021c1c0  stfs 6, 376(1)
  021c1c4  lfs 9, 388(1)
  021c1c8  lfs 10, 380(1)
  021c1cc  lfs 11, 384(1)
  021c1d0  fmuls 8, 7, 7
  021c1d4  fmuls 10, 10, 7
  021c1d8  fmuls 9, 9, 8
  021c1dc  fmuls 6, 8, 8
  021c1e0  fmuls 8, 11, 8
  021c1e4  stfs 10, 380(1)
  021c1e8  fmuls 7, 9, 7
  021c1ec  stfs 8, 384(1)
  021c1f0  stfs 7, 388(1)
  021c1f4  lfs 7, 360(5)
  021c1f8  fmuls 7, 7, 6
  021c1fc  stfs 7, 376(5)
  021c200  lfs 7, 4(6)
  021c204  addic 6, 6, 8
  021c208  fmuls 7, 7, 6
  021c20c  addic 5, 5, 8
  021c210  stfs 7, 4(7)
  021c214  addic 7, 7, 8
  021c218  bdnz 0x21c1f4
  021c21c  li 7, 4
  021c220  ori 5, 1, 0
  021c224  mtctr 7
  021c228  lis 6, 115
  021c22c  addic 7, 5, 376
  021c230  addic 6, 6, 22752
  021c234  ori 8, 7, 0
  021c238  lfs 6, 376(5)
  021c23c  lfs 7, 0(6)
  021c240  fmuls 6, 6, 7
  021c244  lfs 7, 4(6)
  021c248  addic 6, 6, 8
  021c24c  stfs 6, 376(5)
  021c250  lfs 6, 4(7)
  021c254  addic 5, 5, 8
  021c258  fmuls 6, 6, 7
  021c25c  stfs 6, 4(7)
  021c260  addic 7, 7, 8
  021c264  bdnz 0x21c238
  021c268  ori 5, 1, 0
  021c26c  fmr 6, 16
  021c270  mtctr 9
  021c274  lfs 7, 376(5)
  021c278  fadds 6, 6, 7
  021c27c  lfs 7, 4(8)
  021c280  addic 5, 5, 16
  021c284  lfs 8, 8(8)
  021c288  lfs 9, 12(8)
  021c28c  addic 8, 8, 16
  021c290  fadds 6, 6, 7
  021c294  fadds 6, 6, 8
  021c298  fadds 6, 6, 9
  021c29c  bdnz 0x21c274
  021c2a0  fadds 6, 6, 30
  021c2a4  fmadds 31, 6, 31, 3
  021c2a8  fsubs 2, 5, 2
  021c2ac  fsubs 1, 4, 1
  021c2b0  fmuls 2, 2, 2
  021c2b4  fmadds 1, 1, 1, 2
  021c2b8  lfs 2, 24(3)
  021c2bc  lfs 3, 24(31)
  021c2c0  fsubs 2, 2, 3
  021c2c4  fsqrts 1, 1
  021c2c8  stfs 2, 324(1)
  021c2cc  fabs 4, 2
  021c2d0  fabs 3, 1
  021c2d4  stfs 1, 320(1)
  021c2d8  lwz 3, 324(1)
  021c2dc  rlwinm 3, 3, 3, 29, 29
  021c2e0  fsubs 1, 3, 4
  021c2e4  stfs 1, 328(1)
  021c2e8  lwz 5, 320(1)
  021c2ec  lfs 1, 320(1)
  021c2f0  lfs 2, 324(1)
  021c2f4  lwz 6, 328(1)
  021c2f8  lfs 5, 328(1)
  021c2fc  fabs 1, 1
  021c300  rlwimi 3, 6, 2, 30, 30
  021c304  fsub 6, 5, 16
  021c308  fabs 2, 2
  021c30c  fsub 5, 5, 16
  021c310  rlwimi 3, 5, 4, 28, 28
  021c314  ori 5, 4, 0
  021c318  rlwimi 5, 3, 2, 26, 28
  021c31c  slwi 3, 3, 2
  021c320  clrldi 5, 5, 32
  021c324  fsel 4, 6, 1, 4
  021c328  lfsx 1, 4, 3
  021c32c  fsel 3, 5, 2, 3
  021c330  lfs 2, 4(5)
  021c334  fcmpu 0, 4, 16
  021c338  bt 1, 0x21c344
  021c33c  fmr 30, 16
  021c340  b 0x21c45c
  021c344  fsubs 5, 3, 4
  021c348  fadds 3, 3, 4
  021c34c  addic 3, 1, 16
  021c350  li 7, 2
  021c354  addic 4, 3, 328
  021c358  addic 5, 3, 344
  021c35c  mtctr 7
  021c360  fdivs 3, 5, 3
  021c364  fmuls 4, 3, 3
  021c368  stfs 3, 356(1)
  021c36c  stfs 3, 348(1)
  021c370  stfs 3, 352(1)
  021c374  stfs 3, 344(1)
  021c378  lfs 6, 356(1)
  021c37c  lfs 7, 348(1)
  021c380  lfs 8, 352(1)
  021c384  fmuls 5, 4, 4
  021c388  fmuls 7, 7, 4
  021c38c  fmuls 6, 6, 5
  021c390  fmuls 3, 5, 5
  021c394  fmuls 5, 8, 5
  021c398  stfs 7, 348(1)
  021c39c  fmuls 4, 6, 4
  021c3a0  stfs 5, 352(1)
  021c3a4  stfs 4, 356(1)
  021c3a8  lfs 4, 328(3)
  021c3ac  fmuls 4, 4, 3
  021c3b0  stfs 4, 344(3)
  021c3b4  lfs 4, 4(4)
  021c3b8  addic 3, 3, 8
  021c3bc  addic 4, 4, 8
  021c3c0  fmuls 4, 4, 3
  021c3c4  stfs 4, 4(5)
  021c3c8  addic 5, 5, 8
  021c3cc  bdnz 0x21c3a8
  021c3d0  li 5, 4
  021c3d4  ori 3, 1, 0
  021c3d8  mtctr 5
  021c3dc  lis 4, 115
  021c3e0  addic 5, 3, 344
  021c3e4  addic 4, 4, 22752
  021c3e8  ori 6, 5, 0
  021c3ec  lfs 3, 344(3)
  021c3f0  lfs 4, 0(4)
  021c3f4  fmuls 3, 3, 4
  021c3f8  lfs 4, 4(4)
  021c3fc  addic 4, 4, 8
  021c400  stfs 3, 344(3)
  021c404  lfs 3, 4(5)
  021c408  addic 3, 3, 8
  021c40c  fmuls 3, 3, 4
  021c410  stfs 3, 4(5)
  021c414  addic 5, 5, 8
  021c418  bdnz 0x21c3ec
  021c41c  fmr 3, 16
  021c420  ori 3, 1, 0
  021c424  mtctr 7
  021c428  lfs 4, 344(3)
  021c42c  fadds 3, 3, 4
  021c430  addic 3, 3, 16
  021c434  lfs 4, 4(6)
  021c438  lfs 5, 8(6)
  021c43c  lfs 6, 12(6)
  021c440  addic 6, 6, 16
  021c444  fadds 3, 3, 4
  021c448  fadds 3, 3, 5
  021c44c  fadds 3, 3, 6
  021c450  bdnz 0x21c428
  021c454  fadds 30, 3, 30
  021c458  fmadds 30, 30, 1, 2
  021c45c  fmr 29, 31
  021c460  lfs 1, 72(31)
  021c464  fmr 2, 29
  021c468  bl 0x5026a0
  021c46c  nop
  021c470  lfs 3, 68(31)
  021c474  fmr 31, 1
  021c478  fmr 2, 30
  021c47c  fmr 1, 3
  021c480  bl 0x5026a0
  021c484  nop
  021c488  lis 3, 34
  021c48c  lis 4, 114
  021c490  fmr 1, 29
  021c494  addi 3, 3, -18396
  021c498  lis 6, 114
  021c49c  addic 5, 30, 64
  021c4a0  lfs 3, 96(3)
  021c4a4  lfs 4, 24(3)
  021c4a8  lfs 6, 100(3)
  021c4ac  lfs 5, -3060(4)
  021c4b0  ori 3, 31, 0
  021c4b4  lfs 7, -3064(6)
  021c4b8  fmuls 2, 5, 3
  021c4bc  fmuls 3, 5, 4
  021c4c0  fmuls 4, 7, 6
  021c4c4  bl 0xff2e8
  021c4c8  nop
  021c4cc  lbz 3, 188(31)
  021c4d0  cmpwi 3, 0
  021c4d4  bt 1, 0x21c4e4
  021c4d8  cmpwi 3, -1
  021c4dc  bf 1, 0x21ca68
  021c4e0  b 0x21c4f8
  021c4e4  cmpwi 3, 1
  021c4e8  bf 1, 0x21c548
  021c4ec  cmpwi 3, 2
  021c4f0  bf 1, 0x21c910
  021c4f4  b 0x21ca68
  021c4f8  lis 3, 34
  021c4fc  addi 3, 3, -18396
  021c500  lfs 1, 104(3)
  021c504  fcmpu 0, 31, 1
  021c508  cror 6, 1, 2
  021c50c  bt 6, 0x21ca68
  021c510  lbz 3, 83(31)
  021c514  cmpwi 3, 2
  021c518  bt 2, 0x21c534
  021c51c  ori 3, 31, 0
  021c520  li 4, 2
  021c524  li 5, 0
  021c528  li 6, 6
  021c52c  bl 0xfddc0
  021c530  nop
  021c534  lis 3, 16448
  021c538  li 4, 1
  021c53c  stw 3, 88(31)
  021c540  stb 4, 188(31)
  021c544  b 0x21ca68
  021c548  lis 3, 34
  021c54c  lwz 6, 5616(27)
  021c550  addic 28, 1, 240
  021c554  addi 29, 3, -18396
  021c558  lwz 3, 56(30)
  021c55c  li 4, 0
  021c560  ori 5, 28, 0
  021c564  lfs 1, 16(29)
  021c568  lwz 26, 120(6)
  021c56c  fmr 31, 1
  021c570  bl 0xf1114
  021c574  nop
  021c578  lfs 1, 24(26)
  021c57c  lfs 2, 16(26)
  021c580  lfs 4, 72(30)
  021c584  fmuls 3, 1, 2
  021c588  lfs 5, 20(26)
  021c58c  fsubs 6, 22, 4
  021c590  fmuls 1, 5, 1
  021c594  fmuls 7, 5, 5
  021c598  fsubs 8, 21, 4
  021c59c  fadds 12, 4, 23
  021c5a0  fmuls 9, 3, 3
  021c5a4  fsub 10, 4, 6
  021c5a8  fneg 11, 1
  021c5ac  fneg 7, 7
  021c5b0  fsubs 0, 21, 12
  021c5b4  fneg 9, 9
  021c5b8  fsel 4, 10, 6, 4
  021c5bc  fsubs 10, 22, 12
  021c5c0  fmsubs 6, 2, 2, 7
  021c5c4  fneg 7, 7
  021c5c8  fneg 9, 9
  021c5cc  fsub 13, 8, 4
  021c5d0  fsub 30, 12, 10
  021c5d4  fmadds 7, 2, 2, 7
  021c5d8  fmadds 9, 11, 11, 9
  021c5dc  fsel 4, 13, 8, 4
  021c5e0  fsel 10, 30, 10, 12
  021c5e4  lfs 8, 68(30)
  021c5e8  lfs 12, 108(29)
  021c5ec  fsqrts 7, 7
  021c5f0  addic 24, 1, 224
  021c5f4  ori 3, 24, 0
  021c5f8  fmadds 9, 6, 6, 9
  021c5fc  fmuls 11, 4, 4
  021c600  fsub 13, 0, 10
  021c604  fmuls 8, 8, 12
  021c608  lwz 4, 5616(27)
  021c60c  fsqrts 9, 9
  021c610  fmuls 30, 11, 4
  021c614  fsel 10, 13, 0, 10
  021c618  fsub 29, 16, 7
  021c61c  fsub 28, 16, 7
  021c620  fsub 27, 7, 16
  021c624  fmuls 13, 11, 30
  021c628  fmadds 4, 30, 20, 4
  021c62c  fmuls 12, 10, 10
  021c630  fmuls 0, 11, 13
  021c634  fmadds 4, 13, 19, 4
  021c638  fmuls 13, 12, 10
  021c63c  fmuls 11, 11, 0
  021c640  fmadds 4, 0, 18, 4
  021c644  fmuls 0, 12, 13
  021c648  fmadds 10, 13, 20, 10
  021c64c  fmadds 4, 11, 17, 4
  021c650  fmuls 11, 12, 0
  021c654  fmadds 10, 0, 19, 10
  021c658  fsub 13, 16, 9
  021c65c  fsub 30, 16, 9
  021c660  fsub 0, 9, 16
  021c664  fmuls 4, 8, 4
  021c668  fmuls 12, 12, 11
  021c66c  fmadds 10, 11, 18, 10
  021c670  fsub 11, 16, 9
  021c674  fdivs 4, 4, 9
  021c678  fmadds 10, 12, 17, 10
  021c67c  fsub 12, 9, 16
  021c680  fsub 9, 9, 16
  021c684  fmuls 8, 8, 10
  021c688  lfs 10, 16(4)
  021c68c  fdivs 8, 8, 7
  021c690  fmuls 3, 3, 4
  021c694  fmuls 1, 1, 4
  021c698  fmuls 4, 6, 4
  021c69c  fneg 3, 3
  021c6a0  fneg 1, 1
  021c6a4  fsel 6, 30, 16, 4
  021c6a8  fsel 11, 11, 16, 3
  021c6ac  fsel 13, 13, 16, 1
  021c6b0  fsel 4, 9, 6, 4
  021c6b4  fsub 6, 7, 16
  021c6b8  fsel 3, 12, 11, 3
  021c6bc  fsel 1, 0, 13, 1
  021c6c0  fmuls 5, 5, 8
  021c6c4  fmuls 2, 2, 8
  021c6c8  fadds 3, 10, 3
  021c6cc  fneg 5, 5
  021c6d0  fsel 7, 29, 16, 2
  021c6d4  stfs 3, 224(1)
  021c6d8  lfs 8, 20(4)
  021c6dc  fadds 1, 8, 1
  021c6e0  fsel 8, 28, 16, 5
  021c6e4  fsel 2, 27, 7, 2
  021c6e8  fsel 5, 6, 8, 5
  021c6ec  stfs 1, 228(1)
  021c6f0  lfs 6, 24(4)
  021c6f4  fadds 1, 1, 2
  021c6f8  fadds 4, 6, 4
  021c6fc  fadds 2, 3, 5
  021c700  stfs 4, 232(1)
  021c704  lfs 3, 28(4)
  021c708  stfs 1, 228(1)
  021c70c  stfs 3, 236(1)
  021c710  stfs 4, 232(1)
  021c714  stfs 2, 224(1)
  021c718  lfs 1, 112(29)
  021c71c  bl 0x110950
  021c720  nop
  021c724  lfs 1, 244(1)
  021c728  lfs 2, 132(27)
  021c72c  lfs 3, 240(1)
  021c730  fsubs 2, 1, 2
  021c734  lfs 4, 128(27)
  021c738  fsubs 4, 3, 4
  021c73c  lis 3, 114
  021c740  fmuls 2, 2, 2
  021c744  fmadds 2, 4, 4, 2
  021c748  lfs 4, 116(29)
  021c74c  lfs 5, 20(26)
  021c750  lfs 6, 100(26)
  021c754  fmuls 10, 5, 5
  021c758  lfs 7, -3052(3)
  021c75c  lfs 8, 16(26)
  021c760  fmadds 11, 7, 4, 6
  021c764  lfs 9, 24(26)
  021c768  fsqrts 2, 2
  021c76c  lfs 12, 224(1)
  021c770  ori 3, 31, 0
  021c774  lfs 13, 228(1)
  021c778  ori 4, 24, 0
  021c77c  lfs 0, 232(1)
  021c780  ori 5, 28, 0
  021c784  lfs 30, 248(1)
  021c788  fmadds 10, 8, 8, 10
  021c78c  fmadds 10, 9, 9, 10
  021c790  fsqrts 10, 10
  021c794  fdivs 11, 2, 11
  021c798  fmuls 2, 7, 4
  021c79c  fsub 4, 16, 10
  021c7a0  fsub 7, 16, 10
  021c7a4  fsub 29, 16, 10
  021c7a8  fsub 28, 10, 16
  021c7ac  fsub 27, 10, 16
  021c7b0  fsub 26, 10, 16
  021c7b4  fmuls 6, 6, 11
  021c7b8  fdivs 6, 6, 10
  021c7bc  fmuls 9, 9, 6
  021c7c0  fmuls 5, 5, 6
  021c7c4  fmuls 6, 8, 6
  021c7c8  fsel 4, 4, 16, 9
  021c7cc  fsel 7, 7, 16, 5
  021c7d0  fsel 8, 29, 16, 6
  021c7d4  fsel 4, 28, 4, 9
  021c7d8  fsel 5, 27, 7, 5
  021c7dc  fsel 6, 26, 8, 6
  021c7e0  fadds 4, 0, 4
  021c7e4  fadds 5, 13, 5
  021c7e8  fadds 6, 12, 6
  021c7ec  fsubs 4, 4, 30
  021c7f0  fsubs 1, 5, 1
  021c7f4  fsubs 3, 6, 3
  021c7f8  stfs 4, 232(1)
  021c7fc  stfs 1, 228(1)
  021c800  stfs 3, 224(1)
  021c804  lfs 1, 120(29)
  021c808  lfs 3, 124(29)
  021c80c  bl 0x187e00
  021c810  nop
  021c814  lis 3, 114
  021c818  lfs 1, 128(29)
  021c81c  lfs 2, 68(30)
  021c820  lis 5, 16329
  021c824  ori 5, 5, 4059
  021c828  lfs 3, -3064(3)
  021c82c  lwz 3, 72(30)
  021c830  fmadds 1, 3, 1, 31
  021c834  srawi 4, 3, 31
  021c838  lfs 22, 72(30)
  021c83c  lwz 27, 60(30)
  021c840  srwi 6, 4, 1
  021c844  xor 3, 6, 3
  021c848  subc 3, 3, 4
  021c84c  cmpw 3, 5
  021c850  fmuls 1, 2, 1
  021c854  stfs 1, 68(30)
  021c858  lfs 23, 132(29)
  021c85c  bf 1, 0x21c870
  021c860  lis 3, 114
  021c864  lfs 1, -3052(3)
  021c868  fnmsubs 23, 1, 23, 22
  021c86c  b 0x21c87c
  021c870  lis 3, 114
  021c874  lfs 1, -3052(3)
  021c878  fmadds 23, 1, 23, 22
  021c87c  addic 3, 27, -1
  021c880  stfs 23, 72(30)
  021c884  cmpwi 3, -100
  021c888  stw 3, 60(30)
  021c88c  bf 0, 0x21c904
  021c890  lbz 3, 83(31)
  021c894  cmpwi 3, 1
  021c898  bt 2, 0x21c8b4
  021c89c  ori 3, 31, 0
  021c8a0  li 4, 1
  021c8a4  li 5, 0
  021c8a8  li 6, 6
  021c8ac  bl 0xfddc0
  021c8b0  nop
  021c8b4  lis 3, 34
  021c8b8  vspltisw 2, -1
  021c8bc  li 5, 136
  021c8c0  addi 3, 3, -18396
  021c8c4  lis 4, 114
  021c8c8  li 6, -3056
  021c8cc  vslw 2, 2, 2
  021c8d0  <unknown>
  021c8d4  li 3, 60
  021c8d8  vspltw 3, 3, 0
  021c8dc  <unknown>
  021c8e0  lis 4, 16256
  021c8e4  vmaddfp 2, 4, 3, 2
  021c8e8  vctsxs 2, 2, 0
  021c8ec  vspltw 2, 2, 0
  021c8f0  stvewx 2, 3, 30
  021c8f4  stw 4, 88(31)
  021c8f8  stw 4, 68(30)
  021c8fc  stb 25, 188(31)
  021c900  b 0x21ca68
  021c904  li 3, 2
  021c908  stb 3, 188(31)
  021c90c  b 0x21ca68
  021c910  lis 3, 34
  021c914  addi 3, 3, -18396
  021c918  lfs 1, 104(3)
  021c91c  fcmpu 0, 31, 1
  021c920  cror 6, 0, 2
  021c924  bt 6, 0x21c99c
  021c928  lbz 3, 83(31)
  021c92c  cmpwi 3, 1
  021c930  bt 2, 0x21c94c
  021c934  ori 3, 31, 0
  021c938  li 4, 1
  021c93c  li 5, 0
  021c940  li 6, 6
  021c944  bl 0xfddc0
  021c948  nop
  021c94c  lis 3, 34
  021c950  vspltisw 2, -1
  021c954  li 5, 140
  021c958  addi 3, 3, -18396
  021c95c  lis 4, 114
  021c960  li 6, -3056
  021c964  vslw 2, 2, 2
  021c968  <unknown>
  021c96c  li 3, 60
  021c970  vspltw 3, 3, 0
  021c974  <unknown>
  021c978  lis 4, 16256
  021c97c  vmaddfp 2, 4, 3, 2
  021c980  vctsxs 2, 2, 0
  021c984  vspltw 2, 2, 0
  021c988  stvewx 2, 3, 30
  021c98c  stw 4, 88(31)
  021c990  stw 4, 68(30)
  021c994  stb 25, 188(31)
  021c998  b 0x21ca68
  021c99c  lbz 3, 112(31)
  021c9a0  rlwinm 3, 3, 0, 30, 30
  021c9a4  cmpwi 3, 0
  021c9a8  bt 2, 0x21ca68
  021c9ac  li 3, 1
  021c9b0  stb 3, 188(31)
  021c9b4  b 0x21ca68
  021c9b8  lbz 3, 83(31)
  021c9bc  cmpwi 3, 1
  021c9c0  bt 2, 0x21c9dc
  021c9c4  ori 3, 31, 0
  021c9c8  li 4, 1
  021c9cc  li 5, 0
  021c9d0  li 6, 6
  021c9d4  bl 0xfddc0
  021c9d8  nop
  021c9dc  lis 3, 34
  021c9e0  vspltisw 2, -1
  021c9e4  li 5, 140
  021c9e8  addi 3, 3, -18396
  021c9ec  lis 4, 114
  021c9f0  li 6, -3056
  021c9f4  vslw 2, 2, 2
  021c9f8  <unknown>
  021c9fc  li 3, 60
  021ca00  vspltw 3, 3, 0
  021ca04  <unknown>
  021ca08  lis 4, 16256
  021ca0c  vmaddfp 2, 4, 3, 2
  021ca10  vctsxs 2, 2, 0
  021ca14  vspltw 2, 2, 0
  021ca18  stvewx 2, 3, 30
  021ca1c  stw 4, 88(31)
  021ca20  stb 25, 188(31)
  021ca24  b 0x21ca68
  021ca28  rlwinm 3, 3, 0, 30, 30
  021ca2c  cmpwi 3, 0
  021ca30  bt 2, 0x21ca68
  021ca34  bl 0x5c8318
  021ca38  nop
  021ca3c  clrlwi 3, 3, 31
  021ca40  cmpw 29, 3
  021ca44  bt 2, 0x21ca68
  021ca48  bl 0x5c8318
  021ca4c  nop
  021ca50  clrlwi 4, 3, 31
  021ca54  ori 3, 31, 0
  021ca58  li 5, 0
  021ca5c  li 6, 6
  021ca60  bl 0xfddc0
  021ca64  nop
  021ca68  ori 3, 31, 0
  021ca6c  ori 4, 30, 0
  021ca70  bl 0x21b6f0
  021ca74  cmpwi 3, 0
  021ca78  bt 2, 0x21cb3c
  021ca7c  lwz 3, 52(30)
  021ca80  lbz 3, 32(3)
  021ca84  cmpwi 3, 2
  021ca88  bf 2, 0x21cb3c
  021ca8c  li 3, 2
  021ca90  stb 3, 32(31)
  021ca94  b 0x21cb3c
  021ca98  lbz 3, 83(31)
  021ca9c  cmpwi 1, 3, 3
  021caa0  bt 6, 0x21cac0
  021caa4  bt 6, 0x21cac0
  021caa8  ori 3, 31, 0
  021caac  li 4, 3
  021cab0  li 5, 0
  021cab4  li 6, 6
  021cab8  bl 0xfddc0
  021cabc  nop
  021cac0  lis 3, 34
  021cac4  lfs 1, 24(30)
  021cac8  lis 4, 114
  021cacc  addi 3, 3, -18396
  021cad0  lfs 2, 40(3)
  021cad4  lfs 3, -3048(4)
  021cad8  lfs 4, 16(30)
  021cadc  fnmsubs 1, 3, 2, 1
  021cae0  stfs 1, 24(30)
  021cae4  lfs 1, 16(31)
  021cae8  lfs 2, 20(31)
  021caec  fadds 1, 1, 4
  021caf0  lfs 3, 24(31)
  021caf4  stfs 1, 16(31)
  021caf8  lfs 1, 20(30)
  021cafc  fadds 1, 2, 1
  021cb00  stfs 1, 20(31)
  021cb04  lfs 1, 24(30)
  021cb08  fadds 1, 3, 1
  021cb0c  stfs 1, 24(31)
  021cb10  b 0x21cb3c
  021cb14  lwz 3, 56(30)
  021cb18  cmpwi 3, 0
  021cb1c  bt 2, 0x21cb2c
  021cb20  bl 0xefb38
  021cb24  nop
  021cb28  stw 25, 56(30)
  021cb2c  ori 3, 31, 0
  021cb30  bl 0xefb38
  021cb34  nop
  021cb38  b 0x21cc48
  021cb3c  lis 4, 34
  021cb40  lwz 5, 24(31)
  021cb44  lfs 1, 24(31)
  021cb48  lis 3, 16800
  021cb4c  addi 4, 4, -18396
  021cb50  srawi 6, 5, 31
  021cb54  lfs 2, 144(4)
  021cb58  srwi 4, 6, 1
  021cb5c  xor 4, 4, 5
  021cb60  subc 4, 4, 6
  021cb64  cmpw 1, 4, 3
  021cb68  bf 4, 0x21cb7c
  021cb6c  ori 3, 31, 0
  021cb70  bl 0xefb38
  021cb74  nop
  021cb78  b 0x21cc48
  021cb7c  lwz 4, 16(31)
  021cb80  lfs 3, 16(31)
  021cb84  srawi 5, 4, 31
  021cb88  srwi 6, 5, 1
  021cb8c  xor 4, 6, 4
  021cb90  subc 4, 4, 5
  021cb94  cmpw 4, 3
  021cb98  bf 0, 0x21cba4
  021cb9c  fmr 3, 2
  021cba0  stw 3, 16(31)
  021cba4  fmr 4, 3
  021cba8  lis 4, 34
  021cbac  addi 4, 4, -18396
  021cbb0  lfs 3, 148(4)
  021cbb4  fcmpu 0, 4, 3
  021cbb8  cror 2, 0, 2
  021cbbc  bt 2, 0x21cbcc
  021cbc0  lis 4, 17530
  021cbc4  ori 4, 4, 49152
  021cbc8  stw 4, 16(31)
  021cbcc  lwz 4, 20(31)
  021cbd0  lfs 4, 20(31)
  021cbd4  srawi 5, 4, 31
  021cbd8  srwi 6, 5, 1
  021cbdc  xor 4, 6, 4
  021cbe0  subc 4, 4, 5
  021cbe4  cmpw 4, 3
  021cbe8  bf 0, 0x21cbf4
  021cbec  fmr 4, 2
  021cbf0  stw 3, 20(31)
  021cbf4  fcmpu 0, 4, 3
  021cbf8  cror 2, 0, 2
  021cbfc  bt 2, 0x21cc0c
  021cc00  lis 4, 17530
  021cc04  ori 4, 4, 49152
  021cc08  stw 4, 20(31)
  021cc0c  bf 4, 0x21cc18
  021cc10  fmr 1, 2
  021cc14  stw 3, 24(31)
  021cc18  fcmpu 0, 1, 3
  021cc1c  cror 6, 0, 2
  021cc20  bt 6, 0x21cc30
  021cc24  lis 3, 17530
  021cc28  ori 3, 3, 49152
  021cc2c  stw 3, 24(31)
  021cc30  lis 3, 34
  021cc34  addi 4, 3, -18396
  021cc38  ori 3, 31, 0
  021cc3c  lfs 1, 24(4)
  021cc40  bl 0x106150
  021cc44  nop
  021cc48  ld 0, 624(1)
  021cc4c  mtlr 0
  021cc50  lfd 16, 480(1)
  021cc54  lfd 17, 488(1)
  021cc58  lfd 18, 496(1)
  021cc5c  lfd 19, 504(1)
  021cc60  lfd 20, 512(1)
  021cc64  lfd 21, 520(1)
  021cc68  lfd 22, 528(1)
  021cc6c  lfd 23, 536(1)
  021cc70  lfd 24, 544(1)
  021cc74  lfd 25, 552(1)
  021cc78  lfd 26, 560(1)
  021cc7c  lfd 27, 568(1)
  021cc80  lfd 28, 576(1)
  021cc84  lfd 29, 584(1)
  021cc88  lfd 30, 592(1)
  021cc8c  lfd 31, 600(1)
  021cc90  ld 23, 408(1)
  021cc94  ld 24, 416(1)
  021cc98  ld 25, 424(1)
  021cc9c  ld 26, 432(1)
  021cca0  ld 27, 440(1)
  021cca4  ld 28, 448(1)
  021cca8  ld 29, 456(1)
  021ccac  ld 30, 464(1)
  021ccb0  ld 31, 472(1)
  021ccb4  addi 1, 1, 608
  021ccb8  blr
