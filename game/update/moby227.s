# game/update/moby227.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M227_002fa200:   # 0x2fa200, 0x49c bytes
  02fa200  stdu 1, -272(1)
  02fa204  mflr 0
  02fa208  std 0, 288(1)
  02fa20c  stfd 30, 256(1)
  02fa210  stfd 31, 264(1)
  02fa214  std 26, 208(1)
  02fa218  lis 26, 48
  02fa21c  lis 6, 165
  02fa220  std 31, 248(1)
  02fa224  addi 26, 26, -24076
  02fa228  std 25, 200(1)
  02fa22c  ori 31, 3, 0
  02fa230  ori 25, 1, 0
  02fa234  std 30, 240(1)
  02fa238  cmpwi 1, 4, 0
  02fa23c  ori 30, 4, 0
  02fa240  std 29, 232(1)
  02fa244  lfs 31, 0(26)
  02fa248  std 28, 224(1)
  02fa24c  ori 29, 5, 0
  02fa250  lbz 28, 33(3)
  02fa254  lwz 3, -28288(6)
  02fa258  cmpwi 6, 28, 255
  02fa25c  fmr 30, 31
  02fa260  std 27, 216(1)
  02fa264  cmpw 3, 28
  02fa268  bf 1, 0x2fa270
  02fa26c  bf 26, 0x2fa278
  02fa270  li 3, 0
  02fa274  b 0x2fa668
  02fa278  lis 3, 165
  02fa27c  slwi 4, 28, 2
  02fa280  addic 3, 3, -28284
  02fa284  lwzx 28, 3, 4
  02fa288  bt 6, 0x2fa444
  02fa28c  lis 3, 151
  02fa290  lfs 1, 16(31)
  02fa294  addic 3, 3, -25376
  02fa298  lfs 2, 20(31)
  02fa29c  lfs 3, 128(3)
  02fa2a0  lfs 4, 132(3)
  02fa2a4  fsubs 1, 3, 1
  02fa2a8  fsubs 2, 4, 2
  02fa2ac  lis 3, 115
  02fa2b0  addic 3, 3, 22784
  02fa2b4  fabs 3, 1
  02fa2b8  fabs 4, 2
  02fa2bc  stfs 1, 124(1)
  02fa2c0  stfs 2, 128(1)
  02fa2c4  fsubs 1, 3, 4
  02fa2c8  stfs 1, 132(1)
  02fa2cc  lwz 4, 124(1)
  02fa2d0  lfs 1, 124(1)
  02fa2d4  lwz 5, 128(1)
  02fa2d8  lfs 2, 128(1)
  02fa2dc  fabs 1, 1
  02fa2e0  lwz 6, 132(1)
  02fa2e4  rlwinm 5, 5, 3, 29, 29
  02fa2e8  lfs 5, 132(1)
  02fa2ec  fabs 2, 2
  02fa2f0  rlwimi 5, 6, 2, 30, 30
  02fa2f4  fsub 6, 5, 31
  02fa2f8  fsub 5, 5, 31
  02fa2fc  rlwimi 5, 4, 4, 28, 28
  02fa300  ori 4, 3, 0
  02fa304  rlwimi 4, 5, 2, 26, 28
  02fa308  slwi 5, 5, 2
  02fa30c  clrldi 4, 4, 32
  02fa310  fsel 4, 6, 1, 4
  02fa314  lfsx 1, 3, 5
  02fa318  fsel 3, 5, 2, 3
  02fa31c  lfs 2, 4(4)
  02fa320  fcmpu 0, 4, 31
  02fa324  bt 1, 0x2fa32c
  02fa328  b 0x2fa444
  02fa32c  fsubs 5, 3, 4
  02fa330  fadds 3, 3, 4
  02fa334  addic 3, 1, 16
  02fa338  li 6, 2
  02fa33c  addic 5, 3, 168
  02fa340  addic 4, 3, 152
  02fa344  mtctr 6
  02fa348  fdivs 3, 5, 3
  02fa34c  fmuls 4, 3, 3
  02fa350  stfs 3, 168(25)
  02fa354  stfs 3, 172(25)
  02fa358  stfs 3, 176(25)
  02fa35c  stfs 3, 180(25)
  02fa360  lfs 3, 180(1)
  02fa364  lfs 5, 172(1)
  02fa368  lfs 7, 176(1)
  02fa36c  fmuls 6, 4, 4
  02fa370  fmuls 5, 5, 4
  02fa374  fmuls 8, 3, 6
  02fa378  fmuls 7, 7, 6
  02fa37c  fmuls 3, 6, 6
  02fa380  stfs 5, 172(1)
  02fa384  fmuls 4, 8, 4
  02fa388  stfs 7, 176(1)
  02fa38c  stfs 4, 180(1)
  02fa390  lfs 4, 152(3)
  02fa394  fmuls 4, 4, 3
  02fa398  stfs 4, 168(3)
  02fa39c  lfs 4, 4(4)
  02fa3a0  addic 4, 4, 8
  02fa3a4  fmuls 4, 4, 3
  02fa3a8  addic 3, 3, 8
  02fa3ac  stfs 4, 4(5)
  02fa3b0  addic 5, 5, 8
  02fa3b4  bdnz 0x2fa390
  02fa3b8  li 5, 4
  02fa3bc  ori 3, 1, 0
  02fa3c0  mtctr 5
  02fa3c4  lis 4, 115
  02fa3c8  addic 5, 3, 168
  02fa3cc  addic 4, 4, 22752
  02fa3d0  ori 7, 5, 0
  02fa3d4  lfs 3, 168(3)
  02fa3d8  lfs 4, 0(4)
  02fa3dc  fmuls 3, 3, 4
  02fa3e0  lfs 4, 4(4)
  02fa3e4  addic 4, 4, 8
  02fa3e8  stfs 3, 168(3)
  02fa3ec  lfs 3, 4(5)
  02fa3f0  addic 3, 3, 8
  02fa3f4  fmuls 3, 3, 4
  02fa3f8  stfs 3, 4(5)
  02fa3fc  addic 5, 5, 8
  02fa400  bdnz 0x2fa3d4
  02fa404  ori 3, 1, 0
  02fa408  mtctr 6
  02fa40c  lfs 3, 168(3)
  02fa410  lfs 4, 4(7)
  02fa414  fadds 3, 31, 3
  02fa418  lfs 5, 8(7)
  02fa41c  addic 3, 3, 16
  02fa420  lfs 31, 12(7)
  02fa424  addic 7, 7, 16
  02fa428  fadds 3, 3, 4
  02fa42c  fadds 3, 3, 5
  02fa430  fadds 31, 3, 31
  02fa434  bdnz 0x2fa40c
  02fa438  lfs 3, 4(26)
  02fa43c  fadds 31, 31, 3
  02fa440  fmadds 31, 31, 1, 2
  02fa444  lis 3, 164
  02fa448  lhz 4, 0(28)
  02fa44c  cmpwi 30, 0
  02fa450  rlwinm 4, 4, 8, 9, 23
  02fa454  lwz 3, -28512(3)
  02fa458  addc 27, 3, 4
  02fa45c  clrldi 27, 27, 32
  02fa460  bt 2, 0x2fa628
  02fa464  lfs 1, 16(27)
  02fa468  lfs 2, 16(31)
  02fa46c  lfs 3, 20(27)
  02fa470  lfs 4, 20(31)
  02fa474  fsubs 1, 1, 2
  02fa478  fsubs 2, 3, 4
  02fa47c  lis 3, 115
  02fa480  addic 3, 3, 22784
  02fa484  fabs 3, 1
  02fa488  fabs 4, 2
  02fa48c  stfs 1, 112(1)
  02fa490  stfs 2, 116(1)
  02fa494  fsubs 1, 3, 4
  02fa498  stfs 1, 120(1)
  02fa49c  lwz 4, 112(1)
  02fa4a0  lfs 1, 112(1)
  02fa4a4  lwz 5, 116(1)
  02fa4a8  lfs 2, 116(1)
  02fa4ac  lwz 6, 120(1)
  02fa4b0  rlwinm 5, 5, 3, 29, 29
  02fa4b4  fabs 5, 2
  02fa4b8  lfs 2, 120(1)
  02fa4bc  fabs 1, 1
  02fa4c0  rlwimi 5, 6, 2, 30, 30
  02fa4c4  fsub 6, 2, 30
  02fa4c8  fsub 7, 2, 30
  02fa4cc  rlwimi 5, 4, 4, 28, 28
  02fa4d0  ori 4, 3, 0
  02fa4d4  rlwimi 4, 5, 2, 26, 28
  02fa4d8  slwi 5, 5, 2
  02fa4dc  clrldi 4, 4, 32
  02fa4e0  fsel 4, 6, 1, 4
  02fa4e4  lfsx 1, 3, 5
  02fa4e8  fsel 3, 7, 5, 3
  02fa4ec  lfs 2, 4(4)
  02fa4f0  fcmpu 0, 4, 30
  02fa4f4  bt 1, 0x2fa500
  02fa4f8  fmr 1, 30
  02fa4fc  b 0x2fa61c
  02fa500  fsubs 5, 3, 4
  02fa504  fadds 3, 3, 4
  02fa508  addic 3, 1, 16
  02fa50c  li 6, 2
  02fa510  addic 5, 3, 136
  02fa514  addic 4, 3, 120
  02fa518  mtctr 6
  02fa51c  fdivs 3, 5, 3
  02fa520  fmuls 4, 3, 3
  02fa524  stfs 3, 136(25)
  02fa528  stfs 3, 140(25)
  02fa52c  stfs 3, 144(25)
  02fa530  stfs 3, 148(25)
  02fa534  lfs 3, 148(1)
  02fa538  lfs 5, 140(1)
  02fa53c  lfs 7, 144(1)
  02fa540  fmuls 6, 4, 4
  02fa544  fmuls 5, 5, 4
  02fa548  fmuls 8, 3, 6
  02fa54c  fmuls 7, 7, 6
  02fa550  fmuls 3, 6, 6
  02fa554  stfs 5, 140(1)
  02fa558  fmuls 4, 8, 4
  02fa55c  stfs 7, 144(1)
  02fa560  stfs 4, 148(1)
  02fa564  lfs 4, 120(3)
  02fa568  fmuls 4, 4, 3
  02fa56c  stfs 4, 136(3)
  02fa570  lfs 4, 4(4)
  02fa574  addic 4, 4, 8
  02fa578  fmuls 4, 4, 3
  02fa57c  addic 3, 3, 8
  02fa580  stfs 4, 4(5)
  02fa584  addic 5, 5, 8
  02fa588  bdnz 0x2fa564
  02fa58c  li 5, 4
  02fa590  ori 3, 1, 0
  02fa594  mtctr 5
  02fa598  lis 4, 115
  02fa59c  addic 5, 3, 136
  02fa5a0  addic 4, 4, 22752
  02fa5a4  ori 7, 5, 0
  02fa5a8  lfs 3, 136(3)
  02fa5ac  lfs 4, 0(4)
  02fa5b0  fmuls 3, 3, 4
  02fa5b4  lfs 4, 4(4)
  02fa5b8  addic 4, 4, 8
  02fa5bc  stfs 3, 136(3)
  02fa5c0  lfs 3, 4(5)
  02fa5c4  addic 3, 3, 8
  02fa5c8  fmuls 3, 3, 4
  02fa5cc  stfs 3, 4(5)
  02fa5d0  addic 5, 5, 8
  02fa5d4  bdnz 0x2fa5a8
  02fa5d8  ori 3, 1, 0
  02fa5dc  fmr 3, 30
  02fa5e0  mtctr 6
  02fa5e4  lfs 4, 136(3)
  02fa5e8  fadds 3, 3, 4
  02fa5ec  lfs 4, 4(7)
  02fa5f0  addic 3, 3, 16
  02fa5f4  lfs 5, 8(7)
  02fa5f8  lfs 6, 12(7)
  02fa5fc  addic 7, 7, 16
  02fa600  fadds 3, 3, 4
  02fa604  fadds 3, 3, 5
  02fa608  fadds 3, 3, 6
  02fa60c  bdnz 0x2fa5e4
  02fa610  lfs 4, 4(26)
  02fa614  fadds 3, 3, 4
  02fa618  fmadds 1, 3, 1, 2
  02fa61c  fmr 2, 31
  02fa620  bl 0x5026a0
  02fa624  nop
  02fa628  cmpw 31, 27
  02fa62c  bt 2, 0x2fa64c
  02fa630  cmpw 29, 27
  02fa634  bt 2, 0x2fa64c
  02fa638  lhz 3, 166(27)
  02fa63c  cmpwi 3, 227
  02fa640  bt 2, 0x2fa64c
  02fa644  ori 3, 27, 0
  02fa648  b 0x2fa668
  02fa64c  lhz 3, 0(28)
  02fa650  addic 28, 28, 2
  02fa654  extsh 3, 3
  02fa658  cmpwi 3, 0
  02fa65c  bf 0, 0x2fa444
  02fa660  li 3, 0
  02fa664  tweqi 3, 0
  02fa668  ld 0, 288(1)
  02fa66c  mtlr 0
  02fa670  lfd 30, 256(1)
  02fa674  lfd 31, 264(1)
  02fa678  ld 25, 200(1)
  02fa67c  ld 26, 208(1)
  02fa680  ld 27, 216(1)
  02fa684  ld 28, 224(1)
  02fa688  ld 29, 232(1)
  02fa68c  ld 30, 240(1)
  02fa690  ld 31, 248(1)
  02fa694  addi 1, 1, 272
  02fa698  blr

