# game/update/moby1903.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1903_002d47e8:   # 0x2d47e8, 0x14 bytes
  02d47e8  lis 3, 125
  02d47ec  lis 4, 1
  02d47f0  addic 3, 3, -23220
  02d47f4  stw 4, 72(3)
  02d47f8  blr

M1903_002d4800:   # 0x2d4800, 0xf0 bytes
  02d4800  stdu 1, -176(1)
  02d4804  mflr 0
  02d4808  std 0, 192(1)
  02d480c  std 25, 120(1)
  02d4810  std 30, 160(1)
  02d4814  std 28, 144(1)
  02d4818  lis 25, 267
  02d481c  lis 30, 125
  02d4820  std 31, 168(1)
  02d4824  lis 28, 125
  02d4828  std 29, 152(1)
  02d482c  lis 31, 125
  02d4830  std 26, 128(1)
  02d4834  std 24, 112(1)
  02d4838  lis 29, 125
  02d483c  lis 26, 267
  02d4840  std 27, 136(1)
  02d4844  li 24, 0
  02d4848  sldi 27, 3, 3
  02d484c  addic 25, 25, 24656
  02d4850  addic 28, 28, -9536
  02d4854  addic 30, 30, -9552
  02d4858  addic 29, 29, -23016
  02d485c  addic 31, 31, -9504
  02d4860  addic 26, 26, 24600
  02d4864  lwz 4, 0(28)
  02d4868  addc 6, 27, 26
  02d486c  lwz 5, 0(29)
  02d4870  ori 3, 25, 0
  02d4874  clrldi 6, 6, 32
  02d4878  extsw 5, 5
  02d487c  bl 0xe915c
  02d4880  nop
  02d4884  lwz 3, 0(29)
  02d4888  lwz 4, 0(30)
  02d488c  ori 6, 25, 0
  02d4890  li 7, 9
  02d4894  lwz 5, 0(31)
  02d4898  extsw 3, 3
  02d489c  bl 0x74604
  02d48a0  nop
  02d48a4  addic 24, 24, 1
  02d48a8  addic 28, 28, 4
  02d48ac  cmpwi 24, 4
  02d48b0  addic 29, 29, 4
  02d48b4  addic 30, 30, 4
  02d48b8  addic 31, 31, 4
  02d48bc  bt 0, 0x2d4864
  02d48c0  ld 0, 192(1)
  02d48c4  mtlr 0
  02d48c8  ld 24, 112(1)
  02d48cc  ld 25, 120(1)
  02d48d0  ld 26, 128(1)
  02d48d4  ld 27, 136(1)
  02d48d8  ld 28, 144(1)
  02d48dc  ld 29, 152(1)
  02d48e0  ld 30, 160(1)
  02d48e4  ld 31, 168(1)
  02d48e8  addi 1, 1, 176
  02d48ec  blr

M1903_002d48f0:   # 0x2d48f0, 0xf0 bytes
  02d48f0  stdu 1, -176(1)
  02d48f4  mflr 0
  02d48f8  std 0, 192(1)
  02d48fc  std 25, 120(1)
  02d4900  std 30, 160(1)
  02d4904  std 28, 144(1)
  02d4908  lis 25, 267
  02d490c  lis 30, 126
  02d4910  std 31, 168(1)
  02d4914  lis 28, 126
  02d4918  std 29, 152(1)
  02d491c  lis 31, 126
  02d4920  std 26, 128(1)
  02d4924  std 24, 112(1)
  02d4928  lis 29, 125
  02d492c  lis 26, 267
  02d4930  std 27, 136(1)
  02d4934  li 24, 0
  02d4938  sldi 27, 3, 3
  02d493c  addic 25, 25, 24656
  02d4940  addic 28, 28, -30768
  02d4944  addic 30, 30, -30800
  02d4948  addic 29, 29, 11128
  02d494c  addic 31, 31, -30704
  02d4950  addic 26, 26, 24624
  02d4954  lwz 4, 0(28)
  02d4958  addc 6, 27, 26
  02d495c  lwz 5, 0(29)
  02d4960  ori 3, 25, 0
  02d4964  clrldi 6, 6, 32
  02d4968  extsw 5, 5
  02d496c  bl 0xe915c
  02d4970  nop
  02d4974  lwz 3, 0(29)
  02d4978  lwz 4, 0(30)
  02d497c  ori 6, 25, 0
  02d4980  li 7, 9
  02d4984  lwz 5, 0(31)
  02d4988  extsw 3, 3
  02d498c  bl 0x74604
  02d4990  nop
  02d4994  addic 24, 24, 1
  02d4998  addic 28, 28, 4
  02d499c  cmpwi 24, 8
  02d49a0  addic 29, 29, 4
  02d49a4  addic 30, 30, 4
  02d49a8  addic 31, 31, 4
  02d49ac  bt 0, 0x2d4954
  02d49b0  ld 0, 192(1)
  02d49b4  mtlr 0
  02d49b8  ld 24, 112(1)
  02d49bc  ld 25, 120(1)
  02d49c0  ld 26, 128(1)
  02d49c4  ld 27, 136(1)
  02d49c8  ld 28, 144(1)
  02d49cc  ld 29, 152(1)
  02d49d0  ld 30, 160(1)
  02d49d4  ld 31, 168(1)
  02d49d8  addi 1, 1, 176
  02d49dc  blr

