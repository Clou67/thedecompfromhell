# game/update/moby1564.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1564_0029bde8:   # 0x29bde8, 0x654 bytes
  029bde8  stdu 1, -416(1)
  029bdec  mflr 0
  029bdf0  std 0, 432(1)
  029bdf4  stfd 18, 304(1)
  029bdf8  stfd 19, 312(1)
  029bdfc  stfd 20, 320(1)
  029be00  stfd 21, 328(1)
  029be04  stfd 22, 336(1)
  029be08  stfd 23, 344(1)
  029be0c  stfd 24, 352(1)
  029be10  stfd 25, 360(1)
  029be14  stfd 26, 368(1)
  029be18  stfd 27, 376(1)
  029be1c  stfd 28, 384(1)
  029be20  stfd 29, 392(1)
  029be24  stfd 30, 400(1)
  029be28  stfd 31, 408(1)
  029be2c  lis 3, 123
  029be30  lis 4, 42
  029be34  lwz 3, -18152(3)
  029be38  addic 3, 3, 1
  029be3c  extsw 3, 3
  029be40  std 3, 256(1)
  029be44  addi 3, 4, -16948
  029be48  lis 4, 114
  029be4c  lfs 24, 0(3)
  029be50  lfs 1, -3056(4)
  029be54  lfd 2, 256(1)
  029be58  fcfid 2, 2
  029be5c  lis 3, 150
  029be60  addic 3, 3, -12976
  029be64  lwz 4, 52(3)
  029be68  frsp 2, 2
  029be6c  fadds 2, 2, 24
  029be70  fmuls 1, 1, 2
  029be74  fctiwz 1, 1
  029be78  stfd 1, 256(1)
  029be7c  lwz 5, 260(1)
  029be80  std 31, 296(1)
  029be84  std 30, 288(1)
  029be88  std 29, 280(1)
  029be8c  std 28, 272(1)
  029be90  cmpw 4, 5
  029be94  bf 2, 0x29bee4
  029be98  lis 4, 251
  029be9c  lis 5, 16256
  029bea0  ori 6, 3, 0
  029bea4  addic 3, 4, -9296
  029bea8  li 7, 0
  029beac  lis 8, 42
  029beb0  stw 5, -9296(4)
  029beb4  addi 4, 8, -16948
  029beb8  stw 7, 4(3)
  029bebc  lwz 5, 48(6)
  029bec0  cmpwi 5, 7
  029bec4  lfs 1, 4(4)
  029bec8  bf 2, 0x29bed8
  029becc  lis 4, 42
  029bed0  addi 4, 4, -16948
  029bed4  lfs 1, 8(4)
  029bed8  lis 4, 16256
  029bedc  stfs 1, 8(3)
  029bee0  stw 4, 12(3)
  029bee4  li 3, 11
  029bee8  bl 0x685c4
  029beec  nop
  029bef0  std 3, 232(1)
  029bef4  lis 9, 0
  029bef8  li 3, 0
  029befc  li 4, 0
  029bf00  li 5, 1
  029bf04  li 6, 1
  029bf08  li 7, 1
  029bf0c  li 8, 0
  029bf10  ori 9, 9, 65424
  029bf14  bl 0x502fd4
  029bf18  nop
  029bf1c  std 3, 240(1)
  029bf20  li 3, 0
  029bf24  li 4, 0
  029bf28  li 5, 0
  029bf2c  li 6, 0
  029bf30  li 7, 0
  029bf34  li 8, 0
  029bf38  bl 0x502f08
  029bf3c  nop
  029bf40  std 3, 224(1)
  029bf44  li 4, 2
  029bf48  li 3, 0
  029bf4c  li 5, 0
  029bf50  li 6, 1
  029bf54  li 7, 128
  029bf58  bl 0x502ea8
  029bf5c  nop
  029bf60  std 3, 248(1)
  029bf64  li 3, 0
  029bf68  bl 0x502e50
  029bf6c  nop
  029bf70  ori 4, 3, 0
  029bf74  li 3, 8
  029bf78  bl 0x174f80
  029bf7c  nop
  029bf80  li 3, 1
  029bf84  li 4, 0
  029bf88  li 8, 0
  029bf8c  li 10, 2
  029bf90  li 5, 0
  029bf94  li 6, 1
  029bf98  li 7, 0
  029bf9c  li 9, 1
  029bfa0  bl 0x502f98
  029bfa4  nop
  029bfa8  ori 4, 3, 0
  029bfac  li 3, 22
  029bfb0  bl 0x174f80
  029bfb4  nop
  029bfb8  lis 3, 149
  029bfbc  lis 4, 251
  029bfc0  addic 3, 3, 5056
  029bfc4  addic 5, 4, -9296
  029bfc8  lfs 5, -9296(4)
  029bfcc  lfs 1, 868(3)
  029bfd0  lfs 6, 4(5)
  029bfd4  lfs 2, 864(3)
  029bfd8  fmuls 1, 1, 6
  029bfdc  lfs 3, 852(3)
  029bfe0  fmuls 2, 2, 6
  029bfe4  lfs 4, 848(3)
  029bfe8  lfs 7, 8(5)
  029bfec  lfs 8, 884(3)
  029bff0  lfs 9, 872(3)
  029bff4  lfs 10, 880(3)
  029bff8  fmuls 9, 9, 6
  029bffc  lfs 11, 856(3)
  029c000  lis 4, 42
  029c004  fmadds 1, 3, 5, 1
  029c008  fmadds 2, 4, 5, 2
  029c00c  lfs 3, 324(3)
  029c010  lfs 4, 888(3)
  029c014  addi 4, 4, -16948
  029c018  fmadds 9, 11, 5, 9
  029c01c  fmadds 29, 8, 7, 1
  029c020  fmadds 30, 10, 7, 2
  029c024  lfs 1, 320(3)
  029c028  lfs 8, 328(3)
  029c02c  lfs 23, 12(4)
  029c030  fmadds 28, 4, 7, 9
  029c034  fadds 29, 29, 3
  029c038  fadds 30, 30, 1
  029c03c  fmr 20, 23
  029c040  fadds 28, 28, 8
  029c044  fsubs 2, 29, 3
  029c048  fsubs 1, 30, 1
  029c04c  fmr 19, 20
  029c050  fsubs 3, 28, 8
  029c054  lfs 8, 876(3)
  029c058  fmuls 6, 8, 6
  029c05c  fmuls 4, 2, 2
  029c060  lfs 9, 860(3)
  029c064  fmr 18, 19
  029c068  lfs 10, 892(3)
  029c06c  lfs 31, 12(5)
  029c070  fmadds 4, 1, 1, 4
  029c074  fmadds 5, 9, 5, 6
  029c078  fmadds 4, 3, 3, 4
  029c07c  fmadds 5, 10, 7, 5
  029c080  fsqrts 8, 4
  029c084  fadds 31, 5, 31
  029c088  fcmpu 0, 8, 18
  029c08c  bt 2, 0x29c0dc
  029c090  frsqrte 5, 4
  029c094  lis 3, 42
  029c098  addi 3, 3, -16948
  029c09c  lfs 6, 16(3)
  029c0a0  fmuls 7, 4, 5
  029c0a4  fmuls 8, 24, 5
  029c0a8  fnmsubs 7, 7, 5, 6
  029c0ac  fmadds 5, 7, 8, 5
  029c0b0  fmuls 7, 4, 5
  029c0b4  fmuls 8, 24, 5
  029c0b8  fnmsubs 7, 7, 5, 6
  029c0bc  fmadds 5, 7, 8, 5
  029c0c0  fmuls 4, 4, 5
  029c0c4  fmuls 7, 24, 5
  029c0c8  fnmsubs 4, 4, 5, 6
  029c0cc  fmadds 20, 4, 7, 5
  029c0d0  fmuls 18, 1, 20
  029c0d4  fmuls 19, 2, 20
  029c0d8  fmuls 20, 3, 20
  029c0dc  fmuls 1, 19, 19
  029c0e0  fmr 22, 23
  029c0e4  fneg 1, 1
  029c0e8  fmr 21, 22
  029c0ec  fneg 1, 1
  029c0f0  fmadds 1, 18, 18, 1
  029c0f4  fsqrts 2, 1
  029c0f8  fcmpu 0, 2, 21
  029c0fc  bt 2, 0x29c14c
  029c100  frsqrte 2, 1
  029c104  lis 3, 42
  029c108  addi 3, 3, -16948
  029c10c  lfs 3, 16(3)
  029c110  fmuls 4, 1, 2
  029c114  fmuls 5, 24, 2
  029c118  fnmsubs 4, 4, 2, 3
  029c11c  fmadds 2, 4, 5, 2
  029c120  fmuls 4, 1, 2
  029c124  fmuls 5, 24, 2
  029c128  fnmsubs 4, 4, 2, 3
  029c12c  fmadds 2, 4, 5, 2
  029c130  fmuls 1, 1, 2
  029c134  fmuls 4, 24, 2
  029c138  fnmsubs 1, 1, 2, 3
  029c13c  fmadds 22, 1, 4, 2
  029c140  fmuls 21, 19, 22
  029c144  fmuls 22, 18, 22
  029c148  fneg 21, 21
  029c14c  lis 4, 16256
  029c150  li 5, 0
  029c154  fmuls 27, 20, 22
  029c158  fmuls 25, 19, 21
  029c15c  lis 6, 123
  029c160  lis 29, 123
  029c164  fmsubs 26, 20, 21, 23
  029c168  stw 4, 192(1)
  029c16c  li 28, 4
  029c170  stw 4, 196(1)
  029c174  addic 30, 1, 112
  029c178  stw 5, 200(1)
  029c17c  addic 29, 29, -18048
  029c180  stw 4, 204(1)
  029c184  ori 3, 30, 0
  029c188  stw 4, 208(1)
  029c18c  mtctr 28
  029c190  stw 5, 212(1)
  029c194  ori 4, 29, 0
  029c198  stw 5, 216(1)
  029c19c  lwz 6, -17984(6)
  029c1a0  stw 5, 220(1)
  029c1a4  fmsubs 27, 19, 23, 27
  029c1a8  stw 6, 188(1)
  029c1ac  fmsubs 25, 18, 22, 25
  029c1b0  stw 6, 184(1)
  029c1b4  stw 6, 180(1)
  029c1b8  stw 6, 176(1)
  029c1bc  lis 5, 251
  029c1c0  lfs 1, 0(4)
  029c1c4  lfs 2, -9344(5)
  029c1c8  fmuls 1, 1, 2
  029c1cc  fmuls 4, 1, 31
  029c1d0  stfs 1, 0(3)
  029c1d4  lfs 2, 4(4)
  029c1d8  lfs 3, -9344(5)
  029c1dc  fmuls 2, 2, 3
  029c1e0  fmadds 3, 1, 20, 23
  029c1e4  fmuls 5, 2, 21
  029c1e8  fmuls 6, 2, 22
  029c1ec  stfs 2, 4(3)
  029c1f0  lfs 2, 8(4)
  029c1f4  lfs 7, -9344(5)
  029c1f8  fmuls 2, 2, 7
  029c1fc  fmadds 5, 1, 18, 5
  029c200  fmadds 1, 1, 19, 6
  029c204  fmadds 3, 2, 25, 3
  029c208  stfs 2, 8(3)
  029c20c  lfs 6, 12(4)
  029c210  fmadds 5, 2, 27, 5
  029c214  addic 4, 4, 16
  029c218  fmadds 1, 2, 26, 1
  029c21c  fmadds 2, 6, 31, 4
  029c220  fmadds 3, 6, 28, 3
  029c224  fmadds 4, 6, 30, 5
  029c228  fmadds 1, 6, 29, 1
  029c22c  stfs 2, 12(3)
  029c230  stfs 3, 8(3)
  029c234  stfs 4, 0(3)
  029c238  stfs 1, 4(3)
  029c23c  addic 3, 3, 16
  029c240  bdnz 0x29c1bc
  029c244  lis 31, 161
  029c248  li 4, 0
  029c24c  addic 31, 31, 24396
  029c250  addic 3, 1, 112
  029c254  li 5, 0
  029c258  li 7, 9
  029c25c  lwz 6, 28(31)
  029c260  bl 0x72280
  029c264  nop
  029c268  lis 4, 123
  029c26c  lis 3, 42
  029c270  mtctr 28
  029c274  addi 6, 3, -16948
  029c278  lwz 3, 28(31)
  029c27c  ori 5, 29, 0
  029c280  lwz 7, -17980(4)
  029c284  ori 4, 30, 0
  029c288  stw 7, 188(1)
  029c28c  stw 7, 184(1)
  029c290  stw 7, 180(1)
  029c294  stw 7, 176(1)
  029c298  lfs 1, 20(6)
  029c29c  lis 6, 251
  029c2a0  lfs 2, -9344(6)
  029c2a4  lfs 3, 0(5)
  029c2a8  fmuls 2, 2, 1
  029c2ac  fmuls 3, 3, 2
  029c2b0  fmadds 5, 3, 20, 23
  029c2b4  fmuls 6, 3, 31
  029c2b8  stfs 3, 0(4)
  029c2bc  lfs 4, 4(5)
  029c2c0  fmuls 4, 4, 2
  029c2c4  fmuls 7, 4, 21
  029c2c8  fmuls 8, 4, 22
  029c2cc  stfs 4, 4(4)
  029c2d0  lfs 4, 8(5)
  029c2d4  fmuls 2, 4, 2
  029c2d8  fmadds 4, 3, 18, 7
  029c2dc  fmadds 3, 3, 19, 8
  029c2e0  fmadds 5, 2, 25, 5
  029c2e4  stfs 2, 8(4)
  029c2e8  lfs 7, 12(5)
  029c2ec  addic 5, 5, 16
  029c2f0  fmadds 4, 2, 27, 4
  029c2f4  fmadds 2, 2, 26, 3
  029c2f8  fmadds 3, 7, 31, 6
  029c2fc  fmadds 5, 7, 28, 5
  029c300  fmadds 4, 7, 30, 4
  029c304  fmadds 2, 7, 29, 2
  029c308  stfs 3, 12(4)
  029c30c  stfs 5, 8(4)
  029c310  stfs 4, 0(4)
  029c314  stfs 2, 4(4)
  029c318  addic 4, 4, 16
  029c31c  bdnz 0x29c29c
  029c320  ori 6, 3, 0
  029c324  addic 3, 1, 112
  029c328  li 4, 0
  029c32c  li 5, 0
  029c330  li 7, 9
  029c334  bl 0x72280
  029c338  nop
  029c33c  lwz 31, 28(31)
  029c340  mtctr 28
  029c344  lis 3, 251
  029c348  lfs 1, -9344(3)
  029c34c  lfs 2, 0(29)
  029c350  fmuls 1, 1, 24
  029c354  fmuls 2, 2, 1
  029c358  fmadds 4, 2, 20, 23
  029c35c  fmuls 5, 2, 31
  029c360  stfs 2, 0(30)
  029c364  lfs 3, 4(29)
  029c368  fmuls 3, 3, 1
  029c36c  fmuls 6, 3, 21
  029c370  fmuls 7, 3, 22
  029c374  stfs 3, 4(30)
  029c378  lfs 3, 8(29)
  029c37c  fmuls 1, 3, 1
  029c380  fmadds 3, 2, 18, 6
  029c384  fmadds 2, 2, 19, 7
  029c388  fmadds 4, 1, 25, 4
  029c38c  stfs 1, 8(30)
  029c390  lfs 6, 12(29)
  029c394  addic 29, 29, 16
  029c398  fmadds 3, 1, 27, 3
  029c39c  fmadds 1, 1, 26, 2
  029c3a0  fmadds 2, 6, 31, 5
  029c3a4  fmadds 4, 6, 28, 4
  029c3a8  fmadds 3, 6, 30, 3
  029c3ac  fmadds 1, 6, 29, 1
  029c3b0  stfs 2, 12(30)
  029c3b4  stfs 4, 8(30)
  029c3b8  stfs 3, 0(30)
  029c3bc  stfs 1, 4(30)
  029c3c0  addic 30, 30, 16
  029c3c4  bdnz 0x29c344
  029c3c8  addic 3, 1, 112
  029c3cc  li 4, 0
  029c3d0  li 5, 0
  029c3d4  ori 6, 31, 0
  029c3d8  li 7, 9
  029c3dc  bl 0x72280
  029c3e0  nop
  029c3e4  ld 0, 432(1)
  029c3e8  mtlr 0
  029c3ec  lfd 18, 304(1)
  029c3f0  lfd 19, 312(1)
  029c3f4  lfd 20, 320(1)
  029c3f8  lfd 21, 328(1)
  029c3fc  lfd 22, 336(1)
  029c400  lfd 23, 344(1)
  029c404  lfd 24, 352(1)
  029c408  lfd 25, 360(1)
  029c40c  lfd 26, 368(1)
  029c410  lfd 27, 376(1)
  029c414  lfd 28, 384(1)
  029c418  lfd 29, 392(1)
  029c41c  lfd 30, 400(1)
  029c420  lfd 31, 408(1)
  029c424  ld 28, 272(1)
  029c428  ld 29, 280(1)
  029c42c  ld 30, 288(1)
  029c430  ld 31, 296(1)
  029c434  addi 1, 1, 416
  029c438  blr

