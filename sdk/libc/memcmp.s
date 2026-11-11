# sdk/libc/memcmp.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

memcmp:   # 0x5d0218, 0x150 bytes
  05d0218  cmplwi 7, 5, 7
  05d021c  bf 29, 0x5d02cc
  05d0220  or 9, 3, 4
  05d0224  clrlwi 0, 9, 29
  05d0228  cmpwi 7, 0, 0
  05d022c  bf 30, 0x5d02d8
  05d0230  ld 0, 0(3)
  05d0234  ld 10, 0(4)
  05d0238  addi 5, 5, -8
  05d023c  cmpd 7, 0, 10
  05d0240  bf 30, 0x5d0350
  05d0244  addi 3, 3, 8
  05d0248  addi 4, 4, 8
  05d024c  rldicl 9, 5, 61, 35
  05d0250  cmplwi 7, 5, 7
  05d0254  mtctr 9
  05d0258  bf 29, 0x5d027c
  05d025c  ld 0, 0(3)
  05d0260  ld 10, 0(4)
  05d0264  addi 5, 5, -8
  05d0268  cmpd 7, 0, 10
  05d026c  addi 3, 3, 8
  05d0270  addi 4, 4, 8
  05d0274  bf 30, 0x5d0350
  05d0278  bdnz 0x5d025c
  05d027c  cmpwi 7, 5, 0
  05d0280  bt 30, 0x5d02c4
  05d0284  nop
  05d0288  clrldi 9, 5, 32
  05d028c  lbz 8, 0(3)
  05d0290  lbz 0, 0(4)
  05d0294  cmpw 7, 8, 0
  05d0298  mtctr 9
  05d029c  bt 30, 0x5d02b8
  05d02a0  b 0x5d0340
  05d02a4  nop
  05d02a8  lbz 8, 0(3)
  05d02ac  lbz 0, 0(4)
  05d02b0  cmpw 7, 8, 0
  05d02b4  bf 30, 0x5d0340
  05d02b8  addi 3, 3, 1
  05d02bc  addi 4, 4, 1
  05d02c0  bdnz 0x5d02a8
  05d02c4  li 3, 0
  05d02c8  blr
  05d02cc  cmpwi 7, 5, 0
  05d02d0  bf 30, 0x5d0288
  05d02d4  b 0x5d02c4
  05d02d8  clrlwi 0, 9, 30
  05d02dc  cmpwi 7, 0, 0
  05d02e0  bf 30, 0x5d0288
  05d02e4  lwz 0, 0(3)
  05d02e8  lwz 10, 0(4)
  05d02ec  addi 5, 5, -4
  05d02f0  cmpw 7, 0, 10
  05d02f4  bf 30, 0x5d0360
  05d02f8  addi 3, 3, 4
  05d02fc  addi 4, 4, 4
  05d0300  rldicl 9, 5, 62, 34
  05d0304  cmplwi 7, 5, 3
  05d0308  mtctr 9
  05d030c  bf 29, 0x5d0330
  05d0310  lwz 0, 0(3)
  05d0314  lwz 10, 0(4)
  05d0318  addi 5, 5, -4
  05d031c  cmpw 7, 0, 10
  05d0320  addi 3, 3, 4
  05d0324  addi 4, 4, 4
  05d0328  bf 30, 0x5d0360
  05d032c  bdnz 0x5d0310
  05d0330  cmpwi 7, 5, 0
  05d0334  bf 30, 0x5d0288
  05d0338  b 0x5d02c4
  05d033c  nop
  05d0340  cmplw 7, 8, 0
  05d0344  bt 28, 0x5d0358
  05d0348  li 3, 1
  05d034c  blr
  05d0350  cmpld 7, 0, 10
  05d0354  bf 28, 0x5d0348
  05d0358  li 3, -1
  05d035c  blr
  05d0360  cmplw 7, 0, 10
  05d0364  bt 28, 0x5d0358
