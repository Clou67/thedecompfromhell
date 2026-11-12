# game/update/moby870.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M870_0049b854:   # 0x49b854, 0x14 bytes
  049b854  lis 3, 140
  049b858  lis 4, 1
  049b85c  addic 3, 3, 32460
  049b860  stw 4, 72(3)
  049b864  blr

M870_0049b880:   # 0x49b880, 0x6f8 bytes
  049b880  stdu 1, -336(1)
  049b884  mflr 0
  049b888  std 0, 352(1)
  049b88c  stfd 26, 288(1)
  049b890  stfd 27, 296(1)
  049b894  stfd 28, 304(1)
  049b898  stfd 29, 312(1)
  049b89c  stfd 30, 320(1)
  049b8a0  stfd 31, 328(1)
  049b8a4  std 31, 280(1)
  049b8a8  lis 4, 74
  049b8ac  std 28, 256(1)
  049b8b0  lwz 31, 120(3)
  049b8b4  ori 28, 1, 0
  049b8b8  std 30, 272(1)
  049b8bc  addi 4, 4, -18328
  049b8c0  lbz 30, 33(3)
  049b8c4  cmpwi 30, 255
  049b8c8  lfs 31, 0(4)
  049b8cc  lfs 4, 24(3)
  049b8d0  std 29, 264(1)
  049b8d4  lwz 31, 352(31)
  049b8d8  bf 2, 0x49ba9c
  049b8dc  lfs 1, 16(3)
  049b8e0  lfs 2, 16(31)
  049b8e4  lfs 3, 20(3)
  049b8e8  lfs 4, 20(31)
  049b8ec  fsubs 1, 1, 2
  049b8f0  lis 3, 74
  049b8f4  fsubs 2, 3, 4
  049b8f8  addi 3, 3, -18328
  049b8fc  lis 4, 115
  049b900  addic 4, 4, 22784
  049b904  fabs 3, 1
  049b908  fabs 5, 2
  049b90c  stfs 1, 136(1)
  049b910  stfs 2, 140(1)
  049b914  fsubs 1, 3, 5
  049b918  stfs 1, 144(1)
  049b91c  lwz 5, 136(1)
  049b920  lfs 4, 4(3)
  049b924  lfs 1, 136(1)
  049b928  lwz 3, 140(1)
  049b92c  lfs 2, 140(1)
  049b930  lwz 6, 144(1)
  049b934  rlwinm 3, 3, 3, 29, 29
  049b938  fabs 6, 2
  049b93c  lfs 2, 144(1)
  049b940  fabs 1, 1
  049b944  rlwimi 3, 6, 2, 30, 30
  049b948  fsub 7, 2, 4
  049b94c  rlwimi 3, 5, 4, 28, 28
  049b950  fsub 8, 2, 4
  049b954  ori 5, 4, 0
  049b958  rlwimi 5, 3, 2, 26, 28
  049b95c  slwi 3, 3, 2
  049b960  clrldi 5, 5, 32
  049b964  fsel 5, 7, 1, 5
  049b968  lfsx 1, 4, 3
  049b96c  lfs 2, 4(5)
  049b970  fsel 3, 8, 6, 3
  049b974  fcmpu 0, 5, 4
  049b978  bt 1, 0x49b984
  049b97c  fmr 1, 4
  049b980  b 0x49ba98
  049b984  fsubs 6, 3, 5
  049b988  fadds 3, 3, 5
  049b98c  li 5, 2
  049b990  mtctr 5
  049b994  fdivs 3, 6, 3
  049b998  fmuls 5, 3, 3
  049b99c  stfs 3, 212(28)
  049b9a0  stfs 3, 216(28)
  049b9a4  stfs 3, 220(28)
  049b9a8  stfs 3, 224(28)
  049b9ac  lfs 3, 224(1)
  049b9b0  lfs 6, 216(1)
  049b9b4  addic 28, 1, 16
  049b9b8  lfs 8, 220(1)
  049b9bc  fmuls 7, 5, 5
  049b9c0  fmuls 6, 6, 5
  049b9c4  addic 3, 28, 196
  049b9c8  addic 4, 28, 212
  049b9cc  fmuls 9, 3, 7
  049b9d0  fmuls 8, 8, 7
  049b9d4  fmuls 3, 7, 7
  049b9d8  stfs 6, 216(1)
  049b9dc  fmuls 5, 9, 5
  049b9e0  stfs 8, 220(1)
  049b9e4  stfs 5, 224(1)
  049b9e8  lfs 5, 196(28)
  049b9ec  fmuls 5, 5, 3
  049b9f0  stfs 5, 212(28)
  049b9f4  lfs 5, 4(3)
  049b9f8  addic 3, 3, 8
  049b9fc  fmuls 5, 5, 3
  049ba00  addic 28, 28, 8
  049ba04  stfs 5, 4(4)
  049ba08  addic 4, 4, 8
  049ba0c  bdnz 0x49b9e8
  049ba10  li 6, 4
  049ba14  ori 3, 1, 0
  049ba18  mtctr 6
  049ba1c  lis 4, 115
  049ba20  addic 6, 3, 212
  049ba24  addic 4, 4, 22752
  049ba28  ori 7, 6, 0
  049ba2c  lfs 3, 212(3)
  049ba30  lfs 5, 0(4)
  049ba34  fmuls 3, 3, 5
  049ba38  lfs 5, 4(4)
  049ba3c  addic 4, 4, 8
  049ba40  stfs 3, 212(3)
  049ba44  lfs 3, 4(6)
  049ba48  addic 3, 3, 8
  049ba4c  fmuls 3, 3, 5
  049ba50  stfs 3, 4(6)
  049ba54  addic 6, 6, 8
  049ba58  bdnz 0x49ba2c
  049ba5c  ori 3, 1, 0
  049ba60  mtctr 5
  049ba64  lfs 3, 212(3)
  049ba68  fadds 3, 4, 3
  049ba6c  addic 3, 3, 16
  049ba70  lfs 4, 4(7)
  049ba74  lfs 5, 8(7)
  049ba78  lfs 6, 12(7)
  049ba7c  addic 7, 7, 16
  049ba80  fadds 3, 3, 4
  049ba84  fadds 4, 3, 5
  049ba88  fadds 4, 4, 6
  049ba8c  bdnz 0x49ba64
  049ba90  fadds 3, 4, 31
  049ba94  fmadds 1, 3, 1, 2
  049ba98  b 0x49bf40
  049ba9c  lfs 27, 16(3)
  049baa0  lfs 1, 16(31)
  049baa4  lis 4, 74
  049baa8  lfs 2, 20(3)
  049baac  lfs 3, 20(31)
  049bab0  fsubs 5, 27, 1
  049bab4  addi 3, 4, -18328
  049bab8  fsubs 6, 2, 3
  049babc  lis 4, 140
  049bac0  lis 29, 115
  049bac4  lfs 30, 8(3)
  049bac8  lfs 29, 12(3)
  049bacc  addic 29, 29, 22784
  049bad0  fabs 8, 5
  049bad4  fabs 9, 6
  049bad8  stfs 5, 124(1)
  049badc  stfs 6, 128(1)
  049bae0  fsubs 5, 8, 9
  049bae4  stfs 5, 132(1)
  049bae8  lwz 5, 124(1)
  049baec  lfs 26, 4(3)
  049baf0  lfs 5, 124(1)
  049baf4  fabs 7, 5
  049baf8  lfs 5, 32612(4)
  049bafc  lwz 3, 128(1)
  049bb00  fmuls 30, 5, 30
  049bb04  fmuls 29, 5, 29
  049bb08  lfs 5, 128(1)
  049bb0c  rlwinm 3, 3, 3, 29, 29
  049bb10  lwz 4, 132(1)
  049bb14  lfs 6, 132(1)
  049bb18  rlwimi 3, 4, 2, 30, 30
  049bb1c  fabs 11, 5
  049bb20  fsub 10, 6, 26
  049bb24  ori 4, 29, 0
  049bb28  fsub 6, 6, 26
  049bb2c  rlwimi 3, 5, 4, 28, 28
  049bb30  rlwimi 4, 3, 2, 26, 28
  049bb34  slwi 3, 3, 2
  049bb38  clrldi 4, 4, 32
  049bb3c  lfsx 28, 29, 3
  049bb40  fsel 7, 10, 7, 9
  049bb44  lfs 5, 4(4)
  049bb48  fsel 6, 6, 11, 8
  049bb4c  fcmpu 0, 7, 26
  049bb50  bt 1, 0x49bb5c
  049bb54  fmr 28, 26
  049bb58  b 0x49bc74
  049bb5c  fsubs 8, 6, 7
  049bb60  fadds 6, 6, 7
  049bb64  addic 3, 1, 16
  049bb68  li 7, 2
  049bb6c  addic 5, 3, 180
  049bb70  addic 4, 3, 164
  049bb74  mtctr 7
  049bb78  fdivs 6, 8, 6
  049bb7c  fmuls 7, 6, 6
  049bb80  stfs 6, 180(28)
  049bb84  stfs 6, 184(28)
  049bb88  stfs 6, 188(28)
  049bb8c  stfs 6, 192(28)
  049bb90  lfs 6, 192(1)
  049bb94  lfs 8, 184(1)
  049bb98  lfs 10, 188(1)
  049bb9c  fmuls 9, 7, 7
  049bba0  fmuls 8, 8, 7
  049bba4  fmuls 11, 6, 9
  049bba8  fmuls 10, 10, 9
  049bbac  fmuls 6, 9, 9
  049bbb0  stfs 8, 184(1)
  049bbb4  fmuls 7, 11, 7
  049bbb8  stfs 10, 188(1)
  049bbbc  stfs 7, 192(1)
  049bbc0  lfs 7, 164(3)
  049bbc4  fmuls 7, 7, 6
  049bbc8  stfs 7, 180(3)
  049bbcc  lfs 7, 4(4)
  049bbd0  addic 4, 4, 8
  049bbd4  fmuls 7, 7, 6
  049bbd8  addic 3, 3, 8
  049bbdc  stfs 7, 4(5)
  049bbe0  addic 5, 5, 8
  049bbe4  bdnz 0x49bbc0
  049bbe8  li 5, 4
  049bbec  ori 3, 1, 0
  049bbf0  mtctr 5
  049bbf4  lis 4, 115
  049bbf8  addic 5, 3, 180
  049bbfc  addic 4, 4, 22752
  049bc00  ori 6, 5, 0
  049bc04  lfs 6, 180(3)
  049bc08  lfs 7, 0(4)
  049bc0c  fmuls 6, 6, 7
  049bc10  lfs 7, 4(4)
  049bc14  addic 4, 4, 8
  049bc18  stfs 6, 180(3)
  049bc1c  lfs 6, 4(5)
  049bc20  addic 3, 3, 8
  049bc24  fmuls 6, 6, 7
  049bc28  stfs 6, 4(5)
  049bc2c  addic 5, 5, 8
  049bc30  bdnz 0x49bc04
  049bc34  ori 3, 1, 0
  049bc38  fmr 6, 26
  049bc3c  mtctr 7
  049bc40  lfs 7, 180(3)
  049bc44  fadds 6, 6, 7
  049bc48  lfs 7, 4(6)
  049bc4c  addic 3, 3, 16
  049bc50  lfs 8, 8(6)
  049bc54  lfs 9, 12(6)
  049bc58  addic 6, 6, 16
  049bc5c  fadds 6, 6, 7
  049bc60  fadds 6, 6, 8
  049bc64  fadds 6, 6, 9
  049bc68  bdnz 0x49bc40
  049bc6c  fadds 6, 6, 31
  049bc70  fmadds 28, 6, 28, 5
  049bc74  fsubs 2, 3, 2
  049bc78  fsubs 1, 1, 27
  049bc7c  lfs 3, 24(31)
  049bc80  lis 3, 165
  049bc84  fsubs 3, 3, 4
  049bc88  addic 3, 3, -28284
  049bc8c  rlwinm 4, 30, 2, 22, 29
  049bc90  fmuls 2, 2, 2
  049bc94  lwzx 30, 3, 4
  049bc98  fmadds 1, 1, 1, 2
  049bc9c  fmadds 27, 3, 3, 1
  049bca0  fsqrts 27, 27
  049bca4  lis 3, 164
  049bca8  lhz 4, 0(30)
  049bcac  rlwinm 4, 4, 8, 9, 23
  049bcb0  lwz 3, -28512(3)
  049bcb4  addc 3, 3, 4
  049bcb8  clrldi 3, 3, 32
  049bcbc  lbz 4, 32(3)
  049bcc0  cmpwi 4, 7
  049bcc4  bt 2, 0x49bd08
  049bcc8  lfs 1, 20(3)
  049bccc  lfs 2, 20(31)
  049bcd0  lfs 3, 16(3)
  049bcd4  fsubs 1, 1, 2
  049bcd8  lfs 2, 16(31)
  049bcdc  fsubs 2, 3, 2
  049bce0  lfs 3, 24(3)
  049bce4  lfs 4, 24(31)
  049bce8  fsubs 3, 3, 4
  049bcec  fmuls 1, 1, 1
  049bcf0  fmadds 1, 2, 2, 1
  049bcf4  fmadds 1, 3, 3, 1
  049bcf8  fsqrts 1, 1
  049bcfc  fcmpu 0, 1, 27
  049bd00  cror 6, 1, 2
  049bd04  bt 6, 0x49bef4
  049bd08  lfs 1, 16(3)
  049bd0c  lfs 2, 16(31)
  049bd10  lfs 3, 20(3)
  049bd14  lfs 4, 20(31)
  049bd18  fsubs 1, 1, 2
  049bd1c  fsubs 2, 3, 4
  049bd20  fabs 3, 1
  049bd24  fabs 4, 2
  049bd28  stfs 1, 112(1)
  049bd2c  stfs 2, 116(1)
  049bd30  fsubs 1, 3, 4
  049bd34  stfs 1, 120(1)
  049bd38  lwz 3, 112(1)
  049bd3c  lfs 1, 112(1)
  049bd40  lwz 4, 116(1)
  049bd44  lfs 2, 116(1)
  049bd48  lwz 5, 120(1)
  049bd4c  rlwinm 4, 4, 3, 29, 29
  049bd50  fabs 5, 2
  049bd54  lfs 2, 120(1)
  049bd58  fabs 1, 1
  049bd5c  rlwimi 4, 5, 2, 30, 30
  049bd60  fsub 6, 2, 26
  049bd64  fsub 7, 2, 26
  049bd68  rlwimi 4, 3, 4, 28, 28
  049bd6c  ori 3, 29, 0
  049bd70  rlwimi 3, 4, 2, 26, 28
  049bd74  slwi 4, 4, 2
  049bd78  clrldi 3, 3, 32
  049bd7c  fsel 4, 6, 1, 4
  049bd80  lfsx 1, 29, 4
  049bd84  fsel 3, 7, 5, 3
  049bd88  lfs 2, 4(3)
  049bd8c  fcmpu 0, 4, 26
  049bd90  bt 1, 0x49bd9c
  049bd94  fmr 1, 26
  049bd98  b 0x49beb4
  049bd9c  fsubs 5, 3, 4
  049bda0  fadds 3, 3, 4
  049bda4  addic 3, 1, 16
  049bda8  li 6, 2
  049bdac  addic 5, 3, 148
  049bdb0  addic 4, 3, 132
  049bdb4  mtctr 6
  049bdb8  fdivs 3, 5, 3
  049bdbc  fmuls 4, 3, 3
  049bdc0  stfs 3, 148(28)
  049bdc4  stfs 3, 152(28)
  049bdc8  stfs 3, 156(28)
  049bdcc  stfs 3, 160(28)
  049bdd0  lfs 3, 160(1)
  049bdd4  lfs 5, 152(1)
  049bdd8  lfs 7, 156(1)
  049bddc  fmuls 6, 4, 4
  049bde0  fmuls 5, 5, 4
  049bde4  fmuls 8, 3, 6
  049bde8  fmuls 7, 7, 6
  049bdec  fmuls 3, 6, 6
  049bdf0  stfs 5, 152(1)
  049bdf4  fmuls 4, 8, 4
  049bdf8  stfs 7, 156(1)
  049bdfc  stfs 4, 160(1)
  049be00  lfs 4, 132(3)
  049be04  fmuls 4, 4, 3
  049be08  stfs 4, 148(3)
  049be0c  lfs 4, 4(4)
  049be10  addic 4, 4, 8
  049be14  fmuls 4, 4, 3
  049be18  addic 3, 3, 8
  049be1c  stfs 4, 4(5)
  049be20  addic 5, 5, 8
  049be24  bdnz 0x49be00
  049be28  li 5, 4
  049be2c  ori 3, 1, 0
  049be30  mtctr 5
  049be34  lis 4, 115
  049be38  addic 5, 3, 148
  049be3c  addic 4, 4, 22752
  049be40  ori 7, 5, 0
  049be44  lfs 3, 148(3)
  049be48  lfs 4, 0(4)
  049be4c  fmuls 3, 3, 4
  049be50  lfs 4, 4(4)
  049be54  addic 4, 4, 8
  049be58  stfs 3, 148(3)
  049be5c  lfs 3, 4(5)
  049be60  addic 3, 3, 8
  049be64  fmuls 3, 3, 4
  049be68  stfs 3, 4(5)
  049be6c  addic 5, 5, 8
  049be70  bdnz 0x49be44
  049be74  ori 3, 1, 0
  049be78  fmr 3, 26
  049be7c  mtctr 6
  049be80  lfs 4, 148(3)
  049be84  fadds 3, 3, 4
  049be88  lfs 4, 4(7)
  049be8c  addic 3, 3, 16
  049be90  lfs 5, 8(7)
  049be94  lfs 6, 12(7)
  049be98  addic 7, 7, 16
  049be9c  fadds 3, 3, 4
  049bea0  fadds 3, 3, 5
  049bea4  fadds 3, 3, 6
  049bea8  bdnz 0x49be80
  049beac  fadds 3, 3, 31
  049beb0  fmadds 1, 3, 1, 2
  049beb4  fmr 2, 28
  049beb8  bl 0x5025e0
  049bebc  nop
  049bec0  fcmpu 0, 1, 26
  049bec4  cror 6, 0, 2
  049bec8  bt 6, 0x49bee0
  049becc  fcmpu 0, 29, 1
  049bed0  cror 6, 0, 2
  049bed4  bt 6, 0x49bee0
  049bed8  fmr 29, 1
  049bedc  b 0x49bef4
  049bee0  fcmpu 1, 30, 1
  049bee4  fcmpu 0, 1, 26
  049bee8  crnand 2, 0, 4
  049beec  bt 2, 0x49bef4
  049bef0  fmr 30, 1
  049bef4  lhz 3, 0(30)
  049bef8  addic 30, 30, 2
  049befc  extsh 3, 3
  049bf00  cmpwi 3, 0
  049bf04  bf 0, 0x49bca4
  049bf08  fmr 1, 29
  049bf0c  fmr 2, 30
  049bf10  bl 0x5026a0
  049bf14  nop
  049bf18  lis 3, 74
  049bf1c  addi 3, 3, -18328
  049bf20  lfs 2, 16(3)
  049bf24  fmuls 2, 1, 2
  049bf28  fmr 1, 30
  049bf2c  bl 0x502578
  049bf30  nop
  049bf34  fmr 2, 28
  049bf38  bl 0x502578
  049bf3c  nop
  049bf40  ld 0, 352(1)
  049bf44  mtlr 0
  049bf48  lfd 26, 288(1)
  049bf4c  lfd 27, 296(1)
  049bf50  lfd 28, 304(1)
  049bf54  lfd 29, 312(1)
  049bf58  lfd 30, 320(1)
  049bf5c  lfd 31, 328(1)
  049bf60  ld 28, 256(1)
  049bf64  ld 29, 264(1)
  049bf68  ld 30, 272(1)
  049bf6c  ld 31, 280(1)
  049bf70  addi 1, 1, 336
  049bf74  blr

