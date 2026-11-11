# sdk/libc/xstrftim.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_CStrftime:   # 0x5daab0, 0x29c bytes
  05daab0  stdu 1, -288(1)
  05daab4  mflr 0
  05daab8  std 29, 264(1)
  05daabc  mr 29, 3
  05daac0  clrldi 3, 5, 32
  05daac4  std 19, 184(1)
  05daac8  std 20, 192(1)
  05daacc  std 21, 200(1)
  05daad0  std 22, 208(1)
  05daad4  std 23, 216(1)
  05daad8  std 24, 224(1)
  05daadc  std 26, 240(1)
  05daae0  std 27, 248(1)
  05daae4  std 28, 256(1)
  05daae8  std 31, 280(1)
  05daaec  std 0, 304(1)
  05daaf0  std 25, 232(1)
  05daaf4  std 30, 272(1)
  05daaf8  mr 28, 5
  05daafc  mr 27, 4
  05dab00  mr 23, 6
  05dab04  mr 22, 7
  05dab08  bl 0x5c8510
  05dab0c  nop
  05dab10  li 0, 0
  05dab14  mr 26, 29
  05dab18  mr 19, 29
  05dab1c  mr 31, 3
  05dab20  li 29, 0
  05dab24  addi 21, 1, 116
  05dab28  addi 20, 1, 152
  05dab2c  addi 24, 1, 120
  05dab30  sth 0, 126(1)
  05dab34  stw 0, 120(1)
  05dab38  sth 0, 124(1)
  05dab3c  or 0, 29, 31
  05dab40  cmpwi 7, 0, 0
  05dab44  bt 30, 0x5dabdc
  05dab48  cmpwi 7, 31, 0
  05dab4c  addi 25, 1, 112
  05dab50  bf 30, 0x5dab6c
  05dab54  addi 29, 29, -1
  05dab58  slwi 9, 29, 2
  05dab5c  extsw 9, 9
  05dab60  add 9, 25, 9
  05dab64  lwz 31, 16(9)
  05dab68  lwz 28, 28(9)
  05dab6c  clrldi 30, 28, 32
  05dab70  mr 3, 25
  05dab74  mr 4, 30
  05dab78  clrldi 5, 31, 32
  05dab7c  clrldi 6, 24, 32
  05dab80  bl 0x5d9b38
  05dab84  nop
  05dab88  cmpwi 7, 3, 0
  05dab8c  mr 9, 3
  05dab90  bf 29, 0x5dacc4
  05dab94  lhz 0, 112(1)
  05dab98  add 28, 28, 9
  05dab9c  sub 31, 31, 9
  05daba0  cmpwi 7, 0, 37
  05daba4  bt 30, 0x5dac40
  05daba8  cmplw 7, 27, 9
  05dabac  bt 28, 0x5dabf4
  05dabb0  sub 4, 28, 9
  05dabb4  clrldi 3, 26, 32
  05dabb8  clrldi 4, 4, 32
  05dabbc  clrldi 5, 9, 32
  05dabc0  sub 27, 27, 9
  05dabc4  add 26, 26, 9
  05dabc8  bl 0x5c5ad0
  05dabcc  nop
  05dabd0  or 0, 29, 31
  05dabd4  cmpwi 7, 0, 0
  05dabd8  bf 30, 0x5dab48
  05dabdc  cmpwi 7, 27, 0
  05dabe0  bt 30, 0x5dabf4
  05dabe4  clrldi 9, 26, 32
  05dabe8  sub 3, 26, 19
  05dabec  stb 0, 0(9)
  05dabf0  b 0x5dabf8
  05dabf4  li 3, 0
  05dabf8  ld 0, 304(1)
  05dabfc  clrldi 3, 3, 32
  05dac00  ld 19, 184(1)
  05dac04  ld 20, 192(1)
  05dac08  mtlr 0
  05dac0c  ld 21, 200(1)
  05dac10  ld 22, 208(1)
  05dac14  ld 23, 216(1)
  05dac18  ld 24, 224(1)
  05dac1c  ld 25, 232(1)
  05dac20  ld 26, 240(1)
  05dac24  ld 27, 248(1)
  05dac28  ld 28, 256(1)
  05dac2c  ld 29, 264(1)
  05dac30  ld 30, 272(1)
  05dac34  ld 31, 280(1)
  05dac38  addi 1, 1, 288
  05dac3c  blr
  05dac40  cmpwi 7, 31, 0
  05dac44  bt 30, 0x5daba8
  05dac48  clrldi 9, 28, 32
  05dac4c  lbz 5, 0(9)
  05dac50  extsb 0, 5
  05dac54  cmpwi 7, 0, 69
  05dac58  bt 30, 0x5dacd4
  05dac5c  cmpwi 7, 0, 79
  05dac60  bt 30, 0x5dacd4
  05dac64  extsb 6, 5
  05dac68  clrldi 3, 23, 32
  05dac6c  li 5, 0
  05dac70  clrldi 4, 22, 32
  05dac74  clrldi 7, 21, 32
  05dac78  clrldi 8, 20, 32
  05dac7c  addi 28, 28, 1
  05dac80  bl 0x5dbcd8
  05dac84  nop
  05dac88  lwz 5, 116(1)
  05dac8c  cmpwi 7, 5, 0
  05dac90  addi 31, 31, -1
  05dac94  bf 29, 0x5dad18
  05dac98  cmplw 7, 27, 5
  05dac9c  bt 28, 0x5dabf4
  05daca0  clrldi 4, 3, 32
  05daca4  clrldi 5, 5, 32
  05daca8  clrldi 3, 26, 32
  05dacac  bl 0x5c5ad0
  05dacb0  nop
  05dacb4  lwz 0, 116(1)
  05dacb8  sub 27, 27, 0
  05dacbc  add 26, 26, 0
  05dacc0  b 0x5dab3c
  05dacc4  lbz 0, 0(30)
  05dacc8  neg 0, 0
  05daccc  rldicl 9, 0, 1, 63
  05dacd0  b 0x5dab94
  05dacd4  addi 28, 28, 1
  05dacd8  extsb 5, 5
  05dacdc  clrldi 9, 28, 32
  05dace0  clrldi 3, 23, 32
  05dace4  clrldi 4, 22, 32
  05dace8  clrldi 7, 21, 32
  05dacec  clrldi 8, 20, 32
  05dacf0  lbz 6, 0(9)
  05dacf4  addi 31, 31, -1
  05dacf8  addi 28, 28, 1
  05dacfc  extsb 6, 6
  05dad00  addi 31, 31, -1
  05dad04  bl 0x5dbcd8
  05dad08  nop
  05dad0c  lwz 5, 116(1)
  05dad10  cmpwi 7, 5, 0
  05dad14  bt 29, 0x5dac98
  05dad18  cmpwi 7, 31, 0
  05dad1c  bt 30, 0x5dad40
  05dad20  cmplwi 7, 29, 2
  05dad24  bt 29, 0x5dad40
  05dad28  slwi 9, 29, 2
  05dad2c  addi 29, 29, 1
  05dad30  extsw 9, 9
  05dad34  add 9, 25, 9
  05dad38  stw 31, 16(9)
  05dad3c  stw 28, 28(9)
  05dad40  neg 31, 5
  05dad44  mr 28, 3
  05dad48  b 0x5dab3c

FUN_005dad4c:   # 0x5dad4c, 0x10 bytes
  05dad4c  addis 3, 13, 0
  05dad50  addi 3, 3, -28364
  05dad54  clrldi 3, 3, 32
  05dad58  blr

FUN_005dad5c:   # 0x5dad5c, 0x20 bytes
  05dad5c  clrldi 9, 3, 32
  05dad60  divw 0, 4, 5
  05dad64  mr 3, 9
  05dad68  stw 0, 0(9)
  05dad6c  mullw 5, 5, 0
  05dad70  sub 4, 4, 5
  05dad74  stw 4, 4(9)
  05dad78  blr
