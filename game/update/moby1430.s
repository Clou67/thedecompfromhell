# game/update/moby1430.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1430_0027b904:   # 0x27b904, 0x14 bytes
  027b904  lis 3, 123
  027b908  lis 4, 1
  027b90c  addic 3, 3, -22968
  027b910  stw 4, 72(3)
  027b914  blr

M1430_SetCodeBotState_Crates:   # 0x27b918, 0x98 bytes
  027b918  lis 5, 165
  027b91c  sldi 3, 3, 2
  027b920  addic 5, 5, -28284
  027b924  extsw 3, 3
  027b928  lwzx 3, 5, 3
  027b92c  cmpwi 3, 0
  027b930  bt 2, 0x27b9ac
  027b934  clrlwi 7, 4, 24
  027b938  lis 6, 164
  027b93c  li 5, 0
  027b940  li 4, 1
  027b944  cmpwi 1, 7, 0
  027b948  lhz 7, 0(3)
  027b94c  lwz 8, -28512(6)
  027b950  rlwinm 7, 7, 8, 9, 23
  027b954  addc 8, 8, 7
  027b958  clrldi 8, 8, 32
  027b95c  bt 6, 0x27b980
  027b960  lwz 7, 36(8)
  027b964  lhz 9, 52(8)
  027b968  rlwinm 9, 9, 0, 0, 30
  027b96c  rlwimi 9, 5, 0, 30, 30
  027b970  lwz 7, 16(7)
  027b974  stb 4, 49(8)
  027b978  sth 9, 52(8)
  027b97c  b 0x27b994
  027b980  lhz 9, 52(8)
  027b984  ori 7, 5, 0
  027b988  ori 9, 9, 3
  027b98c  stb 7, 49(8)
  027b990  sth 9, 52(8)
  027b994  lhz 9, 0(3)
  027b998  stw 7, 148(8)
  027b99c  addic 3, 3, 2
  027b9a0  extsh 7, 9
  027b9a4  cmpwi 7, 0
  027b9a8  bf 0, 0x27b948
  027b9ac  blr

M1430_0027b9b0:   # 0x27b9b0, 0x80 bytes
  027b9b0  lis 4, 165
  027b9b4  sldi 3, 3, 2
  027b9b8  addic 4, 4, -28284
  027b9bc  extsw 3, 3
  027b9c0  lwzx 3, 4, 3
  027b9c4  cmpwi 3, 0
  027b9c8  bf 2, 0x27b9d4
  027b9cc  li 3, 0
  027b9d0  b 0x27ba2c
  027b9d4  lis 4, 164
  027b9d8  li 6, 0
  027b9dc  lwz 4, -28512(4)
  027b9e0  lhz 5, 0(3)
  027b9e4  rlwinm 5, 5, 8, 9, 23
  027b9e8  addc 5, 4, 5
  027b9ec  clrldi 5, 5, 32
  027b9f0  cmpwi 5, 0
  027b9f4  bt 2, 0x27ba0c
  027b9f8  lbz 5, 32(5)
  027b9fc  cmpwi 5, 254
  027ba00  cmpwi 1, 5, 253
  027ba04  bt 2, 0x27ba0c
  027ba08  bf 6, 0x27ba14
  027ba0c  addic 6, 6, 1
  027ba10  extsw 6, 6
  027ba14  lhz 5, 0(3)
  027ba18  addic 3, 3, 2
  027ba1c  extsh 5, 5
  027ba20  cmpwi 5, 0
  027ba24  bf 0, 0x27b9e0
  027ba28  ori 3, 6, 0
  027ba2c  blr

