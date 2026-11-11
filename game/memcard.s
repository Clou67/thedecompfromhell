# game/memcard.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MEMCARD:   # 0xe6b08, 0x14 bytes
  00e6b08  lis 3, 114
  00e6b0c  lis 4, 1
  00e6b10  addic 3, 3, 26148
  00e6b14  stw 4, 72(3)
  00e6b18  blr

memcard_GetName:   # 0xe6b1c, 0x15c bytes
  00e6b1c  stdu 1, -128(1)
  00e6b20  mflr 0
  00e6b24  std 0, 144(1)
  00e6b28  std 31, 120(1)
  00e6b2c  lbz 4, 18(3)
  00e6b30  lis 31, 114
  00e6b34  cmpwi 4, 69
  00e6b38  std 30, 112(1)
  00e6b3c  addic 31, 31, -1680
  00e6b40  bf 2, 0xe6b50
  00e6b44  li 4, 69
  00e6b48  stb 4, 2(31)
  00e6b4c  b 0xe6b60
  00e6b50  cmpwi 4, 80
  00e6b54  bf 2, 0xe6b60
  00e6b58  li 4, 73
  00e6b5c  stb 4, 2(31)
  00e6b60  li 4, 3
  00e6b64  addc 5, 3, 4
  00e6b68  addic 6, 4, 1
  00e6b6c  clrldi 5, 5, 32
  00e6b70  lbz 5, 13(5)
  00e6b74  stbx 5, 31, 4
  00e6b78  extsw 4, 6
  00e6b7c  cmpwi 4, 7
  00e6b80  bt 0, 0xe6b64
  00e6b84  li 4, 8
  00e6b88  addc 5, 3, 4
  00e6b8c  addic 6, 4, 1
  00e6b90  clrldi 5, 5, 32
  00e6b94  lbz 5, 13(5)
  00e6b98  stbx 5, 31, 4
  00e6b9c  extsw 4, 6
  00e6ba0  cmpwi 4, 11
  00e6ba4  bt 0, 0xe6b88
  00e6ba8  li 4, 11
  00e6bac  addc 5, 3, 4
  00e6bb0  addic 6, 4, 1
  00e6bb4  clrldi 5, 5, 32
  00e6bb8  lbz 5, 14(5)
  00e6bbc  stbx 5, 31, 4
  00e6bc0  extsw 4, 6
  00e6bc4  cmpwi 4, 13
  00e6bc8  bt 0, 0xe6bac
  00e6bcc  lis 3, 114
  00e6bd0  li 30, 13
  00e6bd4  addic 3, 3, -1659
  00e6bd8  ori 4, 31, 0
  00e6bdc  ori 5, 30, 0
  00e6be0  bl 0x5cccec
  00e6be4  nop
  00e6be8  lis 3, 114
  00e6bec  ori 4, 31, 0
  00e6bf0  addic 3, 3, -1636
  00e6bf4  ori 5, 30, 0
  00e6bf8  bl 0x5cccec
  00e6bfc  nop
  00e6c00  lis 3, 114
  00e6c04  ori 4, 31, 0
  00e6c08  addic 3, 3, -1606
  00e6c0c  ori 5, 30, 0
  00e6c10  bl 0x5cccec
  00e6c14  nop
  00e6c18  lis 3, 114
  00e6c1c  ori 4, 31, 0
  00e6c20  addic 3, 3, -1574
  00e6c24  ori 5, 30, 0
  00e6c28  bl 0x5cccec
  00e6c2c  nop
  00e6c30  lis 3, 114
  00e6c34  ori 4, 31, 0
  00e6c38  addic 3, 3, -1554
  00e6c3c  ori 5, 30, 0
  00e6c40  bl 0x5cccec
  00e6c44  nop
  00e6c48  lis 3, 114
  00e6c4c  ori 4, 31, 0
  00e6c50  addic 3, 3, -1533
  00e6c54  ori 5, 30, 0
  00e6c58  bl 0x5cccec
  00e6c5c  nop
  00e6c60  ld 0, 144(1)
  00e6c64  mtlr 0
  00e6c68  ld 30, 112(1)
  00e6c6c  ld 31, 120(1)
  00e6c70  addi 1, 1, 128
  00e6c74  blr

STUB_000e6c78:   # 0xe6c78, 0x8 bytes
  00e6c78  li 3, 0
  00e6c7c  blr

memcard_GetDataSize:   # 0xe6c80, 0x58 bytes
  00e6c80  lwz 4, 0(3)
  00e6c84  li 5, 8
  00e6c88  cmpwi 4, 0
  00e6c8c  bt 2, 0xe6ccc
  00e6c90  li 4, 0
  00e6c94  addic 6, 3, 4
  00e6c98  addic 7, 4, 16
  00e6c9c  addc 4, 6, 4
  00e6ca0  extsw 6, 7
  00e6ca4  clrldi 8, 4, 32
  00e6ca8  addic 5, 5, 8
  00e6cac  ori 4, 7, 0
  00e6cb0  lwzx 6, 3, 6
  00e6cb4  cmpwi 6, 0
  00e6cb8  lwz 6, 0(8)
  00e6cbc  addc 5, 5, 6
  00e6cc0  addic 5, 5, 3
  00e6cc4  rlwinm 5, 5, 0, 0, 29
  00e6cc8  bf 2, 0xe6c94
  00e6ccc  addic 3, 5, 8
  00e6cd0  extsw 3, 3
  00e6cd4  blr

memcard_RestoreData:   # 0xe6cd8, 0x30c bytes
  00e6cd8  stdu 1, -192(1)
  00e6cdc  mflr 0
  00e6ce0  std 0, 208(1)
  00e6ce4  std 24, 128(1)
  00e6ce8  addic 24, 3, 8
  00e6cec  std 28, 160(1)
  00e6cf0  lwz 3, 0(5)
  00e6cf4  std 23, 120(1)
  00e6cf8  li 28, 8
  00e6cfc  std 22, 112(1)
  00e6d00  li 23, 0
  00e6d04  cmpwi 3, 0
  00e6d08  std 31, 184(1)
  00e6d0c  ori 22, 28, 0
  00e6d10  std 30, 176(1)
  00e6d14  ori 31, 4, 0
  00e6d18  std 29, 168(1)
  00e6d1c  std 27, 152(1)
  00e6d20  std 26, 144(1)
  00e6d24  std 25, 136(1)
  00e6d28  ori 30, 5, 0
  00e6d2c  bt 2, 0xe6d5c
  00e6d30  ori 3, 23, 0
  00e6d34  addic 4, 3, 16
  00e6d38  addic 5, 30, 12
  00e6d3c  extsw 6, 4
  00e6d40  addc 3, 5, 3
  00e6d44  clrldi 3, 3, 32
  00e6d48  lwzx 5, 30, 6
  00e6d4c  cmpwi 5, 0
  00e6d50  stw 23, 0(3)
  00e6d54  ori 3, 4, 0
  00e6d58  bf 2, 0xe6d34
  00e6d5c  lwz 3, 0(24)
  00e6d60  ori 29, 23, 0
  00e6d64  cmpwi 3, -1
  00e6d68  bt 2, 0xe6ec4
  00e6d6c  ori 4, 23, 0
  00e6d70  slwi 3, 4, 4
  00e6d74  extsw 26, 3
  00e6d78  lwzx 5, 30, 26
  00e6d7c  cmpwi 5, 0
  00e6d80  bt 2, 0xe6da8
  00e6d84  addic 5, 30, 8
  00e6d88  lwz 6, 0(24)
  00e6d8c  addc 5, 5, 3
  00e6d90  clrldi 5, 5, 32
  00e6d94  lwz 5, 0(5)
  00e6d98  cmpw 5, 6
  00e6d9c  bt 2, 0xe6da8
  00e6da0  addic 4, 4, 1
  00e6da4  b 0xe6d70
  00e6da8  lwzx 4, 30, 26
  00e6dac  cmpwi 4, 0
  00e6db0  bt 2, 0xe6e98
  00e6db4  addic 4, 30, 4
  00e6db8  lwzx 5, 30, 26
  00e6dbc  addc 27, 4, 3
  00e6dc0  lwz 4, 4(24)
  00e6dc4  clrldi 27, 27, 32
  00e6dc8  lwz 6, 0(27)
  00e6dcc  mullw 7, 31, 6
  00e6dd0  cmpw 4, 6
  00e6dd4  addc 26, 5, 7
  00e6dd8  clrldi 26, 26, 32
  00e6ddc  bf 2, 0xe6e00
  00e6de0  addic 4, 30, 12
  00e6de4  lwz 27, 0(27)
  00e6de8  li 5, 1
  00e6dec  addc 3, 4, 3
  00e6df0  extsw 27, 27
  00e6df4  clrldi 3, 3, 32
  00e6df8  stw 5, 0(3)
  00e6dfc  b 0xe6e40
  00e6e00  lwz 27, 0(27)
  00e6e04  cmpw 4, 27
  00e6e08  bf 0, 0xe6e28
  00e6e0c  addic 5, 30, 12
  00e6e10  li 6, -1
  00e6e14  addc 3, 5, 3
  00e6e18  extsw 27, 4
  00e6e1c  clrldi 3, 3, 32
  00e6e20  stw 6, 0(3)
  00e6e24  b 0xe6e40
  00e6e28  addic 4, 30, 12
  00e6e2c  li 5, -2
  00e6e30  addc 3, 4, 3
  00e6e34  extsw 27, 27
  00e6e38  clrldi 3, 3, 32
  00e6e3c  stw 5, 0(3)
  00e6e40  addic 25, 24, 8
  00e6e44  ori 3, 26, 0
  00e6e48  clrldi 5, 27, 32
  00e6e4c  ori 4, 25, 0
  00e6e50  bl 0x5d0218
  00e6e54  nop
  00e6e58  cmpwi 3, 0
  00e6e5c  bt 2, 0xe6e70
  00e6e60  lis 3, 162
  00e6e64  lwz 4, 2184(3)
  00e6e68  addic 4, 4, 1
  00e6e6c  stw 4, 2184(3)
  00e6e70  ori 3, 26, 0
  00e6e74  ori 4, 25, 0
  00e6e78  ori 5, 27, 0
  00e6e7c  bl 0x50027c
  00e6e80  nop
  00e6e84  addic 3, 27, 3
  00e6e88  rlwinm 3, 3, 0, 0, 29
  00e6e8c  addc 28, 3, 28
  00e6e90  addic 28, 28, 8
  00e6e94  b 0xe6ea0
  00e6e98  addic 29, 29, 1
  00e6e9c  extsw 29, 29
  00e6ea0  lwz 3, 4(24)
  00e6ea4  addic 3, 3, 3
  00e6ea8  rlwinm 3, 3, 0, 0, 29
  00e6eac  addic 3, 3, 8
  00e6eb0  addc 24, 24, 3
  00e6eb4  clrldi 24, 24, 32
  00e6eb8  lwz 3, 0(24)
  00e6ebc  cmpwi 3, -1
  00e6ec0  bf 2, 0xe6d6c
  00e6ec4  lwz 3, 0(30)
  00e6ec8  addic 24, 24, 8
  00e6ecc  cmpwi 3, 0
  00e6ed0  addic 28, 28, 8
  00e6ed4  bt 2, 0xe6f14
  00e6ed8  ori 3, 23, 0
  00e6edc  addic 5, 3, 16
  00e6ee0  addic 4, 30, 4
  00e6ee4  extsw 6, 5
  00e6ee8  addc 3, 4, 3
  00e6eec  addic 4, 22, 8
  00e6ef0  clrldi 7, 3, 32
  00e6ef4  ori 3, 5, 0
  00e6ef8  lwzx 5, 30, 6
  00e6efc  cmpwi 5, 0
  00e6f00  lwz 5, 0(7)
  00e6f04  addc 4, 4, 5
  00e6f08  addic 22, 4, 3
  00e6f0c  rlwinm 22, 22, 0, 0, 29
  00e6f10  bf 2, 0xe6edc
  00e6f14  addic 3, 22, 8
  00e6f18  cmpw 28, 3
  00e6f1c  bt 2, 0xe6f28
  00e6f20  addic 29, 29, 1
  00e6f24  extsw 29, 29
  00e6f28  slwi 3, 23, 4
  00e6f2c  extsw 4, 3
  00e6f30  lwzx 4, 30, 4
  00e6f34  cmpwi 4, 0
  00e6f38  bt 2, 0xe6f80
  00e6f3c  addic 4, 30, 8
  00e6f40  lwz 5, 0(24)
  00e6f44  addc 4, 4, 3
  00e6f48  clrldi 4, 4, 32
  00e6f4c  lwz 4, 0(4)
  00e6f50  cmpw 4, 5
  00e6f54  bt 2, 0xe6f80
  00e6f58  addic 4, 30, 12
  00e6f5c  addc 3, 4, 3
  00e6f60  clrldi 3, 3, 32
  00e6f64  lwz 3, 0(3)
  00e6f68  cmpwi 3, 1
  00e6f6c  bf 0, 0xe6f78
  00e6f70  addic 29, 29, 1
  00e6f74  extsw 29, 29
  00e6f78  addic 23, 23, 1
  00e6f7c  b 0xe6f28
  00e6f80  lis 3, 114
  00e6f84  lis 4, 114
  00e6f88  addic 3, 3, -1500
  00e6f8c  addic 4, 4, -1320
  00e6f90  lwz 3, 204(3)
  00e6f94  sldi 5, 3, 6
  00e6f98  ori 3, 29, 0
  00e6f9c  addc 6, 5, 5
  00e6fa0  addc 5, 5, 6
  00e6fa4  extsw 5, 5
  00e6fa8  stwx 29, 4, 5
  00e6fac  ld 0, 208(1)
  00e6fb0  mtlr 0
  00e6fb4  ld 22, 112(1)
  00e6fb8  ld 23, 120(1)
  00e6fbc  ld 24, 128(1)
  00e6fc0  ld 25, 136(1)
  00e6fc4  ld 26, 144(1)
  00e6fc8  ld 27, 152(1)
  00e6fcc  ld 28, 160(1)
  00e6fd0  ld 29, 168(1)
  00e6fd4  ld 30, 176(1)
  00e6fd8  ld 31, 184(1)
  00e6fdc  addi 1, 1, 192
  00e6fe0  blr

