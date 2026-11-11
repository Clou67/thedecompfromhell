# game/initonce.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_INITONCE:   # 0xd88e4, 0x14 bytes
  00d88e4  lis 3, 114
  00d88e8  lis 4, 1
  00d88ec  addic 3, 3, 17864
  00d88f0  stw 4, 72(3)
  00d88f4  blr

STUB_000d88f8:   # 0xd88f8, 0x4 bytes
  00d88f8  blr

???_Unused_InitOnce_RunSysCallWait:   # 0xd88fc, 0xd4 bytes
  00d88fc  stdu 1, -160(1)
  00d8900  mflr 0
  00d8904  std 0, 176(1)
  00d8908  std 31, 152(1)
  00d890c  std 28, 128(1)
  00d8910  ori 31, 4, 0
  00d8914  std 29, 136(1)
  00d8918  ori 28, 3, 0
  00d891c  ori 3, 31, 0
  00d8920  std 30, 144(1)
  00d8924  li 29, 1
  00d8928  bl 0x5031a8
  00d892c  nop
  00d8930  ori 30, 3, 0
  00d8934  li 5, 0
  00d8938  stw 28, 112(1)
  00d893c  stw 31, 120(1)
  00d8940  addic 3, 1, 112
  00d8944  li 4, 1
  00d8948  stw 30, 116(1)
  00d894c  stw 5, 124(1)
  00d8950  bl 0x5031bc
  00d8954  nop
  00d8958  ori 31, 3, 0
  00d895c  cmpwi 31, 0
  00d8960  bt 2, 0xd89ac
  00d8964  ori 3, 31, 0
  00d8968  bl 0x50315c
  00d896c  nop
  00d8970  cmpwi 3, 0
  00d8974  bf 0, 0xd8964
  00d8978  ori 3, 30, 0
  00d897c  li 4, 0
  00d8980  li 5, 0
  00d8984  bl 0x503164
  00d8988  nop
  00d898c  ori 31, 3, 0
  00d8990  ori 3, 30, 0
  00d8994  bl 0x503214
  00d8998  nop
  00d899c  li 3, 0
  00d89a0  subc 3, 31, 3
  00d89a4  rldicl 29, 3, 1, 63
  00d89a8  xori 29, 29, 1
  00d89ac  ori 3, 29, 0
  00d89b0  ld 0, 176(1)
  00d89b4  mtlr 0
  00d89b8  ld 28, 128(1)
  00d89bc  ld 29, 136(1)
  00d89c0  ld 30, 144(1)
  00d89c4  ld 31, 152(1)
  00d89c8  addi 1, 1, 160
  00d89cc  blr

