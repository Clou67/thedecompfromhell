# game/update/camera15.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_CAMERA15:   # 0x3b93c, 0x14 bytes
  003b93c  lis 3, 114
  003b940  lis 4, 1
  003b944  addic 3, 3, -10020
  003b948  stw 4, 72(3)
  003b94c  blr

Cam15_0003b950:   # 0x3b950, 0x170 bytes
  003b950  lis 4, 149
  003b954  lhz 3, 132(3)
  003b958  extsh 3, 3
  003b95c  sldi 3, 3, 5
  003b960  lwz 4, 16468(4)
  003b964  addc 3, 4, 3
  003b968  clrldi 3, 3, 32
  003b96c  lwz 3, 28(3)
  003b970  lhz 4, 40(3)
  003b974  cmpwi 4, 0
  003b978  bf 2, 0x3babc
  003b97c  li 4, 1
  003b980  lwz 6, 32(3)
  003b984  cmpwi 6, 0
  003b988  sth 4, 40(3)
  003b98c  bt 0, 0x3ba20
  003b990  lis 4, 165
  003b994  slwi 5, 6, 2
  003b998  addic 6, 4, 7136
  003b99c  extsw 4, 5
  003b9a0  li 5, 0
  003b9a4  lwzx 6, 6, 4
  003b9a8  lwz 4, 0(6)
  003b9ac  cmpwi 4, 0
  003b9b0  bf 1, 0x3ba20
  003b9b4  ori 8, 6, 0
  003b9b8  addic 7, 8, 16
  003b9bc  addic 5, 5, 1
  003b9c0  divw 9, 5, 4
  003b9c4  mullw 4, 9, 4
  003b9c8  lfs 1, 20(8)
  003b9cc  subc 4, 5, 4
  003b9d0  lfs 2, 16(8)
  003b9d4  sldi 4, 4, 4
  003b9d8  lfs 3, 24(8)
  003b9dc  addc 4, 4, 7
  003b9e0  clrldi 4, 4, 32
  003b9e4  lfs 4, 4(4)
  003b9e8  lfs 5, 0(4)
  003b9ec  fsubs 1, 1, 4
  003b9f0  fsubs 2, 2, 5
  003b9f4  lfs 4, 8(4)
  003b9f8  fsubs 3, 3, 4
  003b9fc  fmuls 1, 1, 1
  003ba00  fmadds 1, 2, 2, 1
  003ba04  fmadds 1, 3, 3, 1
  003ba08  fsqrts 1, 1
  003ba0c  stfs 1, 28(8)
  003ba10  lwz 4, 0(6)
  003ba14  addic 8, 8, 16
  003ba18  cmpw 5, 4
  003ba1c  bt 0, 0x3b9bc
  003ba20  lwz 3, 36(3)
  003ba24  cmpwi 3, 0
  003ba28  bt 0, 0x3babc
  003ba2c  lis 4, 165
  003ba30  slwi 3, 3, 2
  003ba34  addic 5, 4, 7136
  003ba38  extsw 3, 3
  003ba3c  li 4, 0
  003ba40  lwzx 5, 5, 3
  003ba44  lwz 3, 0(5)
  003ba48  cmpwi 3, 0
  003ba4c  bf 1, 0x3babc
  003ba50  ori 7, 5, 0
  003ba54  addic 6, 7, 16
  003ba58  addic 4, 4, 1
  003ba5c  lfs 1, 20(7)
  003ba60  divw 8, 4, 3
  003ba64  mullw 3, 8, 3
  003ba68  lfs 2, 16(7)
  003ba6c  subc 3, 4, 3
  003ba70  sldi 3, 3, 4
  003ba74  addc 3, 3, 6
  003ba78  clrldi 3, 3, 32
  003ba7c  lfs 3, 4(3)
  003ba80  lfs 4, 0(3)
  003ba84  fsubs 1, 1, 3
  003ba88  fsubs 2, 2, 4
  003ba8c  lfs 3, 24(7)
  003ba90  lfs 4, 8(3)
  003ba94  fsubs 3, 3, 4
  003ba98  fmuls 1, 1, 1
  003ba9c  fmadds 1, 2, 2, 1
  003baa0  fmadds 1, 3, 3, 1
  003baa4  fsqrts 1, 1
  003baa8  stfs 1, 28(7)
  003baac  lwz 3, 0(5)
  003bab0  addic 7, 7, 16
  003bab4  cmpw 4, 3
  003bab8  bt 0, 0x3ba58
  003babc  blr

