# game/update/moby542.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_003aef30:   # 0x3aef30, 0x74 bytes
  03aef30  lis 4, 165
  03aef34  sldi 3, 3, 2
  03aef38  addic 6, 4, -28284
  03aef3c  extsw 3, 3
  03aef40  lwzx 6, 6, 3
  03aef44  cmpwi 6, 0
  03aef48  bt 2, 0x3aefa0
  03aef4c  lis 5, 164
  03aef50  li 4, 2
  03aef54  li 3, 1
  03aef58  lhz 7, 0(6)
  03aef5c  lwz 8, -28512(5)
  03aef60  rlwinm 7, 7, 8, 9, 23
  03aef64  addc 7, 8, 7
  03aef68  clrldi 7, 7, 32
  03aef6c  lhz 8, 166(7)
  03aef70  cmpwi 8, 541
  03aef74  bf 2, 0x3aef58
  03aef78  lhz 8, 52(7)
  03aef7c  stb 4, 32(7)
  03aef80  rlwinm 8, 8, 0, 0, 30
  03aef84  stb 3, 49(7)
  03aef88  sth 8, 52(7)
  03aef8c  lhz 7, 0(6)
  03aef90  addic 6, 6, 2
  03aef94  extsh 7, 7
  03aef98  cmpwi 7, 0
  03aef9c  bf 0, 0x3aef58
  03aefa0  blr

