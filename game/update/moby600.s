# game/update/moby600.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M600_003d5a48:   # 0x3d5a48, 0x14 bytes
  03d5a48  lis 3, 132
  03d5a4c  lis 4, 1
  03d5a50  addic 3, 3, 26620
  03d5a54  stw 4, 72(3)
  03d5a58  blr

M600_003d5a60:   # 0x3d5a60, 0xf0 bytes
  03d5a60  stdu 1, -176(1)
  03d5a64  mflr 0
  03d5a68  std 0, 192(1)
  03d5a6c  std 25, 120(1)
  03d5a70  std 30, 160(1)
  03d5a74  std 28, 144(1)
  03d5a78  lis 25, 269
  03d5a7c  lis 30, 133
  03d5a80  std 31, 168(1)
  03d5a84  lis 28, 133
  03d5a88  std 29, 152(1)
  03d5a8c  lis 31, 133
  03d5a90  std 26, 128(1)
  03d5a94  std 24, 112(1)
  03d5a98  lis 29, 133
  03d5a9c  lis 26, 269
  03d5aa0  std 27, 136(1)
  03d5aa4  li 24, 0
  03d5aa8  sldi 27, 3, 3
  03d5aac  addic 25, 25, -24528
  03d5ab0  addic 28, 28, 13652
  03d5ab4  addic 30, 30, 13600
  03d5ab8  addic 29, 29, -9368
  03d5abc  addic 31, 31, 13756
  03d5ac0  addic 26, 26, -24584
  03d5ac4  lwz 4, 0(28)
  03d5ac8  addc 6, 27, 26
  03d5acc  lwz 5, 0(29)
  03d5ad0  ori 3, 25, 0
  03d5ad4  clrldi 6, 6, 32
  03d5ad8  extsw 5, 5
  03d5adc  bl 0xe915c
  03d5ae0  nop
  03d5ae4  lwz 3, 0(29)
  03d5ae8  lwz 4, 0(30)
  03d5aec  ori 6, 25, 0
  03d5af0  li 7, 9
  03d5af4  lwz 5, 0(31)
  03d5af8  extsw 3, 3
  03d5afc  bl 0x74604
  03d5b00  nop
  03d5b04  addic 24, 24, 1
  03d5b08  addic 28, 28, 4
  03d5b0c  cmpwi 24, 13
  03d5b10  addic 29, 29, 4
  03d5b14  addic 30, 30, 4
  03d5b18  addic 31, 31, 4
  03d5b1c  bt 0, 0x3d5ac4
  03d5b20  ld 0, 192(1)
  03d5b24  mtlr 0
  03d5b28  ld 24, 112(1)
  03d5b2c  ld 25, 120(1)
  03d5b30  ld 26, 128(1)
  03d5b34  ld 27, 136(1)
  03d5b38  ld 28, 144(1)
  03d5b3c  ld 29, 152(1)
  03d5b40  ld 30, 160(1)
  03d5b44  ld 31, 168(1)
  03d5b48  addi 1, 1, 176
  03d5b4c  blr

M600_003d5b50:   # 0x3d5b50, 0xf0 bytes
  03d5b50  stdu 1, -176(1)
  03d5b54  mflr 0
  03d5b58  std 0, 192(1)
  03d5b5c  std 25, 120(1)
  03d5b60  std 30, 160(1)
  03d5b64  std 28, 144(1)
  03d5b68  lis 25, 269
  03d5b6c  lis 30, 133
  03d5b70  std 31, 168(1)
  03d5b74  lis 28, 133
  03d5b78  std 29, 152(1)
  03d5b7c  lis 31, 133
  03d5b80  std 26, 128(1)
  03d5b84  std 24, 112(1)
  03d5b88  lis 29, 133
  03d5b8c  lis 26, 269
  03d5b90  std 27, 136(1)
  03d5b94  li 24, 0
  03d5b98  sldi 27, 3, 3
  03d5b9c  addic 25, 25, -24528
  03d5ba0  addic 28, 28, -9500
  03d5ba4  addic 30, 30, -9544
  03d5ba8  addic 29, 29, -27976
  03d5bac  addic 31, 31, -9412
  03d5bb0  addic 26, 26, -24560
  03d5bb4  lwz 4, 0(28)
  03d5bb8  addc 6, 27, 26
  03d5bbc  lwz 5, 0(29)
  03d5bc0  ori 3, 25, 0
  03d5bc4  clrldi 6, 6, 32
  03d5bc8  extsw 5, 5
  03d5bcc  bl 0xe915c
  03d5bd0  nop
  03d5bd4  lwz 3, 0(29)
  03d5bd8  lwz 4, 0(30)
  03d5bdc  ori 6, 25, 0
  03d5be0  li 7, 9
  03d5be4  lwz 5, 0(31)
  03d5be8  extsw 3, 3
  03d5bec  bl 0x74604
  03d5bf0  nop
  03d5bf4  addic 24, 24, 1
  03d5bf8  addic 28, 28, 4
  03d5bfc  cmpwi 24, 11
  03d5c00  addic 29, 29, 4
  03d5c04  addic 30, 30, 4
  03d5c08  addic 31, 31, 4
  03d5c0c  bt 0, 0x3d5bb4
  03d5c10  ld 0, 192(1)
  03d5c14  mtlr 0
  03d5c18  ld 24, 112(1)
  03d5c1c  ld 25, 120(1)
  03d5c20  ld 26, 128(1)
  03d5c24  ld 27, 136(1)
  03d5c28  ld 28, 144(1)
  03d5c2c  ld 29, 152(1)
  03d5c30  ld 30, 160(1)
  03d5c34  ld 31, 168(1)
  03d5c38  addi 1, 1, 176
  03d5c3c  blr

