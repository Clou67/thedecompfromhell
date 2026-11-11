# sdk/libc/memset.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

memset:   # 0x5d0140, 0xd4 bytes
  05d0140  cmplwi 7, 5, 7
  05d0144  add 5, 3, 5
  05d0148  clrldi 4, 4, 56
  05d014c  mr 10, 3
  05d0150  bf 29, 0x5d01ec
  05d0154  addi 8, 3, 1
  05d0158  stb 4, 0(3)
  05d015c  sldi 11, 4, 8
  05d0160  rlwinm 8, 8, 0, 0, 30
  05d0164  rlwinm 12, 5, 0, 0, 28
  05d0168  addi 10, 8, 2
  05d016c  or 11, 11, 4
  05d0170  rlwinm 10, 10, 0, 0, 29
  05d0174  addi 7, 12, -64
  05d0178  sth 11, 0(8)
  05d017c  addi 9, 10, 4
  05d0180  sldi 0, 11, 16
  05d0184  rlwinm 6, 9, 0, 0, 28
  05d0188  or 0, 0, 11
  05d018c  cmplw 7, 6, 7
  05d0190  sldi 9, 0, 32
  05d0194  stw 0, 0(10)
  05d0198  or 9, 0, 9
  05d019c  bt 29, 0x5d01e0
  05d01a0  mr 8, 6
  05d01a4  addi 6, 6, 64
  05d01a8  cmplw 7, 7, 6
  05d01ac  std 9, 56(8)
  05d01b0  std 9, 48(8)
  05d01b4  std 9, 40(8)
  05d01b8  std 9, 32(8)
  05d01bc  std 9, 24(8)
  05d01c0  std 9, 16(8)
  05d01c4  std 9, 8(8)
  05d01c8  std 9, 0(8)
  05d01cc  bf 28, 0x5d01a0
  05d01d0  b 0x5d01e0
  05d01d4  addi 0, 6, 8
  05d01d8  std 9, 0(6)
  05d01dc  mr 6, 0
  05d01e0  cmplw 7, 12, 6
  05d01e4  bt 29, 0x5d01d4
  05d01e8  mr 10, 6
  05d01ec  cmplw 7, 5, 10
  05d01f0  bclr 4, 29
  05d01f4  sub 9, 5, 10
  05d01f8  li 11, 0
  05d01fc  mtctr 9
  05d0200  add 9, 10, 11
  05d0204  addi 11, 11, 1
  05d0208  stb 4, 0(9)
  05d020c  bdnz 0x5d0200
  05d0210  blr