M1903_002d49e0:   # 0x2d49e0, 0xf0 bytes
  02d49e0  stdu 1, -176(1)
  02d49e4  mflr 0
  02d49e8  std 0, 192(1)
  02d49ec  std 25, 120(1)
  02d49f0  std 30, 160(1)
  02d49f4  std 28, 144(1)
  02d49f8  lis 25, 267
  02d49fc  lis 30, 125
  02d4a00  std 31, 168(1)
  02d4a04  lis 28, 125
  02d4a08  std 29, 152(1)
  02d4a0c  lis 31, 125
  02d4a10  std 26, 128(1)
  02d4a14  std 24, 112(1)
  02d4a18  lis 29, 125
  02d4a1c  lis 26, 267
  02d4a20  std 27, 136(1)
  02d4a24  li 24, 0
  02d4a28  sldi 27, 3, 3
  02d4a2c  addic 25, 25, 24656
  02d4a30  addic 28, 28, 10996
  02d4a34  addic 30, 30, 10952
  02d4a38  addic 29, 29, -9488
  02d4a3c  addic 31, 31, 11084
  02d4a40  addic 26, 26, 24640
  02d4a44  lwz 4, 0(28)
  02d4a48  addc 6, 27, 26
  02d4a4c  lwz 5, 0(29)
  02d4a50  ori 3, 25, 0
  02d4a54  clrldi 6, 6, 32
  02d4a58  extsw 5, 5
  02d4a5c  bl 0xe915c
  02d4a60  nop
  02d4a64  lwz 3, 0(29)
  02d4a68  lwz 4, 0(30)
  02d4a6c  ori 6, 25, 0
  02d4a70  li 7, 9
  02d4a74  lwz 5, 0(31)
  02d4a78  extsw 3, 3
  02d4a7c  bl 0x74604
  02d4a80  nop
  02d4a84  addic 24, 24, 1
  02d4a88  addic 28, 28, 4
  02d4a8c  cmpwi 24, 11
  02d4a90  addic 29, 29, 4
  02d4a94  addic 30, 30, 4
  02d4a98  addic 31, 31, 4
  02d4a9c  bt 0, 0x2d4a44
  02d4aa0  ld 0, 192(1)
  02d4aa4  mtlr 0
  02d4aa8  ld 24, 112(1)
  02d4aac  ld 25, 120(1)
  02d4ab0  ld 26, 128(1)
  02d4ab4  ld 27, 136(1)
  02d4ab8  ld 28, 144(1)
  02d4abc  ld 29, 152(1)
  02d4ac0  ld 30, 160(1)
  02d4ac4  ld 31, 168(1)
  02d4ac8  addi 1, 1, 176
  02d4acc  blr