M600_003d5c40:   # 0x3d5c40, 0xf0 bytes
  03d5c40  stdu 1, -176(1)
  03d5c44  mflr 0
  03d5c48  std 0, 192(1)
  03d5c4c  std 25, 120(1)
  03d5c50  std 30, 160(1)
  03d5c54  std 28, 144(1)
  03d5c58  lis 25, 269
  03d5c5c  lis 30, 133
  03d5c60  std 31, 168(1)
  03d5c64  lis 28, 133
  03d5c68  std 29, 152(1)
  03d5c6c  lis 31, 133
  03d5c70  std 26, 128(1)
  03d5c74  std 24, 112(1)
  03d5c78  lis 29, 132
  03d5c7c  lis 26, 269
  03d5c80  std 27, 136(1)
  03d5c84  li 24, 0
  03d5c88  sldi 27, 3, 3
  03d5c8c  addic 25, 25, -24528
  03d5c90  addic 28, 28, -28072
  03d5c94  addic 30, 30, -28104
  03d5c98  addic 29, 29, 26824
  03d5c9c  addic 31, 31, -28008
  03d5ca0  addic 26, 26, -24544
  03d5ca4  lwz 4, 0(28)
  03d5ca8  addc 6, 27, 26
  03d5cac  lwz 5, 0(29)
  03d5cb0  ori 3, 25, 0
  03d5cb4  clrldi 6, 6, 32
  03d5cb8  extsw 5, 5
  03d5cbc  bl 0xe915c
  03d5cc0  nop
  03d5cc4  lwz 3, 0(29)
  03d5cc8  lwz 4, 0(30)
  03d5ccc  ori 6, 25, 0
  03d5cd0  li 7, 9
  03d5cd4  lwz 5, 0(31)
  03d5cd8  extsw 3, 3
  03d5cdc  bl 0x74604
  03d5ce0  nop
  03d5ce4  addic 24, 24, 1
  03d5ce8  addic 28, 28, 4
  03d5cec  cmpwi 24, 8
  03d5cf0  addic 29, 29, 4
  03d5cf4  addic 30, 30, 4
  03d5cf8  addic 31, 31, 4
  03d5cfc  bt 0, 0x3d5ca4
  03d5d00  ld 0, 192(1)
  03d5d04  mtlr 0
  03d5d08  ld 24, 112(1)
  03d5d0c  ld 25, 120(1)
  03d5d10  ld 26, 128(1)
  03d5d14  ld 27, 136(1)
  03d5d18  ld 28, 144(1)
  03d5d1c  ld 29, 152(1)
  03d5d20  ld 30, 160(1)
  03d5d24  ld 31, 168(1)
  03d5d28  addi 1, 1, 176
  03d5d2c  blr

