# sdk/libc/xstoxflt.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Stoxflt:   # 0x5caf7c, 0x580 bytes
  05caf7c  mfcr 12
  05caf80  stdu 1, -224(1)
  05caf84  std 28, 192(1)
  05caf88  clrldi 28, 4, 32
  05caf8c  std 19, 120(1)
  05caf90  std 20, 128(1)
  05caf94  std 21, 136(1)
  05caf98  std 23, 152(1)
  05caf9c  std 24, 160(1)
  05cafa0  std 25, 168(1)
  05cafa4  std 30, 208(1)
  05cafa8  std 22, 144(1)
  05cafac  std 26, 176(1)
  05cafb0  std 27, 184(1)
  05cafb4  std 29, 200(1)
  05cafb8  std 31, 216(1)
  05cafbc  mr 30, 4
  05cafc0  mr 21, 5
  05cafc4  mr 24, 6
  05cafc8  mr 20, 3
  05cafcc  mr 19, 5
  05cafd0  li 23, 0
  05cafd4  stw 12, 232(1)
  05cafd8  mflr 0
  05cafdc  std 0, 240(1)
  05cafe0  lbz 9, 0(28)
  05cafe4  slwi 0, 7, 3
  05cafe8  cmpwi 7, 9, 48
  05cafec  sub 25, 0, 7
  05caff0  mr 9, 6
  05caff4  bf 30, 0x5cb010
  05caff8  addi 30, 30, 1
  05caffc  clrldi 28, 30, 32
  05cb000  lbz 0, 0(28)
  05cb004  cmpwi 7, 0, 48
  05cb008  bt 30, 0x5caff8
  05cb00c  li 23, 1
  05cb010  li 8, 0
  05cb014  lwz 26, -24652(2)
  05cb018  lis 22, -28087
  05cb01c  cmpw 4, 8, 25
  05cb020  mr 27, 9
  05cb024  ori 22, 22, 9363
  05cb028  li 31, 0
  05cb02c  mr 29, 26
  05cb030  stw 8, 0(24)
  05cb034  b 0x5cb094
  05cb038  mulhw 0, 31, 22
  05cb03c  add 0, 0, 31
  05cb040  srawi 0, 0, 2
  05cb044  sub 0, 0, 9
  05cb048  slwi 9, 0, 3
  05cb04c  sub 9, 9, 0
  05cb050  sub 0, 31, 9
  05cb054  addi 31, 31, 1
  05cb058  cmpwi 7, 0, 0
  05cb05c  cmpw 4, 31, 25
  05cb060  bf 30, 0x5cb070
  05cb064  addi 27, 27, 4
  05cb068  clrldi 11, 27, 32
  05cb06c  stw 0, 0(11)
  05cb070  lwz 0, 0(11)
  05cb074  lbz 9, 24(10)
  05cb078  slwi 0, 0, 4
  05cb07c  extsb 9, 9
  05cb080  add 0, 0, 9
  05cb084  stw 0, 0(11)
  05cb088  addi 30, 30, 1
  05cb08c  li 23, 1
  05cb090  clrldi 28, 30, 32
  05cb094  lbz 4, 0(28)
  05cb098  clrldi 3, 26, 32
  05cb09c  li 5, 22
  05cb0a0  extsb 4, 4
  05cb0a4  bl 0x5c5984
  05cb0a8  nop
  05cb0ac  srawi 9, 31, 31
  05cb0b0  sub 0, 3, 29
  05cb0b4  cmpwi 7, 3, 0
  05cb0b8  extsw 0, 0
  05cb0bc  clrldi 11, 27, 32
  05cb0c0  add 10, 0, 29
  05cb0c4  bt 30, 0x5cb11c
  05cb0c8  bt 16, 0x5cb038
  05cb0cc  sub 0, 3, 29
  05cb0d0  lwz 9, 0(24)
  05cb0d4  extsw 0, 0
  05cb0d8  addi 8, 9, 1
  05cb0dc  add 3, 0, 29
  05cb0e0  stw 8, 0(24)
  05cb0e4  bf 18, 0x5cb088
  05cb0e8  lbz 0, 24(3)
  05cb0ec  clrldi 11, 27, 32
  05cb0f0  mr 31, 25
  05cb0f4  extsb 0, 0
  05cb0f8  cmpw 4, 25, 25
  05cb0fc  cmpwi 7, 0, 7
  05cb100  bf 29, 0x5cb088
  05cb104  addi 31, 25, 1
  05cb108  lwz 9, 0(11)
  05cb10c  cmpw 4, 31, 25
  05cb110  addi 9, 9, 1
  05cb114  stw 9, 0(11)
  05cb118  b 0x5cb088
  05cb11c  bf 17, 0x5cb124
  05cb120  mr 31, 25
  05cb124  lwz 10, -24648(2)
  05cb128  lbz 11, 0(28)
  05cb12c  extsb 11, 11
  05cb130  lwz 9, 44(10)
  05cb134  lbz 0, 0(9)
  05cb138  extsb 0, 0
  05cb13c  cmpw 7, 11, 0
  05cb140  bt 30, 0x5cb4d0
  05cb144  cmpwi 7, 31, 0
  05cb148  bf 30, 0x5cb17c
  05cb14c  lbz 0, 0(28)
  05cb150  cmpwi 7, 0, 48
  05cb154  bf 30, 0x5cb17c
  05cb158  lwz 8, 0(24)
  05cb15c  addi 30, 30, 1
  05cb160  addi 8, 8, -1
  05cb164  clrldi 28, 30, 32
  05cb168  stw 8, 0(24)
  05cb16c  lbz 0, 0(28)
  05cb170  cmpwi 7, 0, 48
  05cb174  bt 30, 0x5cb15c
  05cb178  li 23, 1
  05cb17c  lbz 4, 0(28)
  05cb180  mr 3, 26
  05cb184  li 5, 22
  05cb188  extsb 4, 4
  05cb18c  bl 0x5c5984
  05cb190  nop
  05cb194  lis 9, -28087
  05cb198  sub 0, 3, 26
  05cb19c  cmpwi 7, 3, 0
  05cb1a0  extsw 0, 0
  05cb1a4  ori 9, 9, 9363
  05cb1a8  srawi 10, 31, 31
  05cb1ac  add 8, 0, 26
  05cb1b0  cmpw 6, 31, 25
  05cb1b4  clrldi 11, 27, 32
  05cb1b8  bt 30, 0x5cb264
  05cb1bc  addi 30, 30, 1
  05cb1c0  li 23, 1
  05cb1c4  clrldi 28, 30, 32
  05cb1c8  bf 24, 0x5cb17c
  05cb1cc  mulhw 0, 31, 9
  05cb1d0  add 0, 0, 31
  05cb1d4  srawi 0, 0, 2
  05cb1d8  sub 0, 0, 10
  05cb1dc  slwi 9, 0, 3
  05cb1e0  sub 9, 9, 0
  05cb1e4  sub 0, 31, 9
  05cb1e8  addi 31, 31, 1
  05cb1ec  cmpwi 7, 0, 0
  05cb1f0  bf 30, 0x5cb200
  05cb1f4  addi 27, 27, 4
  05cb1f8  clrldi 11, 27, 32
  05cb1fc  stw 0, 0(11)
  05cb200  lwz 9, 0(11)
  05cb204  mr 3, 26
  05cb208  lbz 0, 24(8)
  05cb20c  li 5, 22
  05cb210  slwi 9, 9, 4
  05cb214  extsb 0, 0
  05cb218  add 9, 9, 0
  05cb21c  stw 9, 0(11)
  05cb220  lwz 11, 0(24)
  05cb224  addi 8, 11, -1
  05cb228  stw 8, 0(24)
  05cb22c  lbz 4, 0(28)
  05cb230  extsb 4, 4
  05cb234  bl 0x5c5984
  05cb238  nop
  05cb23c  lis 9, -28087
  05cb240  sub 0, 3, 26
  05cb244  cmpwi 7, 3, 0
  05cb248  extsw 0, 0
  05cb24c  ori 9, 9, 9363
  05cb250  srawi 10, 31, 31
  05cb254  add 8, 0, 26
  05cb258  cmpw 6, 31, 25
  05cb25c  clrldi 11, 27, 32
  05cb260  bf 30, 0x5cb1bc
  05cb264  mulhw 0, 31, 9
  05cb268  add 0, 0, 31
  05cb26c  srawi 0, 0, 2
  05cb270  sub 0, 0, 10
  05cb274  slwi 9, 0, 3
  05cb278  sub 9, 9, 0
  05cb27c  sub 0, 31, 9
  05cb280  cmpwi 7, 0, 0
  05cb284  bt 30, 0x5cb3cc
  05cb288  clrldi 10, 27, 32
  05cb28c  subfic 9, 0, 7
  05cb290  slwi 11, 9, 2
  05cb294  add 31, 31, 9
  05cb298  lwz 0, 0(10)
  05cb29c  slw 0, 0, 11
  05cb2a0  stw 0, 0(10)
  05cb2a4  lwz 8, 0(24)
  05cb2a8  sub 8, 8, 9
  05cb2ac  stw 8, 0(24)
  05cb2b0  cmpwi 7, 31, 6
  05cb2b4  bf 29, 0x5cb324
  05cb2b8  clrldi 9, 27, 32
  05cb2bc  lwz 0, 0(9)
  05cb2c0  cmpwi 7, 0, 0
  05cb2c4  bf 30, 0x5cb324
  05cb2c8  lis 9, 9362
  05cb2cc  addi 0, 31, -7
  05cb2d0  ori 9, 9, 18725
  05cb2d4  cmpwi 7, 0, 0
  05cb2d8  mulhwu 9, 0, 9
  05cb2dc  sub 0, 0, 9
  05cb2e0  srwi 0, 0, 1
  05cb2e4  add 9, 9, 0
  05cb2e8  srwi 9, 9, 2
  05cb2ec  addi 9, 9, 1
  05cb2f0  clrldi 9, 9, 32
  05cb2f4  mtctr 9
  05cb2f8  bf+ 28, 0x5cb30c
  05cb2fc  b 0x5cb4f0
  05cb300  lwz 0, 0(9)
  05cb304  cmpwi 7, 0, 0
  05cb308  bf 30, 0x5cb324
  05cb30c  addi 27, 27, -4
  05cb310  addi 8, 8, 7
  05cb314  clrldi 9, 27, 32
  05cb318  stw 8, 0(24)
  05cb31c  addi 31, 31, -7
  05cb320  bdnz 0x5cb300
  05cb324  cmpwi 7, 23, 0
  05cb328  slwi 8, 8, 2
  05cb32c  stw 8, 0(24)
  05cb330  bt 30, 0x5cb34c
  05cb334  lbz 0, 0(28)
  05cb338  extsb 0, 0
  05cb33c  cmpwi 7, 0, 112
  05cb340  bt 30, 0x5cb3dc
  05cb344  cmpwi 7, 0, 80
  05cb348  bt 30, 0x5cb3dc
  05cb34c  cmpwi 7, 19, 0
  05cb350  bt 30, 0x5cb360
  05cb354  cmpwi 7, 23, 0
  05cb358  bt 30, 0x5cb3d4
  05cb35c  stw 30, 0(21)
  05cb360  lis 3, -28087
  05cb364  lwz 12, 232(1)
  05cb368  srawi 0, 31, 31
  05cb36c  ld 19, 120(1)
  05cb370  ori 3, 3, 9363
  05cb374  ld 20, 128(1)
  05cb378  ld 21, 136(1)
  05cb37c  mtocrf 8, 12
  05cb380  ld 22, 144(1)
  05cb384  ld 23, 152(1)
  05cb388  ld 24, 160(1)
  05cb38c  ld 25, 168(1)
  05cb390  ld 26, 176(1)
  05cb394  ld 27, 184(1)
  05cb398  ld 28, 192(1)
  05cb39c  ld 29, 200(1)
  05cb3a0  ld 30, 208(1)
  05cb3a4  mulhw 3, 31, 3
  05cb3a8  add 3, 3, 31
  05cb3ac  ld 31, 216(1)
  05cb3b0  srawi 3, 3, 2
  05cb3b4  sub 3, 3, 0
  05cb3b8  ld 0, 240(1)
  05cb3bc  addi 1, 1, 224
  05cb3c0  extsw 3, 3
  05cb3c4  mtlr 0
  05cb3c8  blr
  05cb3cc  lwz 8, 0(24)
  05cb3d0  b 0x5cb2b0
  05cb3d4  mr 30, 20
  05cb3d8  b 0x5cb35c
  05cb3dc  addi 7, 30, 1
  05cb3e0  clrldi 9, 7, 32
  05cb3e4  lbz 0, 0(9)
  05cb3e8  extsb 4, 0
  05cb3ec  cmpwi 7, 4, 43
  05cb3f0  bt 30, 0x5cb4dc
  05cb3f4  cmpwi 7, 4, 45
  05cb3f8  bt 30, 0x5cb4dc
  05cb3fc  li 4, 43
  05cb400  lwz 11, -24644(2)
  05cb404  li 23, 0
  05cb408  lbz 10, 0(9)
  05cb40c  li 6, 0
  05cb410  slwi 9, 10, 1
  05cb414  lwz 5, 0(11)
  05cb418  add 9, 9, 5
  05cb41c  clrldi 9, 9, 32
  05cb420  lhz 0, 0(9)
  05cb424  rlwinm 0, 0, 0, 26, 26
  05cb428  cmpwi 7, 0, 0
  05cb42c  bt 30, 0x5cb4b4
  05cb430  addi 7, 7, 1
  05cb434  slwi 0, 6, 3
  05cb438  clrldi 11, 7, 32
  05cb43c  slwi 9, 6, 1
  05cb440  add 9, 9, 0
  05cb444  lis 0, 1525
  05cb448  add 9, 9, 10
  05cb44c  lbz 10, 0(11)
  05cb450  ori 0, 0, 57599
  05cb454  addi 6, 9, -48
  05cb458  slwi 9, 10, 1
  05cb45c  cmpw 6, 6, 0
  05cb460  add 9, 9, 5
  05cb464  clrldi 9, 9, 32
  05cb468  lhz 0, 0(9)
  05cb46c  rlwinm 0, 0, 0, 26, 26
  05cb470  cmpwi 7, 0, 0
  05cb474  bt 30, 0x5cb4b0
  05cb478  bf 25, 0x5cb430
  05cb47c  addi 7, 7, 1
  05cb480  lis 0, 1525
  05cb484  clrldi 11, 7, 32
  05cb488  ori 0, 0, 57599
  05cb48c  cmpw 6, 6, 0
  05cb490  lbz 10, 0(11)
  05cb494  slwi 9, 10, 1
  05cb498  add 9, 9, 5
  05cb49c  clrldi 9, 9, 32
  05cb4a0  lhz 0, 0(9)
  05cb4a4  rlwinm 0, 0, 0, 26, 26
  05cb4a8  cmpwi 7, 0, 0
  05cb4ac  bf 30, 0x5cb478
  05cb4b0  li 23, 1
  05cb4b4  cmpwi 7, 4, 45
  05cb4b8  bt 30, 0x5cb4e8
  05cb4bc  add 0, 6, 8
  05cb4c0  mr 20, 30
  05cb4c4  mr 30, 7
  05cb4c8  stw 0, 0(24)
  05cb4cc  b 0x5cb34c
  05cb4d0  addi 30, 30, 1
  05cb4d4  clrldi 28, 30, 32
  05cb4d8  b 0x5cb144
  05cb4dc  addi 7, 7, 1
  05cb4e0  clrldi 9, 7, 32
  05cb4e4  b 0x5cb400
  05cb4e8  neg 6, 6
  05cb4ec  b 0x5cb4bc
  05cb4f0  li 0, 1
  05cb4f4  mtctr 0
  05cb4f8  b 0x5cb30c
