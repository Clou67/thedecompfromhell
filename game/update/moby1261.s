# game/update/moby1261.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1261_0022b8ec:   # 0x22b8ec, 0x14 bytes
  022b8ec  lis 3, 119
  022b8f0  lis 4, 1
  022b8f4  addic 3, 3, 20580
  022b8f8  stw 4, 72(3)
  022b8fc  blr

M1261_0022b928:   # 0x22b928, 0x1c8 bytes
  022b928  stdu 1, -192(1)
  022b92c  mflr 0
  022b930  std 0, 208(1)
  022b934  stfd 28, 160(1)
  022b938  stfd 29, 168(1)
  022b93c  stfd 30, 176(1)
  022b940  stfd 31, 184(1)
  022b944  std 31, 152(1)
  022b948  lis 4, 35
  022b94c  std 30, 144(1)
  022b950  ori 31, 3, 0
  022b954  std 29, 136(1)
  022b958  addi 30, 4, -18176
  022b95c  bl 0xfcc68
  022b960  nop
  022b964  lfs 31, 0(30)
  022b968  fmr 30, 1
  022b96c  lis 3, 119
  022b970  fmr 1, 31
  022b974  lfs 2, 20744(3)
  022b978  bl 0xfcbe8
  022b97c  nop
  022b980  fmr 29, 1
  022b984  fmr 1, 31
  022b988  lis 29, 119
  022b98c  lfs 2, 20728(29)
  022b990  bl 0xfcbe8
  022b994  nop
  022b998  lis 3, 119
  022b99c  fmr 31, 1
  022b9a0  lfs 1, 20728(29)
  022b9a4  lfs 2, 20732(3)
  022b9a8  bl 0xfcbe8
  022b9ac  nop
  022b9b0  lis 3, 119
  022b9b4  lis 4, 119
  022b9b8  fmr 28, 1
  022b9bc  lwz 3, 20736(3)
  022b9c0  lwz 4, 20740(4)
  022b9c4  extsw 3, 3
  022b9c8  extsw 4, 4
  022b9cc  bl 0xfe484
  022b9d0  nop
  022b9d4  lfs 1, 4(30)
  022b9d8  lfs 2, 8(30)
  022b9dc  fadds 1, 30, 1
  022b9e0  lfs 3, 12(30)
  022b9e4  fsubs 4, 2, 30
  022b9e8  lis 4, 119
  022b9ec  lis 5, 119
  022b9f0  ori 8, 3, 0
  022b9f4  addic 3, 1, 112
  022b9f8  fsubs 2, 2, 1
  022b9fc  fsub 6, 30, 4
  022ba00  fsubs 5, 3, 1
  022ba04  fsubs 3, 3, 30
  022ba08  fsub 7, 1, 2
  022ba0c  fsel 4, 6, 4, 30
  022ba10  lfs 6, 16(30)
  022ba14  fsel 1, 7, 2, 1
  022ba18  fsub 2, 3, 4
  022ba1c  fsub 8, 5, 1
  022ba20  fsel 2, 2, 3, 4
  022ba24  lfs 3, 20(30)
  022ba28  lfs 4, 24(30)
  022ba2c  lfs 9, 28(30)
  022ba30  lfs 10, 16(31)
  022ba34  fsel 1, 8, 5, 1
  022ba38  fmuls 5, 2, 2
  022ba3c  fmuls 7, 1, 1
  022ba40  fmuls 8, 5, 2
  022ba44  fmuls 11, 7, 1
  022ba48  fmuls 12, 5, 8
  022ba4c  fmadds 2, 8, 6, 2
  022ba50  lfs 8, 20(31)
  022ba54  fmuls 13, 7, 11
  022ba58  fmadds 1, 11, 6, 1
  022ba5c  fmuls 6, 5, 12
  022ba60  fmadds 2, 12, 3, 2
  022ba64  fmuls 11, 7, 13
  022ba68  fmadds 1, 13, 3, 1
  022ba6c  fmuls 3, 5, 6
  022ba70  fmadds 2, 6, 4, 2
  022ba74  lfs 5, 24(31)
  022ba78  fmuls 6, 7, 11
  022ba7c  fmadds 1, 11, 4, 1
  022ba80  fmadds 2, 3, 9, 2
  022ba84  fmadds 1, 6, 9, 1
  022ba88  fmadds 2, 2, 29, 8
  022ba8c  fmadds 1, 1, 29, 10
  022ba90  stfs 2, 116(1)
  022ba94  lwz 4, 20720(4)
  022ba98  lwz 5, 20724(5)
  022ba9c  extsw 4, 4
  022baa0  fmr 2, 28
  022baa4  extsw 5, 5
  022baa8  stfs 1, 112(1)
  022baac  lfs 3, 32(30)
  022bab0  fmr 1, 31
  022bab4  fadds 3, 5, 3
  022bab8  stfs 3, 120(1)
  022babc  bl 0x12f6b0
  022bac0  nop
  022bac4  ld 0, 208(1)
  022bac8  mtlr 0
  022bacc  lfd 28, 160(1)
  022bad0  lfd 29, 168(1)
  022bad4  lfd 30, 176(1)
  022bad8  lfd 31, 184(1)
  022badc  ld 29, 136(1)
  022bae0  ld 30, 144(1)
  022bae4  ld 31, 152(1)
  022bae8  addi 1, 1, 192
  022baec  blr