M600_003d5d30:   # 0x3d5d30, 0x608 bytes
  03d5d30  stdu 1, -224(1)
  03d5d34  mflr 0
  03d5d38  std 0, 240(1)
  03d5d3c  li 3, 0
  03d5d40  li 4, 1
  03d5d44  li 5, 0
  03d5d48  li 6, 1
  03d5d4c  std 31, 216(1)
  03d5d50  std 30, 208(1)
  03d5d54  std 29, 200(1)
  03d5d58  std 28, 192(1)
  03d5d5c  std 27, 184(1)
  03d5d60  std 26, 176(1)
  03d5d64  std 25, 168(1)
  03d5d68  std 24, 160(1)
  03d5d6c  std 23, 152(1)
  03d5d70  std 22, 144(1)
  03d5d74  std 21, 136(1)
  03d5d78  std 20, 128(1)
  03d5d7c  std 19, 120(1)
  03d5d80  std 18, 112(1)
  03d5d84  li 7, 128
  03d5d88  bl 0x502ea8
  03d5d8c  nop
  03d5d90  ori 4, 3, 0
  03d5d94  li 3, 3
  03d5d98  bl 0x174f80
  03d5d9c  nop
  03d5da0  li 3, 0
  03d5da4  li 4, 0
  03d5da8  li 8, 0
  03d5dac  li 5, 0
  03d5db0  li 6, 0
  03d5db4  li 7, 0
  03d5db8  bl 0x502f08
  03d5dbc  nop
  03d5dc0  ori 4, 3, 0
  03d5dc4  li 3, 6
  03d5dc8  bl 0x174f80
  03d5dcc  nop
  03d5dd0  lis 9, 0
  03d5dd4  li 3, 0
  03d5dd8  li 4, 0
  03d5ddc  ori 9, 9, 65424
  03d5de0  li 5, 1
  03d5de4  li 6, 1
  03d5de8  li 7, 1
  03d5dec  li 8, 0
  03d5df0  bl 0x502fd4
  03d5df4  nop
  03d5df8  ori 4, 3, 0
  03d5dfc  li 3, 26
  03d5e00  bl 0x174f80
  03d5e04  nop
  03d5e08  li 3, 1
  03d5e0c  li 4, 0
  03d5e10  li 8, 0
  03d5e14  li 10, 2
  03d5e18  li 5, 63
  03d5e1c  li 6, 1
  03d5e20  li 7, 0
  03d5e24  li 9, 1
  03d5e28  bl 0x502f7c
  03d5e2c  nop
  03d5e30  ori 4, 3, 0
  03d5e34  li 3, 22
  03d5e38  bl 0x174f80
  03d5e3c  nop
  03d5e40  bl 0x71170
  03d5e44  nop
  03d5e48  li 3, 58
  03d5e4c  bl 0x685c4
  03d5e50  nop
  03d5e54  ori 4, 3, 0
  03d5e58  li 3, 24
  03d5e5c  bl 0x174f80
  03d5e60  nop
  03d5e64  lis 7, 132
  03d5e68  li 3, 0
  03d5e6c  li 4, 1
  03d5e70  li 5, 0
  03d5e74  li 6, 1
  03d5e78  lwz 7, 26752(7)
  03d5e7c  bl 0x502ea8
  03d5e80  nop
  03d5e84  ori 4, 3, 0
  03d5e88  li 3, 3
  03d5e8c  bl 0x174f80
  03d5e90  nop
  03d5e94  lis 25, 133
  03d5e98  lis 30, 133
  03d5e9c  lis 24, 133
  03d5ea0  lis 26, 133
  03d5ea4  li 31, 0
  03d5ea8  lis 27, 269
  03d5eac  lis 28, 269
  03d5eb0  addic 25, 25, 13600
  03d5eb4  addic 30, 30, 13652
  03d5eb8  addic 26, 26, -9368
  03d5ebc  addic 24, 24, 13756
  03d5ec0  ori 29, 31, 0
  03d5ec4  addic 27, 27, -24584
  03d5ec8  addic 28, 28, -24528
  03d5ecc  ori 20, 30, 0
  03d5ed0  ori 19, 25, 0
  03d5ed4  ori 18, 26, 0
  03d5ed8  ori 21, 24, 0
  03d5edc  lwz 4, 0(30)
  03d5ee0  lwz 5, 0(26)
  03d5ee4  ori 3, 28, 0
  03d5ee8  ori 6, 27, 0
  03d5eec  extsw 5, 5
  03d5ef0  bl 0xe915c
  03d5ef4  nop
  03d5ef8  lwz 3, 0(26)
  03d5efc  ori 6, 28, 0
  03d5f00  lwz 4, 0(25)
  03d5f04  li 7, 9
  03d5f08  lwz 5, 0(24)
  03d5f0c  extsw 3, 3
  03d5f10  bl 0x74604
  03d5f14  nop
  03d5f18  addic 31, 31, 1
  03d5f1c  addic 30, 30, 4
  03d5f20  cmpwi 31, 13
  03d5f24  addic 26, 26, 4
  03d5f28  addic 25, 25, 4
  03d5f2c  addic 24, 24, 4
  03d5f30  bt 0, 0x3d5edc
  03d5f34  li 3, 59
  03d5f38  bl 0x685c4
  03d5f3c  nop
  03d5f40  ori 4, 3, 0
  03d5f44  li 3, 24
  03d5f48  bl 0x174f80
  03d5f4c  nop
  03d5f50  lis 30, 132
  03d5f54  lis 3, 269
  03d5f58  addic 30, 30, 26752
  03d5f5c  li 4, 0
  03d5f60  li 6, 1
  03d5f64  lbz 3, -24592(3)
  03d5f68  lwz 5, 4(30)
  03d5f6c  mullw 5, 5, 3
  03d5f70  li 3, 2
  03d5f74  srawi 7, 5, 8
  03d5f78  li 5, 2
  03d5f7c  clrldi 7, 7, 32
  03d5f80  bl 0x502ea8
  03d5f84  nop
  03d5f88  ori 4, 3, 0
  03d5f8c  li 3, 3
  03d5f90  bl 0x174f80
  03d5f94  nop
  03d5f98  ori 31, 29, 0
  03d5f9c  ori 25, 20, 0
  03d5fa0  ori 24, 18, 0
  03d5fa4  addic 26, 27, 8
  03d5fa8  ori 23, 19, 0
  03d5fac  ori 22, 21, 0
  03d5fb0  lwz 4, 0(25)
  03d5fb4  ori 3, 28, 0
  03d5fb8  lwz 5, 0(24)
  03d5fbc  ori 6, 26, 0
  03d5fc0  extsw 5, 5
  03d5fc4  bl 0xe915c
  03d5fc8  nop
  03d5fcc  lwz 3, 0(24)
  03d5fd0  lwz 4, 0(23)
  03d5fd4  ori 6, 28, 0
  03d5fd8  li 7, 9
  03d5fdc  lwz 5, 0(22)
  03d5fe0  extsw 3, 3
  03d5fe4  bl 0x74604
  03d5fe8  nop
  03d5fec  addic 31, 31, 1
  03d5ff0  addic 25, 25, 4
  03d5ff4  cmpwi 31, 13
  03d5ff8  addic 24, 24, 4
  03d5ffc  addic 23, 23, 4
  03d6000  addic 22, 22, 4
  03d6004  bt 0, 0x3d5fb0
  03d6008  lis 3, 269
  03d600c  lwz 5, 8(30)
  03d6010  li 4, 2
  03d6014  li 6, 1
  03d6018  lbz 3, -24592(3)
  03d601c  mullw 5, 5, 3
  03d6020  li 3, 0
  03d6024  srawi 7, 5, 8
  03d6028  li 5, 2
  03d602c  clrldi 7, 7, 32
  03d6030  bl 0x502ea8
  03d6034  nop
  03d6038  ori 4, 3, 0
  03d603c  li 3, 3
  03d6040  bl 0x174f80
  03d6044  nop
  03d6048  ori 30, 29, 0
  03d604c  addic 31, 27, 16
  03d6050  lwz 4, 0(20)
  03d6054  ori 3, 28, 0
  03d6058  lwz 5, 0(18)
  03d605c  ori 6, 31, 0
  03d6060  extsw 5, 5
  03d6064  bl 0xe915c
  03d6068  nop
  03d606c  lwz 3, 0(18)
  03d6070  lwz 4, 0(19)
  03d6074  ori 6, 28, 0
  03d6078  li 7, 9
  03d607c  lwz 5, 0(21)
  03d6080  extsw 3, 3
  03d6084  bl 0x74604
  03d6088  nop
  03d608c  addic 30, 30, 1
  03d6090  addic 20, 20, 4
  03d6094  cmpwi 30, 13
  03d6098  addic 18, 18, 4
  03d609c  addic 19, 19, 4
  03d60a0  addic 21, 21, 4
  03d60a4  bt 0, 0x3d6050
  03d60a8  li 3, 60
  03d60ac  bl 0x685c4
  03d60b0  nop
  03d60b4  ori 4, 3, 0
  03d60b8  li 3, 24
  03d60bc  bl 0x174f80
  03d60c0  nop
  03d60c4  lis 7, 132
  03d60c8  li 3, 0
  03d60cc  li 4, 2
  03d60d0  li 5, 0
  03d60d4  li 6, 1
  03d60d8  lwz 7, 26804(7)
  03d60dc  bl 0x502ea8
  03d60e0  nop
  03d60e4  ori 4, 3, 0
  03d60e8  li 3, 3
  03d60ec  bl 0x174f80
  03d60f0  nop
  03d60f4  lis 27, 133
  03d60f8  lis 25, 133
  03d60fc  lis 26, 133
  03d6100  lis 24, 133
  03d6104  lis 30, 269
  03d6108  addic 27, 27, -9500
  03d610c  addic 25, 25, -9544
  03d6110  addic 26, 26, -27976
  03d6114  addic 24, 24, -9412
  03d6118  ori 31, 29, 0
  03d611c  addic 30, 30, -24560
  03d6120  ori 20, 27, 0
  03d6124  ori 22, 26, 0
  03d6128  ori 23, 25, 0
  03d612c  ori 21, 24, 0
  03d6130  lwz 4, 0(27)
  03d6134  ori 3, 28, 0
  03d6138  lwz 5, 0(26)
  03d613c  ori 6, 30, 0
  03d6140  extsw 5, 5
  03d6144  bl 0xe915c
  03d6148  nop
  03d614c  lwz 3, 0(26)
  03d6150  lwz 4, 0(25)
  03d6154  ori 6, 28, 0
  03d6158  li 7, 9
  03d615c  lwz 5, 0(24)
  03d6160  extsw 3, 3
  03d6164  bl 0x74604
  03d6168  nop
  03d616c  addic 31, 31, 1
  03d6170  addic 27, 27, 4
  03d6174  cmpwi 31, 11
  03d6178  addic 26, 26, 4
  03d617c  addic 25, 25, 4
  03d6180  addic 24, 24, 4
  03d6184  bt 0, 0x3d6130
  03d6188  lis 3, 132
  03d618c  li 4, 2
  03d6190  addic 7, 3, 26804
  03d6194  li 3, 0
  03d6198  li 5, 0
  03d619c  li 6, 1
  03d61a0  lwz 7, 4(7)
  03d61a4  bl 0x502ea8
  03d61a8  nop
  03d61ac  ori 4, 3, 0
  03d61b0  li 3, 3
  03d61b4  bl 0x174f80
  03d61b8  nop
  03d61bc  lis 3, 269
  03d61c0  ori 30, 22, 0
  03d61c4  ori 31, 29, 0
  03d61c8  addic 22, 3, -24552
  03d61cc  lwz 4, 0(20)
  03d61d0  lwz 5, 0(30)
  03d61d4  ori 3, 28, 0
  03d61d8  ori 6, 22, 0
  03d61dc  extsw 5, 5
  03d61e0  bl 0xe915c
  03d61e4  nop
  03d61e8  lwz 3, 0(30)
  03d61ec  ori 6, 28, 0
  03d61f0  lwz 4, 0(23)
  03d61f4  li 7, 9
  03d61f8  lwz 5, 0(21)
  03d61fc  extsw 3, 3
  03d6200  bl 0x74604
  03d6204  nop
  03d6208  addic 31, 31, 1
  03d620c  addic 20, 20, 4
  03d6210  cmpwi 31, 11
  03d6214  addic 30, 30, 4
  03d6218  addic 23, 23, 4
  03d621c  addic 21, 21, 4
  03d6220  bt 0, 0x3d61cc
  03d6224  li 3, 61
  03d6228  bl 0x685c4
  03d622c  nop
  03d6230  ori 4, 3, 0
  03d6234  li 3, 24
  03d6238  bl 0x174f80
  03d623c  nop
  03d6240  lis 6, 132
  03d6244  li 3, 0
  03d6248  li 4, 2
  03d624c  li 5, 0
  03d6250  lwz 7, 26820(6)
  03d6254  li 6, 1
  03d6258  bl 0x502ea8
  03d625c  nop
  03d6260  ori 4, 3, 0
  03d6264  li 3, 3
  03d6268  bl 0x174f80
  03d626c  nop
  03d6270  lis 30, 133
  03d6274  lis 25, 133
  03d6278  lis 27, 132
  03d627c  lis 31, 269
  03d6280  lis 26, 133
  03d6284  addic 25, 25, -28008
  03d6288  addic 30, 30, -28072
  03d628c  addic 27, 27, 26824
  03d6290  addic 31, 31, -24544
  03d6294  addic 26, 26, -28104
  03d6298  lwz 4, 0(30)
  03d629c  ori 3, 28, 0
  03d62a0  lwz 5, 0(27)
  03d62a4  ori 6, 31, 0
  03d62a8  extsw 5, 5
  03d62ac  bl 0xe915c
  03d62b0  nop
  03d62b4  lwz 3, 0(27)
  03d62b8  lwz 4, 0(26)
  03d62bc  ori 6, 28, 0
  03d62c0  li 7, 9
  03d62c4  lwz 5, 0(25)
  03d62c8  extsw 3, 3
  03d62cc  bl 0x74604
  03d62d0  nop
  03d62d4  addic 29, 29, 1
  03d62d8  addic 30, 30, 4
  03d62dc  cmpwi 29, 8
  03d62e0  addic 27, 27, 4
  03d62e4  addic 26, 26, 4
  03d62e8  addic 25, 25, 4
  03d62ec  bt 0, 0x3d6298
  03d62f0  ld 0, 240(1)
  03d62f4  mtlr 0
  03d62f8  ld 18, 112(1)
  03d62fc  ld 19, 120(1)
  03d6300  ld 20, 128(1)
  03d6304  ld 21, 136(1)
  03d6308  ld 22, 144(1)
  03d630c  ld 23, 152(1)
  03d6310  ld 24, 160(1)
  03d6314  ld 25, 168(1)
  03d6318  ld 26, 176(1)
  03d631c  ld 27, 184(1)
  03d6320  ld 28, 192(1)
  03d6324  ld 29, 200(1)
  03d6328  ld 30, 208(1)
  03d632c  ld 31, 216(1)
  03d6330  addi 1, 1, 224
  03d6334  blr

