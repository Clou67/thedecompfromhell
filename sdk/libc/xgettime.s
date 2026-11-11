# sdk/libc/xgettime.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Gettime:   # 0x5dc734, 0x118 bytes
  05dc734  stdu 1, -160(1)
  05dc738  mflr 0
  05dc73c  std 31, 152(1)
  05dc740  clrldi 31, 3, 32
  05dc744  std 27, 120(1)
  05dc748  std 28, 128(1)
  05dc74c  std 29, 136(1)
  05dc750  std 30, 144(1)
  05dc754  std 0, 176(1)
  05dc758  lbz 0, 0(31)
  05dc75c  mr 30, 3
  05dc760  mr 27, 5
  05dc764  extsb 0, 0
  05dc768  mr 29, 4
  05dc76c  cmpwi 7, 0, 0
  05dc770  li 28, 0
  05dc774  bt 30, 0x5dc7b0
  05dc778  addi 30, 3, 1
  05dc77c  extsw 28, 0
  05dc780  clrldi 31, 30, 32
  05dc784  b 0x5dc7b0
  05dc788  cmpwi 7, 29, 0
  05dc78c  clrldi 11, 9, 32
  05dc790  addi 29, 29, -1
  05dc794  bf 29, 0x5dc7ec
  05dc798  lbz 0, 0(11)
  05dc79c  addi 30, 9, 1
  05dc7a0  extsb 0, 0
  05dc7a4  clrldi 31, 30, 32
  05dc7a8  cmpwi 7, 0, 0
  05dc7ac  bt 30, 0x5dc81c
  05dc7b0  mr 4, 28
  05dc7b4  mr 3, 31
  05dc7b8  bl 0x5cc578
  05dc7bc  nop
  05dc7c0  mr 9, 3
  05dc7c4  mr 3, 31
  05dc7c8  cmpwi 7, 9, 0
  05dc7cc  bf 30, 0x5dc788
  05dc7d0  bl 0x5c8510
  05dc7d4  nop
  05dc7d8  cmpwi 7, 29, 0
  05dc7dc  add 9, 30, 3
  05dc7e0  addi 29, 29, -1
  05dc7e4  clrldi 11, 9, 32
  05dc7e8  bt 29, 0x5dc798
  05dc7ec  sub 0, 9, 30
  05dc7f0  ld 28, 128(1)
  05dc7f4  mr 3, 31
  05dc7f8  ld 29, 136(1)
  05dc7fc  stw 0, 0(27)
  05dc800  ld 0, 176(1)
  05dc804  ld 27, 120(1)
  05dc808  ld 30, 144(1)
  05dc80c  mtlr 0
  05dc810  ld 31, 152(1)
  05dc814  addi 1, 1, 160
  05dc818  blr
  05dc81c  mr 31, 11
  05dc820  ld 28, 128(1)
  05dc824  stw 0, 0(27)
  05dc828  ld 0, 176(1)
  05dc82c  mr 3, 31
  05dc830  ld 27, 120(1)
  05dc834  ld 29, 136(1)
  05dc838  mtlr 0
  05dc83c  ld 30, 144(1)
  05dc840  ld 31, 152(1)
  05dc844  addi 1, 1, 160
  05dc848  blr
