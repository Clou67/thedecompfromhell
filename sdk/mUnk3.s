# sdk/mUnk3.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_005d57d4:   # 0x5d57d4, 0x38 bytes
  05d57d4  stdu 1, -112(1)
  05d57d8  mflr 0
  05d57dc  mr 5, 4
  05d57e0  std 0, 128(1)
  05d57e4  mr 0, 3
  05d57e8  lwz 3, -24144(2)
  05d57ec  mr 4, 0
  05d57f0  bl 0x5d531c
  05d57f4  nop
  05d57f8  ld 0, 128(1)
  05d57fc  clrldi 3, 3, 32
  05d5800  mtlr 0
  05d5804  addi 1, 1, 112
  05d5808  blr

FUN_005d580c:   # 0x5d580c, 0x2c bytes
  05d580c  mr 4, 3
  05d5810  lwz 3, -24144(2)
  05d5814  stdu 1, -112(1)
  05d5818  mflr 0
  05d581c  std 0, 128(1)
  05d5820  bl 0x5d2264
  05d5824  nop
  05d5828  ld 0, 128(1)
  05d582c  addi 1, 1, 112
  05d5830  mtlr 0
  05d5834  blr

FUN_005d5838:   # 0x5d5838, 0x30 bytes
  05d5838  mr 4, 3
  05d583c  lwz 3, -24144(2)
  05d5840  stdu 1, -112(1)
  05d5844  mflr 0
  05d5848  std 0, 128(1)
  05d584c  bl 0x5d309c
  05d5850  nop
  05d5854  ld 0, 128(1)
  05d5858  clrldi 3, 3, 32
  05d585c  mtlr 0
  05d5860  addi 1, 1, 112
  05d5864  blr

FUN_005d5868:   # 0x5d5868, 0x24 bytes
  05d5868  stdu 1, -112(1)
  05d586c  mflr 0
  05d5870  std 0, 128(1)
  05d5874  bl 0x5d53e8
  05d5878  nop
  05d587c  ld 0, 128(1)
  05d5880  addi 1, 1, 112
  05d5884  mtlr 0
  05d5888  blr

FUN_005d588c:   # 0x5d588c, 0x28 bytes
  05d588c  lwz 3, -24144(2)
  05d5890  mflr 0
  05d5894  stdu 1, -112(1)
  05d5898  std 0, 128(1)
  05d589c  bl 0x5d5584
  05d58a0  nop
  05d58a4  ld 0, 128(1)
  05d58a8  addi 1, 1, 112
  05d58ac  mtlr 0
  05d58b0  blr

FUN_005d58b4:   # 0x5d58b4, 0x8 bytes
  05d58b4  lwz 3, -24140(2)
  05d58b8  blr
