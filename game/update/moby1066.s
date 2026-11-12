# game/update/moby1066.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1066_001ad26c:   # 0x1ad26c, 0x2ac bytes
  01ad26c  stdu 1, -560(1)
  01ad270  mflr 0
  01ad274  std 0, 576(1)
  01ad278  stfd 28, 528(1)
  01ad27c  stfd 29, 536(1)
  01ad280  stfd 30, 544(1)
  01ad284  stfd 31, 552(1)
  01ad288  lis 3, 149
  01ad28c  lis 4, 117
  01ad290  lis 5, 117
  01ad294  addic 3, 3, 5056
  01ad298  lis 6, 117
  01ad29c  lfs 29, 30940(4)
  01ad2a0  lwz 4, 30924(5)
  01ad2a4  lfs 28, 344(3)
  01ad2a8  lfs 30, 340(3)
  01ad2ac  extsw 3, 4
  01ad2b0  std 31, 520(1)
  01ad2b4  std 30, 512(1)
  01ad2b8  std 29, 504(1)
  01ad2bc  std 28, 496(1)
  01ad2c0  std 27, 488(1)
  01ad2c4  std 26, 480(1)
  01ad2c8  std 25, 472(1)
  01ad2cc  lfs 31, 30944(6)
  01ad2d0  bl 0x685c4
  01ad2d4  nop
  01ad2d8  std 3, 296(1)
  01ad2dc  li 3, 42
  01ad2e0  bl 0x685c4
  01ad2e4  nop
  01ad2e8  std 3, 440(1)
  01ad2ec  lis 9, 0
  01ad2f0  li 3, 0
  01ad2f4  li 4, 0
  01ad2f8  li 5, 1
  01ad2fc  li 6, 1
  01ad300  li 7, 1
  01ad304  li 8, 0
  01ad308  ori 9, 9, 65424
  01ad30c  bl 0x502fd4
  01ad310  nop
  01ad314  std 3, 448(1)
  01ad318  std 3, 304(1)
  01ad31c  li 4, 0
  01ad320  li 3, 0
  01ad324  li 5, 0
  01ad328  li 6, 0
  01ad32c  li 7, 0
  01ad330  li 8, 0
  01ad334  bl 0x502f08
  01ad338  nop
  01ad33c  lis 4, 230
  01ad340  lis 5, 117
  01ad344  std 3, 432(1)
  01ad348  lis 6, 230
  01ad34c  std 3, 288(1)
  01ad350  lis 7, 117
  01ad354  lis 8, 117
  01ad358  lwz 3, 8140(4)
  01ad35c  lwz 4, 30912(5)
  01ad360  lwz 5, 8144(6)
  01ad364  lwz 6, 30916(7)
  01ad368  lwz 7, 30920(8)
  01ad36c  bl 0x502ea8
  01ad370  nop
  01ad374  std 3, 456(1)
  01ad378  std 3, 312(1)
  01ad37c  addic 3, 1, 112
  01ad380  bl 0x500af8
  01ad384  nop
  01ad388  lis 3, 117
  01ad38c  lis 4, 117
  01ad390  lis 29, 161
  01ad394  lis 30, 117
  01ad398  lis 31, 117
  01ad39c  lwz 3, 30928(3)
  01ad3a0  lwz 4, 30932(4)
  01ad3a4  lis 27, 117
  01ad3a8  stw 3, 252(1)
  01ad3ac  lis 28, 117
  01ad3b0  stw 3, 248(1)
  01ad3b4  addic 29, 29, 24396
  01ad3b8  stw 3, 244(1)
  01ad3bc  li 26, 0
  01ad3c0  stw 3, 240(1)
  01ad3c4  addic 27, 27, 21296
  01ad3c8  stw 4, 396(1)
  01ad3cc  addic 28, 28, 24432
  01ad3d0  stw 4, 392(1)
  01ad3d4  addic 30, 30, 23632
  01ad3d8  stw 4, 388(1)
  01ad3dc  addic 31, 31, 23634
  01ad3e0  stw 4, 384(1)
  01ad3e4  li 3, 4
  01ad3e8  ori 7, 1, 0
  01ad3ec  mtctr 3
  01ad3f0  addic 6, 1, 176
  01ad3f4  addic 5, 1, 320
  01ad3f8  ori 4, 30, 0
  01ad3fc  ori 3, 31, 0
  01ad400  lhz 8, 0(4)
  01ad404  lhz 9, 0(3)
  01ad408  extsh 8, 8
  01ad40c  extsh 9, 9
  01ad410  sldi 8, 8, 4
  01ad414  sldi 9, 9, 3
  01ad418  addc 8, 8, 27
  01ad41c  addc 10, 9, 28
  01ad420  clrldi 8, 8, 32
  01ad424  addic 4, 4, 4
  01ad428  addic 3, 3, 4
  01ad42c  lfs 1, 0(8)
  01ad430  stfs 1, 0(6)
  01ad434  lfs 2, 4(8)
  01ad438  stfs 2, 4(6)
  01ad43c  lfs 3, 8(8)
  01ad440  stfs 3, 8(6)
  01ad444  lfs 4, 12(8)
  01ad448  stfs 4, 12(6)
  01ad44c  stfs 1, 0(5)
  01ad450  stfs 2, 4(5)
  01ad454  addic 6, 6, 16
  01ad458  stfs 3, 8(5)
  01ad45c  stfs 4, 12(5)
  01ad460  lfsx 1, 28, 9
  01ad464  addic 5, 5, 16
  01ad468  lfs 2, 4(10)
  01ad46c  fmadds 3, 29, 28, 1
  01ad470  fmadds 4, 31, 30, 2
  01ad474  stfs 1, 400(7)
  01ad478  stfs 2, 404(7)
  01ad47c  stfs 3, 256(7)
  01ad480  stfs 4, 260(7)
  01ad484  addic 7, 7, 8
  01ad488  bdnz 0x1ad400
  01ad48c  addic 25, 1, 112
  01ad490  addic 3, 1, 176
  01ad494  lwz 6, 28(29)
  01ad498  ori 4, 25, 0
  01ad49c  li 5, 0
  01ad4a0  li 7, 9
  01ad4a4  bl 0x72280
  01ad4a8  nop
  01ad4ac  lwz 6, 28(29)
  01ad4b0  addic 3, 1, 320
  01ad4b4  ori 4, 25, 0
  01ad4b8  li 5, 0
  01ad4bc  li 7, 9
  01ad4c0  bl 0x72280
  01ad4c4  nop
  01ad4c8  addic 26, 26, 1
  01ad4cc  addic 30, 30, 16
  01ad4d0  cmpwi 26, 50
  01ad4d4  addic 31, 31, 16
  01ad4d8  bt 0, 0x1ad3e4
  01ad4dc  ld 0, 576(1)
  01ad4e0  mtlr 0
  01ad4e4  lfd 28, 528(1)
  01ad4e8  lfd 29, 536(1)
  01ad4ec  lfd 30, 544(1)
  01ad4f0  lfd 31, 552(1)
  01ad4f4  ld 25, 472(1)
  01ad4f8  ld 26, 480(1)
  01ad4fc  ld 27, 488(1)
  01ad500  ld 28, 496(1)
  01ad504  ld 29, 504(1)
  01ad508  ld 30, 512(1)
  01ad50c  ld 31, 520(1)
  01ad510  addi 1, 1, 560
  01ad514  blr

