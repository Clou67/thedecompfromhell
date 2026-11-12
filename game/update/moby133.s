# game/update/moby133.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1327_0024bb50:   # 0x24bb50, 0x100 bytes
  024bb50  stdu 1, -144(1)
  024bb54  mflr 0
  024bb58  std 0, 160(1)
  024bb5c  std 31, 136(1)
  024bb60  ori 31, 3, 0
  024bb64  lis 4, 51
  024bb68  std 30, 128(1)
  024bb6c  std 29, 120(1)
  024bb70  li 5, 0
  024bb74  bl 0x10675c
  024bb78  nop
  024bb7c  ori 30, 3, 0
  024bb80  cmpwi 30, 0
  024bb84  bt 2, 0x24bc34
  024bb88  li 3, 2
  024bb8c  li 5, 0
  024bb90  lhz 4, 52(31)
  024bb94  ori 29, 30, 0
  024bb98  lis 30, 151
  024bb9c  ori 6, 4, 1
  024bba0  stb 3, 32(31)
  024bba4  addic 30, 30, -25376
  024bba8  stb 5, 49(31)
  024bbac  ori 3, 31, 0
  024bbb0  stw 5, 148(31)
  024bbb4  addic 4, 30, 256
  024bbb8  sth 6, 52(31)
  024bbbc  bl 0x24b718
  024bbc0  li 3, 0
  024bbc4  li 4, 0
  024bbc8  ori 5, 31, 0
  024bbcc  bl 0x15d12c
  024bbd0  nop
  024bbd4  lwz 3, 32(29)
  024bbd8  cmpwi 3, 0
  024bbdc  bt 2, 0x24bc2c
  024bbe0  lhz 3, 166(3)
  024bbe4  cmpwi 3, 0
  024bbe8  bf 2, 0x24bc2c
  024bbec  lis 3, 37
  024bbf0  vspltisw 2, -1
  024bbf4  lis 4, 114
  024bbf8  addi 3, 3, -17588
  024bbfc  li 5, -3056
  024bc00  vslw 2, 2, 2
  024bc04  lvlx 3, 0, 3
  024bc08  lvlx 4, 5, 4
  024bc0c  li 3, 2244
  024bc10  vspltw 3, 3, 0
  024bc14  vmaddfp 2, 4, 3, 2
  024bc18  lvlx 3, 3, 30
  024bc1c  vctsxs 2, 2, 0
  024bc20  vadduwm 2, 3, 2
  024bc24  vspltw 2, 2, 0
  024bc28  stvewx 2, 3, 30
  024bc2c  li 3, 255
  024bc30  stb 3, 164(31)
  024bc34  ld 0, 160(1)
  024bc38  mtlr 0
  024bc3c  ld 29, 120(1)
  024bc40  ld 30, 128(1)
  024bc44  ld 31, 136(1)
  024bc48  addi 1, 1, 144
  024bc4c  blr

