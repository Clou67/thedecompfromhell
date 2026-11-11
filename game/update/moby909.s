# game/update/moby909.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M909_004a8d54:   # 0x4a8d54, 0x14 bytes
  04a8d54  lis 3, 143
  04a8d58  lis 4, 1
  04a8d5c  addic 3, 3, 16084
  04a8d60  stw 4, 72(3)
  04a8d64  blr

M909_004a8d68:   # 0x4a8d68, 0xf8 bytes
  04a8d68  stdu 1, -160(1)
  04a8d6c  mflr 0
  04a8d70  std 0, 176(1)
  04a8d74  std 31, 152(1)
  04a8d78  lis 4, 161
  04a8d7c  ori 31, 3, 0
  04a8d80  lwz 3, 1800(4)
  04a8d84  std 30, 144(1)
  04a8d88  std 29, 136(1)
  04a8d8c  std 28, 128(1)
  04a8d90  std 27, 120(1)
  04a8d94  cmpwi 3, 2
  04a8d98  bf 2, 0x4a8e3c
  04a8d9c  lis 3, 151
  04a8da0  lbz 3, -16268(3)
  04a8da4  cmpwi 3, 0
  04a8da8  bt 2, 0x4a8e3c
  04a8dac  lis 28, 150
  04a8db0  li 27, 0
  04a8db4  addic 28, 28, -12976
  04a8db8  lhz 3, 68(28)
  04a8dbc  extsh 4, 3
  04a8dc0  cmpwi 4, 0
  04a8dc4  bf 1, 0x4a8e3c
  04a8dc8  lis 29, 162
  04a8dcc  ori 30, 28, 0
  04a8dd0  addic 29, 29, -16512
  04a8dd4  lwz 4, 376(30)
  04a8dd8  lhz 5, 166(31)
  04a8ddc  extsh 5, 5
  04a8de0  lhz 6, 166(4)
  04a8de4  extsh 6, 6
  04a8de8  cmpw 6, 5
  04a8dec  bf 2, 0x4a8e28
  04a8df0  lbz 5, 1(29)
  04a8df4  cmpwi 5, 0
  04a8df8  bf 2, 0x4a8e28
  04a8dfc  ori 3, 4, 0
  04a8e00  li 4, 1
  04a8e04  ori 5, 29, 0
  04a8e08  bl 0xf0ea8
  04a8e0c  nop
  04a8e10  lis 4, 143
  04a8e14  lhz 3, 68(28)
  04a8e18  lfs 1, 16192(4)
  04a8e1c  stfs 1, 32(29)
  04a8e20  stfs 1, 36(29)
  04a8e24  stfs 1, 40(29)
  04a8e28  extsh 4, 3
  04a8e2c  addic 27, 27, 1
  04a8e30  addic 30, 30, 4
  04a8e34  cmpw 27, 4
  04a8e38  bt 0, 0x4a8dd4
  04a8e3c  ld 0, 176(1)
  04a8e40  mtlr 0
  04a8e44  ld 27, 120(1)
  04a8e48  ld 28, 128(1)
  04a8e4c  ld 29, 136(1)
  04a8e50  ld 30, 144(1)
  04a8e54  ld 31, 152(1)
  04a8e58  addi 1, 1, 160
  04a8e5c  blr

