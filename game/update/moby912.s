# game/update/moby912.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_004ad264:   # 0x4ad264, 0x58 bytes
  04ad264  lis 4, 165
  04ad268  sldi 3, 3, 2
  04ad26c  addic 5, 4, -28284
  04ad270  extsw 6, 3
  04ad274  lis 4, 164
  04ad278  li 3, 0
  04ad27c  lwzx 5, 5, 6
  04ad280  lhz 6, 0(5)
  04ad284  lwz 7, -28512(4)
  04ad288  rlwinm 6, 6, 8, 9, 23
  04ad28c  addc 6, 7, 6
  04ad290  clrldi 6, 6, 32
  04ad294  lbz 7, 32(6)
  04ad298  cmpwi 7, 4
  04ad29c  bf 2, 0x4ad2a4
  04ad2a0  stb 3, 32(6)
  04ad2a4  lhz 6, 0(5)
  04ad2a8  addic 5, 5, 2
  04ad2ac  extsh 6, 6
  04ad2b0  cmpwi 6, 0
  04ad2b4  bf 0, 0x4ad280
  04ad2b8  blr

FUN_004ad2bc:   # 0x4ad2bc, 0x4c bytes
  04ad2bc  lis 4, 165
  04ad2c0  sldi 3, 3, 2
  04ad2c4  addic 5, 4, -28284
  04ad2c8  extsw 6, 3
  04ad2cc  li 4, 4
  04ad2d0  lis 3, 164
  04ad2d4  lwzx 5, 5, 6
  04ad2d8  lhz 6, 0(5)
  04ad2dc  lwz 7, -28512(3)
  04ad2e0  rlwinm 6, 6, 8, 9, 23
  04ad2e4  addc 6, 7, 6
  04ad2e8  clrldi 6, 6, 32
  04ad2ec  stb 4, 32(6)
  04ad2f0  lhz 6, 0(5)
  04ad2f4  addic 5, 5, 2
  04ad2f8  extsh 6, 6
  04ad2fc  cmpwi 6, 0
  04ad300  bf 0, 0x4ad2d8
  04ad304  blr

M912_004ad308:   # 0x4ad308, 0x14 bytes
  04ad308  lis 3, 143
  04ad30c  lis 4, 1
  04ad310  addic 3, 3, 16544
  04ad314  stw 4, 72(3)
  04ad318  blr

M912_004ad348:   # 0x4ad348, 0x540 bytes
  04ad348  stdu 1, -208(1)
  04ad34c  mflr 0
  04ad350  std 0, 224(1)
  04ad354  stfd 31, 200(1)
  04ad358  std 30, 184(1)
  04ad35c  std 31, 192(1)
  04ad360  lwz 30, 120(3)
  04ad364  ori 31, 3, 0
  04ad368  lwz 3, 56(30)
  04ad36c  std 29, 176(1)
  04ad370  std 28, 168(1)
  04ad374  cmpwi 3, 0
  04ad378  bt 2, 0x4ad3b4
  04ad37c  lis 3, 75
  04ad380  addi 3, 3, -11488
  04ad384  lfs 1, 0(3)
  04ad388  lfs 2, 4(3)
  04ad38c  bl 0xfcbe8
  04ad390  nop
  04ad394  lis 3, 114
  04ad398  lfs 2, -3056(3)
  04ad39c  fmuls 1, 1, 2
  04ad3a0  bl 0x502758
  04ad3a4  nop
  04ad3a8  li 4, 0
  04ad3ac  stw 3, 428(30)
  04ad3b0  stw 4, 56(30)
  04ad3b4  addic 3, 30, 428
  04ad3b8  bl 0x4fff60
  04ad3bc  nop
  04ad3c0  lis 3, 75
  04ad3c4  li 6, 0
  04ad3c8  addi 7, 3, -11488
  04ad3cc  ori 3, 31, 0
  04ad3d0  lis 4, 51
  04ad3d4  li 5, 0
  04ad3d8  lfs 31, 8(7)
  04ad3dc  stw 6, 116(1)
  04ad3e0  bl 0x10675c
  04ad3e4  nop
  04ad3e8  ori 29, 3, 0
  04ad3ec  ori 3, 31, 0
  04ad3f0  ori 4, 29, 0
  04ad3f4  addic 5, 30, 32
  04ad3f8  li 6, 0
  04ad3fc  addic 7, 1, 112
  04ad400  li 9, 0
  04ad404  addic 8, 1, 116
  04ad408  li 10, 4
  04ad40c  bl 0x106840
  04ad410  nop
  04ad414  ori 28, 3, 0
  04ad418  lwz 3, 112(1)
  04ad41c  cmpwi 3, 1
  04ad420  bt 2, 0x4ad714
  04ad424  lbz 3, 32(31)
  04ad428  cmpwi 3, 11
  04ad42c  bt 2, 0x4ad714
  04ad430  lfs 1, 32(30)
  04ad434  lfs 2, 116(1)
  04ad438  fsubs 1, 1, 2
  04ad43c  fcmpu 0, 1, 31
  04ad440  stfs 1, 32(30)
  04ad444  bt 1, 0x4ad44c
  04ad448  li 28, 1
  04ad44c  lis 3, 75
  04ad450  addi 3, 3, -11488
  04ad454  lfs 1, 12(3)
  04ad458  bl 0x502758
  04ad45c  nop
  04ad460  lis 4, 16192
  04ad464  lis 5, 143
  04ad468  lis 6, 114
  04ad46c  lis 7, 14851
  04ad470  stw 4, 152(30)
  04ad474  ori 4, 7, 4719
  04ad478  lfs 1, 16656(5)
  04ad47c  lfs 2, -3048(6)
  04ad480  cmpwi 28, 2
  04ad484  stw 3, 144(30)
  04ad488  fmuls 1, 1, 2
  04ad48c  stw 4, 132(30)
  04ad490  li 3, 0
  04ad494  li 4, 9
  04ad498  stb 3, 173(30)
  04ad49c  stw 4, 148(30)
  04ad4a0  stfs 1, 128(30)
  04ad4a4  bt 1, 0x4ad4bc
  04ad4a8  cmpwi 28, -1
  04ad4ac  cmpwi 1, 28, 0
  04ad4b0  bf 1, 0x4ad704
  04ad4b4  bf 5, 0x4ad704
  04ad4b8  b 0x4ad4d0
  04ad4bc  cmpwi 28, 10
  04ad4c0  bt 1, 0x4ad704
  04ad4c4  li 3, 250
  04ad4c8  stb 3, 103(30)
  04ad4cc  b 0x4ad704
  04ad4d0  li 3, 11
  04ad4d4  li 4, 0
  04ad4d8  lhz 6, 52(31)
  04ad4dc  lis 5, 75
  04ad4e0  rlwimi 6, 4, 0, 19, 19
  04ad4e4  addi 5, 5, -11488
  04ad4e8  stb 3, 32(31)
  04ad4ec  lis 3, 114
  04ad4f0  lis 4, 16856
  04ad4f4  sth 6, 52(31)
  04ad4f8  lfs 1, 16(5)
  04ad4fc  lfs 2, -3052(3)
  04ad500  lis 3, 16736
  04ad504  fmuls 1, 2, 1
  04ad508  lis 6, 115
  04ad50c  addic 6, 6, 22784
  04ad510  stfs 1, 136(30)
  04ad514  lfs 1, 20(5)
  04ad518  stw 3, 192(30)
  04ad51c  fmuls 1, 2, 1
  04ad520  stw 4, 196(30)
  04ad524  stfs 1, 140(30)
  04ad528  lwz 4, 16(29)
  04ad52c  lwz 3, 20(29)
  04ad530  lfs 1, 16(29)
  04ad534  lfs 2, 20(29)
  04ad538  fabs 4, 1
  04ad53c  fabs 5, 2
  04ad540  rlwinm 5, 3, 3, 29, 29
  04ad544  addic 3, 30, 112
  04ad548  fsubs 1, 4, 5
  04ad54c  stfs 1, 120(1)
  04ad550  lwz 7, 120(1)
  04ad554  lfs 1, 120(1)
  04ad558  rlwimi 5, 7, 2, 30, 30
  04ad55c  fsub 3, 1, 31
  04ad560  fsub 6, 1, 31
  04ad564  rlwimi 5, 4, 4, 28, 28
  04ad568  ori 4, 6, 0
  04ad56c  rlwimi 4, 5, 2, 26, 28
  04ad570  slwi 5, 5, 2
  04ad574  clrldi 4, 4, 32
  04ad578  fsel 3, 3, 4, 5
  04ad57c  lfsx 2, 6, 5
  04ad580  fsel 4, 6, 5, 4
  04ad584  lfs 1, 4(4)
  04ad588  fcmpu 0, 3, 31
  04ad58c  bt 1, 0x4ad598
  04ad590  fmr 2, 31
  04ad594  b 0x4ad6c0
  04ad598  fsubs 5, 4, 3
  04ad59c  fadds 3, 4, 3
  04ad5a0  addic 7, 1, 16
  04ad5a4  li 4, 2
  04ad5a8  addic 5, 7, 124
  04ad5ac  addic 6, 7, 108
  04ad5b0  mtctr 4
  04ad5b4  fdivs 3, 5, 3
  04ad5b8  fmuls 5, 3, 3
  04ad5bc  stfs 3, 136(1)
  04ad5c0  stfs 3, 128(1)
  04ad5c4  stfs 3, 132(1)
  04ad5c8  stfs 3, 124(1)
  04ad5cc  lfs 6, 136(1)
  04ad5d0  lfs 7, 128(1)
  04ad5d4  lfs 8, 132(1)
  04ad5d8  fmuls 3, 5, 5
  04ad5dc  fmuls 7, 7, 5
  04ad5e0  fmuls 6, 6, 3
  04ad5e4  fmuls 4, 3, 3
  04ad5e8  fmuls 3, 8, 3
  04ad5ec  stfs 7, 128(1)
  04ad5f0  fmuls 5, 6, 5
  04ad5f4  stfs 3, 132(1)
  04ad5f8  stfs 5, 136(1)
  04ad5fc  lfs 3, 108(7)
  04ad600  fmuls 3, 3, 4
  04ad604  stfs 3, 124(7)
  04ad608  lfs 3, 4(6)
  04ad60c  addic 6, 6, 8
  04ad610  fmuls 3, 3, 4
  04ad614  addic 7, 7, 8
  04ad618  stfs 3, 4(5)
  04ad61c  addic 5, 5, 8
  04ad620  bdnz 0x4ad5fc
  04ad624  ori 8, 1, 0
  04ad628  li 5, 4
  04ad62c  lis 7, 115
  04ad630  addic 6, 8, 124
  04ad634  mtctr 5
  04ad638  addic 7, 7, 22752
  04ad63c  ori 5, 6, 0
  04ad640  lfs 3, 124(8)
  04ad644  lfs 4, 0(7)
  04ad648  fmuls 3, 3, 4
  04ad64c  lfs 4, 4(7)
  04ad650  addic 7, 7, 8
  04ad654  stfs 3, 124(8)
  04ad658  lfs 3, 4(6)
  04ad65c  addic 8, 8, 8
  04ad660  fmuls 3, 3, 4
  04ad664  stfs 3, 4(6)
  04ad668  addic 6, 6, 8
  04ad66c  bdnz 0x4ad640
  04ad670  ori 6, 4, 0
  04ad674  fmr 3, 31
  04ad678  ori 4, 1, 0
  04ad67c  mtctr 6
  04ad680  lfs 4, 124(4)
  04ad684  fadds 3, 3, 4
  04ad688  addic 4, 4, 16
  04ad68c  lfs 4, 4(5)
  04ad690  lfs 5, 8(5)
  04ad694  lfs 6, 12(5)
  04ad698  addic 5, 5, 16
  04ad69c  fadds 3, 3, 4
  04ad6a0  fadds 3, 3, 5
  04ad6a4  fadds 3, 3, 6
  04ad6a8  bdnz 0x4ad680
  04ad6ac  lis 4, 75
  04ad6b0  addi 4, 4, -11488
  04ad6b4  lfs 4, 24(4)
  04ad6b8  fadds 3, 3, 4
  04ad6bc  fmadds 2, 3, 2, 1
  04ad6c0  ori 4, 3, 0
  04ad6c4  li 6, 18
  04ad6c8  fmr 1, 2
  04ad6cc  ori 3, 31, 0
  04ad6d0  li 7, 1
  04ad6d4  li 8, 0
  04ad6d8  bl 0x10ad80
  04ad6dc  nop
  04ad6e0  li 6, 250
  04ad6e4  ori 3, 31, 0
  04ad6e8  li 4, 2
  04ad6ec  li 5, 3
  04ad6f0  stb 6, 103(30)
  04ad6f4  li 6, 0
  04ad6f8  li 7, -1
  04ad6fc  bl 0xfcd60
  04ad700  nop
  04ad704  addic 4, 30, 96
  04ad708  ori 3, 31, 0
  04ad70c  bl 0x10c808
  04ad710  nop
  04ad714  li 5, 255
  04ad718  ori 3, 31, 0
  04ad71c  addic 4, 30, 96
  04ad720  stb 5, 164(31)
  04ad724  bl 0x10c9a0
  04ad728  nop
  04ad72c  lwz 3, 428(30)
  04ad730  cmpwi 3, 0
  04ad734  bt 2, 0x4ad754
  04ad738  lis 3, 75
  04ad73c  lis 4, 143
  04ad740  addi 3, 3, -11488
  04ad744  lfs 1, 28(3)
  04ad748  lfs 2, 16688(4)
  04ad74c  fadds 1, 2, 1
  04ad750  b 0x4ad7a0
  04ad754  lbz 3, 32(31)
  04ad758  cmpwi 3, 1
  04ad75c  bf 2, 0x4ad798
  04ad760  lis 3, 151
  04ad764  addic 3, 3, -25376
  04ad768  lwz 4, 576(3)
  04ad76c  cmpw 31, 4
  04ad770  bt 2, 0x4ad780
  04ad774  lwz 3, 572(3)
  04ad778  cmpw 31, 3
  04ad77c  bf 2, 0x4ad790
  04ad780  lis 3, 75
  04ad784  addi 3, 3, -11488
  04ad788  lfs 1, 28(3)
  04ad78c  b 0x4ad794
  04ad790  fmr 1, 31
  04ad794  b 0x4ad7a0
  04ad798  lis 3, 143
  04ad79c  lfs 1, 16688(3)
  04ad7a0  lis 3, 165
  04ad7a4  addic 4, 30, 288
  04ad7a8  addic 5, 3, 7136
  04ad7ac  lwz 3, 432(30)
  04ad7b0  stfs 1, 416(30)
  04ad7b4  li 6, 0
  04ad7b8  slwi 3, 3, 2
  04ad7bc  extsw 7, 3
  04ad7c0  ori 3, 31, 0
  04ad7c4  lwzx 5, 5, 7
  04ad7c8  li 7, 0
  04ad7cc  addic 8, 5, 16
  04ad7d0  lwz 9, 0(5)
  04ad7d4  extsw 9, 9
  04ad7d8  bl 0x111ba0
  04ad7dc  nop
  04ad7e0  cmpwi 3, 2
  04ad7e4  bt 2, 0x4ad848
  04ad7e8  lfs 1, 372(30)
  04ad7ec  lfs 2, 292(30)
  04ad7f0  lfs 3, 368(30)
  04ad7f4  fsubs 1, 1, 2
  04ad7f8  lfs 2, 288(30)
  04ad7fc  fsubs 2, 3, 2
  04ad800  fmuls 1, 1, 1
  04ad804  fmadds 1, 2, 2, 1
  04ad808  lfs 2, 416(30)
  04ad80c  fsqrts 1, 1
  04ad810  fcmpu 0, 1, 2
  04ad814  bt 1, 0x4ad840
  04ad818  lfs 1, 24(31)
  04ad81c  lis 3, 75
  04ad820  lfs 2, 296(30)
  04ad824  addi 3, 3, -11488
  04ad828  fsubs 1, 1, 2
  04ad82c  lfs 2, 32(3)
  04ad830  fabs 1, 1
  04ad834  fcmpu 0, 1, 2
  04ad838  cror 6, 0, 2
  04ad83c  bt 6, 0x4ad848
  04ad840  li 3, 2
  04ad844  stw 3, 356(30)
  04ad848  lwz 3, 352(30)
  04ad84c  cmpwi 3, 0
  04ad850  bf 2, 0x4ad864
  04ad854  lis 3, 151
  04ad858  addic 3, 3, -25376
  04ad85c  lwz 3, 8320(3)
  04ad860  stw 3, 352(30)
  04ad864  ld 0, 224(1)
  04ad868  mtlr 0
  04ad86c  lfd 31, 200(1)
  04ad870  ld 28, 168(1)
  04ad874  ld 29, 176(1)
  04ad878  ld 30, 184(1)
  04ad87c  ld 31, 192(1)
  04ad880  addi 1, 1, 208
  04ad884  blr