InitMemSlots:   # 0xd89d0, 0x218 bytes
  00d89d0  stdu 1, -144(1)
  00d89d4  mflr 0
  00d89d8  std 0, 160(1)
  00d89dc  lis 3, 114
  00d89e0  lbz 3, 17972(3)
  00d89e4  std 31, 136(1)
  00d89e8  std 30, 128(1)
  00d89ec  std 29, 120(1)
  00d89f0  std 28, 112(1)
  00d89f4  cmpwi 3, 0
  00d89f8  bf 2, 0xd8ad4
  00d89fc  lis 29, 144
  00d8a00  lwz 29, 11980(29)
  00d8a04  ori 3, 29, 0
  00d8a08  bl 0x50436c
  00d8a0c  nop
  00d8a10  ori 31, 3, 0
  00d8a14  li 3, 36
  00d8a18  li 30, 0
  00d8a1c  ori 4, 31, 0
  00d8a20  li 5, 16
  00d8a24  bl 0x4fe27c
  00d8a28  nop
  00d8a2c  cmpwi 3, 0
  00d8a30  bt 2, 0xd8a68
  00d8a34  stw 30, 0(3)
  00d8a38  stw 30, 4(3)
  00d8a3c  lis 4, 102
  00d8a40  stw 30, 8(3)
  00d8a44  stw 30, 12(3)
  00d8a48  addic 4, 4, 5948
  00d8a4c  stb 30, 16(3)
  00d8a50  stb 30, 17(3)
  00d8a54  stw 30, 20(3)
  00d8a58  stw 30, 28(3)
  00d8a5c  stw 4, 24(3)
  00d8a60  stw 30, 32(3)
  00d8a64  ori 30, 3, 0
  00d8a68  lis 3, 161
  00d8a6c  lis 4, 236
  00d8a70  addic 6, 3, 2264
  00d8a74  ori 3, 31, 0
  00d8a78  li 5, 16
  00d8a7c  ori 4, 4, 16512
  00d8a80  stw 30, 68(6)
  00d8a84  bl 0x4fe098
  00d8a88  nop
  00d8a8c  ori 31, 3, 0
  00d8a90  lis 4, 101
  00d8a94  ori 3, 29, 0
  00d8a98  addic 28, 4, 8620
  00d8a9c  bl 0x50436c
  00d8aa0  nop
  00d8aa4  ori 8, 3, 0
  00d8aa8  lis 5, 236
  00d8aac  ori 3, 30, 0
  00d8ab0  li 7, 0
  00d8ab4  ori 4, 31, 0
  00d8ab8  ori 5, 5, 16512
  00d8abc  ori 6, 28, 0
  00d8ac0  bl 0x4fe39c
  00d8ac4  nop
  00d8ac8  lis 3, 114
  00d8acc  li 4, 1
  00d8ad0  stb 4, 17972(3)
  00d8ad4  lis 31, 161
  00d8ad8  addic 30, 31, 2264
  00d8adc  lwz 3, 68(30)
  00d8ae0  lwz 4, 0(3)
  00d8ae4  bl 0x4fe61c
  00d8ae8  nop
  00d8aec  lwz 3, 68(30)
  00d8af0  bl 0x4fe5ec
  00d8af4  nop
  00d8af8  lwz 6, 68(30)
  00d8afc  lis 4, 6
  00d8b00  stw 3, 2264(31)
  00d8b04  li 5, 128
  00d8b08  ori 3, 6, 0
  00d8b0c  ori 4, 4, 16384
  00d8b10  bl 0x4fe098
  00d8b14  nop
  00d8b18  lwz 5, 68(30)
  00d8b1c  lis 4, 6
  00d8b20  stw 3, 12(30)
  00d8b24  ori 3, 5, 0
  00d8b28  li 5, 128
  00d8b2c  bl 0x4fe098
  00d8b30  nop
  00d8b34  lwz 6, 68(30)
  00d8b38  stw 3, 16(30)
  00d8b3c  lis 4, 32
  00d8b40  ori 3, 6, 0
  00d8b44  li 5, 128
  00d8b48  bl 0x4fe098
  00d8b4c  nop
  00d8b50  stw 3, 20(30)
  00d8b54  li 5, 128
  00d8b58  lwz 6, 68(30)
  00d8b5c  lis 4, 128
  00d8b60  stw 3, 24(30)
  00d8b64  ori 3, 6, 0
  00d8b68  bl 0x4fe098
  00d8b6c  nop
  00d8b70  lwz 5, 68(30)
  00d8b74  lis 4, 16
  00d8b78  stw 3, 64(30)
  00d8b7c  ori 3, 5, 0
  00d8b80  li 5, 128
  00d8b84  bl 0x4fe098
  00d8b88  nop
  00d8b8c  lwz 6, 68(30)
  00d8b90  stw 3, 52(30)
  00d8b94  li 5, 128
  00d8b98  ori 3, 6, 0
  00d8b9c  lis 4, 16
  00d8ba0  bl 0x4fe098
  00d8ba4  nop
  00d8ba8  lwz 5, 68(30)
  00d8bac  lis 4, 16
  00d8bb0  stw 3, 56(30)
  00d8bb4  ori 3, 5, 0
  00d8bb8  li 5, 128
  00d8bbc  bl 0x4fe098
  00d8bc0  nop
  00d8bc4  stw 3, 60(30)
  00d8bc8  ld 0, 160(1)
  00d8bcc  mtlr 0
  00d8bd0  ld 28, 112(1)
  00d8bd4  ld 29, 120(1)
  00d8bd8  ld 30, 128(1)
  00d8bdc  ld 31, 136(1)
  00d8be0  addi 1, 1, 144
  00d8be4  blr