M600_003d6340:   # 0x3d6340, 0x220 bytes
  03d6340  stdu 1, -288(1)
  03d6344  mflr 0
  03d6348  std 0, 304(1)
  03d634c  stfd 24, 224(1)
  03d6350  stfd 25, 232(1)
  03d6354  stfd 26, 240(1)
  03d6358  stfd 27, 248(1)
  03d635c  stfd 28, 256(1)
  03d6360  stfd 29, 264(1)
  03d6364  stfd 30, 272(1)
  03d6368  stfd 31, 280(1)
  03d636c  std 19, 120(1)
  03d6370  li 19, 0
  03d6374  cmpwi 4, 0
  03d6378  std 28, 192(1)
  03d637c  fmr 28, 1
  03d6380  std 25, 168(1)
  03d6384  ori 28, 3, 0
  03d6388  fmr 29, 2
  03d638c  std 29, 200(1)
  03d6390  ori 25, 19, 0
  03d6394  fmr 30, 3
  03d6398  std 30, 208(1)
  03d639c  ori 29, 4, 0
  03d63a0  fmr 31, 4
  03d63a4  std 31, 216(1)
  03d63a8  ori 30, 5, 0
  03d63ac  std 27, 184(1)
  03d63b0  std 26, 176(1)
  03d63b4  std 24, 160(1)
  03d63b8  std 23, 152(1)
  03d63bc  std 22, 144(1)
  03d63c0  std 21, 136(1)
  03d63c4  std 20, 128(1)
  03d63c8  ori 31, 10, 0
  03d63cc  bf 1, 0x3d64fc
  03d63d0  lis 3, 61
  03d63d4  ori 26, 30, 0
  03d63d8  addi 3, 3, 25400
  03d63dc  ori 27, 19, 0
  03d63e0  lfs 24, 0(3)
  03d63e4  lwz 3, 0(26)
  03d63e8  ori 20, 25, 0
  03d63ec  cmpwi 3, 0
  03d63f0  bf 1, 0x3d64e8
  03d63f4  ori 24, 25, 0
  03d63f8  lwzx 3, 28, 27
  03d63fc  cmpwi 31, 0
  03d6400  lwzx 23, 3, 24
  03d6404  clrlwi 3, 23, 24
  03d6408  rlwinm 21, 23, 24, 24, 31
  03d640c  rlwinm 22, 23, 16, 24, 31
  03d6410  srwi 23, 23, 24
  03d6414  bf 2, 0x3d6454
  03d6418  bl 0x502730
  03d641c  nop
  03d6420  ori 3, 21, 0
  03d6424  fmr 27, 1
  03d6428  bl 0x502730
  03d642c  nop
  03d6430  ori 3, 22, 0
  03d6434  fmr 25, 1
  03d6438  bl 0x502730
  03d643c  nop
  03d6440  fmr 26, 1
  03d6444  ori 3, 23, 0
  03d6448  bl 0x502730
  03d644c  nop
  03d6450  b 0x3d646c
  03d6454  ori 3, 23, 0
  03d6458  bl 0x502730
  03d645c  nop
  03d6460  fmr 25, 24
  03d6464  fmr 26, 25
  03d6468  fmr 27, 26
  03d646c  fmuls 2, 27, 28
  03d6470  fmuls 27, 1, 31
  03d6474  fmuls 26, 26, 30
  03d6478  fmuls 25, 25, 29
  03d647c  fmr 1, 2
  03d6480  bl 0x502758
  03d6484  nop
  03d6488  ori 23, 3, 0
  03d648c  fmr 1, 27
  03d6490  bl 0x502758
  03d6494  nop
  03d6498  ori 22, 3, 0
  03d649c  fmr 1, 26
  03d64a0  bl 0x502758
  03d64a4  nop
  03d64a8  slwi 4, 22, 24
  03d64ac  slwi 3, 3, 16
  03d64b0  fmr 1, 25
  03d64b4  addc 22, 4, 3
  03d64b8  bl 0x502758
  03d64bc  nop
  03d64c0  slwi 3, 3, 8
  03d64c4  lwzx 4, 28, 27
  03d64c8  addic 20, 20, 1
  03d64cc  addc 3, 22, 3
  03d64d0  addc 3, 3, 23
  03d64d4  stwx 3, 4, 24
  03d64d8  lwzx 3, 30, 27
  03d64dc  addic 24, 24, 4
  03d64e0  cmpw 20, 3
  03d64e4  bt 0, 0x3d63f8
  03d64e8  addic 19, 19, 1
  03d64ec  addic 26, 26, 4
  03d64f0  cmpw 19, 29
  03d64f4  addic 27, 27, 4
  03d64f8  bt 0, 0x3d63e4
  03d64fc  ld 0, 304(1)
  03d6500  mtlr 0
  03d6504  lfd 24, 224(1)
  03d6508  lfd 25, 232(1)
  03d650c  lfd 26, 240(1)
  03d6510  lfd 27, 248(1)
  03d6514  lfd 28, 256(1)
  03d6518  lfd 29, 264(1)
  03d651c  lfd 30, 272(1)
  03d6520  lfd 31, 280(1)
  03d6524  ld 19, 120(1)
  03d6528  ld 20, 128(1)
  03d652c  ld 21, 136(1)
  03d6530  ld 22, 144(1)
  03d6534  ld 23, 152(1)
  03d6538  ld 24, 160(1)
  03d653c  ld 25, 168(1)
  03d6540  ld 26, 176(1)
  03d6544  ld 27, 184(1)
  03d6548  ld 28, 192(1)
  03d654c  ld 29, 200(1)
  03d6550  ld 30, 208(1)
  03d6554  ld 31, 216(1)
  03d6558  addi 1, 1, 288
  03d655c  blr

