# game/update/moby1401.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1401_0026bbd0:   # 0x26bbd0, 0x14 bytes
  026bbd0  lis 3, 122
  026bbd4  lis 4, 1
  026bbd8  addic 3, 3, -13300
  026bbdc  stw 4, 72(3)
  026bbe0  blr

M1401_0026bc10:   # 0x26bc10, 0x2fc bytes
  026bc10  stdu 1, -240(1)
  026bc14  mflr 0
  026bc18  std 0, 256(1)
  026bc1c  stfd 28, 208(1)
  026bc20  stfd 29, 216(1)
  026bc24  stfd 30, 224(1)
  026bc28  stfd 31, 232(1)
  026bc2c  addi 0, 1, 144
  026bc30  stvx 31, 0, 0
  026bc34  lis 4, 122
  026bc38  lfs 1, 192(3)
  026bc3c  lis 5, 122
  026bc40  std 27, 168(1)
  026bc44  lis 6, 39
  026bc48  li 27, 0
  026bc4c  lfs 2, -13172(4)
  026bc50  lfs 3, 196(3)
  026bc54  lfs 4, 200(3)
  026bc58  addi 4, 6, -17432
  026bc5c  lfs 5, 16(3)
  026bc60  lfs 6, 20(3)
  026bc64  std 31, 200(1)
  026bc68  fmadds 1, 1, 2, 5
  026bc6c  lis 31, 161
  026bc70  lfs 5, 24(3)
  026bc74  std 28, 176(1)
  026bc78  fmadds 3, 3, 2, 6
  026bc7c  ori 28, 27, 0
  026bc80  fmadds 2, 4, 2, 5
  026bc84  std 29, 184(1)
  026bc88  lfs 4, 224(3)
  026bc8c  lis 29, 114
  026bc90  lfs 5, -13168(5)
  026bc94  addic 31, 31, 23856
  026bc98  lfs 6, 228(3)
  026bc9c  li 5, 16
  026bca0  std 30, 192(1)
  026bca4  lfs 7, 232(3)
  026bca8  ori 30, 3, 0
  026bcac  lfs 8, 28(3)
  026bcb0  stfs 8, 124(1)
  026bcb4  fmadds 4, 4, 5, 1
  026bcb8  fmadds 6, 6, 5, 3
  026bcbc  stfs 1, 112(1)
  026bcc0  fmadds 1, 7, 5, 2
  026bcc4  stfs 3, 116(1)
  026bcc8  stfs 2, 120(1)
  026bccc  stfs 4, 112(1)
  026bcd0  stfs 6, 116(1)
  026bcd4  stfs 1, 120(1)
  026bcd8  lfs 28, 0(4)
  026bcdc  lfs 31, 4(4)
  026bce0  lfs 29, 8(4)
  026bce4  lfs 30, 12(4)
  026bce8  std 26, 160(1)
  026bcec  lvlx 31, 5, 4
  026bcf0  vspltw 31, 31, 0
  026bcf4  li 3, 16
  026bcf8  bl 0xfc620
  026bcfc  nop
  026bd00  ori 26, 3, 0
  026bd04  li 3, 2
  026bd08  bl 0xfc620
  026bd0c  nop
  026bd10  li 4, 0
  026bd14  fmr 1, 28
  026bd18  lis 5, 122
  026bd1c  fmr 2, 31
  026bd20  subc 3, 4, 3
  026bd24  fmr 3, 29
  026bd28  neg 7, 26
  026bd2c  fmr 4, 30
  026bd30  cntlzw 3, 3
  026bd34  subc 4, 26, 7
  026bd38  sldi 3, 3, 58
  026bd3c  lwz 10, -13148(5)
  026bd40  ori 8, 31, 0
  026bd44  sradi 3, 3, 63
  026bd48  extsw 10, 10
  026bd4c  and 4, 3, 4
  026bd50  addic 3, 1, 112
  026bd54  addc 7, 7, 4
  026bd58  bl 0x126f50
  026bd5c  nop
  026bd60  cmpwi 3, 0
  026bd64  bt 2, 0x26bda8
  026bd68  vspltisw 2, -1
  026bd6c  li 4, -3056
  026bd70  li 5, 2
  026bd74  li 6, 127
  026bd78  vslw 2, 2, 2
  026bd7c  lvlx 3, 4, 29
  026bd80  li 4, 10
  026bd84  li 7, 43
  026bd88  vmaddfp 2, 3, 31, 2
  026bd8c  vctsxs 2, 2, 0
  026bd90  vsplth 3, 2, 1
  026bd94  vspltb 2, 2, 3
  026bd98  stvehx 3, 4, 3
  026bd9c  stw 5, 36(3)
  026bda0  stb 6, 42(3)
  026bda4  stvebx 2, 7, 3
  026bda8  addic 27, 27, 1
  026bdac  cmpwi 27, 2
  026bdb0  bt 0, 0x26bcf4
  026bdb4  lis 3, 122
  026bdb8  lfs 1, 192(30)
  026bdbc  lis 4, 122
  026bdc0  lfs 2, -13164(3)
  026bdc4  lfs 3, 196(30)
  026bdc8  lfs 4, 200(30)
  026bdcc  lis 3, 39
  026bdd0  lfs 5, 16(30)
  026bdd4  lfs 6, 20(30)
  026bdd8  fmadds 1, 1, 2, 5
  026bddc  addi 3, 3, -17432
  026bde0  lfs 5, 24(30)
  026bde4  fmadds 3, 3, 2, 6
  026bde8  fmadds 2, 4, 2, 5
  026bdec  lfs 4, 224(30)
  026bdf0  lfs 5, -13160(4)
  026bdf4  lfs 6, 228(30)
  026bdf8  lfs 7, 232(30)
  026bdfc  lfs 8, 28(30)
  026be00  fmadds 4, 4, 5, 1
  026be04  stfs 8, 124(1)
  026be08  fmadds 6, 6, 5, 3
  026be0c  stfs 1, 112(1)
  026be10  fmadds 1, 7, 5, 2
  026be14  stfs 3, 116(1)
  026be18  stfs 2, 120(1)
  026be1c  lfs 2, -3056(29)
  026be20  li 29, 16
  026be24  stfs 4, 112(1)
  026be28  stfs 6, 116(1)
  026be2c  stfs 1, 120(1)
  026be30  lfs 1, 20(3)
  026be34  fmuls 1, 2, 1
  026be38  fctiwz 1, 1
  026be3c  stfd 1, 128(1)
  026be40  lwz 30, 132(1)
  026be44  lfs 28, 24(3)
  026be48  lfs 29, 28(3)
  026be4c  lfs 30, 32(3)
  026be50  addic 3, 1, 112
  026be54  fmr 1, 29
  026be58  lis 10, 32767
  026be5c  fmr 2, 31
  026be60  ori 7, 29, 0
  026be64  fmr 3, 31
  026be68  fmr 4, 28
  026be6c  ori 8, 31, 0
  026be70  ori 10, 10, 65535
  026be74  bl 0x126f50
  026be78  nop
  026be7c  ori 27, 3, 0
  026be80  cmpwi 27, 0
  026be84  bt 2, 0x26beb4
  026be88  li 3, 255
  026be8c  sth 30, 10(27)
  026be90  bl 0xfc620
  026be94  nop
  026be98  stb 3, 8(27)
  026be9c  li 4, 127
  026bea0  li 3, 2
  026bea4  lhz 5, 10(27)
  026bea8  stb 5, 43(27)
  026beac  stw 3, 36(27)
  026beb0  stb 4, 42(27)
  026beb4  addic 28, 28, 1
  026beb8  fsubs 28, 28, 30
  026bebc  neg 29, 29
  026bec0  cmpwi 28, 3
  026bec4  sldi 30, 30, 1
  026bec8  bt 0, 0x26be50
  026becc  li 0, 144
  026bed0  lvx 31, 1, 0
  026bed4  ld 0, 256(1)
  026bed8  mtlr 0
  026bedc  lfd 28, 208(1)
  026bee0  lfd 29, 216(1)
  026bee4  lfd 30, 224(1)
  026bee8  lfd 31, 232(1)
  026beec  ld 26, 160(1)
  026bef0  ld 27, 168(1)
  026bef4  ld 28, 176(1)
  026bef8  ld 29, 184(1)
  026befc  ld 30, 192(1)
  026bf00  ld 31, 200(1)
  026bf04  addi 1, 1, 240
  026bf08  blr