UpdateMoby_133:   # 0x24bc98, 0x660 bytes
  024bc98  stdu 1, -224(1)
  024bc9c  mflr 0
  024bca0  std 0, 240(1)
  024bca4  stfd 31, 216(1)
  024bca8  std 31, 208(1)
  024bcac  ori 31, 3, 0
  024bcb0  lis 4, 51
  024bcb4  std 30, 200(1)
  024bcb8  li 5, 0
  024bcbc  std 29, 192(1)
  024bcc0  std 28, 184(1)
  024bcc4  lwz 30, 120(31)
  024bcc8  bl 0x10675c
  024bccc  nop
  024bcd0  ori 29, 3, 0
  024bcd4  cmpwi 29, 0
  024bcd8  bt 2, 0x24bd88
  024bcdc  li 4, 2
  024bce0  lhz 5, 52(31)
  024bce4  li 3, 0
  024bce8  ori 28, 29, 0
  024bcec  lis 29, 151
  024bcf0  stb 4, 32(31)
  024bcf4  ori 5, 5, 1
  024bcf8  stb 3, 49(31)
  024bcfc  addic 29, 29, -25376
  024bd00  stw 3, 148(31)
  024bd04  ori 3, 31, 0
  024bd08  addic 4, 29, 256
  024bd0c  sth 5, 52(31)
  024bd10  bl 0x24b718
  024bd14  li 3, 0
  024bd18  li 4, 0
  024bd1c  ori 5, 31, 0
  024bd20  bl 0x15d12c
  024bd24  nop
  024bd28  lwz 3, 32(28)
  024bd2c  cmpwi 3, 0
  024bd30  bt 2, 0x24bd80
  024bd34  lhz 3, 166(3)
  024bd38  cmpwi 3, 0
  024bd3c  bf 2, 0x24bd80
  024bd40  lis 3, 37
  024bd44  vspltisw 2, -1
  024bd48  lis 4, 114
  024bd4c  addi 3, 3, -17328
  024bd50  li 5, -3056
  024bd54  vslw 2, 2, 2
  024bd58  lvlx 3, 0, 3
  024bd5c  lvlx 4, 5, 4
  024bd60  vspltw 3, 3, 0
  024bd64  li 3, 2244
  024bd68  vmaddfp 2, 4, 3, 2
  024bd6c  lvlx 3, 3, 29
  024bd70  vctsxs 2, 2, 0
  024bd74  vadduwm 2, 3, 2
  024bd78  vspltw 2, 2, 0
  024bd7c  stvewx 2, 3, 29
  024bd80  li 3, 255
  024bd84  stb 3, 164(31)
  024bd88  lbz 3, 32(31)
  024bd8c  cmpwi 3, 0
  024bd90  cmpwi 1, 3, 2
  024bd94  cmpwi 6, 3, 1
  024bd98  cmpwi 7, 3, -1
  024bd9c  bt 1, 0x24bda8
  024bda0  bf 29, 0x24c2d4
  024bda4  b 0x24bdb4
  024bda8  bf 25, 0x24be7c
  024bdac  bf 5, 0x24c26c
  024bdb0  b 0x24c2d4
  024bdb4  li 3, 1
  024bdb8  li 4, 64
  024bdbc  lbz 5, 83(31)
  024bdc0  cmpwi 5, 0
  024bdc4  stb 3, 32(31)
  024bdc8  stb 4, 48(31)
  024bdcc  bt 2, 0x24bde8
  024bdd0  ori 3, 31, 0
  024bdd4  li 4, 0
  024bdd8  li 5, 0
  024bddc  li 6, 0
  024bde0  bl 0xfddc0
  024bde4  nop
  024bde8  lwz 3, 176(30)
  024bdec  cmpwi 3, -1
  024bdf0  bf 2, 0x24be04
  024bdf4  ori 3, 31, 0
  024bdf8  bl 0xefb38
  024bdfc  nop
  024be00  b 0x24c2d4
  024be04  lis 4, 165
  024be08  slwi 3, 3, 2
  024be0c  addic 4, 4, 7136
  024be10  extsw 3, 3
  024be14  lwzx 3, 4, 3
  024be18  lwz 3, 0(3)
  024be1c  cmpwi 3, 0
  024be20  bf 2, 0x24be34
  024be24  ori 3, 31, 0
  024be28  bl 0xefb38
  024be2c  nop
  024be30  b 0x24c2d4
  024be34  addic 3, 30, 96
  024be38  bl 0x100f8c
  024be3c  nop
  024be40  lis 4, 37
  024be44  lis 3, 16256
  024be48  addi 31, 4, -17328
  024be4c  stw 3, 108(30)
  024be50  stw 3, 104(30)
  024be54  lfs 1, 4(31)
  024be58  bl 0x502758
  024be5c  nop
  024be60  stw 3, 96(30)
  024be64  lis 3, 114
  024be68  lfs 1, 8(31)
  024be6c  lfs 2, -3052(3)
  024be70  fmuls 1, 2, 1
  024be74  stfs 1, 132(30)
  024be78  b 0x24c2d4
  024be7c  lwz 3, 176(30)
  024be80  lis 29, 165
  024be84  lwz 4, 180(30)
  024be88  slwi 3, 3, 2
  024be8c  lfs 1, 16(31)
  024be90  addic 29, 29, 7136
  024be94  extsw 3, 3
  024be98  slwi 4, 4, 4
  024be9c  lwzx 3, 29, 3
  024bea0  lfs 2, 20(31)
  024bea4  addc 3, 3, 4
  024bea8  clrldi 3, 3, 32
  024beac  lis 4, 115
  024beb0  lfs 3, 16(3)
  024beb4  lfs 4, 20(3)
  024beb8  fsubs 1, 3, 1
  024bebc  lis 3, 37
  024bec0  fsubs 2, 4, 2
  024bec4  addi 3, 3, -17328
  024bec8  addic 4, 4, 22784
  024becc  fabs 5, 1
  024bed0  fabs 4, 2
  024bed4  stfs 1, 128(1)
  024bed8  stfs 2, 132(1)
  024bedc  fsubs 1, 5, 4
  024bee0  stfs 1, 136(1)
  024bee4  lwz 5, 128(1)
  024bee8  lfs 1, 12(3)
  024beec  lfs 2, 128(1)
  024bef0  lwz 3, 132(1)
  024bef4  lfs 3, 132(1)
  024bef8  lwz 6, 136(1)
  024befc  rlwinm 3, 3, 3, 29, 29
  024bf00  fabs 6, 3
  024bf04  lfs 3, 136(1)
  024bf08  fabs 2, 2
  024bf0c  rlwimi 3, 6, 2, 30, 30
  024bf10  fsub 7, 3, 1
  024bf14  rlwimi 3, 5, 4, 28, 28
  024bf18  fsub 8, 3, 1
  024bf1c  ori 5, 4, 0
  024bf20  rlwimi 5, 3, 2, 26, 28
  024bf24  slwi 3, 3, 2
  024bf28  clrldi 5, 5, 32
  024bf2c  fsel 4, 7, 2, 4
  024bf30  lfsx 3, 4, 3
  024bf34  lfs 2, 4(5)
  024bf38  fsel 5, 8, 6, 5
  024bf3c  fcmpu 0, 4, 1
  024bf40  bt 1, 0x24bf48
  024bf44  b 0x24c06c
  024bf48  fsubs 6, 5, 4
  024bf4c  fadds 4, 5, 4
  024bf50  addic 6, 1, 16
  024bf54  li 3, 2
  024bf58  addic 5, 6, 124
  024bf5c  addic 4, 6, 140
  024bf60  mtctr 3
  024bf64  fdivs 4, 6, 4
  024bf68  fmuls 6, 4, 4
  024bf6c  stfs 4, 152(1)
  024bf70  stfs 4, 144(1)
  024bf74  stfs 4, 148(1)
  024bf78  stfs 4, 140(1)
  024bf7c  lfs 7, 152(1)
  024bf80  lfs 8, 144(1)
  024bf84  lfs 9, 148(1)
  024bf88  fmuls 4, 6, 6
  024bf8c  fmuls 8, 8, 6
  024bf90  fmuls 7, 7, 4
  024bf94  fmuls 5, 4, 4
  024bf98  fmuls 4, 9, 4
  024bf9c  stfs 8, 144(1)
  024bfa0  fmuls 6, 7, 6
  024bfa4  stfs 4, 148(1)
  024bfa8  stfs 6, 152(1)
  024bfac  lfs 4, 124(6)
  024bfb0  fmuls 4, 4, 5
  024bfb4  stfs 4, 140(6)
  024bfb8  lfs 4, 4(5)
  024bfbc  addic 6, 6, 8
  024bfc0  addic 5, 5, 8
  024bfc4  fmuls 4, 4, 5
  024bfc8  stfs 4, 4(4)
  024bfcc  addic 4, 4, 8
  024bfd0  bdnz 0x24bfac
  024bfd4  ori 7, 1, 0
  024bfd8  lis 6, 115
  024bfdc  li 8, 4
  024bfe0  addic 5, 7, 140
  024bfe4  addic 6, 6, 22752
  024bfe8  ori 4, 5, 0
  024bfec  mtctr 8
  024bff0  lfs 4, 140(7)
  024bff4  lfs 5, 0(6)
  024bff8  fmuls 4, 4, 5
  024bffc  lfs 5, 4(6)
  024c000  addic 6, 6, 8
  024c004  stfs 4, 140(7)
  024c008  lfs 4, 4(5)
  024c00c  addic 7, 7, 8
  024c010  fmuls 4, 4, 5
  024c014  stfs 4, 4(5)
  024c018  addic 5, 5, 8
  024c01c  bdnz 0x24bff0
  024c020  ori 5, 3, 0
  024c024  ori 3, 1, 0
  024c028  mtctr 5
  024c02c  lfs 4, 140(3)
  024c030  fadds 1, 1, 4
  024c034  addic 3, 3, 16
  024c038  lfs 4, 4(4)
  024c03c  lfs 5, 8(4)
  024c040  lfs 6, 12(4)
  024c044  addic 4, 4, 16
  024c048  fadds 1, 1, 4
  024c04c  fadds 1, 1, 5
  024c050  fadds 1, 1, 6
  024c054  bdnz 0x24c02c
  024c058  lis 3, 37
  024c05c  addi 3, 3, -17328
  024c060  lfs 4, 16(3)
  024c064  fadds 1, 1, 4
  024c068  fmadds 1, 1, 3, 2
  024c06c  lis 3, 37
  024c070  lis 4, 114
  024c074  addi 28, 3, -17328
  024c078  lis 3, 114
  024c07c  addic 5, 30, 188
  024c080  lfs 2, 20(28)
  024c084  lfs 3, -3048(3)
  024c088  lfs 4, 24(28)
  024c08c  addic 3, 31, 72
  024c090  fmuls 2, 3, 2
  024c094  lfs 5, -3052(4)
  024c098  fmuls 4, 5, 4
  024c09c  fmr 3, 2
  024c0a0  bl 0x10a2e0
  024c0a4  nop
  024c0a8  lfs 1, 32(28)
  024c0ac  lfs 2, 28(28)
  024c0b0  lfs 3, 72(31)
  024c0b4  lfs 4, 36(28)
  024c0b8  fadds 2, 3, 2
  024c0bc  fsubs 5, 1, 3
  024c0c0  fsubs 6, 4, 3
  024c0c4  li 3, 0
  024c0c8  addic 4, 30, 96
  024c0cc  addic 5, 1, 112
  024c0d0  addic 6, 30, 64
  024c0d4  fsubs 1, 1, 2
  024c0d8  fsub 7, 3, 5
  024c0dc  fsubs 4, 4, 2
  024c0e0  fsub 9, 2, 1
  024c0e4  fsel 3, 7, 5, 3
  024c0e8  lfs 5, 40(28)
  024c0ec  lfs 7, 44(28)
  024c0f0  fsel 1, 9, 1, 2
  024c0f4  fsub 2, 6, 3
  024c0f8  fsub 9, 4, 1
  024c0fc  fsel 2, 2, 6, 3
  024c100  lfs 3, 48(28)
  024c104  lfs 6, 52(28)
  024c108  stw 3, 120(1)
  024c10c  ori 3, 31, 0
  024c110  fsel 1, 9, 4, 1
  024c114  fmuls 4, 2, 2
  024c118  fmuls 8, 1, 1
  024c11c  fmuls 9, 4, 2
  024c120  fmuls 10, 8, 1
  024c124  fmuls 11, 4, 9
  024c128  fmadds 2, 9, 5, 2
  024c12c  fmuls 9, 8, 10
  024c130  fmadds 1, 10, 5, 1
  024c134  fmuls 5, 4, 11
  024c138  fmadds 2, 11, 7, 2
  024c13c  fmuls 10, 8, 9
  024c140  fmadds 1, 9, 7, 1
  024c144  fmuls 4, 4, 5
  024c148  fmadds 2, 5, 3, 2
  024c14c  fmuls 5, 8, 10
  024c150  fmadds 1, 10, 3, 1
  024c154  fmadds 2, 4, 6, 2
  024c158  fmadds 1, 5, 6, 1
  024c15c  stfs 2, 116(1)
  024c160  lfs 31, 56(28)
  024c164  stfs 1, 112(1)
  024c168  fmr 1, 31
  024c16c  bl 0x101058
  024c170  nop
  024c174  addic 3, 30, 184
  024c178  bl 0x4fff60
  024c17c  nop
  024c180  cmpwi 3, 0
  024c184  bf 2, 0x24c1d8
  024c188  lwz 3, 176(30)
  024c18c  lwz 4, 180(30)
  024c190  slwi 3, 3, 2
  024c194  lfs 1, 20(31)
  024c198  slwi 4, 4, 4
  024c19c  extsw 3, 3
  024c1a0  lwzx 3, 29, 3
  024c1a4  lfs 2, 16(31)
  024c1a8  addc 3, 3, 4
  024c1ac  clrldi 3, 3, 32
  024c1b0  lfs 3, 20(3)
  024c1b4  lfs 4, 16(3)
  024c1b8  fsubs 1, 1, 3
  024c1bc  fsubs 2, 2, 4
  024c1c0  fmuls 1, 1, 1
  024c1c4  fmadds 1, 2, 2, 1
  024c1c8  fsqrts 1, 1
  024c1cc  fcmpu 0, 1, 31
  024c1d0  cror 6, 1, 2
  024c1d4  bt 6, 0x24c260
  024c1d8  lwz 3, 176(30)
  024c1dc  slwi 3, 3, 2
  024c1e0  extsw 3, 3
  024c1e4  lwzx 3, 29, 3
  024c1e8  lwz 3, 0(3)
  024c1ec  extsw 3, 3
  024c1f0  bl 0xfc620
  024c1f4  nop
  024c1f8  lwz 4, 176(30)
  024c1fc  lwz 5, 180(30)
  024c200  slwi 4, 4, 2
  024c204  addc 3, 5, 3
  024c208  extsw 4, 4
  024c20c  vspltisw 2, -1
  024c210  lis 6, 114
  024c214  lwzx 4, 29, 4
  024c218  vslw 2, 2, 2
  024c21c  lwz 4, 0(4)
  024c220  divw 5, 3, 4
  024c224  mullw 4, 5, 4
  024c228  lis 5, 37
  024c22c  subc 3, 3, 4
  024c230  addi 4, 5, -17328
  024c234  li 5, 60
  024c238  stw 3, 180(30)
  024c23c  li 3, -3056
  024c240  lvlx 3, 5, 4
  024c244  vspltw 3, 3, 0
  024c248  lvlx 4, 3, 6
  024c24c  li 3, 184
  024c250  vmaddfp 2, 4, 3, 2
  024c254  vctsxs 2, 2, 0
  024c258  vspltw 2, 2, 0
  024c25c  stvewx 2, 3, 30
  024c260  ori 3, 31, 0
  024c264  bl 0x24b2e8
  024c268  b 0x24c2d4
  024c26c  lis 3, 151
  024c270  lfs 1, 20(31)
  024c274  lfs 2, 16(31)
  024c278  addic 3, 3, -25376
  024c27c  lfs 3, 132(3)
  024c280  lfs 4, 128(3)
  024c284  fsubs 1, 1, 3
  024c288  fsubs 2, 2, 4
  024c28c  lis 3, 37
  024c290  addi 3, 3, -17328
  024c294  fmuls 1, 1, 1
  024c298  fmadds 1, 2, 2, 1
  024c29c  lfs 2, 64(3)
  024c2a0  fsqrts 1, 1
  024c2a4  fcmpu 0, 1, 2
  024c2a8  cror 6, 0, 2
  024c2ac  bt 6, 0x24c2d4
  024c2b0  li 3, 1
  024c2b4  lhz 4, 52(31)
  024c2b8  lwz 5, 36(31)
  024c2bc  rlwinm 4, 4, 0, 0, 30
  024c2c0  stb 3, 32(31)
  024c2c4  stb 3, 49(31)
  024c2c8  sth 4, 52(31)
  024c2cc  lwz 3, 16(5)
  024c2d0  stw 3, 148(31)
  024c2d4  ld 0, 240(1)
  024c2d8  mtlr 0
  024c2dc  lfd 31, 216(1)
  024c2e0  ld 28, 184(1)
  024c2e4  ld 29, 192(1)
  024c2e8  ld 30, 200(1)
  024c2ec  ld 31, 208(1)
  024c2f0  addi 1, 1, 224
  024c2f4  blr