memcard_RestoreGame:   # 0xe6fe4, 0x170 bytes
  00e6fe4  stdu 1, -160(1)
  00e6fe8  mflr 0
  00e6fec  std 0, 176(1)
  00e6ff0  std 31, 152(1)
  00e6ff4  ori 31, 3, 0
  00e6ff8  std 29, 136(1)
  00e6ffc  lis 3, 114
  00e7000  li 29, 8
  00e7004  std 30, 144(1)
  00e7008  addic 3, 3, 26256
  00e700c  std 27, 120(1)
  00e7010  li 30, 0
  00e7014  ori 27, 29, 0
  00e7018  lwz 4, 0(3)
  00e701c  std 28, 128(1)
  00e7020  cmpwi 4, 0
  00e7024  bt 2, 0xe705c
  00e7028  ori 5, 30, 0
  00e702c  ori 4, 3, 0
  00e7030  addic 5, 5, 16
  00e7034  lwz 8, 4(4)
  00e7038  addic 6, 29, 8
  00e703c  extsw 7, 5
  00e7040  addc 6, 6, 8
  00e7044  addic 4, 4, 16
  00e7048  addic 29, 6, 3
  00e704c  lwzx 7, 3, 7
  00e7050  rlwinm 29, 29, 0, 0, 29
  00e7054  cmpwi 7, 0
  00e7058  bf 2, 0xe7030
  00e705c  lis 28, 114
  00e7060  addic 29, 29, 8
  00e7064  addic 28, 28, 27040
  00e7068  lwz 4, 0(28)
  00e706c  cmpwi 4, 0
  00e7070  bt 2, 0xe70a8
  00e7074  ori 5, 30, 0
  00e7078  ori 4, 28, 0
  00e707c  addic 5, 5, 16
  00e7080  addic 6, 27, 8
  00e7084  lwz 8, 4(4)
  00e7088  extsw 7, 5
  00e708c  addc 6, 6, 8
  00e7090  addic 4, 4, 16
  00e7094  addic 27, 6, 3
  00e7098  lwzx 7, 28, 7
  00e709c  rlwinm 27, 27, 0, 0, 29
  00e70a0  cmpwi 7, 0
  00e70a4  bf 2, 0xe707c
  00e70a8  lwz 4, 0(31)
  00e70ac  addic 27, 27, 8
  00e70b0  cmpw 4, 29
  00e70b4  bt 2, 0xe70cc
  00e70b8  lis 3, 101
  00e70bc  addic 3, 3, 11168
  00e70c0  bl 0x5cd098
  00e70c4  nop
  00e70c8  b 0xe7130
  00e70cc  lwz 4, 4(31)
  00e70d0  cmpw 4, 27
  00e70d4  bt 2, 0xe70ec
  00e70d8  lis 3, 101
  00e70dc  addic 3, 3, 11168
  00e70e0  bl 0x5cd098
  00e70e4  nop
  00e70e8  b 0xe7130
  00e70ec  addic 31, 31, 8
  00e70f0  ori 5, 3, 0
  00e70f4  ori 3, 31, 0
  00e70f8  ori 4, 30, 0
  00e70fc  bl 0xe6cd8
  00e7100  addc 31, 31, 29
  00e7104  clrldi 31, 31, 32
  00e7108  ori 4, 30, 0
  00e710c  ori 3, 31, 0
  00e7110  ori 5, 28, 0
  00e7114  bl 0xe6cd8
  00e7118  addic 30, 30, 1
  00e711c  addc 31, 31, 27
  00e7120  extsw 30, 30
  00e7124  clrldi 31, 31, 32
  00e7128  cmpwi 30, 20
  00e712c  bt 0, 0xe7108
  00e7130  ld 0, 176(1)
  00e7134  mtlr 0
  00e7138  ld 27, 120(1)
  00e713c  ld 28, 128(1)
  00e7140  ld 29, 136(1)
  00e7144  ld 30, 144(1)
  00e7148  ld 31, 152(1)
  00e714c  addi 1, 1, 160
  00e7150  blr

memcard_SetupNewGameGlobals:   # 0xe7154, 0x4e4 bytes
  00e7154  stdu 1, -256(1)
  00e7158  mflr 0
  00e715c  std 0, 272(1)
  00e7160  std 16, 128(1)
  00e7164  lis 3, 114
  00e7168  std 30, 240(1)
  00e716c  li 16, 4
  00e7170  std 28, 224(1)
  00e7174  std 17, 136(1)
  00e7178  lis 30, 114
  00e717c  li 17, 1
  00e7180  std 31, 248(1)
  00e7184  lis 28, 114
  00e7188  std 26, 208(1)
  00e718c  lis 31, 114
  00e7190  stw 16, -1240(3)
  00e7194  std 29, 232(1)
  00e7198  lis 26, 114
  00e719c  std 27, 216(1)
  00e71a0  lis 29, 114
  00e71a4  li 27, 716
  00e71a8  std 25, 200(1)
  00e71ac  stw 17, -1244(30)
  00e71b0  lis 25, 114
  00e71b4  std 24, 192(1)
  00e71b8  stb 17, -1191(28)
  00e71bc  li 24, 1024
  00e71c0  stw 17, -1212(31)
  00e71c4  lis 4, 151
  00e71c8  stb 17, -1192(26)
  00e71cc  lis 3, 151
  00e71d0  std 18, 144(1)
  00e71d4  stw 27, -1208(29)
  00e71d8  li 18, 0
  00e71dc  lis 5, 151
  00e71e0  lis 6, 151
  00e71e4  stw 24, -1204(25)
  00e71e8  lis 7, 151
  00e71ec  stw 18, -25488(4)
  00e71f0  addic 9, 6, -13820
  00e71f4  stw 18, -25440(3)
  00e71f8  lis 8, 151
  00e71fc  stw 18, -13828(5)
  00e7200  li 5, 128
  00e7204  stw 18, -13824(7)
  00e7208  addic 3, 8, -16400
  00e720c  stw 18, -13820(6)
  00e7210  ori 4, 18, 0
  00e7214  std 23, 184(1)
  00e7218  std 22, 176(1)
  00e721c  std 21, 168(1)
  00e7220  std 20, 160(1)
  00e7224  std 19, 152(1)
  00e7228  std 15, 120(1)
  00e722c  stw 18, 4(9)
  00e7230  bl 0x5d0140
  00e7234  nop
  00e7238  lis 3, 151
  00e723c  li 23, 12
  00e7240  addic 3, 3, -16268
  00e7244  ori 4, 18, 0
  00e7248  ori 5, 23, 0
  00e724c  bl 0x5d0140
  00e7250  nop
  00e7254  lis 3, 151
  00e7258  li 5, 32
  00e725c  addic 3, 3, -16244
  00e7260  ori 4, 18, 0
  00e7264  bl 0x5d0140
  00e7268  nop
  00e726c  lis 3, 151
  00e7270  li 22, 37
  00e7274  addic 3, 3, -16212
  00e7278  ori 4, 18, 0
  00e727c  ori 5, 22, 0
  00e7280  bl 0x5d0140
  00e7284  nop
  00e7288  lis 3, 151
  00e728c  ori 4, 18, 0
  00e7290  addic 3, 3, -16064
  00e7294  ori 5, 22, 0
  00e7298  bl 0x5d0140
  00e729c  nop
  00e72a0  lis 3, 151
  00e72a4  ori 4, 18, 0
  00e72a8  addic 3, 3, -16027
  00e72ac  ori 5, 22, 0
  00e72b0  bl 0x5d0140
  00e72b4  nop
  00e72b8  lis 3, 114
  00e72bc  ori 4, 18, 0
  00e72c0  addic 3, 3, -1236
  00e72c4  ori 5, 23, 0
  00e72c8  bl 0x5d0140
  00e72cc  nop
  00e72d0  lis 3, 151
  00e72d4  li 5, 8
  00e72d8  addic 3, 3, -15908
  00e72dc  ori 4, 18, 0
  00e72e0  bl 0x5d0140
  00e72e4  nop
  00e72e8  lis 3, 151
  00e72ec  li 5, 20
  00e72f0  addic 3, 3, -13812
  00e72f4  ori 4, 18, 0
  00e72f8  bl 0x5d0140
  00e72fc  nop
  00e7300  lis 3, 151
  00e7304  li 5, 80
  00e7308  addic 3, 3, -15988
  00e730c  ori 4, 18, 0
  00e7310  bl 0x5d0140
  00e7314  nop
  00e7318  lis 3, 151
  00e731c  li 5, 1936
  00e7320  addic 3, 3, -15796
  00e7324  ori 4, 18, 0
  00e7328  bl 0x5d0140
  00e732c  nop
  00e7330  lis 3, 161
  00e7334  li 5, 1184
  00e7338  addic 3, 3, 12
  00e733c  ori 4, 18, 0
  00e7340  bl 0x5d0140
  00e7344  nop
  00e7348  lis 3, 161
  00e734c  li 5, 288
  00e7350  addic 3, 3, -276
  00e7354  ori 4, 18, 0
  00e7358  bl 0x5d0140
  00e735c  nop
  00e7360  lis 3, 161
  00e7364  li 5, 296
  00e7368  addic 3, 3, -572
  00e736c  ori 4, 18, 0
  00e7370  bl 0x5d0140
  00e7374  nop
  00e7378  lis 3, 114
  00e737c  stw 17, -1244(30)
  00e7380  lis 4, 151
  00e7384  stb 17, -1191(28)
  00e7388  lis 6, 151
  00e738c  stb 17, -1192(26)
  00e7390  lis 7, 151
  00e7394  li 5, 40
  00e7398  stw 17, -1220(3)
  00e739c  stw 18, -25448(4)
  00e73a0  lis 4, 114
  00e73a4  stw 18, -25444(6)
  00e73a8  lis 6, 114
  00e73ac  stw 18, -25436(7)
  00e73b0  lis 3, 151
  00e73b4  addic 3, 3, -25432
  00e73b8  stw 17, -1224(4)
  00e73bc  stw 17, -1216(6)
  00e73c0  ori 4, 18, 0
  00e73c4  bl 0x5d0140
  00e73c8  nop
  00e73cc  lis 6, 151
  00e73d0  lis 3, 151
  00e73d4  li 5, 28
  00e73d8  addic 3, 3, -25476
  00e73dc  ori 4, 18, 0
  00e73e0  stw 18, -25392(6)
  00e73e4  bl 0x5d0140
  00e73e8  nop
  00e73ec  lis 6, 151
  00e73f0  lis 3, 151
  00e73f4  stw 17, -1212(31)
  00e73f8  stw 27, -1208(29)
  00e73fc  ori 4, 18, 0
  00e7400  addic 3, 3, -16256
  00e7404  stw 24, -1204(25)
  00e7408  ori 5, 23, 0
  00e740c  stb 18, -25480(6)
  00e7410  bl 0x5d0140
  00e7414  nop
  00e7418  lis 3, 161
  00e741c  li 31, 148
  00e7420  addic 3, 3, -2788
  00e7424  ori 4, 18, 0
  00e7428  ori 5, 31, 0
  00e742c  bl 0x5d0140
  00e7430  nop
  00e7434  lis 3, 161
  00e7438  ori 4, 18, 0
  00e743c  addic 3, 3, -2640
  00e7440  ori 5, 31, 0
  00e7444  bl 0x5d0140
  00e7448  nop
  00e744c  lis 3, 161
  00e7450  ori 4, 18, 0
  00e7454  addic 3, 3, -2492
  00e7458  ori 5, 31, 0
  00e745c  bl 0x5d0140
  00e7460  nop
  00e7464  lis 4, 161
  00e7468  lis 5, 161
  00e746c  lis 6, 161
  00e7470  lis 7, 161
  00e7474  lis 3, 161
  00e7478  stw 18, -2340(4)
  00e747c  lis 4, 161
  00e7480  stw 18, -2344(5)
  00e7484  addic 3, 3, 1196
  00e7488  stw 18, -2336(6)
  00e748c  li 5, 150
  00e7490  lis 6, 114
  00e7494  stw 18, -748(4)
  00e7498  stw 18, -744(7)
  00e749c  ori 4, 18, 0
  00e74a0  stw 17, -1188(6)
  00e74a4  bl 0x5d0140
  00e74a8  nop
  00e74ac  lis 31, 115
  00e74b0  li 5, 1812
  00e74b4  addic 15, 31, -19664
  00e74b8  ori 4, 18, 0
  00e74bc  ori 3, 15, 0
  00e74c0  bl 0x5d0140
  00e74c4  nop
  00e74c8  li 3, 21111
  00e74cc  li 4, 21112
  00e74d0  sth 3, -19664(31)
  00e74d4  li 3, 21177
  00e74d8  sth 4, 12(15)
  00e74dc  li 4, 21184
  00e74e0  sth 3, 24(15)
  00e74e4  sth 4, 36(15)
  00e74e8  addic 16, 16, -1
  00e74ec  sth 17, 2(15)
  00e74f0  addic 15, 15, 12
  00e74f4  cmpwi 16, 0
  00e74f8  bf 2, 0xe74e8
  00e74fc  lis 3, 151
  00e7500  li 5, 20
  00e7504  addic 3, 3, -13792
  00e7508  ori 4, 18, 0
  00e750c  bl 0x5d0140
  00e7510  nop
  00e7514  ori 31, 18, 0
  00e7518  ori 30, 31, 0
  00e751c  ori 29, 30, 0
  00e7520  lis 3, 151
  00e7524  slwi 6, 31, 15
  00e7528  addic 3, 3, -13772
  00e752c  lis 5, 0
  00e7530  addc 3, 3, 6
  00e7534  ori 5, 5, 32768
  00e7538  clrldi 3, 3, 32
  00e753c  ori 4, 18, 0
  00e7540  bl 0x5d0140
  00e7544  nop
  00e7548  lis 3, 161
  00e754c  li 28, 16
  00e7550  addic 3, 3, -13692
  00e7554  ori 4, 18, 0
  00e7558  addc 3, 3, 29
  00e755c  ori 5, 28, 0
  00e7560  clrldi 3, 3, 32
  00e7564  bl 0x5d0140
  00e7568  nop
  00e756c  lis 3, 161
  00e7570  li 27, 256
  00e7574  addic 3, 3, -13028
  00e7578  ori 4, 18, 0
  00e757c  addc 3, 3, 30
  00e7580  ori 5, 27, 0
  00e7584  clrldi 3, 3, 32
  00e7588  bl 0x5d0140
  00e758c  nop
  00e7590  lis 3, 161
  00e7594  ori 4, 18, 0
  00e7598  addic 3, 3, -7908
  00e759c  ori 5, 27, 0
  00e75a0  addc 3, 3, 30
  00e75a4  clrldi 3, 3, 32
  00e75a8  bl 0x5d0140
  00e75ac  nop
  00e75b0  lis 3, 161
  00e75b4  ori 4, 18, 0
  00e75b8  addic 3, 3, -13372
  00e75bc  ori 5, 28, 0
  00e75c0  addc 3, 3, 29
  00e75c4  clrldi 3, 3, 32
  00e75c8  bl 0x5d0140
  00e75cc  nop
  00e75d0  addic 31, 31, 1
  00e75d4  addic 30, 30, 256
  00e75d8  cmpwi 31, 20
  00e75dc  addic 29, 29, 16
  00e75e0  bt 0, 0xe7520
  00e75e4  ld 0, 272(1)
  00e75e8  mtlr 0
  00e75ec  ld 15, 120(1)
  00e75f0  ld 16, 128(1)
  00e75f4  ld 17, 136(1)
  00e75f8  ld 18, 144(1)
  00e75fc  ld 19, 152(1)
  00e7600  ld 20, 160(1)
  00e7604  ld 21, 168(1)
  00e7608  ld 22, 176(1)
  00e760c  ld 23, 184(1)
  00e7610  ld 24, 192(1)
  00e7614  ld 25, 200(1)
  00e7618  ld 26, 208(1)
  00e761c  ld 27, 216(1)
  00e7620  ld 28, 224(1)
  00e7624  ld 29, 232(1)
  00e7628  ld 30, 240(1)
  00e762c  ld 31, 248(1)
  00e7630  addi 1, 1, 256
  00e7634  blr

