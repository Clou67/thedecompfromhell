# game/update/moby250.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_250:   # 0x316950, 0x240 bytes
  0316950  stdu 1, -128(1)
  0316954  mflr 0
  0316958  std 0, 144(1)
  031695c  std 31, 120(1)
  0316960  lis 4, 151
  0316964  ori 31, 3, 0
  0316968  addic 5, 4, -25376
  031696c  li 4, 0
  0316970  ori 3, 4, 0
  0316974  lwz 7, 120(31)
  0316978  lbz 5, 8356(5)
  031697c  lbz 6, 32(31)
  0316980  cmpwi 5, 2
  0316984  lbz 5, 112(31)
  0316988  cmpwi 1, 6, 7
  031698c  cmpwi 6, 6, 6
  0316990  cmpwi 7, 6, 5
  0316994  bt 2, 0x3169a0
  0316998  lwz 4, 36(31)
  031699c  lwz 4, 16(4)
  03169a0  stw 4, 148(31)
  03169a4  bt 6, 0x316b54
  03169a8  bt 26, 0x316b20
  03169ac  bt 30, 0x316af4
  03169b0  cmpwi 6, 4
  03169b4  bt 2, 0x316b7c
  03169b8  cmpwi 6, 3
  03169bc  bt 2, 0x316abc
  03169c0  cmpwi 6, 2
  03169c4  bt 2, 0x316a90
  03169c8  cmpwi 6, 1
  03169cc  bt 2, 0x316a5c
  03169d0  cmpwi 6, 0
  03169d4  bf 2, 0x316b7c
  03169d8  lwz 3, 0(7)
  03169dc  cmpwi 3, 0
  03169e0  bt 2, 0x316b7c
  03169e4  lis 3, 149
  03169e8  addic 3, 3, 5056
  03169ec  lwz 3, 384(3)
  03169f0  lhz 3, 134(3)
  03169f4  cmpwi 3, 20
  03169f8  bf 2, 0x316b7c
  03169fc  li 3, 4
  0316a00  vspltisw 4, -1
  0316a04  li 4, 1
  0316a08  addi 5, 3, 16
  0316a0c  lis 6, 49
  0316a10  vslw 4, 4, 4
  0316a14  stb 4, 32(31)
  0316a18  lvlx 2, 3, 7
  0316a1c  lvrx 3, 5, 7
  0316a20  addi 3, 6, 26952
  0316a24  lis 4, 114
  0316a28  vor 2, 2, 3
  0316a2c  lvlx 3, 0, 3
  0316a30  vcfsx 2, 2, 0
  0316a34  vspltw 3, 3, 0
  0316a38  li 3, -3056
  0316a3c  lvlx 5, 3, 4
  0316a40  li 3, 8
  0316a44  vaddfp 2, 2, 3
  0316a48  vmaddfp 2, 5, 2, 4
  0316a4c  vctsxs 2, 2, 0
  0316a50  vspltw 2, 2, 0
  0316a54  stvewx 2, 3, 7
  0316a58  b 0x316b7c
  0316a5c  addic 3, 7, 8
  0316a60  bl 0x4fff60
  0316a64  nop
  0316a68  cmpwi 3, 0
  0316a6c  bt 2, 0x316b7c
  0316a70  li 6, 2
  0316a74  ori 3, 31, 0
  0316a78  li 4, 1
  0316a7c  li 5, 0
  0316a80  stb 6, 32(31)
  0316a84  bl 0xfdcf0
  0316a88  nop
  0316a8c  b 0x316b7c
  0316a90  rlwinm 3, 5, 0, 30, 30
  0316a94  cmpwi 3, 0
  0316a98  bt 2, 0x316b7c
  0316a9c  li 6, 3
  0316aa0  ori 3, 31, 0
  0316aa4  li 4, 2
  0316aa8  li 5, 0
  0316aac  stb 6, 32(31)
  0316ab0  bl 0xfdcf0
  0316ab4  nop
  0316ab8  b 0x316b7c
  0316abc  lis 3, 149
  0316ac0  addic 3, 3, 5056
  0316ac4  lwz 3, 384(3)
  0316ac8  lhz 3, 134(3)
  0316acc  cmpwi 3, 20
  0316ad0  bt 2, 0x316b7c
  0316ad4  ori 3, 31, 0
  0316ad8  li 4, 0
  0316adc  li 5, 0
  0316ae0  bl 0xfdcf0
  0316ae4  nop
  0316ae8  li 3, 4
  0316aec  stb 3, 32(31)
  0316af0  b 0x316b7c
  0316af4  rlwinm 3, 5, 0, 30, 30
  0316af8  cmpwi 3, 0
  0316afc  bt 2, 0x316b7c
  0316b00  li 6, 6
  0316b04  ori 3, 31, 0
  0316b08  li 4, 2
  0316b0c  li 5, 0
  0316b10  stb 6, 32(31)
  0316b14  bl 0xfdcf0
  0316b18  nop
  0316b1c  b 0x316b7c
  0316b20  addic 3, 7, 8
  0316b24  bl 0x4fff60
  0316b28  nop
  0316b2c  cmpwi 3, 0
  0316b30  bt 2, 0x316b7c
  0316b34  ori 3, 31, 0
  0316b38  li 4, 3
  0316b3c  li 5, 0
  0316b40  bl 0xfdcf0
  0316b44  nop
  0316b48  li 3, 7
  0316b4c  stb 3, 32(31)
  0316b50  b 0x316b7c
  0316b54  rlwinm 4, 5, 0, 30, 30
  0316b58  cmpwi 4, 0
  0316b5c  bt 2, 0x316b7c
  0316b60  ori 6, 3, 0
  0316b64  ori 3, 31, 0
  0316b68  li 4, 0
  0316b6c  li 5, 0
  0316b70  stb 6, 32(31)
  0316b74  bl 0xfdcf0
  0316b78  nop
  0316b7c  ld 0, 144(1)
  0316b80  mtlr 0
  0316b84  ld 31, 120(1)
  0316b88  addi 1, 1, 128
  0316b8c  blr