M1903_002d4ad0:   # 0x2d4ad0, 0x698 bytes
  02d4ad0  stdu 1, -224(1)
  02d4ad4  mflr 0
  02d4ad8  std 0, 240(1)
  02d4adc  li 3, 0
  02d4ae0  li 4, 1
  02d4ae4  li 5, 0
  02d4ae8  li 6, 1
  02d4aec  std 31, 216(1)
  02d4af0  std 30, 208(1)
  02d4af4  std 29, 200(1)
  02d4af8  std 28, 192(1)
  02d4afc  std 27, 184(1)
  02d4b00  std 26, 176(1)
  02d4b04  std 25, 168(1)
  02d4b08  std 24, 160(1)
  02d4b0c  std 23, 152(1)
  02d4b10  std 22, 144(1)
  02d4b14  std 21, 136(1)
  02d4b18  std 20, 128(1)
  02d4b1c  std 19, 120(1)
  02d4b20  std 18, 112(1)
  02d4b24  li 7, 128
  02d4b28  bl 0x502ea8
  02d4b2c  nop
  02d4b30  ori 4, 3, 0
  02d4b34  li 3, 3
  02d4b38  bl 0x174f80
  02d4b3c  nop
  02d4b40  li 3, 0
  02d4b44  li 4, 0
  02d4b48  li 8, 0
  02d4b4c  li 5, 0
  02d4b50  li 6, 0
  02d4b54  li 7, 0
  02d4b58  bl 0x502f08
  02d4b5c  nop
  02d4b60  ori 4, 3, 0
  02d4b64  li 3, 6
  02d4b68  bl 0x174f80
  02d4b6c  nop
  02d4b70  lis 9, 0
  02d4b74  li 3, 0
  02d4b78  li 4, 0
  02d4b7c  ori 9, 9, 65424
  02d4b80  li 5, 1
  02d4b84  li 6, 1
  02d4b88  li 7, 1
  02d4b8c  li 8, 0
  02d4b90  bl 0x502fd4
  02d4b94  nop
  02d4b98  ori 4, 3, 0
  02d4b9c  li 3, 26
  02d4ba0  bl 0x174f80
  02d4ba4  nop
  02d4ba8  li 3, 1
  02d4bac  li 4, 0
  02d4bb0  li 8, 0
  02d4bb4  li 10, 2
  02d4bb8  li 5, 63
  02d4bbc  li 6, 1
  02d4bc0  li 7, 0
  02d4bc4  li 9, 1
  02d4bc8  bl 0x502f7c
  02d4bcc  nop
  02d4bd0  ori 4, 3, 0
  02d4bd4  li 3, 22
  02d4bd8  bl 0x174f80
  02d4bdc  nop
  02d4be0  lis 3, 144
  02d4be4  lis 4, 161
  02d4be8  addic 5, 3, -23532
  02d4bec  addic 4, 4, 24396
  02d4bf0  li 3, 22
  02d4bf4  lwz 31, 8(5)
  02d4bf8  lwz 30, 28(4)
  02d4bfc  bl 0x685c4
  02d4c00  nop
  02d4c04  sldi 4, 3, 5
  02d4c08  sldi 3, 3, 2
  02d4c0c  addc 5, 4, 3
  02d4c10  ori 3, 31, 0
  02d4c14  addc 5, 30, 5
  02d4c18  li 4, 0
  02d4c1c  clrldi 5, 5, 32
  02d4c20  bl 0x4d6bb0
  02d4c24  nop
  02d4c28  bl 0x71170
  02d4c2c  nop
  02d4c30  li 3, 44
  02d4c34  bl 0x685c4
  02d4c38  nop
  02d4c3c  ori 4, 3, 0
  02d4c40  li 3, 24
  02d4c44  bl 0x174f80
  02d4c48  nop
  02d4c4c  lis 7, 125
  02d4c50  li 3, 0
  02d4c54  li 4, 1
  02d4c58  li 5, 0
  02d4c5c  li 6, 1
  02d4c60  lwz 7, -23088(7)
  02d4c64  bl 0x502ea8
  02d4c68  nop
  02d4c6c  ori 4, 3, 0
  02d4c70  li 3, 3
  02d4c74  bl 0x174f80
  02d4c78  nop
  02d4c7c  lis 25, 125
  02d4c80  lis 30, 125
  02d4c84  lis 24, 125
  02d4c88  lis 26, 125
  02d4c8c  li 31, 0
  02d4c90  lis 27, 267
  02d4c94  lis 28, 267
  02d4c98  addic 25, 25, -9552
  02d4c9c  addic 30, 30, -9536
  02d4ca0  addic 26, 26, -23016
  02d4ca4  addic 24, 24, -9504
  02d4ca8  ori 29, 31, 0
  02d4cac  addic 27, 27, 24600
  02d4cb0  addic 28, 28, 24656
  02d4cb4  ori 19, 30, 0
  02d4cb8  ori 21, 25, 0
  02d4cbc  ori 20, 26, 0
  02d4cc0  ori 18, 24, 0
  02d4cc4  lwz 4, 0(30)
  02d4cc8  lwz 5, 0(26)
  02d4ccc  ori 3, 28, 0
  02d4cd0  ori 6, 27, 0
  02d4cd4  extsw 5, 5
  02d4cd8  bl 0xe915c
  02d4cdc  nop
  02d4ce0  lwz 3, 0(26)
  02d4ce4  ori 6, 28, 0
  02d4ce8  lwz 4, 0(25)
  02d4cec  li 7, 9
  02d4cf0  lwz 5, 0(24)
  02d4cf4  extsw 3, 3
  02d4cf8  bl 0x74604
  02d4cfc  nop
  02d4d00  addic 31, 31, 1
  02d4d04  addic 30, 30, 4
  02d4d08  cmpwi 31, 4
  02d4d0c  addic 26, 26, 4
  02d4d10  addic 25, 25, 4
  02d4d14  addic 24, 24, 4
  02d4d18  bt 0, 0x2d4cc4
  02d4d1c  lis 3, 267
  02d4d20  lbz 3, 24592(3)
  02d4d24  cmpwi 3, 0
  02d4d28  bf 1, 0x2d4ea0
  02d4d2c  li 3, 41
  02d4d30  bl 0x685c4
  02d4d34  nop
  02d4d38  ori 4, 3, 0
  02d4d3c  li 3, 24
  02d4d40  bl 0x174f80
  02d4d44  nop
  02d4d48  lis 30, 125
  02d4d4c  lis 3, 267
  02d4d50  addic 30, 30, -23088
  02d4d54  li 4, 2
  02d4d58  li 6, 1
  02d4d5c  lbz 3, 24592(3)
  02d4d60  lwz 5, 4(30)
  02d4d64  mullw 5, 5, 3
  02d4d68  li 3, 0
  02d4d6c  srawi 7, 5, 8
  02d4d70  li 5, 2
  02d4d74  clrldi 7, 7, 32
  02d4d78  bl 0x502ea8
  02d4d7c  nop
  02d4d80  ori 4, 3, 0
  02d4d84  li 3, 3
  02d4d88  bl 0x174f80
  02d4d8c  nop
  02d4d90  ori 31, 29, 0
  02d4d94  ori 25, 19, 0
  02d4d98  ori 24, 20, 0
  02d4d9c  addic 26, 27, 8
  02d4da0  ori 23, 21, 0
  02d4da4  ori 22, 18, 0
  02d4da8  lwz 4, 0(25)
  02d4dac  ori 3, 28, 0
  02d4db0  lwz 5, 0(24)
  02d4db4  ori 6, 26, 0
  02d4db8  extsw 5, 5
  02d4dbc  bl 0xe915c
  02d4dc0  nop
  02d4dc4  lwz 3, 0(24)
  02d4dc8  lwz 4, 0(23)
  02d4dcc  ori 6, 28, 0
  02d4dd0  li 7, 9
  02d4dd4  lwz 5, 0(22)
  02d4dd8  extsw 3, 3
  02d4ddc  bl 0x74604
  02d4de0  nop
  02d4de4  addic 31, 31, 1
  02d4de8  addic 25, 25, 4
  02d4dec  cmpwi 31, 4
  02d4df0  addic 24, 24, 4
  02d4df4  addic 23, 23, 4
  02d4df8  addic 22, 22, 4
  02d4dfc  bt 0, 0x2d4da8
  02d4e00  lis 3, 267
  02d4e04  lwz 5, 4(30)
  02d4e08  li 4, 0
  02d4e0c  li 6, 1
  02d4e10  lbz 3, 24592(3)
  02d4e14  mullw 5, 5, 3
  02d4e18  li 3, 2
  02d4e1c  srawi 7, 5, 8
  02d4e20  li 5, 2
  02d4e24  clrldi 7, 7, 32
  02d4e28  bl 0x502ea8
  02d4e2c  nop
  02d4e30  ori 4, 3, 0
  02d4e34  li 3, 3
  02d4e38  bl 0x174f80
  02d4e3c  nop
  02d4e40  ori 30, 29, 0
  02d4e44  addic 31, 27, 16
  02d4e48  lwz 4, 0(19)
  02d4e4c  ori 3, 28, 0
  02d4e50  lwz 5, 0(20)
  02d4e54  ori 6, 31, 0
  02d4e58  extsw 5, 5
  02d4e5c  bl 0xe915c
  02d4e60  nop
  02d4e64  lwz 3, 0(20)
  02d4e68  lwz 4, 0(21)
  02d4e6c  ori 6, 28, 0
  02d4e70  li 7, 9
  02d4e74  lwz 5, 0(18)
  02d4e78  extsw 3, 3
  02d4e7c  bl 0x74604
  02d4e80  nop
  02d4e84  addic 30, 30, 1
  02d4e88  addic 19, 19, 4
  02d4e8c  cmpwi 30, 4
  02d4e90  addic 20, 20, 4
  02d4e94  addic 21, 21, 4
  02d4e98  addic 18, 18, 4
  02d4e9c  bt 0, 0x2d4e48
  02d4ea0  li 3, 42
  02d4ea4  bl 0x685c4
  02d4ea8  nop
  02d4eac  ori 4, 3, 0
  02d4eb0  li 3, 24
  02d4eb4  bl 0x174f80
  02d4eb8  nop
  02d4ebc  lis 7, 125
  02d4ec0  li 3, 0
  02d4ec4  li 4, 2
  02d4ec8  li 5, 0
  02d4ecc  li 6, 1
  02d4ed0  lwz 7, -23036(7)
  02d4ed4  bl 0x502ea8
  02d4ed8  nop
  02d4edc  ori 4, 3, 0
  02d4ee0  li 3, 3
  02d4ee4  bl 0x174f80
  02d4ee8  nop
  02d4eec  lis 27, 126
  02d4ef0  lis 25, 126
  02d4ef4  lis 26, 125
  02d4ef8  lis 24, 126
  02d4efc  lis 30, 267
  02d4f00  addic 27, 27, -30768
  02d4f04  addic 25, 25, -30800
  02d4f08  addic 26, 26, 11128
  02d4f0c  addic 24, 24, -30704
  02d4f10  ori 31, 29, 0
  02d4f14  addic 30, 30, 24624
  02d4f18  ori 22, 27, 0
  02d4f1c  ori 21, 26, 0
  02d4f20  ori 20, 25, 0
  02d4f24  ori 23, 24, 0
  02d4f28  lwz 4, 0(27)
  02d4f2c  ori 3, 28, 0
  02d4f30  lwz 5, 0(26)
  02d4f34  ori 6, 30, 0
  02d4f38  extsw 5, 5
  02d4f3c  bl 0xe915c
  02d4f40  nop
  02d4f44  lwz 3, 0(26)
  02d4f48  lwz 4, 0(25)
  02d4f4c  ori 6, 28, 0
  02d4f50  li 7, 9
  02d4f54  lwz 5, 0(24)
  02d4f58  extsw 3, 3
  02d4f5c  bl 0x74604
  02d4f60  nop
  02d4f64  addic 31, 31, 1
  02d4f68  addic 27, 27, 4
  02d4f6c  cmpwi 31, 8
  02d4f70  addic 26, 26, 4
  02d4f74  addic 25, 25, 4
  02d4f78  addic 24, 24, 4
  02d4f7c  bt 0, 0x2d4f28
  02d4f80  lis 3, 125
  02d4f84  li 4, 2
  02d4f88  addic 7, 3, -23036
  02d4f8c  li 3, 0
  02d4f90  li 5, 0
  02d4f94  li 6, 1
  02d4f98  lwz 7, 4(7)
  02d4f9c  bl 0x502ea8
  02d4fa0  nop
  02d4fa4  ori 4, 3, 0
  02d4fa8  li 3, 3
  02d4fac  bl 0x174f80
  02d4fb0  nop
  02d4fb4  ori 30, 22, 0
  02d4fb8  lis 22, 267
  02d4fbc  ori 31, 29, 0
  02d4fc0  addic 22, 22, 24632
  02d4fc4  lwz 4, 0(30)
  02d4fc8  lwz 5, 0(21)
  02d4fcc  ori 3, 28, 0
  02d4fd0  ori 6, 22, 0
  02d4fd4  extsw 5, 5
  02d4fd8  bl 0xe915c
  02d4fdc  nop
  02d4fe0  lwz 3, 0(21)
  02d4fe4  ori 6, 28, 0
  02d4fe8  lwz 4, 0(20)
  02d4fec  li 7, 9
  02d4ff0  lwz 5, 0(23)
  02d4ff4  extsw 3, 3
  02d4ff8  bl 0x74604
  02d4ffc  nop
  02d5000  addic 31, 31, 1
  02d5004  addic 30, 30, 4
  02d5008  cmpwi 31, 8
  02d500c  addic 21, 21, 4
  02d5010  addic 20, 20, 4
  02d5014  addic 23, 23, 4
  02d5018  bt 0, 0x2d4fc4
  02d501c  li 3, 43
  02d5020  bl 0x685c4
  02d5024  nop
  02d5028  ori 4, 3, 0
  02d502c  li 3, 24
  02d5030  bl 0x174f80
  02d5034  nop
  02d5038  lis 6, 125
  02d503c  li 3, 0
  02d5040  li 4, 2
  02d5044  li 5, 0
  02d5048  lwz 7, -23020(6)
  02d504c  li 6, 1
  02d5050  bl 0x502ea8
  02d5054  nop
  02d5058  ori 4, 3, 0
  02d505c  li 3, 3
  02d5060  bl 0x174f80
  02d5064  nop
  02d5068  lis 30, 125
  02d506c  lis 25, 125
  02d5070  lis 27, 125
  02d5074  lis 31, 267
  02d5078  lis 26, 125
  02d507c  addic 25, 25, 11084
  02d5080  addic 30, 30, 10996
  02d5084  addic 27, 27, -9488
  02d5088  addic 31, 31, 24640
  02d508c  addic 26, 26, 10952
  02d5090  lwz 4, 0(30)
  02d5094  ori 3, 28, 0
  02d5098  lwz 5, 0(27)
  02d509c  ori 6, 31, 0
  02d50a0  extsw 5, 5
  02d50a4  bl 0xe915c
  02d50a8  nop
  02d50ac  lwz 3, 0(27)
  02d50b0  lwz 4, 0(26)
  02d50b4  ori 6, 28, 0
  02d50b8  li 7, 9
  02d50bc  lwz 5, 0(25)
  02d50c0  extsw 3, 3
  02d50c4  bl 0x74604
  02d50c8  nop
  02d50cc  addic 29, 29, 1
  02d50d0  addic 30, 30, 4
  02d50d4  cmpwi 29, 11
  02d50d8  addic 27, 27, 4
  02d50dc  addic 26, 26, 4
  02d50e0  addic 25, 25, 4
  02d50e4  bt 0, 0x2d5090
  02d50e8  li 3, 1
  02d50ec  li 4, 5
  02d50f0  li 8, 0
  02d50f4  li 10, 2
  02d50f8  li 5, 96
  02d50fc  li 6, 3
  02d5100  li 7, 0
  02d5104  li 9, 1
  02d5108  bl 0x502f7c
  02d510c  nop
  02d5110  ori 4, 3, 0
  02d5114  li 3, 22
  02d5118  bl 0x174f80
  02d511c  nop
  02d5120  ld 0, 240(1)
  02d5124  mtlr 0
  02d5128  ld 18, 112(1)
  02d512c  ld 19, 120(1)
  02d5130  ld 20, 128(1)
  02d5134  ld 21, 136(1)
  02d5138  ld 22, 144(1)
  02d513c  ld 23, 152(1)
  02d5140  ld 24, 160(1)
  02d5144  ld 25, 168(1)
  02d5148  ld 26, 176(1)
  02d514c  ld 27, 184(1)
  02d5150  ld 28, 192(1)
  02d5154  ld 29, 200(1)
  02d5158  ld 30, 208(1)
  02d515c  ld 31, 216(1)
  02d5160  addi 1, 1, 224
  02d5164  blr