memcard_ResetGame:   # 0xe7638, 0x84 bytes
  00e7638  stdu 1, -128(1)
  00e763c  mflr 0
  00e7640  std 0, 144(1)
  00e7644  std 31, 120(1)
  00e7648  li 31, 1
  00e764c  ori 3, 31, 0
  00e7650  bl 0x11dbcc
  00e7654  nop
  00e7658  bl 0xe7154
  00e765c  ori 3, 31, 0
  00e7660  bl 0x11dbcc
  00e7664  nop
  00e7668  lis 3, 114
  00e766c  lis 5, 114
  00e7670  lis 4, 151
  00e7674  li 6, 0
  00e7678  lis 7, 114
  00e767c  lwz 9, -1204(3)
  00e7680  addic 10, 4, -13820
  00e7684  lwz 11, -1208(5)
  00e7688  stw 6, -13820(4)
  00e768c  lis 8, 151
  00e7690  lwz 4, -1212(7)
  00e7694  stw 9, -1204(3)
  00e7698  stw 6, 4(10)
  00e769c  stw 11, -1208(5)
  00e76a0  stw 4, -1212(7)
  00e76a4  stw 6, -25488(8)
  00e76a8  ld 0, 144(1)
  00e76ac  mtlr 0
  00e76b0  ld 31, 120(1)
  00e76b4  addi 1, 1, 128
  00e76b8  blr

memcard_GetSaveSysState:   # 0xe76bc, 0x10 bytes
  00e76bc  lis 3, 144
  00e76c0  lwz 3, -22972(3)
  00e76c4  extsw 3, 3
  00e76c8  blr

memcard_Update:   # 0xe76cc, 0x178 bytes
  00e76cc  stdu 1, -112(1)
  00e76d0  mflr 0
  00e76d4  std 0, 128(1)
  00e76d8  bl 0x11b1b4
  00e76dc  nop
  00e76e0  bl 0x11b124
  00e76e4  nop
  00e76e8  lis 4, 151
  00e76ec  lis 5, 162
  00e76f0  lwz 4, -13820(4)
  00e76f4  lwz 5, 12432(5)
  00e76f8  cmplw 4, 5
  00e76fc  bf 1, 0xe770c
  00e7700  lis 4, 162
  00e7704  li 5, 0
  00e7708  stb 5, 12429(4)
  00e770c  lis 4, 162
  00e7710  addic 4, 4, 12432
  00e7714  lwz 4, 4(4)
  00e7718  cmpw 3, 4
  00e771c  bf 1, 0xe7730
  00e7720  lis 4, 162
  00e7724  li 5, 0
  00e7728  addic 4, 4, 12429
  00e772c  stb 5, 1(4)
  00e7730  cmpwi 3, 10
  00e7734  bf 2, 0xe7758
  00e7738  lis 3, 162
  00e773c  addic 3, 3, 12429
  00e7740  lbz 3, 1(3)
  00e7744  cmpwi 3, 1
  00e7748  bt 2, 0xe7758
  00e774c  li 3, 3
  00e7750  bl 0x112dc0
  00e7754  nop
  00e7758  lis 3, 151
  00e775c  lis 4, 15
  00e7760  ori 4, 4, 16960
  00e7764  lwz 3, -13820(3)
  00e7768  cmplw 3, 4
  00e776c  bf 1, 0xe778c
  00e7770  lis 3, 162
  00e7774  lbz 3, 12429(3)
  00e7778  cmpwi 3, 1
  00e777c  bt 2, 0xe778c
  00e7780  li 3, 13
  00e7784  bl 0x112dc0
  00e7788  nop
  00e778c  lis 3, 144
  00e7790  lwz 3, -22972(3)
  00e7794  cmpwi 3, 5
  00e7798  cmpwi 1, 3, 12
  00e779c  cmpwi 6, 3, 11
  00e77a0  bt 2, 0xe7834
  00e77a4  lis 3, 161
  00e77a8  lbz 3, 24376(3)
  00e77ac  cmpwi 3, 0
  00e77b0  bt 2, 0xe7800
  00e77b4  lis 3, 162
  00e77b8  lbz 3, 12440(3)
  00e77bc  cmpwi 3, 0
  00e77c0  bf 2, 0xe7800
  00e77c4  bf 26, 0xe7800
  00e77c8  lis 3, 162
  00e77cc  li 4, 1
  00e77d0  stb 4, 12440(3)
  00e77d4  bl 0x4e7404
  00e77d8  nop
  00e77dc  lwz 3, 1128(3)
  00e77e0  cmpwi 3, 11
  00e77e4  bf 2, 0xe7834
  00e77e8  bl 0x4e7404
  00e77ec  nop
  00e77f0  li 4, 102
  00e77f4  bl 0x4e7d18
  00e77f8  nop
  00e77fc  b 0xe7834
  00e7800  lis 3, 161
  00e7804  lbz 3, 24376(3)
  00e7808  cmpwi 3, 0
  00e780c  bt 2, 0xe7834
  00e7810  bf 6, 0xe7834
  00e7814  lis 3, 161
  00e7818  li 4, 0
  00e781c  stw 4, 1800(3)
  00e7820  bl 0x4e7404
  00e7824  nop
  00e7828  lis 3, 144
  00e782c  li 4, 5
  00e7830  stw 4, -22972(3)
  00e7834  ld 0, 128(1)
  00e7838  mtlr 0
  00e783c  addi 1, 1, 112
  00e7840  blr

STUB_000e7844:   # 0xe7844, 0x8 bytes
  00e7844  li 3, 0
  00e7848  blr

memcard_PrepData:   # 0xe784c, 0x138 bytes
  00e784c  stdu 1, -176(1)
  00e7850  mflr 0
  00e7854  std 0, 192(1)
  00e7858  std 31, 168(1)
  00e785c  ori 31, 5, 0
  00e7860  std 29, 152(1)
  00e7864  std 28, 144(1)
  00e7868  lwz 5, 0(5)
  00e786c  ori 28, 3, 0
  00e7870  std 30, 160(1)
  00e7874  li 29, 0
  00e7878  ori 30, 4, 0
  00e787c  cmpwi 5, 0
  00e7880  addic 3, 28, 8
  00e7884  std 27, 136(1)
  00e7888  std 26, 128(1)
  00e788c  std 25, 120(1)
  00e7890  std 24, 112(1)
  00e7894  ori 4, 29, 0
  00e7898  bt 2, 0xe7930
  00e789c  ori 5, 29, 0
  00e78a0  ori 6, 3, 0
  00e78a4  addic 3, 31, 4
  00e78a8  addic 7, 31, 8
  00e78ac  addc 3, 3, 5
  00e78b0  addic 26, 5, 16
  00e78b4  clrldi 27, 3, 32
  00e78b8  addc 3, 7, 5
  00e78bc  lwzx 7, 31, 5
  00e78c0  addic 24, 4, 8
  00e78c4  clrldi 3, 3, 32
  00e78c8  addic 25, 6, 8
  00e78cc  lwz 5, 0(27)
  00e78d0  mullw 5, 30, 5
  00e78d4  lwz 3, 0(3)
  00e78d8  addc 5, 7, 5
  00e78dc  stw 3, 0(6)
  00e78e0  lwz 7, 0(27)
  00e78e4  clrldi 4, 5, 32
  00e78e8  stw 7, 4(6)
  00e78ec  lwz 5, 0(27)
  00e78f0  ori 3, 25, 0
  00e78f4  extsw 5, 5
  00e78f8  bl 0x50027c
  00e78fc  nop
  00e7900  extsw 3, 26
  00e7904  lwz 4, 0(27)
  00e7908  ori 5, 26, 0
  00e790c  addc 6, 25, 4
  00e7910  addc 4, 24, 4
  00e7914  lwzx 7, 31, 3
  00e7918  addic 3, 6, 3
  00e791c  addic 4, 4, 3
  00e7920  cmpwi 7, 0
  00e7924  rlwinm 3, 3, 0, 0, 29
  00e7928  rlwinm 4, 4, 0, 0, 29
  00e792c  bf 2, 0xe78a0
  00e7930  li 5, -1
  00e7934  ori 6, 4, 0
  00e7938  addic 4, 4, 8
  00e793c  addic 6, 6, 16
  00e7940  stw 5, 0(3)
  00e7944  stw 29, 4(3)
  00e7948  stw 29, 4(28)
  00e794c  extsw 3, 6
  00e7950  stw 4, 0(28)
  00e7954  ld 0, 192(1)
  00e7958  mtlr 0
  00e795c  ld 24, 112(1)
  00e7960  ld 25, 120(1)
  00e7964  ld 26, 128(1)
  00e7968  ld 27, 136(1)
  00e796c  ld 28, 144(1)
  00e7970  ld 29, 152(1)
  00e7974  ld 30, 160(1)
  00e7978  ld 31, 168(1)
  00e797c  addi 1, 1, 176
  00e7980  blr

