# game/update/moby670.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M670_0040bd38:   # 0x40bd38, 0x14 bytes
  040bd38  lis 3, 133
  040bd3c  lis 4, 1
  040bd40  addic 3, 3, 20628
  040bd44  stw 4, 72(3)
  040bd48  blr

M670_0040bd50:   # 0x40bd50, 0x3cc bytes
  040bd50  stdu 1, -320(1)
  040bd54  mflr 0
  040bd58  std 0, 336(1)
  040bd5c  stfd 27, 280(1)
  040bd60  stfd 28, 288(1)
  040bd64  stfd 29, 296(1)
  040bd68  stfd 30, 304(1)
  040bd6c  stfd 31, 312(1)
  040bd70  std 29, 256(1)
  040bd74  lis 29, 151
  040bd78  std 30, 264(1)
  040bd7c  fmr 3, 2
  040bd80  ori 30, 3, 0
  040bd84  std 28, 248(1)
  040bd88  addic 29, 29, -25376
  040bd8c  lwz 28, 120(3)
  040bd90  std 31, 272(1)
  040bd94  fmr 2, 1
  040bd98  ori 31, 6, 0
  040bd9c  lwz 4, 764(29)
  040bda0  cmpw 4, 3
  040bda4  fmr 1, 3
  040bda8  bf 2, 0x40c0e8
  040bdac  lhz 3, 782(29)
  040bdb0  cmpwi 3, 0
  040bdb4  bf 2, 0x40c0e8
  040bdb8  bl 0x5025e0
  040bdbc  nop
  040bdc0  lfs 3, 152(29)
  040bdc4  fmr 2, 1
  040bdc8  fmr 1, 3
  040bdcc  bl 0x502578
  040bdd0  nop
  040bdd4  addic 3, 1, 112
  040bdd8  stfs 1, 152(29)
  040bddc  addic 4, 30, 192
  040bde0  bl 0x5010c0
  040bde4  nop
  040bde8  addic 3, 1, 176
  040bdec  addic 4, 30, 64
  040bdf0  bl 0x500ca4
  040bdf4  nop
  040bdf8  lwz 3, 8332(29)
  040bdfc  cmpwi 3, 0
  040be00  bt 2, 0x40bf20
  040be04  lfs 11, 132(29)
  040be08  lfs 1, 20(30)
  040be0c  lfs 9, 128(29)
  040be10  fsubs 11, 11, 1
  040be14  lfs 1, 16(30)
  040be18  fsubs 9, 9, 1
  040be1c  lfs 1, 132(1)
  040be20  lfs 13, 136(29)
  040be24  lfs 2, 24(30)
  040be28  lfs 3, 128(1)
  040be2c  fsubs 13, 13, 2
  040be30  lfs 2, 116(1)
  040be34  fmuls 1, 1, 11
  040be38  lfs 4, 112(1)
  040be3c  fmuls 3, 3, 11
  040be40  lfs 5, 148(1)
  040be44  lfs 7, 140(29)
  040be48  lfs 6, 136(1)
  040be4c  lfs 8, 144(1)
  040be50  fmuls 6, 6, 11
  040be54  lfs 10, 164(1)
  040be58  fmadds 1, 2, 9, 1
  040be5c  fmadds 2, 4, 9, 3
  040be60  lfs 3, 120(1)
  040be64  lfs 4, 160(1)
  040be68  lfs 12, 140(1)
  040be6c  fmadds 3, 3, 9, 6
  040be70  fmuls 12, 12, 11
  040be74  lfs 6, 152(1)
  040be78  lfs 0, 124(1)
  040be7c  fmadds 1, 5, 13, 1
  040be80  fmadds 2, 8, 13, 2
  040be84  lfs 8, 192(1)
  040be88  lfs 5, 168(1)
  040be8c  fmadds 6, 6, 13, 3
  040be90  fmadds 12, 0, 9, 12
  040be94  lfs 0, 156(1)
  040be98  fmadds 1, 10, 7, 1
  040be9c  fmadds 3, 4, 7, 2
  040bea0  lfs 2, 196(1)
  040bea4  lfs 4, 176(1)
  040bea8  lfs 10, 200(1)
  040beac  fmadds 5, 5, 7, 6
  040beb0  lfs 31, 180(1)
  040beb4  fmadds 6, 0, 13, 12
  040beb8  lfs 12, 172(1)
  040bebc  lfs 0, 184(1)
  040bec0  lfs 30, 208(1)
  040bec4  fmuls 8, 8, 1
  040bec8  lfs 29, 212(1)
  040becc  fmuls 2, 2, 1
  040bed0  fmuls 10, 10, 1
  040bed4  fmadds 7, 12, 7, 6
  040bed8  lfs 6, 216(1)
  040bedc  fmadds 4, 4, 3, 8
  040bee0  fmadds 2, 31, 3, 2
  040bee4  fmadds 8, 0, 3, 10
  040bee8  lfs 10, 224(1)
  040beec  lfs 12, 228(1)
  040bef0  lfs 0, 232(1)
  040bef4  fmadds 30, 30, 5, 4
  040bef8  fmadds 29, 29, 5, 2
  040befc  fmadds 27, 6, 5, 8
  040bf00  lfs 4, 188(1)
  040bf04  lfs 2, 204(1)
  040bf08  lfs 6, 220(1)
  040bf0c  lfs 8, 236(1)
  040bf10  fmadds 10, 10, 7, 30
  040bf14  fmadds 12, 12, 7, 29
  040bf18  fmadds 0, 0, 7, 27
  040bf1c  b 0x40c0a4
  040bf20  lwz 3, 412(29)
  040bf24  lfs 3, 368(28)
  040bf28  lfs 1, 372(28)
  040bf2c  lfs 5, 376(28)
  040bf30  cmpwi 3, 1
  040bf34  lfs 7, 380(28)
  040bf38  bt 1, 0x40c004
  040bf3c  lfs 1, 128(29)
  040bf40  lfs 2, 16(30)
  040bf44  fsubs 1, 1, 2
  040bf48  stfs 1, 368(28)
  040bf4c  lfs 2, 132(29)
  040bf50  lfs 3, 20(30)
  040bf54  fsubs 2, 2, 3
  040bf58  stfs 2, 372(28)
  040bf5c  lfs 3, 136(29)
  040bf60  lfs 4, 24(30)
  040bf64  fsubs 3, 3, 4
  040bf68  stfs 3, 376(28)
  040bf6c  lfs 7, 140(29)
  040bf70  stfs 7, 380(28)
  040bf74  lfs 4, 128(1)
  040bf78  lfs 5, 132(1)
  040bf7c  lfs 6, 112(1)
  040bf80  fmuls 4, 4, 2
  040bf84  lfs 8, 136(1)
  040bf88  fmuls 5, 5, 2
  040bf8c  lfs 9, 116(1)
  040bf90  lfs 10, 140(1)
  040bf94  fmuls 8, 8, 2
  040bf98  lfs 11, 120(1)
  040bf9c  fmuls 2, 10, 2
  040bfa0  lfs 10, 144(1)
  040bfa4  lfs 12, 124(1)
  040bfa8  fmadds 4, 6, 1, 4
  040bfac  fmadds 5, 9, 1, 5
  040bfb0  lfs 6, 148(1)
  040bfb4  lfs 9, 152(1)
  040bfb8  fmadds 8, 11, 1, 8
  040bfbc  fmadds 1, 12, 1, 2
  040bfc0  lfs 11, 160(1)
  040bfc4  lfs 2, 156(1)
  040bfc8  fmadds 4, 10, 3, 4
  040bfcc  fmadds 5, 6, 3, 5
  040bfd0  lfs 6, 164(1)
  040bfd4  fmadds 8, 9, 3, 8
  040bfd8  fmadds 2, 2, 3, 1
  040bfdc  lfs 9, 168(1)
  040bfe0  lfs 10, 172(1)
  040bfe4  fmadds 3, 11, 7, 4
  040bfe8  fmadds 1, 6, 7, 5
  040bfec  fmadds 5, 9, 7, 8
  040bff0  fmadds 7, 10, 7, 2
  040bff4  stfs 3, 368(28)
  040bff8  stfs 1, 372(28)
  040bffc  stfs 5, 376(28)
  040c000  stfs 7, 380(28)
  040c004  lfs 2, 192(1)
  040c008  lfs 4, 196(1)
  040c00c  lfs 6, 176(1)
  040c010  fmuls 2, 2, 1
  040c014  lfs 8, 200(1)
  040c018  fmuls 4, 4, 1
  040c01c  lfs 9, 180(1)
  040c020  fmuls 8, 8, 1
  040c024  lfs 10, 184(1)
  040c028  lfs 11, 208(1)
  040c02c  lfs 12, 212(1)
  040c030  lfs 13, 216(1)
  040c034  fmadds 2, 6, 3, 2
  040c038  fmadds 4, 9, 3, 4
  040c03c  fmadds 6, 10, 3, 8
  040c040  lfs 8, 224(1)
  040c044  lfs 9, 228(1)
  040c048  lfs 10, 232(1)
  040c04c  lfs 31, 188(1)
  040c050  lfs 30, 204(1)
  040c054  lfs 29, 220(1)
  040c058  fmadds 2, 11, 5, 2
  040c05c  fmadds 4, 12, 5, 4
  040c060  fmadds 6, 13, 5, 6
  040c064  fmadds 2, 8, 7, 2
  040c068  fmadds 4, 9, 7, 4
  040c06c  lfs 8, 236(1)
  040c070  fmadds 6, 10, 7, 6
  040c074  lfs 0, 16(30)
  040c078  lfs 28, 20(30)
  040c07c  lfs 27, 24(30)
  040c080  lfs 9, 128(29)
  040c084  lfs 11, 132(29)
  040c088  lfs 13, 136(29)
  040c08c  fadds 10, 2, 0
  040c090  fadds 12, 4, 28
  040c094  fmr 4, 31
  040c098  fadds 0, 6, 27
  040c09c  fmr 6, 29
  040c0a0  fmr 2, 30
  040c0a4  fsubs 9, 10, 9
  040c0a8  lfs 10, 0(31)
  040c0ac  fmuls 1, 2, 1
  040c0b0  fsubs 2, 12, 11
  040c0b4  fsubs 11, 0, 13
  040c0b8  fadds 9, 9, 10
  040c0bc  fmadds 1, 4, 3, 1
  040c0c0  stfs 9, 240(29)
  040c0c4  lfs 3, 4(31)
  040c0c8  fmadds 1, 6, 5, 1
  040c0cc  fadds 2, 2, 3
  040c0d0  fmadds 1, 8, 7, 1
  040c0d4  stfs 2, 244(29)
  040c0d8  lfs 2, 8(31)
  040c0dc  fadds 2, 11, 2
  040c0e0  stfs 1, 252(29)
  040c0e4  stfs 2, 248(29)
  040c0e8  ld 0, 336(1)
  040c0ec  mtlr 0
  040c0f0  lfd 27, 280(1)
  040c0f4  lfd 28, 288(1)
  040c0f8  lfd 29, 296(1)
  040c0fc  lfd 30, 304(1)
  040c100  lfd 31, 312(1)
  040c104  ld 28, 248(1)
  040c108  ld 29, 256(1)
  040c10c  ld 30, 264(1)
  040c110  ld 31, 272(1)
  040c114  addi 1, 1, 320
  040c118  blr