M1903_002d5170:   # 0x2d5170, 0x220 bytes
  02d5170  stdu 1, -288(1)
  02d5174  mflr 0
  02d5178  std 0, 304(1)
  02d517c  stfd 24, 224(1)
  02d5180  stfd 25, 232(1)
  02d5184  stfd 26, 240(1)
  02d5188  stfd 27, 248(1)
  02d518c  stfd 28, 256(1)
  02d5190  stfd 29, 264(1)
  02d5194  stfd 30, 272(1)
  02d5198  stfd 31, 280(1)
  02d519c  std 19, 120(1)
  02d51a0  li 19, 0
  02d51a4  cmpwi 4, 0
  02d51a8  std 28, 192(1)
  02d51ac  fmr 28, 1
  02d51b0  std 25, 168(1)
  02d51b4  ori 28, 3, 0
  02d51b8  fmr 29, 2
  02d51bc  std 29, 200(1)
  02d51c0  ori 25, 19, 0
  02d51c4  fmr 30, 3
  02d51c8  std 30, 208(1)
  02d51cc  ori 29, 4, 0
  02d51d0  fmr 31, 4
  02d51d4  std 31, 216(1)
  02d51d8  ori 30, 5, 0
  02d51dc  std 27, 184(1)
  02d51e0  std 26, 176(1)
  02d51e4  std 24, 160(1)
  02d51e8  std 23, 152(1)
  02d51ec  std 22, 144(1)
  02d51f0  std 21, 136(1)
  02d51f4  std 20, 128(1)
  02d51f8  ori 31, 10, 0
  02d51fc  bf 1, 0x2d532c
  02d5200  lis 3, 45
  02d5204  ori 26, 30, 0
  02d5208  addi 3, 3, 20840
  02d520c  ori 27, 19, 0
  02d5210  lfs 24, 0(3)
  02d5214  lwz 3, 0(26)
  02d5218  ori 20, 25, 0
  02d521c  cmpwi 3, 0
  02d5220  bf 1, 0x2d5318
  02d5224  ori 24, 25, 0
  02d5228  lwzx 3, 28, 27
  02d522c  cmpwi 31, 0
  02d5230  lwzx 23, 3, 24
  02d5234  clrlwi 3, 23, 24
  02d5238  rlwinm 21, 23, 24, 24, 31
  02d523c  rlwinm 22, 23, 16, 24, 31
  02d5240  srwi 23, 23, 24
  02d5244  bf 2, 0x2d5284
  02d5248  bl 0x502730
  02d524c  nop
  02d5250  ori 3, 21, 0
  02d5254  fmr 27, 1
  02d5258  bl 0x502730
  02d525c  nop
  02d5260  ori 3, 22, 0
  02d5264  fmr 25, 1
  02d5268  bl 0x502730
  02d526c  nop
  02d5270  fmr 26, 1
  02d5274  ori 3, 23, 0
  02d5278  bl 0x502730
  02d527c  nop
  02d5280  b 0x2d529c
  02d5284  ori 3, 23, 0
  02d5288  bl 0x502730
  02d528c  nop
  02d5290  fmr 25, 24
  02d5294  fmr 26, 25
  02d5298  fmr 27, 26
  02d529c  fmuls 2, 27, 28
  02d52a0  fmuls 27, 1, 31
  02d52a4  fmuls 26, 26, 30
  02d52a8  fmuls 25, 25, 29
  02d52ac  fmr 1, 2
  02d52b0  bl 0x502758
  02d52b4  nop
  02d52b8  ori 23, 3, 0
  02d52bc  fmr 1, 27
  02d52c0  bl 0x502758
  02d52c4  nop
  02d52c8  ori 22, 3, 0
  02d52cc  fmr 1, 26
  02d52d0  bl 0x502758
  02d52d4  nop
  02d52d8  slwi 4, 22, 24
  02d52dc  slwi 3, 3, 16
  02d52e0  fmr 1, 25
  02d52e4  addc 22, 4, 3
  02d52e8  bl 0x502758
  02d52ec  nop
  02d52f0  slwi 3, 3, 8
  02d52f4  lwzx 4, 28, 27
  02d52f8  addic 20, 20, 1
  02d52fc  addc 3, 22, 3
  02d5300  addc 3, 3, 23
  02d5304  stwx 3, 4, 24
  02d5308  lwzx 3, 30, 27
  02d530c  addic 24, 24, 4
  02d5310  cmpw 20, 3
  02d5314  bt 0, 0x2d5228
  02d5318  addic 19, 19, 1
  02d531c  addic 26, 26, 4
  02d5320  cmpw 19, 29
  02d5324  addic 27, 27, 4
  02d5328  bt 0, 0x2d5214
  02d532c  ld 0, 304(1)
  02d5330  mtlr 0
  02d5334  lfd 24, 224(1)
  02d5338  lfd 25, 232(1)
  02d533c  lfd 26, 240(1)
  02d5340  lfd 27, 248(1)
  02d5344  lfd 28, 256(1)
  02d5348  lfd 29, 264(1)
  02d534c  lfd 30, 272(1)
  02d5350  lfd 31, 280(1)
  02d5354  ld 19, 120(1)
  02d5358  ld 20, 128(1)
  02d535c  ld 21, 136(1)
  02d5360  ld 22, 144(1)
  02d5364  ld 23, 152(1)
  02d5368  ld 24, 160(1)
  02d536c  ld 25, 168(1)
  02d5370  ld 26, 176(1)
  02d5374  ld 27, 184(1)
  02d5378  ld 28, 192(1)
  02d537c  ld 29, 200(1)
  02d5380  ld 30, 208(1)
  02d5384  ld 31, 216(1)
  02d5388  addi 1, 1, 288
  02d538c  blr