memcard_MakeWholeSave:   # 0xe7984, 0x134 bytes
  00e7984  stdu 1, -144(1)
  00e7988  mflr 0
  00e798c  std 0, 160(1)
  00e7990  std 31, 136(1)
  00e7994  ori 31, 3, 0
  00e7998  lis 3, 114
  00e799c  li 4, 8
  00e79a0  std 30, 128(1)
  00e79a4  addic 3, 3, 26256
  00e79a8  std 29, 120(1)
  00e79ac  li 30, 0
  00e79b0  ori 29, 4, 0
  00e79b4  lwz 5, 0(3)
  00e79b8  std 28, 112(1)
  00e79bc  cmpwi 5, 0
  00e79c0  bt 2, 0xe79f8
  00e79c4  ori 6, 30, 0
  00e79c8  ori 5, 3, 0
  00e79cc  addic 6, 6, 16
  00e79d0  lwz 8, 4(5)
  00e79d4  addic 4, 4, 8
  00e79d8  extsw 7, 6
  00e79dc  addc 4, 4, 8
  00e79e0  addic 5, 5, 16
  00e79e4  addic 4, 4, 3
  00e79e8  lwzx 7, 3, 7
  00e79ec  rlwinm 4, 4, 0, 0, 29
  00e79f0  cmpwi 7, 0
  00e79f4  bf 2, 0xe79cc
  00e79f8  lis 5, 114
  00e79fc  addic 6, 4, 8
  00e7a00  ori 4, 29, 0
  00e7a04  addic 29, 5, 27040
  00e7a08  stw 6, 0(31)
  00e7a0c  lwz 5, 0(29)
  00e7a10  cmpwi 5, 0
  00e7a14  bt 2, 0xe7a4c
  00e7a18  ori 6, 30, 0
  00e7a1c  ori 5, 29, 0
  00e7a20  addic 6, 6, 16
  00e7a24  addic 4, 4, 8
  00e7a28  lwz 8, 4(5)
  00e7a2c  extsw 7, 6
  00e7a30  addc 4, 4, 8
  00e7a34  addic 5, 5, 16
  00e7a38  addic 4, 4, 3
  00e7a3c  lwzx 7, 29, 7
  00e7a40  rlwinm 4, 4, 0, 0, 29
  00e7a44  cmpwi 7, 0
  00e7a48  bf 2, 0xe7a20
  00e7a4c  addic 6, 4, 8
  00e7a50  addic 28, 31, 8
  00e7a54  ori 5, 3, 0
  00e7a58  ori 3, 28, 0
  00e7a5c  stw 6, 4(31)
  00e7a60  ori 4, 30, 0
  00e7a64  bl 0xe784c
  00e7a68  addc 31, 28, 3
  00e7a6c  clrldi 31, 31, 32
  00e7a70  ori 4, 30, 0
  00e7a74  ori 3, 31, 0
  00e7a78  ori 5, 29, 0
  00e7a7c  bl 0xe784c
  00e7a80  addic 30, 30, 1
  00e7a84  addc 31, 31, 3
  00e7a88  extsw 30, 30
  00e7a8c  clrldi 31, 31, 32
  00e7a90  cmpwi 30, 20
  00e7a94  bt 0, 0xe7a70
  00e7a98  ld 0, 160(1)
  00e7a9c  mtlr 0
  00e7aa0  ld 28, 112(1)
  00e7aa4  ld 29, 120(1)
  00e7aa8  ld 30, 128(1)
  00e7aac  ld 31, 136(1)
  00e7ab0  addi 1, 1, 144
  00e7ab4  blr

memcard_ReturnLang:   # 0xe7ab8, 0x10 bytes
  00e7ab8  lis 3, 151
  00e7abc  lwz 3, -25484(3)
  00e7ac0  extsw 3, 3
  00e7ac4  blr

memcard_InitSaveMsg:   # 0xe7ac8, 0xa4 bytes
  00e7ac8  stdu 1, -128(1)
  00e7acc  mflr 0
  00e7ad0  std 0, 144(1)
  00e7ad4  std 31, 120(1)
  00e7ad8  std 30, 112(1)
  00e7adc  bl 0x64f504
  00e7ae0  ld 2, 40(1)
  00e7ae4  bl 0x5038e0
  00e7ae8  nop
  00e7aec  ori 31, 3, 0
  00e7af0  lis 4, 162
  00e7af4  lis 6, 112
  00e7af8  lis 7, 101
  00e7afc  addic 4, 4, 2189
  00e7b00  li 5, 1
  00e7b04  addic 6, 6, 24336
  00e7b08  addic 7, 7, 11188
  00e7b0c  bl 0x503a3c
  00e7b10  nop
  00e7b14  ori 3, 31, 0
  00e7b18  li 4, 6000
  00e7b1c  bl 0x503bd0
  00e7b20  nop
  00e7b24  ori 30, 3, 0
  00e7b28  ori 3, 31, 0
  00e7b2c  li 4, 6003
  00e7b30  bl 0x503bd0
  00e7b34  nop
  00e7b38  ori 31, 3, 0
  00e7b3c  bl 0x4e7404
  00e7b40  nop
  00e7b44  ori 4, 30, 0
  00e7b48  ori 5, 31, 0
  00e7b4c  bl 0x4e8148
  00e7b50  nop
  00e7b54  ld 0, 144(1)
  00e7b58  mtlr 0
  00e7b5c  ld 30, 112(1)
  00e7b60  ld 31, 120(1)
  00e7b64  addi 1, 1, 128
  00e7b68  blr

STUB_000e7b6c:   # 0xe7b6c, 0x24 bytes
  00e7b6c  ori 4, 3, 0
  00e7b70  li 3, 0
  00e7b74  lwz 4, 4(4)
  00e7b78  cmpw 1, 4, 3
  00e7b7c  cmpwi 4, 0
  00e7b80  crorc 2, 2, 6
  00e7b84  bt 2, 0xe7b8c
  00e7b88  li 3, 1
  00e7b8c  blr

memcard_RestoreInfo:   # 0xe7b90, 0x104 bytes
  00e7b90  stdu 1, -64(1)
  00e7b94  li 7, 0
  00e7b98  lwz 8, 4(3)
  00e7b9c  cmpw 1, 8, 7
  00e7ba0  cmpwi 8, 0
  00e7ba4  crorc 2, 2, 6
  00e7ba8  std 31, 56(1)
  00e7bac  std 30, 48(1)
  00e7bb0  ori 6, 7, 0
  00e7bb4  bt 2, 0xe7bbc
  00e7bb8  li 6, 1
  00e7bbc  cmpwi 6, 0
  00e7bc0  bf 2, 0xe7bc8
  00e7bc4  li 7, 1
  00e7bc8  lis 6, 114
  00e7bcc  sldi 8, 5, 5
  00e7bd0  addic 6, 6, -1500
  00e7bd4  sldi 5, 5, 2
  00e7bd8  sldi 4, 4, 6
  00e7bdc  addic 10, 6, 56
  00e7be0  subc 5, 8, 5
  00e7be4  addc 9, 4, 4
  00e7be8  addc 10, 5, 10
  00e7bec  addc 4, 4, 9
  00e7bf0  clrldi 9, 10, 32
  00e7bf4  extsw 10, 4
  00e7bf8  addic 8, 6, 32
  00e7bfc  addic 11, 3, 16
  00e7c00  addc 8, 5, 8
  00e7c04  addic 12, 6, 36
  00e7c08  clrldi 8, 8, 32
  00e7c0c  stwx 7, 9, 10
  00e7c10  addic 31, 3, 28
  00e7c14  addc 7, 5, 12
  00e7c18  lwz 9, 0(11)
  00e7c1c  addic 30, 6, 40
  00e7c20  clrldi 7, 7, 32
  00e7c24  stwx 9, 8, 10
  00e7c28  addic 11, 3, 40
  00e7c2c  lwz 8, 0(31)
  00e7c30  addc 9, 5, 30
  00e7c34  addic 12, 6, 44
  00e7c38  addic 6, 6, 48
  00e7c3c  stwx 8, 7, 10
  00e7c40  addc 12, 5, 12
  00e7c44  clrldi 7, 9, 32
  00e7c48  lwz 8, 0(11)
  00e7c4c  addic 9, 3, 52
  00e7c50  addc 5, 5, 6
  00e7c54  clrldi 11, 12, 32
  00e7c58  addc 4, 5, 4
  00e7c5c  stwx 8, 7, 10
  00e7c60  addic 7, 3, 64
  00e7c64  lwz 6, 0(9)
  00e7c68  clrldi 4, 4, 32
  00e7c6c  addic 3, 3, 64
  00e7c70  stwx 6, 11, 10
  00e7c74  lwz 5, 0(7)
  00e7c78  stw 5, 0(4)
  00e7c7c  lwz 3, 4(3)
  00e7c80  stw 3, 4(4)
  00e7c84  ld 30, 48(1)
  00e7c88  ld 31, 56(1)
  00e7c8c  addi 1, 1, 64
  00e7c90  blr

memcard_GetSaveMsgString:   # 0xe7c94, 0xb4 bytes
  00e7c94  stdu 1, -112(1)
  00e7c98  mflr 0
  00e7c9c  std 0, 128(1)
  00e7ca0  cmpwi 3, 1
  00e7ca4  cmpwi 1, 3, 3
  00e7ca8  cmpwi 6, 3, 2
  00e7cac  cmpwi 7, 3, 0
  00e7cb0  bt 1, 0xe7cc4
  00e7cb4  cmpwi 3, -1
  00e7cb8  bf 1, 0xe7d30
  00e7cbc  bf 29, 0xe7cd0
  00e7cc0  b 0xe7ce8
  00e7cc4  bf 25, 0xe7d00
  00e7cc8  bf 5, 0xe7d18
  00e7ccc  b 0xe7d30
  00e7cd0  bl 0x5038e0
  00e7cd4  nop
  00e7cd8  li 4, 1000
  00e7cdc  bl 0x503bd0
  00e7ce0  nop
  00e7ce4  b 0xe7d38
  00e7ce8  bl 0x5038e0
  00e7cec  nop
  00e7cf0  li 4, 2000
  00e7cf4  bl 0x503bd0
  00e7cf8  nop
  00e7cfc  b 0xe7d38
  00e7d00  bl 0x5038e0
  00e7d04  nop
  00e7d08  li 4, 6003
  00e7d0c  bl 0x503bd0
  00e7d10  nop
  00e7d14  b 0xe7d38
  00e7d18  bl 0x5038e0
  00e7d1c  nop
  00e7d20  li 4, 3000
  00e7d24  bl 0x503bd0
  00e7d28  nop
  00e7d2c  b 0xe7d38
  00e7d30  lis 3, 101
  00e7d34  addic 3, 3, 11232
  00e7d38  ld 0, 128(1)
  00e7d3c  mtlr 0
  00e7d40  addi 1, 1, 112
  00e7d44  blr

memcard_ConvertSaveMsgString:   # 0xe7d48, 0x110 bytes
  00e7d48  stdu 1, -160(1)
  00e7d4c  mflr 0
  00e7d50  std 0, 176(1)
  00e7d54  std 30, 144(1)
  00e7d58  std 31, 152(1)
  00e7d5c  ori 30, 3, 0
  00e7d60  std 29, 136(1)
  00e7d64  ori 31, 4, 0
  00e7d68  li 29, 0
  00e7d6c  ori 3, 29, 0
  00e7d70  lbz 4, 0(30)
  00e7d74  std 28, 128(1)
  00e7d78  std 27, 120(1)
  00e7d7c  cmpwi 4, 0
  00e7d80  bt 2, 0xe7d98
  00e7d84  addic 29, 29, 1
  00e7d88  extsw 29, 29
  00e7d8c  lbzx 4, 30, 29
  00e7d90  cmpwi 4, 0
  00e7d94  bf 2, 0xe7d84
  00e7d98  lis 4, 346
  00e7d9c  lbz 4, -15535(4)
  00e7da0  cmpwi 4, 0
  00e7da4  bt 2, 0xe7db0
  00e7da8  srawi 29, 29, 1
  00e7dac  addze 29, 29
  00e7db0  lis 5, 162
  00e7db4  ori 4, 3, 0
  00e7db8  lis 3, 26214
  00e7dbc  lis 8, 162
  00e7dc0  ori 3, 3, 26215
  00e7dc4  lwz 6, 17568(5)
  00e7dc8  addic 8, 8, 12448
  00e7dcc  li 27, 1024
  00e7dd0  addic 7, 6, 1
  00e7dd4  mulhw 3, 3, 7
  00e7dd8  slwi 6, 6, 10
  00e7ddc  srawi 3, 3, 1
  00e7de0  addc 6, 8, 6
  00e7de4  srwi 9, 3, 31
  00e7de8  clrldi 28, 6, 32
  00e7dec  addc 3, 3, 9
  00e7df0  sldi 8, 3, 2
  00e7df4  addc 6, 3, 8
  00e7df8  ori 3, 28, 0
  00e7dfc  subc 6, 7, 6
  00e7e00  stw 6, 17568(5)
  00e7e04  ori 5, 27, 0
  00e7e08  bl 0x5d0140
  00e7e0c  nop
  00e7e10  bl 0x5038e0
  00e7e14  nop
  00e7e18  clrldi 5, 29, 32
  00e7e1c  ori 4, 30, 0
  00e7e20  ori 6, 28, 0
  00e7e24  ori 7, 27, 0
  00e7e28  ori 8, 31, 0
  00e7e2c  bl 0x503ccc
  00e7e30  nop
  00e7e34  ld 0, 176(1)
  00e7e38  mtlr 0
  00e7e3c  ld 27, 120(1)
  00e7e40  ld 28, 128(1)
  00e7e44  ld 29, 136(1)
  00e7e48  ld 30, 144(1)
  00e7e4c  ld 31, 152(1)
  00e7e50  addi 1, 1, 160
  00e7e54  blr

