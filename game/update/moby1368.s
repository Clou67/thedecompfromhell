# game/update/moby1368.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1368:   # 0x25bcf8, 0xaf4 bytes
  025bcf8  stdu 1, -384(1)
  025bcfc  mflr 0
  025bd00  std 0, 400(1)
  025bd04  stfd 28, 352(1)
  025bd08  stfd 29, 360(1)
  025bd0c  stfd 30, 368(1)
  025bd10  stfd 31, 376(1)
  025bd14  std 31, 344(1)
  025bd18  lbz 4, 32(3)
  025bd1c  std 30, 336(1)
  025bd20  ori 31, 3, 0
  025bd24  lwz 30, 120(3)
  025bd28  cmpwi 4, 0
  025bd2c  cmpwi 1, 4, -1
  025bd30  std 29, 328(1)
  025bd34  std 28, 320(1)
  025bd38  std 27, 312(1)
  025bd3c  std 26, 304(1)
  025bd40  cmpwi 6, 4, 1
  025bd44  bt 1, 0x25bd50
  025bd48  bf 5, 0x25c7b4
  025bd4c  b 0x25bd58
  025bd50  bf 25, 0x25c6d8
  025bd54  b 0x25c7b4
  025bd58  li 3, 0
  025bd5c  lis 29, 151
  025bd60  addic 29, 29, -25376
  025bd64  stb 3, 49(31)
  025bd68  lfs 4, 20(30)
  025bd6c  lfs 3, 16(30)
  025bd70  lfs 2, 212(29)
  025bd74  lfs 1, 208(29)
  025bd78  fsubs 5, 2, 4
  025bd7c  fsubs 6, 1, 3
  025bd80  lis 4, 38
  025bd84  sth 3, 50(31)
  025bd88  addi 3, 4, -17232
  025bd8c  fmuls 5, 5, 5
  025bd90  lfs 8, 4(3)
  025bd94  lfs 30, 0(3)
  025bd98  lfs 7, 216(29)
  025bd9c  fmadds 5, 6, 6, 5
  025bda0  fsqrts 6, 5
  025bda4  fsubs 5, 7, 30
  025bda8  fcmpu 0, 6, 8
  025bdac  cror 6, 1, 2
  025bdb0  bt 6, 0x25bde8
  025bdb4  fsubs 3, 3, 1
  025bdb8  lfs 6, 24(30)
  025bdbc  lis 3, 38
  025bdc0  fsubs 4, 4, 2
  025bdc4  fsubs 6, 6, 5
  025bdc8  addi 3, 3, -17232
  025bdcc  lfs 7, 8(3)
  025bdd0  fmadds 3, 3, 7, 1
  025bdd4  fmadds 4, 4, 7, 2
  025bdd8  fmadds 1, 6, 7, 5
  025bddc  stfs 3, 16(30)
  025bde0  stfs 4, 20(30)
  025bde4  stfs 1, 24(30)
  025bde8  lfs 1, 20(31)
  025bdec  lfs 2, 16(31)
  025bdf0  fsubs 5, 1, 4
  025bdf4  fsubs 6, 2, 3
  025bdf8  lis 3, 38
  025bdfc  addi 3, 3, -17232
  025be00  fmuls 5, 5, 5
  025be04  fmadds 5, 6, 6, 5
  025be08  lfs 6, 12(3)
  025be0c  fsqrts 5, 5
  025be10  fcmpu 0, 5, 6
  025be14  cror 6, 0, 2
  025be18  bt 6, 0x25c074
  025be1c  fsubs 2, 3, 2
  025be20  fsubs 1, 4, 1
  025be24  lis 3, 38
  025be28  addi 3, 3, -17232
  025be2c  lis 5, 115
  025be30  addic 5, 5, 22784
  025be34  fabs 4, 2
  025be38  fabs 5, 1
  025be3c  stfs 2, 240(1)
  025be40  stfs 1, 244(1)
  025be44  lwz 4, 240(1)
  025be48  lfs 2, 240(1)
  025be4c  fabs 2, 2
  025be50  fsubs 1, 4, 5
  025be54  stfs 1, 248(1)
  025be58  lfs 29, 16(3)
  025be5c  lwz 6, 244(1)
  025be60  lfs 1, 72(31)
  025be64  lfs 3, 244(1)
  025be68  lfs 31, 20(3)
  025be6c  rlwinm 6, 6, 3, 29, 29
  025be70  fabs 6, 3
  025be74  lwz 3, 248(1)
  025be78  lfs 3, 248(1)
  025be7c  rlwimi 6, 3, 2, 30, 30
  025be80  fsub 7, 3, 29
  025be84  ori 3, 5, 0
  025be88  fsub 8, 3, 29
  025be8c  rlwimi 6, 4, 4, 28, 28
  025be90  rlwimi 3, 6, 2, 26, 28
  025be94  slwi 4, 6, 2
  025be98  clrldi 3, 3, 32
  025be9c  fsel 5, 7, 2, 5
  025bea0  lfsx 2, 5, 4
  025bea4  fsel 4, 8, 6, 4
  025bea8  lfs 3, 4(3)
  025beac  fcmpu 0, 5, 29
  025beb0  bt 1, 0x25bebc
  025beb4  fmr 2, 29
  025beb8  b 0x25bfd4
  025bebc  fsubs 6, 4, 5
  025bec0  fadds 4, 4, 5
  025bec4  addic 3, 1, 16
  025bec8  li 6, 2
  025becc  addic 5, 3, 252
  025bed0  addic 4, 3, 236
  025bed4  mtctr 6
  025bed8  fdivs 4, 6, 4
  025bedc  fmuls 5, 4, 4
  025bee0  stfs 4, 264(1)
  025bee4  stfs 4, 256(1)
  025bee8  stfs 4, 260(1)
  025beec  stfs 4, 252(1)
  025bef0  lfs 7, 264(1)
  025bef4  lfs 8, 256(1)
  025bef8  lfs 9, 260(1)
  025befc  fmuls 6, 5, 5
  025bf00  fmuls 8, 8, 5
  025bf04  fmuls 7, 7, 6
  025bf08  fmuls 4, 6, 6
  025bf0c  fmuls 6, 9, 6
  025bf10  stfs 8, 256(1)
  025bf14  fmuls 5, 7, 5
  025bf18  stfs 6, 260(1)
  025bf1c  stfs 5, 264(1)
  025bf20  lfs 5, 236(3)
  025bf24  fmuls 5, 5, 4
  025bf28  stfs 5, 252(3)
  025bf2c  lfs 5, 4(4)
  025bf30  addic 4, 4, 8
  025bf34  fmuls 5, 5, 4
  025bf38  addic 3, 3, 8
  025bf3c  stfs 5, 4(5)
  025bf40  addic 5, 5, 8
  025bf44  bdnz 0x25bf20
  025bf48  li 5, 4
  025bf4c  ori 3, 1, 0
  025bf50  mtctr 5
  025bf54  lis 4, 115
  025bf58  addic 5, 3, 252
  025bf5c  addic 4, 4, 22752
  025bf60  ori 7, 5, 0
  025bf64  lfs 4, 252(3)
  025bf68  lfs 5, 0(4)
  025bf6c  fmuls 4, 4, 5
  025bf70  lfs 5, 4(4)
  025bf74  addic 4, 4, 8
  025bf78  stfs 4, 252(3)
  025bf7c  lfs 4, 4(5)
  025bf80  addic 3, 3, 8
  025bf84  fmuls 4, 4, 5
  025bf88  stfs 4, 4(5)
  025bf8c  addic 5, 5, 8
  025bf90  bdnz 0x25bf64
  025bf94  ori 3, 1, 0
  025bf98  fmr 4, 29
  025bf9c  mtctr 6
  025bfa0  lfs 5, 252(3)
  025bfa4  fadds 4, 4, 5
  025bfa8  lfs 5, 4(7)
  025bfac  addic 3, 3, 16
  025bfb0  lfs 6, 8(7)
  025bfb4  lfs 7, 12(7)
  025bfb8  addic 7, 7, 16
  025bfbc  fadds 4, 4, 5
  025bfc0  fadds 4, 4, 6
  025bfc4  fadds 4, 4, 7
  025bfc8  bdnz 0x25bfa0
  025bfcc  fadds 4, 4, 31
  025bfd0  fmadds 2, 4, 2, 3
  025bfd4  bl 0x5026a0
  025bfd8  nop
  025bfdc  fcmpu 0, 1, 31
  025bfe0  cror 6, 1, 2
  025bfe4  bt 6, 0x25c074
  025bfe8  lfs 1, 20(30)
  025bfec  lfs 2, 20(31)
  025bff0  lfs 3, 16(30)
  025bff4  fsubs 1, 1, 2
  025bff8  lfs 2, 16(31)
  025bffc  fsubs 2, 3, 2
  025c000  lfs 3, 24(30)
  025c004  lfs 4, 24(31)
  025c008  fsubs 3, 3, 4
  025c00c  fmuls 4, 1, 1
  025c010  lfs 5, 64(30)
  025c014  lfs 6, 28(30)
  025c018  stfs 6, 12(30)
  025c01c  fmadds 4, 2, 2, 4
  025c020  fmadds 4, 3, 3, 4
  025c024  fsqrts 4, 4
  025c028  fdivs 5, 5, 4
  025c02c  fsub 6, 29, 4
  025c030  fsub 7, 29, 4
  025c034  fsub 8, 29, 4
  025c038  fsub 9, 4, 29
  025c03c  fsub 10, 4, 29
  025c040  fsub 4, 4, 29
  025c044  fmuls 2, 2, 5
  025c048  fmuls 1, 1, 5
  025c04c  fmuls 3, 3, 5
  025c050  fsel 5, 6, 29, 2
  025c054  fsel 6, 7, 29, 1
  025c058  fsel 7, 8, 29, 3
  025c05c  fsel 2, 9, 5, 2
  025c060  fsel 1, 10, 6, 1
  025c064  fsel 3, 4, 7, 3
  025c068  stfs 2, 0(30)
  025c06c  stfs 1, 4(30)
  025c070  stfs 3, 8(30)
  025c074  lfs 1, 0(30)
  025c078  lfs 2, 16(31)
  025c07c  lis 3, 38
  025c080  fadds 3, 2, 1
  025c084  addi 28, 3, -17232
  025c088  li 5, 60
  025c08c  li 6, 0
  025c090  lfs 4, 24(28)
  025c094  lfs 5, 4(30)
  025c098  lfs 6, 8(30)
  025c09c  fmadds 1, 1, 4, 2
  025c0a0  lfs 7, 20(31)
  025c0a4  lfs 8, 24(31)
  025c0a8  fsubs 10, 2, 3
  025c0ac  fmadds 2, 5, 4, 7
  025c0b0  stfs 3, 128(1)
  025c0b4  fmadds 4, 6, 4, 8
  025c0b8  lfs 9, 4(30)
  025c0bc  lfs 5, 28(31)
  025c0c0  fadds 9, 7, 9
  025c0c4  addic 27, 1, 128
  025c0c8  li 4, 1
  025c0cc  ori 3, 27, 0
  025c0d0  fmadds 3, 10, 30, 3
  025c0d4  fsubs 7, 7, 9
  025c0d8  stfs 9, 132(1)
  025c0dc  lfs 6, 8(30)
  025c0e0  stfs 5, 140(1)
  025c0e4  fadds 6, 8, 6
  025c0e8  stfs 1, 144(1)
  025c0ec  stfs 2, 148(1)
  025c0f0  stfs 4, 152(1)
  025c0f4  stfs 5, 156(1)
  025c0f8  fmadds 2, 7, 30, 9
  025c0fc  fsubs 1, 8, 6
  025c100  stfs 6, 136(1)
  025c104  stfs 5, 172(1)
  025c108  stfs 3, 160(1)
  025c10c  stfs 2, 164(1)
  025c110  fmadds 1, 1, 30, 6
  025c114  stfs 1, 168(1)
  025c118  lwz 7, 56(30)
  025c11c  subfic 8, 7, 60
  025c120  extsw 7, 7
  025c124  srawi 8, 8, 2
  025c128  subc 5, 7, 5
  025c12c  subc 8, 8, 6
  025c130  sradi 5, 5, 63
  025c134  and 5, 5, 8
  025c138  addc 26, 6, 5
  025c13c  ori 5, 26, 0
  025c140  bl 0x135f90
  025c144  nop
  025c148  addic 3, 1, 160
  025c14c  li 4, 1
  025c150  ori 5, 26, 0
  025c154  bl 0x135f90
  025c158  nop
  025c15c  ori 3, 27, 0
  025c160  li 4, 0
  025c164  ori 5, 26, 0
  025c168  bl 0x135f90
  025c16c  nop
  025c170  lfs 1, 28(28)
  025c174  addic 26, 1, 192
  025c178  lfs 2, 152(1)
  025c17c  ori 4, 31, 0
  025c180  ori 3, 26, 0
  025c184  fadds 1, 2, 1
  025c188  li 5, 1
  025c18c  ori 7, 30, 0
  025c190  stfs 1, 152(1)
  025c194  lfs 31, 32(28)
  025c198  fmr 1, 31
  025c19c  bl 0x10581c
  025c1a0  nop
  025c1a4  lhz 3, 166(31)
  025c1a8  lfs 1, 128(1)
  025c1ac  lis 28, 161
  025c1b0  sth 3, 218(1)
  025c1b4  li 8, 0
  025c1b8  lfs 2, 132(1)
  025c1bc  addic 28, 28, 2368
  025c1c0  stfs 1, 16(31)
  025c1c4  addic 3, 1, 144
  025c1c8  lfs 1, 136(1)
  025c1cc  ori 4, 27, 0
  025c1d0  stfs 2, 20(31)
  025c1d4  li 5, 0
  025c1d8  lfs 2, 140(1)
  025c1dc  ori 6, 31, 0
  025c1e0  stfs 1, 24(31)
  025c1e4  ori 7, 26, 0
  025c1e8  stfs 2, 28(31)
  025c1ec  stw 8, 24(28)
  025c1f0  bl 0x57820
  025c1f4  nop
  025c1f8  cmpwi 3, 0
  025c1fc  bf 2, 0x25c220
  025c200  addic 3, 31, 16
  025c204  fmr 1, 30
  025c208  li 5, 0
  025c20c  ori 6, 31, 0
  025c210  bl 0x59e20
  025c214  nop
  025c218  cmpwi 3, 0
  025c21c  bt 2, 0x25c548
  025c220  lwz 3, 24(28)
  025c224  cmpwi 1, 3, 0
  025c228  bt 6, 0x25c49c
  025c22c  lwz 4, 60(30)
  025c230  cmpw 3, 4
  025c234  bt 2, 0x25c49c
  025c238  lhz 4, 776(29)
  025c23c  cmpwi 4, 0
  025c240  bt 2, 0x25c318
  025c244  lwz 4, 8320(29)
  025c248  cmpw 3, 4
  025c24c  bf 2, 0x25c318
  025c250  lis 4, 161
  025c254  addic 4, 4, 12
  025c258  lhz 3, 1112(4)
  025c25c  cmpwi 3, 0
  025c260  bf 2, 0x25c318
  025c264  lis 5, 0
  025c268  ori 5, 5, 65535
  025c26c  cmpw 3, 5
  025c270  bf 0, 0x25c27c
  025c274  addic 3, 3, 1
  025c278  sth 3, 1112(4)
  025c27c  lis 3, 161
  025c280  lwz 3, -2344(3)
  025c284  extsw 3, 3
  025c288  std 3, 288(1)
  025c28c  lis 3, 114
  025c290  lfs 1, -3056(3)
  025c294  lhz 6, 1114(4)
  025c298  lfd 2, 288(1)
  025c29c  lis 3, 6990
  025c2a0  fcfid 2, 2
  025c2a4  ori 5, 3, 33205
  025c2a8  frsp 2, 2
  025c2ac  fadds 2, 2, 30
  025c2b0  fmuls 1, 1, 2
  025c2b4  fctiwz 1, 1
  025c2b8  stfd 1, 288(1)
  025c2bc  lwz 3, 292(1)
  025c2c0  mulhw 5, 5, 3
  025c2c4  srawi 5, 5, 6
  025c2c8  srwi 7, 5, 31
  025c2cc  addc 5, 5, 7
  025c2d0  cmpw 5, 6
  025c2d4  bf 1, 0x25c2f4
  025c2d8  lis 5, 6990
  025c2dc  ori 5, 5, 33205
  025c2e0  mulhw 3, 5, 3
  025c2e4  srawi 3, 3, 6
  025c2e8  srwi 5, 3, 31
  025c2ec  addc 3, 3, 5
  025c2f0  sth 3, 1114(4)
  025c2f4  lis 3, 151
  025c2f8  lwz 7, 1116(4)
  025c2fc  li 5, 1
  025c300  lis 6, -32768
  025c304  lwz 3, -25488(3)
  025c308  slw 3, 5, 3
  025c30c  or 3, 7, 3
  025c310  or 3, 3, 6
  025c314  stw 3, 1116(4)
  025c318  lfs 1, 32(28)
  025c31c  lis 4, 38
  025c320  li 7, 0
  025c324  fmr 2, 31
  025c328  stfs 1, 16(31)
  025c32c  addi 5, 4, -17232
  025c330  lfs 1, 36(28)
  025c334  ori 3, 31, 0
  025c338  addic 4, 31, 16
  025c33c  stfs 1, 20(31)
  025c340  lfs 1, 40(28)
  025c344  li 6, 1
  025c348  li 9, 0
  025c34c  stfs 1, 24(31)
  025c350  lfs 1, 44(28)
  025c354  li 10, 1
  025c358  stfs 1, 28(31)
  025c35c  lfs 1, 36(5)
  025c360  lfs 3, 16(5)
  025c364  std 7, 112(1)
  025c368  bl 0x105870
  025c36c  nop
  025c370  lhz 3, 776(29)
  025c374  cmpwi 3, 0
  025c378  bt 2, 0x25c454
  025c37c  lwz 3, 24(28)
  025c380  lwz 4, 8320(29)
  025c384  cmpw 3, 4
  025c388  bf 2, 0x25c454
  025c38c  lis 4, 161
  025c390  addic 4, 4, 12
  025c394  lhz 3, 1112(4)
  025c398  cmpwi 3, 0
  025c39c  bf 2, 0x25c454
  025c3a0  lis 5, 0
  025c3a4  ori 5, 5, 65535
  025c3a8  cmpw 3, 5
  025c3ac  bf 0, 0x25c3b8
  025c3b0  addic 3, 3, 1
  025c3b4  sth 3, 1112(4)
  025c3b8  lis 3, 161
  025c3bc  lis 5, 6990
  025c3c0  lwz 3, -2344(3)
  025c3c4  extsw 3, 3
  025c3c8  ori 5, 5, 33205
  025c3cc  std 3, 288(1)
  025c3d0  lis 3, 114
  025c3d4  lfs 1, -3056(3)
  025c3d8  lhz 6, 1114(4)
  025c3dc  lfd 2, 288(1)
  025c3e0  fcfid 2, 2
  025c3e4  frsp 2, 2
  025c3e8  fadds 2, 2, 30
  025c3ec  fmuls 1, 1, 2
  025c3f0  fctiwz 1, 1
  025c3f4  stfd 1, 288(1)
  025c3f8  lwz 3, 292(1)
  025c3fc  mulhw 5, 5, 3
  025c400  srawi 5, 5, 6
  025c404  srwi 7, 5, 31
  025c408  addc 5, 5, 7
  025c40c  cmpw 5, 6
  025c410  bf 1, 0x25c430
  025c414  lis 5, 6990
  025c418  ori 5, 5, 33205
  025c41c  mulhw 3, 5, 3
  025c420  srawi 3, 3, 6
  025c424  srwi 5, 3, 31
  025c428  addc 3, 3, 5
  025c42c  sth 3, 1114(4)
  025c430  lis 3, 151
  025c434  lwz 7, 1116(4)
  025c438  li 5, 1
  025c43c  lis 6, -32768
  025c440  lwz 3, -25488(3)
  025c444  slw 3, 5, 3
  025c448  or 3, 7, 3
  025c44c  or 3, 3, 6
  025c450  stw 3, 1116(4)
  025c454  lis 3, 38
  025c458  li 4, 40
  025c45c  vspltisw 2, -1
  025c460  addi 3, 3, -17232
  025c464  lis 5, 114
  025c468  li 6, -3056
  025c46c  vslw 2, 2, 2
  025c470  <unknown>
  025c474  li 3, 56
  025c478  vspltw 3, 3, 0
  025c47c  li 4, 1
  025c480  <unknown>
  025c484  vmaddfp 2, 4, 3, 2
  025c488  vctsxs 2, 2, 0
  025c48c  vspltw 2, 2, 0
  025c490  stvewx 2, 3, 30
  025c494  stb 4, 32(31)
  025c498  b 0x25c7b4
  025c49c  bf 6, 0x25c548
  025c4a0  lwz 3, 60(30)
  025c4a4  lfs 1, 20(31)
  025c4a8  lfs 2, 16(31)
  025c4ac  lfs 3, 20(3)
  025c4b0  lfs 4, 16(3)
  025c4b4  fsubs 1, 1, 3
  025c4b8  fsubs 2, 2, 4
  025c4bc  lis 3, 38
  025c4c0  addi 3, 3, -17232
  025c4c4  fmuls 1, 1, 1
  025c4c8  fmadds 1, 2, 2, 1
  025c4cc  lfs 2, 44(3)
  025c4d0  fsqrts 1, 1
  025c4d4  fcmpu 0, 1, 2
  025c4d8  cror 6, 0, 2
  025c4dc  bt 6, 0x25c548
  025c4e0  lfs 1, 32(28)
  025c4e4  lis 3, 38
  025c4e8  vspltisw 3, -1
  025c4ec  stfs 1, 16(31)
  025c4f0  li 4, 40
  025c4f4  lfs 1, 36(28)
  025c4f8  addi 3, 3, -17232
  025c4fc  lis 5, 114
  025c500  stfs 1, 20(31)
  025c504  lfs 1, 40(28)
  025c508  li 6, -3056
  025c50c  vslw 3, 3, 3
  025c510  stfs 1, 24(31)
  025c514  lfs 1, 44(28)
  025c518  stfs 1, 28(31)
  025c51c  <unknown>
  025c520  <unknown>
  025c524  vspltw 2, 2, 0
  025c528  li 3, 56
  025c52c  li 4, 1
  025c530  vmaddfp 2, 4, 2, 3
  025c534  vctsxs 2, 2, 0
  025c538  vspltw 2, 2, 0
  025c53c  stvewx 2, 3, 30
  025c540  stb 4, 32(31)
  025c544  b 0x25c7b4
  025c548  lis 3, 38
  025c54c  vspltisw 3, -1
  025c550  lis 4, 114
  025c554  addi 3, 3, -17232
  025c558  li 5, 48
  025c55c  li 6, -3056
  025c560  vslw 3, 3, 3
  025c564  lfs 1, 48(3)
  025c568  lfs 2, -3056(4)
  025c56c  <unknown>
  025c570  fmuls 1, 2, 1
  025c574  vspltw 2, 2, 0
  025c578  lwz 3, 56(30)
  025c57c  <unknown>
  025c580  vmaddfp 2, 4, 2, 3
  025c584  fctiwz 1, 1
  025c588  vctsxs 2, 2, 0
  025c58c  stfd 1, 288(1)
  025c590  lwz 4, 292(1)
  025c594  cmpw 3, 4
  025c598  bf 1, 0x25c634
  025c59c  lwz 4, 16(31)
  025c5a0  lis 3, 17502
  025c5a4  srawi 5, 4, 31
  025c5a8  ori 3, 3, 32768
  025c5ac  srwi 6, 5, 1
  025c5b0  xor 4, 6, 4
  025c5b4  subc 5, 4, 5
  025c5b8  cmpw 5, 3
  025c5bc  bt 1, 0x25c628
  025c5c0  lwz 4, 20(31)
  025c5c4  lis 3, 17502
  025c5c8  srawi 6, 4, 31
  025c5cc  ori 3, 3, 32768
  025c5d0  srwi 7, 6, 1
  025c5d4  xor 4, 7, 4
  025c5d8  subc 4, 4, 6
  025c5dc  cmpw 4, 3
  025c5e0  bt 1, 0x25c628
  025c5e4  lis 3, 17502
  025c5e8  ori 6, 3, 32768
  025c5ec  lwz 3, 24(31)
  025c5f0  srawi 7, 3, 31
  025c5f4  srwi 8, 7, 1
  025c5f8  xor 3, 8, 3
  025c5fc  subc 3, 3, 7
  025c600  cmpw 3, 6
  025c604  bt 1, 0x25c628
  025c608  lis 6, 17056
  025c60c  cmpw 1, 5, 6
  025c610  cmpw 6, 4, 6
  025c614  cmpw 7, 3, 6
  025c618  bt 4, 0x25c628
  025c61c  bt 4, 0x25c628
  025c620  bt 24, 0x25c628
  025c624  bf 28, 0x25c634
  025c628  vspltw 2, 2, 0
  025c62c  li 3, 56
  025c630  stvewx 2, 3, 30
  025c634  addic 3, 30, 56
  025c638  bl 0x4fff60
  025c63c  nop
  025c640  cmpwi 3, 0
  025c644  bf 2, 0x25c6c8
  025c648  lwz 4, 16(31)
  025c64c  lis 3, 17522
  025c650  srawi 5, 4, 31
  025c654  srwi 6, 5, 1
  025c658  xor 4, 6, 4
  025c65c  subc 5, 4, 5
  025c660  cmpw 5, 3
  025c664  bt 1, 0x25c6c8
  025c668  lwz 4, 20(31)
  025c66c  lis 3, 17522
  025c670  srawi 6, 4, 31
  025c674  srwi 7, 6, 1
  025c678  xor 4, 7, 4
  025c67c  subc 4, 4, 6
  025c680  cmpw 4, 3
  025c684  bt 1, 0x25c6c8
  025c688  lwz 3, 24(31)
  025c68c  lis 6, 17522
  025c690  srawi 7, 3, 31
  025c694  srwi 8, 7, 1
  025c698  xor 3, 8, 3
  025c69c  subc 3, 3, 7
  025c6a0  cmpw 3, 6
  025c6a4  bt 1, 0x25c6c8
  025c6a8  lis 6, 16672
  025c6ac  cmpw 1, 5, 6
  025c6b0  cmpw 6, 4, 6
  025c6b4  cmpw 7, 3, 6
  025c6b8  bt 4, 0x25c6c8
  025c6bc  bt 4, 0x25c6c8
  025c6c0  bt 24, 0x25c6c8
  025c6c4  bf 28, 0x25c7b4
  025c6c8  ori 3, 31, 0
  025c6cc  bl 0xefb38
  025c6d0  nop
  025c6d4  b 0x25c7b4
  025c6d8  lis 3, 38
  025c6dc  addi 29, 3, -17232
  025c6e0  lis 3, 114
  025c6e4  lfs 1, 52(29)
  025c6e8  lfs 2, 44(29)
  025c6ec  lfs 3, -3052(3)
  025c6f0  fmuls 1, 3, 1
  025c6f4  fmuls 2, 3, 2
  025c6f8  bl 0xfcbe8
  025c6fc  nop
  025c700  lfs 31, 56(29)
  025c704  fmr 29, 1
  025c708  lfs 3, 60(29)
  025c70c  fmr 1, 31
  025c710  fmr 30, 3
  025c714  fmr 2, 30
  025c718  bl 0xfcbe8
  025c71c  nop
  025c720  fmr 28, 1
  025c724  fmr 1, 31
  025c728  fmr 2, 30
  025c72c  bl 0xfcbe8
  025c730  nop
  025c734  fmr 3, 1
  025c738  addic 28, 1, 176
  025c73c  fmr 1, 29
  025c740  fmr 2, 28
  025c744  ori 3, 28, 0
  025c748  bl 0xfe610
  025c74c  nop
  025c750  lfs 1, 64(29)
  025c754  li 3, 255
  025c758  addic 29, 31, 16
  025c75c  fmr 31, 1
  025c760  bl 0xfc620
  025c764  nop
  025c768  clrlwi 8, 3, 24
  025c76c  fmr 1, 31
  025c770  lis 5, 24831
  025c774  ori 3, 29, 0
  025c778  li 7, 15
  025c77c  ori 4, 28, 0
  025c780  ori 5, 5, 12320
  025c784  li 9, 0
  025c788  bl 0x131100
  025c78c  nop
  025c790  addic 3, 30, 56
  025c794  bl 0x4fff60
  025c798  nop
  025c79c  cmpwi 3, 0
  025c7a0  bt 2, 0x25c7b4
  025c7a4  ori 3, 31, 0
  025c7a8  bl 0xefb38
  025c7ac  nop
  025c7b0  b 0x25c7b4
  025c7b4  ld 0, 400(1)
  025c7b8  mtlr 0
  025c7bc  lfd 28, 352(1)
  025c7c0  lfd 29, 360(1)
  025c7c4  lfd 30, 368(1)
  025c7c8  lfd 31, 376(1)
  025c7cc  ld 26, 304(1)
  025c7d0  ld 27, 312(1)
  025c7d4  ld 28, 320(1)
  025c7d8  ld 29, 328(1)
  025c7dc  ld 30, 336(1)
  025c7e0  ld 31, 344(1)
  025c7e4  addi 1, 1, 384
  025c7e8  blr