M1401_0026bf18:   # 0x26bf18, 0x350 bytes
  026bf18  stdu 1, -240(1)
  026bf1c  mflr 0
  026bf20  std 0, 256(1)
  026bf24  stfd 31, 232(1)
  026bf28  lis 4, 114
  026bf2c  std 31, 224(1)
  026bf30  lis 5, 122
  026bf34  std 29, 208(1)
  026bf38  ori 31, 3, 0
  026bf3c  lis 29, 165
  026bf40  std 30, 216(1)
  026bf44  lfs 5, -3052(4)
  026bf48  lwz 30, 120(3)
  026bf4c  addic 29, 29, 7136
  026bf50  lfs 1, -13192(5)
  026bf54  lbz 3, 32(3)
  026bf58  fmuls 5, 5, 1
  026bf5c  std 28, 200(1)
  026bf60  std 27, 192(1)
  026bf64  std 26, 184(1)
  026bf68  cmpwi 3, 5
  026bf6c  bf 2, 0x26bf84
  026bf70  lwz 3, 220(30)
  026bf74  slwi 3, 3, 2
  026bf78  extsw 3, 3
  026bf7c  lwzx 29, 29, 3
  026bf80  b 0x26bf94
  026bf84  lwz 3, 216(30)
  026bf88  slwi 3, 3, 2
  026bf8c  extsw 3, 3
  026bf90  lwzx 29, 29, 3
  026bf94  addic 4, 1, 112
  026bf98  fmr 1, 5
  026bf9c  li 8, 0
  026bfa0  addic 5, 30, 208
  026bfa4  addic 6, 30, 212
  026bfa8  ori 3, 29, 0
  026bfac  bl 0x10ce18
  026bfb0  nop
  026bfb4  lis 4, 39
  026bfb8  lfs 1, 112(1)
  026bfbc  lis 27, 122
  026bfc0  addi 28, 4, -16628
  026bfc4  lis 26, 122
  026bfc8  ori 29, 3, 0
  026bfcc  addic 5, 30, 228
  026bfd0  addic 3, 31, 16
  026bfd4  lfs 31, 0(28)
  026bfd8  lfs 2, -13188(27)
  026bfdc  lfs 3, -13184(26)
  026bfe0  fmr 4, 31
  026bfe4  bl 0x109b40
  026bfe8  nop
  026bfec  lfs 1, 116(1)
  026bff0  addic 3, 31, 20
  026bff4  lfs 2, -13188(27)
  026bff8  addic 5, 30, 232
  026bffc  lfs 3, -13184(26)
  026c000  fmr 4, 31
  026c004  bl 0x109b40
  026c008  nop
  026c00c  lfs 1, 120(1)
  026c010  addic 3, 31, 24
  026c014  lfs 2, -13188(27)
  026c018  addic 5, 30, 236
  026c01c  lfs 3, -13184(26)
  026c020  fmr 4, 31
  026c024  bl 0x109b40
  026c028  nop
  026c02c  lfs 5, 112(1)
  026c030  lfs 1, 16(31)
  026c034  lfs 6, 4(28)
  026c038  fsubs 5, 5, 1
  026c03c  lfs 4, 116(1)
  026c040  lfs 1, 20(31)
  026c044  lfs 2, -13188(27)
  026c048  fsubs 4, 4, 1
  026c04c  lfs 1, -13184(26)
  026c050  fabs 3, 5
  026c054  fcmpu 0, 3, 6
  026c058  cror 6, 0, 2
  026c05c  bt 6, 0x26c238
  026c060  fmr 7, 6
  026c064  fabs 6, 4
  026c068  fcmpu 0, 6, 7
  026c06c  cror 6, 0, 2
  026c070  bt 6, 0x26c238
  026c074  fmr 7, 3
  026c078  stfs 5, 128(1)
  026c07c  stfs 4, 132(1)
  026c080  lis 3, 115
  026c084  addic 3, 3, 22784
  026c088  fsubs 3, 7, 6
  026c08c  stfs 3, 136(1)
  026c090  lwz 4, 128(1)
  026c094  lfs 3, 128(1)
  026c098  lwz 5, 132(1)
  026c09c  fabs 5, 3
  026c0a0  lfs 3, 132(1)
  026c0a4  lwz 6, 136(1)
  026c0a8  rlwinm 5, 5, 3, 29, 29
  026c0ac  fabs 8, 3
  026c0b0  lfs 3, 136(1)
  026c0b4  rlwimi 5, 6, 2, 30, 30
  026c0b8  fsub 4, 3, 31
  026c0bc  fsub 9, 3, 31
  026c0c0  rlwimi 5, 4, 4, 28, 28
  026c0c4  ori 4, 3, 0
  026c0c8  rlwimi 4, 5, 2, 26, 28
  026c0cc  slwi 5, 5, 2
  026c0d0  clrldi 4, 4, 32
  026c0d4  fsel 5, 4, 5, 6
  026c0d8  lfsx 4, 3, 5
  026c0dc  lfs 3, 4(4)
  026c0e0  fsel 6, 9, 8, 7
  026c0e4  fcmpu 0, 5, 31
  026c0e8  bt 1, 0x26c0f4
  026c0ec  fmr 4, 31
  026c0f0  b 0x26c21c
  026c0f4  fsubs 7, 6, 5
  026c0f8  fadds 5, 6, 5
  026c0fc  addic 6, 1, 16
  026c100  li 3, 2
  026c104  addic 5, 6, 124
  026c108  addic 4, 6, 140
  026c10c  mtctr 3
  026c110  fdivs 5, 7, 5
  026c114  fmuls 7, 5, 5
  026c118  stfs 5, 152(1)
  026c11c  stfs 5, 144(1)
  026c120  stfs 5, 148(1)
  026c124  stfs 5, 140(1)
  026c128  lfs 8, 152(1)
  026c12c  lfs 9, 144(1)
  026c130  lfs 10, 148(1)
  026c134  fmuls 5, 7, 7
  026c138  fmuls 9, 9, 7
  026c13c  fmuls 8, 8, 5
  026c140  fmuls 6, 5, 5
  026c144  fmuls 5, 10, 5
  026c148  stfs 9, 144(1)
  026c14c  fmuls 7, 8, 7
  026c150  stfs 5, 148(1)
  026c154  stfs 7, 152(1)
  026c158  lfs 5, 124(6)
  026c15c  fmuls 5, 5, 6
  026c160  stfs 5, 140(6)
  026c164  lfs 5, 4(5)
  026c168  addic 6, 6, 8
  026c16c  addic 5, 5, 8
  026c170  fmuls 5, 5, 6
  026c174  stfs 5, 4(4)
  026c178  addic 4, 4, 8
  026c17c  bdnz 0x26c158
  026c180  ori 7, 1, 0
  026c184  lis 6, 115
  026c188  li 8, 4
  026c18c  addic 5, 7, 140
  026c190  addic 6, 6, 22752
  026c194  ori 4, 5, 0
  026c198  mtctr 8
  026c19c  lfs 5, 140(7)
  026c1a0  lfs 6, 0(6)
  026c1a4  fmuls 5, 5, 6
  026c1a8  lfs 6, 4(6)
  026c1ac  addic 6, 6, 8
  026c1b0  stfs 5, 140(7)
  026c1b4  lfs 5, 4(5)
  026c1b8  addic 7, 7, 8
  026c1bc  fmuls 5, 5, 6
  026c1c0  stfs 5, 4(5)
  026c1c4  addic 5, 5, 8
  026c1c8  bdnz 0x26c19c
  026c1cc  ori 5, 3, 0
  026c1d0  fmr 5, 31
  026c1d4  ori 3, 1, 0
  026c1d8  mtctr 5
  026c1dc  lfs 6, 140(3)
  026c1e0  fadds 5, 5, 6
  026c1e4  lfs 6, 4(4)
  026c1e8  addic 3, 3, 16
  026c1ec  lfs 7, 8(4)
  026c1f0  lfs 8, 12(4)
  026c1f4  addic 4, 4, 16
  026c1f8  fadds 5, 5, 6
  026c1fc  fadds 5, 5, 7
  026c200  fadds 5, 5, 8
  026c204  bdnz 0x26c1dc
  026c208  lis 3, 39
  026c20c  addi 3, 3, -16628
  026c210  lfs 6, 8(3)
  026c214  fadds 5, 5, 6
  026c218  fmadds 4, 5, 4, 3
  026c21c  fmr 3, 1
  026c220  addic 5, 30, 240
  026c224  fmr 1, 4
  026c228  ori 3, 31, 0
  026c22c  fmr 4, 31
  026c230  bl 0xff2e8
  026c234  nop
  026c238  ori 3, 29, 0
  026c23c  ld 0, 256(1)
  026c240  mtlr 0
  026c244  lfd 31, 232(1)
  026c248  ld 26, 184(1)
  026c24c  ld 27, 192(1)
  026c250  ld 28, 200(1)
  026c254  ld 29, 208(1)
  026c258  ld 30, 216(1)
  026c25c  ld 31, 224(1)
  026c260  addi 1, 1, 240
  026c264  blr