Cam15_0003bad8:   # 0x3bad8, 0x2bc bytes
  003bad8  stdu 1, -208(1)
  003badc  mflr 0
  003bae0  std 0, 224(1)
  003bae4  stfd 31, 200(1)
  003bae8  std 31, 192(1)
  003baec  ori 31, 3, 0
  003baf0  lis 3, 149
  003baf4  lis 4, 4
  003baf8  lis 6, 165
  003bafc  addi 4, 4, -17728
  003bb00  lhz 5, 132(31)
  003bb04  lis 7, 114
  003bb08  std 30, 184(1)
  003bb0c  lwz 3, 16468(3)
  003bb10  lis 30, 151
  003bb14  extsh 5, 5
  003bb18  addic 30, 30, -25376
  003bb1c  std 28, 168(1)
  003bb20  sldi 5, 5, 5
  003bb24  addic 28, 1, 144
  003bb28  addc 3, 3, 5
  003bb2c  li 5, 0
  003bb30  std 27, 160(1)
  003bb34  clrldi 3, 3, 32
  003bb38  addic 27, 1, 148
  003bb3c  std 29, 176(1)
  003bb40  li 9, 0
  003bb44  lwz 29, 28(3)
  003bb48  stw 5, 144(1)
  003bb4c  addic 3, 6, 7136
  003bb50  lfs 31, 0(4)
  003bb54  stw 5, 148(1)
  003bb58  fmr 3, 31
  003bb5c  lwz 5, 32(29)
  003bb60  lfs 2, -9912(7)
  003bb64  slwi 5, 5, 2
  003bb68  lfs 1, 4(4)
  003bb6c  ori 7, 27, 0
  003bb70  extsw 6, 5
  003bb74  addic 5, 1, 128
  003bb78  std 26, 152(1)
  003bb7c  addic 4, 30, 128
  003bb80  lwzx 26, 3, 6
  003bb84  ori 6, 28, 0
  003bb88  ori 3, 26, 0
  003bb8c  bl 0x10d7a0
  003bb90  nop
  003bb94  lfs 1, 52(29)
  003bb98  addic 4, 31, 48
  003bb9c  ori 3, 26, 0
  003bba0  ori 5, 28, 0
  003bba4  ori 6, 27, 0
  003bba8  li 8, 1
  003bbac  bl 0x10ce18
  003bbb0  nop
  003bbb4  lfs 1, 132(30)
  003bbb8  lfs 3, 128(30)
  003bbbc  lfs 2, 52(31)
  003bbc0  stfs 3, 128(1)
  003bbc4  fsubs 2, 1, 2
  003bbc8  lfs 4, 136(30)
  003bbcc  stfs 1, 132(1)
  003bbd0  lfs 5, 140(30)
  003bbd4  stfs 4, 136(1)
  003bbd8  stfs 5, 140(1)
  003bbdc  lfs 1, 24(29)
  003bbe0  lfs 6, 48(31)
  003bbe4  fadds 7, 4, 1
  003bbe8  fsubs 3, 3, 6
  003bbec  lfs 1, 56(31)
  003bbf0  fmuls 4, 2, 2
  003bbf4  fsubs 1, 7, 1
  003bbf8  fmadds 4, 3, 3, 4
  003bbfc  stfs 7, 136(1)
  003bc00  fmadds 4, 1, 1, 4
  003bc04  fsqrts 6, 4
  003bc08  fcmpu 0, 6, 31
  003bc0c  bf 2, 0x3bc34
  003bc10  stfs 3, 0(31)
  003bc14  fmr 3, 31
  003bc18  stfs 5, 12(31)
  003bc1c  stfs 2, 4(31)
  003bc20  stfs 1, 8(31)
  003bc24  lfs 4, 12(31)
  003bc28  fmr 2, 3
  003bc2c  fmr 1, 2
  003bc30  b 0x3bc90
  003bc34  frsqrte 6, 4
  003bc38  lis 3, 4
  003bc3c  fmr 11, 1
  003bc40  addi 3, 3, -17728
  003bc44  lfs 7, 8(3)
  003bc48  lfs 8, 12(3)
  003bc4c  stfs 5, 12(31)
  003bc50  fmuls 9, 4, 6
  003bc54  fmuls 10, 7, 6
  003bc58  fnmsubs 9, 9, 6, 8
  003bc5c  fmadds 1, 9, 10, 6
  003bc60  fmuls 6, 4, 1
  003bc64  fmuls 9, 7, 1
  003bc68  fnmsubs 6, 6, 1, 8
  003bc6c  fmadds 1, 6, 9, 1
  003bc70  fmuls 6, 4, 1
  003bc74  fmr 4, 5
  003bc78  fmuls 7, 7, 1
  003bc7c  fnmsubs 5, 6, 1, 8
  003bc80  fmadds 5, 5, 7, 1
  003bc84  fmuls 1, 3, 5
  003bc88  fmuls 2, 2, 5
  003bc8c  fmuls 3, 11, 5
  003bc90  stfs 1, 0(31)
  003bc94  stfs 2, 4(31)
  003bc98  stfs 3, 8(31)
  003bc9c  stfs 1, 64(31)
  003bca0  stfs 2, 68(31)
  003bca4  stfs 3, 72(31)
  003bca8  stfs 4, 76(31)
  003bcac  lfs 4, 656(30)
  003bcb0  lfs 5, 664(30)
  003bcb4  fmuls 6, 4, 3
  003bcb8  lfs 7, 660(30)
  003bcbc  fmuls 8, 5, 2
  003bcc0  fmuls 9, 7, 1
  003bcc4  lis 4, 4
  003bcc8  li 3, 0
  003bccc  addi 4, 4, -17728
  003bcd0  fmsubs 5, 5, 1, 6
  003bcd4  fmsubs 6, 7, 3, 8
  003bcd8  fmsubs 4, 4, 2, 9
  003bcdc  stw 3, 28(31)
  003bce0  lfs 8, 16(4)
  003bce4  fmuls 7, 5, 5
  003bce8  stw 3, 44(31)
  003bcec  fmadds 7, 6, 6, 7
  003bcf0  fmadds 7, 4, 4, 7
  003bcf4  fsqrts 7, 7
  003bcf8  fdivs 8, 8, 7
  003bcfc  fsub 9, 31, 7
  003bd00  fsub 10, 31, 7
  003bd04  fsub 11, 31, 7
  003bd08  fsub 12, 7, 31
  003bd0c  fsub 13, 7, 31
  003bd10  fsub 7, 7, 31
  003bd14  fmuls 6, 6, 8
  003bd18  fmuls 5, 5, 8
  003bd1c  fmuls 4, 4, 8
  003bd20  fsel 8, 9, 31, 6
  003bd24  fsel 9, 10, 31, 5
  003bd28  fsel 10, 11, 31, 4
  003bd2c  fsel 6, 12, 8, 6
  003bd30  fsel 5, 13, 9, 5
  003bd34  fsel 4, 7, 10, 4
  003bd38  fmuls 7, 2, 6
  003bd3c  fmuls 8, 3, 5
  003bd40  fmuls 9, 1, 4
  003bd44  stfs 6, 16(31)
  003bd48  stfs 5, 20(31)
  003bd4c  stfs 4, 24(31)
  003bd50  fmsubs 1, 1, 5, 7
  003bd54  fmsubs 2, 2, 4, 8
  003bd58  fmsubs 3, 3, 6, 9
  003bd5c  stfs 1, 40(31)
  003bd60  stfs 2, 32(31)
  003bd64  stfs 3, 36(31)
  003bd68  ld 0, 224(1)
  003bd6c  mtlr 0
  003bd70  lfd 31, 200(1)
  003bd74  ld 26, 152(1)
  003bd78  ld 27, 160(1)
  003bd7c  ld 28, 168(1)
  003bd80  ld 29, 176(1)
  003bd84  ld 30, 184(1)
  003bd88  ld 31, 192(1)
  003bd8c  addi 1, 1, 208
  003bd90  blr

