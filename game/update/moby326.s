# game/update/moby326.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MOBY326:   # 0x1bb84, 0x14 bytes
  001bb84  lis 3, 114
  001bb88  lis 4, 1
  001bb8c  addic 3, 3, -12332
  001bb90  stw 4, 72(3)
  001bb94  blr

M326_0001bbd8:   # 0x1bbd8, 0x350 bytes
  001bbd8  stdu 1, -224(1)
  001bbdc  mflr 0
  001bbe0  std 0, 240(1)
  001bbe4  stfd 29, 200(1)
  001bbe8  stfd 30, 208(1)
  001bbec  stfd 31, 216(1)
  001bbf0  std 30, 184(1)
  001bbf4  lwz 30, 120(3)
  001bbf8  std 31, 192(1)
  001bbfc  lis 4, 2
  001bc00  ori 31, 3, 0
  001bc04  addi 4, 4, -17512
  001bc08  lwz 5, 112(30)
  001bc0c  lwz 6, 116(30)
  001bc10  lfs 1, 112(30)
  001bc14  lfs 2, 116(30)
  001bc18  fabs 6, 1
  001bc1c  fabs 7, 2
  001bc20  rlwinm 6, 6, 3, 29, 29
  001bc24  lis 7, 115
  001bc28  addic 7, 7, 22784
  001bc2c  fsubs 1, 6, 7
  001bc30  stfs 1, 112(1)
  001bc34  lfs 2, 0(4)
  001bc38  lfs 1, 72(3)
  001bc3c  lfs 31, 4(4)
  001bc40  lwz 3, 112(1)
  001bc44  lfs 3, 112(1)
  001bc48  rlwimi 6, 3, 2, 30, 30
  001bc4c  fsub 5, 3, 2
  001bc50  ori 3, 7, 0
  001bc54  fsub 8, 3, 2
  001bc58  rlwimi 6, 5, 4, 28, 28
  001bc5c  rlwimi 3, 6, 2, 26, 28
  001bc60  slwi 4, 6, 2
  001bc64  clrldi 3, 3, 32
  001bc68  lfsx 4, 7, 4
  001bc6c  fsel 5, 5, 6, 7
  001bc70  lfs 3, 4(3)
  001bc74  fsel 6, 8, 7, 6
  001bc78  std 29, 176(1)
  001bc7c  std 28, 168(1)
  001bc80  std 27, 160(1)
  001bc84  fcmpu 0, 5, 2
  001bc88  bt 1, 0x1bc90
  001bc8c  b 0x1bda8
  001bc90  fsubs 7, 6, 5
  001bc94  fadds 5, 6, 5
  001bc98  addic 6, 1, 16
  001bc9c  li 3, 2
  001bca0  addic 5, 6, 100
  001bca4  addic 4, 6, 116
  001bca8  mtctr 3
  001bcac  fdivs 5, 7, 5
  001bcb0  fmuls 7, 5, 5
  001bcb4  stfs 5, 128(1)
  001bcb8  stfs 5, 120(1)
  001bcbc  stfs 5, 124(1)
  001bcc0  stfs 5, 116(1)
  001bcc4  lfs 8, 128(1)
  001bcc8  lfs 9, 120(1)
  001bccc  lfs 10, 124(1)
  001bcd0  fmuls 5, 7, 7
  001bcd4  fmuls 9, 9, 7
  001bcd8  fmuls 8, 8, 5
  001bcdc  fmuls 6, 5, 5
  001bce0  fmuls 5, 10, 5
  001bce4  stfs 9, 120(1)
  001bce8  fmuls 7, 8, 7
  001bcec  stfs 5, 124(1)
  001bcf0  stfs 7, 128(1)
  001bcf4  lfs 5, 100(6)
  001bcf8  fmuls 5, 5, 6
  001bcfc  stfs 5, 116(6)
  001bd00  lfs 5, 4(5)
  001bd04  addic 6, 6, 8
  001bd08  addic 5, 5, 8
  001bd0c  fmuls 5, 5, 6
  001bd10  stfs 5, 4(4)
  001bd14  addic 4, 4, 8
  001bd18  bdnz 0x1bcf4
  001bd1c  ori 7, 1, 0
  001bd20  lis 6, 115
  001bd24  li 8, 4
  001bd28  addic 5, 7, 116
  001bd2c  addic 6, 6, 22752
  001bd30  ori 4, 5, 0
  001bd34  mtctr 8
  001bd38  lfs 5, 116(7)
  001bd3c  lfs 6, 0(6)
  001bd40  fmuls 5, 5, 6
  001bd44  lfs 6, 4(6)
  001bd48  addic 6, 6, 8
  001bd4c  stfs 5, 116(7)
  001bd50  lfs 5, 4(5)
  001bd54  addic 7, 7, 8
  001bd58  fmuls 5, 5, 6
  001bd5c  stfs 5, 4(5)
  001bd60  addic 5, 5, 8
  001bd64  bdnz 0x1bd38
  001bd68  ori 5, 3, 0
  001bd6c  ori 3, 1, 0
  001bd70  mtctr 5
  001bd74  lfs 5, 116(3)
  001bd78  fadds 2, 2, 5
  001bd7c  addic 3, 3, 16
  001bd80  lfs 5, 4(4)
  001bd84  lfs 6, 8(4)
  001bd88  lfs 7, 12(4)
  001bd8c  addic 4, 4, 16
  001bd90  fadds 2, 2, 5
  001bd94  fadds 2, 2, 6
  001bd98  fadds 2, 2, 7
  001bd9c  bdnz 0x1bd74
  001bda0  fadds 2, 2, 31
  001bda4  fmadds 2, 2, 4, 3
  001bda8  fmr 3, 1
  001bdac  fmr 1, 2
  001bdb0  fmr 2, 3
  001bdb4  bl 0x5025e0
  001bdb8  nop
  001bdbc  lis 3, 2
  001bdc0  addi 29, 3, -17512
  001bdc4  lis 28, 114
  001bdc8  lfs 2, 12(29)
  001bdcc  lfs 3, 16(29)
  001bdd0  fsubs 5, 2, 1
  001bdd4  lfs 4, 8(29)
  001bdd8  fsubs 6, 3, 1
  001bddc  fadds 4, 1, 4
  001bde0  lfs 8, 20(29)
  001bde4  lis 27, 114
  001bde8  addic 5, 30, 156
  001bdec  fsub 7, 1, 5
  001bdf0  fsubs 2, 2, 4
  001bdf4  fsubs 3, 3, 4
  001bdf8  fsel 1, 7, 5, 1
  001bdfc  fsub 7, 4, 2
  001be00  lfs 5, 24(29)
  001be04  lfs 10, 28(29)
  001be08  lfs 11, 148(30)
  001be0c  fsub 9, 6, 1
  001be10  fsel 2, 7, 2, 4
  001be14  lfs 4, 32(29)
  001be18  fsel 1, 9, 6, 1
  001be1c  lfs 9, 40(29)
  001be20  fsub 6, 3, 2
  001be24  fmuls 7, 1, 1
  001be28  fsel 2, 6, 3, 2
  001be2c  lfs 6, 44(29)
  001be30  lfs 12, -3052(28)
  001be34  fmuls 9, 12, 9
  001be38  fmuls 3, 7, 1
  001be3c  fmuls 13, 2, 2
  001be40  fmuls 0, 7, 3
  001be44  fmadds 1, 3, 8, 1
  001be48  fmuls 3, 11, 6
  001be4c  fmuls 6, 13, 2
  001be50  fmuls 30, 7, 0
  001be54  fmadds 1, 0, 5, 1
  001be58  fmuls 0, 13, 6
  001be5c  fmadds 2, 6, 8, 2
  001be60  fmuls 6, 7, 30
  001be64  fmadds 1, 30, 10, 1
  001be68  fmuls 8, 13, 0
  001be6c  fmadds 2, 0, 5, 2
  001be70  lfs 5, 36(29)
  001be74  fmadds 1, 6, 4, 1
  001be78  lfs 6, 68(31)
  001be7c  fmuls 7, 13, 8
  001be80  fmadds 2, 8, 10, 2
  001be84  fmuls 1, 3, 1
  001be88  fmuls 3, 11, 5
  001be8c  fmuls 5, 12, 31
  001be90  fmadds 2, 7, 4, 2
  001be94  fdivs 30, 1, 9
  001be98  fmuls 2, 3, 2
  001be9c  fmr 1, 6
  001bea0  lfs 3, 48(29)
  001bea4  lfs 29, 52(29)
  001bea8  lfs 7, -3048(27)
  001beac  fmuls 3, 7, 3
  001beb0  fmuls 4, 7, 29
  001beb4  fdivs 2, 2, 9
  001beb8  bl 0xff190
  001bebc  nop
  001bec0  stfs 1, 68(31)
  001bec4  addic 5, 30, 152
  001bec8  lfs 4, 56(29)
  001becc  lfs 5, 60(29)
  001bed0  lfs 1, 64(31)
  001bed4  lfs 6, -3048(27)
  001bed8  lfs 7, -3052(28)
  001bedc  fmuls 3, 6, 29
  001bee0  fmuls 4, 6, 4
  001bee4  fmuls 5, 7, 5
  001bee8  fmr 2, 30
  001beec  bl 0xff190
  001bef0  nop
  001bef4  stfs 1, 64(31)
  001bef8  ld 0, 240(1)
  001befc  mtlr 0
  001bf00  lfd 29, 200(1)
  001bf04  lfd 30, 208(1)
  001bf08  lfd 31, 216(1)
  001bf0c  ld 27, 160(1)
  001bf10  ld 28, 168(1)
  001bf14  ld 29, 176(1)
  001bf18  ld 30, 184(1)
  001bf1c  ld 31, 192(1)
  001bf20  addi 1, 1, 224
  001bf24  blr

