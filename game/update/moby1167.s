# game/update/moby1167.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1167_001e8fb4:   # 0x1e8fb4, 0x14 bytes
  01e8fb4  lis 3, 118
  01e8fb8  lis 4, 1
  01e8fbc  addic 3, 3, 23204
  01e8fc0  stw 4, 72(3)
  01e8fc4  blr

M1167_001e8fd0:   # 0x1e8fd0, 0x198 bytes
  01e8fd0  stdu 1, -144(1)
  01e8fd4  mflr 0
  01e8fd8  std 0, 160(1)
  01e8fdc  stfd 31, 136(1)
  01e8fe0  std 31, 128(1)
  01e8fe4  lis 4, 31
  01e8fe8  ori 31, 3, 0
  01e8fec  addi 5, 4, -28728
  01e8ff0  li 6, 0
  01e8ff4  std 30, 120(1)
  01e8ff8  lis 4, 51
  01e8ffc  lwz 30, 120(31)
  01e9000  lfs 31, 0(5)
  01e9004  li 5, 0
  01e9008  stw 6, 116(1)
  01e900c  bl 0x10675c
  01e9010  nop
  01e9014  cmpwi 3, 0
  01e9018  bt 2, 0x1e904c
  01e901c  lwz 4, 32(3)
  01e9020  cmpwi 4, 0
  01e9024  bt 2, 0x1e904c
  01e9028  lhz 4, 166(4)
  01e902c  lhz 5, 166(31)
  01e9030  cmpwi 1, 4, 880
  01e9034  extsh 4, 4
  01e9038  extsh 5, 5
  01e903c  cmpw 4, 5
  01e9040  bt 2, 0x1e9048
  01e9044  bf 6, 0x1e904c
  01e9048  li 3, 0
  01e904c  ori 4, 3, 0
  01e9050  addic 5, 30, 32
  01e9054  li 6, 0
  01e9058  addic 7, 1, 112
  01e905c  li 9, 0
  01e9060  addic 8, 1, 116
  01e9064  ori 3, 31, 0
  01e9068  li 10, 4
  01e906c  bl 0x106840
  01e9070  nop
  01e9074  lwz 4, 112(1)
  01e9078  cmpwi 4, 1
  01e907c  bt 2, 0x1e9134
  01e9080  lbz 4, 32(31)
  01e9084  cmpwi 4, 4
  01e9088  bt 2, 0x1e9134
  01e908c  lfs 1, 32(30)
  01e9090  lfs 2, 116(1)
  01e9094  lhz 4, 52(31)
  01e9098  fsubs 1, 1, 2
  01e909c  fcmpu 0, 1, 31
  01e90a0  stfs 1, 32(30)
  01e90a4  cror 6, 0, 2
  01e90a8  bt 6, 0x1e90f0
  01e90ac  cmpwi 3, 2
  01e90b0  bt 1, 0x1e90c8
  01e90b4  cmpwi 3, -1
  01e90b8  bf 1, 0x1e9124
  01e90bc  cmpwi 3, 0
  01e90c0  bf 1, 0x1e9124
  01e90c4  b 0x1e90f0
  01e90c8  cmpwi 3, 10
  01e90cc  bt 1, 0x1e9124
  01e90d0  cmpwi 3, 8
  01e90d4  bf 1, 0x1e90e4
  01e90d8  li 3, 100
  01e90dc  stb 3, 103(30)
  01e90e0  b 0x1e9124
  01e90e4  li 3, 200
  01e90e8  stb 3, 103(30)
  01e90ec  b 0x1e9124
  01e90f0  li 3, 0
  01e90f4  ori 7, 4, 0
  01e90f8  li 5, 4
  01e90fc  rlwimi 7, 3, 0, 19, 19
  01e9100  li 6, 240
  01e9104  ori 3, 31, 0
  01e9108  stb 5, 32(31)
  01e910c  sth 7, 52(31)
  01e9110  li 4, 0
  01e9114  li 5, -1
  01e9118  stb 6, 103(30)
  01e911c  bl 0xfd8d0
  01e9120  nop
  01e9124  addic 4, 30, 96
  01e9128  ori 3, 31, 0
  01e912c  bl 0x10c808
  01e9130  nop
  01e9134  li 5, 255
  01e9138  addic 4, 30, 96
  01e913c  ori 3, 31, 0
  01e9140  stb 5, 164(31)
  01e9144  bl 0x10c9a0
  01e9148  nop
  01e914c  ld 0, 160(1)
  01e9150  mtlr 0
  01e9154  lfd 31, 136(1)
  01e9158  ld 30, 120(1)
  01e915c  ld 31, 128(1)
  01e9160  addi 1, 1, 144
  01e9164  blr