M600_003d6588:   # 0x3d6588, 0x14c bytes
  03d6588  lis 5, 114
  03d658c  lfs 5, 0(6)
  03d6590  lis 4, 61
  03d6594  addi 4, 4, 25952
  03d6598  lfs 4, -3036(5)
  03d659c  fmadds 5, 4, 1, 5
  03d65a0  lfs 1, 4(6)
  03d65a4  stfs 5, 0(6)
  03d65a8  lfs 4, 0(4)
  03d65ac  fcmpu 0, 5, 4
  03d65b0  cror 6, 0, 2
  03d65b4  bt 6, 0x3d65c4
  03d65b8  lfs 6, 4(4)
  03d65bc  fsubs 5, 5, 6
  03d65c0  stfs 5, 0(6)
  03d65c4  lfs 6, 8(4)
  03d65c8  fcmpu 0, 5, 6
  03d65cc  cror 6, 1, 2
  03d65d0  bt 6, 0x3d65e0
  03d65d4  lfs 7, 4(4)
  03d65d8  fadds 5, 5, 7
  03d65dc  stfs 5, 0(6)
  03d65e0  lis 5, 114
  03d65e4  lfs 7, -3036(5)
  03d65e8  fmadds 1, 7, 2, 1
  03d65ec  fcmpu 0, 1, 4
  03d65f0  stfs 1, 4(6)
  03d65f4  cror 6, 0, 2
  03d65f8  bt 6, 0x3d6608
  03d65fc  lfs 2, 4(4)
  03d6600  fsubs 1, 1, 2
  03d6604  stfs 1, 4(6)
  03d6608  fcmpu 0, 1, 6
  03d660c  cror 6, 1, 2
  03d6610  bt 6, 0x3d6620
  03d6614  lfs 2, 4(4)
  03d6618  fadds 1, 1, 2
  03d661c  stfs 1, 4(6)
  03d6620  lfs 1, 12(4)
  03d6624  lfs 2, 16(4)
  03d6628  fmuls 5, 5, 1
  03d662c  lfs 4, 20(4)
  03d6630  lfs 8, 24(4)
  03d6634  fsubs 6, 2, 5
  03d6638  fsubs 7, 4, 5
  03d663c  fsub 9, 5, 6
  03d6640  fsel 5, 9, 6, 5
  03d6644  lfs 6, 28(4)
  03d6648  fsub 9, 7, 5
  03d664c  fsel 5, 9, 7, 5
  03d6650  lfs 7, 32(4)
  03d6654  lfs 9, 36(4)
  03d6658  fmuls 10, 5, 5
  03d665c  fmuls 11, 10, 5
  03d6660  fmuls 12, 10, 11
  03d6664  fmadds 5, 11, 8, 5
  03d6668  fmuls 11, 10, 12
  03d666c  fmadds 5, 12, 6, 5
  03d6670  fmuls 10, 10, 11
  03d6674  fmadds 5, 11, 7, 5
  03d6678  fmadds 5, 10, 9, 5
  03d667c  fmuls 5, 5, 3
  03d6680  stfs 5, 0(3)
  03d6684  lfs 5, 4(6)
  03d6688  fmuls 1, 5, 1
  03d668c  fsubs 2, 2, 1
  03d6690  fsubs 4, 4, 1
  03d6694  fsub 5, 1, 2
  03d6698  fsel 1, 5, 2, 1
  03d669c  fsub 2, 4, 1
  03d66a0  fsel 1, 2, 4, 1
  03d66a4  fmuls 2, 1, 1
  03d66a8  fmuls 4, 2, 1
  03d66ac  fmuls 5, 2, 4
  03d66b0  fmadds 1, 4, 8, 1
  03d66b4  fmuls 4, 2, 5
  03d66b8  fmadds 1, 5, 6, 1
  03d66bc  fmuls 2, 2, 4
  03d66c0  fmadds 1, 4, 7, 1
  03d66c4  fmadds 1, 2, 9, 1
  03d66c8  fmuls 1, 1, 3
  03d66cc  stfs 1, 4(3)
  03d66d0  blr