M1903_002d53b8:   # 0x2d53b8, 0x14c bytes
  02d53b8  lis 5, 114
  02d53bc  lfs 5, 0(6)
  02d53c0  lis 4, 45
  02d53c4  addi 4, 4, 21392
  02d53c8  lfs 4, -3036(5)
  02d53cc  fmadds 5, 4, 1, 5
  02d53d0  lfs 1, 4(6)
  02d53d4  stfs 5, 0(6)
  02d53d8  lfs 4, 0(4)
  02d53dc  fcmpu 0, 5, 4
  02d53e0  cror 6, 0, 2
  02d53e4  bt 6, 0x2d53f4
  02d53e8  lfs 6, 4(4)
  02d53ec  fsubs 5, 5, 6
  02d53f0  stfs 5, 0(6)
  02d53f4  lfs 6, 8(4)
  02d53f8  fcmpu 0, 5, 6
  02d53fc  cror 6, 1, 2
  02d5400  bt 6, 0x2d5410
  02d5404  lfs 7, 4(4)
  02d5408  fadds 5, 5, 7
  02d540c  stfs 5, 0(6)
  02d5410  lis 5, 114
  02d5414  lfs 7, -3036(5)
  02d5418  fmadds 1, 7, 2, 1
  02d541c  fcmpu 0, 1, 4
  02d5420  stfs 1, 4(6)
  02d5424  cror 6, 0, 2
  02d5428  bt 6, 0x2d5438
  02d542c  lfs 2, 4(4)
  02d5430  fsubs 1, 1, 2
  02d5434  stfs 1, 4(6)
  02d5438  fcmpu 0, 1, 6
  02d543c  cror 6, 1, 2
  02d5440  bt 6, 0x2d5450
  02d5444  lfs 2, 4(4)
  02d5448  fadds 1, 1, 2
  02d544c  stfs 1, 4(6)
  02d5450  lfs 1, 12(4)
  02d5454  lfs 2, 16(4)
  02d5458  fmuls 5, 5, 1
  02d545c  lfs 4, 20(4)
  02d5460  lfs 8, 24(4)
  02d5464  fsubs 6, 2, 5
  02d5468  fsubs 7, 4, 5
  02d546c  fsub 9, 5, 6
  02d5470  fsel 5, 9, 6, 5
  02d5474  lfs 6, 28(4)
  02d5478  fsub 9, 7, 5
  02d547c  fsel 5, 9, 7, 5
  02d5480  lfs 7, 32(4)
  02d5484  lfs 9, 36(4)
  02d5488  fmuls 10, 5, 5
  02d548c  fmuls 11, 10, 5
  02d5490  fmuls 12, 10, 11
  02d5494  fmadds 5, 11, 8, 5
  02d5498  fmuls 11, 10, 12
  02d549c  fmadds 5, 12, 6, 5
  02d54a0  fmuls 10, 10, 11
  02d54a4  fmadds 5, 11, 7, 5
  02d54a8  fmadds 5, 10, 9, 5
  02d54ac  fmuls 5, 5, 3
  02d54b0  stfs 5, 0(3)
  02d54b4  lfs 5, 4(6)
  02d54b8  fmuls 1, 5, 1
  02d54bc  fsubs 2, 2, 1
  02d54c0  fsubs 4, 4, 1
  02d54c4  fsub 5, 1, 2
  02d54c8  fsel 1, 5, 2, 1
  02d54cc  fsub 2, 4, 1
  02d54d0  fsel 1, 2, 4, 1
  02d54d4  fmuls 2, 1, 1
  02d54d8  fmuls 4, 2, 1
  02d54dc  fmuls 5, 2, 4
  02d54e0  fmadds 1, 4, 8, 1
  02d54e4  fmuls 4, 2, 5
  02d54e8  fmadds 1, 5, 6, 1
  02d54ec  fmuls 2, 2, 4
  02d54f0  fmadds 1, 4, 7, 1
  02d54f4  fmadds 1, 2, 9, 1
  02d54f8  fmuls 1, 1, 3
  02d54fc  stfs 1, 4(3)
  02d5500  blr