M1564_0029c460:   # 0x29c460, 0x258 bytes
  029c460  stdu 1, -288(1)
  029c464  mflr 0
  029c468  std 0, 304(1)
  029c46c  stfd 30, 272(1)
  029c470  stfd 31, 280(1)
  029c474  std 30, 256(1)
  029c478  lis 4, 123
  029c47c  ori 30, 3, 0
  029c480  lwz 4, -24384(4)
  029c484  extsw 4, 4
  029c488  std 4, 192(1)
  029c48c  std 31, 264(1)
  029c490  lis 4, 42
  029c494  addi 31, 4, -15300
  029c498  lis 4, 114
  029c49c  lfs 31, 0(31)
  029c4a0  lfs 1, -3056(4)
  029c4a4  lfd 2, 192(1)
  029c4a8  fcfid 2, 2
  029c4ac  lis 4, 161
  029c4b0  lwz 4, 1808(4)
  029c4b4  frsp 2, 2
  029c4b8  fadds 2, 2, 31
  029c4bc  fmuls 1, 1, 2
  029c4c0  fctiwz 1, 1
  029c4c4  stfd 1, 192(1)
  029c4c8  std 29, 248(1)
  029c4cc  lwz 3, 196(1)
  029c4d0  extsw 29, 3
  029c4d4  divw 5, 4, 29
  029c4d8  mullw 3, 5, 3
  029c4dc  subc 3, 4, 3
  029c4e0  std 28, 240(1)
  029c4e4  std 27, 232(1)
  029c4e8  std 26, 224(1)
  029c4ec  std 25, 216(1)
  029c4f0  extsw 3, 3
  029c4f4  bl 0x502730
  029c4f8  nop
  029c4fc  fmr 30, 1
  029c500  ori 3, 29, 0
  029c504  bl 0x502730
  029c508  nop
  029c50c  fdivs 1, 30, 1
  029c510  lfs 2, 4(31)
  029c514  lfs 3, 8(31)
  029c518  lfs 4, 12(31)
  029c51c  lfs 5, 16(31)
  029c520  lfs 6, 20(31)
  029c524  lfs 7, 24(31)
  029c528  lis 3, 123
  029c52c  lfs 8, 28(31)
  029c530  lis 4, 123
  029c534  lfs 9, 32(31)
  029c538  lwz 3, -24392(3)
  029c53c  lwz 4, -24388(4)
  029c540  extsw 3, 3
  029c544  extsw 4, 4
  029c548  fmsubs 1, 1, 2, 3
  029c54c  fsubs 2, 4, 1
  029c550  fsubs 3, 5, 1
  029c554  fsub 4, 1, 2
  029c558  fsel 1, 4, 2, 1
  029c55c  fsub 2, 3, 1
  029c560  fsel 1, 2, 3, 1
  029c564  fmuls 2, 1, 1
  029c568  fmuls 3, 2, 1
  029c56c  fmuls 4, 2, 3
  029c570  fmadds 1, 3, 6, 1
  029c574  fmuls 3, 2, 4
  029c578  fmadds 1, 4, 7, 1
  029c57c  fmuls 2, 2, 3
  029c580  fmadds 1, 3, 8, 1
  029c584  fmadds 1, 2, 9, 1
  029c588  fmadds 1, 1, 31, 31
  029c58c  bl 0x5027bc
  029c590  nop
  029c594  addic 31, 1, 128
  029c598  ori 29, 3, 0
  029c59c  ori 3, 30, 0
  029c5a0  li 4, 1
  029c5a4  ori 5, 31, 0
  029c5a8  bl 0xf1038
  029c5ac  nop
  029c5b0  lis 28, 123
  029c5b4  lfs 1, 160(1)
  029c5b8  lis 27, 123
  029c5bc  lfs 2, 164(1)
  029c5c0  lis 26, 123
  029c5c4  lfs 3, 168(1)
  029c5c8  addic 25, 1, 112
  029c5cc  lfs 4, 176(1)
  029c5d0  ori 4, 29, 0
  029c5d4  lfs 5, 180(1)
  029c5d8  ori 3, 25, 0
  029c5dc  lfs 6, -17976(28)
  029c5e0  lfs 7, 184(1)
  029c5e4  fnmsubs 4, 1, 6, 4
  029c5e8  fnmsubs 5, 2, 6, 5
  029c5ec  fnmsubs 3, 3, 6, 7
  029c5f0  lfs 1, 188(1)
  029c5f4  stfs 1, 124(1)
  029c5f8  lfs 1, -24400(27)
  029c5fc  lfs 2, -24396(26)
  029c600  stfs 4, 112(1)
  029c604  stfs 5, 116(1)
  029c608  stfs 3, 120(1)
  029c60c  bl 0x119028
  029c610  nop
  029c614  ori 3, 30, 0
  029c618  li 4, 2
  029c61c  ori 5, 31, 0
  029c620  bl 0xf1038
  029c624  nop
  029c628  lfs 1, 160(1)
  029c62c  lfs 2, -17976(28)
  029c630  ori 3, 25, 0
  029c634  lfs 3, 164(1)
  029c638  ori 4, 29, 0
  029c63c  lfs 4, 168(1)
  029c640  lfs 5, 176(1)
  029c644  lfs 6, 180(1)
  029c648  fnmsubs 5, 1, 2, 5
  029c64c  lfs 1, 184(1)
  029c650  fnmsubs 3, 3, 2, 6
  029c654  fnmsubs 4, 4, 2, 1
  029c658  lfs 1, 188(1)
  029c65c  lfs 2, -24400(27)
  029c660  lfs 6, -24396(26)
  029c664  stfs 1, 124(1)
  029c668  fmr 1, 2
  029c66c  fmr 2, 6
  029c670  stfs 5, 112(1)
  029c674  stfs 3, 116(1)
  029c678  stfs 4, 120(1)
  029c67c  bl 0x119028
  029c680  nop
  029c684  ld 0, 304(1)
  029c688  mtlr 0
  029c68c  lfd 30, 272(1)
  029c690  lfd 31, 280(1)
  029c694  ld 25, 216(1)
  029c698  ld 26, 224(1)
  029c69c  ld 27, 232(1)
  029c6a0  ld 28, 240(1)
  029c6a4  ld 29, 248(1)
  029c6a8  ld 30, 256(1)
  029c6ac  ld 31, 264(1)
  029c6b0  addi 1, 1, 288
  029c6b4  blr

