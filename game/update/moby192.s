# game/update/moby192.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M192_002daa30:   # 0x2daa30, 0x574 bytes
  02daa30  stdu 1, -240(1)
  02daa34  mflr 0
  02daa38  std 0, 256(1)
  02daa3c  stfd 28, 208(1)
  02daa40  stfd 29, 216(1)
  02daa44  stfd 30, 224(1)
  02daa48  stfd 31, 232(1)
  02daa4c  fmr 31, 1
  02daa50  lfs 1, 4(3)
  02daa54  lfs 4, 4(4)
  02daa58  lfs 29, 0(3)
  02daa5c  fsubs 7, 1, 4
  02daa60  lfs 2, 0(4)
  02daa64  lfs 5, 8(3)
  02daa68  fsubs 8, 29, 2
  02daa6c  lfs 6, 8(4)
  02daa70  std 31, 200(1)
  02daa74  fsubs 9, 5, 6
  02daa78  std 30, 192(1)
  02daa7c  ori 31, 3, 0
  02daa80  ori 30, 5, 0
  02daa84  fmuls 7, 7, 7
  02daa88  fmadds 7, 8, 8, 7
  02daa8c  fmadds 7, 9, 9, 7
  02daa90  fsqrts 7, 7
  02daa94  fcmpu 0, 7, 3
  02daa98  std 29, 184(1)
  02daa9c  cror 6, 0, 2
  02daaa0  bt 6, 0x2dab28
  02daaa4  fsubs 4, 4, 1
  02daaa8  fsubs 2, 2, 29
  02daaac  fsubs 6, 6, 5
  02daab0  lis 3, 46
  02daab4  addi 3, 3, -22032
  02daab8  fmuls 7, 4, 4
  02daabc  lfs 8, 0(3)
  02daac0  fsubs 8, 3, 8
  02daac4  lfs 9, 4(3)
  02daac8  fmadds 7, 2, 2, 7
  02daacc  lfs 3, 12(4)
  02daad0  fmadds 7, 6, 6, 7
  02daad4  fsqrts 7, 7
  02daad8  fdivs 8, 8, 7
  02daadc  fsub 10, 9, 7
  02daae0  fsub 11, 9, 7
  02daae4  fsub 12, 9, 7
  02daae8  fsub 13, 7, 9
  02daaec  fsub 0, 7, 9
  02daaf0  fsub 7, 7, 9
  02daaf4  fmuls 6, 6, 8
  02daaf8  fmuls 4, 4, 8
  02daafc  fmuls 2, 2, 8
  02dab00  fsel 8, 10, 9, 6
  02dab04  fsel 10, 11, 9, 4
  02dab08  fsel 9, 12, 9, 2
  02dab0c  fsel 6, 13, 8, 6
  02dab10  fsel 4, 0, 10, 4
  02dab14  fsel 2, 7, 9, 2
  02dab18  fadds 6, 6, 5
  02dab1c  fadds 4, 4, 1
  02dab20  fadds 2, 2, 29
  02dab24  b 0x2dab2c
  02dab28  lfs 3, 12(4)
  02dab2c  fsubs 5, 2, 29
  02dab30  stfs 3, 124(1)
  02dab34  fsubs 1, 4, 1
  02dab38  lis 3, 46
  02dab3c  addi 3, 3, -22032
  02dab40  lis 4, 115
  02dab44  addic 4, 4, 22784
  02dab48  fabs 3, 5
  02dab4c  fabs 7, 1
  02dab50  stfs 5, 128(1)
  02dab54  stfs 2, 112(1)
  02dab58  stfs 4, 116(1)
  02dab5c  stfs 6, 120(1)
  02dab60  stfs 1, 132(1)
  02dab64  fsubs 1, 3, 7
  02dab68  stfs 1, 136(1)
  02dab6c  lwz 5, 128(1)
  02dab70  lfs 29, 4(3)
  02dab74  lfs 1, 128(1)
  02dab78  lwz 3, 132(1)
  02dab7c  fabs 4, 1
  02dab80  lfs 1, 132(1)
  02dab84  lwz 6, 136(1)
  02dab88  rlwinm 3, 3, 3, 29, 29
  02dab8c  fabs 5, 1
  02dab90  lfs 1, 136(1)
  02dab94  rlwimi 3, 6, 2, 30, 30
  02dab98  fsub 2, 1, 29
  02dab9c  rlwimi 3, 5, 4, 28, 28
  02daba0  fsub 6, 1, 29
  02daba4  ori 5, 4, 0
  02daba8  rlwimi 5, 3, 2, 26, 28
  02dabac  slwi 3, 3, 2
  02dabb0  clrldi 5, 5, 32
  02dabb4  fsel 4, 2, 4, 7
  02dabb8  lfsx 1, 4, 3
  02dabbc  lfs 2, 4(5)
  02dabc0  fsel 3, 6, 5, 3
  02dabc4  fcmpu 0, 4, 29
  02dabc8  bt 1, 0x2dabd4
  02dabcc  fmr 30, 29
  02dabd0  b 0x2dacf8
  02dabd4  fsubs 5, 3, 4
  02dabd8  fadds 3, 3, 4
  02dabdc  addic 3, 1, 16
  02dabe0  li 6, 2
  02dabe4  addic 4, 3, 124
  02dabe8  addic 5, 3, 140
  02dabec  mtctr 6
  02dabf0  fdivs 3, 5, 3
  02dabf4  fmuls 4, 3, 3
  02dabf8  stfs 3, 152(1)
  02dabfc  stfs 3, 144(1)
  02dac00  stfs 3, 148(1)
  02dac04  stfs 3, 140(1)
  02dac08  lfs 6, 152(1)
  02dac0c  lfs 7, 144(1)
  02dac10  lfs 8, 148(1)
  02dac14  fmuls 5, 4, 4
  02dac18  fmuls 7, 7, 4
  02dac1c  fmuls 6, 6, 5
  02dac20  fmuls 3, 5, 5
  02dac24  fmuls 5, 8, 5
  02dac28  stfs 7, 144(1)
  02dac2c  fmuls 4, 6, 4
  02dac30  stfs 5, 148(1)
  02dac34  stfs 4, 152(1)
  02dac38  lfs 4, 124(3)
  02dac3c  fmuls 4, 4, 3
  02dac40  stfs 4, 140(3)
  02dac44  lfs 4, 4(4)
  02dac48  addic 3, 3, 8
  02dac4c  addic 4, 4, 8
  02dac50  fmuls 4, 4, 3
  02dac54  stfs 4, 4(5)
  02dac58  addic 5, 5, 8
  02dac5c  bdnz 0x2dac38
  02dac60  li 5, 4
  02dac64  ori 3, 1, 0
  02dac68  mtctr 5
  02dac6c  lis 4, 115
  02dac70  addic 5, 3, 140
  02dac74  addic 4, 4, 22752
  02dac78  ori 7, 5, 0
  02dac7c  lfs 3, 140(3)
  02dac80  lfs 4, 0(4)
  02dac84  fmuls 3, 3, 4
  02dac88  lfs 4, 4(4)
  02dac8c  addic 4, 4, 8
  02dac90  stfs 3, 140(3)
  02dac94  lfs 3, 4(5)
  02dac98  addic 3, 3, 8
  02dac9c  fmuls 3, 3, 4
  02daca0  stfs 3, 4(5)
  02daca4  addic 5, 5, 8
  02daca8  bdnz 0x2dac7c
  02dacac  fmr 30, 29
  02dacb0  ori 3, 1, 0
  02dacb4  mtctr 6
  02dacb8  lfs 3, 140(3)
  02dacbc  lfs 4, 4(7)
  02dacc0  fadds 3, 30, 3
  02dacc4  lfs 5, 8(7)
  02dacc8  addic 3, 3, 16
  02daccc  lfs 30, 12(7)
  02dacd0  addic 7, 7, 16
  02dacd4  fadds 3, 3, 4
  02dacd8  fadds 3, 3, 5
  02dacdc  fadds 30, 3, 30
  02dace0  bdnz 0x2dacb8
  02dace4  lis 3, 46
  02dace8  addi 3, 3, -22032
  02dacec  lfs 3, 8(3)
  02dacf0  fadds 30, 30, 3
  02dacf4  fmadds 30, 30, 1, 2
  02dacf8  lis 3, 151
  02dacfc  fmr 2, 30
  02dad00  addic 29, 3, -25376
  02dad04  lfs 1, 152(29)
  02dad08  bl 0x5026a0
  02dad0c  nop
  02dad10  fmr 5, 1
  02dad14  lis 3, 46
  02dad18  addi 3, 3, -22032
  02dad1c  lfs 6, 12(3)
  02dad20  lfs 2, 152(29)
  02dad24  fcmpu 0, 5, 6
  02dad28  lfs 1, 16(3)
  02dad2c  lfs 3, 0(31)
  02dad30  lfs 4, 4(31)
  02dad34  bt 1, 0x2dad60
  02dad38  lfs 5, 116(1)
  02dad3c  lfs 6, 112(1)
  02dad40  fsubs 5, 4, 5
  02dad44  fsubs 6, 3, 6
  02dad48  fmuls 5, 5, 5
  02dad4c  fmadds 5, 6, 6, 5
  02dad50  fsqrts 5, 5
  02dad54  fcmpu 0, 5, 1
  02dad58  cror 6, 1, 2
  02dad5c  bt 6, 0x2dae14
  02dad60  fmr 30, 2
  02dad64  lis 3, 46
  02dad68  addi 3, 3, -22032
  02dad6c  lfs 2, 20(3)
  02dad70  lfs 5, 24(3)
  02dad74  fadds 2, 30, 2
  02dad78  lfs 6, 28(3)
  02dad7c  fsubs 7, 5, 30
  02dad80  fsubs 5, 5, 2
  02dad84  fsub 9, 30, 7
  02dad88  fsubs 8, 6, 2
  02dad8c  fsubs 6, 6, 30
  02dad90  fsub 10, 2, 5
  02dad94  fsel 7, 9, 7, 30
  02dad98  fsel 2, 10, 5, 2
  02dad9c  fsub 9, 6, 7
  02dada0  lfs 5, 32(3)
  02dada4  fsub 10, 8, 2
  02dada8  fsel 6, 9, 6, 7
  02dadac  lfs 7, 36(3)
  02dadb0  fsel 2, 10, 8, 2
  02dadb4  fmuls 9, 6, 6
  02dadb8  lfs 8, 40(3)
  02dadbc  lfs 12, 44(3)
  02dadc0  fmuls 10, 2, 2
  02dadc4  fmuls 11, 9, 6
  02dadc8  fmuls 13, 10, 2
  02dadcc  fmuls 0, 9, 11
  02dadd0  fmadds 6, 11, 5, 6
  02dadd4  fmuls 11, 10, 13
  02dadd8  fmadds 2, 13, 5, 2
  02daddc  fmuls 5, 9, 0
  02dade0  fmadds 6, 0, 7, 6
  02dade4  fmuls 13, 10, 11
  02dade8  fmadds 2, 11, 7, 2
  02dadec  fmuls 7, 9, 5
  02dadf0  fmadds 5, 5, 8, 6
  02dadf4  fmuls 6, 10, 13
  02dadf8  fmadds 2, 13, 8, 2
  02dadfc  fmadds 5, 7, 12, 5
  02dae00  fmadds 2, 6, 12, 2
  02dae04  fmadds 4, 5, 1, 4
  02dae08  fmadds 1, 2, 1, 3
  02dae0c  stfs 4, 116(1)
  02dae10  stfs 1, 112(1)
  02dae14  lis 3, 46
  02dae18  addi 3, 3, -22032
  02dae1c  lis 4, 114
  02dae20  fmr 28, 29
  02dae24  lfs 1, 20(3)
  02dae28  lfs 2, 24(3)
  02dae2c  fadds 1, 30, 1
  02dae30  lfs 3, 28(3)
  02dae34  fsubs 4, 2, 30
  02dae38  fsubs 5, 3, 30
  02dae3c  li 5, 0
  02dae40  li 7, 0
  02dae44  fsubs 2, 2, 1
  02dae48  fsub 6, 30, 4
  02dae4c  fsubs 3, 3, 1
  02dae50  fsub 7, 1, 2
  02dae54  fsel 4, 6, 4, 30
  02dae58  lfs 6, 32(3)
  02dae5c  fsel 1, 7, 2, 1
  02dae60  fsub 2, 5, 4
  02dae64  fsub 8, 3, 1
  02dae68  fsel 2, 2, 5, 4
  02dae6c  lfs 4, 36(3)
  02dae70  lfs 29, 48(3)
  02dae74  lfs 30, -3052(4)
  02dae78  lfs 5, 40(3)
  02dae7c  fmuls 30, 30, 29
  02dae80  addic 4, 1, 112
  02dae84  fsel 1, 8, 3, 1
  02dae88  fmuls 3, 2, 2
  02dae8c  fmuls 7, 1, 1
  02dae90  fmuls 8, 3, 2
  02dae94  fmuls 10, 7, 1
  02dae98  fmuls 11, 3, 8
  02dae9c  fmadds 2, 8, 6, 2
  02daea0  lfs 8, 44(3)
  02daea4  stw 5, 8(30)
  02daea8  ori 3, 31, 0
  02daeac  fmuls 9, 7, 10
  02daeb0  fmadds 1, 10, 6, 1
  02daeb4  fmuls 6, 3, 11
  02daeb8  fmadds 2, 11, 4, 2
  02daebc  fmuls 10, 7, 9
  02daec0  fmadds 1, 9, 4, 1
  02daec4  fmuls 3, 3, 6
  02daec8  fmadds 2, 6, 5, 2
  02daecc  fmuls 4, 7, 10
  02daed0  fmadds 5, 10, 5, 1
  02daed4  fmr 1, 30
  02daed8  fmadds 3, 3, 8, 2
  02daedc  fneg 2, 31
  02daee0  fmadds 4, 4, 8, 5
  02daee4  fmuls 3, 3, 30
  02daee8  fmuls 4, 4, 30
  02daeec  stfs 3, 4(30)
  02daef0  stfs 4, 0(30)
  02daef4  bl 0x108180
  02daef8  nop
  02daefc  fmr 2, 1
  02daf00  lis 3, 150
  02daf04  li 4, 5
  02daf08  fmr 1, 28
  02daf0c  addic 3, 3, 19008
  02daf10  stfs 2, 8(30)
  02daf14  lwz 3, 160(3)
  02daf18  and 3, 3, 4
  02daf1c  cmpwi 3, 0
  02daf20  bt 2, 0x2daf4c
  02daf24  lis 3, 151
  02daf28  addic 3, 3, -25432
  02daf2c  lbz 3, 10(3)
  02daf30  bl 0x502730
  02daf34  nop
  02daf38  lis 3, 46
  02daf3c  lfs 2, 8(30)
  02daf40  addi 3, 3, -22032
  02daf44  lfs 3, 52(3)
  02daf48  fmuls 1, 1, 3
  02daf4c  fadds 1, 1, 29
  02daf50  lis 3, 46
  02daf54  addi 3, 3, -22032
  02daf58  lfs 3, 56(3)
  02daf5c  fdivs 1, 1, 30
  02daf60  fmuls 31, 31, 1
  02daf64  fmuls 31, 31, 3
  02daf68  fcmpu 0, 2, 31
  02daf6c  cror 6, 0, 2
  02daf70  bt 6, 0x2daf78
  02daf74  stfs 31, 8(30)
  02daf78  ld 0, 256(1)
  02daf7c  mtlr 0
  02daf80  lfd 28, 208(1)
  02daf84  lfd 29, 216(1)
  02daf88  lfd 30, 224(1)
  02daf8c  lfd 31, 232(1)
  02daf90  ld 29, 184(1)
  02daf94  ld 30, 192(1)
  02daf98  ld 31, 200(1)
  02daf9c  addi 1, 1, 240
  02dafa0  blr