M1066_001ad528:   # 0x1ad528, 0x45c bytes
  01ad528  stdu 1, -576(1)
  01ad52c  mflr 0
  01ad530  std 0, 592(1)
  01ad534  stfd 23, 504(1)
  01ad538  stfd 24, 512(1)
  01ad53c  stfd 25, 520(1)
  01ad540  stfd 26, 528(1)
  01ad544  stfd 27, 536(1)
  01ad548  stfd 28, 544(1)
  01ad54c  stfd 29, 552(1)
  01ad550  stfd 30, 560(1)
  01ad554  stfd 31, 568(1)
  01ad558  lis 3, 117
  01ad55c  std 30, 488(1)
  01ad560  lis 4, 117
  01ad564  lis 30, 149
  01ad568  lis 5, 117
  01ad56c  addic 30, 30, 5056
  01ad570  lfs 30, 30940(3)
  01ad574  lwz 3, 30924(4)
  01ad578  extsw 3, 3
  01ad57c  lfs 31, 344(30)
  01ad580  lfs 29, 340(30)
  01ad584  std 31, 496(1)
  01ad588  std 29, 480(1)
  01ad58c  std 28, 472(1)
  01ad590  std 27, 464(1)
  01ad594  lfs 28, 30944(5)
  01ad598  bl 0x685c4
  01ad59c  nop
  01ad5a0  std 3, 296(1)
  01ad5a4  li 3, 42
  01ad5a8  bl 0x685c4
  01ad5ac  nop
  01ad5b0  std 3, 440(1)
  01ad5b4  lis 9, 0
  01ad5b8  li 3, 0
  01ad5bc  li 4, 0
  01ad5c0  li 5, 1
  01ad5c4  li 6, 1
  01ad5c8  li 7, 1
  01ad5cc  li 8, 0
  01ad5d0  ori 9, 9, 65424
  01ad5d4  bl 0x502fd4
  01ad5d8  nop
  01ad5dc  std 3, 448(1)
  01ad5e0  std 3, 304(1)
  01ad5e4  li 4, 0
  01ad5e8  li 3, 0
  01ad5ec  li 5, 0
  01ad5f0  li 6, 0
  01ad5f4  li 7, 0
  01ad5f8  li 8, 0
  01ad5fc  bl 0x502f08
  01ad600  nop
  01ad604  lis 4, 230
  01ad608  lis 5, 117
  01ad60c  std 3, 432(1)
  01ad610  lis 6, 230
  01ad614  std 3, 288(1)
  01ad618  lis 7, 117
  01ad61c  lis 8, 117
  01ad620  lwz 3, 8140(4)
  01ad624  lwz 4, 30912(5)
  01ad628  lwz 5, 8144(6)
  01ad62c  lwz 6, 30916(7)
  01ad630  lwz 7, 30920(8)
  01ad634  bl 0x502ea8
  01ad638  nop
  01ad63c  std 3, 456(1)
  01ad640  std 3, 312(1)
  01ad644  addic 3, 1, 112
  01ad648  bl 0x500af8
  01ad64c  nop
  01ad650  lis 3, 117
  01ad654  lis 4, 117
  01ad658  li 31, 0
  01ad65c  ori 29, 31, 0
  01ad660  lwz 3, 30928(3)
  01ad664  lwz 4, 30932(4)
  01ad668  stw 3, 252(1)
  01ad66c  stw 3, 248(1)
  01ad670  stw 3, 244(1)
  01ad674  stw 3, 240(1)
  01ad678  stw 4, 396(1)
  01ad67c  stw 4, 392(1)
  01ad680  stw 4, 388(1)
  01ad684  stw 4, 384(1)
  01ad688  lis 3, 117
  01ad68c  addic 4, 3, 20368
  01ad690  lis 3, 117
  01ad694  addc 4, 4, 29
  01ad698  clrldi 4, 4, 32
  01ad69c  lfs 1, 30936(3)
  01ad6a0  lfs 2, 4(4)
  01ad6a4  lfs 3, 0(4)
  01ad6a8  fmuls 7, 2, 1
  01ad6ac  lfs 5, 132(1)
  01ad6b0  fmuls 10, 3, 1
  01ad6b4  lfs 3, 8(4)
  01ad6b8  lfs 2, 128(1)
  01ad6bc  fmuls 11, 3, 1
  01ad6c0  lfs 4, 116(1)
  01ad6c4  lfs 1, 112(1)
  01ad6c8  lfs 6, 148(1)
  01ad6cc  lfs 13, 12(4)
  01ad6d0  lfs 8, 136(1)
  01ad6d4  fmuls 9, 5, 7
  01ad6d8  fmuls 12, 2, 7
  01ad6dc  lfs 3, 144(1)
  01ad6e0  fmuls 0, 8, 7
  01ad6e4  lfs 27, 164(1)
  01ad6e8  lfs 7, 120(1)
  01ad6ec  lfs 25, 160(1)
  01ad6f0  lis 4, 27
  01ad6f4  fmadds 26, 4, 10, 9
  01ad6f8  fmadds 12, 1, 10, 12
  01ad6fc  lfs 9, 152(1)
  01ad700  fmadds 10, 7, 10, 0
  01ad704  addi 4, 4, -10984
  01ad708  fmadds 0, 6, 11, 26
  01ad70c  fmadds 12, 3, 11, 12
  01ad710  fmadds 10, 9, 11, 10
  01ad714  lfs 26, 324(30)
  01ad718  lfs 24, 168(1)
  01ad71c  lfs 23, 320(30)
  01ad720  lfs 11, 328(30)
  01ad724  fmadds 27, 27, 13, 0
  01ad728  fmadds 0, 25, 13, 12
  01ad72c  fmadds 10, 24, 13, 10
  01ad730  lfs 25, 0(4)
  01ad734  fsubs 27, 27, 26
  01ad738  fsubs 0, 0, 23
  01ad73c  fsubs 26, 10, 11
  01ad740  fmuls 10, 27, 27
  01ad744  fmadds 13, 0, 0, 10
  01ad748  fmr 10, 25
  01ad74c  fmadds 13, 26, 26, 13
  01ad750  fmr 11, 10
  01ad754  fsqrts 24, 13
  01ad758  fmr 12, 11
  01ad75c  fcmpu 0, 24, 12
  01ad760  bt 2, 0x1ad7b4
  01ad764  frsqrte 10, 13
  01ad768  lis 4, 27
  01ad76c  addi 4, 4, -10984
  01ad770  lfs 11, 4(4)
  01ad774  lfs 12, 8(4)
  01ad778  fmuls 24, 13, 10
  01ad77c  fmuls 23, 11, 10
  01ad780  fnmsubs 24, 24, 10, 12
  01ad784  fmadds 10, 24, 23, 10
  01ad788  fmuls 24, 13, 10
  01ad78c  fmuls 23, 11, 10
  01ad790  fnmsubs 24, 24, 10, 12
  01ad794  fmadds 10, 24, 23, 10
  01ad798  fmuls 13, 13, 10
  01ad79c  fmuls 11, 11, 10
  01ad7a0  fnmsubs 12, 13, 10, 12
  01ad7a4  fmadds 12, 12, 11, 10
  01ad7a8  fmuls 10, 0, 12
  01ad7ac  fmuls 11, 27, 12
  01ad7b0  fmuls 12, 26, 12
  01ad7b4  lis 4, 117
  01ad7b8  addic 4, 4, 17936
  01ad7bc  addc 4, 4, 29
  01ad7c0  clrldi 4, 4, 32
  01ad7c4  lfs 13, 4(4)
  01ad7c8  lfs 0, 0(4)
  01ad7cc  fmuls 5, 5, 13
  01ad7d0  fmuls 2, 2, 13
  01ad7d4  lfs 27, 8(4)
  01ad7d8  fmuls 8, 8, 13
  01ad7dc  fmadds 4, 4, 0, 5
  01ad7e0  fmadds 1, 1, 0, 2
  01ad7e4  fmadds 2, 7, 0, 8
  01ad7e8  fmadds 4, 6, 27, 4
  01ad7ec  fmadds 1, 3, 27, 1
  01ad7f0  fmadds 2, 9, 27, 2
  01ad7f4  fmuls 3, 11, 4
  01ad7f8  fmadds 1, 10, 1, 3
  01ad7fc  fmadds 1, 12, 2, 1
  01ad800  fcmpu 0, 1, 25
  01ad804  bt 1, 0x1ad92c
  01ad808  lis 4, 117
  01ad80c  lis 6, 117
  01ad810  lis 5, 117
  01ad814  addic 9, 4, 15680
  01ad818  lis 11, 117
  01ad81c  addic 10, 6, 15682
  01ad820  li 12, 4
  01ad824  addic 7, 1, 176
  01ad828  ori 4, 1, 0
  01ad82c  addic 5, 5, 14176
  01ad830  addc 10, 10, 29
  01ad834  addic 8, 1, 320
  01ad838  addic 6, 11, 16608
  01ad83c  addc 9, 9, 29
  01ad840  mtctr 12
  01ad844  lhz 11, 0(9)
  01ad848  lfs 1, 30936(3)
  01ad84c  extsh 11, 11
  01ad850  lhz 12, 0(10)
  01ad854  sldi 11, 11, 4
  01ad858  addc 11, 11, 5
  01ad85c  clrldi 11, 11, 32
  01ad860  extsh 12, 12
  01ad864  addic 9, 9, 4
  01ad868  sldi 12, 12, 3
  01ad86c  lfs 2, 0(11)
  01ad870  fmuls 1, 2, 1
  01ad874  addc 28, 12, 6
  01ad878  addic 10, 10, 4
  01ad87c  stfs 1, 0(7)
  01ad880  lfs 2, 4(11)
  01ad884  lfs 3, 30936(3)
  01ad888  fmuls 2, 2, 3
  01ad88c  stfs 2, 4(7)
  01ad890  lfs 3, 8(11)
  01ad894  lfs 4, 30936(3)
  01ad898  fmuls 3, 3, 4
  01ad89c  stfs 3, 8(7)
  01ad8a0  lfs 4, 12(11)
  01ad8a4  stfs 4, 12(7)
  01ad8a8  stfs 1, 0(8)
  01ad8ac  addic 7, 7, 16
  01ad8b0  stfs 2, 4(8)
  01ad8b4  stfs 3, 8(8)
  01ad8b8  stfs 4, 12(8)
  01ad8bc  lfsx 1, 6, 12
  01ad8c0  lfs 2, 4(28)
  01ad8c4  addic 8, 8, 16
  01ad8c8  fmadds 3, 30, 31, 1
  01ad8cc  stfs 1, 400(4)
  01ad8d0  fmadds 4, 28, 29, 2
  01ad8d4  stfs 2, 404(4)
  01ad8d8  stfs 3, 256(4)
  01ad8dc  stfs 4, 260(4)
  01ad8e0  addic 4, 4, 8
  01ad8e4  bdnz 0x1ad844
  01ad8e8  lis 3, 161
  01ad8ec  addic 27, 1, 112
  01ad8f0  addic 28, 3, 24396
  01ad8f4  li 5, 0
  01ad8f8  li 7, 9
  01ad8fc  addic 3, 1, 176
  01ad900  ori 4, 27, 0
  01ad904  lwz 6, 28(28)
  01ad908  bl 0x72280
  01ad90c  nop
  01ad910  addic 3, 1, 320
  01ad914  lwz 6, 28(28)
  01ad918  ori 4, 27, 0
  01ad91c  li 5, 0
  01ad920  li 7, 9
  01ad924  bl 0x72280
  01ad928  nop
  01ad92c  addic 31, 31, 1
  01ad930  addic 29, 29, 16
  01ad934  cmpwi 31, 58
  01ad938  bt 0, 0x1ad688
  01ad93c  ld 0, 592(1)
  01ad940  mtlr 0
  01ad944  lfd 23, 504(1)
  01ad948  lfd 24, 512(1)
  01ad94c  lfd 25, 520(1)
  01ad950  lfd 26, 528(1)
  01ad954  lfd 27, 536(1)
  01ad958  lfd 28, 544(1)
  01ad95c  lfd 29, 552(1)
  01ad960  lfd 30, 560(1)
  01ad964  lfd 31, 568(1)
  01ad968  ld 27, 464(1)
  01ad96c  ld 28, 472(1)
  01ad970  ld 29, 480(1)
  01ad974  ld 30, 488(1)
  01ad978  ld 31, 496(1)
  01ad97c  addi 1, 1, 576
  01ad980  blr

