# sdk/libc/malloc.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

reallocalign:   # 0x5d56f4, 0x40 bytes
  05d56f4  stdu 1, -112(1)
  05d56f8  mflr 0
  05d56fc  mr 9, 4
  05d5700  std 0, 128(1)
  05d5704  mr 0, 3
  05d5708  lwz 3, -24144(2)
  05d570c  mr 6, 5
  05d5710  mr 4, 0
  05d5714  mr 5, 9
  05d5718  bl 0x5d5178
  05d571c  nop
  05d5720  ld 0, 128(1)
  05d5724  clrldi 3, 3, 32
  05d5728  mtlr 0
  05d572c  addi 1, 1, 112
  05d5730  blr

FUN_005d5734:   # 0x5d5734, 0x30 bytes
  05d5734  mr 4, 3
  05d5738  lwz 3, -24144(2)
  05d573c  stdu 1, -112(1)
  05d5740  mflr 0
  05d5744  std 0, 128(1)
  05d5748  bl 0x5d1cac
  05d574c  nop
  05d5750  ld 0, 128(1)
  05d5754  extsw 3, 3
  05d5758  mtlr 0
  05d575c  addi 1, 1, 112
  05d5760  blr

FUN_005d5764:   # 0x5d5764, 0x38 bytes
  05d5764  stdu 1, -112(1)
  05d5768  mflr 0
  05d576c  mr 5, 4
  05d5770  std 0, 128(1)
  05d5774  mr 0, 3
  05d5778  lwz 3, -24144(2)
  05d577c  mr 4, 0
  05d5780  bl 0x5d4f04
  05d5784  nop
  05d5788  ld 0, 128(1)
  05d578c  clrldi 3, 3, 32
  05d5790  mtlr 0
  05d5794  addi 1, 1, 112
  05d5798  blr

FUN_005d579c:   # 0x5d579c, 0x38 bytes
  05d579c  stdu 1, -112(1)
  05d57a0  mflr 0
  05d57a4  mr 5, 4
  05d57a8  std 0, 128(1)
  05d57ac  mr 0, 3
  05d57b0  lwz 3, -24144(2)
  05d57b4  mr 4, 0
  05d57b8  bl 0x5d529c
  05d57bc  nop
  05d57c0  ld 0, 128(1)
  05d57c4  clrldi 3, 3, 32
  05d57c8  mtlr 0
  05d57cc  addi 1, 1, 112
  05d57d0  blr
