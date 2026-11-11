# game/update/moby612.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M612_003dae70:   # 0x3dae70, 0x14 bytes
  03dae70  lis 3, 133
  03dae74  lis 4, 1
  03dae78  addic 3, 3, 14708
  03dae7c  stw 4, 72(3)
  03dae80  blr

M612_003dae98:   # 0x3dae98, 0x6f8 bytes
  03dae98  stdu 1, -400(1)
  03dae9c  mflr 0
  03daea0  std 0, 416(1)
  03daea4  stfd 31, 392(1)
  03daea8  std 31, 384(1)
  03daeac  lis 4, 62
  03daeb0  ori 31, 3, 0
  03daeb4  addi 5, 4, -20856
  03daeb8  li 6, 0
  03daebc  std 30, 376(1)
  03daec0  lis 4, 51
  03daec4  lwz 30, 120(31)
  03daec8  lfs 31, 0(5)
  03daecc  li 5, 0
  03daed0  stw 6, 276(1)
  03daed4  bl 0x10675c
  03daed8  nop
  03daedc  cmpwi 3, 0
  03daee0  bt 2, 0x3daef8
  03daee4  lwz 4, 32(3)
  03daee8  lhz 4, 166(4)
  03daeec  cmpwi 4, 612
  03daef0  bf 2, 0x3daef8
  03daef4  li 3, 0
  03daef8  ori 4, 3, 0
  03daefc  ori 3, 31, 0
  03daf00  addic 5, 30, 32
  03daf04  addic 7, 1, 272
  03daf08  li 9, 0
  03daf0c  addic 8, 1, 276
  03daf10  li 6, 0
  03daf14  li 10, 4
  03daf18  bl 0x106840
  03daf1c  nop
  03daf20  lwz 3, 272(1)
  03daf24  cmpwi 3, 1
  03daf28  bt 2, 0x3db4b8
  03daf2c  lbz 3, 32(31)
  03daf30  cmpwi 3, 17
  03daf34  bt 2, 0x3db4b8
  03daf38  lfs 1, 32(30)
  03daf3c  lfs 2, 276(1)
  03daf40  lis 3, 62
  03daf44  fsubs 1, 1, 2
  03daf48  addi 3, 3, -20856
  03daf4c  stfs 1, 32(30)
  03daf50  lfs 1, 4(3)
  03daf54  bl 0x502758
  03daf58  nop
  03daf5c  lis 4, 16153
  03daf60  lwz 5, 32(30)
  03daf64  stw 3, 144(30)
  03daf68  ori 3, 4, 39322
  03daf6c  cmpwi 5, 0
  03daf70  stw 3, 152(30)
  03daf74  bf 1, 0x3db224
  03daf78  lwz 4, 276(1)
  03daf7c  lis 3, 16256
  03daf80  srawi 5, 4, 31
  03daf84  srwi 6, 5, 1
  03daf88  xor 4, 6, 4
  03daf8c  subc 4, 4, 5
  03daf90  cmpw 4, 3
  03daf94  bf 0, 0x3dafa4
  03daf98  li 3, 100
  03daf9c  stb 3, 103(30)
  03dafa0  b 0x3db4a8
  03dafa4  li 3, 120
  03dafa8  lis 4, 133
  03dafac  lis 5, 114
  03dafb0  lis 6, 133
  03dafb4  stb 3, 103(30)
  03dafb8  lis 3, 133
  03dafbc  lfs 1, 14848(4)
  03dafc0  lfs 2, -3048(5)
  03dafc4  lis 4, 114
  03dafc8  fmuls 1, 1, 2
  03dafcc  lis 5, 133
  03dafd0  lis 7, 133
  03dafd4  li 8, 0
  03dafd8  lis 9, 151
  03dafdc  stfs 1, 128(30)
  03dafe0  lfs 1, 14836(6)
  03dafe4  fmuls 1, 1, 2
  03dafe8  lis 6, 16128
  03dafec  stfs 1, 132(30)
  03daff0  lfs 1, 14824(3)
  03daff4  lfs 2, -3052(4)
  03daff8  addic 3, 9, -25376
  03daffc  li 4, 25
  03db000  fmuls 1, 1, 2
  03db004  stfs 1, 136(30)
  03db008  lfs 1, 14828(5)
  03db00c  stw 4, 148(30)
  03db010  fmuls 1, 1, 2
  03db014  lis 4, 115
  03db018  addic 4, 4, 22784
  03db01c  stfs 1, 140(30)
  03db020  lfs 1, 14872(7)
  03db024  stw 6, 160(30)
  03db028  fmuls 1, 1, 2
  03db02c  stb 8, 173(30)
  03db030  stfs 1, 188(30)
  03db034  lfs 1, 16(31)
  03db038  lfs 2, 128(3)
  03db03c  lfs 3, 20(31)
  03db040  lfs 4, 132(3)
  03db044  fsubs 1, 1, 2
  03db048  fsubs 2, 3, 4
  03db04c  addic 3, 30, 112
  03db050  fabs 3, 1
  03db054  fabs 4, 2
  03db058  stfs 1, 292(1)
  03db05c  stfs 2, 296(1)
  03db060  fsubs 1, 3, 4
  03db064  stfs 1, 300(1)
  03db068  lwz 5, 292(1)
  03db06c  lfs 1, 292(1)
  03db070  lwz 6, 296(1)
  03db074  lfs 2, 296(1)
  03db078  fabs 1, 1
  03db07c  lwz 7, 300(1)
  03db080  rlwinm 6, 6, 3, 29, 29
  03db084  lfs 5, 300(1)
  03db088  fabs 2, 2
  03db08c  rlwimi 6, 7, 2, 30, 30
  03db090  fsub 6, 5, 31
  03db094  fsub 5, 5, 31
  03db098  rlwimi 6, 5, 4, 28, 28
  03db09c  ori 5, 4, 0
  03db0a0  rlwimi 5, 6, 2, 26, 28
  03db0a4  slwi 6, 6, 2
  03db0a8  clrldi 5, 5, 32
  03db0ac  fsel 4, 6, 1, 4
  03db0b0  lfsx 1, 4, 6
  03db0b4  fsel 3, 5, 2, 3
  03db0b8  lfs 2, 4(5)
  03db0bc  fcmpu 0, 4, 31
  03db0c0  bt 1, 0x3db0c8
  03db0c4  b 0x3db1e8
  03db0c8  fsubs 5, 3, 4
  03db0cc  fadds 3, 3, 4
  03db0d0  addic 4, 1, 16
  03db0d4  li 8, 2
  03db0d8  addic 6, 4, 336
  03db0dc  addic 5, 4, 320
  03db0e0  mtctr 8
  03db0e4  fdivs 3, 5, 3
  03db0e8  fmuls 4, 3, 3
  03db0ec  stfs 3, 348(1)
  03db0f0  stfs 3, 340(1)
  03db0f4  stfs 3, 344(1)
  03db0f8  stfs 3, 336(1)
  03db0fc  lfs 6, 348(1)
  03db100  lfs 7, 340(1)
  03db104  lfs 8, 344(1)
  03db108  fmuls 5, 4, 4
  03db10c  fmuls 7, 7, 4
  03db110  fmuls 6, 6, 5
  03db114  fmuls 3, 5, 5
  03db118  fmuls 5, 8, 5
  03db11c  stfs 7, 340(1)
  03db120  fmuls 4, 6, 4
  03db124  stfs 5, 344(1)
  03db128  stfs 4, 348(1)
  03db12c  lfs 4, 320(4)
  03db130  fmuls 4, 4, 3
  03db134  stfs 4, 336(4)
  03db138  lfs 4, 4(5)
  03db13c  addic 5, 5, 8
  03db140  fmuls 4, 4, 3
  03db144  addic 4, 4, 8
  03db148  stfs 4, 4(6)
  03db14c  addic 6, 6, 8
  03db150  bdnz 0x3db12c
  03db154  li 6, 4
  03db158  ori 4, 1, 0
  03db15c  mtctr 6
  03db160  lis 5, 115
  03db164  addic 6, 4, 336
  03db168  addic 5, 5, 22752
  03db16c  ori 7, 6, 0
  03db170  lfs 3, 336(4)
  03db174  lfs 4, 0(5)
  03db178  fmuls 3, 3, 4
  03db17c  lfs 4, 4(5)
  03db180  addic 5, 5, 8
  03db184  stfs 3, 336(4)
  03db188  lfs 3, 4(6)
  03db18c  addic 4, 4, 8
  03db190  fmuls 3, 3, 4
  03db194  stfs 3, 4(6)
  03db198  addic 6, 6, 8
  03db19c  bdnz 0x3db170
  03db1a0  ori 4, 1, 0
  03db1a4  mtctr 8
  03db1a8  lfs 3, 336(4)
  03db1ac  lfs 4, 4(7)
  03db1b0  fadds 3, 31, 3
  03db1b4  lfs 5, 8(7)
  03db1b8  addic 4, 4, 16
  03db1bc  lfs 31, 12(7)
  03db1c0  addic 7, 7, 16
  03db1c4  fadds 3, 3, 4
  03db1c8  fadds 3, 3, 5
  03db1cc  fadds 31, 3, 31
  03db1d0  bdnz 0x3db1a8
  03db1d4  lis 4, 62
  03db1d8  addi 4, 4, -20856
  03db1dc  lfs 3, 8(4)
  03db1e0  fadds 31, 31, 3
  03db1e4  fmadds 31, 31, 1, 2
  03db1e8  ori 4, 3, 0
  03db1ec  ori 3, 31, 0
  03db1f0  fmr 1, 31
  03db1f4  li 6, 11
  03db1f8  li 7, 1
  03db1fc  li 8, 0
  03db200  bl 0x10ad80
  03db204  nop
  03db208  lis 3, 16592
  03db20c  lis 4, 16688
  03db210  li 5, 16
  03db214  stw 3, 192(30)
  03db218  stw 4, 196(30)
  03db21c  stb 5, 32(31)
  03db220  b 0x3db4a8
  03db224  lis 3, 133
  03db228  lis 4, 114
  03db22c  lis 5, 133
  03db230  lis 6, 133
  03db234  lfs 1, 14848(3)
  03db238  lfs 2, -3048(4)
  03db23c  lis 3, 133
  03db240  fmuls 1, 1, 2
  03db244  lis 4, 114
  03db248  lis 7, 133
  03db24c  lis 8, 151
  03db250  addic 8, 8, -25376
  03db254  stfs 1, 128(30)
  03db258  lfs 1, 14832(5)
  03db25c  fmuls 1, 1, 2
  03db260  li 5, 0
  03db264  stfs 1, 132(30)
  03db268  lfs 1, 14816(3)
  03db26c  lfs 2, -3052(4)
  03db270  li 3, 9
  03db274  fmuls 1, 1, 2
  03db278  lis 4, 115
  03db27c  addic 4, 4, 22784
  03db280  stfs 1, 136(30)
  03db284  lfs 1, 14820(6)
  03db288  stw 3, 148(30)
  03db28c  fmuls 1, 1, 2
  03db290  addic 3, 30, 112
  03db294  stfs 1, 140(30)
  03db298  lfs 1, 14872(7)
  03db29c  stb 5, 173(30)
  03db2a0  fmuls 1, 1, 2
  03db2a4  stfs 1, 188(30)
  03db2a8  lfs 1, 16(31)
  03db2ac  lfs 2, 128(8)
  03db2b0  lfs 3, 20(31)
  03db2b4  lfs 4, 132(8)
  03db2b8  fsubs 1, 1, 2
  03db2bc  fsubs 2, 3, 4
  03db2c0  fabs 3, 1
  03db2c4  fabs 4, 2
  03db2c8  stfs 1, 280(1)
  03db2cc  stfs 2, 284(1)
  03db2d0  fsubs 1, 3, 4
  03db2d4  stfs 1, 288(1)
  03db2d8  lwz 5, 280(1)
  03db2dc  lfs 1, 280(1)
  03db2e0  lwz 6, 284(1)
  03db2e4  lfs 2, 284(1)
  03db2e8  fabs 1, 1
  03db2ec  lwz 7, 288(1)
  03db2f0  rlwinm 6, 6, 3, 29, 29
  03db2f4  lfs 5, 288(1)
  03db2f8  fabs 2, 2
  03db2fc  rlwimi 6, 7, 2, 30, 30
  03db300  fsub 6, 5, 31
  03db304  fsub 5, 5, 31
  03db308  rlwimi 6, 5, 4, 28, 28
  03db30c  ori 5, 4, 0
  03db310  rlwimi 5, 6, 2, 26, 28
  03db314  slwi 6, 6, 2
  03db318  clrldi 5, 5, 32
  03db31c  fsel 4, 6, 1, 4
  03db320  lfsx 1, 4, 6
  03db324  fsel 3, 5, 2, 3
  03db328  lfs 2, 4(5)
  03db32c  fcmpu 0, 4, 31
  03db330  bt 1, 0x3db338
  03db334  b 0x3db458
  03db338  fsubs 5, 3, 4
  03db33c  fadds 3, 3, 4
  03db340  addic 4, 1, 16
  03db344  li 7, 2
  03db348  addic 6, 4, 304
  03db34c  addic 5, 4, 288
  03db350  mtctr 7
  03db354  fdivs 3, 5, 3
  03db358  fmuls 4, 3, 3
  03db35c  stfs 3, 316(1)
  03db360  stfs 3, 308(1)
  03db364  stfs 3, 312(1)
  03db368  stfs 3, 304(1)
  03db36c  lfs 6, 316(1)
  03db370  lfs 7, 308(1)
  03db374  lfs 8, 312(1)
  03db378  fmuls 5, 4, 4
  03db37c  fmuls 7, 7, 4
  03db380  fmuls 6, 6, 5
  03db384  fmuls 3, 5, 5
  03db388  fmuls 5, 8, 5
  03db38c  stfs 7, 308(1)
  03db390  fmuls 4, 6, 4
  03db394  stfs 5, 312(1)
  03db398  stfs 4, 316(1)
  03db39c  lfs 4, 288(4)
  03db3a0  fmuls 4, 4, 3
  03db3a4  stfs 4, 304(4)
  03db3a8  lfs 4, 4(5)
  03db3ac  addic 5, 5, 8
  03db3b0  fmuls 4, 4, 3
  03db3b4  addic 4, 4, 8
  03db3b8  stfs 4, 4(6)
  03db3bc  addic 6, 6, 8
  03db3c0  bdnz 0x3db39c
  03db3c4  li 6, 4
  03db3c8  ori 4, 1, 0
  03db3cc  mtctr 6
  03db3d0  lis 5, 115
  03db3d4  addic 6, 4, 304
  03db3d8  addic 5, 5, 22752
  03db3dc  ori 8, 6, 0
  03db3e0  lfs 3, 304(4)
  03db3e4  lfs 4, 0(5)
  03db3e8  fmuls 3, 3, 4
  03db3ec  lfs 4, 4(5)
  03db3f0  addic 5, 5, 8
  03db3f4  stfs 3, 304(4)
  03db3f8  lfs 3, 4(6)
  03db3fc  addic 4, 4, 8
  03db400  fmuls 3, 3, 4
  03db404  stfs 3, 4(6)
  03db408  addic 6, 6, 8
  03db40c  bdnz 0x3db3e0
  03db410  ori 4, 1, 0
  03db414  mtctr 7
  03db418  lfs 3, 304(4)
  03db41c  lfs 4, 4(8)
  03db420  fadds 3, 31, 3
  03db424  lfs 5, 8(8)
  03db428  addic 4, 4, 16
  03db42c  lfs 31, 12(8)
  03db430  addic 8, 8, 16
  03db434  fadds 3, 3, 4
  03db438  fadds 3, 3, 5
  03db43c  fadds 31, 3, 31
  03db440  bdnz 0x3db418
  03db444  lis 4, 62
  03db448  addi 4, 4, -20856
  03db44c  lfs 3, 8(4)
  03db450  fadds 31, 31, 3
  03db454  fmadds 31, 31, 1, 2
  03db458  ori 4, 3, 0
  03db45c  ori 3, 31, 0
  03db460  fmr 1, 31
  03db464  li 6, 14
  03db468  li 7, 1
  03db46c  li 8, 0
  03db470  bl 0x10ad80
  03db474  nop
  03db478  lis 3, 16592
  03db47c  lhz 4, 52(31)
  03db480  li 5, 0
  03db484  lis 6, 16720
  03db488  rlwimi 4, 5, 0, 19, 19
  03db48c  stw 3, 192(30)
  03db490  li 7, 17
  03db494  li 3, 250
  03db498  stw 6, 196(30)
  03db49c  sth 4, 52(31)
  03db4a0  stb 3, 103(30)
  03db4a4  stb 7, 32(31)
  03db4a8  addic 4, 30, 96
  03db4ac  ori 3, 31, 0
  03db4b0  bl 0x10c808
  03db4b4  nop
  03db4b8  li 3, 255
  03db4bc  stb 3, 164(31)
  03db4c0  lwz 3, 544(30)
  03db4c4  cmpwi 3, 0
  03db4c8  bt 2, 0x3db528
  03db4cc  lbz 4, 32(3)
  03db4d0  cmpwi 4, 127
  03db4d4  bt 1, 0x3db500
  03db4d8  lhz 4, 166(3)
  03db4dc  cmpwi 6, 4, 203
  03db4e0  cmpwi 4, 270
  03db4e4  cror 2, 2, 26
  03db4e8  cmpwi 1, 4, 0
  03db4ec  bt 2, 0x3db4f4
  03db4f0  bf 6, 0x3db500
  03db4f4  lbz 4, 32(31)
  03db4f8  cmpwi 4, 12
  03db4fc  bt 2, 0x3db54c
  03db500  lis 3, 62
  03db504  addic 5, 1, 112
  03db508  addi 4, 3, -20856
  03db50c  ori 3, 31, 0
  03db510  lfs 1, 12(4)
  03db514  bl 0x1118d8
  03db518  nop
  03db51c  lwz 3, 176(1)
  03db520  stw 3, 544(30)
  03db524  b 0x3db54c
  03db528  lis 3, 62
  03db52c  addic 5, 1, 192
  03db530  addi 4, 3, -20856
  03db534  ori 3, 31, 0
  03db538  lfs 1, 12(4)
  03db53c  bl 0x1118d8
  03db540  nop
  03db544  lwz 3, 256(1)
  03db548  stw 3, 544(30)
  03db54c  cmpwi 3, 0
  03db550  bf 2, 0x3db564
  03db554  lis 3, 151
  03db558  addic 3, 3, -25376
  03db55c  lwz 3, 8320(3)
  03db560  stw 3, 544(30)
  03db564  addic 4, 30, 96
  03db568  ori 3, 31, 0
  03db56c  bl 0x10c9a0
  03db570  nop
  03db574  ld 0, 416(1)
  03db578  mtlr 0
  03db57c  lfd 31, 392(1)
  03db580  ld 30, 376(1)
  03db584  ld 31, 384(1)
  03db588  addi 1, 1, 400
  03db58c  blr