M1066_001ad990:   # 0x1ad990, 0x45c bytes
  01ad990  stdu 1, -576(1)
  01ad994  mflr 0
  01ad998  std 0, 592(1)
  01ad99c  stfd 23, 504(1)
  01ad9a0  stfd 24, 512(1)
  01ad9a4  stfd 25, 520(1)
  01ad9a8  stfd 26, 528(1)
  01ad9ac  stfd 27, 536(1)
  01ad9b0  stfd 28, 544(1)
  01ad9b4  stfd 29, 552(1)
  01ad9b8  stfd 30, 560(1)
  01ad9bc  stfd 31, 568(1)
  01ad9c0  lis 3, 117
  01ad9c4  std 30, 488(1)
  01ad9c8  lis 4, 117
  01ad9cc  lis 30, 149
  01ad9d0  lis 5, 117
  01ad9d4  addic 30, 30, 5056
  01ad9d8  lfs 30, 30940(3)
  01ad9dc  lwz 3, 30924(4)
  01ad9e0  extsw 3, 3
  01ad9e4  lfs 31, 344(30)
  01ad9e8  lfs 29, 340(30)
  01ad9ec  std 31, 496(1)
  01ad9f0  std 29, 480(1)
  01ad9f4  std 28, 472(1)
  01ad9f8  std 27, 464(1)
  01ad9fc  lfs 28, 30944(5)
  01ada00  bl 0x685c4
  01ada04  nop
  01ada08  std 3, 296(1)
  01ada0c  li 3, 42
  01ada10  bl 0x685c4
  01ada14  nop
  01ada18  std 3, 440(1)
  01ada1c  lis 9, 0
  01ada20  li 3, 0
  01ada24  li 4, 0
  01ada28  li 5, 1
  01ada2c  li 6, 1
  01ada30  li 7, 1
  01ada34  li 8, 0
  01ada38  ori 9, 9, 65424
  01ada3c  bl 0x502fd4
  01ada40  nop
  01ada44  std 3, 448(1)
  01ada48  std 3, 304(1)
  01ada4c  li 4, 0
  01ada50  li 3, 0
  01ada54  li 5, 0
  01ada58  li 6, 0
  01ada5c  li 7, 0
  01ada60  li 8, 0
  01ada64  bl 0x502f08
  01ada68  nop
  01ada6c  lis 4, 230
  01ada70  lis 5, 117
  01ada74  std 3, 432(1)
  01ada78  lis 6, 230
  01ada7c  std 3, 288(1)
  01ada80  lis 7, 117
  01ada84  lis 8, 117
  01ada88  lwz 3, 8140(4)
  01ada8c  lwz 4, 30912(5)
  01ada90  lwz 5, 8144(6)
  01ada94  lwz 6, 30916(7)
  01ada98  lwz 7, 30920(8)
  01ada9c  bl 0x502ea8
  01adaa0  nop
  01adaa4  std 3, 456(1)
  01adaa8  std 3, 312(1)
  01adaac  addic 3, 1, 112
  01adab0  bl 0x500af8
  01adab4  nop
  01adab8  lis 3, 117
  01adabc  lis 4, 117
  01adac0  li 31, 0
  01adac4  ori 29, 31, 0
  01adac8  lwz 3, 30928(3)
  01adacc  lwz 4, 30932(4)
  01adad0  stw 3, 252(1)
  01adad4  stw 3, 248(1)
  01adad8  stw 3, 244(1)
  01adadc  stw 3, 240(1)
  01adae0  stw 4, 396(1)
  01adae4  stw 4, 392(1)
  01adae8  stw 4, 388(1)
  01adaec  stw 4, 384(1)
  01adaf0  lis 3, 117
  01adaf4  addic 4, 3, 352
  01adaf8  lis 3, 117
  01adafc  addc 4, 4, 29
  01adb00  clrldi 4, 4, 32
  01adb04  lfs 1, 30936(3)
  01adb08  lfs 2, 4(4)
  01adb0c  lfs 3, 0(4)
  01adb10  fmuls 7, 2, 1
  01adb14  lfs 5, 132(1)
  01adb18  fmuls 10, 3, 1
  01adb1c  lfs 3, 8(4)
  01adb20  lfs 2, 128(1)
  01adb24  fmuls 11, 3, 1
  01adb28  lfs 4, 116(1)
  01adb2c  lfs 1, 112(1)
  01adb30  lfs 6, 148(1)
  01adb34  lfs 13, 12(4)
  01adb38  lfs 8, 136(1)
  01adb3c  fmuls 9, 5, 7
  01adb40  fmuls 12, 2, 7
  01adb44  lfs 3, 144(1)
  01adb48  fmuls 0, 8, 7
  01adb4c  lfs 27, 164(1)
  01adb50  lfs 7, 120(1)
  01adb54  lfs 25, 160(1)
  01adb58  lis 4, 27
  01adb5c  fmadds 26, 4, 10, 9
  01adb60  fmadds 12, 1, 10, 12
  01adb64  lfs 9, 152(1)
  01adb68  fmadds 10, 7, 10, 0
  01adb6c  addi 4, 4, -9852
  01adb70  fmadds 0, 6, 11, 26
  01adb74  fmadds 12, 3, 11, 12
  01adb78  fmadds 10, 9, 11, 10
  01adb7c  lfs 26, 324(30)
  01adb80  lfs 24, 168(1)
  01adb84  lfs 23, 320(30)
  01adb88  lfs 11, 328(30)
  01adb8c  fmadds 27, 27, 13, 0
  01adb90  fmadds 0, 25, 13, 12
  01adb94  fmadds 10, 24, 13, 10
  01adb98  lfs 25, 0(4)
  01adb9c  fsubs 27, 27, 26
  01adba0  fsubs 0, 0, 23
  01adba4  fsubs 26, 10, 11
  01adba8  fmuls 10, 27, 27
  01adbac  fmadds 13, 0, 0, 10
  01adbb0  fmr 10, 25
  01adbb4  fmadds 13, 26, 26, 13
  01adbb8  fmr 11, 10
  01adbbc  fsqrts 24, 13
  01adbc0  fmr 12, 11
  01adbc4  fcmpu 0, 24, 12
  01adbc8  bt 2, 0x1adc1c
  01adbcc  frsqrte 10, 13
  01adbd0  lis 4, 27
  01adbd4  addi 4, 4, -9852
  01adbd8  lfs 11, 4(4)
  01adbdc  lfs 12, 8(4)
  01adbe0  fmuls 24, 13, 10
  01adbe4  fmuls 23, 11, 10
  01adbe8  fnmsubs 24, 24, 10, 12
  01adbec  fmadds 10, 24, 23, 10
  01adbf0  fmuls 24, 13, 10
  01adbf4  fmuls 23, 11, 10
  01adbf8  fnmsubs 24, 24, 10, 12
  01adbfc  fmadds 10, 24, 23, 10
  01adc00  fmuls 13, 13, 10
  01adc04  fmuls 11, 11, 10
  01adc08  fnmsubs 12, 13, 10, 12
  01adc0c  fmadds 12, 12, 11, 10
  01adc10  fmuls 10, 0, 12
  01adc14  fmuls 11, 27, 12
  01adc18  fmuls 12, 26, 12
  01adc1c  lis 4, 117
  01adc20  addic 4, 4, -27552
  01adc24  addc 4, 4, 29
  01adc28  clrldi 4, 4, 32
  01adc2c  lfs 13, 4(4)
  01adc30  lfs 0, 0(4)
  01adc34  fmuls 5, 5, 13
  01adc38  fmuls 2, 2, 13
  01adc3c  lfs 27, 8(4)
  01adc40  fmuls 8, 8, 13
  01adc44  fmadds 4, 4, 0, 5
  01adc48  fmadds 1, 1, 0, 2
  01adc4c  fmadds 2, 7, 0, 8
  01adc50  fmadds 4, 6, 27, 4
  01adc54  fmadds 1, 3, 27, 1
  01adc58  fmadds 2, 9, 27, 2
  01adc5c  fmuls 3, 11, 4
  01adc60  fmadds 1, 10, 1, 3
  01adc64  fmadds 1, 12, 2, 1
  01adc68  fcmpu 0, 1, 25
  01adc6c  bt 1, 0x1add94
  01adc70  lis 4, 116
  01adc74  lis 6, 116
  01adc78  lis 5, 116
  01adc7c  addic 9, 4, 16672
  01adc80  lis 11, 116
  01adc84  addic 10, 6, 16674
  01adc88  li 12, 4
  01adc8c  addic 7, 1, 176
  01adc90  ori 4, 1, 0
  01adc94  addic 5, 5, 2592
  01adc98  addc 10, 10, 29
  01adc9c  addic 8, 1, 320
  01adca0  addic 6, 11, 30496
  01adca4  addc 9, 9, 29
  01adca8  mtctr 12
  01adcac  lhz 11, 0(9)
  01adcb0  lfs 1, 30936(3)
  01adcb4  extsh 11, 11
  01adcb8  lhz 12, 0(10)
  01adcbc  sldi 11, 11, 4
  01adcc0  addc 11, 11, 5
  01adcc4  clrldi 11, 11, 32
  01adcc8  extsh 12, 12
  01adccc  addic 9, 9, 4
  01adcd0  sldi 12, 12, 3
  01adcd4  lfs 2, 0(11)
  01adcd8  fmuls 1, 2, 1
  01adcdc  addc 28, 12, 6
  01adce0  addic 10, 10, 4
  01adce4  stfs 1, 0(7)
  01adce8  lfs 2, 4(11)
  01adcec  lfs 3, 30936(3)
  01adcf0  fmuls 2, 2, 3
  01adcf4  stfs 2, 4(7)
  01adcf8  lfs 3, 8(11)
  01adcfc  lfs 4, 30936(3)
  01add00  fmuls 3, 3, 4
  01add04  stfs 3, 8(7)
  01add08  lfs 4, 12(11)
  01add0c  stfs 4, 12(7)
  01add10  stfs 1, 0(8)
  01add14  addic 7, 7, 16
  01add18  stfs 2, 4(8)
  01add1c  stfs 3, 8(8)
  01add20  stfs 4, 12(8)
  01add24  lfsx 1, 6, 12
  01add28  lfs 2, 4(28)
  01add2c  addic 8, 8, 16
  01add30  fmadds 3, 30, 31, 1
  01add34  stfs 1, 400(4)
  01add38  fmadds 4, 28, 29, 2
  01add3c  stfs 2, 404(4)
  01add40  stfs 3, 256(4)
  01add44  stfs 4, 260(4)
  01add48  addic 4, 4, 8
  01add4c  bdnz 0x1adcac
  01add50  lis 3, 161
  01add54  addic 27, 1, 112
  01add58  addic 28, 3, 24396
  01add5c  li 5, 0
  01add60  li 7, 9
  01add64  addic 3, 1, 176
  01add68  ori 4, 27, 0
  01add6c  lwz 6, 28(28)
  01add70  bl 0x72280
  01add74  nop
  01add78  addic 3, 1, 320
  01add7c  lwz 6, 28(28)
  01add80  ori 4, 27, 0
  01add84  li 5, 0
  01add88  li 7, 9
  01add8c  bl 0x72280
  01add90  nop
  01add94  addic 31, 31, 1
  01add98  addic 29, 29, 16
  01add9c  cmpwi 31, 864
  01adda0  bt 0, 0x1adaf0
  01adda4  ld 0, 592(1)
  01adda8  mtlr 0
  01addac  lfd 23, 504(1)
  01addb0  lfd 24, 512(1)
  01addb4  lfd 25, 520(1)
  01addb8  lfd 26, 528(1)
  01addbc  lfd 27, 536(1)
  01addc0  lfd 28, 544(1)
  01addc4  lfd 29, 552(1)
  01addc8  lfd 30, 560(1)
  01addcc  lfd 31, 568(1)
  01addd0  ld 27, 464(1)
  01addd4  ld 28, 472(1)
  01addd8  ld 29, 480(1)
  01adddc  ld 30, 488(1)
  01adde0  ld 31, 496(1)
  01adde4  addi 1, 1, 576
  01adde8  blr