memcard_FixupAccentChars:   # 0xe7e58, 0x338 bytes
  00e7e58  lbz 4, 0(3)
  00e7e5c  li 5, 0
  00e7e60  cmpwi 4, 0
  00e7e64  bt 2, 0xe818c
  00e7e68  lbzx 4, 3, 5
  00e7e6c  cmpwi 4, 128
  00e7e70  cmpwi 1, 4, 150
  00e7e74  cmpwi 6, 4, 138
  00e7e78  cmpwi 7, 4, 132
  00e7e7c  bf 1, 0xe8178
  00e7e80  bt 5, 0xe7f24
  00e7e84  bt 25, 0xe7ee4
  00e7e88  bt 29, 0xe7eb4
  00e7e8c  cmpwi 4, 129
  00e7e90  bt 1, 0xe7ea0
  00e7e94  cmpwi 4, 128
  00e7e98  bf 1, 0xe8178
  00e7e9c  b 0xe808c
  00e7ea0  cmpwi 4, 130
  00e7ea4  bf 1, 0xe8098
  00e7ea8  cmpwi 4, 131
  00e7eac  bf 1, 0xe8044
  00e7eb0  b 0xe7ff0
  00e7eb4  cmpwi 4, 135
  00e7eb8  bt 1, 0xe7ed0
  00e7ebc  cmpwi 4, 133
  00e7ec0  bf 1, 0xe8104
  00e7ec4  cmpwi 4, 134
  00e7ec8  bf 1, 0xe80f8
  00e7ecc  b 0xe8068
  00e7ed0  cmpwi 4, 136
  00e7ed4  bf 1, 0xe8098
  00e7ed8  cmpwi 4, 137
  00e7edc  bf 1, 0xe80a4
  00e7ee0  b 0xe80b0
  00e7ee4  bt 6, 0xe80ec
  00e7ee8  cmpwi 4, 149
  00e7eec  bt 2, 0xe8020
  00e7ef0  cmpwi 4, 146
  00e7ef4  bt 2, 0xe80c8
  00e7ef8  cmpwi 4, 145
  00e7efc  bt 2, 0xe7ffc
  00e7f00  cmpwi 4, 143
  00e7f04  bt 2, 0xe7fe0
  00e7f08  cmpwi 4, 142
  00e7f0c  bt 2, 0xe80e0
  00e7f10  cmpwi 4, 141
  00e7f14  bt 2, 0xe80bc
  00e7f18  cmpwi 4, 140
  00e7f1c  bt 2, 0xe8110
  00e7f20  b 0xe8178
  00e7f24  cmpwi 4, 163
  00e7f28  bt 1, 0xe7f8c
  00e7f2c  cmpwi 4, 156
  00e7f30  bt 1, 0xe7f5c
  00e7f34  cmpwi 4, 152
  00e7f38  bt 1, 0xe7f48
  00e7f3c  cmpwi 4, 151
  00e7f40  bf 1, 0xe8038
  00e7f44  b 0xe7fe4
  00e7f48  cmpwi 4, 154
  00e7f4c  bf 1, 0xe8178
  00e7f50  cmpwi 4, 155
  00e7f54  bf 1, 0xe8050
  00e7f58  b 0xe8008
  00e7f5c  cmpwi 4, 159
  00e7f60  bt 1, 0xe7f78
  00e7f64  cmpwi 4, 157
  00e7f68  bf 1, 0xe8014
  00e7f6c  cmpwi 4, 158
  00e7f70  bf 1, 0xe80d4
  00e7f74  b 0xe8074
  00e7f78  cmpwi 4, 160
  00e7f7c  bf 1, 0xe802c
  00e7f80  cmpwi 4, 162
  00e7f84  bf 1, 0xe8178
  00e7f88  b 0xe805c
  00e7f8c  cmpwi 4, 169
  00e7f90  bt 1, 0xe7fbc
  00e7f94  cmpwi 4, 166
  00e7f98  bt 1, 0xe7fa8
  00e7f9c  cmpwi 4, 165
  00e7fa0  bf 1, 0xe8128
  00e7fa4  b 0xe811c
  00e7fa8  cmpwi 4, 167
  00e7fac  bf 1, 0xe8080
  00e7fb0  cmpwi 4, 168
  00e7fb4  bf 1, 0xe8134
  00e7fb8  b 0xe8140
  00e7fbc  cmpwi 4, 172
  00e7fc0  bt 1, 0xe7fd8
  00e7fc4  cmpwi 4, 170
  00e7fc8  bf 1, 0xe814c
  00e7fcc  cmpwi 4, 171
  00e7fd0  bf 1, 0xe8158
  00e7fd4  b 0xe8164
  00e7fd8  cmpwi 4, 197
  00e7fdc  bt 2, 0xe8170
  00e7fe0  b 0xe8178
  00e7fe4  li 4, 211
  00e7fe8  stbx 4, 3, 5
  00e7fec  b 0xe8178
  00e7ff0  li 4, 225
  00e7ff4  stbx 4, 3, 5
  00e7ff8  b 0xe8178
  00e7ffc  li 4, 204
  00e8000  stbx 4, 3, 5
  00e8004  b 0xe8178
  00e8008  li 4, 243
  00e800c  stbx 4, 3, 5
  00e8010  b 0xe8178
  00e8014  li 4, 242
  00e8018  stbx 4, 3, 5
  00e801c  b 0xe8178
  00e8020  li 4, 236
  00e8024  stbx 4, 3, 5
  00e8028  b 0xe8178
  00e802c  li 4, 218
  00e8030  stbx 4, 3, 5
  00e8034  b 0xe8178
  00e8038  li 4, 239
  00e803c  stbx 4, 3, 5
  00e8040  b 0xe8178
  00e8044  li 4, 196
  00e8048  stbx 4, 3, 5
  00e804c  b 0xe8178
  00e8050  li 4, 214
  00e8054  stbx 4, 3, 5
  00e8058  b 0xe8178
  00e805c  li 4, 220
  00e8060  stbx 4, 3, 5
  00e8064  b 0xe8178
  00e8068  li 4, 228
  00e806c  stbx 4, 3, 5
  00e8070  b 0xe8178
  00e8074  li 4, 246
  00e8078  stbx 4, 3, 5
  00e807c  b 0xe8178
  00e8080  li 4, 252
  00e8084  stbx 4, 3, 5
  00e8088  b 0xe8178
  00e808c  li 4, 192
  00e8090  stbx 4, 3, 5
  00e8094  b 0xe8178
  00e8098  li 4, 201
  00e809c  stbx 4, 3, 5
  00e80a0  b 0xe8178
  00e80a4  li 4, 200
  00e80a8  stbx 4, 3, 5
  00e80ac  b 0xe8178
  00e80b0  li 4, 202
  00e80b4  stbx 4, 3, 5
  00e80b8  b 0xe8178
  00e80bc  li 4, 232
  00e80c0  stbx 4, 3, 5
  00e80c4  b 0xe8178
  00e80c8  li 4, 206
  00e80cc  stbx 4, 3, 5
  00e80d0  b 0xe8178
  00e80d4  li 4, 244
  00e80d8  stbx 4, 3, 5
  00e80dc  b 0xe8178
  00e80e0  li 4, 234
  00e80e4  stbx 4, 3, 5
  00e80e8  b 0xe8178
  00e80ec  li 4, 238
  00e80f0  stbx 4, 3, 5
  00e80f4  b 0xe8178
  00e80f8  li 4, 226
  00e80fc  stbx 4, 3, 5
  00e8100  b 0xe8178
  00e8104  li 4, 224
  00e8108  stbx 4, 3, 5
  00e810c  b 0xe8178
  00e8110  li 4, 233
  00e8114  stbx 4, 3, 5
  00e8118  b 0xe8178
  00e811c  li 4, 251
  00e8120  stbx 4, 3, 5
  00e8124  b 0xe8178
  00e8128  li 4, 249
  00e812c  stbx 4, 3, 5
  00e8130  b 0xe8178
  00e8134  li 4, 209
  00e8138  stbx 4, 3, 5
  00e813c  b 0xe8178
  00e8140  li 4, 241
  00e8144  stbx 4, 3, 5
  00e8148  b 0xe8178
  00e814c  li 4, 199
  00e8150  stbx 4, 3, 5
  00e8154  b 0xe8178
  00e8158  li 4, 231
  00e815c  stbx 4, 3, 5
  00e8160  b 0xe8178
  00e8164  li 4, 223
  00e8168  stbx 4, 3, 5
  00e816c  b 0xe8178
  00e8170  li 4, 180
  00e8174  stbx 4, 3, 5
  00e8178  addic 5, 5, 1
  00e817c  extsw 5, 5
  00e8180  lbzx 4, 3, 5
  00e8184  cmpwi 4, 0
  00e8188  bf 2, 0xe7e68
  00e818c  blr

memcard_ConstructPlanetString:   # 0xe8190, 0xd8 bytes
  00e8190  stdu 1, -144(1)
  00e8194  mflr 0
  00e8198  std 0, 160(1)
  00e819c  cmpwi 7, 4, 12
  00e81a0  std 30, 128(1)
  00e81a4  cmpwi 4, 16
  00e81a8  addic 30, 4, 20172
  00e81ac  std 31, 136(1)
  00e81b0  cror 2, 2, 30
  00e81b4  ori 31, 3, 0
  00e81b8  extsw 30, 30
  00e81bc  cmpwi 1, 4, 0
  00e81c0  std 29, 120(1)
  00e81c4  std 28, 112(1)
  00e81c8  cmpwi 6, 4, 6
  00e81cc  bt 2, 0xe81e0
  00e81d0  bt 26, 0xe81e0
  00e81d4  bf 6, 0xe820c
  00e81d8  li 30, 20190
  00e81dc  b 0xe820c
  00e81e0  lis 4, 101
  00e81e4  ori 3, 30, 0
  00e81e8  addic 30, 4, 11240
  00e81ec  bl 0x7b740
  00e81f0  nop
  00e81f4  ori 5, 3, 0
  00e81f8  ori 3, 31, 0
  00e81fc  ori 4, 30, 0
  00e8200  bl 0x5cd2a8
  00e8204  nop
  00e8208  b 0xe8248
  00e820c  lis 4, 101
  00e8210  li 3, 20172
  00e8214  addic 29, 4, 11248
  00e8218  bl 0x7b740
  00e821c  nop
  00e8220  ori 28, 3, 0
  00e8224  ori 3, 30, 0
  00e8228  bl 0x7b740
  00e822c  nop
  00e8230  ori 6, 3, 0
  00e8234  ori 3, 31, 0
  00e8238  ori 4, 29, 0
  00e823c  ori 5, 28, 0
  00e8240  bl 0x5cd2a8
  00e8244  nop
  00e8248  ld 0, 160(1)
  00e824c  mtlr 0
  00e8250  ld 28, 112(1)
  00e8254  ld 29, 120(1)
  00e8258  ld 30, 128(1)
  00e825c  ld 31, 136(1)
  00e8260  addi 1, 1, 144
  00e8264  blr

