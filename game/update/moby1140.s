# game/update/moby1140.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1140_001dc0b8:   # 0x1dc0b8, 0x14 bytes
  01dc0b8  lis 3, 118
  01dc0bc  lis 4, 1
  01dc0c0  addic 3, 3, 19192
  01dc0c4  stw 4, 72(3)
  01dc0c8  blr

M1140_001dc0d0:   # 0x1dc0d0, 0xf4 bytes
  01dc0d0  stdu 1, -160(1)
  01dc0d4  mflr 0
  01dc0d8  std 0, 176(1)
  01dc0dc  std 31, 152(1)
  01dc0e0  lis 4, 161
  01dc0e4  ori 31, 3, 0
  01dc0e8  lwz 3, 1800(4)
  01dc0ec  std 30, 144(1)
  01dc0f0  std 29, 136(1)
  01dc0f4  std 28, 128(1)
  01dc0f8  std 27, 120(1)
  01dc0fc  cmpwi 3, 2
  01dc100  bf 2, 0x1dc1a0
  01dc104  lis 3, 151
  01dc108  lbz 3, -16268(3)
  01dc10c  cmpwi 3, 0
  01dc110  bt 2, 0x1dc1a0
  01dc114  lis 28, 150
  01dc118  li 27, 0
  01dc11c  addic 28, 28, -12976
  01dc120  lhz 3, 68(28)
  01dc124  extsh 4, 3
  01dc128  cmpwi 4, 0
  01dc12c  bf 1, 0x1dc1a0
  01dc130  lis 29, 162
  01dc134  ori 30, 28, 0
  01dc138  addic 29, 29, -16512
  01dc13c  lwz 4, 376(30)
  01dc140  lhz 5, 166(31)
  01dc144  extsh 5, 5
  01dc148  lhz 6, 166(4)
  01dc14c  extsh 6, 6
  01dc150  cmpw 6, 5
  01dc154  bf 2, 0x1dc18c
  01dc158  lbz 5, 1(29)
  01dc15c  cmpwi 5, 0
  01dc160  bf 2, 0x1dc18c
  01dc164  ori 3, 4, 0
  01dc168  li 4, 0
  01dc16c  ori 5, 29, 0
  01dc170  bl 0xf0ea8
  01dc174  nop
  01dc178  lis 4, 16432
  01dc17c  lhz 3, 68(28)
  01dc180  stw 4, 32(29)
  01dc184  stw 4, 36(29)
  01dc188  stw 4, 40(29)
  01dc18c  extsh 4, 3
  01dc190  addic 27, 27, 1
  01dc194  addic 30, 30, 4
  01dc198  cmpw 27, 4
  01dc19c  bt 0, 0x1dc13c
  01dc1a0  ld 0, 176(1)
  01dc1a4  mtlr 0
  01dc1a8  ld 27, 120(1)
  01dc1ac  ld 28, 128(1)
  01dc1b0  ld 29, 136(1)
  01dc1b4  ld 30, 144(1)
  01dc1b8  ld 31, 152(1)
  01dc1bc  addi 1, 1, 160
  01dc1c0  blr

M1140_001dc1f0:   # 0x1dc1f0, 0x53c bytes
  01dc1f0  stdu 1, -272(1)
  01dc1f4  mflr 0
  01dc1f8  std 0, 288(1)
  01dc1fc  stfd 26, 224(1)
  01dc200  stfd 27, 232(1)
  01dc204  stfd 28, 240(1)
  01dc208  stfd 29, 248(1)
  01dc20c  stfd 30, 256(1)
  01dc210  stfd 31, 264(1)
  01dc214  std 31, 216(1)
  01dc218  ori 31, 3, 0
  01dc21c  std 30, 208(1)
  01dc220  lbz 3, 32(31)
  01dc224  lwz 30, 120(31)
  01dc228  lfs 29, 16(31)
  01dc22c  cmpwi 3, 10
  01dc230  lfs 28, 20(31)
  01dc234  cmpwi 1, 3, -1
  01dc238  lfs 30, 24(31)
  01dc23c  cmpwi 6, 3, 5
  01dc240  lfs 5, 72(31)
  01dc244  std 29, 200(1)
  01dc248  cmpwi 7, 3, 14
  01dc24c  bt 1, 0x1dc25c
  01dc250  bf 5, 0x1dc68c
  01dc254  bf 25, 0x1dc274
  01dc258  b 0x1dc68c
  01dc25c  bt 29, 0x1dc26c
  01dc260  cmpwi 3, 13
  01dc264  bt 2, 0x1dc68c
  01dc268  b 0x1dc274
  01dc26c  cmpwi 3, 16
  01dc270  bf 2, 0x1dc68c
  01dc274  lis 3, 151
  01dc278  lis 4, 30
  01dc27c  addic 3, 3, -25376
  01dc280  addi 4, 4, -15932
  01dc284  lis 29, 115
  01dc288  lfs 1, 128(3)
  01dc28c  lfs 2, 132(3)
  01dc290  fsubs 29, 1, 29
  01dc294  fsubs 28, 2, 28
  01dc298  lfs 1, 0(4)
  01dc29c  fadds 30, 30, 1
  01dc2a0  addic 29, 29, 22784
  01dc2a4  fabs 3, 29
  01dc2a8  fabs 4, 28
  01dc2ac  stfs 29, 124(1)
  01dc2b0  stfs 28, 128(1)
  01dc2b4  lfs 31, 136(3)
  01dc2b8  fsubs 2, 3, 4
  01dc2bc  stfs 2, 132(1)
  01dc2c0  lwz 3, 124(1)
  01dc2c4  lfs 26, 4(4)
  01dc2c8  lfs 2, 124(1)
  01dc2cc  lwz 5, 128(1)
  01dc2d0  lfs 1, 128(1)
  01dc2d4  lwz 6, 132(1)
  01dc2d8  rlwinm 5, 5, 3, 29, 29
  01dc2dc  fabs 6, 1
  01dc2e0  lfs 1, 132(1)
  01dc2e4  fabs 2, 2
  01dc2e8  rlwimi 5, 6, 2, 30, 30
  01dc2ec  fsub 7, 1, 26
  01dc2f0  rlwimi 5, 3, 4, 28, 28
  01dc2f4  fsub 8, 1, 26
  01dc2f8  ori 3, 29, 0
  01dc2fc  rlwimi 3, 5, 2, 26, 28
  01dc300  slwi 5, 5, 2
  01dc304  clrldi 3, 3, 32
  01dc308  fsel 4, 7, 2, 4
  01dc30c  lfsx 1, 29, 5
  01dc310  lfs 2, 4(3)
  01dc314  fsel 3, 8, 6, 3
  01dc318  lfs 27, 8(4)
  01dc31c  fcmpu 0, 4, 26
  01dc320  bt 1, 0x1dc32c
  01dc324  fmr 1, 26
  01dc328  b 0x1dc444
  01dc32c  fsubs 6, 3, 4
  01dc330  fadds 3, 3, 4
  01dc334  addic 3, 1, 16
  01dc338  li 6, 2
  01dc33c  addic 4, 3, 152
  01dc340  addic 5, 3, 168
  01dc344  mtctr 6
  01dc348  fdivs 3, 6, 3
  01dc34c  fmuls 4, 3, 3
  01dc350  stfs 3, 180(1)
  01dc354  stfs 3, 172(1)
  01dc358  stfs 3, 176(1)
  01dc35c  stfs 3, 168(1)
  01dc360  lfs 7, 180(1)
  01dc364  lfs 8, 172(1)
  01dc368  lfs 9, 176(1)
  01dc36c  fmuls 6, 4, 4
  01dc370  fmuls 8, 8, 4
  01dc374  fmuls 7, 7, 6
  01dc378  fmuls 3, 6, 6
  01dc37c  fmuls 6, 9, 6
  01dc380  stfs 8, 172(1)
  01dc384  fmuls 4, 7, 4
  01dc388  stfs 6, 176(1)
  01dc38c  stfs 4, 180(1)
  01dc390  lfs 4, 152(3)
  01dc394  fmuls 4, 4, 3
  01dc398  stfs 4, 168(3)
  01dc39c  lfs 4, 4(4)
  01dc3a0  addic 3, 3, 8
  01dc3a4  addic 4, 4, 8
  01dc3a8  fmuls 4, 4, 3
  01dc3ac  stfs 4, 4(5)
  01dc3b0  addic 5, 5, 8
  01dc3b4  bdnz 0x1dc390
  01dc3b8  ori 3, 1, 0
  01dc3bc  lis 4, 115
  01dc3c0  li 8, 4
  01dc3c4  addic 5, 3, 168
  01dc3c8  addic 4, 4, 22752
  01dc3cc  ori 7, 5, 0
  01dc3d0  mtctr 8
  01dc3d4  lfs 3, 168(3)
  01dc3d8  lfs 4, 0(4)
  01dc3dc  fmuls 3, 3, 4
  01dc3e0  lfs 4, 4(4)
  01dc3e4  addic 4, 4, 8
  01dc3e8  stfs 3, 168(3)
  01dc3ec  lfs 3, 4(5)
  01dc3f0  addic 3, 3, 8
  01dc3f4  fmuls 3, 3, 4
  01dc3f8  stfs 3, 4(5)
  01dc3fc  addic 5, 5, 8
  01dc400  bdnz 0x1dc3d4
  01dc404  fmr 3, 26
  01dc408  ori 3, 1, 0
  01dc40c  mtctr 6
  01dc410  lfs 4, 168(3)
  01dc414  fadds 3, 3, 4
  01dc418  addic 3, 3, 16
  01dc41c  lfs 4, 4(7)
  01dc420  lfs 6, 8(7)
  01dc424  lfs 7, 12(7)
  01dc428  addic 7, 7, 16
  01dc42c  fadds 3, 3, 4
  01dc430  fadds 3, 3, 6
  01dc434  fadds 3, 3, 7
  01dc438  bdnz 0x1dc410
  01dc43c  fadds 3, 3, 27
  01dc440  fmadds 1, 3, 1, 2
  01dc444  fmr 2, 5
  01dc448  bl 0x5025e0
  01dc44c  nop
  01dc450  fmuls 2, 28, 28
  01dc454  fsubs 3, 31, 30
  01dc458  fmadds 2, 29, 29, 2
  01dc45c  fabs 4, 3
  01dc460  stfs 3, 116(1)
  01dc464  fsqrts 2, 2
  01dc468  fabs 3, 2
  01dc46c  stfs 2, 112(1)
  01dc470  lwz 3, 116(1)
  01dc474  rlwinm 3, 3, 3, 29, 29
  01dc478  fsubs 2, 3, 4
  01dc47c  stfs 2, 120(1)
  01dc480  lwz 4, 112(1)
  01dc484  lfs 2, 112(1)
  01dc488  lfs 5, 116(1)
  01dc48c  lwz 5, 120(1)
  01dc490  lfs 6, 120(1)
  01dc494  fabs 2, 2
  01dc498  rlwimi 3, 5, 2, 30, 30
  01dc49c  fsub 7, 6, 26
  01dc4a0  fabs 5, 5
  01dc4a4  fsub 6, 6, 26
  01dc4a8  rlwimi 3, 4, 4, 28, 28
  01dc4ac  ori 4, 29, 0
  01dc4b0  rlwimi 4, 3, 2, 26, 28
  01dc4b4  slwi 3, 3, 2
  01dc4b8  clrldi 4, 4, 32
  01dc4bc  fsel 4, 7, 2, 4
  01dc4c0  lfsx 31, 29, 3
  01dc4c4  fsel 3, 6, 5, 3
  01dc4c8  lfs 2, 4(4)
  01dc4cc  fcmpu 0, 4, 26
  01dc4d0  bt 1, 0x1dc4d8
  01dc4d4  b 0x1dc5ec
  01dc4d8  fsubs 5, 3, 4
  01dc4dc  fadds 3, 3, 4
  01dc4e0  addic 3, 1, 16
  01dc4e4  li 6, 2
  01dc4e8  addic 5, 3, 136
  01dc4ec  addic 4, 3, 120
  01dc4f0  mtctr 6
  01dc4f4  fdivs 3, 5, 3
  01dc4f8  fmuls 4, 3, 3
  01dc4fc  stfs 3, 148(1)
  01dc500  stfs 3, 140(1)
  01dc504  stfs 3, 144(1)
  01dc508  stfs 3, 136(1)
  01dc50c  lfs 6, 148(1)
  01dc510  lfs 7, 140(1)
  01dc514  lfs 8, 144(1)
  01dc518  fmuls 5, 4, 4
  01dc51c  fmuls 7, 7, 4
  01dc520  fmuls 6, 6, 5
  01dc524  fmuls 3, 5, 5
  01dc528  fmuls 5, 8, 5
  01dc52c  stfs 7, 140(1)
  01dc530  fmuls 4, 6, 4
  01dc534  stfs 5, 144(1)
  01dc538  stfs 4, 148(1)
  01dc53c  lfs 4, 120(3)
  01dc540  fmuls 4, 4, 3
  01dc544  stfs 4, 136(3)
  01dc548  lfs 4, 4(4)
  01dc54c  addic 4, 4, 8
  01dc550  fmuls 4, 4, 3
  01dc554  addic 3, 3, 8
  01dc558  stfs 4, 4(5)
  01dc55c  addic 5, 5, 8
  01dc560  bdnz 0x1dc53c
  01dc564  li 5, 4
  01dc568  ori 3, 1, 0
  01dc56c  mtctr 5
  01dc570  lis 4, 115
  01dc574  addic 5, 3, 136
  01dc578  addic 4, 4, 22752
  01dc57c  ori 7, 5, 0
  01dc580  lfs 3, 136(3)
  01dc584  lfs 4, 0(4)
  01dc588  fmuls 3, 3, 4
  01dc58c  lfs 4, 4(4)
  01dc590  addic 4, 4, 8
  01dc594  stfs 3, 136(3)
  01dc598  lfs 3, 4(5)
  01dc59c  addic 3, 3, 8
  01dc5a0  fmuls 3, 3, 4
  01dc5a4  stfs 3, 4(5)
  01dc5a8  addic 5, 5, 8
  01dc5ac  bdnz 0x1dc580
  01dc5b0  ori 3, 1, 0
  01dc5b4  mtctr 6
  01dc5b8  lfs 3, 136(3)
  01dc5bc  lfs 4, 4(7)
  01dc5c0  fadds 3, 26, 3
  01dc5c4  lfs 5, 8(7)
  01dc5c8  addic 3, 3, 16
  01dc5cc  lfs 26, 12(7)
  01dc5d0  addic 7, 7, 16
  01dc5d4  fadds 3, 3, 4
  01dc5d8  fadds 3, 3, 5
  01dc5dc  fadds 26, 3, 26
  01dc5e0  bdnz 0x1dc5b8
  01dc5e4  fadds 26, 26, 27
  01dc5e8  fmadds 26, 26, 31, 2
  01dc5ec  lis 3, 30
  01dc5f0  fneg 26, 26
  01dc5f4  addi 3, 3, -15932
  01dc5f8  lfs 2, 12(3)
  01dc5fc  fcmpu 0, 1, 2
  01dc600  cror 6, 0, 2
  01dc604  bt 6, 0x1dc610
  01dc608  fmr 1, 2
  01dc60c  b 0x1dc62c
  01dc610  lis 3, 30
  01dc614  addi 3, 3, -15932
  01dc618  lfs 2, 16(3)
  01dc61c  fcmpu 0, 1, 2
  01dc620  cror 6, 1, 2
  01dc624  bt 6, 0x1dc62c
  01dc628  fmr 1, 2
  01dc62c  lis 3, 30
  01dc630  addi 3, 3, -15932
  01dc634  lfs 2, 20(3)
  01dc638  fcmpu 0, 26, 2
  01dc63c  cror 6, 0, 2
  01dc640  bt 6, 0x1dc64c
  01dc644  fmr 26, 2
  01dc648  b 0x1dc668
  01dc64c  lis 3, 30
  01dc650  addi 3, 3, -15932
  01dc654  lfs 2, 24(3)
  01dc658  fcmpu 0, 26, 2
  01dc65c  cror 6, 1, 2
  01dc660  bt 6, 0x1dc668
  01dc664  fmr 26, 2
  01dc668  lis 3, 30
  01dc66c  addi 3, 3, -15932
  01dc670  lfs 2, 28(3)
  01dc674  fmuls 2, 1, 2
  01dc678  stfs 2, 456(30)
  01dc67c  lfs 2, 32(3)
  01dc680  stfs 26, 452(30)
  01dc684  fmuls 1, 1, 2
  01dc688  stfs 1, 584(30)
  01dc68c  lis 3, 151
  01dc690  lbz 3, -16268(3)
  01dc694  cmpwi 3, 0
  01dc698  bt 2, 0x1dc6a4
  01dc69c  lis 3, 16432
  01dc6a0  stw 3, 464(30)
  01dc6a4  lis 3, 30
  01dc6a8  lis 29, 114
  01dc6ac  addi 3, 3, -15932
  01dc6b0  addic 4, 30, 352
  01dc6b4  li 5, 0
  01dc6b8  lfs 31, 36(3)
  01dc6bc  lfs 30, 32(3)
  01dc6c0  lfs 3, -3060(29)
  01dc6c4  ori 3, 31, 0
  01dc6c8  fmuls 2, 3, 30
  01dc6cc  fmuls 1, 3, 31
  01dc6d0  bl 0x1167c8
  01dc6d4  nop
  01dc6d8  lfs 2, -3060(29)
  01dc6dc  addic 4, 30, 480
  01dc6e0  fmuls 1, 2, 31
  01dc6e4  ori 3, 31, 0
  01dc6e8  fmuls 2, 2, 30
  01dc6ec  li 5, 1
  01dc6f0  bl 0x1167c8
  01dc6f4  nop
  01dc6f8  ld 0, 288(1)
  01dc6fc  mtlr 0
  01dc700  lfd 26, 224(1)
  01dc704  lfd 27, 232(1)
  01dc708  lfd 28, 240(1)
  01dc70c  lfd 29, 248(1)
  01dc710  lfd 30, 256(1)
  01dc714  lfd 31, 264(1)
  01dc718  ld 29, 200(1)
  01dc71c  ld 30, 208(1)
  01dc720  ld 31, 216(1)
  01dc724  addi 1, 1, 272
  01dc728  blr