UpdateMoby_912:   # 0x4ad900, 0x1a40 bytes
  04ad900  stdu 1, -592(1)
  04ad904  mflr 0
  04ad908  std 0, 608(1)
  04ad90c  stfd 30, 576(1)
  04ad910  stfd 31, 584(1)
  04ad914  std 31, 568(1)
  04ad918  std 30, 560(1)
  04ad91c  ori 31, 3, 0
  04ad920  std 29, 552(1)
  04ad924  std 28, 544(1)
  04ad928  std 27, 536(1)
  04ad92c  std 26, 528(1)
  04ad930  lwz 30, 120(31)
  04ad934  bl 0x4ad348
  04ad938  lwz 4, 36(31)
  04ad93c  lis 5, 143
  04ad940  lwz 29, 352(30)
  04ad944  lbz 3, 32(31)
  04ad948  lis 6, 16204
  04ad94c  cmpwi 3, 5
  04ad950  lfs 1, 36(4)
  04ad954  lfs 2, 16652(5)
  04ad958  ori 4, 6, 52429
  04ad95c  fmuls 1, 1, 2
  04ad960  stw 4, 88(31)
  04ad964  stfs 1, 44(31)
  04ad968  bt 1, 0x4ad9a0
  04ad96c  cmpwi 3, 5
  04ad970  bt 2, 0x4add90
  04ad974  cmpwi 3, 4
  04ad978  bt 2, 0x4add00
  04ad97c  cmpwi 3, 3
  04ad980  bt 2, 0x4adc5c
  04ad984  cmpwi 3, 2
  04ad988  bt 2, 0x4adad0
  04ad98c  cmpwi 3, 1
  04ad990  bt 2, 0x4ada94
  04ad994  cmpwi 3, 0
  04ad998  bt 2, 0x4ad9cc
  04ad99c  b 0x4af310
  04ad9a0  cmpwi 3, 11
  04ad9a4  bt 2, 0x4af2b4
  04ad9a8  cmpwi 3, 10
  04ad9ac  bt 2, 0x4af1d0
  04ad9b0  cmpwi 3, 9
  04ad9b4  bt 2, 0x4ae7d0
  04ad9b8  cmpwi 3, 8
  04ad9bc  bt 2, 0x4aede0
  04ad9c0  cmpwi 3, 7
  04ad9c4  bt 2, 0x4ae400
  04ad9c8  b 0x4af310
  04ad9cc  li 4, 20
  04ad9d0  li 29, 3
  04ad9d4  lis 5, 16800
  04ad9d8  addic 3, 30, 368
  04ad9dc  sth 4, 36(30)
  04ad9e0  stb 29, 40(30)
  04ad9e4  lhz 6, 52(31)
  04ad9e8  addic 4, 31, 16
  04ad9ec  stw 5, 32(30)
  04ad9f0  ori 5, 6, 20480
  04ad9f4  sth 5, 52(31)
  04ad9f8  bl 0x5e7e98
  04ad9fc  nop
  04ada00  addic 3, 30, 208
  04ada04  bl 0x100f8c
  04ada08  nop
  04ada0c  lis 5, 75
  04ada10  lis 3, 16128
  04ada14  lis 4, 16384
  04ada18  addi 5, 5, -10104
  04ada1c  lis 28, 143
  04ada20  stw 3, 220(30)
  04ada24  stw 4, 216(30)
  04ada28  lfs 1, 0(5)
  04ada2c  lfs 2, 16652(28)
  04ada30  fmuls 1, 2, 1
  04ada34  bl 0x502758
  04ada38  nop
  04ada3c  lis 4, 114
  04ada40  lfs 1, 16652(28)
  04ada44  lfs 2, 420(30)
  04ada48  stfs 1, 212(30)
  04ada4c  lfs 1, -3052(4)
  04ada50  stw 3, 208(30)
  04ada54  fmuls 1, 2, 1
  04ada58  stfs 1, 244(30)
  04ada5c  lbz 3, 83(31)
  04ada60  stb 29, 32(31)
  04ada64  cmpwi 3, 20
  04ada68  bt 2, 0x4ada84
  04ada6c  ori 3, 31, 0
  04ada70  li 4, 20
  04ada74  li 5, 0
  04ada78  li 6, 0
  04ada7c  bl 0xfddc0
  04ada80  nop
  04ada84  lis 3, 143
  04ada88  lfs 1, 16688(3)
  04ada8c  stfs 1, 416(30)
  04ada90  b 0x4af310
  04ada94  lis 3, 16000
  04ada98  lwz 4, 356(30)
  04ada9c  cmpwi 4, 2
  04adaa0  stw 3, 88(31)
  04adaa4  bf 2, 0x4adab4
  04adaa8  lwz 3, 436(30)
  04adaac  cmpwi 3, 0
  04adab0  bt 2, 0x4af310
  04adab4  li 4, 2
  04adab8  li 3, 1
  04adabc  stb 4, 32(31)
  04adac0  bl 0x5e7e18
  04adac4  nop
  04adac8  stw 3, 424(30)
  04adacc  b 0x4af310
  04adad0  lis 3, 16320
  04adad4  lbz 4, 83(31)
  04adad8  cmpwi 4, 6
  04adadc  stw 3, 88(31)
  04adae0  bf 2, 0x4adb6c
  04adae4  lwz 3, 424(30)
  04adae8  cmpwi 3, 0
  04adaec  bf 2, 0x4adb24
  04adaf0  lis 3, 75
  04adaf4  addi 3, 3, -10104
  04adaf8  lfs 1, 4(3)
  04adafc  lfs 2, 8(3)
  04adb00  bl 0xfcbe8
  04adb04  nop
  04adb08  lis 3, 114
  04adb0c  lfs 2, -3056(3)
  04adb10  fmuls 1, 1, 2
  04adb14  bl 0x502758
  04adb18  nop
  04adb1c  stw 3, 424(30)
  04adb20  b 0x4af310
  04adb24  addic 3, 30, 424
  04adb28  bl 0x4fff60
  04adb2c  nop
  04adb30  cmpwi 3, 0
  04adb34  bt 2, 0x4af310
  04adb38  lbz 3, 83(31)
  04adb3c  cmpwi 3, 21
  04adb40  bt 2, 0x4af310
  04adb44  li 3, 10
  04adb48  bl 0x5e7e18
  04adb4c  nop
  04adb50  ori 6, 3, 0
  04adb54  ori 3, 31, 0
  04adb58  li 4, 21
  04adb5c  li 5, 0
  04adb60  bl 0xfddc0
  04adb64  nop
  04adb68  b 0x4af310
  04adb6c  lbz 3, 112(31)
  04adb70  rlwinm 3, 3, 0, 30, 30
  04adb74  cmpwi 3, 0
  04adb78  bt 2, 0x4af310
  04adb7c  lis 4, 151
  04adb80  addic 3, 31, 16
  04adb84  addic 4, 4, -25248
  04adb88  bl 0x5e8588
  04adb8c  nop
  04adb90  lis 3, 143
  04adb94  lfs 2, 16688(3)
  04adb98  fcmpu 0, 1, 2
  04adb9c  cror 6, 1, 2
  04adba0  bt 6, 0x4adc08
  04adba4  lis 4, 75
  04adba8  li 3, 5
  04adbac  addi 4, 4, -10104
  04adbb0  stb 3, 32(31)
  04adbb4  lfs 2, 408(30)
  04adbb8  lfs 1, 12(4)
  04adbbc  lfs 3, 16(4)
  04adbc0  fmuls 1, 2, 1
  04adbc4  fmuls 2, 2, 3
  04adbc8  bl 0xfcbe8
  04adbcc  nop
  04adbd0  stfs 1, 404(30)
  04adbd4  lbz 3, 83(31)
  04adbd8  cmpwi 3, 22
  04adbdc  bt 2, 0x4af310
  04adbe0  li 3, 10
  04adbe4  bl 0x5e7e18
  04adbe8  nop
  04adbec  ori 6, 3, 0
  04adbf0  ori 3, 31, 0
  04adbf4  li 4, 22
  04adbf8  li 5, 0
  04adbfc  bl 0xfddc0
  04adc00  nop
  04adc04  b 0x4af310
  04adc08  li 3, 3
  04adc0c  lbz 4, 83(31)
  04adc10  cmpwi 4, 20
  04adc14  stb 3, 32(31)
  04adc18  bt 2, 0x4af310
  04adc1c  lis 3, 75
  04adc20  lis 4, 114
  04adc24  addi 3, 3, -10104
  04adc28  li 5, 0
  04adc2c  lfs 1, 20(3)
  04adc30  lfs 2, -3056(4)
  04adc34  ori 3, 31, 0
  04adc38  fmuls 1, 2, 1
  04adc3c  li 4, 20
  04adc40  fctiwz 1, 1
  04adc44  stfd 1, 504(1)
  04adc48  lwz 6, 508(1)
  04adc4c  extsw 6, 6
  04adc50  bl 0xfddc0
  04adc54  nop
  04adc58  b 0x4af310
  04adc5c  lfs 1, 288(30)
  04adc60  lfs 2, 16(31)
  04adc64  lfs 3, 292(30)
  04adc68  lfs 4, 20(31)
  04adc6c  fsubs 1, 1, 2
  04adc70  fsubs 2, 3, 4
  04adc74  bl 0x5e8338
  04adc78  nop
  04adc7c  lis 3, 75
  04adc80  lis 6, 114
  04adc84  addi 4, 3, -10104
  04adc88  ori 3, 31, 0
  04adc8c  addic 5, 30, 400
  04adc90  lfs 4, 32(4)
  04adc94  lfs 2, 24(4)
  04adc98  lfs 5, 28(4)
  04adc9c  lfs 6, -3052(6)
  04adca0  fmr 3, 5
  04adca4  fmuls 4, 6, 4
  04adca8  bl 0xff2e8
  04adcac  nop
  04adcb0  lwz 3, 356(30)
  04adcb4  cmpwi 3, 2
  04adcb8  bt 2, 0x4af310
  04adcbc  li 3, 4
  04adcc0  lis 4, 75
  04adcc4  addi 4, 4, -10104
  04adcc8  stb 3, 32(31)
  04adccc  lwz 3, 440(30)
  04adcd0  extsw 3, 3
  04adcd4  lfs 1, 4(4)
  04adcd8  std 3, 504(1)
  04adcdc  lfd 2, 504(1)
  04adce0  fcfid 2, 2
  04adce4  frsp 2, 2
  04adce8  bl 0xfcbe8
  04adcec  nop
  04adcf0  bl 0x502758
  04adcf4  nop
  04adcf8  stw 3, 424(30)
  04adcfc  b 0x4af310
  04add00  addic 3, 30, 424
  04add04  bl 0x4fff60
  04add08  nop
  04add0c  cmpwi 3, 0
  04add10  bt 2, 0x4af310
  04add14  lis 4, 75
  04add18  li 3, 5
  04add1c  addi 4, 4, -10104
  04add20  stb 3, 32(31)
  04add24  lfs 2, 408(30)
  04add28  lfs 1, 12(4)
  04add2c  lfs 3, 16(4)
  04add30  fmuls 1, 2, 1
  04add34  fmuls 2, 2, 3
  04add38  bl 0xfcbe8
  04add3c  nop
  04add40  stfs 1, 404(30)
  04add44  lbz 3, 83(31)
  04add48  cmpwi 3, 22
  04add4c  bt 2, 0x4af310
  04add50  lis 3, 75
  04add54  lis 4, 114
  04add58  addi 3, 3, -10104
  04add5c  li 5, 0
  04add60  lfs 1, 20(3)
  04add64  lfs 2, -3056(4)
  04add68  ori 3, 31, 0
  04add6c  li 4, 22
  04add70  fmuls 1, 2, 1
  04add74  fctiwz 1, 1
  04add78  stfd 1, 504(1)
  04add7c  lwz 6, 508(1)
  04add80  extsw 6, 6
  04add84  bl 0xfddc0
  04add88  nop
  04add8c  b 0x4af310
  04add90  lfs 1, 20(31)
  04add94  lfs 2, 20(29)
  04add98  lfs 3, 16(31)
  04add9c  fsubs 1, 1, 2
  04adda0  lfs 2, 16(29)
  04adda4  fsubs 2, 3, 2
  04adda8  lfs 3, 24(31)
  04addac  lfs 4, 24(29)
  04addb0  fsubs 3, 3, 4
  04addb4  fmuls 1, 1, 1
  04addb8  lis 3, 143
  04addbc  fmadds 1, 2, 2, 1
  04addc0  lfs 2, 16672(3)
  04addc4  fmadds 1, 3, 3, 1
  04addc8  fsqrts 1, 1
  04addcc  fcmpu 0, 2, 1
  04addd0  cror 6, 1, 2
  04addd4  bt 6, 0x4ade10
  04addd8  lis 3, 75
  04adddc  lis 4, 114
  04adde0  lfs 1, 420(30)
  04adde4  addi 5, 3, -10104
  04adde8  lis 6, 114
  04addec  addic 3, 30, 244
  04addf0  lfs 2, -3052(4)
  04addf4  lfs 3, 36(5)
  04addf8  lfs 4, -3048(6)
  04addfc  fmuls 1, 1, 2
  04ade00  fmuls 2, 4, 3
  04ade04  bl 0x109af0
  04ade08  nop
  04ade0c  b 0x4ade38
  04ade10  lis 3, 75
  04ade14  lis 5, 114
  04ade18  addi 4, 3, -10104
  04ade1c  addic 3, 30, 244
  04ade20  lfs 3, 8(4)
  04ade24  lfs 1, 4(4)
  04ade28  lfs 4, -3048(5)
  04ade2c  fmuls 2, 4, 3
  04ade30  bl 0x109af0
  04ade34  nop
  04ade38  lfs 1, 16(29)
  04ade3c  lfs 2, 16(31)
  04ade40  lfs 3, 20(29)
  04ade44  lfs 4, 20(31)
  04ade48  fsubs 1, 1, 2
  04ade4c  lis 3, 75
  04ade50  fsubs 2, 3, 4
  04ade54  addi 3, 3, -10104
  04ade58  lis 28, 115
  04ade5c  addic 28, 28, 22784
  04ade60  fabs 4, 1
  04ade64  fabs 3, 2
  04ade68  stfs 1, 300(1)
  04ade6c  stfs 2, 304(1)
  04ade70  fsubs 1, 4, 3
  04ade74  stfs 1, 308(1)
  04ade78  lwz 4, 300(1)
  04ade7c  lfs 31, 4(3)
  04ade80  lfs 1, 300(1)
  04ade84  lwz 3, 304(1)
  04ade88  lfs 2, 304(1)
  04ade8c  lwz 5, 308(1)
  04ade90  rlwinm 3, 3, 3, 29, 29
  04ade94  lfs 5, 308(1)
  04ade98  fabs 1, 1
  04ade9c  rlwimi 3, 5, 2, 30, 30
  04adea0  fabs 2, 2
  04adea4  fsub 6, 5, 31
  04adea8  rlwimi 3, 4, 4, 28, 28
  04adeac  fsub 5, 5, 31
  04adeb0  ori 4, 28, 0
  04adeb4  rlwimi 4, 3, 2, 26, 28
  04adeb8  slwi 3, 3, 2
  04adebc  clrldi 4, 4, 32
  04adec0  fsel 3, 6, 1, 3
  04adec4  lfsx 30, 28, 3
  04adec8  lfs 1, 4(4)
  04adecc  fsel 2, 5, 2, 4
  04aded0  fcmpu 0, 3, 31
  04aded4  bt 1, 0x4adee0
  04aded8  fmr 30, 31
  04adedc  b 0x4ae004
  04adee0  fsubs 4, 2, 3
  04adee4  fadds 2, 2, 3
  04adee8  addic 3, 1, 16
  04adeec  li 6, 2
  04adef0  addic 5, 3, 472
  04adef4  addic 4, 3, 456
  04adef8  mtctr 6
  04adefc  fdivs 2, 4, 2
  04adf00  fmuls 3, 2, 2
  04adf04  stfs 2, 484(1)
  04adf08  stfs 2, 476(1)
  04adf0c  stfs 2, 480(1)
  04adf10  stfs 2, 472(1)
  04adf14  lfs 5, 484(1)
  04adf18  lfs 6, 476(1)
  04adf1c  lfs 7, 480(1)
  04adf20  fmuls 4, 3, 3
  04adf24  fmuls 6, 6, 3
  04adf28  fmuls 5, 5, 4
  04adf2c  fmuls 2, 4, 4
  04adf30  fmuls 4, 7, 4
  04adf34  stfs 6, 476(1)
  04adf38  fmuls 3, 5, 3
  04adf3c  stfs 4, 480(1)
  04adf40  stfs 3, 484(1)
  04adf44  lfs 3, 456(3)
  04adf48  fmuls 3, 3, 2
  04adf4c  stfs 3, 472(3)
  04adf50  lfs 3, 4(4)
  04adf54  addic 4, 4, 8
  04adf58  fmuls 3, 3, 2
  04adf5c  addic 3, 3, 8
  04adf60  stfs 3, 4(5)
  04adf64  addic 5, 5, 8
  04adf68  bdnz 0x4adf44
  04adf6c  li 5, 4
  04adf70  ori 3, 1, 0
  04adf74  mtctr 5
  04adf78  lis 4, 115
  04adf7c  addic 5, 3, 472
  04adf80  addic 4, 4, 22752
  04adf84  ori 7, 5, 0
  04adf88  lfs 2, 472(3)
  04adf8c  lfs 3, 0(4)
  04adf90  fmuls 2, 2, 3
  04adf94  lfs 3, 4(4)
  04adf98  addic 4, 4, 8
  04adf9c  stfs 2, 472(3)
  04adfa0  lfs 2, 4(5)
  04adfa4  addic 3, 3, 8
  04adfa8  fmuls 2, 2, 3
  04adfac  stfs 2, 4(5)
  04adfb0  addic 5, 5, 8
  04adfb4  bdnz 0x4adf88
  04adfb8  ori 3, 1, 0
  04adfbc  fmr 2, 31
  04adfc0  mtctr 6
  04adfc4  lfs 3, 472(3)
  04adfc8  fadds 2, 2, 3
  04adfcc  lfs 3, 4(7)
  04adfd0  addic 3, 3, 16
  04adfd4  lfs 4, 8(7)
  04adfd8  lfs 5, 12(7)
  04adfdc  addic 7, 7, 16
  04adfe0  fadds 2, 2, 3
  04adfe4  fadds 2, 2, 4
  04adfe8  fadds 2, 2, 5
  04adfec  bdnz 0x4adfc4
  04adff0  lis 3, 75
  04adff4  addi 3, 3, -10104
  04adff8  lfs 3, 40(3)
  04adffc  fadds 2, 2, 3
  04ae000  fmadds 30, 2, 30, 1
  04ae004  lis 3, 75
  04ae008  fmr 1, 30
  04ae00c  lis 4, 114
  04ae010  addi 27, 3, -10104
  04ae014  addic 5, 30, 400
  04ae018  ori 3, 31, 0
  04ae01c  lfs 4, 32(27)
  04ae020  lfs 2, 24(27)
  04ae024  lfs 3, 28(27)
  04ae028  lfs 5, -3052(4)
  04ae02c  fmuls 4, 5, 4
  04ae030  bl 0xff2e8
  04ae034  nop
  04ae038  lfs 1, 48(27)
  04ae03c  lfs 2, 44(27)
  04ae040  lfs 3, 72(31)
  04ae044  lfs 4, 52(27)
  04ae048  fadds 2, 3, 2
  04ae04c  fsubs 5, 1, 3
  04ae050  fsubs 6, 4, 3
  04ae054  li 5, 0
  04ae058  addic 4, 30, 208
  04ae05c  ori 3, 31, 0
  04ae060  fsubs 1, 1, 2
  04ae064  fsub 7, 3, 5
  04ae068  fsubs 4, 4, 2
  04ae06c  addic 6, 1, 128
  04ae070  fsub 9, 2, 1
  04ae074  fsel 3, 7, 5, 3
  04ae078  lfs 5, 56(27)
  04ae07c  lfs 7, 60(27)
  04ae080  fsel 1, 9, 1, 2
  04ae084  fsub 2, 6, 3
  04ae088  fsub 9, 4, 1
  04ae08c  fsel 2, 2, 6, 3
  04ae090  lfs 3, 64(27)
  04ae094  lfs 6, 68(27)
  04ae098  lfs 8, 72(27)
  04ae09c  stw 5, 120(1)
  04ae0a0  addic 5, 1, 112
  04ae0a4  fsel 1, 9, 4, 1
  04ae0a8  fmuls 4, 2, 2
  04ae0ac  fmuls 9, 1, 1
  04ae0b0  fmuls 10, 4, 2
  04ae0b4  fmuls 11, 9, 1
  04ae0b8  fmuls 12, 4, 10
  04ae0bc  fmadds 2, 10, 5, 2
  04ae0c0  fmuls 10, 9, 11
  04ae0c4  fmadds 1, 11, 5, 1
  04ae0c8  fmuls 5, 4, 12
  04ae0cc  fmadds 2, 12, 7, 2
  04ae0d0  fmuls 11, 9, 10
  04ae0d4  fmadds 1, 10, 7, 1
  04ae0d8  fmuls 4, 4, 5
  04ae0dc  fmadds 2, 5, 3, 2
  04ae0e0  fmuls 5, 9, 11
  04ae0e4  fmadds 1, 11, 3, 1
  04ae0e8  fmadds 2, 4, 6, 2
  04ae0ec  fmadds 1, 5, 6, 1
  04ae0f0  fmuls 2, 2, 8
  04ae0f4  fmuls 1, 1, 8
  04ae0f8  stfs 2, 116(1)
  04ae0fc  lfs 30, 76(27)
  04ae100  stfs 1, 112(1)
  04ae104  fmr 1, 30
  04ae108  bl 0x101058
  04ae10c  nop
  04ae110  lfs 2, 20(31)
  04ae114  lfs 3, 372(30)
  04ae118  lfs 1, 16(31)
  04ae11c  fsubs 3, 2, 3
  04ae120  lfs 4, 368(30)
  04ae124  lfs 5, 24(31)
  04ae128  fsubs 4, 1, 4
  04ae12c  lfs 6, 376(30)
  04ae130  fsubs 6, 5, 6
  04ae134  lis 3, 143
  04ae138  fmuls 3, 3, 3
  04ae13c  fmadds 3, 4, 4, 3
  04ae140  lfs 4, 16676(3)
  04ae144  fmadds 3, 6, 6, 3
  04ae148  fsqrts 3, 3
  04ae14c  fcmpu 0, 3, 4
  04ae150  bt 1, 0x4ae160
  04ae154  lwz 3, 356(30)
  04ae158  cmpwi 3, 2
  04ae15c  bf 2, 0x4ae16c
  04ae160  li 3, 8
  04ae164  stb 3, 32(31)
  04ae168  b 0x4af310
  04ae16c  lfs 4, 20(29)
  04ae170  lfs 3, 16(29)
  04ae174  fsubs 6, 2, 4
  04ae178  fsubs 7, 1, 3
  04ae17c  lis 3, 143
  04ae180  fmuls 6, 6, 6
  04ae184  fmadds 6, 7, 7, 6
  04ae188  lfs 7, 16672(3)
  04ae18c  fsqrts 6, 6
  04ae190  fcmpu 0, 6, 7
  04ae194  cror 6, 1, 2
  04ae198  bt 6, 0x4af310
  04ae19c  lfs 6, 24(29)
  04ae1a0  fsubs 5, 6, 5
  04ae1a4  fabs 5, 5
  04ae1a8  fcmpu 0, 5, 30
  04ae1ac  cror 6, 1, 2
  04ae1b0  bt 6, 0x4af310
  04ae1b4  lis 3, 75
  04ae1b8  lis 4, 114
  04ae1bc  addi 3, 3, -10104
  04ae1c0  lis 5, 151
  04ae1c4  lfs 30, 20(3)
  04ae1c8  lfs 5, -3056(4)
  04ae1cc  addic 3, 5, -25376
  04ae1d0  fmuls 5, 5, 30
  04ae1d4  lwz 3, 448(3)
  04ae1d8  fctiwz 5, 5
  04ae1dc  stfd 5, 504(1)
  04ae1e0  lwz 4, 508(1)
  04ae1e4  cmpw 3, 4
  04ae1e8  bf 0, 0x4af310
  04ae1ec  fsubs 2, 4, 2
  04ae1f0  fsubs 1, 3, 1
  04ae1f4  fabs 5, 2
  04ae1f8  fabs 4, 1
  04ae1fc  stfs 1, 288(1)
  04ae200  stfs 2, 292(1)
  04ae204  lfs 3, 72(31)
  04ae208  fsubs 1, 4, 5
  04ae20c  stfs 1, 296(1)
  04ae210  lwz 3, 288(1)
  04ae214  lfs 1, 288(1)
  04ae218  lwz 4, 292(1)
  04ae21c  lfs 2, 292(1)
  04ae220  fabs 1, 1
  04ae224  lwz 5, 296(1)
  04ae228  rlwinm 4, 4, 3, 29, 29
  04ae22c  fabs 6, 2
  04ae230  lfs 2, 296(1)
  04ae234  rlwimi 4, 5, 2, 30, 30
  04ae238  fsub 7, 2, 31
  04ae23c  fsub 8, 2, 31
  04ae240  rlwimi 4, 3, 4, 28, 28
  04ae244  ori 3, 28, 0
  04ae248  rlwimi 3, 4, 2, 26, 28
  04ae24c  slwi 4, 4, 2
  04ae250  clrldi 3, 3, 32
  04ae254  fsel 5, 7, 1, 5
  04ae258  lfsx 1, 28, 4
  04ae25c  lfs 2, 4(3)
  04ae260  fsel 4, 8, 6, 4
  04ae264  fcmpu 0, 5, 31
  04ae268  bt 1, 0x4ae270
  04ae26c  b 0x4ae390
  04ae270  fsubs 6, 4, 5
  04ae274  fadds 4, 4, 5
  04ae278  addic 3, 1, 16
  04ae27c  li 6, 2
  04ae280  addic 5, 3, 440
  04ae284  addic 4, 3, 424
  04ae288  mtctr 6
  04ae28c  fdivs 4, 6, 4
  04ae290  fmuls 5, 4, 4
  04ae294  stfs 4, 452(1)
  04ae298  stfs 4, 444(1)
  04ae29c  stfs 4, 448(1)
  04ae2a0  stfs 4, 440(1)
  04ae2a4  lfs 7, 452(1)
  04ae2a8  lfs 8, 444(1)
  04ae2ac  lfs 9, 448(1)
  04ae2b0  fmuls 6, 5, 5
  04ae2b4  fmuls 8, 8, 5
  04ae2b8  fmuls 7, 7, 6
  04ae2bc  fmuls 4, 6, 6
  04ae2c0  fmuls 6, 9, 6
  04ae2c4  stfs 8, 444(1)
  04ae2c8  fmuls 5, 7, 5
  04ae2cc  stfs 6, 448(1)
  04ae2d0  stfs 5, 452(1)
  04ae2d4  lfs 5, 424(3)
  04ae2d8  fmuls 5, 5, 4
  04ae2dc  stfs 5, 440(3)
  04ae2e0  lfs 5, 4(4)
  04ae2e4  addic 4, 4, 8
  04ae2e8  fmuls 5, 5, 4
  04ae2ec  addic 3, 3, 8
  04ae2f0  stfs 5, 4(5)
  04ae2f4  addic 5, 5, 8
  04ae2f8  bdnz 0x4ae2d4
  04ae2fc  li 5, 4
  04ae300  ori 3, 1, 0
  04ae304  mtctr 5
  04ae308  lis 4, 115
  04ae30c  addic 5, 3, 440
  04ae310  addic 4, 4, 22752
  04ae314  ori 7, 5, 0
  04ae318  lfs 4, 440(3)
  04ae31c  lfs 5, 0(4)
  04ae320  fmuls 4, 4, 5
  04ae324  lfs 5, 4(4)
  04ae328  addic 4, 4, 8
  04ae32c  stfs 4, 440(3)
  04ae330  lfs 4, 4(5)
  04ae334  addic 3, 3, 8
  04ae338  fmuls 4, 4, 5
  04ae33c  stfs 4, 4(5)
  04ae340  addic 5, 5, 8
  04ae344  bdnz 0x4ae318
  04ae348  ori 3, 1, 0
  04ae34c  mtctr 6
  04ae350  lfs 4, 440(3)
  04ae354  lfs 5, 4(7)
  04ae358  fadds 4, 31, 4
  04ae35c  lfs 6, 8(7)
  04ae360  addic 3, 3, 16
  04ae364  lfs 31, 12(7)
  04ae368  addic 7, 7, 16
  04ae36c  fadds 4, 4, 5
  04ae370  fadds 4, 4, 6
  04ae374  fadds 31, 4, 31
  04ae378  bdnz 0x4ae350
  04ae37c  lis 3, 75
  04ae380  addi 3, 3, -10104
  04ae384  lfs 4, 40(3)
  04ae388  fadds 31, 31, 4
  04ae38c  fmadds 31, 31, 1, 2
  04ae390  fmr 1, 3
  04ae394  fmr 2, 31
  04ae398  bl 0x5026a0
  04ae39c  nop
  04ae3a0  lis 3, 75
  04ae3a4  addi 3, 3, -10104
  04ae3a8  lfs 2, 80(3)
  04ae3ac  fcmpu 0, 1, 2
  04ae3b0  cror 6, 1, 2
  04ae3b4  bt 6, 0x4af310
  04ae3b8  li 3, 7
  04ae3bc  lbz 4, 83(31)
  04ae3c0  cmpwi 4, 1
  04ae3c4  stb 3, 32(31)
  04ae3c8  bt 2, 0x4af310
  04ae3cc  lis 3, 114
  04ae3d0  li 4, 1
  04ae3d4  li 5, 0
  04ae3d8  lfs 1, -3056(3)
  04ae3dc  ori 3, 31, 0
  04ae3e0  fmuls 1, 1, 30
  04ae3e4  fctiwz 1, 1
  04ae3e8  stfd 1, 504(1)
  04ae3ec  lwz 6, 508(1)
  04ae3f0  extsw 6, 6
  04ae3f4  bl 0xfddc0
  04ae3f8  nop
  04ae3fc  b 0x4af310
  04ae400  ori 3, 31, 0
  04ae404  bl 0xefe40
  04ae408  nop
  04ae40c  lis 3, 75
  04ae410  addi 3, 3, -10104
  04ae414  lfs 2, 8(3)
  04ae418  fcmpu 0, 1, 2
  04ae41c  cror 6, 0, 2
  04ae420  bt 6, 0x4ae76c
  04ae424  ori 3, 31, 0
  04ae428  bl 0xefe40
  04ae42c  nop
  04ae430  lis 3, 75
  04ae434  addi 3, 3, -10104
  04ae438  lfs 2, 84(3)
  04ae43c  fcmpu 0, 1, 2
  04ae440  cror 6, 1, 2
  04ae444  bt 6, 0x4ae76c
  04ae448  lfs 1, 16(29)
  04ae44c  lfs 2, 16(31)
  04ae450  lfs 3, 20(29)
  04ae454  lfs 4, 20(31)
  04ae458  fsubs 1, 1, 2
  04ae45c  lis 3, 75
  04ae460  fsubs 2, 3, 4
  04ae464  addi 3, 3, -10104
  04ae468  lis 4, 115
  04ae46c  addic 4, 4, 22784
  04ae470  fabs 3, 1
  04ae474  fabs 6, 2
  04ae478  stfs 1, 276(1)
  04ae47c  stfs 2, 280(1)
  04ae480  lfs 4, 72(31)
  04ae484  fsubs 1, 3, 6
  04ae488  stfs 1, 284(1)
  04ae48c  lwz 5, 276(1)
  04ae490  lfs 5, 4(3)
  04ae494  lfs 1, 276(1)
  04ae498  lwz 3, 280(1)
  04ae49c  lfs 2, 280(1)
  04ae4a0  fabs 1, 1
  04ae4a4  lwz 6, 284(1)
  04ae4a8  rlwinm 3, 3, 3, 29, 29
  04ae4ac  fabs 7, 2
  04ae4b0  lfs 2, 284(1)
  04ae4b4  rlwimi 3, 6, 2, 30, 30
  04ae4b8  fsub 8, 2, 5
  04ae4bc  rlwimi 3, 5, 4, 28, 28
  04ae4c0  fsub 9, 2, 5
  04ae4c4  ori 5, 4, 0
  04ae4c8  rlwimi 5, 3, 2, 26, 28
  04ae4cc  slwi 3, 3, 2
  04ae4d0  clrldi 5, 5, 32
  04ae4d4  fsel 6, 8, 1, 6
  04ae4d8  lfsx 1, 4, 3
  04ae4dc  lfs 2, 4(5)
  04ae4e0  fsel 3, 9, 7, 3
  04ae4e4  fcmpu 0, 6, 5
  04ae4e8  bt 1, 0x4ae4f0
  04ae4ec  b 0x4ae610
  04ae4f0  fsubs 7, 3, 6
  04ae4f4  fadds 3, 3, 6
  04ae4f8  addic 3, 1, 16
  04ae4fc  li 6, 2
  04ae500  addic 5, 3, 408
  04ae504  addic 4, 3, 392
  04ae508  mtctr 6
  04ae50c  fdivs 3, 7, 3
  04ae510  fmuls 6, 3, 3
  04ae514  stfs 3, 420(1)
  04ae518  stfs 3, 412(1)
  04ae51c  stfs 3, 416(1)
  04ae520  stfs 3, 408(1)
  04ae524  lfs 8, 420(1)
  04ae528  lfs 9, 412(1)
  04ae52c  lfs 10, 416(1)
  04ae530  fmuls 7, 6, 6
  04ae534  fmuls 9, 9, 6
  04ae538  fmuls 8, 8, 7
  04ae53c  fmuls 3, 7, 7
  04ae540  fmuls 7, 10, 7
  04ae544  stfs 9, 412(1)
  04ae548  fmuls 6, 8, 6
  04ae54c  stfs 7, 416(1)
  04ae550  stfs 6, 420(1)
  04ae554  lfs 6, 392(3)
  04ae558  fmuls 6, 6, 3
  04ae55c  stfs 6, 408(3)
  04ae560  lfs 6, 4(4)
  04ae564  addic 4, 4, 8
  04ae568  fmuls 6, 6, 3
  04ae56c  addic 3, 3, 8
  04ae570  stfs 6, 4(5)
  04ae574  addic 5, 5, 8
  04ae578  bdnz 0x4ae554
  04ae57c  li 5, 4
  04ae580  ori 3, 1, 0
  04ae584  mtctr 5
  04ae588  lis 4, 115
  04ae58c  addic 5, 3, 408
  04ae590  addic 4, 4, 22752
  04ae594  ori 7, 5, 0
  04ae598  lfs 3, 408(3)
  04ae59c  lfs 6, 0(4)
  04ae5a0  fmuls 3, 3, 6
  04ae5a4  lfs 6, 4(4)
  04ae5a8  addic 4, 4, 8
  04ae5ac  stfs 3, 408(3)
  04ae5b0  lfs 3, 4(5)
  04ae5b4  addic 3, 3, 8
  04ae5b8  fmuls 3, 3, 6
  04ae5bc  stfs 3, 4(5)
  04ae5c0  addic 5, 5, 8
  04ae5c4  bdnz 0x4ae598
  04ae5c8  ori 3, 1, 0
  04ae5cc  mtctr 6
  04ae5d0  lfs 3, 408(3)
  04ae5d4  fadds 3, 5, 3
  04ae5d8  addic 3, 3, 16
  04ae5dc  lfs 5, 4(7)
  04ae5e0  lfs 6, 8(7)
  04ae5e4  lfs 7, 12(7)
  04ae5e8  addic 7, 7, 16
  04ae5ec  fadds 3, 3, 5
  04ae5f0  fadds 5, 3, 6
  04ae5f4  fadds 5, 5, 7
  04ae5f8  bdnz 0x4ae5d0
  04ae5fc  lis 3, 75
  04ae600  addi 3, 3, -10104
  04ae604  lfs 3, 40(3)
  04ae608  fadds 5, 5, 3
  04ae60c  fmadds 5, 5, 1, 2
  04ae610  fmr 1, 4
  04ae614  fmr 2, 5
  04ae618  bl 0x5026a0
  04ae61c  nop
  04ae620  lis 3, 75
  04ae624  addi 3, 3, -10104
  04ae628  lfs 2, 88(3)
  04ae62c  fcmpu 0, 1, 2
  04ae630  cror 6, 1, 2
  04ae634  bt 6, 0x4ae76c
  04ae638  lfs 1, 20(31)
  04ae63c  lfs 2, 20(29)
  04ae640  lfs 3, 16(31)
  04ae644  fsubs 1, 1, 2
  04ae648  lfs 2, 16(29)
  04ae64c  fsubs 2, 3, 2
  04ae650  lis 3, 143
  04ae654  fmuls 1, 1, 1
  04ae658  fmadds 1, 2, 2, 1
  04ae65c  lfs 2, 16672(3)
  04ae660  fsqrts 1, 1
  04ae664  fcmpu 0, 1, 2
  04ae668  cror 6, 1, 2
  04ae66c  bt 6, 0x4ae76c
  04ae670  lis 3, 75
  04ae674  lfs 1, 72(31)
  04ae678  addi 30, 3, -10104
  04ae67c  lfs 2, 44(30)
  04ae680  lfs 3, 48(30)
  04ae684  fadds 2, 1, 2
  04ae688  lfs 4, 52(30)
  04ae68c  fsubs 5, 3, 1
  04ae690  li 3, 0
  04ae694  addic 28, 1, 160
  04ae698  li 4, 0
  04ae69c  ori 5, 28, 0
  04ae6a0  fsubs 3, 3, 2
  04ae6a4  fsub 7, 1, 5
  04ae6a8  fsubs 6, 4, 2
  04ae6ac  fsubs 4, 4, 1
  04ae6b0  fsub 8, 2, 3
  04ae6b4  fsel 1, 7, 5, 1
  04ae6b8  fsel 2, 8, 3, 2
  04ae6bc  fsub 5, 4, 1
  04ae6c0  lfs 3, 56(30)
  04ae6c4  fsub 7, 6, 2
  04ae6c8  fsel 1, 5, 4, 1
  04ae6cc  lfs 4, 60(30)
  04ae6d0  lfs 5, 64(30)
  04ae6d4  lfs 8, 68(30)
  04ae6d8  fsel 2, 7, 6, 2
  04ae6dc  fmuls 6, 1, 1
  04ae6e0  fmuls 7, 2, 2
  04ae6e4  fmuls 9, 6, 1
  04ae6e8  fmuls 10, 7, 2
  04ae6ec  fmuls 11, 6, 9
  04ae6f0  fmadds 1, 9, 3, 1
  04ae6f4  lfs 9, 92(30)
  04ae6f8  stw 3, 152(1)
  04ae6fc  ori 3, 31, 0
  04ae700  fmuls 12, 7, 10
  04ae704  fmadds 2, 10, 3, 2
  04ae708  fmuls 3, 6, 11
  04ae70c  fmadds 1, 11, 4, 1
  04ae710  fmuls 10, 7, 12
  04ae714  fmadds 2, 12, 4, 2
  04ae718  fmuls 4, 6, 3
  04ae71c  fmadds 1, 3, 5, 1
  04ae720  fmuls 3, 7, 10
  04ae724  fmadds 2, 10, 5, 2
  04ae728  fmadds 1, 4, 8, 1
  04ae72c  fmadds 2, 3, 8, 2
  04ae730  fmuls 1, 1, 9
  04ae734  fmuls 2, 2, 9
  04ae738  stfs 1, 148(1)
  04ae73c  stfs 2, 144(1)
  04ae740  bl 0xf1114
  04ae744  nop
  04ae748  lfs 1, 76(30)
  04ae74c  addic 8, 1, 144
  04ae750  ori 3, 29, 0
  04ae754  ori 4, 31, 0
  04ae758  li 5, 1
  04ae75c  ori 7, 28, 0
  04ae760  bl 0x105c08
  04ae764  nop
  04ae768  b 0x4af310
  04ae76c  lbz 3, 112(31)
  04ae770  rlwinm 3, 3, 0, 30, 30
  04ae774  cmpwi 3, 0
  04ae778  bt 2, 0x4af310
  04ae77c  li 3, 5
  04ae780  lbz 4, 83(31)
  04ae784  cmpwi 4, 22
  04ae788  stb 3, 32(31)
  04ae78c  bt 2, 0x4af310
  04ae790  lis 3, 75
  04ae794  lis 4, 114
  04ae798  addi 3, 3, -10104
  04ae79c  li 5, 0
  04ae7a0  lfs 1, 96(3)
  04ae7a4  lfs 2, -3056(4)
  04ae7a8  ori 3, 31, 0
  04ae7ac  li 4, 22
  04ae7b0  fmuls 1, 2, 1
  04ae7b4  fctiwz 1, 1
  04ae7b8  stfd 1, 504(1)
  04ae7bc  lwz 6, 508(1)
  04ae7c0  extsw 6, 6
  04ae7c4  bl 0xfddc0
  04ae7c8  nop
  04ae7cc  b 0x4af310
  04ae7d0  lis 3, 75
  04ae7d4  lfs 1, 420(30)
  04ae7d8  lis 26, 114
  04ae7dc  addi 27, 3, -10104
  04ae7e0  lis 4, 114
  04ae7e4  addic 3, 30, 244
  04ae7e8  lfs 2, 100(27)
  04ae7ec  lfs 3, 8(27)
  04ae7f0  fmuls 1, 1, 2
  04ae7f4  lfs 4, -3052(26)
  04ae7f8  lfs 5, -3048(4)
  04ae7fc  fmuls 2, 5, 3
  04ae800  fmuls 1, 1, 4
  04ae804  bl 0x109af0
  04ae808  nop
  04ae80c  lfs 1, 16(29)
  04ae810  lfs 2, 16(31)
  04ae814  lfs 3, 20(29)
  04ae818  lfs 4, 20(31)
  04ae81c  fsubs 1, 1, 2
  04ae820  fsubs 2, 3, 4
  04ae824  lis 28, 115
  04ae828  addic 28, 28, 22784
  04ae82c  fabs 3, 1
  04ae830  fabs 4, 2
  04ae834  stfs 1, 264(1)
  04ae838  stfs 2, 268(1)
  04ae83c  fsubs 1, 3, 4
  04ae840  stfs 1, 272(1)
  04ae844  lwz 3, 264(1)
  04ae848  lfs 31, 4(27)
  04ae84c  lfs 1, 264(1)
  04ae850  lwz 4, 268(1)
  04ae854  fabs 2, 1
  04ae858  lfs 1, 268(1)
  04ae85c  rlwinm 4, 4, 3, 29, 29
  04ae860  fabs 5, 1
  04ae864  lfs 1, -3052(26)
  04ae868  lwz 5, 272(1)
  04ae86c  lfs 6, 272(1)
  04ae870  rlwimi 4, 5, 2, 30, 30
  04ae874  fsub 7, 6, 31
  04ae878  fsub 6, 6, 31
  04ae87c  rlwimi 4, 3, 4, 28, 28
  04ae880  ori 3, 28, 0
  04ae884  rlwimi 3, 4, 2, 26, 28
  04ae888  slwi 4, 4, 2
  04ae88c  clrldi 3, 3, 32
  04ae890  fsel 4, 7, 2, 4
  04ae894  lfsx 30, 28, 4
  04ae898  fsel 3, 6, 5, 3
  04ae89c  lfs 2, 4(3)
  04ae8a0  fcmpu 0, 4, 31
  04ae8a4  bt 1, 0x4ae8b0
  04ae8a8  fmr 30, 31
  04ae8ac  b 0x4ae9d4
  04ae8b0  fsubs 5, 3, 4
  04ae8b4  fadds 3, 3, 4
  04ae8b8  addic 3, 1, 16
  04ae8bc  li 6, 2
  04ae8c0  addic 5, 3, 376
  04ae8c4  addic 4, 3, 360
  04ae8c8  mtctr 6
  04ae8cc  fdivs 3, 5, 3
  04ae8d0  fmuls 4, 3, 3
  04ae8d4  stfs 3, 388(1)
  04ae8d8  stfs 3, 380(1)
  04ae8dc  stfs 3, 384(1)
  04ae8e0  stfs 3, 376(1)
  04ae8e4  lfs 6, 388(1)
  04ae8e8  lfs 7, 380(1)
  04ae8ec  lfs 8, 384(1)
  04ae8f0  fmuls 5, 4, 4
  04ae8f4  fmuls 7, 7, 4
  04ae8f8  fmuls 6, 6, 5
  04ae8fc  fmuls 3, 5, 5
  04ae900  fmuls 5, 8, 5
  04ae904  stfs 7, 380(1)
  04ae908  fmuls 4, 6, 4
  04ae90c  stfs 5, 384(1)
  04ae910  stfs 4, 388(1)
  04ae914  lfs 4, 360(3)
  04ae918  fmuls 4, 4, 3
  04ae91c  stfs 4, 376(3)
  04ae920  lfs 4, 4(4)
  04ae924  addic 4, 4, 8
  04ae928  fmuls 4, 4, 3
  04ae92c  addic 3, 3, 8
  04ae930  stfs 4, 4(5)
  04ae934  addic 5, 5, 8
  04ae938  bdnz 0x4ae914
  04ae93c  li 5, 4
  04ae940  ori 3, 1, 0
  04ae944  mtctr 5
  04ae948  lis 4, 115
  04ae94c  addic 5, 3, 376
  04ae950  addic 4, 4, 22752
  04ae954  ori 7, 5, 0
  04ae958  lfs 3, 376(3)
  04ae95c  lfs 4, 0(4)
  04ae960  fmuls 3, 3, 4
  04ae964  lfs 4, 4(4)
  04ae968  addic 4, 4, 8
  04ae96c  stfs 3, 376(3)
  04ae970  lfs 3, 4(5)
  04ae974  addic 3, 3, 8
  04ae978  fmuls 3, 3, 4
  04ae97c  stfs 3, 4(5)
  04ae980  addic 5, 5, 8
  04ae984  bdnz 0x4ae958
  04ae988  ori 3, 1, 0
  04ae98c  fmr 3, 31
  04ae990  mtctr 6
  04ae994  lfs 4, 376(3)
  04ae998  fadds 3, 3, 4
  04ae99c  lfs 4, 4(7)
  04ae9a0  addic 3, 3, 16
  04ae9a4  lfs 5, 8(7)
  04ae9a8  lfs 6, 12(7)
  04ae9ac  addic 7, 7, 16
  04ae9b0  fadds 3, 3, 4
  04ae9b4  fadds 3, 3, 5
  04ae9b8  fadds 3, 3, 6
  04ae9bc  bdnz 0x4ae994
  04ae9c0  lis 3, 75
  04ae9c4  addi 3, 3, -10104
  04ae9c8  lfs 4, 40(3)
  04ae9cc  fadds 3, 3, 4
  04ae9d0  fmadds 30, 3, 30, 2
  04ae9d4  lis 3, 75
  04ae9d8  fmr 4, 1
  04ae9dc  fmr 1, 30
  04ae9e0  addic 5, 30, 400
  04ae9e4  addi 4, 3, -10104
  04ae9e8  ori 3, 31, 0
  04ae9ec  lfs 5, 32(4)
  04ae9f0  lfs 2, 24(4)
  04ae9f4  lfs 6, 28(4)
  04ae9f8  fmuls 4, 4, 5
  04ae9fc  fmr 3, 6
  04aea00  bl 0xff2e8
  04aea04  nop
  04aea08  lfs 1, 16(29)
  04aea0c  lfs 2, 16(31)
  04aea10  lfs 3, 20(29)
  04aea14  lfs 4, 20(31)
  04aea18  fsubs 1, 1, 2
  04aea1c  fsubs 2, 3, 4
  04aea20  fabs 3, 1
  04aea24  fabs 4, 2
  04aea28  stfs 1, 252(1)
  04aea2c  stfs 2, 256(1)
  04aea30  lfs 30, 72(31)
  04aea34  fsubs 1, 3, 4
  04aea38  stfs 1, 260(1)
  04aea3c  lwz 3, 252(1)
  04aea40  lfs 1, 252(1)
  04aea44  lwz 4, 256(1)
  04aea48  lfs 2, 256(1)
  04aea4c  lwz 5, 260(1)
  04aea50  rlwinm 4, 4, 3, 29, 29
  04aea54  lfs 5, 260(1)
  04aea58  fabs 1, 1
  04aea5c  rlwimi 4, 5, 2, 30, 30
  04aea60  fabs 2, 2
  04aea64  fsub 6, 5, 31
  04aea68  fsub 5, 5, 31
  04aea6c  rlwimi 4, 3, 4, 28, 28
  04aea70  ori 3, 28, 0
  04aea74  rlwimi 3, 4, 2, 26, 28
  04aea78  slwi 4, 4, 2
  04aea7c  clrldi 3, 3, 32
  04aea80  fsel 4, 6, 1, 4
  04aea84  lfsx 1, 28, 4
  04aea88  fsel 3, 5, 2, 3
  04aea8c  lfs 2, 4(3)
  04aea90  fcmpu 0, 4, 31
  04aea94  bt 1, 0x4aea9c
  04aea98  b 0x4aebbc
  04aea9c  fsubs 5, 3, 4
  04aeaa0  fadds 3, 3, 4
  04aeaa4  addic 3, 1, 16
  04aeaa8  li 6, 2
  04aeaac  addic 4, 3, 328
  04aeab0  addic 5, 3, 344
  04aeab4  mtctr 6
  04aeab8  fdivs 3, 5, 3
  04aeabc  fmuls 4, 3, 3
  04aeac0  stfs 3, 356(1)
  04aeac4  stfs 3, 348(1)
  04aeac8  stfs 3, 352(1)
  04aeacc  stfs 3, 344(1)
  04aead0  lfs 6, 356(1)
  04aead4  lfs 7, 348(1)
  04aead8  lfs 8, 352(1)
  04aeadc  fmuls 5, 4, 4
  04aeae0  fmuls 7, 7, 4
  04aeae4  fmuls 6, 6, 5
  04aeae8  fmuls 3, 5, 5
  04aeaec  fmuls 5, 8, 5
  04aeaf0  stfs 7, 348(1)
  04aeaf4  fmuls 4, 6, 4
  04aeaf8  stfs 5, 352(1)
  04aeafc  stfs 4, 356(1)
  04aeb00  lfs 4, 328(3)
  04aeb04  fmuls 4, 4, 3
  04aeb08  stfs 4, 344(3)
  04aeb0c  lfs 4, 4(4)
  04aeb10  addic 3, 3, 8
  04aeb14  addic 4, 4, 8
  04aeb18  fmuls 4, 4, 3
  04aeb1c  stfs 4, 4(5)
  04aeb20  addic 5, 5, 8
  04aeb24  bdnz 0x4aeb00
  04aeb28  li 5, 4
  04aeb2c  ori 3, 1, 0
  04aeb30  mtctr 5
  04aeb34  lis 4, 115
  04aeb38  addic 5, 3, 344
  04aeb3c  addic 4, 4, 22752
  04aeb40  ori 7, 5, 0
  04aeb44  lfs 3, 344(3)
  04aeb48  lfs 4, 0(4)
  04aeb4c  fmuls 3, 3, 4
  04aeb50  lfs 4, 4(4)
  04aeb54  addic 4, 4, 8
  04aeb58  stfs 3, 344(3)
  04aeb5c  lfs 3, 4(5)
  04aeb60  addic 3, 3, 8
  04aeb64  fmuls 3, 3, 4
  04aeb68  stfs 3, 4(5)
  04aeb6c  addic 5, 5, 8
  04aeb70  bdnz 0x4aeb44
  04aeb74  ori 3, 1, 0
  04aeb78  mtctr 6
  04aeb7c  lfs 3, 344(3)
  04aeb80  lfs 4, 4(7)
  04aeb84  fadds 3, 31, 3
  04aeb88  lfs 5, 8(7)
  04aeb8c  lfs 31, 12(7)
  04aeb90  addic 3, 3, 16
  04aeb94  addic 7, 7, 16
  04aeb98  fadds 3, 3, 4
  04aeb9c  fadds 3, 3, 5
  04aeba0  fadds 31, 3, 31
  04aeba4  bdnz 0x4aeb7c
  04aeba8  lis 3, 75
  04aebac  addi 3, 3, -10104
  04aebb0  lfs 3, 40(3)
  04aebb4  fadds 31, 31, 3
  04aebb8  fmadds 31, 31, 1, 2
  04aebbc  lis 3, 75
  04aebc0  fmr 1, 31
  04aebc4  addi 28, 3, -10104
  04aebc8  lfs 2, 104(28)
  04aebcc  bl 0x502578
  04aebd0  nop
  04aebd4  lfs 2, 48(28)
  04aebd8  lfs 3, 44(28)
  04aebdc  fsubs 5, 2, 1
  04aebe0  lfs 4, 52(28)
  04aebe4  fadds 3, 1, 3
  04aebe8  fsubs 6, 4, 1
  04aebec  li 5, 0
  04aebf0  ori 3, 31, 0
  04aebf4  addic 4, 30, 208
  04aebf8  addic 6, 1, 192
  04aebfc  fsub 7, 1, 5
  04aec00  fsubs 2, 2, 3
  04aec04  fsubs 4, 4, 3
  04aec08  fsel 5, 7, 5, 1
  04aec0c  fsub 9, 3, 2
  04aec10  lfs 7, 56(28)
  04aec14  lfs 8, 60(28)
  04aec18  fsel 2, 9, 2, 3
  04aec1c  fsub 3, 6, 5
  04aec20  fsub 10, 4, 2
  04aec24  fsel 3, 3, 6, 5
  04aec28  lfs 5, 64(28)
  04aec2c  lfs 6, 68(28)
  04aec30  lfs 9, 72(28)
  04aec34  stw 5, 184(1)
  04aec38  addic 5, 1, 176
  04aec3c  fsel 2, 10, 4, 2
  04aec40  fmuls 4, 3, 3
  04aec44  fmuls 10, 2, 2
  04aec48  fmuls 11, 4, 3
  04aec4c  fmuls 12, 10, 2
  04aec50  fmuls 13, 4, 11
  04aec54  fmadds 3, 11, 7, 3
  04aec58  fmuls 11, 10, 12
  04aec5c  fmadds 2, 12, 7, 2
  04aec60  fmuls 7, 4, 13
  04aec64  fmadds 3, 13, 8, 3
  04aec68  fmuls 12, 10, 11
  04aec6c  fmadds 2, 11, 8, 2
  04aec70  fmuls 4, 4, 7
  04aec74  fmadds 3, 7, 5, 3
  04aec78  fmuls 7, 10, 12
  04aec7c  fmadds 2, 12, 5, 2
  04aec80  fmadds 3, 4, 6, 3
  04aec84  fmadds 2, 7, 6, 2
  04aec88  fmuls 3, 3, 9
  04aec8c  fmuls 2, 2, 9
  04aec90  stfs 3, 180(1)
  04aec94  lfs 3, 76(28)
  04aec98  stfs 1, 72(31)
  04aec9c  fmr 1, 3
  04aeca0  stfs 2, 176(1)
  04aeca4  bl 0x101058
  04aeca8  nop
  04aecac  addic 3, 30, 424
  04aecb0  stfs 30, 72(31)
  04aecb4  bl 0x4fff60
  04aecb8  nop
  04aecbc  cmpwi 3, 0
  04aecc0  bf 2, 0x4aed0c
  04aecc4  lfs 1, 20(31)
  04aecc8  lfs 2, 20(29)
  04aeccc  lfs 3, 16(31)
  04aecd0  fsubs 1, 1, 2
  04aecd4  lfs 2, 16(29)
  04aecd8  fsubs 2, 3, 2
  04aecdc  lfs 3, 24(31)
  04aece0  lfs 4, 24(29)
  04aece4  fsubs 3, 3, 4
  04aece8  fmuls 1, 1, 1
  04aecec  lis 3, 143
  04aecf0  fmadds 1, 2, 2, 1
  04aecf4  lfs 2, 16692(3)
  04aecf8  fmadds 1, 3, 3, 1
  04aecfc  fsqrts 1, 1
  04aed00  fcmpu 0, 1, 2
  04aed04  cror 6, 0, 2
  04aed08  bt 6, 0x4af310
  04aed0c  lis 4, 75
  04aed10  li 3, 7
  04aed14  addi 4, 4, -10104
  04aed18  lis 5, 114
  04aed1c  stb 3, 32(31)
  04aed20  lis 3, 143
  04aed24  lfs 1, 108(4)
  04aed28  lfs 2, -3052(5)
  04aed2c  fmuls 1, 2, 1
  04aed30  stfs 1, 244(30)
  04aed34  lwz 3, 16700(3)
  04aed38  cmpwi 3, 0
  04aed3c  bt 2, 0x4aed94
  04aed40  lbz 3, 83(31)
  04aed44  cmpwi 3, 1
  04aed48  bt 2, 0x4af310
  04aed4c  lis 3, 75
  04aed50  lis 4, 114
  04aed54  addi 3, 3, -10104
  04aed58  lis 5, 143
  04aed5c  lfs 1, 112(3)
  04aed60  lfs 2, -3056(4)
  04aed64  lwz 5, 16704(5)
  04aed68  ori 3, 31, 0
  04aed6c  fmuls 1, 2, 1
  04aed70  li 4, 1
  04aed74  extsw 5, 5
  04aed78  fctiwz 1, 1
  04aed7c  stfd 1, 504(1)
  04aed80  lwz 6, 508(1)
  04aed84  extsw 6, 6
  04aed88  bl 0xfddc0
  04aed8c  nop
  04aed90  b 0x4af310
  04aed94  lbz 3, 83(31)
  04aed98  cmpwi 3, 1
  04aed9c  bt 2, 0x4af310
  04aeda0  lis 3, 75
  04aeda4  lis 4, 114
  04aeda8  addi 3, 3, -10104
  04aedac  li 5, 10
  04aedb0  lfs 1, 20(3)
  04aedb4  lfs 2, -3056(4)
  04aedb8  ori 3, 31, 0
  04aedbc  li 4, 1
  04aedc0  fmuls 1, 2, 1
  04aedc4  fctiwz 1, 1
  04aedc8  stfd 1, 504(1)
  04aedcc  lwz 6, 508(1)
  04aedd0  extsw 6, 6
  04aedd4  bl 0xfddc0
  04aedd8  nop
  04aeddc  b 0x4af310
  04aede0  lis 3, 75
  04aede4  lis 29, 114
  04aede8  lfs 1, 420(30)
  04aedec  addi 28, 3, -10104
  04aedf0  lis 4, 114
  04aedf4  addic 3, 30, 244
  04aedf8  lfs 2, -3052(29)
  04aedfc  lfs 3, 36(28)
  04aee00  lfs 4, -3048(4)
  04aee04  fmuls 1, 1, 2
  04aee08  fmuls 2, 4, 3
  04aee0c  bl 0x109af0
  04aee10  nop
  04aee14  lfs 1, 368(30)
  04aee18  lfs 2, 16(31)
  04aee1c  lfs 3, 372(30)
  04aee20  lfs 4, 20(31)
  04aee24  fsubs 1, 1, 2
  04aee28  fsubs 2, 3, 4
  04aee2c  lis 3, 115
  04aee30  addic 3, 3, 22784
  04aee34  fabs 3, 1
  04aee38  fabs 6, 2
  04aee3c  stfs 1, 240(1)
  04aee40  stfs 2, 244(1)
  04aee44  fsubs 1, 3, 6
  04aee48  stfs 1, 248(1)
  04aee4c  lwz 4, 240(1)
  04aee50  lfs 4, 4(28)
  04aee54  lfs 1, 240(1)
  04aee58  lwz 5, 244(1)
  04aee5c  lfs 2, 244(1)
  04aee60  fabs 1, 1
  04aee64  lwz 6, 248(1)
  04aee68  rlwinm 5, 5, 3, 29, 29
  04aee6c  fabs 7, 2
  04aee70  lfs 2, 248(1)
  04aee74  rlwimi 5, 6, 2, 30, 30
  04aee78  fsub 8, 2, 4
  04aee7c  fsub 9, 2, 4
  04aee80  rlwimi 5, 4, 4, 28, 28
  04aee84  ori 4, 3, 0
  04aee88  lfs 5, -3052(29)
  04aee8c  rlwimi 4, 5, 2, 26, 28
  04aee90  slwi 5, 5, 2
  04aee94  clrldi 4, 4, 32
  04aee98  fsel 6, 8, 1, 6
  04aee9c  lfsx 1, 3, 5
  04aeea0  fsel 3, 9, 7, 3
  04aeea4  lfs 2, 4(4)
  04aeea8  fcmpu 0, 6, 4
  04aeeac  bt 1, 0x4aeeb4
  04aeeb0  b 0x4aefd4
  04aeeb4  fsubs 7, 3, 6
  04aeeb8  fadds 3, 3, 6
  04aeebc  addic 3, 1, 16
  04aeec0  li 6, 2
  04aeec4  addic 4, 3, 296
  04aeec8  addic 5, 3, 312
  04aeecc  mtctr 6
  04aeed0  fdivs 3, 7, 3
  04aeed4  fmuls 6, 3, 3
  04aeed8  stfs 3, 324(1)
  04aeedc  stfs 3, 316(1)
  04aeee0  stfs 3, 320(1)
  04aeee4  stfs 3, 312(1)
  04aeee8  lfs 8, 324(1)
  04aeeec  lfs 9, 316(1)
  04aeef0  lfs 10, 320(1)
  04aeef4  fmuls 7, 6, 6
  04aeef8  fmuls 9, 9, 6
  04aeefc  fmuls 8, 8, 7
  04aef00  fmuls 3, 7, 7
  04aef04  fmuls 7, 10, 7
  04aef08  stfs 9, 316(1)
  04aef0c  fmuls 6, 8, 6
  04aef10  stfs 7, 320(1)
  04aef14  stfs 6, 324(1)
  04aef18  lfs 6, 296(3)
  04aef1c  fmuls 6, 6, 3
  04aef20  stfs 6, 312(3)
  04aef24  lfs 6, 4(4)
  04aef28  addic 3, 3, 8
  04aef2c  addic 4, 4, 8
  04aef30  fmuls 6, 6, 3
  04aef34  stfs 6, 4(5)
  04aef38  addic 5, 5, 8
  04aef3c  bdnz 0x4aef18
  04aef40  li 5, 4
  04aef44  ori 3, 1, 0
  04aef48  mtctr 5
  04aef4c  lis 4, 115
  04aef50  addic 5, 3, 312
  04aef54  addic 4, 4, 22752
  04aef58  ori 7, 5, 0
  04aef5c  lfs 3, 312(3)
  04aef60  lfs 6, 0(4)
  04aef64  fmuls 3, 3, 6
  04aef68  lfs 6, 4(4)
  04aef6c  addic 4, 4, 8
  04aef70  stfs 3, 312(3)
  04aef74  lfs 3, 4(5)
  04aef78  addic 3, 3, 8
  04aef7c  fmuls 3, 3, 6
  04aef80  stfs 3, 4(5)
  04aef84  addic 5, 5, 8
  04aef88  bdnz 0x4aef5c
  04aef8c  ori 3, 1, 0
  04aef90  mtctr 6
  04aef94  lfs 3, 312(3)
  04aef98  fadds 3, 4, 3
  04aef9c  lfs 4, 4(7)
  04aefa0  addic 3, 3, 16
  04aefa4  lfs 6, 8(7)
  04aefa8  lfs 7, 12(7)
  04aefac  addic 7, 7, 16
  04aefb0  fadds 3, 3, 4
  04aefb4  fadds 4, 3, 6
  04aefb8  fadds 4, 4, 7
  04aefbc  bdnz 0x4aef94
  04aefc0  lis 3, 75
  04aefc4  addi 3, 3, -10104
  04aefc8  lfs 3, 40(3)
  04aefcc  fadds 4, 4, 3
  04aefd0  fmadds 4, 4, 1, 2
  04aefd4  lis 3, 75
  04aefd8  fmr 1, 4
  04aefdc  addic 5, 30, 400
  04aefe0  addi 29, 3, -10104
  04aefe4  ori 3, 31, 0
  04aefe8  lfs 4, 32(29)
  04aefec  lfs 2, 24(29)
  04aeff0  lfs 3, 28(29)
  04aeff4  fmuls 4, 5, 4
  04aeff8  bl 0xff2e8
  04aeffc  nop
  04af000  lfs 1, 48(29)
  04af004  lfs 2, 44(29)
  04af008  lfs 3, 72(31)
  04af00c  lfs 4, 52(29)
  04af010  fadds 2, 3, 2
  04af014  fsubs 5, 1, 3
  04af018  fsubs 6, 4, 3
  04af01c  li 3, 0
  04af020  addic 4, 30, 208
  04af024  addic 5, 1, 208
  04af028  fsubs 1, 1, 2
  04af02c  fsub 7, 3, 5
  04af030  fsubs 4, 4, 2
  04af034  addic 6, 1, 224
  04af038  fsub 9, 2, 1
  04af03c  fsel 3, 7, 5, 3
  04af040  lfs 5, 56(29)
  04af044  lfs 7, 60(29)
  04af048  fsel 1, 9, 1, 2
  04af04c  fsub 2, 6, 3
  04af050  fsub 9, 4, 1
  04af054  fsel 2, 2, 6, 3
  04af058  lfs 3, 64(29)
  04af05c  lfs 6, 68(29)
  04af060  lfs 8, 72(29)
  04af064  stw 3, 216(1)
  04af068  ori 3, 31, 0
  04af06c  fsel 1, 9, 4, 1
  04af070  fmuls 4, 2, 2
  04af074  fmuls 9, 1, 1
  04af078  fmuls 10, 4, 2
  04af07c  fmuls 11, 9, 1
  04af080  fmuls 12, 4, 10
  04af084  fmadds 2, 10, 5, 2
  04af088  fmadds 1, 11, 5, 1
  04af08c  fmuls 5, 4, 12
  04af090  fmadds 2, 12, 7, 2
  04af094  fmuls 10, 9, 11
  04af098  fmuls 4, 4, 5
  04af09c  fmadds 2, 5, 3, 2
  04af0a0  fmuls 11, 9, 10
  04af0a4  fmadds 1, 10, 7, 1
  04af0a8  fmadds 2, 4, 6, 2
  04af0ac  fmuls 5, 9, 11
  04af0b0  fmadds 1, 11, 3, 1
  04af0b4  fmuls 2, 2, 8
  04af0b8  fmadds 1, 5, 6, 1
  04af0bc  fmuls 1, 1, 8
  04af0c0  stfs 2, 212(1)
  04af0c4  lfs 2, 76(29)
  04af0c8  fmr 31, 2
  04af0cc  stfs 1, 208(1)
  04af0d0  fmr 1, 31
  04af0d4  bl 0x101058
  04af0d8  nop
  04af0dc  lfs 1, 20(31)
  04af0e0  lfs 2, 372(30)
  04af0e4  lfs 3, 16(31)
  04af0e8  fsubs 1, 1, 2
  04af0ec  lfs 2, 368(30)
  04af0f0  fsubs 2, 3, 2
  04af0f4  lfs 3, 24(31)
  04af0f8  lfs 4, 376(30)
  04af0fc  fsubs 3, 3, 4
  04af100  fmuls 1, 1, 1
  04af104  fmadds 1, 2, 2, 1
  04af108  fmadds 1, 3, 3, 1
  04af10c  fsqrts 1, 1
  04af110  fcmpu 0, 1, 31
  04af114  cror 6, 1, 2
  04af118  bt 6, 0x4af170
  04af11c  li 3, 3
  04af120  lbz 4, 83(31)
  04af124  cmpwi 4, 20
  04af128  stb 3, 32(31)
  04af12c  bt 2, 0x4af310
  04af130  lis 3, 75
  04af134  lis 4, 114
  04af138  addi 3, 3, -10104
  04af13c  li 5, 0
  04af140  lfs 1, 96(3)
  04af144  lfs 2, -3056(4)
  04af148  ori 3, 31, 0
  04af14c  li 4, 20
  04af150  fmuls 1, 2, 1
  04af154  fctiwz 1, 1
  04af158  stfd 1, 504(1)
  04af15c  lwz 6, 508(1)
  04af160  extsw 6, 6
  04af164  bl 0xfddc0
  04af168  nop
  04af16c  b 0x4af310
  04af170  lwz 3, 356(30)
  04af174  cmpwi 3, 2
  04af178  bt 2, 0x4af310
  04af17c  li 3, 5
  04af180  lbz 4, 83(31)
  04af184  cmpwi 4, 22
  04af188  stb 3, 32(31)
  04af18c  bt 2, 0x4af310
  04af190  lis 3, 75
  04af194  lis 4, 114
  04af198  addi 3, 3, -10104
  04af19c  li 5, 0
  04af1a0  lfs 1, 96(3)
  04af1a4  lfs 2, -3056(4)
  04af1a8  ori 3, 31, 0
  04af1ac  li 4, 22
  04af1b0  fmuls 1, 2, 1
  04af1b4  fctiwz 1, 1
  04af1b8  stfd 1, 504(1)
  04af1bc  lwz 6, 508(1)
  04af1c0  extsw 6, 6
  04af1c4  bl 0xfddc0
  04af1c8  nop
  04af1cc  b 0x4af310
  04af1d0  addic 4, 30, 112
  04af1d4  ori 3, 31, 0
  04af1d8  bl 0x10b030
  04af1dc  nop
  04af1e0  li 4, 65
  04af1e4  and 3, 3, 4
  04af1e8  cmpwi 3, 0
  04af1ec  bt 2, 0x4af280
  04af1f0  li 3, 9
  04af1f4  lbz 4, 83(31)
  04af1f8  cmpwi 4, 22
  04af1fc  stb 3, 32(31)
  04af200  bt 2, 0x4af240
  04af204  lis 3, 75
  04af208  lis 4, 114
  04af20c  addi 3, 3, -10104
  04af210  li 5, 0
  04af214  lfs 1, 96(3)
  04af218  lfs 2, -3056(4)
  04af21c  ori 3, 31, 0
  04af220  fmuls 1, 2, 1
  04af224  li 4, 22
  04af228  fctiwz 1, 1
  04af22c  stfd 1, 504(1)
  04af230  lwz 6, 508(1)
  04af234  extsw 6, 6
  04af238  bl 0xfddc0
  04af23c  nop
  04af240  lis 3, 75
  04af244  li 4, 116
  04af248  vspltisw 2, -1
  04af24c  addi 3, 3, -10104
  04af250  lis 5, 114
  04af254  li 6, -3056
  04af258  vslw 2, 2, 2
  04af25c  <unknown>
  04af260  li 3, 424
  04af264  vspltw 3, 3, 0
  04af268  <unknown>
  04af26c  vmaddfp 2, 4, 3, 2
  04af270  vctsxs 2, 2, 0
  04af274  vspltw 2, 2, 0
  04af278  stvewx 2, 3, 30
  04af27c  b 0x4af310
  04af280  lis 3, 75
  04af284  lfs 1, 376(30)
  04af288  addi 3, 3, -10104
  04af28c  lfs 2, 92(3)
  04af290  lfs 3, 24(31)
  04af294  fsubs 1, 1, 2
  04af298  fcmpu 0, 3, 1
  04af29c  cror 6, 1, 2
  04af2a0  bt 6, 0x4af310
  04af2a4  ori 3, 31, 0
  04af2a8  bl 0xefb38
  04af2ac  nop
  04af2b0  b 0x4af310
  04af2b4  ori 3, 31, 0
  04af2b8  addic 4, 30, 112
  04af2bc  bl 0x10b030
  04af2c0  nop
  04af2c4  rlwinm 3, 3, 0, 25, 25
  04af2c8  cmpwi 3, 0
  04af2cc  bt 2, 0x4af2e0
  04af2d0  ori 3, 31, 0
  04af2d4  bl 0xefb38
  04af2d8  nop
  04af2dc  b 0x4af310
  04af2e0  lwz 4, 24(31)
  04af2e4  lis 3, 16384
  04af2e8  srawi 5, 4, 31
  04af2ec  srwi 6, 5, 1
  04af2f0  xor 4, 6, 4
  04af2f4  subc 4, 4, 5
  04af2f8  cmpw 4, 3
  04af2fc  bf 0, 0x4af310
  04af300  ori 3, 31, 0
  04af304  bl 0xefb38
  04af308  nop
  04af30c  b 0x4af310
  04af310  ld 0, 608(1)
  04af314  mtlr 0
  04af318  lfd 30, 576(1)
  04af31c  lfd 31, 584(1)
  04af320  ld 26, 528(1)
  04af324  ld 27, 536(1)
  04af328  ld 28, 544(1)
  04af32c  ld 29, 552(1)
  04af330  ld 30, 560(1)
  04af334  ld 31, 568(1)
  04af338  addi 1, 1, 592
  04af33c  blr