M542_003aefd0:   # 0x3aefd0, 0x45c bytes
  03aefd0  stdu 1, -448(1)
  03aefd4  mflr 0
  03aefd8  std 0, 464(1)
  03aefdc  stfd 21, 360(1)
  03aefe0  stfd 22, 368(1)
  03aefe4  stfd 23, 376(1)
  03aefe8  stfd 24, 384(1)
  03aefec  stfd 25, 392(1)
  03aeff0  stfd 26, 400(1)
  03aeff4  stfd 27, 408(1)
  03aeff8  stfd 28, 416(1)
  03aeffc  stfd 29, 424(1)
  03af000  stfd 30, 432(1)
  03af004  stfd 31, 440(1)
  03af008  std 28, 328(1)
  03af00c  ori 28, 3, 0
  03af010  li 3, 11
  03af014  std 31, 352(1)
  03af018  lis 4, 59
  03af01c  std 30, 344(1)
  03af020  std 29, 336(1)
  03af024  std 27, 320(1)
  03af028  addi 31, 4, -4188
  03af02c  bl 0x685c4
  03af030  nop
  03af034  std 3, 296(1)
  03af038  li 3, 0
  03af03c  li 4, 2
  03af040  li 5, 0
  03af044  li 6, 1
  03af048  li 7, 128
  03af04c  bl 0x502ea8
  03af050  nop
  03af054  std 3, 312(1)
  03af058  li 3, 0
  03af05c  lis 9, 0
  03af060  li 4, 0
  03af064  li 5, 1
  03af068  li 6, 1
  03af06c  li 7, 1
  03af070  li 8, 0
  03af074  ori 9, 9, 65424
  03af078  bl 0x502fd4
  03af07c  nop
  03af080  std 3, 304(1)
  03af084  li 5, 0
  03af088  li 3, 1
  03af08c  li 4, 1
  03af090  li 6, 0
  03af094  li 7, 0
  03af098  li 8, 0
  03af09c  bl 0x502f08
  03af0a0  nop
  03af0a4  li 5, 0
  03af0a8  std 3, 288(1)
  03af0ac  lis 6, 16256
  03af0b0  lfs 21, 0(31)
  03af0b4  lis 3, 132
  03af0b8  li 7, 4
  03af0bc  stw 5, 256(1)
  03af0c0  stw 5, 260(1)
  03af0c4  addic 4, 1, 176
  03af0c8  stw 5, 264(1)
  03af0cc  addic 3, 3, 21936
  03af0d0  lfs 22, 4(31)
  03af0d4  mtctr 7
  03af0d8  stw 6, 268(1)
  03af0dc  stw 6, 272(1)
  03af0e0  stw 5, 276(1)
  03af0e4  stw 6, 280(1)
  03af0e8  stw 6, 284(1)
  03af0ec  lfs 23, 8(31)
  03af0f0  lbz 28, 33(28)
  03af0f4  lfs 1, 0(3)
  03af0f8  fmuls 1, 1, 23
  03af0fc  stfs 1, 0(4)
  03af100  lfs 1, 4(3)
  03af104  fmuls 1, 1, 23
  03af108  stfs 1, 4(4)
  03af10c  lfs 1, 8(3)
  03af110  fmuls 1, 1, 23
  03af114  stfs 1, 8(4)
  03af118  lfs 1, 12(3)
  03af11c  addic 3, 3, 16
  03af120  stfs 1, 12(4)
  03af124  addic 4, 4, 16
  03af128  bdnz 0x3af0f4
  03af12c  lis 3, 165
  03af130  lis 5, 59
  03af134  rlwinm 4, 28, 2, 22, 29
  03af138  addic 3, 3, -28284
  03af13c  addi 5, 5, -4188
  03af140  lis 29, 149
  03af144  lis 30, 151
  03af148  lis 31, 161
  03af14c  lwzx 28, 3, 4
  03af150  lfs 24, 12(5)
  03af154  addic 29, 29, 5056
  03af158  lfs 25, 16(5)
  03af15c  addic 30, 30, -25376
  03af160  lfs 26, 20(5)
  03af164  addic 31, 31, 24396
  03af168  lfs 27, 24(5)
  03af16c  lfs 28, 28(5)
  03af170  lfs 29, 32(5)
  03af174  lfs 30, 36(5)
  03af178  lfs 31, 40(5)
  03af17c  lis 3, 164
  03af180  lhz 4, 0(28)
  03af184  rlwinm 4, 4, 8, 9, 23
  03af188  lwz 3, -28512(3)
  03af18c  addc 27, 3, 4
  03af190  clrldi 27, 27, 32
  03af194  lwz 3, 120(27)
  03af198  lis 4, 132
  03af19c  lfs 1, 284(3)
  03af1a0  fsubs 2, 24, 1
  03af1a4  fsubs 3, 25, 1
  03af1a8  lis 3, 132
  03af1ac  fsub 4, 1, 2
  03af1b0  lwz 3, 21924(3)
  03af1b4  lwz 4, 21928(4)
  03af1b8  extsw 3, 3
  03af1bc  extsw 4, 4
  03af1c0  fsel 1, 4, 2, 1
  03af1c4  fsub 2, 3, 1
  03af1c8  fsel 1, 2, 3, 1
  03af1cc  fmuls 2, 1, 1
  03af1d0  fmuls 3, 2, 1
  03af1d4  fmuls 4, 2, 3
  03af1d8  fmadds 1, 3, 26, 1
  03af1dc  fmuls 3, 2, 4
  03af1e0  fmadds 1, 4, 27, 1
  03af1e4  fmuls 2, 2, 3
  03af1e8  fmadds 1, 3, 28, 1
  03af1ec  fmadds 1, 2, 29, 1
  03af1f0  fadds 1, 1, 22
  03af1f4  fmuls 1, 1, 30
  03af1f8  bl 0x5027bc
  03af1fc  nop
  03af200  stw 3, 252(1)
  03af204  cmpwi 27, 0
  03af208  stw 3, 248(1)
  03af20c  stw 3, 244(1)
  03af210  stw 3, 240(1)
  03af214  lwz 3, 28(31)
  03af218  bt 2, 0x3af3c8
  03af21c  lhz 4, 166(27)
  03af220  cmpwi 4, 541
  03af224  bf 2, 0x3af3c8
  03af228  lbz 4, 32(27)
  03af22c  cmpwi 1, 4, 253
  03af230  cmpwi 4, 254
  03af234  cror 2, 2, 6
  03af238  bt 2, 0x3af3c8
  03af23c  lfs 7, 16(27)
  03af240  stfs 7, 160(1)
  03af244  lfs 6, 20(27)
  03af248  lfs 1, 324(29)
  03af24c  stfs 6, 164(1)
  03af250  fsubs 6, 1, 6
  03af254  lfs 1, 24(27)
  03af258  lfs 2, 320(29)
  03af25c  fadds 1, 1, 23
  03af260  fsubs 7, 2, 7
  03af264  lfs 5, 328(29)
  03af268  fmr 3, 21
  03af26c  lis 4, 16256
  03af270  fmuls 2, 6, 6
  03af274  fsubs 5, 5, 1
  03af278  stfs 1, 168(1)
  03af27c  stfs 7, 112(1)
  03af280  stfs 6, 116(1)
  03af284  fmadds 4, 7, 7, 2
  03af288  fmr 2, 3
  03af28c  stw 4, 172(1)
  03af290  lfs 1, 332(29)
  03af294  stfs 5, 120(1)
  03af298  stfs 1, 124(1)
  03af29c  fmadds 4, 5, 5, 4
  03af2a0  fmr 1, 2
  03af2a4  fsqrts 8, 4
  03af2a8  fcmpu 0, 8, 1
  03af2ac  bt 2, 0x3af2f0
  03af2b0  frsqrte 1, 4
  03af2b4  fmuls 2, 4, 1
  03af2b8  fmuls 3, 30, 1
  03af2bc  fnmsubs 2, 2, 1, 22
  03af2c0  fmadds 1, 2, 3, 1
  03af2c4  fmuls 2, 4, 1
  03af2c8  fmuls 3, 30, 1
  03af2cc  fnmsubs 2, 2, 1, 22
  03af2d0  fmadds 1, 2, 3, 1
  03af2d4  fmuls 2, 4, 1
  03af2d8  fmuls 3, 30, 1
  03af2dc  fnmsubs 2, 2, 1, 22
  03af2e0  fmadds 3, 2, 3, 1
  03af2e4  fmuls 1, 7, 3
  03af2e8  fmuls 2, 6, 3
  03af2ec  fmuls 3, 5, 3
  03af2f0  lfs 4, 656(30)
  03af2f4  lfs 5, 664(30)
  03af2f8  fmuls 6, 4, 3
  03af2fc  lfs 7, 660(30)
  03af300  fmuls 8, 5, 2
  03af304  fmuls 9, 7, 1
  03af308  fmsubs 5, 5, 1, 6
  03af30c  fmsubs 6, 7, 3, 8
  03af310  fmsubs 4, 4, 2, 9
  03af314  stfs 1, 112(1)
  03af318  fmuls 7, 5, 5
  03af31c  stfs 2, 116(1)
  03af320  stfs 3, 120(1)
  03af324  ori 6, 3, 0
  03af328  li 3, 0
  03af32c  fmadds 7, 6, 6, 7
  03af330  stw 3, 140(1)
  03af334  addic 4, 1, 112
  03af338  stw 3, 156(1)
  03af33c  li 5, 0
  03af340  addic 3, 1, 176
  03af344  fmadds 7, 4, 4, 7
  03af348  li 7, 9
  03af34c  fsqrts 7, 7
  03af350  fdivs 8, 31, 7
  03af354  fsub 9, 21, 7
  03af358  fsub 10, 21, 7
  03af35c  fsub 11, 21, 7
  03af360  fsub 12, 7, 21
  03af364  fsub 13, 7, 21
  03af368  fsub 7, 7, 21
  03af36c  fmuls 6, 6, 8
  03af370  fmuls 5, 5, 8
  03af374  fmuls 4, 4, 8
  03af378  fsel 8, 9, 21, 6
  03af37c  fsel 9, 10, 21, 5
  03af380  fsel 10, 11, 21, 4
  03af384  fsel 6, 12, 8, 6
  03af388  fsel 5, 13, 9, 5
  03af38c  fsel 4, 7, 10, 4
  03af390  fmuls 7, 2, 6
  03af394  fmuls 8, 3, 5
  03af398  fmuls 9, 1, 4
  03af39c  stfs 6, 128(1)
  03af3a0  stfs 5, 132(1)
  03af3a4  stfs 4, 136(1)
  03af3a8  fmsubs 1, 1, 5, 7
  03af3ac  fmsubs 2, 2, 4, 8
  03af3b0  fmsubs 3, 3, 6, 9
  03af3b4  stfs 1, 152(1)
  03af3b8  stfs 2, 144(1)
  03af3bc  stfs 3, 148(1)
  03af3c0  bl 0x72280
  03af3c4  nop
  03af3c8  lhz 3, 0(28)
  03af3cc  addic 28, 28, 2
  03af3d0  extsh 3, 3
  03af3d4  cmpwi 3, 0
  03af3d8  bf 0, 0x3af17c
  03af3dc  ld 0, 464(1)
  03af3e0  mtlr 0
  03af3e4  lfd 21, 360(1)
  03af3e8  lfd 22, 368(1)
  03af3ec  lfd 23, 376(1)
  03af3f0  lfd 24, 384(1)
  03af3f4  lfd 25, 392(1)
  03af3f8  lfd 26, 400(1)
  03af3fc  lfd 27, 408(1)
  03af400  lfd 28, 416(1)
  03af404  lfd 29, 424(1)
  03af408  lfd 30, 432(1)
  03af40c  lfd 31, 440(1)
  03af410  ld 27, 320(1)
  03af414  ld 28, 328(1)
  03af418  ld 29, 336(1)
  03af41c  ld 30, 344(1)
  03af420  ld 31, 352(1)
  03af424  addi 1, 1, 448
  03af428  blr