M326_0001bf50:   # 0x1bf50, 0x68c bytes
  001bf50  stdu 1, -336(1)
  001bf54  mflr 0
  001bf58  std 0, 352(1)
  001bf5c  stfd 30, 320(1)
  001bf60  stfd 31, 328(1)
  001bf64  lis 5, 2
  001bf68  lis 6, 165
  001bf6c  sldi 4, 4, 2
  001bf70  std 31, 312(1)
  001bf74  addi 5, 5, -16600
  001bf78  std 29, 296(1)
  001bf7c  ori 31, 3, 0
  001bf80  addic 29, 6, 7136
  001bf84  extsw 3, 4
  001bf88  std 30, 304(1)
  001bf8c  lfs 1, 0(5)
  001bf90  lwz 30, 120(31)
  001bf94  fmr 30, 1
  001bf98  lwzx 29, 29, 3
  001bf9c  lwz 3, 180(30)
  001bfa0  lwz 4, 0(29)
  001bfa4  addic 4, 4, -1
  001bfa8  std 28, 288(1)
  001bfac  std 27, 280(1)
  001bfb0  cmpw 3, 4
  001bfb4  bf 0, 0x1bfe0
  001bfb8  slwi 6, 3, 4
  001bfbc  subc 5, 4, 3
  001bfc0  addc 4, 29, 6
  001bfc4  clrldi 4, 4, 32
  001bfc8  addic 5, 5, -1
  001bfcc  lfs 2, 28(4)
  001bfd0  cmpwi 5, 0
  001bfd4  addic 4, 4, 16
  001bfd8  fadds 1, 1, 2
  001bfdc  bt 1, 0x1bfc8
  001bfe0  lis 4, 2
  001bfe4  addi 4, 4, -16600
  001bfe8  lfs 2, 4(4)
  001bfec  lfs 31, 8(4)
  001bff0  fcmpu 0, 1, 2
  001bff4  cror 6, 0, 2
  001bff8  bt 6, 0x1c228
  001bffc  slwi 3, 3, 4
  001c000  lfs 1, 16(31)
  001c004  lfs 2, 20(31)
  001c008  addc 3, 29, 3
  001c00c  clrldi 3, 3, 32
  001c010  lfs 3, 16(3)
  001c014  lfs 4, 20(3)
  001c018  fsubs 1, 3, 1
  001c01c  fsubs 2, 4, 2
  001c020  lis 3, 115
  001c024  addic 3, 3, 22784
  001c028  fabs 3, 1
  001c02c  fabs 5, 2
  001c030  stfs 1, 204(1)
  001c034  stfs 2, 208(1)
  001c038  lfs 4, 72(31)
  001c03c  fsubs 1, 3, 5
  001c040  stfs 1, 212(1)
  001c044  lwz 4, 204(1)
  001c048  lfs 1, 204(1)
  001c04c  lwz 5, 208(1)
  001c050  lfs 2, 208(1)
  001c054  lwz 6, 212(1)
  001c058  rlwinm 5, 5, 3, 29, 29
  001c05c  fabs 6, 2
  001c060  lfs 2, 212(1)
  001c064  fabs 1, 1
  001c068  rlwimi 5, 6, 2, 30, 30
  001c06c  fsub 7, 2, 30
  001c070  fsub 8, 2, 30
  001c074  rlwimi 5, 4, 4, 28, 28
  001c078  ori 4, 3, 0
  001c07c  rlwimi 4, 5, 2, 26, 28
  001c080  slwi 5, 5, 2
  001c084  clrldi 4, 4, 32
  001c088  fsel 5, 7, 1, 5
  001c08c  lfsx 1, 3, 5
  001c090  fsel 3, 8, 6, 3
  001c094  lfs 2, 4(4)
  001c098  fcmpu 0, 5, 30
  001c09c  bt 1, 0x1c0a8
  001c0a0  fmr 1, 30
  001c0a4  b 0x1c1c0
  001c0a8  fsubs 6, 3, 5
  001c0ac  fadds 3, 3, 5
  001c0b0  addic 3, 1, 16
  001c0b4  li 7, 2
  001c0b8  addic 5, 3, 248
  001c0bc  addic 4, 3, 232
  001c0c0  mtctr 7
  001c0c4  fdivs 3, 6, 3
  001c0c8  fmuls 5, 3, 3
  001c0cc  stfs 3, 260(1)
  001c0d0  stfs 3, 252(1)
  001c0d4  stfs 3, 256(1)
  001c0d8  stfs 3, 248(1)
  001c0dc  lfs 7, 260(1)
  001c0e0  lfs 8, 252(1)
  001c0e4  lfs 9, 256(1)
  001c0e8  fmuls 6, 5, 5
  001c0ec  fmuls 8, 8, 5
  001c0f0  fmuls 7, 7, 6
  001c0f4  fmuls 3, 6, 6
  001c0f8  fmuls 6, 9, 6
  001c0fc  stfs 8, 252(1)
  001c100  fmuls 5, 7, 5
  001c104  stfs 6, 256(1)
  001c108  stfs 5, 260(1)
  001c10c  lfs 5, 232(3)
  001c110  fmuls 5, 5, 3
  001c114  stfs 5, 248(3)
  001c118  lfs 5, 4(4)
  001c11c  addic 4, 4, 8
  001c120  fmuls 5, 5, 3
  001c124  addic 3, 3, 8
  001c128  stfs 5, 4(5)
  001c12c  addic 5, 5, 8
  001c130  bdnz 0x1c10c
  001c134  li 5, 4
  001c138  ori 3, 1, 0
  001c13c  mtctr 5
  001c140  lis 4, 115
  001c144  addic 5, 3, 248
  001c148  addic 4, 4, 22752
  001c14c  ori 6, 5, 0
  001c150  lfs 3, 248(3)
  001c154  lfs 5, 0(4)
  001c158  fmuls 3, 3, 5
  001c15c  lfs 5, 4(4)
  001c160  addic 4, 4, 8
  001c164  stfs 3, 248(3)
  001c168  lfs 3, 4(5)
  001c16c  addic 3, 3, 8
  001c170  fmuls 3, 3, 5
  001c174  stfs 3, 4(5)
  001c178  addic 5, 5, 8
  001c17c  bdnz 0x1c150
  001c180  ori 3, 1, 0
  001c184  fmr 3, 30
  001c188  mtctr 7
  001c18c  lfs 5, 248(3)
  001c190  fadds 3, 3, 5
  001c194  lfs 5, 4(6)
  001c198  addic 3, 3, 16
  001c19c  lfs 6, 8(6)
  001c1a0  lfs 7, 12(6)
  001c1a4  addic 6, 6, 16
  001c1a8  fadds 3, 3, 5
  001c1ac  fadds 3, 3, 6
  001c1b0  fadds 3, 3, 7
  001c1b4  bdnz 0x1c18c
  001c1b8  fadds 3, 3, 31
  001c1bc  fmadds 1, 3, 1, 2
  001c1c0  lis 3, 2
  001c1c4  lis 27, 114
  001c1c8  fmr 2, 1
  001c1cc  addi 28, 3, -16600
  001c1d0  fmr 1, 4
  001c1d4  addic 5, 30, 136
  001c1d8  lfs 6, 16(28)
  001c1dc  lfs 3, 12(28)
  001c1e0  lfs 5, -3052(27)
  001c1e4  fmr 4, 6
  001c1e8  fmuls 5, 5, 31
  001c1ec  bl 0xff190
  001c1f0  nop
  001c1f4  lis 4, 114
  001c1f8  stfs 1, 72(31)
  001c1fc  lfs 1, 20(28)
  001c200  addic 3, 30, 148
  001c204  lfs 2, 24(28)
  001c208  lfs 3, -3052(27)
  001c20c  lfs 4, -3048(4)
  001c210  fmuls 1, 3, 1
  001c214  fmuls 2, 4, 2
  001c218  bl 0x109af0
  001c21c  nop
  001c220  lfs 1, 148(30)
  001c224  b 0x1c460
  001c228  lis 3, 2
  001c22c  addic 5, 1, 112
  001c230  addi 4, 3, -16600
  001c234  ori 3, 31, 0
  001c238  lfs 1, 28(4)
  001c23c  bl 0x1118d8
  001c240  nop
  001c244  lfs 1, 112(1)
  001c248  lfs 2, 16(31)
  001c24c  lfs 3, 116(1)
  001c250  lfs 4, 20(31)
  001c254  fsubs 1, 1, 2
  001c258  fsubs 2, 3, 4
  001c25c  lis 3, 115
  001c260  addic 3, 3, 22784
  001c264  fabs 4, 1
  001c268  fabs 5, 2
  001c26c  stfs 1, 192(1)
  001c270  stfs 2, 196(1)
  001c274  lfs 1, 72(31)
  001c278  fsubs 2, 4, 5
  001c27c  stfs 2, 200(1)
  001c280  lwz 4, 192(1)
  001c284  lfs 2, 192(1)
  001c288  lwz 5, 196(1)
  001c28c  lfs 3, 196(1)
  001c290  fabs 2, 2
  001c294  lwz 6, 200(1)
  001c298  rlwinm 5, 5, 3, 29, 29
  001c29c  fabs 6, 3
  001c2a0  lfs 3, 200(1)
  001c2a4  rlwimi 5, 6, 2, 30, 30
  001c2a8  fsub 7, 3, 30
  001c2ac  fsub 8, 3, 30
  001c2b0  rlwimi 5, 4, 4, 28, 28
  001c2b4  ori 4, 3, 0
  001c2b8  rlwimi 4, 5, 2, 26, 28
  001c2bc  slwi 5, 5, 2
  001c2c0  clrldi 4, 4, 32
  001c2c4  fsel 5, 7, 2, 5
  001c2c8  lfsx 2, 3, 5
  001c2cc  lfs 3, 4(4)
  001c2d0  fsel 4, 8, 6, 4
  001c2d4  fcmpu 0, 5, 30
  001c2d8  bt 1, 0x1c2e4
  001c2dc  fmr 2, 30
  001c2e0  b 0x1c3fc
  001c2e4  fsubs 6, 4, 5
  001c2e8  fadds 4, 4, 5
  001c2ec  addic 3, 1, 16
  001c2f0  li 6, 2
  001c2f4  addic 4, 3, 200
  001c2f8  addic 5, 3, 216
  001c2fc  mtctr 6
  001c300  fdivs 4, 6, 4
  001c304  fmuls 5, 4, 4
  001c308  stfs 4, 228(1)
  001c30c  stfs 4, 220(1)
  001c310  stfs 4, 224(1)
  001c314  stfs 4, 216(1)
  001c318  lfs 7, 228(1)
  001c31c  lfs 8, 220(1)
  001c320  lfs 9, 224(1)
  001c324  fmuls 6, 5, 5
  001c328  fmuls 8, 8, 5
  001c32c  fmuls 7, 7, 6
  001c330  fmuls 4, 6, 6
  001c334  fmuls 6, 9, 6
  001c338  stfs 8, 220(1)
  001c33c  fmuls 5, 7, 5
  001c340  stfs 6, 224(1)
  001c344  stfs 5, 228(1)
  001c348  lfs 5, 200(3)
  001c34c  fmuls 5, 5, 4
  001c350  stfs 5, 216(3)
  001c354  lfs 5, 4(4)
  001c358  addic 3, 3, 8
  001c35c  addic 4, 4, 8
  001c360  fmuls 5, 5, 4
  001c364  stfs 5, 4(5)
  001c368  addic 5, 5, 8
  001c36c  bdnz 0x1c348
  001c370  li 5, 4
  001c374  ori 3, 1, 0
  001c378  mtctr 5
  001c37c  lis 4, 115
  001c380  addic 5, 3, 216
  001c384  addic 4, 4, 22752
  001c388  ori 7, 5, 0
  001c38c  lfs 4, 216(3)
  001c390  lfs 5, 0(4)
  001c394  fmuls 4, 4, 5
  001c398  lfs 5, 4(4)
  001c39c  addic 4, 4, 8
  001c3a0  stfs 4, 216(3)
  001c3a4  lfs 4, 4(5)
  001c3a8  addic 3, 3, 8
  001c3ac  fmuls 4, 4, 5
  001c3b0  stfs 4, 4(5)
  001c3b4  addic 5, 5, 8
  001c3b8  bdnz 0x1c38c
  001c3bc  fmr 4, 30
  001c3c0  ori 3, 1, 0
  001c3c4  mtctr 6
  001c3c8  lfs 5, 216(3)
  001c3cc  fadds 4, 4, 5
  001c3d0  addic 3, 3, 16
  001c3d4  lfs 5, 4(7)
  001c3d8  lfs 6, 8(7)
  001c3dc  lfs 7, 12(7)
  001c3e0  addic 7, 7, 16
  001c3e4  fadds 4, 4, 5
  001c3e8  fadds 4, 4, 6
  001c3ec  fadds 4, 4, 7
  001c3f0  bdnz 0x1c3c8
  001c3f4  fadds 4, 4, 31
  001c3f8  fmadds 2, 4, 2, 3
  001c3fc  lis 3, 2
  001c400  lis 4, 114
  001c404  addi 28, 3, -16600
  001c408  addic 5, 30, 136
  001c40c  lfs 5, -3052(4)
  001c410  lfs 3, 12(28)
  001c414  lfs 4, 16(28)
  001c418  fmuls 5, 5, 31
  001c41c  bl 0xff190
  001c420  nop
  001c424  lis 4, 114
  001c428  stfs 1, 72(31)
  001c42c  lfs 2, 32(28)
  001c430  addic 3, 30, 148
  001c434  fmr 1, 30
  001c438  lfs 3, -3048(4)
  001c43c  fmuls 2, 3, 2
  001c440  bl 0x109af0
  001c444  nop
  001c448  lwz 3, 148(30)
  001c44c  lfs 1, 148(30)
  001c450  cmpwi 3, 0
  001c454  bf 2, 0x1c460
  001c458  li 3, 1
  001c45c  b 0x1c5b0
  001c460  lwz 3, 180(30)
  001c464  lfs 2, 20(31)
  001c468  slwi 3, 3, 4
  001c46c  lfs 3, 16(31)
  001c470  lfs 4, 24(31)
  001c474  addc 3, 29, 3
  001c478  clrldi 3, 3, 32
  001c47c  lfs 5, 20(3)
  001c480  lfs 6, 16(3)
  001c484  fsubs 2, 5, 2
  001c488  lfs 5, 24(3)
  001c48c  fsubs 3, 6, 3
  001c490  fsubs 4, 5, 4
  001c494  lfs 6, 28(3)
  001c498  fmuls 5, 2, 2
  001c49c  stfs 6, 124(30)
  001c4a0  lis 3, 2
  001c4a4  addi 4, 3, -16600
  001c4a8  fmadds 5, 3, 3, 5
  001c4ac  lwz 3, 180(30)
  001c4b0  fmadds 5, 4, 4, 5
  001c4b4  slwi 5, 3, 4
  001c4b8  addc 5, 29, 5
  001c4bc  fsqrts 5, 5
  001c4c0  clrldi 5, 5, 32
  001c4c4  fdivs 1, 1, 5
  001c4c8  fsub 6, 30, 5
  001c4cc  fsub 7, 30, 5
  001c4d0  fsub 8, 30, 5
  001c4d4  fsub 9, 5, 30
  001c4d8  fsub 10, 5, 30
  001c4dc  fsub 5, 5, 30
  001c4e0  fmuls 2, 1, 2
  001c4e4  fmuls 3, 1, 3
  001c4e8  fmuls 1, 1, 4
  001c4ec  fsel 4, 6, 30, 2
  001c4f0  fsel 6, 7, 30, 3
  001c4f4  fsel 7, 8, 30, 1
  001c4f8  fsel 2, 9, 4, 2
  001c4fc  fsel 3, 10, 6, 3
  001c500  fsel 1, 5, 7, 1
  001c504  stfs 2, 116(30)
  001c508  stfs 3, 112(30)
  001c50c  stfs 1, 120(30)
  001c510  lfs 1, 16(31)
  001c514  lfs 2, 20(31)
  001c518  fadds 1, 1, 3
  001c51c  lfs 3, 24(31)
  001c520  stfs 1, 16(31)
  001c524  lfs 4, 116(30)
  001c528  fadds 2, 2, 4
  001c52c  stfs 2, 20(31)
  001c530  lfs 4, 120(30)
  001c534  fadds 3, 3, 4
  001c538  stfs 3, 24(31)
  001c53c  lfs 4, 20(5)
  001c540  lfs 5, 16(5)
  001c544  fsubs 2, 2, 4
  001c548  fsubs 1, 1, 5
  001c54c  lfs 4, 24(5)
  001c550  fsubs 3, 3, 4
  001c554  fmuls 2, 2, 2
  001c558  fmadds 1, 1, 1, 2
  001c55c  lfs 2, 36(4)
  001c560  fmadds 1, 3, 3, 1
  001c564  fsqrts 1, 1
  001c568  fcmpu 0, 1, 2
  001c56c  cror 6, 1, 2
  001c570  bt 6, 0x1c5a4
  001c574  addic 3, 3, 1
  001c578  extsw 4, 3
  001c57c  stw 3, 180(30)
  001c580  lwz 5, 0(29)
  001c584  addic 5, 5, -1
  001c588  extsw 6, 5
  001c58c  subc 5, 5, 3
  001c590  subc 4, 6, 4
  001c594  sradi 4, 4, 63
  001c598  and 4, 4, 5
  001c59c  addc 3, 3, 4
  001c5a0  stw 3, 180(30)
  001c5a4  ori 3, 31, 0
  001c5a8  bl 0x1bbd8
  001c5ac  li 3, 0
  001c5b0  ld 0, 352(1)
  001c5b4  mtlr 0
  001c5b8  lfd 30, 320(1)
  001c5bc  lfd 31, 328(1)
  001c5c0  ld 27, 280(1)
  001c5c4  ld 28, 288(1)
  001c5c8  ld 29, 296(1)
  001c5cc  ld 30, 304(1)
  001c5d0  ld 31, 312(1)
  001c5d4  addi 1, 1, 336
  001c5d8  blr