InitCamera_15:   # 0x3bd94, 0x114 bytes
  003bd94  stdu 1, -144(1)
  003bd98  mflr 0
  003bd9c  std 0, 160(1)
  003bda0  std 31, 136(1)
  003bda4  ori 31, 3, 0
  003bda8  lis 3, 151
  003bdac  std 30, 128(1)
  003bdb0  lis 4, 16320
  003bdb4  addic 30, 3, -25376
  003bdb8  lis 3, -16236
  003bdbc  std 29, 120(1)
  003bdc0  lwz 5, 112(31)
  003bdc4  li 29, 0
  003bdc8  ori 3, 3, 31457
  003bdcc  lis 6, 15395
  003bdd0  lis 7, 16025
  003bdd4  ori 6, 6, 55050
  003bdd8  stw 4, 68(5)
  003bddc  ori 7, 7, 39322
  003bde0  lfs 1, 128(30)
  003bde4  lis 4, 15923
  003bde8  stfs 1, 48(5)
  003bdec  ori 4, 4, 13107
  003bdf0  lfs 1, 132(30)
  003bdf4  stfs 1, 52(5)
  003bdf8  lfs 1, 136(30)
  003bdfc  stw 29, 60(5)
  003be00  stfs 1, 56(5)
  003be04  stw 3, 80(5)
  003be08  stw 29, 84(5)
  003be0c  ori 3, 31, 0
  003be10  stw 29, 88(5)
  003be14  stw 29, 92(5)
  003be18  stw 6, 16(5)
  003be1c  stw 4, 20(5)
  003be20  stw 29, 24(5)
  003be24  stw 29, 12(5)
  003be28  stw 29, 8(5)
  003be2c  stw 29, 4(5)
  003be30  stw 29, 0(5)
  003be34  stw 6, 36(5)
  003be38  stw 7, 40(5)
  003be3c  stw 29, 44(5)
  003be40  stw 29, 32(5)
  003be44  stw 29, 144(5)
  003be48  stw 29, 152(5)
  003be4c  bl 0x3bad8
  003be50  lis 3, 149
  003be54  lhz 4, 132(31)
  003be58  extsh 4, 4
  003be5c  lwz 3, 16468(3)
  003be60  sldi 4, 4, 5
  003be64  lfs 1, 136(30)
  003be68  addc 3, 3, 4
  003be6c  clrldi 3, 3, 32
  003be70  lwz 3, 28(3)
  003be74  stfs 1, 60(3)
  003be78  lfs 1, 136(30)
  003be7c  sth 29, 42(3)
  003be80  stfs 1, 44(3)
  003be84  stw 29, 48(3)
  003be88  sth 29, 126(31)
  003be8c  ld 0, 160(1)
  003be90  mtlr 0
  003be94  ld 29, 120(1)
  003be98  ld 30, 128(1)
  003be9c  ld 31, 136(1)
  003bea0  addi 1, 1, 144
  003bea4  blr