M1564_0029c6c8:   # 0x29c6c8, 0x59c bytes
  029c6c8  stdu 1, -416(1)
  029c6cc  mflr 0
  029c6d0  std 0, 432(1)
  029c6d4  stfd 19, 312(1)
  029c6d8  stfd 20, 320(1)
  029c6dc  stfd 21, 328(1)
  029c6e0  stfd 22, 336(1)
  029c6e4  stfd 23, 344(1)
  029c6e8  stfd 24, 352(1)
  029c6ec  stfd 25, 360(1)
  029c6f0  stfd 26, 368(1)
  029c6f4  stfd 27, 376(1)
  029c6f8  stfd 28, 384(1)
  029c6fc  stfd 29, 392(1)
  029c700  stfd 30, 400(1)
  029c704  stfd 31, 408(1)
  029c708  lis 4, 123
  029c70c  std 31, 304(1)
  029c710  lis 5, 42
  029c714  ori 31, 3, 0
  029c718  lwz 4, -18116(4)
  029c71c  addic 4, 4, 1
  029c720  extsw 4, 4
  029c724  std 4, 256(1)
  029c728  addi 4, 5, -14664
  029c72c  lis 5, 114
  029c730  lfs 27, 0(4)
  029c734  lfs 1, -3056(5)
  029c738  lfd 2, 256(1)
  029c73c  lis 4, 150
  029c740  fcfid 2, 2
  029c744  addic 4, 4, -12976
  029c748  lwz 4, 52(4)
  029c74c  frsp 2, 2
  029c750  fadds 2, 2, 27
  029c754  fmuls 1, 1, 2
  029c758  fctiwz 1, 1
  029c75c  stfd 1, 256(1)
  029c760  lwz 3, 260(1)
  029c764  std 30, 296(1)
  029c768  std 29, 288(1)
  029c76c  std 28, 280(1)
  029c770  cmpw 4, 3
  029c774  bf 2, 0x29c79c
  029c778  lis 3, 251
  029c77c  li 4, 0
  029c780  addic 6, 3, -9280
  029c784  lis 7, -15820
  029c788  lis 5, 16256
  029c78c  stw 4, -9280(3)
  029c790  stw 4, 4(6)
  029c794  stw 7, 8(6)
  029c798  stw 5, 12(6)
  029c79c  li 3, 11
  029c7a0  bl 0x685c4
  029c7a4  nop
  029c7a8  std 3, 232(1)
  029c7ac  li 3, 0
  029c7b0  lis 9, 0
  029c7b4  li 4, 0
  029c7b8  li 5, 1
  029c7bc  li 6, 1
  029c7c0  li 7, 1
  029c7c4  li 8, 0
  029c7c8  ori 9, 9, 65424
  029c7cc  bl 0x502fd4
  029c7d0  nop
  029c7d4  std 3, 240(1)
  029c7d8  li 4, 0
  029c7dc  li 3, 0
  029c7e0  li 5, 0
  029c7e4  li 6, 0
  029c7e8  li 7, 0
  029c7ec  li 8, 0
  029c7f0  bl 0x502f08
  029c7f4  nop
  029c7f8  std 3, 224(1)
  029c7fc  li 3, 0
  029c800  li 4, 2
  029c804  li 5, 0
  029c808  li 6, 1
  029c80c  li 7, 128
  029c810  bl 0x502ea8
  029c814  nop
  029c818  std 3, 248(1)
  029c81c  li 3, 0
  029c820  bl 0x502e50
  029c824  nop
  029c828  ori 4, 3, 0
  029c82c  li 3, 8
  029c830  bl 0x174f80
  029c834  nop
  029c838  li 3, 1
  029c83c  li 4, 0
  029c840  li 10, 2
  029c844  li 5, 0
  029c848  li 6, 1
  029c84c  li 7, 0
  029c850  li 8, 0
  029c854  li 9, 1
  029c858  bl 0x502f98
  029c85c  nop
  029c860  ori 4, 3, 0
  029c864  li 3, 22
  029c868  bl 0x174f80
  029c86c  nop
  029c870  lis 3, 251
  029c874  lfs 1, 212(31)
  029c878  addic 4, 3, -9280
  029c87c  lfs 2, 208(31)
  029c880  lfs 3, 196(31)
  029c884  lfs 5, -9280(3)
  029c888  lfs 6, 4(4)
  029c88c  lfs 4, 192(31)
  029c890  fmuls 1, 1, 6
  029c894  fmuls 2, 2, 6
  029c898  lfs 7, 8(4)
  029c89c  lfs 8, 228(31)
  029c8a0  lis 3, 149
  029c8a4  lfs 9, 216(31)
  029c8a8  lfs 10, 224(31)
  029c8ac  fmuls 9, 9, 6
  029c8b0  lfs 11, 200(31)
  029c8b4  lfs 29, 20(31)
  029c8b8  addic 3, 3, 5056
  029c8bc  fmadds 1, 3, 5, 1
  029c8c0  fmadds 2, 4, 5, 2
  029c8c4  lfs 3, 232(31)
  029c8c8  fmadds 4, 11, 5, 9
  029c8cc  fmadds 1, 8, 7, 1
  029c8d0  fmadds 30, 10, 7, 2
  029c8d4  lfs 2, 16(31)
  029c8d8  lfs 8, 324(3)
  029c8dc  fmadds 28, 3, 7, 4
  029c8e0  lfs 3, 24(31)
  029c8e4  lfs 4, 320(3)
  029c8e8  lfs 9, 328(3)
  029c8ec  fadds 29, 1, 29
  029c8f0  fadds 30, 30, 2
  029c8f4  lis 3, 42
  029c8f8  addi 3, 3, -14664
  029c8fc  fadds 28, 28, 3
  029c900  fsubs 2, 29, 8
  029c904  fsubs 1, 30, 4
  029c908  lfs 24, 4(3)
  029c90c  lfs 8, 220(31)
  029c910  fmuls 6, 8, 6
  029c914  fsubs 3, 28, 9
  029c918  fmr 21, 24
  029c91c  fmuls 4, 2, 2
  029c920  lfs 9, 204(31)
  029c924  lfs 10, 236(31)
  029c928  lfs 31, 12(4)
  029c92c  fmadds 5, 9, 5, 6
  029c930  fmr 20, 21
  029c934  fmadds 4, 1, 1, 4
  029c938  fmadds 5, 10, 7, 5
  029c93c  fmr 19, 20
  029c940  fmadds 4, 3, 3, 4
  029c944  fadds 31, 5, 31
  029c948  fsqrts 8, 4
  029c94c  fcmpu 0, 8, 19
  029c950  bt 2, 0x29c9a0
  029c954  frsqrte 5, 4
  029c958  lis 3, 42
  029c95c  addi 3, 3, -14664
  029c960  lfs 6, 8(3)
  029c964  fmuls 7, 4, 5
  029c968  fmuls 8, 27, 5
  029c96c  fnmsubs 7, 7, 5, 6
  029c970  fmadds 5, 7, 8, 5
  029c974  fmuls 7, 4, 5
  029c978  fmuls 8, 27, 5
  029c97c  fnmsubs 7, 7, 5, 6
  029c980  fmadds 5, 7, 8, 5
  029c984  fmuls 4, 4, 5
  029c988  fmuls 7, 27, 5
  029c98c  fnmsubs 4, 4, 5, 6
  029c990  fmadds 21, 4, 7, 5
  029c994  fmuls 19, 1, 21
  029c998  fmuls 20, 2, 21
  029c99c  fmuls 21, 3, 21
  029c9a0  fmuls 1, 20, 20
  029c9a4  fmr 23, 24
  029c9a8  fneg 1, 1
  029c9ac  fmr 22, 23
  029c9b0  fneg 1, 1
  029c9b4  fmadds 1, 19, 19, 1
  029c9b8  fsqrts 2, 1
  029c9bc  fcmpu 0, 2, 22
  029c9c0  bt 2, 0x29ca10
  029c9c4  frsqrte 2, 1
  029c9c8  lis 3, 42
  029c9cc  addi 3, 3, -14664
  029c9d0  lfs 3, 8(3)
  029c9d4  fmuls 4, 1, 2
  029c9d8  fmuls 5, 27, 2
  029c9dc  fnmsubs 4, 4, 2, 3
  029c9e0  fmadds 2, 4, 5, 2
  029c9e4  fmuls 4, 1, 2
  029c9e8  fmuls 5, 27, 2
  029c9ec  fnmsubs 4, 4, 2, 3
  029c9f0  fmadds 2, 4, 5, 2
  029c9f4  fmuls 1, 1, 2
  029c9f8  fmuls 4, 27, 2
  029c9fc  fnmsubs 1, 1, 2, 3
  029ca00  fmadds 23, 1, 4, 2
  029ca04  fmuls 22, 20, 23
  029ca08  fmuls 23, 19, 23
  029ca0c  fneg 22, 22
  029ca10  lis 3, 251
  029ca14  lis 4, 16256
  029ca18  fmuls 27, 21, 23
  029ca1c  li 6, 0
  029ca20  fmuls 25, 20, 22
  029ca24  lis 5, 123
  029ca28  fmsubs 26, 21, 22, 24
  029ca2c  lis 30, 123
  029ca30  lwz 3, -9340(3)
  029ca34  stw 4, 192(1)
  029ca38  addic 31, 1, 112
  029ca3c  stw 4, 196(1)
  029ca40  slwi 3, 3, 24
  029ca44  stw 6, 200(1)
  029ca48  addic 30, 30, -18048
  029ca4c  stw 4, 204(1)
  029ca50  li 29, 4
  029ca54  lwz 5, -17972(5)
  029ca58  stw 4, 208(1)
  029ca5c  or 7, 5, 3
  029ca60  stw 6, 212(1)
  029ca64  stw 6, 216(1)
  029ca68  fmsubs 27, 20, 24, 27
  029ca6c  stw 6, 220(1)
  029ca70  fmsubs 25, 19, 23, 25
  029ca74  lis 3, 123
  029ca78  stw 7, 188(1)
  029ca7c  stw 7, 184(1)
  029ca80  ori 4, 31, 0
  029ca84  stw 7, 180(1)
  029ca88  ori 5, 30, 0
  029ca8c  mtctr 29
  029ca90  stw 7, 176(1)
  029ca94  lfs 1, 0(5)
  029ca98  lfs 2, -17968(3)
  029ca9c  fmuls 1, 1, 2
  029caa0  fmuls 4, 1, 31
  029caa4  stfs 1, 0(4)
  029caa8  lfs 2, 4(5)
  029caac  lfs 3, -17968(3)
  029cab0  fmuls 2, 2, 3
  029cab4  fmadds 3, 1, 21, 24
  029cab8  fmuls 5, 2, 22
  029cabc  fmuls 6, 2, 23
  029cac0  stfs 2, 4(4)
  029cac4  lfs 2, 8(5)
  029cac8  lfs 7, -17968(3)
  029cacc  fmuls 2, 2, 7
  029cad0  fmadds 5, 1, 19, 5
  029cad4  fmadds 1, 1, 20, 6
  029cad8  fmadds 3, 2, 25, 3
  029cadc  stfs 2, 8(4)
  029cae0  lfs 6, 12(5)
  029cae4  fmadds 5, 2, 27, 5
  029cae8  addic 5, 5, 16
  029caec  fmadds 1, 2, 26, 1
  029caf0  fmadds 2, 6, 31, 4
  029caf4  fmadds 3, 6, 28, 3
  029caf8  fmadds 4, 6, 30, 5
  029cafc  fmadds 1, 6, 29, 1
  029cb00  stfs 2, 12(4)
  029cb04  stfs 3, 8(4)
  029cb08  stfs 4, 0(4)
  029cb0c  stfs 1, 4(4)
  029cb10  addic 4, 4, 16
  029cb14  bdnz 0x29ca94
  029cb18  lis 4, 161
  029cb1c  addic 3, 1, 112
  029cb20  addic 28, 4, 24396
  029cb24  li 4, 0
  029cb28  li 5, 0
  029cb2c  li 7, 9
  029cb30  lwz 6, 28(28)
  029cb34  bl 0x72280
  029cb38  nop
  029cb3c  lis 3, 251
  029cb40  lis 4, 123
  029cb44  mtctr 29
  029cb48  lwz 3, -9340(3)
  029cb4c  lwz 4, -17960(4)
  029cb50  slwi 5, 3, 24
  029cb54  lwz 3, 28(28)
  029cb58  or 4, 4, 5
  029cb5c  stw 4, 188(1)
  029cb60  stw 4, 184(1)
  029cb64  stw 4, 180(1)
  029cb68  stw 4, 176(1)
  029cb6c  lis 4, 123
  029cb70  lfs 1, 0(30)
  029cb74  lfs 2, -17964(4)
  029cb78  fmuls 1, 1, 2
  029cb7c  fmuls 4, 1, 31
  029cb80  stfs 1, 0(31)
  029cb84  lfs 2, 4(30)
  029cb88  lfs 3, -17964(4)
  029cb8c  fmuls 2, 2, 3
  029cb90  fmadds 3, 1, 21, 24
  029cb94  fmuls 5, 2, 22
  029cb98  fmuls 6, 2, 23
  029cb9c  stfs 2, 4(31)
  029cba0  lfs 2, 8(30)
  029cba4  lfs 7, -17964(4)
  029cba8  fmuls 2, 2, 7
  029cbac  fmadds 5, 1, 19, 5
  029cbb0  fmadds 1, 1, 20, 6
  029cbb4  fmadds 3, 2, 25, 3
  029cbb8  stfs 2, 8(31)
  029cbbc  lfs 6, 12(30)
  029cbc0  fmadds 5, 2, 27, 5
  029cbc4  fmadds 1, 2, 26, 1
  029cbc8  addic 30, 30, 16
  029cbcc  fmadds 2, 6, 31, 4
  029cbd0  fmadds 3, 6, 28, 3
  029cbd4  fmadds 4, 6, 30, 5
  029cbd8  fmadds 1, 6, 29, 1
  029cbdc  stfs 2, 12(31)
  029cbe0  stfs 3, 8(31)
  029cbe4  stfs 4, 0(31)
  029cbe8  stfs 1, 4(31)
  029cbec  addic 31, 31, 16
  029cbf0  bdnz 0x29cb6c
  029cbf4  ori 6, 3, 0
  029cbf8  addic 3, 1, 112
  029cbfc  li 4, 0
  029cc00  li 5, 0
  029cc04  li 7, 9
  029cc08  bl 0x72280
  029cc0c  nop
  029cc10  ld 0, 432(1)
  029cc14  mtlr 0
  029cc18  lfd 19, 312(1)
  029cc1c  lfd 20, 320(1)
  029cc20  lfd 21, 328(1)
  029cc24  lfd 22, 336(1)
  029cc28  lfd 23, 344(1)
  029cc2c  lfd 24, 352(1)
  029cc30  lfd 25, 360(1)
  029cc34  lfd 26, 368(1)
  029cc38  lfd 27, 376(1)
  029cc3c  lfd 28, 384(1)
  029cc40  lfd 29, 392(1)
  029cc44  lfd 30, 400(1)
  029cc48  lfd 31, 408(1)
  029cc4c  ld 28, 280(1)
  029cc50  ld 29, 288(1)
  029cc54  ld 30, 296(1)
  029cc58  ld 31, 304(1)
  029cc5c  addi 1, 1, 416
  029cc60  blr