UpdateMoby_192:   # 0x2db020, 0xd8c bytes
  02db020  stdu 1, -640(1)
  02db024  mflr 0
  02db028  std 0, 656(1)
  02db02c  stfd 16, 512(1)
  02db030  stfd 17, 520(1)
  02db034  stfd 18, 528(1)
  02db038  stfd 19, 536(1)
  02db03c  stfd 20, 544(1)
  02db040  stfd 21, 552(1)
  02db044  stfd 22, 560(1)
  02db048  stfd 23, 568(1)
  02db04c  stfd 24, 576(1)
  02db050  stfd 25, 584(1)
  02db054  stfd 26, 592(1)
  02db058  stfd 27, 600(1)
  02db05c  stfd 28, 608(1)
  02db060  stfd 29, 616(1)
  02db064  stfd 30, 624(1)
  02db068  stfd 31, 632(1)
  02db06c  std 31, 504(1)
  02db070  cmpwi 3, 0
  02db074  std 30, 496(1)
  02db078  std 29, 488(1)
  02db07c  std 28, 480(1)
  02db080  std 27, 472(1)
  02db084  std 26, 464(1)
  02db088  std 25, 456(1)
  02db08c  std 24, 448(1)
  02db090  std 23, 440(1)
  02db094  ori 31, 3, 0
  02db098  bt 2, 0x2dbd38
  02db09c  lis 3, 46
  02db0a0  lwz 30, 120(31)
  02db0a4  lis 4, -16968
  02db0a8  addi 3, 3, -20572
  02db0ac  li 5, 0
  02db0b0  lis 6, -17245
  02db0b4  ori 4, 4, 20972
  02db0b8  lis 29, 149
  02db0bc  ori 6, 6, 55050
  02db0c0  lfs 25, 0(3)
  02db0c4  stw 5, 128(1)
  02db0c8  addic 28, 1, 240
  02db0cc  addic 29, 29, 5056
  02db0d0  stw 4, 132(1)
  02db0d4  ori 3, 28, 0
  02db0d8  stw 6, 136(1)
  02db0dc  ori 4, 29, 0
  02db0e0  stw 5, 140(1)
  02db0e4  bl 0x500fa8
  02db0e8  nop
  02db0ec  addic 3, 1, 352
  02db0f0  ori 4, 28, 0
  02db0f4  bl 0x5010c0
  02db0f8  nop
  02db0fc  cmpwi 30, 0
  02db100  bt 2, 0x2dbd38
  02db104  lwz 3, 88(30)
  02db108  cmpwi 3, 3
  02db10c  bf 0, 0x2db11c
  02db110  addic 3, 3, 1
  02db114  stw 3, 88(30)
  02db118  b 0x2dbd38
  02db11c  addic 5, 1, 112
  02db120  ori 3, 31, 0
  02db124  li 4, 0
  02db128  bl 0xf1114
  02db12c  nop
  02db130  addic 28, 1, 288
  02db134  ori 3, 31, 0
  02db138  li 4, 0
  02db13c  ori 5, 28, 0
  02db140  bl 0xf1038
  02db144  nop
  02db148  addic 3, 1, 144
  02db14c  addic 4, 1, 128
  02db150  ori 5, 28, 0
  02db154  bl 0x5e825c
  02db158  nop
  02db15c  lfs 1, 112(1)
  02db160  lfs 2, 144(1)
  02db164  lwz 3, 80(30)
  02db168  fadds 1, 1, 2
  02db16c  cmpwi 3, 0
  02db170  stfs 1, 64(30)
  02db174  lfs 1, 116(1)
  02db178  lfs 2, 148(1)
  02db17c  fadds 1, 1, 2
  02db180  stfs 1, 68(30)
  02db184  lfs 1, 120(1)
  02db188  lfs 2, 152(1)
  02db18c  fadds 1, 1, 2
  02db190  stfs 1, 72(30)
  02db194  lfs 1, 124(1)
  02db198  stfs 1, 76(30)
  02db19c  bt 2, 0x2db1ac
  02db1a0  li 4, 1
  02db1a4  stw 4, 152(3)
  02db1a8  lwz 3, 80(30)
  02db1ac  cmpwi 3, 0
  02db1b0  bt 2, 0x2db1c8
  02db1b4  lbz 3, 32(3)
  02db1b8  cmpwi 3, 254
  02db1bc  cmpwi 1, 3, 253
  02db1c0  bt 2, 0x2db1c8
  02db1c4  bf 6, 0x2db1d0
  02db1c8  li 3, 0
  02db1cc  stw 3, 80(30)
  02db1d0  lis 25, 151
  02db1d4  addic 25, 25, -25376
  02db1d8  lwz 3, 8324(25)
  02db1dc  cmpwi 3, 1
  02db1e0  bf 2, 0x2db1f4
  02db1e4  li 3, 30
  02db1e8  li 4, 1
  02db1ec  bl 0xb72b0
  02db1f0  nop
  02db1f4  addic 3, 30, 84
  02db1f8  bl 0x4fff60
  02db1fc  nop
  02db200  ori 5, 3, 0
  02db204  lwz 4, 8324(25)
  02db208  lwz 3, 4256(25)
  02db20c  cmpwi 5, 0
  02db210  bt 2, 0x2db2f4
  02db214  lbz 5, 8364(25)
  02db218  cmpwi 5, 0
  02db21c  bf 2, 0x2db2f4
  02db220  lbz 5, 8360(25)
  02db224  cmpwi 5, 0
  02db228  bt 2, 0x2db25c
  02db22c  lis 5, 46
  02db230  lis 6, 114
  02db234  addi 5, 5, -20572
  02db238  lfs 1, 4(5)
  02db23c  lfs 2, -3056(6)
  02db240  lwz 5, 444(25)
  02db244  fmuls 1, 2, 1
  02db248  fctiwz 1, 1
  02db24c  stfd 1, 416(1)
  02db250  lwz 6, 420(1)
  02db254  cmpw 5, 6
  02db258  bt 2, 0x2db2cc
  02db25c  lis 5, 150
  02db260  cmpwi 1, 4, 30
  02db264  addic 5, 5, 19008
  02db268  lwz 5, 164(5)
  02db26c  and 3, 5, 3
  02db270  cmpwi 3, 0
  02db274  crorc 2, 2, 6
  02db278  bt 2, 0x2db294
  02db27c  li 3, -1
  02db280  bl 0x8e0f4
  02db284  nop
  02db288  cmpwi 3, 0
  02db28c  bf 2, 0x2db2cc
  02db290  lwz 4, 8324(25)
  02db294  cmpwi 4, 35
  02db298  bf 2, 0x2db2f4
  02db29c  lis 3, 46
  02db2a0  lis 4, 114
  02db2a4  addi 3, 3, -20572
  02db2a8  lfs 1, 8(3)
  02db2ac  lfs 2, -3056(4)
  02db2b0  lwz 3, 408(25)
  02db2b4  fmuls 1, 2, 1
  02db2b8  fctiwz 1, 1
  02db2bc  stfd 1, 416(1)
  02db2c0  lwz 4, 420(1)
  02db2c4  cmpw 3, 4
  02db2c8  bf 2, 0x2db2f4
  02db2cc  li 3, 26
  02db2d0  li 4, 0
  02db2d4  bl 0x816ec
  02db2d8  nop
  02db2dc  li 3, -1
  02db2e0  li 4, 1
  02db2e4  bl 0xaa258
  02db2e8  nop
  02db2ec  li 3, 3
  02db2f0  stb 3, 32(31)
  02db2f4  lwz 27, 80(30)
  02db2f8  cmpwi 27, 0
  02db2fc  bt 2, 0x2dba90
  02db300  lis 3, 46
  02db304  lwz 27, 120(27)
  02db308  addi 28, 3, -20572
  02db30c  lfs 26, 20(28)
  02db310  lfs 24, 12(28)
  02db314  lfs 31, 16(28)
  02db318  lfs 30, 1600(25)
  02db31c  lfs 29, 1604(25)
  02db320  lfs 28, 1608(25)
  02db324  lfs 2, 1652(25)
  02db328  lfs 27, 1612(25)
  02db32c  lfs 1, 1648(25)
  02db330  bl 0x5e8338
  02db334  nop
  02db338  fmr 2, 1
  02db33c  fmr 1, 26
  02db340  bl 0x502578
  02db344  nop
  02db348  lfs 23, 24(28)
  02db34c  lfs 22, 28(28)
  02db350  fadds 1, 1, 23
  02db354  lfs 21, 32(28)
  02db358  lfs 20, 36(28)
  02db35c  lfs 19, 40(28)
  02db360  lfs 18, 44(28)
  02db364  lfs 17, 48(28)
  02db368  lfs 16, 52(28)
  02db36c  fsubs 2, 22, 1
  02db370  fsubs 3, 21, 1
  02db374  fsub 4, 1, 2
  02db378  fsel 1, 4, 2, 1
  02db37c  fsub 2, 3, 1
  02db380  fsel 1, 2, 3, 1
  02db384  fmuls 3, 1, 1
  02db388  fmuls 4, 3, 1
  02db38c  fmuls 2, 3, 4
  02db390  fmadds 1, 4, 20, 1
  02db394  fmuls 5, 3, 2
  02db398  fmadds 6, 2, 19, 1
  02db39c  lfs 2, 1652(25)
  02db3a0  lfs 1, 1648(25)
  02db3a4  fmuls 3, 3, 5
  02db3a8  fmadds 4, 5, 18, 6
  02db3ac  fmadds 3, 3, 17, 4
  02db3b0  fmuls 3, 3, 16
  02db3b4  stfs 3, 160(1)
  02db3b8  bl 0x5e8338
  02db3bc  nop
  02db3c0  fmr 2, 1
  02db3c4  fmr 1, 26
  02db3c8  bl 0x502578
  02db3cc  nop
  02db3d0  fsubs 2, 22, 1
  02db3d4  fsubs 3, 21, 1
  02db3d8  li 3, 0
  02db3dc  fsub 4, 1, 2
  02db3e0  fsel 1, 4, 2, 1
  02db3e4  fsub 2, 3, 1
  02db3e8  fsel 1, 2, 3, 1
  02db3ec  lfs 2, 160(1)
  02db3f0  lfs 4, 128(25)
  02db3f4  lfs 6, 132(25)
  02db3f8  fadds 2, 2, 4
  02db3fc  stw 3, 168(1)
  02db400  fmuls 3, 1, 1
  02db404  stfs 2, 160(1)
  02db408  fmuls 5, 3, 1
  02db40c  fmuls 4, 3, 5
  02db410  fmadds 1, 5, 20, 1
  02db414  fmuls 5, 3, 4
  02db418  fmadds 1, 4, 19, 1
  02db41c  lfs 4, 136(25)
  02db420  fmuls 3, 3, 5
  02db424  fmadds 1, 5, 18, 1
  02db428  fmadds 2, 3, 17, 1
  02db42c  fmr 1, 30
  02db430  fmuls 3, 2, 16
  02db434  fmr 2, 29
  02db438  fadds 5, 3, 6
  02db43c  stfs 3, 164(1)
  02db440  stfs 5, 164(1)
  02db444  lfs 3, 56(28)
  02db448  fadds 3, 4, 3
  02db44c  stfs 3, 168(1)
  02db450  bl 0x5e8338
  02db454  nop
  02db458  lis 26, 150
  02db45c  fmr 26, 1
  02db460  li 4, 5
  02db464  fmr 1, 25
  02db468  addic 26, 26, 19008
  02db46c  lwz 3, 160(26)
  02db470  and 4, 3, 4
  02db474  cmpwi 4, 0
  02db478  bt 2, 0x2db4a4
  02db47c  lis 3, 151
  02db480  addic 3, 3, -25432
  02db484  lbz 3, 10(3)
  02db488  bl 0x502730
  02db48c  nop
  02db490  lis 3, 46
  02db494  addi 4, 3, -20572
  02db498  lwz 3, 160(26)
  02db49c  lfs 2, 60(4)
  02db4a0  fmuls 1, 1, 2
  02db4a4  lis 4, 46
  02db4a8  fmr 2, 30
  02db4ac  addi 4, 4, -20572
  02db4b0  lfs 30, 64(4)
  02db4b4  lfs 3, 160(1)
  02db4b8  fadds 1, 1, 30
  02db4bc  lfs 4, 164(1)
  02db4c0  lfs 5, 168(1)
  02db4c4  li 4, 5
  02db4c8  stfs 27, 188(1)
  02db4cc  and 3, 3, 4
  02db4d0  cmpwi 3, 0
  02db4d4  fmadds 2, 2, 1, 3
  02db4d8  fmadds 3, 29, 1, 4
  02db4dc  fmadds 1, 28, 1, 5
  02db4e0  stfs 2, 176(1)
  02db4e4  stfs 3, 180(1)
  02db4e8  stfs 1, 184(1)
  02db4ec  bt 2, 0x2db84c
  02db4f0  lbz 3, 8364(25)
  02db4f4  cmpwi 3, 0
  02db4f8  bf 2, 0x2db84c
  02db4fc  li 6, 0
  02db500  lis 7, 16256
  02db504  addic 3, 1, 192
  02db508  addic 5, 1, 352
  02db50c  stw 6, 192(1)
  02db510  stw 6, 196(1)
  02db514  ori 4, 3, 0
  02db518  stw 7, 200(1)
  02db51c  stw 6, 204(1)
  02db520  bl 0x5e825c
  02db524  nop
  02db528  lwz 3, 8320(25)
  02db52c  lfs 2, 196(1)
  02db530  lfs 1, 192(1)
  02db534  lfs 31, 72(3)
  02db538  bl 0x5e8338
  02db53c  nop
  02db540  fmr 2, 1
  02db544  fmr 1, 31
  02db548  bl 0x5025e0
  02db54c  nop
  02db550  lfs 1, 192(1)
  02db554  lfs 2, 196(1)
  02db558  bl 0x5e8338
  02db55c  nop
  02db560  lfs 2, 196(1)
  02db564  fmr 27, 1
  02db568  lfs 3, 192(1)
  02db56c  fmuls 4, 2, 2
  02db570  lfs 2, 200(1)
  02db574  fmadds 1, 3, 3, 4
  02db578  fsqrts 1, 1
  02db57c  bl 0x5e8338
  02db580  nop
  02db584  lis 3, 46
  02db588  addi 3, 3, -20572
  02db58c  li 4, 5
  02db590  lfs 2, 68(3)
  02db594  lfs 31, 72(3)
  02db598  lwz 3, 160(26)
  02db59c  and 3, 3, 4
  02db5a0  cmpwi 3, 0
  02db5a4  fsub 3, 2, 1
  02db5a8  fsel 1, 3, 1, 2
  02db5ac  fsub 2, 1, 31
  02db5b0  fsel 31, 2, 1, 31
  02db5b4  fmr 1, 25
  02db5b8  bt 2, 0x2db5e0
  02db5bc  lis 3, 151
  02db5c0  addic 3, 3, -25432
  02db5c4  lbz 3, 10(3)
  02db5c8  bl 0x502730
  02db5cc  nop
  02db5d0  lis 3, 46
  02db5d4  addi 3, 3, -20572
  02db5d8  lfs 2, 60(3)
  02db5dc  fmuls 1, 1, 2
  02db5e0  fadds 1, 1, 30
  02db5e4  addic 3, 1, 192
  02db5e8  fmr 2, 27
  02db5ec  fmr 3, 31
  02db5f0  bl 0xfe610
  02db5f4  nop
  02db5f8  lfs 1, 196(1)
  02db5fc  lfs 2, 192(1)
  02db600  fmuls 1, 1, 1
  02db604  lis 3, 46
  02db608  lis 4, 114
  02db60c  addi 3, 3, -20572
  02db610  fmadds 1, 2, 2, 1
  02db614  lfs 4, 76(3)
  02db618  lfs 2, -3048(4)
  02db61c  lfs 29, 80(3)
  02db620  lfs 31, 200(1)
  02db624  li 3, 5
  02db628  lwz 4, 160(26)
  02db62c  fmuls 28, 2, 29
  02db630  and 3, 4, 3
  02db634  fsqrts 3, 1
  02db638  cmpwi 3, 0
  02db63c  fmr 1, 25
  02db640  fsub 5, 25, 3
  02db644  fsub 6, 3, 25
  02db648  fsel 4, 5, 4, 3
  02db64c  fsel 3, 6, 4, 3
  02db650  fdivs 31, 31, 3
  02db654  bt 2, 0x2db684
  02db658  lis 3, 151
  02db65c  addic 3, 3, -25432
  02db660  lbz 3, 10(3)
  02db664  bl 0x502730
  02db668  nop
  02db66c  lis 3, 46
  02db670  lis 4, 114
  02db674  addi 3, 3, -20572
  02db678  lfs 3, 60(3)
  02db67c  lfs 2, -3048(4)
  02db680  fmuls 1, 1, 3
  02db684  fadds 1, 1, 30
  02db688  lis 3, 46
  02db68c  addi 3, 3, -20572
  02db690  fsubs 4, 24, 31
  02db694  fmuls 24, 2, 29
  02db698  lfs 3, 84(3)
  02db69c  fmuls 1, 28, 1
  02db6a0  fmuls 1, 1, 3
  02db6a4  lfs 3, 88(3)
  02db6a8  fsqrts 1, 1
  02db6ac  fmuls 2, 1, 3
  02db6b0  fmuls 1, 2, 1
  02db6b4  fmuls 1, 1, 4
  02db6b8  fdivs 24, 1, 24
  02db6bc  fcmpu 0, 24, 25
  02db6c0  fmuls 31, 31, 24
  02db6c4  cror 6, 0, 2
  02db6c8  bt 6, 0x2dba20
  02db6cc  fadds 1, 27, 23
  02db6d0  fsubs 2, 22, 27
  02db6d4  fsubs 3, 21, 27
  02db6d8  addic 3, 29, 320
  02db6dc  addic 4, 1, 208
  02db6e0  li 5, 2
  02db6e4  fsubs 4, 22, 1
  02db6e8  fsub 5, 27, 2
  02db6ec  fsubs 6, 21, 1
  02db6f0  ori 6, 31, 0
  02db6f4  li 7, 0
  02db6f8  fsub 7, 1, 4
  02db6fc  fsel 2, 5, 2, 27
  02db700  fsel 1, 7, 4, 1
  02db704  fsub 4, 3, 2
  02db708  fsub 5, 6, 1
  02db70c  fsel 2, 4, 3, 2
  02db710  fsel 1, 5, 6, 1
  02db714  fmuls 3, 2, 2
  02db718  fmuls 4, 1, 1
  02db71c  fmuls 5, 3, 2
  02db720  fmuls 6, 4, 1
  02db724  fmuls 7, 3, 5
  02db728  fmadds 2, 5, 20, 2
  02db72c  fmuls 5, 4, 6
  02db730  fmadds 1, 6, 20, 1
  02db734  fmuls 6, 3, 7
  02db738  fmadds 2, 7, 19, 2
  02db73c  fmuls 7, 4, 5
  02db740  fmadds 1, 5, 19, 1
  02db744  fmuls 3, 3, 6
  02db748  fmadds 2, 6, 18, 2
  02db74c  fmuls 4, 4, 7
  02db750  fmadds 1, 7, 18, 1
  02db754  fmadds 29, 3, 17, 2
  02db758  lfs 2, 320(29)
  02db75c  lfs 3, 324(29)
  02db760  lfs 5, 328(29)
  02db764  stfs 31, 200(1)
  02db768  fmadds 23, 4, 17, 1
  02db76c  fadds 1, 5, 31
  02db770  fmuls 29, 29, 24
  02db774  lfs 4, 332(29)
  02db778  fmuls 23, 23, 24
  02db77c  fadds 3, 3, 29
  02db780  stfs 29, 196(1)
  02db784  stfs 1, 216(1)
  02db788  stfs 4, 220(1)
  02db78c  fadds 1, 2, 23
  02db790  stfs 23, 192(1)
  02db794  stfs 3, 212(1)
  02db798  stfs 1, 208(1)
  02db79c  bl 0x57820
  02db7a0  nop
  02db7a4  cmpwi 3, 0
  02db7a8  bt 2, 0x2db800
  02db7ac  lis 3, 161
  02db7b0  lwz 4, 8320(25)
  02db7b4  addic 3, 3, 2368
  02db7b8  lwz 5, 24(3)
  02db7bc  cmpw 5, 4
  02db7c0  bt 2, 0x2db800
  02db7c4  lfs 1, 32(3)
  02db7c8  lfs 2, 36(3)
  02db7cc  stfs 1, 176(1)
  02db7d0  lfs 3, 40(3)
  02db7d4  stfs 2, 180(1)
  02db7d8  lfs 4, 44(3)
  02db7dc  stfs 3, 184(1)
  02db7e0  lfs 3, 160(1)
  02db7e4  stfs 4, 188(1)
  02db7e8  lfs 4, 164(1)
  02db7ec  fsubs 1, 1, 3
  02db7f0  fsubs 2, 2, 4
  02db7f4  bl 0x5e8338
  02db7f8  nop
  02db7fc  b 0x2dba20
  02db800  lis 3, 46
  02db804  addi 3, 3, -20572
  02db808  lfs 1, 92(3)
  02db80c  lfs 2, 320(29)
  02db810  fmuls 5, 23, 1
  02db814  lfs 3, 324(29)
  02db818  fmuls 6, 29, 1
  02db81c  lfs 4, 328(29)
  02db820  fmuls 1, 31, 1
  02db824  fadds 2, 5, 2
  02db828  fadds 3, 6, 3
  02db82c  fadds 4, 1, 4
  02db830  stfs 5, 176(1)
  02db834  stfs 6, 180(1)
  02db838  stfs 1, 184(1)
  02db83c  stfs 2, 176(1)
  02db840  stfs 3, 180(1)
  02db844  stfs 4, 184(1)
  02db848  b 0x2dba20
  02db84c  lis 3, 165
  02db850  li 4, 0
  02db854  lwz 28, -27836(3)
  02db858  stw 4, 2640(25)
  02db85c  cmpwi 28, 0
  02db860  bt 2, 0x2dba20
  02db864  lis 3, 46
  02db868  ori 24, 29, 0
  02db86c  addi 3, 3, -20572
  02db870  lis 23, 165
  02db874  li 29, 0
  02db878  addic 24, 24, 320
  02db87c  addic 23, 23, -27836
  02db880  lfs 24, 96(3)
  02db884  lfs 23, 100(3)
  02db888  lfs 22, 104(3)
  02db88c  lfs 21, 108(3)
  02db890  lfs 20, 88(3)
  02db894  ori 3, 28, 0
  02db898  bl 0xfcccc
  02db89c  nop
  02db8a0  lbz 4, 32(28)
  02db8a4  cmpwi 4, 128
  02db8a8  bf 0, 0x2dba0c
  02db8ac  cmpwi 3, 0
  02db8b0  bt 2, 0x2dba0c
  02db8b4  lhz 4, 52(28)
  02db8b8  rlwinm 4, 4, 0, 19, 19
  02db8bc  cmpwi 4, 0
  02db8c0  bt 2, 0x2dba0c
  02db8c4  lfs 1, 16(28)
  02db8c8  stfs 1, 224(1)
  02db8cc  lfs 2, 20(28)
  02db8d0  lfs 3, 164(1)
  02db8d4  stfs 2, 228(1)
  02db8d8  fsubs 4, 3, 2
  02db8dc  lfs 5, 24(28)
  02db8e0  lfs 6, 160(1)
  02db8e4  fsubs 2, 2, 3
  02db8e8  stfs 5, 232(1)
  02db8ec  fsubs 8, 6, 1
  02db8f0  lfs 7, 28(28)
  02db8f4  fsubs 1, 1, 6
  02db8f8  stfs 7, 236(1)
  02db8fc  lfs 7, 16(3)
  02db900  fadds 5, 5, 7
  02db904  fmuls 4, 4, 4
  02db908  fmadds 29, 8, 8, 4
  02db90c  stfs 5, 232(1)
  02db910  fsqrts 29, 29
  02db914  bl 0x5e8338
  02db918  nop
  02db91c  lfs 2, 164(1)
  02db920  lfs 3, 228(1)
  02db924  fmr 28, 1
  02db928  lfs 4, 160(1)
  02db92c  fsubs 2, 2, 3
  02db930  lfs 3, 224(1)
  02db934  lfs 1, 232(1)
  02db938  fsubs 3, 4, 3
  02db93c  lfs 4, 168(1)
  02db940  fmuls 5, 2, 2
  02db944  fsubs 2, 1, 4
  02db948  fmadds 1, 3, 3, 5
  02db94c  fsqrts 1, 1
  02db950  bl 0x5e8338
  02db954  nop
  02db958  fmr 2, 28
  02db95c  fmr 27, 1
  02db960  fmr 1, 26
  02db964  bl 0x5026a0
  02db968  nop
  02db96c  fcmpu 0, 1, 24
  02db970  lfs 2, 232(1)
  02db974  lfs 3, 168(1)
  02db978  bt 0, 0x2db994
  02db97c  fcmpu 0, 29, 23
  02db980  cror 6, 1, 2
  02db984  bt 6, 0x2dba0c
  02db988  fcmpu 0, 1, 22
  02db98c  cror 6, 1, 2
  02db990  bt 6, 0x2dba0c
  02db994  fcmpu 0, 31, 29
  02db998  cror 6, 0, 2
  02db99c  bt 6, 0x2dba0c
  02db9a0  fcmpu 0, 27, 21
  02db9a4  cror 6, 1, 2
  02db9a8  bt 6, 0x2dba0c
  02db9ac  fsubs 1, 2, 3
  02db9b0  fcmpu 0, 1, 20
  02db9b4  cror 6, 1, 2
  02db9b8  bt 6, 0x2dba0c
  02db9bc  ori 3, 24, 0
  02db9c0  addic 4, 1, 224
  02db9c4  li 5, 6
  02db9c8  ori 6, 31, 0
  02db9cc  li 7, 0
  02db9d0  bl 0x57820
  02db9d4  nop
  02db9d8  cmpwi 3, 0
  02db9dc  bf 2, 0x2dba0c
  02db9e0  stw 28, 2640(25)
  02db9e4  fmr 31, 29
  02db9e8  lfs 1, 224(1)
  02db9ec  fmr 26, 28
  02db9f0  lfs 2, 228(1)
  02db9f4  stfs 1, 176(1)
  02db9f8  lfs 1, 232(1)
  02db9fc  stfs 2, 180(1)
  02dba00  lfs 2, 236(1)
  02dba04  stfs 1, 184(1)
  02dba08  stfs 2, 188(1)
  02dba0c  addic 29, 29, 4
  02dba10  extsw 3, 29
  02dba14  lwzx 28, 23, 3
  02dba18  cmpwi 28, 0
  02dba1c  bf 2, 0x2db894
  02dba20  lis 3, 46
  02dba24  lwz 6, 160(26)
  02dba28  lis 4, 114
  02dba2c  addi 3, 3, -20572
  02dba30  li 5, 5
  02dba34  and 5, 6, 5
  02dba38  lfs 31, 80(3)
  02dba3c  cmpwi 5, 0
  02dba40  lfs 1, -3048(4)
  02dba44  lfs 29, 112(3)
  02dba48  fmuls 31, 1, 31
  02dba4c  bt 2, 0x2dba74
  02dba50  lis 3, 151
  02dba54  addic 3, 3, -25432
  02dba58  lbz 3, 10(3)
  02dba5c  bl 0x502730
  02dba60  nop
  02dba64  lis 3, 46
  02dba68  addi 3, 3, -20572
  02dba6c  lfs 25, 60(3)
  02dba70  fmuls 25, 1, 25
  02dba74  addic 4, 1, 176
  02dba78  fadds 3, 25, 30
  02dba7c  addic 3, 1, 160
  02dba80  fmr 1, 31
  02dba84  ori 5, 27, 0
  02dba88  fmr 2, 29
  02dba8c  bl 0x2daa30
  02dba90  lbz 3, 32(31)
  02dba94  cmpwi 3, 6
  02dba98  cmpwi 1, 3, 5
  02dba9c  cmpwi 6, 3, 4
  02dbaa0  cmpwi 7, 3, 3
  02dbaa4  bt 2, 0x2dbca8
  02dbaa8  bt 6, 0x2dbc9c
  02dbaac  bt 26, 0x2dbc78
  02dbab0  bt 30, 0x2dbb24
  02dbab4  cmpwi 3, 2
  02dbab8  bt 2, 0x2dbcbc
  02dbabc  cmpwi 3, 1
  02dbac0  bt 2, 0x2dbb08
  02dbac4  cmpwi 3, 0
  02dbac8  bf 2, 0x2dbcbc
  02dbacc  li 3, 0
  02dbad0  li 5, 0
  02dbad4  li 4, 1
  02dbad8  li 6, 2
  02dbadc  stw 3, 80(30)
  02dbae0  lbz 3, 112(31)
  02dbae4  subc 4, 4, 6
  02dbae8  rlwinm 3, 3, 0, 30, 30
  02dbaec  subc 3, 5, 3
  02dbaf0  cntlzw 3, 3
  02dbaf4  sldi 3, 3, 58
  02dbaf8  sradi 3, 3, 63
  02dbafc  and 3, 3, 4
  02dbb00  addc 3, 6, 3
  02dbb04  stb 3, 32(31)
  02dbb08  lbz 3, 112(31)
  02dbb0c  rlwinm 3, 3, 0, 30, 30
  02dbb10  cmpwi 3, 0
  02dbb14  bt 2, 0x2dbcbc
  02dbb18  li 3, 2
  02dbb1c  stb 3, 32(31)
  02dbb20  b 0x2dbcbc
  02dbb24  lwz 3, 80(30)
  02dbb28  cmpwi 3, 0
  02dbb2c  bf 2, 0x2dbb48
  02dbb30  ori 3, 31, 0
  02dbb34  addic 4, 30, 64
  02dbb38  bl 0x200c38
  02dbb3c  nop
  02dbb40  stw 3, 80(30)
  02dbb44  b 0x2dbcbc
  02dbb48  ori 4, 3, 0
  02dbb4c  addic 3, 1, 160
  02dbb50  lwz 5, 120(4)
  02dbb54  bl 0x200fd0
  02dbb58  nop
  02dbb5c  lis 4, 161
  02dbb60  lis 3, 0
  02dbb64  addic 4, 4, -732
  02dbb68  ori 6, 3, 65535
  02dbb6c  lhz 3, 80(4)
  02dbb70  lhz 5, 82(4)
  02dbb74  cmpw 3, 6
  02dbb78  lwz 6, 84(4)
  02dbb7c  bf 0, 0x2dbb88
  02dbb80  addic 3, 3, 1
  02dbb84  sth 3, 80(4)
  02dbb88  lis 3, 161
  02dbb8c  lis 7, 114
  02dbb90  lwz 3, -2344(3)
  02dbb94  extsw 3, 3
  02dbb98  std 3, 416(1)
  02dbb9c  lis 3, 46
  02dbba0  addi 3, 3, -20572
  02dbba4  lfs 1, 84(3)
  02dbba8  lfs 2, -3056(7)
  02dbbac  lfd 3, 416(1)
  02dbbb0  lis 3, 6990
  02dbbb4  fcfid 3, 3
  02dbbb8  ori 7, 3, 33205
  02dbbbc  frsp 3, 3
  02dbbc0  fadds 1, 3, 1
  02dbbc4  fmuls 1, 2, 1
  02dbbc8  fctiwz 1, 1
  02dbbcc  stfd 1, 416(1)
  02dbbd0  lwz 3, 420(1)
  02dbbd4  mulhw 7, 7, 3
  02dbbd8  srawi 7, 7, 6
  02dbbdc  srwi 8, 7, 31
  02dbbe0  addc 7, 7, 8
  02dbbe4  cmpw 7, 5
  02dbbe8  bf 1, 0x2dbc08
  02dbbec  lis 5, 6990
  02dbbf0  ori 5, 5, 33205
  02dbbf4  mulhw 3, 5, 3
  02dbbf8  srawi 3, 3, 6
  02dbbfc  srwi 5, 3, 31
  02dbc00  addc 3, 3, 5
  02dbc04  sth 3, 82(4)
  02dbc08  lis 3, 151
  02dbc0c  li 5, 1
  02dbc10  vspltisw 3, -1
  02dbc14  lis 8, -32768
  02dbc18  lis 9, 46
  02dbc1c  li 7, 0
  02dbc20  lwz 3, -25488(3)
  02dbc24  li 10, 4
  02dbc28  vslw 3, 3, 3
  02dbc2c  slw 3, 5, 3
  02dbc30  addi 5, 9, -20572
  02dbc34  or 3, 6, 3
  02dbc38  li 6, 116
  02dbc3c  or 3, 3, 8
  02dbc40  lis 8, 114
  02dbc44  stw 3, 84(4)
  02dbc48  stw 7, 80(30)
  02dbc4c  li 3, -3056
  02dbc50  stb 10, 32(31)
  02dbc54  <unknown>
  02dbc58  vspltw 2, 2, 0
  02dbc5c  <unknown>
  02dbc60  li 3, 84
  02dbc64  vmaddfp 2, 4, 2, 3
  02dbc68  vctsxs 2, 2, 0
  02dbc6c  vspltw 2, 2, 0
  02dbc70  stvewx 2, 3, 30
  02dbc74  b 0x2dbcbc
  02dbc78  lwz 3, 8324(25)
  02dbc7c  cmpwi 3, 35
  02dbc80  bt 2, 0x2dbcbc
  02dbc84  lbz 3, 8360(25)
  02dbc88  cmpwi 3, 0
  02dbc8c  bf 2, 0x2dbcbc
  02dbc90  li 3, 2
  02dbc94  stb 3, 32(31)
  02dbc98  b 0x2dbcbc
  02dbc9c  li 3, 6
  02dbca0  stb 3, 32(31)
  02dbca4  b 0x2dbcbc
  02dbca8  lwz 3, 80(30)
  02dbcac  cmpwi 3, 0
  02dbcb0  bt 2, 0x2dbcbc
  02dbcb4  bl 0xefb38
  02dbcb8  nop
  02dbcbc  lwz 3, 80(30)
  02dbcc0  cmpwi 3, 0
  02dbcc4  bt 2, 0x2dbcec
  02dbcc8  lfs 1, 64(30)
  02dbccc  stfs 1, 16(3)
  02dbcd0  lfs 1, 68(30)
  02dbcd4  stfs 1, 20(3)
  02dbcd8  lfs 1, 72(30)
  02dbcdc  stfs 1, 24(3)
  02dbce0  lfs 1, 76(30)
  02dbce4  stfs 1, 28(3)
  02dbce8  b 0x2dbd38
  02dbcec  li 3, -1
  02dbcf0  bl 0x8e0f4
  02dbcf4  nop
  02dbcf8  cmpwi 3, 0
  02dbcfc  bt 2, 0x2dbd18
  02dbd00  ori 3, 31, 0
  02dbd04  addic 4, 30, 64
  02dbd08  bl 0x200c38
  02dbd0c  nop
  02dbd10  stw 3, 80(30)
  02dbd14  b 0x2dbd38
  02dbd18  lbz 3, 8360(25)
  02dbd1c  cmpwi 3, 0
  02dbd20  bt 2, 0x2dbd38
  02dbd24  ori 3, 31, 0
  02dbd28  addic 4, 30, 64
  02dbd2c  bl 0x200c38
  02dbd30  nop
  02dbd34  stw 3, 80(30)
  02dbd38  ld 0, 656(1)
  02dbd3c  mtlr 0
  02dbd40  lfd 16, 512(1)
  02dbd44  lfd 17, 520(1)
  02dbd48  lfd 18, 528(1)
  02dbd4c  lfd 19, 536(1)
  02dbd50  lfd 20, 544(1)
  02dbd54  lfd 21, 552(1)
  02dbd58  lfd 22, 560(1)
  02dbd5c  lfd 23, 568(1)
  02dbd60  lfd 24, 576(1)
  02dbd64  lfd 25, 584(1)
  02dbd68  lfd 26, 592(1)
  02dbd6c  lfd 27, 600(1)
  02dbd70  lfd 28, 608(1)
  02dbd74  lfd 29, 616(1)
  02dbd78  lfd 30, 624(1)
  02dbd7c  lfd 31, 632(1)
  02dbd80  ld 23, 440(1)
  02dbd84  ld 24, 448(1)
  02dbd88  ld 25, 456(1)
  02dbd8c  ld 26, 464(1)
  02dbd90  ld 27, 472(1)
  02dbd94  ld 28, 480(1)
  02dbd98  ld 29, 488(1)
  02dbd9c  ld 30, 496(1)
  02dbda0  ld 31, 504(1)
  02dbda4  addi 1, 1, 640
  02dbda8  blr