M870_0049bf78:   # 0x49bf78, 0x5c bytes
  049bf78  ori 5, 3, 0
  049bf7c  lis 3, 165
  049bf80  lis 4, 164
  049bf84  addic 6, 3, -28284
  049bf88  li 3, 2
  049bf8c  lbz 5, 33(5)
  049bf90  slwi 5, 5, 2
  049bf94  lwzx 5, 6, 5
  049bf98  lhz 6, 0(5)
  049bf9c  lwz 7, -28512(4)
  049bfa0  rlwinm 6, 6, 8, 9, 23
  049bfa4  addc 6, 7, 6
  049bfa8  clrldi 6, 6, 32
  049bfac  lbz 7, 32(6)
  049bfb0  cmpwi 7, 1
  049bfb4  bf 2, 0x49bfbc
  049bfb8  stb 3, 32(6)
  049bfbc  lhz 6, 0(5)
  049bfc0  addic 5, 5, 2
  049bfc4  extsh 6, 6
  049bfc8  cmpwi 6, 0
  049bfcc  bf 0, 0x49bf98
  049bfd0  blr

M870_0049bff8:   # 0x49bff8, 0x760 bytes
  049bff8  stdu 1, -224(1)
  049bffc  mflr 0
  049c000  std 0, 240(1)
  049c004  stfd 31, 216(1)
  049c008  std 30, 200(1)
  049c00c  std 31, 208(1)
  049c010  lwz 30, 120(3)
  049c014  ori 31, 3, 0
  049c018  lwz 3, 56(30)
  049c01c  std 29, 192(1)
  049c020  cmpwi 3, 0
  049c024  bt 2, 0x49c060
  049c028  lis 3, 74
  049c02c  addi 3, 3, -16428
  049c030  lfs 1, 0(3)
  049c034  lfs 2, 4(3)
  049c038  bl 0xfcbe8
  049c03c  nop
  049c040  lis 3, 114
  049c044  lfs 2, -3056(3)
  049c048  fmuls 1, 1, 2
  049c04c  bl 0x502758
  049c050  nop
  049c054  li 4, 0
  049c058  stw 3, 428(30)
  049c05c  stw 4, 56(30)
  049c060  addic 3, 30, 428
  049c064  bl 0x4fff60
  049c068  nop
  049c06c  lis 3, 74
  049c070  li 6, 0
  049c074  addi 7, 3, -16428
  049c078  ori 3, 31, 0
  049c07c  lis 4, 51
  049c080  li 5, 0
  049c084  lfs 31, 8(7)
  049c088  stw 6, 116(1)
  049c08c  bl 0x10675c
  049c090  nop
  049c094  ori 29, 3, 0
  049c098  addic 5, 30, 32
  049c09c  ori 4, 29, 0
  049c0a0  li 6, 0
  049c0a4  addic 7, 1, 112
  049c0a8  li 9, 0
  049c0ac  addic 8, 1, 116
  049c0b0  ori 3, 31, 0
  049c0b4  li 10, 4
  049c0b8  bl 0x106840
  049c0bc  nop
  049c0c0  lwz 4, 112(1)
  049c0c4  cmpwi 4, 1
  049c0c8  bt 2, 0x49c5e8
  049c0cc  lbz 4, 32(31)
  049c0d0  cmpwi 4, 13
  049c0d4  bt 2, 0x49c5e8
  049c0d8  lfs 1, 32(30)
  049c0dc  lfs 2, 116(1)
  049c0e0  fsubs 1, 1, 2
  049c0e4  fcmpu 0, 1, 31
  049c0e8  stfs 1, 32(30)
  049c0ec  lbz 4, 33(31)
  049c0f0  cmpwi 1, 4, 255
  049c0f4  bt 1, 0x49c0fc
  049c0f8  li 3, 1
  049c0fc  bt 6, 0x49c150
  049c100  lis 5, 165
  049c104  rlwinm 4, 4, 2, 22, 29
  049c108  addic 5, 5, -28284
  049c10c  lis 6, 164
  049c110  li 7, 2
  049c114  lwzx 4, 5, 4
  049c118  lhz 5, 0(4)
  049c11c  lwz 8, -28512(6)
  049c120  rlwinm 5, 5, 8, 9, 23
  049c124  addc 5, 8, 5
  049c128  clrldi 5, 5, 32
  049c12c  lbz 8, 32(5)
  049c130  cmpwi 8, 1
  049c134  bf 2, 0x49c13c
  049c138  stb 7, 32(5)
  049c13c  lhz 5, 0(4)
  049c140  addic 4, 4, 2
  049c144  extsh 5, 5
  049c148  cmpwi 5, 0
  049c14c  bf 0, 0x49c118
  049c150  lis 4, 74
  049c154  cmpwi 3, 2
  049c158  addi 4, 4, -16428
  049c15c  cmpwi 1, 3, 10
  049c160  cmpwi 6, 3, -1
  049c164  lfs 4, 12(4)
  049c168  bt 1, 0x49c17c
  049c16c  cmpwi 1, 3, 0
  049c170  bf 25, 0x49c5d8
  049c174  bf 5, 0x49c5d8
  049c178  b 0x49c3b4
  049c17c  bt 5, 0x49c5d8
  049c180  lis 3, 74
  049c184  vspltisw 2, -1
  049c188  li 4, 12
  049c18c  addi 3, 3, -16428
  049c190  li 6, 16
  049c194  lis 5, 114
  049c198  stb 4, 32(31)
  049c19c  li 4, -3056
  049c1a0  vslw 2, 2, 2
  049c1a4  lvlx 3, 6, 3
  049c1a8  lis 3, 140
  049c1ac  vspltw 3, 3, 0
  049c1b0  lvlx 4, 4, 5
  049c1b4  lis 6, 16872
  049c1b8  lis 4, 114
  049c1bc  li 5, 38
  049c1c0  vmaddfp 2, 4, 3, 2
  049c1c4  lfs 1, 32576(3)
  049c1c8  lis 3, 140
  049c1cc  lfs 2, -3052(4)
  049c1d0  lis 4, 16752
  049c1d4  fmuls 1, 1, 2
  049c1d8  vctsxs 2, 2, 0
  049c1dc  vsplth 2, 2, 1
  049c1e0  stvehx 2, 5, 30
  049c1e4  stfs 1, 136(30)
  049c1e8  lfs 1, 32580(3)
  049c1ec  stw 4, 192(30)
  049c1f0  fmuls 1, 1, 2
  049c1f4  stw 6, 196(30)
  049c1f8  lis 6, 115
  049c1fc  addic 6, 6, 22784
  049c200  stfs 1, 140(30)
  049c204  lwz 4, 16(29)
  049c208  lwz 3, 20(29)
  049c20c  lfs 1, 16(29)
  049c210  lfs 2, 20(29)
  049c214  fabs 3, 1
  049c218  fabs 6, 2
  049c21c  rlwinm 5, 3, 3, 29, 29
  049c220  addic 3, 30, 112
  049c224  fsubs 1, 3, 6
  049c228  stfs 1, 124(1)
  049c22c  lwz 7, 124(1)
  049c230  lfs 1, 124(1)
  049c234  rlwimi 5, 7, 2, 30, 30
  049c238  fsub 5, 1, 31
  049c23c  fsub 7, 1, 31
  049c240  rlwimi 5, 4, 4, 28, 28
  049c244  ori 4, 6, 0
  049c248  rlwimi 4, 5, 2, 26, 28
  049c24c  slwi 5, 5, 2
  049c250  clrldi 4, 4, 32
  049c254  fsel 5, 5, 3, 6
  049c258  lfsx 1, 6, 5
  049c25c  fsel 3, 7, 6, 3
  049c260  lfs 2, 4(4)
  049c264  fcmpu 0, 5, 31
  049c268  bt 1, 0x49c274
  049c26c  fmr 1, 31
  049c270  b 0x49c38c
  049c274  fsubs 6, 3, 5
  049c278  fadds 3, 3, 5
  049c27c  addic 4, 1, 16
  049c280  li 7, 2
  049c284  addic 6, 4, 160
  049c288  addic 5, 4, 144
  049c28c  mtctr 7
  049c290  fdivs 3, 6, 3
  049c294  fmuls 5, 3, 3
  049c298  stfs 3, 172(1)
  049c29c  stfs 3, 164(1)
  049c2a0  stfs 3, 168(1)
  049c2a4  stfs 3, 160(1)
  049c2a8  lfs 7, 172(1)
  049c2ac  lfs 8, 164(1)
  049c2b0  lfs 9, 168(1)
  049c2b4  fmuls 6, 5, 5
  049c2b8  fmuls 8, 8, 5
  049c2bc  fmuls 7, 7, 6
  049c2c0  fmuls 3, 6, 6
  049c2c4  fmuls 6, 9, 6
  049c2c8  stfs 8, 164(1)
  049c2cc  fmuls 5, 7, 5
  049c2d0  stfs 6, 168(1)
  049c2d4  stfs 5, 172(1)
  049c2d8  lfs 5, 144(4)
  049c2dc  fmuls 5, 5, 3
  049c2e0  stfs 5, 160(4)
  049c2e4  lfs 5, 4(5)
  049c2e8  addic 5, 5, 8
  049c2ec  fmuls 5, 5, 3
  049c2f0  addic 4, 4, 8
  049c2f4  stfs 5, 4(6)
  049c2f8  addic 6, 6, 8
  049c2fc  bdnz 0x49c2d8
  049c300  li 6, 4
  049c304  ori 4, 1, 0
  049c308  mtctr 6
  049c30c  lis 5, 115
  049c310  addic 6, 4, 160
  049c314  addic 5, 5, 22752
  049c318  ori 8, 6, 0
  049c31c  lfs 3, 160(4)
  049c320  lfs 5, 0(5)
  049c324  fmuls 3, 3, 5
  049c328  lfs 5, 4(5)
  049c32c  addic 5, 5, 8
  049c330  stfs 3, 160(4)
  049c334  lfs 3, 4(6)
  049c338  addic 4, 4, 8
  049c33c  fmuls 3, 3, 5
  049c340  stfs 3, 4(6)
  049c344  addic 6, 6, 8
  049c348  bdnz 0x49c31c
  049c34c  ori 4, 1, 0
  049c350  fmr 3, 31
  049c354  mtctr 7
  049c358  lfs 5, 160(4)
  049c35c  fadds 3, 3, 5
  049c360  lfs 5, 4(8)
  049c364  addic 4, 4, 16
  049c368  lfs 6, 8(8)
  049c36c  lfs 7, 12(8)
  049c370  addic 8, 8, 16
  049c374  fadds 3, 3, 5
  049c378  fadds 3, 3, 6
  049c37c  fadds 3, 3, 7
  049c380  bdnz 0x49c358
  049c384  fadds 3, 3, 4
  049c388  fmadds 1, 3, 1, 2
  049c38c  ori 4, 3, 0
  049c390  ori 3, 31, 0
  049c394  li 6, 15
  049c398  li 7, 1
  049c39c  li 8, 0
  049c3a0  bl 0x10ad80
  049c3a4  nop
  049c3a8  li 3, 250
  049c3ac  stb 3, 103(30)
  049c3b0  b 0x49c5d8
  049c3b4  li 3, 13
  049c3b8  li 4, 0
  049c3bc  lhz 6, 52(31)
  049c3c0  lis 5, 74
  049c3c4  rlwimi 6, 4, 0, 19, 19
  049c3c8  addi 5, 5, -16428
  049c3cc  stb 3, 32(31)
  049c3d0  lis 3, 114
  049c3d4  lis 4, 16856
  049c3d8  sth 6, 52(31)
  049c3dc  lfs 1, 20(5)
  049c3e0  lfs 2, -3052(3)
  049c3e4  lis 3, 16736
  049c3e8  fmuls 1, 2, 1
  049c3ec  lis 6, 115
  049c3f0  addic 6, 6, 22784
  049c3f4  stfs 1, 136(30)
  049c3f8  lfs 1, 24(5)
  049c3fc  stw 3, 192(30)
  049c400  fmuls 1, 2, 1
  049c404  stw 4, 196(30)
  049c408  stfs 1, 140(30)
  049c40c  lwz 4, 16(29)
  049c410  lwz 3, 20(29)
  049c414  lfs 1, 16(29)
  049c418  lfs 2, 20(29)
  049c41c  fabs 3, 1
  049c420  fabs 6, 2
  049c424  rlwinm 5, 3, 3, 29, 29
  049c428  addic 3, 30, 112
  049c42c  fsubs 1, 3, 6
  049c430  stfs 1, 120(1)
  049c434  lwz 7, 120(1)
  049c438  lfs 1, 120(1)
  049c43c  rlwimi 5, 7, 2, 30, 30
  049c440  fsub 5, 1, 31
  049c444  fsub 7, 1, 31
  049c448  rlwimi 5, 4, 4, 28, 28
  049c44c  ori 4, 6, 0
  049c450  rlwimi 4, 5, 2, 26, 28
  049c454  slwi 5, 5, 2
  049c458  clrldi 4, 4, 32
  049c45c  fsel 5, 5, 3, 6
  049c460  lfsx 1, 6, 5
  049c464  fsel 3, 7, 6, 3
  049c468  lfs 2, 4(4)
  049c46c  fcmpu 0, 5, 31
  049c470  bt 1, 0x49c47c
  049c474  fmr 4, 31
  049c478  b 0x49c594
  049c47c  fsubs 6, 3, 5
  049c480  fadds 3, 3, 5
  049c484  addic 4, 1, 16
  049c488  li 8, 2
  049c48c  addic 6, 4, 128
  049c490  addic 5, 4, 112
  049c494  mtctr 8
  049c498  fdivs 3, 6, 3
  049c49c  fmuls 5, 3, 3
  049c4a0  stfs 3, 140(1)
  049c4a4  stfs 3, 132(1)
  049c4a8  stfs 3, 136(1)
  049c4ac  stfs 3, 128(1)
  049c4b0  lfs 7, 140(1)
  049c4b4  lfs 8, 132(1)
  049c4b8  lfs 9, 136(1)
  049c4bc  fmuls 6, 5, 5
  049c4c0  fmuls 8, 8, 5
  049c4c4  fmuls 7, 7, 6
  049c4c8  fmuls 3, 6, 6
  049c4cc  fmuls 6, 9, 6
  049c4d0  stfs 8, 132(1)
  049c4d4  fmuls 5, 7, 5
  049c4d8  stfs 6, 136(1)
  049c4dc  stfs 5, 140(1)
  049c4e0  lfs 5, 112(4)
  049c4e4  fmuls 5, 5, 3
  049c4e8  stfs 5, 128(4)
  049c4ec  lfs 5, 4(5)
  049c4f0  addic 5, 5, 8
  049c4f4  fmuls 5, 5, 3
  049c4f8  addic 4, 4, 8
  049c4fc  stfs 5, 4(6)
  049c500  addic 6, 6, 8
  049c504  bdnz 0x49c4e0
  049c508  li 6, 4
  049c50c  ori 4, 1, 0
  049c510  mtctr 6
  049c514  lis 5, 115
  049c518  addic 6, 4, 128
  049c51c  addic 5, 5, 22752
  049c520  ori 7, 6, 0
  049c524  lfs 3, 128(4)
  049c528  lfs 5, 0(5)
  049c52c  fmuls 3, 3, 5
  049c530  lfs 5, 4(5)
  049c534  addic 5, 5, 8
  049c538  stfs 3, 128(4)
  049c53c  lfs 3, 4(6)
  049c540  addic 4, 4, 8
  049c544  fmuls 3, 3, 5
  049c548  stfs 3, 4(6)
  049c54c  addic 6, 6, 8
  049c550  bdnz 0x49c524
  049c554  ori 4, 1, 0
  049c558  fmr 3, 31
  049c55c  mtctr 8
  049c560  lfs 5, 128(4)
  049c564  fadds 3, 3, 5
  049c568  lfs 5, 4(7)
  049c56c  addic 4, 4, 16
  049c570  lfs 6, 8(7)
  049c574  lfs 7, 12(7)
  049c578  addic 7, 7, 16
  049c57c  fadds 3, 3, 5
  049c580  fadds 3, 3, 6
  049c584  fadds 3, 3, 7
  049c588  bdnz 0x49c560
  049c58c  fadds 4, 3, 4
  049c590  fmadds 4, 4, 1, 2
  049c594  ori 4, 3, 0
  049c598  li 6, 18
  049c59c  fmr 1, 4
  049c5a0  ori 3, 31, 0
  049c5a4  li 7, 1
  049c5a8  li 8, 0
  049c5ac  bl 0x10ad80
  049c5b0  nop
  049c5b4  li 6, 250
  049c5b8  ori 3, 31, 0
  049c5bc  li 4, 2
  049c5c0  li 5, 3
  049c5c4  stb 6, 103(30)
  049c5c8  li 6, 0
  049c5cc  li 7, -1
  049c5d0  bl 0xfcd60
  049c5d4  nop
  049c5d8  addic 4, 30, 96
  049c5dc  ori 3, 31, 0
  049c5e0  bl 0x10c808
  049c5e4  nop
  049c5e8  li 5, 255
  049c5ec  ori 3, 31, 0
  049c5f0  addic 4, 30, 96
  049c5f4  stb 5, 164(31)
  049c5f8  bl 0x10c9a0
  049c5fc  nop
  049c600  lwz 3, 428(30)
  049c604  cmpwi 3, 0
  049c608  bt 2, 0x49c628
  049c60c  lis 3, 74
  049c610  lis 4, 140
  049c614  addi 3, 3, -16428
  049c618  lfs 1, 28(3)
  049c61c  lfs 31, 32604(4)
  049c620  fadds 31, 31, 1
  049c624  b 0x49c670
  049c628  lbz 3, 32(31)
  049c62c  cmpwi 3, 1
  049c630  bf 2, 0x49c668
  049c634  lis 3, 151
  049c638  addic 3, 3, -25376
  049c63c  lwz 4, 576(3)
  049c640  cmpw 31, 4
  049c644  bt 2, 0x49c654
  049c648  lwz 3, 572(3)
  049c64c  cmpw 31, 3
  049c650  bf 2, 0x49c664
  049c654  lis 3, 74
  049c658  addi 3, 3, -16428
  049c65c  lfs 31, 28(3)
  049c660  b 0x49c664
  049c664  b 0x49c670
  049c668  lis 3, 140
  049c66c  lfs 31, 32604(3)
  049c670  lis 3, 165
  049c674  fmr 1, 31
  049c678  addic 4, 30, 288
  049c67c  addic 5, 3, 7136
  049c680  lwz 3, 432(30)
  049c684  li 6, 0
  049c688  stfs 31, 416(30)
  049c68c  slwi 3, 3, 2
  049c690  extsw 7, 3
  049c694  ori 3, 31, 0
  049c698  lwzx 5, 5, 7
  049c69c  li 7, 0
  049c6a0  addic 8, 5, 16
  049c6a4  lwz 9, 0(5)
  049c6a8  extsw 9, 9
  049c6ac  bl 0x111ba0
  049c6b0  nop
  049c6b4  cmpwi 3, 2
  049c6b8  bt 2, 0x49c71c
  049c6bc  lfs 1, 372(30)
  049c6c0  lfs 2, 292(30)
  049c6c4  lfs 3, 368(30)
  049c6c8  fsubs 1, 1, 2
  049c6cc  lfs 2, 288(30)
  049c6d0  fsubs 2, 3, 2
  049c6d4  fmuls 1, 1, 1
  049c6d8  fmadds 1, 2, 2, 1
  049c6dc  lfs 2, 416(30)
  049c6e0  fsqrts 1, 1
  049c6e4  fcmpu 0, 1, 2
  049c6e8  bt 1, 0x49c714
  049c6ec  lfs 1, 24(31)
  049c6f0  lfs 2, 296(30)
  049c6f4  lis 3, 74
  049c6f8  fsubs 1, 1, 2
  049c6fc  addi 3, 3, -16428
  049c700  lfs 2, 32(3)
  049c704  fabs 1, 1
  049c708  fcmpu 0, 1, 2
  049c70c  cror 6, 0, 2
  049c710  bt 6, 0x49c71c
  049c714  li 3, 2
  049c718  stw 3, 356(30)
  049c71c  lwz 3, 352(30)
  049c720  cmpwi 3, 0
  049c724  bf 2, 0x49c738
  049c728  lis 3, 151
  049c72c  addic 3, 3, -25376
  049c730  lwz 3, 8320(3)
  049c734  stw 3, 352(30)
  049c738  ld 0, 240(1)
  049c73c  mtlr 0
  049c740  lfd 31, 216(1)
  049c744  ld 29, 192(1)
  049c748  ld 30, 200(1)
  049c74c  ld 31, 208(1)
  049c750  addi 1, 1, 224
  049c754  blr