memcard_ConstructSaveString:   # 0xe8268, 0x590 bytes
  00e8268  stdu 1, -624(1)
  00e826c  mflr 0
  00e8270  std 0, 640(1)
  00e8274  lis 4, 151
  00e8278  lis 5, -25768
  00e827c  lis 6, -28254
  00e8280  ori 5, 5, 14137
  00e8284  ori 6, 6, 46021
  00e8288  std 22, 544(1)
  00e828c  lwz 4, -13824(4)
  00e8290  ori 22, 3, 0
  00e8294  mulhw 5, 5, 4
  00e8298  mulhw 6, 6, 4
  00e829c  addc 5, 5, 4
  00e82a0  addc 4, 6, 4
  00e82a4  srawi 5, 5, 17
  00e82a8  srawi 4, 4, 11
  00e82ac  srwi 6, 5, 31
  00e82b0  std 31, 616(1)
  00e82b4  srwi 3, 4, 31
  00e82b8  addc 31, 5, 6
  00e82bc  addc 3, 4, 3
  00e82c0  std 27, 584(1)
  00e82c4  extsw 31, 31
  00e82c8  lis 27, 101
  00e82cc  sldi 5, 31, 6
  00e82d0  sldi 6, 31, 2
  00e82d4  std 29, 600(1)
  00e82d8  addic 27, 27, 11240
  00e82dc  subc 4, 5, 6
  00e82e0  std 30, 608(1)
  00e82e4  addic 29, 1, 176
  00e82e8  std 26, 576(1)
  00e82ec  subc 30, 3, 4
  00e82f0  ori 26, 27, 0
  00e82f4  extsw 30, 30
  00e82f8  std 28, 592(1)
  00e82fc  std 25, 568(1)
  00e8300  std 24, 560(1)
  00e8304  std 23, 552(1)
  00e8308  std 21, 536(1)
  00e830c  std 20, 528(1)
  00e8310  std 19, 520(1)
  00e8314  cmpwi 30, 10
  00e8318  bf 0, 0xe8328
  00e831c  lis 28, 101
  00e8320  addic 28, 28, 11256
  00e8324  b 0xe8330
  00e8328  lis 28, 101
  00e832c  addic 28, 28, 11264
  00e8330  ori 3, 29, 0
  00e8334  ori 4, 27, 0
  00e8338  ori 5, 28, 0
  00e833c  bl 0x5cd2a8
  00e8340  nop
  00e8344  cmpwi 31, 10
  00e8348  addic 28, 1, 184
  00e834c  bf 0, 0xe835c
  00e8350  lis 3, 101
  00e8354  addic 3, 3, 11256
  00e8358  b 0xe8364
  00e835c  lis 3, 101
  00e8360  addic 3, 3, 11264
  00e8364  ori 5, 3, 0
  00e8368  ori 3, 28, 0
  00e836c  ori 4, 27, 0
  00e8370  bl 0x5cd2a8
  00e8374  nop
  00e8378  lis 3, 346
  00e837c  lbz 3, -15535(3)
  00e8380  cmpwi 3, 0
  00e8384  bt 2, 0xe846c
  00e8388  li 3, 0
  00e838c  addic 4, 1, 160
  00e8390  ori 27, 22, 0
  00e8394  stw 3, 168(1)
  00e8398  stw 3, 164(1)
  00e839c  stw 3, 160(1)
  00e83a0  bl 0xe7c94
  00e83a4  ori 24, 3, 0
  00e83a8  addic 4, 1, 164
  00e83ac  li 3, 3
  00e83b0  bl 0xe7c94
  00e83b4  lis 4, 101
  00e83b8  ori 26, 3, 0
  00e83bc  addic 23, 4, 11272
  00e83c0  li 3, 1
  00e83c4  addic 25, 1, 256
  00e83c8  addic 4, 1, 168
  00e83cc  bl 0xe7c94
  00e83d0  lis 22, 151
  00e83d4  ori 5, 3, 0
  00e83d8  ori 4, 23, 0
  00e83dc  ori 3, 25, 0
  00e83e0  lwz 6, -13828(22)
  00e83e4  extsw 6, 6
  00e83e8  bl 0x5cd2a8
  00e83ec  nop
  00e83f0  ori 3, 27, 0
  00e83f4  ori 4, 24, 0
  00e83f8  bl 0x5cc8d8
  00e83fc  nop
  00e8400  lis 5, 151
  00e8404  lwz 4, 160(1)
  00e8408  lwz 6, -13828(22)
  00e840c  lis 3, 101
  00e8410  addc 4, 27, 4
  00e8414  cmpwi 6, 0
  00e8418  clrldi 22, 4, 32
  00e841c  lwz 5, -25440(5)
  00e8420  addic 3, 3, 11280
  00e8424  extsw 4, 5
  00e8428  bt 1, 0xe8438
  00e842c  lis 25, 101
  00e8430  addic 25, 25, 11264
  00e8434  b 0xe8438
  00e8438  ori 10, 4, 0
  00e843c  ori 4, 3, 0
  00e8440  std 25, 112(1)
  00e8444  ori 3, 22, 0
  00e8448  ori 5, 28, 0
  00e844c  ori 6, 31, 0
  00e8450  ori 7, 29, 0
  00e8454  ori 8, 30, 0
  00e8458  ori 9, 26, 0
  00e845c  bl 0x5cd2a8
  00e8460  nop
  00e8464  ori 3, 27, 0
  00e8468  b 0xe87b4
  00e846c  lis 3, 151
  00e8470  li 21, 0
  00e8474  addic 20, 1, 172
  00e8478  lis 5, 101
  00e847c  ori 4, 20, 0
  00e8480  lwz 25, -25488(3)
  00e8484  addic 27, 1, 256
  00e8488  stw 21, 172(1)
  00e848c  addic 24, 5, 11272
  00e8490  li 3, 1
  00e8494  bl 0xe7c94
  00e8498  lis 6, 151
  00e849c  ori 5, 3, 0
  00e84a0  ori 3, 27, 0
  00e84a4  ori 4, 24, 0
  00e84a8  lwz 6, -13828(6)
  00e84ac  extsw 6, 6
  00e84b0  bl 0x5cd2a8
  00e84b4  nop
  00e84b8  lis 3, 161
  00e84bc  lbz 3, 24376(3)
  00e84c0  cmpwi 3, 0
  00e84c4  bt 2, 0xe84cc
  00e84c8  addic 25, 25, 1
  00e84cc  cmpwi 25, 0
  00e84d0  cmpwi 1, 25, 18
  00e84d4  bt 0, 0xe8570
  00e84d8  cmpwi 6, 25, 16
  00e84dc  bt 5, 0xe8570
  00e84e0  addic 24, 25, 20172
  00e84e4  cmpwi 1, 25, 12
  00e84e8  extsw 24, 24
  00e84ec  bt 26, 0xe850c
  00e84f0  cmpwi 6, 25, 6
  00e84f4  bt 6, 0xe850c
  00e84f8  cmpwi 1, 25, 0
  00e84fc  bt 26, 0xe850c
  00e8500  bf 6, 0xe8530
  00e8504  li 24, 20190
  00e8508  b 0xe8530
  00e850c  ori 3, 24, 0
  00e8510  bl 0x7b740
  00e8514  nop
  00e8518  ori 5, 3, 0
  00e851c  addic 3, 1, 192
  00e8520  ori 4, 26, 0
  00e8524  bl 0x5cd2a8
  00e8528  nop
  00e852c  b 0xe856c
  00e8530  lis 3, 101
  00e8534  addic 23, 3, 11248
  00e8538  li 3, 20172
  00e853c  bl 0x7b740
  00e8540  nop
  00e8544  ori 19, 3, 0
  00e8548  ori 3, 24, 0
  00e854c  bl 0x7b740
  00e8550  nop
  00e8554  ori 6, 3, 0
  00e8558  addic 3, 1, 192
  00e855c  ori 4, 23, 0
  00e8560  ori 5, 19, 0
  00e8564  bl 0x5cd2a8
  00e8568  nop
  00e856c  b 0xe8584
  00e8570  lis 4, 101
  00e8574  addic 3, 1, 192
  00e8578  addic 4, 4, 11304
  00e857c  bl 0x5cd2a8
  00e8580  nop
  00e8584  ori 24, 26, 0
  00e8588  li 3, 3
  00e858c  addic 26, 1, 320
  00e8590  ori 4, 20, 0
  00e8594  bl 0xe7c94
  00e8598  ori 5, 3, 0
  00e859c  ori 3, 26, 0
  00e85a0  ori 4, 24, 0
  00e85a4  bl 0x5cd2a8
  00e85a8  nop
  00e85ac  lbz 3, 320(1)
  00e85b0  cmpwi 3, 97
  00e85b4  bt 0, 0xe85c8
  00e85b8  cmpwi 3, 122
  00e85bc  bt 1, 0xe85c8
  00e85c0  addic 3, 3, -32
  00e85c4  stb 3, 320(1)
  00e85c8  lis 3, 101
  00e85cc  addic 4, 25, 20153
  00e85d0  addic 25, 3, 11320
  00e85d4  extsw 3, 4
  00e85d8  addic 24, 1, 384
  00e85dc  bl 0x7b740
  00e85e0  nop
  00e85e4  ori 5, 3, 0
  00e85e8  ori 3, 24, 0
  00e85ec  addic 6, 1, 192
  00e85f0  ori 4, 25, 0
  00e85f4  bl 0x5cd2a8
  00e85f8  nop
  00e85fc  ori 3, 24, 0
  00e8600  bl 0xe7e58
  00e8604  ori 25, 3, 0
  00e8608  ori 24, 21, 0
  00e860c  lbz 3, 0(25)
  00e8610  cmpwi 3, 0
  00e8614  bt 2, 0xe862c
  00e8618  addic 24, 24, 1
  00e861c  extsw 24, 24
  00e8620  lbzx 3, 25, 24
  00e8624  cmpwi 3, 0
  00e8628  bf 2, 0xe8618
  00e862c  lis 3, 346
  00e8630  lbz 3, -15535(3)
  00e8634  cmpwi 3, 0
  00e8638  bt 2, 0xe8644
  00e863c  srawi 24, 24, 1
  00e8640  addze 24, 24
  00e8644  lis 5, 162
  00e8648  lis 3, 26214
  00e864c  lis 7, 162
  00e8650  ori 3, 3, 26215
  00e8654  addic 7, 7, 12448
  00e8658  lwz 4, 17568(5)
  00e865c  li 19, 1024
  00e8660  addic 6, 4, 1
  00e8664  mulhw 3, 3, 6
  00e8668  slwi 4, 4, 10
  00e866c  srawi 3, 3, 1
  00e8670  addc 4, 7, 4
  00e8674  srwi 8, 3, 31
  00e8678  clrldi 23, 4, 32
  00e867c  addc 3, 3, 8
  00e8680  ori 4, 21, 0
  00e8684  sldi 7, 3, 2
  00e8688  addc 3, 3, 7
  00e868c  subc 6, 6, 3
  00e8690  ori 3, 23, 0
  00e8694  stw 6, 17568(5)
  00e8698  ori 5, 19, 0
  00e869c  bl 0x5d0140
  00e86a0  nop
  00e86a4  bl 0x5038e0
  00e86a8  nop
  00e86ac  ori 4, 25, 0
  00e86b0  clrldi 5, 24, 32
  00e86b4  ori 6, 23, 0
  00e86b8  ori 7, 19, 0
  00e86bc  ori 8, 20, 0
  00e86c0  bl 0x503ccc
  00e86c4  nop
  00e86c8  lis 4, 144
  00e86cc  ori 25, 3, 0
  00e86d0  lwz 3, 11984(4)
  00e86d4  bl 0x504d90
  00e86d8  nop
  00e86dc  lis 4, 151
  00e86e0  ori 24, 3, 0
  00e86e4  lwz 23, -25484(4)
  00e86e8  cmpwi 23, 0
  00e86ec  bt 2, 0xe86f4
  00e86f0  addic 23, 23, -1
  00e86f4  lis 5, 101
  00e86f8  ori 3, 21, 0
  00e86fc  addic 21, 5, 11328
  00e8700  ori 4, 20, 0
  00e8704  bl 0xe7c94
  00e8708  lis 5, 151
  00e870c  lis 6, 151
  00e8710  ori 4, 3, 0
  00e8714  lwz 3, -25440(5)
  00e8718  lwz 5, -13828(6)
  00e871c  extsw 3, 3
  00e8720  cmpwi 5, 0
  00e8724  bt 1, 0xe8734
  00e8728  lis 27, 101
  00e872c  addic 27, 27, 11264
  00e8730  b 0xe8734
  00e8734  cmpwi 24, 0
  00e8738  bt 2, 0xe8750
  00e873c  lis 5, 101
  00e8740  lis 23, 101
  00e8744  addic 5, 5, 11264
  00e8748  addic 23, 23, 11264
  00e874c  b 0xe876c
  00e8750  lis 5, 101
  00e8754  sldi 6, 23, 2
  00e8758  addic 7, 5, 11140
  00e875c  extsw 6, 6
  00e8760  lis 5, 101
  00e8764  addic 5, 5, 11360
  00e8768  lwzx 23, 7, 6
  00e876c  ori 8, 3, 0
  00e8770  std 26, 112(1)
  00e8774  ori 11, 5, 0
  00e8778  ori 6, 4, 0
  00e877c  ori 3, 22, 0
  00e8780  std 8, 120(1)
  00e8784  std 27, 128(1)
  00e8788  ori 9, 29, 0
  00e878c  std 11, 136(1)
  00e8790  ori 4, 21, 0
  00e8794  ori 10, 30, 0
  00e8798  std 23, 144(1)
  00e879c  ori 5, 25, 0
  00e87a0  ori 7, 28, 0
  00e87a4  ori 8, 31, 0
  00e87a8  bl 0x5cd2a8
  00e87ac  nop
  00e87b0  ori 3, 22, 0
  00e87b4  ld 0, 640(1)
  00e87b8  mtlr 0
  00e87bc  ld 19, 520(1)
  00e87c0  ld 20, 528(1)
  00e87c4  ld 21, 536(1)
  00e87c8  ld 22, 544(1)
  00e87cc  ld 23, 552(1)
  00e87d0  ld 24, 560(1)
  00e87d4  ld 25, 568(1)
  00e87d8  ld 26, 576(1)
  00e87dc  ld 27, 584(1)
  00e87e0  ld 28, 592(1)
  00e87e4  ld 29, 600(1)
  00e87e8  ld 30, 608(1)
  00e87ec  ld 31, 616(1)
  00e87f0  addi 1, 1, 624
  00e87f4  blr