M600_003d66e0:   # 0x3d66e0, 0xb8 bytes
  03d66e0  lis 4, 269
  03d66e4  sldi 3, 3, 3
  03d66e8  lis 5, 114
  03d66ec  lis 6, 132
  03d66f0  addic 4, 4, -24584
  03d66f4  extsw 3, 3
  03d66f8  addic 6, 6, 26764
  03d66fc  lfs 3, -3036(5)
  03d6700  lis 5, 61
  03d6704  lfsx 4, 4, 3
  03d6708  lfsx 1, 6, 3
  03d670c  addi 5, 5, 26324
  03d6710  fmadds 4, 1, 3, 4
  03d6714  stfsx 4, 4, 3
  03d6718  lfs 2, 0(5)
  03d671c  fcmpu 0, 4, 2
  03d6720  cror 6, 0, 2
  03d6724  bt 6, 0x3d6730
  03d6728  fsubs 4, 4, 2
  03d672c  stfsx 4, 4, 3
  03d6730  lis 5, 61
  03d6734  addi 5, 5, 26324
  03d6738  lfs 1, 4(5)
  03d673c  fcmpu 0, 4, 1
  03d6740  cror 6, 1, 2
  03d6744  bt 6, 0x3d6750
  03d6748  fadds 4, 4, 2
  03d674c  stfsx 4, 4, 3
  03d6750  lis 5, 132
  03d6754  addc 4, 4, 3
  03d6758  addic 5, 5, 26768
  03d675c  lfs 4, 4(4)
  03d6760  lfsx 5, 5, 3
  03d6764  fmadds 3, 5, 3, 4
  03d6768  fcmpu 0, 3, 2
  03d676c  stfs 3, 4(4)
  03d6770  cror 6, 0, 2
  03d6774  bt 6, 0x3d6780
  03d6778  fsubs 3, 3, 2
  03d677c  stfs 3, 4(4)
  03d6780  fcmpu 0, 3, 1
  03d6784  cror 6, 1, 2
  03d6788  bt 6, 0x3d6794
  03d678c  fadds 1, 3, 2
  03d6790  stfs 1, 4(4)
  03d6794  blr

M600_003d67a0:   # 0x3d67a0, 0xb8 bytes
  03d67a0  lis 4, 269
  03d67a4  sldi 3, 3, 3
  03d67a8  lis 5, 114
  03d67ac  lis 6, 132
  03d67b0  addic 4, 4, -24560
  03d67b4  extsw 3, 3
  03d67b8  addic 6, 6, 26788
  03d67bc  lfs 3, -3036(5)
  03d67c0  lis 5, 61
  03d67c4  lfsx 4, 4, 3
  03d67c8  lfsx 1, 6, 3
  03d67cc  addi 5, 5, 26520
  03d67d0  fmadds 4, 1, 3, 4
  03d67d4  stfsx 4, 4, 3
  03d67d8  lfs 2, 0(5)
  03d67dc  fcmpu 0, 4, 2
  03d67e0  cror 6, 0, 2
  03d67e4  bt 6, 0x3d67f0
  03d67e8  fsubs 4, 4, 2
  03d67ec  stfsx 4, 4, 3
  03d67f0  lis 5, 61
  03d67f4  addi 5, 5, 26520
  03d67f8  lfs 1, 4(5)
  03d67fc  fcmpu 0, 4, 1
  03d6800  cror 6, 1, 2
  03d6804  bt 6, 0x3d6810
  03d6808  fadds 4, 4, 2
  03d680c  stfsx 4, 4, 3
  03d6810  lis 5, 132
  03d6814  addc 4, 4, 3
  03d6818  addic 5, 5, 26792
  03d681c  lfs 4, 4(4)
  03d6820  lfsx 5, 5, 3
  03d6824  fmadds 3, 5, 3, 4
  03d6828  fcmpu 0, 3, 2
  03d682c  stfs 3, 4(4)
  03d6830  cror 6, 0, 2
  03d6834  bt 6, 0x3d6840
  03d6838  fsubs 3, 3, 2
  03d683c  stfs 3, 4(4)
  03d6840  fcmpu 0, 3, 1
  03d6844  cror 6, 1, 2
  03d6848  bt 6, 0x3d6854
  03d684c  fadds 1, 3, 2
  03d6850  stfs 1, 4(4)
  03d6854  blr