M1066_001addec:   # 0x1addec, 0x14 bytes
  01addec  lis 3, 117
  01addf0  lis 4, 1
  01addf4  addic 3, 3, 30952
  01addf8  stw 4, 72(3)
  01addfc  blr

UpdateMoby_1066:   # 0x1ade10, 0x224 bytes
  01ade10  stdu 1, -160(1)
  01ade14  mflr 0
  01ade18  std 0, 176(1)
  01ade1c  stfd 30, 144(1)
  01ade20  stfd 31, 152(1)
  01ade24  std 31, 136(1)
  01ade28  ori 31, 3, 0
  01ade2c  lbz 3, 32(31)
  01ade30  lbz 4, 83(31)
  01ade34  std 30, 128(1)
  01ade38  cmpwi 3, 1
  01ade3c  lwz 30, 120(31)
  01ade40  cmpwi 6, 3, 2
  01ade44  cmpwi 1, 4, 2
  01ade48  std 29, 120(1)
  01ade4c  std 28, 112(1)
  01ade50  cmpwi 7, 3, 0
  01ade54  bt 1, 0x1ade68
  01ade58  cmpwi 3, -1
  01ade5c  bf 1, 0x1ae00c
  01ade60  bf 29, 0x1ade70
  01ade64  b 0x1adec8
  01ade68  bf 25, 0x1adf24
  01ade6c  b 0x1ae00c
  01ade70  lwz 30, 4(30)
  01ade74  cmpwi 30, -1
  01ade78  bf 1, 0x1ae00c
  01ade7c  lis 3, 151
  01ade80  extsw 4, 30
  01ade84  addic 3, 3, -25248
  01ade88  bl 0x110b70
  01ade8c  nop
  01ade90  cmpwi 3, 0
  01ade94  bt 2, 0x1ae00c
  01ade98  li 3, 1
  01ade9c  lbz 4, 83(31)
  01adea0  cmpwi 4, 1
  01adea4  stb 3, 32(31)
  01adea8  bt 2, 0x1ae00c
  01adeac  ori 3, 31, 0
  01adeb0  li 4, 1
  01adeb4  li 5, 0
  01adeb8  li 6, 5
  01adebc  bl 0xfddc0
  01adec0  nop
  01adec4  b 0x1ae00c
  01adec8  lbz 3, 112(31)
  01adecc  rlwinm 3, 3, 0, 30, 30
  01aded0  cmpwi 3, 0
  01aded4  bt 2, 0x1ae00c
  01aded8  lwz 6, 0(30)
  01adedc  li 3, -1
  01adee0  li 4, 2
  01adee4  extsw 6, 6
  01adee8  li 5, 3
  01adeec  subc 3, 3, 6
  01adef0  subc 4, 4, 5
  01adef4  sradi 3, 3, 63
  01adef8  and 3, 3, 4
  01adefc  addc 3, 5, 3
  01adf00  stb 3, 32(31)
  01adf04  bt 6, 0x1ae00c
  01adf08  ori 3, 31, 0
  01adf0c  li 4, 2
  01adf10  li 5, 0
  01adf14  li 6, 5
  01adf18  bl 0xfddc0
  01adf1c  nop
  01adf20  b 0x1ae00c
  01adf24  addic 3, 30, 8
  01adf28  bl 0x4fff60
  01adf2c  nop
  01adf30  cmpwi 3, 0
  01adf34  bt 2, 0x1ae00c
  01adf38  lis 3, 27
  01adf3c  lis 4, 165
  01adf40  addi 3, 3, -8704
  01adf44  addic 28, 4, -28284
  01adf48  lwz 4, 0(30)
  01adf4c  lfs 30, 0(3)
  01adf50  slwi 3, 4, 2
  01adf54  fmr 31, 30
  01adf58  extsw 3, 3
  01adf5c  lwzx 28, 28, 3
  01adf60  cmpwi 28, 0
  01adf64  bt 2, 0x1adfbc
  01adf68  addic 29, 31, 16
  01adf6c  lis 3, 164
  01adf70  lhz 5, 0(28)
  01adf74  ori 4, 29, 0
  01adf78  rlwinm 5, 5, 8, 9, 23
  01adf7c  lwz 3, -28512(3)
  01adf80  addc 3, 3, 5
  01adf84  clrldi 3, 3, 32
  01adf88  bl 0x47ca58
  01adf8c  nop
  01adf90  cmpwi 3, 0
  01adf94  bt 2, 0x1adfa8
  01adf98  lis 3, 27
  01adf9c  addi 3, 3, -8704
  01adfa0  lfs 30, 4(3)
  01adfa4  b 0x1adfbc
  01adfa8  lhz 3, 0(28)
  01adfac  addic 28, 28, 2
  01adfb0  extsh 3, 3
  01adfb4  cmpwi 3, 0
  01adfb8  bf 0, 0x1adf6c
  01adfbc  fcmpu 0, 30, 31
  01adfc0  bt 2, 0x1ae004
  01adfc4  lis 3, 27
  01adfc8  li 4, 8
  01adfcc  vspltisw 2, -1
  01adfd0  addi 3, 3, -8704
  01adfd4  lis 5, 114
  01adfd8  li 6, -3056
  01adfdc  vslw 2, 2, 2
  01adfe0  lvlx 3, 4, 3
  01adfe4  li 3, 8
  01adfe8  vspltw 3, 3, 0
  01adfec  lvlx 4, 6, 5
  01adff0  vmaddfp 2, 4, 3, 2
  01adff4  vctsxs 2, 2, 0
  01adff8  vspltw 2, 2, 0
  01adffc  stvewx 2, 3, 30
  01ae000  b 0x1ae00c
  01ae004  li 3, 3
  01ae008  stb 3, 32(31)
  01ae00c  ld 0, 176(1)
  01ae010  mtlr 0
  01ae014  lfd 30, 144(1)
  01ae018  lfd 31, 152(1)
  01ae01c  ld 28, 112(1)
  01ae020  ld 29, 120(1)
  01ae024  ld 30, 128(1)
  01ae028  ld 31, 136(1)
  01ae02c  addi 1, 1, 160
  01ae030  blr