M542_003af42c:   # 0x3af42c, 0x14 bytes
  03af42c  lis 3, 132
  03af430  lis 4, 1
  03af434  addic 3, 3, 22004
  03af438  stw 4, 72(3)
  03af43c  blr

M542_003af440:   # 0x3af440, 0x90 bytes
  03af440  stdu 1, -160(1)
  03af444  mflr 0
  03af448  std 0, 176(1)
  03af44c  std 27, 120(1)
  03af450  std 31, 152(1)
  03af454  li 27, 0
  03af458  std 30, 144(1)
  03af45c  std 29, 136(1)
  03af460  std 28, 128(1)
  03af464  lwz 31, 120(3)
  03af468  ori 29, 27, 0
  03af46c  ori 28, 29, 0
  03af470  ori 30, 31, 0
  03af474  or 3, 28, 27
  03af478  cmpwi 3, 0
  03af47c  bt 2, 0x3af48c
  03af480  lwz 3, 0(30)
  03af484  bl 0xf31a8
  03af488  nop
  03af48c  addic 28, 28, 1
  03af490  addic 30, 30, 4
  03af494  cmpwi 28, 3
  03af498  bt 0, 0x3af474
  03af49c  addic 27, 27, 1
  03af4a0  addic 31, 31, 12
  03af4a4  cmpwi 27, 4
  03af4a8  bt 0, 0x3af46c
  03af4ac  ld 0, 176(1)
  03af4b0  mtlr 0
  03af4b4  ld 27, 120(1)
  03af4b8  ld 28, 128(1)
  03af4bc  ld 29, 136(1)
  03af4c0  ld 30, 144(1)
  03af4c4  ld 31, 152(1)
  03af4c8  addi 1, 1, 160
  03af4cc  blr