M1261_0022bb60:   # 0x22bb60, 0xa30 bytes
  022bb60  stdu 1, -496(1)
  022bb64  mflr 0
  022bb68  std 0, 512(1)
  022bb6c  stfd 15, 360(1)
  022bb70  stfd 16, 368(1)
  022bb74  stfd 17, 376(1)
  022bb78  stfd 18, 384(1)
  022bb7c  stfd 19, 392(1)
  022bb80  stfd 20, 400(1)
  022bb84  stfd 21, 408(1)
  022bb88  stfd 22, 416(1)
  022bb8c  stfd 23, 424(1)
  022bb90  stfd 24, 432(1)
  022bb94  stfd 25, 440(1)
  022bb98  stfd 26, 448(1)
  022bb9c  stfd 27, 456(1)
  022bba0  stfd 28, 464(1)
  022bba4  stfd 29, 472(1)
  022bba8  stfd 30, 480(1)
  022bbac  stfd 31, 488(1)
  022bbb0  std 25, 304(1)
  022bbb4  lis 4, 35
  022bbb8  li 25, 0
  022bbbc  lfs 31, 16(3)
  022bbc0  std 28, 328(1)
  022bbc4  addi 4, 4, -17680
  022bbc8  lis 28, 114
  022bbcc  lis 5, 149
  022bbd0  lfs 27, 0(4)
  022bbd4  stw 25, 128(1)
  022bbd8  stw 25, 132(1)
  022bbdc  stw 25, 136(1)
  022bbe0  addic 5, 5, 5056
  022bbe4  stw 25, 140(1)
  022bbe8  lfs 26, 4(4)
  022bbec  lfs 30, 20(3)
  022bbf0  stfs 31, 144(1)
  022bbf4  lfs 1, 28(3)
  022bbf8  stfs 30, 148(1)
  022bbfc  stfs 1, 156(1)
  022bc00  lfs 25, 8(4)
  022bc04  lfs 1, 24(3)
  022bc08  lfs 2, -3052(28)
  022bc0c  fadds 29, 1, 25
  022bc10  fmuls 1, 2, 26
  022bc14  std 27, 320(1)
  022bc18  frsqrte 2, 25
  022bc1c  fsqrts 21, 25
  022bc20  std 30, 344(1)
  022bc24  std 26, 312(1)
  022bc28  addic 27, 1, 144
  022bc2c  lis 26, 114
  022bc30  std 31, 352(1)
  022bc34  ori 30, 25, 0
  022bc38  ori 31, 3, 0
  022bc3c  stfs 29, 152(1)
  022bc40  lfs 24, 12(4)
  022bc44  stw 25, 128(1)
  022bc48  stw 25, 132(1)
  022bc4c  lfs 3, 324(5)
  022bc50  lfs 5, 320(5)
  022bc54  fmuls 1, 1, 24
  022bc58  fsubs 30, 3, 30
  022bc5c  lfs 3, 328(5)
  022bc60  fnmsubs 4, 2, 2, 25
  022bc64  fsubs 31, 5, 31
  022bc68  fsubs 29, 3, 29
  022bc6c  fmuls 23, 30, 30
  022bc70  stfs 1, 136(1)
  022bc74  lfs 16, 36(4)
  022bc78  fmuls 1, 16, 2
  022bc7c  lfs 22, 16(4)
  022bc80  lfs 20, 20(4)
  022bc84  lfs 19, 24(4)
  022bc88  lfs 18, 28(4)
  022bc8c  lfs 17, 32(4)
  022bc90  fmadds 23, 31, 31, 23
  022bc94  fmadds 1, 4, 1, 2
  022bc98  fmadds 28, 29, 29, 23
  022bc9c  fmuls 2, 16, 1
  022bca0  fnmsubs 3, 1, 1, 25
  022bca4  fsqrts 28, 28
  022bca8  fmadds 15, 3, 2, 1
  022bcac  fmuls 1, 16, 15
  022bcb0  std 29, 336(1)
  022bcb4  std 24, 296(1)
  022bcb8  std 23, 288(1)
  022bcbc  std 22, 280(1)
  022bcc0  fnmsubs 2, 15, 15, 25
  022bcc4  fmadds 15, 2, 1, 15
  022bcc8  fmr 1, 22
  022bccc  stw 25, 160(1)
  022bcd0  fmr 2, 25
  022bcd4  stw 25, 164(1)
  022bcd8  stw 25, 168(1)
  022bcdc  stw 25, 172(1)
  022bce0  bl 0xfcbe8
  022bce4  nop
  022bce8  stfs 1, 160(1)
  022bcec  fmr 1, 22
  022bcf0  fmr 2, 25
  022bcf4  bl 0xfcbe8
  022bcf8  nop
  022bcfc  lfs 3, 168(1)
  022bd00  fsub 4, 27, 21
  022bd04  fsub 6, 21, 27
  022bd08  fmuls 5, 3, 15
  022bd0c  stfs 1, 164(1)
  022bd10  fmr 2, 25
  022bd14  fmr 1, 27
  022bd18  fsel 4, 4, 27, 5
  022bd1c  fsel 4, 6, 4, 5
  022bd20  fsubs 3, 3, 4
  022bd24  stfs 3, 168(1)
  022bd28  bl 0xfcbe8
  022bd2c  nop
  022bd30  fmuls 3, 1, 15
  022bd34  fsub 4, 27, 21
  022bd38  fsub 5, 21, 27
  022bd3c  fmr 2, 19
  022bd40  lfs 6, 168(1)
  022bd44  fmr 1, 20
  022bd48  fsel 4, 4, 27, 3
  022bd4c  fsel 3, 5, 4, 3
  022bd50  fadds 3, 6, 3
  022bd54  stfs 3, 168(1)
  022bd58  bl 0xfcbe8
  022bd5c  nop
  022bd60  lfs 2, 164(1)
  022bd64  lfs 3, 160(1)
  022bd68  fmuls 4, 2, 2
  022bd6c  lfs 5, 168(1)
  022bd70  fmuls 1, 1, 24
  022bd74  lfs 6, -3052(28)
  022bd78  lfs 7, 128(1)
  022bd7c  lfs 8, 132(1)
  022bd80  lfs 9, 136(1)
  022bd84  fmadds 4, 3, 3, 4
  022bd88  fmuls 1, 1, 6
  022bd8c  lfs 10, -3056(26)
  022bd90  fmuls 6, 10, 18
  022bd94  fmuls 10, 10, 17
  022bd98  fmadds 4, 5, 5, 4
  022bd9c  fctiwz 6, 6
  022bda0  fctiwz 10, 10
  022bda4  fsqrts 4, 4
  022bda8  stfd 6, 256(1)
  022bdac  lwz 3, 260(1)
  022bdb0  stfd 10, 256(1)
  022bdb4  lwz 4, 260(1)
  022bdb8  extsw 3, 3
  022bdbc  extsw 4, 4
  022bdc0  fdivs 1, 1, 4
  022bdc4  fsub 6, 27, 4
  022bdc8  fsub 11, 27, 4
  022bdcc  fsub 12, 27, 4
  022bdd0  fsub 13, 4, 27
  022bdd4  fsub 0, 4, 27
  022bdd8  fsub 4, 4, 27
  022bddc  fmuls 5, 5, 1
  022bde0  fmuls 2, 2, 1
  022bde4  fmuls 1, 3, 1
  022bde8  fsel 3, 6, 27, 5
  022bdec  fsel 6, 11, 27, 2
  022bdf0  fsel 10, 12, 27, 1
  022bdf4  fsel 3, 13, 3, 5
  022bdf8  fsel 2, 0, 6, 2
  022bdfc  fsel 1, 4, 10, 1
  022be00  fadds 3, 3, 9
  022be04  fadds 2, 2, 8
  022be08  fadds 1, 1, 7
  022be0c  stfs 3, 168(1)
  022be10  stfs 2, 164(1)
  022be14  stfs 1, 160(1)
  022be18  bl 0xfe484
  022be1c  nop
  022be20  ori 5, 3, 0
  022be24  addic 4, 1, 160
  022be28  ori 3, 27, 0
  022be2c  li 6, 0
  022be30  bl 0x2a57a0
  022be34  nop
  022be38  addic 30, 30, 1
  022be3c  cmpwi 30, 10
  022be40  bt 0, 0x22bcc8
  022be44  lis 3, 35
  022be48  ori 30, 25, 0
  022be4c  addi 3, 3, -17680
  022be50  lfs 20, 40(3)
  022be54  lfs 17, 44(3)
  022be58  fmr 1, 22
  022be5c  stw 25, 192(1)
  022be60  fmr 2, 25
  022be64  stw 25, 196(1)
  022be68  stw 25, 200(1)
  022be6c  stw 25, 204(1)
  022be70  bl 0xfcbe8
  022be74  nop
  022be78  stfs 1, 192(1)
  022be7c  fmr 1, 22
  022be80  fmr 2, 25
  022be84  bl 0xfcbe8
  022be88  nop
  022be8c  lfs 3, 200(1)
  022be90  fsub 4, 27, 21
  022be94  fsub 6, 21, 27
  022be98  fmuls 5, 3, 15
  022be9c  stfs 1, 196(1)
  022bea0  fmr 2, 25
  022bea4  fmr 1, 27
  022bea8  fsel 4, 4, 27, 5
  022beac  fsel 4, 6, 4, 5
  022beb0  fsubs 3, 3, 4
  022beb4  stfs 3, 200(1)
  022beb8  bl 0xfcbe8
  022bebc  nop
  022bec0  fmuls 3, 1, 15
  022bec4  fsub 4, 27, 21
  022bec8  fsub 5, 21, 27
  022becc  fmr 2, 20
  022bed0  lfs 6, 200(1)
  022bed4  fmr 1, 19
  022bed8  fsel 4, 4, 27, 3
  022bedc  fsel 3, 5, 4, 3
  022bee0  fadds 3, 6, 3
  022bee4  stfs 3, 200(1)
  022bee8  bl 0xfcbe8
  022beec  nop
  022bef0  lfs 2, 196(1)
  022bef4  lfs 3, 192(1)
  022bef8  fmuls 4, 2, 2
  022befc  lfs 5, 200(1)
  022bf00  fmuls 1, 1, 24
  022bf04  lfs 6, -3052(28)
  022bf08  lfs 7, 128(1)
  022bf0c  lfs 8, 132(1)
  022bf10  lfs 9, 136(1)
  022bf14  fmadds 4, 3, 3, 4
  022bf18  fmuls 1, 1, 6
  022bf1c  lfs 10, -3056(26)
  022bf20  fmuls 6, 10, 18
  022bf24  fmuls 10, 10, 17
  022bf28  fmadds 4, 5, 5, 4
  022bf2c  fctiwz 6, 6
  022bf30  fctiwz 10, 10
  022bf34  fsqrts 4, 4
  022bf38  stfd 6, 256(1)
  022bf3c  lwz 3, 260(1)
  022bf40  stfd 10, 256(1)
  022bf44  lwz 4, 260(1)
  022bf48  extsw 3, 3
  022bf4c  extsw 4, 4
  022bf50  fdivs 1, 1, 4
  022bf54  fsub 6, 27, 4
  022bf58  fsub 11, 27, 4
  022bf5c  fsub 12, 27, 4
  022bf60  fsub 13, 4, 27
  022bf64  fsub 0, 4, 27
  022bf68  fsub 4, 4, 27
  022bf6c  fmuls 5, 5, 1
  022bf70  fmuls 2, 2, 1
  022bf74  fmuls 1, 3, 1
  022bf78  fsel 3, 6, 27, 5
  022bf7c  fsel 6, 11, 27, 2
  022bf80  fsel 10, 12, 27, 1
  022bf84  fsel 3, 13, 3, 5
  022bf88  fsel 2, 0, 6, 2
  022bf8c  fsel 1, 4, 10, 1
  022bf90  fadds 3, 3, 9
  022bf94  fadds 2, 2, 8
  022bf98  fadds 1, 1, 7
  022bf9c  stfs 3, 200(1)
  022bfa0  stfs 2, 196(1)
  022bfa4  stfs 1, 192(1)
  022bfa8  bl 0xfe484
  022bfac  nop
  022bfb0  ori 5, 3, 0
  022bfb4  addic 4, 1, 192
  022bfb8  ori 3, 27, 0
  022bfbc  li 6, 1
  022bfc0  bl 0x2a57a0
  022bfc4  nop
  022bfc8  addic 30, 30, 1
  022bfcc  cmpwi 30, 4
  022bfd0  bt 0, 0x22be58
  022bfd4  fmr 1, 22
  022bfd8  stw 25, 176(1)
  022bfdc  stw 25, 180(1)
  022bfe0  fmr 2, 25
  022bfe4  stw 25, 184(1)
  022bfe8  stw 25, 188(1)
  022bfec  bl 0xfcbe8
  022bff0  nop
  022bff4  stfs 1, 176(1)
  022bff8  fmr 2, 25
  022bffc  fmr 1, 22
  022c000  bl 0xfcbe8
  022c004  nop
  022c008  stfs 1, 180(1)
  022c00c  fmr 2, 25
  022c010  fmr 1, 22
  022c014  bl 0xfcbe8
  022c018  nop
  022c01c  fmadds 4, 28, 16, 29
  022c020  lfs 2, 180(1)
  022c024  lfs 5, 176(1)
  022c028  fmuls 3, 2, 2
  022c02c  lis 3, 35
  022c030  fmuls 9, 28, 26
  022c034  stfs 1, 184(1)
  022c038  addi 3, 3, -17680
  022c03c  fmadds 6, 4, 4, 23
  022c040  fmadds 3, 5, 5, 3
  022c044  lfs 7, 48(3)
  022c048  lfs 8, -3052(28)
  022c04c  fmuls 7, 28, 7
  022c050  fsqrts 6, 6
  022c054  fmadds 3, 1, 1, 3
  022c058  fmuls 9, 9, 8
  022c05c  fmuls 7, 7, 8
  022c060  fsqrts 3, 3
  022c064  fdivs 9, 9, 6
  022c068  fsub 13, 27, 6
  022c06c  fsub 26, 6, 27
  022c070  fsub 23, 27, 6
  022c074  fsub 25, 27, 6
  022c078  fsub 21, 6, 27
  022c07c  fsub 6, 6, 27
  022c080  fdivs 7, 7, 3
  022c084  fsub 10, 27, 3
  022c088  fsub 11, 27, 3
  022c08c  fsub 12, 3, 27
  022c090  fsub 0, 3, 27
  022c094  fsub 29, 27, 3
  022c098  fsub 22, 3, 27
  022c09c  fmuls 3, 8, 20
  022c0a0  fmuls 8, 30, 9
  022c0a4  fmuls 31, 31, 9
  022c0a8  fmuls 4, 4, 9
  022c0ac  fsel 9, 13, 27, 8
  022c0b0  fsel 13, 25, 27, 31
  022c0b4  fsel 30, 23, 27, 4
  022c0b8  fsel 31, 21, 13, 31
  022c0bc  fsel 4, 6, 30, 4
  022c0c0  fmuls 2, 2, 7
  022c0c4  fmuls 5, 5, 7
  022c0c8  fmuls 1, 1, 7
  022c0cc  fsel 7, 26, 9, 8
  022c0d0  fsel 8, 10, 27, 2
  022c0d4  fsel 9, 11, 27, 5
  022c0d8  fsel 10, 29, 27, 1
  022c0dc  fsel 6, 12, 8, 2
  022c0e0  fsel 5, 0, 9, 5
  022c0e4  fsel 8, 22, 10, 1
  022c0e8  fadds 1, 6, 7
  022c0ec  fadds 31, 5, 31
  022c0f0  fadds 2, 8, 4
  022c0f4  stfs 5, 176(1)
  022c0f8  stfs 6, 180(1)
  022c0fc  stfs 8, 184(1)
  022c100  fmuls 4, 1, 1
  022c104  stfs 31, 176(1)
  022c108  stfs 1, 180(1)
  022c10c  stfs 2, 184(1)
  022c110  fmadds 4, 31, 31, 4
  022c114  fmadds 4, 2, 2, 4
  022c118  fsqrts 4, 4
  022c11c  fcmpu 0, 3, 4
  022c120  cror 6, 1, 2
  022c124  bt 6, 0x22c144
  022c128  fdivs 3, 3, 4
  022c12c  fmuls 4, 31, 3
  022c130  fmuls 1, 1, 3
  022c134  fmuls 2, 2, 3
  022c138  stfs 4, 176(1)
  022c13c  stfs 1, 180(1)
  022c140  stfs 2, 184(1)
  022c144  lfs 1, -3056(26)
  022c148  fmuls 2, 1, 18
  022c14c  fmuls 1, 1, 17
  022c150  fctiwz 2, 2
  022c154  fctiwz 1, 1
  022c158  stfd 2, 256(1)
  022c15c  lwz 3, 260(1)
  022c160  stfd 1, 256(1)
  022c164  extsw 3, 3
  022c168  lwz 4, 260(1)
  022c16c  extsw 4, 4
  022c170  bl 0xfe484
  022c174  nop
  022c178  ori 5, 3, 0
  022c17c  ori 3, 27, 0
  022c180  addic 4, 1, 176
  022c184  li 6, 1
  022c188  bl 0x2a57a0
  022c18c  nop
  022c190  lis 3, 35
  022c194  li 30, 4
  022c198  addi 3, 3, -17680
  022c19c  lfs 18, 52(3)
  022c1a0  fcmpu 0, 28, 18
  022c1a4  cror 6, 1, 2
  022c1a8  bt 6, 0x22c1bc
  022c1ac  fmr 1, 28
  022c1b0  bl 0x502758
  022c1b4  nop
  022c1b8  addic 30, 3, 1
  022c1bc  lis 3, 35
  022c1c0  cmpwi 30, 0
  022c1c4  addi 3, 3, -17680
  022c1c8  ori 29, 25, 0
  022c1cc  lfs 1, 56(3)
  022c1d0  fsubs 2, 1, 28
  022c1d4  fsub 1, 28, 1
  022c1d8  fsel 27, 1, 27, 2
  022c1dc  bf 1, 0x22c380
  022c1e0  lis 3, 35
  022c1e4  addi 3, 3, -17680
  022c1e8  lfs 31, 60(3)
  022c1ec  lfs 30, 64(3)
  022c1f0  lfs 29, 68(3)
  022c1f4  lfs 26, 72(3)
  022c1f8  lfs 25, 76(3)
  022c1fc  lfs 23, 80(3)
  022c200  fmr 1, 31
  022c204  fmr 2, 20
  022c208  bl 0xfcbe8
  022c20c  nop
  022c210  lis 3, 20224
  022c214  lfs 2, -3052(28)
  022c218  lis 4, 20224
  022c21c  ori 3, 3, 65423
  022c220  fmuls 1, 1, 24
  022c224  lis 6, 20224
  022c228  fmuls 3, 2, 27
  022c22c  ori 4, 4, 65407
  022c230  ori 6, 6, 65391
  022c234  stw 3, 208(1)
  022c238  lis 5, 12032
  022c23c  stw 3, 212(1)
  022c240  lis 7, 12032
  022c244  lis 3, 12287
  022c248  stw 4, 216(1)
  022c24c  lis 8, 12032
  022c250  stw 6, 220(1)
  022c254  ori 3, 3, 65535
  022c258  ori 4, 5, 32607
  022c25c  ori 5, 7, 32591
  022c260  lis 6, 12032
  022c264  stw 3, 224(1)
  022c268  ori 8, 8, 32575
  022c26c  stw 3, 228(1)
  022c270  ori 6, 6, 20224
  022c274  lis 7, 12032
  022c278  stw 4, 232(1)
  022c27c  lis 4, 16128
  022c280  stw 5, 236(1)
  022c284  stw 8, 240(1)
  022c288  li 3, 6
  022c28c  stw 6, 244(1)
  022c290  fmsubs 22, 1, 2, 3
  022c294  stw 7, 248(1)
  022c298  stw 4, 252(1)
  022c29c  bl 0xfc620
  022c2a0  nop
  022c2a4  sldi 4, 3, 2
  022c2a8  li 3, 6
  022c2ac  addc 4, 4, 1
  022c2b0  clrldi 4, 4, 32
  022c2b4  lwz 4, 208(4)
  022c2b8  extsw 24, 4
  022c2bc  bl 0xfc620
  022c2c0  nop
  022c2c4  lfs 1, -3056(26)
  022c2c8  sldi 3, 3, 2
  022c2cc  fmuls 2, 1, 29
  022c2d0  addc 3, 3, 1
  022c2d4  fmuls 1, 1, 26
  022c2d8  clrldi 3, 3, 32
  022c2dc  lwz 3, 232(3)
  022c2e0  extsw 23, 3
  022c2e4  fctiwz 2, 2
  022c2e8  fctiwz 1, 1
  022c2ec  stfd 2, 256(1)
  022c2f0  lwz 3, 260(1)
  022c2f4  stfd 1, 256(1)
  022c2f8  lwz 4, 260(1)
  022c2fc  extsw 3, 3
  022c300  extsw 4, 4
  022c304  bl 0xfe484
  022c308  nop
  022c30c  lfs 1, -3056(26)
  022c310  ori 22, 3, 0
  022c314  fmuls 2, 1, 25
  022c318  fmuls 1, 1, 23
  022c31c  fctiwz 2, 2
  022c320  fctiwz 1, 1
  022c324  stfd 2, 256(1)
  022c328  lwz 3, 260(1)
  022c32c  stfd 1, 256(1)
  022c330  extsw 3, 3
  022c334  lwz 4, 260(1)
  022c338  extsw 4, 4
  022c33c  bl 0xfe484
  022c340  nop
  022c344  ori 9, 3, 0
  022c348  std 25, 112(1)
  022c34c  ori 8, 22, 0
  022c350  fmr 1, 30
  022c354  addic 4, 1, 128
  022c358  fmr 2, 22
  022c35c  ori 3, 27, 0
  022c360  std 25, 120(1)
  022c364  ori 5, 24, 0
  022c368  ori 6, 23, 0
  022c36c  bl 0x123390
  022c370  nop
  022c374  addic 29, 29, 1
  022c378  cmpw 29, 30
  022c37c  bt 0, 0x22c200
  022c380  lis 3, 35
  022c384  addi 3, 3, -17680
  022c388  lfs 1, 84(3)
  022c38c  fcmpu 0, 28, 1
  022c390  cror 6, 0, 2
  022c394  bt 6, 0x22c430
  022c398  lis 3, 35
  022c39c  lfs 2, -3056(26)
  022c3a0  li 28, 32
  022c3a4  addi 30, 3, -17680
  022c3a8  fmr 1, 18
  022c3ac  addic 29, 1, 128
  022c3b0  ori 3, 31, 0
  022c3b4  li 8, 127
  022c3b8  ori 4, 27, 0
  022c3bc  lfs 3, 68(30)
  022c3c0  ori 5, 29, 0
  022c3c4  std 28, 112(1)
  022c3c8  li 9, 127
  022c3cc  fmuls 2, 2, 3
  022c3d0  li 10, 127
  022c3d4  fctiwz 2, 2
  022c3d8  stfd 2, 256(1)
  022c3dc  lwz 7, 260(1)
  022c3e0  extsw 7, 7
  022c3e4  bl 0x4d4138
  022c3e8  nop
  022c3ec  lfs 2, 88(30)
  022c3f0  ori 5, 29, 0
  022c3f4  lfs 3, -3056(26)
  022c3f8  ori 3, 31, 0
  022c3fc  std 28, 112(1)
  022c400  fmr 1, 18
  022c404  fmuls 2, 3, 2
  022c408  ori 4, 27, 0
  022c40c  li 8, 32
  022c410  li 9, 127
  022c414  li 10, 0
  022c418  fctiwz 2, 2
  022c41c  stfd 2, 256(1)
  022c420  lwz 7, 260(1)
  022c424  extsw 7, 7
  022c428  bl 0x4d4138
  022c42c  nop
  022c430  lis 3, 35
  022c434  lfs 2, -3056(26)
  022c438  li 6, 48
  022c43c  addi 30, 3, -17680
  022c440  fmr 1, 18
  022c444  addic 29, 1, 128
  022c448  ori 3, 31, 0
  022c44c  li 8, 63
  022c450  ori 4, 27, 0
  022c454  lfs 3, 72(30)
  022c458  ori 5, 29, 0
  022c45c  std 6, 112(1)
  022c460  li 9, 127
  022c464  fmuls 2, 2, 3
  022c468  li 10, 0
  022c46c  fctiwz 2, 2
  022c470  stfd 2, 256(1)
  022c474  lwz 7, 260(1)
  022c478  extsw 7, 7
  022c47c  bl 0x4d4138
  022c480  nop
  022c484  lfs 2, 96(30)
  022c488  li 6, 64
  022c48c  lfs 3, -3056(26)
  022c490  ori 3, 31, 0
  022c494  lfs 1, 92(30)
  022c498  ori 4, 27, 0
  022c49c  fmuls 2, 3, 2
  022c4a0  ori 5, 29, 0
  022c4a4  std 6, 112(1)
  022c4a8  li 8, 16
  022c4ac  li 9, 96
  022c4b0  li 10, 0
  022c4b4  fctiwz 2, 2
  022c4b8  stfd 2, 256(1)
  022c4bc  lwz 7, 260(1)
  022c4c0  extsw 7, 7
  022c4c4  bl 0x4d4138
  022c4c8  nop
  022c4cc  lfs 2, 104(30)
  022c4d0  li 6, 32
  022c4d4  lfs 3, -3056(26)
  022c4d8  ori 3, 31, 0
  022c4dc  lfs 1, 100(30)
  022c4e0  ori 4, 27, 0
  022c4e4  fmuls 2, 3, 2
  022c4e8  ori 5, 29, 0
  022c4ec  std 6, 112(1)
  022c4f0  li 8, 0
  022c4f4  li 9, 32
  022c4f8  li 10, 0
  022c4fc  fctiwz 2, 2
  022c500  stfd 2, 256(1)
  022c504  lwz 7, 260(1)
  022c508  extsw 7, 7
  022c50c  bl 0x4d4138
  022c510  nop
  022c514  ld 0, 512(1)
  022c518  mtlr 0
  022c51c  lfd 15, 360(1)
  022c520  lfd 16, 368(1)
  022c524  lfd 17, 376(1)
  022c528  lfd 18, 384(1)
  022c52c  lfd 19, 392(1)
  022c530  lfd 20, 400(1)
  022c534  lfd 21, 408(1)
  022c538  lfd 22, 416(1)
  022c53c  lfd 23, 424(1)
  022c540  lfd 24, 432(1)
  022c544  lfd 25, 440(1)
  022c548  lfd 26, 448(1)
  022c54c  lfd 27, 456(1)
  022c550  lfd 28, 464(1)
  022c554  lfd 29, 472(1)
  022c558  lfd 30, 480(1)
  022c55c  lfd 31, 488(1)
  022c560  ld 22, 280(1)
  022c564  ld 23, 288(1)
  022c568  ld 24, 296(1)
  022c56c  ld 25, 304(1)
  022c570  ld 26, 312(1)
  022c574  ld 27, 320(1)
  022c578  ld 28, 328(1)
  022c57c  ld 29, 336(1)
  022c580  ld 30, 344(1)
  022c584  ld 31, 352(1)
  022c588  addi 1, 1, 496
  022c58c  blr