UpdateMoby_612:   # 0x3db608, 0x1d24 bytes
  03db608  stdu 1, -704(1)
  03db60c  mflr 0
  03db610  std 0, 720(1)
  03db614  stfd 22, 624(1)
  03db618  stfd 23, 632(1)
  03db61c  stfd 24, 640(1)
  03db620  stfd 25, 648(1)
  03db624  stfd 26, 656(1)
  03db628  stfd 27, 664(1)
  03db62c  stfd 28, 672(1)
  03db630  stfd 29, 680(1)
  03db634  stfd 30, 688(1)
  03db638  stfd 31, 696(1)
  03db63c  std 31, 616(1)
  03db640  lis 4, 62
  03db644  ori 31, 3, 0
  03db648  addi 5, 4, -19056
  03db64c  std 30, 608(1)
  03db650  li 4, 1
  03db654  lwz 30, 120(31)
  03db658  lfs 1, 0(5)
  03db65c  std 29, 600(1)
  03db660  std 28, 592(1)
  03db664  std 27, 584(1)
  03db668  std 26, 576(1)
  03db66c  addic 5, 30, 416
  03db670  bl 0x119a18
  03db674  nop
  03db678  lbz 3, 49(31)
  03db67c  cmpwi 3, 0
  03db680  bt 2, 0x3db6c4
  03db684  lis 4, 149
  03db688  addic 3, 31, 16
  03db68c  addic 4, 4, 5376
  03db690  bl 0x5e8548
  03db694  nop
  03db698  lis 3, 62
  03db69c  addi 3, 3, -19056
  03db6a0  lfs 2, 4(3)
  03db6a4  fcmpu 0, 1, 2
  03db6a8  cror 6, 1, 2
  03db6ac  bt 6, 0x3db6c4
  03db6b0  ori 3, 31, 0
  03db6b4  bl 0x106360
  03db6b8  nop
  03db6bc  li 3, 24
  03db6c0  stb 3, 127(31)
  03db6c4  ori 3, 31, 0
  03db6c8  bl 0x3dae98
  03db6cc  lbz 3, 32(31)
  03db6d0  cmpwi 3, 7
  03db6d4  bt 1, 0x3db714
  03db6d8  cmpwi 3, 7
  03db6dc  bt 2, 0x3dbce8
  03db6e0  cmpwi 3, 6
  03db6e4  bt 2, 0x3dbbb4
  03db6e8  cmpwi 3, 5
  03db6ec  bt 2, 0x3dbb28
  03db6f0  cmpwi 3, 4
  03db6f4  bt 2, 0x3dbadc
  03db6f8  cmpwi 3, 3
  03db6fc  bt 2, 0x3db97c
  03db700  cmpwi 3, 2
  03db704  bt 2, 0x3db93c
  03db708  cmpwi 3, 0
  03db70c  bt 2, 0x3db764
  03db710  b 0x3dd2d0
  03db714  cmpwi 3, 12
  03db718  bt 1, 0x3db73c
  03db71c  cmpwi 3, 10
  03db720  bt 1, 0x3db730
  03db724  cmpwi 3, 9
  03db728  bf 1, 0x3dc1f0
  03db72c  b 0x3dc3c4
  03db730  cmpwi 3, 11
  03db734  bf 1, 0x3dc568
  03db738  b 0x3dc7d0
  03db73c  cmpwi 3, 15
  03db740  bt 1, 0x3db750
  03db744  cmpwi 3, 13
  03db748  bf 1, 0x3dcd74
  03db74c  b 0x3dd2d0
  03db750  cmpwi 3, 16
  03db754  bf 1, 0x3dd08c
  03db758  cmpwi 3, 17
  03db75c  bf 1, 0x3dd0fc
  03db760  b 0x3dd2d0
  03db764  bl 0x5c8318
  03db768  nop
  03db76c  clrlwi 3, 3, 31
  03db770  lhz 4, 52(31)
  03db774  li 6, 0
  03db778  lis 5, 0
  03db77c  subc 3, 6, 3
  03db780  ori 5, 5, 32768
  03db784  cntlzw 3, 3
  03db788  or 5, 4, 5
  03db78c  sldi 3, 3, 58
  03db790  subc 4, 4, 5
  03db794  sradi 3, 3, 63
  03db798  li 6, 8
  03db79c  and 3, 3, 4
  03db7a0  li 4, 1
  03db7a4  addc 3, 5, 3
  03db7a8  lis 5, 151
  03db7ac  ori 3, 3, 4096
  03db7b0  li 8, 0
  03db7b4  lis 7, 16256
  03db7b8  addic 5, 5, -25376
  03db7bc  sth 3, 52(31)
  03db7c0  li 3, 15
  03db7c4  stb 6, 90(30)
  03db7c8  stb 4, 92(30)
  03db7cc  stb 8, 41(30)
  03db7d0  stb 3, 88(30)
  03db7d4  stw 7, 48(30)
  03db7d8  addic 3, 30, 208
  03db7dc  lwz 4, 8320(5)
  03db7e0  ld 4, 56(4)
  03db7e4  std 4, 56(31)
  03db7e8  bl 0x100f8c
  03db7ec  nop
  03db7f0  lis 3, 15605
  03db7f4  lis 4, 16025
  03db7f8  ori 3, 3, 49807
  03db7fc  lis 6, 62
  03db800  ori 4, 4, 39322
  03db804  lis 5, 16000
  03db808  stw 3, 268(30)
  03db80c  addi 3, 6, -19056
  03db810  lis 7, 114
  03db814  stw 4, 272(30)
  03db818  li 6, 2
  03db81c  stw 5, 276(30)
  03db820  lis 4, 16384
  03db824  lis 5, 16448
  03db828  lfs 1, 8(3)
  03db82c  lfs 2, -3052(7)
  03db830  addic 3, 30, 64
  03db834  stw 4, 220(30)
  03db838  fmuls 1, 2, 1
  03db83c  stw 4, 216(30)
  03db840  stw 5, 32(30)
  03db844  stb 6, 40(30)
  03db848  stfs 1, 244(30)
  03db84c  bl 0x5e7e70
  03db850  nop
  03db854  addic 3, 30, 496
  03db858  bl 0x119ae8
  03db85c  nop
  03db860  lwz 30, 404(30)
  03db864  lbz 3, 83(31)
  03db868  cmpwi 30, 1
  03db86c  bt 1, 0x3db87c
  03db870  cmpwi 30, 0
  03db874  bf 1, 0x3db88c
  03db878  b 0x3db8b8
  03db87c  cmpwi 30, 2
  03db880  bf 1, 0x3db8e4
  03db884  cmpwi 30, 3
  03db888  bf 1, 0x3db910
  03db88c  cmpwi 3, 0
  03db890  bt 2, 0x3db8ac
  03db894  ori 3, 31, 0
  03db898  li 4, 0
  03db89c  li 5, 0
  03db8a0  li 6, 0
  03db8a4  bl 0xfddc0
  03db8a8  nop
  03db8ac  li 3, 7
  03db8b0  stb 3, 32(31)
  03db8b4  b 0x3dd2d0
  03db8b8  cmpwi 3, 0
  03db8bc  bt 2, 0x3db8d8
  03db8c0  ori 3, 31, 0
  03db8c4  li 4, 0
  03db8c8  li 5, 0
  03db8cc  li 6, 0
  03db8d0  bl 0xfddc0
  03db8d4  nop
  03db8d8  li 3, 10
  03db8dc  stb 3, 32(31)
  03db8e0  b 0x3dd2d0
  03db8e4  cmpwi 3, 2
  03db8e8  bt 2, 0x3db904
  03db8ec  ori 3, 31, 0
  03db8f0  li 4, 2
  03db8f4  li 5, 0
  03db8f8  li 6, 0
  03db8fc  bl 0xfddc0
  03db900  nop
  03db904  li 3, 8
  03db908  stb 3, 32(31)
  03db90c  b 0x3dd2d0
  03db910  cmpwi 3, 15
  03db914  bt 2, 0x3db930
  03db918  ori 3, 31, 0
  03db91c  li 4, 15
  03db920  li 5, 0
  03db924  li 6, 0
  03db928  bl 0xfddc0
  03db92c  nop
  03db930  li 3, 9
  03db934  stb 3, 32(31)
  03db938  b 0x3dd2d0
  03db93c  lbz 3, 112(31)
  03db940  rlwinm 3, 3, 0, 30, 30
  03db944  cmpwi 3, 0
  03db948  bt 2, 0x3dd2d0
  03db94c  li 3, 3
  03db950  lbz 4, 83(31)
  03db954  cmpwi 4, 4
  03db958  stb 3, 32(31)
  03db95c  bt 2, 0x3dd2d0
  03db960  ori 3, 31, 0
  03db964  li 4, 4
  03db968  li 5, 0
  03db96c  li 6, 0
  03db970  bl 0xfddc0
  03db974  nop
  03db978  b 0x3dd2d0
  03db97c  lwz 3, 544(30)
  03db980  lfs 1, 16(31)
  03db984  lfs 2, 20(31)
  03db988  lfs 3, 16(3)
  03db98c  lfs 4, 20(3)
  03db990  fsubs 1, 3, 1
  03db994  fsubs 2, 4, 2
  03db998  bl 0x5e8338
  03db99c  nop
  03db9a0  lis 3, 62
  03db9a4  lis 28, 114
  03db9a8  addi 29, 3, -19056
  03db9ac  ori 3, 31, 0
  03db9b0  addic 5, 30, 532
  03db9b4  lfs 4, 20(29)
  03db9b8  lfs 2, 12(29)
  03db9bc  lfs 5, 16(29)
  03db9c0  lfs 6, -3052(28)
  03db9c4  fmr 3, 5
  03db9c8  fmuls 4, 6, 4
  03db9cc  bl 0xff2e8
  03db9d0  nop
  03db9d4  lis 3, 165
  03db9d8  lwz 4, 392(30)
  03db9dc  addic 27, 1, 192
  03db9e0  slwi 4, 4, 7
  03db9e4  addic 26, 31, 16
  03db9e8  lwz 5, 7128(3)
  03db9ec  ori 3, 27, 0
  03db9f0  addc 4, 5, 4
  03db9f4  ori 5, 26, 0
  03db9f8  addic 4, 4, 48
  03db9fc  clrldi 4, 4, 32
  03dba00  bl 0x5e81f0
  03dba04  nop
  03dba08  li 3, 0
  03dba0c  lfs 1, -3052(28)
  03dba10  stw 3, 200(1)
  03dba14  lfs 2, 24(29)
  03dba18  ori 3, 27, 0
  03dba1c  fmuls 1, 1, 2
  03dba20  bl 0x110488
  03dba24  nop
  03dba28  ori 3, 26, 0
  03dba2c  ori 4, 26, 0
  03dba30  ori 5, 27, 0
  03dba34  bl 0x5e7f54
  03dba38  nop
  03dba3c  lfs 1, 28(29)
  03dba40  ori 3, 26, 0
  03dba44  li 4, 0
  03dba48  bl 0xffb70
  03dba4c  nop
  03dba50  fmr 31, 1
  03dba54  lis 4, 133
  03dba58  lfs 3, 32(29)
  03dba5c  lis 5, 114
  03dba60  lfs 1, -3052(28)
  03dba64  addic 3, 30, 72
  03dba68  fmuls 1, 1, 3
  03dba6c  lfs 2, 14848(4)
  03dba70  lfs 4, -3048(5)
  03dba74  fmuls 2, 2, 4
  03dba78  bl 0x109af0
  03dba7c  nop
  03dba80  lfs 2, 72(30)
  03dba84  fmr 1, 31
  03dba88  addic 3, 31, 24
  03dba8c  bl 0x109af0
  03dba90  nop
  03dba94  lfs 1, 24(31)
  03dba98  fcmpu 0, 1, 31
  03dba9c  bf 2, 0x3dd2d0
  03dbaa0  li 3, 4
  03dbaa4  lbz 4, 83(31)
  03dbaa8  cmpwi 4, 5
  03dbaac  stb 3, 32(31)
  03dbab0  bt 2, 0x3dd2d0
  03dbab4  li 3, 10
  03dbab8  bl 0x5e7e18
  03dbabc  nop
  03dbac0  ori 6, 3, 0
  03dbac4  ori 3, 31, 0
  03dbac8  li 4, 5
  03dbacc  li 5, 4
  03dbad0  bl 0xfddc0
  03dbad4  nop
  03dbad8  b 0x3dd2d0
  03dbadc  lbz 3, 112(31)
  03dbae0  rlwinm 3, 3, 0, 30, 30
  03dbae4  cmpwi 3, 0
  03dbae8  bt 2, 0x3dd2d0
  03dbaec  li 3, 5
  03dbaf0  lbz 4, 83(31)
  03dbaf4  cmpwi 4, 6
  03dbaf8  stb 3, 32(31)
  03dbafc  bt 2, 0x3dd2d0
  03dbb00  li 3, 6
  03dbb04  bl 0x5e7e18
  03dbb08  nop
  03dbb0c  ori 6, 3, 0
  03dbb10  ori 3, 31, 0
  03dbb14  li 4, 6
  03dbb18  li 5, 0
  03dbb1c  bl 0xfddc0
  03dbb20  nop
  03dbb24  b 0x3dd2d0
  03dbb28  lis 3, 165
  03dbb2c  lwz 5, 392(30)
  03dbb30  addic 4, 30, 208
  03dbb34  addic 6, 30, 64
  03dbb38  slwi 5, 5, 7
  03dbb3c  lwz 3, 7128(3)
  03dbb40  addc 5, 3, 5
  03dbb44  ori 3, 31, 0
  03dbb48  addic 5, 5, 48
  03dbb4c  clrldi 5, 5, 32
  03dbb50  bl 0x101cc0
  03dbb54  nop
  03dbb58  cmpwi 3, 4
  03dbb5c  bf 2, 0x3dd2d0
  03dbb60  lbz 3, 83(31)
  03dbb64  cmpwi 3, 0
  03dbb68  bt 2, 0x3dbba8
  03dbb6c  lis 3, 62
  03dbb70  lis 4, 114
  03dbb74  addi 3, 3, -19056
  03dbb78  li 5, 0
  03dbb7c  lfs 1, 36(3)
  03dbb80  lfs 2, -3056(4)
  03dbb84  ori 3, 31, 0
  03dbb88  fmuls 1, 2, 1
  03dbb8c  li 4, 0
  03dbb90  fctiwz 1, 1
  03dbb94  stfd 1, 560(1)
  03dbb98  lwz 6, 564(1)
  03dbb9c  extsw 6, 6
  03dbba0  bl 0xfddc0
  03dbba4  nop
  03dbba8  li 3, 7
  03dbbac  stb 3, 32(31)
  03dbbb0  b 0x3dd2d0
  03dbbb4  ori 3, 31, 0
  03dbbb8  addic 4, 30, 208
  03dbbbc  addic 5, 30, 480
  03dbbc0  addic 6, 30, 64
  03dbbc4  bl 0x101cc0
  03dbbc8  nop
  03dbbcc  rlwinm 3, 3, 0, 29, 30
  03dbbd0  cmpwi 3, 0
  03dbbd4  bt 2, 0x3dbc2c
  03dbbd8  lbz 3, 83(31)
  03dbbdc  cmpwi 3, 0
  03dbbe0  bt 2, 0x3dbc20
  03dbbe4  lis 3, 62
  03dbbe8  lis 4, 114
  03dbbec  addi 3, 3, -19056
  03dbbf0  li 5, 0
  03dbbf4  lfs 1, 40(3)
  03dbbf8  lfs 2, -3056(4)
  03dbbfc  ori 3, 31, 0
  03dbc00  fmuls 1, 2, 1
  03dbc04  li 4, 0
  03dbc08  fctiwz 1, 1
  03dbc0c  stfd 1, 560(1)
  03dbc10  lwz 6, 564(1)
  03dbc14  extsw 6, 6
  03dbc18  bl 0xfddc0
  03dbc1c  nop
  03dbc20  li 3, 7
  03dbc24  stb 3, 32(31)
  03dbc28  b 0x3dd2d0
  03dbc2c  lis 3, 165
  03dbc30  lwz 4, 392(30)
  03dbc34  slwi 4, 4, 7
  03dbc38  lwz 3, 7128(3)
  03dbc3c  lwz 5, 544(30)
  03dbc40  addc 4, 3, 4
  03dbc44  addic 3, 5, 16
  03dbc48  addic 4, 4, 48
  03dbc4c  clrldi 4, 4, 32
  03dbc50  bl 0x5e8548
  03dbc54  nop
  03dbc58  lfs 2, 384(30)
  03dbc5c  fcmpu 0, 1, 2
  03dbc60  cror 6, 1, 2
  03dbc64  bt 6, 0x3dd2d0
  03dbc68  lis 3, 62
  03dbc6c  lwz 4, 544(30)
  03dbc70  addi 3, 3, -19056
  03dbc74  lfs 1, 24(31)
  03dbc78  lfs 2, 8(3)
  03dbc7c  lfs 3, 24(4)
  03dbc80  fsubs 1, 3, 1
  03dbc84  fabs 1, 1
  03dbc88  fcmpu 0, 1, 2
  03dbc8c  cror 6, 1, 2
  03dbc90  bt 6, 0x3dd2d0
  03dbc94  li 3, 5
  03dbc98  lbz 4, 83(31)
  03dbc9c  cmpwi 4, 6
  03dbca0  stb 3, 32(31)
  03dbca4  bt 2, 0x3dd2d0
  03dbca8  lis 3, 62
  03dbcac  lis 4, 114
  03dbcb0  addi 3, 3, -19056
  03dbcb4  li 5, 0
  03dbcb8  lfs 1, 40(3)
  03dbcbc  lfs 2, -3056(4)
  03dbcc0  ori 3, 31, 0
  03dbcc4  li 4, 6
  03dbcc8  fmuls 1, 2, 1
  03dbccc  fctiwz 1, 1
  03dbcd0  stfd 1, 560(1)
  03dbcd4  lwz 6, 564(1)
  03dbcd8  extsw 6, 6
  03dbcdc  bl 0xfddc0
  03dbce0  nop
  03dbce4  b 0x3dd2d0
  03dbce8  lis 3, 165
  03dbcec  lwz 4, 392(30)
  03dbcf0  slwi 4, 4, 7
  03dbcf4  lwz 3, 7128(3)
  03dbcf8  lwz 5, 544(30)
  03dbcfc  addc 4, 3, 4
  03dbd00  addic 3, 5, 16
  03dbd04  addic 4, 4, 48
  03dbd08  clrldi 4, 4, 32
  03dbd0c  bl 0x5e8548
  03dbd10  nop
  03dbd14  lfs 2, 384(30)
  03dbd18  lbz 4, 112(31)
  03dbd1c  fcmpu 0, 1, 2
  03dbd20  cror 6, 1, 2
  03dbd24  bt 6, 0x3dc068
  03dbd28  lis 3, 62
  03dbd2c  addi 5, 3, -19056
  03dbd30  lwz 3, 544(30)
  03dbd34  lfs 1, 24(31)
  03dbd38  lfs 2, 8(5)
  03dbd3c  lfs 3, 24(3)
  03dbd40  fsubs 3, 3, 1
  03dbd44  fabs 3, 3
  03dbd48  fcmpu 0, 3, 2
  03dbd4c  cror 6, 1, 2
  03dbd50  bt 6, 0x3dc068
  03dbd54  lis 4, 165
  03dbd58  lwz 5, 392(30)
  03dbd5c  fmr 2, 1
  03dbd60  slwi 5, 5, 7
  03dbd64  lwz 4, 7128(4)
  03dbd68  lfs 1, 20(31)
  03dbd6c  addc 4, 4, 5
  03dbd70  lfs 31, 16(31)
  03dbd74  clrldi 4, 4, 32
  03dbd78  lfs 3, 52(4)
  03dbd7c  lfs 4, 48(4)
  03dbd80  fsubs 3, 1, 3
  03dbd84  fsubs 4, 31, 4
  03dbd88  lfs 5, 56(4)
  03dbd8c  fsubs 2, 2, 5
  03dbd90  lis 4, 62
  03dbd94  addi 4, 4, -19056
  03dbd98  fmuls 3, 3, 3
  03dbd9c  fmadds 3, 4, 4, 3
  03dbda0  fmadds 2, 2, 2, 3
  03dbda4  lfs 3, 44(4)
  03dbda8  fsqrts 2, 2
  03dbdac  fcmpu 0, 2, 3
  03dbdb0  cror 6, 1, 2
  03dbdb4  bt 6, 0x3dc014
  03dbdb8  lfs 2, 16(3)
  03dbdbc  lfs 3, 20(3)
  03dbdc0  fsubs 2, 2, 31
  03dbdc4  fsubs 1, 3, 1
  03dbdc8  lis 3, 62
  03dbdcc  addi 3, 3, -19056
  03dbdd0  lis 4, 115
  03dbdd4  addic 4, 4, 22784
  03dbdd8  fabs 3, 2
  03dbddc  fabs 4, 1
  03dbde0  stfs 2, 384(1)
  03dbde4  stfs 1, 388(1)
  03dbde8  fsubs 1, 3, 4
  03dbdec  stfs 1, 392(1)
  03dbdf0  lwz 5, 384(1)
  03dbdf4  lfs 2, 48(3)
  03dbdf8  lfs 1, 384(1)
  03dbdfc  lwz 3, 388(1)
  03dbe00  lfs 5, 388(1)
  03dbe04  lwz 6, 392(1)
  03dbe08  rlwinm 3, 3, 3, 29, 29
  03dbe0c  lfs 6, 392(1)
  03dbe10  fabs 1, 1
  03dbe14  rlwimi 3, 6, 2, 30, 30
  03dbe18  fabs 5, 5
  03dbe1c  fsub 7, 6, 2
  03dbe20  rlwimi 3, 5, 4, 28, 28
  03dbe24  fsub 6, 6, 2
  03dbe28  ori 5, 4, 0
  03dbe2c  rlwimi 5, 3, 2, 26, 28
  03dbe30  slwi 3, 3, 2
  03dbe34  clrldi 5, 5, 32
  03dbe38  fsel 4, 7, 1, 4
  03dbe3c  lfsx 31, 4, 3
  03dbe40  lfs 1, 4(5)
  03dbe44  fsel 3, 6, 5, 3
  03dbe48  fcmpu 0, 4, 2
  03dbe4c  bt 1, 0x3dbe58
  03dbe50  fmr 31, 2
  03dbe54  b 0x3dbf78
  03dbe58  fsubs 5, 3, 4
  03dbe5c  fadds 3, 3, 4
  03dbe60  addic 3, 1, 16
  03dbe64  li 7, 2
  03dbe68  addic 5, 3, 524
  03dbe6c  addic 4, 3, 508
  03dbe70  mtctr 7
  03dbe74  fdivs 3, 5, 3
  03dbe78  fmuls 4, 3, 3
  03dbe7c  stfs 3, 536(1)
  03dbe80  stfs 3, 528(1)
  03dbe84  stfs 3, 532(1)
  03dbe88  stfs 3, 524(1)
  03dbe8c  lfs 6, 536(1)
  03dbe90  lfs 7, 528(1)
  03dbe94  lfs 8, 532(1)
  03dbe98  fmuls 5, 4, 4
  03dbe9c  fmuls 7, 7, 4
  03dbea0  fmuls 6, 6, 5
  03dbea4  fmuls 3, 5, 5
  03dbea8  fmuls 5, 8, 5
  03dbeac  stfs 7, 528(1)
  03dbeb0  fmuls 4, 6, 4
  03dbeb4  stfs 5, 532(1)
  03dbeb8  stfs 4, 536(1)
  03dbebc  lfs 4, 508(3)
  03dbec0  fmuls 4, 4, 3
  03dbec4  stfs 4, 524(3)
  03dbec8  lfs 4, 4(4)
  03dbecc  addic 4, 4, 8
  03dbed0  fmuls 4, 4, 3
  03dbed4  addic 3, 3, 8
  03dbed8  stfs 4, 4(5)
  03dbedc  addic 5, 5, 8
  03dbee0  bdnz 0x3dbebc
  03dbee4  li 5, 4
  03dbee8  ori 3, 1, 0
  03dbeec  mtctr 5
  03dbef0  lis 4, 115
  03dbef4  addic 5, 3, 524
  03dbef8  addic 4, 4, 22752
  03dbefc  ori 6, 5, 0
  03dbf00  lfs 3, 524(3)
  03dbf04  lfs 4, 0(4)
  03dbf08  fmuls 3, 3, 4
  03dbf0c  lfs 4, 4(4)
  03dbf10  addic 4, 4, 8
  03dbf14  stfs 3, 524(3)
  03dbf18  lfs 3, 4(5)
  03dbf1c  addic 3, 3, 8
  03dbf20  fmuls 3, 3, 4
  03dbf24  stfs 3, 4(5)
  03dbf28  addic 5, 5, 8
  03dbf2c  bdnz 0x3dbf00
  03dbf30  ori 3, 1, 0
  03dbf34  mtctr 7
  03dbf38  lfs 3, 524(3)
  03dbf3c  fadds 2, 2, 3
  03dbf40  addic 3, 3, 16
  03dbf44  lfs 3, 4(6)
  03dbf48  lfs 4, 8(6)
  03dbf4c  lfs 5, 12(6)
  03dbf50  addic 6, 6, 16
  03dbf54  fadds 2, 2, 3
  03dbf58  fadds 2, 2, 4
  03dbf5c  fadds 2, 2, 5
  03dbf60  bdnz 0x3dbf38
  03dbf64  lis 3, 62
  03dbf68  addi 3, 3, -19056
  03dbf6c  lfs 3, 52(3)
  03dbf70  fadds 2, 2, 3
  03dbf74  fmadds 31, 2, 31, 1
  03dbf78  lis 3, 62
  03dbf7c  addic 5, 30, 532
  03dbf80  fmr 1, 31
  03dbf84  addi 30, 3, -19056
  03dbf88  ori 3, 31, 0
  03dbf8c  lfs 2, 12(30)
  03dbf90  lfs 3, 16(30)
  03dbf94  lfs 4, 56(30)
  03dbf98  bl 0xff2e8
  03dbf9c  nop
  03dbfa0  lfs 1, 72(31)
  03dbfa4  fmr 2, 31
  03dbfa8  bl 0x5026a0
  03dbfac  nop
  03dbfb0  lfs 2, 60(30)
  03dbfb4  fcmpu 0, 1, 2
  03dbfb8  cror 6, 1, 2
  03dbfbc  bt 6, 0x3dd2d0
  03dbfc0  li 3, 11
  03dbfc4  lbz 4, 83(31)
  03dbfc8  cmpwi 4, 8
  03dbfcc  stb 3, 32(31)
  03dbfd0  bt 2, 0x3dd2d0
  03dbfd4  lis 3, 62
  03dbfd8  lis 4, 114
  03dbfdc  addi 3, 3, -19056
  03dbfe0  li 5, 0
  03dbfe4  lfs 1, 64(3)
  03dbfe8  lfs 2, -3056(4)
  03dbfec  ori 3, 31, 0
  03dbff0  fmuls 1, 2, 1
  03dbff4  li 4, 8
  03dbff8  fctiwz 1, 1
  03dbffc  stfd 1, 560(1)
  03dc000  lwz 6, 564(1)
  03dc004  extsw 6, 6
  03dc008  bl 0xfddc0
  03dc00c  nop
  03dc010  b 0x3dd2d0
  03dc014  li 3, 5
  03dc018  lbz 4, 83(31)
  03dc01c  cmpwi 4, 6
  03dc020  stb 3, 32(31)
  03dc024  bt 2, 0x3dd2d0
  03dc028  lis 3, 62
  03dc02c  lis 4, 114
  03dc030  addi 3, 3, -19056
  03dc034  li 5, 0
  03dc038  lfs 1, 40(3)
  03dc03c  lfs 2, -3056(4)
  03dc040  ori 3, 31, 0
  03dc044  li 4, 6
  03dc048  fmuls 1, 2, 1
  03dc04c  fctiwz 1, 1
  03dc050  stfd 1, 560(1)
  03dc054  lwz 6, 564(1)
  03dc058  extsw 6, 6
  03dc05c  bl 0xfddc0
  03dc060  nop
  03dc064  b 0x3dd2d0
  03dc068  rlwinm 3, 4, 0, 30, 30
  03dc06c  cmpwi 3, 0
  03dc070  bt 2, 0x3dd2d0
  03dc074  bl 0xfcc68
  03dc078  nop
  03dc07c  fmr 31, 1
  03dc080  lis 3, 62
  03dc084  addi 3, 3, -19056
  03dc088  lfs 1, 68(3)
  03dc08c  lfs 30, 72(3)
  03dc090  lfs 29, 76(3)
  03dc094  fadds 1, 31, 1
  03dc098  lfs 28, 80(3)
  03dc09c  lfs 27, 84(3)
  03dc0a0  lfs 26, 88(3)
  03dc0a4  lfs 25, 92(3)
  03dc0a8  lfs 24, 44(3)
  03dc0ac  lfs 23, 96(3)
  03dc0b0  fsubs 2, 30, 1
  03dc0b4  fsubs 3, 29, 1
  03dc0b8  fsub 4, 1, 2
  03dc0bc  fsel 1, 4, 2, 1
  03dc0c0  fsub 4, 3, 1
  03dc0c4  fsel 3, 4, 3, 1
  03dc0c8  fmr 1, 24
  03dc0cc  fmuls 4, 3, 3
  03dc0d0  fmuls 2, 4, 3
  03dc0d4  fmuls 5, 4, 2
  03dc0d8  fmadds 3, 2, 28, 3
  03dc0dc  fmr 2, 23
  03dc0e0  fmuls 6, 4, 5
  03dc0e4  fmadds 3, 5, 27, 3
  03dc0e8  fmuls 4, 4, 6
  03dc0ec  fmadds 3, 6, 26, 3
  03dc0f0  fmadds 22, 4, 25, 3
  03dc0f4  bl 0xfcbe8
  03dc0f8  nop
  03dc0fc  fsubs 2, 30, 31
  03dc100  fsubs 3, 29, 31
  03dc104  fmuls 1, 22, 1
  03dc108  fsub 4, 31, 2
  03dc10c  stfs 1, 480(30)
  03dc110  fmr 1, 24
  03dc114  fsel 2, 4, 2, 31
  03dc118  fsub 4, 3, 2
  03dc11c  fsel 3, 4, 3, 2
  03dc120  fmr 2, 23
  03dc124  fmuls 4, 3, 3
  03dc128  fmuls 5, 4, 3
  03dc12c  fmuls 6, 4, 5
  03dc130  fmadds 3, 5, 28, 3
  03dc134  fmuls 5, 4, 6
  03dc138  fmadds 3, 6, 27, 3
  03dc13c  fmuls 4, 4, 5
  03dc140  fmadds 3, 5, 26, 3
  03dc144  fmadds 31, 4, 25, 3
  03dc148  bl 0xfcbe8
  03dc14c  nop
  03dc150  lis 3, 165
  03dc154  fmuls 1, 31, 1
  03dc158  li 5, 0
  03dc15c  lwz 4, 392(30)
  03dc160  slwi 4, 4, 7
  03dc164  lwz 3, 7128(3)
  03dc168  lfs 2, 480(30)
  03dc16c  addc 3, 3, 4
  03dc170  stw 5, 488(30)
  03dc174  clrldi 3, 3, 32
  03dc178  li 4, 6
  03dc17c  stfs 1, 484(30)
  03dc180  lfs 3, 48(3)
  03dc184  fadds 2, 2, 3
  03dc188  stfs 2, 480(30)
  03dc18c  lfs 2, 52(3)
  03dc190  fadds 1, 1, 2
  03dc194  stfs 1, 484(30)
  03dc198  lfs 1, 56(3)
  03dc19c  stfs 1, 488(30)
  03dc1a0  lbz 3, 83(31)
  03dc1a4  stb 4, 32(31)
  03dc1a8  cmpwi 3, 6
  03dc1ac  bt 2, 0x3dd2d0
  03dc1b0  lis 3, 62
  03dc1b4  lis 4, 114
  03dc1b8  addi 3, 3, -19056
  03dc1bc  li 5, 0
  03dc1c0  lfs 1, 40(3)
  03dc1c4  lfs 2, -3056(4)
  03dc1c8  ori 3, 31, 0
  03dc1cc  li 4, 6
  03dc1d0  fmuls 1, 2, 1
  03dc1d4  fctiwz 1, 1
  03dc1d8  stfd 1, 560(1)
  03dc1dc  lwz 6, 564(1)
  03dc1e0  extsw 6, 6
  03dc1e4  bl 0xfddc0
  03dc1e8  nop
  03dc1ec  b 0x3dd2d0
  03dc1f0  lis 3, 161
  03dc1f4  lwz 3, 1808(3)
  03dc1f8  srawi 4, 3, 2
  03dc1fc  addze 4, 4
  03dc200  sldi 4, 4, 2
  03dc204  subc 3, 3, 4
  03dc208  cmpwi 3, 0
  03dc20c  bf 2, 0x3dc3c4
  03dc210  lbz 3, 49(31)
  03dc214  cmpwi 3, 0
  03dc218  bt 2, 0x3dc3c4
  03dc21c  lis 3, 62
  03dc220  lis 4, 133
  03dc224  addi 29, 3, -19056
  03dc228  lfs 2, 14868(4)
  03dc22c  lfs 1, 48(29)
  03dc230  bl 0xfcbe8
  03dc234  nop
  03dc238  lis 3, 114
  03dc23c  lfs 2, -3052(3)
  03dc240  fmuls 31, 1, 2
  03dc244  bl 0xfcc68
  03dc248  nop
  03dc24c  lfs 2, 68(29)
  03dc250  lfs 3, 72(29)
  03dc254  fadds 2, 1, 2
  03dc258  lfs 4, 76(29)
  03dc25c  fsubs 5, 3, 1
  03dc260  li 3, 0
  03dc264  addic 28, 1, 208
  03dc268  li 4, 0
  03dc26c  ori 5, 28, 0
  03dc270  fsubs 3, 3, 2
  03dc274  fsub 7, 1, 5
  03dc278  fsubs 6, 4, 2
  03dc27c  fsubs 4, 4, 1
  03dc280  fsub 8, 2, 3
  03dc284  fsel 1, 7, 5, 1
  03dc288  fsel 2, 8, 3, 2
  03dc28c  fsub 5, 4, 1
  03dc290  lfs 3, 80(29)
  03dc294  fsub 7, 6, 2
  03dc298  fsel 1, 5, 4, 1
  03dc29c  lfs 4, 84(29)
  03dc2a0  lfs 5, 88(29)
  03dc2a4  lfs 9, 92(29)
  03dc2a8  stw 3, 232(1)
  03dc2ac  ori 3, 31, 0
  03dc2b0  fsel 2, 7, 6, 2
  03dc2b4  fmuls 6, 1, 1
  03dc2b8  fmuls 7, 2, 2
  03dc2bc  fmuls 8, 6, 1
  03dc2c0  fmuls 10, 7, 2
  03dc2c4  fmuls 11, 6, 8
  03dc2c8  fmadds 1, 8, 3, 1
  03dc2cc  fmuls 8, 7, 10
  03dc2d0  fmadds 2, 10, 3, 2
  03dc2d4  fmuls 3, 6, 11
  03dc2d8  fmadds 1, 11, 4, 1
  03dc2dc  fmuls 10, 7, 8
  03dc2e0  fmadds 2, 8, 4, 2
  03dc2e4  fmuls 4, 6, 3
  03dc2e8  fmadds 1, 3, 5, 1
  03dc2ec  fmuls 3, 7, 10
  03dc2f0  fmadds 2, 10, 5, 2
  03dc2f4  fmadds 1, 4, 9, 1
  03dc2f8  fmadds 2, 3, 9, 2
  03dc2fc  fmuls 1, 1, 31
  03dc300  fmuls 2, 2, 31
  03dc304  stfs 1, 228(1)
  03dc308  stfs 2, 224(1)
  03dc30c  bl 0xf1114
  03dc310  nop
  03dc314  lis 3, 133
  03dc318  lfs 31, 100(29)
  03dc31c  lis 4, 133
  03dc320  lwz 3, 14860(3)
  03dc324  extsw 3, 3
  03dc328  std 3, 560(1)
  03dc32c  lis 3, 114
  03dc330  lfs 2, 28(29)
  03dc334  lfs 3, -3056(3)
  03dc338  lwz 3, 14864(4)
  03dc33c  lfd 4, 560(1)
  03dc340  lis 4, 133
  03dc344  fcfid 4, 4
  03dc348  extsw 3, 3
  03dc34c  frsp 4, 4
  03dc350  fadds 4, 4, 2
  03dc354  fmuls 4, 3, 4
  03dc358  fctiwz 4, 4
  03dc35c  stfd 4, 560(1)
  03dc360  lwz 5, 564(1)
  03dc364  std 3, 560(1)
  03dc368  lwz 3, 14852(4)
  03dc36c  lfd 1, 560(1)
  03dc370  fcfid 1, 1
  03dc374  extsw 29, 3
  03dc378  extsw 3, 5
  03dc37c  frsp 1, 1
  03dc380  fadds 1, 1, 2
  03dc384  fmuls 1, 3, 1
  03dc388  fctiwz 1, 1
  03dc38c  stfd 1, 560(1)
  03dc390  lwz 4, 564(1)
  03dc394  extsw 4, 4
  03dc398  bl 0xfe484
  03dc39c  nop
  03dc3a0  ori 8, 3, 0
  03dc3a4  fmr 1, 31
  03dc3a8  ori 3, 28, 0
  03dc3ac  addic 4, 1, 224
  03dc3b0  ori 5, 29, 0
  03dc3b4  ori 6, 29, 0
  03dc3b8  li 9, 1
  03dc3bc  bl 0x1268f8
  03dc3c0  nop
  03dc3c4  lwz 3, 396(30)
  03dc3c8  cmpwi 3, -1
  03dc3cc  bf 1, 0x3dc3f4
  03dc3d0  lis 5, 151
  03dc3d4  extsw 4, 3
  03dc3d8  addic 3, 5, -25376
  03dc3dc  addic 3, 3, 672
  03dc3e0  bl 0x110b70
  03dc3e4  nop
  03dc3e8  cmpwi 3, 0
  03dc3ec  bf 2, 0x3dc458
  03dc3f0  b 0x3dd2d0
  03dc3f4  lis 3, 165
  03dc3f8  lwz 5, 392(30)
  03dc3fc  lis 4, 151
  03dc400  slwi 5, 5, 7
  03dc404  addic 4, 4, -25376
  03dc408  lwz 3, 7128(3)
  03dc40c  addc 3, 3, 5
  03dc410  lfs 1, 132(4)
  03dc414  clrldi 3, 3, 32
  03dc418  lfs 2, 128(4)
  03dc41c  lfs 3, 136(4)
  03dc420  lfs 4, 52(3)
  03dc424  lfs 5, 48(3)
  03dc428  fsubs 1, 1, 4
  03dc42c  fsubs 2, 2, 5
  03dc430  lfs 4, 56(3)
  03dc434  fsubs 3, 3, 4
  03dc438  fmuls 1, 1, 1
  03dc43c  fmadds 1, 2, 2, 1
  03dc440  lfs 2, 388(30)
  03dc444  fmadds 1, 3, 3, 1
  03dc448  fsqrts 1, 1
  03dc44c  fcmpu 0, 1, 2
  03dc450  cror 6, 1, 2
  03dc454  bt 6, 0x3dd2d0
  03dc458  lbz 3, 32(31)
  03dc45c  cmpwi 3, 8
  03dc460  cmpwi 1, 3, 9
  03dc464  bf 2, 0x3dc4bc
  03dc468  lbz 3, 83(31)
  03dc46c  cmpwi 3, 4
  03dc470  bt 2, 0x3dc4b0
  03dc474  lis 3, 62
  03dc478  lis 4, 114
  03dc47c  addi 3, 3, -19056
  03dc480  li 5, 0
  03dc484  lfs 1, 40(3)
  03dc488  lfs 2, -3056(4)
  03dc48c  ori 3, 31, 0
  03dc490  fmuls 1, 2, 1
  03dc494  li 4, 4
  03dc498  fctiwz 1, 1
  03dc49c  stfd 1, 560(1)
  03dc4a0  lwz 6, 564(1)
  03dc4a4  extsw 6, 6
  03dc4a8  bl 0xfddc0
  03dc4ac  nop
  03dc4b0  li 3, 2
  03dc4b4  stb 3, 32(31)
  03dc4b8  b 0x3dd2d0
  03dc4bc  bf 6, 0x3dc514
  03dc4c0  lbz 3, 83(31)
  03dc4c4  cmpwi 3, 16
  03dc4c8  bt 2, 0x3dc508
  03dc4cc  lis 3, 62
  03dc4d0  lis 4, 114
  03dc4d4  addi 3, 3, -19056
  03dc4d8  li 5, 0
  03dc4dc  lfs 1, 40(3)
  03dc4e0  lfs 2, -3056(4)
  03dc4e4  ori 3, 31, 0
  03dc4e8  fmuls 1, 2, 1
  03dc4ec  li 4, 16
  03dc4f0  fctiwz 1, 1
  03dc4f4  stfd 1, 560(1)
  03dc4f8  lwz 6, 564(1)
  03dc4fc  extsw 6, 6
  03dc500  bl 0xfddc0
  03dc504  nop
  03dc508  li 3, 2
  03dc50c  stb 3, 32(31)
  03dc510  b 0x3dd2d0
  03dc514  li 3, 5
  03dc518  lbz 4, 83(31)
  03dc51c  cmpwi 4, 6
  03dc520  stb 3, 32(31)
  03dc524  bt 2, 0x3dd2d0
  03dc528  lis 3, 62
  03dc52c  lis 4, 114
  03dc530  addi 3, 3, -19056
  03dc534  li 5, 0
  03dc538  lfs 1, 64(3)
  03dc53c  lfs 2, -3056(4)
  03dc540  ori 3, 31, 0
  03dc544  li 4, 6
  03dc548  fmuls 1, 2, 1
  03dc54c  fctiwz 1, 1
  03dc550  stfd 1, 560(1)
  03dc554  lwz 6, 564(1)
  03dc558  extsw 6, 6
  03dc55c  bl 0xfddc0
  03dc560  nop
  03dc564  b 0x3dd2d0
  03dc568  lis 3, 16384
  03dc56c  lwz 4, 544(30)
  03dc570  stw 3, 88(31)
  03dc574  lfs 1, 16(31)
  03dc578  lfs 2, 20(31)
  03dc57c  lfs 3, 16(4)
  03dc580  lis 3, 62
  03dc584  lfs 4, 20(4)
  03dc588  fsubs 1, 3, 1
  03dc58c  fsubs 2, 4, 2
  03dc590  addi 3, 3, -19056
  03dc594  lis 4, 115
  03dc598  addic 4, 4, 22784
  03dc59c  fabs 3, 1
  03dc5a0  fabs 5, 2
  03dc5a4  stfs 1, 372(1)
  03dc5a8  stfs 2, 376(1)
  03dc5ac  fsubs 1, 3, 5
  03dc5b0  stfs 1, 380(1)
  03dc5b4  lwz 5, 372(1)
  03dc5b8  lfs 4, 48(3)
  03dc5bc  lfs 1, 372(1)
  03dc5c0  lwz 3, 376(1)
  03dc5c4  lfs 2, 376(1)
  03dc5c8  fabs 1, 1
  03dc5cc  lwz 6, 380(1)
  03dc5d0  rlwinm 3, 3, 3, 29, 29
  03dc5d4  fabs 6, 2
  03dc5d8  lfs 2, 380(1)
  03dc5dc  rlwimi 3, 6, 2, 30, 30
  03dc5e0  fsub 7, 2, 4
  03dc5e4  rlwimi 3, 5, 4, 28, 28
  03dc5e8  fsub 8, 2, 4
  03dc5ec  ori 5, 4, 0
  03dc5f0  rlwimi 5, 3, 2, 26, 28
  03dc5f4  slwi 3, 3, 2
  03dc5f8  clrldi 5, 5, 32
  03dc5fc  fsel 5, 7, 1, 5
  03dc600  lfsx 1, 4, 3
  03dc604  lfs 2, 4(5)
  03dc608  fsel 3, 8, 6, 3
  03dc60c  fcmpu 0, 5, 4
  03dc610  bt 1, 0x3dc618
  03dc614  b 0x3dc738
  03dc618  fsubs 6, 3, 5
  03dc61c  fadds 3, 3, 5
  03dc620  addic 3, 1, 16
  03dc624  li 6, 2
  03dc628  addic 5, 3, 492
  03dc62c  addic 4, 3, 476
  03dc630  mtctr 6
  03dc634  fdivs 3, 6, 3
  03dc638  fmuls 5, 3, 3
  03dc63c  stfs 3, 504(1)
  03dc640  stfs 3, 496(1)
  03dc644  stfs 3, 500(1)
  03dc648  stfs 3, 492(1)
  03dc64c  lfs 7, 504(1)
  03dc650  lfs 8, 496(1)
  03dc654  lfs 9, 500(1)
  03dc658  fmuls 6, 5, 5
  03dc65c  fmuls 8, 8, 5
  03dc660  fmuls 7, 7, 6
  03dc664  fmuls 3, 6, 6
  03dc668  fmuls 6, 9, 6
  03dc66c  stfs 8, 496(1)
  03dc670  fmuls 5, 7, 5
  03dc674  stfs 6, 500(1)
  03dc678  stfs 5, 504(1)
  03dc67c  lfs 5, 476(3)
  03dc680  fmuls 5, 5, 3
  03dc684  stfs 5, 492(3)
  03dc688  lfs 5, 4(4)
  03dc68c  addic 4, 4, 8
  03dc690  fmuls 5, 5, 3
  03dc694  addic 3, 3, 8
  03dc698  stfs 5, 4(5)
  03dc69c  addic 5, 5, 8
  03dc6a0  bdnz 0x3dc67c
  03dc6a4  li 5, 4
  03dc6a8  ori 3, 1, 0
  03dc6ac  mtctr 5
  03dc6b0  lis 4, 115
  03dc6b4  addic 5, 3, 492
  03dc6b8  addic 4, 4, 22752
  03dc6bc  ori 7, 5, 0
  03dc6c0  lfs 3, 492(3)
  03dc6c4  lfs 5, 0(4)
  03dc6c8  fmuls 3, 3, 5
  03dc6cc  lfs 5, 4(4)
  03dc6d0  addic 4, 4, 8
  03dc6d4  stfs 3, 492(3)
  03dc6d8  lfs 3, 4(5)
  03dc6dc  addic 3, 3, 8
  03dc6e0  fmuls 3, 3, 5
  03dc6e4  stfs 3, 4(5)
  03dc6e8  addic 5, 5, 8
  03dc6ec  bdnz 0x3dc6c0
  03dc6f0  ori 3, 1, 0
  03dc6f4  mtctr 6
  03dc6f8  lfs 3, 492(3)
  03dc6fc  fadds 3, 4, 3
  03dc700  addic 3, 3, 16
  03dc704  lfs 4, 4(7)
  03dc708  lfs 5, 8(7)
  03dc70c  lfs 6, 12(7)
  03dc710  addic 7, 7, 16
  03dc714  fadds 3, 3, 4
  03dc718  fadds 4, 3, 5
  03dc71c  fadds 4, 4, 6
  03dc720  bdnz 0x3dc6f8
  03dc724  lis 3, 62
  03dc728  addi 3, 3, -19056
  03dc72c  lfs 3, 52(3)
  03dc730  fadds 4, 4, 3
  03dc734  fmadds 4, 4, 1, 2
  03dc738  lis 3, 62
  03dc73c  fmr 1, 4
  03dc740  addic 5, 30, 532
  03dc744  addi 4, 3, -19056
  03dc748  ori 3, 31, 0
  03dc74c  lfs 4, 56(4)
  03dc750  lfs 2, 12(4)
  03dc754  lfs 5, 16(4)
  03dc758  fmr 3, 5
  03dc75c  bl 0xff2e8
  03dc760  nop
  03dc764  lbz 3, 112(31)
  03dc768  rlwinm 3, 3, 0, 30, 30
  03dc76c  cmpwi 3, 0
  03dc770  bt 2, 0x3dd2d0
  03dc774  lis 3, 16256
  03dc778  lbz 5, 83(31)
  03dc77c  li 4, 12
  03dc780  cmpwi 5, 9
  03dc784  stw 3, 88(31)
  03dc788  stb 4, 32(31)
  03dc78c  bt 2, 0x3dd2d0
  03dc790  lis 3, 62
  03dc794  lis 4, 114
  03dc798  addi 3, 3, -19056
  03dc79c  li 5, 0
  03dc7a0  lfs 1, 64(3)
  03dc7a4  lfs 2, -3056(4)
  03dc7a8  ori 3, 31, 0
  03dc7ac  li 4, 9
  03dc7b0  fmuls 1, 2, 1
  03dc7b4  fctiwz 1, 1
  03dc7b8  stfd 1, 560(1)
  03dc7bc  lwz 6, 564(1)
  03dc7c0  extsw 6, 6
  03dc7c4  bl 0xfddc0
  03dc7c8  nop
  03dc7cc  b 0x3dd2d0
  03dc7d0  lis 6, 16128
  03dc7d4  addic 5, 1, 240
  03dc7d8  ori 3, 31, 0
  03dc7dc  li 4, 0
  03dc7e0  stw 6, 88(31)
  03dc7e4  bl 0xf1114
  03dc7e8  nop
  03dc7ec  lfs 4, 240(1)
  03dc7f0  lfs 1, 16(31)
  03dc7f4  lfs 5, 244(1)
  03dc7f8  lis 3, 62
  03dc7fc  lfs 2, 20(31)
  03dc800  fsubs 4, 4, 1
  03dc804  addi 4, 3, -19056
  03dc808  fsubs 5, 5, 2
  03dc80c  lis 3, 115
  03dc810  addic 3, 3, 22784
  03dc814  fabs 1, 4
  03dc818  fabs 2, 5
  03dc81c  stfs 4, 360(1)
  03dc820  stfs 5, 364(1)
  03dc824  fsubs 6, 1, 2
  03dc828  stfs 6, 368(1)
  03dc82c  lwz 5, 360(1)
  03dc830  lfs 7, 48(4)
  03dc834  lfs 3, 360(1)
  03dc838  lwz 4, 364(1)
  03dc83c  fabs 10, 3
  03dc840  lfs 3, 364(1)
  03dc844  lwz 6, 368(1)
  03dc848  rlwinm 4, 4, 3, 29, 29
  03dc84c  fabs 9, 3
  03dc850  lfs 3, 368(1)
  03dc854  rlwimi 4, 6, 2, 30, 30
  03dc858  fsub 8, 3, 7
  03dc85c  rlwimi 4, 5, 4, 28, 28
  03dc860  fsub 11, 3, 7
  03dc864  ori 5, 3, 0
  03dc868  rlwimi 5, 4, 2, 26, 28
  03dc86c  slwi 4, 4, 2
  03dc870  clrldi 5, 5, 32
  03dc874  fsel 10, 8, 10, 2
  03dc878  lfsx 3, 3, 4
  03dc87c  lfs 8, 4(5)
  03dc880  fsel 9, 11, 9, 1
  03dc884  fcmpu 0, 10, 7
  03dc888  bt 1, 0x3dc894
  03dc88c  fmr 3, 7
  03dc890  b 0x3dc9b8
  03dc894  fsubs 11, 9, 10
  03dc898  fadds 9, 9, 10
  03dc89c  addic 4, 1, 16
  03dc8a0  li 8, 2
  03dc8a4  addic 5, 4, 444
  03dc8a8  addic 6, 4, 460
  03dc8ac  mtctr 8
  03dc8b0  fdivs 9, 11, 9
  03dc8b4  fmuls 10, 9, 9
  03dc8b8  stfs 9, 472(1)
  03dc8bc  stfs 9, 464(1)
  03dc8c0  stfs 9, 468(1)
  03dc8c4  stfs 9, 460(1)
  03dc8c8  lfs 12, 472(1)
  03dc8cc  lfs 13, 464(1)
  03dc8d0  lfs 0, 468(1)
  03dc8d4  fmuls 11, 10, 10
  03dc8d8  fmuls 13, 13, 10
  03dc8dc  fmuls 12, 12, 11
  03dc8e0  fmuls 9, 11, 11
  03dc8e4  fmuls 11, 0, 11
  03dc8e8  stfs 13, 464(1)
  03dc8ec  fmuls 10, 12, 10
  03dc8f0  stfs 11, 468(1)
  03dc8f4  stfs 10, 472(1)
  03dc8f8  lfs 10, 444(4)
  03dc8fc  fmuls 10, 10, 9
  03dc900  stfs 10, 460(4)
  03dc904  lfs 10, 4(5)
  03dc908  addic 4, 4, 8
  03dc90c  addic 5, 5, 8
  03dc910  fmuls 10, 10, 9
  03dc914  stfs 10, 4(6)
  03dc918  addic 6, 6, 8
  03dc91c  bdnz 0x3dc8f8
  03dc920  li 6, 4
  03dc924  ori 4, 1, 0
  03dc928  mtctr 6
  03dc92c  lis 5, 115
  03dc930  addic 6, 4, 460
  03dc934  addic 5, 5, 22752
  03dc938  ori 7, 6, 0
  03dc93c  lfs 9, 460(4)
  03dc940  lfs 10, 0(5)
  03dc944  fmuls 9, 9, 10
  03dc948  lfs 10, 4(5)
  03dc94c  addic 5, 5, 8
  03dc950  stfs 9, 460(4)
  03dc954  lfs 9, 4(6)
  03dc958  addic 4, 4, 8
  03dc95c  fmuls 9, 9, 10
  03dc960  stfs 9, 4(6)
  03dc964  addic 6, 6, 8
  03dc968  bdnz 0x3dc93c
  03dc96c  fmr 9, 7
  03dc970  ori 4, 1, 0
  03dc974  mtctr 8
  03dc978  lfs 10, 460(4)
  03dc97c  fadds 9, 9, 10
  03dc980  addic 4, 4, 16
  03dc984  lfs 10, 4(7)
  03dc988  lfs 11, 8(7)
  03dc98c  lfs 12, 12(7)
  03dc990  addic 7, 7, 16
  03dc994  fadds 9, 9, 10
  03dc998  fadds 9, 9, 11
  03dc99c  fadds 9, 9, 12
  03dc9a0  bdnz 0x3dc978
  03dc9a4  lis 4, 62
  03dc9a8  addi 4, 4, -19056
  03dc9ac  lfs 10, 52(4)
  03dc9b0  fadds 9, 9, 10
  03dc9b4  fmadds 3, 9, 3, 8
  03dc9b8  lis 4, 62
  03dc9bc  fmr 11, 2
  03dc9c0  addi 4, 4, -19056
  03dc9c4  fmr 9, 4
  03dc9c8  lfs 8, 68(4)
  03dc9cc  lfs 2, 72(4)
  03dc9d0  fadds 3, 3, 8
  03dc9d4  lfs 4, 76(4)
  03dc9d8  fmr 8, 5
  03dc9dc  lfs 5, 80(4)
  03dc9e0  lfs 0, 84(4)
  03dc9e4  lfs 31, 88(4)
  03dc9e8  lfs 30, 92(4)
  03dc9ec  stfs 9, 348(1)
  03dc9f0  stfs 6, 356(1)
  03dc9f4  fmr 6, 0
  03dc9f8  fsubs 10, 2, 3
  03dc9fc  fsubs 12, 4, 3
  03dca00  stfs 8, 352(1)
  03dca04  lwz 4, 348(1)
  03dca08  lwz 5, 356(1)
  03dca0c  fmr 8, 31
  03dca10  fsub 13, 3, 10
  03dca14  fsel 3, 13, 10, 3
  03dca18  lfs 10, 356(1)
  03dca1c  lfs 13, 348(1)
  03dca20  fsub 0, 10, 7
  03dca24  fabs 13, 13
  03dca28  lwz 6, 352(1)
  03dca2c  fsub 10, 10, 7
  03dca30  rlwinm 6, 6, 3, 29, 29
  03dca34  fsub 9, 12, 3
  03dca38  rlwimi 6, 5, 2, 30, 30
  03dca3c  rlwimi 6, 4, 4, 28, 28
  03dca40  fsel 11, 0, 13, 11
  03dca44  lfs 0, 352(1)
  03dca48  ori 4, 3, 0
  03dca4c  slwi 5, 6, 2
  03dca50  rlwimi 4, 6, 2, 26, 28
  03dca54  fsel 3, 9, 12, 3
  03dca58  clrldi 4, 4, 32
  03dca5c  fmr 9, 30
  03dca60  fcmpu 0, 11, 7
  03dca64  fmuls 12, 3, 3
  03dca68  fmuls 31, 12, 3
  03dca6c  fmuls 13, 12, 31
  03dca70  fmadds 3, 31, 5, 3
  03dca74  fmuls 31, 12, 13
  03dca78  fmadds 3, 13, 6, 3
  03dca7c  fabs 13, 0
  03dca80  fmuls 12, 12, 31
  03dca84  fmadds 3, 31, 8, 3
  03dca88  fsel 10, 10, 13, 1
  03dca8c  fmadds 1, 12, 9, 3
  03dca90  stfs 1, 256(1)
  03dca94  lfsx 3, 3, 5
  03dca98  lfs 1, 4(4)
  03dca9c  bt 1, 0x3dcaa4
  03dcaa0  b 0x3dcbc4
  03dcaa4  fsubs 12, 10, 11
  03dcaa8  fadds 10, 10, 11
  03dcaac  addic 3, 1, 16
  03dcab0  li 7, 2
  03dcab4  addic 4, 3, 412
  03dcab8  addic 5, 3, 428
  03dcabc  mtctr 7
  03dcac0  fdivs 10, 12, 10
  03dcac4  fmuls 11, 10, 10
  03dcac8  stfs 10, 440(1)
  03dcacc  stfs 10, 432(1)
  03dcad0  stfs 10, 436(1)
  03dcad4  stfs 10, 428(1)
  03dcad8  lfs 13, 440(1)
  03dcadc  lfs 0, 432(1)
  03dcae0  lfs 31, 436(1)
  03dcae4  fmuls 12, 11, 11
  03dcae8  fmuls 0, 0, 11
  03dcaec  fmuls 13, 13, 12
  03dcaf0  fmuls 10, 12, 12
  03dcaf4  fmuls 12, 31, 12
  03dcaf8  stfs 0, 432(1)
  03dcafc  fmuls 11, 13, 11
  03dcb00  stfs 12, 436(1)
  03dcb04  stfs 11, 440(1)
  03dcb08  lfs 11, 412(3)
  03dcb0c  fmuls 11, 11, 10
  03dcb10  stfs 11, 428(3)
  03dcb14  lfs 11, 4(4)
  03dcb18  addic 3, 3, 8
  03dcb1c  addic 4, 4, 8
  03dcb20  fmuls 11, 11, 10
  03dcb24  stfs 11, 4(5)
  03dcb28  addic 5, 5, 8
  03dcb2c  bdnz 0x3dcb08
  03dcb30  li 5, 4
  03dcb34  ori 3, 1, 0
  03dcb38  mtctr 5
  03dcb3c  lis 4, 115
  03dcb40  addic 5, 3, 428
  03dcb44  addic 4, 4, 22752
  03dcb48  ori 6, 5, 0
  03dcb4c  lfs 10, 428(3)
  03dcb50  lfs 11, 0(4)
  03dcb54  fmuls 10, 10, 11
  03dcb58  lfs 11, 4(4)
  03dcb5c  addic 4, 4, 8
  03dcb60  stfs 10, 428(3)
  03dcb64  lfs 10, 4(5)
  03dcb68  addic 3, 3, 8
  03dcb6c  fmuls 10, 10, 11
  03dcb70  stfs 10, 4(5)
  03dcb74  addic 5, 5, 8
  03dcb78  bdnz 0x3dcb4c
  03dcb7c  ori 3, 1, 0
  03dcb80  mtctr 7
  03dcb84  lfs 10, 428(3)
  03dcb88  fadds 7, 7, 10
  03dcb8c  lfs 10, 4(6)
  03dcb90  addic 3, 3, 16
  03dcb94  lfs 11, 8(6)
  03dcb98  lfs 12, 12(6)
  03dcb9c  addic 6, 6, 16
  03dcba0  fadds 7, 7, 10
  03dcba4  fadds 7, 7, 11
  03dcba8  fadds 7, 7, 12
  03dcbac  bdnz 0x3dcb84
  03dcbb0  lis 3, 62
  03dcbb4  addi 3, 3, -19056
  03dcbb8  lfs 10, 52(3)
  03dcbbc  fadds 7, 7, 10
  03dcbc0  fmadds 7, 7, 3, 1
  03dcbc4  fsubs 1, 2, 7
  03dcbc8  fsubs 2, 4, 7
  03dcbcc  lis 4, 133
  03dcbd0  lis 3, -16948
  03dcbd4  addic 30, 30, 496
  03dcbd8  ori 3, 3, 52429
  03dcbdc  lfs 4, 14844(4)
  03dcbe0  fsub 3, 7, 1
  03dcbe4  addic 29, 1, 256
  03dcbe8  stw 3, 264(1)
  03dcbec  ori 3, 30, 0
  03dcbf0  addic 4, 1, 240
  03dcbf4  ori 5, 29, 0
  03dcbf8  fsel 1, 3, 1, 7
  03dcbfc  fsub 3, 2, 1
  03dcc00  fsel 1, 3, 2, 1
  03dcc04  fmuls 2, 1, 1
  03dcc08  fmuls 3, 2, 1
  03dcc0c  fmuls 7, 2, 3
  03dcc10  fmadds 3, 3, 5, 1
  03dcc14  fmr 1, 4
  03dcc18  fmuls 4, 2, 7
  03dcc1c  fmadds 3, 7, 6, 3
  03dcc20  fmuls 2, 2, 4
  03dcc24  fmadds 3, 4, 8, 3
  03dcc28  fmadds 2, 2, 9, 3
  03dcc2c  stfs 2, 260(1)
  03dcc30  bl 0x119b38
  03dcc34  nop
  03dcc38  lis 3, 62
  03dcc3c  lis 4, 17839
  03dcc40  addi 3, 3, -19056
  03dcc44  lis 5, 16256
  03dcc48  ori 6, 4, 57190
  03dcc4c  addic 28, 1, 288
  03dcc50  lis 8, 1
  03dcc54  lfs 1, 44(3)
  03dcc58  ori 4, 31, 0
  03dcc5c  stw 5, 264(1)
  03dcc60  ori 7, 29, 0
  03dcc64  ori 3, 28, 0
  03dcc68  stw 6, 268(1)
  03dcc6c  ori 5, 8, 1
  03dcc70  bl 0x10581c
  03dcc74  nop
  03dcc78  li 4, 5
  03dcc7c  li 5, 1
  03dcc80  lhz 6, 166(31)
  03dcc84  ori 3, 30, 0
  03dcc88  stb 4, 312(1)
  03dcc8c  stb 5, 313(1)
  03dcc90  ori 4, 31, 0
  03dcc94  sth 6, 314(1)
  03dcc98  ori 5, 28, 0
  03dcc9c  bl 0x11a018
  03dcca0  nop
  03dcca4  lbz 3, 112(31)
  03dcca8  rlwinm 3, 3, 0, 30, 30
  03dccac  cmpwi 3, 0
  03dccb0  bt 2, 0x3dd2d0
  03dccb4  lis 4, 16256
  03dccb8  li 5, 13
  03dccbc  li 3, 255
  03dccc0  stw 4, 88(31)
  03dccc4  stb 5, 32(31)
  03dccc8  bl 0xfc620
  03dcccc  nop
  03dccd0  clrlwi 3, 3, 31
  03dccd4  cmpwi 3, 0
  03dccd8  bt 2, 0x3dcd28
  03dccdc  lbz 3, 83(31)
  03dcce0  cmpwi 3, 10
  03dcce4  bt 2, 0x3dd2d0
  03dcce8  lis 3, 62
  03dccec  lis 4, 114
  03dccf0  addi 3, 3, -19056
  03dccf4  li 5, 0
  03dccf8  lfs 1, 64(3)
  03dccfc  lfs 2, -3056(4)
  03dcd00  ori 3, 31, 0
  03dcd04  li 4, 10
  03dcd08  fmuls 1, 2, 1
  03dcd0c  fctiwz 1, 1
  03dcd10  stfd 1, 560(1)
  03dcd14  lwz 6, 564(1)
  03dcd18  extsw 6, 6
  03dcd1c  bl 0xfddc0
  03dcd20  nop
  03dcd24  b 0x3dd2d0
  03dcd28  lbz 3, 83(31)
  03dcd2c  cmpwi 3, 8
  03dcd30  bt 2, 0x3dd2d0
  03dcd34  lis 3, 62
  03dcd38  lis 4, 114
  03dcd3c  addi 3, 3, -19056
  03dcd40  li 5, 0
  03dcd44  lfs 1, 64(3)
  03dcd48  lfs 2, -3056(4)
  03dcd4c  ori 3, 31, 0
  03dcd50  fmuls 1, 2, 1
  03dcd54  li 4, 8
  03dcd58  fctiwz 1, 1
  03dcd5c  stfd 1, 560(1)
  03dcd60  lwz 6, 564(1)
  03dcd64  extsw 6, 6
  03dcd68  bl 0xfddc0
  03dcd6c  nop
  03dcd70  b 0x3dd2d0
  03dcd74  lwz 3, 544(30)
  03dcd78  lfs 1, 16(31)
  03dcd7c  lfs 2, 20(31)
  03dcd80  lis 4, 115
  03dcd84  lfs 3, 16(3)
  03dcd88  lfs 4, 20(3)
  03dcd8c  fsubs 1, 3, 1
  03dcd90  lis 3, 62
  03dcd94  fsubs 2, 4, 2
  03dcd98  addi 3, 3, -19056
  03dcd9c  addic 4, 4, 22784
  03dcda0  fabs 3, 1
  03dcda4  fabs 5, 2
  03dcda8  stfs 1, 336(1)
  03dcdac  stfs 2, 340(1)
  03dcdb0  fsubs 1, 3, 5
  03dcdb4  stfs 1, 344(1)
  03dcdb8  lwz 5, 336(1)
  03dcdbc  lfs 4, 48(3)
  03dcdc0  lfs 1, 336(1)
  03dcdc4  lwz 3, 340(1)
  03dcdc8  lfs 2, 340(1)
  03dcdcc  lwz 6, 344(1)
  03dcdd0  rlwinm 3, 3, 3, 29, 29
  03dcdd4  fabs 6, 2
  03dcdd8  lfs 2, 344(1)
  03dcddc  fabs 1, 1
  03dcde0  rlwimi 3, 6, 2, 30, 30
  03dcde4  fsub 7, 2, 4
  03dcde8  rlwimi 3, 5, 4, 28, 28
  03dcdec  fsub 8, 2, 4
  03dcdf0  ori 5, 4, 0
  03dcdf4  rlwimi 5, 3, 2, 26, 28
  03dcdf8  slwi 3, 3, 2
  03dcdfc  clrldi 5, 5, 32
  03dce00  fsel 5, 7, 1, 5
  03dce04  lfsx 1, 4, 3
  03dce08  lfs 2, 4(5)
  03dce0c  fsel 3, 8, 6, 3
  03dce10  fcmpu 0, 5, 4
  03dce14  bt 1, 0x3dce1c
  03dce18  b 0x3dcf3c
  03dce1c  fsubs 6, 3, 5
  03dce20  fadds 3, 3, 5
  03dce24  addic 3, 1, 16
  03dce28  li 6, 2
  03dce2c  addic 4, 3, 380
  03dce30  addic 5, 3, 396
  03dce34  mtctr 6
  03dce38  fdivs 3, 6, 3
  03dce3c  fmuls 5, 3, 3
  03dce40  stfs 3, 408(1)
  03dce44  stfs 3, 400(1)
  03dce48  stfs 3, 404(1)
  03dce4c  stfs 3, 396(1)
  03dce50  lfs 7, 408(1)
  03dce54  lfs 8, 400(1)
  03dce58  lfs 9, 404(1)
  03dce5c  fmuls 6, 5, 5
  03dce60  fmuls 8, 8, 5
  03dce64  fmuls 7, 7, 6
  03dce68  fmuls 3, 6, 6
  03dce6c  fmuls 6, 9, 6
  03dce70  stfs 8, 400(1)
  03dce74  fmuls 5, 7, 5
  03dce78  stfs 6, 404(1)
  03dce7c  stfs 5, 408(1)
  03dce80  lfs 5, 380(3)
  03dce84  fmuls 5, 5, 3
  03dce88  stfs 5, 396(3)
  03dce8c  lfs 5, 4(4)
  03dce90  addic 3, 3, 8
  03dce94  addic 4, 4, 8
  03dce98  fmuls 5, 5, 3
  03dce9c  stfs 5, 4(5)
  03dcea0  addic 5, 5, 8
  03dcea4  bdnz 0x3dce80
  03dcea8  li 5, 4
  03dceac  ori 3, 1, 0
  03dceb0  mtctr 5
  03dceb4  lis 4, 115
  03dceb8  addic 5, 3, 396
  03dcebc  addic 4, 4, 22752
  03dcec0  ori 7, 5, 0
  03dcec4  lfs 3, 396(3)
  03dcec8  lfs 5, 0(4)
  03dcecc  fmuls 3, 3, 5
  03dced0  lfs 5, 4(4)
  03dced4  addic 4, 4, 8
  03dced8  stfs 3, 396(3)
  03dcedc  lfs 3, 4(5)
  03dcee0  addic 3, 3, 8
  03dcee4  fmuls 3, 3, 5
  03dcee8  stfs 3, 4(5)
  03dceec  addic 5, 5, 8
  03dcef0  bdnz 0x3dcec4
  03dcef4  ori 3, 1, 0
  03dcef8  mtctr 6
  03dcefc  lfs 3, 396(3)
  03dcf00  fadds 3, 4, 3
  03dcf04  lfs 4, 4(7)
  03dcf08  addic 3, 3, 16
  03dcf0c  lfs 5, 8(7)
  03dcf10  lfs 6, 12(7)
  03dcf14  addic 7, 7, 16
  03dcf18  fadds 3, 3, 4
  03dcf1c  fadds 4, 3, 5
  03dcf20  fadds 4, 4, 6
  03dcf24  bdnz 0x3dcefc
  03dcf28  lis 3, 62
  03dcf2c  addi 3, 3, -19056
  03dcf30  lfs 3, 52(3)
  03dcf34  fadds 4, 4, 3
  03dcf38  fmadds 4, 4, 1, 2
  03dcf3c  lis 3, 62
  03dcf40  fmr 1, 4
  03dcf44  addic 5, 30, 532
  03dcf48  addi 4, 3, -19056
  03dcf4c  ori 3, 31, 0
  03dcf50  lfs 4, 56(4)
  03dcf54  lfs 2, 12(4)
  03dcf58  lfs 5, 16(4)
  03dcf5c  fmr 3, 5
  03dcf60  bl 0xff2e8
  03dcf64  nop
  03dcf68  lbz 3, 112(31)
  03dcf6c  lbz 4, 83(31)
  03dcf70  rlwinm 3, 3, 0, 30, 30
  03dcf74  cmpwi 3, 0
  03dcf78  bt 2, 0x3dd2d0
  03dcf7c  lwz 3, 544(30)
  03dcf80  lfs 1, 20(31)
  03dcf84  lfs 2, 16(31)
  03dcf88  lis 5, 62
  03dcf8c  lfs 3, 20(3)
  03dcf90  lfs 4, 16(3)
  03dcf94  fsubs 1, 1, 3
  03dcf98  fsubs 2, 2, 4
  03dcf9c  addi 5, 5, -19056
  03dcfa0  fmuls 1, 1, 1
  03dcfa4  fmadds 1, 2, 2, 1
  03dcfa8  lfs 2, 44(5)
  03dcfac  lfs 3, 384(30)
  03dcfb0  fadds 2, 3, 2
  03dcfb4  fsqrts 1, 1
  03dcfb8  fcmpu 0, 1, 2
  03dcfbc  cror 6, 1, 2
  03dcfc0  bt 6, 0x3dd03c
  03dcfc4  lfs 1, 24(3)
  03dcfc8  lis 5, 62
  03dcfcc  lfs 2, 24(31)
  03dcfd0  addi 5, 5, -19056
  03dcfd4  fsubs 1, 1, 2
  03dcfd8  lfs 2, 104(5)
  03dcfdc  fabs 1, 1
  03dcfe0  fcmpu 0, 1, 2
  03dcfe4  cror 6, 1, 2
  03dcfe8  bt 6, 0x3dd03c
  03dcfec  li 3, 12
  03dcff0  cmpwi 4, 9
  03dcff4  stb 3, 32(31)
  03dcff8  bt 2, 0x3dd2d0
  03dcffc  lis 3, 62
  03dd000  lis 4, 114
  03dd004  addi 3, 3, -19056
  03dd008  li 5, 0
  03dd00c  lfs 1, 64(3)
  03dd010  lfs 2, -3056(4)
  03dd014  ori 3, 31, 0
  03dd018  fmuls 1, 2, 1
  03dd01c  li 4, 9
  03dd020  fctiwz 1, 1
  03dd024  stfd 1, 560(1)
  03dd028  lwz 6, 564(1)
  03dd02c  extsw 6, 6
  03dd030  bl 0xfddc0
  03dd034  nop
  03dd038  b 0x3dd2d0
  03dd03c  li 3, 7
  03dd040  cmpwi 4, 0
  03dd044  stb 3, 32(31)
  03dd048  bt 2, 0x3dd2d0
  03dd04c  lis 3, 62
  03dd050  lis 4, 114
  03dd054  addi 3, 3, -19056
  03dd058  li 5, 0
  03dd05c  lfs 1, 64(3)
  03dd060  lfs 2, -3056(4)
  03dd064  ori 3, 31, 0
  03dd068  fmuls 1, 2, 1
  03dd06c  li 4, 0
  03dd070  fctiwz 1, 1
  03dd074  stfd 1, 560(1)
  03dd078  lwz 6, 564(1)
  03dd07c  extsw 6, 6
  03dd080  bl 0xfddc0
  03dd084  nop
  03dd088  b 0x3dd2d0
  03dd08c  ori 3, 31, 0
  03dd090  addic 4, 30, 112
  03dd094  bl 0x10b030
  03dd098  nop
  03dd09c  rlwinm 3, 3, 0, 25, 25
  03dd0a0  cmpwi 3, 0
  03dd0a4  bt 2, 0x3dd2d0
  03dd0a8  li 3, 7
  03dd0ac  lbz 4, 83(31)
  03dd0b0  cmpwi 4, 0
  03dd0b4  stb 3, 32(31)
  03dd0b8  bt 2, 0x3dd2d0
  03dd0bc  lis 3, 62
  03dd0c0  lis 4, 114
  03dd0c4  addi 3, 3, -19056
  03dd0c8  li 5, 0
  03dd0cc  lfs 1, 64(3)
  03dd0d0  lfs 2, -3056(4)
  03dd0d4  ori 3, 31, 0
  03dd0d8  fmuls 1, 2, 1
  03dd0dc  li 4, 0
  03dd0e0  fctiwz 1, 1
  03dd0e4  stfd 1, 560(1)
  03dd0e8  lwz 6, 564(1)
  03dd0ec  extsw 6, 6
  03dd0f0  bl 0xfddc0
  03dd0f4  nop
  03dd0f8  b 0x3dd2d0
  03dd0fc  addic 4, 30, 112
  03dd100  ori 3, 31, 0
  03dd104  bl 0x10b030
  03dd108  nop
  03dd10c  li 4, 320
  03dd110  and 3, 3, 4
  03dd114  cmpwi 3, 0
  03dd118  bt 2, 0x3dd2d0
  03dd11c  lis 3, 62
  03dd120  lfs 1, 16(31)
  03dd124  lfs 2, 20(31)
  03dd128  li 4, 0
  03dd12c  addi 29, 3, -19056
  03dd130  stfs 1, 272(1)
  03dd134  lfs 1, 28(31)
  03dd138  ori 3, 31, 0
  03dd13c  stfs 2, 276(1)
  03dd140  li 5, -1
  03dd144  stfs 1, 284(1)
  03dd148  lfs 31, 44(29)
  03dd14c  lfs 2, 24(31)
  03dd150  fadds 1, 2, 31
  03dd154  stfs 1, 280(1)
  03dd158  bl 0xfd8d0
  03dd15c  nop
  03dd160  lfs 30, 48(29)
  03dd164  li 7, -1
  03dd168  lfs 3, 96(29)
  03dd16c  li 6, 1
  03dd170  lfs 5, 108(29)
  03dd174  lfs 7, 112(29)
  03dd178  li 11, 0
  03dd17c  addic 5, 1, 272
  03dd180  fmr 4, 31
  03dd184  std 7, 144(1)
  03dd188  addic 4, 30, 64
  03dd18c  std 6, 160(1)
  03dd190  ori 3, 31, 0
  03dd194  std 6, 168(1)
  03dd198  li 8, 5
  03dd19c  std 7, 176(1)
  03dd1a0  fmr 6, 31
  03dd1a4  li 9, 2
  03dd1a8  fmr 1, 30
  03dd1ac  li 10, 4
  03dd1b0  fmr 2, 30
  03dd1b4  std 11, 184(1)
  03dd1b8  bl 0x10e030
  03dd1bc  nop
  03dd1c0  lis 5, 161
  03dd1c4  addic 30, 31, 16
  03dd1c8  fmr 1, 30
  03dd1cc  addic 29, 5, 23856
  03dd1d0  addic 28, 31, 64
  03dd1d4  ori 3, 31, 0
  03dd1d8  li 4, 1751
  03dd1dc  std 29, 112(1)
  03dd1e0  ori 5, 30, 0
  03dd1e4  std 29, 120(1)
  03dd1e8  ori 10, 29, 0
  03dd1ec  ori 6, 28, 0
  03dd1f0  li 7, 0
  03dd1f4  li 8, 0
  03dd1f8  bl 0x11a560
  03dd1fc  nop
  03dd200  std 29, 112(1)
  03dd204  std 29, 120(1)
  03dd208  ori 3, 31, 0
  03dd20c  ori 10, 29, 0
  03dd210  fmr 1, 30
  03dd214  li 4, 1752
  03dd218  ori 5, 30, 0
  03dd21c  ori 6, 28, 0
  03dd220  li 7, 0
  03dd224  li 8, 0
  03dd228  bl 0x11a560
  03dd22c  nop
  03dd230  std 29, 112(1)
  03dd234  std 29, 120(1)
  03dd238  ori 3, 31, 0
  03dd23c  ori 10, 29, 0
  03dd240  fmr 1, 30
  03dd244  li 4, 1753
  03dd248  ori 5, 30, 0
  03dd24c  ori 6, 28, 0
  03dd250  li 7, 0
  03dd254  li 8, 0
  03dd258  bl 0x11a560
  03dd25c  nop
  03dd260  std 29, 112(1)
  03dd264  ori 3, 31, 0
  03dd268  std 29, 120(1)
  03dd26c  ori 10, 29, 0
  03dd270  fmr 1, 30
  03dd274  li 4, 1769
  03dd278  ori 5, 30, 0
  03dd27c  ori 6, 28, 0
  03dd280  li 7, 0
  03dd284  li 8, 0
  03dd288  bl 0x11a560
  03dd28c  nop
  03dd290  ori 3, 31, 0
  03dd294  std 29, 112(1)
  03dd298  ori 10, 29, 0
  03dd29c  li 4, 1922
  03dd2a0  fmr 1, 30
  03dd2a4  ori 5, 30, 0
  03dd2a8  std 29, 120(1)
  03dd2ac  ori 6, 28, 0
  03dd2b0  li 7, 0
  03dd2b4  li 8, 0
  03dd2b8  bl 0x11a560
  03dd2bc  nop
  03dd2c0  ori 3, 31, 0
  03dd2c4  bl 0xefb38
  03dd2c8  nop
  03dd2cc  b 0x3dd2dc
  03dd2d0  ori 3, 31, 0
  03dd2d4  bl 0x106360
  03dd2d8  nop
  03dd2dc  ld 0, 720(1)
  03dd2e0  mtlr 0
  03dd2e4  lfd 22, 624(1)
  03dd2e8  lfd 23, 632(1)
  03dd2ec  lfd 24, 640(1)
  03dd2f0  lfd 25, 648(1)
  03dd2f4  lfd 26, 656(1)
  03dd2f8  lfd 27, 664(1)
  03dd2fc  lfd 28, 672(1)
  03dd300  lfd 29, 680(1)
  03dd304  lfd 30, 688(1)
  03dd308  lfd 31, 696(1)
  03dd30c  ld 26, 576(1)
  03dd310  ld 27, 584(1)
  03dd314  ld 28, 592(1)
  03dd318  ld 29, 600(1)
  03dd31c  ld 30, 608(1)
  03dd320  ld 31, 616(1)
  03dd324  addi 1, 1, 704
  03dd328  blr
