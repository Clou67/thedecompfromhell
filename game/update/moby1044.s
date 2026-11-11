# game/update/moby1044.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

Spawn_Moby1044:   # 0x196ae8, 0x130 bytes
  0196ae8  stdu 1, -176(1)
  0196aec  mflr 0
  0196af0  std 0, 192(1)
  0196af4  stfd 28, 144(1)
  0196af8  stfd 29, 152(1)
  0196afc  stfd 30, 160(1)
  0196b00  stfd 31, 168(1)
  0196b04  std 30, 128(1)
  0196b08  ori 30, 3, 0
  0196b0c  li 3, 1044
  0196b10  std 31, 136(1)
  0196b14  fmr 31, 4
  0196b18  ori 31, 4, 0
  0196b1c  fmr 30, 3
  0196b20  fmr 29, 2
  0196b24  std 29, 120(1)
  0196b28  std 28, 112(1)
  0196b2c  fmr 28, 1
  0196b30  bl 0xefa28
  0196b34  nop
  0196b38  ori 29, 3, 0
  0196b3c  cmpwi 29, 0
  0196b40  bt 2, 0x196be4
  0196b44  li 4, 255
  0196b48  li 5, 1
  0196b4c  ori 3, 29, 0
  0196b50  stb 4, 48(29)
  0196b54  stb 5, 49(29)
  0196b58  lfs 1, 0(31)
  0196b5c  lwz 28, 120(29)
  0196b60  stfs 1, 16(29)
  0196b64  lfs 1, 4(31)
  0196b68  sth 4, 50(29)
  0196b6c  stfs 1, 20(29)
  0196b70  lfs 1, 8(31)
  0196b74  li 4, 0
  0196b78  lhz 5, 52(29)
  0196b7c  stfs 1, 24(29)
  0196b80  lfs 1, 12(31)
  0196b84  ori 6, 5, 512
  0196b88  stw 30, 84(28)
  0196b8c  ori 5, 28, 0
  0196b90  stfs 1, 28(29)
  0196b94  stfs 28, 64(28)
  0196b98  stfs 29, 68(28)
  0196b9c  stfs 30, 80(28)
  0196ba0  stfs 31, 76(28)
  0196ba4  stfs 28, 72(28)
  0196ba8  sth 6, 52(29)
  0196bac  bl 0xf0ea8
  0196bb0  nop
  0196bb4  lis 4, 25
  0196bb8  lfs 1, 72(28)
  0196bbc  ori 3, 29, 0
  0196bc0  addi 4, 4, 27360
  0196bc4  lfs 2, 0(4)
  0196bc8  lfs 3, 80(28)
  0196bcc  fmuls 1, 1, 2
  0196bd0  stfs 3, 40(28)
  0196bd4  stfs 1, 32(28)
  0196bd8  stfs 1, 36(28)
  0196bdc  bl 0xf31a8
  0196be0  nop
  0196be4  ori 3, 29, 0
  0196be8  ld 0, 192(1)
  0196bec  mtlr 0
  0196bf0  lfd 28, 144(1)
  0196bf4  lfd 29, 152(1)
  0196bf8  lfd 30, 160(1)
  0196bfc  lfd 31, 168(1)
  0196c00  ld 28, 112(1)
  0196c04  ld 29, 120(1)
  0196c08  ld 30, 128(1)
  0196c0c  ld 31, 136(1)
  0196c10  addi 1, 1, 176
  0196c14  blr

UpdateMoby_1044:   # 0x196c30, 0x120 bytes
  0196c30  stdu 1, -144(1)
  0196c34  mflr 0
  0196c38  std 0, 160(1)
  0196c3c  stfd 31, 136(1)
  0196c40  std 30, 120(1)
  0196c44  lwz 30, 120(3)
  0196c48  lis 4, 25
  0196c4c  lfs 1, 72(30)
  0196c50  lfs 2, 76(30)
  0196c54  fadds 1, 1, 2
  0196c58  lfs 2, 64(30)
  0196c5c  lfs 3, 68(30)
  0196c60  fsubs 31, 3, 2
  0196c64  std 31, 128(1)
  0196c68  addi 4, 4, 27672
  0196c6c  ori 31, 3, 0
  0196c70  fsubs 2, 1, 2
  0196c74  stfs 1, 72(30)
  0196c78  lfs 1, 0(4)
  0196c7c  fdivs 31, 2, 31
  0196c80  fcmpu 0, 31, 1
  0196c84  cror 6, 1, 2
  0196c88  bt 6, 0x196cb0
  0196c8c  lis 3, 25
  0196c90  addi 3, 3, 27672
  0196c94  lfs 1, 4(3)
  0196c98  lfs 2, 8(3)
  0196c9c  fmuls 1, 31, 1
  0196ca0  fmuls 1, 1, 2
  0196ca4  bl 0x502758
  0196ca8  nop
  0196cac  b 0x196cf4
  0196cb0  lis 3, 25
  0196cb4  addi 4, 3, 27672
  0196cb8  li 3, 128
  0196cbc  lfs 1, 12(4)
  0196cc0  fcmpu 0, 31, 1
  0196cc4  cror 6, 0, 2
  0196cc8  bt 6, 0x196cf4
  0196ccc  lis 3, 25
  0196cd0  addi 3, 3, 27672
  0196cd4  lfs 1, 16(3)
  0196cd8  lfs 2, 4(3)
  0196cdc  fsubs 1, 1, 31
  0196ce0  lfs 3, 8(3)
  0196ce4  fmuls 1, 1, 2
  0196ce8  fmuls 1, 1, 3
  0196cec  bl 0x502758
  0196cf0  nop
  0196cf4  lis 4, 25
  0196cf8  stb 3, 35(31)
  0196cfc  addi 4, 4, 27672
  0196d00  lfs 1, 20(4)
  0196d04  lfs 2, 72(30)
  0196d08  lfs 3, 80(30)
  0196d0c  fmuls 1, 2, 1
  0196d10  stfs 3, 40(30)
  0196d14  stfs 1, 32(30)
  0196d18  stfs 1, 36(30)
  0196d1c  lfs 1, 16(4)
  0196d20  fcmpu 0, 31, 1
  0196d24  bt 0, 0x196d34
  0196d28  ori 3, 31, 0
  0196d2c  bl 0xefb38
  0196d30  nop
  0196d34  ld 0, 160(1)
  0196d38  mtlr 0
  0196d3c  lfd 31, 136(1)
  0196d40  ld 30, 120(1)
  0196d44  ld 31, 128(1)
  0196d48  addi 1, 1, 144
  0196d4c  blr