M1903_002d5510:   # 0x2d5510, 0xb8 bytes
  02d5510  lis 4, 267
  02d5514  sldi 3, 3, 3
  02d5518  lis 5, 114
  02d551c  lis 6, 125
  02d5520  addic 4, 4, 24600
  02d5524  extsw 3, 3
  02d5528  addic 6, 6, -23076
  02d552c  lfs 3, -3036(5)
  02d5530  lis 5, 45
  02d5534  lfsx 4, 4, 3
  02d5538  lfsx 1, 6, 3
  02d553c  addi 5, 5, 21764
  02d5540  fmadds 4, 1, 3, 4
  02d5544  stfsx 4, 4, 3
  02d5548  lfs 2, 0(5)
  02d554c  fcmpu 0, 4, 2
  02d5550  cror 6, 0, 2
  02d5554  bt 6, 0x2d5560
  02d5558  fsubs 4, 4, 2
  02d555c  stfsx 4, 4, 3
  02d5560  lis 5, 45
  02d5564  addi 5, 5, 21764
  02d5568  lfs 1, 4(5)
  02d556c  fcmpu 0, 4, 1
  02d5570  cror 6, 1, 2
  02d5574  bt 6, 0x2d5580
  02d5578  fadds 4, 4, 2
  02d557c  stfsx 4, 4, 3
  02d5580  lis 5, 125
  02d5584  addc 4, 4, 3
  02d5588  addic 5, 5, -23072
  02d558c  lfs 4, 4(4)
  02d5590  lfsx 5, 5, 3
  02d5594  fmadds 3, 5, 3, 4
  02d5598  fcmpu 0, 3, 2
  02d559c  stfs 3, 4(4)
  02d55a0  cror 6, 0, 2
  02d55a4  bt 6, 0x2d55b0
  02d55a8  fsubs 3, 3, 2
  02d55ac  stfs 3, 4(4)
  02d55b0  fcmpu 0, 3, 1
  02d55b4  cror 6, 1, 2
  02d55b8  bt 6, 0x2d55c4
  02d55bc  fadds 1, 3, 2
  02d55c0  stfs 1, 4(4)
  02d55c4  blr

