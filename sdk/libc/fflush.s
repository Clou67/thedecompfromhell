# sdk/libc/fflush.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

fflush:   # 0x5c50cc, 0x224 bytes
  05c50cc  cmpwi 7, 3, 0
  05c50d0  mflr 0
  05c50d4  stdu 1, -144(1)
  05c50d8  std 30, 128(1)
  05c50dc  std 29, 120(1)
  05c50e0  std 31, 136(1)
  05c50e4  std 0, 160(1)
  05c50e8  mr 30, 3
  05c50ec  bt 30, 0x5c5238
  05c50f0  clrldi 29, 3, 32
  05c50f4  mr 3, 29
  05c50f8  bl 0x5cbc38
  05c50fc  nop
  05c5100  lhz 11, 0(30)
  05c5104  rlwinm 0, 11, 0, 18, 18
  05c5108  cmpwi 7, 0, 0
  05c510c  bt 30, 0x5c5208
  05c5110  lwz 9, 8(30)
  05c5114  lwz 5, 16(30)
  05c5118  mr 31, 9
  05c511c  cmplw 7, 9, 5
  05c5120  bt 28, 0x5c5140
  05c5124  b 0x5c51c0
  05c5128  lwz 5, 16(30)
  05c512c  ld 0, 72(30)
  05c5130  cmplw 7, 5, 31
  05c5134  add 0, 0, 9
  05c5138  std 0, 72(30)
  05c513c  bf 29, 0x5c51b8
  05c5140  sub 5, 5, 31
  05c5144  lhz 3, 4(30)
  05c5148  clrldi 4, 31, 32
  05c514c  extsw 5, 5
  05c5150  extsh 3, 3
  05c5154  bl 0x5cfe6c
  05c5158  nop
  05c515c  cmpwi 7, 3, 0
  05c5160  add 31, 31, 3
  05c5164  extsw 9, 3
  05c5168  bt 29, 0x5c5128
  05c516c  lhz 0, 0(30)
  05c5170  mr 3, 29
  05c5174  lwz 9, 8(30)
  05c5178  ori 0, 0, 512
  05c517c  stw 9, 48(30)
  05c5180  sth 0, 0(30)
  05c5184  stw 9, 16(30)
  05c5188  stw 9, 24(30)
  05c518c  bl 0x5cbbbc
  05c5190  nop
  05c5194  li 30, -1
  05c5198  ld 0, 160(1)
  05c519c  extsw 3, 30
  05c51a0  ld 29, 120(1)
  05c51a4  ld 30, 128(1)
  05c51a8  mtlr 0
  05c51ac  ld 31, 136(1)
  05c51b0  addi 1, 1, 144
  05c51b4  blr
  05c51b8  lhz 11, 0(30)
  05c51bc  lwz 9, 8(30)
  05c51c0  rlwinm 0, 11, 18, 1, 31
  05c51c4  mr 3, 29
  05c51c8  rotlwi 0, 0, 14
  05c51cc  stw 9, 48(30)
  05c51d0  sth 0, 0(30)
  05c51d4  stw 9, 16(30)
  05c51d8  stw 9, 24(30)
  05c51dc  bl 0x5cbbbc
  05c51e0  nop
  05c51e4  li 30, 0
  05c51e8  ld 0, 160(1)
  05c51ec  extsw 3, 30
  05c51f0  ld 29, 120(1)
  05c51f4  ld 30, 128(1)
  05c51f8  mtlr 0
  05c51fc  ld 31, 136(1)
  05c5200  addi 1, 1, 144
  05c5204  blr
  05c5208  mr 3, 29
  05c520c  li 30, 0
  05c5210  bl 0x5cbbbc
  05c5214  nop
  05c5218  ld 0, 160(1)
  05c521c  ld 29, 120(1)
  05c5220  extsw 3, 30
  05c5224  ld 31, 136(1)
  05c5228  ld 30, 128(1)
  05c522c  mtlr 0
  05c5230  addi 1, 1, 144
  05c5234  blr
  05c5238  li 3, 2
  05c523c  bl 0x5cbbec
  05c5240  nop
  05c5244  lwz 3, -24768(2)
  05c5248  bl 0x5c50cc
  05c524c  srawi 30, 3, 31
  05c5250  lwz 3, -24764(2)
  05c5254  bl 0x5c50cc
  05c5258  cmpwi 7, 3, 0
  05c525c  bt 28, 0x5c52e0
  05c5260  lwz 3, -24760(2)
  05c5264  bl 0x5c50cc
  05c5268  cmpwi 7, 3, 0
  05c526c  bt 28, 0x5c52e8
  05c5270  lwz 9, -24756(2)
  05c5274  lwz 3, 0(9)
  05c5278  cmpwi 7, 3, 0
  05c527c  bf 30, 0x5c5290
  05c5280  b 0x5c52b4
  05c5284  lwz 3, 60(31)
  05c5288  cmpwi 7, 3, 0
  05c528c  bt 30, 0x5c52b4
  05c5290  clrldi 31, 3, 32
  05c5294  mr 3, 31
  05c5298  bl 0x5c50cc
  05c529c  cmpwi 7, 3, 0
  05c52a0  bf 28, 0x5c5284
  05c52a4  lwz 3, 60(31)
  05c52a8  li 30, -1
  05c52ac  cmpwi 7, 3, 0
  05c52b0  bf 30, 0x5c5290
  05c52b4  li 3, 2
  05c52b8  bl 0x5cbb70
  05c52bc  nop
  05c52c0  ld 0, 160(1)
  05c52c4  ld 29, 120(1)
  05c52c8  extsw 3, 30
  05c52cc  ld 31, 136(1)
  05c52d0  ld 30, 128(1)
  05c52d4  mtlr 0
  05c52d8  addi 1, 1, 144
  05c52dc  blr
  05c52e0  li 30, -1
  05c52e4  b 0x5c5260
  05c52e8  li 30, -1
  05c52ec  b 0x5c5270