Cam15_0003bef0:   # 0x3bef0, 0x64c bytes
  003bef0  stdu 1, -240(1)
  003bef4  mflr 0
  003bef8  std 0, 256(1)
  003befc  stfd 25, 184(1)
  003bf00  stfd 26, 192(1)
  003bf04  stfd 27, 200(1)
  003bf08  stfd 28, 208(1)
  003bf0c  stfd 29, 216(1)
  003bf10  stfd 30, 224(1)
  003bf14  stfd 31, 232(1)
  003bf18  std 31, 176(1)
  003bf1c  ori 31, 3, 0
  003bf20  lis 3, 149
  003bf24  lis 4, 4
  003bf28  addi 6, 4, -16728
  003bf2c  lhz 5, 132(31)
  003bf30  lwz 3, 16468(3)
  003bf34  lis 4, 165
  003bf38  std 28, 152(1)
  003bf3c  extsh 5, 5
  003bf40  lwz 28, 112(31)
  003bf44  addic 4, 4, 7136
  003bf48  sldi 5, 5, 5
  003bf4c  addc 3, 3, 5
  003bf50  std 30, 168(1)
  003bf54  li 5, 0
  003bf58  clrldi 30, 3, 32
  003bf5c  addic 3, 28, 48
  003bf60  lwz 30, 28(30)
  003bf64  lwz 7, 32(30)
  003bf68  stw 5, 144(1)
  003bf6c  slwi 7, 7, 2
  003bf70  std 29, 160(1)
  003bf74  lfs 31, 0(6)
  003bf78  extsw 29, 7
  003bf7c  stw 5, 148(1)
  003bf80  lwz 5, 36(30)
  003bf84  lfs 1, 4(6)
  003bf88  cmpwi 5, 0
  003bf8c  lwzx 29, 4, 29
  003bf90  bf 0, 0x3bfc4
  003bf94  lis 6, 114
  003bf98  fmr 3, 31
  003bf9c  ori 4, 3, 0
  003bfa0  addic 5, 1, 128
  003bfa4  li 9, 0
  003bfa8  addic 7, 1, 148
  003bfac  lfs 2, -9912(6)
  003bfb0  ori 3, 29, 0
  003bfb4  addic 6, 1, 144
  003bfb8  bl 0x10d7a0
  003bfbc  nop
  003bfc0  b 0x3bffc
  003bfc4  ori 7, 4, 0
  003bfc8  fmr 3, 31
  003bfcc  slwi 4, 5, 2
  003bfd0  lis 6, 114
  003bfd4  extsw 8, 4
  003bfd8  ori 4, 3, 0
  003bfdc  addic 5, 1, 128
  003bfe0  li 9, 0
  003bfe4  lfs 2, -9912(6)
  003bfe8  lwzx 3, 7, 8
  003bfec  addic 6, 1, 144
  003bff0  addic 7, 1, 148
  003bff4  bl 0x10d7a0
  003bff8  nop
  003bffc  ori 3, 29, 0
  003c000  lfs 1, 52(30)
  003c004  addic 4, 1, 128
  003c008  li 8, 1
  003c00c  addic 5, 1, 144
  003c010  addic 6, 1, 148
  003c014  bl 0x10ce18
  003c018  nop
  003c01c  lis 3, 4
  003c020  lfs 2, 128(1)
  003c024  lfs 1, 48(31)
  003c028  ori 5, 28, 0
  003c02c  addi 3, 3, -16728
  003c030  lfs 30, 132(1)
  003c034  lfs 29, 136(1)
  003c038  fmr 5, 31
  003c03c  lfs 28, 8(3)
  003c040  lfs 27, 12(3)
  003c044  fmr 3, 28
  003c048  fmr 4, 27
  003c04c  bl 0x501e8
  003c050  nop
  003c054  lfs 4, 52(31)
  003c058  addic 5, 28, 4
  003c05c  stfs 1, 48(31)
  003c060  fmr 2, 30
  003c064  fmr 1, 4
  003c068  fmr 4, 27
  003c06c  fmr 3, 28
  003c070  fmr 5, 31
  003c074  bl 0x501e8
  003c078  nop
  003c07c  lfs 4, 56(31)
  003c080  addic 5, 28, 8
  003c084  stfs 1, 52(31)
  003c088  fmr 2, 29
  003c08c  fmr 1, 4
  003c090  fmr 3, 28
  003c094  fmr 4, 27
  003c098  fmr 5, 31
  003c09c  bl 0x501e8
  003c0a0  nop
  003c0a4  stfs 1, 56(31)
  003c0a8  lfs 1, 48(28)
  003c0ac  lhz 3, 42(30)
  003c0b0  stfs 1, 128(1)
  003c0b4  lfs 1, 52(28)
  003c0b8  cmpwi 3, 0
  003c0bc  stfs 1, 132(1)
  003c0c0  bt 2, 0x3c0d0
  003c0c4  lfs 1, 60(30)
  003c0c8  stfs 1, 136(1)
  003c0cc  b 0x3c108
  003c0d0  lis 3, 151
  003c0d4  addic 3, 3, -25376
  003c0d8  lwz 3, 768(3)
  003c0dc  cmpwi 3, 0
  003c0e0  bt 2, 0x3c100
  003c0e4  li 3, 1
  003c0e8  lfs 1, 56(28)
  003c0ec  stfs 1, 136(1)
  003c0f0  stfs 1, 60(30)
  003c0f4  sth 3, 42(30)
  003c0f8  lfs 1, 136(1)
  003c0fc  b 0x3c108
  003c100  lfs 1, 60(30)
  003c104  stfs 1, 136(1)
  003c108  lfs 2, 24(30)
  003c10c  lis 3, 4
  003c110  fmr 5, 31
  003c114  fadds 2, 1, 2
  003c118  addic 5, 30, 48
  003c11c  addi 3, 3, -16728
  003c120  stfs 2, 136(1)
  003c124  lfs 30, 16(3)
  003c128  lfs 29, 20(3)
  003c12c  lfs 1, 44(30)
  003c130  fmr 3, 30
  003c134  fmr 4, 29
  003c138  bl 0x501e8
  003c13c  nop
  003c140  stfs 1, 44(30)
  003c144  lfs 3, 132(1)
  003c148  lfs 2, 52(31)
  003c14c  lfs 4, 128(1)
  003c150  fsubs 3, 3, 2
  003c154  lfs 2, 48(31)
  003c158  fsubs 2, 4, 2
  003c15c  lfs 4, 56(31)
  003c160  fsubs 4, 1, 4
  003c164  fmuls 5, 3, 3
  003c168  stfs 1, 136(1)
  003c16c  lfs 1, 140(1)
  003c170  fmadds 5, 2, 2, 5
  003c174  fmadds 5, 4, 4, 5
  003c178  fsqrts 6, 5
  003c17c  fcmpu 0, 6, 31
  003c180  bf 2, 0x3c1a8
  003c184  stfs 2, 0(31)
  003c188  fmr 2, 31
  003c18c  stfs 1, 12(31)
  003c190  stfs 3, 4(31)
  003c194  stfs 4, 8(31)
  003c198  lfs 1, 12(31)
  003c19c  fmr 3, 2
  003c1a0  fmr 4, 3
  003c1a4  b 0x3c200
  003c1a8  frsqrte 6, 5
  003c1ac  lis 3, 4
  003c1b0  fmr 11, 4
  003c1b4  addi 3, 3, -16728
  003c1b8  lfs 7, 24(3)
  003c1bc  lfs 8, 28(3)
  003c1c0  stfs 1, 12(31)
  003c1c4  fmuls 9, 5, 6
  003c1c8  fmuls 10, 7, 6
  003c1cc  fnmsubs 9, 9, 6, 8
  003c1d0  fmadds 4, 9, 10, 6
  003c1d4  fmuls 6, 5, 4
  003c1d8  fmuls 9, 7, 4
  003c1dc  fnmsubs 6, 6, 4, 8
  003c1e0  fmadds 4, 6, 9, 4
  003c1e4  fmuls 5, 5, 4
  003c1e8  fmuls 6, 7, 4
  003c1ec  fnmsubs 5, 5, 4, 8
  003c1f0  fmadds 5, 5, 6, 4
  003c1f4  fmuls 4, 2, 5
  003c1f8  fmuls 3, 3, 5
  003c1fc  fmuls 2, 11, 5
  003c200  ori 3, 30, 0
  003c204  lis 30, 151
  003c208  stfs 4, 0(31)
  003c20c  stfs 3, 4(31)
  003c210  addic 30, 30, -25376
  003c214  stfs 2, 8(31)
  003c218  stfs 4, 64(31)
  003c21c  stfs 3, 68(31)
  003c220  stfs 2, 72(31)
  003c224  stfs 1, 76(31)
  003c228  lfs 1, 656(30)
  003c22c  lfs 5, 664(30)
  003c230  fmuls 6, 1, 2
  003c234  fmuls 7, 5, 3
  003c238  lfs 8, 660(30)
  003c23c  fmuls 9, 8, 4
  003c240  lis 5, 4
  003c244  li 4, 0
  003c248  addi 5, 5, -16728
  003c24c  fmsubs 5, 5, 4, 6
  003c250  fmsubs 6, 8, 2, 7
  003c254  fmsubs 1, 1, 3, 9
  003c258  stw 4, 28(31)
  003c25c  lfs 28, 32(5)
  003c260  fmuls 7, 5, 5
  003c264  stw 4, 44(31)
  003c268  fmadds 7, 6, 6, 7
  003c26c  fmadds 7, 1, 1, 7
  003c270  fsqrts 7, 7
  003c274  fdivs 8, 28, 7
  003c278  fsub 9, 31, 7
  003c27c  fsub 10, 31, 7
  003c280  fsub 11, 31, 7
  003c284  fsub 12, 7, 31
  003c288  fsub 13, 7, 31
  003c28c  fsub 0, 7, 31
  003c290  fmuls 7, 6, 8
  003c294  fmuls 5, 5, 8
  003c298  fmuls 1, 1, 8
  003c29c  fsel 6, 9, 31, 7
  003c2a0  fsel 8, 10, 31, 5
  003c2a4  fsel 9, 11, 31, 1
  003c2a8  fsel 7, 12, 6, 7
  003c2ac  fsel 8, 13, 8, 5
  003c2b0  fsel 1, 0, 9, 1
  003c2b4  fmuls 5, 3, 7
  003c2b8  fmuls 6, 2, 8
  003c2bc  fmuls 9, 4, 1
  003c2c0  stfs 7, 16(31)
  003c2c4  stfs 8, 20(31)
  003c2c8  stfs 1, 24(31)
  003c2cc  fmsubs 4, 4, 8, 5
  003c2d0  fmuls 5, 8, 8
  003c2d4  fmsubs 1, 3, 1, 6
  003c2d8  fmsubs 2, 2, 7, 9
  003c2dc  fmadds 5, 7, 7, 5
  003c2e0  stfs 4, 40(31)
  003c2e4  stfs 1, 32(31)
  003c2e8  stfs 2, 36(31)
  003c2ec  lfs 1, 36(5)
  003c2f0  lfs 2, 152(30)
  003c2f4  lfs 3, 40(5)
  003c2f8  fadds 1, 2, 1
  003c2fc  fsubs 9, 3, 2
  003c300  lfs 4, 44(5)
  003c304  fsqrts 12, 5
  003c308  fsubs 3, 3, 1
  003c30c  fsub 11, 2, 9
  003c310  fsubs 10, 4, 2
  003c314  fsubs 4, 4, 1
  003c318  fsub 25, 1, 3
  003c31c  fsel 2, 11, 9, 2
  003c320  lfs 9, 48(5)
  003c324  lfs 11, 52(5)
  003c328  lfs 27, 56(5)
  003c32c  lfs 6, 0(3)
  003c330  lfs 26, 60(5)
  003c334  fsel 1, 25, 3, 1
  003c338  fsub 3, 10, 2
  003c33c  fsub 13, 4, 1
  003c340  fsel 2, 3, 10, 2
  003c344  fmr 3, 31
  003c348  fsel 1, 13, 4, 1
  003c34c  fmuls 10, 2, 2
  003c350  fmr 4, 3
  003c354  fmr 13, 27
  003c358  fmuls 0, 1, 1
  003c35c  fmuls 27, 10, 2
  003c360  fcmpu 0, 12, 4
  003c364  fmuls 12, 0, 1
  003c368  fmuls 25, 10, 27
  003c36c  fmadds 2, 27, 9, 2
  003c370  fmuls 27, 0, 12
  003c374  fmadds 1, 12, 9, 1
  003c378  fmuls 9, 10, 25
  003c37c  fmadds 2, 25, 11, 2
  003c380  fmuls 12, 0, 27
  003c384  fmadds 1, 27, 11, 1
  003c388  fmuls 10, 10, 9
  003c38c  fmadds 2, 9, 13, 2
  003c390  fmuls 9, 0, 12
  003c394  fmadds 1, 12, 13, 1
  003c398  fmadds 2, 10, 26, 2
  003c39c  fmadds 1, 9, 26, 1
  003c3a0  bt 2, 0x3c3f0
  003c3a4  frsqrte 3, 5
  003c3a8  lis 3, 4
  003c3ac  addi 3, 3, -16728
  003c3b0  lfs 4, 24(3)
  003c3b4  lfs 9, 28(3)
  003c3b8  fmuls 10, 5, 3
  003c3bc  fmuls 11, 4, 3
  003c3c0  fnmsubs 10, 10, 3, 9
  003c3c4  fmadds 3, 10, 11, 3
  003c3c8  fmuls 10, 5, 3
  003c3cc  fmuls 11, 4, 3
  003c3d0  fnmsubs 10, 10, 3, 9
  003c3d4  fmadds 3, 10, 11, 3
  003c3d8  fmuls 5, 5, 3
  003c3dc  fmuls 4, 4, 3
  003c3e0  fnmsubs 5, 5, 3, 9
  003c3e4  fmadds 4, 5, 4, 3
  003c3e8  fmuls 3, 7, 4
  003c3ec  fmuls 4, 8, 4
  003c3f0  fmuls 2, 4, 2
  003c3f4  lis 3, 4
  003c3f8  fmr 4, 29
  003c3fc  fmr 5, 31
  003c400  addi 3, 3, -16728
  003c404  lfs 7, 64(3)
  003c408  lwz 29, 112(31)
  003c40c  fmadds 2, 3, 1, 2
  003c410  fmuls 6, 6, 7
  003c414  fmr 3, 30
  003c418  addic 5, 29, 152
  003c41c  lfs 1, 144(29)
  003c420  fmuls 2, 6, 2
  003c424  bl 0x50288
  003c428  nop
  003c42c  stfs 1, 144(29)
  003c430  addic 5, 31, 32
  003c434  ori 3, 31, 0
  003c438  ori 4, 31, 0
  003c43c  bl 0x1113e0
  003c440  nop
  003c444  lfs 1, 8(31)
  003c448  lfs 2, 656(30)
  003c44c  lfs 3, 664(30)
  003c450  fmuls 4, 2, 1
  003c454  lfs 5, 4(31)
  003c458  lfs 6, 0(31)
  003c45c  fmuls 7, 3, 5
  003c460  lfs 8, 660(30)
  003c464  fmuls 9, 8, 6
  003c468  fmsubs 3, 3, 6, 4
  003c46c  fmsubs 4, 8, 1, 7
  003c470  fmsubs 2, 2, 5, 9
  003c474  fmuls 7, 3, 3
  003c478  li 3, 0
  003c47c  fmadds 7, 4, 4, 7
  003c480  stw 3, 28(31)
  003c484  stw 3, 44(31)
  003c488  fmadds 7, 2, 2, 7
  003c48c  fsqrts 7, 7
  003c490  fdivs 8, 28, 7
  003c494  fsub 9, 31, 7
  003c498  fsub 10, 31, 7
  003c49c  fsub 11, 31, 7
  003c4a0  fsub 12, 7, 31
  003c4a4  fsub 13, 7, 31
  003c4a8  fsub 7, 7, 31
  003c4ac  fmuls 4, 4, 8
  003c4b0  fmuls 3, 3, 8
  003c4b4  fmuls 2, 2, 8
  003c4b8  fsel 8, 9, 31, 4
  003c4bc  fsel 9, 10, 31, 3
  003c4c0  fsel 10, 11, 31, 2
  003c4c4  fsel 4, 12, 8, 4
  003c4c8  fsel 3, 13, 9, 3
  003c4cc  fsel 2, 7, 10, 2
  003c4d0  fmuls 7, 5, 4
  003c4d4  fmuls 8, 1, 3
  003c4d8  fmuls 9, 6, 2
  003c4dc  stfs 4, 16(31)
  003c4e0  stfs 3, 20(31)
  003c4e4  stfs 2, 24(31)
  003c4e8  fmsubs 3, 6, 3, 7
  003c4ec  fmsubs 2, 5, 2, 8
  003c4f0  fmsubs 1, 1, 4, 9
  003c4f4  stfs 3, 40(31)
  003c4f8  stfs 2, 32(31)
  003c4fc  stfs 1, 36(31)
  003c500  ld 0, 256(1)
  003c504  mtlr 0
  003c508  lfd 25, 184(1)
  003c50c  lfd 26, 192(1)
  003c510  lfd 27, 200(1)
  003c514  lfd 28, 208(1)
  003c518  lfd 29, 216(1)
  003c51c  lfd 30, 224(1)
  003c520  lfd 31, 232(1)
  003c524  ld 28, 152(1)
  003c528  ld 29, 160(1)
  003c52c  ld 30, 168(1)
  003c530  ld 31, 176(1)
  003c534  addi 1, 1, 240
  003c538  blr