M326_0001c618:   # 0x1c618, 0x4b8 bytes
  001c618  stdu 1, -208(1)
  001c61c  mflr 0
  001c620  std 0, 224(1)
  001c624  stfd 31, 200(1)
  001c628  std 31, 192(1)
  001c62c  lis 4, 2
  001c630  ori 31, 3, 0
  001c634  addi 5, 4, -14884
  001c638  li 6, 0
  001c63c  std 30, 184(1)
  001c640  lis 4, 51
  001c644  lwz 30, 120(31)
  001c648  lfs 31, 0(5)
  001c64c  li 5, 0
  001c650  std 29, 176(1)
  001c654  stw 6, 116(1)
  001c658  bl 0x10675c
  001c65c  nop
  001c660  ori 29, 3, 0
  001c664  addic 5, 30, 32
  001c668  ori 4, 29, 0
  001c66c  li 6, 0
  001c670  addic 7, 1, 112
  001c674  li 9, 0
  001c678  addic 8, 1, 116
  001c67c  ori 3, 31, 0
  001c680  li 10, 4
  001c684  bl 0x106840
  001c688  nop
  001c68c  lwz 4, 112(1)
  001c690  cmpwi 4, 1
  001c694  bt 2, 0x1ca98
  001c698  lbz 4, 32(31)
  001c69c  cmpwi 4, 6
  001c6a0  bt 2, 0x1ca98
  001c6a4  lwz 4, 32(29)
  001c6a8  lhz 4, 166(4)
  001c6ac  cmpwi 1, 4, 409
  001c6b0  cmpwi 4, 184
  001c6b4  cror 2, 2, 6
  001c6b8  bt 2, 0x1ca98
  001c6bc  cmpwi 4, 458
  001c6c0  lfs 1, 116(1)
  001c6c4  bf 2, 0x1c6dc
  001c6c8  lis 4, 2
  001c6cc  lis 5, 16672
  001c6d0  addi 4, 4, -14884
  001c6d4  lfs 1, 4(4)
  001c6d8  stw 5, 116(1)
  001c6dc  lfs 2, 32(30)
  001c6e0  cmpwi 3, 1
  001c6e4  fsubs 1, 2, 1
  001c6e8  fcmpu 1, 1, 31
  001c6ec  stfs 1, 32(30)
  001c6f0  bt 2, 0x1c6f8
  001c6f4  bt 5, 0x1c718
  001c6f8  li 3, 2
  001c6fc  li 4, 0
  001c700  ori 5, 31, 0
  001c704  bl 0x15d12c
  001c708  nop
  001c70c  li 3, 6
  001c710  stb 3, 32(31)
  001c714  b 0x1ca98
  001c718  cmpwi 3, 11
  001c71c  bt 2, 0x1ca98
  001c720  li 5, 180
  001c724  addic 4, 30, 96
  001c728  ori 3, 31, 0
  001c72c  stb 5, 103(30)
  001c730  bl 0x10c808
  001c734  nop
  001c738  lis 4, 17839
  001c73c  lwz 3, 28(29)
  001c740  lfs 1, 72(31)
  001c744  ori 4, 4, 57190
  001c748  cmpw 3, 4
  001c74c  bf 2, 0x1ca98
  001c750  lbz 3, 32(31)
  001c754  cmpwi 3, 5
  001c758  bt 2, 0x1ca98
  001c75c  lfs 2, 16(31)
  001c760  lfs 3, 0(29)
  001c764  lfs 4, 20(31)
  001c768  lfs 5, 4(29)
  001c76c  fsubs 2, 2, 3
  001c770  fsubs 3, 4, 5
  001c774  lis 3, 115
  001c778  addic 3, 3, 22784
  001c77c  fabs 5, 2
  001c780  fabs 4, 3
  001c784  stfs 2, 120(1)
  001c788  stfs 3, 124(1)
  001c78c  fsubs 2, 5, 4
  001c790  stfs 2, 128(1)
  001c794  lwz 4, 120(1)
  001c798  lfs 2, 120(1)
  001c79c  lwz 5, 124(1)
  001c7a0  lfs 3, 124(1)
  001c7a4  fabs 2, 2
  001c7a8  lwz 6, 128(1)
  001c7ac  rlwinm 5, 5, 3, 29, 29
  001c7b0  fabs 6, 3
  001c7b4  lfs 3, 128(1)
  001c7b8  rlwimi 5, 6, 2, 30, 30
  001c7bc  fsub 7, 3, 31
  001c7c0  fsub 8, 3, 31
  001c7c4  rlwimi 5, 4, 4, 28, 28
  001c7c8  ori 4, 3, 0
  001c7cc  rlwimi 4, 5, 2, 26, 28
  001c7d0  slwi 5, 5, 2
  001c7d4  clrldi 4, 4, 32
  001c7d8  fsel 4, 7, 2, 4
  001c7dc  lfsx 3, 3, 5
  001c7e0  fsel 5, 8, 6, 5
  001c7e4  lfs 2, 4(4)
  001c7e8  fcmpu 0, 4, 31
  001c7ec  bt 1, 0x1c7f4
  001c7f0  b 0x1c918
  001c7f4  fsubs 6, 5, 4
  001c7f8  fadds 4, 5, 4
  001c7fc  addic 6, 1, 16
  001c800  li 3, 2
  001c804  addic 4, 6, 132
  001c808  addic 5, 6, 116
  001c80c  mtctr 3
  001c810  fdivs 4, 6, 4
  001c814  fmuls 6, 4, 4
  001c818  stfs 4, 144(1)
  001c81c  stfs 4, 136(1)
  001c820  stfs 4, 140(1)
  001c824  stfs 4, 132(1)
  001c828  lfs 7, 144(1)
  001c82c  lfs 8, 136(1)
  001c830  lfs 9, 140(1)
  001c834  fmuls 4, 6, 6
  001c838  fmuls 8, 8, 6
  001c83c  fmuls 7, 7, 4
  001c840  fmuls 5, 4, 4
  001c844  fmuls 4, 9, 4
  001c848  stfs 8, 136(1)
  001c84c  fmuls 6, 7, 6
  001c850  stfs 4, 140(1)
  001c854  stfs 6, 144(1)
  001c858  lfs 4, 116(6)
  001c85c  fmuls 4, 4, 5
  001c860  stfs 4, 132(6)
  001c864  lfs 4, 4(5)
  001c868  addic 5, 5, 8
  001c86c  fmuls 4, 4, 5
  001c870  addic 6, 6, 8
  001c874  stfs 4, 4(4)
  001c878  addic 4, 4, 8
  001c87c  bdnz 0x1c858
  001c880  ori 7, 1, 0
  001c884  li 4, 4
  001c888  lis 6, 115
  001c88c  addic 5, 7, 132
  001c890  mtctr 4
  001c894  addic 6, 6, 22752
  001c898  ori 4, 5, 0
  001c89c  lfs 4, 132(7)
  001c8a0  lfs 5, 0(6)
  001c8a4  fmuls 4, 4, 5
  001c8a8  lfs 5, 4(6)
  001c8ac  addic 6, 6, 8
  001c8b0  stfs 4, 132(7)
  001c8b4  lfs 4, 4(5)
  001c8b8  addic 7, 7, 8
  001c8bc  fmuls 4, 4, 5
  001c8c0  stfs 4, 4(5)
  001c8c4  addic 5, 5, 8
  001c8c8  bdnz 0x1c89c
  001c8cc  ori 5, 3, 0
  001c8d0  ori 3, 1, 0
  001c8d4  mtctr 5
  001c8d8  lfs 4, 132(3)
  001c8dc  lfs 5, 4(4)
  001c8e0  fadds 4, 31, 4
  001c8e4  lfs 6, 8(4)
  001c8e8  lfs 31, 12(4)
  001c8ec  addic 3, 3, 16
  001c8f0  addic 4, 4, 16
  001c8f4  fadds 4, 4, 5
  001c8f8  fadds 4, 4, 6
  001c8fc  fadds 31, 4, 31
  001c900  bdnz 0x1c8d8
  001c904  lis 3, 2
  001c908  addi 3, 3, -14884
  001c90c  lfs 4, 8(3)
  001c910  fadds 31, 31, 4
  001c914  fmadds 31, 31, 3, 2
  001c918  fmr 2, 1
  001c91c  fmr 1, 31
  001c920  bl 0x5025e0
  001c924  nop
  001c928  lis 3, 2
  001c92c  addi 3, 3, -14884
  001c930  lfs 2, 16(3)
  001c934  lfs 3, 12(3)
  001c938  fsubs 5, 2, 1
  001c93c  lfs 4, 20(3)
  001c940  fadds 3, 1, 3
  001c944  fsubs 6, 4, 1
  001c948  lfs 7, 24(3)
  001c94c  fsub 8, 1, 5
  001c950  fsubs 2, 2, 3
  001c954  fsubs 4, 4, 3
  001c958  fsel 1, 8, 5, 1
  001c95c  fsub 5, 3, 2
  001c960  lfs 8, 28(3)
  001c964  fsub 10, 6, 1
  001c968  fsel 2, 5, 2, 3
  001c96c  lfs 3, 32(3)
  001c970  lfs 5, 36(3)
  001c974  lfs 9, 64(31)
  001c978  lfs 31, 44(3)
  001c97c  fabs 9, 9
  001c980  lfs 12, 40(3)
  001c984  fsel 1, 10, 6, 1
  001c988  fsub 6, 4, 2
  001c98c  fmuls 10, 1, 1
  001c990  fsel 2, 6, 4, 2
  001c994  fmuls 6, 10, 1
  001c998  fmuls 11, 2, 2
  001c99c  fmuls 4, 10, 6
  001c9a0  fmadds 1, 6, 7, 1
  001c9a4  fmuls 6, 11, 2
  001c9a8  fmuls 13, 10, 4
  001c9ac  fmadds 1, 4, 8, 1
  001c9b0  fmuls 4, 11, 6
  001c9b4  fmadds 2, 6, 7, 2
  001c9b8  fmr 6, 12
  001c9bc  fmuls 7, 10, 13
  001c9c0  fmadds 1, 13, 3, 1
  001c9c4  fmuls 10, 11, 4
  001c9c8  fmadds 2, 4, 8, 2
  001c9cc  fmadds 1, 7, 5, 1
  001c9d0  fmuls 4, 11, 10
  001c9d4  fmadds 2, 10, 3, 2
  001c9d8  fmuls 31, 1, 31
  001c9dc  fmadds 1, 4, 5, 2
  001c9e0  fabs 2, 31
  001c9e4  fmuls 1, 1, 6
  001c9e8  fcmpu 0, 9, 2
  001c9ec  cror 6, 1, 2
  001c9f0  bt 6, 0x1ca00
  001c9f4  li 3, 0
  001c9f8  stfs 31, 64(31)
  001c9fc  stw 3, 152(30)
  001ca00  lfs 3, 68(31)
  001ca04  fabs 2, 1
  001ca08  fabs 3, 3
  001ca0c  fcmpu 0, 3, 2
  001ca10  cror 6, 1, 2
  001ca14  bt 6, 0x1ca24
  001ca18  li 3, 0
  001ca1c  stfs 1, 68(31)
  001ca20  stw 3, 156(30)
  001ca24  lis 3, 2
  001ca28  li 5, 52
  001ca2c  vspltisw 2, -1
  001ca30  addi 4, 3, -14884
  001ca34  lis 3, 114
  001ca38  lis 6, 114
  001ca3c  li 7, -3056
  001ca40  vslw 2, 2, 2
  001ca44  lfs 1, 48(4)
  001ca48  lfs 2, -3052(3)
  001ca4c  li 8, 142
  001ca50  fmuls 1, 2, 1
  001ca54  li 9, 5
  001ca58  li 3, 1
  001ca5c  stfs 1, 148(30)
  001ca60  <unknown>
  001ca64  <unknown>
  001ca68  vspltw 3, 3, 0
  001ca6c  li 4, 0
  001ca70  ori 5, 31, 0
  001ca74  vmaddfp 2, 4, 3, 2
  001ca78  vctsxs 2, 2, 0
  001ca7c  vsplth 2, 2, 1
  001ca80  stvehx 2, 8, 30
  001ca84  lbz 6, 32(31)
  001ca88  stb 9, 32(31)
  001ca8c  stb 6, 188(31)
  001ca90  bl 0x15d12c
  001ca94  nop
  001ca98  li 5, 255
  001ca9c  addic 4, 30, 96
  001caa0  ori 3, 31, 0
  001caa4  stb 5, 164(31)
  001caa8  bl 0x10c9a0
  001caac  nop
  001cab0  ld 0, 224(1)
  001cab4  mtlr 0
  001cab8  lfd 31, 200(1)
  001cabc  ld 29, 176(1)
  001cac0  ld 30, 184(1)
  001cac4  ld 31, 192(1)
  001cac8  addi 1, 1, 208
  001cacc  blr