UpdateMoby_909:   # 0x4a8ec0, 0xea4 bytes
  04a8ec0  stdu 1, -336(1)
  04a8ec4  mflr 0
  04a8ec8  std 0, 352(1)
  04a8ecc  stfd 27, 296(1)
  04a8ed0  stfd 28, 304(1)
  04a8ed4  stfd 29, 312(1)
  04a8ed8  stfd 30, 320(1)
  04a8edc  stfd 31, 328(1)
  04a8ee0  std 31, 288(1)
  04a8ee4  lis 4, 161
  04a8ee8  ori 31, 3, 0
  04a8eec  std 30, 280(1)
  04a8ef0  lwz 4, 1800(4)
  04a8ef4  lwz 30, 120(3)
  04a8ef8  std 29, 272(1)
  04a8efc  std 28, 264(1)
  04a8f00  std 27, 256(1)
  04a8f04  std 26, 248(1)
  04a8f08  cmpwi 4, 2
  04a8f0c  bf 2, 0x4a8fac
  04a8f10  lis 3, 151
  04a8f14  lbz 3, -16268(3)
  04a8f18  cmpwi 3, 0
  04a8f1c  bt 2, 0x4a8fac
  04a8f20  lis 28, 150
  04a8f24  li 29, 0
  04a8f28  addic 28, 28, -12976
  04a8f2c  lhz 4, 68(28)
  04a8f30  extsh 3, 4
  04a8f34  cmpwi 3, 0
  04a8f38  bf 1, 0x4a8fac
  04a8f3c  lis 27, 162
  04a8f40  ori 26, 28, 0
  04a8f44  addic 27, 27, -16512
  04a8f48  lwz 3, 376(26)
  04a8f4c  lhz 5, 166(31)
  04a8f50  extsh 5, 5
  04a8f54  lhz 6, 166(3)
  04a8f58  extsh 6, 6
  04a8f5c  cmpw 6, 5
  04a8f60  bf 2, 0x4a8f98
  04a8f64  lbz 5, 1(27)
  04a8f68  cmpwi 5, 0
  04a8f6c  bf 2, 0x4a8f98
  04a8f70  li 4, 1
  04a8f74  ori 5, 27, 0
  04a8f78  bl 0xf0ea8
  04a8f7c  nop
  04a8f80  lis 3, 143
  04a8f84  lhz 4, 68(28)
  04a8f88  lfs 1, 16192(3)
  04a8f8c  stfs 1, 32(27)
  04a8f90  stfs 1, 36(27)
  04a8f94  stfs 1, 40(27)
  04a8f98  extsh 3, 4
  04a8f9c  addic 29, 29, 1
  04a8fa0  addic 26, 26, 4
  04a8fa4  cmpw 29, 3
  04a8fa8  bt 0, 0x4a8f48
  04a8fac  lbz 3, 32(31)
  04a8fb0  cmpwi 3, 0
  04a8fb4  cmpwi 1, 3, 2
  04a8fb8  cmpwi 6, 3, 1
  04a8fbc  cmpwi 7, 3, -1
  04a8fc0  bt 1, 0x4a8fcc
  04a8fc4  bf 29, 0x4a94ac
  04a8fc8  b 0x4a8fd8
  04a8fcc  bf 25, 0x4a90d0
  04a8fd0  bf 5, 0x4a927c
  04a8fd4  b 0x4a94ac
  04a8fd8  lis 3, 151
  04a8fdc  addic 4, 3, -15796
  04a8fe0  li 3, 1
  04a8fe4  ori 29, 3, 0
  04a8fe8  lwz 4, 332(4)
  04a8fec  cmpwi 4, 0
  04a8ff0  bf 2, 0x4a9014
  04a8ff4  lis 3, 75
  04a8ff8  lfs 1, 72(31)
  04a8ffc  addi 3, 3, -29088
  04a9000  lfs 2, 0(3)
  04a9004  bl 0x502578
  04a9008  nop
  04a900c  stfs 1, 72(31)
  04a9010  li 3, 0
  04a9014  lis 4, 151
  04a9018  stw 3, 320(30)
  04a901c  lis 5, 161
  04a9020  lbz 3, 176(31)
  04a9024  addic 5, 5, -13692
  04a9028  lwz 4, -25488(4)
  04a902c  addc 3, 3, 5
  04a9030  slwi 4, 4, 4
  04a9034  clrldi 3, 3, 32
  04a9038  extsw 4, 4
  04a903c  lbzx 3, 3, 4
  04a9040  cmpwi 3, 255
  04a9044  bf 2, 0x4a907c
  04a9048  lwz 3, 328(30)
  04a904c  cmpwi 3, -1
  04a9050  bt 2, 0x4a907c
  04a9054  lis 4, 164
  04a9058  slwi 3, 3, 8
  04a905c  lwz 4, -28512(4)
  04a9060  addc 3, 4, 3
  04a9064  clrldi 3, 3, 32
  04a9068  lhz 4, 166(3)
  04a906c  cmpwi 4, 1012
  04a9070  bf 2, 0x4a907c
  04a9074  lwz 3, 120(3)
  04a9078  stw 29, 140(3)
  04a907c  lis 3, 151
  04a9080  ori 4, 30, 0
  04a9084  addic 5, 3, -25376
  04a9088  ori 3, 31, 0
  04a908c  lwz 5, 8320(5)
  04a9090  ld 5, 56(5)
  04a9094  stb 29, 32(31)
  04a9098  std 5, 56(31)
  04a909c  bl 0x4d3720
  04a90a0  nop
  04a90a4  ori 3, 31, 0
  04a90a8  bl 0x106308
  04a90ac  nop
  04a90b0  lis 3, 151
  04a90b4  addic 3, 3, -16064
  04a90b8  lbz 3, 2(3)
  04a90bc  cmpwi 3, 0
  04a90c0  bt 2, 0x4a94ac
  04a90c4  li 3, -1
  04a90c8  sth 3, 54(30)
  04a90cc  b 0x4a94ac
  04a90d0  lis 4, 151
  04a90d4  addic 4, 4, -16064
  04a90d8  lbz 3, 2(4)
  04a90dc  cmpwi 3, 0
  04a90e0  bt 2, 0x4a91cc
  04a90e4  lwz 3, 324(30)
  04a90e8  cmpwi 3, -1
  04a90ec  bt 2, 0x4a91cc
  04a90f0  lis 5, 164
  04a90f4  slwi 3, 3, 8
  04a90f8  lwz 5, -28512(5)
  04a90fc  addc 3, 5, 3
  04a9100  clrldi 3, 3, 32
  04a9104  lhz 5, 166(3)
  04a9108  cmpwi 5, 997
  04a910c  bf 2, 0x4a91cc
  04a9110  lbz 5, 32(3)
  04a9114  cmpwi 5, 0
  04a9118  bf 2, 0x4a91cc
  04a911c  li 5, 1
  04a9120  lis 6, 164
  04a9124  stb 5, 32(3)
  04a9128  lwz 3, 324(30)
  04a912c  lwz 5, -28512(6)
  04a9130  slwi 3, 3, 8
  04a9134  lis 6, 165
  04a9138  addc 3, 5, 3
  04a913c  addic 6, 6, 14692
  04a9140  clrldi 3, 3, 32
  04a9144  lbz 7, 176(3)
  04a9148  lhz 3, 178(3)
  04a914c  addic 7, 7, 2
  04a9150  extsh 3, 3
  04a9154  stbx 7, 6, 3
  04a9158  lwz 3, 324(30)
  04a915c  slwi 3, 3, 8
  04a9160  addc 5, 5, 3
  04a9164  clrldi 5, 5, 32
  04a9168  lbz 3, 176(5)
  04a916c  cmpwi 3, 255
  04a9170  bt 2, 0x4a91b4
  04a9174  lis 6, 162
  04a9178  addic 6, 6, 704
  04a917c  lbzx 6, 3, 6
  04a9180  cmpwi 6, 255
  04a9184  bt 2, 0x4a91cc
  04a9188  lis 6, 151
  04a918c  lis 7, 161
  04a9190  addic 7, 7, -13692
  04a9194  lwz 6, -25488(6)
  04a9198  addc 7, 3, 7
  04a919c  slwi 6, 6, 4
  04a91a0  clrldi 7, 7, 32
  04a91a4  extsw 6, 6
  04a91a8  lbzx 6, 7, 6
  04a91ac  cmpwi 6, 255
  04a91b0  bf 2, 0x4a91cc
  04a91b4  lis 6, 165
  04a91b8  lhz 5, 178(5)
  04a91bc  addic 3, 3, 2
  04a91c0  addic 6, 6, 17860
  04a91c4  extsh 5, 5
  04a91c8  stbx 3, 6, 5
  04a91cc  lbz 3, 2(4)
  04a91d0  cmpwi 3, 0
  04a91d4  bt 2, 0x4a9208
  04a91d8  lis 3, 151
  04a91dc  lis 4, 161
  04a91e0  lbz 5, 176(31)
  04a91e4  addic 4, 4, -13692
  04a91e8  lwz 3, -25488(3)
  04a91ec  addc 4, 5, 4
  04a91f0  slwi 3, 3, 4
  04a91f4  clrldi 4, 4, 32
  04a91f8  extsw 3, 3
  04a91fc  lbzx 3, 4, 3
  04a9200  cmpwi 3, 255
  04a9204  bt 2, 0x4a94ac
  04a9208  ori 3, 31, 0
  04a920c  ori 4, 30, 0
  04a9210  bl 0x4d3870
  04a9214  nop
  04a9218  cmpwi 3, 0
  04a921c  bt 2, 0x4a94ac
  04a9220  lwz 3, 320(30)
  04a9224  cmpwi 3, 0
  04a9228  bf 2, 0x4a9250
  04a922c  lis 3, 75
  04a9230  lfs 1, 72(31)
  04a9234  addi 3, 3, -29088
  04a9238  lfs 2, 0(3)
  04a923c  bl 0x502578
  04a9240  nop
  04a9244  li 3, 1
  04a9248  stfs 1, 72(31)
  04a924c  stw 3, 320(30)
  04a9250  lis 3, 75
  04a9254  addi 4, 3, -29088
  04a9258  ori 3, 31, 0
  04a925c  lfs 1, 4(4)
  04a9260  bl 0x119488
  04a9264  nop
  04a9268  li 3, 2
  04a926c  li 4, 0
  04a9270  stb 3, 32(31)
  04a9274  stw 4, 88(31)
  04a9278  b 0x4a94ac
  04a927c  lis 3, 161
  04a9280  lwz 3, 1800(3)
  04a9284  cmpwi 3, 2
  04a9288  bt 2, 0x4a94ac
  04a928c  lis 3, 16256
  04a9290  lhz 4, 4(30)
  04a9294  cmpwi 4, 2
  04a9298  stw 3, 88(31)
  04a929c  bt 2, 0x4a9318
  04a92a0  lbz 3, 176(31)
  04a92a4  bl 0xf1e50
  04a92a8  nop
  04a92ac  lwz 3, 328(30)
  04a92b0  cmpwi 3, -1
  04a92b4  bt 2, 0x4a92e4
  04a92b8  lis 4, 164
  04a92bc  slwi 3, 3, 8
  04a92c0  lwz 4, -28512(4)
  04a92c4  addc 3, 4, 3
  04a92c8  clrldi 3, 3, 32
  04a92cc  lhz 4, 166(3)
  04a92d0  cmpwi 4, 1012
  04a92d4  bf 2, 0x4a92e4
  04a92d8  lwz 3, 120(3)
  04a92dc  li 4, 1
  04a92e0  stw 4, 140(3)
  04a92e4  lwz 3, 332(30)
  04a92e8  cmpwi 3, -1
  04a92ec  bt 2, 0x4a9318
  04a92f0  lis 4, 165
  04a92f4  slwi 3, 3, 7
  04a92f8  lwz 4, 7128(4)
  04a92fc  addc 3, 4, 3
  04a9300  addic 4, 3, 48
  04a9304  addic 5, 3, 112
  04a9308  clrldi 3, 4, 32
  04a930c  clrldi 4, 5, 32
  04a9310  bl 0x151e70
  04a9314  nop
  04a9318  li 3, 1
  04a931c  stb 3, 32(31)
  04a9320  lhz 3, 4(30)
  04a9324  cmpwi 3, 2
  04a9328  bf 2, 0x4a94ac
  04a932c  li 3, 2
  04a9330  li 4, 1
  04a9334  bl 0x112e18
  04a9338  nop
  04a933c  li 3, 3015
  04a9340  li 4, -1
  04a9344  bl 0x112a38
  04a9348  nop
  04a934c  lwz 3, 324(30)
  04a9350  cmpwi 3, -1
  04a9354  bt 2, 0x4a9434
  04a9358  lis 4, 164
  04a935c  slwi 3, 3, 8
  04a9360  lwz 4, -28512(4)
  04a9364  addc 3, 4, 3
  04a9368  clrldi 3, 3, 32
  04a936c  lhz 4, 166(3)
  04a9370  cmpwi 4, 997
  04a9374  bf 2, 0x4a9434
  04a9378  lbz 4, 32(3)
  04a937c  cmpwi 4, 0
  04a9380  bf 2, 0x4a9434
  04a9384  li 4, 1
  04a9388  lis 5, 164
  04a938c  stb 4, 32(3)
  04a9390  lwz 3, 324(30)
  04a9394  lwz 4, -28512(5)
  04a9398  slwi 3, 3, 8
  04a939c  lis 5, 165
  04a93a0  addc 3, 4, 3
  04a93a4  addic 5, 5, 14692
  04a93a8  clrldi 3, 3, 32
  04a93ac  lbz 6, 176(3)
  04a93b0  lhz 3, 178(3)
  04a93b4  addic 6, 6, 2
  04a93b8  extsh 3, 3
  04a93bc  stbx 6, 5, 3
  04a93c0  lwz 3, 324(30)
  04a93c4  slwi 3, 3, 8
  04a93c8  addc 4, 4, 3
  04a93cc  clrldi 4, 4, 32
  04a93d0  lbz 3, 176(4)
  04a93d4  cmpwi 3, 255
  04a93d8  bt 2, 0x4a941c
  04a93dc  lis 5, 162
  04a93e0  addic 5, 5, 704
  04a93e4  lbzx 5, 3, 5
  04a93e8  cmpwi 5, 255
  04a93ec  bt 2, 0x4a9434
  04a93f0  lis 5, 151
  04a93f4  lis 6, 161
  04a93f8  addic 6, 6, -13692
  04a93fc  lwz 5, -25488(5)
  04a9400  addc 6, 3, 6
  04a9404  slwi 5, 5, 4
  04a9408  clrldi 6, 6, 32
  04a940c  extsw 5, 5
  04a9410  lbzx 5, 6, 5
  04a9414  cmpwi 5, 255
  04a9418  bf 2, 0x4a9434
  04a941c  lis 5, 165
  04a9420  lhz 4, 178(4)
  04a9424  addic 3, 3, 2
  04a9428  addic 5, 5, 17860
  04a942c  extsh 4, 4
  04a9430  stbx 3, 5, 4
  04a9434  lwz 3, 332(30)
  04a9438  cmpwi 3, -1
  04a943c  bt 2, 0x4a9468
  04a9440  lis 4, 165
  04a9444  slwi 3, 3, 7
  04a9448  lwz 4, 7128(4)
  04a944c  addc 3, 4, 3
  04a9450  addic 4, 3, 48
  04a9454  addic 5, 3, 112
  04a9458  clrldi 3, 4, 32
  04a945c  clrldi 4, 5, 32
  04a9460  bl 0x151e70
  04a9464  nop
  04a9468  li 3, 0
  04a946c  li 4, -1
  04a9470  bl 0xe8aa4
  04a9474  nop
  04a9478  lis 3, 165
  04a947c  lwz 4, 332(30)
  04a9480  li 6, 1
  04a9484  li 5, 0
  04a9488  slwi 4, 4, 7
  04a948c  lwz 3, 7128(3)
  04a9490  addc 3, 3, 4
  04a9494  addic 4, 3, 48
  04a9498  addic 7, 3, 112
  04a949c  clrldi 3, 4, 32
  04a94a0  clrldi 4, 7, 32
  04a94a4  bl 0xa0c38
  04a94a8  nop
  04a94ac  lis 3, 75
  04a94b0  lbz 4, 83(31)
  04a94b4  addi 3, 3, -29088
  04a94b8  cmpwi 4, 0
  04a94bc  lfs 31, 8(3)
  04a94c0  bf 2, 0x4a9cc0
  04a94c4  lis 29, 151
  04a94c8  lfs 2, 20(31)
  04a94cc  lfs 1, 16(31)
  04a94d0  addic 29, 29, -25376
  04a94d4  lis 3, 75
  04a94d8  lfs 3, 132(29)
  04a94dc  lfs 4, 128(29)
  04a94e0  fsubs 3, 2, 3
  04a94e4  fsubs 4, 1, 4
  04a94e8  addi 3, 3, -29088
  04a94ec  fmuls 3, 3, 3
  04a94f0  fmadds 3, 4, 4, 3
  04a94f4  lfs 4, 12(3)
  04a94f8  fsqrts 3, 3
  04a94fc  fcmpu 0, 3, 4
  04a9500  cror 6, 1, 2
  04a9504  bt 6, 0x4a9774
  04a9508  lfs 3, 208(29)
  04a950c  lfs 4, 212(29)
  04a9510  lis 3, 75
  04a9514  fsubs 1, 3, 1
  04a9518  fsubs 2, 4, 2
  04a951c  addi 3, 3, -29088
  04a9520  lis 4, 115
  04a9524  addic 4, 4, 22784
  04a9528  fabs 5, 1
  04a952c  fabs 6, 2
  04a9530  stfs 1, 136(1)
  04a9534  stfs 2, 140(1)
  04a9538  lfs 3, 72(31)
  04a953c  fsubs 1, 5, 6
  04a9540  stfs 1, 144(1)
  04a9544  lwz 5, 136(1)
  04a9548  lfs 4, 16(3)
  04a954c  lfs 1, 136(1)
  04a9550  lwz 3, 140(1)
  04a9554  lfs 2, 140(1)
  04a9558  fabs 1, 1
  04a955c  lwz 6, 144(1)
  04a9560  rlwinm 3, 3, 3, 29, 29
  04a9564  fabs 7, 2
  04a9568  lfs 2, 144(1)
  04a956c  rlwimi 3, 6, 2, 30, 30
  04a9570  fsub 8, 2, 4
  04a9574  rlwimi 3, 5, 4, 28, 28
  04a9578  fsub 9, 2, 4
  04a957c  ori 5, 4, 0
  04a9580  rlwimi 5, 3, 2, 26, 28
  04a9584  slwi 3, 3, 2
  04a9588  clrldi 5, 5, 32
  04a958c  fsel 6, 8, 1, 6
  04a9590  lfsx 1, 4, 3
  04a9594  lfs 2, 4(5)
  04a9598  fsel 5, 9, 7, 5
  04a959c  fcmpu 0, 6, 4
  04a95a0  bt 1, 0x4a95a8
  04a95a4  b 0x4a96c8
  04a95a8  fsubs 7, 5, 6
  04a95ac  fadds 5, 5, 6
  04a95b0  addic 3, 1, 16
  04a95b4  li 6, 2
  04a95b8  addic 5, 3, 212
  04a95bc  addic 4, 3, 196
  04a95c0  mtctr 6
  04a95c4  fdivs 5, 7, 5
  04a95c8  fmuls 6, 5, 5
  04a95cc  stfs 5, 224(1)
  04a95d0  stfs 5, 216(1)
  04a95d4  stfs 5, 220(1)
  04a95d8  stfs 5, 212(1)
  04a95dc  lfs 8, 224(1)
  04a95e0  lfs 9, 216(1)
  04a95e4  lfs 10, 220(1)
  04a95e8  fmuls 7, 6, 6
  04a95ec  fmuls 9, 9, 6
  04a95f0  fmuls 8, 8, 7
  04a95f4  fmuls 5, 7, 7
  04a95f8  fmuls 7, 10, 7
  04a95fc  stfs 9, 216(1)
  04a9600  fmuls 6, 8, 6
  04a9604  stfs 7, 220(1)
  04a9608  stfs 6, 224(1)
  04a960c  lfs 6, 196(3)
  04a9610  fmuls 6, 6, 5
  04a9614  stfs 6, 212(3)
  04a9618  lfs 6, 4(4)
  04a961c  addic 4, 4, 8
  04a9620  fmuls 6, 6, 5
  04a9624  addic 3, 3, 8
  04a9628  stfs 6, 4(5)
  04a962c  addic 5, 5, 8
  04a9630  bdnz 0x4a960c
  04a9634  li 5, 4
  04a9638  ori 3, 1, 0
  04a963c  mtctr 5
  04a9640  lis 4, 115
  04a9644  addic 5, 3, 212
  04a9648  addic 4, 4, 22752
  04a964c  ori 7, 5, 0
  04a9650  lfs 5, 212(3)
  04a9654  lfs 6, 0(4)
  04a9658  fmuls 5, 5, 6
  04a965c  lfs 6, 4(4)
  04a9660  addic 4, 4, 8
  04a9664  stfs 5, 212(3)
  04a9668  lfs 5, 4(5)
  04a966c  addic 3, 3, 8
  04a9670  fmuls 5, 5, 6
  04a9674  stfs 5, 4(5)
  04a9678  addic 5, 5, 8
  04a967c  bdnz 0x4a9650
  04a9680  ori 3, 1, 0
  04a9684  mtctr 6
  04a9688  lfs 5, 212(3)
  04a968c  fadds 4, 4, 5
  04a9690  addic 3, 3, 16
  04a9694  lfs 5, 4(7)
  04a9698  lfs 6, 8(7)
  04a969c  lfs 7, 12(7)
  04a96a0  addic 7, 7, 16
  04a96a4  fadds 4, 4, 5
  04a96a8  fadds 4, 4, 6
  04a96ac  fadds 4, 4, 7
  04a96b0  bdnz 0x4a9688
  04a96b4  lis 3, 75
  04a96b8  addi 3, 3, -29088
  04a96bc  lfs 5, 20(3)
  04a96c0  fadds 4, 4, 5
  04a96c4  fmadds 4, 4, 1, 2
  04a96c8  fmr 1, 3
  04a96cc  fmr 2, 4
  04a96d0  bl 0x5026a0
  04a96d4  nop
  04a96d8  lis 3, 75
  04a96dc  addi 3, 3, -29088
  04a96e0  lfs 2, 24(3)
  04a96e4  fcmpu 0, 1, 2
  04a96e8  cror 6, 1, 2
  04a96ec  bt 6, 0x4a9774
  04a96f0  lfs 1, 260(29)
  04a96f4  lfs 2, 256(29)
  04a96f8  fmuls 1, 1, 1
  04a96fc  lfs 3, 264(29)
  04a9700  lis 3, 75
  04a9704  addi 3, 3, -29088
  04a9708  fmadds 1, 2, 2, 1
  04a970c  lfs 2, 28(3)
  04a9710  fmadds 1, 3, 3, 1
  04a9714  fsqrts 1, 1
  04a9718  fcmpu 0, 1, 2
  04a971c  cror 6, 0, 2
  04a9720  bt 6, 0x4a9764
  04a9724  lis 3, 75
  04a9728  vspltisw 2, -1
  04a972c  li 5, 32
  04a9730  addi 3, 3, -29088
  04a9734  lis 4, 114
  04a9738  li 6, -3056
  04a973c  vslw 2, 2, 2
  04a9740  <unknown>
  04a9744  li 3, 356
  04a9748  vspltw 3, 3, 0
  04a974c  <unknown>
  04a9750  vmaddfp 2, 4, 3, 2
  04a9754  vctsxs 2, 2, 0
  04a9758  vspltw 2, 2, 0
  04a975c  stvewx 2, 3, 30
  04a9760  b 0x4a97a8
  04a9764  addic 3, 30, 356
  04a9768  bl 0x4fff60
  04a976c  nop
  04a9770  b 0x4a97a8
  04a9774  lwz 3, 356(30)
  04a9778  cmpwi 3, 0
  04a977c  bt 2, 0x4a97a8
  04a9780  li 3, 0
  04a9784  stw 3, 356(30)
  04a9788  lfs 1, 208(29)
  04a978c  stfs 1, 336(30)
  04a9790  lfs 1, 212(29)
  04a9794  stfs 1, 340(30)
  04a9798  lfs 1, 216(29)
  04a979c  stfs 1, 344(30)
  04a97a0  lfs 1, 220(29)
  04a97a4  stfs 1, 348(30)
  04a97a8  addic 3, 30, 360
  04a97ac  bl 0x4fff60
  04a97b0  nop
  04a97b4  cmpwi 3, 0
  04a97b8  bt 2, 0x4a9870
  04a97bc  lis 3, 75
  04a97c0  addi 28, 3, -29088
  04a97c4  lfs 1, 36(28)
  04a97c8  lfs 2, 40(28)
  04a97cc  bl 0xfcbe8
  04a97d0  nop
  04a97d4  lis 3, 114
  04a97d8  lfs 2, -3056(3)
  04a97dc  fmuls 1, 1, 2
  04a97e0  bl 0x502758
  04a97e4  nop
  04a97e8  stw 3, 360(30)
  04a97ec  lfs 1, 44(28)
  04a97f0  lfs 30, 72(31)
  04a97f4  lfs 2, 48(28)
  04a97f8  bl 0xfcbe8
  04a97fc  nop
  04a9800  lfs 29, 52(28)
  04a9804  fmuls 2, 1, 29
  04a9808  fmr 1, 30
  04a980c  bl 0x502578
  04a9810  nop
  04a9814  fmr 30, 1
  04a9818  lfs 1, 16(28)
  04a981c  lfs 2, 56(28)
  04a9820  bl 0xfcbe8
  04a9824  nop
  04a9828  fmuls 3, 1, 29
  04a982c  lfs 1, 60(28)
  04a9830  addic 3, 30, 336
  04a9834  fmr 2, 30
  04a9838  bl 0xfe610
  04a983c  nop
  04a9840  lfs 1, 336(30)
  04a9844  lfs 2, 16(31)
  04a9848  fadds 1, 1, 2
  04a984c  lfs 2, 340(30)
  04a9850  lfs 3, 344(30)
  04a9854  stfs 1, 336(30)
  04a9858  lfs 1, 20(31)
  04a985c  fadds 1, 2, 1
  04a9860  stfs 1, 340(30)
  04a9864  lfs 1, 24(31)
  04a9868  fadds 1, 3, 1
  04a986c  stfs 1, 344(30)
  04a9870  lwz 3, 356(30)
  04a9874  cmpwi 3, 0
  04a9878  bt 2, 0x4a9898
  04a987c  lis 3, 75
  04a9880  lfs 30, 208(29)
  04a9884  lfs 29, 212(29)
  04a9888  addi 3, 3, -29088
  04a988c  lfs 28, 216(29)
  04a9890  lfs 31, 64(3)
  04a9894  b 0x4a98a4
  04a9898  lfs 30, 336(30)
  04a989c  lfs 29, 340(30)
  04a98a0  lfs 28, 344(30)
  04a98a4  lfs 1, 16(31)
  04a98a8  lis 3, 75
  04a98ac  lfs 2, 20(31)
  04a98b0  fsubs 30, 30, 1
  04a98b4  fsubs 29, 29, 2
  04a98b8  addi 3, 3, -29088
  04a98bc  lis 29, 115
  04a98c0  addic 29, 29, 22784
  04a98c4  lfs 1, 68(3)
  04a98c8  fabs 3, 30
  04a98cc  fabs 4, 29
  04a98d0  stfs 30, 124(1)
  04a98d4  stfs 29, 128(1)
  04a98d8  lfs 5, 24(31)
  04a98dc  fadds 1, 5, 1
  04a98e0  fsubs 2, 3, 4
  04a98e4  fsubs 28, 28, 1
  04a98e8  stfs 2, 132(1)
  04a98ec  lwz 4, 124(1)
  04a98f0  lfs 27, 16(3)
  04a98f4  lfs 2, 124(1)
  04a98f8  lwz 3, 128(1)
  04a98fc  lfs 1, 128(1)
  04a9900  fabs 2, 2
  04a9904  lwz 5, 132(1)
  04a9908  rlwinm 3, 3, 3, 29, 29
  04a990c  fabs 5, 1
  04a9910  lfs 1, 132(1)
  04a9914  rlwimi 3, 5, 2, 30, 30
  04a9918  fsub 6, 1, 27
  04a991c  fsub 7, 1, 27
  04a9920  rlwimi 3, 4, 4, 28, 28
  04a9924  ori 4, 29, 0
  04a9928  rlwimi 4, 3, 2, 26, 28
  04a992c  slwi 3, 3, 2
  04a9930  clrldi 4, 4, 32
  04a9934  fsel 4, 6, 2, 4
  04a9938  lfsx 1, 29, 3
  04a993c  fsel 3, 7, 5, 3
  04a9940  lfs 2, 4(4)
  04a9944  fcmpu 0, 4, 27
  04a9948  bt 1, 0x4a9954
  04a994c  fmr 1, 27
  04a9950  b 0x4a9a78
  04a9954  fsubs 5, 3, 4
  04a9958  fadds 3, 3, 4
  04a995c  addic 3, 1, 16
  04a9960  li 6, 2
  04a9964  addic 4, 3, 164
  04a9968  addic 5, 3, 180
  04a996c  mtctr 6
  04a9970  fdivs 3, 5, 3
  04a9974  fmuls 4, 3, 3
  04a9978  stfs 3, 192(1)
  04a997c  stfs 3, 184(1)
  04a9980  stfs 3, 188(1)
  04a9984  stfs 3, 180(1)
  04a9988  lfs 6, 192(1)
  04a998c  lfs 7, 184(1)
  04a9990  lfs 8, 188(1)
  04a9994  fmuls 5, 4, 4
  04a9998  fmuls 7, 7, 4
  04a999c  fmuls 6, 6, 5
  04a99a0  fmuls 3, 5, 5
  04a99a4  fmuls 5, 8, 5
  04a99a8  stfs 7, 184(1)
  04a99ac  fmuls 4, 6, 4
  04a99b0  stfs 5, 188(1)
  04a99b4  stfs 4, 192(1)
  04a99b8  lfs 4, 164(3)
  04a99bc  fmuls 4, 4, 3
  04a99c0  stfs 4, 180(3)
  04a99c4  lfs 4, 4(4)
  04a99c8  addic 3, 3, 8
  04a99cc  addic 4, 4, 8
  04a99d0  fmuls 4, 4, 3
  04a99d4  stfs 4, 4(5)
  04a99d8  addic 5, 5, 8
  04a99dc  bdnz 0x4a99b8
  04a99e0  li 5, 4
  04a99e4  ori 3, 1, 0
  04a99e8  mtctr 5
  04a99ec  lis 4, 115
  04a99f0  addic 5, 3, 180
  04a99f4  addic 4, 4, 22752
  04a99f8  ori 7, 5, 0
  04a99fc  lfs 3, 180(3)
  04a9a00  lfs 4, 0(4)
  04a9a04  fmuls 3, 3, 4
  04a9a08  lfs 4, 4(4)
  04a9a0c  addic 4, 4, 8
  04a9a10  stfs 3, 180(3)
  04a9a14  lfs 3, 4(5)
  04a9a18  addic 3, 3, 8
  04a9a1c  fmuls 3, 3, 4
  04a9a20  stfs 3, 4(5)
  04a9a24  addic 5, 5, 8
  04a9a28  bdnz 0x4a99fc
  04a9a2c  fmr 3, 27
  04a9a30  ori 3, 1, 0
  04a9a34  mtctr 6
  04a9a38  lfs 4, 180(3)
  04a9a3c  fadds 3, 3, 4
  04a9a40  addic 3, 3, 16
  04a9a44  lfs 4, 4(7)
  04a9a48  lfs 5, 8(7)
  04a9a4c  lfs 6, 12(7)
  04a9a50  addic 7, 7, 16
  04a9a54  fadds 3, 3, 4
  04a9a58  fadds 3, 3, 5
  04a9a5c  fadds 3, 3, 6
  04a9a60  bdnz 0x4a9a38
  04a9a64  lis 3, 75
  04a9a68  addi 3, 3, -29088
  04a9a6c  lfs 4, 20(3)
  04a9a70  fadds 3, 3, 4
  04a9a74  fmadds 1, 3, 1, 2
  04a9a78  lfs 2, 72(31)
  04a9a7c  bl 0x5025e0
  04a9a80  nop
  04a9a84  fmuls 2, 29, 29
  04a9a88  stfs 28, 116(1)
  04a9a8c  fabs 4, 28
  04a9a90  fmadds 2, 30, 30, 2
  04a9a94  fsqrts 2, 2
  04a9a98  lwz 3, 116(1)
  04a9a9c  lfs 3, 116(1)
  04a9aa0  rlwinm 3, 3, 3, 29, 29
  04a9aa4  fabs 3, 3
  04a9aa8  fabs 5, 2
  04a9aac  stfs 2, 112(1)
  04a9ab0  fsubs 2, 5, 4
  04a9ab4  stfs 2, 120(1)
  04a9ab8  lwz 4, 112(1)
  04a9abc  lfs 2, 112(1)
  04a9ac0  lwz 5, 120(1)
  04a9ac4  lfs 6, 120(1)
  04a9ac8  fabs 2, 2
  04a9acc  rlwimi 3, 5, 2, 30, 30
  04a9ad0  fsub 7, 6, 27
  04a9ad4  fsub 6, 6, 27
  04a9ad8  rlwimi 3, 4, 4, 28, 28
  04a9adc  ori 4, 29, 0
  04a9ae0  rlwimi 4, 3, 2, 26, 28
  04a9ae4  slwi 3, 3, 2
  04a9ae8  clrldi 4, 4, 32
  04a9aec  fsel 4, 7, 2, 4
  04a9af0  lfsx 30, 29, 3
  04a9af4  lfs 2, 4(4)
  04a9af8  fsel 3, 6, 3, 5
  04a9afc  fcmpu 0, 4, 27
  04a9b00  bt 1, 0x4a9b08
  04a9b04  b 0x4a9c28
  04a9b08  fsubs 5, 3, 4
  04a9b0c  fadds 3, 3, 4
  04a9b10  addic 3, 1, 16
  04a9b14  li 6, 2
  04a9b18  addic 5, 3, 148
  04a9b1c  addic 4, 3, 132
  04a9b20  mtctr 6
  04a9b24  fdivs 3, 5, 3
  04a9b28  fmuls 4, 3, 3
  04a9b2c  stfs 3, 160(1)
  04a9b30  stfs 3, 152(1)
  04a9b34  stfs 3, 156(1)
  04a9b38  stfs 3, 148(1)
  04a9b3c  lfs 6, 160(1)
  04a9b40  lfs 7, 152(1)
  04a9b44  lfs 8, 156(1)
  04a9b48  fmuls 5, 4, 4
  04a9b4c  fmuls 7, 7, 4
  04a9b50  fmuls 6, 6, 5
  04a9b54  fmuls 3, 5, 5
  04a9b58  fmuls 5, 8, 5
  04a9b5c  stfs 7, 152(1)
  04a9b60  fmuls 4, 6, 4
  04a9b64  stfs 5, 156(1)
  04a9b68  stfs 4, 160(1)
  04a9b6c  lfs 4, 132(3)
  04a9b70  fmuls 4, 4, 3
  04a9b74  stfs 4, 148(3)
  04a9b78  lfs 4, 4(4)
  04a9b7c  addic 4, 4, 8
  04a9b80  fmuls 4, 4, 3
  04a9b84  addic 3, 3, 8
  04a9b88  stfs 4, 4(5)
  04a9b8c  addic 5, 5, 8
  04a9b90  bdnz 0x4a9b6c
  04a9b94  li 5, 4
  04a9b98  ori 3, 1, 0
  04a9b9c  mtctr 5
  04a9ba0  lis 4, 115
  04a9ba4  addic 5, 3, 148
  04a9ba8  addic 4, 4, 22752
  04a9bac  ori 7, 5, 0
  04a9bb0  lfs 3, 148(3)
  04a9bb4  lfs 4, 0(4)
  04a9bb8  fmuls 3, 3, 4
  04a9bbc  lfs 4, 4(4)
  04a9bc0  addic 4, 4, 8
  04a9bc4  stfs 3, 148(3)
  04a9bc8  lfs 3, 4(5)
  04a9bcc  addic 3, 3, 8
  04a9bd0  fmuls 3, 3, 4
  04a9bd4  stfs 3, 4(5)
  04a9bd8  addic 5, 5, 8
  04a9bdc  bdnz 0x4a9bb0
  04a9be0  ori 3, 1, 0
  04a9be4  mtctr 6
  04a9be8  lfs 3, 148(3)
  04a9bec  lfs 4, 4(7)
  04a9bf0  fadds 3, 27, 3
  04a9bf4  lfs 5, 8(7)
  04a9bf8  addic 3, 3, 16
  04a9bfc  lfs 27, 12(7)
  04a9c00  addic 7, 7, 16
  04a9c04  fadds 3, 3, 4
  04a9c08  fadds 3, 3, 5
  04a9c0c  fadds 27, 3, 27
  04a9c10  bdnz 0x4a9be8
  04a9c14  lis 3, 75
  04a9c18  addi 3, 3, -29088
  04a9c1c  lfs 3, 20(3)
  04a9c20  fadds 27, 27, 3
  04a9c24  fmadds 27, 27, 30, 2
  04a9c28  lis 3, 75
  04a9c2c  fneg 27, 27
  04a9c30  addi 3, 3, -29088
  04a9c34  lfs 2, 24(3)
  04a9c38  fcmpu 0, 1, 2
  04a9c3c  cror 6, 0, 2
  04a9c40  bt 6, 0x4a9c4c
  04a9c44  fmr 1, 2
  04a9c48  b 0x4a9c68
  04a9c4c  lis 3, 75
  04a9c50  addi 3, 3, -29088
  04a9c54  lfs 2, 72(3)
  04a9c58  fcmpu 0, 1, 2
  04a9c5c  cror 6, 1, 2
  04a9c60  bt 6, 0x4a9c68
  04a9c64  fmr 1, 2
  04a9c68  lis 3, 75
  04a9c6c  addi 3, 3, -29088
  04a9c70  lfs 2, 76(3)
  04a9c74  fcmpu 0, 27, 2
  04a9c78  cror 6, 0, 2
  04a9c7c  bt 6, 0x4a9c88
  04a9c80  fmr 27, 2
  04a9c84  b 0x4a9ca4
  04a9c88  lis 3, 75
  04a9c8c  addi 3, 3, -29088
  04a9c90  lfs 2, 80(3)
  04a9c94  fcmpu 0, 27, 2
  04a9c98  cror 6, 1, 2
  04a9c9c  bt 6, 0x4a9ca4
  04a9ca0  fmr 27, 2
  04a9ca4  lis 3, 75
  04a9ca8  addi 3, 3, -29088
  04a9cac  lfs 2, 84(3)
  04a9cb0  stfs 27, 164(30)
  04a9cb4  fmuls 1, 1, 2
  04a9cb8  stfs 1, 168(30)
  04a9cbc  stfs 1, 296(30)
  04a9cc0  lis 3, 151
  04a9cc4  lbz 3, -16268(3)
  04a9cc8  cmpwi 3, 0
  04a9ccc  bt 2, 0x4a9cd8
  04a9cd0  lis 3, 16432
  04a9cd4  stw 3, 176(30)
  04a9cd8  lis 3, 75
  04a9cdc  lis 29, 114
  04a9ce0  addi 5, 3, -29088
  04a9ce4  addic 4, 30, 64
  04a9ce8  ori 3, 31, 0
  04a9cec  lfs 30, 88(5)
  04a9cf0  lfs 2, -3060(29)
  04a9cf4  li 5, 1
  04a9cf8  fmuls 1, 2, 31
  04a9cfc  fmuls 2, 2, 30
  04a9d00  bl 0x1167c8
  04a9d04  nop
  04a9d08  lfs 2, -3060(29)
  04a9d0c  addic 4, 30, 192
  04a9d10  fmuls 1, 2, 31
  04a9d14  ori 3, 31, 0
  04a9d18  fmuls 2, 2, 30
  04a9d1c  li 5, 0
  04a9d20  bl 0x1167c8
  04a9d24  nop
  04a9d28  ld 0, 352(1)
  04a9d2c  mtlr 0
  04a9d30  lfd 27, 296(1)
  04a9d34  lfd 28, 304(1)
  04a9d38  lfd 29, 312(1)
  04a9d3c  lfd 30, 320(1)
  04a9d40  lfd 31, 328(1)
  04a9d44  ld 26, 248(1)
  04a9d48  ld 27, 256(1)
  04a9d4c  ld 28, 264(1)
  04a9d50  ld 29, 272(1)
  04a9d54  ld 30, 280(1)
  04a9d58  ld 31, 288(1)
  04a9d5c  addi 1, 1, 336
  04a9d60  blr