UpdateMoby_670:   # 0x40c11c, 0x1d4 bytes
  040c11c  stdu 1, -272(1)
  040c120  mflr 0
  040c124  std 0, 288(1)
  040c128  stfd 28, 240(1)
  040c12c  stfd 29, 248(1)
  040c130  stfd 30, 256(1)
  040c134  stfd 31, 264(1)
  040c138  std 31, 232(1)
  040c13c  cmpwi 3, 0
  040c140  std 30, 224(1)
  040c144  std 29, 216(1)
  040c148  ori 31, 3, 0
  040c14c  bt 2, 0x40c2c4
  040c150  lwz 29, 120(31)
  040c154  cmpwi 29, 0
  040c158  bt 2, 0x40c2c4
  040c15c  lfs 30, 16(31)
  040c160  lfs 29, 20(31)
  040c164  ori 3, 31, 0
  040c168  lfs 28, 24(31)
  040c16c  lfs 31, 72(31)
  040c170  bl 0x3a82b8
  040c174  nop
  040c178  lfs 4, 16(31)
  040c17c  lfs 3, 20(31)
  040c180  fsubs 5, 4, 30
  040c184  lfs 2, 24(31)
  040c188  fsubs 6, 3, 29
  040c18c  lfs 1, 28(31)
  040c190  fsubs 7, 2, 28
  040c194  stfs 1, 124(1)
  040c198  stfs 5, 112(1)
  040c19c  stfs 6, 116(1)
  040c1a0  stfs 7, 120(1)
  040c1a4  lwz 3, 344(29)
  040c1a8  cmpwi 3, 12345
  040c1ac  bf 2, 0x40c2b0
  040c1b0  lwz 30, 336(29)
  040c1b4  cmpwi 30, -1
  040c1b8  bt 2, 0x40c2b0
  040c1bc  lis 3, 164
  040c1c0  slwi 4, 30, 8
  040c1c4  lwz 5, -28512(3)
  040c1c8  lwz 3, 340(29)
  040c1cc  addc 30, 5, 4
  040c1d0  cmpwi 3, -1
  040c1d4  clrldi 30, 30, 32
  040c1d8  bt 2, 0x40c1f4
  040c1dc  extsw 4, 3
  040c1e0  addic 5, 1, 128
  040c1e4  ori 3, 31, 0
  040c1e8  bl 0xf1114
  040c1ec  nop
  040c1f0  b 0x40c204
  040c1f4  stfs 4, 128(1)
  040c1f8  stfs 3, 132(1)
  040c1fc  stfs 2, 136(1)
  040c200  stfs 1, 140(1)
  040c204  addic 3, 1, 144
  040c208  addic 4, 31, 64
  040c20c  bl 0x500ca4
  040c210  nop
  040c214  lfs 1, 160(1)
  040c218  lfs 2, 356(29)
  040c21c  lfs 3, 144(1)
  040c220  fmuls 1, 1, 2
  040c224  lfs 4, 352(29)
  040c228  lfs 5, 164(1)
  040c22c  lfs 6, 176(1)
  040c230  fmuls 5, 5, 2
  040c234  lfs 7, 360(29)
  040c238  lfs 8, 148(1)
  040c23c  lfs 9, 192(1)
  040c240  lfs 10, 364(29)
  040c244  fmadds 1, 3, 4, 1
  040c248  lfs 3, 168(1)
  040c24c  fmadds 5, 8, 4, 5
  040c250  fmuls 2, 3, 2
  040c254  lfs 8, 180(1)
  040c258  lfs 3, 152(1)
  040c25c  fmadds 1, 6, 7, 1
  040c260  lfs 6, 196(1)
  040c264  fmadds 5, 8, 7, 5
  040c268  fmadds 2, 3, 4, 2
  040c26c  lfs 3, 128(1)
  040c270  lfs 4, 184(1)
  040c274  lfs 8, 200(1)
  040c278  fmadds 1, 9, 10, 1
  040c27c  fmadds 5, 6, 10, 5
  040c280  fmadds 2, 4, 7, 2
  040c284  fadds 1, 3, 1
  040c288  fmadds 2, 8, 10, 2
  040c28c  stfs 1, 16(30)
  040c290  lfs 1, 132(1)
  040c294  fadds 1, 1, 5
  040c298  stfs 1, 20(30)
  040c29c  lfs 1, 136(1)
  040c2a0  fadds 1, 1, 2
  040c2a4  stfs 1, 24(30)
  040c2a8  lfs 1, 140(1)
  040c2ac  stfs 1, 28(30)
  040c2b0  fmr 1, 31
  040c2b4  addic 6, 1, 112
  040c2b8  ori 3, 31, 0
  040c2bc  lfs 2, 72(31)
  040c2c0  bl 0x40bd50
  040c2c4  ld 0, 288(1)
  040c2c8  mtlr 0
  040c2cc  lfd 28, 240(1)
  040c2d0  lfd 29, 248(1)
  040c2d4  lfd 30, 256(1)
  040c2d8  lfd 31, 264(1)
  040c2dc  ld 29, 216(1)
  040c2e0  ld 30, 224(1)
  040c2e4  ld 31, 232(1)
  040c2e8  addi 1, 1, 272
  040c2ec  blr