UpdateMoby_870:   # 0x49c7d8, 0x14a0 bytes
  049c7d8  stdu 1, -400(1)
  049c7dc  mflr 0
  049c7e0  std 0, 416(1)
  049c7e4  stfd 24, 336(1)
  049c7e8  stfd 25, 344(1)
  049c7ec  stfd 26, 352(1)
  049c7f0  stfd 27, 360(1)
  049c7f4  stfd 28, 368(1)
  049c7f8  stfd 29, 376(1)
  049c7fc  stfd 30, 384(1)
  049c800  stfd 31, 392(1)
  049c804  std 31, 328(1)
  049c808  std 30, 320(1)
  049c80c  ori 31, 3, 0
  049c810  std 29, 312(1)
  049c814  std 28, 304(1)
  049c818  std 27, 296(1)
  049c81c  lwz 30, 120(31)
  049c820  bl 0x49bff8
  049c824  lwz 4, 36(31)
  049c828  lis 5, 140
  049c82c  lwz 29, 352(30)
  049c830  lbz 3, 32(31)
  049c834  lis 6, 16204
  049c838  cmpwi 3, 6
  049c83c  lfs 1, 36(4)
  049c840  lfs 2, 32568(5)
  049c844  ori 4, 6, 52429
  049c848  fmuls 1, 1, 2
  049c84c  stw 4, 88(31)
  049c850  stfs 1, 44(31)
  049c854  bt 1, 0x49c894
  049c858  cmpwi 3, 6
  049c85c  bt 2, 0x49cf9c
  049c860  cmpwi 3, 5
  049c864  bt 2, 0x49cef8
  049c868  cmpwi 3, 4
  049c86c  bt 2, 0x49ceac
  049c870  cmpwi 3, 3
  049c874  bt 2, 0x49cd60
  049c878  cmpwi 3, 2
  049c87c  bt 2, 0x49cb90
  049c880  cmpwi 3, 1
  049c884  bt 2, 0x49cadc
  049c888  cmpwi 3, 0
  049c88c  bt 2, 0x49c8c8
  049c890  b 0x49dc34
  049c894  cmpwi 3, 13
  049c898  bt 2, 0x49dbd8
  049c89c  cmpwi 3, 12
  049c8a0  bt 2, 0x49daf4
  049c8a4  cmpwi 3, 11
  049c8a8  bt 2, 0x49d5e4
  049c8ac  cmpwi 3, 10
  049c8b0  bt 2, 0x49d8a4
  049c8b4  cmpwi 3, 9
  049c8b8  bt 2, 0x49d3e0
  049c8bc  cmpwi 3, 7
  049c8c0  bt 2, 0x49d02c
  049c8c4  b 0x49dc34
  049c8c8  lis 4, 16512
  049c8cc  li 5, 3
  049c8d0  li 6, 4
  049c8d4  addic 3, 30, 208
  049c8d8  stw 4, 32(30)
  049c8dc  stb 5, 40(30)
  049c8e0  sth 6, 36(30)
  049c8e4  lfs 1, 16(31)
  049c8e8  lhz 4, 52(31)
  049c8ec  stfs 1, 368(30)
  049c8f0  lfs 1, 20(31)
  049c8f4  ori 4, 4, 20480
  049c8f8  stfs 1, 372(30)
  049c8fc  lfs 1, 24(31)
  049c900  sth 4, 52(31)
  049c904  stfs 1, 376(30)
  049c908  lfs 1, 28(31)
  049c90c  stfs 1, 380(30)
  049c910  bl 0x100f8c
  049c914  nop
  049c918  lis 5, 74
  049c91c  lis 3, 16128
  049c920  lis 4, 16384
  049c924  addi 29, 5, -14504
  049c928  lis 28, 140
  049c92c  stw 3, 220(30)
  049c930  stw 4, 216(30)
  049c934  lfs 1, 0(29)
  049c938  lfs 2, 32568(28)
  049c93c  fmuls 1, 2, 1
  049c940  bl 0x502758
  049c944  nop
  049c948  lis 4, 114
  049c94c  lfs 1, 32568(28)
  049c950  lfs 2, 420(30)
  049c954  stfs 1, 212(30)
  049c958  lfs 1, -3052(4)
  049c95c  stw 3, 208(30)
  049c960  fmuls 1, 2, 1
  049c964  stfs 1, 244(30)
  049c968  lfs 1, 4(29)
  049c96c  bl 0x502758
  049c970  nop
  049c974  lis 4, 16192
  049c978  lis 5, 140
  049c97c  lis 6, 114
  049c980  stw 4, 152(30)
  049c984  lis 4, 14851
  049c988  lfs 1, 32572(5)
  049c98c  lfs 2, -3048(6)
  049c990  ori 4, 4, 4719
  049c994  stw 3, 144(30)
  049c998  fmuls 1, 1, 2
  049c99c  li 3, 0
  049c9a0  li 6, 9
  049c9a4  lwz 5, 448(30)
  049c9a8  stw 4, 132(30)
  049c9ac  cmpwi 5, -1
  049c9b0  stb 3, 173(30)
  049c9b4  stw 6, 148(30)
  049c9b8  stfs 1, 128(30)
  049c9bc  bf 1, 0x49c9cc
  049c9c0  li 3, 3
  049c9c4  stb 3, 32(31)
  049c9c8  b 0x49dc34
  049c9cc  lwz 3, 436(30)
  049c9d0  cmpwi 3, 0
  049c9d4  bt 2, 0x49caa0
  049c9d8  lis 3, 74
  049c9dc  vspltisw 2, -1
  049c9e0  li 4, 2
  049c9e4  addi 3, 3, -14504
  049c9e8  li 6, 8
  049c9ec  lis 5, 114
  049c9f0  stb 4, 32(31)
  049c9f4  li 4, -3056
  049c9f8  vslw 2, 2, 2
  049c9fc  lvlx 3, 6, 3
  049ca00  li 3, 424
  049ca04  vspltw 3, 3, 0
  049ca08  lvlx 4, 4, 5
  049ca0c  vmaddfp 2, 4, 3, 2
  049ca10  vctsxs 2, 2, 0
  049ca14  vspltw 2, 2, 0
  049ca18  stvewx 2, 3, 30
  049ca1c  lbz 3, 83(31)
  049ca20  cmpwi 3, 6
  049ca24  bt 2, 0x49ca40
  049ca28  ori 3, 31, 0
  049ca2c  li 4, 6
  049ca30  li 5, 0
  049ca34  li 6, 0
  049ca38  bl 0xfddc0
  049ca3c  nop
  049ca40  lbz 31, 33(31)
  049ca44  cmpwi 31, 255
  049ca48  bt 2, 0x49dc34
  049ca4c  lis 3, 165
  049ca50  rlwinm 4, 31, 2, 22, 29
  049ca54  addic 5, 3, -28284
  049ca58  lis 3, 164
  049ca5c  lwzx 31, 5, 4
  049ca60  lhz 4, 0(31)
  049ca64  lwz 5, -28512(3)
  049ca68  rlwinm 4, 4, 8, 9, 23
  049ca6c  addc 4, 5, 4
  049ca70  clrldi 4, 4, 32
  049ca74  lbz 5, 32(4)
  049ca78  cmpwi 5, 1
  049ca7c  bf 2, 0x49ca88
  049ca80  li 5, 2
  049ca84  stb 5, 32(4)
  049ca88  lhz 4, 0(31)
  049ca8c  addic 31, 31, 2
  049ca90  extsh 4, 4
  049ca94  cmpwi 4, 0
  049ca98  bf 0, 0x49ca60
  049ca9c  b 0x49dc34
  049caa0  li 3, 1
  049caa4  lbz 4, 83(31)
  049caa8  cmpwi 4, 6
  049caac  stb 3, 32(31)
  049cab0  bt 2, 0x49cacc
  049cab4  ori 3, 31, 0
  049cab8  li 4, 6
  049cabc  li 5, 0
  049cac0  li 6, 0
  049cac4  bl 0xfddc0
  049cac8  nop
  049cacc  lis 3, 140
  049cad0  lfs 1, 32604(3)
  049cad4  stfs 1, 416(30)
  049cad8  b 0x49dc34
  049cadc  lis 3, 16000
  049cae0  lwz 4, 356(30)
  049cae4  cmpwi 4, 2
  049cae8  stw 3, 88(31)
  049caec  bt 2, 0x49dc34
  049caf0  lis 4, 74
  049caf4  vspltisw 2, -1
  049caf8  li 3, 2
  049cafc  addi 4, 4, -14504
  049cb00  li 6, 8
  049cb04  lis 5, 114
  049cb08  stb 3, 32(31)
  049cb0c  li 7, -3056
  049cb10  vslw 2, 2, 2
  049cb14  lvlx 3, 6, 4
  049cb18  li 4, 424
  049cb1c  vspltw 3, 3, 0
  049cb20  lvlx 4, 7, 5
  049cb24  vmaddfp 2, 4, 3, 2
  049cb28  vctsxs 2, 2, 0
  049cb2c  vspltw 2, 2, 0
  049cb30  stvewx 2, 4, 30
  049cb34  lbz 31, 33(31)
  049cb38  cmpwi 31, 255
  049cb3c  bt 2, 0x49dc34
  049cb40  lis 4, 165
  049cb44  rlwinm 5, 31, 2, 22, 29
  049cb48  addic 4, 4, -28284
  049cb4c  lis 31, 164
  049cb50  lwzx 4, 4, 5
  049cb54  lhz 5, 0(4)
  049cb58  lwz 6, -28512(31)
  049cb5c  rlwinm 5, 5, 8, 9, 23
  049cb60  addc 5, 6, 5
  049cb64  clrldi 5, 5, 32
  049cb68  lbz 6, 32(5)
  049cb6c  cmpwi 6, 1
  049cb70  bf 2, 0x49cb78
  049cb74  stb 3, 32(5)
  049cb78  lhz 5, 0(4)
  049cb7c  addic 4, 4, 2
  049cb80  extsh 5, 5
  049cb84  cmpwi 5, 0
  049cb88  bf 0, 0x49cb54
  049cb8c  b 0x49dc34
  049cb90  lis 3, 16320
  049cb94  lbz 4, 83(31)
  049cb98  cmpwi 4, 6
  049cb9c  cmpwi 1, 4, 20
  049cba0  stw 3, 88(31)
  049cba4  bf 2, 0x49cc48
  049cba8  lwz 3, 424(30)
  049cbac  cmpwi 3, 0
  049cbb0  bf 2, 0x49cbe8
  049cbb4  lis 3, 74
  049cbb8  addi 3, 3, -14504
  049cbbc  lfs 1, 12(3)
  049cbc0  lfs 2, 16(3)
  049cbc4  bl 0xfcbe8
  049cbc8  nop
  049cbcc  lis 3, 114
  049cbd0  lfs 2, -3056(3)
  049cbd4  fmuls 1, 1, 2
  049cbd8  bl 0x502758
  049cbdc  nop
  049cbe0  stw 3, 424(30)
  049cbe4  b 0x49dc34
  049cbe8  addic 3, 30, 424
  049cbec  bl 0x4fff60
  049cbf0  nop
  049cbf4  cmpwi 3, 0
  049cbf8  bt 2, 0x49dc34
  049cbfc  lbz 3, 83(31)
  049cc00  cmpwi 3, 21
  049cc04  bt 2, 0x49dc34
  049cc08  lis 3, 74
  049cc0c  lis 4, 114
  049cc10  addi 3, 3, -14504
  049cc14  li 5, 0
  049cc18  lfs 1, 20(3)
  049cc1c  lfs 2, -3056(4)
  049cc20  ori 3, 31, 0
  049cc24  fmuls 1, 2, 1
  049cc28  li 4, 21
  049cc2c  fctiwz 1, 1
  049cc30  stfd 1, 272(1)
  049cc34  lwz 6, 276(1)
  049cc38  extsw 6, 6
  049cc3c  bl 0xfddc0
  049cc40  nop
  049cc44  b 0x49dc34
  049cc48  lbz 3, 112(31)
  049cc4c  rlwinm 3, 3, 0, 30, 30
  049cc50  cmpwi 3, 0
  049cc54  bt 2, 0x49dc34
  049cc58  lis 3, 151
  049cc5c  lfs 1, 20(31)
  049cc60  lfs 2, 16(31)
  049cc64  addic 3, 3, -25376
  049cc68  lfs 3, 132(3)
  049cc6c  lfs 4, 128(3)
  049cc70  fsubs 1, 1, 3
  049cc74  fsubs 2, 2, 4
  049cc78  lis 3, 140
  049cc7c  fmuls 1, 1, 1
  049cc80  fmadds 1, 2, 2, 1
  049cc84  lfs 2, 32604(3)
  049cc88  fsqrts 1, 1
  049cc8c  fcmpu 0, 1, 2
  049cc90  cror 2, 1, 2
  049cc94  bt 2, 0x49cd14
  049cc98  lis 4, 74
  049cc9c  li 3, 7
  049cca0  addi 4, 4, -14504
  049cca4  stb 3, 32(31)
  049cca8  lfs 2, 408(30)
  049ccac  lfs 1, 24(4)
  049ccb0  lfs 3, 28(4)
  049ccb4  fmuls 1, 2, 1
  049ccb8  fmuls 2, 2, 3
  049ccbc  bl 0xfcbe8
  049ccc0  nop
  049ccc4  stfs 1, 404(30)
  049ccc8  lbz 3, 83(31)
  049cccc  cmpwi 3, 22
  049ccd0  bt 2, 0x49dc34
  049ccd4  lis 3, 74
  049ccd8  lis 4, 114
  049ccdc  addi 3, 3, -14504
  049cce0  li 5, 0
  049cce4  lfs 1, 20(3)
  049cce8  lfs 2, -3056(4)
  049ccec  ori 3, 31, 0
  049ccf0  li 4, 22
  049ccf4  fmuls 1, 2, 1
  049ccf8  fctiwz 1, 1
  049ccfc  stfd 1, 272(1)
  049cd00  lwz 6, 276(1)
  049cd04  extsw 6, 6
  049cd08  bl 0xfddc0
  049cd0c  nop
  049cd10  b 0x49dc34
  049cd14  li 3, 5
  049cd18  stb 3, 32(31)
  049cd1c  bt 6, 0x49dc34
  049cd20  lis 3, 74
  049cd24  lis 4, 114
  049cd28  addi 3, 3, -14504
  049cd2c  li 5, 0
  049cd30  lfs 1, 20(3)
  049cd34  lfs 2, -3056(4)
  049cd38  ori 3, 31, 0
  049cd3c  fmuls 1, 2, 1
  049cd40  li 4, 20
  049cd44  fctiwz 1, 1
  049cd48  stfd 1, 272(1)
  049cd4c  lwz 6, 276(1)
  049cd50  extsw 6, 6
  049cd54  bl 0xfddc0
  049cd58  nop
  049cd5c  b 0x49dc34
  049cd60  lwz 3, 448(30)
  049cd64  cmpwi 3, -1
  049cd68  bf 1, 0x49dc34
  049cd6c  lis 5, 151
  049cd70  extsw 4, 3
  049cd74  addic 3, 5, -25376
  049cd78  addic 3, 3, 128
  049cd7c  bl 0x110b70
  049cd80  nop
  049cd84  cmpwi 3, 0
  049cd88  bt 2, 0x49dc34
  049cd8c  li 3, 4
  049cd90  lis 4, 165
  049cd94  stb 3, 32(31)
  049cd98  lwz 3, 444(30)
  049cd9c  lwz 4, 7128(4)
  049cda0  slwi 3, 3, 7
  049cda4  addc 3, 4, 3
  049cda8  clrldi 3, 3, 32
  049cdac  lis 4, 114
  049cdb0  lfs 1, 48(3)
  049cdb4  stfs 1, 368(30)
  049cdb8  lfs 2, 52(3)
  049cdbc  stfs 2, 372(30)
  049cdc0  lfs 3, 56(3)
  049cdc4  stfs 3, 376(30)
  049cdc8  lfs 3, 60(3)
  049cdcc  stfs 3, 380(30)
  049cdd0  lfs 3, 20(31)
  049cdd4  lfs 4, 16(31)
  049cdd8  fsubs 2, 3, 2
  049cddc  fsubs 1, 4, 1
  049cde0  lis 3, 74
  049cde4  addi 3, 3, -14504
  049cde8  fmuls 2, 2, 2
  049cdec  lfs 3, 32(3)
  049cdf0  lfs 4, -3056(4)
  049cdf4  addic 3, 31, 16
  049cdf8  addic 4, 30, 368
  049cdfc  li 7, 0
  049ce00  fmadds 1, 1, 1, 2
  049ce04  fmuls 2, 4, 3
  049ce08  lfs 3, 128(30)
  049ce0c  fsqrts 1, 1
  049ce10  fctidz 2, 2
  049ce14  fcfid 2, 2
  049ce18  frsp 2, 2
  049ce1c  fdivs 1, 1, 2
  049ce20  fneg 2, 3
  049ce24  stfs 1, 136(30)
  049ce28  bl 0x108180
  049ce2c  nop
  049ce30  li 3, 3
  049ce34  stfs 1, 140(30)
  049ce38  li 4, 5
  049ce3c  lfs 1, 368(30)
  049ce40  lfs 2, 372(30)
  049ce44  addic 29, 30, 112
  049ce48  stb 3, 173(30)
  049ce4c  stw 4, 148(30)
  049ce50  lfs 3, 16(31)
  049ce54  lfs 4, 20(31)
  049ce58  fsubs 1, 1, 3
  049ce5c  fsubs 2, 2, 4
  049ce60  bl 0x5e8338
  049ce64  nop
  049ce68  ori 3, 31, 0
  049ce6c  ori 4, 29, 0
  049ce70  li 6, 0
  049ce74  li 7, 1
  049ce78  li 8, 0
  049ce7c  bl 0x10ad80
  049ce80  nop
  049ce84  lbz 3, 83(31)
  049ce88  cmpwi 3, 0
  049ce8c  bt 2, 0x49dc34
  049ce90  ori 3, 31, 0
  049ce94  li 4, 0
  049ce98  li 5, 0
  049ce9c  li 6, 5
  049cea0  bl 0xfddc0
  049cea4  nop
  049cea8  b 0x49dc34
  049ceac  ori 3, 31, 0
  049ceb0  addic 4, 30, 112
  049ceb4  bl 0x10b030
  049ceb8  nop
  049cebc  clrlwi 3, 3, 31
  049cec0  cmpwi 3, 0
  049cec4  bt 2, 0x49dc34
  049cec8  li 3, 5
  049cecc  lbz 4, 83(31)
  049ced0  cmpwi 4, 20
  049ced4  stb 3, 32(31)
  049ced8  bt 2, 0x49dc34
  049cedc  ori 3, 31, 0
  049cee0  li 4, 20
  049cee4  li 5, 0
  049cee8  li 6, 5
  049ceec  bl 0xfddc0
  049cef0  nop
  049cef4  b 0x49dc34
  049cef8  lfs 1, 288(30)
  049cefc  lfs 2, 16(31)
  049cf00  lfs 3, 292(30)
  049cf04  lfs 4, 20(31)
  049cf08  fsubs 1, 1, 2
  049cf0c  fsubs 2, 3, 4
  049cf10  bl 0x5e8338
  049cf14  nop
  049cf18  lis 3, 74
  049cf1c  lis 6, 114
  049cf20  addi 4, 3, -14504
  049cf24  ori 3, 31, 0
  049cf28  addic 5, 30, 400
  049cf2c  lfs 4, 44(4)
  049cf30  lfs 2, 36(4)
  049cf34  lfs 5, 40(4)
  049cf38  lfs 6, -3052(6)
  049cf3c  fmr 3, 5
  049cf40  fmuls 4, 6, 4
  049cf44  bl 0xff2e8
  049cf48  nop
  049cf4c  lwz 3, 356(30)
  049cf50  cmpwi 3, 2
  049cf54  bt 2, 0x49dc34
  049cf58  li 3, 6
  049cf5c  lis 4, 74
  049cf60  addi 4, 4, -14504
  049cf64  stb 3, 32(31)
  049cf68  lwz 3, 440(30)
  049cf6c  extsw 3, 3
  049cf70  lfs 1, 12(4)
  049cf74  std 3, 272(1)
  049cf78  lfd 2, 272(1)
  049cf7c  fcfid 2, 2
  049cf80  frsp 2, 2
  049cf84  bl 0xfcbe8
  049cf88  nop
  049cf8c  bl 0x502758
  049cf90  nop
  049cf94  stw 3, 424(30)
  049cf98  b 0x49dc34
  049cf9c  addic 3, 30, 424
  049cfa0  bl 0x4fff60
  049cfa4  nop
  049cfa8  cmpwi 3, 0
  049cfac  bt 2, 0x49dc34
  049cfb0  lis 4, 74
  049cfb4  li 3, 7
  049cfb8  addi 4, 4, -14504
  049cfbc  stb 3, 32(31)
  049cfc0  lfs 2, 408(30)
  049cfc4  lfs 1, 24(4)
  049cfc8  lfs 3, 28(4)
  049cfcc  fmuls 1, 2, 1
  049cfd0  fmuls 2, 2, 3
  049cfd4  bl 0xfcbe8
  049cfd8  nop
  049cfdc  stfs 1, 404(30)
  049cfe0  lbz 3, 83(31)
  049cfe4  cmpwi 3, 22
  049cfe8  bt 2, 0x49dc34
  049cfec  lis 3, 74
  049cff0  lis 4, 114
  049cff4  addi 3, 3, -14504
  049cff8  li 5, 0
  049cffc  lfs 1, 20(3)
  049d000  lfs 2, -3056(4)
  049d004  ori 3, 31, 0
  049d008  li 4, 22
  049d00c  fmuls 1, 2, 1
  049d010  fctiwz 1, 1
  049d014  stfd 1, 272(1)
  049d018  lwz 6, 276(1)
  049d01c  extsw 6, 6
  049d020  bl 0xfddc0
  049d024  nop
  049d028  b 0x49dc34
  049d02c  lfs 1, 20(31)
  049d030  lfs 2, 20(29)
  049d034  lfs 3, 16(31)
  049d038  fsubs 1, 1, 2
  049d03c  lfs 2, 16(29)
  049d040  fsubs 2, 3, 2
  049d044  lfs 3, 24(31)
  049d048  lfs 4, 24(29)
  049d04c  fsubs 3, 3, 4
  049d050  fmuls 1, 1, 1
  049d054  lis 3, 140
  049d058  fmadds 1, 2, 2, 1
  049d05c  lfs 2, 32588(3)
  049d060  fmadds 1, 3, 3, 1
  049d064  fsqrts 1, 1
  049d068  fcmpu 0, 2, 1
  049d06c  cror 6, 1, 2
  049d070  bt 6, 0x49d0ac
  049d074  lis 3, 74
  049d078  lis 4, 114
  049d07c  lfs 1, 420(30)
  049d080  addi 5, 3, -14504
  049d084  lis 6, 114
  049d088  addic 3, 30, 244
  049d08c  lfs 2, -3052(4)
  049d090  lfs 3, 48(5)
  049d094  lfs 4, -3048(6)
  049d098  fmuls 1, 1, 2
  049d09c  fmuls 2, 4, 3
  049d0a0  bl 0x109af0
  049d0a4  nop
  049d0a8  b 0x49d0d4
  049d0ac  lis 3, 74
  049d0b0  lis 5, 114
  049d0b4  addi 4, 3, -14504
  049d0b8  addic 3, 30, 244
  049d0bc  lfs 3, 16(4)
  049d0c0  lfs 1, 12(4)
  049d0c4  lfs 4, -3048(5)
  049d0c8  fmuls 2, 4, 3
  049d0cc  bl 0x109af0
  049d0d0  nop
  049d0d4  lfs 1, 16(29)
  049d0d8  lfs 2, 16(31)
  049d0dc  lfs 3, 20(29)
  049d0e0  lfs 4, 20(31)
  049d0e4  fsubs 1, 1, 2
  049d0e8  fsubs 2, 3, 4
  049d0ec  bl 0x5e8338
  049d0f0  nop
  049d0f4  lis 3, 74
  049d0f8  lis 4, 114
  049d0fc  addi 28, 3, -14504
  049d100  ori 3, 31, 0
  049d104  addic 5, 30, 400
  049d108  lfs 4, 44(28)
  049d10c  lfs 2, 36(28)
  049d110  lfs 5, 40(28)
  049d114  lfs 6, -3052(4)
  049d118  fmr 3, 5
  049d11c  fmuls 4, 6, 4
  049d120  bl 0xff2e8
  049d124  nop
  049d128  ori 3, 31, 0
  049d12c  bl 0x49b880
  049d130  lfs 31, 52(28)
  049d134  lfs 30, 56(28)
  049d138  fadds 3, 1, 31
  049d13c  fsubs 2, 30, 1
  049d140  lfs 29, 60(28)
  049d144  fsubs 7, 29, 1
  049d148  lfs 28, 64(28)
  049d14c  lfs 27, 68(28)
  049d150  lis 3, 140
  049d154  lfs 26, 72(28)
  049d158  lfs 25, 76(28)
  049d15c  fsubs 4, 30, 3
  049d160  fsub 6, 1, 2
  049d164  fsubs 5, 29, 3
  049d168  fsub 8, 3, 4
  049d16c  fsel 1, 6, 2, 1
  049d170  fsel 2, 8, 4, 3
  049d174  fsub 4, 7, 1
  049d178  fsub 3, 5, 2
  049d17c  fsel 1, 4, 7, 1
  049d180  lfs 7, 32588(3)
  049d184  lfs 9, 16(29)
  049d188  fsel 2, 3, 5, 2
  049d18c  fmuls 4, 1, 1
  049d190  fmuls 3, 2, 2
  049d194  fmuls 5, 4, 1
  049d198  fmuls 8, 3, 2
  049d19c  fmuls 6, 4, 5
  049d1a0  fmadds 1, 5, 28, 1
  049d1a4  lfs 5, 20(29)
  049d1a8  fmuls 10, 3, 8
  049d1ac  fmadds 2, 8, 28, 2
  049d1b0  fmuls 8, 4, 6
  049d1b4  fmadds 1, 6, 27, 1
  049d1b8  lfs 6, 16(31)
  049d1bc  lfs 11, 20(31)
  049d1c0  lfs 24, 72(31)
  049d1c4  fmuls 12, 3, 10
  049d1c8  fmadds 2, 10, 27, 2
  049d1cc  fmuls 4, 4, 8
  049d1d0  fmadds 1, 8, 26, 1
  049d1d4  fmuls 3, 3, 12
  049d1d8  fmadds 2, 12, 26, 2
  049d1dc  fmadds 1, 4, 25, 1
  049d1e0  fmadds 2, 3, 25, 2
  049d1e4  fmadds 1, 1, 7, 5
  049d1e8  fmadds 3, 2, 7, 9
  049d1ec  fsubs 2, 1, 11
  049d1f0  fsubs 1, 3, 6
  049d1f4  bl 0x5e8338
  049d1f8  nop
  049d1fc  fadds 2, 1, 31
  049d200  fsubs 3, 30, 1
  049d204  fsubs 4, 29, 1
  049d208  li 3, 0
  049d20c  addic 4, 30, 208
  049d210  addic 5, 1, 112
  049d214  addic 6, 1, 128
  049d218  fsubs 5, 30, 2
  049d21c  fsub 6, 1, 3
  049d220  fsubs 7, 29, 2
  049d224  fsub 8, 2, 5
  049d228  fsel 3, 6, 3, 1
  049d22c  fsel 2, 8, 5, 2
  049d230  fsub 5, 4, 3
  049d234  fsub 6, 7, 2
  049d238  fsel 3, 5, 4, 3
  049d23c  lfs 4, 80(28)
  049d240  stw 3, 120(1)
  049d244  ori 3, 31, 0
  049d248  fsel 2, 6, 7, 2
  049d24c  fmuls 5, 3, 3
  049d250  fmuls 6, 2, 2
  049d254  fmuls 7, 5, 3
  049d258  fmuls 8, 6, 2
  049d25c  fmuls 9, 5, 7
  049d260  fmadds 3, 7, 28, 3
  049d264  fmuls 7, 6, 8
  049d268  fmadds 2, 8, 28, 2
  049d26c  fmuls 8, 5, 9
  049d270  fmadds 3, 9, 27, 3
  049d274  fmuls 9, 6, 7
  049d278  fmadds 2, 7, 27, 2
  049d27c  fmuls 5, 5, 8
  049d280  fmadds 3, 8, 26, 3
  049d284  fmuls 6, 6, 9
  049d288  fmadds 2, 9, 26, 2
  049d28c  fmadds 3, 5, 25, 3
  049d290  fmadds 2, 6, 25, 2
  049d294  fmuls 3, 3, 4
  049d298  fmuls 2, 2, 4
  049d29c  stfs 3, 116(1)
  049d2a0  lfs 31, 84(28)
  049d2a4  stfs 1, 72(31)
  049d2a8  fmr 1, 31
  049d2ac  stfs 2, 112(1)
  049d2b0  bl 0x101058
  049d2b4  nop
  049d2b8  stfs 24, 72(31)
  049d2bc  lfs 2, 20(31)
  049d2c0  lfs 1, 372(30)
  049d2c4  lfs 3, 16(31)
  049d2c8  fsubs 4, 2, 1
  049d2cc  lfs 1, 368(30)
  049d2d0  fsubs 5, 3, 1
  049d2d4  lfs 1, 24(31)
  049d2d8  lfs 6, 376(30)
  049d2dc  fsubs 6, 1, 6
  049d2e0  fmuls 4, 4, 4
  049d2e4  lis 3, 140
  049d2e8  fmadds 4, 5, 5, 4
  049d2ec  lfs 5, 32592(3)
  049d2f0  fmadds 4, 6, 6, 4
  049d2f4  fsqrts 4, 4
  049d2f8  fcmpu 0, 4, 5
  049d2fc  bt 1, 0x49d30c
  049d300  lwz 3, 356(30)
  049d304  cmpwi 3, 2
  049d308  bf 2, 0x49d318
  049d30c  li 3, 10
  049d310  stb 3, 32(31)
  049d314  b 0x49dc34
  049d318  lfs 4, 20(29)
  049d31c  lfs 5, 16(29)
  049d320  fsubs 2, 2, 4
  049d324  fsubs 3, 3, 5
  049d328  lis 3, 140
  049d32c  fmuls 2, 2, 2
  049d330  fmadds 2, 3, 3, 2
  049d334  lfs 3, 32588(3)
  049d338  fsqrts 2, 2
  049d33c  fcmpu 0, 2, 3
  049d340  cror 6, 1, 2
  049d344  bt 6, 0x49dc34
  049d348  lfs 2, 24(29)
  049d34c  fsubs 1, 2, 1
  049d350  fabs 1, 1
  049d354  fcmpu 0, 1, 31
  049d358  cror 6, 1, 2
  049d35c  bt 6, 0x49dc34
  049d360  lis 3, 74
  049d364  lis 4, 114
  049d368  addi 3, 3, -14504
  049d36c  lfs 1, 20(3)
  049d370  lfs 2, -3056(4)
  049d374  lis 3, 151
  049d378  fmuls 2, 2, 1
  049d37c  addic 3, 3, -25376
  049d380  lwz 3, 448(3)
  049d384  fctiwz 2, 2
  049d388  stfd 2, 272(1)
  049d38c  lwz 4, 276(1)
  049d390  cmpw 3, 4
  049d394  bf 0, 0x49dc34
  049d398  li 3, 9
  049d39c  lbz 4, 83(31)
  049d3a0  cmpwi 4, 1
  049d3a4  stb 3, 32(31)
  049d3a8  bt 2, 0x49dc34
  049d3ac  lis 3, 114
  049d3b0  li 4, 1
  049d3b4  li 5, 0
  049d3b8  lfs 2, -3056(3)
  049d3bc  ori 3, 31, 0
  049d3c0  fmuls 1, 2, 1
  049d3c4  fctiwz 1, 1
  049d3c8  stfd 1, 272(1)
  049d3cc  lwz 6, 276(1)
  049d3d0  extsw 6, 6
  049d3d4  bl 0xfddc0
  049d3d8  nop
  049d3dc  b 0x49dc34
  049d3e0  lfs 1, 16(29)
  049d3e4  lfs 2, 16(31)
  049d3e8  lfs 3, 20(29)
  049d3ec  lfs 4, 20(31)
  049d3f0  fsubs 1, 1, 2
  049d3f4  fsubs 2, 3, 4
  049d3f8  bl 0x5e8338
  049d3fc  nop
  049d400  lis 3, 74
  049d404  lis 4, 114
  049d408  addi 29, 3, -14504
  049d40c  ori 3, 31, 0
  049d410  addic 5, 30, 400
  049d414  lfs 4, 44(29)
  049d418  lfs 2, 36(29)
  049d41c  lfs 5, 40(29)
  049d420  lfs 6, -3052(4)
  049d424  fmr 3, 5
  049d428  fmuls 4, 6, 4
  049d42c  bl 0xff2e8
  049d430  nop
  049d434  ori 3, 31, 0
  049d438  bl 0xefe40
  049d43c  nop
  049d440  lfs 2, 88(29)
  049d444  fcmpu 0, 1, 2
  049d448  cror 6, 0, 2
  049d44c  bt 6, 0x49d580
  049d450  ori 3, 31, 0
  049d454  bl 0xefe40
  049d458  nop
  049d45c  lis 3, 74
  049d460  addi 3, 3, -14504
  049d464  lfs 2, 92(3)
  049d468  fcmpu 0, 1, 2
  049d46c  cror 6, 1, 2
  049d470  bt 6, 0x49d580
  049d474  lis 3, 74
  049d478  addic 29, 1, 144
  049d47c  addi 30, 3, -14504
  049d480  ori 3, 31, 0
  049d484  li 4, 0
  049d488  ori 5, 29, 0
  049d48c  lfs 31, 52(30)
  049d490  lfs 30, 56(30)
  049d494  lfs 29, 60(30)
  049d498  lfs 28, 64(30)
  049d49c  lfs 27, 68(30)
  049d4a0  lfs 2, 72(30)
  049d4a4  lfs 1, 76(30)
  049d4a8  fmr 26, 2
  049d4ac  fmr 25, 1
  049d4b0  bl 0xf1114
  049d4b4  nop
  049d4b8  lfs 1, 72(31)
  049d4bc  fadds 2, 1, 31
  049d4c0  fsubs 3, 30, 1
  049d4c4  fsubs 4, 29, 1
  049d4c8  li 3, 0
  049d4cc  lis 8, 16256
  049d4d0  li 4, 1
  049d4d4  addic 7, 1, 224
  049d4d8  stw 3, 232(1)
  049d4dc  fsubs 5, 30, 2
  049d4e0  fsub 6, 1, 3
  049d4e4  fsubs 7, 29, 2
  049d4e8  ori 3, 29, 0
  049d4ec  li 5, 0
  049d4f0  ori 6, 31, 0
  049d4f4  fsub 8, 2, 5
  049d4f8  fsel 1, 6, 3, 1
  049d4fc  fsel 2, 8, 5, 2
  049d500  fsub 3, 4, 1
  049d504  fsub 5, 7, 2
  049d508  fsel 1, 3, 4, 1
  049d50c  fsel 2, 5, 7, 2
  049d510  fmuls 3, 1, 1
  049d514  fmuls 4, 2, 2
  049d518  fmuls 5, 3, 1
  049d51c  fmuls 6, 4, 2
  049d520  fmuls 7, 3, 5
  049d524  fmadds 1, 5, 28, 1
  049d528  fmuls 5, 4, 6
  049d52c  fmadds 2, 6, 28, 2
  049d530  fmuls 6, 3, 7
  049d534  fmadds 1, 7, 27, 1
  049d538  fmuls 7, 4, 5
  049d53c  fmadds 2, 5, 27, 2
  049d540  fmuls 3, 3, 6
  049d544  fmadds 1, 6, 26, 1
  049d548  fmuls 4, 4, 7
  049d54c  fmadds 2, 7, 26, 2
  049d550  fmadds 1, 3, 25, 1
  049d554  fmadds 2, 4, 25, 2
  049d558  stfs 1, 228(1)
  049d55c  lfs 1, 96(30)
  049d560  stw 8, 252(1)
  049d564  stw 4, 256(1)
  049d568  stw 4, 244(1)
  049d56c  stw 31, 240(1)
  049d570  stfs 2, 224(1)
  049d574  bl 0x5e598
  049d578  nop
  049d57c  b 0x49dc34
  049d580  lbz 3, 112(31)
  049d584  rlwinm 3, 3, 0, 30, 30
  049d588  cmpwi 3, 0
  049d58c  bt 2, 0x49dc34
  049d590  li 3, 7
  049d594  lbz 4, 83(31)
  049d598  cmpwi 4, 22
  049d59c  stb 3, 32(31)
  049d5a0  bt 2, 0x49dc34
  049d5a4  lis 3, 74
  049d5a8  lis 4, 114
  049d5ac  addi 3, 3, -14504
  049d5b0  li 5, 0
  049d5b4  lfs 1, 100(3)
  049d5b8  lfs 2, -3056(4)
  049d5bc  ori 3, 31, 0
  049d5c0  fmuls 1, 2, 1
  049d5c4  li 4, 22
  049d5c8  fctiwz 1, 1
  049d5cc  stfd 1, 272(1)
  049d5d0  lwz 6, 276(1)
  049d5d4  extsw 6, 6
  049d5d8  bl 0xfddc0
  049d5dc  nop
  049d5e0  b 0x49dc34
  049d5e4  lis 3, 74
  049d5e8  lfs 1, 420(30)
  049d5ec  lis 27, 114
  049d5f0  addi 28, 3, -14504
  049d5f4  lis 4, 114
  049d5f8  addic 3, 30, 244
  049d5fc  lfs 2, 104(28)
  049d600  lfs 3, 16(28)
  049d604  fmuls 1, 1, 2
  049d608  lfs 4, -3052(27)
  049d60c  lfs 5, -3048(4)
  049d610  fmuls 2, 5, 3
  049d614  fmuls 1, 1, 4
  049d618  bl 0x109af0
  049d61c  nop
  049d620  lfs 1, 16(29)
  049d624  lfs 2, 16(31)
  049d628  lfs 3, 20(29)
  049d62c  lfs 4, 20(31)
  049d630  fsubs 1, 1, 2
  049d634  fsubs 2, 3, 4
  049d638  bl 0x5e8338
  049d63c  nop
  049d640  lfs 4, 44(28)
  049d644  lfs 2, 36(28)
  049d648  addic 5, 30, 400
  049d64c  lfs 5, 40(28)
  049d650  ori 3, 31, 0
  049d654  lfs 6, -3052(27)
  049d658  fmr 3, 5
  049d65c  fmuls 4, 6, 4
  049d660  bl 0xff2e8
  049d664  nop
  049d668  lfs 1, 16(29)
  049d66c  lfs 2, 16(31)
  049d670  lfs 31, 72(31)
  049d674  fsubs 1, 1, 2
  049d678  lfs 3, 20(29)
  049d67c  lfs 4, 20(31)
  049d680  fsubs 2, 3, 4
  049d684  bl 0x5e8338
  049d688  nop
  049d68c  lfs 2, 108(28)
  049d690  bl 0x502578
  049d694  nop
  049d698  lfs 2, 56(28)
  049d69c  lfs 3, 52(28)
  049d6a0  fsubs 5, 2, 1
  049d6a4  fadds 3, 1, 3
  049d6a8  lfs 4, 60(28)
  049d6ac  fsubs 6, 4, 1
  049d6b0  li 3, 0
  049d6b4  addic 4, 30, 208
  049d6b8  addic 5, 1, 160
  049d6bc  addic 6, 1, 176
  049d6c0  fsub 7, 1, 5
  049d6c4  fsubs 2, 2, 3
  049d6c8  fsubs 4, 4, 3
  049d6cc  fsel 5, 7, 5, 1
  049d6d0  fsub 9, 3, 2
  049d6d4  lfs 7, 64(28)
  049d6d8  lfs 8, 68(28)
  049d6dc  fsel 2, 9, 2, 3
  049d6e0  fsub 3, 6, 5
  049d6e4  fsub 10, 4, 2
  049d6e8  fsel 3, 3, 6, 5
  049d6ec  lfs 5, 72(28)
  049d6f0  lfs 6, 76(28)
  049d6f4  lfs 9, 80(28)
  049d6f8  stw 3, 168(1)
  049d6fc  ori 3, 31, 0
  049d700  fsel 2, 10, 4, 2
  049d704  fmuls 4, 3, 3
  049d708  fmuls 10, 2, 2
  049d70c  fmuls 11, 4, 3
  049d710  fmuls 12, 10, 2
  049d714  fmuls 13, 4, 11
  049d718  fmadds 3, 11, 7, 3
  049d71c  fmuls 11, 10, 12
  049d720  fmadds 2, 12, 7, 2
  049d724  fmuls 7, 4, 13
  049d728  fmadds 3, 13, 8, 3
  049d72c  fmuls 12, 10, 11
  049d730  fmadds 2, 11, 8, 2
  049d734  fmuls 4, 4, 7
  049d738  fmadds 3, 7, 5, 3
  049d73c  fmuls 7, 10, 12
  049d740  fmadds 2, 12, 5, 2
  049d744  fmadds 3, 4, 6, 3
  049d748  fmadds 2, 7, 6, 2
  049d74c  fmuls 3, 3, 9
  049d750  fmuls 2, 2, 9
  049d754  stfs 3, 164(1)
  049d758  lfs 3, 84(28)
  049d75c  stfs 1, 72(31)
  049d760  fmr 1, 3
  049d764  stfs 2, 160(1)
  049d768  bl 0x101058
  049d76c  nop
  049d770  addic 3, 30, 424
  049d774  stfs 31, 72(31)
  049d778  bl 0x4fff60
  049d77c  nop
  049d780  cmpwi 3, 0
  049d784  bf 2, 0x49d7d0
  049d788  lfs 1, 20(31)
  049d78c  lfs 2, 20(29)
  049d790  lfs 3, 16(31)
  049d794  fsubs 1, 1, 2
  049d798  lfs 2, 16(29)
  049d79c  fsubs 2, 3, 2
  049d7a0  lfs 3, 24(31)
  049d7a4  lfs 4, 24(29)
  049d7a8  fsubs 3, 3, 4
  049d7ac  fmuls 1, 1, 1
  049d7b0  lis 3, 140
  049d7b4  fmadds 1, 2, 2, 1
  049d7b8  lfs 2, 32608(3)
  049d7bc  fmadds 1, 3, 3, 1
  049d7c0  fsqrts 1, 1
  049d7c4  fcmpu 0, 1, 2
  049d7c8  cror 6, 0, 2
  049d7cc  bt 6, 0x49dc34
  049d7d0  li 3, 9
  049d7d4  lis 4, 74
  049d7d8  addi 4, 4, -14504
  049d7dc  stb 3, 32(31)
  049d7e0  lis 3, 114
  049d7e4  lfs 1, 112(4)
  049d7e8  lfs 2, -3052(3)
  049d7ec  lis 3, 140
  049d7f0  fmuls 1, 2, 1
  049d7f4  stfs 1, 244(30)
  049d7f8  lwz 3, 32616(3)
  049d7fc  cmpwi 3, 0
  049d800  bt 2, 0x49d858
  049d804  lbz 3, 83(31)
  049d808  cmpwi 3, 1
  049d80c  bt 2, 0x49dc34
  049d810  lis 3, 74
  049d814  lis 4, 114
  049d818  addi 3, 3, -14504
  049d81c  lis 5, 140
  049d820  lfs 1, 116(3)
  049d824  lfs 2, -3056(4)
  049d828  ori 3, 31, 0
  049d82c  lwz 5, 32620(5)
  049d830  li 4, 1
  049d834  fmuls 1, 2, 1
  049d838  extsw 5, 5
  049d83c  fctiwz 1, 1
  049d840  stfd 1, 272(1)
  049d844  lwz 6, 276(1)
  049d848  extsw 6, 6
  049d84c  bl 0xfddc0
  049d850  nop
  049d854  b 0x49dc34
  049d858  lbz 3, 83(31)
  049d85c  cmpwi 3, 1
  049d860  bt 2, 0x49dc34
  049d864  lis 3, 74
  049d868  lis 4, 114
  049d86c  addi 3, 3, -14504
  049d870  li 5, 10
  049d874  lfs 1, 20(3)
  049d878  lfs 2, -3056(4)
  049d87c  ori 3, 31, 0
  049d880  fmuls 1, 2, 1
  049d884  li 4, 1
  049d888  fctiwz 1, 1
  049d88c  stfd 1, 272(1)
  049d890  lwz 6, 276(1)
  049d894  extsw 6, 6
  049d898  bl 0xfddc0
  049d89c  nop
  049d8a0  b 0x49dc34
  049d8a4  lis 3, 74
  049d8a8  lfs 1, 420(30)
  049d8ac  lis 29, 114
  049d8b0  addi 28, 3, -14504
  049d8b4  lis 4, 114
  049d8b8  addic 3, 30, 244
  049d8bc  lfs 2, -3052(29)
  049d8c0  lfs 3, 48(28)
  049d8c4  fmuls 1, 1, 2
  049d8c8  lfs 4, -3048(4)
  049d8cc  fmr 2, 3
  049d8d0  fmuls 2, 4, 2
  049d8d4  bl 0x109af0
  049d8d8  nop
  049d8dc  lfs 1, 368(30)
  049d8e0  lfs 2, 16(31)
  049d8e4  lfs 3, 372(30)
  049d8e8  lfs 4, 20(31)
  049d8ec  fsubs 1, 1, 2
  049d8f0  fsubs 2, 3, 4
  049d8f4  bl 0x5e8338
  049d8f8  nop
  049d8fc  lfs 4, 44(28)
  049d900  addic 5, 30, 400
  049d904  lfs 2, 36(28)
  049d908  ori 3, 31, 0
  049d90c  lfs 5, 40(28)
  049d910  lfs 6, -3052(29)
  049d914  fmr 3, 5
  049d918  fmuls 4, 6, 4
  049d91c  bl 0xff2e8
  049d920  nop
  049d924  lfs 1, 56(28)
  049d928  lfs 2, 52(28)
  049d92c  lfs 3, 72(31)
  049d930  lfs 4, 60(28)
  049d934  fadds 2, 3, 2
  049d938  fsubs 5, 1, 3
  049d93c  fsubs 6, 4, 3
  049d940  li 3, 0
  049d944  addic 4, 30, 208
  049d948  addic 5, 1, 192
  049d94c  addic 6, 1, 208
  049d950  fsubs 1, 1, 2
  049d954  fsub 7, 3, 5
  049d958  fsubs 4, 4, 2
  049d95c  fsub 9, 2, 1
  049d960  fsel 3, 7, 5, 3
  049d964  lfs 5, 64(28)
  049d968  lfs 7, 68(28)
  049d96c  fsel 1, 9, 1, 2
  049d970  fsub 2, 6, 3
  049d974  fsub 9, 4, 1
  049d978  fsel 2, 2, 6, 3
  049d97c  lfs 3, 72(28)
  049d980  lfs 6, 76(28)
  049d984  lfs 8, 80(28)
  049d988  stw 3, 200(1)
  049d98c  ori 3, 31, 0
  049d990  fsel 1, 9, 4, 1
  049d994  fmuls 4, 2, 2
  049d998  fmuls 9, 1, 1
  049d99c  fmuls 10, 4, 2
  049d9a0  fmuls 11, 9, 1
  049d9a4  fmuls 12, 4, 10
  049d9a8  fmadds 2, 10, 5, 2
  049d9ac  fmadds 1, 11, 5, 1
  049d9b0  fmuls 5, 4, 12
  049d9b4  fmadds 2, 12, 7, 2
  049d9b8  fmuls 10, 9, 11
  049d9bc  fmuls 4, 4, 5
  049d9c0  fmadds 2, 5, 3, 2
  049d9c4  fmuls 11, 9, 10
  049d9c8  fmadds 1, 10, 7, 1
  049d9cc  fmadds 2, 4, 6, 2
  049d9d0  fmuls 5, 9, 11
  049d9d4  fmadds 1, 11, 3, 1
  049d9d8  fmuls 2, 2, 8
  049d9dc  fmadds 1, 5, 6, 1
  049d9e0  fmuls 1, 1, 8
  049d9e4  stfs 2, 196(1)
  049d9e8  lfs 2, 84(28)
  049d9ec  fmr 31, 2
  049d9f0  stfs 1, 192(1)
  049d9f4  fmr 1, 31
  049d9f8  bl 0x101058
  049d9fc  nop
  049da00  lfs 1, 20(31)
  049da04  lfs 2, 372(30)
  049da08  lfs 3, 16(31)
  049da0c  fsubs 1, 1, 2
  049da10  lfs 2, 368(30)
  049da14  fsubs 2, 3, 2
  049da18  lfs 3, 24(31)
  049da1c  lfs 4, 376(30)
  049da20  fsubs 3, 3, 4
  049da24  fmuls 1, 1, 1
  049da28  fmadds 1, 2, 2, 1
  049da2c  fmadds 1, 3, 3, 1
  049da30  fsqrts 1, 1
  049da34  fcmpu 0, 1, 31
  049da38  cror 6, 1, 2
  049da3c  bt 6, 0x49da94
  049da40  li 3, 5
  049da44  lbz 4, 83(31)
  049da48  cmpwi 4, 20
  049da4c  stb 3, 32(31)
  049da50  bt 2, 0x49dc34
  049da54  lis 3, 74
  049da58  lis 4, 114
  049da5c  addi 3, 3, -14504
  049da60  li 5, 0
  049da64  lfs 1, 100(3)
  049da68  lfs 2, -3056(4)
  049da6c  ori 3, 31, 0
  049da70  fmuls 1, 2, 1
  049da74  li 4, 20
  049da78  fctiwz 1, 1
  049da7c  stfd 1, 272(1)
  049da80  lwz 6, 276(1)
  049da84  extsw 6, 6
  049da88  bl 0xfddc0
  049da8c  nop
  049da90  b 0x49dc34
  049da94  lwz 3, 356(30)
  049da98  cmpwi 3, 2
  049da9c  bt 2, 0x49dc34
  049daa0  li 3, 7
  049daa4  lbz 4, 83(31)
  049daa8  cmpwi 4, 22
  049daac  stb 3, 32(31)
  049dab0  bt 2, 0x49dc34
  049dab4  lis 3, 74
  049dab8  lis 4, 114
  049dabc  addi 3, 3, -14504
  049dac0  li 5, 0
  049dac4  lfs 1, 100(3)
  049dac8  lfs 2, -3056(4)
  049dacc  ori 3, 31, 0
  049dad0  fmuls 1, 2, 1
  049dad4  li 4, 22
  049dad8  fctiwz 1, 1
  049dadc  stfd 1, 272(1)
  049dae0  lwz 6, 276(1)
  049dae4  extsw 6, 6
  049dae8  bl 0xfddc0
  049daec  nop
  049daf0  b 0x49dc34
  049daf4  addic 4, 30, 112
  049daf8  ori 3, 31, 0
  049dafc  bl 0x10b030
  049db00  nop
  049db04  li 4, 65
  049db08  and 3, 3, 4
  049db0c  cmpwi 3, 0
  049db10  bt 2, 0x49dba4
  049db14  li 3, 11
  049db18  lbz 4, 83(31)
  049db1c  cmpwi 4, 22
  049db20  stb 3, 32(31)
  049db24  bt 2, 0x49db64
  049db28  lis 3, 74
  049db2c  lis 4, 114
  049db30  addi 3, 3, -14504
  049db34  li 5, 0
  049db38  lfs 1, 100(3)
  049db3c  lfs 2, -3056(4)
  049db40  ori 3, 31, 0
  049db44  li 4, 22
  049db48  fmuls 1, 2, 1
  049db4c  fctiwz 1, 1
  049db50  stfd 1, 272(1)
  049db54  lwz 6, 276(1)
  049db58  extsw 6, 6
  049db5c  bl 0xfddc0
  049db60  nop
  049db64  lis 3, 74
  049db68  vspltisw 2, -1
  049db6c  li 5, 120
  049db70  addi 3, 3, -14504
  049db74  lis 4, 114
  049db78  li 6, -3056
  049db7c  vslw 2, 2, 2
  049db80  lvlx 3, 5, 3
  049db84  li 3, 424
  049db88  vspltw 3, 3, 0
  049db8c  lvlx 4, 6, 4
  049db90  vmaddfp 2, 4, 3, 2
  049db94  vctsxs 2, 2, 0
  049db98  vspltw 2, 2, 0
  049db9c  stvewx 2, 3, 30
  049dba0  b 0x49dc34
  049dba4  lis 3, 74
  049dba8  lfs 1, 376(30)
  049dbac  addi 3, 3, -14504
  049dbb0  lfs 2, 124(3)
  049dbb4  lfs 3, 24(31)
  049dbb8  fsubs 1, 1, 2
  049dbbc  fcmpu 0, 3, 1
  049dbc0  cror 6, 1, 2
  049dbc4  bt 6, 0x49dc34
  049dbc8  ori 3, 31, 0
  049dbcc  bl 0xefb38
  049dbd0  nop
  049dbd4  b 0x49dc34
  049dbd8  ori 3, 31, 0
  049dbdc  addic 4, 30, 112
  049dbe0  bl 0x10b030
  049dbe4  nop
  049dbe8  rlwinm 3, 3, 0, 25, 25
  049dbec  cmpwi 3, 0
  049dbf0  bt 2, 0x49dc04
  049dbf4  ori 3, 31, 0
  049dbf8  bl 0xefb38
  049dbfc  nop
  049dc00  b 0x49dc34
  049dc04  lwz 4, 24(31)
  049dc08  lis 3, 16384
  049dc0c  srawi 5, 4, 31
  049dc10  srwi 6, 5, 1
  049dc14  xor 4, 6, 4
  049dc18  subc 4, 4, 5
  049dc1c  cmpw 4, 3
  049dc20  bf 0, 0x49dc34
  049dc24  ori 3, 31, 0
  049dc28  bl 0xefb38
  049dc2c  nop
  049dc30  b 0x49dc34
  049dc34  ld 0, 416(1)
  049dc38  mtlr 0
  049dc3c  lfd 24, 336(1)
  049dc40  lfd 25, 344(1)
  049dc44  lfd 26, 352(1)
  049dc48  lfd 27, 360(1)
  049dc4c  lfd 28, 368(1)
  049dc50  lfd 29, 376(1)
  049dc54  lfd 30, 384(1)
  049dc58  lfd 31, 392(1)
  049dc5c  ld 27, 296(1)
  049dc60  ld 28, 304(1)
  049dc64  ld 29, 312(1)
  049dc68  ld 30, 320(1)
  049dc6c  ld 31, 328(1)
  049dc70  addi 1, 1, 400
  049dc74  blr