M542_003af4f0:   # 0x3af4f0, 0x390 bytes
  03af4f0  stdu 1, -272(1)
  03af4f4  mflr 0
  03af4f8  std 0, 288(1)
  03af4fc  stfd 18, 160(1)
  03af500  stfd 19, 168(1)
  03af504  stfd 20, 176(1)
  03af508  stfd 21, 184(1)
  03af50c  stfd 22, 192(1)
  03af510  stfd 23, 200(1)
  03af514  stfd 24, 208(1)
  03af518  stfd 25, 216(1)
  03af51c  stfd 26, 224(1)
  03af520  stfd 27, 232(1)
  03af524  stfd 28, 240(1)
  03af528  stfd 29, 248(1)
  03af52c  stfd 30, 256(1)
  03af530  stfd 31, 264(1)
  03af534  std 29, 136(1)
  03af538  lis 4, 59
  03af53c  std 30, 144(1)
  03af540  lwz 29, 120(3)
  03af544  li 30, 0
  03af548  std 31, 152(1)
  03af54c  addi 4, 4, -2864
  03af550  ori 31, 29, 0
  03af554  lfs 26, 0(4)
  03af558  lfs 27, 4(4)
  03af55c  lfs 28, 8(4)
  03af560  lfs 29, 12(4)
  03af564  lfs 30, 16(4)
  03af568  lfs 31, 20(4)
  03af56c  lis 3, 59
  03af570  cmpwi 30, 2
  03af574  addi 3, 3, -2864
  03af578  lfs 1, 24(3)
  03af57c  bt 0, 0x3af58c
  03af580  lis 3, 59
  03af584  addi 3, 3, -2864
  03af588  lfs 1, 28(3)
  03af58c  rlwinm 3, 30, 4, 27, 27
  03af590  lwz 5, 0(31)
  03af594  extsw 4, 30
  03af598  addc 3, 3, 29
  03af59c  clrldi 3, 3, 32
  03af5a0  std 4, 112(1)
  03af5a4  lfs 2, 112(29)
  03af5a8  lfs 3, 80(3)
  03af5ac  lfs 4, 84(3)
  03af5b0  lfs 5, 88(3)
  03af5b4  stfs 2, 16(5)
  03af5b8  fmuls 25, 4, 1
  03af5bc  lfs 2, 116(29)
  03af5c0  fmuls 24, 3, 1
  03af5c4  fmuls 23, 5, 1
  03af5c8  stfs 2, 20(5)
  03af5cc  lfs 2, 120(29)
  03af5d0  stfs 2, 24(5)
  03af5d4  lfs 2, 124(29)
  03af5d8  stfs 2, 28(5)
  03af5dc  lfs 2, 64(29)
  03af5e0  fmuls 1, 2, 27
  03af5e4  lfd 2, 112(1)
  03af5e8  fcfid 2, 2
  03af5ec  frsp 2, 2
  03af5f0  fmadds 1, 2, 26, 1
  03af5f4  bl 0x502648
  03af5f8  nop
  03af5fc  fmuls 2, 25, 25
  03af600  lwz 3, 0(31)
  03af604  stfs 1, 64(3)
  03af608  fmadds 2, 24, 24, 2
  03af60c  fmadds 2, 23, 23, 2
  03af610  fsqrts 1, 2
  03af614  lfs 2, 72(29)
  03af618  addic 30, 30, 1
  03af61c  cmpwi 30, 4
  03af620  fmuls 2, 2, 28
  03af624  lwz 3, 0(31)
  03af628  lfs 3, 16(3)
  03af62c  lfs 4, 20(3)
  03af630  lfs 5, 24(3)
  03af634  fdivs 2, 2, 1
  03af638  fsub 6, 29, 1
  03af63c  fsub 7, 29, 1
  03af640  fsub 8, 29, 1
  03af644  fsub 9, 1, 29
  03af648  fsub 10, 1, 29
  03af64c  fsub 11, 1, 29
  03af650  fsub 12, 29, 1
  03af654  fsub 13, 29, 1
  03af658  fsub 0, 29, 1
  03af65c  fsub 22, 1, 29
  03af660  fsub 21, 1, 29
  03af664  fsub 20, 1, 29
  03af668  fmuls 19, 23, 2
  03af66c  fmuls 18, 25, 2
  03af670  fmuls 2, 24, 2
  03af674  fsel 6, 6, 29, 19
  03af678  fsel 7, 7, 29, 18
  03af67c  fsel 8, 8, 29, 2
  03af680  fsel 6, 9, 6, 19
  03af684  fsel 7, 10, 7, 18
  03af688  fsel 2, 11, 8, 2
  03af68c  fadds 5, 5, 6
  03af690  fadds 4, 4, 7
  03af694  fadds 2, 3, 2
  03af698  fsub 6, 29, 1
  03af69c  fsub 7, 29, 1
  03af6a0  stfs 5, 24(3)
  03af6a4  stfs 4, 20(3)
  03af6a8  stfs 2, 16(3)
  03af6ac  lwz 3, 4(31)
  03af6b0  lfs 2, 112(29)
  03af6b4  stfs 2, 16(3)
  03af6b8  lfs 2, 116(29)
  03af6bc  stfs 2, 20(3)
  03af6c0  lfs 2, 120(29)
  03af6c4  stfs 2, 24(3)
  03af6c8  lfs 2, 124(29)
  03af6cc  stfs 2, 28(3)
  03af6d0  lfs 2, 56(29)
  03af6d4  fmuls 2, 2, 30
  03af6d8  lwz 3, 4(31)
  03af6dc  fsub 8, 29, 1
  03af6e0  lfs 3, 16(3)
  03af6e4  fdivs 2, 2, 1
  03af6e8  lfs 4, 20(3)
  03af6ec  lfs 5, 24(3)
  03af6f0  fsub 9, 1, 29
  03af6f4  fsub 10, 1, 29
  03af6f8  fsub 11, 1, 29
  03af6fc  fmuls 19, 23, 2
  03af700  fmuls 18, 25, 2
  03af704  fmuls 2, 24, 2
  03af708  fsel 12, 12, 29, 19
  03af70c  fsel 13, 13, 29, 18
  03af710  fsel 0, 0, 29, 2
  03af714  fsel 12, 22, 12, 19
  03af718  fsel 13, 21, 13, 18
  03af71c  fsel 2, 20, 0, 2
  03af720  fsub 0, 29, 1
  03af724  fsub 22, 1, 29
  03af728  fadds 5, 5, 12
  03af72c  fadds 4, 4, 13
  03af730  fadds 2, 3, 2
  03af734  fsub 12, 29, 1
  03af738  fsub 13, 29, 1
  03af73c  fsub 21, 1, 29
  03af740  fsub 20, 1, 29
  03af744  stfs 5, 24(3)
  03af748  stfs 4, 20(3)
  03af74c  stfs 2, 16(3)
  03af750  lfs 2, 72(29)
  03af754  fmuls 2, 2, 31
  03af758  lwz 3, 4(31)
  03af75c  lfs 3, 16(3)
  03af760  fdivs 2, 2, 1
  03af764  lfs 4, 20(3)
  03af768  lfs 5, 24(3)
  03af76c  fmuls 19, 23, 2
  03af770  fmuls 18, 25, 2
  03af774  fmuls 2, 24, 2
  03af778  fsel 6, 6, 29, 19
  03af77c  fsel 7, 7, 29, 18
  03af780  fsel 8, 8, 29, 2
  03af784  fsel 6, 9, 6, 19
  03af788  fsel 7, 10, 7, 18
  03af78c  fsel 2, 11, 8, 2
  03af790  fadds 5, 5, 6
  03af794  fadds 4, 4, 7
  03af798  fadds 2, 3, 2
  03af79c  stfs 5, 24(3)
  03af7a0  stfs 4, 20(3)
  03af7a4  stfs 2, 16(3)
  03af7a8  lwz 3, 8(31)
  03af7ac  lfs 2, 112(29)
  03af7b0  stfs 2, 16(3)
  03af7b4  lfs 2, 116(29)
  03af7b8  stfs 2, 20(3)
  03af7bc  lfs 2, 120(29)
  03af7c0  stfs 2, 24(3)
  03af7c4  lfs 2, 124(29)
  03af7c8  stfs 2, 28(3)
  03af7cc  lfs 2, 72(29)
  03af7d0  fmuls 2, 2, 31
  03af7d4  lwz 3, 8(31)
  03af7d8  addic 31, 31, 12
  03af7dc  fdivs 1, 2, 1
  03af7e0  lfs 2, 16(3)
  03af7e4  lfs 3, 20(3)
  03af7e8  lfs 4, 24(3)
  03af7ec  fmuls 5, 23, 1
  03af7f0  fmuls 6, 25, 1
  03af7f4  fmuls 1, 24, 1
  03af7f8  fsel 7, 12, 29, 5
  03af7fc  fsel 8, 13, 29, 6
  03af800  fsel 9, 0, 29, 1
  03af804  fsel 5, 22, 7, 5
  03af808  fsel 6, 21, 8, 6
  03af80c  fsel 1, 20, 9, 1
  03af810  fadds 4, 4, 5
  03af814  fadds 3, 3, 6
  03af818  fadds 1, 2, 1
  03af81c  stfs 4, 24(3)
  03af820  stfs 3, 20(3)
  03af824  stfs 1, 16(3)
  03af828  bt 0, 0x3af56c
  03af82c  ld 0, 288(1)
  03af830  mtlr 0
  03af834  lfd 18, 160(1)
  03af838  lfd 19, 168(1)
  03af83c  lfd 20, 176(1)
  03af840  lfd 21, 184(1)
  03af844  lfd 22, 192(1)
  03af848  lfd 23, 200(1)
  03af84c  lfd 24, 208(1)
  03af850  lfd 25, 216(1)
  03af854  lfd 26, 224(1)
  03af858  lfd 27, 232(1)
  03af85c  lfd 28, 240(1)
  03af860  lfd 29, 248(1)
  03af864  lfd 30, 256(1)
  03af868  lfd 31, 264(1)
  03af86c  ld 29, 136(1)
  03af870  ld 30, 144(1)
  03af874  ld 31, 152(1)
  03af878  addi 1, 1, 272
  03af87c  blr