UpdateMoby_1167:   # 0x1e91a0, 0x814 bytes
  01e91a0  stdu 1, -304(1)
  01e91a4  mflr 0
  01e91a8  std 0, 320(1)
  01e91ac  stfd 31, 296(1)
  01e91b0  std 31, 288(1)
  01e91b4  std 30, 280(1)
  01e91b8  ori 31, 3, 0
  01e91bc  std 29, 272(1)
  01e91c0  lwz 30, 120(31)
  01e91c4  bl 0x1e8fd0
  01e91c8  lbz 3, 32(31)
  01e91cc  cmpwi 3, 4
  01e91d0  bt 2, 0x1e9924
  01e91d4  cmpwi 3, 3
  01e91d8  bt 2, 0x1e92d4
  01e91dc  cmpwi 3, 2
  01e91e0  bt 2, 0x1e9294
  01e91e4  cmpwi 3, 1
  01e91e8  bt 2, 0x1e9264
  01e91ec  cmpwi 3, 0
  01e91f0  bf 2, 0x1e9994
  01e91f4  lwz 3, 116(30)
  01e91f8  cmpwi 3, -1
  01e91fc  bf 2, 0x1e9228
  01e9200  lis 3, 101
  01e9204  lhz 4, 178(31)
  01e9208  addic 3, 3, 18784
  01e920c  extsh 4, 4
  01e9210  bl 0x5cd098
  01e9214  nop
  01e9218  ori 3, 31, 0
  01e921c  bl 0xefb38
  01e9220  nop
  01e9224  b 0x1e9994
  01e9228  li 4, 0
  01e922c  lwz 6, 112(30)
  01e9230  li 3, 1
  01e9234  li 5, 3
  01e9238  lfs 1, 24(31)
  01e923c  subc 4, 4, 6
  01e9240  subc 3, 3, 5
  01e9244  cntlzw 4, 4
  01e9248  stfs 1, 132(30)
  01e924c  sldi 4, 4, 58
  01e9250  sradi 4, 4, 63
  01e9254  and 3, 4, 3
  01e9258  addc 3, 5, 3
  01e925c  stb 3, 32(31)
  01e9260  b 0x1e9994
  01e9264  lis 3, 118
  01e9268  lfs 1, 132(30)
  01e926c  lis 4, 241
  01e9270  lfs 2, 23312(3)
  01e9274  fadds 1, 1, 2
  01e9278  stfs 1, 24(31)
  01e927c  lwz 3, -29176(4)
  01e9280  cmpwi 3, 0
  01e9284  bt 2, 0x1e9994
  01e9288  li 3, 2
  01e928c  stb 3, 32(31)
  01e9290  b 0x1e9994
  01e9294  lis 3, 31
  01e9298  lfs 1, 132(30)
  01e929c  lis 4, 114
  01e92a0  addi 29, 3, -28312
  01e92a4  addic 3, 31, 24
  01e92a8  lfs 2, 0(29)
  01e92ac  lfs 3, -3052(4)
  01e92b0  fmuls 2, 3, 2
  01e92b4  bl 0x109af0
  01e92b8  nop
  01e92bc  lfs 2, 4(29)
  01e92c0  fcmpu 0, 1, 2
  01e92c4  bf 2, 0x1e9994
  01e92c8  li 3, 3
  01e92cc  stb 3, 32(31)
  01e92d0  b 0x1e9994
  01e92d4  lis 3, 31
  01e92d8  lis 4, 114
  01e92dc  addi 29, 3, -28312
  01e92e0  lis 3, 118
  01e92e4  lfs 31, 8(29)
  01e92e8  lfs 2, 23316(3)
  01e92ec  lfs 1, 120(30)
  01e92f0  fmuls 2, 2, 31
  01e92f4  lfs 3, -3052(4)
  01e92f8  fmuls 2, 2, 3
  01e92fc  bl 0x502578
  01e9300  nop
  01e9304  lfs 2, 128(30)
  01e9308  stfs 1, 120(30)
  01e930c  fmuls 2, 2, 31
  01e9310  bl 0x502578
  01e9314  nop
  01e9318  lfs 2, 12(29)
  01e931c  lfs 3, 16(29)
  01e9320  fsubs 2, 2, 1
  01e9324  fsubs 3, 3, 1
  01e9328  lfs 5, 20(29)
  01e932c  lis 3, 165
  01e9330  fsub 4, 1, 2
  01e9334  fsel 1, 4, 2, 1
  01e9338  lfs 2, 24(29)
  01e933c  fsub 4, 3, 1
  01e9340  fsel 1, 4, 3, 1
  01e9344  lfs 3, 28(29)
  01e9348  lwz 4, 116(30)
  01e934c  lwz 3, 7128(3)
  01e9350  slwi 4, 4, 7
  01e9354  lfs 6, 32(29)
  01e9358  addc 3, 3, 4
  01e935c  lfs 8, 16(31)
  01e9360  clrldi 3, 3, 32
  01e9364  fmuls 4, 1, 1
  01e9368  lfs 9, 20(31)
  01e936c  fmuls 7, 4, 1
  01e9370  fmuls 10, 4, 7
  01e9374  fmadds 1, 7, 5, 1
  01e9378  lfs 5, 16(3)
  01e937c  lfs 7, 20(3)
  01e9380  lfs 11, 48(3)
  01e9384  fmuls 12, 4, 10
  01e9388  fmadds 1, 10, 2, 1
  01e938c  lfs 2, 52(3)
  01e9390  lis 3, 115
  01e9394  addic 3, 3, 22784
  01e9398  fmuls 4, 4, 12
  01e939c  fmadds 1, 12, 3, 1
  01e93a0  fmadds 1, 4, 6, 1
  01e93a4  fmadds 3, 5, 1, 11
  01e93a8  fmadds 1, 7, 1, 2
  01e93ac  fsubs 2, 3, 8
  01e93b0  fsubs 1, 1, 9
  01e93b4  fabs 3, 2
  01e93b8  fabs 4, 1
  01e93bc  stfs 2, 224(1)
  01e93c0  stfs 1, 228(1)
  01e93c4  fsubs 1, 3, 4
  01e93c8  stfs 1, 232(1)
  01e93cc  lwz 4, 224(1)
  01e93d0  lfs 31, 4(29)
  01e93d4  lfs 1, 224(1)
  01e93d8  lwz 5, 228(1)
  01e93dc  lfs 2, 228(1)
  01e93e0  fabs 1, 1
  01e93e4  lwz 6, 232(1)
  01e93e8  rlwinm 5, 5, 3, 29, 29
  01e93ec  lfs 5, 232(1)
  01e93f0  fabs 2, 2
  01e93f4  rlwimi 5, 6, 2, 30, 30
  01e93f8  fsub 6, 5, 31
  01e93fc  fsub 5, 5, 31
  01e9400  rlwimi 5, 4, 4, 28, 28
  01e9404  ori 4, 3, 0
  01e9408  rlwimi 4, 5, 2, 26, 28
  01e940c  slwi 5, 5, 2
  01e9410  clrldi 4, 4, 32
  01e9414  fsel 4, 6, 1, 4
  01e9418  lfsx 1, 3, 5
  01e941c  fsel 3, 5, 2, 3
  01e9420  lfs 2, 4(4)
  01e9424  fcmpu 0, 4, 31
  01e9428  bt 1, 0x1e9434
  01e942c  fmr 1, 31
  01e9430  b 0x1e9558
  01e9434  fsubs 5, 3, 4
  01e9438  fadds 3, 3, 4
  01e943c  addic 3, 1, 16
  01e9440  li 6, 2
  01e9444  addic 4, 3, 220
  01e9448  addic 5, 3, 236
  01e944c  mtctr 6
  01e9450  fdivs 3, 5, 3
  01e9454  fmuls 4, 3, 3
  01e9458  stfs 3, 248(1)
  01e945c  stfs 3, 240(1)
  01e9460  stfs 3, 244(1)
  01e9464  stfs 3, 236(1)
  01e9468  lfs 6, 248(1)
  01e946c  lfs 7, 240(1)
  01e9470  lfs 8, 244(1)
  01e9474  fmuls 5, 4, 4
  01e9478  fmuls 7, 7, 4
  01e947c  fmuls 6, 6, 5
  01e9480  fmuls 3, 5, 5
  01e9484  fmuls 5, 8, 5
  01e9488  stfs 7, 240(1)
  01e948c  fmuls 4, 6, 4
  01e9490  stfs 5, 244(1)
  01e9494  stfs 4, 248(1)
  01e9498  lfs 4, 220(3)
  01e949c  fmuls 4, 4, 3
  01e94a0  stfs 4, 236(3)
  01e94a4  lfs 4, 4(4)
  01e94a8  addic 3, 3, 8
  01e94ac  addic 4, 4, 8
  01e94b0  fmuls 4, 4, 3
  01e94b4  stfs 4, 4(5)
  01e94b8  addic 5, 5, 8
  01e94bc  bdnz 0x1e9498
  01e94c0  li 5, 4
  01e94c4  ori 3, 1, 0
  01e94c8  mtctr 5
  01e94cc  lis 4, 115
  01e94d0  addic 5, 3, 236
  01e94d4  addic 4, 4, 22752
  01e94d8  ori 7, 5, 0
  01e94dc  lfs 3, 236(3)
  01e94e0  lfs 4, 0(4)
  01e94e4  fmuls 3, 3, 4
  01e94e8  lfs 4, 4(4)
  01e94ec  addic 4, 4, 8
  01e94f0  stfs 3, 236(3)
  01e94f4  lfs 3, 4(5)
  01e94f8  addic 3, 3, 8
  01e94fc  fmuls 3, 3, 4
  01e9500  stfs 3, 4(5)
  01e9504  addic 5, 5, 8
  01e9508  bdnz 0x1e94dc
  01e950c  fmr 3, 31
  01e9510  ori 3, 1, 0
  01e9514  mtctr 6
  01e9518  lfs 4, 236(3)
  01e951c  fadds 3, 3, 4
  01e9520  addic 3, 3, 16
  01e9524  lfs 4, 4(7)
  01e9528  lfs 5, 8(7)
  01e952c  lfs 6, 12(7)
  01e9530  addic 7, 7, 16
  01e9534  fadds 3, 3, 4
  01e9538  fadds 3, 3, 5
  01e953c  fadds 3, 3, 6
  01e9540  bdnz 0x1e9518
  01e9544  lis 3, 31
  01e9548  addi 3, 3, -28312
  01e954c  lfs 4, 36(3)
  01e9550  fadds 3, 3, 4
  01e9554  fmadds 1, 3, 1, 2
  01e9558  lis 3, 161
  01e955c  lis 4, 118
  01e9560  lwz 3, 1808(3)
  01e9564  lwz 4, 23340(4)
  01e9568  divw 5, 3, 4
  01e956c  mullw 4, 5, 4
  01e9570  stfs 1, 72(31)
  01e9574  subc 3, 3, 4
  01e9578  cmpwi 3, 0
  01e957c  bf 2, 0x1e9994
  01e9580  li 3, 3
  01e9584  bl 0xfc620
  01e9588  nop
  01e958c  cmpwi 3, 0
  01e9590  bt 1, 0x1e95a0
  01e9594  cmpwi 3, -1
  01e9598  bf 1, 0x1e9708
  01e959c  b 0x1e95ac
  01e95a0  cmpwi 3, 1
  01e95a4  bf 1, 0x1e9624
  01e95a8  b 0x1e9708
  01e95ac  lfs 3, 228(31)
  01e95b0  lfs 2, 224(31)
  01e95b4  fmuls 1, 3, 3
  01e95b8  lfs 4, 232(31)
  01e95bc  lis 3, 118
  01e95c0  lfs 6, 23328(3)
  01e95c4  fmadds 1, 2, 2, 1
  01e95c8  fmadds 1, 4, 4, 1
  01e95cc  fsqrts 1, 1
  01e95d0  fcmpu 0, 1, 31
  01e95d4  bf 2, 0x1e95ec
  01e95d8  fmr 1, 31
  01e95dc  lfs 6, 236(31)
  01e95e0  fmr 2, 1
  01e95e4  fmr 3, 2
  01e95e8  b 0x1e9604
  01e95ec  fdivs 1, 6, 1
  01e95f0  lfs 6, 236(31)
  01e95f4  fmr 5, 3
  01e95f8  fmuls 3, 2, 1
  01e95fc  fmuls 2, 5, 1
  01e9600  fmuls 1, 4, 1
  01e9604  stfs 3, 192(1)
  01e9608  fmr 8, 1
  01e960c  stfs 2, 196(1)
  01e9610  fmr 7, 2
  01e9614  stfs 6, 204(1)
  01e9618  stfs 1, 200(1)
  01e961c  fmr 6, 3
  01e9620  b 0x1e97ec
  01e9624  lfs 3, 228(31)
  01e9628  lfs 2, 224(31)
  01e962c  fmuls 1, 3, 3
  01e9630  lfs 4, 232(31)
  01e9634  lis 3, 118
  01e9638  fmadds 1, 2, 2, 1
  01e963c  fmadds 6, 4, 4, 1
  01e9640  lfs 1, 23332(3)
  01e9644  fsqrts 6, 6
  01e9648  fcmpu 0, 6, 31
  01e964c  bf 2, 0x1e9664
  01e9650  fmr 8, 31
  01e9654  lfs 6, 236(31)
  01e9658  fmr 7, 8
  01e965c  fmr 1, 7
  01e9660  b 0x1e9678
  01e9664  fdivs 8, 1, 6
  01e9668  lfs 6, 236(31)
  01e966c  fmuls 1, 2, 8
  01e9670  fmuls 7, 3, 8
  01e9674  fmuls 8, 4, 8
  01e9678  lfs 2, 212(31)
  01e967c  lfs 3, 208(31)
  01e9680  fmuls 4, 2, 2
  01e9684  lfs 5, 216(31)
  01e9688  lis 3, 118
  01e968c  lfs 9, 23324(3)
  01e9690  stfs 7, 196(1)
  01e9694  fmadds 4, 3, 3, 4
  01e9698  stfs 8, 200(1)
  01e969c  stfs 6, 204(1)
  01e96a0  stfs 1, 192(1)
  01e96a4  fmadds 4, 5, 5, 4
  01e96a8  fsqrts 4, 4
  01e96ac  fdivs 6, 9, 4
  01e96b0  fsub 9, 31, 4
  01e96b4  fsub 10, 31, 4
  01e96b8  fsub 11, 31, 4
  01e96bc  fsub 12, 4, 31
  01e96c0  fsub 13, 4, 31
  01e96c4  fsub 4, 4, 31
  01e96c8  fmuls 5, 5, 6
  01e96cc  fmuls 2, 2, 6
  01e96d0  fmuls 3, 3, 6
  01e96d4  fsel 6, 9, 31, 5
  01e96d8  fsel 9, 10, 31, 2
  01e96dc  fsel 10, 11, 31, 3
  01e96e0  fsel 5, 12, 6, 5
  01e96e4  fsel 2, 13, 9, 2
  01e96e8  fsel 6, 4, 10, 3
  01e96ec  fadds 8, 8, 5
  01e96f0  fadds 7, 7, 2
  01e96f4  fadds 6, 1, 6
  01e96f8  stfs 8, 200(1)
  01e96fc  stfs 7, 196(1)
  01e9700  stfs 6, 192(1)
  01e9704  b 0x1e97ec
  01e9708  lfs 3, 228(31)
  01e970c  lfs 2, 224(31)
  01e9710  fmuls 1, 3, 3
  01e9714  lfs 4, 232(31)
  01e9718  lis 3, 118
  01e971c  lfs 6, 23332(3)
  01e9720  fmadds 1, 2, 2, 1
  01e9724  fmadds 1, 4, 4, 1
  01e9728  fsqrts 1, 1
  01e972c  fcmpu 0, 1, 31
  01e9730  bf 2, 0x1e9748
  01e9734  fmr 8, 31
  01e9738  lfs 6, 236(31)
  01e973c  fmr 7, 8
  01e9740  fmr 1, 7
  01e9744  b 0x1e975c
  01e9748  fdivs 8, 6, 1
  01e974c  lfs 6, 236(31)
  01e9750  fmuls 1, 2, 8
  01e9754  fmuls 7, 3, 8
  01e9758  fmuls 8, 4, 8
  01e975c  lfs 2, 212(31)
  01e9760  lfs 3, 208(31)
  01e9764  fmuls 4, 2, 2
  01e9768  lfs 5, 216(31)
  01e976c  lis 3, 118
  01e9770  lfs 9, 23324(3)
  01e9774  stfs 7, 196(1)
  01e9778  fmadds 4, 3, 3, 4
  01e977c  stfs 8, 200(1)
  01e9780  stfs 6, 204(1)
  01e9784  fneg 6, 9
  01e9788  stfs 1, 192(1)
  01e978c  fmadds 4, 5, 5, 4
  01e9790  fsqrts 4, 4
  01e9794  fdivs 6, 6, 4
  01e9798  fsub 9, 31, 4
  01e979c  fsub 10, 31, 4
  01e97a0  fsub 11, 31, 4
  01e97a4  fsub 12, 4, 31
  01e97a8  fsub 13, 4, 31
  01e97ac  fsub 4, 4, 31
  01e97b0  fmuls 5, 5, 6
  01e97b4  fmuls 2, 2, 6
  01e97b8  fmuls 3, 3, 6
  01e97bc  fsel 6, 9, 31, 5
  01e97c0  fsel 9, 10, 31, 2
  01e97c4  fsel 10, 11, 31, 3
  01e97c8  fsel 5, 12, 6, 5
  01e97cc  fsel 2, 13, 9, 2
  01e97d0  fsel 6, 4, 10, 3
  01e97d4  fadds 8, 8, 5
  01e97d8  fadds 7, 7, 2
  01e97dc  fadds 6, 1, 6
  01e97e0  stfs 8, 200(1)
  01e97e4  stfs 7, 196(1)
  01e97e8  stfs 6, 192(1)
  01e97ec  lfs 4, 196(31)
  01e97f0  lfs 3, 192(31)
  01e97f4  fmuls 1, 4, 4
  01e97f8  lfs 5, 200(31)
  01e97fc  lis 3, 118
  01e9800  fmadds 1, 3, 3, 1
  01e9804  fmadds 2, 5, 5, 1
  01e9808  lfs 1, 23320(3)
  01e980c  fsqrts 2, 2
  01e9810  fcmpu 0, 2, 31
  01e9814  bf 2, 0x1e982c
  01e9818  fmr 2, 31
  01e981c  lfs 1, 204(31)
  01e9820  fmr 3, 2
  01e9824  fmr 4, 3
  01e9828  b 0x1e9844
  01e982c  fdivs 2, 1, 2
  01e9830  lfs 1, 204(31)
  01e9834  fmr 9, 4
  01e9838  fmuls 4, 3, 2
  01e983c  fmuls 3, 9, 2
  01e9840  fmuls 2, 5, 2
  01e9844  fmuls 5, 3, 3
  01e9848  lis 3, 118
  01e984c  lis 4, 114
  01e9850  fadds 6, 6, 4
  01e9854  fadds 7, 7, 3
  01e9858  lfs 9, 23336(3)
  01e985c  lfs 10, -3052(4)
  01e9860  lfs 11, 16(31)
  01e9864  fmadds 5, 4, 4, 5
  01e9868  lfs 12, 20(31)
  01e986c  lfs 13, 24(31)
  01e9870  stfs 4, 208(1)
  01e9874  stfs 3, 212(1)
  01e9878  stfs 2, 216(1)
  01e987c  stfs 1, 220(1)
  01e9880  fmuls 1, 9, 10
  01e9884  fmadds 5, 2, 2, 5
  01e9888  fadds 8, 8, 2
  01e988c  fadds 6, 6, 11
  01e9890  fadds 7, 7, 12
  01e9894  addic 4, 1, 208
  01e9898  fsqrts 5, 5
  01e989c  ori 5, 31, 0
  01e98a0  li 6, 1
  01e98a4  stfs 6, 192(1)
  01e98a8  stfs 7, 196(1)
  01e98ac  addic 3, 1, 192
  01e98b0  fadds 8, 8, 13
  01e98b4  stfs 8, 200(1)
  01e98b8  fdivs 1, 1, 5
  01e98bc  fsub 6, 31, 5
  01e98c0  fsub 7, 31, 5
  01e98c4  fsub 8, 31, 5
  01e98c8  fsub 9, 5, 31
  01e98cc  fsub 10, 5, 31
  01e98d0  fsub 5, 5, 31
  01e98d4  fmuls 4, 4, 1
  01e98d8  fmuls 3, 3, 1
  01e98dc  fmuls 1, 2, 1
  01e98e0  fsel 2, 6, 31, 4
  01e98e4  fsel 6, 7, 31, 3
  01e98e8  fsel 7, 8, 31, 1
  01e98ec  fsel 2, 9, 2, 4
  01e98f0  fsel 3, 10, 6, 3
  01e98f4  fsel 1, 5, 7, 1
  01e98f8  stfs 2, 208(1)
  01e98fc  stfs 3, 212(1)
  01e9900  stfs 1, 216(1)
  01e9904  bl 0x49fba0
  01e9908  nop
  01e990c  li 4, 224
  01e9910  li 5, 224
  01e9914  li 6, 224
  01e9918  bl 0xf1ec8
  01e991c  nop
  01e9920  b 0x1e9994
  01e9924  lis 3, 31
  01e9928  li 7, -1
  01e992c  addi 3, 3, -28312
  01e9930  li 6, 1
  01e9934  li 11, 0
  01e9938  addic 4, 30, 64
  01e993c  addic 5, 31, 16
  01e9940  lfs 1, 4(3)
  01e9944  lfs 4, 48(3)
  01e9948  li 8, 5
  01e994c  lfs 3, 40(3)
  01e9950  li 9, 2
  01e9954  lfs 5, 44(3)
  01e9958  li 10, 4
  01e995c  lfs 7, 52(3)
  01e9960  fmr 2, 1
  01e9964  std 7, 144(1)
  01e9968  ori 3, 31, 0
  01e996c  std 6, 160(1)
  01e9970  fmr 6, 4
  01e9974  std 6, 168(1)
  01e9978  std 7, 176(1)
  01e997c  std 11, 184(1)
  01e9980  bl 0x10e030
  01e9984  nop
  01e9988  ori 3, 31, 0
  01e998c  bl 0xefb38
  01e9990  nop
  01e9994  ld 0, 320(1)
  01e9998  mtlr 0
  01e999c  lfd 31, 296(1)
  01e99a0  ld 29, 272(1)
  01e99a4  ld 30, 280(1)
  01e99a8  ld 31, 288(1)
  01e99ac  addi 1, 1, 304
  01e99b0  blr