UpdateMoby_227:   # 0x2fa6f0, 0x15a4 bytes
  02fa6f0  stdu 1, -416(1)
  02fa6f4  mflr 0
  02fa6f8  std 0, 432(1)
  02fa6fc  stfd 26, 368(1)
  02fa700  stfd 27, 376(1)
  02fa704  stfd 28, 384(1)
  02fa708  stfd 29, 392(1)
  02fa70c  stfd 30, 400(1)
  02fa710  stfd 31, 408(1)
  02fa714  std 31, 360(1)
  02fa718  std 28, 336(1)
  02fa71c  ori 31, 3, 0
  02fa720  std 30, 352(1)
  02fa724  std 29, 344(1)
  02fa728  std 27, 328(1)
  02fa72c  std 26, 320(1)
  02fa730  lwz 28, 120(31)
  02fa734  bl 0xfcccc
  02fa738  nop
  02fa73c  ori 30, 3, 0
  02fa740  ori 3, 31, 0
  02fa744  lis 4, 3
  02fa748  li 5, 0
  02fa74c  bl 0x10675c
  02fa750  nop
  02fa754  ori 29, 3, 0
  02fa758  addic 3, 28, 320
  02fa75c  bl 0x4fff60
  02fa760  nop
  02fa764  cmpwi 29, 0
  02fa768  bt 2, 0x2fab28
  02fa76c  lwz 3, 320(28)
  02fa770  cmpwi 3, 0
  02fa774  bf 2, 0x2fab28
  02fa778  lbz 3, 32(31)
  02fa77c  cmpwi 3, 4
  02fa780  cmpwi 1, 3, 3
  02fa784  bt 2, 0x2fab28
  02fa788  bf 6, 0x2fa7b8
  02fa78c  lbz 3, 82(31)
  02fa790  lbz 4, 83(31)
  02fa794  cmpw 3, 4
  02fa798  bf 2, 0x2fab28
  02fa79c  lis 3, 151
  02fa7a0  lwz 4, 316(28)
  02fa7a4  addic 3, 3, -25376
  02fa7a8  lwz 3, 8320(3)
  02fa7ac  lbz 3, 82(3)
  02fa7b0  cmpw 4, 3
  02fa7b4  bt 2, 0x2fab28
  02fa7b8  lfs 1, 0(30)
  02fa7bc  lis 27, 151
  02fa7c0  lfs 2, 44(29)
  02fa7c4  li 3, 255
  02fa7c8  addic 27, 27, -25376
  02fa7cc  fsubs 1, 1, 2
  02fa7d0  lis 4, 48
  02fa7d4  addi 4, 4, -22884
  02fa7d8  stfs 1, 0(30)
  02fa7dc  stb 3, 164(31)
  02fa7e0  lwz 3, 8320(27)
  02fa7e4  lwz 5, 32(29)
  02fa7e8  lfs 1, 44(29)
  02fa7ec  lbz 3, 82(3)
  02fa7f0  stw 3, 316(28)
  02fa7f4  lfs 2, 0(4)
  02fa7f8  lhz 29, 166(5)
  02fa7fc  fsubs 1, 2, 1
  02fa800  addic 29, 29, -172
  02fa804  bl 0x502758
  02fa808  nop
  02fa80c  cmpwi 3, 6
  02fa810  bt 0, 0x2fa9e8
  02fa814  li 5, 64
  02fa818  ori 3, 31, 0
  02fa81c  addic 4, 28, 160
  02fa820  stb 5, 167(28)
  02fa824  bl 0x10c808
  02fa828  nop
  02fa82c  lis 3, 48
  02fa830  li 4, 4
  02fa834  vspltisw 2, -1
  02fa838  addi 29, 3, -22884
  02fa83c  lis 3, 114
  02fa840  li 5, -3056
  02fa844  vslw 2, 2, 2
  02fa848  lvlx 3, 4, 29
  02fa84c  vspltw 3, 3, 0
  02fa850  lvlx 4, 5, 3
  02fa854  lis 4, 268
  02fa858  li 3, 320
  02fa85c  lis 5, 268
  02fa860  vmaddfp 2, 4, 3, 2
  02fa864  vctsxs 2, 2, 0
  02fa868  vspltw 2, 2, 0
  02fa86c  stvewx 2, 3, 28
  02fa870  lwz 3, -19384(4)
  02fa874  lwz 4, -19380(5)
  02fa878  lfs 1, 16(31)
  02fa87c  lfs 2, 128(27)
  02fa880  subc 3, 3, 4
  02fa884  lfs 3, 20(31)
  02fa888  fsubs 1, 1, 2
  02fa88c  lfs 4, 132(27)
  02fa890  fsubs 2, 3, 4
  02fa894  stw 3, 312(28)
  02fa898  bl 0x5e8338
  02fa89c  nop
  02fa8a0  lfs 2, 8(29)
  02fa8a4  lfs 31, 12(29)
  02fa8a8  fadds 1, 1, 2
  02fa8ac  lfs 30, 16(29)
  02fa8b0  lfs 29, 20(29)
  02fa8b4  lis 26, 128
  02fa8b8  lfs 28, 24(29)
  02fa8bc  lfs 27, 28(29)
  02fa8c0  lfs 26, 32(29)
  02fa8c4  fsubs 2, 31, 1
  02fa8c8  fsubs 3, 30, 1
  02fa8cc  fsub 5, 1, 2
  02fa8d0  fsel 1, 5, 2, 1
  02fa8d4  fsub 2, 3, 1
  02fa8d8  fsel 1, 2, 3, 1
  02fa8dc  lfs 2, 16(31)
  02fa8e0  lfs 5, 20(31)
  02fa8e4  lfs 6, -3900(26)
  02fa8e8  fmuls 3, 1, 1
  02fa8ec  fmuls 4, 3, 1
  02fa8f0  fmuls 7, 3, 4
  02fa8f4  fmadds 1, 4, 29, 1
  02fa8f8  lfs 4, 128(27)
  02fa8fc  lfs 9, 132(27)
  02fa900  fmuls 8, 3, 7
  02fa904  fmadds 7, 7, 28, 1
  02fa908  fsubs 1, 2, 4
  02fa90c  fsubs 2, 5, 9
  02fa910  fmuls 3, 3, 8
  02fa914  fmadds 4, 8, 27, 7
  02fa918  fmadds 3, 3, 26, 4
  02fa91c  fmuls 3, 3, 6
  02fa920  stfs 3, 112(1)
  02fa924  bl 0x5e8338
  02fa928  nop
  02fa92c  fsubs 2, 31, 1
  02fa930  fsubs 3, 30, 1
  02fa934  addic 3, 1, 112
  02fa938  li 4, 800
  02fa93c  li 5, 0
  02fa940  ori 6, 31, 0
  02fa944  li 7, 0
  02fa948  fsub 4, 1, 2
  02fa94c  fsel 1, 4, 2, 1
  02fa950  lfs 4, -3900(26)
  02fa954  fsub 2, 3, 1
  02fa958  fsel 1, 2, 3, 1
  02fa95c  lfs 2, 16(31)
  02fa960  lfs 3, 112(1)
  02fa964  lfs 5, 20(31)
  02fa968  fadds 2, 2, 3
  02fa96c  lfs 7, 28(31)
  02fa970  lfs 8, 24(31)
  02fa974  fmuls 6, 1, 1
  02fa978  stfs 2, 16(31)
  02fa97c  stfs 2, 112(1)
  02fa980  fmuls 3, 6, 1
  02fa984  stfs 7, 124(1)
  02fa988  fmuls 9, 6, 3
  02fa98c  fmadds 1, 3, 29, 1
  02fa990  fmuls 2, 6, 9
  02fa994  fmadds 1, 9, 28, 1
  02fa998  fmuls 3, 6, 2
  02fa99c  fmadds 1, 2, 27, 1
  02fa9a0  fmadds 1, 3, 26, 1
  02fa9a4  fmadds 1, 1, 4, 5
  02fa9a8  stfs 1, 20(31)
  02fa9ac  stfs 1, 116(1)
  02fa9b0  lfs 1, 36(29)
  02fa9b4  fadds 1, 8, 1
  02fa9b8  stfs 1, 120(1)
  02fa9bc  bl 0x55ac0
  02fa9c0  nop
  02fa9c4  cmpwi 3, 0
  02fa9c8  bt 2, 0x2fab28
  02fa9cc  lis 3, 161
  02fa9d0  addic 3, 3, 2368
  02fa9d4  lfs 1, 48(3)
  02fa9d8  stfs 1, 16(31)
  02fa9dc  lfs 1, 52(3)
  02fa9e0  stfs 1, 20(31)
  02fa9e4  b 0x2fab28
  02fa9e8  lwz 3, 0(30)
  02fa9ec  cmpwi 3, 0
  02fa9f0  bf 1, 0x2faa88
  02fa9f4  lbz 3, 32(31)
  02fa9f8  cmpwi 3, 3
  02fa9fc  bt 2, 0x2faa04
  02faa00  stb 3, 188(31)
  02faa04  lis 4, 15363
  02faa08  li 3, 3
  02faa0c  ori 4, 4, 4719
  02faa10  lis 6, 14851
  02faa14  lis 7, 15692
  02faa18  stb 3, 32(31)
  02faa1c  ori 6, 6, 4719
  02faa20  lis 5, 15872
  02faa24  stw 4, 80(28)
  02faa28  ori 4, 7, 52429
  02faa2c  stw 3, 100(28)
  02faa30  li 8, 0
  02faa34  stw 6, 84(28)
  02faa38  stw 5, 92(28)
  02faa3c  addic 29, 28, 64
  02faa40  stw 4, 88(28)
  02faa44  stb 8, 125(28)
  02faa48  lfs 1, 16(31)
  02faa4c  lfs 2, 128(27)
  02faa50  lfs 3, 20(31)
  02faa54  lfs 4, 132(27)
  02faa58  fsubs 1, 1, 2
  02faa5c  fsubs 2, 3, 4
  02faa60  bl 0x5e8338
  02faa64  nop
  02faa68  ori 3, 31, 0
  02faa6c  ori 4, 29, 0
  02faa70  li 6, 28
  02faa74  li 7, 5
  02faa78  li 8, 0
  02faa7c  bl 0x10ad80
  02faa80  nop
  02faa84  b 0x2fab28
  02faa88  li 3, 4
  02faa8c  lis 4, 15897
  02faa90  lis 5, 15363
  02faa94  li 6, 3
  02faa98  ori 4, 4, 39322
  02faa9c  stb 3, 32(31)
  02faaa0  lis 3, 14851
  02faaa4  ori 5, 5, 4719
  02faaa8  lis 7, 15872
  02faaac  stw 6, 100(28)
  02faab0  ori 3, 3, 4719
  02faab4  stw 4, 88(28)
  02faab8  li 8, 2
  02faabc  stw 5, 80(28)
  02faac0  stw 7, 92(28)
  02faac4  cmpwi 29, 0
  02faac8  stw 3, 84(28)
  02faacc  stb 8, 125(28)
  02faad0  bf 2, 0x2faae8
  02faad4  lis 3, 15974
  02faad8  lis 4, 15936
  02faadc  ori 3, 3, 26215
  02faae0  stw 4, 92(28)
  02faae4  stw 3, 88(28)
  02faae8  lfs 1, 16(31)
  02faaec  addic 29, 28, 64
  02faaf0  lfs 2, 128(27)
  02faaf4  lfs 3, 20(31)
  02faaf8  lfs 4, 132(27)
  02faafc  fsubs 1, 1, 2
  02fab00  fsubs 2, 3, 4
  02fab04  bl 0x5e8338
  02fab08  nop
  02fab0c  ori 3, 31, 0
  02fab10  ori 4, 29, 0
  02fab14  li 6, 30
  02fab18  li 7, 3
  02fab1c  li 8, 0
  02fab20  bl 0x10ad80
  02fab24  nop
  02fab28  lbz 3, 32(31)
  02fab2c  cmpwi 1, 3, 5
  02fab30  cmpwi 6, 3, 4
  02fab34  cmpwi 7, 3, 3
  02fab38  bt 5, 0x2fab64
  02fab3c  bt 6, 0x2fb24c
  02fab40  bt 26, 0x2fb9b8
  02fab44  bt 30, 0x2fb92c
  02fab48  cmpwi 3, 2
  02fab4c  bt 2, 0x2fb9e4
  02fab50  cmpwi 3, 1
  02fab54  bt 2, 0x2fac80
  02fab58  cmpwi 3, 0
  02fab5c  bt 2, 0x2faba0
  02fab60  b 0x2fb9e4
  02fab64  cmpwi 3, 12
  02fab68  bt 2, 0x2fb410
  02fab6c  cmpwi 3, 11
  02fab70  bt 2, 0x2fb0b8
  02fab74  cmpwi 3, 10
  02fab78  bt 2, 0x2fae9c
  02fab7c  cmpwi 3, 9
  02fab80  bt 2, 0x2fad2c
  02fab84  cmpwi 3, 8
  02fab88  bt 2, 0x2fb80c
  02fab8c  cmpwi 3, 7
  02fab90  bt 2, 0x2fb720
  02fab94  cmpwi 3, 6
  02fab98  bt 2, 0x2fb4c4
  02fab9c  b 0x2fb9e4
  02faba0  lbz 3, 83(31)
  02faba4  cmpwi 3, 13
  02faba8  bt 2, 0x2fabc8
  02fabac  ori 3, 31, 0
  02fabb0  li 4, 13
  02fabb4  li 5, 0
  02fabb8  li 6, 1
  02fabbc  li 7, 1
  02fabc0  bl 0xfdf80
  02fabc4  nop
  02fabc8  li 4, 1
  02fabcc  li 29, 0
  02fabd0  ori 3, 31, 0
  02fabd4  addic 5, 28, 176
  02fabd8  stb 4, 32(31)
  02fabdc  li 4, 0
  02fabe0  stw 29, 304(28)
  02fabe4  stw 29, 308(28)
  02fabe8  bl 0xf0ea8
  02fabec  nop
  02fabf0  ori 3, 31, 0
  02fabf4  li 4, 2
  02fabf8  addic 5, 28, 240
  02fabfc  bl 0xf0ea8
  02fac00  nop
  02fac04  lis 3, 128
  02fac08  li 4, -3908
  02fac0c  li 5, 0
  02fac10  lvlx 2, 4, 3
  02fac14  ori 3, 31, 0
  02fac18  vcfsx 2, 2, 0
  02fac1c  li 4, 0
  02fac20  vspltw 2, 2, 0
  02fac24  stvewx 2, 0, 30
  02fac28  sth 29, 330(28)
  02fac2c  stw 29, 348(28)
  02fac30  bl 0x2fa200
  02fac34  ori 30, 3, 0
  02fac38  cmpwi 30, 0
  02fac3c  bt 2, 0x2fac78
  02fac40  lfs 1, 16(30)
  02fac44  lis 3, 128
  02fac48  stfs 1, 16(31)
  02fac4c  lfs 1, 20(30)
  02fac50  stfs 1, 20(31)
  02fac54  lfs 1, 24(30)
  02fac58  stfs 1, 24(31)
  02fac5c  lfs 2, 28(30)
  02fac60  stfs 2, 28(31)
  02fac64  lfs 2, -3888(3)
  02fac68  stw 30, 332(28)
  02fac6c  fsubs 1, 1, 2
  02fac70  stfs 1, 24(31)
  02fac74  b 0x2fb9e4
  02fac78  trap
  02fac7c  b 0x2fb9e4
  02fac80  lis 3, 151
  02fac84  lfs 1, 20(31)
  02fac88  addic 3, 3, -25376
  02fac8c  lfs 2, 132(3)
  02fac90  lfs 3, 16(31)
  02fac94  fsubs 1, 1, 2
  02fac98  lfs 2, 128(3)
  02fac9c  addic 3, 28, 348
  02faca0  fsubs 2, 3, 2
  02faca4  fmuls 1, 1, 1
  02faca8  fmadds 31, 2, 2, 1
  02facac  fsqrts 31, 31
  02facb0  bl 0x4fff60
  02facb4  nop
  02facb8  cmpwi 3, 0
  02facbc  bt 2, 0x2fb9e4
  02facc0  lis 3, 128
  02facc4  lfs 1, -3892(3)
  02facc8  fcmpu 0, 1, 31
  02faccc  cror 6, 0, 2
  02facd0  bt 6, 0x2facec
  02facd4  li 3, 9
  02facd8  lis 4, 268
  02facdc  stb 3, 32(31)
  02face0  lfs 1, -19376(4)
  02face4  stfs 1, 92(28)
  02face8  b 0x2fb9e4
  02facec  addic 3, 28, 330
  02facf0  bl 0x4fffb4
  02facf4  nop
  02facf8  cmpwi 3, 0
  02facfc  bt 2, 0x2fb9e4
  02fad00  lis 3, 128
  02fad04  lfs 1, -3896(3)
  02fad08  fcmpu 0, 1, 31
  02fad0c  cror 6, 0, 2
  02fad10  bt 6, 0x2fb9e4
  02fad14  lis 3, 268
  02fad18  li 4, 5
  02fad1c  lfs 1, -19376(3)
  02fad20  stfs 1, 92(28)
  02fad24  stb 4, 32(31)
  02fad28  b 0x2fb9e4
  02fad2c  lfs 1, 24(31)
  02fad30  lis 3, 268
  02fad34  lfs 2, 92(28)
  02fad38  lis 4, 48
  02fad3c  fadds 1, 1, 2
  02fad40  addi 4, 4, -22884
  02fad44  stfs 1, 24(31)
  02fad48  lfs 1, 92(28)
  02fad4c  lfs 2, -19372(3)
  02fad50  fsubs 1, 1, 2
  02fad54  stfs 1, 92(28)
  02fad58  lfs 2, 40(4)
  02fad5c  fcmpu 0, 1, 2
  02fad60  cror 6, 1, 2
  02fad64  bt 6, 0x2fb9e4
  02fad68  lfs 1, 16(31)
  02fad6c  lfs 2, 20(31)
  02fad70  lis 3, 48
  02fad74  stfs 1, 128(1)
  02fad78  addic 4, 1, 144
  02fad7c  lfs 3, 28(31)
  02fad80  addi 3, 3, -22884
  02fad84  stfs 2, 132(1)
  02fad88  li 5, 2
  02fad8c  stfs 3, 140(1)
  02fad90  li 6, 0
  02fad94  stfs 1, 144(1)
  02fad98  li 7, 0
  02fad9c  stfs 2, 148(1)
  02fada0  stfs 3, 156(1)
  02fada4  lfs 1, 44(3)
  02fada8  lfs 2, 24(31)
  02fadac  addic 3, 1, 128
  02fadb0  fadds 3, 2, 1
  02fadb4  fsubs 1, 2, 1
  02fadb8  stfs 3, 136(1)
  02fadbc  stfs 1, 152(1)
  02fadc0  bl 0x55ab8
  02fadc4  nop
  02fadc8  cmpwi 3, 0
  02fadcc  bt 2, 0x2fb9e4
  02fadd0  lis 3, 161
  02fadd4  lwz 4, 24(31)
  02fadd8  addic 3, 3, 2368
  02faddc  srawi 6, 4, 31
  02fade0  srwi 7, 6, 1
  02fade4  lwz 5, 40(3)
  02fade8  xor 4, 7, 4
  02fadec  lfs 1, 40(3)
  02fadf0  srawi 8, 5, 31
  02fadf4  subc 4, 4, 6
  02fadf8  srwi 7, 8, 1
  02fadfc  xor 5, 7, 5
  02fae00  subc 3, 5, 8
  02fae04  cmpw 4, 3
  02fae08  bt 1, 0x2fb9e4
  02fae0c  li 3, 10
  02fae10  lbz 4, 83(31)
  02fae14  stfs 1, 24(31)
  02fae18  cmpwi 4, 2
  02fae1c  stb 3, 32(31)
  02fae20  bt 2, 0x2fae40
  02fae24  ori 3, 31, 0
  02fae28  li 4, 2
  02fae2c  li 5, 0
  02fae30  li 6, 5
  02fae34  li 7, 1
  02fae38  bl 0xfdf80
  02fae3c  nop
  02fae40  ori 3, 31, 0
  02fae44  li 4, 1
  02fae48  lwz 5, 332(28)
  02fae4c  bl 0x2fa200
  02fae50  cmpwi 3, 0
  02fae54  stw 3, 332(28)
  02fae58  bf 2, 0x2fb9e4
  02fae5c  lbz 3, 83(31)
  02fae60  cmpwi 3, 13
  02fae64  bt 2, 0x2fae84
  02fae68  ori 3, 31, 0
  02fae6c  li 4, 13
  02fae70  li 5, 0
  02fae74  li 6, 5
  02fae78  li 7, 1
  02fae7c  bl 0xfdf80
  02fae80  nop
  02fae84  li 3, 8
  02fae88  lis 4, 268
  02fae8c  stb 3, 32(31)
  02fae90  lfs 1, -19368(4)
  02fae94  stfs 1, 92(28)
  02fae98  b 0x2fb9e4
  02fae9c  lwz 3, 332(28)
  02faea0  lfs 1, 16(31)
  02faea4  lfs 2, 20(31)
  02faea8  lfs 3, 16(3)
  02faeac  lfs 4, 20(3)
  02faeb0  fsubs 1, 3, 1
  02faeb4  fsubs 2, 4, 2
  02faeb8  bl 0x5e8338
  02faebc  nop
  02faec0  lis 4, 128
  02faec4  lis 6, 128
  02faec8  lis 7, 128
  02faecc  ori 3, 31, 0
  02faed0  addic 5, 28, 324
  02faed4  lfs 2, -3872(4)
  02faed8  lfs 3, -3868(6)
  02faedc  lfs 4, -3864(7)
  02faee0  bl 0xff2e8
  02faee4  nop
  02faee8  lbz 3, 83(31)
  02faeec  cmpwi 3, 2
  02faef0  bt 2, 0x2faf10
  02faef4  ori 3, 31, 0
  02faef8  li 4, 2
  02faefc  li 5, 0
  02faf00  li 6, 5
  02faf04  li 7, 1
  02faf08  bl 0xfdf80
  02faf0c  nop
  02faf10  lis 3, 48
  02faf14  lfs 1, 72(31)
  02faf18  addi 3, 3, -22884
  02faf1c  lfs 2, 8(3)
  02faf20  lfs 3, 12(3)
  02faf24  fadds 2, 1, 2
  02faf28  fsubs 5, 3, 1
  02faf2c  lfs 4, 16(3)
  02faf30  lis 4, 128
  02faf34  fsubs 3, 3, 2
  02faf38  fsub 7, 1, 5
  02faf3c  fsubs 6, 4, 2
  02faf40  fsubs 4, 4, 1
  02faf44  fsub 8, 2, 3
  02faf48  fsel 1, 7, 5, 1
  02faf4c  lfs 5, 20(3)
  02faf50  fsel 2, 8, 3, 2
  02faf54  fsub 3, 4, 1
  02faf58  fsub 8, 6, 2
  02faf5c  fsel 1, 3, 4, 1
  02faf60  lfs 3, 24(3)
  02faf64  lfs 4, 28(3)
  02faf68  lfs 9, 32(3)
  02faf6c  lis 3, 268
  02faf70  fsel 2, 8, 6, 2
  02faf74  fmuls 6, 1, 1
  02faf78  fmuls 7, 2, 2
  02faf7c  fmuls 8, 6, 1
  02faf80  fmuls 10, 7, 2
  02faf84  fmuls 11, 6, 8
  02faf88  fmadds 1, 8, 5, 1
  02faf8c  fmuls 8, 7, 10
  02faf90  fmadds 2, 10, 5, 2
  02faf94  fmuls 5, 6, 11
  02faf98  fmadds 1, 11, 3, 1
  02faf9c  fmuls 10, 7, 8
  02fafa0  fmadds 2, 8, 3, 2
  02fafa4  fmuls 3, 6, 5
  02fafa8  fmadds 1, 5, 4, 1
  02fafac  lfs 5, -19356(3)
  02fafb0  lfs 6, 16(31)
  02fafb4  fmuls 7, 7, 10
  02fafb8  fmadds 2, 10, 4, 2
  02fafbc  lfs 4, 20(31)
  02fafc0  fmadds 1, 3, 9, 1
  02fafc4  lwz 3, 332(28)
  02fafc8  fmadds 3, 7, 9, 2
  02fafcc  fmadds 2, 1, 5, 4
  02fafd0  fmadds 1, 3, 5, 6
  02fafd4  stfs 2, 20(31)
  02fafd8  stfs 1, 16(31)
  02fafdc  lfs 3, 20(3)
  02fafe0  lfs 4, 16(3)
  02fafe4  fsubs 3, 2, 3
  02fafe8  fsubs 4, 1, 4
  02fafec  fmuls 3, 3, 3
  02faff0  fmadds 3, 4, 4, 3
  02faff4  lfs 4, -3884(4)
  02faff8  fsqrts 3, 3
  02faffc  fcmpu 0, 3, 4
  02fb000  cror 6, 1, 2
  02fb004  bt 6, 0x2fb9e4
  02fb008  lis 4, 151
  02fb00c  addic 4, 4, -25376
  02fb010  lfs 3, 132(4)
  02fb014  lfs 4, 128(4)
  02fb018  fsubs 2, 2, 3
  02fb01c  fsubs 1, 1, 4
  02fb020  lis 4, 128
  02fb024  fmuls 2, 2, 2
  02fb028  fmadds 1, 1, 1, 2
  02fb02c  lfs 2, -3892(4)
  02fb030  fsqrts 1, 1
  02fb034  fcmpu 0, 1, 2
  02fb038  cror 6, 1, 2
  02fb03c  bt 6, 0x2fb05c
  02fb040  ori 5, 3, 0
  02fb044  ori 3, 31, 0
  02fb048  li 4, 1
  02fb04c  bl 0x2fa200
  02fb050  cmpwi 3, 0
  02fb054  stw 3, 332(28)
  02fb058  bf 2, 0x2fb9e4
  02fb05c  li 3, 11
  02fb060  lbz 4, 83(31)
  02fb064  cmpwi 4, 13
  02fb068  stb 3, 32(31)
  02fb06c  bt 2, 0x2fb08c
  02fb070  ori 3, 31, 0
  02fb074  li 4, 13
  02fb078  li 5, 0
  02fb07c  li 6, 5
  02fb080  li 7, 1
  02fb084  bl 0xfdf80
  02fb088  nop
  02fb08c  lis 3, 268
  02fb090  lis 4, 268
  02fb094  lfs 1, -19368(3)
  02fb098  stfs 1, 92(28)
  02fb09c  lfs 1, 16(31)
  02fb0a0  lwz 3, -19352(4)
  02fb0a4  stfs 1, 336(28)
  02fb0a8  lfs 1, 20(31)
  02fb0ac  stw 3, 344(28)
  02fb0b0  stfs 1, 340(28)
  02fb0b4  b 0x2fb9e4
  02fb0b8  lwz 3, 344(28)
  02fb0bc  lwz 30, 332(28)
  02fb0c0  cmpwi 3, 0
  02fb0c4  bt 2, 0x2fb12c
  02fb0c8  addic 3, 28, 344
  02fb0cc  bl 0x4fff60
  02fb0d0  nop
  02fb0d4  lis 3, 268
  02fb0d8  lwz 3, -19352(3)
  02fb0dc  extsw 3, 3
  02fb0e0  bl 0x502730
  02fb0e4  nop
  02fb0e8  lwz 3, 344(28)
  02fb0ec  extsw 3, 3
  02fb0f0  std 3, 296(1)
  02fb0f4  lfs 2, 16(30)
  02fb0f8  lfs 3, 336(28)
  02fb0fc  lfd 4, 296(1)
  02fb100  fcfid 4, 4
  02fb104  fsubs 3, 3, 2
  02fb108  frsp 4, 4
  02fb10c  fdivs 1, 4, 1
  02fb110  fmadds 2, 3, 1, 2
  02fb114  stfs 2, 16(31)
  02fb118  lfs 2, 20(30)
  02fb11c  lfs 3, 340(28)
  02fb120  fsubs 3, 3, 2
  02fb124  fmadds 1, 3, 1, 2
  02fb128  stfs 1, 20(31)
  02fb12c  lfs 1, 24(31)
  02fb130  lis 3, 268
  02fb134  lfs 2, 92(28)
  02fb138  lis 4, 48
  02fb13c  fadds 1, 1, 2
  02fb140  addi 4, 4, -22884
  02fb144  stfs 1, 24(31)
  02fb148  lfs 1, 92(28)
  02fb14c  lfs 2, -19364(3)
  02fb150  fsubs 1, 1, 2
  02fb154  stfs 1, 92(28)
  02fb158  lfs 2, 40(4)
  02fb15c  fcmpu 0, 1, 2
  02fb160  cror 6, 1, 2
  02fb164  bt 6, 0x2fb9e4
  02fb168  lfs 1, 16(31)
  02fb16c  lfs 2, 20(31)
  02fb170  lis 3, 48
  02fb174  stfs 1, 160(1)
  02fb178  addic 4, 1, 176
  02fb17c  lfs 3, 28(31)
  02fb180  addi 3, 3, -22884
  02fb184  stfs 2, 164(1)
  02fb188  li 5, 2
  02fb18c  stfs 3, 172(1)
  02fb190  li 6, 0
  02fb194  stfs 1, 176(1)
  02fb198  li 7, 0
  02fb19c  stfs 2, 180(1)
  02fb1a0  stfs 3, 188(1)
  02fb1a4  lfs 1, 48(3)
  02fb1a8  lfs 2, 24(31)
  02fb1ac  addic 3, 1, 160
  02fb1b0  fadds 3, 2, 1
  02fb1b4  fsubs 1, 2, 1
  02fb1b8  stfs 3, 168(1)
  02fb1bc  stfs 1, 184(1)
  02fb1c0  bl 0x55ab8
  02fb1c4  nop
  02fb1c8  cmpwi 3, 0
  02fb1cc  bt 2, 0x2fb9e4
  02fb1d0  lis 4, 128
  02fb1d4  lfs 2, 24(31)
  02fb1d8  lis 3, 161
  02fb1dc  addic 3, 3, 2368
  02fb1e0  lfs 1, -3888(4)
  02fb1e4  fadds 2, 2, 1
  02fb1e8  lfs 3, 40(3)
  02fb1ec  fcmpu 0, 2, 3
  02fb1f0  bt 1, 0x2fb9e4
  02fb1f4  lis 4, 268
  02fb1f8  lis 5, 268
  02fb1fc  lwz 4, -19340(4)
  02fb200  stw 4, 348(28)
  02fb204  lwz 4, -19360(5)
  02fb208  li 5, 1
  02fb20c  sth 4, 330(28)
  02fb210  lfs 2, 40(3)
  02fb214  fsubs 1, 2, 1
  02fb218  stb 5, 32(31)
  02fb21c  lbz 3, 83(31)
  02fb220  cmpwi 3, 13
  02fb224  stfs 1, 24(31)
  02fb228  bt 2, 0x2fb9e4
  02fb22c  ori 3, 31, 0
  02fb230  li 4, 13
  02fb234  li 5, 0
  02fb238  li 6, 3
  02fb23c  li 7, 1
  02fb240  bl 0xfdf80
  02fb244  nop
  02fb248  b 0x2fb9e4
  02fb24c  lis 30, 151
  02fb250  lfs 1, 16(31)
  02fb254  lfs 2, 20(31)
  02fb258  addic 30, 30, -25376
  02fb25c  lfs 3, 128(30)
  02fb260  lfs 4, 132(30)
  02fb264  fsubs 1, 3, 1
  02fb268  fsubs 2, 4, 2
  02fb26c  bl 0x5e8338
  02fb270  nop
  02fb274  lis 4, 128
  02fb278  lis 6, 128
  02fb27c  lis 7, 128
  02fb280  ori 3, 31, 0
  02fb284  addic 5, 28, 324
  02fb288  lfs 2, -3872(4)
  02fb28c  lfs 3, -3868(6)
  02fb290  lfs 4, -3864(7)
  02fb294  bl 0xff2e8
  02fb298  nop
  02fb29c  lfs 1, 24(31)
  02fb2a0  lis 3, 268
  02fb2a4  lfs 2, 92(28)
  02fb2a8  lis 4, 48
  02fb2ac  fadds 1, 1, 2
  02fb2b0  addi 4, 4, -22884
  02fb2b4  stfs 1, 24(31)
  02fb2b8  lfs 1, 92(28)
  02fb2bc  lfs 2, -19372(3)
  02fb2c0  fsubs 1, 1, 2
  02fb2c4  stfs 1, 92(28)
  02fb2c8  lfs 2, 40(4)
  02fb2cc  fcmpu 0, 1, 2
  02fb2d0  cror 6, 1, 2
  02fb2d4  bt 6, 0x2fb9e4
  02fb2d8  lfs 1, 16(31)
  02fb2dc  lfs 2, 20(31)
  02fb2e0  lis 3, 48
  02fb2e4  stfs 1, 192(1)
  02fb2e8  addic 4, 1, 208
  02fb2ec  lfs 3, 28(31)
  02fb2f0  addi 3, 3, -22884
  02fb2f4  stfs 2, 196(1)
  02fb2f8  li 5, 2
  02fb2fc  stfs 3, 204(1)
  02fb300  li 6, 0
  02fb304  stfs 1, 208(1)
  02fb308  li 7, 0
  02fb30c  stfs 2, 212(1)
  02fb310  stfs 3, 220(1)
  02fb314  lfs 1, 44(3)
  02fb318  lfs 2, 24(31)
  02fb31c  addic 3, 1, 192
  02fb320  fadds 3, 2, 1
  02fb324  fsubs 1, 2, 1
  02fb328  stfs 3, 200(1)
  02fb32c  stfs 1, 216(1)
  02fb330  bl 0x55ab8
  02fb334  nop
  02fb338  cmpwi 3, 0
  02fb33c  bt 2, 0x2fb9e4
  02fb340  lfs 1, 20(31)
  02fb344  lfs 2, 132(30)
  02fb348  lfs 3, 16(31)
  02fb34c  fsubs 1, 1, 2
  02fb350  lfs 2, 128(30)
  02fb354  fsubs 2, 3, 2
  02fb358  lis 3, 128
  02fb35c  fmuls 1, 1, 1
  02fb360  fmadds 1, 2, 2, 1
  02fb364  lfs 2, -3892(3)
  02fb368  fsqrts 1, 1
  02fb36c  fcmpu 0, 1, 2
  02fb370  cror 6, 1, 2
  02fb374  bt 6, 0x2fb3c4
  02fb378  li 3, 10
  02fb37c  lbz 4, 83(31)
  02fb380  cmpwi 4, 2
  02fb384  stb 3, 32(31)
  02fb388  bt 2, 0x2fb3a8
  02fb38c  ori 3, 31, 0
  02fb390  li 4, 2
  02fb394  li 5, 0
  02fb398  li 6, 5
  02fb39c  li 7, 1
  02fb3a0  bl 0xfdf80
  02fb3a4  nop
  02fb3a8  ori 3, 31, 0
  02fb3ac  li 4, 1
  02fb3b0  lwz 5, 332(28)
  02fb3b4  bl 0x2fa200
  02fb3b8  cmpwi 3, 0
  02fb3bc  stw 3, 332(28)
  02fb3c0  bf 2, 0x2fb9e4
  02fb3c4  lis 3, 161
  02fb3c8  lwz 4, 24(31)
  02fb3cc  addic 3, 3, 2368
  02fb3d0  srawi 6, 4, 31
  02fb3d4  srwi 7, 6, 1
  02fb3d8  lwz 5, 40(3)
  02fb3dc  xor 4, 7, 4
  02fb3e0  lfs 1, 40(3)
  02fb3e4  srawi 8, 5, 31
  02fb3e8  subc 4, 4, 6
  02fb3ec  srwi 7, 8, 1
  02fb3f0  xor 5, 7, 5
  02fb3f4  subc 3, 5, 8
  02fb3f8  cmpw 4, 3
  02fb3fc  bt 1, 0x2fb9e4
  02fb400  li 3, 12
  02fb404  stfs 1, 24(31)
  02fb408  stb 3, 32(31)
  02fb40c  b 0x2fb9e4
  02fb410  lis 3, 151
  02fb414  lfs 1, 16(31)
  02fb418  lfs 2, 20(31)
  02fb41c  addic 3, 3, -25376
  02fb420  lfs 3, 128(3)
  02fb424  lfs 4, 132(3)
  02fb428  fsubs 1, 3, 1
  02fb42c  fsubs 2, 4, 2
  02fb430  bl 0x5e8338
  02fb434  nop
  02fb438  fmr 31, 1
  02fb43c  lis 4, 128
  02fb440  lis 6, 128
  02fb444  lis 7, 128
  02fb448  ori 3, 31, 0
  02fb44c  addic 5, 28, 324
  02fb450  lfs 2, -3872(4)
  02fb454  lfs 3, -3868(6)
  02fb458  lfs 4, -3864(7)
  02fb45c  bl 0xff2e8
  02fb460  nop
  02fb464  lfs 1, 72(31)
  02fb468  fmr 2, 31
  02fb46c  bl 0x5026a0
  02fb470  nop
  02fb474  lis 3, 128
  02fb478  lfs 2, -3880(3)
  02fb47c  fcmpu 0, 1, 2
  02fb480  cror 6, 1, 2
  02fb484  bt 6, 0x2fb9e4
  02fb488  li 3, 6
  02fb48c  li 4, 0
  02fb490  stb 3, 32(31)
  02fb494  sth 4, 328(28)
  02fb498  lbz 3, 83(31)
  02fb49c  cmpwi 3, 38
  02fb4a0  bt 2, 0x2fb9e4
  02fb4a4  ori 3, 31, 0
  02fb4a8  li 4, 38
  02fb4ac  li 5, 0
  02fb4b0  li 6, 5
  02fb4b4  li 7, 1
  02fb4b8  bl 0xfdf80
  02fb4bc  nop
  02fb4c0  b 0x2fb9e4
  02fb4c4  lis 30, 151
  02fb4c8  lfs 1, 16(31)
  02fb4cc  addic 30, 30, -25376
  02fb4d0  lfs 2, 20(31)
  02fb4d4  lfs 3, 128(30)
  02fb4d8  lfs 4, 132(30)
  02fb4dc  fsubs 1, 3, 1
  02fb4e0  fsubs 2, 4, 2
  02fb4e4  bl 0x5e8338
  02fb4e8  nop
  02fb4ec  lis 3, 128
  02fb4f0  lis 4, 128
  02fb4f4  lis 6, 128
  02fb4f8  addic 5, 28, 324
  02fb4fc  lfs 2, -3872(3)
  02fb500  lfs 3, -3868(4)
  02fb504  ori 3, 31, 0
  02fb508  lfs 4, -3864(6)
  02fb50c  bl 0xff2e8
  02fb510  nop
  02fb514  lhz 3, 328(28)
  02fb518  cmpwi 3, 0
  02fb51c  bf 2, 0x2fb6dc
  02fb520  lbz 3, 82(31)
  02fb524  lbz 4, 83(31)
  02fb528  cmpw 3, 4
  02fb52c  bf 2, 0x2fb6dc
  02fb530  ori 3, 31, 0
  02fb534  bl 0xefe40
  02fb538  nop
  02fb53c  lis 3, 48
  02fb540  addi 3, 3, -22884
  02fb544  lfs 2, 52(3)
  02fb548  fcmpu 0, 1, 2
  02fb54c  cror 6, 0, 2
  02fb550  bt 6, 0x2fb6dc
  02fb554  addic 29, 1, 224
  02fb558  ori 3, 31, 0
  02fb55c  li 4, 1
  02fb560  ori 5, 29, 0
  02fb564  bl 0xf1114
  02fb568  nop
  02fb56c  lwz 3, 8320(30)
  02fb570  lfs 1, 224(1)
  02fb574  lfs 2, 228(1)
  02fb578  lfs 3, 16(3)
  02fb57c  lfs 4, 20(3)
  02fb580  fsubs 1, 3, 1
  02fb584  fsubs 2, 4, 2
  02fb588  bl 0x5e8338
  02fb58c  nop
  02fb590  lis 3, 48
  02fb594  addi 5, 3, -22884
  02fb598  lis 3, 268
  02fb59c  lfs 2, 8(5)
  02fb5a0  lfs 3, 12(5)
  02fb5a4  fadds 2, 1, 2
  02fb5a8  fsubs 5, 3, 1
  02fb5ac  lfs 4, 16(5)
  02fb5b0  addic 7, 1, 288
  02fb5b4  fsubs 3, 3, 2
  02fb5b8  fsub 7, 1, 5
  02fb5bc  fsubs 6, 4, 2
  02fb5c0  fsubs 4, 4, 1
  02fb5c4  fsub 8, 2, 3
  02fb5c8  fsel 1, 7, 5, 1
  02fb5cc  fsel 2, 8, 3, 2
  02fb5d0  fsub 5, 4, 1
  02fb5d4  lfs 3, 20(5)
  02fb5d8  fsub 7, 6, 2
  02fb5dc  fsel 1, 5, 4, 1
  02fb5e0  lfs 4, 24(5)
  02fb5e4  lfs 5, 28(5)
  02fb5e8  lfs 8, 32(5)
  02fb5ec  fsel 2, 7, 6, 2
  02fb5f0  fmuls 6, 1, 1
  02fb5f4  fmuls 7, 2, 2
  02fb5f8  fmuls 9, 6, 1
  02fb5fc  fmuls 10, 7, 2
  02fb600  fmuls 11, 6, 9
  02fb604  fmadds 1, 9, 3, 1
  02fb608  fmuls 9, 7, 10
  02fb60c  fmadds 2, 10, 3, 2
  02fb610  fmuls 3, 6, 11
  02fb614  fmadds 1, 11, 4, 1
  02fb618  fmuls 10, 7, 9
  02fb61c  fmadds 2, 9, 4, 2
  02fb620  fmuls 4, 6, 3
  02fb624  fmadds 1, 3, 5, 1
  02fb628  lfs 3, -19348(3)
  02fb62c  li 3, 0
  02fb630  stw 3, 248(1)
  02fb634  fmuls 6, 7, 10
  02fb638  fmadds 2, 10, 5, 2
  02fb63c  lis 3, 114
  02fb640  lwz 4, 8320(30)
  02fb644  fmadds 1, 4, 8, 1
  02fb648  addic 4, 4, 16
  02fb64c  lfs 4, -3048(3)
  02fb650  ori 3, 29, 0
  02fb654  fmadds 2, 6, 8, 2
  02fb658  fmuls 1, 1, 3
  02fb65c  fmuls 2, 2, 3
  02fb660  stfs 1, 244(1)
  02fb664  stfs 2, 240(1)
  02fb668  lfs 1, 56(5)
  02fb66c  lfs 2, 60(5)
  02fb670  fmuls 1, 3, 1
  02fb674  fmuls 2, 4, 2
  02fb678  bl 0x108180
  02fb67c  nop
  02fb680  ori 3, 31, 0
  02fb684  stfs 1, 248(1)
  02fb688  addic 5, 1, 240
  02fb68c  ori 4, 29, 0
  02fb690  bl 0x30f5c8
  02fb694  nop
  02fb698  ori 30, 3, 0
  02fb69c  cmpwi 30, 0
  02fb6a0  bt 2, 0x2fb6dc
  02fb6a4  lis 4, 48
  02fb6a8  li 3, 1
  02fb6ac  addi 4, 4, -22884
  02fb6b0  li 5, 255
  02fb6b4  li 6, 255
  02fb6b8  sth 3, 328(28)
  02fb6bc  lfs 1, 44(30)
  02fb6c0  lfs 2, 64(4)
  02fb6c4  ori 3, 30, 0
  02fb6c8  li 4, 255
  02fb6cc  fmuls 1, 1, 2
  02fb6d0  stfs 1, 44(30)
  02fb6d4  bl 0xf1ec8
  02fb6d8  nop
  02fb6dc  lbz 3, 112(31)
  02fb6e0  rlwinm 3, 3, 0, 30, 30
  02fb6e4  cmpwi 3, 0
  02fb6e8  bt 2, 0x2fb9e4
  02fb6ec  lbz 3, 83(31)
  02fb6f0  cmpwi 3, 40
  02fb6f4  bt 2, 0x2fb714
  02fb6f8  ori 3, 31, 0
  02fb6fc  li 4, 40
  02fb700  li 5, 0
  02fb704  li 6, 5
  02fb708  li 7, 1
  02fb70c  bl 0xfdf80
  02fb710  nop
  02fb714  li 3, 7
  02fb718  stb 3, 32(31)
  02fb71c  b 0x2fb9e4
  02fb720  lbz 3, 112(31)
  02fb724  rlwinm 3, 3, 0, 30, 30
  02fb728  cmpwi 3, 0
  02fb72c  bt 2, 0x2fb9e4
  02fb730  lis 3, 151
  02fb734  lfs 1, 20(31)
  02fb738  lfs 2, 16(31)
  02fb73c  addic 3, 3, -25376
  02fb740  lfs 3, 132(3)
  02fb744  lfs 4, 128(3)
  02fb748  fsubs 1, 1, 3
  02fb74c  fsubs 2, 2, 4
  02fb750  lis 3, 128
  02fb754  fmuls 1, 1, 1
  02fb758  fmadds 1, 2, 2, 1
  02fb75c  lfs 2, -3892(3)
  02fb760  fsqrts 1, 1
  02fb764  fcmpu 0, 1, 2
  02fb768  cror 6, 1, 2
  02fb76c  bt 6, 0x2fb7cc
  02fb770  lis 3, 161
  02fb774  lbz 5, 83(31)
  02fb778  li 4, 10
  02fb77c  addic 3, 3, 2368
  02fb780  cmpwi 5, 2
  02fb784  lfs 1, 40(3)
  02fb788  stb 4, 32(31)
  02fb78c  stfs 1, 24(31)
  02fb790  bt 2, 0x2fb7b0
  02fb794  ori 3, 31, 0
  02fb798  li 4, 2
  02fb79c  li 5, 0
  02fb7a0  li 6, 5
  02fb7a4  li 7, 1
  02fb7a8  bl 0xfdf80
  02fb7ac  nop
  02fb7b0  ori 3, 31, 0
  02fb7b4  lwz 5, 332(28)
  02fb7b8  li 4, 1
  02fb7bc  bl 0x2fa200
  02fb7c0  cmpwi 3, 0
  02fb7c4  stw 3, 332(28)
  02fb7c8  bf 2, 0x2fb9e4
  02fb7cc  lbz 3, 83(31)
  02fb7d0  cmpwi 3, 13
  02fb7d4  bt 2, 0x2fb7f4
  02fb7d8  ori 3, 31, 0
  02fb7dc  li 4, 13
  02fb7e0  li 5, 0
  02fb7e4  li 6, 5
  02fb7e8  li 7, 1
  02fb7ec  bl 0xfdf80
  02fb7f0  nop
  02fb7f4  li 3, 8
  02fb7f8  lis 4, 268
  02fb7fc  stb 3, 32(31)
  02fb800  lfs 1, -19368(4)
  02fb804  stfs 1, 92(28)
  02fb808  b 0x2fb9e4
  02fb80c  lfs 1, 24(31)
  02fb810  lis 3, 268
  02fb814  lfs 2, 92(28)
  02fb818  lis 4, 48
  02fb81c  fadds 1, 1, 2
  02fb820  addi 4, 4, -22884
  02fb824  stfs 1, 24(31)
  02fb828  lfs 1, 92(28)
  02fb82c  lfs 2, -19364(3)
  02fb830  fsubs 1, 1, 2
  02fb834  stfs 1, 92(28)
  02fb838  lfs 2, 40(4)
  02fb83c  fcmpu 0, 1, 2
  02fb840  cror 6, 1, 2
  02fb844  bt 6, 0x2fb9e4
  02fb848  lfs 1, 16(31)
  02fb84c  lfs 2, 20(31)
  02fb850  lis 3, 48
  02fb854  stfs 1, 256(1)
  02fb858  addic 4, 1, 272
  02fb85c  lfs 3, 28(31)
  02fb860  addi 3, 3, -22884
  02fb864  stfs 2, 260(1)
  02fb868  li 5, 2
  02fb86c  stfs 3, 268(1)
  02fb870  li 6, 0
  02fb874  stfs 1, 272(1)
  02fb878  li 7, 0
  02fb87c  stfs 2, 276(1)
  02fb880  stfs 3, 284(1)
  02fb884  lfs 1, 48(3)
  02fb888  lfs 2, 24(31)
  02fb88c  addic 3, 1, 256
  02fb890  fadds 3, 2, 1
  02fb894  fsubs 1, 2, 1
  02fb898  stfs 3, 264(1)
  02fb89c  stfs 1, 280(1)
  02fb8a0  bl 0x55ab8
  02fb8a4  nop
  02fb8a8  cmpwi 3, 0
  02fb8ac  bt 2, 0x2fb9e4
  02fb8b0  lis 4, 128
  02fb8b4  lfs 2, 24(31)
  02fb8b8  lis 3, 161
  02fb8bc  addic 3, 3, 2368
  02fb8c0  lfs 1, -3888(4)
  02fb8c4  fadds 2, 2, 1
  02fb8c8  lfs 3, 40(3)
  02fb8cc  fcmpu 0, 2, 3
  02fb8d0  bt 1, 0x2fb9e4
  02fb8d4  lis 4, 268
  02fb8d8  lis 5, 268
  02fb8dc  lwz 4, -19340(4)
  02fb8e0  stw 4, 348(28)
  02fb8e4  lwz 4, -19360(5)
  02fb8e8  li 5, 1
  02fb8ec  sth 4, 330(28)
  02fb8f0  lfs 2, 40(3)
  02fb8f4  fsubs 1, 2, 1
  02fb8f8  stb 5, 32(31)
  02fb8fc  lbz 3, 83(31)
  02fb900  cmpwi 3, 13
  02fb904  stfs 1, 24(31)
  02fb908  bt 2, 0x2fb9e4
  02fb90c  ori 3, 31, 0
  02fb910  li 4, 13
  02fb914  li 5, 0
  02fb918  li 6, 3
  02fb91c  li 7, 1
  02fb920  bl 0xfdf80
  02fb924  nop
  02fb928  b 0x2fb9e4
  02fb92c  li 3, 255
  02fb930  stb 3, 164(31)
  02fb934  lwz 3, 316(28)
  02fb938  cmpwi 3, 0
  02fb93c  bt 0, 0x2fb960
  02fb940  lis 4, 151
  02fb944  addic 4, 4, -25376
  02fb948  lwz 4, 8320(4)
  02fb94c  lbz 4, 82(4)
  02fb950  cmpw 3, 4
  02fb954  bt 2, 0x2fb960
  02fb958  li 3, -1
  02fb95c  stw 3, 316(28)
  02fb960  ori 3, 31, 0
  02fb964  addic 4, 28, 64
  02fb968  bl 0x10b030
  02fb96c  nop
  02fb970  rlwinm 3, 3, 0, 25, 25
  02fb974  cmpwi 3, 0
  02fb978  bt 2, 0x2fb9e4
  02fb97c  li 3, -1
  02fb980  stw 3, 316(28)
  02fb984  lbz 3, 188(31)
  02fb988  lbz 4, 83(31)
  02fb98c  stb 3, 32(31)
  02fb990  cmpwi 4, 13
  02fb994  bt 2, 0x2fb9e4
  02fb998  ori 3, 31, 0
  02fb99c  li 4, 13
  02fb9a0  li 5, 0
  02fb9a4  li 6, 1
  02fb9a8  li 7, 1
  02fb9ac  bl 0xfdf80
  02fb9b0  nop
  02fb9b4  b 0x2fb9e4
  02fb9b8  ori 3, 31, 0
  02fb9bc  addic 4, 28, 64
  02fb9c0  bl 0x10b030
  02fb9c4  nop
  02fb9c8  rlwinm 3, 3, 0, 25, 25
  02fb9cc  cmpwi 3, 0
  02fb9d0  bt 2, 0x2fb9e4
  02fb9d4  ori 3, 31, 0
  02fb9d8  bl 0xefb38
  02fb9dc  nop
  02fb9e0  b 0x2fbc54
  02fb9e4  lwz 30, 120(31)
  02fb9e8  lbz 3, 177(30)
  02fb9ec  cmpwi 3, 1
  02fb9f0  bf 2, 0x2fbc44
  02fb9f4  li 3, 312
  02fb9f8  addi 4, 3, 16
  02fb9fc  lvlx 2, 3, 30
  02fba00  lwz 3, 312(30)
  02fba04  lvrx 3, 4, 30
  02fba08  cmpwi 3, 0
  02fba0c  vor 2, 2, 3
  02fba10  bt 2, 0x2fbc44
  02fba14  extsw 3, 3
  02fba18  lis 4, 268
  02fba1c  li 5, -19384
  02fba20  std 3, 296(1)
  02fba24  lwz 3, -19384(4)
  02fba28  lvlx 3, 5, 4
  02fba2c  lis 4, 48
  02fba30  vcfsx 3, 3, 0
  02fba34  extsw 3, 3
  02fba38  li 5, 72
  02fba3c  lfd 1, 296(1)
  02fba40  addi 4, 4, -22884
  02fba44  vspltisw 4, -1
  02fba48  std 3, 296(1)
  02fba4c  vspltisw 8, -1
  02fba50  vslw 4, 4, 4
  02fba54  lvlx 6, 5, 4
  02fba58  lfs 2, 68(4)
  02fba5c  vspltw 6, 6, 0
  02fba60  lfd 3, 296(1)
  02fba64  vrefp 5, 3
  02fba68  fcfid 3, 3
  02fba6c  li 3, 68
  02fba70  vspltisw 9, -1
  02fba74  fcfid 1, 1
  02fba78  vcfsx 2, 2, 0
  02fba7c  vspltisw 10, -1
  02fba80  li 5, 12
  02fba84  vslw 9, 9, 9
  02fba88  frsp 3, 3
  02fba8c  vnmsubfp 7, 5, 3, 6
  02fba90  frsp 1, 1
  02fba94  fdivs 2, 2, 3
  02fba98  lfs 3, 12(4)
  02fba9c  li 6, 304
  02fbaa0  vmaddfp 4, 5, 7, 4
  02fbaa4  vslw 5, 8, 8
  02fbaa8  vspltisw 8, -1
  02fbaac  vslw 8, 8, 8
  02fbab0  vnmsubfp 7, 4, 3, 6
  02fbab4  vmaddfp 4, 4, 7, 5
  02fbab8  lvlx 5, 3, 4
  02fbabc  vslw 7, 10, 10
  02fbac0  vspltw 5, 5, 0
  02fbac4  li 3, 16
  02fbac8  vnmsubfp 3, 4, 3, 6
  02fbacc  lvlx 6, 5, 4
  02fbad0  vspltw 6, 6, 0
  02fbad4  li 5, -3904
  02fbad8  vmaddfp 3, 4, 3, 8
  02fbadc  lvlx 4, 3, 4
  02fbae0  lfs 4, 16(4)
  02fbae4  vspltw 4, 4, 0
  02fbae8  li 3, 20
  02fbaec  vspltisw 8, -1
  02fbaf0  fmuls 1, 1, 2
  02fbaf4  vmaddfp 3, 3, 5, 9
  02fbaf8  fsubs 2, 3, 1
  02fbafc  fsubs 3, 4, 1
  02fbb00  vmaddfp 2, 2, 3, 7
  02fbb04  vspltisw 7, -1
  02fbb08  fsub 4, 1, 2
  02fbb0c  vslw 7, 7, 7
  02fbb10  vsubfp 3, 6, 2
  02fbb14  vsubfp 4, 4, 2
  02fbb18  fsel 1, 4, 2, 1
  02fbb1c  lvlx 6, 3, 4
  02fbb20  li 3, 24
  02fbb24  vspltw 6, 6, 0
  02fbb28  vcmpgtfp 5, 3, 2
  02fbb2c  fsub 2, 3, 1
  02fbb30  vsel 2, 3, 2, 5
  02fbb34  vspltisw 5, -1
  02fbb38  vcmpgtfp 3, 2, 4
  02fbb3c  vslw 5, 5, 5
  02fbb40  vsel 2, 4, 2, 3
  02fbb44  vspltisw 3, -1
  02fbb48  vspltisw 4, -1
  02fbb4c  fsel 1, 2, 3, 1
  02fbb50  lfs 2, 20(4)
  02fbb54  vslw 3, 3, 3
  02fbb58  vslw 4, 4, 4
  02fbb5c  vmaddfp 3, 2, 2, 3
  02fbb60  fmuls 3, 1, 1
  02fbb64  vmaddfp 4, 3, 2, 4
  02fbb68  fmuls 5, 3, 1
  02fbb6c  fmuls 6, 3, 5
  02fbb70  vmaddfp 5, 3, 4, 5
  02fbb74  vmaddfp 2, 4, 6, 2
  02fbb78  lvlx 6, 3, 4
  02fbb7c  li 3, 28
  02fbb80  vspltw 6, 6, 0
  02fbb84  fmadds 1, 5, 2, 1
  02fbb88  lfs 4, 24(4)
  02fbb8c  vslw 4, 8, 8
  02fbb90  fmuls 5, 3, 6
  02fbb94  vmaddfp 7, 3, 5, 7
  02fbb98  vmaddfp 2, 5, 6, 2
  02fbb9c  lvlx 5, 3, 4
  02fbba0  li 3, 32
  02fbba4  lfs 2, 28(4)
  02fbba8  vspltw 5, 5, 0
  02fbbac  fmadds 1, 6, 4, 1
  02fbbb0  fmuls 3, 3, 5
  02fbbb4  vmaddfp 3, 3, 7, 4
  02fbbb8  vmaddfp 2, 7, 5, 2
  02fbbbc  lvlx 4, 3, 4
  02fbbc0  lis 3, 128
  02fbbc4  fmadds 1, 5, 2, 1
  02fbbc8  vspltw 4, 4, 0
  02fbbcc  lfs 4, 32(4)
  02fbbd0  vmaddfp 2, 3, 4, 2
  02fbbd4  vspltisw 3, -1
  02fbbd8  lvlx 4, 5, 3
  02fbbdc  li 5, 76
  02fbbe0  fmadds 1, 3, 4, 1
  02fbbe4  lfs 2, -3904(3)
  02fbbe8  vslw 3, 3, 3
  02fbbec  addic 3, 30, 256
  02fbbf0  lvlx 5, 5, 4
  02fbbf4  li 5, 308
  02fbbf8  li 4, 1
  02fbbfc  vmaddfp 2, 4, 2, 3
  02fbc00  vspltw 3, 5, 0
  02fbc04  fmuls 1, 2, 1
  02fbc08  vxor 2, 3, 2
  02fbc0c  fneg 1, 1
  02fbc10  vspltw 2, 2, 0
  02fbc14  stvewx 2, 5, 30
  02fbc18  stvewx 2, 6, 30
  02fbc1c  bl 0x501980
  02fbc20  nop
  02fbc24  addic 3, 30, 192
  02fbc28  lfs 1, 304(30)
  02fbc2c  li 4, 1
  02fbc30  bl 0x501980
  02fbc34  nop
  02fbc38  addic 3, 30, 312
  02fbc3c  bl 0x4fff60
  02fbc40  nop
  02fbc44  addic 4, 28, 160
  02fbc48  ori 3, 31, 0
  02fbc4c  bl 0x10c9a0
  02fbc50  nop
  02fbc54  ld 0, 432(1)
  02fbc58  mtlr 0
  02fbc5c  lfd 26, 368(1)
  02fbc60  lfd 27, 376(1)
  02fbc64  lfd 28, 384(1)
  02fbc68  lfd 29, 392(1)
  02fbc6c  lfd 30, 400(1)
  02fbc70  lfd 31, 408(1)
  02fbc74  ld 26, 320(1)
  02fbc78  ld 27, 328(1)
  02fbc7c  ld 28, 336(1)
  02fbc80  ld 29, 344(1)
  02fbc84  ld 30, 352(1)
  02fbc88  ld 31, 360(1)
  02fbc8c  addi 1, 1, 416
  02fbc90  blr