M1401_0026c270:   # 0x26c270, 0x13c bytes
  026c270  lwz 5, 120(3)
  026c274  lfs 1, 16(3)
  026c278  lwz 4, 244(5)
  026c27c  cmpwi 4, 0
  026c280  bt 2, 0x26c3a8
  026c284  lfs 2, 196(3)
  026c288  lfs 3, 192(3)
  026c28c  fmuls 4, 2, 2
  026c290  lfs 5, 200(3)
  026c294  lis 6, 122
  026c298  lfs 6, -13180(6)
  026c29c  fmadds 4, 3, 3, 4
  026c2a0  lis 6, 39
  026c2a4  addi 6, 6, -15768
  026c2a8  fmadds 4, 5, 5, 4
  026c2ac  lfs 7, 0(6)
  026c2b0  fsqrts 4, 4
  026c2b4  lis 6, 122
  026c2b8  fdivs 6, 6, 4
  026c2bc  fsub 8, 7, 4
  026c2c0  fsub 9, 4, 7
  026c2c4  fsub 10, 7, 4
  026c2c8  fsub 11, 4, 7
  026c2cc  fsub 12, 7, 4
  026c2d0  fsub 4, 4, 7
  026c2d4  fmuls 3, 3, 6
  026c2d8  fmuls 2, 2, 6
  026c2dc  fmuls 5, 5, 6
  026c2e0  fsel 6, 8, 7, 3
  026c2e4  fsel 8, 10, 7, 2
  026c2e8  fsel 10, 12, 7, 5
  026c2ec  fsel 3, 9, 6, 3
  026c2f0  fsel 2, 11, 8, 2
  026c2f4  fsel 4, 4, 10, 5
  026c2f8  fadds 1, 1, 3
  026c2fc  stfs 1, 16(4)
  026c300  lfs 1, 20(3)
  026c304  fadds 1, 1, 2
  026c308  stfs 1, 20(4)
  026c30c  lfs 1, 24(3)
  026c310  fadds 1, 1, 4
  026c314  stfs 1, 24(4)
  026c318  lfs 1, 28(3)
  026c31c  stfs 1, 28(4)
  026c320  lfs 1, 228(3)
  026c324  lfs 2, 224(3)
  026c328  fmuls 3, 1, 1
  026c32c  lfs 4, 232(3)
  026c330  lfs 5, -13176(6)
  026c334  lwz 3, 244(5)
  026c338  fmadds 3, 2, 2, 3
  026c33c  lfs 6, 16(3)
  026c340  lfs 8, 20(3)
  026c344  lfs 9, 24(3)
  026c348  fmadds 3, 4, 4, 3
  026c34c  fsqrts 3, 3
  026c350  fdivs 5, 5, 3
  026c354  fsub 10, 7, 3
  026c358  fsub 11, 7, 3
  026c35c  fsub 12, 7, 3
  026c360  fsub 13, 3, 7
  026c364  fsub 0, 3, 7
  026c368  fsub 3, 3, 7
  026c36c  fmuls 4, 4, 5
  026c370  fmuls 1, 1, 5
  026c374  fmuls 2, 2, 5
  026c378  fsel 5, 10, 7, 4
  026c37c  fsel 10, 11, 7, 1
  026c380  fsel 7, 12, 7, 2
  026c384  fsel 4, 13, 5, 4
  026c388  fsel 1, 0, 10, 1
  026c38c  fsel 2, 3, 7, 2
  026c390  fadds 3, 9, 4
  026c394  fadds 1, 8, 1
  026c398  fadds 2, 6, 2
  026c39c  stfs 3, 24(3)
  026c3a0  stfs 1, 20(3)
  026c3a4  stfs 2, 16(3)
  026c3a8  blr