ActivateCamera_15:   # 0x3c53c, 0x14c bytes
  003c53c  stdu 1, -128(1)
  003c540  mflr 0
  003c544  std 0, 144(1)
  003c548  lis 6, 149
  003c54c  lhz 5, 132(3)
  003c550  cmpwi 4, 0
  003c554  extsh 5, 5
  003c558  lwz 6, 16468(6)
  003c55c  sldi 5, 5, 5
  003c560  std 31, 120(1)
  003c564  addc 5, 6, 5
  003c568  clrldi 31, 5, 32
  003c56c  lwz 31, 28(31)
  003c570  bt 2, 0x3c598
  003c574  lhz 5, 126(4)
  003c578  cmpwi 5, 0
  003c57c  bf 2, 0x3c598
  003c580  lbz 5, 124(3)
  003c584  lbz 4, 124(4)
  003c588  cmpw 5, 4
  003c58c  bt 1, 0x3c598
  003c590  li 3, 0
  003c594  b 0x3c674
  003c598  bl 0x3b950
  003c59c  lwz 3, 12(31)
  003c5a0  cmpwi 3, 0
  003c5a4  bt 0, 0x3c5c8
  003c5a8  lis 5, 151
  003c5ac  extsw 4, 3
  003c5b0  addic 3, 5, -25376
  003c5b4  addic 3, 3, 128
  003c5b8  bl 0x110b70
  003c5bc  nop
  003c5c0  cmpwi 3, 0
  003c5c4  bf 2, 0x3c668
  003c5c8  lwz 3, 16(31)
  003c5cc  cmpwi 3, 0
  003c5d0  bt 0, 0x3c5f4
  003c5d4  lis 5, 151
  003c5d8  extsw 4, 3
  003c5dc  addic 3, 5, -25376
  003c5e0  addic 3, 3, 128
  003c5e4  bl 0x110c60
  003c5e8  nop
  003c5ec  cmpwi 3, 0
  003c5f0  bf 2, 0x3c668
  003c5f4  lwz 3, 8(31)
  003c5f8  cmpwi 3, 0
  003c5fc  bt 0, 0x3c620
  003c600  lis 5, 151
  003c604  extsw 4, 3
  003c608  addic 3, 5, -25376
  003c60c  addic 3, 3, 128
  003c610  bl 0x110d48
  003c614  nop
  003c618  cmpwi 3, 0
  003c61c  bf 2, 0x3c668
  003c620  lwz 31, 20(31)
  003c624  cmpwi 31, 0
  003c628  bt 0, 0x3c670
  003c62c  lis 3, 165
  003c630  slwi 4, 31, 2
  003c634  addic 3, 3, 7136
  003c638  extsw 4, 4
  003c63c  lis 5, 151
  003c640  addic 5, 5, -25376
  003c644  lwzx 6, 3, 4
  003c648  addic 3, 5, 128
  003c64c  addic 4, 6, 16
  003c650  lwz 5, 0(6)
  003c654  extsw 5, 5
  003c658  bl 0x104e44
  003c65c  nop
  003c660  cmpwi 3, 0
  003c664  bt 2, 0x3c670
  003c668  li 3, 1
  003c66c  b 0x3c674
  003c670  li 3, -1
  003c674  ld 0, 144(1)
  003c678  mtlr 0
  003c67c  ld 31, 120(1)
  003c680  addi 1, 1, 128
  003c684  blr