M600_003d6860:   # 0x3d6860, 0xb8 bytes
  03d6860  lis 4, 269
  03d6864  sldi 3, 3, 3
  03d6868  lis 5, 114
  03d686c  lis 6, 132
  03d6870  addic 4, 4, -24544
  03d6874  extsw 3, 3
  03d6878  addic 6, 6, 26812
  03d687c  lfs 3, -3036(5)
  03d6880  lis 5, 61
  03d6884  lfsx 4, 4, 3
  03d6888  lfsx 1, 6, 3
  03d688c  addi 5, 5, 26712
  03d6890  fmadds 4, 1, 3, 4
  03d6894  stfsx 4, 4, 3
  03d6898  lfs 2, 0(5)
  03d689c  fcmpu 0, 4, 2
  03d68a0  cror 6, 0, 2
  03d68a4  bt 6, 0x3d68b0
  03d68a8  fsubs 4, 4, 2
  03d68ac  stfsx 4, 4, 3
  03d68b0  lis 5, 61
  03d68b4  addi 5, 5, 26712
  03d68b8  lfs 1, 4(5)
  03d68bc  fcmpu 0, 4, 1
  03d68c0  cror 6, 1, 2
  03d68c4  bt 6, 0x3d68d0
  03d68c8  fadds 4, 4, 2
  03d68cc  stfsx 4, 4, 3
  03d68d0  lis 5, 132
  03d68d4  addc 4, 4, 3
  03d68d8  addic 5, 5, 26816
  03d68dc  lfs 4, 4(4)
  03d68e0  lfsx 5, 5, 3
  03d68e4  fmadds 3, 5, 3, 4
  03d68e8  fcmpu 0, 3, 2
  03d68ec  stfs 3, 4(4)
  03d68f0  cror 6, 0, 2
  03d68f4  bt 6, 0x3d6900
  03d68f8  fsubs 3, 3, 2
  03d68fc  stfs 3, 4(4)
  03d6900  fcmpu 0, 3, 1
  03d6904  cror 6, 1, 2
  03d6908  bt 6, 0x3d6914
  03d690c  fadds 1, 3, 2
  03d6910  stfs 1, 4(4)
  03d6914  blr

