# game/update/moby499.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_003a38c8:   # 0x3a38c8, 0xdc bytes
  03a38c8  stdu 1, -160(1)
  03a38cc  mflr 0
  03a38d0  std 0, 176(1)
  03a38d4  std 29, 136(1)
  03a38d8  ori 29, 3, 0
  03a38dc  std 31, 152(1)
  03a38e0  li 3, 499
  03a38e4  std 30, 144(1)
  03a38e8  ori 31, 6, 0
  03a38ec  std 28, 128(1)
  03a38f0  ori 30, 5, 0
  03a38f4  std 27, 120(1)
  03a38f8  li 28, 160
  03a38fc  bl 0xefa28
  03a3900  nop
  03a3904  ori 27, 3, 0
  03a3908  cmpwi 27, 0
  03a390c  bt 2, 0x3a397c
  03a3910  addc 4, 1, 28
  03a3914  li 5, 255
  03a3918  li 6, 1
  03a391c  li 3, 0
  03a3920  std 30, 64(4)
  03a3924  std 31, 72(4)
  03a3928  lhz 7, 50(29)
  03a392c  stb 5, 48(27)
  03a3930  sth 7, 50(27)
  03a3934  stb 6, 49(27)
  03a3938  lfs 1, 72(29)
  03a393c  stw 3, 64(27)
  03a3940  stw 3, 68(27)
  03a3944  ld 5, 56(29)
  03a3948  stfs 1, 72(27)
  03a394c  ori 3, 27, 0
  03a3950  std 5, 56(27)
  03a3954  lfs 1, 68(4)
  03a3958  lfs 2, 76(4)
  03a395c  stfs 1, 20(27)
  03a3960  stfs 2, 28(27)
  03a3964  lfs 1, 64(4)
  03a3968  lfs 2, 72(4)
  03a396c  stfs 1, 16(27)
  03a3970  stfs 2, 24(27)
  03a3974  bl 0xf31a8
  03a3978  nop
  03a397c  ori 3, 27, 0
  03a3980  ld 0, 176(1)
  03a3984  mtlr 0
  03a3988  ld 27, 120(1)
  03a398c  ld 28, 128(1)
  03a3990  ld 29, 136(1)
  03a3994  ld 30, 144(1)
  03a3998  ld 31, 152(1)
  03a399c  addi 1, 1, 160
  03a39a0  blr

UpdateMoby_499:   # 0x3a39a4, 0x4 bytes
  03a39a4  blr