UpdateMoby_542:   # 0x3af8a0, 0x6dc bytes
  03af8a0  stdu 1, -192(1)
  03af8a4  mflr 0
  03af8a8  std 0, 208(1)
  03af8ac  stfd 31, 184(1)
  03af8b0  std 31, 176(1)
  03af8b4  ori 31, 3, 0
  03af8b8  std 29, 160(1)
  03af8bc  lbz 3, 32(31)
  03af8c0  lwz 29, 120(31)
  03af8c4  cmpwi 3, 4
  03af8c8  cmpwi 1, 3, 0
  03af8cc  cmpwi 6, 3, 1
  03af8d0  std 30, 168(1)
  03af8d4  std 28, 152(1)
  03af8d8  std 27, 144(1)
  03af8dc  std 26, 136(1)
  03af8e0  std 25, 128(1)
  03af8e4  cmpwi 7, 3, 2
  03af8e8  bt 2, 0x3afe7c
  03af8ec  cmpwi 3, 3
  03af8f0  bt 2, 0x3afd6c
  03af8f4  bt 30, 0x3afc70
  03af8f8  bt 26, 0x3afc20
  03af8fc  bf 6, 0x3aff4c
  03af900  li 25, 0
  03af904  lfs 1, 16(31)
  03af908  stw 25, 64(31)
  03af90c  stfs 1, 112(29)
  03af910  lfs 1, 20(31)
  03af914  stfs 1, 116(29)
  03af918  lfs 1, 24(31)
  03af91c  stfs 1, 120(29)
  03af920  lfs 1, 28(31)
  03af924  stfs 1, 124(29)
  03af928  lfs 1, 208(31)
  03af92c  lfs 2, 224(31)
  03af930  fadds 1, 1, 2
  03af934  lis 3, 59
  03af938  li 30, 1
  03af93c  addi 3, 3, -1920
  03af940  addic 27, 29, 12
  03af944  ori 28, 30, 0
  03af948  stfs 1, 80(29)
  03af94c  lfs 1, 212(31)
  03af950  lfs 2, 228(31)
  03af954  fadds 1, 1, 2
  03af958  stfs 1, 84(29)
  03af95c  lfs 1, 216(31)
  03af960  lfs 2, 232(31)
  03af964  stw 31, 0(29)
  03af968  fadds 1, 1, 2
  03af96c  stfs 1, 88(29)
  03af970  lfs 1, 220(31)
  03af974  stfs 1, 92(29)
  03af978  lfs 1, 224(31)
  03af97c  lfs 2, 208(31)
  03af980  fsubs 1, 1, 2
  03af984  stfs 1, 96(29)
  03af988  lfs 1, 228(31)
  03af98c  lfs 2, 212(31)
  03af990  fsubs 1, 1, 2
  03af994  stfs 1, 100(29)
  03af998  lfs 1, 232(31)
  03af99c  lfs 2, 216(31)
  03af9a0  fsubs 1, 1, 2
  03af9a4  stfs 1, 104(29)
  03af9a8  lfs 1, 236(31)
  03af9ac  stfs 1, 108(29)
  03af9b0  lfs 31, 0(3)
  03af9b4  li 3, 542
  03af9b8  bl 0xefa28
  03af9bc  nop
  03af9c0  li 4, 64
  03af9c4  stw 3, 0(27)
  03af9c8  sth 4, 50(3)
  03af9cc  extsw 3, 30
  03af9d0  std 3, 112(1)
  03af9d4  lwz 3, 0(27)
  03af9d8  lhz 4, 52(3)
  03af9dc  ori 4, 4, 2
  03af9e0  sth 4, 52(3)
  03af9e4  lwz 3, 0(27)
  03af9e8  lfs 1, 16(31)
  03af9ec  stfs 1, 16(3)
  03af9f0  lfs 1, 20(31)
  03af9f4  stfs 1, 20(3)
  03af9f8  lfs 1, 24(31)
  03af9fc  stfs 1, 24(3)
  03afa00  lfs 1, 28(31)
  03afa04  stfs 1, 28(3)
  03afa08  lwz 3, 0(27)
  03afa0c  lfs 1, 64(31)
  03afa10  stfs 1, 64(3)
  03afa14  lfs 1, 68(31)
  03afa18  stfs 1, 68(3)
  03afa1c  lfs 1, 72(31)
  03afa20  stfs 1, 72(3)
  03afa24  lfs 1, 76(31)
  03afa28  stfs 1, 76(3)
  03afa2c  lfd 1, 112(1)
  03afa30  lwz 3, 0(27)
  03afa34  fcfid 2, 1
  03afa38  lfs 1, 64(3)
  03afa3c  frsp 2, 2
  03afa40  fmuls 2, 2, 31
  03afa44  bl 0x502578
  03afa48  nop
  03afa4c  lwz 3, 0(27)
  03afa50  addic 30, 30, 1
  03afa54  addic 27, 27, 12
  03afa58  cmpwi 30, 4
  03afa5c  stfs 1, 64(3)
  03afa60  bt 0, 0x3af9b4
  03afa64  ori 27, 29, 0
  03afa68  ori 30, 25, 0
  03afa6c  li 3, 543
  03afa70  bl 0xefa28
  03afa74  nop
  03afa78  li 4, 64
  03afa7c  stw 3, 4(27)
  03afa80  sth 4, 50(3)
  03afa84  extsw 3, 30
  03afa88  std 3, 112(1)
  03afa8c  lwz 3, 4(27)
  03afa90  lhz 4, 52(3)
  03afa94  ori 4, 4, 2
  03afa98  sth 4, 52(3)
  03afa9c  lwz 3, 4(27)
  03afaa0  lfs 1, 16(31)
  03afaa4  stfs 1, 16(3)
  03afaa8  lfs 1, 20(31)
  03afaac  stfs 1, 20(3)
  03afab0  lfs 1, 24(31)
  03afab4  stfs 1, 24(3)
  03afab8  lfs 1, 28(31)
  03afabc  stfs 1, 28(3)
  03afac0  lwz 3, 4(27)
  03afac4  lfs 1, 64(31)
  03afac8  stfs 1, 64(3)
  03afacc  lfs 1, 68(31)
  03afad0  stfs 1, 68(3)
  03afad4  lfs 1, 72(31)
  03afad8  stfs 1, 72(3)
  03afadc  lfs 1, 76(31)
  03afae0  stfs 1, 76(3)
  03afae4  lfd 1, 112(1)
  03afae8  lwz 3, 4(27)
  03afaec  fcfid 2, 1
  03afaf0  lfs 1, 64(3)
  03afaf4  frsp 2, 2
  03afaf8  fmuls 2, 2, 31
  03afafc  bl 0x502578
  03afb00  nop
  03afb04  lwz 3, 4(27)
  03afb08  addic 30, 30, 1
  03afb0c  addic 27, 27, 12
  03afb10  cmpwi 30, 4
  03afb14  stfs 1, 64(3)
  03afb18  bt 0, 0x3afa6c
  03afb1c  ori 30, 25, 0
  03afb20  li 3, 544
  03afb24  bl 0xefa28
  03afb28  nop
  03afb2c  li 4, 64
  03afb30  stw 3, 8(29)
  03afb34  sth 4, 50(3)
  03afb38  extsw 3, 30
  03afb3c  std 3, 112(1)
  03afb40  lwz 3, 8(29)
  03afb44  lhz 4, 52(3)
  03afb48  ori 4, 4, 2
  03afb4c  sth 4, 52(3)
  03afb50  lwz 3, 8(29)
  03afb54  lfs 1, 16(31)
  03afb58  stfs 1, 16(3)
  03afb5c  lfs 1, 20(31)
  03afb60  stfs 1, 20(3)
  03afb64  lfs 1, 24(31)
  03afb68  stfs 1, 24(3)
  03afb6c  lfs 1, 28(31)
  03afb70  stfs 1, 28(3)
  03afb74  lwz 3, 8(29)
  03afb78  lfs 1, 64(31)
  03afb7c  stfs 1, 64(3)
  03afb80  lfs 1, 68(31)
  03afb84  stfs 1, 68(3)
  03afb88  lfs 1, 72(31)
  03afb8c  stfs 1, 72(3)
  03afb90  lfs 1, 76(31)
  03afb94  stfs 1, 76(3)
  03afb98  lfd 1, 112(1)
  03afb9c  lwz 3, 8(29)
  03afba0  fcfid 2, 1
  03afba4  lfs 1, 64(3)
  03afba8  frsp 2, 2
  03afbac  fmuls 2, 2, 31
  03afbb0  bl 0x502578
  03afbb4  nop
  03afbb8  lwz 3, 8(29)
  03afbbc  addic 30, 30, 1
  03afbc0  addic 29, 29, 12
  03afbc4  cmpwi 30, 4
  03afbc8  stfs 1, 64(3)
  03afbcc  bt 0, 0x3afb20
  03afbd0  ori 30, 25, 0
  03afbd4  lwz 26, 120(31)
  03afbd8  ori 29, 25, 0
  03afbdc  ori 27, 26, 0
  03afbe0  or 3, 29, 30
  03afbe4  cmpwi 3, 0
  03afbe8  bt 2, 0x3afbf8
  03afbec  lwz 3, 0(27)
  03afbf0  bl 0xf31a8
  03afbf4  nop
  03afbf8  addic 29, 29, 1
  03afbfc  addic 27, 27, 4
  03afc00  cmpwi 29, 3
  03afc04  bt 0, 0x3afbe0
  03afc08  addic 30, 30, 1
  03afc0c  addic 26, 26, 12
  03afc10  cmpwi 30, 4
  03afc14  bt 0, 0x3afbd8
  03afc18  stb 28, 32(31)
  03afc1c  b 0x3aff4c
  03afc20  lis 3, 151
  03afc24  lfs 1, 20(31)
  03afc28  lfs 2, 16(31)
  03afc2c  addic 3, 3, -25376
  03afc30  lfs 3, 132(3)
  03afc34  lfs 4, 128(3)
  03afc38  fsubs 1, 1, 3
  03afc3c  fsubs 2, 2, 4
  03afc40  lis 3, 59
  03afc44  addi 3, 3, -1920
  03afc48  fmuls 1, 1, 1
  03afc4c  fmadds 1, 2, 2, 1
  03afc50  lfs 2, 4(3)
  03afc54  fsqrts 1, 1
  03afc58  fcmpu 0, 1, 2
  03afc5c  cror 6, 1, 2
  03afc60  bt 6, 0x3aff4c
  03afc64  li 3, 2
  03afc68  stb 3, 32(31)
  03afc6c  b 0x3aff4c
  03afc70  lis 3, 59
  03afc74  lis 4, 114
  03afc78  addi 6, 3, -1920
  03afc7c  lis 7, 114
  03afc80  addic 3, 29, 56
  03afc84  addic 5, 29, 60
  03afc88  lis 30, 16256
  03afc8c  lfs 3, 12(6)
  03afc90  lfs 2, -3048(4)
  03afc94  lfs 5, 16(6)
  03afc98  fmuls 2, 2, 3
  03afc9c  lfs 1, 8(6)
  03afca0  lfs 6, -3052(7)
  03afca4  fmuls 4, 6, 5
  03afca8  fmr 3, 2
  03afcac  bl 0x109c30
  03afcb0  nop
  03afcb4  lwz 3, 56(29)
  03afcb8  srawi 4, 3, 31
  03afcbc  srwi 5, 4, 1
  03afcc0  xor 3, 5, 3
  03afcc4  subc 3, 3, 4
  03afcc8  cmpw 3, 30
  03afccc  bt 0, 0x3afd14
  03afcd0  lis 3, 59
  03afcd4  vspltisw 2, -1
  03afcd8  li 4, 3
  03afcdc  addi 3, 3, -1920
  03afce0  li 6, 20
  03afce4  lis 5, 114
  03afce8  stb 4, 32(31)
  03afcec  li 4, -3056
  03afcf0  vslw 2, 2, 2
  03afcf4  <unknown>
  03afcf8  li 3, 52
  03afcfc  vspltw 3, 3, 0
  03afd00  <unknown>
  03afd04  vmaddfp 2, 4, 3, 2
  03afd08  vctsxs 2, 2, 0
  03afd0c  vspltw 2, 2, 0
  03afd10  stvewx 2, 3, 29
  03afd14  ori 3, 31, 0
  03afd18  bl 0x3af4f0
  03afd1c  lwz 29, 120(31)
  03afd20  li 31, 0
  03afd24  ori 30, 31, 0
  03afd28  ori 28, 30, 0
  03afd2c  ori 27, 29, 0
  03afd30  or 3, 28, 31
  03afd34  cmpwi 3, 0
  03afd38  bt 2, 0x3afd48
  03afd3c  lwz 3, 0(27)
  03afd40  bl 0xf31a8
  03afd44  nop
  03afd48  addic 28, 28, 1
  03afd4c  addic 27, 27, 4
  03afd50  cmpwi 28, 3
  03afd54  bt 0, 0x3afd30
  03afd58  addic 31, 31, 1
  03afd5c  addic 29, 29, 12
  03afd60  cmpwi 31, 4
  03afd64  bt 0, 0x3afd28
  03afd68  b 0x3aff4c
  03afd6c  addic 3, 29, 52
  03afd70  bl 0x4fff60
  03afd74  nop
  03afd78  cmpwi 3, 0
  03afd7c  bt 2, 0x3aff4c
  03afd80  lis 3, 59
  03afd84  lis 5, 114
  03afd88  addi 4, 3, -1920
  03afd8c  lis 6, 114
  03afd90  addic 3, 29, 64
  03afd94  lis 30, 16256
  03afd98  lfs 3, 24(4)
  03afd9c  lfs 2, -3048(5)
  03afda0  lfs 5, 12(4)
  03afda4  fmuls 2, 2, 3
  03afda8  lfs 1, 8(4)
  03afdac  lfs 4, -3052(6)
  03afdb0  addic 5, 29, 68
  03afdb4  fmuls 4, 4, 5
  03afdb8  fmr 3, 2
  03afdbc  bl 0x109c30
  03afdc0  nop
  03afdc4  lwz 3, 64(29)
  03afdc8  srawi 4, 3, 31
  03afdcc  srwi 5, 4, 1
  03afdd0  xor 3, 5, 3
  03afdd4  subc 3, 3, 4
  03afdd8  cmpw 3, 30
  03afddc  bt 0, 0x3afe24
  03afde0  lis 3, 59
  03afde4  li 4, 4
  03afde8  vspltisw 2, -1
  03afdec  addi 3, 3, -1920
  03afdf0  li 5, 20
  03afdf4  lis 6, 114
  03afdf8  stb 4, 32(31)
  03afdfc  li 4, -3056
  03afe00  vslw 2, 2, 2
  03afe04  <unknown>
  03afe08  li 3, 52
  03afe0c  vspltw 3, 3, 0
  03afe10  <unknown>
  03afe14  vmaddfp 2, 4, 3, 2
  03afe18  vctsxs 2, 2, 0
  03afe1c  vspltw 2, 2, 0
  03afe20  stvewx 2, 3, 29
  03afe24  ori 3, 31, 0
  03afe28  bl 0x3af4f0
  03afe2c  lwz 29, 120(31)
  03afe30  li 31, 0
  03afe34  ori 30, 31, 0
  03afe38  ori 28, 30, 0
  03afe3c  ori 27, 29, 0
  03afe40  or 3, 28, 31
  03afe44  cmpwi 3, 0
  03afe48  bt 2, 0x3afe58
  03afe4c  lwz 3, 0(27)
  03afe50  bl 0xf31a8
  03afe54  nop
  03afe58  addic 28, 28, 1
  03afe5c  addic 27, 27, 4
  03afe60  cmpwi 28, 3
  03afe64  bt 0, 0x3afe40
  03afe68  addic 31, 31, 1
  03afe6c  addic 29, 29, 12
  03afe70  cmpwi 31, 4
  03afe74  bt 0, 0x3afe38
  03afe78  b 0x3aff4c
  03afe7c  addic 3, 29, 52
  03afe80  bl 0x4fff60
  03afe84  nop
  03afe88  cmpwi 3, 0
  03afe8c  bt 2, 0x3aff4c
  03afe90  lis 3, 59
  03afe94  lis 4, 114
  03afe98  addi 6, 3, -1920
  03afe9c  lis 7, 114
  03afea0  addic 3, 29, 72
  03afea4  addic 5, 29, 76
  03afea8  lis 30, 16256
  03afeac  lfs 3, 24(6)
  03afeb0  lfs 2, -3048(4)
  03afeb4  lfs 5, 12(6)
  03afeb8  fmuls 2, 2, 3
  03afebc  lfs 1, 8(6)
  03afec0  lfs 6, -3052(7)
  03afec4  fmuls 4, 6, 5
  03afec8  fmr 3, 2
  03afecc  bl 0x109c30
  03afed0  nop
  03afed4  lwz 3, 72(29)
  03afed8  srawi 4, 3, 31
  03afedc  srwi 5, 4, 1
  03afee0  xor 3, 5, 3
  03afee4  subc 3, 3, 4
  03afee8  cmpw 3, 30
  03afeec  bt 0, 0x3afef8
  03afef0  li 3, 5
  03afef4  stb 3, 32(31)
  03afef8  ori 3, 31, 0
  03afefc  bl 0x3af4f0
  03aff00  lwz 29, 120(31)
  03aff04  li 31, 0
  03aff08  ori 30, 31, 0
  03aff0c  ori 28, 30, 0
  03aff10  ori 27, 29, 0
  03aff14  or 3, 28, 31
  03aff18  cmpwi 3, 0
  03aff1c  bt 2, 0x3aff2c
  03aff20  lwz 3, 0(27)
  03aff24  bl 0xf31a8
  03aff28  nop
  03aff2c  addic 28, 28, 1
  03aff30  addic 27, 27, 4
  03aff34  cmpwi 28, 3
  03aff38  bt 0, 0x3aff14
  03aff3c  addic 31, 31, 1
  03aff40  addic 29, 29, 12
  03aff44  cmpwi 31, 4
  03aff48  bt 0, 0x3aff0c
  03aff4c  ld 0, 208(1)
  03aff50  mtlr 0
  03aff54  lfd 31, 184(1)
  03aff58  ld 25, 128(1)
  03aff5c  ld 26, 136(1)
  03aff60  ld 27, 144(1)
  03aff64  ld 28, 152(1)
  03aff68  ld 29, 160(1)
  03aff6c  ld 30, 168(1)
  03aff70  ld 31, 176(1)
  03aff74  addi 1, 1, 192
  03aff78  blr
