# game/update/moby1664.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1664:   # 0x2a88f8, 0x1dc bytes
  02a88f8  stdu 1, -176(1)
  02a88fc  mflr 0
  02a8900  std 0, 192(1)
  02a8904  stfd 31, 168(1)
  02a8908  std 31, 160(1)
  02a890c  ori 31, 3, 0
  02a8910  lis 4, 1
  02a8914  std 30, 152(1)
  02a8918  std 29, 144(1)
  02a891c  std 28, 136(1)
  02a8920  li 5, 0
  02a8924  bl 0x10675c
  02a8928  nop
  02a892c  ori 4, 3, 0
  02a8930  lbz 3, 32(31)
  02a8934  cmpwi 3, 0
  02a8938  bt 1, 0x2a8948
  02a893c  cmpwi 3, -1
  02a8940  bf 1, 0x2a8ab0
  02a8944  b 0x2a895c
  02a8948  cmpwi 3, 1
  02a894c  bf 1, 0x2a8968
  02a8950  cmpwi 3, 2
  02a8954  bf 1, 0x2a8988
  02a8958  b 0x2a8ab0
  02a895c  li 3, 1
  02a8960  stb 3, 32(31)
  02a8964  b 0x2a8ab0
  02a8968  cmpwi 4, 0
  02a896c  bt 2, 0x2a8ab0
  02a8970  lwz 3, 44(4)
  02a8974  cmpwi 3, 0
  02a8978  bf 1, 0x2a8ab0
  02a897c  li 3, 2
  02a8980  stb 3, 32(31)
  02a8984  b 0x2a8ab0
  02a8988  li 3, 0
  02a898c  li 4, 0
  02a8990  ori 5, 31, 0
  02a8994  bl 0x15d12c
  02a8998  nop
  02a899c  ori 3, 31, 0
  02a89a0  bl 0x11a100
  02a89a4  nop
  02a89a8  lis 3, 43
  02a89ac  lis 4, 161
  02a89b0  addi 5, 3, -30480
  02a89b4  addic 28, 4, 23856
  02a89b8  addic 30, 31, 16
  02a89bc  addic 29, 31, 64
  02a89c0  ori 3, 31, 0
  02a89c4  lfs 31, 0(5)
  02a89c8  std 28, 112(1)
  02a89cc  li 4, 1666
  02a89d0  std 28, 120(1)
  02a89d4  ori 5, 30, 0
  02a89d8  ori 6, 29, 0
  02a89dc  fmr 1, 31
  02a89e0  li 7, 0
  02a89e4  li 8, 0
  02a89e8  ori 10, 28, 0
  02a89ec  bl 0x11a560
  02a89f0  nop
  02a89f4  ori 3, 31, 0
  02a89f8  std 28, 112(1)
  02a89fc  ori 10, 28, 0
  02a8a00  li 4, 1666
  02a8a04  fmr 1, 31
  02a8a08  ori 5, 30, 0
  02a8a0c  std 28, 120(1)
  02a8a10  ori 6, 29, 0
  02a8a14  li 7, 0
  02a8a18  li 8, 0
  02a8a1c  bl 0x11a560
  02a8a20  nop
  02a8a24  li 3, 1665
  02a8a28  bl 0xefa28
  02a8a2c  nop
  02a8a30  cmpwi 3, 0
  02a8a34  bt 2, 0x2a8aa0
  02a8a38  ori 4, 3, 0
  02a8a3c  li 3, 255
  02a8a40  li 5, 1
  02a8a44  sth 3, 50(4)
  02a8a48  stb 5, 49(4)
  02a8a4c  ori 3, 4, 0
  02a8a50  lfs 1, 16(31)
  02a8a54  stfs 1, 16(4)
  02a8a58  lfs 1, 20(31)
  02a8a5c  stfs 1, 20(4)
  02a8a60  lfs 1, 24(31)
  02a8a64  stfs 1, 24(4)
  02a8a68  lfs 1, 28(31)
  02a8a6c  stfs 1, 28(4)
  02a8a70  lfs 1, 64(31)
  02a8a74  stfs 1, 64(4)
  02a8a78  lfs 1, 68(31)
  02a8a7c  stfs 1, 68(4)
  02a8a80  lfs 1, 72(31)
  02a8a84  stfs 1, 72(4)
  02a8a88  lfs 1, 76(31)
  02a8a8c  stfs 1, 76(4)
  02a8a90  ld 5, 56(31)
  02a8a94  std 5, 56(4)
  02a8a98  bl 0xf31a8
  02a8a9c  nop
  02a8aa0  ori 3, 31, 0
  02a8aa4  bl 0xefb38
  02a8aa8  nop
  02a8aac  b 0x2a8ab0
  02a8ab0  ld 0, 192(1)
  02a8ab4  mtlr 0
  02a8ab8  lfd 31, 168(1)
  02a8abc  ld 28, 136(1)
  02a8ac0  ld 29, 144(1)
  02a8ac4  ld 30, 152(1)
  02a8ac8  ld 31, 160(1)
  02a8acc  addi 1, 1, 176
  02a8ad0  blr
