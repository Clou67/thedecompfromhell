# sdk/libc/memmove.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

memmove:   # 0x5c6094, 0x12d4 bytes
  05c6094  cmpw 7, 3, 4
  05c6098  std 27, -40(1)
  05c609c  std 31, -8(1)
  05c60a0  std 28, -32(1)
  05c60a4  std 29, -24(1)
  05c60a8  std 30, -16(1)
  05c60ac  mr 27, 3
  05c60b0  mr 31, 4
  05c60b4  mr 8, 5
  05c60b8  bt 30, 0x5c6270
  05c60bc  cmplw 7, 3, 4
  05c60c0  bf 29, 0x5c628c
  05c60c4  add 12, 4, 5
  05c60c8  cmplw 7, 3, 12
  05c60cc  bf 28, 0x5c628c
  05c60d0  cmplwi 7, 5, 32
  05c60d4  mr 30, 5
  05c60d8  add 31, 3, 5
  05c60dc  bf 29, 0x5c61c0
  05c60e0  clrlwi 9, 31, 29
  05c60e4  clrlwi 0, 12, 29
  05c60e8  cmplw 7, 9, 0
  05c60ec  sub 11, 9, 0
  05c60f0  bt 29, 0x5c60f8
  05c60f4  sub 11, 0, 9
  05c60f8  or 9, 9, 0
  05c60fc  cmpwi 7, 9, 0
  05c6100  bf 30, 0x5c669c
  05c6104  addi 9, 8, -32
  05c6108  mr 30, 8
  05c610c  srwi 9, 9, 5
  05c6110  addi 9, 9, 1
  05c6114  clrldi 9, 9, 32
  05c6118  mtctr 9
  05c611c  addi 8, 12, -8
  05c6120  addi 7, 12, -16
  05c6124  addi 6, 12, -24
  05c6128  addi 12, 12, -32
  05c612c  clrldi 8, 8, 32
  05c6130  clrldi 7, 7, 32
  05c6134  addi 9, 31, -8
  05c6138  addi 11, 31, -16
  05c613c  addi 10, 31, -24
  05c6140  clrldi 6, 6, 32
  05c6144  ld 0, 0(8)
  05c6148  addi 31, 31, -32
  05c614c  ld 5, 0(7)
  05c6150  clrldi 4, 12, 32
  05c6154  clrldi 9, 9, 32
  05c6158  clrldi 11, 11, 32
  05c615c  clrldi 10, 10, 32
  05c6160  ld 8, 0(6)
  05c6164  clrldi 3, 31, 32
  05c6168  ld 7, 0(4)
  05c616c  addi 30, 30, -32
  05c6170  std 0, 0(9)
  05c6174  std 5, 0(11)
  05c6178  std 8, 0(10)
  05c617c  std 7, 0(3)
  05c6180  bdnz 0x5c611c
  05c6184  cmplwi 7, 30, 7
  05c6188  bf 29, 0x5c61c0
  05c618c  addi 9, 30, -8
  05c6190  srwi 9, 9, 3
  05c6194  addi 9, 9, 1
  05c6198  clrldi 9, 9, 32
  05c619c  mtctr 9
  05c61a0  addi 12, 12, -8
  05c61a4  addi 31, 31, -8
  05c61a8  clrldi 9, 12, 32
  05c61ac  clrldi 11, 31, 32
  05c61b0  addi 30, 30, -8
  05c61b4  ld 0, 0(9)
  05c61b8  std 0, 0(11)
  05c61bc  bdnz 0x5c61a0
  05c61c0  cmplwi 7, 30, 3
  05c61c4  bf 29, 0x5c6244
  05c61c8  addi 9, 30, -4
  05c61cc  srwi 9, 9, 2
  05c61d0  addi 9, 9, 1
  05c61d4  clrldi 9, 9, 32
  05c61d8  mtctr 9
  05c61dc  addi 8, 12, -1
  05c61e0  addi 7, 12, -2
  05c61e4  addi 6, 12, -3
  05c61e8  addi 12, 12, -4
  05c61ec  clrldi 8, 8, 32
  05c61f0  clrldi 7, 7, 32
  05c61f4  addi 9, 31, -1
  05c61f8  addi 11, 31, -2
  05c61fc  addi 10, 31, -3
  05c6200  clrldi 6, 6, 32
  05c6204  lbz 0, 0(8)
  05c6208  addi 31, 31, -4
  05c620c  lbz 5, 0(7)
  05c6210  clrldi 4, 12, 32
  05c6214  clrldi 9, 9, 32
  05c6218  clrldi 11, 11, 32
  05c621c  clrldi 10, 10, 32
  05c6220  lbz 8, 0(6)
  05c6224  clrldi 3, 31, 32
  05c6228  lbz 7, 0(4)
  05c622c  addi 30, 30, -4
  05c6230  stb 0, 0(9)
  05c6234  stb 5, 0(11)
  05c6238  stb 8, 0(10)
  05c623c  stb 7, 0(3)
  05c6240  bdnz 0x5c61dc
  05c6244  cmpwi 7, 30, 0
  05c6248  bt 30, 0x5c6270
  05c624c  clrldi 30, 30, 32
  05c6250  mtctr 30
  05c6254  addi 12, 12, -1
  05c6258  addi 31, 31, -1
  05c625c  clrldi 9, 12, 32
  05c6260  clrldi 11, 31, 32
  05c6264  lbz 0, 0(9)
  05c6268  stb 0, 0(11)
  05c626c  bdnz 0x5c6254
  05c6270  clrldi 3, 27, 32
  05c6274  ld 28, -32(1)
  05c6278  ld 27, -40(1)
  05c627c  ld 29, -24(1)
  05c6280  ld 30, -16(1)
  05c6284  ld 31, -8(1)
  05c6288  blr
  05c628c  cmplwi 7, 8, 32
  05c6290  mr 5, 8
  05c6294  bt 29, 0x5c6344
  05c6298  cmplwi 7, 5, 3
  05c629c  bf 29, 0x5c62fc
  05c62a0  addi 9, 5, -4
  05c62a4  li 6, 0
  05c62a8  srwi 9, 9, 2
  05c62ac  addi 9, 9, 1
  05c62b0  clrldi 9, 9, 32
  05c62b4  mtctr 9
  05c62b8  add 9, 6, 4
  05c62bc  add 11, 6, 3
  05c62c0  clrldi 9, 9, 32
  05c62c4  clrldi 11, 11, 32
  05c62c8  addi 5, 5, -4
  05c62cc  addi 6, 6, 4
  05c62d0  lbz 10, 0(9)
  05c62d4  lbz 8, 1(9)
  05c62d8  lbz 7, 2(9)
  05c62dc  lbz 0, 3(9)
  05c62e0  stb 10, 0(11)
  05c62e4  stb 0, 3(11)
  05c62e8  stb 8, 1(11)
  05c62ec  stb 7, 2(11)
  05c62f0  bdnz 0x5c62b8
  05c62f4  add 3, 3, 6
  05c62f8  add 4, 4, 6
  05c62fc  cmpwi 7, 5, 0
  05c6300  bt 30, 0x5c6270
  05c6304  clrldi 5, 5, 32
  05c6308  mtctr 5
  05c630c  clrldi 9, 4, 32
  05c6310  clrldi 11, 3, 32
  05c6314  addi 4, 4, 1
  05c6318  addi 3, 3, 1
  05c631c  lbz 0, 0(9)
  05c6320  stb 0, 0(11)
  05c6324  bdnz 0x5c630c
  05c6328  clrldi 3, 27, 32
  05c632c  ld 28, -32(1)
  05c6330  ld 27, -40(1)
  05c6334  ld 29, -24(1)
  05c6338  ld 30, -16(1)
  05c633c  ld 31, -8(1)
  05c6340  blr
  05c6344  clrlwi 9, 27, 29
  05c6348  clrlwi 0, 31, 29
  05c634c  cmplw 7, 9, 0
  05c6350  sub 11, 9, 0
  05c6354  bf 29, 0x5c6588
  05c6358  or 9, 9, 0
  05c635c  cmpwi 7, 9, 0
  05c6360  bt 30, 0x5c644c
  05c6364  clrlwi 0, 9, 30
  05c6368  cmpwi 7, 0, 0
  05c636c  bf 30, 0x5c659c
  05c6370  addi 9, 8, -16
  05c6374  cmpwi 7, 11, 0
  05c6378  srwi 9, 9, 4
  05c637c  mr 5, 8
  05c6380  addi 9, 9, 1
  05c6384  li 6, 0
  05c6388  clrldi 9, 9, 32
  05c638c  mtctr 9
  05c6390  bf 30, 0x5c64fc
  05c6394  addi 5, 8, -4
  05c6398  lwz 0, 0(31)
  05c639c  addi 4, 31, 4
  05c63a0  cmplwi 7, 5, 31
  05c63a4  stw 0, 0(27)
  05c63a8  addi 3, 27, 4
  05c63ac  bf 29, 0x5c63fc
  05c63b0  addi 9, 8, -36
  05c63b4  srwi 9, 9, 5
  05c63b8  addi 9, 9, 1
  05c63bc  clrldi 9, 9, 32
  05c63c0  mtctr 9
  05c63c4  clrldi 9, 4, 32
  05c63c8  clrldi 11, 3, 32
  05c63cc  addi 4, 4, 32
  05c63d0  addi 3, 3, 32
  05c63d4  addi 5, 5, -32
  05c63d8  ld 0, 24(9)
  05c63dc  ld 10, 0(9)
  05c63e0  ld 8, 8(9)
  05c63e4  ld 7, 16(9)
  05c63e8  std 0, 24(11)
  05c63ec  std 10, 0(11)
  05c63f0  std 8, 8(11)
  05c63f4  std 7, 16(11)
  05c63f8  bdnz 0x5c63c4
  05c63fc  cmplwi 7, 5, 7
  05c6400  bf 29, 0x5c6298
  05c6404  addi 9, 5, -8
  05c6408  li 10, 0
  05c640c  srwi 9, 9, 3
  05c6410  addi 9, 9, 1
  05c6414  clrldi 9, 9, 32
  05c6418  mtctr 9
  05c641c  add 9, 10, 4
  05c6420  add 11, 10, 3
  05c6424  clrldi 9, 9, 32
  05c6428  clrldi 11, 11, 32
  05c642c  addi 5, 5, -8
  05c6430  addi 10, 10, 8
  05c6434  ld 0, 0(9)
  05c6438  std 0, 0(11)
  05c643c  bdnz 0x5c641c
  05c6440  add 4, 4, 10
  05c6444  add 3, 3, 10
  05c6448  b 0x5c6298
  05c644c  addi 9, 8, -32
  05c6450  mr 5, 8
  05c6454  srwi 9, 9, 5
  05c6458  li 6, 0
  05c645c  addi 9, 9, 1
  05c6460  clrldi 9, 9, 32
  05c6464  mtctr 9
  05c6468  add 9, 6, 31
  05c646c  add 11, 6, 27
  05c6470  clrldi 9, 9, 32
  05c6474  clrldi 11, 11, 32
  05c6478  addi 5, 5, -32
  05c647c  addi 6, 6, 32
  05c6480  ld 10, 0(9)
  05c6484  ld 8, 8(9)
  05c6488  ld 7, 16(9)
  05c648c  ld 0, 24(9)
  05c6490  std 10, 0(11)
  05c6494  std 0, 24(11)
  05c6498  std 8, 8(11)
  05c649c  std 7, 16(11)
  05c64a0  bdnz 0x5c6468
  05c64a4  cmplwi 7, 5, 7
  05c64a8  add 4, 6, 31
  05c64ac  add 3, 27, 6
  05c64b0  bf 29, 0x5c6298
  05c64b4  addi 9, 5, -8
  05c64b8  li 8, 0
  05c64bc  srwi 9, 9, 3
  05c64c0  addi 9, 9, 1
  05c64c4  clrldi 9, 9, 32
  05c64c8  mtctr 9
  05c64cc  add 9, 8, 4
  05c64d0  add 11, 8, 3
  05c64d4  clrldi 9, 9, 32
  05c64d8  clrldi 11, 11, 32
  05c64dc  addi 5, 5, -8
  05c64e0  addi 8, 8, 8
  05c64e4  ld 0, 0(9)
  05c64e8  std 0, 0(11)
  05c64ec  bdnz 0x5c64cc
  05c64f0  add 4, 4, 8
  05c64f4  add 3, 3, 8
  05c64f8  b 0x5c6298
  05c64fc  add 9, 31, 6
  05c6500  add 11, 6, 27
  05c6504  clrldi 9, 9, 32
  05c6508  clrldi 11, 11, 32
  05c650c  addi 5, 5, -16
  05c6510  addi 6, 6, 16
  05c6514  lwz 10, 0(9)
  05c6518  lwz 8, 4(9)
  05c651c  lwz 7, 8(9)
  05c6520  lwz 0, 12(9)
  05c6524  stw 10, 0(11)
  05c6528  stw 0, 12(11)
  05c652c  stw 8, 4(11)
  05c6530  stw 7, 8(11)
  05c6534  bdnz 0x5c64fc
  05c6538  cmplwi 7, 5, 3
  05c653c  add 4, 6, 31
  05c6540  add 3, 27, 6
  05c6544  bf 29, 0x5c6298
  05c6548  addi 9, 5, -4
  05c654c  li 8, 0
  05c6550  srwi 9, 9, 2
  05c6554  addi 9, 9, 1
  05c6558  clrldi 9, 9, 32
  05c655c  mtctr 9
  05c6560  add 9, 8, 4
  05c6564  add 11, 8, 3
  05c6568  clrldi 9, 9, 32
  05c656c  clrldi 11, 11, 32
  05c6570  addi 5, 5, -4
  05c6574  addi 8, 8, 4
  05c6578  lwz 0, 0(9)
  05c657c  stw 0, 0(11)
  05c6580  bdnz 0x5c6560
  05c6584  b 0x5c64f0
  05c6588  sub 11, 0, 9
  05c658c  or 9, 9, 0
  05c6590  cmpwi 7, 9, 0
  05c6594  bf 30, 0x5c6364
  05c6598  b 0x5c644c
  05c659c  clrlwi 0, 9, 31
  05c65a0  cmpwi 7, 0, 0
  05c65a4  bt 30, 0x5c67e0
  05c65a8  cmpwi 7, 11, 0
  05c65ac  bf 30, 0x5c6b44
  05c65b0  clrldi 9, 4, 32
  05c65b4  addi 30, 3, 1
  05c65b8  clrldi 11, 3, 32
  05c65bc  clrlwi 10, 30, 29
  05c65c0  addi 31, 4, 1
  05c65c4  cmpwi 7, 10, 4
  05c65c8  lbz 0, 0(9)
  05c65cc  addi 5, 8, -1
  05c65d0  stb 0, 0(11)
  05c65d4  bt 30, 0x5c6d3c
  05c65d8  cmpwi 7, 10, 6
  05c65dc  bt 30, 0x5c70cc
  05c65e0  cmpwi 7, 10, 2
  05c65e4  bt 30, 0x5c6d20
  05c65e8  cmplwi 7, 5, 31
  05c65ec  mr 3, 30
  05c65f0  mr 4, 31
  05c65f4  bf 29, 0x5c6654
  05c65f8  addi 9, 5, -32
  05c65fc  li 6, 0
  05c6600  srwi 9, 9, 5
  05c6604  addi 9, 9, 1
  05c6608  clrldi 9, 9, 32
  05c660c  mtctr 9
  05c6610  add 9, 6, 31
  05c6614  add 11, 6, 30
  05c6618  clrldi 9, 9, 32
  05c661c  clrldi 11, 11, 32
  05c6620  addi 5, 5, -32
  05c6624  addi 6, 6, 32
  05c6628  ld 10, 0(9)
  05c662c  ld 8, 8(9)
  05c6630  ld 7, 16(9)
  05c6634  ld 0, 24(9)
  05c6638  std 10, 0(11)
  05c663c  std 0, 24(11)
  05c6640  std 8, 8(11)
  05c6644  std 7, 16(11)
  05c6648  bdnz 0x5c6610
  05c664c  add 3, 30, 6
  05c6650  add 4, 31, 6
  05c6654  cmplwi 7, 5, 7
  05c6658  bf 29, 0x5c6298
  05c665c  addi 9, 5, -8
  05c6660  li 8, 0
  05c6664  srwi 9, 9, 3
  05c6668  addi 9, 9, 1
  05c666c  clrldi 9, 9, 32
  05c6670  mtctr 9
  05c6674  add 9, 8, 4
  05c6678  add 11, 8, 3
  05c667c  clrldi 9, 9, 32
  05c6680  clrldi 11, 11, 32
  05c6684  addi 5, 5, -8
  05c6688  addi 8, 8, 8
  05c668c  ld 0, 0(9)
  05c6690  std 0, 0(11)
  05c6694  bdnz 0x5c6674
  05c6698  b 0x5c64f0
  05c669c  clrlwi 0, 9, 30
  05c66a0  cmpwi 7, 0, 0
  05c66a4  bt 30, 0x5c68d0
  05c66a8  clrlwi 0, 9, 31
  05c66ac  cmpwi 7, 0, 0
  05c66b0  bf 30, 0x5c6c10
  05c66b4  cmpwi 7, 11, 0
  05c66b8  mr 28, 31
  05c66bc  mr 29, 12
  05c66c0  bf 30, 0x5c6e5c
  05c66c4  addi 4, 12, -2
  05c66c8  addi 3, 31, -2
  05c66cc  clrldi 9, 4, 32
  05c66d0  clrlwi 0, 3, 29
  05c66d4  clrldi 11, 3, 32
  05c66d8  cmpwi 7, 0, 0
  05c66dc  addi 30, 8, -2
  05c66e0  lhz 0, 0(9)
  05c66e4  sth 0, 0(11)
  05c66e8  bt 30, 0x5c6710
  05c66ec  addi 9, 12, -6
  05c66f0  addi 0, 31, -6
  05c66f4  clrldi 11, 9, 32
  05c66f8  clrldi 10, 0, 32
  05c66fc  mr 3, 0
  05c6700  addi 30, 8, -6
  05c6704  mr 4, 9
  05c6708  lwz 0, 0(11)
  05c670c  stw 0, 0(10)
  05c6710  cmplwi 7, 30, 31
  05c6714  mr 31, 3
  05c6718  mr 29, 4
  05c671c  bf 29, 0x5c679c
  05c6720  addi 9, 30, -32
  05c6724  srwi 9, 9, 5
  05c6728  addi 9, 9, 1
  05c672c  clrldi 9, 9, 32
  05c6730  mtctr 9
  05c6734  addi 8, 29, -8
  05c6738  addi 7, 29, -16
  05c673c  addi 6, 29, -24
  05c6740  addi 29, 29, -32
  05c6744  clrldi 8, 8, 32
  05c6748  clrldi 7, 7, 32
  05c674c  addi 9, 31, -8
  05c6750  addi 11, 31, -16
  05c6754  addi 10, 31, -24
  05c6758  clrldi 6, 6, 32
  05c675c  ld 0, 0(8)
  05c6760  addi 31, 31, -32
  05c6764  ld 5, 0(7)
  05c6768  clrldi 4, 29, 32
  05c676c  clrldi 9, 9, 32
  05c6770  clrldi 11, 11, 32
  05c6774  clrldi 10, 10, 32
  05c6778  ld 8, 0(6)
  05c677c  clrldi 3, 31, 32
  05c6780  ld 7, 0(4)
  05c6784  addi 30, 30, -32
  05c6788  std 0, 0(9)
  05c678c  std 5, 0(11)
  05c6790  std 8, 0(10)
  05c6794  std 7, 0(3)
  05c6798  bdnz 0x5c6734
  05c679c  cmplwi 7, 30, 7
  05c67a0  bf 29, 0x5c67d8
  05c67a4  addi 9, 30, -8
  05c67a8  srwi 9, 9, 3
  05c67ac  addi 9, 9, 1
  05c67b0  clrldi 9, 9, 32
  05c67b4  mtctr 9
  05c67b8  addi 29, 29, -8
  05c67bc  addi 31, 31, -8
  05c67c0  clrldi 9, 29, 32
  05c67c4  clrldi 11, 31, 32
  05c67c8  addi 30, 30, -8
  05c67cc  ld 0, 0(9)
  05c67d0  std 0, 0(11)
  05c67d4  bdnz 0x5c67b8
  05c67d8  mr 12, 29
  05c67dc  b 0x5c61c0
  05c67e0  cmpwi 7, 11, 0
  05c67e4  bf 30, 0x5c6a94
  05c67e8  addi 29, 27, 2
  05c67ec  lhz 0, 0(31)
  05c67f0  addi 30, 31, 2
  05c67f4  clrlwi 9, 29, 29
  05c67f8  sth 0, 0(27)
  05c67fc  cmpwi 7, 9, 0
  05c6800  addi 5, 8, -2
  05c6804  bt 30, 0x5c681c
  05c6808  lwz 0, 0(30)
  05c680c  addi 5, 8, -6
  05c6810  addi 30, 31, 6
  05c6814  stw 0, 0(29)
  05c6818  addi 29, 27, 6
  05c681c  cmplwi 7, 5, 31
  05c6820  mr 3, 29
  05c6824  mr 4, 30
  05c6828  bf 29, 0x5c6888
  05c682c  addi 9, 5, -32
  05c6830  li 6, 0
  05c6834  srwi 9, 9, 5
  05c6838  addi 9, 9, 1
  05c683c  clrldi 9, 9, 32
  05c6840  mtctr 9
  05c6844  add 9, 6, 30
  05c6848  add 11, 6, 29
  05c684c  clrldi 9, 9, 32
  05c6850  clrldi 11, 11, 32
  05c6854  addi 5, 5, -32
  05c6858  addi 6, 6, 32
  05c685c  ld 10, 0(9)
  05c6860  ld 8, 8(9)
  05c6864  ld 7, 16(9)
  05c6868  ld 0, 24(9)
  05c686c  std 10, 0(11)
  05c6870  std 0, 24(11)
  05c6874  std 8, 8(11)
  05c6878  std 7, 16(11)
  05c687c  bdnz 0x5c6844
  05c6880  add 3, 29, 6
  05c6884  add 4, 30, 6
  05c6888  cmplwi 7, 5, 7
  05c688c  bf 29, 0x5c6298
  05c6890  addi 9, 5, -8
  05c6894  li 8, 0
  05c6898  srwi 9, 9, 3
  05c689c  addi 9, 9, 1
  05c68a0  clrldi 9, 9, 32
  05c68a4  mtctr 9
  05c68a8  add 9, 8, 4
  05c68ac  add 11, 8, 3
  05c68b0  clrldi 9, 9, 32
  05c68b4  clrldi 11, 11, 32
  05c68b8  addi 5, 5, -8
  05c68bc  addi 8, 8, 8
  05c68c0  ld 0, 0(9)
  05c68c4  std 0, 0(11)
  05c68c8  bdnz 0x5c68a8
  05c68cc  b 0x5c64f0
  05c68d0  addi 9, 8, -16
  05c68d4  cmpwi 7, 11, 0
  05c68d8  srwi 9, 9, 4
  05c68dc  mr 28, 31
  05c68e0  addi 9, 9, 1
  05c68e4  mr 29, 12
  05c68e8  clrldi 9, 9, 32
  05c68ec  mr 30, 8
  05c68f0  mtctr 9
  05c68f4  bf 30, 0x5c69e4
  05c68f8  addi 11, 12, -4
  05c68fc  addi 0, 31, -4
  05c6900  clrldi 9, 11, 32
  05c6904  clrldi 10, 0, 32
  05c6908  addi 30, 8, -4
  05c690c  mr 31, 0
  05c6910  cmplwi 7, 30, 31
  05c6914  lwz 0, 0(9)
  05c6918  mr 29, 11
  05c691c  stw 0, 0(10)
  05c6920  bf 29, 0x5c69a0
  05c6924  addi 9, 8, -36
  05c6928  srwi 9, 9, 5
  05c692c  addi 9, 9, 1
  05c6930  clrldi 9, 9, 32
  05c6934  mtctr 9
  05c6938  addi 8, 29, -8
  05c693c  addi 7, 29, -16
  05c6940  addi 6, 29, -24
  05c6944  addi 29, 29, -32
  05c6948  clrldi 8, 8, 32
  05c694c  clrldi 7, 7, 32
  05c6950  addi 9, 31, -8
  05c6954  addi 11, 31, -16
  05c6958  addi 10, 31, -24
  05c695c  clrldi 6, 6, 32
  05c6960  ld 0, 0(8)
  05c6964  addi 31, 31, -32
  05c6968  ld 5, 0(7)
  05c696c  clrldi 4, 29, 32
  05c6970  clrldi 9, 9, 32
  05c6974  clrldi 11, 11, 32
  05c6978  clrldi 10, 10, 32
  05c697c  ld 8, 0(6)
  05c6980  clrldi 3, 31, 32
  05c6984  ld 7, 0(4)
  05c6988  addi 30, 30, -32
  05c698c  std 0, 0(9)
  05c6990  std 5, 0(11)
  05c6994  std 8, 0(10)
  05c6998  std 7, 0(3)
  05c699c  bdnz 0x5c6938
  05c69a0  cmplwi 7, 30, 7
  05c69a4  bf 29, 0x5c67d8
  05c69a8  addi 9, 30, -8
  05c69ac  srwi 9, 9, 3
  05c69b0  addi 9, 9, 1
  05c69b4  clrldi 9, 9, 32
  05c69b8  mtctr 9
  05c69bc  addi 29, 29, -8
  05c69c0  addi 31, 31, -8
  05c69c4  clrldi 9, 29, 32
  05c69c8  clrldi 11, 31, 32
  05c69cc  addi 30, 30, -8
  05c69d0  ld 0, 0(9)
  05c69d4  std 0, 0(11)
  05c69d8  bdnz 0x5c69bc
  05c69dc  mr 12, 29
  05c69e0  b 0x5c61c0
  05c69e4  addi 8, 29, -4
  05c69e8  addi 7, 29, -8
  05c69ec  addi 6, 29, -12
  05c69f0  addi 29, 29, -16
  05c69f4  clrldi 8, 8, 32
  05c69f8  clrldi 7, 7, 32
  05c69fc  addi 9, 28, -4
  05c6a00  addi 11, 28, -8
  05c6a04  addi 10, 28, -12
  05c6a08  clrldi 6, 6, 32
  05c6a0c  lwz 0, 0(8)
  05c6a10  addi 28, 28, -16
  05c6a14  lwz 5, 0(7)
  05c6a18  clrldi 4, 29, 32
  05c6a1c  clrldi 9, 9, 32
  05c6a20  clrldi 11, 11, 32
  05c6a24  clrldi 10, 10, 32
  05c6a28  lwz 8, 0(6)
  05c6a2c  clrldi 3, 28, 32
  05c6a30  lwz 7, 0(4)
  05c6a34  addi 30, 30, -16
  05c6a38  stw 0, 0(9)
  05c6a3c  stw 5, 0(11)
  05c6a40  stw 8, 0(10)
  05c6a44  stw 7, 0(3)
  05c6a48  bdnz 0x5c69e4
  05c6a4c  cmplwi 7, 30, 3
  05c6a50  bf 29, 0x5c6a88
  05c6a54  addi 9, 30, -4
  05c6a58  srwi 9, 9, 2
  05c6a5c  addi 9, 9, 1
  05c6a60  clrldi 9, 9, 32
  05c6a64  mtctr 9
  05c6a68  addi 29, 29, -4
  05c6a6c  addi 28, 28, -4
  05c6a70  clrldi 9, 29, 32
  05c6a74  clrldi 11, 28, 32
  05c6a78  addi 30, 30, -4
  05c6a7c  lwz 0, 0(9)
  05c6a80  stw 0, 0(11)
  05c6a84  bdnz 0x5c6a68
  05c6a88  mr 31, 28
  05c6a8c  mr 12, 29
  05c6a90  b 0x5c61c0
  05c6a94  addi 9, 8, -8
  05c6a98  cmpwi 7, 11, 4
  05c6a9c  srwi 9, 9, 3
  05c6aa0  mr 5, 8
  05c6aa4  addi 9, 9, 1
  05c6aa8  li 6, 0
  05c6aac  clrldi 9, 9, 32
  05c6ab0  mtctr 9
  05c6ab4  bt 30, 0x5c701c
  05c6ab8  add 9, 6, 31
  05c6abc  add 11, 6, 27
  05c6ac0  clrldi 9, 9, 32
  05c6ac4  clrldi 11, 11, 32
  05c6ac8  addi 5, 5, -8
  05c6acc  addi 6, 6, 8
  05c6ad0  lhz 10, 0(9)
  05c6ad4  lhz 8, 2(9)
  05c6ad8  lhz 7, 4(9)
  05c6adc  lhz 0, 6(9)
  05c6ae0  sth 10, 0(11)
  05c6ae4  sth 0, 6(11)
  05c6ae8  sth 8, 2(11)
  05c6aec  sth 7, 4(11)
  05c6af0  bdnz 0x5c6ab8
  05c6af4  cmplwi 7, 5, 1
  05c6af8  add 4, 31, 6
  05c6afc  add 3, 6, 27
  05c6b00  bf 29, 0x5c6298
  05c6b04  addi 9, 5, -2
  05c6b08  li 8, 0
  05c6b0c  srwi 9, 9, 1
  05c6b10  addi 9, 9, 1
  05c6b14  clrldi 9, 9, 32
  05c6b18  mtctr 9
  05c6b1c  add 9, 8, 4
  05c6b20  add 11, 8, 3
  05c6b24  clrldi 9, 9, 32
  05c6b28  clrldi 11, 11, 32
  05c6b2c  addi 5, 5, -2
  05c6b30  addi 8, 8, 2
  05c6b34  lhz 0, 0(9)
  05c6b38  sth 0, 0(11)
  05c6b3c  bdnz 0x5c6b1c
  05c6b40  b 0x5c64f0
  05c6b44  cmpwi 7, 11, 4
  05c6b48  bt 30, 0x5c6f24
  05c6b4c  cmpwi 7, 11, 2
  05c6b50  mr 5, 8
  05c6b54  bf 30, 0x5c62a0
  05c6b58  clrldi 9, 4, 32
  05c6b5c  clrldi 11, 3, 32
  05c6b60  addi 5, 8, -1
  05c6b64  addi 3, 3, 1
  05c6b68  cmplwi 7, 5, 7
  05c6b6c  lbz 0, 0(9)
  05c6b70  addi 4, 4, 1
  05c6b74  stb 0, 0(11)
  05c6b78  bf 29, 0x5c6bc8
  05c6b7c  addi 9, 8, -9
  05c6b80  srwi 9, 9, 3
  05c6b84  addi 9, 9, 1
  05c6b88  clrldi 9, 9, 32
  05c6b8c  mtctr 9
  05c6b90  clrldi 9, 4, 32
  05c6b94  clrldi 11, 3, 32
  05c6b98  addi 4, 4, 8
  05c6b9c  addi 3, 3, 8
  05c6ba0  addi 5, 5, -8
  05c6ba4  lhz 0, 6(9)
  05c6ba8  lhz 10, 0(9)
  05c6bac  lhz 8, 2(9)
  05c6bb0  lhz 7, 4(9)
  05c6bb4  sth 0, 6(11)
  05c6bb8  sth 10, 0(11)
  05c6bbc  sth 8, 2(11)
  05c6bc0  sth 7, 4(11)
  05c6bc4  bdnz 0x5c6b90
  05c6bc8  cmplwi 7, 5, 1
  05c6bcc  bf 29, 0x5c6298
  05c6bd0  addi 9, 5, -2
  05c6bd4  li 10, 0
  05c6bd8  srwi 9, 9, 1
  05c6bdc  addi 9, 9, 1
  05c6be0  clrldi 9, 9, 32
  05c6be4  mtctr 9
  05c6be8  add 9, 10, 4
  05c6bec  add 11, 10, 3
  05c6bf0  clrldi 9, 9, 32
  05c6bf4  clrldi 11, 11, 32
  05c6bf8  addi 5, 5, -2
  05c6bfc  addi 10, 10, 2
  05c6c00  lhz 0, 0(9)
  05c6c04  sth 0, 0(11)
  05c6c08  bdnz 0x5c6be8
  05c6c0c  b 0x5c6440
  05c6c10  cmpwi 7, 11, 0
  05c6c14  bf 30, 0x5c6d5c
  05c6c18  addi 4, 12, -1
  05c6c1c  addi 3, 31, -1
  05c6c20  clrldi 9, 4, 32
  05c6c24  clrlwi 10, 3, 29
  05c6c28  clrldi 11, 3, 32
  05c6c2c  cmpwi 7, 10, 4
  05c6c30  addi 30, 8, -1
  05c6c34  lbz 0, 0(9)
  05c6c38  stb 0, 0(11)
  05c6c3c  bt 30, 0x5c7110
  05c6c40  cmpwi 7, 10, 6
  05c6c44  bt 30, 0x5c7340
  05c6c48  cmpwi 7, 10, 2
  05c6c4c  bt 30, 0x5c70ec
  05c6c50  cmplwi 7, 30, 31
  05c6c54  mr 31, 3
  05c6c58  mr 29, 4
  05c6c5c  bf 29, 0x5c6cdc
  05c6c60  addi 9, 30, -32
  05c6c64  srwi 9, 9, 5
  05c6c68  addi 9, 9, 1
  05c6c6c  clrldi 9, 9, 32
  05c6c70  mtctr 9
  05c6c74  addi 8, 29, -8
  05c6c78  addi 7, 29, -16
  05c6c7c  addi 6, 29, -24
  05c6c80  addi 29, 29, -32
  05c6c84  clrldi 8, 8, 32
  05c6c88  clrldi 7, 7, 32
  05c6c8c  addi 9, 31, -8
  05c6c90  addi 11, 31, -16
  05c6c94  addi 10, 31, -24
  05c6c98  clrldi 6, 6, 32
  05c6c9c  ld 0, 0(8)
  05c6ca0  addi 31, 31, -32
  05c6ca4  ld 5, 0(7)
  05c6ca8  clrldi 4, 29, 32
  05c6cac  clrldi 9, 9, 32
  05c6cb0  clrldi 11, 11, 32
  05c6cb4  clrldi 10, 10, 32
  05c6cb8  ld 8, 0(6)
  05c6cbc  clrldi 3, 31, 32
  05c6cc0  ld 7, 0(4)
  05c6cc4  addi 30, 30, -32
  05c6cc8  std 0, 0(9)
  05c6ccc  std 5, 0(11)
  05c6cd0  std 8, 0(10)
  05c6cd4  std 7, 0(3)
  05c6cd8  bdnz 0x5c6c74
  05c6cdc  cmplwi 7, 30, 7
  05c6ce0  bf 29, 0x5c67d8
  05c6ce4  addi 9, 30, -8
  05c6ce8  srwi 9, 9, 3
  05c6cec  addi 9, 9, 1
  05c6cf0  clrldi 9, 9, 32
  05c6cf4  mtctr 9
  05c6cf8  addi 29, 29, -8
  05c6cfc  addi 31, 31, -8
  05c6d00  clrldi 9, 29, 32
  05c6d04  clrldi 11, 31, 32
  05c6d08  addi 30, 30, -8
  05c6d0c  ld 0, 0(9)
  05c6d10  std 0, 0(11)
  05c6d14  bdnz 0x5c6cf8
  05c6d18  mr 12, 29
  05c6d1c  b 0x5c61c0
  05c6d20  clrldi 9, 31, 32
  05c6d24  clrldi 11, 30, 32
  05c6d28  addi 5, 8, -3
  05c6d2c  addi 30, 3, 3
  05c6d30  addi 31, 4, 3
  05c6d34  lhz 0, 0(9)
  05c6d38  sth 0, 0(11)
  05c6d3c  clrldi 9, 31, 32
  05c6d40  clrldi 11, 30, 32
  05c6d44  addi 5, 5, -4
  05c6d48  addi 30, 30, 4
  05c6d4c  addi 31, 31, 4
  05c6d50  lwz 0, 0(9)
  05c6d54  stw 0, 0(11)
  05c6d58  b 0x5c65e8
  05c6d5c  cmpwi 7, 11, 4
  05c6d60  bt 30, 0x5c7224
  05c6d64  cmpwi 7, 11, 2
  05c6d68  mr 30, 8
  05c6d6c  bf 30, 0x5c61c8
  05c6d70  addi 11, 12, -1
  05c6d74  addi 0, 31, -1
  05c6d78  clrldi 9, 11, 32
  05c6d7c  clrldi 10, 0, 32
  05c6d80  addi 30, 8, -1
  05c6d84  mr 31, 0
  05c6d88  cmplwi 7, 30, 7
  05c6d8c  lbz 0, 0(9)
  05c6d90  mr 29, 11
  05c6d94  stb 0, 0(10)
  05c6d98  bf 29, 0x5c6e18
  05c6d9c  addi 9, 8, -9
  05c6da0  srwi 9, 9, 3
  05c6da4  addi 9, 9, 1
  05c6da8  clrldi 9, 9, 32
  05c6dac  mtctr 9
  05c6db0  addi 8, 29, -2
  05c6db4  addi 7, 29, -4
  05c6db8  addi 6, 29, -6
  05c6dbc  addi 29, 29, -8
  05c6dc0  clrldi 8, 8, 32
  05c6dc4  clrldi 7, 7, 32
  05c6dc8  addi 9, 31, -2
  05c6dcc  addi 11, 31, -4
  05c6dd0  addi 10, 31, -6
  05c6dd4  clrldi 6, 6, 32
  05c6dd8  lhz 0, 0(8)
  05c6ddc  addi 31, 31, -8
  05c6de0  lhz 5, 0(7)
  05c6de4  clrldi 4, 29, 32
  05c6de8  clrldi 9, 9, 32
  05c6dec  clrldi 11, 11, 32
  05c6df0  clrldi 10, 10, 32
  05c6df4  lhz 8, 0(6)
  05c6df8  clrldi 3, 31, 32
  05c6dfc  lhz 7, 0(4)
  05c6e00  addi 30, 30, -8
  05c6e04  sth 0, 0(9)
  05c6e08  sth 5, 0(11)
  05c6e0c  sth 8, 0(10)
  05c6e10  sth 7, 0(3)
  05c6e14  bdnz 0x5c6db0
  05c6e18  cmplwi 7, 30, 1
  05c6e1c  bf 29, 0x5c67d8
  05c6e20  addi 9, 30, -2
  05c6e24  srwi 9, 9, 1
  05c6e28  addi 9, 9, 1
  05c6e2c  clrldi 9, 9, 32
  05c6e30  mtctr 9
  05c6e34  addi 29, 29, -2
  05c6e38  addi 31, 31, -2
  05c6e3c  clrldi 9, 29, 32
  05c6e40  clrldi 11, 31, 32
  05c6e44  addi 30, 30, -2
  05c6e48  lhz 0, 0(9)
  05c6e4c  sth 0, 0(11)
  05c6e50  bdnz 0x5c6e34
  05c6e54  mr 12, 29
  05c6e58  b 0x5c61c0
  05c6e5c  addi 9, 8, -8
  05c6e60  cmpwi 7, 11, 4
  05c6e64  srwi 9, 9, 3
  05c6e68  mr 30, 8
  05c6e6c  addi 9, 9, 1
  05c6e70  clrldi 9, 9, 32
  05c6e74  mtctr 9
  05c6e78  bt 30, 0x5c7138
  05c6e7c  addi 8, 29, -2
  05c6e80  addi 7, 29, -4
  05c6e84  addi 6, 29, -6
  05c6e88  addi 29, 29, -8
  05c6e8c  clrldi 8, 8, 32
  05c6e90  clrldi 7, 7, 32
  05c6e94  addi 9, 28, -2
  05c6e98  addi 11, 28, -4
  05c6e9c  addi 10, 28, -6
  05c6ea0  clrldi 6, 6, 32
  05c6ea4  lhz 0, 0(8)
  05c6ea8  addi 28, 28, -8
  05c6eac  lhz 5, 0(7)
  05c6eb0  clrldi 4, 29, 32
  05c6eb4  clrldi 9, 9, 32
  05c6eb8  clrldi 11, 11, 32
  05c6ebc  clrldi 10, 10, 32
  05c6ec0  lhz 8, 0(6)
  05c6ec4  clrldi 3, 28, 32
  05c6ec8  lhz 7, 0(4)
  05c6ecc  addi 30, 30, -8
  05c6ed0  sth 0, 0(9)
  05c6ed4  sth 5, 0(11)
  05c6ed8  sth 8, 0(10)
  05c6edc  sth 7, 0(3)
  05c6ee0  bdnz 0x5c6e7c
  05c6ee4  cmplwi 7, 30, 1
  05c6ee8  bf 29, 0x5c6a88
  05c6eec  addi 9, 30, -2
  05c6ef0  srwi 9, 9, 1
  05c6ef4  addi 9, 9, 1
  05c6ef8  clrldi 9, 9, 32
  05c6efc  mtctr 9
  05c6f00  addi 29, 29, -2
  05c6f04  addi 28, 28, -2
  05c6f08  clrldi 9, 29, 32
  05c6f0c  clrldi 11, 28, 32
  05c6f10  addi 30, 30, -2
  05c6f14  lhz 0, 0(9)
  05c6f18  sth 0, 0(11)
  05c6f1c  bdnz 0x5c6f00
  05c6f20  b 0x5c6a88
  05c6f24  clrldi 11, 4, 32
  05c6f28  addi 31, 3, 1
  05c6f2c  clrldi 10, 3, 32
  05c6f30  clrlwi 0, 31, 30
  05c6f34  addi 30, 4, 1
  05c6f38  cmpwi 7, 0, 0
  05c6f3c  lbz 9, 0(11)
  05c6f40  addi 5, 8, -1
  05c6f44  stb 9, 0(10)
  05c6f48  bt 30, 0x5c6f68
  05c6f4c  clrldi 9, 30, 32
  05c6f50  clrldi 11, 31, 32
  05c6f54  addi 5, 8, -3
  05c6f58  addi 31, 3, 3
  05c6f5c  addi 30, 4, 3
  05c6f60  lhz 0, 0(9)
  05c6f64  sth 0, 0(11)
  05c6f68  cmplwi 7, 5, 15
  05c6f6c  mr 3, 31
  05c6f70  mr 4, 30
  05c6f74  bf 29, 0x5c6fd4
  05c6f78  addi 9, 5, -16
  05c6f7c  li 6, 0
  05c6f80  srwi 9, 9, 4
  05c6f84  addi 9, 9, 1
  05c6f88  clrldi 9, 9, 32
  05c6f8c  mtctr 9
  05c6f90  add 9, 6, 30
  05c6f94  add 11, 6, 31
  05c6f98  clrldi 9, 9, 32
  05c6f9c  clrldi 11, 11, 32
  05c6fa0  addi 5, 5, -16
  05c6fa4  addi 6, 6, 16
  05c6fa8  lwz 10, 0(9)
  05c6fac  lwz 8, 4(9)
  05c6fb0  lwz 7, 8(9)
  05c6fb4  lwz 0, 12(9)
  05c6fb8  stw 10, 0(11)
  05c6fbc  stw 0, 12(11)
  05c6fc0  stw 8, 4(11)
  05c6fc4  stw 7, 8(11)
  05c6fc8  bdnz 0x5c6f90
  05c6fcc  add 3, 31, 6
  05c6fd0  add 4, 30, 6
  05c6fd4  cmplwi 7, 5, 3
  05c6fd8  bf 29, 0x5c6298
  05c6fdc  addi 9, 5, -4
  05c6fe0  li 8, 0
  05c6fe4  srwi 9, 9, 2
  05c6fe8  addi 9, 9, 1
  05c6fec  clrldi 9, 9, 32
  05c6ff0  mtctr 9
  05c6ff4  add 9, 8, 4
  05c6ff8  add 11, 8, 3
  05c6ffc  clrldi 9, 9, 32
  05c7000  clrldi 11, 11, 32
  05c7004  addi 5, 5, -4
  05c7008  addi 8, 8, 4
  05c700c  lwz 0, 0(9)
  05c7010  stw 0, 0(11)
  05c7014  bdnz 0x5c6ff4
  05c7018  b 0x5c64f0
  05c701c  addi 5, 8, -2
  05c7020  lhz 0, 0(31)
  05c7024  addi 4, 31, 2
  05c7028  cmplwi 7, 5, 15
  05c702c  sth 0, 0(27)
  05c7030  addi 3, 27, 2
  05c7034  bf 29, 0x5c7084
  05c7038  addi 9, 8, -18
  05c703c  srwi 9, 9, 4
  05c7040  addi 9, 9, 1
  05c7044  clrldi 9, 9, 32
  05c7048  mtctr 9
  05c704c  clrldi 9, 4, 32
  05c7050  clrldi 11, 3, 32
  05c7054  addi 4, 4, 16
  05c7058  addi 3, 3, 16
  05c705c  addi 5, 5, -16
  05c7060  lwz 0, 12(9)
  05c7064  lwz 10, 0(9)
  05c7068  lwz 8, 4(9)
  05c706c  lwz 7, 8(9)
  05c7070  stw 0, 12(11)
  05c7074  stw 10, 0(11)
  05c7078  stw 8, 4(11)
  05c707c  stw 7, 8(11)
  05c7080  bdnz 0x5c704c
  05c7084  cmplwi 7, 5, 3
  05c7088  bf 29, 0x5c6298
  05c708c  addi 9, 5, -4
  05c7090  li 10, 0
  05c7094  srwi 9, 9, 2
  05c7098  addi 9, 9, 1
  05c709c  clrldi 9, 9, 32
  05c70a0  mtctr 9
  05c70a4  add 9, 10, 4
  05c70a8  add 11, 10, 3
  05c70ac  clrldi 9, 9, 32
  05c70b0  clrldi 11, 11, 32
  05c70b4  addi 5, 5, -4
  05c70b8  addi 10, 10, 4
  05c70bc  lwz 0, 0(9)
  05c70c0  stw 0, 0(11)
  05c70c4  bdnz 0x5c70a4
  05c70c8  b 0x5c6440
  05c70cc  clrldi 9, 31, 32
  05c70d0  clrldi 11, 30, 32
  05c70d4  addi 5, 8, -3
  05c70d8  addi 30, 3, 3
  05c70dc  addi 31, 4, 3
  05c70e0  lhz 0, 0(9)
  05c70e4  sth 0, 0(11)
  05c70e8  b 0x5c65e8
  05c70ec  addi 9, 12, -3
  05c70f0  addi 0, 31, -3
  05c70f4  clrldi 11, 9, 32
  05c70f8  clrldi 10, 0, 32
  05c70fc  mr 3, 0
  05c7100  addi 30, 8, -3
  05c7104  mr 4, 9
  05c7108  lhz 0, 0(11)
  05c710c  sth 0, 0(10)
  05c7110  addi 9, 4, -4
  05c7114  addi 0, 3, -4
  05c7118  clrldi 11, 9, 32
  05c711c  clrldi 10, 0, 32
  05c7120  mr 3, 0
  05c7124  addi 30, 30, -4
  05c7128  mr 4, 9
  05c712c  lwz 0, 0(11)
  05c7130  stw 0, 0(10)
  05c7134  b 0x5c6c50
  05c7138  addi 11, 12, -2
  05c713c  addi 0, 31, -2
  05c7140  clrldi 9, 11, 32
  05c7144  clrldi 10, 0, 32
  05c7148  addi 30, 8, -2
  05c714c  mr 31, 0
  05c7150  cmplwi 7, 30, 15
  05c7154  lhz 0, 0(9)
  05c7158  mr 29, 11
  05c715c  sth 0, 0(10)
  05c7160  bf 29, 0x5c71e0
  05c7164  addi 9, 8, -18
  05c7168  srwi 9, 9, 4
  05c716c  addi 9, 9, 1
  05c7170  clrldi 9, 9, 32
  05c7174  mtctr 9
  05c7178  addi 8, 29, -4
  05c717c  addi 7, 29, -8
  05c7180  addi 6, 29, -12
  05c7184  addi 29, 29, -16
  05c7188  clrldi 8, 8, 32
  05c718c  clrldi 7, 7, 32
  05c7190  addi 9, 31, -4
  05c7194  addi 11, 31, -8
  05c7198  addi 10, 31, -12
  05c719c  clrldi 6, 6, 32
  05c71a0  lwz 0, 0(8)
  05c71a4  addi 31, 31, -16
  05c71a8  lwz 5, 0(7)
  05c71ac  clrldi 4, 29, 32
  05c71b0  clrldi 9, 9, 32
  05c71b4  clrldi 11, 11, 32
  05c71b8  clrldi 10, 10, 32
  05c71bc  lwz 8, 0(6)
  05c71c0  clrldi 3, 31, 32
  05c71c4  lwz 7, 0(4)
  05c71c8  addi 30, 30, -16
  05c71cc  stw 0, 0(9)
  05c71d0  stw 5, 0(11)
  05c71d4  stw 8, 0(10)
  05c71d8  stw 7, 0(3)
  05c71dc  bdnz 0x5c7178
  05c71e0  cmplwi 7, 30, 3
  05c71e4  bf 29, 0x5c67d8
  05c71e8  addi 9, 30, -4
  05c71ec  srwi 9, 9, 2
  05c71f0  addi 9, 9, 1
  05c71f4  clrldi 9, 9, 32
  05c71f8  mtctr 9
  05c71fc  addi 29, 29, -4
  05c7200  addi 31, 31, -4
  05c7204  clrldi 9, 29, 32
  05c7208  clrldi 11, 31, 32
  05c720c  addi 30, 30, -4
  05c7210  lwz 0, 0(9)
  05c7214  stw 0, 0(11)
  05c7218  bdnz 0x5c71fc
  05c721c  mr 12, 29
  05c7220  b 0x5c61c0
  05c7224  addi 4, 12, -1
  05c7228  addi 3, 31, -1
  05c722c  clrldi 9, 4, 32
  05c7230  clrlwi 0, 3, 30
  05c7234  clrldi 11, 3, 32
  05c7238  cmpwi 7, 0, 0
  05c723c  addi 30, 8, -1
  05c7240  lbz 0, 0(9)
  05c7244  stb 0, 0(11)
  05c7248  bt 30, 0x5c7270
  05c724c  addi 9, 12, -3
  05c7250  addi 0, 31, -3
  05c7254  clrldi 11, 9, 32
  05c7258  clrldi 10, 0, 32
  05c725c  mr 3, 0
  05c7260  addi 30, 8, -3
  05c7264  mr 4, 9
  05c7268  lhz 0, 0(11)
  05c726c  sth 0, 0(10)
  05c7270  cmplwi 7, 30, 15
  05c7274  mr 31, 3
  05c7278  mr 29, 4
  05c727c  bf 29, 0x5c72fc
  05c7280  addi 9, 30, -16
  05c7284  srwi 9, 9, 4
  05c7288  addi 9, 9, 1
  05c728c  clrldi 9, 9, 32
  05c7290  mtctr 9
  05c7294  addi 8, 29, -4
  05c7298  addi 7, 29, -8
  05c729c  addi 6, 29, -12
  05c72a0  addi 29, 29, -16
  05c72a4  clrldi 8, 8, 32
  05c72a8  clrldi 7, 7, 32
  05c72ac  addi 9, 31, -4
  05c72b0  addi 11, 31, -8
  05c72b4  addi 10, 31, -12
  05c72b8  clrldi 6, 6, 32
  05c72bc  lwz 0, 0(8)
  05c72c0  addi 31, 31, -16
  05c72c4  lwz 5, 0(7)
  05c72c8  clrldi 4, 29, 32
  05c72cc  clrldi 9, 9, 32
  05c72d0  clrldi 11, 11, 32
  05c72d4  clrldi 10, 10, 32
  05c72d8  lwz 8, 0(6)
  05c72dc  clrldi 3, 31, 32
  05c72e0  lwz 7, 0(4)
  05c72e4  addi 30, 30, -16
  05c72e8  stw 0, 0(9)
  05c72ec  stw 5, 0(11)
  05c72f0  stw 8, 0(10)
  05c72f4  stw 7, 0(3)
  05c72f8  bdnz 0x5c7294
  05c72fc  cmplwi 7, 30, 3
  05c7300  bf 29, 0x5c67d8
  05c7304  addi 9, 30, -4
  05c7308  srwi 9, 9, 2
  05c730c  addi 9, 9, 1
  05c7310  clrldi 9, 9, 32
  05c7314  mtctr 9
  05c7318  addi 29, 29, -4
  05c731c  addi 31, 31, -4
  05c7320  clrldi 9, 29, 32
  05c7324  clrldi 11, 31, 32
  05c7328  addi 30, 30, -4
  05c732c  lwz 0, 0(9)
  05c7330  stw 0, 0(11)
  05c7334  bdnz 0x5c7318
  05c7338  mr 12, 29
  05c733c  b 0x5c61c0
  05c7340  addi 9, 12, -3
  05c7344  addi 0, 31, -3
  05c7348  clrldi 11, 9, 32
  05c734c  clrldi 10, 0, 32
  05c7350  mr 3, 0
  05c7354  addi 30, 8, -3
  05c7358  mr 4, 9
  05c735c  lhz 0, 0(11)
  05c7360  sth 0, 0(10)
  05c7364  b 0x5c6c50
