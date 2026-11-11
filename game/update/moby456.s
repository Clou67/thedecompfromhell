# game/update/moby456.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M456_0038b800:   # 0x38b800, 0x14 bytes
  038b800  lis 3, 132
  038b804  lis 4, 1
  038b808  addic 3, 3, 8376
  038b80c  stw 4, 72(3)
  038b810  blr

UpdateMoby_456:   # 0x38b850, 0xffc bytes
  038b850  stdu 1, -368(1)
  038b854  mflr 0
  038b858  std 0, 384(1)
  038b85c  stfd 30, 352(1)
  038b860  stfd 31, 360(1)
  038b864  std 31, 344(1)
  038b868  ori 31, 3, 0
  038b86c  lis 4, 33
  038b870  std 30, 336(1)
  038b874  li 5, 0
  038b878  std 29, 328(1)
  038b87c  std 28, 320(1)
  038b880  lwz 30, 120(31)
  038b884  bl 0x10675c
  038b888  nop
  038b88c  ori 29, 3, 0
  038b890  addic 3, 30, 6
  038b894  bl 0x4fffb4
  038b898  nop
  038b89c  cmpwi 29, 0
  038b8a0  bt 2, 0x38bae0
  038b8a4  lhz 3, 6(30)
  038b8a8  cmpwi 3, 0
  038b8ac  bf 2, 0x38bae0
  038b8b0  lfs 1, 0(30)
  038b8b4  lis 3, 57
  038b8b8  lfs 2, 44(29)
  038b8bc  addi 3, 3, -18408
  038b8c0  fsubs 1, 1, 2
  038b8c4  stfs 1, 0(30)
  038b8c8  lfs 2, 0(3)
  038b8cc  fcmpu 0, 1, 2
  038b8d0  cror 6, 0, 2
  038b8d4  bt 6, 0x38ba8c
  038b8d8  lwz 3, 44(29)
  038b8dc  lis 4, 16256
  038b8e0  srawi 5, 3, 31
  038b8e4  srwi 6, 5, 1
  038b8e8  xor 3, 6, 3
  038b8ec  subc 3, 3, 5
  038b8f0  cmpw 3, 4
  038b8f4  bf 0, 0x38b904
  038b8f8  li 3, 100
  038b8fc  stb 3, 71(30)
  038b900  b 0x38bad0
  038b904  lis 4, 16384
  038b908  cmpw 3, 4
  038b90c  bf 0, 0x38b998
  038b910  li 3, 120
  038b914  stb 3, 71(30)
  038b918  lwz 3, 32(29)
  038b91c  lhz 3, 166(3)
  038b920  cmpwi 3, 176
  038b924  cmpwi 1, 3, 177
  038b928  bt 2, 0x38b930
  038b92c  bf 6, 0x38b954
  038b930  lis 3, 57
  038b934  li 4, 4
  038b938  addi 3, 3, -18408
  038b93c  lis 5, 114
  038b940  li 6, -3056
  038b944  <unknown>
  038b948  vspltw 2, 2, 0
  038b94c  <unknown>
  038b950  b 0x38b974
  038b954  lis 3, 57
  038b958  li 4, 8
  038b95c  addi 3, 3, -18408
  038b960  li 5, -3056
  038b964  lis 6, 114
  038b968  <unknown>
  038b96c  <unknown>
  038b970  vspltw 2, 2, 0
  038b974  vspltisw 4, -1
  038b978  vspltw 3, 3, 0
  038b97c  li 3, 6
  038b980  vslw 4, 4, 4
  038b984  vmaddfp 2, 3, 2, 4
  038b988  vctsxs 2, 2, 0
  038b98c  vsplth 2, 2, 1
  038b990  stvehx 2, 3, 30
  038b994  b 0x38bad0
  038b998  lis 4, 16448
  038b99c  cmpw 3, 4
  038b9a0  bf 0, 0x38ba18
  038b9a4  lis 3, 57
  038b9a8  li 4, 200
  038b9ac  vspltisw 2, -1
  038b9b0  addi 3, 3, -18408
  038b9b4  li 5, 8
  038b9b8  lis 6, 114
  038b9bc  stb 4, 71(30)
  038b9c0  li 4, -3056
  038b9c4  vslw 2, 2, 2
  038b9c8  <unknown>
  038b9cc  li 3, 6
  038b9d0  vspltw 3, 3, 0
  038b9d4  <unknown>
  038b9d8  vmaddfp 2, 4, 3, 2
  038b9dc  vctsxs 2, 2, 0
  038b9e0  vsplth 2, 2, 1
  038b9e4  stvehx 2, 3, 30
  038b9e8  lbz 3, 83(31)
  038b9ec  cmpwi 3, 8
  038b9f0  bt 2, 0x38ba0c
  038b9f4  ori 3, 31, 0
  038b9f8  li 4, 8
  038b9fc  li 5, 0
  038ba00  li 6, 3
  038ba04  bl 0xfddc0
  038ba08  nop
  038ba0c  li 3, 8
  038ba10  stb 3, 32(31)
  038ba14  b 0x38bad0
  038ba18  lis 3, 57
  038ba1c  vspltisw 2, -1
  038ba20  li 4, 230
  038ba24  addi 3, 3, -18408
  038ba28  li 6, 8
  038ba2c  lis 5, 114
  038ba30  stb 4, 71(30)
  038ba34  li 4, -3056
  038ba38  vslw 2, 2, 2
  038ba3c  <unknown>
  038ba40  li 3, 6
  038ba44  vspltw 3, 3, 0
  038ba48  <unknown>
  038ba4c  vmaddfp 2, 4, 3, 2
  038ba50  vctsxs 2, 2, 0
  038ba54  vsplth 2, 2, 1
  038ba58  stvehx 2, 3, 30
  038ba5c  lbz 3, 83(31)
  038ba60  cmpwi 3, 8
  038ba64  bt 2, 0x38ba80
  038ba68  ori 3, 31, 0
  038ba6c  li 4, 8
  038ba70  li 5, 0
  038ba74  li 6, 3
  038ba78  bl 0xfddc0
  038ba7c  nop
  038ba80  li 3, 8
  038ba84  stb 3, 32(31)
  038ba88  b 0x38bad0
  038ba8c  li 3, 250
  038ba90  stb 3, 71(30)
  038ba94  lbz 3, 83(31)
  038ba98  cmpwi 3, 16
  038ba9c  bt 2, 0x38bab8
  038baa0  ori 3, 31, 0
  038baa4  li 4, 16
  038baa8  li 5, 0
  038baac  li 6, 3
  038bab0  bl 0xfddc0
  038bab4  nop
  038bab8  li 4, 0
  038babc  lhz 5, 52(31)
  038bac0  li 3, 9
  038bac4  rlwimi 5, 4, 0, 19, 19
  038bac8  stb 3, 32(31)
  038bacc  sth 5, 52(31)
  038bad0  addic 4, 30, 64
  038bad4  ori 3, 31, 0
  038bad8  bl 0x10c808
  038badc  nop
  038bae0  li 4, 255
  038bae4  lbz 3, 32(31)
  038bae8  cmpwi 3, 9
  038baec  cmpwi 1, 3, 8
  038baf0  stb 4, 164(31)
  038baf4  cmpwi 6, 3, 6
  038baf8  cmpwi 7, 3, 5
  038bafc  bt 2, 0x38c7f4
  038bb00  bt 6, 0x38c7b4
  038bb04  bt 26, 0x38c344
  038bb08  bt 30, 0x38c57c
  038bb0c  cmpwi 3, 4
  038bb10  bt 2, 0x38bed8
  038bb14  cmpwi 3, 3
  038bb18  bt 2, 0x38bca0
  038bb1c  cmpwi 3, 1
  038bb20  bt 2, 0x38bbfc
  038bb24  cmpwi 3, 0
  038bb28  bf 2, 0x38c814
  038bb2c  lis 3, 151
  038bb30  li 4, 1
  038bb34  addic 5, 3, -25376
  038bb38  lhz 3, 52(31)
  038bb3c  li 29, 0
  038bb40  stw 4, 256(30)
  038bb44  ori 4, 3, 4096
  038bb48  addic 3, 30, 176
  038bb4c  sth 4, 52(31)
  038bb50  stb 29, 9(30)
  038bb54  lwz 4, 8320(5)
  038bb58  ld 4, 56(4)
  038bb5c  std 4, 56(31)
  038bb60  bl 0x100f8c
  038bb64  nop
  038bb68  lis 3, 15605
  038bb6c  lis 4, 16000
  038bb70  lis 5, 16025
  038bb74  ori 3, 3, 49807
  038bb78  lis 6, 132
  038bb7c  ori 5, 5, 39322
  038bb80  lis 7, 114
  038bb84  stw 4, 244(30)
  038bb88  stw 3, 236(30)
  038bb8c  lis 4, 16448
  038bb90  lis 3, 16384
  038bb94  stw 5, 240(30)
  038bb98  lfs 1, 8484(6)
  038bb9c  li 5, 3
  038bba0  lfs 2, -3052(7)
  038bba4  stw 29, 44(30)
  038bba8  fmuls 1, 1, 2
  038bbac  stw 3, 188(30)
  038bbb0  stw 3, 184(30)
  038bbb4  stw 4, 0(30)
  038bbb8  stb 5, 8(30)
  038bbbc  stw 29, 40(30)
  038bbc0  stw 29, 36(30)
  038bbc4  stw 29, 32(30)
  038bbc8  stfs 1, 212(30)
  038bbcc  lbz 3, 83(31)
  038bbd0  cmpwi 3, 0
  038bbd4  bt 2, 0x38bbf0
  038bbd8  ori 3, 31, 0
  038bbdc  li 4, 0
  038bbe0  li 5, 0
  038bbe4  li 6, 0
  038bbe8  bl 0xfddc0
  038bbec  nop
  038bbf0  li 3, 1
  038bbf4  stb 3, 32(31)
  038bbf8  b 0x38c814
  038bbfc  lis 3, 151
  038bc00  lfs 1, 20(31)
  038bc04  addic 3, 3, -25376
  038bc08  lfs 2, 16(31)
  038bc0c  lis 4, 57
  038bc10  lfs 3, 132(3)
  038bc14  lfs 4, 128(3)
  038bc18  fsubs 1, 1, 3
  038bc1c  fsubs 2, 2, 4
  038bc20  addi 4, 4, -18408
  038bc24  fmuls 1, 1, 1
  038bc28  fmadds 1, 2, 2, 1
  038bc2c  lfs 2, 12(4)
  038bc30  fsqrts 1, 1
  038bc34  fcmpu 0, 1, 2
  038bc38  cror 6, 1, 2
  038bc3c  bt 6, 0x38c814
  038bc40  lfs 1, 24(31)
  038bc44  lis 4, 57
  038bc48  lfs 2, 136(3)
  038bc4c  addi 4, 4, -18408
  038bc50  fsubs 1, 1, 2
  038bc54  lfs 2, 16(4)
  038bc58  fabs 1, 1
  038bc5c  fcmpu 0, 1, 2
  038bc60  cror 6, 1, 2
  038bc64  bt 6, 0x38c814
  038bc68  lbz 3, 83(31)
  038bc6c  cmpwi 3, 4
  038bc70  bt 2, 0x38bc8c
  038bc74  ori 3, 31, 0
  038bc78  li 4, 4
  038bc7c  li 5, 0
  038bc80  li 6, 0
  038bc84  bl 0xfddc0
  038bc88  nop
  038bc8c  lis 3, 16640
  038bc90  li 4, 4
  038bc94  stw 3, 88(31)
  038bc98  stb 4, 32(31)
  038bc9c  b 0x38c814
  038bca0  lis 3, 151
  038bca4  lfs 1, 16(31)
  038bca8  lfs 2, 20(31)
  038bcac  addic 3, 3, -25376
  038bcb0  lis 4, 115
  038bcb4  lfs 3, 128(3)
  038bcb8  lfs 4, 132(3)
  038bcbc  fsubs 1, 3, 1
  038bcc0  fsubs 2, 4, 2
  038bcc4  lis 3, 57
  038bcc8  addi 3, 3, -18408
  038bccc  addic 4, 4, 22784
  038bcd0  fabs 3, 1
  038bcd4  fabs 5, 2
  038bcd8  stfs 1, 180(1)
  038bcdc  stfs 2, 184(1)
  038bce0  fsubs 1, 3, 5
  038bce4  stfs 1, 188(1)
  038bce8  lwz 5, 180(1)
  038bcec  lfs 4, 0(3)
  038bcf0  lfs 1, 180(1)
  038bcf4  lwz 3, 184(1)
  038bcf8  lfs 2, 184(1)
  038bcfc  fabs 1, 1
  038bd00  lwz 6, 188(1)
  038bd04  rlwinm 3, 3, 3, 29, 29
  038bd08  fabs 6, 2
  038bd0c  lfs 2, 188(1)
  038bd10  rlwimi 3, 6, 2, 30, 30
  038bd14  fsub 7, 2, 4
  038bd18  rlwimi 3, 5, 4, 28, 28
  038bd1c  fsub 8, 2, 4
  038bd20  ori 5, 4, 0
  038bd24  rlwimi 5, 3, 2, 26, 28
  038bd28  slwi 3, 3, 2
  038bd2c  clrldi 5, 5, 32
  038bd30  fsel 5, 7, 1, 5
  038bd34  lfsx 1, 4, 3
  038bd38  lfs 2, 4(5)
  038bd3c  fsel 3, 8, 6, 3
  038bd40  fcmpu 0, 5, 4
  038bd44  bt 1, 0x38bd4c
  038bd48  b 0x38be6c
  038bd4c  fsubs 6, 3, 5
  038bd50  fadds 3, 3, 5
  038bd54  addic 3, 1, 16
  038bd58  li 6, 2
  038bd5c  addic 5, 3, 288
  038bd60  addic 4, 3, 272
  038bd64  mtctr 6
  038bd68  fdivs 3, 6, 3
  038bd6c  fmuls 5, 3, 3
  038bd70  stfs 3, 300(1)
  038bd74  stfs 3, 292(1)
  038bd78  stfs 3, 296(1)
  038bd7c  stfs 3, 288(1)
  038bd80  lfs 7, 300(1)
  038bd84  lfs 8, 292(1)
  038bd88  lfs 9, 296(1)
  038bd8c  fmuls 6, 5, 5
  038bd90  fmuls 8, 8, 5
  038bd94  fmuls 7, 7, 6
  038bd98  fmuls 3, 6, 6
  038bd9c  fmuls 6, 9, 6
  038bda0  stfs 8, 292(1)
  038bda4  fmuls 5, 7, 5
  038bda8  stfs 6, 296(1)
  038bdac  stfs 5, 300(1)
  038bdb0  lfs 5, 272(3)
  038bdb4  fmuls 5, 5, 3
  038bdb8  stfs 5, 288(3)
  038bdbc  lfs 5, 4(4)
  038bdc0  addic 4, 4, 8
  038bdc4  fmuls 5, 5, 3
  038bdc8  addic 3, 3, 8
  038bdcc  stfs 5, 4(5)
  038bdd0  addic 5, 5, 8
  038bdd4  bdnz 0x38bdb0
  038bdd8  li 5, 4
  038bddc  ori 3, 1, 0
  038bde0  mtctr 5
  038bde4  lis 4, 115
  038bde8  addic 5, 3, 288
  038bdec  addic 4, 4, 22752
  038bdf0  ori 7, 5, 0
  038bdf4  lfs 3, 288(3)
  038bdf8  lfs 5, 0(4)
  038bdfc  fmuls 3, 3, 5
  038be00  lfs 5, 4(4)
  038be04  addic 4, 4, 8
  038be08  stfs 3, 288(3)
  038be0c  lfs 3, 4(5)
  038be10  addic 3, 3, 8
  038be14  fmuls 3, 3, 5
  038be18  stfs 3, 4(5)
  038be1c  addic 5, 5, 8
  038be20  bdnz 0x38bdf4
  038be24  ori 3, 1, 0
  038be28  mtctr 6
  038be2c  lfs 3, 288(3)
  038be30  fadds 3, 4, 3
  038be34  addic 3, 3, 16
  038be38  lfs 4, 4(7)
  038be3c  lfs 5, 8(7)
  038be40  lfs 6, 12(7)
  038be44  addic 7, 7, 16
  038be48  fadds 3, 3, 4
  038be4c  fadds 4, 3, 5
  038be50  fadds 4, 4, 6
  038be54  bdnz 0x38be2c
  038be58  lis 3, 57
  038be5c  addi 3, 3, -18408
  038be60  lfs 3, 20(3)
  038be64  fadds 4, 4, 3
  038be68  fmadds 4, 4, 1, 2
  038be6c  lis 3, 57
  038be70  fmr 1, 4
  038be74  addic 5, 30, 304
  038be78  addi 4, 3, -18408
  038be7c  ori 3, 31, 0
  038be80  lfs 4, 32(4)
  038be84  lfs 2, 24(4)
  038be88  lfs 5, 28(4)
  038be8c  fmr 3, 5
  038be90  bl 0xff2e8
  038be94  nop
  038be98  lbz 3, 112(31)
  038be9c  rlwinm 3, 3, 0, 30, 30
  038bea0  cmpwi 3, 0
  038bea4  bt 2, 0x38c814
  038bea8  lbz 3, 83(31)
  038beac  cmpwi 3, 4
  038beb0  bt 2, 0x38becc
  038beb4  ori 3, 31, 0
  038beb8  li 4, 4
  038bebc  li 5, 0
  038bec0  li 6, 0
  038bec4  bl 0xfddc0
  038bec8  nop
  038becc  li 3, 4
  038bed0  stb 3, 32(31)
  038bed4  b 0x38c814
  038bed8  lis 29, 151
  038bedc  lfs 1, 16(31)
  038bee0  lfs 2, 20(31)
  038bee4  addic 29, 29, -25376
  038bee8  lis 3, 57
  038beec  addi 3, 3, -18408
  038bef0  lfs 3, 128(29)
  038bef4  lfs 4, 132(29)
  038bef8  fsubs 1, 3, 1
  038befc  fsubs 2, 4, 2
  038bf00  lis 4, 115
  038bf04  addic 4, 4, 22784
  038bf08  fabs 3, 1
  038bf0c  fabs 4, 2
  038bf10  stfs 1, 168(1)
  038bf14  stfs 2, 172(1)
  038bf18  fsubs 1, 3, 4
  038bf1c  stfs 1, 176(1)
  038bf20  lwz 5, 168(1)
  038bf24  lfs 31, 0(3)
  038bf28  lfs 1, 168(1)
  038bf2c  lwz 3, 172(1)
  038bf30  lfs 2, 172(1)
  038bf34  fabs 1, 1
  038bf38  lwz 6, 176(1)
  038bf3c  rlwinm 3, 3, 3, 29, 29
  038bf40  fabs 5, 2
  038bf44  lfs 2, 176(1)
  038bf48  rlwimi 3, 6, 2, 30, 30
  038bf4c  fsub 6, 2, 31
  038bf50  rlwimi 3, 5, 4, 28, 28
  038bf54  fsub 7, 2, 31
  038bf58  ori 5, 4, 0
  038bf5c  rlwimi 5, 3, 2, 26, 28
  038bf60  slwi 3, 3, 2
  038bf64  clrldi 5, 5, 32
  038bf68  fsel 4, 6, 1, 4
  038bf6c  lfsx 1, 4, 3
  038bf70  lfs 2, 4(5)
  038bf74  fsel 3, 7, 5, 3
  038bf78  fcmpu 0, 4, 31
  038bf7c  bt 1, 0x38bf88
  038bf80  fmr 1, 31
  038bf84  b 0x38c0ac
  038bf88  fsubs 5, 3, 4
  038bf8c  fadds 3, 3, 4
  038bf90  addic 3, 1, 16
  038bf94  li 7, 2
  038bf98  addic 4, 3, 240
  038bf9c  addic 5, 3, 256
  038bfa0  mtctr 7
  038bfa4  fdivs 3, 5, 3
  038bfa8  fmuls 4, 3, 3
  038bfac  stfs 3, 268(1)
  038bfb0  stfs 3, 260(1)
  038bfb4  stfs 3, 264(1)
  038bfb8  stfs 3, 256(1)
  038bfbc  lfs 6, 268(1)
  038bfc0  lfs 7, 260(1)
  038bfc4  lfs 8, 264(1)
  038bfc8  fmuls 5, 4, 4
  038bfcc  fmuls 7, 7, 4
  038bfd0  fmuls 6, 6, 5
  038bfd4  fmuls 3, 5, 5
  038bfd8  fmuls 5, 8, 5
  038bfdc  stfs 7, 260(1)
  038bfe0  fmuls 4, 6, 4
  038bfe4  stfs 5, 264(1)
  038bfe8  stfs 4, 268(1)
  038bfec  lfs 4, 240(3)
  038bff0  fmuls 4, 4, 3
  038bff4  stfs 4, 256(3)
  038bff8  lfs 4, 4(4)
  038bffc  addic 3, 3, 8
  038c000  addic 4, 4, 8
  038c004  fmuls 4, 4, 3
  038c008  stfs 4, 4(5)
  038c00c  addic 5, 5, 8
  038c010  bdnz 0x38bfec
  038c014  li 5, 4
  038c018  ori 3, 1, 0
  038c01c  mtctr 5
  038c020  lis 4, 115
  038c024  addic 5, 3, 256
  038c028  addic 4, 4, 22752
  038c02c  ori 6, 5, 0
  038c030  lfs 3, 256(3)
  038c034  lfs 4, 0(4)
  038c038  fmuls 3, 3, 4
  038c03c  lfs 4, 4(4)
  038c040  addic 4, 4, 8
  038c044  stfs 3, 256(3)
  038c048  lfs 3, 4(5)
  038c04c  addic 3, 3, 8
  038c050  fmuls 3, 3, 4
  038c054  stfs 3, 4(5)
  038c058  addic 5, 5, 8
  038c05c  bdnz 0x38c030
  038c060  fmr 3, 31
  038c064  ori 3, 1, 0
  038c068  mtctr 7
  038c06c  lfs 4, 256(3)
  038c070  fadds 3, 3, 4
  038c074  addic 3, 3, 16
  038c078  lfs 4, 4(6)
  038c07c  lfs 5, 8(6)
  038c080  lfs 6, 12(6)
  038c084  addic 6, 6, 16
  038c088  fadds 3, 3, 4
  038c08c  fadds 3, 3, 5
  038c090  fadds 3, 3, 6
  038c094  bdnz 0x38c06c
  038c098  lis 3, 57
  038c09c  addi 3, 3, -18408
  038c0a0  lfs 4, 20(3)
  038c0a4  fadds 3, 3, 4
  038c0a8  fmadds 1, 3, 1, 2
  038c0ac  lis 3, 57
  038c0b0  addic 5, 30, 304
  038c0b4  addi 28, 3, -18408
  038c0b8  ori 3, 31, 0
  038c0bc  lfs 2, 24(28)
  038c0c0  lfs 3, 28(28)
  038c0c4  lfs 4, 32(28)
  038c0c8  bl 0xff2e8
  038c0cc  nop
  038c0d0  ori 3, 31, 0
  038c0d4  bl 0xefe40
  038c0d8  nop
  038c0dc  lfs 30, 36(28)
  038c0e0  fcmpu 0, 1, 30
  038c0e4  bt 0, 0x38c10c
  038c0e8  ori 3, 31, 0
  038c0ec  bl 0xefe40
  038c0f0  nop
  038c0f4  lis 3, 57
  038c0f8  addi 3, 3, -18408
  038c0fc  lfs 2, 40(3)
  038c100  fcmpu 0, 1, 2
  038c104  cror 6, 0, 2
  038c108  bt 6, 0x38c14c
  038c10c  ori 3, 31, 0
  038c110  bl 0xefe40
  038c114  nop
  038c118  lis 3, 57
  038c11c  addi 3, 3, -18408
  038c120  lfs 2, 44(3)
  038c124  fcmpu 0, 1, 2
  038c128  bt 0, 0x38c2ac
  038c12c  ori 3, 31, 0
  038c130  bl 0xefe40
  038c134  nop
  038c138  lis 3, 57
  038c13c  addi 3, 3, -18408
  038c140  lfs 2, 48(3)
  038c144  fcmpu 0, 1, 2
  038c148  bt 1, 0x38c2ac
  038c14c  ori 3, 31, 0
  038c150  bl 0xefe40
  038c154  nop
  038c158  fcmpu 0, 1, 30
  038c15c  bt 0, 0x38c198
  038c160  ori 3, 31, 0
  038c164  bl 0xefe40
  038c168  nop
  038c16c  lis 3, 57
  038c170  addi 3, 3, -18408
  038c174  lfs 2, 40(3)
  038c178  fcmpu 0, 1, 2
  038c17c  bt 1, 0x38c198
  038c180  addic 5, 1, 112
  038c184  ori 3, 31, 0
  038c188  li 4, 0
  038c18c  bl 0xf1114
  038c190  nop
  038c194  b 0x38c1ac
  038c198  addic 5, 1, 112
  038c19c  ori 3, 31, 0
  038c1a0  li 4, 1
  038c1a4  bl 0xf1114
  038c1a8  nop
  038c1ac  lfs 1, 132(29)
  038c1b0  lfs 2, 116(1)
  038c1b4  lfs 3, 128(29)
  038c1b8  fsubs 1, 1, 2
  038c1bc  lfs 2, 112(1)
  038c1c0  fsubs 2, 3, 2
  038c1c4  lfs 4, 24(31)
  038c1c8  lfs 5, 120(1)
  038c1cc  lis 3, 57
  038c1d0  lfs 6, 140(29)
  038c1d4  fsubs 4, 4, 5
  038c1d8  addi 3, 3, -18408
  038c1dc  stfs 6, 140(1)
  038c1e0  fmuls 3, 1, 1
  038c1e4  lis 4, 114
  038c1e8  fmadds 3, 2, 2, 3
  038c1ec  stfs 4, 136(1)
  038c1f0  lfs 5, 40(3)
  038c1f4  lis 3, 132
  038c1f8  fsqrts 3, 3
  038c1fc  lfs 6, 8492(3)
  038c200  lfs 7, -3052(4)
  038c204  addic 3, 1, 128
  038c208  addic 4, 1, 112
  038c20c  ori 5, 31, 0
  038c210  fmuls 6, 6, 7
  038c214  fdivs 5, 5, 3
  038c218  fsub 7, 31, 3
  038c21c  fsub 8, 31, 3
  038c220  fsub 9, 3, 31
  038c224  fsub 3, 3, 31
  038c228  fmuls 1, 1, 5
  038c22c  fmuls 2, 2, 5
  038c230  fsel 5, 7, 31, 1
  038c234  fsel 7, 8, 31, 2
  038c238  fsel 1, 9, 5, 1
  038c23c  fsel 2, 3, 7, 2
  038c240  fmuls 3, 1, 1
  038c244  stfs 2, 128(1)
  038c248  stfs 1, 132(1)
  038c24c  fmadds 3, 2, 2, 3
  038c250  fmadds 3, 4, 4, 3
  038c254  fsqrts 3, 3
  038c258  fdivs 5, 6, 3
  038c25c  fsub 6, 31, 3
  038c260  fsub 7, 31, 3
  038c264  fsub 8, 31, 3
  038c268  fsub 9, 3, 31
  038c26c  fsub 10, 3, 31
  038c270  fsub 3, 3, 31
  038c274  fmuls 2, 2, 5
  038c278  fmuls 1, 1, 5
  038c27c  fmuls 4, 4, 5
  038c280  fsel 5, 6, 31, 2
  038c284  fsel 6, 7, 31, 1
  038c288  fsel 7, 8, 31, 4
  038c28c  fsel 2, 9, 5, 2
  038c290  fsel 1, 10, 6, 1
  038c294  fsel 3, 3, 7, 4
  038c298  stfs 2, 128(1)
  038c29c  stfs 1, 132(1)
  038c2a0  stfs 3, 136(1)
  038c2a4  bl 0x39ed48
  038c2a8  nop
  038c2ac  lfs 1, 20(31)
  038c2b0  lfs 2, 132(29)
  038c2b4  lfs 3, 16(31)
  038c2b8  fsubs 1, 1, 2
  038c2bc  lfs 2, 128(29)
  038c2c0  fsubs 2, 3, 2
  038c2c4  lis 3, 57
  038c2c8  addi 3, 3, -18408
  038c2cc  fmuls 1, 1, 1
  038c2d0  fmadds 1, 2, 2, 1
  038c2d4  lfs 2, 12(3)
  038c2d8  fsqrts 1, 1
  038c2dc  fcmpu 0, 1, 2
  038c2e0  bt 1, 0x38c30c
  038c2e4  lfs 1, 24(31)
  038c2e8  lfs 2, 136(29)
  038c2ec  lis 3, 57
  038c2f0  fsubs 1, 1, 2
  038c2f4  addi 3, 3, -18408
  038c2f8  lfs 2, 16(3)
  038c2fc  fabs 1, 1
  038c300  fcmpu 0, 1, 2
  038c304  cror 6, 0, 2
  038c308  bt 6, 0x38c814
  038c30c  lbz 3, 83(31)
  038c310  cmpwi 3, 5
  038c314  bt 2, 0x38c330
  038c318  ori 3, 31, 0
  038c31c  li 4, 5
  038c320  li 5, 0
  038c324  li 6, 0
  038c328  bl 0xfddc0
  038c32c  nop
  038c330  lis 3, 16256
  038c334  li 4, 6
  038c338  stw 3, 88(31)
  038c33c  stb 4, 32(31)
  038c340  b 0x38c814
  038c344  lis 3, 151
  038c348  lfs 1, 16(31)
  038c34c  addic 3, 3, -25376
  038c350  lfs 2, 20(31)
  038c354  lis 4, 115
  038c358  lfs 3, 128(3)
  038c35c  lfs 4, 132(3)
  038c360  fsubs 1, 3, 1
  038c364  lis 3, 57
  038c368  fsubs 2, 4, 2
  038c36c  addi 3, 3, -18408
  038c370  addic 4, 4, 22784
  038c374  fabs 3, 1
  038c378  fabs 5, 2
  038c37c  stfs 1, 156(1)
  038c380  stfs 2, 160(1)
  038c384  fsubs 1, 3, 5
  038c388  stfs 1, 164(1)
  038c38c  lwz 5, 156(1)
  038c390  lfs 4, 0(3)
  038c394  lfs 1, 156(1)
  038c398  lwz 3, 160(1)
  038c39c  lfs 2, 160(1)
  038c3a0  lwz 6, 164(1)
  038c3a4  rlwinm 3, 3, 3, 29, 29
  038c3a8  fabs 6, 2
  038c3ac  lfs 2, 164(1)
  038c3b0  fabs 1, 1
  038c3b4  rlwimi 3, 6, 2, 30, 30
  038c3b8  fsub 7, 2, 4
  038c3bc  rlwimi 3, 5, 4, 28, 28
  038c3c0  fsub 8, 2, 4
  038c3c4  ori 5, 4, 0
  038c3c8  rlwimi 5, 3, 2, 26, 28
  038c3cc  slwi 3, 3, 2
  038c3d0  clrldi 5, 5, 32
  038c3d4  fsel 5, 7, 1, 5
  038c3d8  lfsx 1, 4, 3
  038c3dc  lfs 2, 4(5)
  038c3e0  fsel 3, 8, 6, 3
  038c3e4  fcmpu 0, 5, 4
  038c3e8  bt 1, 0x38c3f0
  038c3ec  b 0x38c510
  038c3f0  fsubs 6, 3, 5
  038c3f4  fadds 3, 3, 5
  038c3f8  addic 3, 1, 16
  038c3fc  li 7, 2
  038c400  addic 4, 3, 208
  038c404  addic 5, 3, 224
  038c408  mtctr 7
  038c40c  fdivs 3, 6, 3
  038c410  fmuls 5, 3, 3
  038c414  stfs 3, 236(1)
  038c418  stfs 3, 228(1)
  038c41c  stfs 3, 232(1)
  038c420  stfs 3, 224(1)
  038c424  lfs 7, 236(1)
  038c428  lfs 8, 228(1)
  038c42c  lfs 9, 232(1)
  038c430  fmuls 6, 5, 5
  038c434  fmuls 8, 8, 5
  038c438  fmuls 7, 7, 6
  038c43c  fmuls 3, 6, 6
  038c440  fmuls 6, 9, 6
  038c444  stfs 8, 228(1)
  038c448  fmuls 5, 7, 5
  038c44c  stfs 6, 232(1)
  038c450  stfs 5, 236(1)
  038c454  lfs 5, 208(3)
  038c458  fmuls 5, 5, 3
  038c45c  stfs 5, 224(3)
  038c460  lfs 5, 4(4)
  038c464  addic 3, 3, 8
  038c468  addic 4, 4, 8
  038c46c  fmuls 5, 5, 3
  038c470  stfs 5, 4(5)
  038c474  addic 5, 5, 8
  038c478  bdnz 0x38c454
  038c47c  li 5, 4
  038c480  ori 3, 1, 0
  038c484  mtctr 5
  038c488  lis 4, 115
  038c48c  addic 5, 3, 224
  038c490  addic 4, 4, 22752
  038c494  ori 6, 5, 0
  038c498  lfs 3, 224(3)
  038c49c  lfs 5, 0(4)
  038c4a0  fmuls 3, 3, 5
  038c4a4  lfs 5, 4(4)
  038c4a8  addic 4, 4, 8
  038c4ac  stfs 3, 224(3)
  038c4b0  lfs 3, 4(5)
  038c4b4  addic 3, 3, 8
  038c4b8  fmuls 3, 3, 5
  038c4bc  stfs 3, 4(5)
  038c4c0  addic 5, 5, 8
  038c4c4  bdnz 0x38c498
  038c4c8  ori 3, 1, 0
  038c4cc  mtctr 7
  038c4d0  lfs 3, 224(3)
  038c4d4  fadds 3, 4, 3
  038c4d8  lfs 4, 4(6)
  038c4dc  addic 3, 3, 16
  038c4e0  lfs 5, 8(6)
  038c4e4  lfs 6, 12(6)
  038c4e8  addic 6, 6, 16
  038c4ec  fadds 3, 3, 4
  038c4f0  fadds 4, 3, 5
  038c4f4  fadds 4, 4, 6
  038c4f8  bdnz 0x38c4d0
  038c4fc  lis 3, 57
  038c500  addi 3, 3, -18408
  038c504  lfs 3, 20(3)
  038c508  fadds 4, 4, 3
  038c50c  fmadds 4, 4, 1, 2
  038c510  lis 3, 57
  038c514  fmr 1, 4
  038c518  addic 5, 30, 304
  038c51c  addi 4, 3, -18408
  038c520  ori 3, 31, 0
  038c524  lfs 4, 32(4)
  038c528  lfs 2, 24(4)
  038c52c  lfs 5, 28(4)
  038c530  fmr 3, 5
  038c534  bl 0xff2e8
  038c538  nop
  038c53c  lbz 3, 112(31)
  038c540  rlwinm 3, 3, 0, 30, 30
  038c544  cmpwi 3, 0
  038c548  bt 2, 0x38c814
  038c54c  lbz 3, 83(31)
  038c550  cmpwi 3, 6
  038c554  bt 2, 0x38c570
  038c558  ori 3, 31, 0
  038c55c  li 4, 6
  038c560  li 5, 0
  038c564  li 6, 0
  038c568  bl 0xfddc0
  038c56c  nop
  038c570  li 3, 5
  038c574  stb 3, 32(31)
  038c578  b 0x38c814
  038c57c  lis 3, 151
  038c580  lfs 1, 16(31)
  038c584  addic 3, 3, -25376
  038c588  lfs 2, 20(31)
  038c58c  lis 4, 115
  038c590  lfs 3, 128(3)
  038c594  lfs 4, 132(3)
  038c598  fsubs 1, 3, 1
  038c59c  lis 3, 57
  038c5a0  fsubs 2, 4, 2
  038c5a4  addi 3, 3, -18408
  038c5a8  addic 4, 4, 22784
  038c5ac  fabs 3, 1
  038c5b0  fabs 5, 2
  038c5b4  stfs 1, 144(1)
  038c5b8  stfs 2, 148(1)
  038c5bc  fsubs 1, 3, 5
  038c5c0  stfs 1, 152(1)
  038c5c4  lwz 5, 144(1)
  038c5c8  lfs 4, 0(3)
  038c5cc  lfs 1, 144(1)
  038c5d0  lwz 3, 148(1)
  038c5d4  lfs 2, 148(1)
  038c5d8  lwz 6, 152(1)
  038c5dc  rlwinm 3, 3, 3, 29, 29
  038c5e0  fabs 6, 2
  038c5e4  lfs 2, 152(1)
  038c5e8  fabs 1, 1
  038c5ec  rlwimi 3, 6, 2, 30, 30
  038c5f0  fsub 7, 2, 4
  038c5f4  rlwimi 3, 5, 4, 28, 28
  038c5f8  fsub 8, 2, 4
  038c5fc  ori 5, 4, 0
  038c600  rlwimi 5, 3, 2, 26, 28
  038c604  slwi 3, 3, 2
  038c608  clrldi 5, 5, 32
  038c60c  fsel 5, 7, 1, 5
  038c610  lfsx 1, 4, 3
  038c614  lfs 2, 4(5)
  038c618  fsel 3, 8, 6, 3
  038c61c  fcmpu 0, 5, 4
  038c620  bt 1, 0x38c628
  038c624  b 0x38c748
  038c628  fsubs 6, 3, 5
  038c62c  fadds 3, 3, 5
  038c630  addic 3, 1, 16
  038c634  li 6, 2
  038c638  addic 4, 3, 176
  038c63c  addic 5, 3, 192
  038c640  mtctr 6
  038c644  fdivs 3, 6, 3
  038c648  fmuls 5, 3, 3
  038c64c  stfs 3, 204(1)
  038c650  stfs 3, 196(1)
  038c654  stfs 3, 200(1)
  038c658  stfs 3, 192(1)
  038c65c  lfs 7, 204(1)
  038c660  lfs 8, 196(1)
  038c664  lfs 9, 200(1)
  038c668  fmuls 6, 5, 5
  038c66c  fmuls 8, 8, 5
  038c670  fmuls 7, 7, 6
  038c674  fmuls 3, 6, 6
  038c678  fmuls 6, 9, 6
  038c67c  stfs 8, 196(1)
  038c680  fmuls 5, 7, 5
  038c684  stfs 6, 200(1)
  038c688  stfs 5, 204(1)
  038c68c  lfs 5, 176(3)
  038c690  fmuls 5, 5, 3
  038c694  stfs 5, 192(3)
  038c698  lfs 5, 4(4)
  038c69c  addic 3, 3, 8
  038c6a0  addic 4, 4, 8
  038c6a4  fmuls 5, 5, 3
  038c6a8  stfs 5, 4(5)
  038c6ac  addic 5, 5, 8
  038c6b0  bdnz 0x38c68c
  038c6b4  li 5, 4
  038c6b8  ori 3, 1, 0
  038c6bc  mtctr 5
  038c6c0  lis 4, 115
  038c6c4  addic 5, 3, 192
  038c6c8  addic 4, 4, 22752
  038c6cc  ori 7, 5, 0
  038c6d0  lfs 3, 192(3)
  038c6d4  lfs 5, 0(4)
  038c6d8  fmuls 3, 3, 5
  038c6dc  lfs 5, 4(4)
  038c6e0  addic 4, 4, 8
  038c6e4  stfs 3, 192(3)
  038c6e8  lfs 3, 4(5)
  038c6ec  addic 3, 3, 8
  038c6f0  fmuls 3, 3, 5
  038c6f4  stfs 3, 4(5)
  038c6f8  addic 5, 5, 8
  038c6fc  bdnz 0x38c6d0
  038c700  ori 3, 1, 0
  038c704  mtctr 6
  038c708  lfs 3, 192(3)
  038c70c  fadds 3, 4, 3
  038c710  lfs 4, 4(7)
  038c714  addic 3, 3, 16
  038c718  lfs 5, 8(7)
  038c71c  lfs 6, 12(7)
  038c720  addic 7, 7, 16
  038c724  fadds 3, 3, 4
  038c728  fadds 4, 3, 5
  038c72c  fadds 4, 4, 6
  038c730  bdnz 0x38c708
  038c734  lis 3, 57
  038c738  addi 3, 3, -18408
  038c73c  lfs 3, 20(3)
  038c740  fadds 4, 4, 3
  038c744  fmadds 4, 4, 1, 2
  038c748  lis 3, 57
  038c74c  fmr 1, 4
  038c750  addic 5, 30, 304
  038c754  addi 4, 3, -18408
  038c758  ori 3, 31, 0
  038c75c  lfs 4, 32(4)
  038c760  lfs 2, 24(4)
  038c764  lfs 5, 28(4)
  038c768  fmr 3, 5
  038c76c  bl 0xff2e8
  038c770  nop
  038c774  lbz 3, 112(31)
  038c778  rlwinm 3, 3, 0, 30, 30
  038c77c  cmpwi 3, 0
  038c780  bt 2, 0x38c814
  038c784  lbz 3, 83(31)
  038c788  cmpwi 3, 0
  038c78c  bt 2, 0x38c7a8
  038c790  ori 3, 31, 0
  038c794  li 4, 0
  038c798  li 5, 0
  038c79c  li 6, 0
  038c7a0  bl 0xfddc0
  038c7a4  nop
  038c7a8  li 3, 1
  038c7ac  stb 3, 32(31)
  038c7b0  b 0x38c814
  038c7b4  lbz 3, 112(31)
  038c7b8  rlwinm 3, 3, 0, 30, 30
  038c7bc  cmpwi 3, 0
  038c7c0  bt 2, 0x38c814
  038c7c4  lbz 3, 83(31)
  038c7c8  cmpwi 3, 0
  038c7cc  bt 2, 0x38c7e8
  038c7d0  ori 3, 31, 0
  038c7d4  li 4, 0
  038c7d8  li 5, 0
  038c7dc  li 6, 0
  038c7e0  bl 0xfddc0
  038c7e4  nop
  038c7e8  li 3, 1
  038c7ec  stb 3, 32(31)
  038c7f0  b 0x38c814
  038c7f4  lbz 3, 112(31)
  038c7f8  rlwinm 3, 3, 0, 30, 30
  038c7fc  cmpwi 3, 0
  038c800  bt 2, 0x38c814
  038c804  ori 3, 31, 0
  038c808  bl 0xefb38
  038c80c  nop
  038c810  b 0x38c824
  038c814  addic 4, 30, 64
  038c818  ori 3, 31, 0
  038c81c  bl 0x10c9a0
  038c820  nop
  038c824  ld 0, 384(1)
  038c828  mtlr 0
  038c82c  lfd 30, 352(1)
  038c830  lfd 31, 360(1)
  038c834  ld 28, 320(1)
  038c838  ld 29, 328(1)
  038c83c  ld 30, 336(1)
  038c840  ld 31, 344(1)
  038c844  addi 1, 1, 368
  038c848  blr