M1401_0026c3b8:   # 0x26c3b8, 0x314 bytes
  026c3b8  stdu 1, -96(1)
  026c3bc  lwz 6, 120(3)
  026c3c0  lis 5, 165
  026c3c4  li 7, 0
  026c3c8  addic 5, 5, 7136
  026c3cc  lwz 4, 216(6)
  026c3d0  slwi 4, 4, 2
  026c3d4  extsw 9, 4
  026c3d8  ori 4, 7, 0
  026c3dc  lwzx 9, 5, 9
  026c3e0  lwz 8, 0(9)
  026c3e4  addic 8, 8, -1
  026c3e8  cmpwi 8, 0
  026c3ec  bf 1, 0x26c444
  026c3f0  ori 8, 9, 0
  026c3f4  lfs 1, 20(8)
  026c3f8  lfs 2, 36(8)
  026c3fc  lfs 3, 16(8)
  026c400  fsubs 1, 1, 2
  026c404  lfs 2, 32(8)
  026c408  fsubs 2, 3, 2
  026c40c  lfs 3, 24(8)
  026c410  lfs 4, 40(8)
  026c414  fsubs 3, 3, 4
  026c418  fmuls 1, 1, 1
  026c41c  addic 7, 7, 1
  026c420  fmadds 1, 2, 2, 1
  026c424  fmadds 1, 3, 3, 1
  026c428  fsqrts 1, 1
  026c42c  stfs 1, 28(8)
  026c430  lwz 10, 0(9)
  026c434  addic 8, 8, 16
  026c438  addic 10, 10, -1
  026c43c  cmpw 7, 10
  026c440  bt 0, 0x26c3f4
  026c444  lis 7, 39
  026c448  stw 4, 208(6)
  026c44c  addi 7, 7, -15444
  026c450  lfs 1, 0(7)
  026c454  stw 4, 212(6)
  026c458  lfs 2, 16(9)
  026c45c  stfs 2, 16(3)
  026c460  lfs 3, 20(9)
  026c464  stfs 3, 20(3)
  026c468  lfs 4, 24(9)
  026c46c  stfs 4, 24(3)
  026c470  lfs 4, 28(9)
  026c474  stfs 4, 28(3)
  026c478  lfs 4, 32(9)
  026c47c  lfs 5, 36(9)
  026c480  fsubs 2, 4, 2
  026c484  fsubs 3, 5, 3
  026c488  lis 7, 115
  026c48c  addic 7, 7, 22784
  026c490  fabs 5, 2
  026c494  fabs 4, 3
  026c498  stfs 2, 48(1)
  026c49c  stfs 3, 52(1)
  026c4a0  fsubs 2, 5, 4
  026c4a4  stfs 2, 56(1)
  026c4a8  lwz 8, 48(1)
  026c4ac  lfs 2, 48(1)
  026c4b0  lwz 9, 52(1)
  026c4b4  lfs 3, 52(1)
  026c4b8  fabs 2, 2
  026c4bc  lwz 10, 56(1)
  026c4c0  rlwinm 9, 9, 3, 29, 29
  026c4c4  fabs 6, 3
  026c4c8  lfs 3, 56(1)
  026c4cc  rlwimi 9, 10, 2, 30, 30
  026c4d0  fsub 7, 3, 1
  026c4d4  fsub 8, 3, 1
  026c4d8  rlwimi 9, 8, 4, 28, 28
  026c4dc  ori 8, 7, 0
  026c4e0  rlwimi 8, 9, 2, 26, 28
  026c4e4  slwi 9, 9, 2
  026c4e8  clrldi 8, 8, 32
  026c4ec  fsel 4, 7, 2, 4
  026c4f0  lfsx 3, 7, 9
  026c4f4  lfs 2, 4(8)
  026c4f8  fsel 5, 8, 6, 5
  026c4fc  fcmpu 0, 4, 1
  026c500  bt 1, 0x26c508
  026c504  b 0x26c62c
  026c508  fsubs 6, 5, 4
  026c50c  fadds 4, 5, 4
  026c510  addic 10, 1, 16
  026c514  li 7, 2
  026c518  addic 8, 10, 60
  026c51c  addic 9, 10, 44
  026c520  mtctr 7
  026c524  fdivs 4, 6, 4
  026c528  fmuls 6, 4, 4
  026c52c  stfs 4, 72(1)
  026c530  stfs 4, 64(1)
  026c534  stfs 4, 68(1)
  026c538  stfs 4, 60(1)
  026c53c  lfs 7, 72(1)
  026c540  lfs 8, 64(1)
  026c544  lfs 9, 68(1)
  026c548  fmuls 4, 6, 6
  026c54c  fmuls 8, 8, 6
  026c550  fmuls 7, 7, 4
  026c554  fmuls 5, 4, 4
  026c558  fmuls 4, 9, 4
  026c55c  stfs 8, 64(1)
  026c560  fmuls 6, 7, 6
  026c564  stfs 4, 68(1)
  026c568  stfs 6, 72(1)
  026c56c  lfs 4, 44(10)
  026c570  fmuls 4, 4, 5
  026c574  stfs 4, 60(10)
  026c578  lfs 4, 4(9)
  026c57c  addic 9, 9, 8
  026c580  fmuls 4, 4, 5
  026c584  addic 10, 10, 8
  026c588  stfs 4, 4(8)
  026c58c  addic 8, 8, 8
  026c590  bdnz 0x26c56c
  026c594  ori 11, 1, 0
  026c598  li 8, 4
  026c59c  lis 10, 115
  026c5a0  addic 9, 11, 60
  026c5a4  mtctr 8
  026c5a8  addic 10, 10, 22752
  026c5ac  ori 8, 9, 0
  026c5b0  lfs 4, 60(11)
  026c5b4  lfs 5, 0(10)
  026c5b8  fmuls 4, 4, 5
  026c5bc  lfs 5, 4(10)
  026c5c0  addic 10, 10, 8
  026c5c4  stfs 4, 60(11)
  026c5c8  lfs 4, 4(9)
  026c5cc  addic 11, 11, 8
  026c5d0  fmuls 4, 4, 5
  026c5d4  stfs 4, 4(9)
  026c5d8  addic 9, 9, 8
  026c5dc  bdnz 0x26c5b0
  026c5e0  ori 9, 7, 0
  026c5e4  ori 7, 1, 0
  026c5e8  mtctr 9
  026c5ec  lfs 4, 60(7)
  026c5f0  fadds 1, 1, 4
  026c5f4  lfs 4, 4(8)
  026c5f8  addic 7, 7, 16
  026c5fc  lfs 5, 8(8)
  026c600  lfs 6, 12(8)
  026c604  addic 8, 8, 16
  026c608  fadds 1, 1, 4
  026c60c  fadds 1, 1, 5
  026c610  fadds 1, 1, 6
  026c614  bdnz 0x26c5ec
  026c618  lis 7, 39
  026c61c  addi 7, 7, -15444
  026c620  lfs 4, 4(7)
  026c624  fadds 1, 1, 4
  026c628  fmadds 1, 1, 3, 2
  026c62c  stfs 1, 72(3)
  026c630  lwz 3, 252(6)
  026c634  stw 4, 236(6)
  026c638  stw 4, 232(6)
  026c63c  cmpwi 3, 1
  026c640  stw 4, 228(6)
  026c644  stw 4, 240(6)
  026c648  bt 2, 0x26c6c4
  026c64c  lwz 3, 220(6)
  026c650  ori 7, 4, 0
  026c654  slwi 3, 3, 2
  026c658  extsw 6, 3
  026c65c  lwzx 6, 5, 6
  026c660  lwz 3, 0(6)
  026c664  addic 3, 3, -1
  026c668  cmpwi 3, 0
  026c66c  bf 1, 0x26c6c4
  026c670  ori 3, 6, 0
  026c674  lfs 1, 20(3)
  026c678  lfs 2, 36(3)
  026c67c  lfs 3, 16(3)
  026c680  fsubs 1, 1, 2
  026c684  lfs 2, 32(3)
  026c688  fsubs 2, 3, 2
  026c68c  lfs 3, 24(3)
  026c690  lfs 4, 40(3)
  026c694  fsubs 3, 3, 4
  026c698  fmuls 1, 1, 1
  026c69c  addic 7, 7, 1
  026c6a0  fmadds 1, 2, 2, 1
  026c6a4  fmadds 1, 3, 3, 1
  026c6a8  fsqrts 1, 1
  026c6ac  stfs 1, 28(3)
  026c6b0  lwz 4, 0(6)
  026c6b4  addic 3, 3, 16
  026c6b8  addic 4, 4, -1
  026c6bc  cmpw 7, 4
  026c6c0  bt 0, 0x26c674
  026c6c4  addi 1, 1, 96
  026c6c8  blr