M1140_TransitionAnim:   # 0x1dc730, 0x53c bytes
  01dc730  stdu 1, -144(1)
  01dc734  mflr 0
  01dc738  std 0, 160(1)
  01dc73c  std 31, 136(1)
  01dc740  ori 31, 3, 0
  01dc744  clrlwi 5, 4, 24
  01dc748  ori 3, 4, 0
  01dc74c  cmpwi 5, 8
  01dc750  std 30, 128(1)
  01dc754  cmpwi 1, 5, 3
  01dc758  lwz 30, 120(31)
  01dc75c  cmpwi 6, 5, 1
  01dc760  stb 4, 32(31)
  01dc764  cmpwi 7, 5, 0
  01dc768  lbz 4, 83(31)
  01dc76c  bt 1, 0x1dc7ac
  01dc770  bt 5, 0x1dc78c
  01dc774  bt 25, 0x1dc780
  01dc778  bf 29, 0x1dcc54
  01dc77c  b 0x1dc7f4
  01dc780  cmpwi 5, 2
  01dc784  bf 1, 0x1dcc54
  01dc788  b 0x1dc7f4
  01dc78c  cmpwi 5, 6
  01dc790  bt 1, 0x1dc7a0
  01dc794  cmpwi 5, 4
  01dc798  bf 1, 0x1dc87c
  01dc79c  b 0x1dc8dc
  01dc7a0  cmpwi 5, 7
  01dc7a4  bf 1, 0x1dc998
  01dc7a8  b 0x1dc9f4
  01dc7ac  cmpwi 5, 13
  01dc7b0  bt 1, 0x1dc7d4
  01dc7b4  cmpwi 5, 10
  01dc7b8  bt 1, 0x1dc7c8
  01dc7bc  cmpwi 5, 9
  01dc7c0  bf 1, 0x1dcaf8
  01dc7c4  b 0x1dcb54
  01dc7c8  cmpwi 5, 12
  01dc7cc  bf 1, 0x1dc7f4
  01dc7d0  b 0x1dcc54
  01dc7d4  cmpwi 5, 15
  01dc7d8  bt 1, 0x1dc7e8
  01dc7dc  cmpwi 5, 14
  01dc7e0  bf 1, 0x1dc7f4
  01dc7e4  b 0x1dcc54
  01dc7e8  cmpwi 5, 16
  01dc7ec  bf 1, 0x1dc93c
  01dc7f0  b 0x1dcc54
  01dc7f4  cmpwi 4, 0
  01dc7f8  bt 2, 0x1dc83c
  01dc7fc  lis 3, 30
  01dc800  lis 4, 114
  01dc804  addi 3, 3, -14548
  01dc808  li 5, 0
  01dc80c  lfs 1, 0(3)
  01dc810  lfs 2, -3056(4)
  01dc814  ori 3, 31, 0
  01dc818  li 4, 0
  01dc81c  fmuls 1, 2, 1
  01dc820  fctiwz 1, 1
  01dc824  stfd 1, 112(1)
  01dc828  lwz 6, 116(1)
  01dc82c  extsw 6, 6
  01dc830  bl 0xfddc0
  01dc834  nop
  01dc838  lbz 3, 32(31)
  01dc83c  clrlwi 3, 3, 24
  01dc840  cmpwi 3, 14
  01dc844  bf 2, 0x1dc850
  01dc848  lis 3, 16672
  01dc84c  stw 3, 44(30)
  01dc850  li 3, 0
  01dc854  stw 3, 316(30)
  01dc858  stw 3, 312(30)
  01dc85c  stw 3, 308(30)
  01dc860  stw 3, 304(30)
  01dc864  lbz 3, 32(31)
  01dc868  cmpwi 3, 14
  01dc86c  bf 2, 0x1dcc54
  01dc870  li 3, 2
  01dc874  sth 3, 86(30)
  01dc878  b 0x1dcc54
  01dc87c  cmpwi 4, 2
  01dc880  bt 2, 0x1dc8c0
  01dc884  lis 3, 30
  01dc888  lis 4, 114
  01dc88c  addi 3, 3, -14548
  01dc890  li 5, 0
  01dc894  lfs 1, 0(3)
  01dc898  lfs 2, -3056(4)
  01dc89c  ori 3, 31, 0
  01dc8a0  li 4, 2
  01dc8a4  fmuls 1, 2, 1
  01dc8a8  fctiwz 1, 1
  01dc8ac  stfd 1, 112(1)
  01dc8b0  lwz 6, 116(1)
  01dc8b4  extsw 6, 6
  01dc8b8  bl 0xfddc0
  01dc8bc  nop
  01dc8c0  lis 3, 118
  01dc8c4  lis 4, 114
  01dc8c8  lfs 1, 19312(3)
  01dc8cc  lfs 2, -3052(4)
  01dc8d0  fmuls 1, 1, 2
  01dc8d4  stfs 1, 340(30)
  01dc8d8  b 0x1dcc54
  01dc8dc  cmpwi 4, 3
  01dc8e0  bt 2, 0x1dc920
  01dc8e4  lis 3, 30
  01dc8e8  lis 4, 114
  01dc8ec  addi 3, 3, -14548
  01dc8f0  li 5, 0
  01dc8f4  lfs 1, 0(3)
  01dc8f8  lfs 2, -3056(4)
  01dc8fc  ori 3, 31, 0
  01dc900  li 4, 3
  01dc904  fmuls 1, 2, 1
  01dc908  fctiwz 1, 1
  01dc90c  stfd 1, 112(1)
  01dc910  lwz 6, 116(1)
  01dc914  extsw 6, 6
  01dc918  bl 0xfddc0
  01dc91c  nop
  01dc920  lis 3, 118
  01dc924  lis 4, 114
  01dc928  lfs 1, 19316(3)
  01dc92c  lfs 2, -3052(4)
  01dc930  fmuls 1, 1, 2
  01dc934  stfs 1, 340(30)
  01dc938  b 0x1dcc54
  01dc93c  cmpwi 4, 0
  01dc940  bt 2, 0x1dc980
  01dc944  lis 3, 30
  01dc948  lis 4, 114
  01dc94c  addi 3, 3, -14548
  01dc950  li 5, 0
  01dc954  lfs 1, 0(3)
  01dc958  lfs 2, -3056(4)
  01dc95c  ori 3, 31, 0
  01dc960  li 4, 0
  01dc964  fmuls 1, 2, 1
  01dc968  fctiwz 1, 1
  01dc96c  stfd 1, 112(1)
  01dc970  lwz 6, 116(1)
  01dc974  extsw 6, 6
  01dc978  bl 0xfddc0
  01dc97c  nop
  01dc980  li 3, 0
  01dc984  stw 3, 316(30)
  01dc988  stw 3, 312(30)
  01dc98c  stw 3, 308(30)
  01dc990  stw 3, 304(30)
  01dc994  b 0x1dcc54
  01dc998  cmpwi 4, 4
  01dc99c  bt 2, 0x1dc9dc
  01dc9a0  lis 3, 30
  01dc9a4  lis 4, 114
  01dc9a8  addi 3, 3, -14548
  01dc9ac  li 5, 0
  01dc9b0  lfs 1, 0(3)
  01dc9b4  lfs 2, -3056(4)
  01dc9b8  ori 3, 31, 0
  01dc9bc  fmuls 1, 2, 1
  01dc9c0  li 4, 4
  01dc9c4  fctiwz 1, 1
  01dc9c8  stfd 1, 112(1)
  01dc9cc  lwz 6, 116(1)
  01dc9d0  extsw 6, 6
  01dc9d4  bl 0xfddc0
  01dc9d8  nop
  01dc9dc  li 3, 0
  01dc9e0  stw 3, 316(30)
  01dc9e4  stw 3, 312(30)
  01dc9e8  stw 3, 308(30)
  01dc9ec  stw 3, 304(30)
  01dc9f0  b 0x1dcc54
  01dc9f4  cmpwi 4, 3
  01dc9f8  bt 2, 0x1dca38
  01dc9fc  lis 3, 30
  01dca00  lis 4, 114
  01dca04  addi 3, 3, -14548
  01dca08  li 5, 0
  01dca0c  lfs 1, 0(3)
  01dca10  lfs 2, -3056(4)
  01dca14  ori 3, 31, 0
  01dca18  li 4, 3
  01dca1c  fmuls 1, 2, 1
  01dca20  fctiwz 1, 1
  01dca24  stfd 1, 112(1)
  01dca28  lwz 6, 116(1)
  01dca2c  extsw 6, 6
  01dca30  bl 0xfddc0
  01dca34  nop
  01dca38  lwz 4, 344(30)
  01dca3c  lis 3, 164
  01dca40  cntlzw 4, 4
  01dca44  rlwinm 4, 4, 27, 31, 31
  01dca48  lwz 3, -28512(3)
  01dca4c  xori 4, 4, 1
  01dca50  lis 5, 118
  01dca54  slwi 4, 4, 2
  01dca58  addc 4, 30, 4
  01dca5c  clrldi 4, 4, 32
  01dca60  lwz 4, 240(4)
  01dca64  slwi 4, 4, 8
  01dca68  addc 3, 3, 4
  01dca6c  addic 4, 5, 19328
  01dca70  clrldi 3, 3, 32
  01dca74  lfs 1, 16(3)
  01dca78  stfs 1, 288(30)
  01dca7c  lfs 2, 20(3)
  01dca80  stfs 2, 292(30)
  01dca84  lfs 3, 24(3)
  01dca88  stfs 3, 296(30)
  01dca8c  lfs 4, 28(3)
  01dca90  stfs 4, 300(30)
  01dca94  lfs 4, 192(3)
  01dca98  lfs 5, 19328(5)
  01dca9c  lfs 6, 196(3)
  01dcaa0  fmadds 1, 4, 5, 1
  01dcaa4  lfs 4, 200(3)
  01dcaa8  fmadds 2, 6, 5, 2
  01dcaac  fmadds 3, 4, 5, 3
  01dcab0  lfs 6, 224(3)
  01dcab4  lfs 4, 8(4)
  01dcab8  lfs 5, 228(3)
  01dcabc  lfs 7, 232(3)
  01dcac0  lfs 8, 208(3)
  01dcac4  lfs 9, 4(4)
  01dcac8  fmadds 1, 6, 4, 1
  01dcacc  lfs 10, 212(3)
  01dcad0  lfs 11, 216(3)
  01dcad4  fmadds 2, 5, 4, 2
  01dcad8  fmadds 3, 7, 4, 3
  01dcadc  fmadds 1, 8, 9, 1
  01dcae0  fmadds 2, 10, 9, 2
  01dcae4  fmadds 3, 11, 9, 3
  01dcae8  stfs 1, 288(30)
  01dcaec  stfs 2, 292(30)
  01dcaf0  stfs 3, 296(30)
  01dcaf4  b 0x1dcc54
  01dcaf8  cmpwi 4, 0
  01dcafc  bt 2, 0x1dcb3c
  01dcb00  lis 3, 30
  01dcb04  lis 4, 114
  01dcb08  addi 3, 3, -14548
  01dcb0c  li 5, 0
  01dcb10  lfs 1, 0(3)
  01dcb14  lfs 2, -3056(4)
  01dcb18  ori 3, 31, 0
  01dcb1c  fmuls 1, 2, 1
  01dcb20  li 4, 0
  01dcb24  fctiwz 1, 1
  01dcb28  stfd 1, 112(1)
  01dcb2c  lwz 6, 116(1)
  01dcb30  extsw 6, 6
  01dcb34  bl 0xfddc0
  01dcb38  nop
  01dcb3c  li 3, 0
  01dcb40  stw 3, 316(30)
  01dcb44  stw 3, 312(30)
  01dcb48  stw 3, 308(30)
  01dcb4c  stw 3, 304(30)
  01dcb50  b 0x1dcc54
  01dcb54  cmpwi 4, 3
  01dcb58  bt 2, 0x1dcb98
  01dcb5c  lis 3, 30
  01dcb60  lis 4, 114
  01dcb64  addi 3, 3, -14548
  01dcb68  li 5, 0
  01dcb6c  lfs 1, 0(3)
  01dcb70  lfs 2, -3056(4)
  01dcb74  ori 3, 31, 0
  01dcb78  li 4, 3
  01dcb7c  fmuls 1, 2, 1
  01dcb80  fctiwz 1, 1
  01dcb84  stfd 1, 112(1)
  01dcb88  lwz 6, 116(1)
  01dcb8c  extsw 6, 6
  01dcb90  bl 0xfddc0
  01dcb94  nop
  01dcb98  lwz 4, 344(30)
  01dcb9c  lis 3, 164
  01dcba0  cntlzw 4, 4
  01dcba4  rlwinm 4, 4, 27, 31, 31
  01dcba8  lwz 3, -28512(3)
  01dcbac  xori 4, 4, 1
  01dcbb0  lis 5, 118
  01dcbb4  slwi 4, 4, 2
  01dcbb8  addc 4, 30, 4
  01dcbbc  clrldi 4, 4, 32
  01dcbc0  lwz 4, 240(4)
  01dcbc4  slwi 4, 4, 8
  01dcbc8  addc 3, 3, 4
  01dcbcc  addic 4, 5, 19344
  01dcbd0  clrldi 3, 3, 32
  01dcbd4  lfs 1, 16(3)
  01dcbd8  stfs 1, 288(30)
  01dcbdc  lfs 2, 20(3)
  01dcbe0  stfs 2, 292(30)
  01dcbe4  lfs 3, 24(3)
  01dcbe8  stfs 3, 296(30)
  01dcbec  lfs 4, 28(3)
  01dcbf0  stfs 4, 300(30)
  01dcbf4  lfs 4, 192(3)
  01dcbf8  lfs 5, 19344(5)
  01dcbfc  lfs 6, 196(3)
  01dcc00  fmadds 1, 4, 5, 1
  01dcc04  lfs 4, 200(3)
  01dcc08  fmadds 2, 6, 5, 2
  01dcc0c  fmadds 3, 4, 5, 3
  01dcc10  lfs 6, 224(3)
  01dcc14  lfs 4, 8(4)
  01dcc18  lfs 5, 228(3)
  01dcc1c  lfs 7, 232(3)
  01dcc20  lfs 8, 208(3)
  01dcc24  lfs 9, 4(4)
  01dcc28  fmadds 1, 6, 4, 1
  01dcc2c  lfs 10, 212(3)
  01dcc30  lfs 11, 216(3)
  01dcc34  fmadds 2, 5, 4, 2
  01dcc38  fmadds 3, 7, 4, 3
  01dcc3c  fmadds 1, 8, 9, 1
  01dcc40  fmadds 2, 10, 9, 2
  01dcc44  fmadds 3, 11, 9, 3
  01dcc48  stfs 1, 288(30)
  01dcc4c  stfs 2, 292(30)
  01dcc50  stfs 3, 296(30)
  01dcc54  ld 0, 160(1)
  01dcc58  mtlr 0
  01dcc5c  ld 30, 128(1)
  01dcc60  ld 31, 136(1)
  01dcc64  addi 1, 1, 144
  01dcc68  blr