UpdateMoby_1430:   # 0x27ba70, 0xb34 bytes
  027ba70  stdu 1, -448(1)
  027ba74  mflr 0
  027ba78  std 0, 464(1)
  027ba7c  stfd 23, 376(1)
  027ba80  stfd 24, 384(1)
  027ba84  stfd 25, 392(1)
  027ba88  stfd 26, 400(1)
  027ba8c  stfd 27, 408(1)
  027ba90  stfd 28, 416(1)
  027ba94  stfd 29, 424(1)
  027ba98  stfd 30, 432(1)
  027ba9c  stfd 31, 440(1)
  027baa0  std 30, 360(1)
  027baa4  std 31, 368(1)
  027baa8  ori 30, 3, 0
  027baac  lwz 31, 120(30)
  027bab0  lwz 3, 12(31)
  027bab4  std 29, 352(1)
  027bab8  std 28, 344(1)
  027babc  std 27, 336(1)
  027bac0  std 26, 328(1)
  027bac4  cmpwi 3, -1
  027bac8  bt 2, 0x27bb70
  027bacc  lbz 4, 32(30)
  027bad0  cmpwi 4, 0
  027bad4  bt 2, 0x27bb3c
  027bad8  lis 4, 164
  027badc  slwi 3, 3, 8
  027bae0  addic 6, 1, 128
  027bae4  addic 5, 31, 16
  027bae8  lwz 4, -28512(4)
  027baec  addc 4, 4, 3
  027baf0  ori 3, 6, 0
  027baf4  addic 4, 4, 16
  027baf8  clrldi 4, 4, 32
  027bafc  bl 0x502a64
  027bb00  nop
  027bb04  lfs 1, 128(1)
  027bb08  addic 3, 1, 144
  027bb0c  lfs 2, 132(1)
  027bb10  addic 4, 30, 16
  027bb14  stfs 1, 112(1)
  027bb18  addic 5, 1, 112
  027bb1c  lfs 1, 136(1)
  027bb20  stfs 2, 116(1)
  027bb24  lfs 2, 140(1)
  027bb28  stfs 1, 120(1)
  027bb2c  stfs 2, 124(1)
  027bb30  bl 0x502b08
  027bb34  nop
  027bb38  lwz 3, 12(31)
  027bb3c  lis 4, 164
  027bb40  slwi 3, 3, 8
  027bb44  lwz 4, -28512(4)
  027bb48  addc 3, 4, 3
  027bb4c  clrldi 3, 3, 32
  027bb50  lfs 1, 16(3)
  027bb54  stfs 1, 16(31)
  027bb58  lfs 1, 20(3)
  027bb5c  stfs 1, 20(31)
  027bb60  lfs 1, 24(3)
  027bb64  stfs 1, 24(31)
  027bb68  lfs 1, 28(3)
  027bb6c  stfs 1, 28(31)
  027bb70  lbz 3, 32(30)
  027bb74  cmpwi 3, 4
  027bb78  cmpwi 1, 3, 3
  027bb7c  cmpwi 6, 3, 2
  027bb80  cmpwi 7, 3, 1
  027bb84  bt 2, 0x27c1dc
  027bb88  bt 6, 0x27bfb8
  027bb8c  bt 26, 0x27bcd0
  027bb90  bt 30, 0x27bc50
  027bb94  cmpwi 3, 0
  027bb98  bf 2, 0x27c558
  027bb9c  lis 3, 165
  027bba0  lhz 4, 178(30)
  027bba4  addic 5, 3, 17860
  027bba8  extsh 3, 4
  027bbac  lbzx 5, 5, 3
  027bbb0  cmpwi 5, 0
  027bbb4  bf 2, 0x27bbfc
  027bbb8  lis 6, 151
  027bbbc  lis 5, 161
  027bbc0  srawi 3, 3, 5
  027bbc4  addic 5, 5, -13028
  027bbc8  sldi 3, 3, 2
  027bbcc  lwz 6, -25488(6)
  027bbd0  clrlwi 4, 4, 27
  027bbd4  addc 3, 3, 5
  027bbd8  slwi 5, 6, 8
  027bbdc  clrldi 3, 3, 32
  027bbe0  extsw 5, 5
  027bbe4  li 6, 1
  027bbe8  slw 4, 6, 4
  027bbec  lwzx 3, 3, 5
  027bbf0  and 3, 3, 4
  027bbf4  cmpwi 3, 0
  027bbf8  bt 2, 0x27bc08
  027bbfc  li 3, 4
  027bc00  stb 3, 32(30)
  027bc04  b 0x27c558
  027bc08  lis 3, 162
  027bc0c  ori 4, 30, 0
  027bc10  addic 3, 3, 2088
  027bc14  li 30, 0
  027bc18  li 5, 1
  027bc1c  stw 30, 4(3)
  027bc20  stb 5, 32(4)
  027bc24  lwz 3, 32(31)
  027bc28  cmpwi 3, -1
  027bc2c  bt 2, 0x27bc3c
  027bc30  extsw 3, 3
  027bc34  li 4, 0
  027bc38  bl 0x27b918
  027bc3c  addic 30, 30, 1
  027bc40  addic 31, 31, 4
  027bc44  cmpwi 30, 24
  027bc48  bt 0, 0x27bc24
  027bc4c  b 0x27c558
  027bc50  lis 3, 151
  027bc54  addic 3, 3, -16400
  027bc58  lbz 3, 2(3)
  027bc5c  cmpwi 3, 0
  027bc60  bt 2, 0x27c558
  027bc64  lis 3, 151
  027bc68  lfs 1, 20(30)
  027bc6c  addic 3, 3, -25376
  027bc70  lis 4, 40
  027bc74  lfs 2, 132(3)
  027bc78  lfs 3, 128(3)
  027bc7c  fsubs 1, 2, 1
  027bc80  lfs 2, 16(30)
  027bc84  fsubs 2, 3, 2
  027bc88  addi 4, 4, -17872
  027bc8c  fmuls 1, 1, 1
  027bc90  fmadds 1, 2, 2, 1
  027bc94  lfs 2, 0(4)
  027bc98  fsqrts 1, 1
  027bc9c  fcmpu 0, 1, 2
  027bca0  cror 6, 1, 2
  027bca4  bt 6, 0x27c558
  027bca8  lbz 3, 8356(3)
  027bcac  cmpwi 3, 0
  027bcb0  bf 2, 0x27c558
  027bcb4  lwz 3, 0(31)
  027bcb8  extsw 3, 3
  027bcbc  bl 0x3fba8
  027bcc0  nop
  027bcc4  li 3, 2
  027bcc8  stb 3, 32(30)
  027bccc  b 0x27c558
  027bcd0  lwz 3, 0(31)
  027bcd4  extsw 3, 3
  027bcd8  bl 0x3fc10
  027bcdc  nop
  027bce0  cmpwi 3, 0
  027bce4  bt 2, 0x27c558
  027bce8  lis 3, 40
  027bcec  lfs 1, 72(30)
  027bcf0  addi 29, 3, -17872
  027bcf4  lfs 31, 4(29)
  027bcf8  fmr 2, 31
  027bcfc  bl 0x502578
  027bd00  nop
  027bd04  lfs 30, 8(29)
  027bd08  lfs 29, 12(29)
  027bd0c  fadds 1, 1, 30
  027bd10  lfs 28, 16(29)
  027bd14  lfs 27, 20(29)
  027bd18  lfs 26, 24(29)
  027bd1c  lfs 25, 28(29)
  027bd20  lfs 24, 32(29)
  027bd24  lfs 23, 36(29)
  027bd28  fsubs 2, 29, 1
  027bd2c  fsubs 3, 28, 1
  027bd30  lfs 5, 72(30)
  027bd34  fsub 4, 1, 2
  027bd38  fsel 1, 4, 2, 1
  027bd3c  fsub 4, 3, 1
  027bd40  fsel 1, 4, 3, 1
  027bd44  fmuls 3, 1, 1
  027bd48  fmuls 4, 3, 1
  027bd4c  fmuls 2, 3, 4
  027bd50  fmadds 1, 4, 27, 1
  027bd54  fmuls 4, 3, 2
  027bd58  fmadds 6, 2, 26, 1
  027bd5c  fmr 1, 5
  027bd60  fmr 2, 31
  027bd64  fmuls 3, 3, 4
  027bd68  fmadds 4, 4, 25, 6
  027bd6c  fmadds 3, 3, 24, 4
  027bd70  fmuls 3, 3, 23
  027bd74  stfs 3, 160(1)
  027bd78  bl 0x502578
  027bd7c  nop
  027bd80  fsubs 2, 29, 1
  027bd84  fsubs 3, 28, 1
  027bd88  li 28, 0
  027bd8c  addic 27, 1, 160
  027bd90  addic 26, 30, 16
  027bd94  addic 3, 1, 192
  027bd98  stw 28, 168(1)
  027bd9c  ori 4, 27, 0
  027bda0  fsub 4, 1, 2
  027bda4  ori 5, 26, 0
  027bda8  fsel 1, 4, 2, 1
  027bdac  fsub 2, 3, 1
  027bdb0  fsel 1, 2, 3, 1
  027bdb4  fmuls 2, 1, 1
  027bdb8  fmuls 3, 2, 1
  027bdbc  fmuls 4, 2, 3
  027bdc0  fmadds 1, 3, 27, 1
  027bdc4  fmuls 3, 2, 4
  027bdc8  fmadds 1, 4, 26, 1
  027bdcc  fmuls 2, 2, 3
  027bdd0  fmadds 1, 3, 25, 1
  027bdd4  fmadds 1, 2, 24, 1
  027bdd8  fmuls 1, 1, 23
  027bddc  stfs 1, 164(1)
  027bde0  bl 0x502b08
  027bde4  nop
  027bde8  stw 28, 188(1)
  027bdec  stw 28, 184(1)
  027bdf0  stw 28, 180(1)
  027bdf4  stw 28, 176(1)
  027bdf8  lfs 23, 40(29)
  027bdfc  lfs 1, 72(30)
  027be00  fmr 2, 23
  027be04  bl 0x502578
  027be08  nop
  027be0c  lfs 2, 160(1)
  027be10  lfs 3, 168(1)
  027be14  lis 3, 16329
  027be18  stfs 2, 48(1)
  027be1c  stfs 3, 56(1)
  027be20  lfs 2, 176(1)
  027be24  ori 3, 3, 4059
  027be28  stfs 1, 72(1)
  027be2c  stfs 2, 64(1)
  027be30  lfs 2, 164(1)
  027be34  stfs 1, 184(1)
  027be38  stfs 2, 52(1)
  027be3c  lfs 1, 172(1)
  027be40  stw 3, 180(1)
  027be44  stfs 1, 60(1)
  027be48  lfs 1, 188(1)
  027be4c  stfs 23, 68(1)
  027be50  stfs 1, 76(1)
  027be54  ld 3, 48(1)
  027be58  ld 4, 56(1)
  027be5c  ld 6, 72(1)
  027be60  ld 5, 64(1)
  027be64  bl 0x27b170
  027be68  nop
  027be6c  stw 28, 8(31)
  027be70  lfs 1, 72(30)
  027be74  fmr 2, 31
  027be78  stw 3, 4(31)
  027be7c  bl 0x502578
  027be80  nop
  027be84  fadds 1, 1, 30
  027be88  lfs 30, 0(29)
  027be8c  fsubs 2, 29, 1
  027be90  fsubs 3, 28, 1
  027be94  fsub 4, 1, 2
  027be98  fsel 1, 4, 2, 1
  027be9c  lfs 4, 72(30)
  027bea0  fsub 2, 3, 1
  027bea4  fsel 1, 2, 3, 1
  027bea8  fmuls 3, 1, 1
  027beac  fmuls 2, 3, 1
  027beb0  fmuls 5, 3, 2
  027beb4  fmadds 2, 2, 27, 1
  027beb8  fmr 1, 4
  027bebc  fmuls 4, 3, 5
  027bec0  fmadds 5, 5, 26, 2
  027bec4  fmr 2, 31
  027bec8  fmuls 3, 3, 4
  027becc  fmadds 4, 4, 25, 5
  027bed0  fmadds 3, 3, 24, 4
  027bed4  fmuls 3, 3, 30
  027bed8  stfs 3, 160(1)
  027bedc  bl 0x502578
  027bee0  nop
  027bee4  fsubs 2, 29, 1
  027bee8  fsubs 3, 28, 1
  027beec  stw 28, 168(1)
  027bef0  addic 3, 1, 208
  027bef4  ori 4, 27, 0
  027bef8  ori 5, 26, 0
  027befc  fsub 4, 1, 2
  027bf00  fsel 1, 4, 2, 1
  027bf04  fsub 2, 3, 1
  027bf08  fsel 1, 2, 3, 1
  027bf0c  fmuls 2, 1, 1
  027bf10  fmuls 3, 2, 1
  027bf14  fmuls 4, 2, 3
  027bf18  fmadds 1, 3, 27, 1
  027bf1c  fmuls 3, 2, 4
  027bf20  fmadds 1, 4, 26, 1
  027bf24  fmuls 2, 2, 3
  027bf28  fmadds 1, 3, 25, 1
  027bf2c  fmadds 1, 2, 24, 1
  027bf30  fmuls 1, 1, 30
  027bf34  stfs 1, 164(1)
  027bf38  bl 0x502b08
  027bf3c  nop
  027bf40  lfs 1, 44(29)
  027bf44  ori 3, 27, 0
  027bf48  li 4, 0
  027bf4c  bl 0xffb70
  027bf50  nop
  027bf54  stfs 1, 168(1)
  027bf58  stw 28, 188(1)
  027bf5c  fmr 2, 23
  027bf60  stw 28, 184(1)
  027bf64  lfs 1, 72(30)
  027bf68  stw 28, 180(1)
  027bf6c  stw 28, 176(1)
  027bf70  bl 0x502578
  027bf74  nop
  027bf78  stfs 1, 184(1)
  027bf7c  addic 4, 1, 176
  027bf80  ori 3, 27, 0
  027bf84  li 5, 114
  027bf88  li 6, 0
  027bf8c  bl 0xa0c38
  027bf90  nop
  027bf94  lwz 31, 32(31)
  027bf98  cmpwi 31, -1
  027bf9c  bt 2, 0x27bfac
  027bfa0  extsw 3, 31
  027bfa4  li 4, 1
  027bfa8  bl 0x27b918
  027bfac  li 3, 3
  027bfb0  stb 3, 32(30)
  027bfb4  b 0x27c558
  027bfb8  lwz 3, 4(31)
  027bfbc  cmpwi 3, 0
  027bfc0  bt 2, 0x27c558
  027bfc4  lis 3, 40
  027bfc8  addi 29, 3, -17872
  027bfcc  lis 3, 114
  027bfd0  lfs 1, 48(29)
  027bfd4  lfs 2, -3056(3)
  027bfd8  fmuls 2, 2, 1
  027bfdc  lfs 3, 52(29)
  027bfe0  fdivs 2, 1, 2
  027bfe4  lfs 1, 8(31)
  027bfe8  fmuls 2, 2, 3
  027bfec  bl 0x502578
  027bff0  nop
  027bff4  stfs 1, 8(31)
  027bff8  lfs 31, 8(29)
  027bffc  lfs 30, 12(29)
  027c000  fadds 1, 1, 31
  027c004  lfs 29, 16(29)
  027c008  lfs 28, 20(29)
  027c00c  lfs 27, 24(29)
  027c010  lfs 26, 28(29)
  027c014  lfs 25, 32(29)
  027c018  fsubs 2, 30, 1
  027c01c  fsubs 3, 29, 1
  027c020  fsub 5, 1, 2
  027c024  fsel 1, 5, 2, 1
  027c028  fsub 2, 3, 1
  027c02c  fsel 1, 2, 3, 1
  027c030  lfs 3, 72(30)
  027c034  lfs 7, 56(29)
  027c038  lfs 24, 4(29)
  027c03c  fmr 2, 24
  027c040  fmuls 4, 1, 1
  027c044  fmuls 6, 4, 1
  027c048  fmuls 5, 4, 6
  027c04c  fmadds 6, 6, 28, 1
  027c050  fmr 1, 3
  027c054  fmuls 3, 4, 5
  027c058  fmadds 5, 5, 27, 6
  027c05c  fmuls 4, 4, 3
  027c060  fmadds 3, 3, 26, 5
  027c064  fmadds 3, 4, 25, 3
  027c068  fadds 23, 3, 7
  027c06c  bl 0x502578
  027c070  nop
  027c074  fadds 1, 1, 31
  027c078  fsubs 2, 30, 1
  027c07c  fsubs 3, 29, 1
  027c080  fsub 4, 1, 2
  027c084  fsel 1, 4, 2, 1
  027c088  fsub 2, 3, 1
  027c08c  fsel 2, 2, 3, 1
  027c090  lfs 1, 72(30)
  027c094  fmuls 3, 2, 2
  027c098  fmuls 4, 3, 2
  027c09c  fmuls 5, 3, 4
  027c0a0  fmadds 4, 4, 28, 2
  027c0a4  fmr 2, 24
  027c0a8  fmuls 6, 3, 5
  027c0ac  fmadds 4, 5, 27, 4
  027c0b0  fmuls 3, 3, 6
  027c0b4  fmadds 4, 6, 26, 4
  027c0b8  fmadds 3, 3, 25, 4
  027c0bc  fmuls 3, 3, 23
  027c0c0  stfs 3, 224(1)
  027c0c4  bl 0x502578
  027c0c8  nop
  027c0cc  fsubs 2, 30, 1
  027c0d0  fsubs 3, 29, 1
  027c0d4  li 3, 0
  027c0d8  addic 4, 30, 16
  027c0dc  addic 5, 1, 224
  027c0e0  stw 3, 232(1)
  027c0e4  fsub 4, 1, 2
  027c0e8  addic 3, 1, 240
  027c0ec  fsel 1, 4, 2, 1
  027c0f0  fsub 2, 3, 1
  027c0f4  fsel 1, 2, 3, 1
  027c0f8  fmuls 2, 1, 1
  027c0fc  fmuls 3, 2, 1
  027c100  fmuls 4, 2, 3
  027c104  fmadds 1, 3, 28, 1
  027c108  fmuls 3, 2, 4
  027c10c  fmadds 1, 4, 27, 1
  027c110  fmuls 2, 2, 3
  027c114  fmadds 1, 3, 26, 1
  027c118  fmadds 1, 2, 25, 1
  027c11c  fmuls 1, 1, 23
  027c120  stfs 1, 228(1)
  027c124  bl 0x5023f0
  027c128  nop
  027c12c  lwz 3, 4(31)
  027c130  lfs 1, 240(1)
  027c134  stfs 1, 16(3)
  027c138  lfs 1, 244(1)
  027c13c  stfs 1, 20(3)
  027c140  lfs 1, 248(1)
  027c144  stfs 1, 24(3)
  027c148  lfs 1, 252(1)
  027c14c  stfs 1, 28(3)
  027c150  lfs 1, 44(29)
  027c154  fcmpu 0, 23, 1
  027c158  cror 6, 1, 2
  027c15c  bt 6, 0x27c558
  027c160  lhz 5, 178(30)
  027c164  lis 4, 151
  027c168  extsh 6, 5
  027c16c  lis 3, 161
  027c170  srawi 6, 6, 5
  027c174  addic 3, 3, -13028
  027c178  sldi 6, 6, 2
  027c17c  lwz 4, -25488(4)
  027c180  lis 7, 165
  027c184  addc 3, 6, 3
  027c188  extsh 6, 5
  027c18c  slwi 4, 4, 8
  027c190  srawi 6, 6, 5
  027c194  extsw 4, 4
  027c198  clrldi 3, 3, 32
  027c19c  addic 7, 7, 19920
  027c1a0  sldi 6, 6, 2
  027c1a4  clrlwi 8, 5, 27
  027c1a8  li 9, 1
  027c1ac  clrlwi 5, 5, 27
  027c1b0  lwzx 10, 3, 4
  027c1b4  slw 8, 9, 8
  027c1b8  slw 5, 9, 5
  027c1bc  lwzx 9, 7, 6
  027c1c0  or 8, 10, 8
  027c1c4  li 11, 4
  027c1c8  or 5, 9, 5
  027c1cc  stwx 8, 3, 4
  027c1d0  stwx 5, 7, 6
  027c1d4  stb 11, 32(30)
  027c1d8  b 0x27c558
  027c1dc  lis 3, 162
  027c1e0  lwz 5, 4(31)
  027c1e4  li 4, 1
  027c1e8  addic 3, 3, 2088
  027c1ec  cmpwi 5, 0
  027c1f0  stw 4, 4(3)
  027c1f4  bf 2, 0x27c35c
  027c1f8  lis 3, 40
  027c1fc  lfs 1, 72(30)
  027c200  addi 29, 3, -17872
  027c204  lfs 31, 4(29)
  027c208  fmr 2, 31
  027c20c  bl 0x502578
  027c210  nop
  027c214  lfs 2, 8(29)
  027c218  lfs 30, 12(29)
  027c21c  fadds 1, 1, 2
  027c220  lfs 29, 16(29)
  027c224  lfs 28, 20(29)
  027c228  lfs 27, 24(29)
  027c22c  lfs 26, 28(29)
  027c230  lfs 25, 32(29)
  027c234  lfs 24, 44(29)
  027c238  fsubs 2, 30, 1
  027c23c  fsubs 3, 29, 1
  027c240  fsub 5, 1, 2
  027c244  fsel 1, 5, 2, 1
  027c248  fsub 2, 3, 1
  027c24c  fsel 1, 2, 3, 1
  027c250  lfs 2, 72(30)
  027c254  fmuls 3, 1, 1
  027c258  fmuls 4, 3, 1
  027c25c  fmuls 5, 3, 4
  027c260  fmadds 1, 4, 28, 1
  027c264  fmuls 4, 3, 5
  027c268  fmadds 5, 5, 27, 1
  027c26c  fmr 1, 2
  027c270  fmr 2, 31
  027c274  fmuls 3, 3, 4
  027c278  fmadds 4, 4, 26, 5
  027c27c  fmadds 3, 3, 25, 4
  027c280  fmuls 3, 3, 24
  027c284  stfs 3, 256(1)
  027c288  bl 0x502578
  027c28c  nop
  027c290  fsubs 2, 30, 1
  027c294  fsubs 3, 29, 1
  027c298  li 6, 0
  027c29c  addic 3, 1, 272
  027c2a0  addic 4, 1, 256
  027c2a4  addic 5, 30, 16
  027c2a8  fsub 4, 1, 2
  027c2ac  fsel 1, 4, 2, 1
  027c2b0  fsub 2, 3, 1
  027c2b4  fsel 1, 2, 3, 1
  027c2b8  fmuls 2, 1, 1
  027c2bc  fmuls 3, 2, 1
  027c2c0  fmuls 4, 2, 3
  027c2c4  fmadds 1, 3, 28, 1
  027c2c8  fmuls 3, 2, 4
  027c2cc  fmadds 1, 4, 27, 1
  027c2d0  fmuls 2, 2, 3
  027c2d4  fmadds 1, 3, 26, 1
  027c2d8  fmadds 1, 2, 25, 1
  027c2dc  fmuls 1, 1, 24
  027c2e0  stfs 1, 260(1)
  027c2e4  lfs 1, 60(29)
  027c2e8  stw 6, 264(1)
  027c2ec  fmr 31, 1
  027c2f0  bl 0x502b08
  027c2f4  nop
  027c2f8  lfs 30, 40(29)
  027c2fc  lfs 1, 72(30)
  027c300  fmr 2, 30
  027c304  bl 0x502578
  027c308  nop
  027c30c  lfs 2, 16(30)
  027c310  lfs 3, 20(30)
  027c314  stfs 2, 48(1)
  027c318  lfs 2, 24(30)
  027c31c  lfs 4, 28(30)
  027c320  stfs 2, 56(1)
  027c324  stfs 31, 64(1)
  027c328  stfs 1, 72(1)
  027c32c  stfs 3, 52(1)
  027c330  stfs 4, 60(1)
  027c334  stfs 30, 68(1)
  027c338  stfs 31, 76(1)
  027c33c  ld 3, 48(1)
  027c340  ld 4, 56(1)
  027c344  ld 5, 64(1)
  027c348  ld 6, 72(1)
  027c34c  bl 0x27b170
  027c350  nop
  027c354  stw 3, 4(31)
  027c358  b 0x27c4a4
  027c35c  lis 3, 40
  027c360  lfs 1, 72(30)
  027c364  addi 29, 3, -17872
  027c368  lfs 31, 4(29)
  027c36c  fmr 2, 31
  027c370  bl 0x502578
  027c374  nop
  027c378  lfs 2, 8(29)
  027c37c  lfs 30, 12(29)
  027c380  fadds 1, 1, 2
  027c384  lfs 29, 16(29)
  027c388  lfs 28, 20(29)
  027c38c  lfs 27, 24(29)
  027c390  lfs 26, 28(29)
  027c394  lfs 25, 32(29)
  027c398  lfs 24, 44(29)
  027c39c  fsubs 2, 30, 1
  027c3a0  fsubs 3, 29, 1
  027c3a4  lfs 5, 72(30)
  027c3a8  fsub 4, 1, 2
  027c3ac  fsel 1, 4, 2, 1
  027c3b0  fsub 4, 3, 1
  027c3b4  fsel 1, 4, 3, 1
  027c3b8  fmuls 3, 1, 1
  027c3bc  fmuls 4, 3, 1
  027c3c0  fmuls 2, 3, 4
  027c3c4  fmadds 1, 4, 28, 1
  027c3c8  fmuls 4, 3, 2
  027c3cc  fmadds 6, 2, 27, 1
  027c3d0  fmr 1, 5
  027c3d4  fmr 2, 31
  027c3d8  fmuls 3, 3, 4
  027c3dc  fmadds 4, 4, 26, 6
  027c3e0  fmadds 3, 3, 25, 4
  027c3e4  fmuls 3, 3, 24
  027c3e8  stfs 3, 288(1)
  027c3ec  bl 0x502578
  027c3f0  nop
  027c3f4  fsubs 2, 30, 1
  027c3f8  fsubs 3, 29, 1
  027c3fc  li 28, 0
  027c400  addic 3, 1, 304
  027c404  addic 4, 1, 288
  027c408  addic 5, 30, 16
  027c40c  stw 28, 296(1)
  027c410  fsub 4, 1, 2
  027c414  fsel 1, 4, 2, 1
  027c418  fsub 2, 3, 1
  027c41c  fsel 1, 2, 3, 1
  027c420  fmuls 2, 1, 1
  027c424  fmuls 3, 2, 1
  027c428  fmuls 4, 2, 3
  027c42c  fmadds 1, 3, 28, 1
  027c430  fmuls 3, 2, 4
  027c434  fmadds 1, 4, 27, 1
  027c438  fmuls 2, 2, 3
  027c43c  fmadds 1, 3, 26, 1
  027c440  fmadds 1, 2, 25, 1
  027c444  fmuls 1, 1, 24
  027c448  stfs 1, 292(1)
  027c44c  bl 0x502b08
  027c450  nop
  027c454  lfs 1, 72(30)
  027c458  lfs 2, 40(29)
  027c45c  bl 0x502578
  027c460  nop
  027c464  lwz 3, 4(31)
  027c468  lis 4, 16329
  027c46c  lfs 2, 288(1)
  027c470  ori 4, 4, 4059
  027c474  stfs 2, 16(3)
  027c478  lfs 2, 292(1)
  027c47c  stfs 2, 20(3)
  027c480  lfs 2, 296(1)
  027c484  stfs 2, 24(3)
  027c488  lfs 2, 300(1)
  027c48c  stfs 2, 28(3)
  027c490  lwz 3, 4(31)
  027c494  stw 28, 64(3)
  027c498  stw 4, 68(3)
  027c49c  stfs 1, 72(3)
  027c4a0  stw 28, 76(3)
  027c4a4  lis 3, 151
  027c4a8  addic 3, 3, -16400
  027c4ac  lbz 4, 109(3)
  027c4b0  cmpwi 4, 0
  027c4b4  bf 2, 0x27c558
  027c4b8  lwz 5, 32(31)
  027c4bc  lis 4, 165
  027c4c0  slwi 5, 5, 2
  027c4c4  addic 4, 4, -28284
  027c4c8  extsw 5, 5
  027c4cc  lwzx 31, 4, 5
  027c4d0  cmpwi 31, 0
  027c4d4  bt 2, 0x27c558
  027c4d8  li 6, 0
  027c4dc  lis 4, 164
  027c4e0  lhz 5, 0(31)
  027c4e4  lwz 7, -28512(4)
  027c4e8  rlwinm 5, 5, 8, 9, 23
  027c4ec  addc 5, 7, 5
  027c4f0  clrldi 5, 5, 32
  027c4f4  cmpwi 5, 0
  027c4f8  bt 2, 0x27c510
  027c4fc  lbz 5, 32(5)
  027c500  cmpwi 5, 254
  027c504  cmpwi 1, 5, 253
  027c508  bt 2, 0x27c510
  027c50c  bf 6, 0x27c514
  027c510  addic 6, 6, 1
  027c514  lhz 5, 0(31)
  027c518  addic 31, 31, 2
  027c51c  extsh 5, 5
  027c520  cmpwi 5, 0
  027c524  bf 0, 0x27c4e0
  027c528  cmpwi 6, 9
  027c52c  bf 1, 0x27c558
  027c530  lis 4, 151
  027c534  lis 5, 151
  027c538  li 6, 1
  027c53c  lwz 7, -25440(4)
  027c540  lwz 8, -13820(5)
  027c544  stb 6, 109(3)
  027c548  addic 3, 7, 15000
  027c54c  addic 6, 8, 15000
  027c550  stw 3, -25440(4)
  027c554  stw 6, -13820(5)
  027c558  ld 0, 464(1)
  027c55c  mtlr 0
  027c560  lfd 23, 376(1)
  027c564  lfd 24, 384(1)
  027c568  lfd 25, 392(1)
  027c56c  lfd 26, 400(1)
  027c570  lfd 27, 408(1)
  027c574  lfd 28, 416(1)
  027c578  lfd 29, 424(1)
  027c57c  lfd 30, 432(1)
  027c580  lfd 31, 440(1)
  027c584  ld 26, 328(1)
  027c588  ld 27, 336(1)
  027c58c  ld 28, 344(1)
  027c590  ld 29, 352(1)
  027c594  ld 30, 360(1)
  027c598  ld 31, 368(1)
  027c59c  addi 1, 1, 448
  027c5a0  blr