UpdateCamera_15:   # 0x3c688, 0x78 bytes
  003c688  stdu 1, -112(1)
  003c68c  mflr 0
  003c690  std 0, 128(1)
  003c694  lis 4, 149
  003c698  lhz 6, 132(3)
  003c69c  lis 5, 151
  003c6a0  extsh 6, 6
  003c6a4  addic 5, 5, -25376
  003c6a8  lwz 4, 16468(4)
  003c6ac  sldi 6, 6, 5
  003c6b0  lwz 7, 112(3)
  003c6b4  addc 4, 4, 6
  003c6b8  clrldi 4, 4, 32
  003c6bc  lfs 1, 128(5)
  003c6c0  lwz 4, 28(4)
  003c6c4  stfs 1, 48(7)
  003c6c8  lfs 1, 132(5)
  003c6cc  stfs 1, 52(7)
  003c6d0  lfs 1, 136(5)
  003c6d4  stfs 1, 56(7)
  003c6d8  lfs 2, 140(5)
  003c6dc  stfs 2, 60(7)
  003c6e0  lfs 2, 24(4)
  003c6e4  fadds 1, 1, 2
  003c6e8  stfs 1, 56(7)
  003c6ec  bl 0x3bef0
  003c6f0  ld 0, 128(1)
  003c6f4  mtlr 0
  003c6f8  addi 1, 1, 112
  003c6fc  blr