M1140_001dcc70:   # 0x1dcc70, 0x164 bytes
  01dcc70  stdu 1, -176(1)
  01dcc74  mflr 0
  01dcc78  std 0, 192(1)
  01dcc7c  std 30, 160(1)
  01dcc80  ori 30, 3, 0
  01dcc84  lis 3, 165
  01dcc88  std 31, 168(1)
  01dcc8c  ori 31, 4, 0
  01dcc90  std 28, 144(1)
  01dcc94  addic 5, 3, 7136
  01dcc98  lwz 28, 120(30)
  01dcc9c  lwz 3, 344(28)
  01dcca0  slwi 3, 3, 2
  01dcca4  addc 3, 28, 3
  01dcca8  clrldi 4, 3, 32
  01dccac  ori 3, 31, 0
  01dccb0  lwz 4, 96(4)
  01dccb4  slwi 4, 4, 2
  01dccb8  extsw 4, 4
  01dccbc  lwzx 5, 5, 4
  01dccc0  addic 4, 5, 16
  01dccc4  lwz 5, 0(5)
  01dccc8  std 29, 152(1)
  01dcccc  extsw 5, 5
  01dccd0  bl 0x104e44
  01dccd4  nop
  01dccd8  cmpwi 3, 0
  01dccdc  bf 2, 0x1dcce8
  01dcce0  li 3, 0
  01dcce4  b 0x1dcdb4
  01dcce8  lwz 4, 344(28)
  01dccec  li 3, 1
  01dccf0  slwi 4, 4, 2
  01dccf4  ori 29, 3, 0
  01dccf8  addc 4, 28, 4
  01dccfc  clrldi 4, 4, 32
  01dcd00  lwz 4, 96(4)
  01dcd04  stw 4, 112(1)
  01dcd08  lwz 4, 344(28)
  01dcd0c  cmpwi 4, 2
  01dcd10  cmpwi 1, 4, 3
  01dcd14  cmpwi 6, 4, 1
  01dcd18  bt 1, 0x1dcd24
  01dcd1c  bf 25, 0x1dcd60
  01dcd20  b 0x1dcd2c
  01dcd24  bf 5, 0x1dcd4c
  01dcd28  b 0x1dcd60
  01dcd2c  lwz 4, 128(28)
  01dcd30  li 3, 4
  01dcd34  stw 4, 116(1)
  01dcd38  lwz 4, 132(28)
  01dcd3c  stw 4, 120(1)
  01dcd40  lwz 4, 136(28)
  01dcd44  stw 4, 124(1)
  01dcd48  b 0x1dcd60
  01dcd4c  lwz 4, 128(28)
  01dcd50  li 3, 3
  01dcd54  stw 4, 116(1)
  01dcd58  lwz 4, 132(28)
  01dcd5c  stw 4, 120(1)
  01dcd60  lis 5, 30
  01dcd64  lwz 6, 344(28)
  01dcd68  ori 4, 3, 0
  01dcd6c  addi 5, 5, -13204
  01dcd70  slwi 6, 6, 2
  01dcd74  addic 3, 1, 112
  01dcd78  addc 6, 28, 6
  01dcd7c  addic 7, 30, 16
  01dcd80  lfs 1, 0(5)
  01dcd84  clrldi 5, 6, 32
  01dcd88  addic 9, 28, 288
  01dcd8c  ori 8, 31, 0
  01dcd90  lwz 5, 112(5)
  01dcd94  extsw 5, 5
  01dcd98  bl 0x114d58
  01dcd9c  nop
  01dcda0  cmpwi 3, 0
  01dcda4  bf 2, 0x1dcdb0
  01dcda8  li 3, 0
  01dcdac  b 0x1dcdb4
  01dcdb0  ori 3, 29, 0
  01dcdb4  ld 0, 192(1)
  01dcdb8  mtlr 0
  01dcdbc  ld 28, 144(1)
  01dcdc0  ld 29, 152(1)
  01dcdc4  ld 30, 160(1)
  01dcdc8  ld 31, 168(1)
  01dcdcc  addi 1, 1, 176
  01dcdd0  blr

M1140_001dcde8:   # 0x1dcde8, 0x254 bytes
  01dcde8  stdu 1, -208(1)
  01dcdec  mflr 0
  01dcdf0  std 0, 224(1)
  01dcdf4  stfd 31, 200(1)
  01dcdf8  std 26, 152(1)
  01dcdfc  std 28, 168(1)
  01dce00  std 25, 144(1)
  01dce04  li 26, 0
  01dce08  lwz 25, 120(3)
  01dce0c  std 30, 184(1)
  01dce10  std 27, 160(1)
  01dce14  addic 28, 3, 16
  01dce18  ori 27, 26, 0
  01dce1c  std 31, 192(1)
  01dce20  ori 30, 3, 0
  01dce24  std 29, 176(1)
  01dce28  ori 31, 4, 0
  01dce2c  ori 29, 25, 0
  01dce30  ori 3, 28, 0
  01dce34  lwz 4, 248(29)
  01dce38  extsw 4, 4
  01dce3c  bl 0x110b70
  01dce40  nop
  01dce44  cmpwi 3, 0
  01dce48  bt 2, 0x1dcea0
  01dce4c  lfs 2, 4(31)
  01dce50  lfs 7, 20(30)
  01dce54  lfs 3, 0(31)
  01dce58  fsubs 2, 2, 7
  01dce5c  lfs 8, 16(30)
  01dce60  lfs 1, 8(31)
  01dce64  fsubs 3, 3, 8
  01dce68  lfs 6, 24(30)
  01dce6c  fsubs 1, 1, 6
  01dce70  lis 3, 30
  01dce74  fmuls 4, 2, 2
  01dce78  addi 3, 3, -12844
  01dce7c  fmadds 4, 3, 3, 4
  01dce80  fmadds 9, 1, 1, 4
  01dce84  lfs 4, 12(31)
  01dce88  stfs 4, 124(1)
  01dce8c  lfs 5, 0(3)
  01dce90  fsqrts 9, 9
  01dce94  fcmpu 0, 9, 5
  01dce98  bt 1, 0x1dceb4
  01dce9c  b 0x1dcee8
  01dcea0  addic 26, 26, 1
  01dcea4  addic 29, 29, 4
  01dcea8  cmpwi 26, 2
  01dceac  bt 0, 0x1dce30
  01dceb0  b 0x1dd008
  01dceb4  lis 3, 30
  01dceb8  addi 3, 3, -12844
  01dcebc  lfs 4, 4(3)
  01dcec0  fcmpu 0, 9, 4
  01dcec4  bf 2, 0x1dced8
  01dcec8  fmr 1, 4
  01dcecc  fmr 2, 1
  01dced0  fmr 3, 2
  01dced4  b 0x1dcee8
  01dced8  fdivs 4, 5, 9
  01dcedc  fmuls 3, 3, 4
  01dcee0  fmuls 2, 2, 4
  01dcee4  fmuls 1, 1, 4
  01dcee8  fadds 3, 3, 8
  01dceec  lis 3, 165
  01dcef0  fadds 2, 2, 7
  01dcef4  fadds 1, 1, 6
  01dcef8  lwz 4, 344(25)
  01dcefc  addic 5, 3, 7136
  01dcf00  slwi 3, 4, 2
  01dcf04  addc 3, 25, 3
  01dcf08  clrldi 4, 3, 32
  01dcf0c  addic 3, 1, 112
  01dcf10  stfs 3, 112(1)
  01dcf14  stfs 2, 116(1)
  01dcf18  stfs 1, 120(1)
  01dcf1c  lwz 4, 96(4)
  01dcf20  slwi 4, 4, 2
  01dcf24  extsw 4, 4
  01dcf28  lwzx 5, 5, 4
  01dcf2c  addic 4, 5, 16
  01dcf30  lwz 5, 0(5)
  01dcf34  extsw 5, 5
  01dcf38  bl 0x104e44
  01dcf3c  nop
  01dcf40  cmpwi 3, 0
  01dcf44  bt 2, 0x1dd008
  01dcf48  lis 3, 30
  01dcf4c  lfs 1, 120(1)
  01dcf50  addi 29, 3, -12844
  01dcf54  addic 3, 1, 112
  01dcf58  lfs 2, 8(29)
  01dcf5c  fadds 1, 1, 2
  01dcf60  stfs 1, 120(1)
  01dcf64  bl 0xffc18
  01dcf68  nop
  01dcf6c  fmr 31, 1
  01dcf70  lfs 1, 24(30)
  01dcf74  lfs 2, 12(29)
  01dcf78  fsubs 3, 31, 1
  01dcf7c  fabs 3, 3
  01dcf80  fcmpu 0, 3, 2
  01dcf84  cror 6, 0, 2
  01dcf88  bt 6, 0x1dd008
  01dcf8c  lis 3, 30
  01dcf90  lfs 2, 16(30)
  01dcf94  addic 4, 1, 112
  01dcf98  addi 3, 3, -12844
  01dcf9c  lfs 3, 20(30)
  01dcfa0  stfs 2, 128(1)
  01dcfa4  li 5, 2
  01dcfa8  lfs 2, 28(30)
  01dcfac  ori 6, 30, 0
  01dcfb0  stfs 3, 132(1)
  01dcfb4  li 7, 0
  01dcfb8  stfs 2, 140(1)
  01dcfbc  lfs 2, 16(3)
  01dcfc0  addic 3, 1, 128
  01dcfc4  fadds 1, 1, 2
  01dcfc8  fadds 2, 31, 2
  01dcfcc  stfs 1, 136(1)
  01dcfd0  stfs 2, 120(1)
  01dcfd4  bl 0x57820
  01dcfd8  nop
  01dcfdc  cmpwi 3, 0
  01dcfe0  bt 2, 0x1dd008
  01dcfe4  lfs 1, 112(1)
  01dcfe8  li 3, 1
  01dcfec  stfs 1, 0(31)
  01dcff0  lfs 1, 116(1)
  01dcff4  stfs 31, 8(31)
  01dcff8  stfs 1, 4(31)
  01dcffc  lfs 1, 124(1)
  01dd000  stfs 1, 12(31)
  01dd004  b 0x1dd00c
  01dd008  ori 3, 27, 0
  01dd00c  ld 0, 224(1)
  01dd010  mtlr 0
  01dd014  lfd 31, 200(1)
  01dd018  ld 25, 144(1)
  01dd01c  ld 26, 152(1)
  01dd020  ld 27, 160(1)
  01dd024  ld 28, 168(1)
  01dd028  ld 29, 176(1)
  01dd02c  ld 30, 184(1)
  01dd030  ld 31, 192(1)
  01dd034  addi 1, 1, 208
  01dd038  blr

M1140_CloseToPuffoid:   # 0x1dd040, 0x1a0 bytes
  01dd040  stdu 1, -192(1)
  01dd044  mflr 0
  01dd048  std 0, 208(1)
  01dd04c  stfd 31, 184(1)
  01dd050  std 27, 144(1)
  01dd054  lis 4, 30
  01dd058  std 25, 128(1)
  01dd05c  li 27, 0
  01dd060  lwz 25, 120(3)
  01dd064  std 30, 168(1)
  01dd068  std 26, 136(1)
  01dd06c  addi 4, 4, -12228
  01dd070  ori 26, 27, 0
  01dd074  std 31, 176(1)
  01dd078  lis 30, 165
  01dd07c  std 29, 160(1)
  01dd080  ori 31, 3, 0
  01dd084  ori 29, 26, 0
  01dd088  std 28, 152(1)
  01dd08c  std 24, 120(1)
  01dd090  addic 30, 30, -28284
  01dd094  lfs 31, 0(4)
  01dd098  lwz 3, 344(25)
  01dd09c  slwi 3, 3, 4
  01dd0a0  addc 3, 25, 3
  01dd0a4  addc 3, 3, 29
  01dd0a8  clrldi 3, 3, 32
  01dd0ac  lwz 28, 144(3)
  01dd0b0  extsh 28, 28
  01dd0b4  cmpwi 28, 0
  01dd0b8  bt 0, 0x1dd1a0
  01dd0bc  lis 3, 165
  01dd0c0  lwz 3, -28288(3)
  01dd0c4  cmpw 28, 3
  01dd0c8  bt 1, 0x1dd1a0
  01dd0cc  sldi 3, 28, 2
  01dd0d0  lwzx 28, 30, 3
  01dd0d4  cmpwi 28, 0
  01dd0d8  bt 2, 0x1dd190
  01dd0dc  lis 3, 164
  01dd0e0  lhz 24, 0(28)
  01dd0e4  rlwinm 24, 24, 8, 9, 23
  01dd0e8  lwz 3, -28512(3)
  01dd0ec  addc 4, 3, 24
  01dd0f0  clrldi 4, 4, 32
  01dd0f4  lbz 5, 32(4)
  01dd0f8  cmpwi 5, 128
  01dd0fc  bf 0, 0x1dd17c
  01dd100  lhz 5, 166(4)
  01dd104  cmpwi 5, 1246
  01dd108  bf 2, 0x1dd128
  01dd10c  ori 3, 4, 0
  01dd110  bl 0x227994
  01dd114  nop
  01dd118  cmpwi 3, 0
  01dd11c  bf 2, 0x1dd17c
  01dd120  lis 3, 164
  01dd124  lwz 3, -28512(3)
  01dd128  addc 3, 3, 24
  01dd12c  lfs 1, 20(31)
  01dd130  clrldi 3, 3, 32
  01dd134  lfs 2, 16(31)
  01dd138  lfs 3, 20(3)
  01dd13c  lfs 4, 16(3)
  01dd140  fsubs 1, 1, 3
  01dd144  fsubs 2, 2, 4
  01dd148  lfs 3, 24(31)
  01dd14c  lfs 4, 24(3)
  01dd150  fsubs 3, 3, 4
  01dd154  li 26, 1
  01dd158  fmuls 1, 1, 1
  01dd15c  fmadds 1, 2, 2, 1
  01dd160  fmadds 1, 3, 3, 1
  01dd164  fsqrts 1, 1
  01dd168  fcmpu 0, 1, 31
  01dd16c  cror 6, 1, 2
  01dd170  bt 6, 0x1dd17c
  01dd174  li 3, 2
  01dd178  b 0x1dd1ac
  01dd17c  lhz 3, 0(28)
  01dd180  addic 28, 28, 2
  01dd184  extsh 3, 3
  01dd188  cmpwi 3, 0
  01dd18c  bf 0, 0x1dd0dc
  01dd190  addic 27, 27, 1
  01dd194  addic 29, 29, 4
  01dd198  cmpwi 27, 4
  01dd19c  bt 0, 0x1dd098
  01dd1a0  cntlzw 3, 26
  01dd1a4  rlwinm 3, 3, 27, 31, 31
  01dd1a8  xori 3, 3, 1
  01dd1ac  ld 0, 208(1)
  01dd1b0  mtlr 0
  01dd1b4  lfd 31, 184(1)
  01dd1b8  ld 24, 120(1)
  01dd1bc  ld 25, 128(1)
  01dd1c0  ld 26, 136(1)
  01dd1c4  ld 27, 144(1)
  01dd1c8  ld 28, 152(1)
  01dd1cc  ld 29, 160(1)
  01dd1d0  ld 30, 168(1)
  01dd1d4  ld 31, 176(1)
  01dd1d8  addi 1, 1, 192
  01dd1dc  blr

