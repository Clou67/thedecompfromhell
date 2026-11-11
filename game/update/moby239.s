# game/update/moby239.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M239_00309070:   # 0x309070, 0x14 bytes
  0309070  lis 3, 128
  0309074  lis 4, 1
  0309078  addic 3, 3, -2748
  030907c  stw 4, 72(3)
  0309080  blr

UpdateMoby_239:   # 0x3090f8, 0x2450 bytes
  03090f8  stdu 1, -560(1)
  03090fc  mflr 0
  0309100  std 0, 576(1)
  0309104  stfd 29, 536(1)
  0309108  stfd 30, 544(1)
  030910c  stfd 31, 552(1)
  0309110  std 31, 528(1)
  0309114  lis 4, 49
  0309118  std 29, 512(1)
  030911c  ori 31, 3, 0
  0309120  addi 29, 4, -28536
  0309124  lis 4, 33
  0309128  std 30, 520(1)
  030912c  li 5, 0
  0309130  std 28, 504(1)
  0309134  std 27, 496(1)
  0309138  std 26, 488(1)
  030913c  std 25, 480(1)
  0309140  lwz 30, 120(31)
  0309144  bl 0x10675c
  0309148  nop
  030914c  li 6, 0
  0309150  lfs 31, 0(29)
  0309154  addic 5, 30, 32
  0309158  ori 29, 3, 0
  030915c  ori 3, 31, 0
  0309160  stw 6, 436(1)
  0309164  ori 4, 29, 0
  0309168  addic 7, 1, 440
  030916c  addic 8, 1, 436
  0309170  li 6, 0
  0309174  li 9, 0
  0309178  li 10, 4
  030917c  bl 0x106840
  0309180  nop
  0309184  ori 28, 3, 0
  0309188  addic 3, 30, 420
  030918c  bl 0x4fff60
  0309190  nop
  0309194  cmpwi 28, 11
  0309198  bt 2, 0x309630
  030919c  cmpwi 28, 12
  03091a0  bt 2, 0x309630
  03091a4  lwz 3, 440(1)
  03091a8  cmpwi 3, 1
  03091ac  bt 2, 0x309630
  03091b0  lbz 3, 32(31)
  03091b4  cmpwi 1, 3, 5
  03091b8  cmpwi 3, 99
  03091bc  cror 2, 2, 6
  03091c0  bt 2, 0x309630
  03091c4  cmpwi 3, 15
  03091c8  bt 2, 0x309630
  03091cc  lis 3, 15363
  03091d0  lis 4, 14851
  03091d4  ori 3, 3, 4719
  03091d8  lis 5, 128
  03091dc  ori 4, 4, 4719
  03091e0  lis 6, 114
  03091e4  stw 3, 128(30)
  03091e8  lis 3, 128
  03091ec  stw 4, 132(30)
  03091f0  lfs 2, -2620(5)
  03091f4  li 4, 0
  03091f8  lfs 3, -3052(6)
  03091fc  li 5, 9
  0309200  lfs 5, 32(30)
  0309204  fmuls 1, 2, 3
  0309208  stw 5, 148(30)
  030920c  stfs 1, 136(30)
  0309210  lfs 4, -2624(3)
  0309214  stb 4, 173(30)
  0309218  fmuls 4, 4, 3
  030921c  stfs 4, 140(30)
  0309220  lfs 6, 436(1)
  0309224  fsubs 5, 5, 6
  0309228  fcmpu 0, 5, 31
  030922c  stfs 5, 32(30)
  0309230  cror 6, 0, 2
  0309234  bt 6, 0x309500
  0309238  lbz 3, 32(31)
  030923c  cmpwi 1, 3, 16
  0309240  cmpwi 3, 11
  0309244  cror 2, 2, 6
  0309248  bt 2, 0x309254
  030924c  cmpwi 3, 15
  0309250  bf 2, 0x30930c
  0309254  cmpwi 3, 15
  0309258  bt 2, 0x309260
  030925c  stb 3, 188(31)
  0309260  li 3, 15
  0309264  li 5, 0
  0309268  li 4, 150
  030926c  addic 6, 30, 136
  0309270  stb 3, 32(31)
  0309274  addic 7, 30, 140
  0309278  lwz 3, 148(30)
  030927c  stb 4, 103(30)
  0309280  rlwimi 3, 5, 0, 28, 28
  0309284  addic 5, 1, 444
  0309288  stw 3, 148(30)
  030928c  lfs 1, 16(29)
  0309290  lfs 2, 24(29)
  0309294  stfs 1, 48(1)
  0309298  stfs 2, 56(1)
  030929c  lfs 1, 20(29)
  03092a0  lfs 2, 28(29)
  03092a4  stfs 1, 52(1)
  03092a8  stfs 2, 60(1)
  03092ac  ld 3, 48(1)
  03092b0  ld 4, 56(1)
  03092b4  bl 0x107de8
  03092b8  nop
  03092bc  li 3, 5
  03092c0  addic 29, 30, 112
  03092c4  lfs 31, 444(1)
  03092c8  bl 0x5e7e18
  03092cc  nop
  03092d0  ori 7, 3, 0
  03092d4  fmr 1, 31
  03092d8  ori 3, 31, 0
  03092dc  li 6, 2
  03092e0  ori 4, 29, 0
  03092e4  li 8, 0
  03092e8  bl 0x10ad80
  03092ec  nop
  03092f0  ori 3, 31, 0
  03092f4  addic 4, 30, 96
  03092f8  bl 0x10c808
  03092fc  nop
  0309300  li 3, 255
  0309304  stb 3, 164(31)
  0309308  b 0x30b510
  030930c  lis 4, 16256
  0309310  lwz 3, 44(29)
  0309314  cmpw 3, 4
  0309318  bf 2, 0x3093b0
  030931c  li 3, 150
  0309320  addic 5, 1, 432
  0309324  addic 6, 30, 136
  0309328  addic 7, 30, 140
  030932c  stb 3, 103(30)
  0309330  lfs 1, 16(29)
  0309334  lfs 2, 24(29)
  0309338  stfs 1, 48(1)
  030933c  stfs 2, 56(1)
  0309340  lfs 1, 20(29)
  0309344  lfs 2, 28(29)
  0309348  stfs 1, 52(1)
  030934c  stfs 2, 60(1)
  0309350  ld 3, 48(1)
  0309354  ld 4, 56(1)
  0309358  bl 0x107de8
  030935c  nop
  0309360  li 3, 5
  0309364  addic 29, 30, 112
  0309368  lfs 30, 432(1)
  030936c  bl 0x5e7e18
  0309370  nop
  0309374  ori 7, 3, 0
  0309378  fmr 1, 30
  030937c  ori 3, 31, 0
  0309380  li 6, 2
  0309384  ori 4, 29, 0
  0309388  li 8, 0
  030938c  bl 0x10ad80
  0309390  nop
  0309394  lis 3, 16512
  0309398  lis 4, 16656
  030939c  li 5, 5
  03093a0  stw 3, 192(30)
  03093a4  stw 4, 196(30)
  03093a8  stb 5, 32(31)
  03093ac  b 0x309620
  03093b0  lis 4, 49
  03093b4  lis 5, 16384
  03093b8  addi 4, 4, -28536
  03093bc  cmpw 3, 5
  03093c0  lfs 1, 4(4)
  03093c4  fmuls 2, 2, 1
  03093c8  fmuls 2, 2, 3
  03093cc  bf 2, 0x309468
  03093d0  li 3, 220
  03093d4  addic 5, 1, 432
  03093d8  addic 6, 30, 136
  03093dc  addic 7, 30, 140
  03093e0  stb 3, 103(30)
  03093e4  stfs 2, 136(30)
  03093e8  lfs 1, 16(29)
  03093ec  lfs 2, 24(29)
  03093f0  stfs 1, 48(1)
  03093f4  stfs 2, 56(1)
  03093f8  lfs 1, 20(29)
  03093fc  lfs 2, 28(29)
  0309400  stfs 1, 52(1)
  0309404  stfs 2, 60(1)
  0309408  ld 3, 48(1)
  030940c  ld 4, 56(1)
  0309410  bl 0x107de8
  0309414  nop
  0309418  li 3, 5
  030941c  addic 29, 30, 112
  0309420  lfs 30, 432(1)
  0309424  bl 0x5e7e18
  0309428  nop
  030942c  ori 7, 3, 0
  0309430  fmr 1, 30
  0309434  ori 3, 31, 0
  0309438  li 6, 2
  030943c  ori 4, 29, 0
  0309440  li 8, 0
  0309444  bl 0x10ad80
  0309448  nop
  030944c  lis 3, 16384
  0309450  lis 4, 16640
  0309454  li 5, 7
  0309458  stw 3, 192(30)
  030945c  stw 4, 196(30)
  0309460  stb 5, 32(31)
  0309464  b 0x309620
  0309468  li 3, 250
  030946c  addic 5, 1, 432
  0309470  addic 6, 30, 136
  0309474  addic 7, 30, 140
  0309478  stb 3, 103(30)
  030947c  stfs 2, 136(30)
  0309480  lfs 1, 16(29)
  0309484  lfs 2, 24(29)
  0309488  stfs 1, 48(1)
  030948c  stfs 2, 56(1)
  0309490  lfs 1, 20(29)
  0309494  lfs 2, 28(29)
  0309498  stfs 1, 52(1)
  030949c  stfs 2, 60(1)
  03094a0  ld 3, 48(1)
  03094a4  ld 4, 56(1)
  03094a8  bl 0x107de8
  03094ac  nop
  03094b0  li 3, 5
  03094b4  addic 29, 30, 112
  03094b8  lfs 30, 432(1)
  03094bc  bl 0x5e7e18
  03094c0  nop
  03094c4  ori 7, 3, 0
  03094c8  fmr 1, 30
  03094cc  ori 3, 31, 0
  03094d0  li 6, 3
  03094d4  ori 4, 29, 0
  03094d8  li 8, 0
  03094dc  bl 0x10ad80
  03094e0  nop
  03094e4  lis 3, 16384
  03094e8  lis 4, 16640
  03094ec  li 5, 6
  03094f0  stw 3, 192(30)
  03094f4  stw 4, 196(30)
  03094f8  stb 5, 32(31)
  03094fc  b 0x309620
  0309500  lbz 3, 32(31)
  0309504  cmpwi 1, 3, 15
  0309508  cmpwi 3, 11
  030950c  cror 2, 2, 6
  0309510  bt 2, 0x30951c
  0309514  cmpwi 3, 16
  0309518  bf 2, 0x309580
  030951c  lis 3, 49
  0309520  addi 3, 3, -28536
  0309524  lfs 2, 4(3)
  0309528  lwz 3, 424(30)
  030952c  fmuls 1, 1, 2
  0309530  fmuls 2, 4, 2
  0309534  cmpwi 3, 0
  0309538  cmpwi 1, 3, 3
  030953c  stfs 1, 136(30)
  0309540  stfs 2, 140(30)
  0309544  bf 2, 0x309558
  0309548  lwz 4, 432(30)
  030954c  li 3, 6
  0309550  stb 3, 32(4)
  0309554  b 0x309574
  0309558  bf 6, 0x309574
  030955c  lwz 4, 432(30)
  0309560  li 3, 0
  0309564  stb 3, 32(4)
  0309568  lwz 4, 432(30)
  030956c  lwz 4, 120(4)
  0309570  stw 3, 228(4)
  0309574  lwz 4, 432(30)
  0309578  li 3, 0
  030957c  stw 3, 148(4)
  0309580  li 3, 0
  0309584  lhz 6, 52(31)
  0309588  li 4, 250
  030958c  addic 5, 1, 432
  0309590  rlwimi 6, 3, 0, 19, 19
  0309594  addic 7, 30, 140
  0309598  sth 6, 52(31)
  030959c  stb 4, 103(30)
  03095a0  addic 6, 30, 136
  03095a4  lfs 1, 16(29)
  03095a8  lfs 2, 24(29)
  03095ac  stfs 1, 48(1)
  03095b0  stfs 2, 56(1)
  03095b4  lfs 1, 20(29)
  03095b8  lfs 2, 28(29)
  03095bc  stfs 1, 52(1)
  03095c0  stfs 2, 60(1)
  03095c4  ld 3, 48(1)
  03095c8  ld 4, 56(1)
  03095cc  bl 0x107de8
  03095d0  nop
  03095d4  li 3, 5
  03095d8  lfs 30, 432(1)
  03095dc  addic 29, 30, 112
  03095e0  bl 0x5e7e18
  03095e4  nop
  03095e8  ori 7, 3, 0
  03095ec  ori 3, 31, 0
  03095f0  fmr 1, 30
  03095f4  ori 4, 29, 0
  03095f8  li 6, 11
  03095fc  li 8, 0
  0309600  bl 0x10ad80
  0309604  nop
  0309608  lis 3, 16384
  030960c  lis 4, 16640
  0309610  li 5, 99
  0309614  stw 3, 192(30)
  0309618  stw 4, 196(30)
  030961c  stb 5, 32(31)
  0309620  addic 4, 30, 96
  0309624  ori 3, 31, 0
  0309628  bl 0x10c808
  030962c  nop
  0309630  li 4, 255
  0309634  lbz 3, 32(31)
  0309638  cmpwi 3, 9
  030963c  stb 4, 164(31)
  0309640  cmpwi 1, 3, 3
  0309644  cmpwi 6, 3, 0
  0309648  cmpwi 7, 3, -1
  030964c  bt 1, 0x3096b0
  0309650  bt 5, 0x309674
  0309654  bt 25, 0x309660
  0309658  bf 29, 0x30b500
  030965c  b 0x309708
  0309660  cmpwi 3, 1
  0309664  bf 1, 0x309980
  0309668  cmpwi 3, 2
  030966c  bf 1, 0x309e0c
  0309670  b 0x309ca8
  0309674  cmpwi 3, 6
  0309678  bt 1, 0x309690
  030967c  cmpwi 3, 4
  0309680  bf 1, 0x30a13c
  0309684  cmpwi 3, 5
  0309688  bf 1, 0x30a364
  030968c  b 0x30a510
  0309690  lis 4, 49
  0309694  cmpwi 3, 7
  0309698  addi 4, 4, -28536
  030969c  lfs 31, 8(4)
  03096a0  bf 1, 0x30b2d8
  03096a4  cmpwi 3, 8
  03096a8  bf 1, 0x30b36c
  03096ac  b 0x30b500
  03096b0  cmpwi 3, 14
  03096b4  bt 1, 0x3096e0
  03096b8  cmpwi 3, 11
  03096bc  bt 1, 0x3096cc
  03096c0  cmpwi 3, 10
  03096c4  bf 1, 0x30a634
  03096c8  b 0x30a7ec
  03096cc  cmpwi 3, 12
  03096d0  bf 1, 0x30b224
  03096d4  cmpwi 3, 13
  03096d8  bf 1, 0x30a788
  03096dc  b 0x30b0b8
  03096e0  cmpwi 3, 17
  03096e4  bt 1, 0x3096fc
  03096e8  cmpwi 3, 15
  03096ec  bf 1, 0x30a488
  03096f0  cmpwi 3, 16
  03096f4  bf 1, 0x30abb8
  03096f8  b 0x309c3c
  03096fc  cmpwi 3, 99
  0309700  bt 2, 0x30b47c
  0309704  b 0x30b500
  0309708  lwz 3, 424(30)
  030970c  cmpwi 3, 1
  0309710  cmpwi 1, 3, -1
  0309714  cmpwi 6, 3, 0
  0309718  cmpwi 7, 3, 2
  030971c  bt 1, 0x30972c
  0309720  bf 5, 0x3098bc
  0309724  bf 25, 0x30973c
  0309728  b 0x3097b8
  030972c  bf 29, 0x3097e8
  0309730  cmpwi 3, 3
  0309734  bf 1, 0x309844
  0309738  b 0x3098bc
  030973c  lis 3, 165
  0309740  addic 5, 3, 7136
  0309744  lwz 3, 324(30)
  0309748  lwz 4, 372(30)
  030974c  slwi 3, 3, 2
  0309750  slwi 4, 4, 2
  0309754  extsw 6, 3
  0309758  extsw 7, 4
  030975c  addic 3, 31, 16
  0309760  lwzx 4, 5, 6
  0309764  stw 4, 320(30)
  0309768  lwzx 5, 5, 7
  030976c  addic 4, 4, 16
  0309770  stw 5, 368(30)
  0309774  bl 0x5e7e98
  0309778  nop
  030977c  li 4, 0
  0309780  lbz 3, 83(31)
  0309784  cmpwi 3, 7
  0309788  sth 4, 50(31)
  030978c  stw 4, 148(31)
  0309790  bt 2, 0x3097ac
  0309794  ori 3, 31, 0
  0309798  li 4, 7
  030979c  li 5, 0
  03097a0  li 6, 0
  03097a4  bl 0xfddc0
  03097a8  nop
  03097ac  li 3, 10
  03097b0  stb 3, 32(31)
  03097b4  b 0x3098bc
  03097b8  li 3, 17
  03097bc  lbz 4, 83(31)
  03097c0  cmpwi 4, 0
  03097c4  stb 3, 32(31)
  03097c8  bt 2, 0x3098bc
  03097cc  ori 3, 31, 0
  03097d0  li 4, 0
  03097d4  li 5, 0
  03097d8  li 6, 3
  03097dc  bl 0xfddc0
  03097e0  nop
  03097e4  b 0x3098bc
  03097e8  lwz 5, 324(30)
  03097ec  lis 3, 165
  03097f0  slwi 5, 5, 2
  03097f4  addic 4, 3, 7136
  03097f8  extsw 5, 5
  03097fc  addic 3, 31, 16
  0309800  lwzx 4, 4, 5
  0309804  stw 4, 320(30)
  0309808  addic 4, 4, 16
  030980c  bl 0x5e7e98
  0309810  nop
  0309814  li 4, 13
  0309818  lbz 3, 83(31)
  030981c  cmpwi 3, 0
  0309820  stb 4, 32(31)
  0309824  bt 2, 0x3098bc
  0309828  ori 3, 31, 0
  030982c  li 4, 0
  0309830  li 5, 0
  0309834  li 6, 3
  0309838  bl 0xfddc0
  030983c  nop
  0309840  b 0x3098bc
  0309844  lis 3, 165
  0309848  addic 5, 3, 7136
  030984c  lwz 3, 324(30)
  0309850  lwz 4, 372(30)
  0309854  slwi 3, 3, 2
  0309858  slwi 4, 4, 2
  030985c  extsw 6, 3
  0309860  extsw 7, 4
  0309864  addic 3, 31, 16
  0309868  lwzx 4, 5, 6
  030986c  stw 4, 320(30)
  0309870  lwzx 5, 5, 7
  0309874  addic 4, 4, 16
  0309878  stw 5, 368(30)
  030987c  bl 0x5e7e98
  0309880  nop
  0309884  li 3, 0
  0309888  lbz 4, 83(31)
  030988c  li 5, 10
  0309890  cmpwi 4, 7
  0309894  sth 3, 50(31)
  0309898  stw 3, 148(31)
  030989c  stb 5, 32(31)
  03098a0  bt 2, 0x3098bc
  03098a4  ori 3, 31, 0
  03098a8  li 4, 7
  03098ac  li 5, 0
  03098b0  li 6, 0
  03098b4  bl 0xfddc0
  03098b8  nop
  03098bc  lhz 5, 52(31)
  03098c0  li 4, 1
  03098c4  addic 3, 30, 208
  03098c8  ori 5, 5, 4096
  03098cc  sth 5, 52(31)
  03098d0  stb 4, 41(30)
  03098d4  bl 0x100f8c
  03098d8  nop
  03098dc  lis 3, 151
  03098e0  addic 3, 3, -25376
  03098e4  lwz 3, 8320(3)
  03098e8  ld 3, 56(3)
  03098ec  std 3, 56(31)
  03098f0  bl 0x5c8318
  03098f4  nop
  03098f8  clrlwi 3, 3, 31
  03098fc  cmpwi 3, 0
  0309900  bt 2, 0x309918
  0309904  lis 3, 0
  0309908  lhz 4, 52(31)
  030990c  ori 3, 3, 32768
  0309910  or 3, 4, 3
  0309914  sth 3, 52(31)
  0309918  lis 3, 16384
  030991c  lis 4, 15861
  0309920  li 6, 909
  0309924  lis 5, 16544
  0309928  stw 3, 220(30)
  030992c  ori 4, 4, 36386
  0309930  stw 3, 216(30)
  0309934  li 8, 2
  0309938  stw 6, 208(30)
  030993c  li 7, 10
  0309940  stw 5, 32(30)
  0309944  li 6, 0
  0309948  stw 4, 244(30)
  030994c  stb 8, 40(30)
  0309950  addic 3, 30, 288
  0309954  stb 7, 88(30)
  0309958  addic 4, 31, 16
  030995c  stb 7, 90(30)
  0309960  stw 6, 420(30)
  0309964  bl 0x5e7e98
  0309968  nop
  030996c  li 3, 60
  0309970  bl 0x5e7e18
  0309974  nop
  0309978  stw 3, 400(30)
  030997c  b 0x30b500
  0309980  lis 27, 151
  0309984  lfs 1, 16(31)
  0309988  addic 27, 27, -25376
  030998c  lfs 2, 20(31)
  0309990  lfs 3, 128(27)
  0309994  lfs 4, 132(27)
  0309998  fsubs 1, 3, 1
  030999c  fsubs 2, 4, 2
  03099a0  bl 0x5e8338
  03099a4  nop
  03099a8  lis 3, 49
  03099ac  addic 5, 30, 404
  03099b0  addi 26, 3, -28536
  03099b4  ori 3, 31, 0
  03099b8  lfs 2, 12(26)
  03099bc  lfs 3, 16(26)
  03099c0  lfs 4, 20(26)
  03099c4  bl 0xff2e8
  03099c8  nop
  03099cc  addic 29, 31, 16
  03099d0  addic 28, 27, 128
  03099d4  ori 3, 29, 0
  03099d8  ori 4, 28, 0
  03099dc  bl 0x5e8588
  03099e0  nop
  03099e4  lfs 2, 24(26)
  03099e8  fcmpu 0, 1, 2
  03099ec  cror 6, 1, 2
  03099f0  bt 6, 0x309b18
  03099f4  ori 3, 29, 0
  03099f8  ori 4, 28, 0
  03099fc  bl 0x5e8588
  0309a00  nop
  0309a04  lis 3, 49
  0309a08  addi 3, 3, -28536
  0309a0c  lfs 2, 28(3)
  0309a10  fcmpu 0, 1, 2
  0309a14  bt 0, 0x309b18
  0309a18  lfs 1, 24(31)
  0309a1c  lfs 2, 136(27)
  0309a20  lis 3, 49
  0309a24  fsubs 1, 1, 2
  0309a28  addi 3, 3, -28536
  0309a2c  lfs 2, 32(3)
  0309a30  fabs 1, 1
  0309a34  fcmpu 0, 1, 2
  0309a38  cror 6, 1, 2
  0309a3c  bt 6, 0x309b18
  0309a40  addic 3, 30, 400
  0309a44  bl 0x4fff60
  0309a48  nop
  0309a4c  cmpwi 3, 0
  0309a50  bt 2, 0x30b500
  0309a54  li 6, 0
  0309a58  lis 7, 16128
  0309a5c  addic 26, 1, 112
  0309a60  addic 25, 1, 144
  0309a64  stw 6, 144(1)
  0309a68  ori 4, 29, 0
  0309a6c  stw 6, 148(1)
  0309a70  ori 3, 26, 0
  0309a74  stw 7, 152(1)
  0309a78  ori 5, 25, 0
  0309a7c  stw 6, 156(1)
  0309a80  bl 0x5e7f54
  0309a84  nop
  0309a88  addic 29, 1, 128
  0309a8c  ori 4, 28, 0
  0309a90  ori 3, 29, 0
  0309a94  ori 5, 25, 0
  0309a98  bl 0x5e7f54
  0309a9c  nop
  0309aa0  ori 3, 26, 0
  0309aa4  ori 4, 29, 0
  0309aa8  li 5, 0
  0309aac  ori 6, 31, 0
  0309ab0  li 7, 0
  0309ab4  bl 0x57820
  0309ab8  nop
  0309abc  cmpwi 3, 0
  0309ac0  bt 2, 0x30b500
  0309ac4  lis 3, 161
  0309ac8  lwz 4, 8320(27)
  0309acc  addic 3, 3, 2368
  0309ad0  lwz 3, 24(3)
  0309ad4  cmpw 3, 4
  0309ad8  bf 2, 0x30b500
  0309adc  li 3, 2
  0309ae0  lbz 4, 83(31)
  0309ae4  cmpwi 4, 6
  0309ae8  stb 3, 32(31)
  0309aec  bt 2, 0x30b500
  0309af0  li 3, 5
  0309af4  bl 0x5e7e18
  0309af8  nop
  0309afc  ori 6, 3, 0
  0309b00  ori 3, 31, 0
  0309b04  li 4, 6
  0309b08  li 5, 0
  0309b0c  bl 0xfddc0
  0309b10  nop
  0309b14  b 0x30b500
  0309b18  ori 3, 29, 0
  0309b1c  ori 4, 28, 0
  0309b20  bl 0x5e8588
  0309b24  nop
  0309b28  lis 3, 49
  0309b2c  addi 3, 3, -28536
  0309b30  lfs 2, 28(3)
  0309b34  fcmpu 0, 1, 2
  0309b38  bt 1, 0x309bd8
  0309b3c  lwz 3, 400(30)
  0309b40  cmpwi 3, 0
  0309b44  bf 2, 0x309b5c
  0309b48  li 3, 20
  0309b4c  bl 0x5e7e18
  0309b50  nop
  0309b54  stw 3, 400(30)
  0309b58  b 0x30b500
  0309b5c  addic 3, 30, 400
  0309b60  bl 0x4fff60
  0309b64  nop
  0309b68  cmpwi 3, 0
  0309b6c  bt 2, 0x309bac
  0309b70  li 3, 4
  0309b74  lbz 4, 83(31)
  0309b78  cmpwi 4, 1
  0309b7c  stb 3, 32(31)
  0309b80  bt 2, 0x30b500
  0309b84  li 3, 8
  0309b88  bl 0x5e7e18
  0309b8c  nop
  0309b90  ori 6, 3, 0
  0309b94  ori 3, 31, 0
  0309b98  li 4, 1
  0309b9c  li 5, 0
  0309ba0  bl 0xfddc0
  0309ba4  nop
  0309ba8  b 0x30b500
  0309bac  li 3, 20
  0309bb0  lwz 29, 400(30)
  0309bb4  bl 0x5e7e18
  0309bb8  nop
  0309bbc  cmpw 29, 3
  0309bc0  bf 1, 0x30b500
  0309bc4  li 3, 20
  0309bc8  bl 0x5e7e18
  0309bcc  nop
  0309bd0  stw 3, 400(30)
  0309bd4  b 0x30b500
  0309bd8  ori 3, 29, 0
  0309bdc  ori 4, 28, 0
  0309be0  bl 0x5e8588
  0309be4  nop
  0309be8  lis 3, 49
  0309bec  addi 3, 3, -28536
  0309bf0  lfs 2, 36(3)
  0309bf4  fcmpu 0, 1, 2
  0309bf8  cror 6, 0, 2
  0309bfc  bt 6, 0x30b500
  0309c00  li 3, 17
  0309c04  lbz 4, 83(31)
  0309c08  cmpwi 4, 0
  0309c0c  stb 3, 32(31)
  0309c10  bt 2, 0x30b500
  0309c14  li 3, 8
  0309c18  bl 0x5e7e18
  0309c1c  nop
  0309c20  ori 6, 3, 0
  0309c24  ori 3, 31, 0
  0309c28  li 4, 0
  0309c2c  li 5, 0
  0309c30  bl 0xfddc0
  0309c34  nop
  0309c38  b 0x30b500
  0309c3c  lis 4, 151
  0309c40  addic 3, 31, 16
  0309c44  addic 4, 4, -25376
  0309c48  addic 4, 4, 128
  0309c4c  bl 0x5e8588
  0309c50  nop
  0309c54  lis 3, 49
  0309c58  addi 3, 3, -28536
  0309c5c  lfs 2, 40(3)
  0309c60  fcmpu 0, 1, 2
  0309c64  cror 6, 1, 2
  0309c68  bt 6, 0x30b500
  0309c6c  li 3, 1
  0309c70  lbz 4, 83(31)
  0309c74  cmpwi 4, 12
  0309c78  stb 3, 32(31)
  0309c7c  bt 2, 0x30b500
  0309c80  li 3, 8
  0309c84  bl 0x5e7e18
  0309c88  nop
  0309c8c  ori 6, 3, 0
  0309c90  ori 3, 31, 0
  0309c94  li 4, 12
  0309c98  li 5, 0
  0309c9c  bl 0xfddc0
  0309ca0  nop
  0309ca4  b 0x30b500
  0309ca8  lis 3, 151
  0309cac  lfs 1, 16(31)
  0309cb0  addic 28, 3, -25376
  0309cb4  lfs 2, 20(31)
  0309cb8  lfs 3, 128(28)
  0309cbc  lfs 4, 132(28)
  0309cc0  fsubs 1, 3, 1
  0309cc4  fsubs 2, 4, 2
  0309cc8  bl 0x5e8338
  0309ccc  nop
  0309cd0  lis 3, 49
  0309cd4  addic 5, 30, 404
  0309cd8  addi 29, 3, -28536
  0309cdc  ori 3, 31, 0
  0309ce0  lfs 2, 12(29)
  0309ce4  lfs 3, 16(29)
  0309ce8  lfs 4, 20(29)
  0309cec  bl 0xff2e8
  0309cf0  nop
  0309cf4  lfs 1, 72(31)
  0309cf8  bl 0x5e8078
  0309cfc  nop
  0309d00  lfs 31, 4(29)
  0309d04  lfs 2, 72(31)
  0309d08  fmuls 3, 1, 31
  0309d0c  fmr 1, 2
  0309d10  stfs 3, 160(1)
  0309d14  bl 0x5e8128
  0309d18  nop
  0309d1c  fmuls 1, 1, 31
  0309d20  li 5, 0
  0309d24  addic 4, 30, 208
  0309d28  ori 3, 31, 0
  0309d2c  addic 6, 1, 176
  0309d30  stw 5, 168(1)
  0309d34  addic 5, 1, 160
  0309d38  stfs 1, 164(1)
  0309d3c  lfs 1, 44(29)
  0309d40  bl 0x101058
  0309d44  nop
  0309d48  addic 29, 31, 16
  0309d4c  addic 28, 28, 128
  0309d50  ori 3, 29, 0
  0309d54  ori 4, 28, 0
  0309d58  bl 0x5e8588
  0309d5c  nop
  0309d60  fcmpu 0, 1, 31
  0309d64  cror 6, 1, 2
  0309d68  bt 6, 0x309da8
  0309d6c  li 3, 4
  0309d70  lbz 4, 83(31)
  0309d74  cmpwi 4, 1
  0309d78  stb 3, 32(31)
  0309d7c  bt 2, 0x30b500
  0309d80  li 3, 8
  0309d84  bl 0x5e7e18
  0309d88  nop
  0309d8c  ori 6, 3, 0
  0309d90  ori 3, 31, 0
  0309d94  li 4, 1
  0309d98  li 5, 0
  0309d9c  bl 0xfddc0
  0309da0  nop
  0309da4  b 0x30b500
  0309da8  ori 3, 29, 0
  0309dac  ori 4, 28, 0
  0309db0  bl 0x5e8588
  0309db4  nop
  0309db8  lis 3, 49
  0309dbc  addi 3, 3, -28536
  0309dc0  lfs 2, 32(3)
  0309dc4  fcmpu 0, 1, 2
  0309dc8  cror 6, 0, 2
  0309dcc  bt 6, 0x30b500
  0309dd0  li 3, 1
  0309dd4  lbz 4, 83(31)
  0309dd8  cmpwi 4, 12
  0309ddc  stb 3, 32(31)
  0309de0  bt 2, 0x30b500
  0309de4  li 3, 8
  0309de8  bl 0x5e7e18
  0309dec  nop
  0309df0  ori 6, 3, 0
  0309df4  ori 3, 31, 0
  0309df8  li 4, 12
  0309dfc  li 5, 0
  0309e00  bl 0xfddc0
  0309e04  nop
  0309e08  b 0x30b500
  0309e0c  lis 3, 151
  0309e10  lfs 1, 16(31)
  0309e14  lfs 2, 20(31)
  0309e18  addic 28, 3, -25376
  0309e1c  lfs 3, 128(28)
  0309e20  lfs 4, 132(28)
  0309e24  fsubs 1, 3, 1
  0309e28  fsubs 2, 4, 2
  0309e2c  bl 0x5e8338
  0309e30  nop
  0309e34  lis 3, 49
  0309e38  addic 5, 30, 404
  0309e3c  addi 27, 3, -28536
  0309e40  ori 3, 31, 0
  0309e44  lfs 2, 12(27)
  0309e48  lfs 3, 16(27)
  0309e4c  lfs 4, 20(27)
  0309e50  bl 0xff2e8
  0309e54  nop
  0309e58  addic 29, 31, 16
  0309e5c  addic 28, 28, 128
  0309e60  ori 3, 29, 0
  0309e64  ori 4, 28, 0
  0309e68  bl 0x5e8588
  0309e6c  nop
  0309e70  lfs 2, 28(27)
  0309e74  fcmpu 0, 1, 2
  0309e78  cror 6, 1, 2
  0309e7c  bt 6, 0x309eb8
  0309e80  li 3, 1
  0309e84  lbz 4, 83(31)
  0309e88  cmpwi 4, 0
  0309e8c  stb 3, 32(31)
  0309e90  bt 2, 0x309eb8
  0309e94  li 3, 8
  0309e98  bl 0x5e7e18
  0309e9c  nop
  0309ea0  ori 6, 3, 0
  0309ea4  ori 3, 31, 0
  0309ea8  li 4, 0
  0309eac  li 5, 0
  0309eb0  bl 0xfddc0
  0309eb4  nop
  0309eb8  lbz 3, 82(31)
  0309ebc  lbz 4, 83(31)
  0309ec0  cmpw 3, 4
  0309ec4  bf 2, 0x30a0d0
  0309ec8  ori 3, 31, 0
  0309ecc  bl 0xefe40
  0309ed0  nop
  0309ed4  lis 3, 49
  0309ed8  addi 3, 3, -28536
  0309edc  lfs 2, 48(3)
  0309ee0  fcmpu 0, 1, 2
  0309ee4  bf 2, 0x30a0d0
  0309ee8  addic 3, 1, 224
  0309eec  fmr 30, 31
  0309ef0  ori 4, 28, 0
  0309ef4  bl 0x5e7e98
  0309ef8  nop
  0309efc  lis 3, 49
  0309f00  li 4, 0
  0309f04  addi 5, 3, -28536
  0309f08  ori 3, 28, 0
  0309f0c  lfs 31, 52(5)
  0309f10  fmr 1, 31
  0309f14  bl 0xffb70
  0309f18  nop
  0309f1c  fcmpu 0, 1, 30
  0309f20  bt 2, 0x309f3c
  0309f24  fmr 1, 31
  0309f28  ori 3, 28, 0
  0309f2c  li 4, 0
  0309f30  bl 0xffb70
  0309f34  nop
  0309f38  stfs 1, 232(1)
  0309f3c  addic 28, 1, 224
  0309f40  ori 5, 29, 0
  0309f44  ori 3, 28, 0
  0309f48  ori 4, 28, 0
  0309f4c  bl 0x5e81f0
  0309f50  nop
  0309f54  ori 3, 28, 0
  0309f58  bl 0x5e8030
  0309f5c  nop
  0309f60  lis 3, 49
  0309f64  addi 3, 3, -28536
  0309f68  lfs 31, 56(3)
  0309f6c  fcmpu 0, 1, 31
  0309f70  cror 6, 0, 2
  0309f74  bt 6, 0x309fd4
  0309f78  lis 3, 49
  0309f7c  addi 3, 3, -28536
  0309f80  lfs 30, 60(3)
  0309f84  lfs 29, 44(3)
  0309f88  fmr 1, 30
  0309f8c  fmr 2, 29
  0309f90  bl 0xfcbe8
  0309f94  nop
  0309f98  lfs 2, 224(1)
  0309f9c  fadds 3, 2, 1
  0309fa0  fmr 1, 30
  0309fa4  fmr 2, 29
  0309fa8  stfs 3, 224(1)
  0309fac  bl 0xfcbe8
  0309fb0  nop
  0309fb4  lfs 2, 228(1)
  0309fb8  addic 3, 1, 224
  0309fbc  fadds 2, 2, 1
  0309fc0  ori 4, 3, 0
  0309fc4  fmr 1, 31
  0309fc8  stfs 2, 228(1)
  0309fcc  bl 0x5e7f98
  0309fd0  nop
  0309fd4  addic 28, 1, 224
  0309fd8  ori 3, 28, 0
  0309fdc  bl 0x5e7ebc
  0309fe0  nop
  0309fe4  lis 3, 128
  0309fe8  lis 4, 114
  0309fec  ori 5, 29, 0
  0309ff0  lfs 2, -2636(3)
  0309ff4  lfs 3, -3056(4)
  0309ff8  fmuls 2, 2, 3
  0309ffc  ori 3, 28, 0
  030a000  ori 4, 28, 0
  030a004  fdivs 31, 1, 2
  030a008  bl 0x5e7f54
  030a00c  nop
  030a010  addic 29, 1, 192
  030a014  ori 3, 31, 0
  030a018  li 4, 9
  030a01c  ori 5, 29, 0
  030a020  bl 0xf1114
  030a024  nop
  030a028  addic 27, 1, 208
  030a02c  ori 5, 29, 0
  030a030  ori 4, 28, 0
  030a034  ori 3, 27, 0
  030a038  bl 0x5e81f0
  030a03c  nop
  030a040  li 5, 0
  030a044  ori 3, 27, 0
  030a048  fmr 1, 31
  030a04c  ori 4, 27, 0
  030a050  stw 5, 216(1)
  030a054  bl 0x5e7f98
  030a058  nop
  030a05c  lis 3, 128
  030a060  fmr 1, 31
  030a064  lis 4, 114
  030a068  addic 7, 1, 448
  030a06c  lfs 2, -2632(3)
  030a070  lfs 3, -3048(4)
  030a074  ori 3, 29, 0
  030a078  fmuls 2, 2, 3
  030a07c  ori 4, 28, 0
  030a080  fneg 2, 2
  030a084  bl 0x108180
  030a088  nop
  030a08c  ori 3, 31, 0
  030a090  stfs 1, 216(1)
  030a094  ori 4, 29, 0
  030a098  ori 5, 27, 0
  030a09c  bl 0x315198
  030a0a0  nop
  030a0a4  ori 29, 3, 0
  030a0a8  cmpwi 29, 0
  030a0ac  bt 2, 0x30b500
  030a0b0  li 3, 180
  030a0b4  lwz 28, 120(29)
  030a0b8  bl 0x5e7e18
  030a0bc  nop
  030a0c0  li 4, 1
  030a0c4  stw 3, 32(28)
  030a0c8  stb 4, 32(29)
  030a0cc  b 0x30b500
  030a0d0  lbz 3, 112(31)
  030a0d4  rlwinm 3, 3, 0, 30, 30
  030a0d8  cmpwi 3, 0
  030a0dc  bt 2, 0x30b500
  030a0e0  lis 3, 128
  030a0e4  lis 4, 114
  030a0e8  lfs 1, -2628(3)
  030a0ec  lfs 2, -3056(4)
  030a0f0  fmuls 1, 1, 2
  030a0f4  bl 0x502758
  030a0f8  nop
  030a0fc  stw 3, 400(30)
  030a100  li 3, 1
  030a104  lbz 4, 83(31)
  030a108  cmpwi 4, 12
  030a10c  stb 3, 32(31)
  030a110  bt 2, 0x30b500
  030a114  li 3, 8
  030a118  bl 0x5e7e18
  030a11c  nop
  030a120  ori 6, 3, 0
  030a124  ori 3, 31, 0
  030a128  li 4, 12
  030a12c  li 5, 0
  030a130  bl 0xfddc0
  030a134  nop
  030a138  b 0x30b500
  030a13c  lis 29, 151
  030a140  lfs 1, 16(31)
  030a144  lfs 2, 20(31)
  030a148  addic 29, 29, -25376
  030a14c  lfs 3, 128(29)
  030a150  lfs 4, 132(29)
  030a154  fsubs 1, 3, 1
  030a158  fsubs 2, 4, 2
  030a15c  bl 0x5e8338
  030a160  nop
  030a164  lis 3, 49
  030a168  addic 5, 30, 404
  030a16c  addi 4, 3, -28536
  030a170  ori 3, 31, 0
  030a174  lfs 2, 12(4)
  030a178  lfs 3, 16(4)
  030a17c  lfs 4, 20(4)
  030a180  bl 0xff2e8
  030a184  nop
  030a188  lbz 3, 82(31)
  030a18c  lbz 4, 83(31)
  030a190  cmpw 3, 4
  030a194  bf 2, 0x30a308
  030a198  ori 3, 31, 0
  030a19c  bl 0xefe40
  030a1a0  nop
  030a1a4  lis 3, 49
  030a1a8  addi 3, 3, -28536
  030a1ac  lfs 2, 48(3)
  030a1b0  fcmpu 0, 1, 2
  030a1b4  bt 0, 0x30a308
  030a1b8  ori 3, 31, 0
  030a1bc  bl 0xefe40
  030a1c0  nop
  030a1c4  lis 3, 49
  030a1c8  addi 3, 3, -28536
  030a1cc  lfs 2, 64(3)
  030a1d0  fcmpu 0, 1, 2
  030a1d4  cror 6, 1, 2
  030a1d8  bt 6, 0x30a308
  030a1dc  lfs 1, 24(31)
  030a1e0  lis 3, 49
  030a1e4  lfs 2, 136(29)
  030a1e8  addi 3, 3, -28536
  030a1ec  fsubs 1, 1, 2
  030a1f0  lfs 2, 4(3)
  030a1f4  fabs 1, 1
  030a1f8  fcmpu 0, 1, 2
  030a1fc  cror 6, 1, 2
  030a200  bt 6, 0x30a308
  030a204  addic 3, 31, 16
  030a208  addic 4, 29, 128
  030a20c  bl 0x5e8588
  030a210  nop
  030a214  lis 3, 49
  030a218  addi 3, 3, -28536
  030a21c  lfs 2, 28(3)
  030a220  fcmpu 0, 1, 2
  030a224  cror 6, 1, 2
  030a228  bt 6, 0x30a308
  030a22c  lfs 1, 128(29)
  030a230  lfs 2, 16(31)
  030a234  lfs 3, 132(29)
  030a238  lfs 4, 20(31)
  030a23c  fsubs 1, 1, 2
  030a240  fsubs 2, 3, 4
  030a244  bl 0x5e8338
  030a248  nop
  030a24c  lfs 2, 72(31)
  030a250  bl 0x5026a0
  030a254  nop
  030a258  lis 3, 49
  030a25c  addi 3, 3, -28536
  030a260  lfs 2, 68(3)
  030a264  fcmpu 0, 1, 2
  030a268  cror 6, 1, 2
  030a26c  bt 6, 0x30a308
  030a270  lfs 1, 72(31)
  030a274  bl 0x5e8078
  030a278  nop
  030a27c  lis 3, 49
  030a280  lfs 2, 72(31)
  030a284  addi 28, 3, -28536
  030a288  lfs 31, 72(28)
  030a28c  fmuls 3, 1, 31
  030a290  fmr 1, 2
  030a294  stfs 3, 240(1)
  030a298  bl 0x5e8128
  030a29c  nop
  030a2a0  fmuls 1, 1, 31
  030a2a4  lis 3, 16140
  030a2a8  lis 4, 17839
  030a2ac  ori 5, 3, 52429
  030a2b0  ori 6, 4, 57190
  030a2b4  lwz 4, 8320(29)
  030a2b8  addic 27, 1, 256
  030a2bc  stw 5, 248(1)
  030a2c0  ori 3, 27, 0
  030a2c4  stw 6, 252(1)
  030a2c8  addic 4, 4, 16
  030a2cc  stfs 1, 244(1)
  030a2d0  bl 0x5e7e98
  030a2d4  nop
  030a2d8  lfs 1, 76(28)
  030a2dc  lfs 2, 264(1)
  030a2e0  ori 4, 31, 0
  030a2e4  lwz 3, 8320(29)
  030a2e8  addic 8, 1, 240
  030a2ec  fadds 1, 2, 1
  030a2f0  li 5, 1
  030a2f4  ori 7, 27, 0
  030a2f8  stfs 1, 264(1)
  030a2fc  lfs 1, 44(28)
  030a300  bl 0x105c08
  030a304  nop
  030a308  lbz 3, 112(31)
  030a30c  rlwinm 3, 3, 0, 30, 30
  030a310  cmpwi 3, 0
  030a314  bt 2, 0x30b500
  030a318  li 4, 1
  030a31c  li 3, 20
  030a320  stb 4, 32(31)
  030a324  bl 0x5e7e18
  030a328  nop
  030a32c  stw 3, 400(30)
  030a330  lbz 3, 83(31)
  030a334  cmpwi 3, 12
  030a338  bt 2, 0x30b500
  030a33c  li 3, 8
  030a340  bl 0x5e7e18
  030a344  nop
  030a348  ori 6, 3, 0
  030a34c  ori 3, 31, 0
  030a350  li 4, 12
  030a354  li 5, 0
  030a358  bl 0xfddc0
  030a35c  nop
  030a360  b 0x30b500
  030a364  addic 3, 30, 400
  030a368  bl 0x4fff60
  030a36c  nop
  030a370  ori 3, 31, 0
  030a374  addic 4, 30, 112
  030a378  bl 0x10b030
  030a37c  nop
  030a380  clrlwi 3, 3, 31
  030a384  cmpwi 3, 0
  030a388  bt 2, 0x30a458
  030a38c  lis 30, 151
  030a390  addic 3, 31, 16
  030a394  addic 30, 30, -25376
  030a398  addic 4, 30, 128
  030a39c  bl 0x5e8588
  030a3a0  nop
  030a3a4  lis 3, 49
  030a3a8  addi 4, 3, -28536
  030a3ac  lbz 3, 83(31)
  030a3b0  lfs 2, 80(4)
  030a3b4  fcmpu 0, 1, 2
  030a3b8  cror 6, 1, 2
  030a3bc  bt 6, 0x30a420
  030a3c0  lfs 1, 24(31)
  030a3c4  lfs 2, 136(30)
  030a3c8  lis 4, 49
  030a3cc  fsubs 1, 1, 2
  030a3d0  addi 4, 4, -28536
  030a3d4  lfs 2, 84(4)
  030a3d8  fabs 1, 1
  030a3dc  fcmpu 0, 1, 2
  030a3e0  cror 6, 1, 2
  030a3e4  bt 6, 0x30a420
  030a3e8  li 4, 4
  030a3ec  cmpwi 3, 1
  030a3f0  stb 4, 32(31)
  030a3f4  bt 2, 0x30b510
  030a3f8  li 3, 5
  030a3fc  bl 0x5e7e18
  030a400  nop
  030a404  ori 6, 3, 0
  030a408  ori 3, 31, 0
  030a40c  li 4, 1
  030a410  li 5, 5
  030a414  bl 0xfddc0
  030a418  nop
  030a41c  b 0x30b510
  030a420  li 4, 1
  030a424  cmpwi 3, 12
  030a428  stb 4, 32(31)
  030a42c  bt 2, 0x30b510
  030a430  li 3, 7
  030a434  bl 0x5e7e18
  030a438  nop
  030a43c  ori 6, 3, 0
  030a440  ori 3, 31, 0
  030a444  li 4, 12
  030a448  li 5, 5
  030a44c  bl 0xfddc0
  030a450  nop
  030a454  b 0x30b510
  030a458  lwz 4, 24(31)
  030a45c  lis 3, 16856
  030a460  srawi 5, 4, 31
  030a464  srwi 6, 5, 1
  030a468  xor 4, 6, 4
  030a46c  subc 4, 4, 5
  030a470  cmpw 4, 3
  030a474  bf 0, 0x30b500
  030a478  ori 3, 31, 0
  030a47c  bl 0xefb38
  030a480  nop
  030a484  b 0x30b510
  030a488  ori 3, 31, 0
  030a48c  addic 4, 30, 112
  030a490  bl 0x10b030
  030a494  nop
  030a498  rlwinm 3, 3, 0, 25, 25
  030a49c  cmpwi 3, 0
  030a4a0  bt 2, 0x30a4e0
  030a4a4  lbz 3, 188(31)
  030a4a8  lbz 4, 83(31)
  030a4ac  stb 3, 32(31)
  030a4b0  cmpwi 4, 12
  030a4b4  bt 2, 0x30b510
  030a4b8  li 3, 7
  030a4bc  bl 0x5e7e18
  030a4c0  nop
  030a4c4  ori 6, 3, 0
  030a4c8  ori 3, 31, 0
  030a4cc  li 4, 12
  030a4d0  li 5, 0
  030a4d4  bl 0xfddc0
  030a4d8  nop
  030a4dc  b 0x30b510
  030a4e0  lwz 3, 432(30)
  030a4e4  addic 4, 31, 16
  030a4e8  addic 3, 3, 16
  030a4ec  bl 0x5e7e98
  030a4f0  nop
  030a4f4  lwz 3, 432(30)
  030a4f8  lfs 1, 72(31)
  030a4fc  stfs 1, 72(3)
  030a500  lwz 3, 432(30)
  030a504  bl 0xf30a0
  030a508  nop
  030a50c  b 0x30b500
  030a510  addic 3, 30, 400
  030a514  bl 0x4fff60
  030a518  nop
  030a51c  ori 3, 31, 0
  030a520  addic 4, 30, 112
  030a524  bl 0x10b030
  030a528  nop
  030a52c  rlwinm 3, 3, 0, 25, 25
  030a530  cmpwi 3, 0
  030a534  bt 2, 0x30a604
  030a538  lis 30, 151
  030a53c  addic 3, 31, 16
  030a540  addic 30, 30, -25376
  030a544  addic 4, 30, 128
  030a548  bl 0x5e8588
  030a54c  nop
  030a550  lis 3, 49
  030a554  addi 4, 3, -28536
  030a558  lbz 3, 83(31)
  030a55c  lfs 2, 4(4)
  030a560  fcmpu 0, 1, 2
  030a564  cror 6, 1, 2
  030a568  bt 6, 0x30a5cc
  030a56c  lfs 1, 24(31)
  030a570  lfs 2, 136(30)
  030a574  lis 4, 49
  030a578  fsubs 1, 1, 2
  030a57c  addi 4, 4, -28536
  030a580  lfs 2, 84(4)
  030a584  fabs 1, 1
  030a588  fcmpu 0, 1, 2
  030a58c  cror 6, 1, 2
  030a590  bt 6, 0x30a5cc
  030a594  li 4, 4
  030a598  cmpwi 3, 1
  030a59c  stb 4, 32(31)
  030a5a0  bt 2, 0x30b510
  030a5a4  li 3, 5
  030a5a8  bl 0x5e7e18
  030a5ac  nop
  030a5b0  ori 6, 3, 0
  030a5b4  ori 3, 31, 0
  030a5b8  li 4, 1
  030a5bc  li 5, 5
  030a5c0  bl 0xfddc0
  030a5c4  nop
  030a5c8  b 0x30b510
  030a5cc  li 4, 1
  030a5d0  cmpwi 3, 12
  030a5d4  stb 4, 32(31)
  030a5d8  bt 2, 0x30b510
  030a5dc  li 3, 5
  030a5e0  bl 0x5e7e18
  030a5e4  nop
  030a5e8  ori 6, 3, 0
  030a5ec  ori 3, 31, 0
  030a5f0  li 4, 12
  030a5f4  li 5, 5
  030a5f8  bl 0xfddc0
  030a5fc  nop
  030a600  b 0x30b510
  030a604  lwz 4, 24(31)
  030a608  lis 3, 16856
  030a60c  srawi 5, 4, 31
  030a610  srwi 6, 5, 1
  030a614  xor 4, 6, 4
  030a618  subc 4, 4, 5
  030a61c  cmpw 4, 3
  030a620  bf 0, 0x30b500
  030a624  ori 3, 31, 0
  030a628  bl 0xefb38
  030a62c  nop
  030a630  b 0x30b510
  030a634  ori 3, 31, 0
  030a638  bl 0xefe40
  030a63c  nop
  030a640  lis 3, 49
  030a644  addi 3, 3, -28536
  030a648  lfs 2, 88(3)
  030a64c  fcmpu 0, 1, 2
  030a650  bf 2, 0x30a65c
  030a654  li 3, 0
  030a658  stw 3, 88(31)
  030a65c  lwz 4, 320(30)
  030a660  addic 29, 1, 272
  030a664  ori 3, 29, 0
  030a668  lwz 5, 0(4)
  030a66c  slwi 5, 5, 4
  030a670  addc 4, 4, 5
  030a674  clrldi 4, 4, 32
  030a678  bl 0x5e7e98
  030a67c  nop
  030a680  lis 28, 151
  030a684  ori 3, 29, 0
  030a688  addic 28, 28, -25376
  030a68c  addic 29, 28, 128
  030a690  ori 4, 29, 0
  030a694  bl 0x5e8548
  030a698  nop
  030a69c  lfs 2, 408(30)
  030a6a0  fcmpu 0, 1, 2
  030a6a4  bt 0, 0x30a6c4
  030a6a8  ori 3, 29, 0
  030a6ac  lwz 4, 448(30)
  030a6b0  extsw 4, 4
  030a6b4  bl 0x110b70
  030a6b8  nop
  030a6bc  cmpwi 3, 0
  030a6c0  bt 2, 0x30b500
  030a6c4  li 3, 64
  030a6c8  lwz 5, 36(31)
  030a6cc  li 4, 11
  030a6d0  sth 3, 50(31)
  030a6d4  lwz 5, 16(5)
  030a6d8  stb 4, 32(31)
  030a6dc  lwz 3, 436(30)
  030a6e0  stw 5, 148(31)
  030a6e4  cmpwi 3, -1
  030a6e8  bf 2, 0x30a754
  030a6ec  li 3, 240
  030a6f0  bl 0xefa28
  030a6f4  nop
  030a6f8  li 5, 64
  030a6fc  stw 3, 432(30)
  030a700  li 6, 1
  030a704  addic 4, 31, 16
  030a708  stb 5, 48(3)
  030a70c  lwz 3, 432(30)
  030a710  sth 5, 50(3)
  030a714  lwz 3, 432(30)
  030a718  stb 6, 49(3)
  030a71c  lwz 3, 432(30)
  030a720  stb 6, 32(3)
  030a724  lwz 3, 8320(28)
  030a728  lwz 5, 432(30)
  030a72c  ld 3, 56(3)
  030a730  std 3, 56(5)
  030a734  lwz 3, 432(30)
  030a738  addic 3, 3, 16
  030a73c  bl 0x5e7e98
  030a740  nop
  030a744  lwz 3, 432(30)
  030a748  bl 0xf31a8
  030a74c  nop
  030a750  b 0x30b500
  030a754  lis 4, 164
  030a758  slwi 3, 3, 8
  030a75c  lwz 4, -28512(4)
  030a760  addc 3, 4, 3
  030a764  li 4, 64
  030a768  stw 3, 432(30)
  030a76c  clrldi 3, 3, 32
  030a770  sth 4, 50(3)
  030a774  lwz 3, 432(30)
  030a778  lwz 4, 36(3)
  030a77c  lwz 4, 16(4)
  030a780  stw 4, 148(3)
  030a784  b 0x30b500
  030a788  lis 4, 151
  030a78c  addic 3, 31, 16
  030a790  addic 4, 4, -25376
  030a794  addic 4, 4, 128
  030a798  bl 0x5e8548
  030a79c  nop
  030a7a0  lfs 2, 408(30)
  030a7a4  fcmpu 0, 1, 2
  030a7a8  cror 6, 1, 2
  030a7ac  bt 6, 0x30b500
  030a7b0  li 3, 14
  030a7b4  lbz 4, 83(31)
  030a7b8  cmpwi 4, 5
  030a7bc  stb 3, 32(31)
  030a7c0  bt 2, 0x30b500
  030a7c4  li 3, 5
  030a7c8  bl 0x5e7e18
  030a7cc  nop
  030a7d0  ori 6, 3, 0
  030a7d4  ori 3, 31, 0
  030a7d8  li 4, 5
  030a7dc  li 5, 0
  030a7e0  bl 0xfddc0
  030a7e4  nop
  030a7e8  b 0x30b500
  030a7ec  lwz 3, 320(30)
  030a7f0  lwz 4, 304(30)
  030a7f4  lbz 5, 308(30)
  030a7f8  extsb 5, 5
  030a7fc  lwz 3, 0(3)
  030a800  addc 4, 4, 3
  030a804  addc 29, 4, 5
  030a808  divw 4, 29, 3
  030a80c  mullw 3, 4, 3
  030a810  lwz 4, 424(30)
  030a814  subc 29, 29, 3
  030a818  cmpwi 4, 0
  030a81c  bf 2, 0x30a86c
  030a820  lwz 3, 368(30)
  030a824  lfs 1, 16(31)
  030a828  lfs 2, 20(31)
  030a82c  lfs 3, 16(3)
  030a830  lfs 4, 20(3)
  030a834  fsubs 1, 3, 1
  030a838  fsubs 2, 4, 2
  030a83c  bl 0x5e8338
  030a840  nop
  030a844  lis 3, 49
  030a848  addic 5, 30, 404
  030a84c  addi 4, 3, -28536
  030a850  ori 3, 31, 0
  030a854  lfs 2, 12(4)
  030a858  lfs 3, 16(4)
  030a85c  lfs 4, 20(4)
  030a860  bl 0xff2e8
  030a864  nop
  030a868  b 0x30a8b8
  030a86c  lis 3, 151
  030a870  lfs 1, 16(31)
  030a874  lfs 2, 20(31)
  030a878  addic 3, 3, -25376
  030a87c  lfs 3, 128(3)
  030a880  lfs 4, 132(3)
  030a884  fsubs 1, 3, 1
  030a888  fsubs 2, 4, 2
  030a88c  bl 0x5e8338
  030a890  nop
  030a894  lis 3, 49
  030a898  addic 5, 30, 404
  030a89c  addi 4, 3, -28536
  030a8a0  ori 3, 31, 0
  030a8a4  lfs 2, 12(4)
  030a8a8  lfs 3, 16(4)
  030a8ac  lfs 4, 20(4)
  030a8b0  bl 0xff2e8
  030a8b4  nop
  030a8b8  sldi 28, 29, 4
  030a8bc  lwz 4, 320(30)
  030a8c0  addic 26, 1, 288
  030a8c4  addc 4, 4, 28
  030a8c8  ori 3, 26, 0
  030a8cc  addic 4, 4, 16
  030a8d0  clrldi 4, 4, 32
  030a8d4  bl 0x5e7e98
  030a8d8  nop
  030a8dc  addic 27, 31, 16
  030a8e0  ori 4, 26, 0
  030a8e4  ori 3, 27, 0
  030a8e8  bl 0x5e8548
  030a8ec  nop
  030a8f0  lis 3, 49
  030a8f4  addi 3, 3, -28536
  030a8f8  lfs 2, 52(3)
  030a8fc  fcmpu 0, 1, 2
  030a900  cror 6, 1, 2
  030a904  bt 6, 0x30a920
  030a908  lwz 3, 320(30)
  030a90c  lwz 3, 0(3)
  030a910  addic 3, 3, -1
  030a914  cmpw 29, 3
  030a918  bf 0, 0x30a920
  030a91c  stw 29, 304(30)
  030a920  addic 26, 1, 304
  030a924  addic 4, 1, 288
  030a928  ori 3, 26, 0
  030a92c  ori 5, 27, 0
  030a930  bl 0x5e81f0
  030a934  nop
  030a938  ori 3, 26, 0
  030a93c  bl 0x5e8030
  030a940  nop
  030a944  lis 3, 128
  030a948  fmr 2, 1
  030a94c  lis 4, 114
  030a950  lfs 1, -2616(3)
  030a954  lfs 3, -3052(4)
  030a958  fmuls 1, 1, 3
  030a95c  fcmpu 0, 2, 1
  030a960  cror 6, 0, 2
  030a964  bt 6, 0x30a978
  030a968  addic 3, 1, 304
  030a96c  ori 4, 3, 0
  030a970  bl 0x5e7f98
  030a974  nop
  030a978  ori 3, 27, 0
  030a97c  addic 5, 1, 304
  030a980  ori 4, 27, 0
  030a984  bl 0x5e7f54
  030a988  nop
  030a98c  lwz 3, 432(30)
  030a990  ori 4, 27, 0
  030a994  addic 3, 3, 16
  030a998  bl 0x5e7e98
  030a99c  nop
  030a9a0  lwz 3, 432(30)
  030a9a4  lfs 1, 72(31)
  030a9a8  stfs 1, 72(3)
  030a9ac  lwz 3, 432(30)
  030a9b0  bl 0xf30a0
  030a9b4  nop
  030a9b8  ori 3, 27, 0
  030a9bc  addic 4, 1, 288
  030a9c0  bl 0x5e8548
  030a9c4  nop
  030a9c8  lis 3, 49
  030a9cc  addi 3, 3, -28536
  030a9d0  lfs 2, 20(3)
  030a9d4  fcmpu 0, 1, 2
  030a9d8  cror 6, 1, 2
  030a9dc  bt 6, 0x30a9f4
  030a9e0  lwz 3, 320(30)
  030a9e4  lwz 3, 0(3)
  030a9e8  addic 3, 3, -1
  030a9ec  cmpw 29, 3
  030a9f0  bt 2, 0x30aa10
  030a9f4  lwz 4, 320(30)
  030a9f8  lis 3, 16936
  030a9fc  addc 4, 4, 28
  030aa00  clrldi 4, 4, 32
  030aa04  lwz 4, 28(4)
  030aa08  cmpw 4, 3
  030aa0c  bf 2, 0x30aab8
  030aa10  lwz 3, 88(31)
  030aa14  cmpwi 3, 0
  030aa18  bf 2, 0x30aab8
  030aa1c  lwz 3, 424(30)
  030aa20  cmpwi 3, 0
  030aa24  bf 2, 0x30aa34
  030aa28  lis 3, 16256
  030aa2c  stw 3, 88(31)
  030aa30  b 0x30aab8
  030aa34  li 3, 16
  030aa38  lbz 5, 83(31)
  030aa3c  lis 4, 16256
  030aa40  cmpwi 5, 12
  030aa44  stb 3, 32(31)
  030aa48  stw 4, 88(31)
  030aa4c  bt 2, 0x30aa74
  030aa50  li 3, 12
  030aa54  bl 0x5e7e18
  030aa58  nop
  030aa5c  ori 6, 3, 0
  030aa60  ori 3, 31, 0
  030aa64  li 4, 12
  030aa68  li 5, 0
  030aa6c  bl 0xfddc0
  030aa70  nop
  030aa74  lis 3, 128
  030aa78  vspltisw 2, -1
  030aa7c  lis 4, 128
  030aa80  li 5, -2612
  030aa84  lis 6, 114
  030aa88  li 7, -3056
  030aa8c  lfs 1, -2616(3)
  030aa90  vslw 2, 2, 2
  030aa94  stfs 1, 440(30)
  030aa98  li 3, 428
  030aa9c  stfs 1, 444(30)
  030aaa0  <unknown>
  030aaa4  <unknown>
  030aaa8  vmaddfp 2, 3, 4, 2
  030aaac  vctsxs 2, 2, 0
  030aab0  vspltw 2, 2, 0
  030aab4  stvewx 2, 3, 30
  030aab8  lbz 3, 82(31)
  030aabc  cmpwi 3, 7
  030aac0  bf 2, 0x30b500
  030aac4  lbz 3, 112(31)
  030aac8  rlwinm 3, 3, 0, 30, 30
  030aacc  cmpwi 3, 0
  030aad0  bt 2, 0x30b500
  030aad4  lis 3, 49
  030aad8  lis 4, 128
  030aadc  addi 3, 3, -28536
  030aae0  lis 5, 114
  030aae4  li 6, 13
  030aae8  li 9, 0
  030aaec  lfs 1, 4(3)
  030aaf0  lfs 2, -2620(4)
  030aaf4  lfs 3, -3052(5)
  030aaf8  fmuls 1, 2, 1
  030aafc  lis 5, 128
  030ab00  stw 6, 148(30)
  030ab04  ori 3, 31, 0
  030ab08  addic 4, 30, 112
  030ab0c  li 6, 8
  030ab10  li 7, 1
  030ab14  li 8, 0
  030ab18  fmuls 1, 1, 3
  030ab1c  stfs 1, 136(30)
  030ab20  lfs 1, -2624(5)
  030ab24  stb 9, 173(30)
  030ab28  fmuls 1, 1, 3
  030ab2c  stfs 1, 140(30)
  030ab30  lfs 1, 72(31)
  030ab34  bl 0x10ad80
  030ab38  nop
  030ab3c  lis 3, 16640
  030ab40  lis 4, 16768
  030ab44  li 5, 12
  030ab48  stw 3, 192(30)
  030ab4c  stw 4, 196(30)
  030ab50  stb 5, 32(31)
  030ab54  lwz 3, 424(30)
  030ab58  cmpwi 3, 0
  030ab5c  bf 2, 0x30ab88
  030ab60  lwz 5, 432(30)
  030ab64  li 3, 6
  030ab68  addic 4, 1, 304
  030ab6c  stb 3, 32(5)
  030ab70  lwz 3, 432(30)
  030ab74  lwz 3, 120(3)
  030ab78  addic 3, 3, 64
  030ab7c  bl 0x5e7e98
  030ab80  nop
  030ab84  b 0x30aba8
  030ab88  cmpwi 3, 3
  030ab8c  bf 2, 0x30aba8
  030ab90  lwz 4, 432(30)
  030ab94  li 3, 0
  030ab98  stb 3, 32(4)
  030ab9c  lwz 4, 432(30)
  030aba0  lwz 4, 120(4)
  030aba4  stw 3, 228(4)
  030aba8  lwz 4, 432(30)
  030abac  li 3, 0
  030abb0  stw 3, 148(4)
  030abb4  b 0x30b500
  030abb8  lis 28, 151
  030abbc  lfs 1, 16(31)
  030abc0  addic 28, 28, -25376
  030abc4  lfs 2, 20(31)
  030abc8  lfs 3, 128(28)
  030abcc  lfs 4, 132(28)
  030abd0  fsubs 1, 3, 1
  030abd4  fsubs 2, 4, 2
  030abd8  bl 0x5e8338
  030abdc  nop
  030abe0  lis 3, 49
  030abe4  addic 5, 30, 404
  030abe8  addi 4, 3, -28536
  030abec  ori 3, 31, 0
  030abf0  lfs 2, 12(4)
  030abf4  lfs 3, 16(4)
  030abf8  lfs 4, 20(4)
  030abfc  bl 0xff2e8
  030ac00  nop
  030ac04  addic 3, 30, 428
  030ac08  bl 0x4fff60
  030ac0c  nop
  030ac10  ori 4, 3, 0
  030ac14  lbz 3, 356(30)
  030ac18  cmpwi 4, 0
  030ac1c  bt 2, 0x30ac5c
  030ac20  lis 4, 128
  030ac24  neg 3, 3
  030ac28  vspltisw 2, -1
  030ac2c  li 5, -2612
  030ac30  lis 6, 114
  030ac34  li 7, -3056
  030ac38  stb 3, 356(30)
  030ac3c  vslw 2, 2, 2
  030ac40  <unknown>
  030ac44  li 4, 428
  030ac48  <unknown>
  030ac4c  vmaddfp 2, 3, 4, 2
  030ac50  vctsxs 2, 2, 0
  030ac54  vspltw 2, 2, 0
  030ac58  stvewx 2, 4, 30
  030ac5c  clrlwi 3, 3, 24
  030ac60  cmpwi 3, 1
  030ac64  bf 2, 0x30ac8c
  030ac68  lwz 4, 368(30)
  030ac6c  addic 3, 1, 320
  030ac70  lwz 5, 0(4)
  030ac74  slwi 5, 5, 4
  030ac78  addc 4, 4, 5
  030ac7c  clrldi 4, 4, 32
  030ac80  bl 0x5e7e98
  030ac84  nop
  030ac88  b 0x30aca0
  030ac8c  lwz 4, 368(30)
  030ac90  addic 3, 1, 320
  030ac94  addic 4, 4, 16
  030ac98  bl 0x5e7e98
  030ac9c  nop
  030aca0  addic 29, 31, 16
  030aca4  addic 4, 1, 320
  030aca8  ori 3, 29, 0
  030acac  bl 0x5e8548
  030acb0  nop
  030acb4  lis 4, 114
  030acb8  lfs 2, 440(30)
  030acbc  fmr 30, 1
  030acc0  li 3, 30
  030acc4  lfs 1, -3052(4)
  030acc8  fmuls 29, 2, 1
  030accc  bl 0x5e7e18
  030acd0  nop
  030acd4  extsw 3, 3
  030acd8  std 3, 456(1)
  030acdc  lfd 1, 456(1)
  030ace0  fcfid 1, 1
  030ace4  frsp 1, 1
  030ace8  fmuls 1, 29, 1
  030acec  fcmpu 0, 30, 1
  030acf0  cror 6, 1, 2
  030acf4  bt 6, 0x30ad20
  030acf8  lis 3, 49
  030acfc  lis 4, 114
  030ad00  addi 3, 3, -28536
  030ad04  lfs 1, 92(3)
  030ad08  lfs 2, -3056(4)
  030ad0c  lfs 3, 440(30)
  030ad10  fmuls 1, 2, 1
  030ad14  fmuls 1, 1, 3
  030ad18  stfs 1, 440(30)
  030ad1c  b 0x30ad48
  030ad20  lis 3, 49
  030ad24  lis 5, 114
  030ad28  lfs 1, 444(30)
  030ad2c  addi 4, 3, -28536
  030ad30  addic 3, 30, 440
  030ad34  lfs 2, 48(4)
  030ad38  lfs 3, -3052(5)
  030ad3c  fmuls 2, 3, 2
  030ad40  bl 0x109af0
  030ad44  nop
  030ad48  addic 27, 1, 336
  030ad4c  addic 4, 1, 320
  030ad50  ori 3, 27, 0
  030ad54  ori 5, 29, 0
  030ad58  bl 0x5e81f0
  030ad5c  nop
  030ad60  ori 3, 27, 0
  030ad64  bl 0x5e8030
  030ad68  nop
  030ad6c  lis 3, 114
  030ad70  lfs 2, 440(30)
  030ad74  fmr 3, 1
  030ad78  lfs 1, -3052(3)
  030ad7c  fmuls 1, 2, 1
  030ad80  fcmpu 0, 3, 1
  030ad84  cror 6, 0, 2
  030ad88  bt 6, 0x30ad9c
  030ad8c  addic 3, 1, 336
  030ad90  ori 4, 3, 0
  030ad94  bl 0x5e7f98
  030ad98  nop
  030ad9c  ori 3, 29, 0
  030ada0  addic 5, 1, 336
  030ada4  ori 4, 29, 0
  030ada8  bl 0x5e7f54
  030adac  nop
  030adb0  lwz 3, 432(30)
  030adb4  ori 4, 29, 0
  030adb8  addic 3, 3, 16
  030adbc  bl 0x5e7e98
  030adc0  nop
  030adc4  lwz 3, 432(30)
  030adc8  lfs 1, 72(31)
  030adcc  stfs 1, 72(3)
  030add0  lwz 3, 432(30)
  030add4  bl 0xf30a0
  030add8  nop
  030addc  addic 3, 30, 400
  030ade0  bl 0x4fff60
  030ade4  nop
  030ade8  cmpwi 3, 0
  030adec  bt 2, 0x30ae2c
  030adf0  lbz 3, 82(31)
  030adf4  cmpwi 3, 12
  030adf8  bf 2, 0x30ae2c
  030adfc  lbz 3, 83(31)
  030ae00  cmpwi 3, 6
  030ae04  bt 2, 0x30ae2c
  030ae08  li 3, 5
  030ae0c  bl 0x5e7e18
  030ae10  nop
  030ae14  ori 6, 3, 0
  030ae18  ori 3, 31, 0
  030ae1c  li 4, 6
  030ae20  li 5, 0
  030ae24  bl 0xfddc0
  030ae28  nop
  030ae2c  lbz 3, 82(31)
  030ae30  cmpwi 3, 6
  030ae34  bf 2, 0x30b500
  030ae38  ori 3, 31, 0
  030ae3c  bl 0xefe40
  030ae40  nop
  030ae44  lis 3, 49
  030ae48  addi 3, 3, -28536
  030ae4c  lfs 2, 48(3)
  030ae50  fcmpu 0, 1, 2
  030ae54  bf 2, 0x30b030
  030ae58  addic 28, 28, 128
  030ae5c  addic 3, 1, 384
  030ae60  fmr 30, 31
  030ae64  ori 4, 28, 0
  030ae68  bl 0x5e7e98
  030ae6c  nop
  030ae70  lis 3, 49
  030ae74  li 4, 0
  030ae78  addi 5, 3, -28536
  030ae7c  ori 3, 28, 0
  030ae80  lfs 31, 52(5)
  030ae84  fmr 1, 31
  030ae88  bl 0xffb70
  030ae8c  nop
  030ae90  fcmpu 0, 1, 30
  030ae94  bt 2, 0x30aeb0
  030ae98  fmr 1, 31
  030ae9c  ori 3, 28, 0
  030aea0  li 4, 0
  030aea4  bl 0xffb70
  030aea8  nop
  030aeac  stfs 1, 392(1)
  030aeb0  addic 28, 1, 384
  030aeb4  ori 5, 29, 0
  030aeb8  ori 3, 28, 0
  030aebc  ori 4, 28, 0
  030aec0  bl 0x5e81f0
  030aec4  nop
  030aec8  ori 3, 28, 0
  030aecc  bl 0x5e8030
  030aed0  nop
  030aed4  fmr 2, 1
  030aed8  lis 3, 49
  030aedc  addi 3, 3, -28536
  030aee0  lfs 1, 56(3)
  030aee4  fcmpu 0, 2, 1
  030aee8  cror 6, 0, 2
  030aeec  bt 6, 0x30af48
  030aef0  addic 3, 1, 384
  030aef4  ori 4, 3, 0
  030aef8  bl 0x5e7f98
  030aefc  nop
  030af00  lis 3, 49
  030af04  addi 3, 3, -28536
  030af08  lfs 31, 60(3)
  030af0c  lfs 30, 44(3)
  030af10  fmr 1, 31
  030af14  fmr 2, 30
  030af18  bl 0xfcbe8
  030af1c  nop
  030af20  lfs 2, 384(1)
  030af24  fadds 3, 2, 1
  030af28  fmr 1, 31
  030af2c  fmr 2, 30
  030af30  stfs 3, 384(1)
  030af34  bl 0xfcbe8
  030af38  nop
  030af3c  lfs 2, 388(1)
  030af40  fadds 1, 2, 1
  030af44  stfs 1, 388(1)
  030af48  addic 28, 1, 384
  030af4c  ori 5, 29, 0
  030af50  ori 3, 28, 0
  030af54  ori 4, 28, 0
  030af58  bl 0x5e7f54
  030af5c  nop
  030af60  addic 29, 1, 352
  030af64  ori 3, 31, 0
  030af68  li 4, 9
  030af6c  ori 5, 29, 0
  030af70  bl 0xf1114
  030af74  nop
  030af78  addic 27, 1, 368
  030af7c  ori 4, 28, 0
  030af80  ori 3, 27, 0
  030af84  ori 5, 29, 0
  030af88  bl 0x5e81f0
  030af8c  nop
  030af90  lis 26, 128
  030af94  lis 25, 114
  030af98  ori 3, 27, 0
  030af9c  ori 4, 27, 0
  030afa0  lfs 1, -2640(26)
  030afa4  lfs 2, -3052(25)
  030afa8  fmuls 1, 1, 2
  030afac  bl 0x5e7f98
  030afb0  nop
  030afb4  lis 3, 128
  030afb8  lfs 1, -2640(26)
  030afbc  lis 4, 114
  030afc0  lfs 2, -3052(25)
  030afc4  addic 7, 1, 452
  030afc8  fmuls 1, 1, 2
  030afcc  lfs 3, -2632(3)
  030afd0  lfs 4, -3048(4)
  030afd4  ori 3, 29, 0
  030afd8  fmuls 2, 3, 4
  030afdc  ori 4, 28, 0
  030afe0  fneg 2, 2
  030afe4  bl 0x108180
  030afe8  nop
  030afec  ori 3, 31, 0
  030aff0  stfs 1, 376(1)
  030aff4  ori 4, 29, 0
  030aff8  ori 5, 27, 0
  030affc  bl 0x315198
  030b000  nop
  030b004  ori 29, 3, 0
  030b008  cmpwi 29, 0
  030b00c  bt 2, 0x30b500
  030b010  li 3, 180
  030b014  lwz 28, 120(29)
  030b018  bl 0x5e7e18
  030b01c  nop
  030b020  li 4, 1
  030b024  stw 3, 32(28)
  030b028  stb 4, 32(29)
  030b02c  b 0x30b500
  030b030  lbz 3, 112(31)
  030b034  rlwinm 3, 3, 0, 30, 30
  030b038  cmpwi 3, 0
  030b03c  bt 2, 0x30b500
  030b040  lbz 3, 83(31)
  030b044  cmpwi 3, 12
  030b048  bt 2, 0x30b070
  030b04c  li 3, 5
  030b050  bl 0x5e7e18
  030b054  nop
  030b058  ori 6, 3, 0
  030b05c  ori 3, 31, 0
  030b060  li 4, 12
  030b064  li 5, 0
  030b068  bl 0xfddc0
  030b06c  nop
  030b070  li 3, 30
  030b074  bl 0xfc620
  030b078  nop
  030b07c  extsw 3, 3
  030b080  lis 4, 114
  030b084  std 3, 456(1)
  030b088  lis 3, 128
  030b08c  lfs 1, -2628(3)
  030b090  lfs 2, -3056(4)
  030b094  lfd 3, 456(1)
  030b098  fcfid 3, 3
  030b09c  frsp 3, 3
  030b0a0  fadds 1, 1, 3
  030b0a4  fmuls 1, 2, 1
  030b0a8  bl 0x502758
  030b0ac  nop
  030b0b0  stw 3, 400(30)
  030b0b4  b 0x30b500
  030b0b8  lwz 3, 320(30)
  030b0bc  lwz 4, 304(30)
  030b0c0  lbz 5, 308(30)
  030b0c4  extsb 5, 5
  030b0c8  lwz 6, 0(3)
  030b0cc  addc 4, 4, 6
  030b0d0  lfs 1, 16(31)
  030b0d4  addc 29, 4, 5
  030b0d8  lfs 2, 20(31)
  030b0dc  divw 4, 29, 6
  030b0e0  mullw 4, 4, 6
  030b0e4  subc 29, 29, 4
  030b0e8  sldi 28, 29, 4
  030b0ec  addc 3, 3, 28
  030b0f0  clrldi 3, 3, 32
  030b0f4  lfs 3, 16(3)
  030b0f8  lfs 4, 20(3)
  030b0fc  fsubs 1, 3, 1
  030b100  fsubs 2, 4, 2
  030b104  bl 0x5e8338
  030b108  nop
  030b10c  lis 3, 49
  030b110  addic 5, 30, 404
  030b114  addi 27, 3, -28536
  030b118  ori 3, 31, 0
  030b11c  lfs 2, 12(27)
  030b120  lfs 3, 16(27)
  030b124  lfs 4, 96(27)
  030b128  bl 0xff2e8
  030b12c  nop
  030b130  lwz 3, 320(30)
  030b134  addic 26, 1, 400
  030b138  addc 4, 3, 28
  030b13c  ori 3, 26, 0
  030b140  addic 4, 4, 16
  030b144  clrldi 4, 4, 32
  030b148  bl 0x5e7e98
  030b14c  nop
  030b150  addic 4, 30, 208
  030b154  lfs 1, 44(27)
  030b158  addic 6, 1, 416
  030b15c  ori 3, 31, 0
  030b160  ori 5, 26, 0
  030b164  bl 0x101058
  030b168  nop
  030b16c  addic 28, 31, 16
  030b170  ori 4, 26, 0
  030b174  ori 3, 28, 0
  030b178  bl 0x5e8548
  030b17c  nop
  030b180  lfs 2, 20(27)
  030b184  fcmpu 0, 1, 2
  030b188  cror 6, 1, 2
  030b18c  bt 6, 0x30b1e0
  030b190  lwz 3, 320(30)
  030b194  lwz 3, 0(3)
  030b198  addic 3, 3, -1
  030b19c  cmpw 29, 3
  030b1a0  bf 2, 0x30b1e0
  030b1a4  li 3, 1
  030b1a8  lbz 4, 83(31)
  030b1ac  cmpwi 4, 12
  030b1b0  stb 3, 32(31)
  030b1b4  bt 2, 0x30b500
  030b1b8  li 3, 10
  030b1bc  bl 0x5e7e18
  030b1c0  nop
  030b1c4  ori 6, 3, 0
  030b1c8  ori 3, 31, 0
  030b1cc  li 4, 12
  030b1d0  li 5, 0
  030b1d4  bl 0xfddc0
  030b1d8  nop
  030b1dc  b 0x30b500
  030b1e0  ori 3, 28, 0
  030b1e4  addic 4, 1, 400
  030b1e8  bl 0x5e8548
  030b1ec  nop
  030b1f0  lis 3, 49
  030b1f4  addi 3, 3, -28536
  030b1f8  lfs 2, 52(3)
  030b1fc  fcmpu 0, 1, 2
  030b200  cror 6, 1, 2
  030b204  bt 6, 0x30b500
  030b208  lwz 3, 320(30)
  030b20c  lwz 3, 0(3)
  030b210  addic 3, 3, -1
  030b214  cmpw 29, 3
  030b218  bf 0, 0x30b500
  030b21c  stw 29, 304(30)
  030b220  b 0x30b500
  030b224  lbz 3, 82(31)
  030b228  cmpwi 3, 8
  030b22c  cmpwi 1, 3, 9
  030b230  bf 2, 0x30b278
  030b234  ori 3, 31, 0
  030b238  addic 4, 30, 112
  030b23c  bl 0x10b030
  030b240  nop
  030b244  rlwinm 3, 3, 0, 25, 25
  030b248  cmpwi 3, 0
  030b24c  bt 2, 0x30b500
  030b250  lbz 3, 83(31)
  030b254  cmpwi 3, 9
  030b258  bt 2, 0x30b500
  030b25c  ori 3, 31, 0
  030b260  li 4, 9
  030b264  li 5, 0
  030b268  li 6, 0
  030b26c  bl 0xfddc0
  030b270  nop
  030b274  b 0x30b500
  030b278  bf 6, 0x30b500
  030b27c  ori 3, 31, 0
  030b280  bl 0xefe40
  030b284  nop
  030b288  lis 3, 49
  030b28c  addi 3, 3, -28536
  030b290  lfs 2, 100(3)
  030b294  fcmpu 0, 1, 2
  030b298  bt 0, 0x30b500
  030b29c  li 3, 1
  030b2a0  lbz 4, 83(31)
  030b2a4  cmpwi 4, 12
  030b2a8  stb 3, 32(31)
  030b2ac  bt 2, 0x30b500
  030b2b0  li 3, 10
  030b2b4  bl 0x5e7e18
  030b2b8  nop
  030b2bc  ori 6, 3, 0
  030b2c0  ori 3, 31, 0
  030b2c4  li 4, 12
  030b2c8  li 5, 0
  030b2cc  bl 0xfddc0
  030b2d0  nop
  030b2d4  b 0x30b500
  030b2d8  ori 3, 31, 0
  030b2dc  addic 4, 30, 112
  030b2e0  bl 0x10b030
  030b2e4  nop
  030b2e8  rlwinm 3, 3, 0, 25, 25
  030b2ec  cmpwi 3, 0
  030b2f0  bt 2, 0x30b33c
  030b2f4  li 3, 8
  030b2f8  lbz 4, 83(31)
  030b2fc  cmpwi 4, 10
  030b300  stb 3, 32(31)
  030b304  bt 2, 0x30b500
  030b308  lis 3, 114
  030b30c  li 4, 10
  030b310  li 5, 0
  030b314  lfs 1, -3056(3)
  030b318  ori 3, 31, 0
  030b31c  fmuls 1, 1, 31
  030b320  fctiwz 1, 1
  030b324  stfd 1, 456(1)
  030b328  lwz 6, 460(1)
  030b32c  extsw 6, 6
  030b330  bl 0xfddc0
  030b334  nop
  030b338  b 0x30b500
  030b33c  lwz 4, 24(31)
  030b340  lis 3, 16856
  030b344  srawi 5, 4, 31
  030b348  srwi 6, 5, 1
  030b34c  xor 4, 6, 4
  030b350  subc 4, 4, 5
  030b354  cmpw 4, 3
  030b358  bf 0, 0x30b500
  030b35c  ori 3, 31, 0
  030b360  bl 0xefb38
  030b364  nop
  030b368  b 0x30b510
  030b36c  addic 3, 30, 400
  030b370  bl 0x4fff60
  030b374  nop
  030b378  ori 3, 31, 0
  030b37c  bl 0xefe40
  030b380  nop
  030b384  lis 3, 49
  030b388  addi 3, 3, -28536
  030b38c  lfs 2, 104(3)
  030b390  fcmpu 0, 1, 2
  030b394  bf 2, 0x30b500
  030b398  lis 30, 151
  030b39c  addic 3, 31, 16
  030b3a0  addic 30, 30, -25376
  030b3a4  addic 4, 30, 128
  030b3a8  bl 0x5e8588
  030b3ac  nop
  030b3b0  lis 3, 49
  030b3b4  addi 4, 3, -28536
  030b3b8  lbz 3, 83(31)
  030b3bc  lfs 2, 4(4)
  030b3c0  fcmpu 0, 1, 2
  030b3c4  cror 6, 1, 2
  030b3c8  bt 6, 0x30b438
  030b3cc  lfs 1, 24(31)
  030b3d0  lfs 2, 136(30)
  030b3d4  lis 4, 49
  030b3d8  fsubs 1, 1, 2
  030b3dc  addi 4, 4, -28536
  030b3e0  lfs 2, 84(4)
  030b3e4  fabs 1, 1
  030b3e8  fcmpu 0, 1, 2
  030b3ec  cror 6, 1, 2
  030b3f0  bt 6, 0x30b438
  030b3f4  li 4, 4
  030b3f8  cmpwi 3, 1
  030b3fc  stb 4, 32(31)
  030b400  bt 2, 0x30b510
  030b404  lis 3, 114
  030b408  li 4, 1
  030b40c  li 5, 5
  030b410  lfs 1, -3056(3)
  030b414  ori 3, 31, 0
  030b418  fmuls 1, 1, 31
  030b41c  fctiwz 1, 1
  030b420  stfd 1, 456(1)
  030b424  lwz 6, 460(1)
  030b428  extsw 6, 6
  030b42c  bl 0xfddc0
  030b430  nop
  030b434  b 0x30b510
  030b438  li 4, 1
  030b43c  cmpwi 3, 12
  030b440  stb 4, 32(31)
  030b444  bt 2, 0x30b510
  030b448  lis 3, 114
  030b44c  li 4, 12
  030b450  li 5, 5
  030b454  lfs 1, -3056(3)
  030b458  ori 3, 31, 0
  030b45c  fmuls 1, 1, 31
  030b460  fctiwz 1, 1
  030b464  stfd 1, 456(1)
  030b468  lwz 6, 460(1)
  030b46c  extsw 6, 6
  030b470  bl 0xfddc0
  030b474  nop
  030b478  b 0x30b510
  030b47c  ori 3, 31, 0
  030b480  addic 4, 30, 112
  030b484  bl 0x10b030
  030b488  nop
  030b48c  rlwinm 3, 3, 0, 25, 25
  030b490  cmpwi 3, 0
  030b494  bt 2, 0x30b4bc
  030b498  ori 3, 31, 0
  030b49c  li 4, 0
  030b4a0  li 5, -1
  030b4a4  bl 0xfd8d0
  030b4a8  nop
  030b4ac  ori 3, 31, 0
  030b4b0  bl 0xefb38
  030b4b4  nop
  030b4b8  b 0x30b510
  030b4bc  lwz 4, 24(31)
  030b4c0  lis 3, 16856
  030b4c4  srawi 5, 4, 31
  030b4c8  srwi 6, 5, 1
  030b4cc  xor 4, 6, 4
  030b4d0  subc 4, 4, 5
  030b4d4  cmpw 4, 3
  030b4d8  bf 0, 0x30b500
  030b4dc  ori 3, 31, 0
  030b4e0  li 4, 0
  030b4e4  li 5, -1
  030b4e8  bl 0xfd8d0
  030b4ec  nop
  030b4f0  ori 3, 31, 0
  030b4f4  bl 0xefb38
  030b4f8  nop
  030b4fc  b 0x30b510
  030b500  addic 4, 30, 96
  030b504  ori 3, 31, 0
  030b508  bl 0x10c9a0
  030b50c  nop
  030b510  ld 0, 576(1)
  030b514  mtlr 0
  030b518  lfd 29, 536(1)
  030b51c  lfd 30, 544(1)
  030b520  lfd 31, 552(1)
  030b524  ld 25, 480(1)
  030b528  ld 26, 488(1)
  030b52c  ld 27, 496(1)
  030b530  ld 28, 504(1)
  030b534  ld 29, 512(1)
  030b538  ld 30, 520(1)
  030b53c  ld 31, 528(1)
  030b540  addi 1, 1, 560
  030b544  blr