memcard_SetSaveDialogStrings:   # 0xe87f8, 0x74 bytes
  00e87f8  stdu 1, -128(1)
  00e87fc  mflr 0
  00e8800  std 0, 144(1)
  00e8804  std 31, 120(1)
  00e8808  std 30, 112(1)
  00e880c  bl 0x5038e0
  00e8810  nop
  00e8814  li 4, 6000
  00e8818  bl 0x503bd0
  00e881c  nop
  00e8820  ori 31, 3, 0
  00e8824  bl 0x5038e0
  00e8828  nop
  00e882c  li 4, 6003
  00e8830  bl 0x503bd0
  00e8834  nop
  00e8838  ori 30, 3, 0
  00e883c  bl 0x4e7404
  00e8840  nop
  00e8844  ori 4, 30, 0
  00e8848  ori 5, 31, 0
  00e884c  bl 0x4e8148
  00e8850  nop
  00e8854  ld 0, 144(1)
  00e8858  mtlr 0
  00e885c  ld 30, 112(1)
  00e8860  ld 31, 120(1)
  00e8864  addi 1, 1, 128
  00e8868  blr

memcard_IsSaveSystemIdle:   # 0xe886c, 0x1c bytes
  00e886c  lis 4, 273
  00e8870  li 3, 0
  00e8874  lwz 4, 5644(4)
  00e8878  cmpwi 4, 0
  00e887c  bf 2, 0xe8884
  00e8880  li 3, 1
  00e8884  blr

memcard_PerformOperation:   # 0xe8888, 0x21c bytes
  00e8888  stdu 1, -176(1)
  00e888c  mflr 0
  00e8890  std 0, 192(1)
  00e8894  std 31, 168(1)
  00e8898  lis 4, 273
  00e889c  ori 31, 3, 0
  00e88a0  lwz 3, 5644(4)
  00e88a4  std 30, 160(1)
  00e88a8  std 29, 152(1)
  00e88ac  std 28, 144(1)
  00e88b0  std 27, 136(1)
  00e88b4  std 26, 128(1)
  00e88b8  std 25, 120(1)
  00e88bc  std 24, 112(1)
  00e88c0  cmpwi 3, 0
  00e88c4  bf 2, 0xe8a74
  00e88c8  bl 0x4e7404
  00e88cc  nop
  00e88d0  ori 27, 3, 0
  00e88d4  lis 29, 162
  00e88d8  li 4, 0
  00e88dc  addic 29, 29, 17576
  00e88e0  li 5, 256
  00e88e4  ori 3, 29, 0
  00e88e8  lwz 28, 1132(27)
  00e88ec  bl 0x5d0140
  00e88f0  nop
  00e88f4  bl 0x5038e0
  00e88f8  nop
  00e88fc  li 4, 6000
  00e8900  bl 0x503bd0
  00e8904  nop
  00e8908  ori 30, 3, 0
  00e890c  bl 0x5038e0
  00e8910  nop
  00e8914  li 4, 6003
  00e8918  bl 0x503bd0
  00e891c  nop
  00e8920  ori 26, 3, 0
  00e8924  bl 0x4e7404
  00e8928  nop
  00e892c  ori 4, 26, 0
  00e8930  ori 5, 30, 0
  00e8934  bl 0x4e8148
  00e8938  nop
  00e893c  lis 3, 161
  00e8940  lbz 3, 24376(3)
  00e8944  cmpwi 3, 0
  00e8948  bt 2, 0xe8954
  00e894c  li 3, 1
  00e8950  stw 3, 1120(27)
  00e8954  lis 3, 161
  00e8958  lis 4, 16
  00e895c  addic 30, 3, 2264
  00e8960  ori 3, 31, 0
  00e8964  cmpwi 3, 4
  00e8968  cmpwi 1, 3, 0
  00e896c  lwz 30, 80(30)
  00e8970  cmpwi 6, 3, 1
  00e8974  addc 26, 30, 4
  00e8978  cmpwi 7, 3, 2
  00e897c  clrldi 26, 26, 32
  00e8980  bt 2, 0xe8a34
  00e8984  cmpwi 3, 3
  00e8988  bt 2, 0xe8998
  00e898c  bt 30, 0xe8a38
  00e8990  bt 26, 0xe8a34
  00e8994  bf 6, 0xe8a38
  00e8998  lis 25, 151
  00e899c  lis 3, 161
  00e89a0  lwz 24, -25488(25)
  00e89a4  lwz 3, 1792(3)
  00e89a8  cmpwi 3, 0
  00e89ac  bt 2, 0xe89bc
  00e89b0  lis 3, 161
  00e89b4  lwz 3, 1796(3)
  00e89b8  stw 3, -25488(25)
  00e89bc  lwz 3, -25488(25)
  00e89c0  cmpwi 3, 0
  00e89c4  bf 0, 0xe89cc
  00e89c8  li 3, 0
  00e89cc  ori 4, 3, 0
  00e89d0  ori 3, 29, 0
  00e89d4  stw 4, 28(27)
  00e89d8  bl 0xe8268
  00e89dc  ori 4, 3, 0
  00e89e0  ori 3, 27, 0
  00e89e4  bl 0x4e80d8
  00e89e8  nop
  00e89ec  lis 3, 144
  00e89f0  lwz 4, -25488(25)
  00e89f4  lis 5, 151
  00e89f8  slwi 4, 4, 15
  00e89fc  addic 5, 5, -13772
  00e8a00  stw 30, -21580(3)
  00e8a04  addc 3, 5, 4
  00e8a08  clrldi 3, 3, 32
  00e8a0c  bl 0xe4c0c
  00e8a10  nop
  00e8a14  ori 3, 26, 0
  00e8a18  li 4, 15
  00e8a1c  ori 5, 28, 0
  00e8a20  bl 0x5d0140
  00e8a24  nop
  00e8a28  ori 3, 26, 0
  00e8a2c  bl 0xe7984
  00e8a30  stw 24, -25488(25)
  00e8a34  b 0xe8a3c
  00e8a38  b 0xe8a74
  00e8a3c  lis 7, 112
  00e8a40  lis 8, 112
  00e8a44  lis 9, 112
  00e8a48  lis 10, 112
  00e8a4c  ori 3, 27, 0
  00e8a50  addic 7, 7, 24456
  00e8a54  ori 4, 31, 0
  00e8a58  ori 5, 26, 0
  00e8a5c  addic 8, 8, 24464
  00e8a60  ori 6, 28, 0
  00e8a64  addic 9, 9, 24448
  00e8a68  addic 10, 10, 24472
  00e8a6c  bl 0x4e7a34
  00e8a70  nop
  00e8a74  ld 0, 192(1)
  00e8a78  mtlr 0
  00e8a7c  ld 24, 112(1)
  00e8a80  ld 25, 120(1)
  00e8a84  ld 26, 128(1)
  00e8a88  ld 27, 136(1)
  00e8a8c  ld 28, 144(1)
  00e8a90  ld 29, 152(1)
  00e8a94  ld 30, 160(1)
  00e8a98  ld 31, 168(1)
  00e8a9c  addi 1, 1, 176
  00e8aa0  blr

memcard_Save:   # 0xe8aa4, 0x1c4 bytes
  00e8aa4  stdu 1, -144(1)
  00e8aa8  mflr 0
  00e8aac  std 0, 160(1)
  00e8ab0  std 29, 120(1)
  00e8ab4  std 30, 128(1)
  00e8ab8  lis 30, 151
  00e8abc  std 31, 136(1)
  00e8ac0  ori 29, 3, 0
  00e8ac4  ori 31, 4, 0
  00e8ac8  lwz 3, -25488(30)
  00e8acc  std 28, 112(1)
  00e8ad0  cmpwi 3, 20
  00e8ad4  bt 0, 0xe8ae0
  00e8ad8  li 3, 0
  00e8adc  b 0xe8c48
  00e8ae0  bl 0xe50bc
  00e8ae4  nop
  00e8ae8  lwz 3, -25488(30)
  00e8aec  lis 4, 151
  00e8af0  addic 4, 4, -13772
  00e8af4  slwi 3, 3, 15
  00e8af8  addc 3, 4, 3
  00e8afc  clrldi 3, 3, 32
  00e8b00  bl 0xe4c0c
  00e8b04  nop
  00e8b08  lis 3, 114
  00e8b0c  addic 3, 3, -1500
  00e8b10  lwz 4, 252(3)
  00e8b14  or 4, 4, 29
  00e8b18  cmpwi 4, 0
  00e8b1c  stw 4, 252(3)
  00e8b20  bt 2, 0xe8c34
  00e8b24  cmpwi 29, 0
  00e8b28  bf 2, 0xe8b3c
  00e8b2c  lis 4, 161
  00e8b30  lwz 5, -736(4)
  00e8b34  ori 5, 5, 512
  00e8b38  stw 5, -736(4)
  00e8b3c  lis 4, 161
  00e8b40  cmpwi 31, 0
  00e8b44  li 5, 0
  00e8b48  lwz 6, -736(4)
  00e8b4c  lwz 7, -25488(30)
  00e8b50  ori 6, 6, 512
  00e8b54  stw 7, 208(3)
  00e8b58  stw 6, -736(4)
  00e8b5c  bt 0, 0xe8b88
  00e8b60  lis 4, 151
  00e8b64  stw 31, -25488(30)
  00e8b68  ori 6, 31, 0
  00e8b6c  addic 4, 4, -13792
  00e8b70  lbzx 5, 4, 31
  00e8b74  lbzx 7, 4, 6
  00e8b78  cmpwi 7, 0
  00e8b7c  bf 2, 0xe8b88
  00e8b80  li 7, 1
  00e8b84  stbx 7, 4, 6
  00e8b88  lwz 9, 20(3)
  00e8b8c  lis 4, 151
  00e8b90  lis 8, 151
  00e8b94  sldi 6, 9, 5
  00e8b98  sldi 11, 9, 2
  00e8b9c  sldi 10, 9, 5
  00e8ba0  sldi 12, 9, 2
  00e8ba4  lwz 4, -25440(4)
  00e8ba8  subc 11, 6, 11
  00e8bac  subc 6, 10, 12
  00e8bb0  extsw 11, 11
  00e8bb4  extsw 6, 6
  00e8bb8  lis 7, 151
  00e8bbc  addc 29, 3, 6
  00e8bc0  lwz 6, -25488(30)
  00e8bc4  sldi 10, 9, 5
  00e8bc8  sldi 12, 9, 2
  00e8bcc  sldi 28, 9, 5
  00e8bd0  sldi 9, 9, 2
  00e8bd4  stw 4, 36(29)
  00e8bd8  addc 4, 3, 11
  00e8bdc  lwz 8, -13824(8)
  00e8be0  subc 10, 10, 12
  00e8be4  lwz 7, -13828(7)
  00e8be8  subc 9, 28, 9
  00e8bec  extsw 10, 10
  00e8bf0  extsw 9, 9
  00e8bf4  addc 10, 3, 10
  00e8bf8  stw 6, 32(4)
  00e8bfc  cmpwi 31, 0
  00e8c00  addc 4, 3, 9
  00e8c04  stw 7, 40(10)
  00e8c08  stw 8, 44(4)
  00e8c0c  bt 0, 0xe8c28
  00e8c10  lis 4, 151
  00e8c14  lwz 3, 208(3)
  00e8c18  extsw 6, 6
  00e8c1c  addic 4, 4, -13792
  00e8c20  stw 3, -25488(30)
  00e8c24  stbx 5, 4, 6
  00e8c28  li 3, 3
  00e8c2c  bl 0xe8888
  00e8c30  b 0xe8c44
  00e8c34  cmpwi 29, 0
  00e8c38  bt 2, 0xe8c44
  00e8c3c  li 3, 0
  00e8c40  bl 0xe8888
  00e8c44  li 3, 1
  00e8c48  ld 0, 160(1)
  00e8c4c  mtlr 0
  00e8c50  ld 28, 112(1)
  00e8c54  ld 29, 120(1)
  00e8c58  ld 30, 128(1)
  00e8c5c  ld 31, 136(1)
  00e8c60  addi 1, 1, 144
  00e8c64  blr