M1140_001dd210:   # 0x1dd210, 0x123c bytes
  01dd210  stdu 1, -208(1)
  01dd214  mflr 0
  01dd218  std 0, 224(1)
  01dd21c  stfd 25, 152(1)
  01dd220  stfd 26, 160(1)
  01dd224  stfd 27, 168(1)
  01dd228  stfd 28, 176(1)
  01dd22c  stfd 29, 184(1)
  01dd230  stfd 30, 192(1)
  01dd234  stfd 31, 200(1)
  01dd238  std 31, 144(1)
  01dd23c  std 30, 136(1)
  01dd240  ori 31, 3, 0
  01dd244  std 29, 128(1)
  01dd248  lwz 30, 120(31)
  01dd24c  bl 0x1dd040
  01dd250  ori 29, 3, 0
  01dd254  lbz 3, 32(31)
  01dd258  cmpwi 3, 3
  01dd25c  bt 2, 0x1dd270
  01dd260  cmpwi 3, 4
  01dd264  bt 2, 0x1dd270
  01dd268  cmpwi 3, 5
  01dd26c  bf 2, 0x1dd288
  01dd270  cmpwi 29, 0
  01dd274  bf 2, 0x1dd288
  01dd278  ori 3, 31, 0
  01dd27c  li 4, 6
  01dd280  bl 0x1dc730
  01dd284  b 0x1de414
  01dd288  cmpwi 3, 4
  01dd28c  bt 2, 0x1dd2a0
  01dd290  cmpwi 3, 5
  01dd294  bt 2, 0x1dd2a0
  01dd298  cmpwi 3, 6
  01dd29c  bf 2, 0x1dd380
  01dd2a0  lfs 3, 196(31)
  01dd2a4  lfs 4, 192(31)
  01dd2a8  fmuls 2, 3, 3
  01dd2ac  lfs 1, 200(31)
  01dd2b0  lis 3, 30
  01dd2b4  addi 3, 3, -11808
  01dd2b8  fmadds 2, 4, 4, 2
  01dd2bc  fmadds 5, 1, 1, 2
  01dd2c0  lfs 2, 0(3)
  01dd2c4  fsqrts 5, 5
  01dd2c8  fcmpu 0, 5, 2
  01dd2cc  bf 2, 0x1dd2e0
  01dd2d0  fmr 3, 2
  01dd2d4  lfs 1, 204(31)
  01dd2d8  fmr 4, 3
  01dd2dc  b 0x1dd300
  01dd2e0  lis 3, 30
  01dd2e4  addi 3, 3, -11808
  01dd2e8  lfs 2, 4(3)
  01dd2ec  fdivs 5, 2, 5
  01dd2f0  fmuls 2, 1, 5
  01dd2f4  lfs 1, 204(31)
  01dd2f8  fmuls 4, 4, 5
  01dd2fc  fmuls 3, 3, 5
  01dd300  lfs 5, 16(31)
  01dd304  lfs 6, 20(31)
  01dd308  ori 3, 31, 0
  01dd30c  fadds 4, 4, 5
  01dd310  addic 4, 1, 112
  01dd314  lfs 5, 24(31)
  01dd318  fadds 3, 3, 6
  01dd31c  stfs 1, 124(1)
  01dd320  fadds 1, 2, 5
  01dd324  stfs 4, 112(1)
  01dd328  stfs 3, 116(1)
  01dd32c  stfs 1, 120(1)
  01dd330  bl 0x1dcde8
  01dd334  cmpwi 3, 0
  01dd338  bt 2, 0x1dd380
  01dd33c  lfs 1, 112(1)
  01dd340  addic 3, 30, 288
  01dd344  stfs 1, 288(30)
  01dd348  lfs 1, 116(1)
  01dd34c  stfs 1, 292(30)
  01dd350  lfs 1, 120(1)
  01dd354  stfs 1, 296(30)
  01dd358  lfs 1, 124(1)
  01dd35c  stfs 1, 300(30)
  01dd360  bl 0xffc18
  01dd364  nop
  01dd368  li 5, 3
  01dd36c  stfs 1, 296(30)
  01dd370  ori 3, 31, 0
  01dd374  li 4, 7
  01dd378  stw 5, 348(30)
  01dd37c  bl 0x1dc730
  01dd380  lbz 3, 32(31)
  01dd384  cmpwi 1, 3, 7
  01dd388  cmpwi 6, 3, 6
  01dd38c  cmpwi 7, 3, 5
  01dd390  bt 5, 0x1dd3cc
  01dd394  bt 6, 0x1de198
  01dd398  bt 26, 0x1ddad0
  01dd39c  bt 30, 0x1dda18
  01dd3a0  cmpwi 3, 4
  01dd3a4  bt 2, 0x1dd960
  01dd3a8  cmpwi 3, 3
  01dd3ac  bt 2, 0x1dd8f0
  01dd3b0  cmpwi 3, 2
  01dd3b4  bt 2, 0x1dd8d0
  01dd3b8  cmpwi 3, 1
  01dd3bc  bt 2, 0x1dd81c
  01dd3c0  cmpwi 3, 0
  01dd3c4  bt 2, 0x1dd410
  01dd3c8  b 0x1de414
  01dd3cc  cmpwi 3, 15
  01dd3d0  bt 2, 0x1de3c8
  01dd3d4  cmpwi 3, 14
  01dd3d8  bt 2, 0x1de344
  01dd3dc  cmpwi 3, 13
  01dd3e0  bt 2, 0x1de158
  01dd3e4  cmpwi 3, 12
  01dd3e8  bt 2, 0x1ddf88
  01dd3ec  cmpwi 3, 11
  01dd3f0  bt 2, 0x1de300
  01dd3f4  cmpwi 3, 10
  01dd3f8  bt 2, 0x1de25c
  01dd3fc  cmpwi 3, 9
  01dd400  bt 2, 0x1de208
  01dd404  cmpwi 3, 8
  01dd408  bt 2, 0x1de1bc
  01dd40c  b 0x1de414
  01dd410  addic 4, 30, 32
  01dd414  ori 3, 31, 0
  01dd418  bl 0x4d3720
  01dd41c  nop
  01dd420  li 5, 255
  01dd424  addic 3, 30, 96
  01dd428  li 4, 1
  01dd42c  stb 5, 48(31)
  01dd430  lwz 5, 112(30)
  01dd434  extsw 5, 5
  01dd438  bl 0x11440c
  01dd43c  nop
  01dd440  lwz 5, 116(30)
  01dd444  addic 3, 30, 100
  01dd448  extsw 5, 5
  01dd44c  li 4, 1
  01dd450  bl 0x11440c
  01dd454  nop
  01dd458  lwz 5, 120(30)
  01dd45c  addic 3, 30, 104
  01dd460  li 4, 1
  01dd464  extsw 5, 5
  01dd468  bl 0x11440c
  01dd46c  nop
  01dd470  li 3, 0
  01dd474  lis 4, 151
  01dd478  addic 4, 4, -16027
  01dd47c  stw 3, 316(30)
  01dd480  stw 3, 312(30)
  01dd484  stw 3, 308(30)
  01dd488  stw 3, 304(30)
  01dd48c  stw 3, 332(30)
  01dd490  stw 3, 328(30)
  01dd494  stw 3, 324(30)
  01dd498  stw 3, 320(30)
  01dd49c  lbz 3, 6(4)
  01dd4a0  cmpwi 3, 0
  01dd4a4  bt 2, 0x1dd540
  01dd4a8  lis 3, 151
  01dd4ac  lis 4, 161
  01dd4b0  lwz 5, 268(30)
  01dd4b4  addic 4, 4, -13692
  01dd4b8  lwz 3, -25488(3)
  01dd4bc  addc 4, 5, 4
  01dd4c0  slwi 3, 3, 4
  01dd4c4  clrldi 4, 4, 32
  01dd4c8  extsw 3, 3
  01dd4cc  lbzx 3, 4, 3
  01dd4d0  cmpwi 3, 255
  01dd4d4  bf 2, 0x1dd540
  01dd4d8  lis 29, 164
  01dd4dc  lwz 3, 240(30)
  01dd4e0  slwi 3, 3, 8
  01dd4e4  lwz 4, -28512(29)
  01dd4e8  addc 3, 4, 3
  01dd4ec  clrldi 3, 3, 32
  01dd4f0  bl 0x1b688c
  01dd4f4  nop
  01dd4f8  lwz 3, 244(30)
  01dd4fc  lwz 4, -28512(29)
  01dd500  slwi 3, 3, 8
  01dd504  addc 3, 4, 3
  01dd508  clrldi 3, 3, 32
  01dd50c  bl 0x1b688c
  01dd510  nop
  01dd514  lwz 3, 260(30)
  01dd518  lwz 4, -28512(29)
  01dd51c  slwi 3, 3, 8
  01dd520  addc 3, 4, 3
  01dd524  clrldi 3, 3, 32
  01dd528  bl 0x401de4
  01dd52c  nop
  01dd530  ori 3, 31, 0
  01dd534  bl 0xefb38
  01dd538  nop
  01dd53c  b 0x1de414
  01dd540  lis 3, 151
  01dd544  lwz 5, 268(30)
  01dd548  lis 4, 161
  01dd54c  addic 4, 4, -13692
  01dd550  lwz 3, -25488(3)
  01dd554  addc 5, 5, 4
  01dd558  slwi 3, 3, 4
  01dd55c  clrldi 5, 5, 32
  01dd560  extsw 3, 3
  01dd564  lbzx 5, 5, 3
  01dd568  cmpwi 5, 255
  01dd56c  bf 2, 0x1dd660
  01dd570  li 3, 3
  01dd574  lis 4, 165
  01dd578  lis 29, 164
  01dd57c  stw 3, 344(30)
  01dd580  lwz 3, 236(30)
  01dd584  lwz 4, 7128(4)
  01dd588  slwi 3, 3, 7
  01dd58c  addc 3, 4, 3
  01dd590  clrldi 3, 3, 32
  01dd594  lfs 1, 48(3)
  01dd598  stfs 1, 16(31)
  01dd59c  lfs 1, 52(3)
  01dd5a0  stfs 1, 20(31)
  01dd5a4  lfs 1, 56(3)
  01dd5a8  lwz 5, 344(30)
  01dd5ac  stfs 1, 24(31)
  01dd5b0  slwi 5, 5, 2
  01dd5b4  lfs 1, 60(3)
  01dd5b8  addc 5, 30, 5
  01dd5bc  stfs 1, 28(31)
  01dd5c0  clrldi 5, 5, 32
  01dd5c4  lwz 3, 224(5)
  01dd5c8  slwi 3, 3, 7
  01dd5cc  addc 3, 4, 3
  01dd5d0  clrldi 4, 3, 32
  01dd5d4  lwz 3, 260(30)
  01dd5d8  lwz 5, -28512(29)
  01dd5dc  slwi 3, 3, 8
  01dd5e0  lfs 1, 112(4)
  01dd5e4  addc 3, 5, 3
  01dd5e8  stfs 1, 64(31)
  01dd5ec  clrldi 3, 3, 32
  01dd5f0  lfs 1, 116(4)
  01dd5f4  stfs 1, 68(31)
  01dd5f8  lfs 1, 120(4)
  01dd5fc  stfs 1, 72(31)
  01dd600  lfs 1, 124(4)
  01dd604  stfs 1, 76(31)
  01dd608  bl 0x401de4
  01dd60c  nop
  01dd610  ori 3, 31, 0
  01dd614  li 4, 14
  01dd618  bl 0x1dc730
  01dd61c  lwz 3, 240(30)
  01dd620  lis 4, 16672
  01dd624  lwz 5, -28512(29)
  01dd628  slwi 3, 3, 8
  01dd62c  addc 3, 5, 3
  01dd630  stw 4, 44(30)
  01dd634  clrldi 3, 3, 32
  01dd638  bl 0x1b688c
  01dd63c  nop
  01dd640  lwz 3, 244(30)
  01dd644  lwz 4, -28512(29)
  01dd648  slwi 3, 3, 8
  01dd64c  addc 3, 4, 3
  01dd650  clrldi 3, 3, 32
  01dd654  bl 0x1b688c
  01dd658  nop
  01dd65c  b 0x1de414
  01dd660  lwz 5, 264(30)
  01dd664  addc 4, 5, 4
  01dd668  clrldi 4, 4, 32
  01dd66c  lbzx 3, 4, 3
  01dd670  cmpwi 3, 255
  01dd674  bf 2, 0x1dd7b0
  01dd678  lis 3, 165
  01dd67c  lwz 5, 228(30)
  01dd680  lis 4, 151
  01dd684  slwi 5, 5, 7
  01dd688  addic 4, 4, -25376
  01dd68c  lwz 3, 7128(3)
  01dd690  addc 3, 3, 5
  01dd694  clrldi 3, 3, 32
  01dd698  lfs 1, 132(4)
  01dd69c  lfs 2, 128(4)
  01dd6a0  lfs 3, 52(3)
  01dd6a4  lfs 4, 48(3)
  01dd6a8  fsubs 1, 1, 3
  01dd6ac  fsubs 2, 2, 4
  01dd6b0  lfs 3, 136(4)
  01dd6b4  lfs 4, 56(3)
  01dd6b8  fsubs 3, 3, 4
  01dd6bc  lis 4, 30
  01dd6c0  fmuls 1, 1, 1
  01dd6c4  addi 4, 4, -11808
  01dd6c8  fmadds 1, 2, 2, 1
  01dd6cc  lfs 2, 8(4)
  01dd6d0  fmadds 1, 3, 3, 1
  01dd6d4  fsqrts 1, 1
  01dd6d8  fcmpu 0, 1, 2
  01dd6dc  cror 6, 1, 2
  01dd6e0  bt 6, 0x1dd7b0
  01dd6e4  li 4, 1
  01dd6e8  lis 29, 165
  01dd6ec  stw 4, 344(30)
  01dd6f0  lfs 1, 48(3)
  01dd6f4  lwz 5, 7128(29)
  01dd6f8  stfs 1, 16(31)
  01dd6fc  lfs 1, 52(3)
  01dd700  li 4, 6
  01dd704  stfs 1, 20(31)
  01dd708  lfs 1, 56(3)
  01dd70c  stfs 1, 24(31)
  01dd710  lfs 1, 60(3)
  01dd714  stfs 1, 28(31)
  01dd718  lwz 6, 344(30)
  01dd71c  slwi 6, 6, 2
  01dd720  ori 3, 31, 0
  01dd724  addc 6, 30, 6
  01dd728  clrldi 6, 6, 32
  01dd72c  lwz 6, 224(6)
  01dd730  slwi 6, 6, 7
  01dd734  addc 5, 5, 6
  01dd738  clrldi 5, 5, 32
  01dd73c  lfs 1, 112(5)
  01dd740  stfs 1, 64(31)
  01dd744  lfs 1, 116(5)
  01dd748  stfs 1, 68(31)
  01dd74c  lfs 1, 120(5)
  01dd750  stfs 1, 72(31)
  01dd754  lfs 1, 124(5)
  01dd758  stfs 1, 76(31)
  01dd75c  bl 0x1dc730
  01dd760  lwz 3, 276(30)
  01dd764  lis 4, 30
  01dd768  lwz 5, 7128(29)
  01dd76c  slwi 3, 3, 7
  01dd770  addi 4, 4, -11808
  01dd774  addc 3, 5, 3
  01dd778  clrldi 3, 3, 32
  01dd77c  lfs 1, 12(4)
  01dd780  lis 4, 164
  01dd784  lfs 2, 56(3)
  01dd788  fsubs 1, 2, 1
  01dd78c  stfs 1, 56(3)
  01dd790  lwz 3, 240(30)
  01dd794  lwz 4, -28512(4)
  01dd798  slwi 3, 3, 8
  01dd79c  addc 3, 4, 3
  01dd7a0  clrldi 3, 3, 32
  01dd7a4  bl 0x1b688c
  01dd7a8  nop
  01dd7ac  b 0x1de414
  01dd7b0  lis 3, 165
  01dd7b4  lwz 5, 272(30)
  01dd7b8  lis 4, 30
  01dd7bc  addi 4, 4, -11808
  01dd7c0  lwz 6, 7128(3)
  01dd7c4  slwi 3, 5, 7
  01dd7c8  addc 3, 6, 3
  01dd7cc  lfs 1, 12(4)
  01dd7d0  clrldi 5, 3, 32
  01dd7d4  li 7, 0
  01dd7d8  lis 8, 16544
  01dd7dc  ori 3, 31, 0
  01dd7e0  lfs 2, 56(5)
  01dd7e4  li 4, 1
  01dd7e8  fsubs 2, 2, 1
  01dd7ec  stfs 2, 56(5)
  01dd7f0  lwz 5, 276(30)
  01dd7f4  slwi 5, 5, 7
  01dd7f8  addc 5, 6, 5
  01dd7fc  clrldi 5, 5, 32
  01dd800  lfs 2, 56(5)
  01dd804  fsubs 1, 2, 1
  01dd808  stfs 1, 56(5)
  01dd80c  stw 7, 344(30)
  01dd810  stw 8, 44(30)
  01dd814  bl 0x1dc730
  01dd818  b 0x1de414
  01dd81c  lhz 3, 86(30)
  01dd820  cmpwi 3, 0
  01dd824  bf 2, 0x1dd87c
  01dd828  lis 3, 151
  01dd82c  addic 3, 3, -25376
  01dd830  lhz 3, 782(3)
  01dd834  cmpwi 3, 0
  01dd838  bf 2, 0x1de414
  01dd83c  ori 3, 31, 0
  01dd840  addic 4, 30, 32
  01dd844  bl 0x4d3870
  01dd848  nop
  01dd84c  cmpwi 3, 0
  01dd850  bt 2, 0x1de414
  01dd854  lis 3, 30
  01dd858  addi 4, 3, -11808
  01dd85c  ori 3, 31, 0
  01dd860  lfs 1, 16(4)
  01dd864  bl 0x119488
  01dd868  nop
  01dd86c  ori 3, 31, 0
  01dd870  li 4, 2
  01dd874  bl 0x1dc730
  01dd878  b 0x1de414
  01dd87c  lis 3, 151
  01dd880  lfs 1, 20(31)
  01dd884  addic 3, 3, -25376
  01dd888  lfs 2, 16(31)
  01dd88c  lfs 3, 132(3)
  01dd890  lfs 4, 128(3)
  01dd894  fsubs 1, 1, 3
  01dd898  fsubs 2, 2, 4
  01dd89c  lis 3, 30
  01dd8a0  addi 3, 3, -11808
  01dd8a4  fmuls 1, 1, 1
  01dd8a8  fmadds 1, 2, 2, 1
  01dd8ac  lfs 2, 20(3)
  01dd8b0  fsqrts 1, 1
  01dd8b4  fcmpu 0, 1, 2
  01dd8b8  cror 6, 1, 2
  01dd8bc  bt 6, 0x1de414
  01dd8c0  ori 3, 31, 0
  01dd8c4  li 4, 3
  01dd8c8  bl 0x1dc730
  01dd8cc  b 0x1de414
  01dd8d0  lis 3, 161
  01dd8d4  lwz 3, 1800(3)
  01dd8d8  cmpwi 3, 2
  01dd8dc  bt 2, 0x1de414
  01dd8e0  ori 3, 31, 0
  01dd8e4  li 4, 3
  01dd8e8  bl 0x1dc730
  01dd8ec  b 0x1de414
  01dd8f0  lis 3, 151
  01dd8f4  lfs 1, 20(31)
  01dd8f8  lfs 2, 16(31)
  01dd8fc  addic 3, 3, -25376
  01dd900  lis 4, 30
  01dd904  lfs 3, 132(3)
  01dd908  lfs 4, 128(3)
  01dd90c  fsubs 1, 1, 3
  01dd910  fsubs 2, 2, 4
  01dd914  addi 4, 4, -11808
  01dd918  fmuls 1, 1, 1
  01dd91c  fmadds 1, 2, 2, 1
  01dd920  lfs 2, 20(4)
  01dd924  fsqrts 1, 1
  01dd928  fcmpu 0, 1, 2
  01dd92c  cror 6, 0, 2
  01dd930  bt 6, 0x1de414
  01dd934  addic 4, 3, 128
  01dd938  ori 3, 31, 0
  01dd93c  bl 0x1dcc70
  01dd940  cmpwi 3, 0
  01dd944  bt 2, 0x1de414
  01dd948  cmpwi 29, 1
  01dd94c  bf 2, 0x1de414
  01dd950  ori 3, 31, 0
  01dd954  li 4, 4
  01dd958  bl 0x1dc730
  01dd95c  b 0x1de414
  01dd960  lis 30, 151
  01dd964  lfs 1, 20(31)
  01dd968  lfs 2, 16(31)
  01dd96c  addic 30, 30, -25376
  01dd970  lis 3, 30
  01dd974  lfs 3, 132(30)
  01dd978  lfs 4, 128(30)
  01dd97c  fsubs 1, 1, 3
  01dd980  fsubs 2, 2, 4
  01dd984  addi 3, 3, -11808
  01dd988  fmuls 1, 1, 1
  01dd98c  fmadds 1, 2, 2, 1
  01dd990  lfs 2, 4(3)
  01dd994  fsqrts 1, 1
  01dd998  fcmpu 0, 1, 2
  01dd99c  bt 0, 0x1dd9bc
  01dd9a0  ori 3, 31, 0
  01dd9a4  addic 4, 30, 128
  01dd9a8  bl 0x1dcc70
  01dd9ac  cmpwi 3, 0
  01dd9b0  bt 2, 0x1dd9bc
  01dd9b4  cmpwi 29, 2
  01dd9b8  bf 2, 0x1dd9cc
  01dd9bc  ori 3, 31, 0
  01dd9c0  li 4, 3
  01dd9c4  bl 0x1dc730
  01dd9c8  b 0x1de414
  01dd9cc  lfs 1, 20(31)
  01dd9d0  lfs 2, 132(30)
  01dd9d4  lfs 3, 16(31)
  01dd9d8  fsubs 1, 1, 2
  01dd9dc  lfs 2, 128(30)
  01dd9e0  fsubs 2, 3, 2
  01dd9e4  lis 3, 30
  01dd9e8  addi 3, 3, -11808
  01dd9ec  fmuls 1, 1, 1
  01dd9f0  fmadds 1, 2, 2, 1
  01dd9f4  lfs 2, 24(3)
  01dd9f8  fsqrts 1, 1
  01dd9fc  fcmpu 0, 1, 2
  01dda00  cror 6, 0, 2
  01dda04  bt 6, 0x1de414
  01dda08  ori 3, 31, 0
  01dda0c  li 4, 5
  01dda10  bl 0x1dc730
  01dda14  b 0x1de414
  01dda18  lis 30, 151
  01dda1c  lfs 1, 20(31)
  01dda20  addic 30, 30, -25376
  01dda24  lfs 2, 16(31)
  01dda28  lis 3, 30
  01dda2c  lfs 3, 132(30)
  01dda30  lfs 4, 128(30)
  01dda34  fsubs 1, 1, 3
  01dda38  fsubs 2, 2, 4
  01dda3c  addi 3, 3, -11808
  01dda40  fmuls 1, 1, 1
  01dda44  fmadds 1, 2, 2, 1
  01dda48  lfs 2, 4(3)
  01dda4c  fsqrts 1, 1
  01dda50  fcmpu 0, 1, 2
  01dda54  bt 0, 0x1dda74
  01dda58  ori 3, 31, 0
  01dda5c  addic 4, 30, 128
  01dda60  bl 0x1dcc70
  01dda64  cmpwi 3, 0
  01dda68  bt 2, 0x1dda74
  01dda6c  cmpwi 29, 2
  01dda70  bf 2, 0x1dda84
  01dda74  ori 3, 31, 0
  01dda78  li 4, 3
  01dda7c  bl 0x1dc730
  01dda80  b 0x1de414
  01dda84  lfs 1, 20(31)
  01dda88  lfs 2, 132(30)
  01dda8c  lfs 3, 16(31)
  01dda90  fsubs 1, 1, 2
  01dda94  lfs 2, 128(30)
  01dda98  fsubs 2, 3, 2
  01dda9c  lis 3, 30
  01ddaa0  addi 3, 3, -11808
  01ddaa4  fmuls 1, 1, 1
  01ddaa8  fmadds 1, 2, 2, 1
  01ddaac  lfs 2, 28(3)
  01ddab0  fsqrts 1, 1
  01ddab4  fcmpu 0, 1, 2
  01ddab8  cror 6, 1, 2
  01ddabc  bt 6, 0x1de414
  01ddac0  ori 3, 31, 0
  01ddac4  li 4, 4
  01ddac8  bl 0x1dc730
  01ddacc  b 0x1de414
  01ddad0  lwz 4, 344(30)
  01ddad4  lis 29, 165
  01ddad8  ori 3, 31, 0
  01ddadc  slwi 4, 4, 2
  01ddae0  addc 4, 30, 4
  01ddae4  lwz 5, 7128(29)
  01ddae8  clrldi 4, 4, 32
  01ddaec  lwz 4, 224(4)
  01ddaf0  slwi 4, 4, 7
  01ddaf4  addc 4, 5, 4
  01ddaf8  addic 4, 4, 48
  01ddafc  clrldi 4, 4, 32
  01ddb00  bl 0x1dcc70
  01ddb04  lfs 1, 20(31)
  01ddb08  lfs 2, 292(30)
  01ddb0c  lfs 3, 16(31)
  01ddb10  fsubs 1, 1, 2
  01ddb14  lfs 2, 288(30)
  01ddb18  fsubs 2, 3, 2
  01ddb1c  lis 3, 30
  01ddb20  addi 3, 3, -11808
  01ddb24  fmuls 1, 1, 1
  01ddb28  fmadds 1, 2, 2, 1
  01ddb2c  lfs 2, 32(3)
  01ddb30  lwz 3, 7128(29)
  01ddb34  fsqrts 1, 1
  01ddb38  fcmpu 0, 1, 2
  01ddb3c  cror 6, 1, 2
  01ddb40  bt 6, 0x1de414
  01ddb44  lwz 4, 344(30)
  01ddb48  cmpwi 4, 1
  01ddb4c  cmpwi 1, 4, -1
  01ddb50  cmpwi 6, 4, 0
  01ddb54  cmpwi 7, 4, 2
  01ddb58  bt 1, 0x1ddb68
  01ddb5c  bf 5, 0x1de414
  01ddb60  bf 25, 0x1ddb78
  01ddb64  b 0x1ddd48
  01ddb68  bf 29, 0x1ddf40
  01ddb6c  cmpwi 4, 3
  01ddb70  bf 1, 0x1ddf50
  01ddb74  b 0x1de414
  01ddb78  lis 3, 164
  01ddb7c  lwz 4, 240(30)
  01ddb80  slwi 4, 4, 8
  01ddb84  lwz 3, -28512(3)
  01ddb88  addc 3, 3, 4
  01ddb8c  clrldi 5, 3, 32
  01ddb90  lis 3, 239
  01ddb94  lfs 1, 16(5)
  01ddb98  stfs 1, 288(30)
  01ddb9c  lfs 2, 20(5)
  01ddba0  stfs 2, 292(30)
  01ddba4  lfs 3, 24(5)
  01ddba8  stfs 3, 296(30)
  01ddbac  lfs 4, 28(5)
  01ddbb0  stfs 4, 300(30)
  01ddbb4  lfs 4, 196(5)
  01ddbb8  lfs 5, 192(5)
  01ddbbc  fmuls 6, 4, 4
  01ddbc0  lfs 7, 200(5)
  01ddbc4  lfs 8, 10000(3)
  01ddbc8  lis 3, 30
  01ddbcc  addi 3, 3, -11808
  01ddbd0  fmadds 6, 5, 5, 6
  01ddbd4  lfs 9, 0(3)
  01ddbd8  fmadds 6, 7, 7, 6
  01ddbdc  fsqrts 6, 6
  01ddbe0  lis 3, 118
  01ddbe4  lis 6, 118
  01ddbe8  li 7, 8
  01ddbec  li 4, 7
  01ddbf0  fdivs 8, 8, 6
  01ddbf4  fsub 10, 9, 6
  01ddbf8  fsub 11, 9, 6
  01ddbfc  fsub 12, 9, 6
  01ddc00  fsub 13, 6, 9
  01ddc04  fsub 0, 6, 9
  01ddc08  fsub 6, 6, 9
  01ddc0c  fmuls 7, 7, 8
  01ddc10  fmuls 4, 4, 8
  01ddc14  fmuls 5, 5, 8
  01ddc18  fsel 8, 10, 9, 7
  01ddc1c  fsel 10, 11, 9, 4
  01ddc20  fsel 11, 12, 9, 5
  01ddc24  fsel 7, 13, 8, 7
  01ddc28  fsel 4, 0, 10, 4
  01ddc2c  fsel 5, 6, 11, 5
  01ddc30  fadds 3, 3, 7
  01ddc34  fadds 2, 2, 4
  01ddc38  fadds 1, 1, 5
  01ddc3c  stfs 3, 296(30)
  01ddc40  stfs 2, 292(30)
  01ddc44  stfs 1, 288(30)
  01ddc48  lfs 4, 212(5)
  01ddc4c  lfs 5, 208(5)
  01ddc50  fmuls 6, 4, 4
  01ddc54  lfs 7, 216(5)
  01ddc58  lfs 8, 19364(3)
  01ddc5c  fmadds 6, 5, 5, 6
  01ddc60  fmadds 6, 7, 7, 6
  01ddc64  fsqrts 6, 6
  01ddc68  ori 3, 31, 0
  01ddc6c  fdivs 8, 8, 6
  01ddc70  fsub 10, 9, 6
  01ddc74  fsub 11, 9, 6
  01ddc78  fsub 12, 9, 6
  01ddc7c  fsub 13, 6, 9
  01ddc80  fsub 0, 6, 9
  01ddc84  fsub 6, 6, 9
  01ddc88  fmuls 7, 7, 8
  01ddc8c  fmuls 4, 4, 8
  01ddc90  fmuls 5, 5, 8
  01ddc94  fsel 8, 10, 9, 7
  01ddc98  fsel 10, 11, 9, 4
  01ddc9c  fsel 11, 12, 9, 5
  01ddca0  fsel 7, 13, 8, 7
  01ddca4  fsel 4, 0, 10, 4
  01ddca8  fsel 5, 6, 11, 5
  01ddcac  fadds 3, 3, 7
  01ddcb0  fadds 2, 2, 4
  01ddcb4  fadds 1, 1, 5
  01ddcb8  stfs 3, 296(30)
  01ddcbc  stfs 2, 292(30)
  01ddcc0  stfs 1, 288(30)
  01ddcc4  lfs 4, 228(5)
  01ddcc8  lfs 5, 224(5)
  01ddccc  fmuls 6, 4, 4
  01ddcd0  lfs 7, 232(5)
  01ddcd4  lfs 8, 19360(6)
  01ddcd8  stw 7, 348(30)
  01ddcdc  fmadds 6, 5, 5, 6
  01ddce0  fmadds 6, 7, 7, 6
  01ddce4  fsqrts 6, 6
  01ddce8  fdivs 8, 8, 6
  01ddcec  fsub 10, 9, 6
  01ddcf0  fsub 11, 9, 6
  01ddcf4  fsub 12, 9, 6
  01ddcf8  fsub 13, 6, 9
  01ddcfc  fsub 0, 6, 9
  01ddd00  fsub 6, 6, 9
  01ddd04  fmuls 7, 7, 8
  01ddd08  fmuls 4, 4, 8
  01ddd0c  fmuls 5, 5, 8
  01ddd10  fsel 8, 10, 9, 7
  01ddd14  fsel 10, 11, 9, 4
  01ddd18  fsel 9, 12, 9, 5
  01ddd1c  fsel 7, 13, 8, 7
  01ddd20  fsel 4, 0, 10, 4
  01ddd24  fsel 5, 6, 9, 5
  01ddd28  fadds 3, 3, 7
  01ddd2c  fadds 2, 2, 4
  01ddd30  fadds 1, 1, 5
  01ddd34  stfs 3, 296(30)
  01ddd38  stfs 2, 292(30)
  01ddd3c  stfs 1, 288(30)
  01ddd40  bl 0x1dc730
  01ddd44  b 0x1de414
  01ddd48  ori 5, 3, 0
  01ddd4c  lwz 4, 244(30)
  01ddd50  lis 3, 164
  01ddd54  slwi 4, 4, 8
  01ddd58  lwz 3, -28512(3)
  01ddd5c  addc 3, 3, 4
  01ddd60  clrldi 6, 3, 32
  01ddd64  lis 3, 239
  01ddd68  lfs 1, 16(6)
  01ddd6c  stfs 1, 288(30)
  01ddd70  lfs 2, 20(6)
  01ddd74  stfs 2, 292(30)
  01ddd78  lfs 3, 24(6)
  01ddd7c  stfs 3, 296(30)
  01ddd80  lfs 4, 28(6)
  01ddd84  stfs 4, 300(30)
  01ddd88  lfs 4, 196(6)
  01ddd8c  lfs 5, 192(6)
  01ddd90  fmuls 6, 4, 4
  01ddd94  lfs 7, 200(6)
  01ddd98  lfs 8, 10000(3)
  01ddd9c  lis 3, 30
  01ddda0  addi 7, 3, -11808
  01ddda4  fmadds 6, 5, 5, 6
  01ddda8  lfs 9, 0(7)
  01dddac  fmadds 6, 7, 7, 6
  01dddb0  fsqrts 6, 6
  01dddb4  lis 3, 118
  01dddb8  lis 8, 118
  01dddbc  li 9, 8
  01dddc0  li 4, 7
  01dddc4  fdivs 8, 8, 6
  01dddc8  fsub 10, 9, 6
  01dddcc  fsub 11, 9, 6
  01dddd0  fsub 12, 9, 6
  01dddd4  fsub 13, 6, 9
  01dddd8  fsub 0, 6, 9
  01ddddc  fsub 6, 6, 9
  01ddde0  fmuls 7, 7, 8
  01ddde4  fmuls 4, 4, 8
  01ddde8  fmuls 5, 5, 8
  01dddec  fsel 8, 10, 9, 7
  01dddf0  fsel 10, 11, 9, 4
  01dddf4  fsel 11, 12, 9, 5
  01dddf8  fsel 7, 13, 8, 7
  01dddfc  fsel 4, 0, 10, 4
  01dde00  fsel 5, 6, 11, 5
  01dde04  fadds 3, 3, 7
  01dde08  fadds 2, 2, 4
  01dde0c  fadds 1, 1, 5
  01dde10  stfs 3, 296(30)
  01dde14  stfs 2, 292(30)
  01dde18  stfs 1, 288(30)
  01dde1c  lfs 4, 212(6)
  01dde20  lfs 5, 208(6)
  01dde24  fmuls 6, 4, 4
  01dde28  lfs 7, 216(6)
  01dde2c  lfs 8, 19364(3)
  01dde30  fneg 8, 8
  01dde34  fmadds 6, 5, 5, 6
  01dde38  lwz 10, 272(30)
  01dde3c  fmadds 6, 7, 7, 6
  01dde40  fsqrts 6, 6
  01dde44  slwi 10, 10, 7
  01dde48  ori 3, 31, 0
  01dde4c  addc 5, 5, 10
  01dde50  clrldi 5, 5, 32
  01dde54  fdivs 8, 8, 6
  01dde58  fsub 10, 9, 6
  01dde5c  fsub 11, 9, 6
  01dde60  fsub 12, 9, 6
  01dde64  fsub 13, 6, 9
  01dde68  fsub 0, 6, 9
  01dde6c  fsub 6, 6, 9
  01dde70  fmuls 7, 7, 8
  01dde74  fmuls 4, 4, 8
  01dde78  fmuls 5, 5, 8
  01dde7c  fsel 8, 10, 9, 7
  01dde80  fsel 10, 11, 9, 4
  01dde84  fsel 11, 12, 9, 5
  01dde88  fsel 7, 13, 8, 7
  01dde8c  fsel 4, 0, 10, 4
  01dde90  fsel 5, 6, 11, 5
  01dde94  fadds 3, 3, 7
  01dde98  fadds 2, 2, 4
  01dde9c  fadds 1, 1, 5
  01ddea0  stfs 3, 296(30)
  01ddea4  stfs 2, 292(30)
  01ddea8  stfs 1, 288(30)
  01ddeac  lfs 4, 228(6)
  01ddeb0  lfs 5, 224(6)
  01ddeb4  fmuls 6, 4, 4
  01ddeb8  lfs 7, 232(6)
  01ddebc  lfs 8, 19360(8)
  01ddec0  fmadds 6, 5, 5, 6
  01ddec4  fmadds 6, 7, 7, 6
  01ddec8  fsqrts 6, 6
  01ddecc  fdivs 8, 8, 6
  01dded0  fsub 10, 9, 6
  01dded4  fsub 11, 9, 6
  01dded8  fsub 12, 9, 6
  01ddedc  fsub 13, 6, 9
  01ddee0  fsub 0, 6, 9
  01ddee4  fsub 6, 6, 9
  01ddee8  fmuls 7, 7, 8
  01ddeec  fmuls 4, 4, 8
  01ddef0  fmuls 5, 5, 8
  01ddef4  fsel 8, 10, 9, 7
  01ddef8  fsel 10, 11, 9, 4
  01ddefc  fsel 9, 12, 9, 5
  01ddf00  fsel 7, 13, 8, 7
  01ddf04  fsel 4, 0, 10, 4
  01ddf08  fsel 5, 6, 9, 5
  01ddf0c  fadds 3, 3, 7
  01ddf10  fadds 2, 2, 4
  01ddf14  fadds 1, 1, 5
  01ddf18  stfs 3, 296(30)
  01ddf1c  stfs 2, 292(30)
  01ddf20  stfs 1, 288(30)
  01ddf24  lfs 1, 12(7)
  01ddf28  lfs 2, 56(5)
  01ddf2c  fadds 1, 2, 1
  01ddf30  stfs 1, 56(5)
  01ddf34  stw 9, 348(30)
  01ddf38  bl 0x1dc730
  01ddf3c  b 0x1de414
  01ddf40  ori 3, 31, 0
  01ddf44  li 4, 11
  01ddf48  bl 0x1dc730
  01ddf4c  b 0x1de414
  01ddf50  lwz 5, 276(30)
  01ddf54  lis 4, 30
  01ddf58  slwi 5, 5, 7
  01ddf5c  addi 4, 4, -11808
  01ddf60  addc 3, 3, 5
  01ddf64  clrldi 5, 3, 32
  01ddf68  ori 3, 31, 0
  01ddf6c  lfs 1, 12(4)
  01ddf70  li 4, 12
  01ddf74  lfs 2, 56(5)
  01ddf78  fadds 1, 2, 1
  01ddf7c  stfs 1, 56(5)
  01ddf80  bl 0x1dc730
  01ddf84  b 0x1de414
  01ddf88  lis 5, 17279
  01ddf8c  ori 3, 31, 0
  01ddf90  addic 4, 30, 32
  01ddf94  stw 5, 44(30)
  01ddf98  bl 0x4d3870
  01ddf9c  nop
  01ddfa0  cmpwi 3, 0
  01ddfa4  bt 2, 0x1de414
  01ddfa8  lwz 3, 268(30)
  01ddfac  extsw 3, 3
  01ddfb0  bl 0xf1e50
  01ddfb4  nop
  01ddfb8  lis 3, 151
  01ddfbc  li 5, 1
  01ddfc0  addic 6, 3, -16400
  01ddfc4  ori 3, 31, 0
  01ddfc8  li 4, 2
  01ddfcc  stb 5, 84(6)
  01ddfd0  bl 0x4d407c
  01ddfd4  nop
  01ddfd8  lwz 3, 344(30)
  01ddfdc  lis 4, 165
  01ddfe0  slwi 5, 3, 2
  01ddfe4  slwi 3, 3, 2
  01ddfe8  addc 5, 30, 5
  01ddfec  addc 3, 30, 3
  01ddff0  clrldi 5, 5, 32
  01ddff4  lwz 4, 7128(4)
  01ddff8  clrldi 3, 3, 32
  01ddffc  lwz 5, 224(5)
  01de000  lwz 3, 224(3)
  01de004  slwi 5, 5, 7
  01de008  slwi 3, 3, 7
  01de00c  addc 5, 4, 5
  01de010  addc 3, 4, 3
  01de014  clrldi 5, 5, 32
  01de018  clrldi 6, 3, 32
  01de01c  addic 3, 31, 192
  01de020  addic 4, 31, 64
  01de024  lfs 1, 48(5)
  01de028  stfs 1, 16(31)
  01de02c  lfs 1, 52(5)
  01de030  stfs 1, 20(31)
  01de034  lfs 1, 56(5)
  01de038  stfs 1, 24(31)
  01de03c  lfs 1, 60(5)
  01de040  stfs 1, 28(31)
  01de044  lfs 1, 112(6)
  01de048  stfs 1, 64(31)
  01de04c  lfs 1, 116(6)
  01de050  stfs 1, 68(31)
  01de054  lfs 1, 120(6)
  01de058  stfs 1, 72(31)
  01de05c  lfs 1, 124(6)
  01de060  stfs 1, 76(31)
  01de064  bl 0x500b64
  01de068  nop
  01de06c  lfs 6, 196(31)
  01de070  lfs 7, 192(31)
  01de074  fmuls 1, 6, 6
  01de078  lfs 28, 200(31)
  01de07c  lis 3, 30
  01de080  addi 3, 3, -11808
  01de084  fmadds 1, 7, 7, 1
  01de088  lfs 5, 0(3)
  01de08c  lfs 4, 16(31)
  01de090  lfs 3, 20(31)
  01de094  lfs 2, 24(31)
  01de098  lfs 29, 64(31)
  01de09c  lfs 30, 68(31)
  01de0a0  fmadds 8, 28, 28, 1
  01de0a4  lfs 1, 72(31)
  01de0a8  lfs 31, 76(31)
  01de0ac  fsqrts 8, 8
  01de0b0  fcmpu 0, 8, 5
  01de0b4  bf 2, 0x1de0c8
  01de0b8  fmr 7, 5
  01de0bc  lfs 28, 204(31)
  01de0c0  fmr 6, 7
  01de0c4  b 0x1de0e8
  01de0c8  lis 3, 30
  01de0cc  addi 3, 3, -11808
  01de0d0  lfs 5, 36(3)
  01de0d4  fdivs 8, 5, 8
  01de0d8  fmuls 5, 28, 8
  01de0dc  lfs 28, 204(31)
  01de0e0  fmuls 7, 7, 8
  01de0e4  fmuls 6, 6, 8
  01de0e8  lis 3, 30
  01de0ec  fadds 27, 7, 4
  01de0f0  addi 30, 3, -11808
  01de0f4  fadds 26, 6, 3
  01de0f8  fadds 25, 5, 2
  01de0fc  lfs 2, 40(30)
  01de100  bl 0x502578
  01de104  nop
  01de108  lis 3, 150
  01de10c  li 5, 1
  01de110  addic 4, 3, -12976
  01de114  ori 3, 31, 0
  01de118  stfs 27, 16(4)
  01de11c  stfs 26, 20(4)
  01de120  stfs 25, 24(4)
  01de124  stfs 28, 28(4)
  01de128  stfs 29, 32(4)
  01de12c  stfs 30, 36(4)
  01de130  stfs 1, 40(4)
  01de134  stfs 31, 44(4)
  01de138  stb 5, 74(4)
  01de13c  lfs 1, 16(30)
  01de140  bl 0x119488
  01de144  nop
  01de148  ori 3, 31, 0
  01de14c  li 4, 13
  01de150  bl 0x1dc730
  01de154  b 0x1de414
  01de158  lis 3, 161
  01de15c  lwz 3, 1800(3)
  01de160  cmpwi 3, 2
  01de164  bt 2, 0x1de414
  01de168  lis 3, 164
  01de16c  lwz 4, 260(30)
  01de170  slwi 4, 4, 8
  01de174  lwz 3, -28512(3)
  01de178  addc 3, 3, 4
  01de17c  clrldi 3, 3, 32
  01de180  bl 0x401de4
  01de184  nop
  01de188  ori 3, 31, 0
  01de18c  li 4, 14
  01de190  bl 0x1dc730
  01de194  b 0x1de414
  01de198  lbz 3, 112(31)
  01de19c  rlwinm 3, 3, 0, 30, 30
  01de1a0  cmpwi 3, 0
  01de1a4  bt 2, 0x1de414
  01de1a8  lwz 4, 348(30)
  01de1ac  ori 3, 31, 0
  01de1b0  extsw 4, 4
  01de1b4  bl 0x1dc730
  01de1b8  b 0x1de414
  01de1bc  lfs 1, 20(31)
  01de1c0  lfs 2, 292(30)
  01de1c4  lfs 3, 16(31)
  01de1c8  fsubs 1, 1, 2
  01de1cc  lfs 2, 288(30)
  01de1d0  fsubs 2, 3, 2
  01de1d4  lis 3, 30
  01de1d8  addi 3, 3, -11808
  01de1dc  fmuls 1, 1, 1
  01de1e0  fmadds 1, 2, 2, 1
  01de1e4  lfs 2, 44(3)
  01de1e8  fsqrts 1, 1
  01de1ec  fcmpu 0, 1, 2
  01de1f0  cror 6, 1, 2
  01de1f4  bt 6, 0x1de414
  01de1f8  ori 3, 31, 0
  01de1fc  li 4, 9
  01de200  bl 0x1dc730
  01de204  b 0x1de414
  01de208  lwz 4, 344(30)
  01de20c  lis 3, 164
  01de210  cntlzw 4, 4
  01de214  rlwinm 4, 4, 27, 31, 31
  01de218  xori 4, 4, 1
  01de21c  lwz 3, -28512(3)
  01de220  slwi 4, 4, 2
  01de224  addc 4, 30, 4
  01de228  clrldi 4, 4, 32
  01de22c  lwz 4, 240(4)
  01de230  slwi 4, 4, 8
  01de234  addc 3, 3, 4
  01de238  clrldi 3, 3, 32
  01de23c  bl 0x1b6870
  01de240  nop
  01de244  cmpwi 3, 0
  01de248  bt 2, 0x1de414
  01de24c  ori 3, 31, 0
  01de250  li 4, 10
  01de254  bl 0x1dc730
  01de258  b 0x1de414
  01de25c  lfs 1, 20(31)
  01de260  lfs 2, 292(30)
  01de264  lfs 3, 16(31)
  01de268  fsubs 1, 1, 2
  01de26c  lfs 2, 288(30)
  01de270  fsubs 2, 3, 2
  01de274  lis 3, 30
  01de278  addi 3, 3, -11808
  01de27c  fmuls 1, 1, 1
  01de280  fmadds 1, 2, 2, 1
  01de284  lfs 2, 44(3)
  01de288  fsqrts 1, 1
  01de28c  fcmpu 0, 1, 2
  01de290  cror 6, 1, 2
  01de294  bt 6, 0x1de414
  01de298  lwz 4, 344(30)
  01de29c  lis 3, 165
  01de2a0  li 6, 4
  01de2a4  addic 4, 4, 1
  01de2a8  slwi 5, 4, 2
  01de2ac  lwz 3, 7128(3)
  01de2b0  addc 5, 30, 5
  01de2b4  stw 4, 344(30)
  01de2b8  clrldi 5, 5, 32
  01de2bc  lwz 4, 208(5)
  01de2c0  slwi 4, 4, 7
  01de2c4  addc 3, 3, 4
  01de2c8  li 4, 7
  01de2cc  clrldi 5, 3, 32
  01de2d0  ori 3, 31, 0
  01de2d4  lfs 1, 48(5)
  01de2d8  stfs 1, 288(30)
  01de2dc  lfs 1, 52(5)
  01de2e0  stfs 1, 292(30)
  01de2e4  lfs 1, 56(5)
  01de2e8  stfs 1, 296(30)
  01de2ec  lfs 1, 60(5)
  01de2f0  stw 6, 348(30)
  01de2f4  stfs 1, 300(30)
  01de2f8  bl 0x1dc730
  01de2fc  b 0x1de414
  01de300  lis 3, 164
  01de304  lwz 4, 256(30)
  01de308  slwi 4, 4, 8
  01de30c  lwz 3, -28512(3)
  01de310  addc 3, 3, 4
  01de314  clrldi 3, 3, 32
  01de318  bl 0x1e348c
  01de31c  nop
  01de320  cmpwi 3, 0
  01de324  bt 2, 0x1de414
  01de328  lwz 5, 344(30)
  01de32c  ori 3, 31, 0
  01de330  addic 5, 5, 1
  01de334  li 4, 3
  01de338  stw 5, 344(30)
  01de33c  bl 0x1dc730
  01de340  b 0x1de414
  01de344  lis 3, 151
  01de348  lis 4, 161
  01de34c  lwz 5, 280(30)
  01de350  addic 4, 4, -13692
  01de354  lwz 3, -25488(3)
  01de358  addc 4, 5, 4
  01de35c  slwi 3, 3, 4
  01de360  clrldi 4, 4, 32
  01de364  extsw 3, 3
  01de368  lbzx 3, 4, 3
  01de36c  cmpwi 3, 255
  01de370  bf 2, 0x1de414
  01de374  lis 3, 151
  01de378  addic 3, 3, -25376
  01de37c  lwz 3, 8324(3)
  01de380  cmpwi 3, 50
  01de384  bt 2, 0x1de414
  01de388  ori 3, 31, 0
  01de38c  addic 4, 30, 32
  01de390  bl 0x4d3870
  01de394  nop
  01de398  cmpwi 3, 0
  01de39c  bt 2, 0x1de414
  01de3a0  lis 3, 30
  01de3a4  addi 4, 3, -11808
  01de3a8  ori 3, 31, 0
  01de3ac  lfs 1, 16(4)
  01de3b0  bl 0x119488
  01de3b4  nop
  01de3b8  ori 3, 31, 0
  01de3bc  li 4, 15
  01de3c0  bl 0x1dc730
  01de3c4  b 0x1de414
  01de3c8  lis 3, 161
  01de3cc  lwz 3, 1800(3)
  01de3d0  cmpwi 3, 2
  01de3d4  bt 2, 0x1de414
  01de3d8  li 3, 6
  01de3dc  li 4, 1
  01de3e0  bl 0x112e18
  01de3e4  nop
  01de3e8  li 3, 0
  01de3ec  li 4, -1
  01de3f0  bl 0xe8aa4
  01de3f4  nop
  01de3f8  li 3, 11000
  01de3fc  li 4, 58
  01de400  bl 0x7b310
  01de404  nop
  01de408  ori 3, 31, 0
  01de40c  bl 0xefb38
  01de410  nop
  01de414  ld 0, 224(1)
  01de418  mtlr 0
  01de41c  lfd 25, 152(1)
  01de420  lfd 26, 160(1)
  01de424  lfd 27, 168(1)
  01de428  lfd 28, 176(1)
  01de42c  lfd 29, 184(1)
  01de430  lfd 30, 192(1)
  01de434  lfd 31, 200(1)
  01de438  ld 29, 128(1)
  01de43c  ld 30, 136(1)
  01de440  ld 31, 144(1)
  01de444  addi 1, 1, 208
  01de448  blr