InitOnce:   # 0xd8be8, 0x7c0 bytes
  00d8be8  stdu 1, -160(1)
  00d8bec  mflr 0
  00d8bf0  std 0, 176(1)
  00d8bf4  std 31, 152(1)
  00d8bf8  lis 3, 114
  00d8bfc  lis 31, 144
  00d8c00  lwz 3, -13204(3)
  00d8c04  lwz 31, 11980(31)
  00d8c08  std 30, 144(1)
  00d8c0c  std 29, 136(1)
  00d8c10  std 28, 128(1)
  00d8c14  std 27, 120(1)
  00d8c18  cmpwi 3, 0
  00d8c1c  bt 2, 0xd9384
  00d8c20  lis 3, 114
  00d8c24  li 4, 0
  00d8c28  stw 4, -13204(3)
  00d8c2c  bl 0x503080
  00d8c30  nop
  00d8c34  li 3, 1
  00d8c38  bl 0x503070
  00d8c3c  nop
  00d8c40  li 3, 1
  00d8c44  bl 0x5031a4
  00d8c48  nop
  00d8c4c  li 3, 0
  00d8c50  bl 0x50321c
  00d8c54  nop
  00d8c58  bl 0x503114
  00d8c5c  nop
  00d8c60  bl 0x503218
  00d8c64  nop
  00d8c68  bl 0x503118
  00d8c6c  nop
  00d8c70  li 3, 6
  00d8c74  bl 0x5031fc
  00d8c78  nop
  00d8c7c  li 3, 0
  00d8c80  bl 0x5031f8
  00d8c84  nop
  00d8c88  bl 0x503204
  00d8c8c  nop
  00d8c90  bl 0x64f504
  00d8c94  ld 2, 40(1)
  00d8c98  lis 3, 150
  00d8c9c  li 4, 0
  00d8ca0  li 5, 12
  00d8ca4  li 7, 13
  00d8ca8  li 6, 9
  00d8cac  lwz 3, 27372(3)
  00d8cb0  subc 5, 5, 7
  00d8cb4  subc 3, 4, 3
  00d8cb8  li 4, 11
  00d8cbc  cntlzw 3, 3
  00d8cc0  sldi 3, 3, 58
  00d8cc4  sradi 8, 3, 63
  00d8cc8  li 3, 0
  00d8ccc  and 5, 8, 5
  00d8cd0  addc 5, 7, 5
  00d8cd4  bl 0x50307c
  00d8cd8  nop
  00d8cdc  bl 0xe9138
  00d8ce0  nop
  00d8ce4  bl 0x65670
  00d8ce8  nop
  00d8cec  lis 3, 161
  00d8cf0  addic 3, 3, 1680
  00d8cf4  bl 0x174bd8
  00d8cf8  nop
  00d8cfc  bl 0x4d04c8
  00d8d00  nop
  00d8d04  lis 3, 161
  00d8d08  lis 4, 271
  00d8d0c  addic 3, 3, 1734
  00d8d10  addic 4, 4, -29120
  00d8d14  addic 3, 3, 16383
  00d8d18  lis 6, 44
  00d8d1c  rlwinm 3, 3, 0, 0, 17
  00d8d20  lis 5, 4096
  00d8d24  lwz 7, 4804(4)
  00d8d28  addc 3, 3, 6
  00d8d2c  addic 5, 5, 0
  00d8d30  slwi 6, 7, 11
  00d8d34  clrldi 30, 3, 32
  00d8d38  subc 5, 5, 6
  00d8d3c  lwz 3, 4800(4)
  00d8d40  clrldi 29, 5, 32
  00d8d44  extsw 3, 3
  00d8d48  extsw 4, 7
  00d8d4c  ori 5, 29, 0
  00d8d50  bl 0x4d04c0
  00d8d54  nop
  00d8d58  bl 0x64f504
  00d8d5c  ld 2, 40(1)
  00d8d60  li 3, 0
  00d8d64  bl 0x503244
  00d8d68  nop
  00d8d6c  ori 3, 29, 0
  00d8d70  ori 4, 30, 0
  00d8d74  bl 0xe9150
  00d8d78  nop
  00d8d7c  li 3, 0
  00d8d80  bl 0x503244
  00d8d84  nop
  00d8d88  lis 3, 101
  00d8d8c  addic 3, 3, 8632
  00d8d90  bl 0x5cd098
  00d8d94  nop
  00d8d98  li 3, 0
  00d8d9c  bl 0x5031f8
  00d8da0  nop
  00d8da4  bl 0x11e3c0
  00d8da8  nop
  00d8dac  lis 3, 112
  00d8db0  addic 3, 3, 31056
  00d8db4  bl 0x503208
  00d8db8  nop
  00d8dbc  lis 3, 114
  00d8dc0  lis 4, 230
  00d8dc4  lis 5, 22
  00d8dc8  lbz 3, 17972(3)
  00d8dcc  stw 5, -21916(4)
  00d8dd0  cmpwi 3, 0
  00d8dd4  bf 2, 0xd8eb4
  00d8dd8  lis 29, 144
  00d8ddc  lwz 29, 11980(29)
  00d8de0  ori 3, 29, 0
  00d8de4  bl 0x50436c
  00d8de8  nop
  00d8dec  ori 30, 3, 0
  00d8df0  li 3, 36
  00d8df4  ori 4, 30, 0
  00d8df8  li 5, 16
  00d8dfc  bl 0x4fe27c
  00d8e00  nop
  00d8e04  cmpwi 3, 0
  00d8e08  li 28, 0
  00d8e0c  bt 2, 0xd8e48
  00d8e10  li 4, 0
  00d8e14  lis 5, 102
  00d8e18  ori 28, 3, 0
  00d8e1c  addic 5, 5, 5948
  00d8e20  stw 4, 0(3)
  00d8e24  stw 4, 4(3)
  00d8e28  stw 4, 8(3)
  00d8e2c  stw 4, 12(3)
  00d8e30  stb 4, 16(3)
  00d8e34  stb 4, 17(3)
  00d8e38  stw 4, 20(3)
  00d8e3c  stw 5, 24(3)
  00d8e40  stw 4, 28(3)
  00d8e44  stw 4, 32(3)
  00d8e48  lis 3, 161
  00d8e4c  lis 4, 236
  00d8e50  addic 6, 3, 2264
  00d8e54  ori 3, 30, 0
  00d8e58  ori 4, 4, 16512
  00d8e5c  li 5, 16
  00d8e60  stw 28, 68(6)
  00d8e64  bl 0x4fe098
  00d8e68  nop
  00d8e6c  ori 30, 3, 0
  00d8e70  lis 4, 101
  00d8e74  ori 3, 29, 0
  00d8e78  addic 27, 4, 8620
  00d8e7c  bl 0x50436c
  00d8e80  nop
  00d8e84  ori 8, 3, 0
  00d8e88  lis 5, 236
  00d8e8c  ori 3, 28, 0
  00d8e90  ori 6, 27, 0
  00d8e94  li 7, 0
  00d8e98  ori 4, 30, 0
  00d8e9c  ori 5, 5, 16512
  00d8ea0  bl 0x4fe39c
  00d8ea4  nop
  00d8ea8  lis 3, 114
  00d8eac  li 4, 1
  00d8eb0  stb 4, 17972(3)
  00d8eb4  lis 29, 161
  00d8eb8  addic 30, 29, 2264
  00d8ebc  lwz 3, 68(30)
  00d8ec0  lwz 4, 0(3)
  00d8ec4  bl 0x4fe61c
  00d8ec8  nop
  00d8ecc  lwz 3, 68(30)
  00d8ed0  bl 0x4fe5ec
  00d8ed4  nop
  00d8ed8  lwz 4, 68(30)
  00d8edc  stw 3, 2264(29)
  00d8ee0  lis 6, 6
  00d8ee4  ori 3, 4, 0
  00d8ee8  ori 4, 6, 16384
  00d8eec  li 5, 128
  00d8ef0  bl 0x4fe098
  00d8ef4  nop
  00d8ef8  lwz 6, 68(30)
  00d8efc  stw 3, 12(30)
  00d8f00  li 5, 128
  00d8f04  ori 3, 6, 0
  00d8f08  lis 4, 6
  00d8f0c  bl 0x4fe098
  00d8f10  nop
  00d8f14  lwz 5, 68(30)
  00d8f18  lis 4, 32
  00d8f1c  stw 3, 16(30)
  00d8f20  ori 3, 5, 0
  00d8f24  li 5, 128
  00d8f28  bl 0x4fe098
  00d8f2c  nop
  00d8f30  stw 3, 20(30)
  00d8f34  lwz 6, 68(30)
  00d8f38  lis 4, 128
  00d8f3c  stw 3, 24(30)
  00d8f40  li 5, 128
  00d8f44  ori 3, 6, 0
  00d8f48  bl 0x4fe098
  00d8f4c  nop
  00d8f50  lwz 6, 68(30)
  00d8f54  stw 3, 64(30)
  00d8f58  li 5, 128
  00d8f5c  ori 3, 6, 0
  00d8f60  lis 4, 16
  00d8f64  bl 0x4fe098
  00d8f68  nop
  00d8f6c  lwz 5, 68(30)
  00d8f70  lis 4, 16
  00d8f74  stw 3, 52(30)
  00d8f78  ori 3, 5, 0
  00d8f7c  li 5, 128
  00d8f80  bl 0x4fe098
  00d8f84  nop
  00d8f88  lwz 6, 68(30)
  00d8f8c  stw 3, 56(30)
  00d8f90  lis 4, 16
  00d8f94  ori 3, 6, 0
  00d8f98  li 5, 128
  00d8f9c  bl 0x4fe098
  00d8fa0  nop
  00d8fa4  stw 3, 60(30)
  00d8fa8  li 3, 0
  00d8fac  bl 0x5031f8
  00d8fb0  nop
  00d8fb4  bl 0x64f504
  00d8fb8  ld 2, 40(1)
  00d8fbc  lis 3, 151
  00d8fc0  lwz 3, -25488(3)
  00d8fc4  extsw 3, 3
  00d8fc8  bl 0x4d04d0
  00d8fcc  nop
  00d8fd0  bl 0x68160
  00d8fd4  nop
  00d8fd8  bl 0x668d0
  00d8fdc  nop
  00d8fe0  bl 0x174c24
  00d8fe4  nop
  00d8fe8  li 3, 0
  00d8fec  bl 0x5031f8
  00d8ff0  nop
  00d8ff4  bl 0x15bc00
  00d8ff8  nop
  00d8ffc  lis 3, 161
  00d9000  lis 4, -32640
  00d9004  addic 29, 3, 2560
  00d9008  ori 4, 4, 32896
  00d900c  li 5, 256
  00d9010  ori 3, 29, 0
  00d9014  bl 0x5001fc
  00d9018  nop
  00d901c  addic 28, 1, 112
  00d9020  li 4, 16379
  00d9024  ori 3, 28, 0
  00d9028  li 8, 0
  00d902c  li 10, 8
  00d9030  li 5, 1
  00d9034  li 6, 18
  00d9038  li 7, 0
  00d903c  li 9, 8
  00d9040  bl 0x503084
  00d9044  nop
  00d9048  li 3, 0
  00d904c  bl 0x503244
  00d9050  nop
  00d9054  ori 3, 28, 0
  00d9058  ori 4, 29, 0
  00d905c  bl 0x50306c
  00d9060  nop
  00d9064  li 3, 0
  00d9068  li 4, 0
  00d906c  bl 0x503074
  00d9070  nop
  00d9074  bl 0x4fdc0
  00d9078  nop
  00d907c  lis 3, 146
  00d9080  lis 4, 146
  00d9084  li 6, 130
  00d9088  li 5, 0
  00d908c  lwz 3, 29188(3)
  00d9090  lwz 4, 29184(4)
  00d9094  stw 6, 0(3)
  00d9098  stw 5, 0(4)
  00d909c  bl 0x1655a0
  00d90a0  nop
  00d90a4  bl 0x720a0
  00d90a8  nop
  00d90ac  bl 0x64f504
  00d90b0  ld 2, 40(1)
  00d90b4  lis 3, 144
  00d90b8  std 2, 40(1)
  00d90bc  lwz 3, 11980(3)
  00d90c0  lwz 4, 0(3)
  00d90c4  lwz 4, 12(4)
  00d90c8  lwz 5, 0(4)
  00d90cc  lwz 2, 4(4)
  00d90d0  mtctr 5
  00d90d4  bcctrl 20, 30
  00d90d8  lis 4, 144
  00d90dc  ld 2, 40(1)
  00d90e0  ori 28, 3, 0
  00d90e4  lwz 29, 11984(4)
  00d90e8  lwz 29, 192(29)
  00d90ec  cmpwi 29, 1
  00d90f0  bf 2, 0xd918c
  00d90f4  cmpwi 28, 5
  00d90f8  bt 2, 0xd9150
  00d90fc  cmpwi 28, 4
  00d9100  bt 2, 0xd9140
  00d9104  cmpwi 28, 3
  00d9108  bt 2, 0xd9130
  00d910c  cmpwi 28, 2
  00d9110  bt 2, 0xd9120
  00d9114  cmpwi 28, 1
  00d9118  bt 2, 0xd9170
  00d911c  b 0xd9160
  00d9120  lis 3, 151
  00d9124  li 4, 2
  00d9128  stw 4, -25484(3)
  00d912c  b 0xd918c
  00d9130  lis 3, 151
  00d9134  li 4, 4
  00d9138  stw 4, -25484(3)
  00d913c  b 0xd918c
  00d9140  lis 3, 151
  00d9144  li 4, 3
  00d9148  stw 4, -25484(3)
  00d914c  b 0xd918c
  00d9150  lis 3, 151
  00d9154  li 4, 5
  00d9158  stw 4, -25484(3)
  00d915c  b 0xd918c
  00d9160  lis 3, 101
  00d9164  addic 3, 3, 8656
  00d9168  bl 0x5cd098
  00d916c  nop
  00d9170  lis 3, 151
  00d9174  li 4, 0
  00d9178  lis 5, 346
  00d917c  lis 6, 346
  00d9180  stw 4, -25484(3)
  00d9184  stb 4, -15536(5)
  00d9188  stb 4, -15535(6)
  00d918c  cmpwi 29, 0
  00d9190  bf 2, 0xd9208
  00d9194  cmpwi 28, 1
  00d9198  bt 1, 0xd91a8
  00d919c  cmpwi 28, 0
  00d91a0  bf 1, 0xd91dc
  00d91a4  b 0xd91ec
  00d91a8  cmpwi 28, 2
  00d91ac  bf 1, 0xd91bc
  00d91b0  cmpwi 28, 3
  00d91b4  bf 1, 0xd91cc
  00d91b8  b 0xd91dc
  00d91bc  lis 3, 151
  00d91c0  li 4, 2
  00d91c4  stw 4, -25484(3)
  00d91c8  b 0xd9208
  00d91cc  lis 3, 151
  00d91d0  li 4, 4
  00d91d4  stw 4, -25484(3)
  00d91d8  b 0xd9208
  00d91dc  lis 3, 101
  00d91e0  addic 3, 3, 8656
  00d91e4  bl 0x5cd098
  00d91e8  nop
  00d91ec  lis 3, 151
  00d91f0  li 4, 0
  00d91f4  lis 5, 346
  00d91f8  lis 6, 346
  00d91fc  stw 4, -25484(3)
  00d9200  stb 4, -15536(5)
  00d9204  stb 4, -15535(6)
  00d9208  cmpwi 29, 3
  00d920c  bf 2, 0xd9234
  00d9210  lis 3, 151
  00d9214  li 4, 6
  00d9218  lis 5, 346
  00d921c  li 6, 0
  00d9220  lis 7, 346
  00d9224  stw 4, -25484(3)
  00d9228  li 3, 1
  00d922c  stb 6, -15536(5)
  00d9230  stb 3, -15535(7)
  00d9234  bl 0x64f504
  00d9238  ld 2, 40(1)
  00d923c  ori 3, 31, 0
  00d9240  bl 0x50436c
  00d9244  nop
  00d9248  lis 4, 4
  00d924c  li 5, 128
  00d9250  bl 0x4fe098
  00d9254  nop
  00d9258  stw 3, 84(30)
  00d925c  ori 3, 31, 0
  00d9260  bl 0x50436c
  00d9264  nop
  00d9268  lis 4, 48
  00d926c  li 5, 128
  00d9270  bl 0x4fe098
  00d9274  nop
  00d9278  stw 3, 72(30)
  00d927c  ori 3, 31, 0
  00d9280  bl 0x50436c
  00d9284  nop
  00d9288  lis 4, 48
  00d928c  li 5, 128
  00d9290  bl 0x4fe098
  00d9294  nop
  00d9298  addic 29, 31, 124
  00d929c  stw 3, 80(30)
  00d92a0  lis 4, 48
  00d92a4  ori 3, 29, 0
  00d92a8  li 5, 128
  00d92ac  bl 0x4fe098
  00d92b0  nop
  00d92b4  stw 3, 76(30)
  00d92b8  lis 4, 16
  00d92bc  ori 3, 29, 0
  00d92c0  li 5, 128
  00d92c4  bl 0x4fe098
  00d92c8  nop
  00d92cc  lis 4, 162
  00d92d0  stw 3, 88(30)
  00d92d4  li 30, 0
  00d92d8  addic 28, 4, 1216
  00d92dc  ori 3, 29, 0
  00d92e0  lis 4, 48
  00d92e4  li 5, 128
  00d92e8  stw 30, 844(28)
  00d92ec  bl 0x4fe098
  00d92f0  nop
  00d92f4  stw 3, 848(28)
  00d92f8  lis 4, 4
  00d92fc  ori 3, 29, 0
  00d9300  li 5, 128
  00d9304  bl 0x4fe098
  00d9308  nop
  00d930c  stw 3, 852(28)
  00d9310  stw 30, 856(28)
  00d9314  ori 3, 31, 0
  00d9318  stw 30, 860(28)
  00d931c  bl 0x50436c
  00d9320  nop
  00d9324  lis 4, 0
  00d9328  li 5, 32
  00d932c  ori 4, 4, 32768
  00d9330  bl 0x4fe098
  00d9334  nop
  00d9338  lis 4, 151
  00d933c  stw 3, 12(28)
  00d9340  lis 3, 161
  00d9344  addic 5, 4, -13820
  00d9348  addic 28, 3, 24396
  00d934c  ori 3, 31, 0
  00d9350  stw 30, -13820(4)
  00d9354  stw 30, 4(5)
  00d9358  bl 0x50436c
  00d935c  nop
  00d9360  ori 4, 3, 0
  00d9364  ori 3, 28, 0
  00d9368  ori 5, 29, 0
  00d936c  bl 0x508578
  00d9370  nop
  00d9374  bl 0xe7ac8
  00d9378  nop
  00d937c  bl 0x13d22c
  00d9380  nop
  00d9384  ld 0, 176(1)
  00d9388  mtlr 0
  00d938c  ld 27, 120(1)
  00d9390  ld 28, 128(1)
  00d9394  ld 29, 136(1)
  00d9398  ld 30, 144(1)
  00d939c  ld 31, 152(1)
  00d93a0  addi 1, 1, 160
  00d93a4  blr