UpdateMoby_1401_MineBot:   # 0x26c6f0, 0xcdc bytes
  026c6f0  stdu 1, -336(1)
  026c6f4  mflr 0
  026c6f8  std 0, 352(1)
  026c6fc  stfd 29, 312(1)
  026c700  stfd 30, 320(1)
  026c704  stfd 31, 328(1)
  026c708  std 31, 304(1)
  026c70c  lbz 4, 112(3)
  026c710  std 28, 280(1)
  026c714  ori 31, 3, 0
  026c718  lwz 28, 120(3)
  026c71c  rlwinm 3, 4, 0, 30, 30
  026c720  std 30, 296(1)
  026c724  std 29, 288(1)
  026c728  std 27, 272(1)
  026c72c  std 26, 264(1)
  026c730  cmpwi 3, 0
  026c734  bt 2, 0x26c78c
  026c738  lbz 3, 82(31)
  026c73c  lbz 4, 83(31)
  026c740  cmpwi 1, 3, 1
  026c744  cmpw 3, 4
  026c748  crnand 2, 2, 6
  026c74c  bt 2, 0x26c78c
  026c750  lis 3, 39
  026c754  lis 4, 114
  026c758  addi 3, 3, -14644
  026c75c  li 5, 0
  026c760  lfs 1, 0(3)
  026c764  lfs 2, -3056(4)
  026c768  ori 3, 31, 0
  026c76c  li 4, 4
  026c770  fmuls 1, 2, 1
  026c774  fctiwz 1, 1
  026c778  stfd 1, 248(1)
  026c77c  lwz 6, 252(1)
  026c780  extsw 6, 6
  026c784  bl 0xfddc0
  026c788  nop
  026c78c  lis 30, 151
  026c790  addic 30, 30, -25376
  026c794  lwz 3, 572(30)
  026c798  cmpw 3, 31
  026c79c  bf 2, 0x26c7f4
  026c7a0  lbz 3, 83(31)
  026c7a4  cmpwi 3, 1
  026c7a8  bt 2, 0x26c7f4
  026c7ac  lbz 3, 82(31)
  026c7b0  cmpwi 3, 1
  026c7b4  bt 2, 0x26c7f4
  026c7b8  lis 3, 39
  026c7bc  lis 4, 114
  026c7c0  addi 3, 3, -14644
  026c7c4  li 5, 0
  026c7c8  lfs 1, 0(3)
  026c7cc  lfs 2, -3056(4)
  026c7d0  ori 3, 31, 0
  026c7d4  li 4, 1
  026c7d8  fmuls 1, 2, 1
  026c7dc  fctiwz 1, 1
  026c7e0  stfd 1, 248(1)
  026c7e4  lwz 6, 252(1)
  026c7e8  extsw 6, 6
  026c7ec  bl 0xfddc0
  026c7f0  nop
  026c7f4  ori 3, 31, 0
  026c7f8  lis 4, 33
  026c7fc  li 5, 0
  026c800  bl 0x10675c
  026c804  nop
  026c808  cmpwi 3, 0
  026c80c  bf 2, 0x26c830
  026c810  lwz 4, 244(28)
  026c814  cmpwi 4, 0
  026c818  bt 2, 0x26c830
  026c81c  ori 3, 4, 0
  026c820  lis 4, 33
  026c824  li 5, 0
  026c828  bl 0x10675c
  026c82c  nop
  026c830  cmpwi 3, 0
  026c834  bt 2, 0x26ca98
  026c838  lbz 3, 32(31)
  026c83c  cmpwi 3, 6
  026c840  bt 2, 0x26ca98
  026c844  lis 3, 15363
  026c848  lis 4, 39
  026c84c  lis 5, 14851
  026c850  ori 3, 3, 4719
  026c854  addi 4, 4, -14644
  026c858  ori 5, 5, 4719
  026c85c  lis 6, 114
  026c860  stw 3, 128(28)
  026c864  li 3, 0
  026c868  stw 5, 132(28)
  026c86c  lfs 1, 4(4)
  026c870  li 5, 1
  026c874  lfs 2, -3052(6)
  026c878  fmuls 1, 2, 1
  026c87c  stfs 1, 136(28)
  026c880  lfs 1, 8(4)
  026c884  stb 3, 173(28)
  026c888  fmuls 1, 2, 1
  026c88c  stw 5, 148(28)
  026c890  addic 3, 28, 112
  026c894  lis 5, 115
  026c898  addic 5, 5, 22784
  026c89c  stfs 1, 140(28)
  026c8a0  lfs 1, 16(31)
  026c8a4  lfs 2, 128(30)
  026c8a8  lfs 3, 20(31)
  026c8ac  lfs 4, 132(30)
  026c8b0  fsubs 1, 1, 2
  026c8b4  fsubs 2, 3, 4
  026c8b8  fabs 3, 1
  026c8bc  fabs 5, 2
  026c8c0  stfs 1, 136(1)
  026c8c4  stfs 2, 140(1)
  026c8c8  fsubs 1, 3, 5
  026c8cc  stfs 1, 144(1)
  026c8d0  lwz 6, 136(1)
  026c8d4  lfs 4, 12(4)
  026c8d8  lfs 1, 136(1)
  026c8dc  lwz 4, 140(1)
  026c8e0  lfs 2, 140(1)
  026c8e4  lwz 7, 144(1)
  026c8e8  rlwinm 4, 4, 3, 29, 29
  026c8ec  lfs 6, 144(1)
  026c8f0  fabs 1, 1
  026c8f4  rlwimi 4, 7, 2, 30, 30
  026c8f8  fabs 2, 2
  026c8fc  fsub 7, 6, 4
  026c900  fsub 6, 6, 4
  026c904  rlwimi 4, 6, 4, 28, 28
  026c908  ori 6, 5, 0
  026c90c  rlwimi 6, 4, 2, 26, 28
  026c910  slwi 4, 4, 2
  026c914  clrldi 6, 6, 32
  026c918  fsel 5, 7, 1, 5
  026c91c  lfsx 1, 5, 4
  026c920  fsel 3, 6, 2, 3
  026c924  lfs 2, 4(6)
  026c928  fcmpu 0, 5, 4
  026c92c  bt 1, 0x26c934
  026c930  b 0x26ca54
  026c934  fsubs 6, 3, 5
  026c938  fadds 3, 3, 5
  026c93c  addic 4, 1, 16
  026c940  li 7, 2
  026c944  addic 5, 4, 196
  026c948  addic 6, 4, 212
  026c94c  mtctr 7
  026c950  fdivs 3, 6, 3
  026c954  fmuls 5, 3, 3
  026c958  stfs 3, 224(1)
  026c95c  stfs 3, 216(1)
  026c960  stfs 3, 220(1)
  026c964  stfs 3, 212(1)
  026c968  lfs 7, 224(1)
  026c96c  lfs 8, 216(1)
  026c970  lfs 9, 220(1)
  026c974  fmuls 6, 5, 5
  026c978  fmuls 8, 8, 5
  026c97c  fmuls 7, 7, 6
  026c980  fmuls 3, 6, 6
  026c984  fmuls 6, 9, 6
  026c988  stfs 8, 216(1)
  026c98c  fmuls 5, 7, 5
  026c990  stfs 6, 220(1)
  026c994  stfs 5, 224(1)
  026c998  lfs 5, 196(4)
  026c99c  fmuls 5, 5, 3
  026c9a0  stfs 5, 212(4)
  026c9a4  lfs 5, 4(5)
  026c9a8  addic 4, 4, 8
  026c9ac  addic 5, 5, 8
  026c9b0  fmuls 5, 5, 3
  026c9b4  stfs 5, 4(6)
  026c9b8  addic 6, 6, 8
  026c9bc  bdnz 0x26c998
  026c9c0  li 6, 4
  026c9c4  ori 4, 1, 0
  026c9c8  mtctr 6
  026c9cc  lis 5, 115
  026c9d0  addic 6, 4, 212
  026c9d4  addic 5, 5, 22752
  026c9d8  ori 8, 6, 0
  026c9dc  lfs 3, 212(4)
  026c9e0  lfs 5, 0(5)
  026c9e4  fmuls 3, 3, 5
  026c9e8  lfs 5, 4(5)
  026c9ec  addic 5, 5, 8
  026c9f0  stfs 3, 212(4)
  026c9f4  lfs 3, 4(6)
  026c9f8  addic 4, 4, 8
  026c9fc  fmuls 3, 3, 5
  026ca00  stfs 3, 4(6)
  026ca04  addic 6, 6, 8
  026ca08  bdnz 0x26c9dc
  026ca0c  ori 4, 1, 0
  026ca10  mtctr 7
  026ca14  lfs 3, 212(4)
  026ca18  fadds 3, 4, 3
  026ca1c  lfs 4, 4(8)
  026ca20  addic 4, 4, 16
  026ca24  lfs 5, 8(8)
  026ca28  lfs 6, 12(8)
  026ca2c  addic 8, 8, 16
  026ca30  fadds 3, 3, 4
  026ca34  fadds 4, 3, 5
  026ca38  fadds 4, 4, 6
  026ca3c  bdnz 0x26ca14
  026ca40  lis 4, 39
  026ca44  addi 4, 4, -14644
  026ca48  lfs 3, 16(4)
  026ca4c  fadds 4, 4, 3
  026ca50  fmadds 4, 4, 1, 2
  026ca54  ori 4, 3, 0
  026ca58  fmr 1, 4
  026ca5c  li 6, 1
  026ca60  ori 3, 31, 0
  026ca64  li 7, 1
  026ca68  li 8, 0
  026ca6c  bl 0x10ad80
  026ca70  nop
  026ca74  li 6, 120
  026ca78  ori 3, 31, 0
  026ca7c  li 4, 0
  026ca80  li 5, -1
  026ca84  stb 6, 103(28)
  026ca88  bl 0xfd8d0
  026ca8c  nop
  026ca90  li 3, 6
  026ca94  stb 3, 32(31)
  026ca98  li 4, 255
  026ca9c  lbz 3, 32(31)
  026caa0  cmpwi 3, 6
  026caa4  stb 4, 164(31)
  026caa8  cmpwi 1, 3, 5
  026caac  cmpwi 6, 3, 4
  026cab0  cmpwi 7, 3, 3
  026cab4  bt 2, 0x26d308
  026cab8  bt 6, 0x26d0b8
  026cabc  bt 26, 0x26cf04
  026cac0  bt 30, 0x26cf54
  026cac4  cmpwi 3, 2
  026cac8  bt 2, 0x26ce6c
  026cacc  cmpwi 3, 1
  026cad0  bt 2, 0x26cc74
  026cad4  cmpwi 3, 0
  026cad8  bf 2, 0x26d388
  026cadc  lwz 3, 252(28)
  026cae0  cmpwi 3, 2
  026cae4  cmpwi 1, 3, 1
  026cae8  bf 2, 0x26cb14
  026caec  li 5, 1
  026caf0  li 6, 0
  026caf4  ori 3, 31, 0
  026caf8  li 4, 4
  026cafc  stb 5, 32(31)
  026cb00  li 5, 0
  026cb04  stw 6, 240(28)
  026cb08  bl 0xfdcf0
  026cb0c  nop
  026cb10  b 0x26cc68
  026cb14  lwz 3, 216(28)
  026cb18  cmpwi 3, -1
  026cb1c  bf 2, 0x26cb48
  026cb20  lis 3, 101
  026cb24  lhz 4, 178(31)
  026cb28  addic 3, 3, 22056
  026cb2c  extsh 4, 4
  026cb30  bl 0x5cd098
  026cb34  nop
  026cb38  ori 3, 31, 0
  026cb3c  bl 0xefb38
  026cb40  nop
  026cb44  b 0x26d398
  026cb48  lis 4, 165
  026cb4c  slwi 5, 3, 2
  026cb50  addic 3, 4, 7136
  026cb54  extsw 4, 5
  026cb58  lwzx 4, 3, 4
  026cb5c  lwz 4, 0(4)
  026cb60  cmpwi 4, 0
  026cb64  bf 2, 0x26cb90
  026cb68  lis 3, 101
  026cb6c  lhz 4, 178(31)
  026cb70  addic 3, 3, 22112
  026cb74  extsh 4, 4
  026cb78  bl 0x5cd098
  026cb7c  nop
  026cb80  ori 3, 31, 0
  026cb84  bl 0xefb38
  026cb88  nop
  026cb8c  b 0x26d398
  026cb90  bt 6, 0x26cc08
  026cb94  lwz 4, 220(28)
  026cb98  cmpwi 4, -1
  026cb9c  bf 2, 0x26cbc8
  026cba0  lis 3, 101
  026cba4  lhz 4, 178(31)
  026cba8  addic 3, 3, 22184
  026cbac  extsh 4, 4
  026cbb0  bl 0x5cd098
  026cbb4  nop
  026cbb8  ori 3, 31, 0
  026cbbc  bl 0xefb38
  026cbc0  nop
  026cbc4  b 0x26d398
  026cbc8  slwi 4, 4, 2
  026cbcc  extsw 4, 4
  026cbd0  lwzx 3, 3, 4
  026cbd4  lwz 3, 0(3)
  026cbd8  cmpwi 3, 0
  026cbdc  bf 2, 0x26cc08
  026cbe0  lis 3, 101
  026cbe4  lhz 4, 178(31)
  026cbe8  addic 3, 3, 22240
  026cbec  extsh 4, 4
  026cbf0  bl 0x5cd098
  026cbf4  nop
  026cbf8  ori 3, 31, 0
  026cbfc  bl 0xefb38
  026cc00  nop
  026cc04  b 0x26d398
  026cc08  lwz 3, 224(28)
  026cc0c  cmpwi 3, -1
  026cc10  bf 2, 0x26cc3c
  026cc14  lis 3, 101
  026cc18  lhz 4, 178(31)
  026cc1c  addic 3, 3, 22312
  026cc20  extsh 4, 4
  026cc24  bl 0x5cd098
  026cc28  nop
  026cc2c  ori 3, 31, 0
  026cc30  bl 0xefb38
  026cc34  nop
  026cc38  b 0x26d398
  026cc3c  ori 3, 31, 0
  026cc40  bl 0x26c3b8
  026cc44  li 3, 2
  026cc48  lhz 4, 52(31)
  026cc4c  li 5, 128
  026cc50  li 6, 0
  026cc54  ori 4, 4, 65
  026cc58  stb 3, 32(31)
  026cc5c  stb 5, 48(31)
  026cc60  stw 6, 148(31)
  026cc64  sth 4, 52(31)
  026cc68  li 3, 0
  026cc6c  stw 3, 244(28)
  026cc70  b 0x26d388
  026cc74  lfs 1, 128(30)
  026cc78  lfs 2, 16(31)
  026cc7c  lfs 3, 132(30)
  026cc80  lfs 4, 20(31)
  026cc84  fsubs 1, 1, 2
  026cc88  lis 3, 39
  026cc8c  fsubs 2, 3, 4
  026cc90  addi 3, 3, -14644
  026cc94  lis 4, 115
  026cc98  addic 4, 4, 22784
  026cc9c  fabs 3, 1
  026cca0  fabs 5, 2
  026cca4  stfs 1, 124(1)
  026cca8  stfs 2, 128(1)
  026ccac  fsubs 1, 3, 5
  026ccb0  stfs 1, 132(1)
  026ccb4  lwz 5, 124(1)
  026ccb8  lfs 4, 12(3)
  026ccbc  lfs 1, 124(1)
  026ccc0  lwz 3, 128(1)
  026ccc4  lfs 2, 128(1)
  026ccc8  lwz 6, 132(1)
  026cccc  rlwinm 3, 3, 3, 29, 29
  026ccd0  fabs 6, 2
  026ccd4  lfs 2, 132(1)
  026ccd8  fabs 1, 1
  026ccdc  rlwimi 3, 6, 2, 30, 30
  026cce0  fsub 7, 2, 4
  026cce4  rlwimi 3, 5, 4, 28, 28
  026cce8  fsub 8, 2, 4
  026ccec  ori 5, 4, 0
  026ccf0  rlwimi 5, 3, 2, 26, 28
  026ccf4  slwi 3, 3, 2
  026ccf8  clrldi 5, 5, 32
  026ccfc  fsel 5, 7, 1, 5
  026cd00  lfsx 1, 4, 3
  026cd04  lfs 2, 4(5)
  026cd08  fsel 3, 8, 6, 3
  026cd0c  fcmpu 0, 5, 4
  026cd10  bt 1, 0x26cd1c
  026cd14  fmr 1, 4
  026cd18  b 0x26ce40
  026cd1c  fsubs 6, 3, 5
  026cd20  fadds 3, 3, 5
  026cd24  addic 3, 1, 16
  026cd28  li 6, 2
  026cd2c  addic 5, 3, 180
  026cd30  addic 4, 3, 164
  026cd34  mtctr 6
  026cd38  fdivs 3, 6, 3
  026cd3c  fmuls 5, 3, 3
  026cd40  stfs 3, 192(1)
  026cd44  stfs 3, 184(1)
  026cd48  stfs 3, 188(1)
  026cd4c  stfs 3, 180(1)
  026cd50  lfs 7, 192(1)
  026cd54  lfs 8, 184(1)
  026cd58  lfs 9, 188(1)
  026cd5c  fmuls 6, 5, 5
  026cd60  fmuls 8, 8, 5
  026cd64  fmuls 7, 7, 6
  026cd68  fmuls 3, 6, 6
  026cd6c  fmuls 6, 9, 6
  026cd70  stfs 8, 184(1)
  026cd74  fmuls 5, 7, 5
  026cd78  stfs 6, 188(1)
  026cd7c  stfs 5, 192(1)
  026cd80  lfs 5, 164(3)
  026cd84  fmuls 5, 5, 3
  026cd88  stfs 5, 180(3)
  026cd8c  lfs 5, 4(4)
  026cd90  addic 4, 4, 8
  026cd94  fmuls 5, 5, 3
  026cd98  addic 3, 3, 8
  026cd9c  stfs 5, 4(5)
  026cda0  addic 5, 5, 8
  026cda4  bdnz 0x26cd80
  026cda8  li 5, 4
  026cdac  ori 3, 1, 0
  026cdb0  mtctr 5
  026cdb4  lis 4, 115
  026cdb8  addic 5, 3, 180
  026cdbc  addic 4, 4, 22752
  026cdc0  ori 7, 5, 0
  026cdc4  lfs 3, 180(3)
  026cdc8  lfs 5, 0(4)
  026cdcc  fmuls 3, 3, 5
  026cdd0  lfs 5, 4(4)
  026cdd4  addic 4, 4, 8
  026cdd8  stfs 3, 180(3)
  026cddc  lfs 3, 4(5)
  026cde0  addic 3, 3, 8
  026cde4  fmuls 3, 3, 5
  026cde8  stfs 3, 4(5)
  026cdec  addic 5, 5, 8
  026cdf0  bdnz 0x26cdc4
  026cdf4  ori 3, 1, 0
  026cdf8  fmr 3, 4
  026cdfc  mtctr 6
  026ce00  lfs 5, 180(3)
  026ce04  fadds 3, 3, 5
  026ce08  lfs 5, 4(7)
  026ce0c  addic 3, 3, 16
  026ce10  lfs 6, 8(7)
  026ce14  lfs 7, 12(7)
  026ce18  addic 7, 7, 16
  026ce1c  fadds 3, 3, 5
  026ce20  fadds 3, 3, 6
  026ce24  fadds 3, 3, 7
  026ce28  bdnz 0x26ce00
  026ce2c  lis 3, 39
  026ce30  addi 3, 3, -14644
  026ce34  lfs 5, 16(3)
  026ce38  fadds 3, 3, 5
  026ce3c  fmadds 1, 3, 1, 2
  026ce40  lis 4, 39
  026ce44  ori 3, 31, 0
  026ce48  addi 4, 4, -14644
  026ce4c  addic 5, 28, 240
  026ce50  lfs 2, 20(4)
  026ce54  lfs 3, 24(4)
  026ce58  bl 0xff2e8
  026ce5c  nop
  026ce60  ori 3, 31, 0
  026ce64  bl 0x26bc10
  026ce68  b 0x26d388
  026ce6c  addic 3, 30, 128
  026ce70  lwz 4, 224(28)
  026ce74  extsw 4, 4
  026ce78  bl 0x110b70
  026ce7c  nop
  026ce80  cmpwi 3, 0
  026ce84  bt 2, 0x26d388
  026ce88  lwz 3, 252(28)
  026ce8c  cmpwi 3, 1
  026ce90  bf 2, 0x26ceac
  026ce94  ori 3, 31, 0
  026ce98  li 4, 0
  026ce9c  li 5, 0
  026cea0  bl 0xfdcf0
  026cea4  nop
  026cea8  b 0x26cedc
  026ceac  ori 3, 31, 0
  026ceb0  addic 4, 31, 16
  026ceb4  bl 0x4bfdf8
  026ceb8  nop
  026cebc  stw 3, 244(28)
  026cec0  ori 3, 31, 0
  026cec4  bl 0x26c270
  026cec8  ori 3, 31, 0
  026cecc  li 4, 2
  026ced0  li 5, 0
  026ced4  bl 0xfdcf0
  026ced8  nop
  026cedc  li 3, -66
  026cee0  lhz 5, 52(31)
  026cee4  li 4, 4
  026cee8  lwz 6, 36(31)
  026ceec  and 3, 5, 3
  026cef0  sth 3, 52(31)
  026cef4  lwz 3, 16(6)
  026cef8  stb 4, 32(31)
  026cefc  stw 3, 148(31)
  026cf00  b 0x26d388
  026cf04  lwz 3, 252(28)
  026cf08  cmpwi 3, 0
  026cf0c  bf 2, 0x26cf18
  026cf10  ori 3, 31, 0
  026cf14  bl 0x26c270
  026cf18  ori 3, 31, 0
  026cf1c  bl 0x26bf18
  026cf20  cmpwi 3, 0
  026cf24  bt 2, 0x26cf48
  026cf28  li 6, 3
  026cf2c  ori 3, 31, 0
  026cf30  li 4, 3
  026cf34  li 5, 0
  026cf38  stb 6, 32(31)
  026cf3c  li 6, 5
  026cf40  bl 0xfddc0
  026cf44  nop
  026cf48  ori 3, 31, 0
  026cf4c  bl 0x26bc10
  026cf50  b 0x26d388
  026cf54  lwz 30, 120(31)
  026cf58  lis 3, 165
  026cf5c  addic 29, 3, 7136
  026cf60  lwz 3, 216(30)
  026cf64  lwz 4, 252(30)
  026cf68  slwi 3, 3, 2
  026cf6c  cmpwi 4, 0
  026cf70  extsw 3, 3
  026cf74  lwzx 29, 29, 3
  026cf78  bf 2, 0x26cf84
  026cf7c  ori 3, 31, 0
  026cf80  bl 0x26c270
  026cf84  lis 3, 39
  026cf88  lwz 4, 0(29)
  026cf8c  lis 27, 122
  026cf90  addi 3, 3, -14644
  026cf94  slwi 4, 4, 4
  026cf98  lis 26, 122
  026cf9c  addic 5, 30, 228
  026cfa0  lfs 31, 12(3)
  026cfa4  addc 3, 29, 4
  026cfa8  lfs 2, -13188(27)
  026cfac  fmr 4, 31
  026cfb0  clrldi 4, 3, 32
  026cfb4  lfs 3, -13184(26)
  026cfb8  addic 3, 31, 16
  026cfbc  lfs 1, 0(4)
  026cfc0  lfs 30, 4(4)
  026cfc4  lfs 29, 8(4)
  026cfc8  bl 0x109b40
  026cfcc  nop
  026cfd0  lfs 2, -13188(27)
  026cfd4  addic 3, 31, 20
  026cfd8  lfs 3, -13184(26)
  026cfdc  addic 5, 30, 232
  026cfe0  fmr 1, 30
  026cfe4  fmr 4, 31
  026cfe8  bl 0x109b40
  026cfec  nop
  026cff0  lfs 2, -13188(27)
  026cff4  addic 3, 31, 24
  026cff8  lfs 3, -13184(26)
  026cffc  addic 5, 30, 236
  026d000  fmr 1, 29
  026d004  fmr 4, 31
  026d008  bl 0x109b40
  026d00c  nop
  026d010  lbz 3, 112(31)
  026d014  rlwinm 3, 3, 0, 30, 30
  026d018  cmpwi 3, 0
  026d01c  bt 2, 0x26d0ac
  026d020  lbz 3, 82(31)
  026d024  lbz 4, 83(31)
  026d028  cmpw 3, 4
  026d02c  bf 2, 0x26d0ac
  026d030  lwz 3, 252(30)
  026d034  cmpwi 3, 1
  026d038  bf 2, 0x26d064
  026d03c  li 6, 1
  026d040  li 7, 0
  026d044  ori 3, 31, 0
  026d048  li 4, 4
  026d04c  stb 6, 32(31)
  026d050  li 5, 0
  026d054  stw 7, 240(30)
  026d058  bl 0xfdcf0
  026d05c  nop
  026d060  b 0x26d0ac
  026d064  lwz 3, 244(30)
  026d068  cmpwi 3, 0
  026d06c  bt 2, 0x26d080
  026d070  bl 0x4bff20
  026d074  nop
  026d078  li 3, 0
  026d07c  stw 3, 244(30)
  026d080  li 6, 5
  026d084  ori 3, 31, 0
  026d088  li 4, 0
  026d08c  li 5, 0
  026d090  stb 6, 32(31)
  026d094  li 6, 20
  026d098  bl 0xfddc0
  026d09c  nop
  026d0a0  li 3, 0
  026d0a4  stw 3, 208(30)
  026d0a8  stw 3, 212(30)
  026d0ac  ori 3, 31, 0
  026d0b0  bl 0x26bc10
  026d0b4  b 0x26d388
  026d0b8  ori 3, 31, 0
  026d0bc  bl 0x26bf18
  026d0c0  cmpwi 3, 0
  026d0c4  bt 2, 0x26d2fc
  026d0c8  li 3, 2
  026d0cc  lhz 7, 52(31)
  026d0d0  li 4, 0
  026d0d4  lis 5, 39
  026d0d8  lis 6, 165
  026d0dc  stb 3, 32(31)
  026d0e0  ori 3, 7, 65
  026d0e4  stw 4, 148(31)
  026d0e8  addi 5, 5, -14644
  026d0ec  stw 4, 208(28)
  026d0f0  lwz 7, 216(28)
  026d0f4  addic 6, 6, 7136
  026d0f8  sth 3, 52(31)
  026d0fc  slwi 3, 7, 2
  026d100  lfs 4, 12(5)
  026d104  extsw 3, 3
  026d108  stw 4, 240(28)
  026d10c  stw 4, 212(28)
  026d110  stw 4, 236(28)
  026d114  stw 4, 232(28)
  026d118  stw 4, 228(28)
  026d11c  lwzx 3, 6, 3
  026d120  lfs 1, 16(3)
  026d124  stfs 1, 16(31)
  026d128  lfs 2, 20(3)
  026d12c  stfs 2, 20(31)
  026d130  lfs 3, 24(3)
  026d134  stfs 3, 24(31)
  026d138  lfs 3, 28(3)
  026d13c  stfs 3, 28(31)
  026d140  lfs 3, 32(3)
  026d144  lfs 5, 36(3)
  026d148  fsubs 1, 3, 1
  026d14c  fsubs 2, 5, 2
  026d150  lis 3, 115
  026d154  addic 3, 3, 22784
  026d158  fabs 3, 1
  026d15c  fabs 5, 2
  026d160  stfs 1, 112(1)
  026d164  stfs 2, 116(1)
  026d168  fsubs 1, 3, 5
  026d16c  stfs 1, 120(1)
  026d170  lwz 4, 112(1)
  026d174  lfs 1, 112(1)
  026d178  lwz 5, 116(1)
  026d17c  lfs 2, 116(1)
  026d180  lwz 6, 120(1)
  026d184  rlwinm 5, 5, 3, 29, 29
  026d188  lfs 6, 120(1)
  026d18c  fabs 1, 1
  026d190  rlwimi 5, 6, 2, 30, 30
  026d194  fabs 2, 2
  026d198  fsub 7, 6, 4
  026d19c  fsub 6, 6, 4
  026d1a0  rlwimi 5, 4, 4, 28, 28
  026d1a4  ori 4, 3, 0
  026d1a8  rlwimi 4, 5, 2, 26, 28
  026d1ac  slwi 5, 5, 2
  026d1b0  clrldi 4, 4, 32
  026d1b4  fsel 5, 7, 1, 5
  026d1b8  lfsx 1, 3, 5
  026d1bc  fsel 3, 6, 2, 3
  026d1c0  lfs 2, 4(4)
  026d1c4  fcmpu 0, 5, 4
  026d1c8  bt 1, 0x26d1d0
  026d1cc  b 0x26d2f4
  026d1d0  fsubs 6, 3, 5
  026d1d4  fadds 3, 3, 5
  026d1d8  addic 3, 1, 16
  026d1dc  li 6, 2
  026d1e0  addic 4, 3, 132
  026d1e4  addic 5, 3, 148
  026d1e8  mtctr 6
  026d1ec  fdivs 3, 6, 3
  026d1f0  fmuls 5, 3, 3
  026d1f4  stfs 3, 160(1)
  026d1f8  stfs 3, 152(1)
  026d1fc  stfs 3, 156(1)
  026d200  stfs 3, 148(1)
  026d204  lfs 7, 160(1)
  026d208  lfs 8, 152(1)
  026d20c  lfs 9, 156(1)
  026d210  fmuls 6, 5, 5
  026d214  fmuls 8, 8, 5
  026d218  fmuls 7, 7, 6
  026d21c  fmuls 3, 6, 6
  026d220  fmuls 6, 9, 6
  026d224  stfs 8, 152(1)
  026d228  fmuls 5, 7, 5
  026d22c  stfs 6, 156(1)
  026d230  stfs 5, 160(1)
  026d234  lfs 5, 132(3)
  026d238  fmuls 5, 5, 3
  026d23c  stfs 5, 148(3)
  026d240  lfs 5, 4(4)
  026d244  addic 3, 3, 8
  026d248  addic 4, 4, 8
  026d24c  fmuls 5, 5, 3
  026d250  stfs 5, 4(5)
  026d254  addic 5, 5, 8
  026d258  bdnz 0x26d234
  026d25c  li 5, 4
  026d260  ori 3, 1, 0
  026d264  mtctr 5
  026d268  lis 4, 115
  026d26c  addic 5, 3, 148
  026d270  addic 4, 4, 22752
  026d274  ori 6, 5, 0
  026d278  lfs 3, 148(3)
  026d27c  lfs 5, 0(4)
  026d280  fmuls 3, 3, 5
  026d284  lfs 5, 4(4)
  026d288  addic 4, 4, 8
  026d28c  stfs 3, 148(3)
  026d290  lfs 3, 4(5)
  026d294  addic 3, 3, 8
  026d298  fmuls 3, 3, 5
  026d29c  stfs 3, 4(5)
  026d2a0  addic 5, 5, 8
  026d2a4  bdnz 0x26d278
  026d2a8  li 4, 2
  026d2ac  ori 3, 1, 0
  026d2b0  mtctr 4
  026d2b4  lfs 3, 148(3)
  026d2b8  fadds 3, 4, 3
  026d2bc  addic 3, 3, 16
  026d2c0  lfs 4, 4(6)
  026d2c4  lfs 5, 8(6)
  026d2c8  lfs 6, 12(6)
  026d2cc  addic 6, 6, 16
  026d2d0  fadds 3, 3, 4
  026d2d4  fadds 4, 3, 5
  026d2d8  fadds 4, 4, 6
  026d2dc  bdnz 0x26d2b4
  026d2e0  lis 3, 39
  026d2e4  addi 3, 3, -14644
  026d2e8  lfs 3, 16(3)
  026d2ec  fadds 4, 4, 3
  026d2f0  fmadds 4, 4, 1, 2
  026d2f4  stfs 4, 72(31)
  026d2f8  b 0x26d388
  026d2fc  ori 3, 31, 0
  026d300  bl 0x26bc10
  026d304  b 0x26d388
  026d308  ori 3, 31, 0
  026d30c  addic 4, 28, 112
  026d310  bl 0x10b030
  026d314  nop
  026d318  clrlwi 3, 3, 30
  026d31c  cmpwi 3, 0
  026d320  bt 2, 0x26d358
  026d324  lis 4, 39
  026d328  ori 3, 31, 0
  026d32c  addi 5, 4, -14644
  026d330  li 6, -1
  026d334  addic 4, 31, 16
  026d338  lfs 1, 28(5)
  026d33c  lfs 2, 32(5)
  026d340  bl 0x10fb28
  026d344  nop
  026d348  ori 3, 31, 0
  026d34c  bl 0xefb38
  026d350  nop
  026d354  b 0x26d398
  026d358  lwz 4, 24(31)
  026d35c  lis 3, 16544
  026d360  srawi 5, 4, 31
  026d364  srwi 6, 5, 1
  026d368  xor 4, 6, 4
  026d36c  subc 4, 4, 5
  026d370  cmpw 4, 3
  026d374  bf 0, 0x26d388
  026d378  ori 3, 31, 0
  026d37c  bl 0xefb38
  026d380  nop
  026d384  b 0x26d398
  026d388  addic 4, 28, 96
  026d38c  ori 3, 31, 0
  026d390  bl 0x10c9a0
  026d394  nop
  026d398  ld 0, 352(1)
  026d39c  mtlr 0
  026d3a0  lfd 29, 312(1)
  026d3a4  lfd 30, 320(1)
  026d3a8  lfd 31, 328(1)
  026d3ac  ld 26, 264(1)
  026d3b0  ld 27, 272(1)
  026d3b4  ld 28, 280(1)
  026d3b8  ld 29, 288(1)
  026d3bc  ld 30, 296(1)
  026d3c0  ld 31, 304(1)
  026d3c4  addi 1, 1, 336
  026d3c8  blr
