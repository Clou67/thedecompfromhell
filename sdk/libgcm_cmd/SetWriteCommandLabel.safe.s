# sdk/libgcm_cmd/SetWriteCommandLabel.safe.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

cellGcmSetWriteCommandLabel:   # 0x50f074, 0xbc bytes
  050f074  stdu 1, -144(1)
  050f078  mflr 0
  050f07c  std 31, 136(1)
  050f080  mr 31, 3
  050f084  std 0, 160(1)
  050f088  std 29, 120(1)
  050f08c  std 30, 128(1)
  050f090  mr 29, 5
  050f094  lwz 6, 8(31)
  050f098  mr 30, 4
  050f09c  lwz 0, 4(31)
  050f0a0  li 4, 4
  050f0a4  addi 9, 6, 16
  050f0a8  cmplw 7, 9, 0
  050f0ac  bt 29, 0x50f104
  050f0b0  clrldi 7, 6, 32
  050f0b4  addi 6, 6, 8
  050f0b8  lis 9, 4
  050f0bc  clrldi 8, 6, 32
  050f0c0  lis 11, 4
  050f0c4  ori 9, 9, 100
  050f0c8  rlwinm 10, 30, 4, 20, 27
  050f0cc  ori 11, 11, 108
  050f0d0  addi 0, 6, 8
  050f0d4  stw 10, 4(7)
  050f0d8  stw 9, 0(7)
  050f0dc  stw 0, 8(31)
  050f0e0  stw 29, 4(8)
  050f0e4  stw 11, 0(8)
  050f0e8  ld 0, 160(1)
  050f0ec  ld 29, 120(1)
  050f0f0  ld 30, 128(1)
  050f0f4  mtlr 0
  050f0f8  ld 31, 136(1)
  050f0fc  addi 1, 1, 144
  050f100  blr
  050f104  lwz 9, 12(31)
  050f108  lwz 0, 0(9)
  050f10c  std 2, 40(1)
  050f110  mtctr 0
  050f114  lwz 2, 4(9)
  050f118  bctrl
  050f11c  ld 2, 40(1)
  050f120  cmpwi 7, 3, 0
  050f124  bf 30, 0x50f0e8
  050f128  lwz 6, 8(31)
  050f12c  b 0x50f0b0