M1140_001de458:   # 0x1de458, 0x1f4 bytes
  01de458  stdu 1, -192(1)
  01de45c  mflr 0
  01de460  std 0, 208(1)
  01de464  stfd 28, 160(1)
  01de468  stfd 29, 168(1)
  01de46c  stfd 30, 176(1)
  01de470  stfd 31, 184(1)
  01de474  std 31, 152(1)
  01de478  ori 31, 3, 0
  01de47c  lis 3, 30
  01de480  addic 4, 1, 112
  01de484  addi 5, 3, -7092
  01de488  std 30, 144(1)
  01de48c  ori 3, 31, 0
  01de490  lwz 30, 120(31)
  01de494  li 8, 16
  01de498  lfs 28, 16(31)
  01de49c  lfs 1, 304(30)
  01de4a0  stfs 1, 112(1)
  01de4a4  lfs 1, 308(30)
  01de4a8  stfs 1, 116(1)
  01de4ac  lfs 1, 312(30)
  01de4b0  stfs 1, 120(1)
  01de4b4  lfs 1, 316(30)
  01de4b8  stfs 1, 124(1)
  01de4bc  lfs 31, 4(5)
  01de4c0  lfs 29, 20(31)
  01de4c4  lfs 30, 24(31)
  01de4c8  lfs 1, 0(5)
  01de4cc  fmr 2, 31
  01de4d0  std 29, 136(1)
  01de4d4  lfs 3, 8(5)
  01de4d8  bl 0x1009b0
  01de4dc  nop
  01de4e0  lbz 3, 32(31)
  01de4e4  cmpwi 3, 4
  01de4e8  bt 2, 0x1de510
  01de4ec  cmpwi 3, 5
  01de4f0  bt 2, 0x1de510
  01de4f4  cmpwi 3, 6
  01de4f8  bt 2, 0x1de510
  01de4fc  cmpwi 3, 7
  01de500  bf 2, 0x1de5f4
  01de504  lwz 3, 348(30)
  01de508  cmpwi 3, 3
  01de50c  bf 2, 0x1de5f4
  01de510  lwz 3, 344(30)
  01de514  addic 29, 31, 16
  01de518  fmr 1, 31
  01de51c  slwi 3, 3, 2
  01de520  ori 5, 29, 0
  01de524  addc 3, 30, 3
  01de528  ori 6, 29, 0
  01de52c  clrldi 3, 3, 32
  01de530  lwz 3, 96(3)
  01de534  extsw 3, 3
  01de538  bl 0x1145d8
  01de53c  nop
  01de540  lwz 3, 344(30)
  01de544  cmpwi 3, 2
  01de548  bt 1, 0x1de558
  01de54c  cmpwi 3, 1
  01de550  bf 1, 0x1de5f4
  01de554  b 0x1de564
  01de558  cmpwi 3, 3
  01de55c  bf 1, 0x1de5bc
  01de560  b 0x1de5f4
  01de564  lwz 3, 128(30)
  01de568  ori 5, 29, 0
  01de56c  fmr 1, 31
  01de570  ori 6, 29, 0
  01de574  extsw 3, 3
  01de578  bl 0x1145d8
  01de57c  nop
  01de580  lwz 3, 132(30)
  01de584  fmr 1, 31
  01de588  ori 5, 29, 0
  01de58c  extsw 3, 3
  01de590  ori 6, 29, 0
  01de594  bl 0x1145d8
  01de598  nop
  01de59c  lwz 3, 136(30)
  01de5a0  ori 5, 29, 0
  01de5a4  fmr 1, 31
  01de5a8  ori 6, 29, 0
  01de5ac  extsw 3, 3
  01de5b0  bl 0x1145d8
  01de5b4  nop
  01de5b8  b 0x1de5f4
  01de5bc  lwz 3, 128(30)
  01de5c0  ori 5, 29, 0
  01de5c4  fmr 1, 31
  01de5c8  ori 6, 29, 0
  01de5cc  extsw 3, 3
  01de5d0  bl 0x1145d8
  01de5d4  nop
  01de5d8  lwz 3, 132(30)
  01de5dc  fmr 1, 31
  01de5e0  ori 5, 29, 0
  01de5e4  extsw 3, 3
  01de5e8  ori 6, 29, 0
  01de5ec  bl 0x1145d8
  01de5f0  nop
  01de5f4  lfs 1, 16(31)
  01de5f8  fsubs 1, 1, 28
  01de5fc  stfs 1, 320(30)
  01de600  lfs 1, 20(31)
  01de604  fsubs 1, 1, 29
  01de608  stfs 1, 324(30)
  01de60c  lfs 1, 24(31)
  01de610  fsubs 1, 1, 30
  01de614  stfs 1, 328(30)
  01de618  lfs 1, 28(31)
  01de61c  stfs 1, 332(30)
  01de620  ld 0, 208(1)
  01de624  mtlr 0
  01de628  lfd 28, 160(1)
  01de62c  lfd 29, 168(1)
  01de630  lfd 30, 176(1)
  01de634  lfd 31, 184(1)
  01de638  ld 29, 136(1)
  01de63c  ld 30, 144(1)
  01de640  ld 31, 152(1)
  01de644  addi 1, 1, 192
  01de648  blr

