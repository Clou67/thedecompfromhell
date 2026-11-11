# sdk/libc/strstr.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

strstr:   # 0x5c8700, 0xac bytes
  05c8700  stdu 1, -128(1)
  05c8704  mflr 0
  05c8708  std 30, 112(1)
  05c870c  std 31, 120(1)
  05c8710  std 0, 144(1)
  05c8714  mr 31, 4
  05c8718  mr 30, 4
  05c871c  lbz 4, 0(4)
  05c8720  mr 0, 3
  05c8724  cmpwi 7, 4, 0
  05c8728  bf 30, 0x5c8750
  05c872c  clrldi 3, 0, 32
  05c8730  ld 0, 144(1)
  05c8734  ld 30, 112(1)
  05c8738  ld 31, 120(1)
  05c873c  mtlr 0
  05c8740  addi 1, 1, 128
  05c8744  blr
  05c8748  addi 3, 8, 1
  05c874c  lbz 4, 0(31)
  05c8750  clrldi 3, 3, 32
  05c8754  extsb 4, 4
  05c8758  bl 0x5cc578
  05c875c  nop
  05c8760  cmpwi 7, 3, 0
  05c8764  mr 8, 3
  05c8768  bt 30, 0x5c87a4
  05c876c  mr 10, 30
  05c8770  lbzu 0, 1(10)
  05c8774  addi 3, 3, 1
  05c8778  extsb 9, 0
  05c877c  clrldi 11, 3, 32
  05c8780  cmpwi 7, 9, 0
  05c8784  bt 30, 0x5c879c
  05c8788  lbz 0, 0(11)
  05c878c  extsb 0, 0
  05c8790  cmpw 7, 0, 9
  05c8794  bt 30, 0x5c8770
  05c8798  b 0x5c8748
  05c879c  mr 0, 8
  05c87a0  b 0x5c872c
  05c87a4  li 0, 0
  05c87a8  b 0x5c872c