UpdateMoby_1261:   # 0x22c5a8, 0x4f8 bytes
  022c5a8  stdu 1, -304(1)
  022c5ac  mflr 0
  022c5b0  std 0, 320(1)
  022c5b4  stfd 27, 264(1)
  022c5b8  stfd 28, 272(1)
  022c5bc  stfd 29, 280(1)
  022c5c0  stfd 30, 288(1)
  022c5c4  stfd 31, 296(1)
  022c5c8  addi 0, 1, 208
  022c5cc  stvx 31, 0, 0
  022c5d0  std 31, 256(1)
  022c5d4  lbz 4, 32(3)
  022c5d8  std 29, 240(1)
  022c5dc  ori 31, 3, 0
  022c5e0  lwz 29, 120(3)
  022c5e4  cmpwi 4, 0
  022c5e8  cmpwi 1, 4, 1
  022c5ec  std 30, 248(1)
  022c5f0  std 28, 232(1)
  022c5f4  std 27, 224(1)
  022c5f8  cmpwi 6, 4, -1
  022c5fc  bt 1, 0x22c608
  022c600  bf 25, 0x22ca60
  022c604  b 0x22c610
  022c608  bf 5, 0x22c83c
  022c60c  b 0x22ca60
  022c610  lis 4, 35
  022c614  li 3, 0
  022c618  addi 4, 4, -14960
  022c61c  addic 28, 29, 32
  022c620  li 5, 0
  022c624  stb 3, 41(29)
  022c628  lfs 1, 64(31)
  022c62c  ori 3, 31, 0
  022c630  lfs 2, 0(4)
  022c634  lfs 3, 68(31)
  022c638  fmuls 1, 1, 2
  022c63c  lis 4, 51
  022c640  fmuls 2, 3, 2
  022c644  ori 4, 4, 1
  022c648  stfs 1, 64(31)
  022c64c  stfs 2, 68(31)
  022c650  bl 0x10675c
  022c654  nop
  022c658  ori 30, 3, 0
  022c65c  cmpwi 30, 0
  022c660  bt 2, 0x22c690
  022c664  lfs 1, 44(30)
  022c668  lhz 4, 166(31)
  022c66c  lis 3, 101
  022c670  lhz 5, 178(31)
  022c674  addic 3, 3, 21084
  022c678  extsh 4, 4
  022c67c  stfd 1, 72(1)
  022c680  extsh 5, 5
  022c684  ld 6, 72(1)
  022c688  bl 0x5cd098
  022c68c  nop
  022c690  ori 3, 31, 0
  022c694  addic 7, 1, 176
  022c698  li 9, 0
  022c69c  li 10, 4
  022c6a0  ori 4, 30, 0
  022c6a4  ori 5, 28, 0
  022c6a8  li 6, 0
  022c6ac  li 8, 0
  022c6b0  bl 0x106840
  022c6b4  nop
  022c6b8  cmpwi 3, 0
  022c6bc  lwz 28, 176(1)
  022c6c0  bf 1, 0x22c6d4
  022c6c4  cmpwi 3, 2
  022c6c8  bt 1, 0x22c6d4
  022c6cc  li 3, 0
  022c6d0  stw 3, 32(29)
  022c6d4  ori 3, 28, 0
  022c6d8  addic 28, 29, 96
  022c6dc  cmpwi 3, 1
  022c6e0  bf 1, 0x22c820
  022c6e4  lwz 3, 32(29)
  022c6e8  lwz 4, 44(30)
  022c6ec  srawi 6, 3, 31
  022c6f0  srawi 5, 4, 31
  022c6f4  lfs 2, 32(29)
  022c6f8  srwi 8, 6, 1
  022c6fc  lfs 1, 44(30)
  022c700  srwi 7, 5, 1
  022c704  xor 3, 8, 3
  022c708  xor 4, 7, 4
  022c70c  subc 3, 3, 6
  022c710  subc 4, 4, 5
  022c714  cmpw 3, 4
  022c718  bt 1, 0x22c794
  022c71c  li 30, 0
  022c720  li 5, -1
  022c724  ori 3, 31, 0
  022c728  li 4, 0
  022c72c  stw 30, 32(29)
  022c730  lhz 6, 52(31)
  022c734  rlwimi 6, 30, 0, 19, 19
  022c738  sth 6, 52(31)
  022c73c  bl 0xfd8d0
  022c740  nop
  022c744  li 5, 120
  022c748  ori 3, 31, 0
  022c74c  ori 4, 28, 0
  022c750  stb 5, 103(29)
  022c754  bl 0x10c808
  022c758  nop
  022c75c  ori 3, 31, 0
  022c760  stw 30, 112(29)
  022c764  ori 4, 29, 0
  022c768  bl 0x22bb60
  022c76c  ori 3, 31, 0
  022c770  bl 0x22b928
  022c774  li 3, 0
  022c778  li 4, 0
  022c77c  ori 5, 31, 0
  022c780  bl 0x15d12c
  022c784  nop
  022c788  li 3, 1
  022c78c  stb 3, 32(31)
  022c790  b 0x22c820
  022c794  fsubs 1, 2, 1
  022c798  lis 3, 35
  022c79c  vspltisw 2, -1
  022c7a0  li 4, 250
  022c7a4  addi 30, 3, -14960
  022c7a8  li 5, 4
  022c7ac  lis 3, 114
  022c7b0  stb 4, 103(29)
  022c7b4  li 4, -3056
  022c7b8  vslw 2, 2, 2
  022c7bc  stfs 1, 32(29)
  022c7c0  <unknown>
  022c7c4  <unknown>
  022c7c8  vspltw 3, 3, 0
  022c7cc  li 5, 38
  022c7d0  ori 3, 31, 0
  022c7d4  ori 4, 28, 0
  022c7d8  vmaddfp 2, 4, 3, 2
  022c7dc  vctsxs 2, 2, 0
  022c7e0  vsplth 2, 2, 1
  022c7e4  stvehx 2, 5, 29
  022c7e8  bl 0x10c808
  022c7ec  nop
  022c7f0  lfs 31, 8(30)
  022c7f4  lfs 30, 12(30)
  022c7f8  fmr 1, 31
  022c7fc  fmr 2, 30
  022c800  bl 0xfcbe8
  022c804  nop
  022c808  stfs 1, 64(31)
  022c80c  fmr 2, 30
  022c810  fmr 1, 31
  022c814  bl 0xfcbe8
  022c818  nop
  022c81c  stfs 1, 68(31)
  022c820  li 5, 255
  022c824  ori 3, 31, 0
  022c828  ori 4, 28, 0
  022c82c  stb 5, 164(31)
  022c830  bl 0x10c9a0
  022c834  nop
  022c838  b 0x22ca60
  022c83c  lis 3, 35
  022c840  lfs 1, 16(31)
  022c844  lis 4, 119
  022c848  addi 30, 3, -14960
  022c84c  lfs 2, 20(31)
  022c850  stfs 1, 160(1)
  022c854  lis 5, 119
  022c858  lfs 1, 28(31)
  022c85c  stfs 2, 164(1)
  022c860  stfs 1, 172(1)
  022c864  lfs 30, 16(30)
  022c868  lfs 2, 24(31)
  022c86c  lwz 3, 112(29)
  022c870  fadds 1, 2, 30
  022c874  lfs 29, 20708(4)
  022c878  lfs 28, 20712(5)
  022c87c  extsw 3, 3
  022c880  stfs 1, 168(1)
  022c884  bl 0x502730
  022c888  nop
  022c88c  lis 28, 119
  022c890  lis 27, 114
  022c894  fmr 27, 1
  022c898  lwz 3, 20704(28)
  022c89c  extsw 3, 3
  022c8a0  std 3, 184(1)
  022c8a4  li 3, 20
  022c8a8  lfs 31, 20(30)
  022c8ac  lfs 1, -3056(27)
  022c8b0  <unknown>
  022c8b4  lfd 2, 184(1)
  022c8b8  fcfid 2, 2
  022c8bc  vspltw 31, 2, 0
  022c8c0  frsp 2, 2
  022c8c4  fadds 2, 2, 31
  022c8c8  fmuls 1, 1, 2
  022c8cc  fctiwz 1, 1
  022c8d0  stfd 1, 184(1)
  022c8d4  lwz 3, 188(1)
  022c8d8  extsw 3, 3
  022c8dc  bl 0x502730
  022c8e0  nop
  022c8e4  fdivs 3, 27, 1
  022c8e8  fmr 1, 29
  022c8ec  fmr 2, 28
  022c8f0  bl 0x1099ec
  022c8f4  nop
  022c8f8  addic 3, 1, 160
  022c8fc  li 5, 16
  022c900  ori 6, 31, 0
  022c904  li 7, 0
  022c908  bl 0x5e598
  022c90c  nop
  022c910  lfs 1, 160(1)
  022c914  lis 4, 119
  022c918  lfs 2, 168(1)
  022c91c  li 5, 2
  022c920  stfs 1, 64(1)
  022c924  li 6, 1
  022c928  stfs 2, 72(1)
  022c92c  lis 7, 161
  022c930  lfs 1, 164(1)
  022c934  ori 8, 3, 0
  022c938  lis 10, 131
  022c93c  fmr 3, 30
  022c940  stfs 1, 68(1)
  022c944  ori 3, 31, 0
  022c948  lfs 1, 20716(4)
  022c94c  addic 7, 7, 18944
  022c950  lfs 2, 172(1)
  022c954  li 9, 0
  022c958  ori 10, 10, 1
  022c95c  stfs 2, 76(1)
  022c960  std 5, 120(1)
  022c964  fmr 2, 30
  022c968  std 6, 128(1)
  022c96c  ld 5, 64(1)
  022c970  ld 6, 72(1)
  022c974  bl 0x107860
  022c978  nop
  022c97c  li 3, 20704
  022c980  vspltisw 2, -1
  022c984  li 4, 112
  022c988  vspltisw 5, -1
  022c98c  <unknown>
  022c990  vslw 2, 2, 2
  022c994  addi 3, 4, 16
  022c998  vcfsx 3, 3, 0
  022c99c  vslw 5, 5, 5
  022c9a0  <unknown>
  022c9a4  li 4, -3056
  022c9a8  <unknown>
  022c9ac  vor 4, 4, 6
  022c9b0  <unknown>
  022c9b4  vcfsx 4, 4, 0
  022c9b8  vmaddfp 2, 3, 31, 2
  022c9bc  vspltw 3, 4, 0
  022c9c0  vmaddfp 2, 6, 2, 5
  022c9c4  vspltw 2, 2, 0
  022c9c8  vcmpgtfp. 2, 3, 2
  022c9cc  bt 26, 0x22c9e8
  022c9d0  lhz 4, 52(31)
  022c9d4  ori 3, 31, 0
  022c9d8  ori 4, 4, 65
  022c9dc  sth 4, 52(31)
  022c9e0  bl 0x22b928
  022c9e4  b 0x22ca00
  022c9e8  lbz 3, 35(31)
  022c9ec  sldi 4, 3, 3
  022c9f0  subc 3, 4, 3
  022c9f4  srawi 3, 3, 3
  022c9f8  addze 3, 3
  022c9fc  stb 3, 35(31)
  022ca00  lwz 4, 112(29)
  022ca04  lis 3, 119
  022ca08  addic 4, 4, 1
  022ca0c  stw 4, 112(29)
  022ca10  lwz 3, 20704(3)
  022ca14  extsw 3, 3
  022ca18  std 3, 184(1)
  022ca1c  lis 3, 114
  022ca20  lfs 1, -3056(3)
  022ca24  lfd 2, 184(1)
  022ca28  fcfid 2, 2
  022ca2c  frsp 2, 2
  022ca30  fadds 2, 2, 31
  022ca34  fmuls 1, 1, 2
  022ca38  fctiwz 1, 1
  022ca3c  stfd 1, 184(1)
  022ca40  lwz 3, 188(1)
  022ca44  cmpw 4, 3
  022ca48  bf 1, 0x22ca60
  022ca4c  ori 3, 31, 0
  022ca50  bl 0x22b928
  022ca54  ori 3, 31, 0
  022ca58  bl 0xefb38
  022ca5c  nop
  022ca60  li 0, 208
  022ca64  lvx 31, 1, 0
  022ca68  ld 0, 320(1)
  022ca6c  mtlr 0
  022ca70  lfd 27, 264(1)
  022ca74  lfd 28, 272(1)
  022ca78  lfd 29, 280(1)
  022ca7c  lfd 30, 288(1)
  022ca80  lfd 31, 296(1)
  022ca84  ld 27, 224(1)
  022ca88  ld 28, 232(1)
  022ca8c  ld 29, 240(1)
  022ca90  ld 30, 248(1)
  022ca94  ld 31, 256(1)
  022ca98  addi 1, 1, 304
  022ca9c  blr