M1564_0029cc78:   # 0x29cc78, 0x674 bytes
  029cc78  stdu 1, -480(1)
  029cc7c  mflr 0
  029cc80  std 0, 496(1)
  029cc84  stfd 18, 368(1)
  029cc88  stfd 19, 376(1)
  029cc8c  stfd 20, 384(1)
  029cc90  stfd 21, 392(1)
  029cc94  stfd 22, 400(1)
  029cc98  stfd 23, 408(1)
  029cc9c  stfd 24, 416(1)
  029cca0  stfd 25, 424(1)
  029cca4  stfd 26, 432(1)
  029cca8  stfd 27, 440(1)
  029ccac  stfd 28, 448(1)
  029ccb0  stfd 29, 456(1)
  029ccb4  stfd 30, 464(1)
  029ccb8  stfd 31, 472(1)
  029ccbc  std 31, 360(1)
  029ccc0  ori 31, 3, 0
  029ccc4  li 3, 11
  029ccc8  std 30, 352(1)
  029cccc  lis 4, 42
  029ccd0  std 29, 344(1)
  029ccd4  std 28, 336(1)
  029ccd8  std 27, 328(1)
  029ccdc  addi 30, 4, -13212
  029cce0  bl 0x685c4
  029cce4  nop
  029cce8  std 3, 296(1)
  029ccec  li 3, 0
  029ccf0  lis 9, 0
  029ccf4  li 4, 0
  029ccf8  li 5, 1
  029ccfc  li 6, 1
  029cd00  li 7, 1
  029cd04  li 8, 0
  029cd08  ori 9, 9, 65424
  029cd0c  bl 0x502fd4
  029cd10  nop
  029cd14  std 3, 304(1)
  029cd18  li 4, 0
  029cd1c  li 3, 0
  029cd20  li 5, 0
  029cd24  li 6, 0
  029cd28  li 7, 0
  029cd2c  li 8, 0
  029cd30  bl 0x502f08
  029cd34  nop
  029cd38  std 3, 288(1)
  029cd3c  li 3, 0
  029cd40  li 4, 2
  029cd44  li 5, 0
  029cd48  li 6, 1
  029cd4c  li 7, 128
  029cd50  bl 0x502ea8
  029cd54  nop
  029cd58  std 3, 312(1)
  029cd5c  li 3, 0
  029cd60  bl 0x502e50
  029cd64  nop
  029cd68  ori 4, 3, 0
  029cd6c  li 3, 8
  029cd70  bl 0x174f80
  029cd74  nop
  029cd78  li 3, 1
  029cd7c  li 4, 0
  029cd80  li 10, 2
  029cd84  li 5, 0
  029cd88  li 6, 1
  029cd8c  li 7, 0
  029cd90  li 8, 0
  029cd94  li 9, 1
  029cd98  bl 0x502f98
  029cd9c  nop
  029cda0  ori 4, 3, 0
  029cda4  li 3, 22
  029cda8  bl 0x174f80
  029cdac  nop
  029cdb0  lis 3, 251
  029cdb4  lfs 1, 208(31)
  029cdb8  addic 4, 3, -9280
  029cdbc  lfs 2, 216(31)
  029cdc0  lfs 5, -9280(3)
  029cdc4  lfs 4, 4(4)
  029cdc8  lis 3, 149
  029cdcc  lfs 3, 212(31)
  029cdd0  fmuls 2, 2, 4
  029cdd4  lfs 6, 192(31)
  029cdd8  fmuls 3, 3, 4
  029cddc  lfs 7, 200(31)
  029cde0  fmuls 1, 1, 4
  029cde4  lfs 8, 8(4)
  029cde8  addic 3, 3, 5056
  029cdec  lfs 9, 196(31)
  029cdf0  lfs 25, 232(31)
  029cdf4  lfs 27, 224(31)
  029cdf8  lfs 26, 228(31)
  029cdfc  lfs 28, 24(31)
  029ce00  lfs 24, 0(30)
  029ce04  fmadds 2, 7, 5, 2
  029ce08  lfs 30, 16(31)
  029ce0c  fmadds 3, 9, 5, 3
  029ce10  lfs 29, 20(31)
  029ce14  fmadds 1, 6, 5, 1
  029ce18  lfs 6, 328(3)
  029ce1c  lfs 7, 320(3)
  029ce20  fmadds 2, 25, 8, 2
  029ce24  fmadds 3, 26, 8, 3
  029ce28  fmadds 1, 27, 8, 1
  029ce2c  fmuls 27, 27, 24
  029ce30  fmuls 25, 25, 24
  029ce34  fmuls 26, 26, 24
  029ce38  fadds 28, 2, 28
  029ce3c  fadds 29, 3, 29
  029ce40  fadds 30, 1, 30
  029ce44  lfs 1, 324(3)
  029ce48  fsubs 3, 28, 6
  029ce4c  fsubs 6, 29, 1
  029ce50  fsubs 2, 30, 7
  029ce54  fmuls 1, 27, 3
  029ce58  fmuls 7, 25, 6
  029ce5c  fmuls 9, 26, 2
  029ce60  fmsubs 2, 25, 2, 1
  029ce64  fmsubs 1, 26, 3, 7
  029ce68  fmsubs 3, 27, 6, 9
  029ce6c  lfs 7, 220(31)
  029ce70  fmuls 7, 7, 4
  029ce74  lfs 20, 8(30)
  029ce78  fmuls 6, 2, 2
  029ce7c  fmr 19, 20
  029ce80  lfs 9, 204(31)
  029ce84  fmadds 5, 9, 5, 7
  029ce88  lfs 7, 236(31)
  029ce8c  fmadds 6, 1, 1, 6
  029ce90  fmr 18, 19
  029ce94  fmadds 8, 7, 8, 5
  029ce98  lfs 5, 4(30)
  029ce9c  fmadds 4, 3, 3, 6
  029cea0  lfs 31, 12(4)
  029cea4  fmadds 24, 7, 24, 5
  029cea8  fadds 31, 8, 31
  029ceac  fsqrts 6, 4
  029ceb0  fcmpu 0, 6, 18
  029ceb4  bt 2, 0x29cf04
  029ceb8  frsqrte 6, 4
  029cebc  lis 3, 42
  029cec0  addi 3, 3, -13212
  029cec4  lfs 7, 12(3)
  029cec8  fmuls 8, 4, 6
  029cecc  fmuls 9, 7, 6
  029ced0  fnmsubs 8, 8, 6, 5
  029ced4  fmadds 6, 8, 9, 6
  029ced8  fmuls 8, 4, 6
  029cedc  fmuls 9, 7, 6
  029cee0  fnmsubs 8, 8, 6, 5
  029cee4  fmadds 6, 8, 9, 6
  029cee8  fmuls 4, 4, 6
  029ceec  fmuls 7, 7, 6
  029cef0  fnmsubs 4, 4, 6, 5
  029cef4  fmadds 20, 4, 7, 6
  029cef8  fmuls 18, 1, 20
  029cefc  fmuls 19, 2, 20
  029cf00  fmuls 20, 3, 20
  029cf04  lis 4, 16256
  029cf08  fmuls 23, 20, 26
  029cf0c  lis 3, 123
  029cf10  fmuls 22, 18, 25
  029cf14  li 5, 0
  029cf18  fmuls 21, 19, 27
  029cf1c  lis 6, -256
  029cf20  stw 4, 256(1)
  029cf24  stw 4, 260(1)
  029cf28  lis 7, 123
  029cf2c  lwz 9, -17972(3)
  029cf30  lis 8, 251
  029cf34  stw 5, 264(1)
  029cf38  lis 29, 123
  029cf3c  stw 4, 268(1)
  029cf40  or 6, 9, 6
  029cf44  stw 4, 272(1)
  029cf48  addic 30, 1, 112
  029cf4c  stw 5, 276(1)
  029cf50  addic 29, 29, -17936
  029cf54  stw 5, 280(1)
  029cf58  li 27, 4
  029cf5c  stw 5, 284(1)
  029cf60  ori 3, 1, 0
  029cf64  stw 6, 240(1)
  029cf68  fmsubs 23, 19, 25, 23
  029cf6c  stw 6, 244(1)
  029cf70  fmsubs 22, 20, 27, 22
  029cf74  stw 6, 248(1)
  029cf78  fmsubs 21, 18, 26, 21
  029cf7c  stw 6, 252(1)
  029cf80  ori 4, 30, 0
  029cf84  lfs 1, -17956(7)
  029cf88  ori 5, 29, 0
  029cf8c  mtctr 27
  029cf90  lfs 2, -9332(8)
  029cf94  lfs 3, 0(5)
  029cf98  stfs 3, 0(4)
  029cf9c  lfs 3, 4(5)
  029cfa0  stfs 3, 4(4)
  029cfa4  lfs 3, 8(5)
  029cfa8  stfs 3, 8(4)
  029cfac  lfs 3, 12(5)
  029cfb0  addic 5, 5, 16
  029cfb4  stfs 3, 12(4)
  029cfb8  lfs 3, 120(3)
  029cfbc  lfs 4, 112(3)
  029cfc0  addic 4, 4, 16
  029cfc4  fmuls 3, 3, 1
  029cfc8  fmuls 4, 4, 2
  029cfcc  stfs 3, 120(3)
  029cfd0  stfs 4, 112(3)
  029cfd4  addic 3, 3, 16
  029cfd8  bdnz 0x29cf94
  029cfdc  addic 28, 1, 176
  029cfe0  ori 4, 30, 0
  029cfe4  ori 3, 28, 0
  029cfe8  mtctr 27
  029cfec  lfs 1, 4(4)
  029cff0  lfs 2, 0(4)
  029cff4  fmuls 3, 1, 23
  029cff8  lfs 5, 8(4)
  029cffc  fmuls 4, 1, 22
  029d000  lfs 7, 12(4)
  029d004  fmuls 1, 1, 21
  029d008  fmuls 6, 2, 24
  029d00c  addic 4, 4, 16
  029d010  fmadds 3, 2, 27, 3
  029d014  fmadds 4, 2, 26, 4
  029d018  fmadds 1, 2, 25, 1
  029d01c  fmadds 2, 7, 31, 6
  029d020  fmadds 3, 5, 18, 3
  029d024  fmadds 4, 5, 19, 4
  029d028  fmadds 1, 5, 20, 1
  029d02c  stfs 2, 12(3)
  029d030  fmadds 2, 7, 30, 3
  029d034  fmadds 3, 7, 29, 4
  029d038  fmadds 1, 7, 28, 1
  029d03c  stfs 2, 0(3)
  029d040  stfs 3, 4(3)
  029d044  stfs 1, 8(3)
  029d048  addic 3, 3, 16
  029d04c  bdnz 0x29cfec
  029d050  lis 31, 161
  029d054  addic 3, 1, 176
  029d058  addic 31, 31, 24396
  029d05c  li 4, 0
  029d060  li 5, 0
  029d064  li 7, 9
  029d068  lwz 6, 28(31)
  029d06c  bl 0x72280
  029d070  nop
  029d074  lis 3, 123
  029d078  lis 7, 123
  029d07c  lis 8, 251
  029d080  ori 5, 30, 0
  029d084  ori 4, 1, 0
  029d088  lwz 3, -17960(3)
  029d08c  lfs 1, -17952(7)
  029d090  ori 6, 29, 0
  029d094  oris 7, 3, 32512
  029d098  lfs 2, -9332(8)
  029d09c  lwz 3, 28(31)
  029d0a0  mtctr 27
  029d0a4  stw 7, 240(1)
  029d0a8  stw 7, 244(1)
  029d0ac  stw 7, 248(1)
  029d0b0  stw 7, 252(1)
  029d0b4  lfs 3, 0(6)
  029d0b8  stfs 3, 0(5)
  029d0bc  lfs 3, 4(6)
  029d0c0  stfs 3, 4(5)
  029d0c4  lfs 3, 8(6)
  029d0c8  stfs 3, 8(5)
  029d0cc  lfs 3, 12(6)
  029d0d0  addic 6, 6, 16
  029d0d4  stfs 3, 12(5)
  029d0d8  lfs 3, 120(4)
  029d0dc  lfs 4, 112(4)
  029d0e0  addic 5, 5, 16
  029d0e4  fmuls 3, 3, 1
  029d0e8  fmuls 4, 4, 2
  029d0ec  stfs 3, 120(4)
  029d0f0  stfs 4, 112(4)
  029d0f4  addic 4, 4, 16
  029d0f8  bdnz 0x29d0b4
  029d0fc  ori 4, 28, 0
  029d100  ori 5, 30, 0
  029d104  mtctr 27
  029d108  lfs 1, 4(5)
  029d10c  lfs 2, 0(5)
  029d110  fmuls 3, 1, 23
  029d114  fmuls 4, 1, 22
  029d118  lfs 5, 8(5)
  029d11c  fmuls 1, 1, 21
  029d120  lfs 7, 12(5)
  029d124  fmuls 6, 2, 24
  029d128  addic 5, 5, 16
  029d12c  fmadds 3, 2, 27, 3
  029d130  fmadds 4, 2, 26, 4
  029d134  fmadds 1, 2, 25, 1
  029d138  fmadds 2, 7, 31, 6
  029d13c  fmadds 3, 5, 18, 3
  029d140  fmadds 4, 5, 19, 4
  029d144  fmadds 1, 5, 20, 1
  029d148  stfs 2, 12(4)
  029d14c  fmadds 2, 7, 30, 3
  029d150  fmadds 3, 7, 29, 4
  029d154  fmadds 1, 7, 28, 1
  029d158  stfs 2, 0(4)
  029d15c  stfs 3, 4(4)
  029d160  stfs 1, 8(4)
  029d164  addic 4, 4, 16
  029d168  bdnz 0x29d108
  029d16c  ori 6, 3, 0
  029d170  li 5, 0
  029d174  addic 3, 1, 176
  029d178  li 4, 0
  029d17c  li 7, 9
  029d180  bl 0x72280
  029d184  nop
  029d188  lis 5, 123
  029d18c  lis 6, 123
  029d190  lis 7, 251
  029d194  ori 4, 30, 0
  029d198  ori 3, 1, 0
  029d19c  lwz 5, -17960(5)
  029d1a0  mtctr 27
  029d1a4  lfs 1, -17948(6)
  029d1a8  oris 5, 5, 32512
  029d1ac  lfs 2, -9332(7)
  029d1b0  lwz 31, 28(31)
  029d1b4  stw 5, 240(1)
  029d1b8  stw 5, 244(1)
  029d1bc  stw 5, 248(1)
  029d1c0  stw 5, 252(1)
  029d1c4  lfs 3, 0(29)
  029d1c8  stfs 3, 0(4)
  029d1cc  lfs 3, 4(29)
  029d1d0  stfs 3, 4(4)
  029d1d4  lfs 3, 8(29)
  029d1d8  stfs 3, 8(4)
  029d1dc  lfs 3, 12(29)
  029d1e0  addic 29, 29, 16
  029d1e4  stfs 3, 12(4)
  029d1e8  lfs 3, 120(3)
  029d1ec  lfs 4, 112(3)
  029d1f0  addic 4, 4, 16
  029d1f4  fmuls 3, 3, 1
  029d1f8  fmuls 4, 4, 2
  029d1fc  stfs 3, 120(3)
  029d200  stfs 4, 112(3)
  029d204  addic 3, 3, 16
  029d208  bdnz 0x29d1c4
  029d20c  mtctr 27
  029d210  lfs 1, 4(30)
  029d214  lfs 2, 0(30)
  029d218  fmuls 3, 1, 23
  029d21c  fmuls 4, 1, 22
  029d220  lfs 5, 8(30)
  029d224  fmuls 1, 1, 21
  029d228  lfs 7, 12(30)
  029d22c  fmuls 6, 2, 24
  029d230  addic 30, 30, 16
  029d234  fmadds 3, 2, 27, 3
  029d238  fmadds 4, 2, 26, 4
  029d23c  fmadds 1, 2, 25, 1
  029d240  fmadds 2, 7, 31, 6
  029d244  fmadds 3, 5, 18, 3
  029d248  fmadds 4, 5, 19, 4
  029d24c  fmadds 1, 5, 20, 1
  029d250  stfs 2, 12(28)
  029d254  fmadds 2, 7, 30, 3
  029d258  fmadds 3, 7, 29, 4
  029d25c  fmadds 1, 7, 28, 1
  029d260  stfs 2, 0(28)
  029d264  stfs 3, 4(28)
  029d268  stfs 1, 8(28)
  029d26c  addic 28, 28, 16
  029d270  bdnz 0x29d210
  029d274  addic 3, 1, 176
  029d278  li 4, 0
  029d27c  li 5, 0
  029d280  ori 6, 31, 0
  029d284  li 7, 9
  029d288  bl 0x72280
  029d28c  nop
  029d290  ld 0, 496(1)
  029d294  mtlr 0
  029d298  lfd 18, 368(1)
  029d29c  lfd 19, 376(1)
  029d2a0  lfd 20, 384(1)
  029d2a4  lfd 21, 392(1)
  029d2a8  lfd 22, 400(1)
  029d2ac  lfd 23, 408(1)
  029d2b0  lfd 24, 416(1)
  029d2b4  lfd 25, 424(1)
  029d2b8  lfd 26, 432(1)
  029d2bc  lfd 27, 440(1)
  029d2c0  lfd 28, 448(1)
  029d2c4  lfd 29, 456(1)
  029d2c8  lfd 30, 464(1)
  029d2cc  lfd 31, 472(1)
  029d2d0  ld 27, 328(1)
  029d2d4  ld 28, 336(1)
  029d2d8  ld 29, 344(1)
  029d2dc  ld 30, 352(1)
  029d2e0  ld 31, 360(1)
  029d2e4  addi 1, 1, 480
  029d2e8  blr

