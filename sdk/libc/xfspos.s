# sdk/libc/xfspos.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Fspos:   # 0x5c9568, 0x430 bytes
  05c9568  mfcr 12
  05c956c  stdu 1, -176(1)
  05c9570  std 25, 120(1)
  05c9574  std 26, 128(1)
  05c9578  std 27, 136(1)
  05c957c  std 28, 144(1)
  05c9580  std 30, 160(1)
  05c9584  std 31, 168(1)
  05c9588  std 24, 112(1)
  05c958c  std 29, 152(1)
  05c9590  mr 31, 3
  05c9594  mr 26, 4
  05c9598  mr 25, 3
  05c959c  mr 30, 5
  05c95a0  mr 27, 6
  05c95a4  clrldi 28, 3, 32
  05c95a8  stw 12, 184(1)
  05c95ac  mflr 0
  05c95b0  std 0, 192(1)
  05c95b4  lhz 0, 0(3)
  05c95b8  clrlwi 0, 0, 30
  05c95bc  cmpwi 7, 0, 0
  05c95c0  bt 30, 0x5c9730
  05c95c4  mr 3, 28
  05c95c8  bl 0x5c50cc
  05c95cc  nop
  05c95d0  cmpwi 7, 3, 0
  05c95d4  bf 30, 0x5c9730
  05c95d8  cmpwi 4, 26, 0
  05c95dc  bt 18, 0x5c95e8
  05c95e0  lwz 0, 0(26)
  05c95e4  add 30, 30, 0
  05c95e8  lhz 10, 100(31)
  05c95ec  li 0, -6
  05c95f0  cmpwi 7, 27, 1
  05c95f4  and 8, 10, 0
  05c95f8  sth 8, 100(31)
  05c95fc  mr 10, 8
  05c9600  bt 30, 0x5c97d8
  05c9604  cmpwi 7, 27, 0
  05c9608  bt 30, 0x5c9784
  05c960c  cmpwi 7, 27, 2
  05c9610  bt 30, 0x5c98d0
  05c9614  cmplwi 7, 27, 2
  05c9618  bt 29, 0x5c963c
  05c961c  lhz 3, 4(31)
  05c9620  extsw 4, 30
  05c9624  extsw 5, 27
  05c9628  extsh 3, 3
  05c962c  bl 0x5cfb10
  05c9630  nop
  05c9634  lhz 10, 100(31)
  05c9638  mr 30, 3
  05c963c  rlwinm 0, 10, 0, 30, 30
  05c9640  cmpwi 7, 0, 0
  05c9644  bf 30, 0x5c9650
  05c9648  extsw 0, 30
  05c964c  std 0, 88(31)
  05c9650  cmpwi 7, 30, -1
  05c9654  bt- 30, 0x5c9730
  05c9658  lwz 11, 96(31)
  05c965c  ld 0, 80(31)
  05c9660  ld 9, 72(31)
  05c9664  sub 0, 11, 0
  05c9668  cmpld 7, 0, 9
  05c966c  bt 29, 0x5c97d0
  05c9670  cmpld 7, 9, 11
  05c9674  bf 28, 0x5c97d0
  05c9678  lhz 10, 0(31)
  05c967c  rlwinm 0, 10, 0, 18, 18
  05c9680  cmpwi 7, 0, 0
  05c9684  bt 30, 0x5c96c4
  05c9688  addi 0, 25, 67
  05c968c  lwz 9, 8(31)
  05c9690  addi 11, 25, 40
  05c9694  stw 0, 28(31)
  05c9698  li 0, 0
  05c969c  stw 11, 32(31)
  05c96a0  stw 0, 40(31)
  05c96a4  li 0, 0
  05c96a8  stw 9, 96(31)
  05c96ac  std 0, 80(31)
  05c96b0  stw 9, 16(31)
  05c96b4  stw 9, 20(31)
  05c96b8  stw 9, 44(31)
  05c96bc  stw 9, 24(31)
  05c96c0  stw 9, 48(31)
  05c96c4  bt 18, 0x5c96e0
  05c96c8  lwz 0, 4(26)
  05c96cc  stw 0, 52(31)
  05c96d0  lhz 9, 8(26)
  05c96d4  sth 9, 56(31)
  05c96d8  lhz 0, 10(26)
  05c96dc  sth 0, 58(31)
  05c96e0  li 9, 0
  05c96e4  lwz 12, 184(1)
  05c96e8  ld 24, 112(1)
  05c96ec  ori 9, 9, 52991
  05c96f0  ld 25, 120(1)
  05c96f4  ld 26, 128(1)
  05c96f8  mtocrf 8, 12
  05c96fc  and 0, 10, 9
  05c9700  ld 27, 136(1)
  05c9704  li 9, 0
  05c9708  ld 28, 144(1)
  05c970c  sth 0, 0(31)
  05c9710  ld 0, 192(1)
  05c9714  extsw 3, 9
  05c9718  ld 29, 152(1)
  05c971c  ld 30, 160(1)
  05c9720  mtlr 0
  05c9724  ld 31, 168(1)
  05c9728  addi 1, 1, 176
  05c972c  blr
  05c9730  bl 0x5d5904
  05c9734  nop
  05c9738  lis 0, -32767
  05c973c  lwz 12, 184(1)
  05c9740  ori 0, 0, 30
  05c9744  ld 24, 112(1)
  05c9748  li 9, -1
  05c974c  ld 25, 120(1)
  05c9750  stw 0, 0(3)
  05c9754  ld 0, 192(1)
  05c9758  extsw 3, 9
  05c975c  ld 26, 128(1)
  05c9760  mtocrf 8, 12
  05c9764  ld 27, 136(1)
  05c9768  mtlr 0
  05c976c  ld 28, 144(1)
  05c9770  ld 29, 152(1)
  05c9774  ld 30, 160(1)
  05c9778  ld 31, 168(1)
  05c977c  addi 1, 1, 176
  05c9780  blr
  05c9784  cmpwi 7, 30, 0
  05c9788  bt 28, 0x5c9964
  05c978c  lwz 0, 8(31)
  05c9790  lwz 7, 96(31)
  05c9794  add 0, 30, 0
  05c9798  ld 9, 80(31)
  05c979c  clrldi 11, 0, 32
  05c97a0  ld 0, 72(31)
  05c97a4  sub 9, 7, 9
  05c97a8  sub 10, 11, 0
  05c97ac  cmpld 7, 9, 11
  05c97b0  std 11, 72(31)
  05c97b4  std 10, 88(31)
  05c97b8  bt 29, 0x5c97c4
  05c97bc  cmpld 7, 11, 7
  05c97c0  bt 28, 0x5c98b8
  05c97c4  li 0, 0
  05c97c8  std 0, 88(31)
  05c97cc  b 0x5c961c
  05c97d0  lhz 10, 0(31)
  05c97d4  b 0x5c9688
  05c97d8  ld 11, 72(31)
  05c97dc  extsw 9, 30
  05c97e0  lwz 7, 96(31)
  05c97e4  ld 0, 80(31)
  05c97e8  add 9, 9, 11
  05c97ec  sub 0, 7, 0
  05c97f0  std 9, 72(31)
  05c97f4  cmpld 7, 0, 9
  05c97f8  bt 29, 0x5c9804
  05c97fc  cmpld 7, 9, 7
  05c9800  bt 28, 0x5c989c
  05c9804  rlwinm 0, 10, 0, 30, 30
  05c9808  cmpwi 7, 0, 0
  05c980c  bt 30, 0x5c9820
  05c9810  ld 0, 88(31)
  05c9814  li 9, 0
  05c9818  add 30, 30, 0
  05c981c  std 9, 88(31)
  05c9820  lhz 0, 0(31)
  05c9824  rlwinm 0, 0, 0, 19, 19
  05c9828  cmpwi 7, 0, 0
  05c982c  bt 30, 0x5c961c
  05c9830  addi 5, 25, 67
  05c9834  lwz 4, 28(31)
  05c9838  mr 3, 28
  05c983c  clrldi 5, 5, 32
  05c9840  bl 0x5c8bc4
  05c9844  nop
  05c9848  lwz 5, 40(31)
  05c984c  ld 4, 72(31)
  05c9850  cmpwi 7, 5, 0
  05c9854  mr 24, 3
  05c9858  bt 30, 0x5c9990
  05c985c  sub 4, 4, 30
  05c9860  clrldi 5, 5, 32
  05c9864  clrldi 4, 4, 32
  05c9868  mr 3, 28
  05c986c  bl 0x5c8bc4
  05c9870  nop
  05c9874  lwz 4, 16(31)
  05c9878  lwz 5, 44(31)
  05c987c  mr 29, 3
  05c9880  mr 3, 28
  05c9884  bl 0x5c8bc4
  05c9888  nop
  05c988c  add 29, 29, 3
  05c9890  add 29, 24, 29
  05c9894  sub 30, 30, 29
  05c9898  b 0x5c961c
  05c989c  lwz 0, 16(31)
  05c98a0  ori 9, 8, 1
  05c98a4  add 0, 0, 30
  05c98a8  mr 10, 9
  05c98ac  stw 0, 16(31)
  05c98b0  sth 9, 100(31)
  05c98b4  b 0x5c9804
  05c98b8  lwz 0, 16(31)
  05c98bc  ori 9, 8, 1
  05c98c0  add 0, 0, 10
  05c98c4  sth 9, 100(31)
  05c98c8  stw 0, 16(31)
  05c98cc  b 0x5c97c4
  05c98d0  cmpwi 7, 30, 0
  05c98d4  bt 28, 0x5c98e0
  05c98d8  ori 0, 8, 4
  05c98dc  sth 0, 100(31)
  05c98e0  lhz 3, 4(31)
  05c98e4  extsw 4, 30
  05c98e8  li 5, 2
  05c98ec  extsh 3, 3
  05c98f0  bl 0x5cfb10
  05c98f4  nop
  05c98f8  lwz 0, 8(31)
  05c98fc  lwz 10, 96(31)
  05c9900  add 0, 3, 0
  05c9904  ld 9, 80(31)
  05c9908  mr 30, 3
  05c990c  clrldi 11, 0, 32
  05c9910  ld 0, 72(31)
  05c9914  sub 9, 10, 9
  05c9918  sub 8, 11, 0
  05c991c  cmpld 7, 9, 11
  05c9920  std 11, 72(31)
  05c9924  std 8, 88(31)
  05c9928  bt 29, 0x5c995c
  05c992c  cmpld 7, 11, 10
  05c9930  bf 28, 0x5c995c
  05c9934  lhz 10, 100(31)
  05c9938  lwz 0, 16(31)
  05c993c  ori 9, 10, 1
  05c9940  add 0, 0, 8
  05c9944  mr 10, 9
  05c9948  stw 0, 16(31)
  05c994c  sth 9, 100(31)
  05c9950  li 0, 0
  05c9954  std 0, 88(31)
  05c9958  b 0x5c963c
  05c995c  lhz 10, 100(31)
  05c9960  b 0x5c9950
  05c9964  lwz 11, 96(31)
  05c9968  ld 0, 80(31)
  05c996c  ld 9, 72(31)
  05c9970  sub 0, 11, 0
  05c9974  cmpld 7, 0, 9
  05c9978  bt 29, 0x5c961c
  05c997c  cmpld 7, 11, 9
  05c9980  bf 29, 0x5c961c
  05c9984  ori 0, 8, 1
  05c9988  sth 0, 100(31)
  05c998c  b 0x5c961c
  05c9990  lwz 5, 96(31)
  05c9994  b 0x5c985c