M1140_001de6a0:   # 0x1de6a0, 0x708 bytes
  01de6a0  stdu 1, -224(1)
  01de6a4  mflr 0
  01de6a8  std 0, 240(1)
  01de6ac  stfd 31, 216(1)
  01de6b0  std 30, 200(1)
  01de6b4  ori 30, 3, 0
  01de6b8  std 31, 208(1)
  01de6bc  lbz 3, 32(30)
  01de6c0  lwz 31, 120(30)
  01de6c4  lfs 1, 16(30)
  01de6c8  cmpwi 3, 3
  01de6cc  cmpwi 1, 3, 10
  01de6d0  lfs 2, 20(30)
  01de6d4  cmpwi 6, 3, 7
  01de6d8  std 29, 192(1)
  01de6dc  std 28, 184(1)
  01de6e0  cmpwi 7, 3, 6
  01de6e4  bf 1, 0x1ded84
  01de6e8  bt 5, 0x1de704
  01de6ec  bt 25, 0x1de6f8
  01de6f0  bf 29, 0x1de710
  01de6f4  b 0x1dea00
  01de6f8  cmpwi 3, 9
  01de6fc  bt 2, 0x1dec64
  01de700  b 0x1de710
  01de704  cmpwi 3, 13
  01de708  bt 2, 0x1ded20
  01de70c  b 0x1ded84
  01de710  lfs 3, 288(31)
  01de714  lfs 4, 292(31)
  01de718  lis 3, 30
  01de71c  fsubs 1, 3, 1
  01de720  fsubs 2, 4, 2
  01de724  addi 3, 3, -6580
  01de728  lis 5, 115
  01de72c  addic 4, 30, 72
  01de730  addic 5, 5, 22784
  01de734  fabs 4, 1
  01de738  fabs 3, 2
  01de73c  stfs 1, 112(1)
  01de740  stfs 2, 116(1)
  01de744  fsubs 1, 4, 3
  01de748  stfs 1, 120(1)
  01de74c  lwz 6, 112(1)
  01de750  lfs 31, 0(3)
  01de754  lfs 1, 112(1)
  01de758  lwz 3, 116(1)
  01de75c  lfs 2, 116(1)
  01de760  fabs 1, 1
  01de764  lwz 7, 120(1)
  01de768  rlwinm 3, 3, 3, 29, 29
  01de76c  fabs 5, 2
  01de770  lfs 2, 120(1)
  01de774  rlwimi 3, 7, 2, 30, 30
  01de778  fsub 6, 2, 31
  01de77c  rlwimi 3, 6, 4, 28, 28
  01de780  fsub 7, 2, 31
  01de784  ori 6, 5, 0
  01de788  rlwimi 6, 3, 2, 26, 28
  01de78c  slwi 3, 3, 2
  01de790  clrldi 6, 6, 32
  01de794  fsel 3, 6, 1, 3
  01de798  lfsx 2, 5, 3
  01de79c  lfs 1, 4(6)
  01de7a0  fsel 4, 7, 5, 4
  01de7a4  fcmpu 0, 3, 31
  01de7a8  bt 1, 0x1de7b4
  01de7ac  fmr 2, 31
  01de7b0  b 0x1de8dc
  01de7b4  fsubs 5, 4, 3
  01de7b8  fadds 3, 4, 3
  01de7bc  addic 7, 1, 16
  01de7c0  li 3, 2
  01de7c4  addic 6, 7, 108
  01de7c8  addic 5, 7, 124
  01de7cc  mtctr 3
  01de7d0  fdivs 3, 5, 3
  01de7d4  fmuls 5, 3, 3
  01de7d8  stfs 3, 136(1)
  01de7dc  stfs 3, 128(1)
  01de7e0  stfs 3, 132(1)
  01de7e4  stfs 3, 124(1)
  01de7e8  lfs 6, 136(1)
  01de7ec  lfs 7, 128(1)
  01de7f0  lfs 8, 132(1)
  01de7f4  fmuls 3, 5, 5
  01de7f8  fmuls 7, 7, 5
  01de7fc  fmuls 6, 6, 3
  01de800  fmuls 4, 3, 3
  01de804  fmuls 3, 8, 3
  01de808  stfs 7, 128(1)
  01de80c  fmuls 5, 6, 5
  01de810  stfs 3, 132(1)
  01de814  stfs 5, 136(1)
  01de818  lfs 3, 108(7)
  01de81c  fmuls 3, 3, 4
  01de820  stfs 3, 124(7)
  01de824  lfs 3, 4(6)
  01de828  addic 7, 7, 8
  01de82c  addic 6, 6, 8
  01de830  fmuls 3, 3, 4
  01de834  stfs 3, 4(5)
  01de838  addic 5, 5, 8
  01de83c  bdnz 0x1de818
  01de840  ori 8, 1, 0
  01de844  lis 7, 115
  01de848  li 9, 4
  01de84c  addic 6, 8, 124
  01de850  addic 7, 7, 22752
  01de854  ori 5, 6, 0
  01de858  mtctr 9
  01de85c  lfs 3, 124(8)
  01de860  lfs 4, 0(7)
  01de864  fmuls 3, 3, 4
  01de868  lfs 4, 4(7)
  01de86c  addic 7, 7, 8
  01de870  stfs 3, 124(8)
  01de874  lfs 3, 4(6)
  01de878  addic 8, 8, 8
  01de87c  fmuls 3, 3, 4
  01de880  stfs 3, 4(6)
  01de884  addic 6, 6, 8
  01de888  bdnz 0x1de85c
  01de88c  ori 6, 3, 0
  01de890  fmr 3, 31
  01de894  ori 3, 1, 0
  01de898  mtctr 6
  01de89c  lfs 4, 124(3)
  01de8a0  fadds 3, 3, 4
  01de8a4  lfs 4, 4(5)
  01de8a8  addic 3, 3, 16
  01de8ac  lfs 5, 8(5)
  01de8b0  lfs 6, 12(5)
  01de8b4  addic 5, 5, 16
  01de8b8  fadds 3, 3, 4
  01de8bc  fadds 3, 3, 5
  01de8c0  fadds 3, 3, 6
  01de8c4  bdnz 0x1de89c
  01de8c8  lis 3, 30
  01de8cc  addi 3, 3, -6580
  01de8d0  lfs 4, 4(3)
  01de8d4  fadds 3, 3, 4
  01de8d8  fmadds 2, 3, 2, 1
  01de8dc  lis 3, 30
  01de8e0  fmr 1, 2
  01de8e4  lis 28, 114
  01de8e8  addi 29, 3, -6580
  01de8ec  lis 6, 114
  01de8f0  addic 5, 31, 336
  01de8f4  ori 3, 4, 0
  01de8f8  lfs 4, 8(29)
  01de8fc  lfs 3, -3048(28)
  01de900  lfs 5, 12(29)
  01de904  fmuls 6, 3, 4
  01de908  lfs 2, -3052(6)
  01de90c  fmuls 3, 3, 5
  01de910  fmuls 4, 2, 4
  01de914  fmr 2, 6
  01de918  bl 0x10a2e0
  01de91c  nop
  01de920  lfs 1, 16(29)
  01de924  lfs 2, 72(30)
  01de928  lfs 3, 20(29)
  01de92c  fadds 1, 2, 1
  01de930  lfs 2, 24(29)
  01de934  lfs 6, 28(29)
  01de938  fsubs 4, 3, 1
  01de93c  fsubs 5, 2, 1
  01de940  fsub 7, 1, 4
  01de944  fsel 1, 7, 4, 1
  01de948  lfs 4, 32(29)
  01de94c  fsub 7, 5, 1
  01de950  fsel 1, 7, 5, 1
  01de954  lfs 5, 36(29)
  01de958  lfs 7, 40(29)
  01de95c  lfs 8, 340(31)
  01de960  lfs 10, -3048(28)
  01de964  fmuls 9, 1, 1
  01de968  fmuls 11, 9, 1
  01de96c  fmuls 12, 9, 11
  01de970  fmadds 1, 11, 6, 1
  01de974  fmuls 11, 9, 12
  01de978  fmadds 1, 12, 4, 1
  01de97c  fmuls 9, 9, 11
  01de980  fmadds 1, 11, 5, 1
  01de984  fmadds 1, 9, 7, 1
  01de988  fmuls 1, 1, 8
  01de98c  stfs 1, 304(31)
  01de990  lfs 1, 72(30)
  01de994  fsubs 3, 3, 1
  01de998  fsubs 2, 2, 1
  01de99c  fsub 9, 1, 3
  01de9a0  fsel 1, 9, 3, 1
  01de9a4  fsub 3, 2, 1
  01de9a8  fsel 1, 3, 2, 1
  01de9ac  lfs 2, 328(31)
  01de9b0  fmuls 3, 1, 1
  01de9b4  fmuls 9, 3, 1
  01de9b8  fmuls 11, 3, 9
  01de9bc  fmadds 1, 9, 6, 1
  01de9c0  fmuls 6, 3, 11
  01de9c4  fmadds 1, 11, 4, 1
  01de9c8  fmuls 3, 3, 6
  01de9cc  fmadds 1, 6, 5, 1
  01de9d0  fmadds 1, 3, 7, 1
  01de9d4  fmuls 1, 1, 8
  01de9d8  stfs 1, 308(31)
  01de9dc  lfs 1, 44(29)
  01de9e0  fnmsubs 1, 10, 1, 2
  01de9e4  fcmpu 0, 1, 31
  01de9e8  stfs 1, 312(31)
  01de9ec  cror 6, 0, 2
  01de9f0  bt 6, 0x1ded84
  01de9f4  li 3, 0
  01de9f8  stw 3, 312(31)
  01de9fc  b 0x1ded84
  01dea00  lis 3, 30
  01dea04  addi 4, 3, -6580
  01dea08  ori 3, 30, 0
  01dea0c  lfs 1, 48(4)
  01dea10  bl 0x113e88
  01dea14  nop
  01dea18  cmpwi 3, 0
  01dea1c  bt 2, 0x1debd4
  01dea20  li 3, 288
  01dea24  li 5, 16
  01dea28  addi 4, 3, 16
  01dea2c  li 6, 20
  01dea30  vspltisw 6, -1
  01dea34  lvlx 2, 3, 31
  01dea38  li 3, 292
  01dea3c  lvrx 3, 4, 31
  01dea40  lvlx 4, 5, 30
  01dea44  vor 2, 2, 3
  01dea48  addi 4, 3, 16
  01dea4c  lfs 1, 16(30)
  01dea50  li 5, 304
  01dea54  lvlx 3, 3, 31
  01dea58  li 8, 308
  01dea5c  vsubfp 2, 2, 4
  01dea60  li 3, 24
  01dea64  lvrx 4, 4, 31
  01dea68  li 7, -3056
  01dea6c  lis 4, 30
  01dea70  vor 3, 3, 4
  01dea74  addi 9, 4, -6580
  01dea78  vslw 6, 6, 6
  01dea7c  lis 4, 114
  01dea80  vspltisw 10, -1
  01dea84  vspltisw 12, -1
  01dea88  lis 10, 114
  01dea8c  vspltisw 13, -1
  01dea90  vspltw 4, 2, 0
  01dea94  vslw 10, 10, 10
  01dea98  stvewx 4, 5, 31
  01dea9c  lvlx 4, 6, 30
  01deaa0  lfs 2, 20(30)
  01deaa4  vsubfp 3, 3, 4
  01deaa8  lfs 3, 300(31)
  01deaac  li 6, 52
  01deab0  vslw 12, 12, 12
  01deab4  vspltw 4, 3, 0
  01deab8  stvewx 4, 8, 31
  01deabc  lvlx 4, 3, 30
  01deac0  stfs 3, 316(31)
  01deac4  lfs 3, 52(9)
  01deac8  lvlx 5, 6, 9
  01deacc  lvlx 7, 7, 4
  01dead0  vspltw 5, 5, 0
  01dead4  lfs 4, -3056(4)
  01dead8  li 3, 60
  01deadc  fmuls 3, 4, 3
  01deae0  vmaddfp 5, 7, 5, 6
  01deae4  lfs 4, 56(9)
  01deae8  lvlx 6, 3, 9
  01deaec  vspltisw 7, -1
  01deaf0  vspltw 6, 6, 0
  01deaf4  li 3, 296
  01deaf8  lfs 5, 292(31)
  01deafc  vslw 7, 7, 7
  01deb00  fctidz 3, 3
  01deb04  vctsxs 5, 5, 0
  01deb08  addi 4, 3, 16
  01deb0c  lvlx 9, 3, 31
  01deb10  fsubs 2, 5, 2
  01deb14  li 6, 312
  01deb18  fcfid 3, 3
  01deb1c  vcfsx 5, 5, 0
  01deb20  addic 3, 30, 16
  01deb24  li 7, 0
  01deb28  frsp 3, 3
  01deb2c  vrefp 8, 5
  01deb30  fdivs 3, 4, 3
  01deb34  lfs 4, 288(31)
  01deb38  vnmsubfp 11, 8, 5, 6
  01deb3c  fsubs 1, 4, 1
  01deb40  vmaddfp 7, 8, 11, 7
  01deb44  lvrx 8, 4, 31
  01deb48  vor 8, 9, 8
  01deb4c  vslw 9, 13, 13
  01deb50  vspltisw 13, -1
  01deb54  vsubfp 4, 8, 4
  01deb58  vspltisw 8, -1
  01deb5c  vslw 13, 13, 13
  01deb60  addic 4, 31, 288
  01deb64  vnmsubfp 11, 7, 5, 6
  01deb68  vslw 8, 8, 8
  01deb6c  vmaddfp 7, 7, 11, 10
  01deb70  vnmsubfp 5, 7, 5, 6
  01deb74  fmuls 2, 2, 3
  01deb78  fmuls 1, 1, 3
  01deb7c  vmaddfp 5, 7, 5, 12
  01deb80  fmuls 2, 2, 2
  01deb84  vmaddfp 2, 2, 5, 9
  01deb88  vmaddfp 3, 3, 5, 13
  01deb8c  vmaddfp 4, 4, 5, 8
  01deb90  fmadds 1, 1, 1, 2
  01deb94  vspltw 2, 2, 0
  01deb98  vspltw 3, 3, 0
  01deb9c  vspltw 4, 4, 0
  01deba0  fsqrts 1, 1
  01deba4  stvewx 2, 5, 31
  01deba8  stvewx 3, 8, 31
  01debac  stvewx 4, 6, 31
  01debb0  lfs 2, 64(9)
  01debb4  lfs 3, -3048(10)
  01debb8  fmuls 2, 3, 2
  01debbc  bl 0x108180
  01debc0  nop
  01debc4  lis 3, 16170
  01debc8  stfs 1, 312(31)
  01debcc  ori 3, 3, 43691
  01debd0  stw 3, 88(30)
  01debd4  lfs 1, 308(31)
  01debd8  lfs 2, 304(31)
  01debdc  fmuls 3, 1, 1
  01debe0  lfs 1, 312(31)
  01debe4  lis 3, 30
  01debe8  addi 3, 3, -6580
  01debec  fmadds 2, 2, 2, 3
  01debf0  lfs 3, 0(3)
  01debf4  fmadds 2, 1, 1, 2
  01debf8  fsqrts 2, 2
  01debfc  fcmpu 0, 2, 3
  01dec00  cror 6, 0, 2
  01dec04  bt 6, 0x1dec24
  01dec08  lis 3, 30
  01dec0c  lis 4, 114
  01dec10  addi 3, 3, -6580
  01dec14  lfs 2, 68(3)
  01dec18  lfs 3, -3048(4)
  01dec1c  fnmsubs 1, 3, 2, 1
  01dec20  stfs 1, 312(31)
  01dec24  lis 3, 30
  01dec28  addi 4, 3, -6580
  01dec2c  ori 3, 30, 0
  01dec30  lfs 1, 72(4)
  01dec34  bl 0x113e88
  01dec38  nop
  01dec3c  cmpwi 3, 0
  01dec40  bt 2, 0x1ded84
  01dec44  li 3, 0
  01dec48  lis 4, 16256
  01dec4c  stw 3, 316(31)
  01dec50  stw 3, 312(31)
  01dec54  stw 3, 308(31)
  01dec58  stw 3, 304(31)
  01dec5c  stw 4, 88(30)
  01dec60  b 0x1ded84
  01dec64  lwz 4, 344(31)
  01dec68  lis 3, 164
  01dec6c  lis 6, 239
  01dec70  cntlzw 4, 4
  01dec74  addic 7, 30, 16
  01dec78  rlwinm 4, 4, 27, 31, 31
  01dec7c  lwz 5, -28512(3)
  01dec80  addic 8, 30, 64
  01dec84  xori 4, 4, 1
  01dec88  addic 6, 6, 9984
  01dec8c  slwi 4, 4, 2
  01dec90  addc 3, 31, 4
  01dec94  lis 4, 118
  01dec98  clrldi 3, 3, 32
  01dec9c  lwz 3, 240(3)
  01deca0  slwi 9, 3, 8
  01deca4  ori 3, 30, 0
  01deca8  addc 9, 5, 9
  01decac  addic 5, 4, 19328
  01decb0  clrldi 31, 9, 32
  01decb4  ori 4, 31, 0
  01decb8  bl 0x112678
  01decbc  nop
  01decc0  ori 3, 31, 0
  01decc4  bl 0x1b67d0
  01decc8  nop
  01deccc  cmpwi 3, 0
  01decd0  bt 2, 0x1ded84
  01decd4  lbz 3, 83(30)
  01decd8  cmpwi 3, 5
  01decdc  bt 2, 0x1ded84
  01dece0  lis 3, 30
  01dece4  lis 4, 114
  01dece8  addi 3, 3, -6580
  01decec  li 5, 0
  01decf0  lfs 1, 76(3)
  01decf4  lfs 2, -3056(4)
  01decf8  ori 3, 30, 0
  01decfc  li 4, 5
  01ded00  fmuls 1, 2, 1
  01ded04  fctiwz 1, 1
  01ded08  stfd 1, 160(1)
  01ded0c  lwz 6, 164(1)
  01ded10  extsw 6, 6
  01ded14  bl 0xfddc0
  01ded18  nop
  01ded1c  b 0x1ded84
  01ded20  lis 3, 150
  01ded24  addic 3, 3, -12976
  01ded28  lwz 4, 48(3)
  01ded2c  cmpwi 4, 1
  01ded30  bf 2, 0x1ded84
  01ded34  lis 4, 30
  01ded38  lis 5, 114
  01ded3c  addi 4, 4, -6580
  01ded40  lfs 1, 80(4)
  01ded44  lfs 2, -3056(5)
  01ded48  lwz 3, 52(3)
  01ded4c  fmuls 1, 2, 1
  01ded50  fctiwz 1, 1
  01ded54  stfd 1, 160(1)
  01ded58  lwz 4, 164(1)
  01ded5c  cmpw 3, 4
  01ded60  bf 2, 0x1ded84
  01ded64  lis 3, 164
  01ded68  lwz 4, 260(31)
  01ded6c  slwi 4, 4, 8
  01ded70  lwz 3, -28512(3)
  01ded74  addc 3, 3, 4
  01ded78  clrldi 3, 3, 32
  01ded7c  bl 0x401de4
  01ded80  nop
  01ded84  ld 0, 240(1)
  01ded88  mtlr 0
  01ded8c  lfd 31, 216(1)
  01ded90  ld 28, 184(1)
  01ded94  ld 29, 192(1)
  01ded98  ld 30, 200(1)
  01ded9c  ld 31, 208(1)
  01deda0  addi 1, 1, 224
  01deda4  blr