UpdateMoby_1564:   # 0x29d2f8, 0x2ec bytes
  029d2f8  stdu 1, -144(1)
  029d2fc  mflr 0
  029d300  std 0, 160(1)
  029d304  std 29, 120(1)
  029d308  lwz 29, 120(3)
  029d30c  std 31, 136(1)
  029d310  lis 4, 165
  029d314  std 30, 128(1)
  029d318  ori 31, 3, 0
  029d31c  addic 30, 4, 7136
  029d320  lbz 3, 32(3)
  029d324  lwz 4, 96(29)
  029d328  cmpwi 3, 0
  029d32c  cmpwi 6, 3, 1
  029d330  slwi 5, 4, 2
  029d334  cmpwi 1, 4, -1
  029d338  extsw 5, 5
  029d33c  cmpwi 7, 3, -1
  029d340  std 28, 112(1)
  029d344  lwzx 30, 30, 5
  029d348  bt 1, 0x29d354
  029d34c  bf 29, 0x29d5c4
  029d350  b 0x29d35c
  029d354  bf 25, 0x29d47c
  029d358  b 0x29d5c4
  029d35c  bf 6, 0x29d370
  029d360  ori 3, 31, 0
  029d364  bl 0xefb38
  029d368  nop
  029d36c  b 0x29d5c4
  029d370  lfs 1, 20(30)
  029d374  lfs 2, 36(30)
  029d378  lfs 3, 16(30)
  029d37c  fsubs 2, 1, 2
  029d380  lfs 4, 32(30)
  029d384  lfs 5, 24(30)
  029d388  fsubs 4, 3, 4
  029d38c  lfs 6, 40(30)
  029d390  lwz 3, 0(30)
  029d394  fsubs 6, 5, 6
  029d398  slwi 3, 3, 4
  029d39c  addc 3, 30, 3
  029d3a0  fmuls 2, 2, 2
  029d3a4  clrldi 3, 3, 32
  029d3a8  lis 4, 114
  029d3ac  fmadds 2, 4, 4, 2
  029d3b0  lfs 4, 4(3)
  029d3b4  fsubs 1, 1, 4
  029d3b8  fmadds 2, 6, 6, 2
  029d3bc  lfs 6, 0(3)
  029d3c0  lfs 4, 8(3)
  029d3c4  fsubs 3, 3, 6
  029d3c8  fmuls 1, 1, 1
  029d3cc  lis 3, 123
  029d3d0  fsubs 4, 5, 4
  029d3d4  fsqrts 2, 2
  029d3d8  lfs 7, -17872(3)
  029d3dc  lfs 8, -3052(4)
  029d3e0  lis 3, 42
  029d3e4  addi 4, 3, -11536
  029d3e8  li 3, 0
  029d3ec  fmadds 1, 3, 3, 1
  029d3f0  fmuls 5, 7, 8
  029d3f4  fmadds 1, 4, 4, 1
  029d3f8  fsqrts 1, 1
  029d3fc  fdivs 3, 5, 2
  029d400  fsubs 1, 2, 1
  029d404  fabs 1, 1
  029d408  stfs 3, 116(29)
  029d40c  lfs 2, 0(4)
  029d410  fcmpu 0, 1, 2
  029d414  cror 6, 1, 2
  029d418  bt 6, 0x29d420
  029d41c  li 3, 1
  029d420  stw 3, 112(29)
  029d424  li 4, 104
  029d428  <unknown>
  029d42c  li 3, 108
  029d430  addi 5, 4, 16
  029d434  vspltisw 5, -1
  029d438  vcfsx 2, 2, 0
  029d43c  li 6, 255
  029d440  <unknown>
  029d444  li 4, 1
  029d448  <unknown>
  029d44c  lis 5, 123
  029d450  vor 3, 3, 4
  029d454  vslw 4, 5, 5
  029d458  vmaddfp 2, 3, 2, 4
  029d45c  vspltw 2, 2, 0
  029d460  stvewx 2, 3, 29
  029d464  stb 4, 32(31)
  029d468  lfs 1, 44(31)
  029d46c  lfs 2, -17868(5)
  029d470  stb 6, 48(31)
  029d474  fmuls 1, 1, 2
  029d478  stfs 1, 44(31)
  029d47c  lwz 4, 24(31)
  029d480  ori 28, 30, 0
  029d484  lfs 1, 108(29)
  029d488  srawi 30, 4, 31
  029d48c  lwz 5, 112(29)
  029d490  ori 3, 28, 0
  029d494  srwi 8, 30, 1
  029d498  addic 6, 31, 16
  029d49c  xor 4, 8, 4
  029d4a0  addic 7, 31, 64
  029d4a4  extsw 5, 5
  029d4a8  li 8, 0
  029d4ac  subc 30, 4, 30
  029d4b0  bl 0x117390
  029d4b4  nop
  029d4b8  lis 3, 42
  029d4bc  lfs 1, 68(31)
  029d4c0  addi 3, 3, -11536
  029d4c4  li 4, 116
  029d4c8  addi 5, 4, 16
  029d4cc  lfs 2, 4(3)
  029d4d0  lfs 3, 24(31)
  029d4d4  li 3, 108
  029d4d8  fmuls 1, 1, 2
  029d4dc  <unknown>
  029d4e0  addi 6, 3, 16
  029d4e4  vcfsx 2, 2, 0
  029d4e8  stfs 1, 68(31)
  029d4ec  lfs 1, 100(29)
  029d4f0  fadds 1, 3, 1
  029d4f4  vspltw 4, 2, 0
  029d4f8  stfs 1, 24(31)
  029d4fc  <unknown>
  029d500  <unknown>
  029d504  <unknown>
  029d508  vor 3, 3, 5
  029d50c  <unknown>
  029d510  vor 5, 6, 5
  029d514  vaddfp 3, 3, 5
  029d518  vspltw 5, 3, 0
  029d51c  vcmpgtfp. 4, 5, 4
  029d520  stvewx 5, 3, 29
  029d524  bt 26, 0x29d538
  029d528  vsubfp 2, 3, 2
  029d52c  li 3, 108
  029d530  vspltw 2, 2, 0
  029d534  stvewx 2, 3, 29
  029d538  lbz 3, 112(31)
  029d53c  rlwinm 3, 3, 0, 30, 30
  029d540  cmpwi 3, 0
  029d544  bt 2, 0x29d5c4
  029d548  lwz 3, 24(31)
  029d54c  srawi 4, 3, 31
  029d550  srwi 5, 4, 1
  029d554  xor 3, 5, 3
  029d558  subc 3, 3, 4
  029d55c  cmpw 30, 3
  029d560  bt 0, 0x29d578
  029d564  li 3, 3
  029d568  bl 0xfc620
  029d56c  nop
  029d570  cmpwi 3, 0
  029d574  bt 2, 0x29d5a0
  029d578  lbz 3, 83(31)
  029d57c  cmpwi 3, 0
  029d580  bt 2, 0x29d5c4
  029d584  ori 3, 31, 0
  029d588  li 4, 0
  029d58c  li 5, 0
  029d590  li 6, 10
  029d594  bl 0xfddc0
  029d598  nop
  029d59c  b 0x29d5c4
  029d5a0  lbz 3, 83(31)
  029d5a4  cmpwi 3, 1
  029d5a8  bt 2, 0x29d5c4
  029d5ac  ori 3, 31, 0
  029d5b0  li 4, 1
  029d5b4  li 5, 0
  029d5b8  li 6, 10
  029d5bc  bl 0xfddc0
  029d5c0  nop
  029d5c4  ld 0, 160(1)
  029d5c8  mtlr 0
  029d5cc  ld 28, 112(1)
  029d5d0  ld 29, 120(1)
  029d5d4  ld 30, 128(1)
  029d5d8  ld 31, 136(1)
  029d5dc  addi 1, 1, 144
  029d5e0  blr