M499_003a39a8:   # 0x3a39a8, 0x238 bytes
  03a39a8  stdu 1, -208(1)
  03a39ac  mflr 0
  03a39b0  std 0, 224(1)
  03a39b4  std 31, 200(1)
  03a39b8  ori 31, 3, 0
  03a39bc  std 29, 184(1)
  03a39c0  lis 3, 269
  03a39c4  std 28, 176(1)
  03a39c8  lis 29, 114
  03a39cc  std 30, 192(1)
  03a39d0  addic 28, 1, 128
  03a39d4  lwz 30, 120(31)
  03a39d8  lfs 3, -28068(3)
  03a39dc  lis 3, 132
  03a39e0  lfs 1, 0(30)
  03a39e4  fmuls 2, 1, 3
  03a39e8  lfs 1, 13420(3)
  03a39ec  lfs 4, -3052(29)
  03a39f0  fmuls 1, 1, 4
  03a39f4  ori 3, 28, 0
  03a39f8  stfs 2, 144(1)
  03a39fc  lfs 2, 4(30)
  03a3a00  fmuls 4, 2, 3
  03a3a04  fmr 2, 1
  03a3a08  stfs 4, 148(1)
  03a3a0c  lfs 4, 8(30)
  03a3a10  fmuls 3, 4, 3
  03a3a14  stfs 3, 152(1)
  03a3a18  lfs 3, 12(30)
  03a3a1c  stfs 3, 156(1)
  03a3a20  bl 0xfea60
  03a3a24  nop
  03a3a28  lfs 1, 144(1)
  03a3a2c  lis 3, 269
  03a3a30  lfs 2, 128(1)
  03a3a34  lfs 3, 148(1)
  03a3a38  fadds 1, 1, 2
  03a3a3c  lfs 2, 132(1)
  03a3a40  lfs 4, 152(1)
  03a3a44  fadds 2, 3, 2
  03a3a48  lfs 3, 136(1)
  03a3a4c  fadds 3, 4, 3
  03a3a50  lfs 4, -28064(3)
  03a3a54  lis 3, 132
  03a3a58  stfs 1, 144(1)
  03a3a5c  stfs 2, 148(1)
  03a3a60  stfs 3, 152(1)
  03a3a64  lfs 1, 0(30)
  03a3a68  fmuls 2, 1, 4
  03a3a6c  lfs 1, -3052(29)
  03a3a70  lfs 3, 13424(3)
  03a3a74  fmuls 1, 3, 1
  03a3a78  ori 3, 28, 0
  03a3a7c  stfs 2, 160(1)
  03a3a80  lfs 2, 4(30)
  03a3a84  fmuls 3, 2, 4
  03a3a88  fmr 2, 1
  03a3a8c  stfs 3, 164(1)
  03a3a90  lfs 3, 8(30)
  03a3a94  fmuls 3, 3, 4
  03a3a98  stfs 3, 168(1)
  03a3a9c  lfs 3, 12(30)
  03a3aa0  stfs 3, 172(1)
  03a3aa4  bl 0xfea60
  03a3aa8  nop
  03a3aac  lfs 1, 160(1)
  03a3ab0  lfs 2, 128(1)
  03a3ab4  lis 3, 132
  03a3ab8  lfs 3, 164(1)
  03a3abc  lis 4, 132
  03a3ac0  fadds 1, 1, 2
  03a3ac4  lis 5, 132
  03a3ac8  lfs 2, 132(1)
  03a3acc  lis 6, 132
  03a3ad0  lfs 4, 168(1)
  03a3ad4  fadds 2, 3, 2
  03a3ad8  lfs 3, 136(1)
  03a3adc  fadds 3, 4, 3
  03a3ae0  lfs 4, 13388(3)
  03a3ae4  lfs 5, 13392(4)
  03a3ae8  stfs 4, 156(1)
  03a3aec  stfs 1, 160(1)
  03a3af0  lfs 1, 13396(5)
  03a3af4  stfs 2, 164(1)
  03a3af8  stfs 5, 172(1)
  03a3afc  stfs 3, 168(1)
  03a3b00  lfs 2, 13400(6)
  03a3b04  bl 0xfcbe8
  03a3b08  nop
  03a3b0c  lis 30, 114
  03a3b10  lfs 2, -3056(30)
  03a3b14  fmuls 1, 1, 2
  03a3b18  bl 0x502758
  03a3b1c  nop
  03a3b20  lis 4, 132
  03a3b24  lis 5, 132
  03a3b28  ori 29, 3, 0
  03a3b2c  lfs 1, 13404(4)
  03a3b30  lfs 2, 13408(5)
  03a3b34  bl 0xfcbe8
  03a3b38  nop
  03a3b3c  lfs 2, -3056(30)
  03a3b40  fmuls 1, 1, 2
  03a3b44  bl 0x502758
  03a3b48  nop
  03a3b4c  lis 4, 132
  03a3b50  lis 5, 132
  03a3b54  ori 28, 3, 0
  03a3b58  lfs 1, 13412(4)
  03a3b5c  lfs 2, 13416(5)
  03a3b60  bl 0xfcbe8
  03a3b64  nop
  03a3b68  lfs 2, -3056(30)
  03a3b6c  fmuls 1, 1, 2
  03a3b70  bl 0x502758
  03a3b74  nop
  03a3b78  lis 5, 132
  03a3b7c  lis 6, 132
  03a3b80  lis 7, 132
  03a3b84  ori 10, 3, 0
  03a3b88  addic 3, 31, 16
  03a3b8c  lwz 9, 13380(5)
  03a3b90  lwz 11, 13432(6)
  03a3b94  addic 4, 1, 144
  03a3b98  lwz 7, 13384(7)
  03a3b9c  extsw 6, 9
  03a3ba0  extsw 11, 11
  03a3ba4  addic 5, 1, 160
  03a3ba8  ori 8, 29, 0
  03a3bac  ori 9, 28, 0
  03a3bb0  extsw 7, 7
  03a3bb4  std 11, 112(1)
  03a3bb8  bl 0x1206e8
  03a3bbc  nop
  03a3bc0  ld 0, 224(1)
  03a3bc4  mtlr 0
  03a3bc8  ld 28, 176(1)
  03a3bcc  ld 29, 184(1)
  03a3bd0  ld 30, 192(1)
  03a3bd4  ld 31, 200(1)
  03a3bd8  addi 1, 1, 208
  03a3bdc  blr