UpdateMoby_326:   # 0x1cb80, 0x1b48 bytes
  001cb80  stdu 1, -640(1)
  001cb84  mflr 0
  001cb88  std 0, 656(1)
  001cb8c  stfd 24, 576(1)
  001cb90  stfd 25, 584(1)
  001cb94  stfd 26, 592(1)
  001cb98  stfd 27, 600(1)
  001cb9c  stfd 28, 608(1)
  001cba0  stfd 29, 616(1)
  001cba4  stfd 30, 624(1)
  001cba8  stfd 31, 632(1)
  001cbac  std 31, 568(1)
  001cbb0  lis 4, 161
  001cbb4  ori 31, 3, 0
  001cbb8  std 30, 560(1)
  001cbbc  lwz 4, 1800(4)
  001cbc0  lwz 30, 120(3)
  001cbc4  std 29, 552(1)
  001cbc8  std 28, 544(1)
  001cbcc  std 27, 536(1)
  001cbd0  std 26, 528(1)
  001cbd4  std 25, 520(1)
  001cbd8  std 24, 512(1)
  001cbdc  cmpwi 4, 2
  001cbe0  bt 2, 0x1e678
  001cbe4  lis 3, 2
  001cbe8  addic 5, 1, 240
  001cbec  addi 4, 3, -13616
  001cbf0  ori 3, 31, 0
  001cbf4  lfs 1, 0(4)
  001cbf8  bl 0x1118d8
  001cbfc  nop
  001cc00  lwz 3, 172(30)
  001cc04  cmpwi 3, 0
  001cc08  bt 2, 0x1cc34
  001cc0c  lbz 4, 32(3)
  001cc10  cmpwi 4, 128
  001cc14  bf 0, 0x1cc34
  001cc18  lis 4, 2
  001cc1c  addic 5, 30, 208
  001cc20  addi 6, 4, -13616
  001cc24  li 4, 0
  001cc28  lfs 1, 4(6)
  001cc2c  bl 0x119a18
  001cc30  nop
  001cc34  ori 3, 31, 0
  001cc38  bl 0x1c618
  001cc3c  lis 28, 151
  001cc40  addic 28, 28, -25376
  001cc44  lbz 3, 8356(28)
  001cc48  cmpwi 3, 2
  001cc4c  bf 2, 0x1cc8c
  001cc50  lis 3, 2
  001cc54  lwz 4, 36(31)
  001cc58  addi 3, 3, -13616
  001cc5c  lfs 1, 8(3)
  001cc60  lfs 2, 36(4)
  001cc64  lwz 3, 172(30)
  001cc68  fmuls 2, 2, 1
  001cc6c  cmpwi 3, 0
  001cc70  stfs 2, 44(31)
  001cc74  bt 2, 0x1ccb0
  001cc78  lwz 4, 36(3)
  001cc7c  lfs 2, 36(4)
  001cc80  fmuls 1, 2, 1
  001cc84  stfs 1, 44(3)
  001cc88  b 0x1ccb0
  001cc8c  lwz 4, 36(31)
  001cc90  lwz 3, 172(30)
  001cc94  cmpwi 3, 0
  001cc98  lfs 1, 36(4)
  001cc9c  stfs 1, 44(31)
  001cca0  bt 2, 0x1ccb0
  001cca4  lwz 4, 36(3)
  001cca8  lfs 1, 36(4)
  001ccac  stfs 1, 44(3)
  001ccb0  lbz 3, 32(31)
  001ccb4  cmpwi 1, 3, 3
  001ccb8  cmpwi 3, 2
  001ccbc  cror 2, 2, 6
  001ccc0  bt 2, 0x1ccd4
  001ccc4  cmpwi 3, 4
  001ccc8  bt 2, 0x1ccd4
  001cccc  cmpwi 3, 5
  001ccd0  bf 2, 0x1ccfc
  001ccd4  lwz 3, 176(30)
  001ccd8  cmpwi 3, -1
  001ccdc  bf 2, 0x1cd50
  001cce0  li 3, 3
  001cce4  li 4, 4
  001cce8  ori 5, 31, 0
  001ccec  bl 0x15d12c
  001ccf0  nop
  001ccf4  stw 3, 176(30)
  001ccf8  b 0x1cd50
  001ccfc  lwz 3, 176(30)
  001cd00  cmpwi 3, -1
  001cd04  bt 2, 0x1cd48
  001cd08  sldi 4, 3, 7
  001cd0c  sldi 6, 3, 4
  001cd10  lis 5, 150
  001cd14  subc 4, 4, 6
  001cd18  addic 5, 5, 14176
  001cd1c  extsw 4, 4
  001cd20  addc 4, 5, 4
  001cd24  lwz 5, 136(4)
  001cd28  cmpw 5, 31
  001cd2c  bf 2, 0x1cd48
  001cd30  lbz 4, 116(4)
  001cd34  cmpwi 4, 0
  001cd38  bt 2, 0x1cd48
  001cd3c  extsw 3, 3
  001cd40  bl 0x15cdb0
  001cd44  nop
  001cd48  li 3, -1
  001cd4c  stw 3, 176(30)
  001cd50  lis 3, 151
  001cd54  lwz 3, -25488(3)
  001cd58  cmpwi 3, 12
  001cd5c  bf 2, 0x1cdd0
  001cd60  lis 4, 146
  001cd64  lwz 4, 28952(4)
  001cd68  cmpwi 4, 0
  001cd6c  bt 2, 0x1cdd0
  001cd70  lwz 4, 192(30)
  001cd74  cmpwi 4, 0
  001cd78  bf 2, 0x1cdd0
  001cd7c  lis 4, 149
  001cd80  addic 4, 4, 5056
  001cd84  lwz 5, 604(4)
  001cd88  cmpw 5, 31
  001cd8c  bf 2, 0x1cd98
  001cd90  li 5, 0
  001cd94  stw 5, 604(4)
  001cd98  lbz 4, 49(31)
  001cd9c  cmpwi 4, 0
  001cda0  bf 2, 0x1cdd0
  001cda4  lwz 3, 172(30)
  001cda8  cmpwi 3, 0
  001cdac  bt 2, 0x1cdc0
  001cdb0  bl 0xefb38
  001cdb4  nop
  001cdb8  li 3, 0
  001cdbc  stw 3, 172(30)
  001cdc0  ori 3, 31, 0
  001cdc4  bl 0xefb38
  001cdc8  nop
  001cdcc  b 0x1e678
  001cdd0  lwz 5, 192(30)
  001cdd4  cmpwi 5, 0
  001cdd8  bt 2, 0x1ce74
  001cddc  lis 4, 161
  001cde0  lbz 7, 176(31)
  001cde4  slwi 6, 3, 4
  001cde8  addic 4, 4, -13692
  001cdec  extsw 6, 6
  001cdf0  addc 4, 7, 4
  001cdf4  clrldi 4, 4, 32
  001cdf8  lbzx 4, 4, 6
  001cdfc  cmpwi 4, 255
  001ce00  bf 2, 0x1ce30
  001ce04  lwz 3, 172(30)
  001ce08  cmpwi 3, 0
  001ce0c  bt 2, 0x1ce20
  001ce10  bl 0xefb38
  001ce14  nop
  001ce18  li 3, 0
  001ce1c  stw 3, 172(30)
  001ce20  ori 3, 31, 0
  001ce24  bl 0xefb38
  001ce28  nop
  001ce2c  b 0x1e678
  001ce30  lis 4, 146
  001ce34  lwz 4, 29136(4)
  001ce38  cmpwi 4, 0
  001ce3c  bt 2, 0x1ce74
  001ce40  lwz 3, 172(30)
  001ce44  cmpwi 3, 0
  001ce48  bt 2, 0x1ce64
  001ce4c  ori 4, 3, 0
  001ce50  ori 3, 31, 0
  001ce54  bl 0x25ce40
  001ce58  nop
  001ce5c  li 3, 0
  001ce60  stw 3, 172(30)
  001ce64  ori 3, 31, 0
  001ce68  bl 0xefb38
  001ce6c  nop
  001ce70  b 0x1e678
  001ce74  lbz 4, 32(31)
  001ce78  cmpwi 4, 6
  001ce7c  cmpwi 1, 4, 5
  001ce80  cmpwi 6, 4, 4
  001ce84  cmpwi 7, 4, 3
  001ce88  bt 2, 0x1e2d0
  001ce8c  bt 6, 0x1e1a4
  001ce90  bt 26, 0x1ddac
  001ce94  bt 30, 0x1d2a8
  001ce98  cmpwi 4, 2
  001ce9c  bt 2, 0x1d15c
  001cea0  cmpwi 4, 1
  001cea4  cmpwi 1, 5, 0
  001cea8  bt 2, 0x1d08c
  001ceac  cmpwi 4, 0
  001ceb0  bf 2, 0x1e478
  001ceb4  li 3, 6
  001ceb8  li 4, 2
  001cebc  li 5, 0
  001cec0  lis 6, 16576
  001cec4  sth 3, 36(30)
  001cec8  stb 4, 40(30)
  001cecc  stb 5, 41(30)
  001ced0  stw 5, 148(30)
  001ced4  stw 5, 156(30)
  001ced8  lhz 3, 52(31)
  001cedc  stw 6, 32(30)
  001cee0  ori 6, 3, 65
  001cee4  stw 5, 152(30)
  001cee8  lwz 4, 160(30)
  001ceec  rlwimi 6, 5, 0, 19, 19
  001cef0  stw 5, 148(31)
  001cef4  extsw 3, 4
  001cef8  sth 6, 52(31)
  001cefc  bl 0x118020
  001cf00  nop
  001cf04  lwz 3, 160(30)
  001cf08  extsw 3, 3
  001cf0c  bl 0x118020
  001cf10  nop
  001cf14  lwz 3, 164(30)
  001cf18  extsw 3, 3
  001cf1c  bl 0x118020
  001cf20  nop
  001cf24  lhz 3, 50(31)
  001cf28  extsh 3, 3
  001cf2c  cmpwi 3, 128
  001cf30  bf 0, 0x1cf3c
  001cf34  li 3, 128
  001cf38  sth 3, 50(31)
  001cf3c  lwz 3, 172(30)
  001cf40  cmpwi 3, 0
  001cf44  bf 2, 0x1cf70
  001cf48  ori 3, 31, 0
  001cf4c  bl 0x25cd18
  001cf50  nop
  001cf54  li 4, 0
  001cf58  stw 3, 172(30)
  001cf5c  stb 4, 48(3)
  001cf60  lwz 3, 172(30)
  001cf64  lhz 4, 52(3)
  001cf68  ori 4, 4, 65
  001cf6c  sth 4, 52(3)
  001cf70  lwz 4, 160(30)
  001cf74  lis 3, 165
  001cf78  lwz 5, 192(30)
  001cf7c  slwi 4, 4, 2
  001cf80  addic 3, 3, 7136
  001cf84  extsw 4, 4
  001cf88  cmpwi 5, 0
  001cf8c  lwzx 3, 3, 4
  001cf90  lfs 1, 16(3)
  001cf94  stfs 1, 16(31)
  001cf98  lfs 1, 20(3)
  001cf9c  stfs 1, 20(31)
  001cfa0  lfs 1, 24(3)
  001cfa4  stfs 1, 24(31)
  001cfa8  lfs 1, 28(3)
  001cfac  stfs 1, 28(31)
  001cfb0  bt 2, 0x1d078
  001cfb4  lwz 3, 196(30)
  001cfb8  cmpwi 3, 0
  001cfbc  bf 2, 0x1d078
  001cfc0  lis 3, 2
  001cfc4  lis 29, 114
  001cfc8  addi 28, 3, -13616
  001cfcc  lfs 1, 12(28)
  001cfd0  lfs 2, -3056(29)
  001cfd4  fmuls 1, 2, 1
  001cfd8  fctiwz 1, 1
  001cfdc  stfd 1, 496(1)
  001cfe0  lfs 1, 16(28)
  001cfe4  lwz 3, 500(1)
  001cfe8  fmuls 1, 2, 1
  001cfec  extsw 3, 3
  001cff0  fctiwz 1, 1
  001cff4  stfd 1, 496(1)
  001cff8  lwz 4, 500(1)
  001cffc  extsw 4, 4
  001d000  bl 0xfe484
  001d004  nop
  001d008  lis 4, 146
  001d00c  lfs 1, -3056(29)
  001d010  lfs 2, 20(28)
  001d014  li 5, 10
  001d018  li 6, 10
  001d01c  fmuls 1, 1, 2
  001d020  lwz 4, 28976(4)
  001d024  addic 4, 4, -1
  001d028  extsw 7, 4
  001d02c  subc 6, 6, 4
  001d030  subc 5, 5, 7
  001d034  li 7, 0
  001d038  sradi 5, 5, 63
  001d03c  fctiwz 1, 1
  001d040  and 5, 5, 6
  001d044  addc 4, 4, 5
  001d048  li 5, 0
  001d04c  extsw 6, 4
  001d050  subc 5, 6, 5
  001d054  subc 6, 7, 4
  001d058  sradi 5, 5, 63
  001d05c  and 5, 5, 6
  001d060  stfd 1, 496(1)
  001d064  addc 4, 4, 5
  001d068  lwz 5, 500(1)
  001d06c  mullw 4, 4, 5
  001d070  addc 3, 3, 4
  001d074  stw 3, 196(30)
  001d078  li 3, 0
  001d07c  li 4, 1
  001d080  stw 3, 180(30)
  001d084  stb 4, 32(31)
  001d088  b 0x1e478
  001d08c  li 29, 0
  001d090  bt 6, 0x1d0bc
  001d094  lis 3, 146
  001d098  lwz 3, 28952(3)
  001d09c  cmpwi 3, 0
  001d0a0  bt 2, 0x1d0bc
  001d0a4  addic 3, 30, 196
  001d0a8  bl 0x4fff60
  001d0ac  nop
  001d0b0  cmpwi 3, 0
  001d0b4  bt 2, 0x1d0bc
  001d0b8  li 29, 1
  001d0bc  lwz 3, 128(30)
  001d0c0  cmpwi 3, -1
  001d0c4  bt 2, 0x1d0e4
  001d0c8  addic 5, 28, 128
  001d0cc  extsw 4, 3
  001d0d0  ori 3, 5, 0
  001d0d4  bl 0x110b70
  001d0d8  nop
  001d0dc  cmpwi 3, 0
  001d0e0  bf 2, 0x1d0ec
  001d0e4  cmpwi 29, 0
  001d0e8  bt 2, 0x1e478
  001d0ec  li 3, 22
  001d0f0  li 4, 1
  001d0f4  li 6, 7
  001d0f8  li 5, 255
  001d0fc  stb 3, 88(30)
  001d100  stb 4, 89(30)
  001d104  li 7, -66
  001d108  stb 6, 90(30)
  001d10c  lhz 4, 52(31)
  001d110  stb 5, 164(31)
  001d114  and 4, 4, 7
  001d118  lwz 3, 172(30)
  001d11c  cmpwi 3, 0
  001d120  sth 4, 52(31)
  001d124  bt 2, 0x1d13c
  001d128  li 4, -66
  001d12c  lhz 5, 52(3)
  001d130  and 4, 5, 4
  001d134  sth 4, 52(3)
  001d138  lhz 4, 52(31)
  001d13c  ori 3, 4, 4096
  001d140  lwz 5, 36(31)
  001d144  li 4, 2
  001d148  sth 3, 52(31)
  001d14c  lwz 3, 16(5)
  001d150  stb 4, 32(31)
  001d154  stw 3, 148(31)
  001d158  b 0x1e478
  001d15c  cmpwi 5, 0
  001d160  bf 2, 0x1d188
  001d164  lis 3, 149
  001d168  addic 3, 3, 5056
  001d16c  lwz 4, 604(3)
  001d170  cmpwi 4, 0
  001d174  bf 2, 0x1d188
  001d178  li 4, 0
  001d17c  stw 31, 604(3)
  001d180  stw 4, 608(3)
  001d184  lwz 5, 192(30)
  001d188  cmpwi 5, 0
  001d18c  bt 2, 0x1d284
  001d190  lis 3, 146
  001d194  vspltisw 3, 3
  001d198  lis 4, 2
  001d19c  vspltisw 2, -1
  001d1a0  li 5, 28976
  001d1a4  vspltisw 5, 5
  001d1a8  addi 4, 4, -13616
  001d1ac  li 6, 24
  001d1b0  lwz 7, 28976(3)
  001d1b4  li 8, 5
  001d1b8  vslw 2, 2, 2
  001d1bc  <unknown>
  001d1c0  lfs 1, 24(4)
  001d1c4  addic 7, 7, -3
  001d1c8  vsubuwm 3, 4, 3
  001d1cc  li 5, 5
  001d1d0  <unknown>
  001d1d4  extsw 3, 7
  001d1d8  lis 4, 114
  001d1dc  li 6, -3056
  001d1e0  vspltw 4, 4, 0
  001d1e4  subc 3, 8, 3
  001d1e8  subc 5, 5, 7
  001d1ec  sradi 3, 3, 63
  001d1f0  vcmpgtsw 7, 3, 5
  001d1f4  <unknown>
  001d1f8  lfs 2, -3056(4)
  001d1fc  and 3, 3, 5
  001d200  vmaddfp 2, 6, 4, 2
  001d204  vsel 3, 3, 5, 7
  001d208  fmuls 1, 2, 1
  001d20c  addc 3, 7, 3
  001d210  vspltisw 4, 0
  001d214  li 5, 0
  001d218  extsw 4, 3
  001d21c  subc 4, 4, 5
  001d220  li 5, 0
  001d224  vcmpgtsw 5, 4, 3
  001d228  sradi 4, 4, 63
  001d22c  subc 5, 5, 3
  001d230  vandc 3, 3, 5
  001d234  fctiwz 1, 1
  001d238  vctsxs 2, 2, 0
  001d23c  and 4, 4, 5
  001d240  vspltisw 5, -16
  001d244  addc 3, 3, 4
  001d248  lhz 4, 140(30)
  001d24c  extsh 4, 4
  001d250  stfd 1, 496(1)
  001d254  vrlw 6, 2, 5
  001d258  lwz 5, 500(1)
  001d25c  mullw 3, 3, 5
  001d260  vmulouh 2, 3, 2
  001d264  vmsumshm 3, 3, 6, 4
  001d268  cmpw 4, 3
  001d26c  vslw 3, 3, 5
  001d270  vadduwm 2, 3, 2
  001d274  bf 0, 0x1d284
  001d278  vsplth 2, 2, 1
  001d27c  li 3, 140
  001d280  stvehx 2, 3, 30
  001d284  ori 3, 31, 0
  001d288  lwz 4, 160(30)
  001d28c  extsw 4, 4
  001d290  bl 0x1bf50
  001d294  cmpwi 3, 0
  001d298  bt 2, 0x1e478
  001d29c  li 3, 3
  001d2a0  stb 3, 32(31)
  001d2a4  b 0x1e478
  001d2a8  cmpwi 3, 12
  001d2ac  bf 2, 0x1d2ec
  001d2b0  lis 3, 151
  001d2b4  addic 3, 3, -16064
  001d2b8  lbz 3, 11(3)
  001d2bc  cmpwi 3, 0
  001d2c0  bf 2, 0x1d2ec
  001d2c4  lis 3, 161
  001d2c8  addic 3, 3, 12
  001d2cc  lhz 3, 744(3)
  001d2d0  cmpwi 3, 0
  001d2d4  bf 2, 0x1d2ec
  001d2d8  li 3, 12002
  001d2dc  li 4, 93
  001d2e0  bl 0x7b310
  001d2e4  nop
  001d2e8  lwz 5, 192(30)
  001d2ec  lfs 2, 20(31)
  001d2f0  lfs 3, 132(28)
  001d2f4  lfs 1, 16(31)
  001d2f8  cmpwi 5, 0
  001d2fc  fsubs 3, 2, 3
  001d300  lfs 4, 128(28)
  001d304  fsubs 4, 1, 4
  001d308  fmuls 3, 3, 3
  001d30c  fmadds 3, 4, 4, 3
  001d310  fsqrts 3, 3
  001d314  bf 2, 0x1d394
  001d318  lis 3, 2
  001d31c  addi 3, 3, -13616
  001d320  lfs 4, 28(3)
  001d324  fcmpu 0, 3, 4
  001d328  cror 6, 1, 2
  001d32c  bt 6, 0x1d378
  001d330  lfs 3, 24(31)
  001d334  lfs 4, 136(28)
  001d338  lis 3, 2
  001d33c  fsubs 3, 3, 4
  001d340  addi 3, 3, -13616
  001d344  lfs 4, 32(3)
  001d348  fcmpu 0, 3, 4
  001d34c  cror 6, 0, 2
  001d350  bt 6, 0x1d378
  001d354  lis 3, 149
  001d358  addic 3, 3, 5056
  001d35c  lwz 4, 604(3)
  001d360  cmpwi 4, 0
  001d364  bf 2, 0x1d394
  001d368  li 4, 0
  001d36c  stw 31, 604(3)
  001d370  stw 4, 608(3)
  001d374  b 0x1d394
  001d378  lis 3, 149
  001d37c  addic 3, 3, 5056
  001d380  lwz 4, 604(3)
  001d384  cmpw 4, 31
  001d388  bf 2, 0x1d394
  001d38c  li 4, 0
  001d390  stw 4, 604(3)
  001d394  lfs 4, 244(1)
  001d398  lfs 3, 240(1)
  001d39c  fsubs 5, 2, 4
  001d3a0  fsubs 6, 1, 3
  001d3a4  lis 3, 2
  001d3a8  addi 3, 3, -13616
  001d3ac  fmuls 5, 5, 5
  001d3b0  fmadds 5, 6, 6, 5
  001d3b4  lfs 6, 36(3)
  001d3b8  fsqrts 5, 5
  001d3bc  fcmpu 0, 5, 6
  001d3c0  cror 6, 1, 2
  001d3c4  bt 6, 0x1d3e8
  001d3c8  lfs 5, 24(31)
  001d3cc  lfs 6, 248(1)
  001d3d0  lis 3, 2
  001d3d4  fsubs 5, 5, 6
  001d3d8  addi 3, 3, -13616
  001d3dc  lfs 6, 40(3)
  001d3e0  fcmpu 0, 5, 6
  001d3e4  bt 1, 0x1d3f4
  001d3e8  lwz 3, 192(30)
  001d3ec  cmpwi 3, 0
  001d3f0  bt 2, 0x1e478
  001d3f4  fsubs 1, 3, 1
  001d3f8  lis 3, 2
  001d3fc  fsubs 2, 4, 2
  001d400  addi 3, 3, -13616
  001d404  lis 29, 115
  001d408  addic 29, 29, 22784
  001d40c  fabs 4, 1
  001d410  fabs 5, 2
  001d414  stfs 1, 356(1)
  001d418  stfs 2, 360(1)
  001d41c  lwz 4, 356(1)
  001d420  lfs 2, 356(1)
  001d424  fsubs 1, 4, 5
  001d428  stfs 1, 364(1)
  001d42c  lfs 28, 44(3)
  001d430  fabs 1, 2
  001d434  lwz 3, 360(1)
  001d438  lfs 2, 72(31)
  001d43c  lfs 3, 360(1)
  001d440  rlwinm 3, 3, 3, 29, 29
  001d444  lwz 5, 364(1)
  001d448  fabs 6, 3
  001d44c  lfs 3, 364(1)
  001d450  rlwimi 3, 5, 2, 30, 30
  001d454  fsub 7, 3, 28
  001d458  rlwimi 3, 4, 4, 28, 28
  001d45c  fsub 8, 3, 28
  001d460  ori 4, 29, 0
  001d464  rlwimi 4, 3, 2, 26, 28
  001d468  slwi 3, 3, 2
  001d46c  clrldi 4, 4, 32
  001d470  fsel 5, 7, 1, 5
  001d474  lfsx 1, 29, 3
  001d478  fsel 4, 8, 6, 4
  001d47c  lfs 3, 4(4)
  001d480  fcmpu 0, 5, 28
  001d484  bt 1, 0x1d490
  001d488  fmr 1, 28
  001d48c  b 0x1d5b4
  001d490  fsubs 6, 4, 5
  001d494  fadds 4, 4, 5
  001d498  addic 3, 1, 16
  001d49c  li 6, 2
  001d4a0  addic 5, 3, 464
  001d4a4  addic 4, 3, 448
  001d4a8  mtctr 6
  001d4ac  fdivs 4, 6, 4
  001d4b0  fmuls 5, 4, 4
  001d4b4  stfs 4, 476(1)
  001d4b8  stfs 4, 468(1)
  001d4bc  stfs 4, 472(1)
  001d4c0  stfs 4, 464(1)
  001d4c4  lfs 7, 476(1)
  001d4c8  lfs 8, 468(1)
  001d4cc  lfs 9, 472(1)
  001d4d0  fmuls 6, 5, 5
  001d4d4  fmuls 8, 8, 5
  001d4d8  fmuls 7, 7, 6
  001d4dc  fmuls 4, 6, 6
  001d4e0  fmuls 6, 9, 6
  001d4e4  stfs 8, 468(1)
  001d4e8  fmuls 5, 7, 5
  001d4ec  stfs 6, 472(1)
  001d4f0  stfs 5, 476(1)
  001d4f4  lfs 5, 448(3)
  001d4f8  fmuls 5, 5, 4
  001d4fc  stfs 5, 464(3)
  001d500  lfs 5, 4(4)
  001d504  addic 4, 4, 8
  001d508  fmuls 5, 5, 4
  001d50c  addic 3, 3, 8
  001d510  stfs 5, 4(5)
  001d514  addic 5, 5, 8
  001d518  bdnz 0x1d4f4
  001d51c  li 5, 4
  001d520  ori 3, 1, 0
  001d524  mtctr 5
  001d528  lis 4, 115
  001d52c  addic 5, 3, 464
  001d530  addic 4, 4, 22752
  001d534  ori 7, 5, 0
  001d538  lfs 4, 464(3)
  001d53c  lfs 5, 0(4)
  001d540  fmuls 4, 4, 5
  001d544  lfs 5, 4(4)
  001d548  addic 4, 4, 8
  001d54c  stfs 4, 464(3)
  001d550  lfs 4, 4(5)
  001d554  addic 3, 3, 8
  001d558  fmuls 4, 4, 5
  001d55c  stfs 4, 4(5)
  001d560  addic 5, 5, 8
  001d564  bdnz 0x1d538
  001d568  ori 3, 1, 0
  001d56c  fmr 4, 28
  001d570  mtctr 6
  001d574  lfs 5, 464(3)
  001d578  fadds 4, 4, 5
  001d57c  lfs 5, 4(7)
  001d580  addic 3, 3, 16
  001d584  lfs 6, 8(7)
  001d588  lfs 7, 12(7)
  001d58c  addic 7, 7, 16
  001d590  fadds 4, 4, 5
  001d594  fadds 4, 4, 6
  001d598  fadds 4, 4, 7
  001d59c  bdnz 0x1d574
  001d5a0  lis 3, 2
  001d5a4  addi 3, 3, -13616
  001d5a8  lfs 5, 48(3)
  001d5ac  fadds 4, 4, 5
  001d5b0  fmadds 1, 4, 1, 3
  001d5b4  lis 3, 2
  001d5b8  fmr 3, 1
  001d5bc  lis 28, 114
  001d5c0  fmr 1, 2
  001d5c4  addi 3, 3, -13616
  001d5c8  addic 5, 30, 136
  001d5cc  lfs 31, 52(3)
  001d5d0  lfs 30, 56(3)
  001d5d4  lfs 27, 48(3)
  001d5d8  lfs 5, -3052(28)
  001d5dc  fmr 2, 3
  001d5e0  fmr 3, 31
  001d5e4  fmr 4, 30
  001d5e8  fmuls 5, 5, 27
  001d5ec  bl 0xff190
  001d5f0  nop
  001d5f4  lfs 2, 244(1)
  001d5f8  lfs 3, 20(31)
  001d5fc  lfs 4, 240(1)
  001d600  fsubs 2, 2, 3
  001d604  lfs 3, 16(31)
  001d608  fsubs 3, 4, 3
  001d60c  fmuls 2, 2, 2
  001d610  fmadds 2, 3, 3, 2
  001d614  lfs 3, 24(31)
  001d618  lfs 5, 248(1)
  001d61c  stfs 1, 72(31)
  001d620  fsubs 3, 3, 5
  001d624  lfs 1, 68(31)
  001d628  lfs 4, -3052(28)
  001d62c  fsqrts 2, 2
  001d630  stfs 3, 348(1)
  001d634  fabs 6, 3
  001d638  fabs 5, 2
  001d63c  stfs 2, 344(1)
  001d640  lwz 3, 348(1)
  001d644  rlwinm 3, 3, 3, 29, 29
  001d648  fsubs 2, 5, 6
  001d64c  stfs 2, 352(1)
  001d650  lwz 4, 344(1)
  001d654  lfs 2, 344(1)
  001d658  lfs 3, 348(1)
  001d65c  lwz 5, 352(1)
  001d660  lfs 7, 352(1)
  001d664  fabs 2, 2
  001d668  rlwimi 3, 5, 2, 30, 30
  001d66c  fsub 8, 7, 28
  001d670  fabs 3, 3
  001d674  fsub 7, 7, 28
  001d678  rlwimi 3, 4, 4, 28, 28
  001d67c  ori 4, 29, 0
  001d680  rlwimi 4, 3, 2, 26, 28
  001d684  slwi 3, 3, 2
  001d688  clrldi 4, 4, 32
  001d68c  fsel 6, 8, 2, 6
  001d690  lfsx 2, 29, 3
  001d694  fsel 5, 7, 3, 5
  001d698  lfs 3, 4(4)
  001d69c  fcmpu 0, 6, 28
  001d6a0  bt 1, 0x1d6ac
  001d6a4  fmr 2, 28
  001d6a8  b 0x1d7c4
  001d6ac  fsubs 7, 5, 6
  001d6b0  fadds 5, 5, 6
  001d6b4  addic 3, 1, 16
  001d6b8  li 7, 2
  001d6bc  addic 4, 3, 416
  001d6c0  addic 5, 3, 432
  001d6c4  mtctr 7
  001d6c8  fdivs 5, 7, 5
  001d6cc  fmuls 6, 5, 5
  001d6d0  stfs 5, 444(1)
  001d6d4  stfs 5, 436(1)
  001d6d8  stfs 5, 440(1)
  001d6dc  stfs 5, 432(1)
  001d6e0  lfs 8, 444(1)
  001d6e4  lfs 9, 436(1)
  001d6e8  lfs 10, 440(1)
  001d6ec  fmuls 7, 6, 6
  001d6f0  fmuls 9, 9, 6
  001d6f4  fmuls 8, 8, 7
  001d6f8  fmuls 5, 7, 7
  001d6fc  fmuls 7, 10, 7
  001d700  stfs 9, 436(1)
  001d704  fmuls 6, 8, 6
  001d708  stfs 7, 440(1)
  001d70c  stfs 6, 444(1)
  001d710  lfs 6, 416(3)
  001d714  fmuls 6, 6, 5
  001d718  stfs 6, 432(3)
  001d71c  lfs 6, 4(4)
  001d720  addic 3, 3, 8
  001d724  addic 4, 4, 8
  001d728  fmuls 6, 6, 5
  001d72c  stfs 6, 4(5)
  001d730  addic 5, 5, 8
  001d734  bdnz 0x1d710
  001d738  li 5, 4
  001d73c  ori 3, 1, 0
  001d740  mtctr 5
  001d744  lis 4, 115
  001d748  addic 5, 3, 432
  001d74c  addic 4, 4, 22752
  001d750  ori 6, 5, 0
  001d754  lfs 5, 432(3)
  001d758  lfs 6, 0(4)
  001d75c  fmuls 5, 5, 6
  001d760  lfs 6, 4(4)
  001d764  addic 4, 4, 8
  001d768  stfs 5, 432(3)
  001d76c  lfs 5, 4(5)
  001d770  addic 3, 3, 8
  001d774  fmuls 5, 5, 6
  001d778  stfs 5, 4(5)
  001d77c  addic 5, 5, 8
  001d780  bdnz 0x1d754
  001d784  fmr 5, 28
  001d788  ori 3, 1, 0
  001d78c  mtctr 7
  001d790  lfs 6, 432(3)
  001d794  fadds 5, 5, 6
  001d798  addic 3, 3, 16
  001d79c  lfs 6, 4(6)
  001d7a0  lfs 7, 8(6)
  001d7a4  lfs 8, 12(6)
  001d7a8  addic 6, 6, 16
  001d7ac  fadds 5, 5, 6
  001d7b0  fadds 5, 5, 7
  001d7b4  fadds 5, 5, 8
  001d7b8  bdnz 0x1d790
  001d7bc  fadds 5, 5, 27
  001d7c0  fmadds 2, 5, 2, 3
  001d7c4  fmuls 5, 4, 27
  001d7c8  addic 5, 30, 156
  001d7cc  fmr 3, 31
  001d7d0  fmr 4, 30
  001d7d4  bl 0xff190
  001d7d8  nop
  001d7dc  li 4, 0
  001d7e0  stfs 1, 68(31)
  001d7e4  ori 3, 31, 0
  001d7e8  stw 4, 124(30)
  001d7ec  stw 4, 120(30)
  001d7f0  stw 4, 116(30)
  001d7f4  stw 4, 112(30)
  001d7f8  bl 0x1bbd8
  001d7fc  addic 3, 30, 140
  001d800  bl 0x4fffb4
  001d804  nop
  001d808  cmpwi 3, 0
  001d80c  bt 2, 0x1e478
  001d810  lhz 6, 188(30)
  001d814  addic 27, 1, 192
  001d818  lwz 4, 184(30)
  001d81c  ori 3, 31, 0
  001d820  addic 6, 6, 1
  001d824  ori 5, 27, 0
  001d828  extsw 4, 4
  001d82c  sth 6, 188(30)
  001d830  bl 0xf1114
  001d834  nop
  001d838  lwz 3, 184(30)
  001d83c  lfs 1, 272(1)
  001d840  cntlzw 3, 3
  001d844  lfs 31, 276(1)
  001d848  lfs 30, 280(1)
  001d84c  rlwinm 3, 3, 27, 31, 31
  001d850  stw 3, 184(30)
  001d854  lfs 29, 284(1)
  001d858  lwz 3, 192(30)
  001d85c  cmpwi 3, 0
  001d860  bt 2, 0x1d8ac
  001d864  lis 4, 2
  001d868  lis 3, 149
  001d86c  addi 26, 4, -13616
  001d870  addic 3, 3, 5056
  001d874  lfs 1, 60(26)
  001d878  lfs 31, 324(3)
  001d87c  lfs 26, 320(3)
  001d880  lfs 29, 332(3)
  001d884  lfs 30, 328(3)
  001d888  lfs 2, 64(26)
  001d88c  bl 0xfcbe8
  001d890  nop
  001d894  fadds 30, 30, 1
  001d898  fmr 1, 28
  001d89c  lfs 2, 68(26)
  001d8a0  bl 0xfe4f0
  001d8a4  nop
  001d8a8  fadds 1, 26, 1
  001d8ac  lfs 2, 196(1)
  001d8b0  lfs 3, 192(1)
  001d8b4  fsubs 31, 31, 2
  001d8b8  fsubs 1, 1, 3
  001d8bc  lfs 2, 200(1)
  001d8c0  stfs 29, 220(1)
  001d8c4  fsubs 2, 30, 2
  001d8c8  lwz 3, 192(30)
  001d8cc  cmpwi 3, 0
  001d8d0  fmuls 3, 31, 31
  001d8d4  stfs 31, 212(1)
  001d8d8  stfs 1, 208(1)
  001d8dc  stfs 2, 216(1)
  001d8e0  fmadds 3, 1, 1, 3
  001d8e4  fmadds 3, 2, 2, 3
  001d8e8  fsqrts 3, 3
  001d8ec  bt 2, 0x1d904
  001d8f0  lis 3, 2
  001d8f4  lfs 4, -3052(28)
  001d8f8  addi 3, 3, -13616
  001d8fc  lfs 5, 72(3)
  001d900  b 0x1d914
  001d904  lis 3, 2
  001d908  lfs 4, -3052(28)
  001d90c  addi 3, 3, -13616
  001d910  lfs 5, 76(3)
  001d914  fmuls 4, 4, 5
  001d918  fsub 5, 28, 3
  001d91c  fsub 6, 28, 3
  001d920  fsub 7, 3, 28
  001d924  fsub 8, 3, 28
  001d928  fsub 9, 28, 3
  001d92c  fdivs 4, 4, 3
  001d930  fsub 3, 3, 28
  001d934  fmuls 1, 1, 4
  001d938  fmuls 10, 31, 4
  001d93c  fmuls 2, 2, 4
  001d940  fsel 6, 6, 28, 1
  001d944  fsel 5, 5, 28, 10
  001d948  fsel 1, 8, 6, 1
  001d94c  fsel 4, 7, 5, 10
  001d950  fsel 5, 9, 28, 2
  001d954  fabs 6, 1
  001d958  fabs 7, 4
  001d95c  fsel 2, 3, 5, 2
  001d960  stfs 1, 332(1)
  001d964  stfs 4, 336(1)
  001d968  stfs 1, 208(1)
  001d96c  stfs 4, 212(1)
  001d970  fsubs 3, 6, 7
  001d974  stfs 3, 340(1)
  001d978  lwz 3, 332(1)
  001d97c  lfs 1, 332(1)
  001d980  lwz 4, 336(1)
  001d984  fabs 5, 1
  001d988  stfs 2, 216(1)
  001d98c  lfs 1, 336(1)
  001d990  rlwinm 4, 4, 3, 29, 29
  001d994  fabs 4, 1
  001d998  lfs 1, -3052(28)
  001d99c  lwz 5, 340(1)
  001d9a0  lfs 2, 340(1)
  001d9a4  rlwimi 4, 5, 2, 30, 30
  001d9a8  fsub 3, 2, 28
  001d9ac  fsub 8, 2, 28
  001d9b0  rlwimi 4, 3, 4, 28, 28
  001d9b4  ori 3, 29, 0
  001d9b8  rlwimi 3, 4, 2, 26, 28
  001d9bc  slwi 4, 4, 2
  001d9c0  clrldi 3, 3, 32
  001d9c4  fsel 5, 3, 5, 7
  001d9c8  lfsx 2, 29, 4
  001d9cc  fsel 4, 8, 4, 6
  001d9d0  lfs 3, 4(3)
  001d9d4  fcmpu 0, 5, 28
  001d9d8  bt 1, 0x1d9e4
  001d9dc  fmr 2, 28
  001d9e0  b 0x1dafc
  001d9e4  fsubs 6, 4, 5
  001d9e8  fadds 4, 4, 5
  001d9ec  addic 3, 1, 16
  001d9f0  li 7, 2
  001d9f4  addic 5, 3, 400
  001d9f8  addic 4, 3, 384
  001d9fc  mtctr 7
  001da00  fdivs 4, 6, 4
  001da04  fmuls 5, 4, 4
  001da08  stfs 4, 412(1)
  001da0c  stfs 4, 404(1)
  001da10  stfs 4, 408(1)
  001da14  stfs 4, 400(1)
  001da18  lfs 7, 412(1)
  001da1c  lfs 8, 404(1)
  001da20  lfs 9, 408(1)
  001da24  fmuls 6, 5, 5
  001da28  fmuls 8, 8, 5
  001da2c  fmuls 7, 7, 6
  001da30  fmuls 4, 6, 6
  001da34  fmuls 6, 9, 6
  001da38  stfs 8, 404(1)
  001da3c  fmuls 5, 7, 5
  001da40  stfs 6, 408(1)
  001da44  stfs 5, 412(1)
  001da48  lfs 5, 384(3)
  001da4c  fmuls 5, 5, 4
  001da50  stfs 5, 400(3)
  001da54  lfs 5, 4(4)
  001da58  addic 4, 4, 8
  001da5c  fmuls 5, 5, 4
  001da60  addic 3, 3, 8
  001da64  stfs 5, 4(5)
  001da68  addic 5, 5, 8
  001da6c  bdnz 0x1da48
  001da70  li 5, 4
  001da74  ori 3, 1, 0
  001da78  mtctr 5
  001da7c  lis 4, 115
  001da80  addic 5, 3, 400
  001da84  addic 4, 4, 22752
  001da88  ori 6, 5, 0
  001da8c  lfs 4, 400(3)
  001da90  lfs 5, 0(4)
  001da94  fmuls 4, 4, 5
  001da98  lfs 5, 4(4)
  001da9c  addic 4, 4, 8
  001daa0  stfs 4, 400(3)
  001daa4  lfs 4, 4(5)
  001daa8  addic 3, 3, 8
  001daac  fmuls 4, 4, 5
  001dab0  stfs 4, 4(5)
  001dab4  addic 5, 5, 8
  001dab8  bdnz 0x1da8c
  001dabc  ori 3, 1, 0
  001dac0  fmr 4, 28
  001dac4  mtctr 7
  001dac8  lfs 5, 400(3)
  001dacc  fadds 4, 4, 5
  001dad0  lfs 5, 4(6)
  001dad4  addic 3, 3, 16
  001dad8  lfs 6, 8(6)
  001dadc  lfs 7, 12(6)
  001dae0  addic 6, 6, 16
  001dae4  fadds 4, 4, 5
  001dae8  fadds 4, 4, 6
  001daec  fadds 4, 4, 7
  001daf0  bdnz 0x1dac8
  001daf4  fadds 4, 4, 27
  001daf8  fmadds 2, 4, 2, 3
  001dafc  lis 3, 2
  001db00  lis 26, 114
  001db04  fmr 4, 1
  001db08  addi 25, 3, -13616
  001db0c  fmr 1, 2
  001db10  addic 3, 1, 208
  001db14  ori 4, 27, 0
  001db18  ori 5, 31, 0
  001db1c  lfs 3, 80(25)
  001db20  lfs 5, -3056(26)
  001db24  fmuls 2, 5, 3
  001db28  fmr 3, 28
  001db2c  fctiwz 2, 2
  001db30  stfd 2, 496(1)
  001db34  lfs 2, 76(25)
  001db38  lwz 6, 500(1)
  001db3c  fmuls 2, 4, 2
  001db40  extsw 6, 6
  001db44  bl 0x1f240
  001db48  nop
  001db4c  li 3, 0
  001db50  li 4, 0
  001db54  ori 5, 31, 0
  001db58  bl 0x15d12c
  001db5c  nop
  001db60  lfs 1, 212(1)
  001db64  lfs 2, 208(1)
  001db68  fmuls 3, 1, 1
  001db6c  lfs 4, 216(1)
  001db70  lfs 30, 8(25)
  001db74  li 29, 0
  001db78  lfs 5, 192(1)
  001db7c  lfs 6, 196(1)
  001db80  fmadds 3, 2, 2, 3
  001db84  lfs 7, 200(1)
  001db88  fmadds 3, 4, 4, 3
  001db8c  fsqrts 3, 3
  001db90  fdivs 8, 30, 3
  001db94  fsub 9, 28, 3
  001db98  fsub 10, 28, 3
  001db9c  fsub 11, 28, 3
  001dba0  fsub 12, 3, 28
  001dba4  fsub 13, 3, 28
  001dba8  fsub 3, 3, 28
  001dbac  fmuls 2, 2, 8
  001dbb0  fmuls 1, 1, 8
  001dbb4  fmuls 4, 4, 8
  001dbb8  fsel 8, 9, 28, 2
  001dbbc  fsel 9, 10, 28, 1
  001dbc0  fsel 10, 11, 28, 4
  001dbc4  fsel 2, 12, 8, 2
  001dbc8  fsel 1, 13, 9, 1
  001dbcc  fsel 3, 3, 10, 4
  001dbd0  fadds 4, 5, 2
  001dbd4  fadds 5, 6, 1
  001dbd8  fadds 6, 7, 3
  001dbdc  stfs 2, 208(1)
  001dbe0  stfs 1, 212(1)
  001dbe4  stfs 3, 216(1)
  001dbe8  stfs 4, 192(1)
  001dbec  stfs 5, 196(1)
  001dbf0  stfs 6, 200(1)
  001dbf4  lfs 31, 84(25)
  001dbf8  fmr 1, 28
  001dbfc  lfs 2, -3052(28)
  001dc00  fmuls 2, 2, 31
  001dc04  bl 0xfe4f0
  001dc08  nop
  001dc0c  lfs 2, -3052(28)
  001dc10  stfs 1, 224(1)
  001dc14  fmr 1, 28
  001dc18  fmuls 2, 2, 31
  001dc1c  bl 0xfe4f0
  001dc20  nop
  001dc24  lfs 2, -3052(28)
  001dc28  stfs 1, 228(1)
  001dc2c  fmr 1, 28
  001dc30  fmuls 2, 2, 31
  001dc34  bl 0xfe4f0
  001dc38  nop
  001dc3c  li 3, 170
  001dc40  stfs 1, 232(1)
  001dc44  li 4, 240
  001dc48  bl 0xfe484
  001dc4c  nop
  001dc50  ori 25, 3, 0
  001dc54  li 3, 110
  001dc58  li 4, 180
  001dc5c  bl 0xfe484
  001dc60  nop
  001dc64  slwi 3, 3, 8
  001dc68  oris 4, 3, 32512
  001dc6c  li 3, 30
  001dc70  or 5, 4, 25
  001dc74  li 4, 70
  001dc78  extsw 25, 5
  001dc7c  bl 0xfe484
  001dc80  nop
  001dc84  extsw 3, 3
  001dc88  li 4, 170
  001dc8c  std 3, 496(1)
  001dc90  lfs 1, -3056(26)
  001dc94  lfd 2, 496(1)
  001dc98  fcfid 2, 2
  001dc9c  li 3, 120
  001dca0  frsp 2, 2
  001dca4  fadds 2, 2, 30
  001dca8  fmuls 1, 1, 2
  001dcac  fctiwz 1, 1
  001dcb0  stfd 1, 496(1)
  001dcb4  lwz 5, 500(1)
  001dcb8  extsw 24, 5
  001dcbc  bl 0xfe484
  001dcc0  nop
  001dcc4  ori 9, 3, 0
  001dcc8  addic 4, 1, 224
  001dccc  li 10, 1
  001dcd0  ori 3, 27, 0
  001dcd4  ori 5, 25, 0
  001dcd8  li 6, 255
  001dcdc  ori 7, 24, 0
  001dce0  li 8, 30
  001dce4  bl 0x121740
  001dce8  nop
  001dcec  addic 29, 29, 1
  001dcf0  cmpwi 29, 25
  001dcf4  bt 0, 0x1dbf8
  001dcf8  lwz 5, 192(30)
  001dcfc  li 3, 4
  001dd00  cmpwi 5, 0
  001dd04  ori 4, 3, 0
  001dd08  bt 2, 0x1dd44
  001dd0c  lis 3, 146
  001dd10  li 5, 11
  001dd14  li 6, 4
  001dd18  li 7, 2
  001dd1c  lwz 3, 28976(3)
  001dd20  extsw 8, 3
  001dd24  cmpwi 3, 7
  001dd28  subc 3, 8, 5
  001dd2c  subc 5, 6, 7
  001dd30  sradi 3, 3, 63
  001dd34  and 3, 3, 5
  001dd38  addc 3, 7, 3
  001dd3c  bt 0, 0x1dd44
  001dd40  li 3, 3
  001dd44  lhz 5, 188(30)
  001dd48  extsh 5, 5
  001dd4c  cmpw 5, 3
  001dd50  bt 0, 0x1dd70
  001dd54  lwz 3, 164(30)
  001dd58  cmpwi 3, -1
  001dd5c  bt 2, 0x1dd70
  001dd60  li 3, 0
  001dd64  sth 3, 188(30)
  001dd68  stb 4, 32(31)
  001dd6c  b 0x1e478
  001dd70  lis 3, 2
  001dd74  vspltisw 2, -1
  001dd78  li 4, -3056
  001dd7c  addi 3, 3, -13616
  001dd80  li 5, 88
  001dd84  vslw 2, 2, 2
  001dd88  <unknown>
  001dd8c  <unknown>
  001dd90  li 3, 140
  001dd94  vspltw 4, 4, 0
  001dd98  vmaddfp 2, 3, 4, 2
  001dd9c  vctsxs 2, 2, 0
  001dda0  vsplth 2, 2, 1
  001dda4  stvehx 2, 3, 30
  001dda8  b 0x1e478
  001ddac  lfs 1, 240(1)
  001ddb0  lfs 2, 16(31)
  001ddb4  lfs 3, 244(1)
  001ddb8  lfs 4, 20(31)
  001ddbc  fsubs 1, 1, 2
  001ddc0  lis 3, 2
  001ddc4  fsubs 2, 3, 4
  001ddc8  addi 3, 3, -13616
  001ddcc  lis 4, 115
  001ddd0  addic 4, 4, 22784
  001ddd4  fabs 4, 1
  001ddd8  fabs 5, 2
  001dddc  stfs 1, 320(1)
  001dde0  stfs 2, 324(1)
  001dde4  lfs 1, 72(31)
  001dde8  fsubs 2, 4, 5
  001ddec  stfs 2, 328(1)
  001ddf0  lwz 5, 320(1)
  001ddf4  lfs 29, 44(3)
  001ddf8  lfs 2, 320(1)
  001ddfc  lwz 3, 324(1)
  001de00  lfs 3, 324(1)
  001de04  fabs 2, 2
  001de08  lwz 6, 328(1)
  001de0c  rlwinm 3, 3, 3, 29, 29
  001de10  fabs 6, 3
  001de14  lfs 3, 328(1)
  001de18  rlwimi 3, 6, 2, 30, 30
  001de1c  fsub 7, 3, 29
  001de20  rlwimi 3, 5, 4, 28, 28
  001de24  fsub 8, 3, 29
  001de28  ori 5, 4, 0
  001de2c  rlwimi 5, 3, 2, 26, 28
  001de30  slwi 3, 3, 2
  001de34  clrldi 5, 5, 32
  001de38  fsel 5, 7, 2, 5
  001de3c  lfsx 2, 4, 3
  001de40  lfs 3, 4(5)
  001de44  fsel 4, 8, 6, 4
  001de48  fcmpu 0, 5, 29
  001de4c  bt 1, 0x1de58
  001de50  fmr 2, 29
  001de54  b 0x1df7c
  001de58  fsubs 6, 4, 5
  001de5c  fadds 4, 4, 5
  001de60  addic 3, 1, 16
  001de64  li 7, 2
  001de68  addic 4, 3, 352
  001de6c  addic 5, 3, 368
  001de70  mtctr 7
  001de74  fdivs 4, 6, 4
  001de78  fmuls 5, 4, 4
  001de7c  stfs 4, 380(1)
  001de80  stfs 4, 372(1)
  001de84  stfs 4, 376(1)
  001de88  stfs 4, 368(1)
  001de8c  lfs 7, 380(1)
  001de90  lfs 8, 372(1)
  001de94  lfs 9, 376(1)
  001de98  fmuls 6, 5, 5
  001de9c  fmuls 8, 8, 5
  001dea0  fmuls 7, 7, 6
  001dea4  fmuls 4, 6, 6
  001dea8  fmuls 6, 9, 6
  001deac  stfs 8, 372(1)
  001deb0  fmuls 5, 7, 5
  001deb4  stfs 6, 376(1)
  001deb8  stfs 5, 380(1)
  001debc  lfs 5, 352(3)
  001dec0  fmuls 5, 5, 4
  001dec4  stfs 5, 368(3)
  001dec8  lfs 5, 4(4)
  001decc  addic 3, 3, 8
  001ded0  addic 4, 4, 8
  001ded4  fmuls 5, 5, 4
  001ded8  stfs 5, 4(5)
  001dedc  addic 5, 5, 8
  001dee0  bdnz 0x1debc
  001dee4  li 5, 4
  001dee8  ori 3, 1, 0
  001deec  mtctr 5
  001def0  lis 4, 115
  001def4  addic 5, 3, 368
  001def8  addic 4, 4, 22752
  001defc  ori 6, 5, 0
  001df00  lfs 4, 368(3)
  001df04  lfs 5, 0(4)
  001df08  fmuls 4, 4, 5
  001df0c  lfs 5, 4(4)
  001df10  addic 4, 4, 8
  001df14  stfs 4, 368(3)
  001df18  lfs 4, 4(5)
  001df1c  addic 3, 3, 8
  001df20  fmuls 4, 4, 5
  001df24  stfs 4, 4(5)
  001df28  addic 5, 5, 8
  001df2c  bdnz 0x1df00
  001df30  fmr 4, 29
  001df34  ori 3, 1, 0
  001df38  mtctr 7
  001df3c  lfs 5, 368(3)
  001df40  fadds 4, 4, 5
  001df44  addic 3, 3, 16
  001df48  lfs 5, 4(6)
  001df4c  lfs 6, 8(6)
  001df50  lfs 7, 12(6)
  001df54  addic 6, 6, 16
  001df58  fadds 4, 4, 5
  001df5c  fadds 4, 4, 6
  001df60  fadds 4, 4, 7
  001df64  bdnz 0x1df3c
  001df68  lis 3, 2
  001df6c  addi 3, 3, -13616
  001df70  lfs 5, 48(3)
  001df74  fadds 4, 4, 5
  001df78  fmadds 2, 4, 2, 3
  001df7c  lis 3, 2
  001df80  lis 29, 114
  001df84  addi 3, 3, -13616
  001df88  addic 5, 30, 136
  001df8c  lfs 5, 48(3)
  001df90  lfs 3, 52(3)
  001df94  lfs 6, 56(3)
  001df98  lfs 7, -3052(29)
  001df9c  fmr 4, 6
  001dfa0  fmuls 5, 7, 5
  001dfa4  bl 0xff190
  001dfa8  nop
  001dfac  lwz 4, 164(30)
  001dfb0  lis 3, 165
  001dfb4  stfs 1, 72(31)
  001dfb8  slwi 4, 4, 2
  001dfbc  lhz 5, 190(30)
  001dfc0  addic 3, 3, 7136
  001dfc4  lfs 1, -3052(29)
  001dfc8  extsw 4, 4
  001dfcc  cmpwi 5, 0
  001dfd0  lwzx 3, 3, 4
  001dfd4  bt 2, 0x1dff8
  001dfd8  lfs 5, 16(3)
  001dfdc  lfs 6, 16(31)
  001dfe0  lfs 3, 20(3)
  001dfe4  lfs 4, 20(31)
  001dfe8  lfs 30, 24(3)
  001dfec  lfs 2, 24(31)
  001dff0  lfs 31, 28(3)
  001dff4  b 0x1e024
  001dff8  lwz 4, 0(3)
  001dffc  lfs 6, 16(31)
  001e000  slwi 4, 4, 4
  001e004  lfs 4, 20(31)
  001e008  lfs 2, 24(31)
  001e00c  addc 3, 3, 4
  001e010  clrldi 3, 3, 32
  001e014  lfs 5, 0(3)
  001e018  lfs 3, 4(3)
  001e01c  lfs 30, 8(3)
  001e020  lfs 31, 12(3)
  001e024  fsubs 27, 3, 4
  001e028  fsubs 28, 30, 2
  001e02c  fsubs 26, 5, 6
  001e030  lis 3, 2
  001e034  addi 3, 3, -13616
  001e038  fmuls 2, 27, 27
  001e03c  fmadds 2, 26, 26, 2
  001e040  fmadds 30, 28, 28, 2
  001e044  lfs 2, 92(3)
  001e048  fsqrts 30, 30
  001e04c  fcmpu 0, 30, 2
  001e050  cror 6, 0, 2
  001e054  bt 6, 0x1e08c
  001e058  lis 3, 2
  001e05c  lis 5, 114
  001e060  addi 4, 3, -13616
  001e064  addic 3, 30, 148
  001e068  lfs 2, 96(4)
  001e06c  lfs 3, 100(4)
  001e070  lfs 4, -3048(5)
  001e074  fmuls 1, 1, 2
  001e078  fmuls 2, 4, 3
  001e07c  bl 0x109af0
  001e080  nop
  001e084  lfs 1, 148(30)
  001e088  b 0x1e11c
  001e08c  lis 3, 2
  001e090  lis 5, 114
  001e094  fmr 1, 29
  001e098  addi 4, 3, -13616
  001e09c  addic 3, 30, 148
  001e0a0  lfs 2, 104(4)
  001e0a4  lfs 3, -3048(5)
  001e0a8  fmuls 2, 3, 2
  001e0ac  bl 0x109af0
  001e0b0  nop
  001e0b4  lwz 3, 148(30)
  001e0b8  lfs 1, 148(30)
  001e0bc  cmpwi 3, 0
  001e0c0  bf 2, 0x1e11c
  001e0c4  lis 3, 2
  001e0c8  li 4, 108
  001e0cc  vspltisw 2, -1
  001e0d0  addi 3, 3, -13616
  001e0d4  lis 5, 114
  001e0d8  li 6, -3056
  001e0dc  vslw 2, 2, 2
  001e0e0  <unknown>
  001e0e4  li 4, 140
  001e0e8  vspltw 3, 3, 0
  001e0ec  <unknown>
  001e0f0  lhz 3, 190(30)
  001e0f4  li 5, 3
  001e0f8  vmaddfp 2, 4, 3, 2
  001e0fc  cntlzw 3, 3
  001e100  rlwinm 3, 3, 27, 31, 31
  001e104  vctsxs 2, 2, 0
  001e108  vsplth 2, 2, 1
  001e10c  stvehx 2, 4, 30
  001e110  sth 3, 190(30)
  001e114  stb 5, 32(31)
  001e118  b 0x1e478
  001e11c  fdivs 1, 1, 30
  001e120  stfs 31, 124(30)
  001e124  ori 3, 31, 0
  001e128  fsub 2, 29, 30
  001e12c  fsub 3, 29, 30
  001e130  fsub 4, 29, 30
  001e134  fsub 5, 30, 29
  001e138  fsub 6, 30, 29
  001e13c  fsub 7, 30, 29
  001e140  fmuls 8, 1, 27
  001e144  fmuls 9, 1, 26
  001e148  fmuls 1, 1, 28
  001e14c  fsel 2, 2, 29, 8
  001e150  fsel 3, 3, 29, 9
  001e154  fsel 4, 4, 29, 1
  001e158  fsel 2, 5, 2, 8
  001e15c  fsel 3, 6, 3, 9
  001e160  fsel 1, 7, 4, 1
  001e164  stfs 2, 116(30)
  001e168  stfs 3, 112(30)
  001e16c  stfs 1, 120(30)
  001e170  lfs 1, 16(31)
  001e174  lfs 2, 20(31)
  001e178  fadds 1, 1, 3
  001e17c  lfs 3, 24(31)
  001e180  stfs 1, 16(31)
  001e184  lfs 1, 116(30)
  001e188  fadds 1, 2, 1
  001e18c  stfs 1, 20(31)
  001e190  lfs 1, 120(30)
  001e194  fadds 1, 3, 1
  001e198  stfs 1, 24(31)
  001e19c  bl 0x1bbd8
  001e1a0  b 0x1e478
  001e1a4  addic 3, 30, 142
  001e1a8  bl 0x4fffb4
  001e1ac  nop
  001e1b0  cmpwi 3, 0
  001e1b4  bt 2, 0x1e1c4
  001e1b8  lbz 3, 188(31)
  001e1bc  stb 3, 32(31)
  001e1c0  b 0x1e478
  001e1c4  lis 3, 2
  001e1c8  lfs 2, 148(30)
  001e1cc  lis 4, 114
  001e1d0  addi 3, 3, -13616
  001e1d4  lfs 1, 112(3)
  001e1d8  lfs 3, -3048(4)
  001e1dc  fnmsubs 2, 3, 1, 2
  001e1e0  stfs 2, 148(30)
  001e1e4  lfs 1, 44(3)
  001e1e8  fcmpu 0, 2, 1
  001e1ec  cror 6, 1, 2
  001e1f0  bt 6, 0x1e200
  001e1f4  li 3, 0
  001e1f8  fmr 2, 1
  001e1fc  stw 3, 148(30)
  001e200  lis 3, 2
  001e204  lfs 1, 72(31)
  001e208  addi 3, 3, -13616
  001e20c  lfs 3, 116(3)
  001e210  lfs 4, 120(3)
  001e214  fadds 3, 1, 3
  001e218  lfs 5, 124(3)
  001e21c  fsubs 6, 4, 1
  001e220  fsubs 4, 4, 3
  001e224  fsub 8, 1, 6
  001e228  fsubs 7, 5, 3
  001e22c  fsubs 5, 5, 1
  001e230  fsub 9, 3, 4
  001e234  fsel 1, 8, 6, 1
  001e238  fsel 3, 9, 4, 3
  001e23c  fsub 6, 5, 1
  001e240  lfs 4, 128(3)
  001e244  fsub 8, 7, 3
  001e248  fsel 1, 6, 5, 1
  001e24c  lfs 5, 132(3)
  001e250  lfs 6, 136(3)
  001e254  lfs 9, 140(3)
  001e258  fsel 3, 8, 7, 3
  001e25c  fmuls 7, 1, 1
  001e260  fmuls 8, 3, 3
  001e264  fmuls 10, 7, 1
  001e268  fmuls 11, 8, 3
  001e26c  fmuls 12, 7, 10
  001e270  fmadds 1, 10, 4, 1
  001e274  fmuls 10, 8, 11
  001e278  fmadds 3, 11, 4, 3
  001e27c  fmuls 4, 7, 12
  001e280  fmadds 1, 12, 5, 1
  001e284  fmuls 11, 8, 10
  001e288  fmadds 3, 10, 5, 3
  001e28c  fmuls 5, 7, 4
  001e290  fmadds 1, 4, 6, 1
  001e294  fmuls 4, 8, 11
  001e298  fmadds 3, 11, 6, 3
  001e29c  fmadds 1, 5, 9, 1
  001e2a0  fmadds 3, 4, 9, 3
  001e2a4  lfs 4, 16(31)
  001e2a8  fmuls 1, 1, 2
  001e2ac  lfs 5, 20(31)
  001e2b0  fmuls 2, 3, 2
  001e2b4  fneg 1, 1
  001e2b8  fneg 2, 2
  001e2bc  fadds 1, 5, 1
  001e2c0  fadds 2, 4, 2
  001e2c4  stfs 1, 20(31)
  001e2c8  stfs 2, 16(31)
  001e2cc  b 0x1e478
  001e2d0  lis 3, 149
  001e2d4  addic 3, 3, 5056
  001e2d8  lwz 4, 604(3)
  001e2dc  cmpw 4, 31
  001e2e0  bf 2, 0x1e2ec
  001e2e4  li 4, 0
  001e2e8  stw 4, 604(3)
  001e2ec  lwz 3, 172(30)
  001e2f0  cmpwi 3, 0
  001e2f4  bt 2, 0x1e310
  001e2f8  ori 4, 3, 0
  001e2fc  ori 3, 31, 0
  001e300  bl 0x25ce40
  001e304  nop
  001e308  li 3, 0
  001e30c  stw 3, 172(30)
  001e310  lis 3, 2
  001e314  li 7, 2
  001e318  addi 3, 3, -13616
  001e31c  li 11, 1
  001e320  li 12, -1
  001e324  li 6, 0
  001e328  lis 4, 161
  001e32c  lfs 1, 44(3)
  001e330  addic 5, 31, 16
  001e334  lfs 3, 112(3)
  001e338  addic 4, 4, 23856
  001e33c  lfs 4, 144(3)
  001e340  li 8, 20
  001e344  lfs 5, 148(3)
  001e348  li 9, 3
  001e34c  lfs 6, 152(3)
  001e350  li 10, 4
  001e354  lfs 7, 76(3)
  001e358  fmr 2, 1
  001e35c  std 7, 144(1)
  001e360  ori 3, 31, 0
  001e364  std 11, 160(1)
  001e368  std 11, 168(1)
  001e36c  std 12, 176(1)
  001e370  std 6, 184(1)
  001e374  bl 0x10e030
  001e378  nop
  001e37c  lwz 3, 192(30)
  001e380  cmpwi 3, 0
  001e384  bf 2, 0x1e39c
  001e388  ori 3, 31, 0
  001e38c  li 4, 0
  001e390  li 5, -1
  001e394  bl 0xfd8d0
  001e398  nop
  001e39c  lwz 3, 176(30)
  001e3a0  cmpwi 3, -1
  001e3a4  bt 2, 0x1e3e8
  001e3a8  sldi 4, 3, 7
  001e3ac  sldi 6, 3, 4
  001e3b0  lis 5, 150
  001e3b4  subc 4, 4, 6
  001e3b8  addic 5, 5, 14176
  001e3bc  extsw 4, 4
  001e3c0  addc 4, 5, 4
  001e3c4  lwz 5, 136(4)
  001e3c8  cmpw 5, 31
  001e3cc  bf 2, 0x1e3e8
  001e3d0  lbz 4, 116(4)
  001e3d4  cmpwi 4, 0
  001e3d8  bt 2, 0x1e3e8
  001e3dc  extsw 3, 3
  001e3e0  bl 0x15cdb0
  001e3e4  nop
  001e3e8  li 3, -1
  001e3ec  lwz 4, 192(30)
  001e3f0  cmpwi 4, 0
  001e3f4  stw 3, 176(30)
  001e3f8  bt 2, 0x1e468
  001e3fc  lis 3, 2
  001e400  lis 4, 114
  001e404  addi 3, 3, -13616
  001e408  lfs 1, 12(3)
  001e40c  lfs 2, -3056(4)
  001e410  fmuls 1, 2, 1
  001e414  fctiwz 1, 1
  001e418  stfd 1, 496(1)
  001e41c  lfs 1, 16(3)
  001e420  lwz 3, 500(1)
  001e424  fmuls 1, 2, 1
  001e428  extsw 3, 3
  001e42c  fctiwz 1, 1
  001e430  stfd 1, 496(1)
  001e434  lwz 4, 500(1)
  001e438  extsw 4, 4
  001e43c  bl 0xfe484
  001e440  nop
  001e444  stw 3, 196(30)
  001e448  lhz 4, 52(31)
  001e44c  li 3, 0
  001e450  ori 4, 4, 65
  001e454  rlwimi 4, 3, 0, 19, 19
  001e458  stw 3, 148(31)
  001e45c  stb 3, 32(31)
  001e460  sth 4, 52(31)
  001e464  b 0x1e478
  001e468  ori 3, 31, 0
  001e46c  bl 0xefb38
  001e470  nop
  001e474  b 0x1e678
  001e478  lis 3, 2
  001e47c  lfs 1, 144(30)
  001e480  addi 3, 3, -13616
  001e484  lfs 31, 116(3)
  001e488  lfs 30, 120(3)
  001e48c  fadds 1, 1, 31
  001e490  lfs 29, 124(3)
  001e494  lfs 28, 128(3)
  001e498  lfs 27, 132(3)
  001e49c  lfs 26, 136(3)
  001e4a0  lis 4, 114
  001e4a4  fsubs 2, 30, 1
  001e4a8  fsubs 3, 29, 1
  001e4ac  fsub 5, 1, 2
  001e4b0  fsel 1, 5, 2, 1
  001e4b4  fsub 2, 3, 1
  001e4b8  fsel 1, 2, 3, 1
  001e4bc  lfs 2, 24(31)
  001e4c0  lfs 25, 140(3)
  001e4c4  lfs 24, 156(3)
  001e4c8  fmuls 4, 1, 1
  001e4cc  fmuls 5, 4, 1
  001e4d0  fmuls 3, 4, 5
  001e4d4  fmadds 1, 5, 28, 1
  001e4d8  fmuls 5, 4, 3
  001e4dc  fmadds 1, 3, 27, 1
  001e4e0  fmuls 3, 4, 5
  001e4e4  fmadds 1, 5, 26, 1
  001e4e8  fmadds 1, 3, 25, 1
  001e4ec  fnmsubs 1, 1, 24, 2
  001e4f0  stfs 1, 24(31)
  001e4f4  lfs 1, 160(3)
  001e4f8  lfs 2, -3056(4)
  001e4fc  lfs 3, 164(3)
  001e500  fmuls 2, 2, 1
  001e504  lfs 4, 144(30)
  001e508  fmr 1, 4
  001e50c  fctidz 2, 2
  001e510  fcfid 2, 2
  001e514  frsp 2, 2
  001e518  fdivs 2, 3, 2
  001e51c  bl 0x502578
  001e520  nop
  001e524  fadds 2, 1, 31
  001e528  stfs 1, 144(30)
  001e52c  fsubs 3, 30, 2
  001e530  fsubs 4, 29, 2
  001e534  fsub 5, 2, 3
  001e538  fsel 2, 5, 3, 2
  001e53c  fsub 3, 4, 2
  001e540  fsel 1, 3, 4, 2
  001e544  lfs 3, 24(31)
  001e548  lfs 2, 16(31)
  001e54c  lwz 3, 172(30)
  001e550  cmpwi 3, 0
  001e554  fmuls 4, 1, 1
  001e558  fmuls 5, 4, 1
  001e55c  fmuls 6, 4, 5
  001e560  fmadds 1, 5, 28, 1
  001e564  fmuls 5, 4, 6
  001e568  fmadds 1, 6, 27, 1
  001e56c  fmuls 4, 4, 5
  001e570  fmadds 1, 5, 26, 1
  001e574  fmadds 1, 4, 25, 1
  001e578  fmadds 1, 1, 24, 3
  001e57c  stfs 1, 24(31)
  001e580  bt 2, 0x1e5f4
  001e584  stfs 2, 16(3)
  001e588  lfs 1, 20(31)
  001e58c  stfs 1, 20(3)
  001e590  lfs 1, 24(31)
  001e594  stfs 1, 24(3)
  001e598  lfs 1, 28(31)
  001e59c  stfs 1, 28(3)
  001e5a0  lwz 3, 172(30)
  001e5a4  lfs 1, 64(31)
  001e5a8  stfs 1, 64(3)
  001e5ac  lfs 1, 68(31)
  001e5b0  stfs 1, 68(3)
  001e5b4  lfs 1, 72(31)
  001e5b8  stfs 1, 72(3)
  001e5bc  lfs 1, 76(31)
  001e5c0  stfs 1, 76(3)
  001e5c4  lwz 3, 172(30)
  001e5c8  bl 0xf98d8
  001e5cc  nop
  001e5d0  lwz 3, 172(30)
  001e5d4  bl 0xf31a8
  001e5d8  nop
  001e5dc  lwz 3, 172(30)
  001e5e0  lhz 4, 52(3)
  001e5e4  ori 4, 4, 6
  001e5e8  sth 4, 52(3)
  001e5ec  lfs 1, 24(31)
  001e5f0  lfs 2, 16(31)
  001e5f4  lwz 3, 192(30)
  001e5f8  cmpwi 3, 0
  001e5fc  bf 2, 0x1e678
  001e600  lbz 3, 32(31)
  001e604  cmpwi 3, 1
  001e608  bf 1, 0x1e678
  001e60c  lbz 3, 49(31)
  001e610  cmpwi 3, 0
  001e614  bt 2, 0x1e678
  001e618  lis 3, 149
  001e61c  lfs 3, 20(31)
  001e620  addic 3, 3, 5056
  001e624  lfs 4, 324(3)
  001e628  lfs 5, 320(3)
  001e62c  fsubs 3, 3, 4
  001e630  fsubs 2, 2, 5
  001e634  lfs 4, 328(3)
  001e638  fsubs 1, 1, 4
  001e63c  lis 3, 2
  001e640  fmuls 3, 3, 3
  001e644  addi 3, 3, -13616
  001e648  fmadds 2, 2, 2, 3
  001e64c  fmadds 1, 1, 1, 2
  001e650  lfs 2, 168(3)
  001e654  fsqrts 1, 1
  001e658  fcmpu 0, 1, 2
  001e65c  cror 6, 1, 2
  001e660  bt 6, 0x1e678
  001e664  ori 3, 31, 0
  001e668  bl 0x106360
  001e66c  nop
  001e670  li 3, 24
  001e674  stb 3, 127(31)
  001e678  ld 0, 656(1)
  001e67c  mtlr 0
  001e680  lfd 24, 576(1)
  001e684  lfd 25, 584(1)
  001e688  lfd 26, 592(1)
  001e68c  lfd 27, 600(1)
  001e690  lfd 28, 608(1)
  001e694  lfd 29, 616(1)
  001e698  lfd 30, 624(1)
  001e69c  lfd 31, 632(1)
  001e6a0  ld 24, 512(1)
  001e6a4  ld 25, 520(1)
  001e6a8  ld 26, 528(1)
  001e6ac  ld 27, 536(1)
  001e6b0  ld 28, 544(1)
  001e6b4  ld 29, 552(1)
  001e6b8  ld 30, 560(1)
  001e6bc  ld 31, 568(1)
  001e6c0  addi 1, 1, 640
  001e6c4  blr