M1903_002d55d0:   # 0x2d55d0, 0xb8 bytes
  02d55d0  lis 4, 267
  02d55d4  sldi 3, 3, 3
  02d55d8  lis 5, 114
  02d55dc  lis 6, 125
  02d55e0  addic 4, 4, 24624
  02d55e4  extsw 3, 3
  02d55e8  addic 6, 6, -23052
  02d55ec  lfs 3, -3036(5)
  02d55f0  lis 5, 45
  02d55f4  lfsx 4, 4, 3
  02d55f8  lfsx 1, 6, 3
  02d55fc  addi 5, 5, 21960
  02d5600  fmadds 4, 1, 3, 4
  02d5604  stfsx 4, 4, 3
  02d5608  lfs 2, 0(5)
  02d560c  fcmpu 0, 4, 2
  02d5610  cror 6, 0, 2
  02d5614  bt 6, 0x2d5620
  02d5618  fsubs 4, 4, 2
  02d561c  stfsx 4, 4, 3
  02d5620  lis 5, 45
  02d5624  addi 5, 5, 21960
  02d5628  lfs 1, 4(5)
  02d562c  fcmpu 0, 4, 1
  02d5630  cror 6, 1, 2
  02d5634  bt 6, 0x2d5640
  02d5638  fadds 4, 4, 2
  02d563c  stfsx 4, 4, 3
  02d5640  lis 5, 125
  02d5644  addc 4, 4, 3
  02d5648  addic 5, 5, -23048
  02d564c  lfs 4, 4(4)
  02d5650  lfsx 5, 5, 3
  02d5654  fmadds 3, 5, 3, 4
  02d5658  fcmpu 0, 3, 2
  02d565c  stfs 3, 4(4)
  02d5660  cror 6, 0, 2
  02d5664  bt 6, 0x2d5670
  02d5668  fsubs 3, 3, 2
  02d566c  stfs 3, 4(4)
  02d5670  fcmpu 0, 3, 1
  02d5674  cror 6, 1, 2
  02d5678  bt 6, 0x2d5684
  02d567c  fadds 1, 3, 2
  02d5680  stfs 1, 4(4)
  02d5684  blr

M1903_002d5690:   # 0x2d5690, 0xb8 bytes
  02d5690  lis 4, 267
  02d5694  sldi 3, 3, 3
  02d5698  lis 5, 114
  02d569c  lis 6, 125
  02d56a0  addic 4, 4, 24640
  02d56a4  extsw 3, 3
  02d56a8  addic 6, 6, -23028
  02d56ac  lfs 3, -3036(5)
  02d56b0  lis 5, 45
  02d56b4  lfsx 4, 4, 3
  02d56b8  lfsx 1, 6, 3
  02d56bc  addi 5, 5, 22152
  02d56c0  fmadds 4, 1, 3, 4
  02d56c4  stfsx 4, 4, 3
  02d56c8  lfs 2, 0(5)
  02d56cc  fcmpu 0, 4, 2
  02d56d0  cror 6, 0, 2
  02d56d4  bt 6, 0x2d56e0
  02d56d8  fsubs 4, 4, 2
  02d56dc  stfsx 4, 4, 3
  02d56e0  lis 5, 45
  02d56e4  addi 5, 5, 22152
  02d56e8  lfs 1, 4(5)
  02d56ec  fcmpu 0, 4, 1
  02d56f0  cror 6, 1, 2
  02d56f4  bt 6, 0x2d5700
  02d56f8  fadds 4, 4, 2
  02d56fc  stfsx 4, 4, 3
  02d5700  lis 5, 125
  02d5704  addc 4, 4, 3
  02d5708  addic 5, 5, -23024
  02d570c  lfs 4, 4(4)
  02d5710  lfsx 5, 5, 3
  02d5714  fmadds 3, 5, 3, 4
  02d5718  fcmpu 0, 3, 2
  02d571c  stfs 3, 4(4)
  02d5720  cror 6, 0, 2
  02d5724  bt 6, 0x2d5730
  02d5728  fsubs 3, 3, 2
  02d572c  stfs 3, 4(4)
  02d5730  fcmpu 0, 3, 1
  02d5734  cror 6, 1, 2
  02d5738  bt 6, 0x2d5744
  02d573c  fadds 1, 3, 2
  02d5740  stfs 1, 4(4)
  02d5744  blr