ExitCamera_15:   # 0x3c700, 0x118 bytes
  003c700  stdu 1, -144(1)
  003c704  mflr 0
  003c708  std 0, 160(1)
  003c70c  std 31, 136(1)
  003c710  ori 31, 3, 0
  003c714  lis 3, 149
  003c718  std 30, 128(1)
  003c71c  lis 4, 151
  003c720  addic 30, 4, -25376
  003c724  lhz 5, 132(31)
  003c728  lwz 3, 16468(3)
  003c72c  addic 30, 30, 128
  003c730  extsh 5, 5
  003c734  sldi 5, 5, 5
  003c738  std 29, 120(1)
  003c73c  addc 3, 3, 5
  003c740  clrldi 29, 3, 32
  003c744  lwz 29, 28(29)
  003c748  lwz 3, 12(29)
  003c74c  cmpwi 3, 0
  003c750  bt 0, 0x3c76c
  003c754  extsw 4, 3
  003c758  ori 3, 30, 0
  003c75c  bl 0x110b70
  003c760  nop
  003c764  cmpwi 3, 0
  003c768  bt 2, 0x3c7f4
  003c76c  lwz 3, 16(29)
  003c770  cmpwi 3, 0
  003c774  bt 0, 0x3c790
  003c778  extsw 4, 3
  003c77c  ori 3, 30, 0
  003c780  bl 0x110c60
  003c784  nop
  003c788  cmpwi 3, 0
  003c78c  bt 2, 0x3c7f4
  003c790  lwz 3, 8(29)
  003c794  cmpwi 3, 0
  003c798  bt 0, 0x3c7b4
  003c79c  extsw 4, 3
  003c7a0  ori 3, 30, 0
  003c7a4  bl 0x110d48
  003c7a8  nop
  003c7ac  cmpwi 3, 0
  003c7b0  bt 2, 0x3c7f4
  003c7b4  lwz 29, 20(29)
  003c7b8  cmpwi 29, 0
  003c7bc  bt 0, 0x3c7fc
  003c7c0  lis 3, 165
  003c7c4  slwi 4, 29, 2
  003c7c8  addic 5, 3, 7136
  003c7cc  extsw 4, 4
  003c7d0  ori 3, 30, 0
  003c7d4  lwzx 5, 5, 4
  003c7d8  addic 4, 5, 16
  003c7dc  lwz 5, 0(5)
  003c7e0  extsw 5, 5
  003c7e4  bl 0x104e44
  003c7e8  nop
  003c7ec  cmpwi 3, 0
  003c7f0  bf 2, 0x3c7fc
  003c7f4  li 3, 3
  003c7f8  sth 3, 126(31)
  003c7fc  ld 0, 160(1)
  003c800  mtlr 0
  003c804  ld 29, 120(1)
  003c808  ld 30, 128(1)
  003c80c  ld 31, 136(1)
  003c810  addi 1, 1, 144
  003c814  blr
