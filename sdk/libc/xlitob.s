# sdk/libc/xlitob.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Litob:   # 0x5d9584, 0x258 bytes
  05d9584  cmpwi 7, 4, 88
  05d9588  mflr 0
  05d958c  stdu 1, -160(1)
  05d9590  std 31, 152(1)
  05d9594  std 0, 176(1)
  05d9598  mr 31, 3
  05d959c  bt 30, 0x5d9770
  05d95a0  cmpwi 7, 4, 111
  05d95a4  bt 30, 0x5d97a0
  05d95a8  cmpwi 7, 4, 120
  05d95ac  bt 30, 0x5d97b4
  05d95b0  cmpwi 7, 4, 100
  05d95b4  ld 0, 0(3)
  05d95b8  mr 10, 0
  05d95bc  bt 30, 0x5d97c8
  05d95c0  cmpwi 7, 4, 105
  05d95c4  lwz 9, -24024(2)
  05d95c8  li 3, 10
  05d95cc  addi 5, 9, 24
  05d95d0  li 9, 10
  05d95d4  bt 30, 0x5d978c
  05d95d8  cmpdi 7, 10, 0
  05d95dc  bf 30, 0x5d95f4
  05d95e0  lwz 0, 68(31)
  05d95e4  li 6, 24
  05d95e8  li 11, 0
  05d95ec  cmpwi 7, 0, 0
  05d95f0  bt 30, 0x5d9614
  05d95f4  li 6, 23
  05d95f8  divdu 11, 10, 9
  05d95fc  mulld 9, 11, 9
  05d9600  sub 9, 10, 9
  05d9604  add 9, 5, 9
  05d9608  clrldi 9, 9, 32
  05d960c  lbz 0, 0(9)
  05d9610  stb 0, 135(1)
  05d9614  cmpdi 7, 11, 0
  05d9618  mr 8, 11
  05d961c  std 11, 0(31)
  05d9620  bf 29, 0x5d9678
  05d9624  cmpwi 7, 6, 0
  05d9628  bf 29, 0x5d9678
  05d962c  clrldi 0, 6, 32
  05d9630  extsw 7, 3
  05d9634  mtctr 0
  05d9638  b 0x5d9640
  05d963c  bdz 0x5d9678
  05d9640  addi 6, 6, -1
  05d9644  divd 0, 8, 7
  05d9648  extsw 11, 6
  05d964c  cmpdi 7, 0, 0
  05d9650  add 10, 1, 11
  05d9654  mulld 9, 7, 0
  05d9658  sub 9, 8, 9
  05d965c  mr 8, 0
  05d9660  add 9, 5, 9
  05d9664  clrldi 9, 9, 32
  05d9668  lbz 11, 0(9)
  05d966c  std 0, 0(31)
  05d9670  stb 11, 112(10)
  05d9674  bt 29, 0x5d963c
  05d9678  cmpwi 7, 3, 8
  05d967c  mr 10, 6
  05d9680  bt 30, 0x5d9728
  05d9684  addi 4, 1, 112
  05d9688  lwz 3, 40(31)
  05d968c  subfic 0, 10, 24
  05d9690  add 4, 10, 4
  05d9694  clrldi 5, 0, 32
  05d9698  clrldi 4, 4, 32
  05d969c  stw 0, 52(31)
  05d96a0  bl 0x5c5ad0
  05d96a4  nop
  05d96a8  lwz 10, 52(31)
  05d96ac  lwz 9, 68(31)
  05d96b0  cmpw 7, 10, 9
  05d96b4  bf 28, 0x5d96e4
  05d96b8  lhz 0, 80(31)
  05d96bc  sub 9, 9, 10
  05d96c0  rlwinm 0, 0, 27, 1, 31
  05d96c4  stw 9, 48(31)
  05d96c8  rotlwi 0, 0, 5
  05d96cc  sth 0, 80(31)
  05d96d0  ld 0, 176(1)
  05d96d4  ld 31, 152(1)
  05d96d8  addi 1, 1, 160
  05d96dc  mtlr 0
  05d96e0  blr
  05d96e4  cmpwi 7, 9, 0
  05d96e8  bf 28, 0x5d96d0
  05d96ec  lhz 0, 80(31)
  05d96f0  li 9, 20
  05d96f4  and 0, 0, 9
  05d96f8  cmpwi 7, 0, 16
  05d96fc  bf 30, 0x5d96d0
  05d9700  lwz 0, 76(31)
  05d9704  lwz 9, 44(31)
  05d9708  lwz 11, 48(31)
  05d970c  sub 0, 0, 9
  05d9710  sub 0, 0, 11
  05d9714  sub 0, 0, 10
  05d9718  cmpwi 7, 0, 0
  05d971c  bf 29, 0x5d96d0
  05d9720  stw 0, 48(31)
  05d9724  b 0x5d96d0
  05d9728  lhz 0, 80(31)
  05d972c  rlwinm 0, 0, 0, 28, 28
  05d9730  cmpwi 7, 0, 0
  05d9734  bt 30, 0x5d9684
  05d9738  cmplwi 7, 6, 23
  05d973c  bt 29, 0x5d9754
  05d9740  extsw 0, 6
  05d9744  add 9, 1, 0
  05d9748  lbz 11, 112(9)
  05d974c  cmpwi 7, 11, 48
  05d9750  bt 30, 0x5d9684
  05d9754  addi 0, 10, -1
  05d9758  extsw 9, 0
  05d975c  mr 10, 0
  05d9760  add 11, 1, 9
  05d9764  li 0, 48
  05d9768  stb 0, 112(11)
  05d976c  b 0x5d9684
  05d9770  lwz 5, -24024(2)
  05d9774  li 3, 16
  05d9778  li 9, 16
  05d977c  cmpwi 7, 4, 105
  05d9780  ld 0, 0(31)
  05d9784  mr 10, 0
  05d9788  bf 30, 0x5d95d8
  05d978c  extsw 9, 3
  05d9790  cmpdi 7, 0, 0
  05d9794  bf 28, 0x5d95d8
  05d9798  neg 10, 0
  05d979c  b 0x5d95d8
  05d97a0  lwz 9, -24024(2)
  05d97a4  li 3, 8
  05d97a8  addi 5, 9, 24
  05d97ac  li 9, 8
  05d97b0  b 0x5d977c
  05d97b4  lwz 9, -24024(2)
  05d97b8  li 3, 16
  05d97bc  addi 5, 9, 24
  05d97c0  li 9, 16
  05d97c4  b 0x5d977c
  05d97c8  lwz 9, -24024(2)
  05d97cc  li 3, 10
  05d97d0  addi 5, 9, 24
  05d97d4  li 9, 10
  05d97d8  b 0x5d9790