UpdateMoby_600:   # 0x3d6950, 0x330 bytes
  03d6950  stdu 1, -160(1)
  03d6954  mflr 0
  03d6958  std 0, 176(1)
  03d695c  stfd 30, 144(1)
  03d6960  stfd 31, 152(1)
  03d6964  std 31, 136(1)
  03d6968  ori 31, 3, 0
  03d696c  lbz 3, 32(3)
  03d6970  cmpwi 3, 0
  03d6974  cmpwi 1, 3, 1
  03d6978  std 30, 128(1)
  03d697c  cmpwi 6, 3, -1
  03d6980  bt 1, 0x3d698c
  03d6984  bf 25, 0x3d6c60
  03d6988  b 0x3d6994
  03d698c  bf 5, 0x3d6b0c
  03d6990  b 0x3d6c60
  03d6994  lis 3, 269
  03d6998  lwz 3, -24588(3)
  03d699c  cmpwi 3, 0
  03d69a0  bf 2, 0x3d6a44
  03d69a4  lis 3, 61
  03d69a8  lis 5, 133
  03d69ac  addi 30, 3, 26904
  03d69b0  lis 3, 133
  03d69b4  addic 5, 5, -9368
  03d69b8  addic 3, 3, 13756
  03d69bc  li 4, 13
  03d69c0  lfs 31, 4(30)
  03d69c4  li 10, 1
  03d69c8  lfs 3, 0(30)
  03d69cc  fmr 1, 31
  03d69d0  fmr 2, 31
  03d69d4  fmr 4, 31
  03d69d8  bl 0x3d6340
  03d69dc  lis 3, 133
  03d69e0  lfs 30, 8(30)
  03d69e4  lis 5, 132
  03d69e8  fmr 1, 31
  03d69ec  addic 3, 3, -28008
  03d69f0  fmr 2, 31
  03d69f4  li 10, 1
  03d69f8  fmr 3, 31
  03d69fc  addic 5, 5, 26824
  03d6a00  fmr 4, 30
  03d6a04  li 4, 8
  03d6a08  bl 0x3d6340
  03d6a0c  lis 3, 133
  03d6a10  lfs 1, 12(30)
  03d6a14  lis 5, 133
  03d6a18  addic 3, 3, -9412
  03d6a1c  fmr 4, 30
  03d6a20  li 10, 1
  03d6a24  fmr 2, 1
  03d6a28  addic 5, 5, -27976
  03d6a2c  fmr 3, 1
  03d6a30  li 4, 11
  03d6a34  bl 0x3d6340
  03d6a38  lis 3, 269
  03d6a3c  li 4, 1
  03d6a40  stw 4, -24588(3)
  03d6a44  li 4, 1
  03d6a48  vspltisw 2, 0
  03d6a4c  lis 5, 269
  03d6a50  vspltisw 3, 1
  03d6a54  li 3, 0
  03d6a58  lis 6, 269
  03d6a5c  addic 7, 5, -24584
  03d6a60  stb 4, 32(31)
  03d6a64  lis 8, 61
  03d6a68  stw 3, -24584(5)
  03d6a6c  addic 9, 6, -24536
  03d6a70  stw 3, -24536(6)
  03d6a74  stw 3, 4(7)
  03d6a78  addi 4, 8, 26904
  03d6a7c  li 5, 16
  03d6a80  stw 3, 8(7)
  03d6a84  stw 3, 12(7)
  03d6a88  lis 8, 269
  03d6a8c  stw 3, 16(7)
  03d6a90  lis 6, 269
  03d6a94  stw 3, 20(7)
  03d6a98  li 10, -24556
  03d6a9c  stw 3, 4(9)
  03d6aa0  addic 7, 8, -24556
  03d6aa4  <unknown>
  03d6aa8  addic 9, 6, -24560
  03d6aac  addic 7, 7, 8
  03d6ab0  vspltw 4, 4, 0
  03d6ab4  stw 3, -24560(6)
  03d6ab8  lis 4, 269
  03d6abc  lis 31, 269
  03d6ac0  stvewx 2, 10, 8
  03d6ac4  stw 3, 8(9)
  03d6ac8  ori 5, 3, 0
  03d6acc  addic 4, 4, -24544
  03d6ad0  addic 31, 31, -24540
  03d6ad4  stvewx 4, 0, 7
  03d6ad8  vcfsx 5, 2, 0
  03d6adc  vspltisw 6, -1
  03d6ae0  addic 5, 5, 1
  03d6ae4  stw 3, 0(4)
  03d6ae8  cmpwi 5, 1
  03d6aec  addic 4, 4, 8
  03d6af0  vadduwm 2, 2, 3
  03d6af4  vslw 6, 6, 6
  03d6af8  vmaddfp 5, 5, 4, 6
  03d6afc  stvewx 5, 0, 31
  03d6b00  addic 31, 31, 8
  03d6b04  bt 0, 0x3d6ad8
  03d6b08  b 0x3d6c60
  03d6b0c  lis 3, 132
  03d6b10  lis 4, 61
  03d6b14  addic 30, 3, 26736
  03d6b18  addi 4, 4, 26904
  03d6b1c  lfs 1, 26736(3)
  03d6b20  addic 3, 1, 112
  03d6b24  lfs 2, 4(30)
  03d6b28  stfs 1, 112(1)
  03d6b2c  lfs 1, 8(30)
  03d6b30  stfs 2, 116(1)
  03d6b34  lfs 2, 12(30)
  03d6b38  stfs 1, 120(1)
  03d6b3c  stfs 2, 124(1)
  03d6b40  lfs 1, 20(4)
  03d6b44  bl 0x502910
  03d6b48  nop
  03d6b4c  cmpwi 3, 0
  03d6b50  bt 0, 0x3d6c60
  03d6b54  lis 3, 149
  03d6b58  lfs 1, 4(30)
  03d6b5c  lis 4, 132
  03d6b60  addic 3, 3, 5056
  03d6b64  lfs 2, 26736(4)
  03d6b68  lfs 3, 324(3)
  03d6b6c  lfs 4, 320(3)
  03d6b70  fsubs 1, 3, 1
  03d6b74  fsubs 2, 4, 2
  03d6b78  lfs 3, 8(30)
  03d6b7c  lfs 4, 328(3)
  03d6b80  fsubs 3, 4, 3
  03d6b84  lis 3, 61
  03d6b88  fmuls 1, 1, 1
  03d6b8c  addi 3, 3, 26904
  03d6b90  lfs 31, 24(3)
  03d6b94  fmadds 1, 2, 2, 1
  03d6b98  fmadds 30, 3, 3, 1
  03d6b9c  fsqrts 30, 30
  03d6ba0  fcmpu 0, 30, 31
  03d6ba4  bt 1, 0x3d6c34
  03d6ba8  li 3, 0
  03d6bac  bl 0x3d66e0
  03d6bb0  lis 3, 61
  03d6bb4  lis 4, 269
  03d6bb8  addi 30, 3, 26904
  03d6bbc  addic 3, 4, -24584
  03d6bc0  lis 6, 269
  03d6bc4  addic 3, 3, 8
  03d6bc8  addic 6, 6, -24536
  03d6bcc  lfs 1, 28(30)
  03d6bd0  lfs 2, 32(30)
  03d6bd4  lfs 3, 36(30)
  03d6bd8  bl 0x3d6588
  03d6bdc  li 3, 2
  03d6be0  bl 0x3d66e0
  03d6be4  lfs 1, 40(30)
  03d6be8  li 3, 255
  03d6bec  fcmpu 0, 30, 1
  03d6bf0  bt 0, 0x3d6c2c
  03d6bf4  fcmpu 0, 30, 31
  03d6bf8  li 3, 0
  03d6bfc  cror 6, 1, 2
  03d6c00  bt 6, 0x3d6c2c
  03d6c04  lis 3, 61
  03d6c08  fsubs 1, 30, 1
  03d6c0c  addi 3, 3, 26904
  03d6c10  lfs 2, 44(3)
  03d6c14  lfs 3, 8(3)
  03d6c18  lfs 4, 48(3)
  03d6c1c  fnmsubs 1, 1, 2, 3
  03d6c20  fmuls 1, 1, 4
  03d6c24  bl 0x502758
  03d6c28  nop
  03d6c2c  lis 4, 269
  03d6c30  stb 3, -24592(4)
  03d6c34  li 3, 0
  03d6c38  bl 0x3d6860
  03d6c3c  li 3, 0
  03d6c40  bl 0x3d67a0
  03d6c44  li 3, 1
  03d6c48  bl 0x3d67a0
  03d6c4c  lis 3, 113
  03d6c50  ori 4, 31, 0
  03d6c54  addic 3, 3, -10240
  03d6c58  bl 0x6d720
  03d6c5c  nop
  03d6c60  ld 0, 176(1)
  03d6c64  mtlr 0
  03d6c68  lfd 30, 144(1)
  03d6c6c  lfd 31, 152(1)
  03d6c70  ld 30, 128(1)
  03d6c74  ld 31, 136(1)
  03d6c78  addi 1, 1, 160
  03d6c7c  blr