memcard_print_TimeForPain:   # 0xe8c68, 0x38 bytes
  00e8c68  stdu 1, -112(1)
  00e8c6c  mflr 0
  00e8c70  std 0, 128(1)
  00e8c74  lis 3, 101
  00e8c78  addic 3, 3, 11364
  00e8c7c  bl 0x4ffc9c
  00e8c80  nop
  00e8c84  lis 3, 162
  00e8c88  li 4, 0
  00e8c8c  stw 4, 12444(3)
  00e8c90  ld 0, 128(1)
  00e8c94  mtlr 0
  00e8c98  addi 1, 1, 112
  00e8c9c  blr

memcard_RestoreSaveGame:   # 0xe8ca0, 0x280 bytes
  00e8ca0  stdu 1, -160(1)
  00e8ca4  mflr 0
  00e8ca8  std 0, 176(1)
  00e8cac  std 28, 128(1)
  00e8cb0  std 30, 144(1)
  00e8cb4  lis 28, 162
  00e8cb8  std 29, 136(1)
  00e8cbc  std 26, 112(1)
  00e8cc0  li 30, 0
  00e8cc4  addic 26, 28, 12432
  00e8cc8  std 31, 152(1)
  00e8ccc  ori 29, 4, 0
  00e8cd0  ori 31, 3, 0
  00e8cd4  li 5, 8
  00e8cd8  ori 3, 26, 0
  00e8cdc  std 27, 120(1)
  00e8ce0  ori 4, 30, 0
  00e8ce4  bl 0x5d0140
  00e8ce8  nop
  00e8cec  lis 27, 162
  00e8cf0  li 5, 2
  00e8cf4  addic 27, 27, 12429
  00e8cf8  ori 4, 30, 0
  00e8cfc  ori 3, 27, 0
  00e8d00  bl 0x5d0140
  00e8d04  nop
  00e8d08  lis 3, 101
  00e8d0c  addic 3, 3, 11400
  00e8d10  bl 0x5cd098
  00e8d14  nop
  00e8d18  cmpwi 31, 0
  00e8d1c  bf 2, 0xe8ec0
  00e8d20  ori 3, 29, 0
  00e8d24  bl 0xe6fe4
  00e8d28  lis 3, 151
  00e8d2c  lis 4, 15
  00e8d30  lwz 3, -13820(3)
  00e8d34  stw 3, 12432(28)
  00e8d38  ori 3, 4, 16960
  00e8d3c  lwz 4, 12432(28)
  00e8d40  cmpw 4, 3
  00e8d44  bt 0, 0xe8d54
  00e8d48  lis 3, 162
  00e8d4c  li 4, 1
  00e8d50  stb 4, 12429(3)
  00e8d54  bl 0x11b124
  00e8d58  nop
  00e8d5c  cmpwi 3, 10
  00e8d60  stw 3, 4(26)
  00e8d64  bf 2, 0xe8d70
  00e8d68  li 3, 1
  00e8d6c  stb 3, 1(27)
  00e8d70  lis 3, 144
  00e8d74  lis 4, 1
  00e8d78  ori 4, 4, 34212
  00e8d7c  lwz 3, -23196(3)
  00e8d80  lbzx 3, 3, 4
  00e8d84  cmpwi 3, 0
  00e8d88  bf 2, 0xe8d98
  00e8d8c  lis 3, 165
  00e8d90  stw 30, 11876(3)
  00e8d94  b 0xe8db4
  00e8d98  lis 3, 144
  00e8d9c  lis 4, 165
  00e8da0  lwz 3, -23196(3)
  00e8da4  lwz 4, 11876(4)
  00e8da8  extsw 4, 4
  00e8dac  bl 0x4d6f50
  00e8db0  nop
  00e8db4  lis 3, 114
  00e8db8  lis 4, 101
  00e8dbc  addic 6, 3, -1500
  00e8dc0  li 5, 1
  00e8dc4  addic 3, 4, 11432
  00e8dc8  stw 5, 252(6)
  00e8dcc  bl 0x4ffc9c
  00e8dd0  nop
  00e8dd4  bl 0x5038e0
  00e8dd8  nop
  00e8ddc  li 4, 6000
  00e8de0  bl 0x503bd0
  00e8de4  nop
  00e8de8  ori 29, 3, 0
  00e8dec  bl 0x5038e0
  00e8df0  nop
  00e8df4  li 4, 6003
  00e8df8  bl 0x503bd0
  00e8dfc  nop
  00e8e00  ori 28, 3, 0
  00e8e04  bl 0x4e7404
  00e8e08  nop
  00e8e0c  ori 4, 28, 0
  00e8e10  ori 5, 29, 0
  00e8e14  bl 0x4e8148
  00e8e18  nop
  00e8e1c  bl 0x4e7404
  00e8e20  nop
  00e8e24  lwz 3, 1120(3)
  00e8e28  clrlwi 3, 3, 31
  00e8e2c  cmpwi 3, 0
  00e8e30  bf 2, 0xe8ef4
  00e8e34  lis 3, 144
  00e8e38  lwz 3, -21540(3)
  00e8e3c  stb 30, 396(3)
  00e8e40  bl 0x5038e0
  00e8e44  nop
  00e8e48  li 4, 5000
  00e8e4c  bl 0x503bd0
  00e8e50  nop
  00e8e54  lis 5, 112
  00e8e58  li 28, 1
  00e8e5c  ori 4, 3, 0
  00e8e60  ori 6, 30, 0
  00e8e64  ori 7, 30, 0
  00e8e68  addic 5, 5, 24440
  00e8e6c  ori 3, 28, 0
  00e8e70  bl 0x64f604
  00e8e74  ld 2, 40(1)
  00e8e78  lis 29, 162
  00e8e7c  stw 28, 12444(29)
  00e8e80  lwz 3, 12444(29)
  00e8e84  cmpwi 3, 1
  00e8e88  bf 2, 0xe8ef4
  00e8e8c  bl 0x11e2d4
  00e8e90  nop
  00e8e94  ori 3, 30, 0
  00e8e98  bl 0x684a4
  00e8e9c  nop
  00e8ea0  bl 0x64f504
  00e8ea4  ld 2, 40(1)
  00e8ea8  bl 0x68560
  00e8eac  nop
  00e8eb0  lwz 3, 12444(29)
  00e8eb4  cmpwi 3, 1
  00e8eb8  bt 2, 0xe8e8c
  00e8ebc  b 0xe8ef4
  00e8ec0  cmpwi 31, 1
  00e8ec4  bt 2, 0xe8ef4
  00e8ec8  lis 3, 114
  00e8ecc  lis 4, 161
  00e8ed0  addic 3, 3, -1500
  00e8ed4  lis 5, 161
  00e8ed8  li 6, -1
  00e8edc  li 7, 1
  00e8ee0  lis 8, 161
  00e8ee4  stw 30, 252(3)
  00e8ee8  stw 6, 1796(4)
  00e8eec  stw 7, 1792(5)
  00e8ef0  stw 7, 1820(8)
  00e8ef4  ori 3, 31, 0
  00e8ef8  ld 0, 176(1)
  00e8efc  mtlr 0
  00e8f00  ld 26, 112(1)
  00e8f04  ld 27, 120(1)
  00e8f08  ld 28, 128(1)
  00e8f0c  ld 29, 136(1)
  00e8f10  ld 30, 144(1)
  00e8f14  ld 31, 152(1)
  00e8f18  addi 1, 1, 160
  00e8f1c  blr

memcard_printGameSaved:   # 0xe8f20, 0x4c bytes
  00e8f20  stdu 1, -128(1)
  00e8f24  mflr 0
  00e8f28  std 0, 144(1)
  00e8f2c  std 31, 120(1)
  00e8f30  lis 4, 101
  00e8f34  ori 31, 3, 0
  00e8f38  addic 3, 4, 11472
  00e8f3c  bl 0x5cd098
  00e8f40  nop
  00e8f44  lis 3, 114
  00e8f48  li 4, 1
  00e8f4c  addic 5, 3, -1500
  00e8f50  ori 3, 31, 0
  00e8f54  stw 4, 252(5)
  00e8f58  ld 0, 144(1)
  00e8f5c  mtlr 0
  00e8f60  ld 31, 120(1)
  00e8f64  addi 1, 1, 128
  00e8f68  blr

memcard_print_SavingGameCB_PS3:   # 0xe8f6c, 0x30 bytes
  00e8f6c  stdu 1, -112(1)
  00e8f70  mflr 0
  00e8f74  std 0, 128(1)
  00e8f78  lis 3, 101
  00e8f7c  addic 3, 3, 11496
  00e8f80  bl 0x4ffc9c
  00e8f84  nop
  00e8f88  li 3, 0
  00e8f8c  ld 0, 128(1)
  00e8f90  mtlr 0
  00e8f94  addi 1, 1, 112
  00e8f98  blr

memcard_print_LoadingCB_PS3:   # 0xe8f9c, 0x3c bytes
  00e8f9c  stdu 1, -128(1)
  00e8fa0  mflr 0
  00e8fa4  std 0, 144(1)
  00e8fa8  std 31, 120(1)
  00e8fac  lis 4, 101
  00e8fb0  ori 31, 3, 0
  00e8fb4  addic 3, 4, 11552
  00e8fb8  bl 0x4ffc9c
  00e8fbc  nop
  00e8fc0  ori 3, 31, 0
  00e8fc4  ld 0, 144(1)
  00e8fc8  mtlr 0
  00e8fcc  ld 31, 120(1)
  00e8fd0  addi 1, 1, 128
  00e8fd4  blr

memcard_PollSaveResult:   # 0xe8fd8, 0x13c bytes
  00e8fd8  stdu 1, -128(1)
  00e8fdc  mflr 0
  00e8fe0  std 0, 144(1)
  00e8fe4  lis 3, 273
  00e8fe8  lwz 3, 5644(3)
  00e8fec  std 31, 120(1)
  00e8ff0  std 30, 112(1)
  00e8ff4  cmpwi 3, 0
  00e8ff8  bf 2, 0xe90f8
  00e8ffc  lis 31, 162
  00e9000  lbz 3, 2188(31)
  00e9004  cmpwi 3, 0
  00e9008  bf 2, 0xe90f8
  00e900c  lis 3, 144
  00e9010  li 30, 0
  00e9014  lwz 3, -22972(3)
  00e9018  cmpwi 3, 12
  00e901c  cmpwi 1, 3, 11
  00e9020  cmpwi 6, 3, 6
  00e9024  cmpwi 7, 3, 5
  00e9028  bt 2, 0xe90c4
  00e902c  bt 6, 0xe909c
  00e9030  bt 26, 0xe9090
  00e9034  bt 30, 0xe908c
  00e9038  cmpwi 3, 3
  00e903c  bt 2, 0xe9050
  00e9040  cmpwi 3, 1
  00e9044  bt 2, 0xe9070
  00e9048  cmpwi 3, 0
  00e904c  bf 2, 0xe90f0
  00e9050  bl 0x4e7404
  00e9054  nop
  00e9058  bl 0x4e7d94
  00e905c  nop
  00e9060  li 4, 1
  00e9064  ori 30, 3, 0
  00e9068  stb 4, 2188(31)
  00e906c  b 0xe90f0
  00e9070  bl 0x4e7404
  00e9074  nop
  00e9078  bl 0x4e7e6c
  00e907c  nop
  00e9080  li 4, 1
  00e9084  ori 30, 3, 0
  00e9088  stb 4, 2188(31)
  00e908c  b 0xe90f0
  00e9090  li 30, 1
  00e9094  stb 30, 2188(31)
  00e9098  b 0xe90f0
  00e909c  li 3, 1
  00e90a0  stb 3, 2188(31)
  00e90a4  bl 0x4e7404
  00e90a8  nop
  00e90ac  lwz 3, 1128(3)
  00e90b0  cmpwi 3, 11
  00e90b4  bf 2, 0xe90c4
  00e90b8  lis 3, 162
  00e90bc  li 4, 1
  00e90c0  stb 4, 12441(3)
  00e90c4  li 3, 1
  00e90c8  li 30, 2
  00e90cc  stb 3, 2188(31)
  00e90d0  bl 0x4e7404
  00e90d4  nop
  00e90d8  lwz 3, 1128(3)
  00e90dc  cmpwi 3, 12
  00e90e0  bf 2, 0xe90f0
  00e90e4  lis 3, 162
  00e90e8  li 4, 1
  00e90ec  stb 4, 12441(3)
  00e90f0  ori 3, 30, 0
  00e90f4  b 0xe90fc
  00e90f8  li 3, -1
  00e90fc  ld 0, 144(1)
  00e9100  mtlr 0
  00e9104  ld 30, 112(1)
  00e9108  ld 31, 120(1)
  00e910c  addi 1, 1, 128
  00e9110  blr