M1140_001dedb0:   # 0x1dedb0, 0x188 bytes
  01dedb0  stdu 1, -160(1)
  01dedb4  mflr 0
  01dedb8  std 0, 176(1)
  01dedbc  std 31, 152(1)
  01dedc0  lis 4, 161
  01dedc4  ori 31, 3, 0
  01dedc8  lwz 3, 1800(4)
  01dedcc  std 30, 144(1)
  01dedd0  std 29, 136(1)
  01dedd4  std 28, 128(1)
  01dedd8  std 27, 120(1)
  01deddc  cmpwi 3, 2
  01dede0  bf 2, 0x1dee80
  01dede4  lis 3, 151
  01dede8  lbz 3, -16268(3)
  01dedec  cmpwi 3, 0
  01dedf0  bt 2, 0x1dee80
  01dedf4  lis 28, 150
  01dedf8  li 27, 0
  01dedfc  addic 28, 28, -12976
  01dee00  lhz 3, 68(28)
  01dee04  extsh 4, 3
  01dee08  cmpwi 4, 0
  01dee0c  bf 1, 0x1dee80
  01dee10  lis 29, 162
  01dee14  ori 30, 28, 0
  01dee18  addic 29, 29, -16512
  01dee1c  lwz 4, 376(30)
  01dee20  lhz 5, 166(31)
  01dee24  extsh 5, 5
  01dee28  lhz 6, 166(4)
  01dee2c  extsh 6, 6
  01dee30  cmpw 6, 5
  01dee34  bf 2, 0x1dee6c
  01dee38  lbz 5, 1(29)
  01dee3c  cmpwi 5, 0
  01dee40  bf 2, 0x1dee6c
  01dee44  ori 3, 4, 0
  01dee48  li 4, 0
  01dee4c  ori 5, 29, 0
  01dee50  bl 0xf0ea8
  01dee54  nop
  01dee58  lis 3, 16432
  01dee5c  stw 3, 32(29)
  01dee60  stw 3, 36(29)
  01dee64  stw 3, 40(29)
  01dee68  lhz 3, 68(28)
  01dee6c  extsh 4, 3
  01dee70  addic 27, 27, 1
  01dee74  addic 30, 30, 4
  01dee78  cmpw 27, 4
  01dee7c  bt 0, 0x1dee1c
  01dee80  lbz 3, 49(31)
  01dee84  cmpwi 3, 0
  01dee88  bt 2, 0x1deef4
  01dee8c  lis 3, 149
  01dee90  lfs 1, 20(31)
  01dee94  lfs 2, 16(31)
  01dee98  addic 3, 3, 5056
  01dee9c  lfs 3, 324(3)
  01deea0  lfs 4, 320(3)
  01deea4  fsubs 1, 1, 3
  01deea8  fsubs 2, 2, 4
  01deeac  lfs 3, 24(31)
  01deeb0  lfs 4, 328(3)
  01deeb4  fsubs 3, 3, 4
  01deeb8  lis 3, 30
  01deebc  fmuls 1, 1, 1
  01deec0  addi 3, 3, -4696
  01deec4  fmadds 1, 2, 2, 1
  01deec8  lfs 2, 0(3)
  01deecc  fmadds 1, 3, 3, 1
  01deed0  fsqrts 1, 1
  01deed4  fcmpu 0, 1, 2
  01deed8  cror 6, 1, 2
  01deedc  bt 6, 0x1deef4
  01deee0  ori 3, 31, 0
  01deee4  bl 0x106360
  01deee8  nop
  01deeec  li 3, 30
  01deef0  stb 3, 127(31)
  01deef4  ori 3, 31, 0
  01deef8  bl 0x1de6a0
  01deefc  ori 3, 31, 0
  01def00  bl 0x1de458
  01def04  ori 3, 31, 0
  01def08  bl 0x1dd210
  01def0c  ori 3, 31, 0
  01def10  bl 0x1dc1f0
  01def14  ld 0, 176(1)
  01def18  mtlr 0
  01def1c  ld 27, 120(1)
  01def20  ld 28, 128(1)
  01def24  ld 29, 136(1)
  01def28  ld 30, 144(1)
  01def2c  ld 31, 152(1)
  01def30  addi 1, 1, 160
  01def34  blr

M1140_001def38:   # 0x1def38, 0x14 bytes
  01def38  lis 3, 118
  01def3c  lis 4, 1
  01def40  addic 3, 3, 19400
  01def44  stw 4, 72(3)
  01def48  blr

UpdateMoby_1140:   # 0x1def50, 0x4 bytes
  01def50  blr