UpdateMoby_1903:   # 0x2d5780, 0x350 bytes
  02d5780  stdu 1, -176(1)
  02d5784  mflr 0
  02d5788  std 0, 192(1)
  02d578c  stfd 29, 152(1)
  02d5790  stfd 30, 160(1)
  02d5794  stfd 31, 168(1)
  02d5798  std 31, 144(1)
  02d579c  ori 31, 3, 0
  02d57a0  lbz 3, 32(3)
  02d57a4  cmpwi 3, 0
  02d57a8  cmpwi 1, 3, 1
  02d57ac  std 30, 136(1)
  02d57b0  std 29, 128(1)
  02d57b4  cmpwi 6, 3, -1
  02d57b8  bt 1, 0x2d57c4
  02d57bc  bf 25, 0x2d5aa8
  02d57c0  b 0x2d57cc
  02d57c4  bf 5, 0x2d5914
  02d57c8  b 0x2d5aa8
  02d57cc  lis 3, 267
  02d57d0  lwz 3, 24596(3)
  02d57d4  cmpwi 3, 0
  02d57d8  bf 2, 0x2d5880
  02d57dc  lis 3, 45
  02d57e0  lis 5, 125
  02d57e4  addi 30, 3, 22344
  02d57e8  lis 3, 125
  02d57ec  addic 5, 5, -23016
  02d57f0  addic 3, 3, -9504
  02d57f4  li 4, 4
  02d57f8  lfs 31, 0(30)
  02d57fc  li 10, 1
  02d5800  lfs 30, 4(30)
  02d5804  lfs 29, 12(30)
  02d5808  lfs 3, 8(30)
  02d580c  fmr 1, 31
  02d5810  fmr 2, 30
  02d5814  fmr 4, 29
  02d5818  bl 0x2d5170
  02d581c  lis 3, 125
  02d5820  fmr 1, 29
  02d5824  lis 5, 125
  02d5828  fmr 2, 29
  02d582c  addic 3, 3, 11084
  02d5830  fmr 3, 29
  02d5834  li 4, 11
  02d5838  fmr 4, 30
  02d583c  li 10, 1
  02d5840  addic 5, 5, -9488
  02d5844  bl 0x2d5170
  02d5848  lis 3, 126
  02d584c  lfs 1, 16(30)
  02d5850  lis 5, 125
  02d5854  fmr 4, 31
  02d5858  addic 3, 3, -30704
  02d585c  fmr 2, 1
  02d5860  li 10, 1
  02d5864  fmr 3, 1
  02d5868  addic 5, 5, 11128
  02d586c  li 4, 8
  02d5870  bl 0x2d5170
  02d5874  lis 3, 267
  02d5878  li 4, 1
  02d587c  stw 4, 24596(3)
  02d5880  lis 3, 267
  02d5884  li 8, 1
  02d5888  vspltisw 2, 0
  02d588c  li 4, 0
  02d5890  addic 6, 3, 24600
  02d5894  lis 5, 267
  02d5898  stb 8, 32(31)
  02d589c  stw 4, 24600(3)
  02d58a0  addic 9, 5, 24648
  02d58a4  lis 7, 267
  02d58a8  stw 4, 4(6)
  02d58ac  stw 4, 8(6)
  02d58b0  lis 10, 267
  02d58b4  stw 4, 12(6)
  02d58b8  li 11, 24628
  02d58bc  lis 3, 45
  02d58c0  stw 4, 16(6)
  02d58c4  addic 8, 7, 24624
  02d58c8  stw 4, 20(6)
  02d58cc  addi 3, 3, 22344
  02d58d0  stw 4, 24648(5)
  02d58d4  li 31, 20
  02d58d8  stw 4, 4(9)
  02d58dc  stw 4, 24624(7)
  02d58e0  addic 12, 10, 24628
  02d58e4  stvewx 2, 11, 10
  02d58e8  lis 6, 267
  02d58ec  stw 4, 8(8)
  02d58f0  addic 5, 12, 8
  02d58f4  li 7, 24644
  02d58f8  <unknown>
  02d58fc  lis 3, 267
  02d5900  vspltw 3, 3, 0
  02d5904  stvewx 3, 0, 5
  02d5908  stw 4, 24640(6)
  02d590c  stvewx 2, 7, 3
  02d5910  b 0x2d5aa8
  02d5914  lis 29, 149
  02d5918  lis 3, 17194
  02d591c  addic 29, 29, 5056
  02d5920  lwz 4, 328(29)
  02d5924  srawi 5, 4, 31
  02d5928  srwi 6, 5, 1
  02d592c  xor 4, 6, 4
  02d5930  subc 4, 4, 5
  02d5934  cmpw 4, 3
  02d5938  bt 0, 0x2d5aa8
  02d593c  lis 3, 125
  02d5940  lis 4, 45
  02d5944  addic 30, 3, -23104
  02d5948  addi 4, 4, 22344
  02d594c  lfs 1, -23104(3)
  02d5950  addic 3, 1, 112
  02d5954  lfs 2, 4(30)
  02d5958  stfs 1, 112(1)
  02d595c  lfs 1, 8(30)
  02d5960  stfs 2, 116(1)
  02d5964  lfs 2, 12(30)
  02d5968  stfs 1, 120(1)
  02d596c  stfs 2, 124(1)
  02d5970  lfs 1, 24(4)
  02d5974  bl 0x502910
  02d5978  nop
  02d597c  cmpwi 3, 0
  02d5980  bt 0, 0x2d5aa8
  02d5984  lwz 4, 328(29)
  02d5988  lis 3, 17204
  02d598c  lfs 30, 328(29)
  02d5990  srawi 5, 4, 31
  02d5994  srwi 6, 5, 1
  02d5998  xor 4, 6, 4
  02d599c  subc 4, 4, 5
  02d59a0  cmpw 4, 3
  02d59a4  bf 1, 0x2d5aa8
  02d59a8  lfs 1, 4(30)
  02d59ac  lfs 2, 324(29)
  02d59b0  lis 3, 125
  02d59b4  fsubs 1, 2, 1
  02d59b8  lfs 3, -23104(3)
  02d59bc  lfs 2, 320(29)
  02d59c0  lfs 4, 8(30)
  02d59c4  fsubs 2, 2, 3
  02d59c8  fsubs 3, 30, 4
  02d59cc  fmuls 1, 1, 1
  02d59d0  lis 3, 45
  02d59d4  addi 3, 3, 22344
  02d59d8  fmadds 1, 2, 2, 1
  02d59dc  lfs 31, 28(3)
  02d59e0  fmadds 30, 3, 3, 1
  02d59e4  fsqrts 30, 30
  02d59e8  fcmpu 0, 30, 31
  02d59ec  bt 1, 0x2d5a7c
  02d59f0  li 3, 0
  02d59f4  bl 0x2d5510
  02d59f8  lis 3, 45
  02d59fc  lis 4, 267
  02d5a00  addi 30, 3, 22344
  02d5a04  addic 3, 4, 24600
  02d5a08  lis 6, 267
  02d5a0c  addic 3, 3, 8
  02d5a10  addic 6, 6, 24648
  02d5a14  lfs 1, 32(30)
  02d5a18  lfs 2, 36(30)
  02d5a1c  lfs 3, 40(30)
  02d5a20  bl 0x2d53b8
  02d5a24  li 3, 2
  02d5a28  bl 0x2d5510
  02d5a2c  lfs 1, 44(30)
  02d5a30  li 3, 255
  02d5a34  fcmpu 0, 30, 1
  02d5a38  bt 0, 0x2d5a74
  02d5a3c  fcmpu 0, 30, 31
  02d5a40  li 3, 0
  02d5a44  cror 6, 1, 2
  02d5a48  bt 6, 0x2d5a74
  02d5a4c  lis 3, 45
  02d5a50  fsubs 1, 30, 1
  02d5a54  addi 3, 3, 22344
  02d5a58  lfs 2, 48(3)
  02d5a5c  lfs 3, 4(3)
  02d5a60  lfs 4, 52(3)
  02d5a64  fnmsubs 1, 1, 2, 3
  02d5a68  fmuls 1, 1, 4
  02d5a6c  bl 0x502758
  02d5a70  nop
  02d5a74  lis 4, 267
  02d5a78  stb 3, 24592(4)
  02d5a7c  li 3, 0
  02d5a80  bl 0x2d5690
  02d5a84  li 3, 0
  02d5a88  bl 0x2d55d0
  02d5a8c  li 3, 1
  02d5a90  bl 0x2d55d0
  02d5a94  lis 3, 113
  02d5a98  ori 4, 31, 0
  02d5a9c  addic 3, 3, -19648
  02d5aa0  bl 0x6d720
  02d5aa4  nop
  02d5aa8  ld 0, 192(1)
  02d5aac  mtlr 0
  02d5ab0  lfd 29, 152(1)
  02d5ab4  lfd 30, 160(1)
  02d5ab8  lfd 31, 168(1)
  02d5abc  ld 29, 128(1)
  02d5ac0  ld 30, 136(1)
  02d5ac4  ld 31, 144(1)
  02d5ac8  addi 1, 1, 176
  02d5acc  blr
