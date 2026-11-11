# sdk/xUnk5.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_005e6a10:   # 0x5e6a10, 0x58 bytes
  05e6a10  stdu 1, -144(1)
  05e6a14  mflr 0
  05e6a18  std 29, 120(1)
  05e6a1c  mr 29, 3
  05e6a20  li 3, 1
  05e6a24  std 0, 160(1)
  05e6a28  std 28, 112(1)
  05e6a2c  bl 0x5cbbec
  05e6a30  nop
  05e6a34  lwz 9, -23384(2)
  05e6a38  li 3, 1
  05e6a3c  lwz 28, 0(9)
  05e6a40  stw 29, 0(9)
  05e6a44  bl 0x5cbb70
  05e6a48  nop
  05e6a4c  ld 0, 160(1)
  05e6a50  ld 29, 120(1)
  05e6a54  clrldi 3, 28, 32
  05e6a58  mtlr 0
  05e6a5c  ld 28, 112(1)
  05e6a60  addi 1, 1, 144
  05e6a64  blr

FUN_005e6a68:   # 0x5e6a68, 0x58 bytes
  05e6a68  stdu 1, -144(1)
  05e6a6c  mflr 0
  05e6a70  std 29, 120(1)
  05e6a74  mr 29, 3
  05e6a78  li 3, 1
  05e6a7c  std 0, 160(1)
  05e6a80  std 28, 112(1)
  05e6a84  bl 0x5cbbec
  05e6a88  nop
  05e6a8c  lwz 9, -23380(2)
  05e6a90  li 3, 1
  05e6a94  lwz 28, 0(9)
  05e6a98  stw 29, 0(9)
  05e6a9c  bl 0x5cbb70
  05e6aa0  nop
  05e6aa4  ld 0, 160(1)
  05e6aa8  ld 29, 120(1)
  05e6aac  clrldi 3, 28, 32
  05e6ab0  mtlr 0
  05e6ab4  ld 28, 112(1)
  05e6ab8  addi 1, 1, 144
  05e6abc  blr

FUN_005e6ac0:   # 0x5e6ac0, 0x10 bytes
  05e6ac0  lis 4, 102
  05e6ac4  addic 4, 4, 5960
  05e6ac8  stw 4, 0(3)
  05e6acc  blr

FUN_005e6ad0:   # 0x5e6ad0, 0x10 bytes
  05e6ad0  lis 4, 102
  05e6ad4  addic 4, 4, 25616
  05e6ad8  stw 4, 0(3)
  05e6adc  blr

FUN_005e6ae0:   # 0x5e6ae0, 0x10 bytes
  05e6ae0  lis 4, 102
  05e6ae4  addic 4, 4, 5904
  05e6ae8  stw 4, 0(3)
  05e6aec  blr

FUN_005e6af0:   # 0x5e6af0, 0x320 bytes
  05e6af0  stdu 1, -672(1)
  05e6af4  mflr 0
  05e6af8  std 0, 688(1)
  05e6afc  std 31, 664(1)
  05e6b00  ori 31, 3, 0
  05e6b04  li 3, 0
  05e6b08  lis 5, 0
  05e6b0c  lis 7, 27770
  05e6b10  ori 5, 5, 32768
  05e6b14  lwz 6, 20(31)
  05e6b18  cmpwi 4, 0
  05e6b1c  std 30, 656(1)
  05e6b20  stb 3, 16(31)
  05e6b24  ori 30, 4, 0
  05e6b28  rlwimi 6, 3, 24, 0, 7
  05e6b2c  stw 3, 11264(31)
  05e6b30  stw 3, 16(31)
  05e6b34  ori 4, 7, 28001
  05e6b38  rlwimi 6, 3, 16, 8, 15
  05e6b3c  stb 3, 20(31)
  05e6b40  stb 3, 21(31)
  05e6b44  or 5, 6, 5
  05e6b48  lis 6, 102
  05e6b4c  rlwimi 5, 3, 0, 17, 17
  05e6b50  addic 6, 6, 6124
  05e6b54  ori 5, 5, 8192
  05e6b58  rlwimi 5, 3, 0, 19, 19
  05e6b5c  stw 6, 0(31)
  05e6b60  ori 5, 5, 2048
  05e6b64  rlwimi 5, 3, 0, 21, 21
  05e6b68  stw 5, 20(31)
  05e6b6c  std 29, 648(1)
  05e6b70  stw 4, 4(31)
  05e6b74  bt 2, 0x5e6c48
  05e6b78  li 4, 15
  05e6b7c  lis 6, 1
  05e6b80  li 9, 0
  05e6b84  li 10, -1
  05e6b88  stb 4, 112(1)
  05e6b8c  stb 4, 113(1)
  05e6b90  addic 3, 1, 128
  05e6b94  stb 4, 114(1)
  05e6b98  addic 7, 1, 112
  05e6b9c  stb 4, 115(1)
  05e6ba0  lis 5, 51
  05e6ba4  stb 4, 116(1)
  05e6ba8  li 8, 8
  05e6bac  stb 4, 117(1)
  05e6bb0  stb 4, 118(1)
  05e6bb4  stb 4, 119(1)
  05e6bb8  stw 6, 12(31)
  05e6bbc  stw 6, 8(31)
  05e6bc0  li 4, 1
  05e6bc4  stb 9, 11992(31)
  05e6bc8  li 6, 0
  05e6bcc  stw 10, 11988(31)
  05e6bd0  stw 9, 11984(31)
  05e6bd4  stw 9, 11980(31)
  05e6bd8  stw 9, 11976(31)
  05e6bdc  stw 9, 11972(31)
  05e6be0  bl 0x64fa04
  05e6be4  ld 2, 40(1)
  05e6be8  cmpwi 3, 0
  05e6bec  bt 2, 0x5e6bf8
  05e6bf0  li 3, 0
  05e6bf4  b 0x5e6c48
  05e6bf8  lis 4, 102
  05e6bfc  addic 3, 1, 128
  05e6c00  addic 4, 4, 6092
  05e6c04  bl 0x64fb64
  05e6c08  ld 2, 40(1)
  05e6c0c  cmpwi 3, 0
  05e6c10  bt 2, 0x5e6c1c
  05e6c14  li 3, 0
  05e6c18  b 0x5e6c48
  05e6c1c  addic 29, 31, 4224
  05e6c20  ori 3, 30, 0
  05e6c24  addic 5, 1, 128
  05e6c28  ori 4, 29, 0
  05e6c2c  bl 0x64fc84
  05e6c30  ld 2, 40(1)
  05e6c34  cmpwi 3, 0
  05e6c38  bt 2, 0x5e6c44
  05e6c3c  li 3, 0
  05e6c40  b 0x5e6c48
  05e6c44  ori 3, 29, 0
  05e6c48  li 4, 0
  05e6c4c  lwz 7, 20(31)
  05e6c50  lis 5, 0
  05e6c54  rlwimi 7, 4, 24, 0, 7
  05e6c58  ori 5, 5, 32768
  05e6c5c  rlwimi 7, 4, 16, 8, 15
  05e6c60  stw 4, 11264(31)
  05e6c64  li 6, -1
  05e6c68  or 5, 7, 5
  05e6c6c  stw 30, 11972(31)
  05e6c70  stw 3, 11976(31)
  05e6c74  lis 8, 1
  05e6c78  rlwimi 5, 4, 0, 17, 17
  05e6c7c  stw 4, 11980(31)
  05e6c80  stw 4, 11984(31)
  05e6c84  cmpwi 1, 3, 0
  05e6c88  ori 5, 5, 8192
  05e6c8c  stw 6, 11988(31)
  05e6c90  stb 4, 11992(31)
  05e6c94  cmpwi 30, 0
  05e6c98  rlwimi 5, 4, 0, 19, 19
  05e6c9c  stw 8, 8(31)
  05e6ca0  stb 4, 16(31)
  05e6ca4  cror 2, 2, 6
  05e6ca8  ori 3, 5, 2048
  05e6cac  stw 8, 12(31)
  05e6cb0  stw 4, 16(31)
  05e6cb4  rlwimi 3, 4, 0, 21, 21
  05e6cb8  stb 4, 20(31)
  05e6cbc  stb 4, 21(31)
  05e6cc0  stw 3, 20(31)
  05e6cc4  bt 2, 0x5e6df4
  05e6cc8  lwz 4, 0(31)
  05e6ccc  ori 3, 31, 0
  05e6cd0  std 2, 40(1)
  05e6cd4  lwz 4, 24(4)
  05e6cd8  lwz 5, 0(4)
  05e6cdc  lwz 2, 4(4)
  05e6ce0  mtctr 5
  05e6ce4  bcctrl 20, 30
  05e6ce8  cmplwi 3, 4096
  05e6cec  ld 2, 40(1)
  05e6cf0  bt 1, 0x5e6df4
  05e6cf4  addic 30, 31, 10624
  05e6cf8  lwz 3, 11972(31)
  05e6cfc  li 4, 0
  05e6d00  ori 5, 30, 0
  05e6d04  li 6, 0
  05e6d08  li 7, 1
  05e6d0c  bl 0x64fb24
  05e6d10  ld 2, 40(1)
  05e6d14  cmpwi 3, 0
  05e6d18  bf 2, 0x5e6df4
  05e6d1c  ori 3, 30, 0
  05e6d20  bl 0x64fba4
  05e6d24  ld 2, 40(1)
  05e6d28  cmpwi 3, 0
  05e6d2c  bf 2, 0x5e6df4
  05e6d30  lwz 4, 11984(31)
  05e6d34  ori 3, 31, 0
  05e6d38  lwz 5, 0(31)
  05e6d3c  addic 6, 4, 1
  05e6d40  std 2, 40(1)
  05e6d44  clrldi 4, 6, 32
  05e6d48  stw 6, 11984(31)
  05e6d4c  lwz 5, 28(5)
  05e6d50  lwz 6, 0(5)
  05e6d54  lwz 2, 4(5)
  05e6d58  mtctr 6
  05e6d5c  bcctrl 20, 30
  05e6d60  cmplwi 3, 512
  05e6d64  ld 2, 40(1)
  05e6d68  bf 1, 0x5e6d30
  05e6d6c  lwz 4, 11984(31)
  05e6d70  lwz 5, 0(31)
  05e6d74  ori 3, 31, 0
  05e6d78  addic 4, 4, -1
  05e6d7c  std 2, 40(1)
  05e6d80  stw 4, 11984(31)
  05e6d84  lwz 4, 32(5)
  05e6d88  lwz 5, 0(4)
  05e6d8c  lwz 2, 4(4)
  05e6d90  mtctr 5
  05e6d94  bcctrl 20, 30
  05e6d98  ld 2, 40(1)
  05e6d9c  cmpwi 3, 0
  05e6da0  stw 3, 11980(31)
  05e6da4  bt 2, 0x5e6df4
  05e6da8  lwz 4, 0(31)
  05e6dac  ori 3, 31, 0
  05e6db0  std 2, 40(1)
  05e6db4  lwz 4, 36(4)
  05e6db8  lwz 5, 0(4)
  05e6dbc  lwz 2, 4(4)
  05e6dc0  mtctr 5
  05e6dc4  bcctrl 20, 30
  05e6dc8  ld 2, 40(1)
  05e6dcc  cmpwi 3, -1
  05e6dd0  stw 3, 11988(31)
  05e6dd4  bt 2, 0x5e6df4
  05e6dd8  addic 3, 31, 11268
  05e6ddc  li 4, 0
  05e6de0  li 5, 704
  05e6de4  bl 0x5d0140
  05e6de8  nop
  05e6dec  li 3, 1
  05e6df0  stb 3, 11992(31)
  05e6df4  ld 0, 688(1)
  05e6df8  mtlr 0
  05e6dfc  ld 29, 648(1)
  05e6e00  ld 30, 656(1)
  05e6e04  ld 31, 664(1)
  05e6e08  addi 1, 1, 672
  05e6e0c  blr

FUN_005e6e10:   # 0x5e6e10, 0x10 bytes
  05e6e10  lis 4, 102
  05e6e14  addic 4, 4, 5960
  05e6e18  stw 4, 0(3)
  05e6e1c  blr

FUN_005e6e20:   # 0x5e6e20, 0x10 bytes
  05e6e20  lis 4, 102
  05e6e24  addic 4, 4, 6012
  05e6e28  stw 4, 0(3)
  05e6e2c  blr

FUN_005e6e30:   # 0x5e6e30, 0x10 bytes
  05e6e30  lis 4, 102
  05e6e34  addic 4, 4, 6012
  05e6e38  stw 4, 0(3)
  05e6e3c  blr

FUN_005e6e40:   # 0x5e6e40, 0x10 bytes
  05e6e40  lis 4, 102
  05e6e44  addic 4, 4, 5904
  05e6e48  stw 4, 0(3)
  05e6e4c  blr

FUN_005e6e50:   # 0x5e6e50, 0x4 bytes
  05e6e50  blr

FUN_005e6e54:   # 0x5e6e54, 0x10 bytes
  05e6e54  lis 4, 102
  05e6e58  addic 4, 4, 5984
  05e6e5c  stw 4, 0(3)
  05e6e60  blr

FUN_005e6e64:   # 0x5e6e64, 0x10 bytes
  05e6e64  lis 4, 102
  05e6e68  addic 4, 4, 5984
  05e6e6c  stw 4, 0(3)
  05e6e70  blr

FUN_005e6e74:   # 0x5e6e74, 0x10 bytes
  05e6e74  lis 4, 102
  05e6e78  addic 4, 4, 6032
  05e6e7c  stw 4, 0(3)
  05e6e80  blr

FUN_005e6e84:   # 0x5e6e84, 0x40 bytes
  05e6e84  stdu 1, -112(1)
  05e6e88  mflr 0
  05e6e8c  std 0, 128(1)
  05e6e90  ori 4, 3, 0
  05e6e94  cmpwi 4, 0
  05e6e98  bt 2, 0x5e6eb4
  05e6e9c  lis 5, 102
  05e6ea0  ori 4, 3, 0
  05e6ea4  addic 5, 5, 5904
  05e6ea8  stw 5, 0(4)
  05e6eac  bl 0x5e387c
  05e6eb0  nop
  05e6eb4  ld 0, 128(1)
  05e6eb8  mtlr 0
  05e6ebc  addi 1, 1, 112
  05e6ec0  blr

FUN_005e6ec4:   # 0x5e6ec4, 0x40 bytes
  05e6ec4  stdu 1, -112(1)
  05e6ec8  mflr 0
  05e6ecc  std 0, 128(1)
  05e6ed0  ori 4, 3, 0
  05e6ed4  cmpwi 4, 0
  05e6ed8  bt 2, 0x5e6ef4
  05e6edc  lis 5, 102
  05e6ee0  ori 4, 3, 0
  05e6ee4  addic 5, 5, 5960
  05e6ee8  stw 5, 0(4)
  05e6eec  bl 0x5e387c
  05e6ef0  nop
  05e6ef4  ld 0, 128(1)
  05e6ef8  mtlr 0
  05e6efc  addi 1, 1, 112
  05e6f00  blr

FUN_005e6f04:   # 0x5e6f04, 0x40 bytes
  05e6f04  stdu 1, -112(1)
  05e6f08  mflr 0
  05e6f0c  std 0, 128(1)
  05e6f10  ori 4, 3, 0
  05e6f14  cmpwi 4, 0
  05e6f18  bt 2, 0x5e6f34
  05e6f1c  lis 5, 102
  05e6f20  ori 4, 3, 0
  05e6f24  addic 5, 5, 5984
  05e6f28  stw 5, 0(4)
  05e6f2c  bl 0x5e387c
  05e6f30  nop
  05e6f34  ld 0, 128(1)
  05e6f38  mtlr 0
  05e6f3c  addi 1, 1, 112
  05e6f40  blr

FUN_005e6f44:   # 0x5e6f44, 0x40 bytes
  05e6f44  stdu 1, -112(1)
  05e6f48  mflr 0
  05e6f4c  std 0, 128(1)
  05e6f50  ori 4, 3, 0
  05e6f54  cmpwi 4, 0
  05e6f58  bt 2, 0x5e6f74
  05e6f5c  lis 5, 102
  05e6f60  ori 4, 3, 0
  05e6f64  addic 5, 5, 6012
  05e6f68  stw 5, 0(4)
  05e6f6c  bl 0x5e387c
  05e6f70  nop
  05e6f74  ld 0, 128(1)
  05e6f78  mtlr 0
  05e6f7c  addi 1, 1, 112
  05e6f80  blr

FUN_005e6f84:   # 0x5e6f84, 0x40 bytes
  05e6f84  stdu 1, -112(1)
  05e6f88  mflr 0
  05e6f8c  std 0, 128(1)
  05e6f90  ori 4, 3, 0
  05e6f94  cmpwi 4, 0
  05e6f98  bt 2, 0x5e6fb4
  05e6f9c  lis 5, 102
  05e6fa0  ori 4, 3, 0
  05e6fa4  addic 5, 5, 6032
  05e6fa8  stw 5, 0(4)
  05e6fac  bl 0x5e387c
  05e6fb0  nop
  05e6fb4  ld 0, 128(1)
  05e6fb8  mtlr 0
  05e6fbc  addi 1, 1, 112
  05e6fc0  blr

FUN_005e6fc4:   # 0x5e6fc4, 0x10 bytes
  05e6fc4  lis 4, 102
  05e6fc8  addic 4, 4, 5808
  05e6fcc  stw 4, 0(3)
  05e6fd0  blr

FUN_005e6fd4:   # 0x5e6fd4, 0x10 bytes
  05e6fd4  lis 4, 102
  05e6fd8  addic 4, 4, 5808
  05e6fdc  stw 4, 0(3)
  05e6fe0  blr

FUN_005e6fe4:   # 0x5e6fe4, 0x40 bytes
  05e6fe4  stdu 1, -112(1)
  05e6fe8  mflr 0
  05e6fec  std 0, 128(1)
  05e6ff0  ori 4, 3, 0
  05e6ff4  cmpwi 4, 0
  05e6ff8  bt 2, 0x5e7014
  05e6ffc  lis 5, 102
  05e7000  ori 4, 3, 0
  05e7004  addic 5, 5, 5808
  05e7008  stw 5, 0(4)
  05e700c  bl 0x5e387c
  05e7010  nop
  05e7014  ld 0, 128(1)
  05e7018  mtlr 0
  05e701c  addi 1, 1, 112
  05e7020  blr

FUN_005e7024:   # 0x5e7024, 0x34 bytes
  05e7024  stdu 1, -112(1)
  05e7028  mflr 0
  05e702c  std 0, 128(1)
  05e7030  clrlwi 3, 5, 27
  05e7034  li 5, 1
  05e7038  slw 3, 5, 3
  05e703c  clrldi 3, 3, 32
  05e7040  bl 0x5d5764
  05e7044  nop
  05e7048  ld 0, 128(1)
  05e704c  mtlr 0
  05e7050  addi 1, 1, 112
  05e7054  blr

FUN_005e7058:   # 0x5e7058, 0x28 bytes
  05e7058  stdu 1, -112(1)
  05e705c  mflr 0
  05e7060  std 0, 128(1)
  05e7064  ori 3, 4, 0
  05e7068  bl 0x5d580c
  05e706c  nop
  05e7070  ld 0, 128(1)
  05e7074  mtlr 0
  05e7078  addi 1, 1, 112
  05e707c  blr

FUN_005e7080:   # 0x5e7080, 0x8 bytes
  05e7080  li 3, 0
  05e7084  blr

FUN_005e7088:   # 0x5e7088, 0x40 bytes
  05e7088  stdu 1, -112(1)
  05e708c  mflr 0
  05e7090  std 0, 128(1)
  05e7094  ori 4, 3, 0
  05e7098  cmpwi 4, 0
  05e709c  bt 2, 0x5e70b8
  05e70a0  lis 5, 102
  05e70a4  ori 4, 3, 0
  05e70a8  addic 5, 5, 5808
  05e70ac  stw 5, 0(4)
  05e70b0  bl 0x5e387c
  05e70b4  nop
  05e70b8  ld 0, 128(1)
  05e70bc  mtlr 0
  05e70c0  addi 1, 1, 112
  05e70c4  blr

FUN_005e70c8:   # 0x5e70c8, 0x10 bytes
  05e70c8  lis 4, 102
  05e70cc  addic 4, 4, 5836
  05e70d0  stw 4, 0(3)
  05e70d4  blr

FUN_005e70d8:   # 0x5e70d8, 0x40 bytes
  05e70d8  stdu 1, -112(1)
  05e70dc  mflr 0
  05e70e0  std 0, 128(1)
  05e70e4  ori 4, 3, 0
  05e70e8  cmpwi 4, 0
  05e70ec  bt 2, 0x5e7108
  05e70f0  lis 5, 102
  05e70f4  ori 4, 3, 0
  05e70f8  addic 5, 5, 5836
  05e70fc  stw 5, 0(4)
  05e7100  bl 0x5e387c
  05e7104  nop
  05e7108  ld 0, 128(1)
  05e710c  mtlr 0
  05e7110  addi 1, 1, 112
  05e7114  blr

FUN_005e7118:   # 0x5e7118, 0x10 bytes
  05e7118  lis 4, 102
  05e711c  addic 4, 4, 5836
  05e7120  stw 4, 0(3)
  05e7124  blr

FUN_005e7128:   # 0x5e7128, 0x40 bytes
  05e7128  stdu 1, -112(1)
  05e712c  mflr 0
  05e7130  std 0, 128(1)
  05e7134  ori 4, 3, 0
  05e7138  cmpwi 4, 0
  05e713c  bt 2, 0x5e7158
  05e7140  lis 5, 102
  05e7144  ori 4, 3, 0
  05e7148  addic 5, 5, 5836
  05e714c  stw 5, 0(4)
  05e7150  bl 0x5e387c
  05e7154  nop
  05e7158  ld 0, 128(1)
  05e715c  mtlr 0
  05e7160  addi 1, 1, 112
  05e7164  blr

FUN_005e7168:   # 0x5e7168, 0x10 bytes
  05e7168  lis 4, 102
  05e716c  addic 4, 4, 5836
  05e7170  stw 4, 0(3)
  05e7174  blr

FUN_005e7178:   # 0x5e7178, 0x40 bytes
  05e7178  stdu 1, -112(1)
  05e717c  mflr 0
  05e7180  std 0, 128(1)
  05e7184  ori 4, 3, 0
  05e7188  cmpwi 4, 0
  05e718c  bt 2, 0x5e71a8
  05e7190  lis 5, 102
  05e7194  ori 4, 3, 0
  05e7198  addic 5, 5, 5836
  05e719c  stw 5, 0(4)
  05e71a0  bl 0x5e387c
  05e71a4  nop
  05e71a8  ld 0, 128(1)
  05e71ac  mtlr 0
  05e71b0  addi 1, 1, 112
  05e71b4  blr

FUN_005e71b8:   # 0x5e71b8, 0x80 bytes
  05e71b8  stdu 1, -128(1)
  05e71bc  mflr 0
  05e71c0  std 0, 144(1)
  05e71c4  std 31, 120(1)
  05e71c8  std 30, 112(1)
  05e71cc  ori 31, 3, 0
  05e71d0  ori 30, 4, 0
  05e71d4  lwz 5, 0(31)
  05e71d8  std 2, 40(1)
  05e71dc  lwz 5, 12(5)
  05e71e0  lwz 6, 0(5)
  05e71e4  lwz 2, 4(5)
  05e71e8  mtctr 6
  05e71ec  bcctrl 20, 30
  05e71f0  lwz 6, 0(31)
  05e71f4  ori 4, 3, 0
  05e71f8  ld 2, 40(1)
  05e71fc  addic 5, 30, 24
  05e7200  ori 3, 31, 0
  05e7204  lwz 6, 20(6)
  05e7208  std 2, 40(1)
  05e720c  lwz 7, 0(6)
  05e7210  lwz 2, 4(6)
  05e7214  mtctr 7
  05e7218  bcctrl 20, 30
  05e721c  ld 2, 40(1)
  05e7220  ld 0, 144(1)
  05e7224  mtlr 0
  05e7228  ld 30, 112(1)
  05e722c  ld 31, 120(1)
  05e7230  addi 1, 1, 128
  05e7234  blr

FUN_005e7238:   # 0x5e7238, 0x94 bytes
  05e7238  stdu 1, -128(1)
  05e723c  mflr 0
  05e7240  std 0, 144(1)
  05e7244  lis 4, 102
  05e7248  li 5, 0
  05e724c  lwz 6, 11972(3)
  05e7250  addic 4, 4, 6048
  05e7254  cmpwi 6, 0
  05e7258  stw 4, 0(3)
  05e725c  stb 5, 11992(3)
  05e7260  bt 2, 0x5e7278
  05e7264  std 3, 112(1)
  05e7268  addic 3, 3, 10624
  05e726c  bl 0x64fa64
  05e7270  ld 2, 40(1)
  05e7274  ld 3, 112(1)
  05e7278  lwz 4, 11976(3)
  05e727c  cmpwi 4, 0
  05e7280  bt 2, 0x5e72b0
  05e7284  std 3, 112(1)
  05e7288  ori 3, 4, 0
  05e728c  bl 0x64fc24
  05e7290  ld 2, 40(1)
  05e7294  ld 3, 112(1)
  05e7298  lwz 3, 11976(3)
  05e729c  bl 0x64fc04
  05e72a0  ld 2, 40(1)
  05e72a4  ld 3, 112(1)
  05e72a8  li 5, 0
  05e72ac  stw 5, 11976(3)
  05e72b0  lis 4, 102
  05e72b4  addic 4, 4, 5836
  05e72b8  stw 4, 0(3)
  05e72bc  ld 0, 144(1)
  05e72c0  mtlr 0
  05e72c4  addi 1, 1, 128
  05e72c8  blr

FUN_005e72cc:   # 0x5e72cc, 0xb4 bytes
  05e72cc  stdu 1, -128(1)
  05e72d0  mflr 0
  05e72d4  std 0, 144(1)
  05e72d8  ori 4, 3, 0
  05e72dc  cmpwi 4, 0
  05e72e0  bt 2, 0x5e7370
  05e72e4  lis 4, 102
  05e72e8  lwz 6, 11972(3)
  05e72ec  li 5, 0
  05e72f0  addic 4, 4, 6048
  05e72f4  cmpwi 6, 0
  05e72f8  stw 4, 0(3)
  05e72fc  stb 5, 11992(3)
  05e7300  bt 2, 0x5e731c
  05e7304  ori 4, 3, 0
  05e7308  addic 3, 3, 10624
  05e730c  std 4, 112(1)
  05e7310  bl 0x64fa64
  05e7314  ld 2, 40(1)
  05e7318  ld 3, 112(1)
  05e731c  lwz 4, 11976(3)
  05e7320  cmpwi 4, 0
  05e7324  bt 2, 0x5e7358
  05e7328  ori 5, 3, 0
  05e732c  ori 3, 4, 0
  05e7330  std 5, 112(1)
  05e7334  bl 0x64fc24
  05e7338  ld 2, 40(1)
  05e733c  ld 3, 112(1)
  05e7340  lwz 3, 11976(3)
  05e7344  bl 0x64fc04
  05e7348  ld 2, 40(1)
  05e734c  ld 3, 112(1)
  05e7350  li 5, 0
  05e7354  stw 5, 11976(3)
  05e7358  lis 5, 102
  05e735c  ori 4, 3, 0
  05e7360  addic 5, 5, 5836
  05e7364  stw 5, 0(4)
  05e7368  bl 0x5e387c
  05e736c  nop
  05e7370  ld 0, 144(1)
  05e7374  mtlr 0
  05e7378  addi 1, 1, 128
  05e737c  blr

FUN_005e7380:   # 0x5e7380, 0x274 bytes
  05e7380  stdu 1, -208(1)
  05e7384  mflr 0
  05e7388  std 0, 224(1)
  05e738c  ori 5, 3, 0
  05e7390  ori 3, 4, 0
  05e7394  ori 4, 5, 0
  05e7398  lbz 5, 11992(5)
  05e739c  std 31, 200(1)
  05e73a0  std 30, 192(1)
  05e73a4  std 29, 184(1)
  05e73a8  std 28, 176(1)
  05e73ac  std 27, 168(1)
  05e73b0  cmpwi 5, 0
  05e73b4  bf 2, 0x5e73c0
  05e73b8  li 3, 0
  05e73bc  b 0x5e75d0
  05e73c0  li 6, 0
  05e73c4  lis 8, 0
  05e73c8  ori 9, 6, 0
  05e73cc  li 5, 1
  05e73d0  addic 7, 4, 11264
  05e73d4  ori 12, 9, 0
  05e73d8  ori 8, 8, 65535
  05e73dc  lwsync
  05e73e0  lwz 11, 11264(4)
  05e73e4  cmpw 11, 8
  05e73e8  bt 2, 0x5e7420
  05e73ec  slw 10, 5, 6
  05e73f0  and 10, 11, 10
  05e73f4  cmpwi 10, 0
  05e73f8  bt 2, 0x5e7414
  05e73fc  addic 6, 6, 1
  05e7400  clrlwi 6, 6, 28
  05e7404  slw 10, 5, 6
  05e7408  and 10, 10, 11
  05e740c  cmpwi 10, 0
  05e7410  bf 2, 0x5e73fc
  05e7414  slw 10, 5, 6
  05e7418  or 12, 11, 10
  05e741c  clrldi 12, 12, 32
  05e7420  lwarx 10, 7, 9
  05e7424  cmpw 10, 11
  05e7428  bf 2, 0x5e7434
  05e742c  stwcx. 12, 7, 9
  05e7430  bf 2, 0x5e7420
  05e7434  cmpw 10, 11
  05e7438  bf 2, 0x5e73dc
  05e743c  sldi 7, 6, 4
  05e7440  ori 8, 4, 0
  05e7444  std 4, 152(1)
  05e7448  subc 9, 7, 6
  05e744c  std 3, 144(1)
  05e7450  ori 10, 3, 0
  05e7454  sldi 9, 9, 2
  05e7458  slw 6, 5, 6
  05e745c  subc 31, 9, 7
  05e7460  clrlwi 6, 6, 16
  05e7464  addc 31, 8, 31
  05e7468  lwz 3, 0(10)
  05e746c  addic 8, 8, 10624
  05e7470  clrldi 7, 31, 32
  05e7474  lwz 4, 4(10)
  05e7478  lwz 9, 8(10)
  05e747c  lwz 11, 12(10)
  05e7480  stw 3, 11268(7)
  05e7484  stw 4, 11272(7)
  05e7488  stw 9, 11276(7)
  05e748c  stw 11, 11280(7)
  05e7490  lwz 3, 16(10)
  05e7494  lwz 4, 20(10)
  05e7498  lwz 9, 24(10)
  05e749c  lwz 11, 28(10)
  05e74a0  stw 3, 11284(7)
  05e74a4  stw 4, 11288(7)
  05e74a8  stw 9, 11292(7)
  05e74ac  ori 3, 8, 0
  05e74b0  stw 11, 11296(7)
  05e74b4  ori 4, 6, 0
  05e74b8  lwz 9, 32(10)
  05e74bc  lwz 10, 36(10)
  05e74c0  stw 9, 11300(7)
  05e74c4  stw 10, 11304(7)
  05e74c8  stw 5, 11308(7)
  05e74cc  std 8, 136(1)
  05e74d0  std 6, 128(1)
  05e74d4  bl 0x64fac4
  05e74d8  ld 2, 40(1)
  05e74dc  ld 3, 144(1)
  05e74e0  ld 4, 152(1)
  05e74e4  addic 30, 31, 11308
  05e74e8  ld 11, 128(1)
  05e74ec  ld 12, 136(1)
  05e74f0  clrldi 30, 30, 32
  05e74f4  lwz 10, 28(3)
  05e74f8  lwz 9, 12(3)
  05e74fc  lwz 8, 16(3)
  05e7500  lwz 7, 20(3)
  05e7504  cmpwi 10, 0
  05e7508  lwz 5, 24(3)
  05e750c  lwz 6, 0(4)
  05e7510  bt 2, 0x5e7580
  05e7514  cmpwi 7, 0
  05e7518  bf 2, 0x5e7580
  05e751c  ori 29, 3, 0
  05e7520  ori 3, 4, 0
  05e7524  ori 7, 10, 0
  05e7528  ori 4, 9, 0
  05e752c  ori 10, 30, 0
  05e7530  lwz 9, 32(29)
  05e7534  lwz 30, 36(29)
  05e7538  lwz 29, 40(6)
  05e753c  addc 6, 9, 30
  05e7540  subc 6, 5, 6
  05e7544  ori 5, 8, 0
  05e7548  lwz 27, 0(29)
  05e754c  clrldi 28, 6, 32
  05e7550  std 2, 40(1)
  05e7554  ori 6, 7, 0
  05e7558  std 12, 112(1)
  05e755c  mtctr 27
  05e7560  std 11, 120(1)
  05e7564  ori 7, 9, 0
  05e7568  lwz 2, 4(29)
  05e756c  ori 8, 30, 0
  05e7570  ori 9, 28, 0
  05e7574  bcctrl 20, 30
  05e7578  ld 2, 40(1)
  05e757c  b 0x5e75c8
  05e7580  ori 10, 30, 0
  05e7584  lwz 30, 40(6)
  05e7588  std 2, 40(1)
  05e758c  ori 3, 4, 0
  05e7590  std 12, 112(1)
  05e7594  ori 29, 5, 0
  05e7598  std 11, 120(1)
  05e759c  ori 4, 9, 0
  05e75a0  ori 5, 8, 0
  05e75a4  lwz 11, 0(30)
  05e75a8  ori 6, 7, 0
  05e75ac  lwz 2, 4(30)
  05e75b0  mtctr 11
  05e75b4  li 9, 0
  05e75b8  li 7, 0
  05e75bc  ori 8, 29, 0
  05e75c0  bcctrl 20, 30
  05e75c4  ld 2, 40(1)
  05e75c8  addic 3, 31, 11268
  05e75cc  clrldi 3, 3, 32
  05e75d0  ld 0, 224(1)
  05e75d4  mtlr 0
  05e75d8  ld 27, 168(1)
  05e75dc  ld 28, 176(1)
  05e75e0  ld 29, 184(1)
  05e75e4  ld 30, 192(1)
  05e75e8  ld 31, 200(1)
  05e75ec  addi 1, 1, 208
  05e75f0  blr

FUN_005e75f4:   # 0x5e75f4, 0x14 bytes
  05e75f4  lwsync
  05e75f8  lwz 3, 40(4)
  05e75fc  cntlzw 3, 3
  05e7600  rlwinm 3, 3, 27, 31, 31
  05e7604  blr

FUN_005e7608:   # 0x5e7608, 0x168 bytes
  05e7608  stdu 1, -160(1)
  05e760c  mflr 0
  05e7610  std 0, 176(1)
  05e7614  std 31, 152(1)
  05e7618  cmpwi 4, 0
  05e761c  std 30, 144(1)
  05e7620  ori 31, 3, 0
  05e7624  std 29, 136(1)
  05e7628  std 28, 128(1)
  05e762c  ori 30, 5, 0
  05e7630  bf 2, 0x5e763c
  05e7634  li 3, -1
  05e7638  b 0x5e7750
  05e763c  ori 28, 4, 0
  05e7640  addic 3, 31, 11268
  05e7644  lis 4, 11915
  05e7648  subc 3, 28, 3
  05e764c  ori 4, 4, 41705
  05e7650  mulhw 3, 4, 3
  05e7654  li 29, 1
  05e7658  srawi 3, 3, 3
  05e765c  srwi 4, 3, 31
  05e7660  addc 3, 3, 4
  05e7664  slw 29, 29, 3
  05e7668  sth 29, 112(1)
  05e766c  lwz 3, 40(28)
  05e7670  cmpwi 3, 0
  05e7674  bt 2, 0x5e76b0
  05e7678  addic 4, 31, 10624
  05e767c  addic 3, 1, 112
  05e7680  ori 6, 4, 0
  05e7684  ori 4, 3, 0
  05e7688  li 5, 1
  05e768c  ori 3, 6, 0
  05e7690  std 6, 120(1)
  05e7694  bl 0x64fa84
  05e7698  ld 2, 40(1)
  05e769c  lwz 5, 40(28)
  05e76a0  addic 3, 1, 112
  05e76a4  ld 4, 120(1)
  05e76a8  cmpwi 5, 0
  05e76ac  bf 2, 0x5e7680
  05e76b0  lwz 3, 28(28)
  05e76b4  cmpwi 3, 0
  05e76b8  bt 2, 0x5e76e8
  05e76bc  lwz 4, 20(28)
  05e76c0  cmpwi 4, 0
  05e76c4  bt 2, 0x5e76e8
  05e76c8  lwz 5, 32(28)
  05e76cc  lwz 6, 36(28)
  05e76d0  addc 4, 4, 5
  05e76d4  ori 5, 6, 0
  05e76d8  clrldi 4, 4, 32
  05e76dc  bl 0x5c5ad0
  05e76e0  nop
  05e76e4  lwz 3, 28(28)
  05e76e8  cmpwi 3, 0
  05e76ec  bt 2, 0x5e76f8
  05e76f0  lwz 4, 36(28)
  05e76f4  b 0x5e76fc
  05e76f8  lwz 4, 24(28)
  05e76fc  ori 6, 4, 0
  05e7700  ori 3, 28, 0
  05e7704  li 4, 0
  05e7708  li 5, 44
  05e770c  stw 6, 0(30)
  05e7710  bl 0x5d0140
  05e7714  nop
  05e7718  not 4, 29
  05e771c  addic 30, 31, 11264
  05e7720  li 3, 0
  05e7724  lwsync
  05e7728  lwz 7, 11264(31)
  05e772c  and 6, 7, 4
  05e7730  clrldi 6, 6, 32
  05e7734  lwarx 5, 30, 3
  05e7738  cmpw 5, 7
  05e773c  bf 2, 0x5e7748
  05e7740  stwcx. 6, 30, 3
  05e7744  bf 2, 0x5e7734
  05e7748  cmpw 5, 7
  05e774c  bf 2, 0x5e7724
  05e7750  ld 0, 176(1)
  05e7754  mtlr 0
  05e7758  ld 28, 128(1)
  05e775c  ld 29, 136(1)
  05e7760  ld 30, 144(1)
  05e7764  ld 31, 152(1)
  05e7768  addi 1, 1, 160
  05e776c  blr

FUN_005e7770:   # 0x5e7770, 0xb0 bytes
  05e7770  stdu 1, -128(1)
  05e7774  mflr 0
  05e7778  std 0, 144(1)
  05e777c  std 31, 120(1)
  05e7780  ori 31, 3, 0
  05e7784  lis 4, 102
  05e7788  addic 4, 4, 6124
  05e778c  lwz 3, 11980(31)
  05e7790  cmpwi 3, 0
  05e7794  bt 2, 0x5e77ac
  05e7798  stw 4, 0(31)
  05e779c  bl 0x50fb74
  05e77a0  nop
  05e77a4  li 3, 0
  05e77a8  stw 3, 11980(31)
  05e77ac  lis 3, 102
  05e77b0  lwz 5, 11972(31)
  05e77b4  li 4, 0
  05e77b8  addic 3, 3, 6048
  05e77bc  cmpwi 5, 0
  05e77c0  stw 3, 0(31)
  05e77c4  stb 4, 11992(31)
  05e77c8  bt 2, 0x5e77d8
  05e77cc  addic 3, 31, 10624
  05e77d0  bl 0x64fa64
  05e77d4  ld 2, 40(1)
  05e77d8  lwz 3, 11976(31)
  05e77dc  cmpwi 3, 0
  05e77e0  bt 2, 0x5e7800
  05e77e4  bl 0x64fc24
  05e77e8  ld 2, 40(1)
  05e77ec  lwz 3, 11976(31)
  05e77f0  bl 0x64fc04
  05e77f4  ld 2, 40(1)
  05e77f8  li 3, 0
  05e77fc  stw 3, 11976(31)
  05e7800  lis 3, 102
  05e7804  addic 3, 3, 5836
  05e7808  stw 3, 0(31)
  05e780c  ld 0, 144(1)
  05e7810  mtlr 0
  05e7814  ld 31, 120(1)
  05e7818  addi 1, 1, 128
  05e781c  blr

FUN_005e7820:   # 0x5e7820, 0xc4 bytes
  05e7820  stdu 1, -128(1)
  05e7824  mflr 0
  05e7828  std 0, 144(1)
  05e782c  std 31, 120(1)
  05e7830  cmpwi 3, 0
  05e7834  ori 31, 3, 0
  05e7838  bt 2, 0x5e78d0
  05e783c  lwz 3, 11980(31)
  05e7840  lis 4, 102
  05e7844  cmpwi 3, 0
  05e7848  addic 4, 4, 6124
  05e784c  bt 2, 0x5e7864
  05e7850  stw 4, 0(31)
  05e7854  bl 0x50fb74
  05e7858  nop
  05e785c  li 3, 0
  05e7860  stw 3, 11980(31)
  05e7864  lis 3, 102
  05e7868  lwz 5, 11972(31)
  05e786c  li 4, 0
  05e7870  addic 3, 3, 6048
  05e7874  cmpwi 5, 0
  05e7878  stw 3, 0(31)
  05e787c  stb 4, 11992(31)
  05e7880  bt 2, 0x5e7890
  05e7884  addic 3, 31, 10624
  05e7888  bl 0x64fa64
  05e788c  ld 2, 40(1)
  05e7890  lwz 3, 11976(31)
  05e7894  cmpwi 3, 0
  05e7898  bt 2, 0x5e78b8
  05e789c  bl 0x64fc24
  05e78a0  ld 2, 40(1)
  05e78a4  lwz 3, 11976(31)
  05e78a8  bl 0x64fc04
  05e78ac  ld 2, 40(1)
  05e78b0  li 3, 0
  05e78b4  stw 3, 11976(31)
  05e78b8  lis 4, 102
  05e78bc  ori 3, 31, 0
  05e78c0  addic 4, 4, 5836
  05e78c4  stw 4, 0(31)
  05e78c8  bl 0x5e387c
  05e78cc  nop
  05e78d0  ld 0, 144(1)
  05e78d4  mtlr 0
  05e78d8  ld 31, 120(1)
  05e78dc  addi 1, 1, 128
  05e78e0  blr

FUN_005e78e4:   # 0x5e78e4, 0x24 bytes
  05e78e4  stdu 1, -112(1)
  05e78e8  mflr 0
  05e78ec  std 0, 128(1)
  05e78f0  bl 0x50fb6c
  05e78f4  nop
  05e78f8  ld 0, 128(1)
  05e78fc  mtlr 0
  05e7900  addi 1, 1, 112
  05e7904  blr

FUN_005e7908:   # 0x5e7908, 0x28 bytes
  05e7908  stdu 1, -112(1)
  05e790c  mflr 0
  05e7910  std 0, 128(1)
  05e7914  ori 3, 4, 0
  05e7918  bl 0x50fbb0
  05e791c  nop
  05e7920  ld 0, 128(1)
  05e7924  mtlr 0
  05e7928  addi 1, 1, 112
  05e792c  blr

FUN_005e7930:   # 0x5e7930, 0x38 bytes
  05e7930  stdu 1, -112(1)
  05e7934  mflr 0
  05e7938  std 0, 128(1)
  05e793c  lwz 7, 11984(3)
  05e7940  addic 5, 3, 10752
  05e7944  li 6, 512
  05e7948  lwz 3, 11972(3)
  05e794c  ori 4, 7, 0
  05e7950  bl 0x5104d4
  05e7954  nop
  05e7958  ld 0, 128(1)
  05e795c  mtlr 0
  05e7960  addi 1, 1, 112
  05e7964  blr

FUN_005e7968:   # 0x5e7968, 0x34 bytes
  05e7968  stdu 1, -112(1)
  05e796c  mflr 0
  05e7970  std 0, 128(1)
  05e7974  lwz 6, 11980(3)
  05e7978  addic 4, 3, 128
  05e797c  lwz 3, 11976(3)
  05e7980  ori 5, 6, 0
  05e7984  bl 0x510638
  05e7988  nop
  05e798c  ld 0, 128(1)
  05e7990  mtlr 0
  05e7994  addi 1, 1, 112
  05e7998  blr

FUN_005e799c:   # 0x5e799c, 0xd0 bytes
  05e799c  stdu 1, -208(1)
  05e79a0  mflr 0
  05e79a4  std 0, 224(1)
  05e79a8  std 31, 200(1)
  05e79ac  std 30, 192(1)
  05e79b0  addic 31, 5, -13
  05e79b4  std 29, 184(1)
  05e79b8  li 30, 13
  05e79bc  std 28, 176(1)
  05e79c0  ori 29, 10, 0
  05e79c4  li 28, 0
  05e79c8  lwz 11, 332(1)
  05e79cc  subc 30, 30, 5
  05e79d0  lwz 12, 324(1)
  05e79d4  ori 10, 8, 0
  05e79d8  lwz 3, 11980(3)
  05e79dc  clrldi 31, 31, 32
  05e79e0  clrlwi 9, 9, 16
  05e79e4  ori 8, 6, 0
  05e79e8  sradi 6, 30, 63
  05e79ec  subc 31, 31, 28
  05e79f0  std 27, 168(1)
  05e79f4  li 30, 13
  05e79f8  and 6, 6, 31
  05e79fc  std 9, 112(1)
  05e7a00  addic 27, 4, 13
  05e7a04  std 29, 120(1)
  05e7a08  subc 5, 30, 5
  05e7a0c  std 12, 128(1)
  05e7a10  li 31, 0
  05e7a14  clrlwi 9, 7, 16
  05e7a18  clrlwi 11, 11, 16
  05e7a1c  addc 7, 28, 6
  05e7a20  li 30, 1
  05e7a24  subc 6, 27, 31
  05e7a28  sradi 5, 5, 63
  05e7a2c  std 11, 136(1)
  05e7a30  and 6, 5, 6
  05e7a34  std 30, 144(1)
  05e7a38  li 5, 5
  05e7a3c  addc 6, 31, 6
  05e7a40  bl 0x51007c
  05e7a44  nop
  05e7a48  ld 0, 224(1)
  05e7a4c  mtlr 0
  05e7a50  ld 27, 168(1)
  05e7a54  ld 28, 176(1)
  05e7a58  ld 29, 184(1)
  05e7a5c  ld 30, 192(1)
  05e7a60  ld 31, 200(1)
  05e7a64  addi 1, 1, 208
  05e7a68  blr

FUN_005e7a78:   # 0x5e7a78, 0x60 bytes
  05e7a78  lis 4, 94
  05e7a7c  li 5, 0
  05e7a80  addi 4, 4, 31344
  05e7a84  lfs 1, 0(4)
  05e7a88  lis 4, 16256
  05e7a8c  stw 5, 12(3)
  05e7a90  stw 5, 0(3)
  05e7a94  stw 5, 4(3)
  05e7a98  stw 4, 8(3)
  05e7a9c  stfs 1, 16(3)
  05e7aa0  stfs 1, 20(3)
  05e7aa4  stfs 1, 24(3)
  05e7aa8  stfs 1, 28(3)
  05e7aac  stfs 1, 32(3)
  05e7ab0  stfs 1, 36(3)
  05e7ab4  stfs 1, 40(3)
  05e7ab8  stfs 1, 44(3)
  05e7abc  stfs 1, 48(3)
  05e7ac0  stfs 1, 52(3)
  05e7ac4  stfs 1, 56(3)
  05e7ac8  stfs 1, 60(3)
  05e7acc  stfs 1, 64(3)
  05e7ad0  stfs 1, 68(3)
  05e7ad4  blr

FUN_005e7ad8:   # 0x5e7ad8, 0x78 bytes
  05e7ad8  lfs 2, 0(4)
  05e7adc  addic 5, 3, 12
  05e7ae0  lfs 3, 4(4)
  05e7ae4  addic 6, 3, 24
  05e7ae8  lfs 4, 8(4)
  05e7aec  fmuls 2, 2, 1
  05e7af0  fmuls 3, 3, 1
  05e7af4  lfs 5, 12(4)
  05e7af8  fmuls 4, 4, 1
  05e7afc  lfs 6, 16(4)
  05e7b00  lfs 7, 20(4)
  05e7b04  fmuls 5, 5, 1
  05e7b08  fmuls 6, 6, 1
  05e7b0c  lfs 8, 24(4)
  05e7b10  fmuls 7, 7, 1
  05e7b14  lfs 9, 28(4)
  05e7b18  lfs 10, 32(4)
  05e7b1c  fmuls 8, 8, 1
  05e7b20  fmuls 9, 9, 1
  05e7b24  fmuls 1, 10, 1
  05e7b28  stfs 2, 0(3)
  05e7b2c  stfs 3, 4(3)
  05e7b30  stfs 4, 8(3)
  05e7b34  stfs 5, 0(5)
  05e7b38  stfs 6, 4(5)
  05e7b3c  stfs 7, 8(5)
  05e7b40  stfs 8, 0(6)
  05e7b44  stfs 9, 4(6)
  05e7b48  stfs 1, 8(6)
  05e7b4c  blr

FUN_005e7b50:   # 0x5e7b50, 0xa0 bytes
  05e7b50  lfs 1, 0(4)
  05e7b54  rldicl 6, 6, 32, 32
  05e7b58  lfs 2, 12(4)
  05e7b5c  li 7, 0
  05e7b60  addc 9, 1, 7
  05e7b64  addic 10, 7, 64
  05e7b68  addic 8, 7, 72
  05e7b6c  addic 7, 7, 68
  05e7b70  std 5, 64(9)
  05e7b74  stw 6, 72(9)
  05e7b78  lfs 3, 64(1)
  05e7b7c  lfs 4, 68(9)
  05e7b80  fmuls 1, 1, 3
  05e7b84  fmuls 2, 2, 4
  05e7b88  lfs 4, 4(4)
  05e7b8c  lfs 5, 16(4)
  05e7b90  lfs 6, 68(1)
  05e7b94  lfs 7, 8(4)
  05e7b98  fmuls 4, 4, 3
  05e7b9c  lfs 8, 20(4)
  05e7ba0  fmuls 5, 5, 6
  05e7ba4  fmuls 3, 7, 3
  05e7ba8  lfs 9, 24(4)
  05e7bac  fmuls 6, 8, 6
  05e7bb0  lfs 7, 72(1)
  05e7bb4  lfs 8, 28(4)
  05e7bb8  fmuls 9, 9, 7
  05e7bbc  fadds 1, 1, 2
  05e7bc0  lfs 2, 32(4)
  05e7bc4  fmuls 8, 8, 7
  05e7bc8  fmuls 2, 2, 7
  05e7bcc  fadds 4, 4, 5
  05e7bd0  fadds 3, 3, 6
  05e7bd4  fadds 1, 1, 9
  05e7bd8  fadds 4, 4, 8
  05e7bdc  fadds 2, 3, 2
  05e7be0  stfs 1, 0(3)
  05e7be4  stfs 4, 4(3)
  05e7be8  stfs 2, 8(3)
  05e7bec  blr

FUN_005e7bf8:   # 0x5e7bf8, 0xa0 bytes
  05e7bf8  ori 6, 4, 0
  05e7bfc  rldicl 8, 5, 32, 32
  05e7c00  li 7, 0
  05e7c04  addc 9, 1, 7
  05e7c08  addic 5, 7, 56
  05e7c0c  addic 4, 7, 64
  05e7c10  std 6, 56(9)
  05e7c14  stw 8, 64(9)
  05e7c18  lfs 1, 56(1)
  05e7c1c  lfs 2, 60(9)
  05e7c20  fmuls 1, 1, 1
  05e7c24  fmuls 2, 2, 2
  05e7c28  lfs 3, 64(1)
  05e7c2c  fmuls 3, 3, 3
  05e7c30  lis 6, 94
  05e7c34  addi 6, 6, 31728
  05e7c38  fadds 1, 1, 2
  05e7c3c  lfs 2, 0(6)
  05e7c40  addic 6, 7, 60
  05e7c44  fadds 1, 1, 3
  05e7c48  fsqrts 1, 1
  05e7c4c  fcmpu 0, 1, 2
  05e7c50  bf 2, 0x5e7c70
  05e7c54  lfsx 1, 1, 5
  05e7c58  lfsx 2, 1, 6
  05e7c5c  stfs 1, 0(3)
  05e7c60  lfsx 1, 1, 4
  05e7c64  stfs 2, 4(3)
  05e7c68  stfs 1, 8(3)
  05e7c6c  b 0x5e7c94
  05e7c70  lfsx 2, 1, 5
  05e7c74  lfsx 3, 1, 6
  05e7c78  lfsx 4, 1, 4
  05e7c7c  fdivs 2, 2, 1
  05e7c80  fdivs 3, 3, 1
  05e7c84  fdivs 1, 4, 1
  05e7c88  stfs 2, 0(3)
  05e7c8c  stfs 3, 4(3)
  05e7c90  stfs 1, 8(3)
  05e7c94  blr

FUN_005e7ca0:   # 0x5e7ca0, 0x20 bytes
  05e7ca0  lis 4, 94
  05e7ca4  li 5, 0
  05e7ca8  addi 4, 4, 31896
  05e7cac  lfs 1, 0(4)
  05e7cb0  stw 5, 0(3)
  05e7cb4  stfs 1, 4(3)
  05e7cb8  stfs 1, 8(3)
  05e7cbc  blr

FUN_005e7cc8:   # 0x5e7cc8, 0x24 bytes
  05e7cc8  lis 4, 94
  05e7ccc  li 5, 0
  05e7cd0  addi 4, 4, 31936
  05e7cd4  lfs 1, 0(4)
  05e7cd8  stw 5, 0(3)
  05e7cdc  stfs 1, 4(3)
  05e7ce0  stfs 1, 8(3)
  05e7ce4  stfs 1, 12(3)
  05e7ce8  blr

FUN_005e7cf8:   # 0x5e7cf8, 0x64 bytes
  05e7cf8  lis 4, 94
  05e7cfc  li 5, 0
  05e7d00  addi 6, 4, 31984
  05e7d04  li 4, 256
  05e7d08  lfs 1, 0(6)
  05e7d0c  stw 5, 4(3)
  05e7d10  stfs 1, 8(3)
  05e7d14  stfs 1, 12(3)
  05e7d18  stfs 1, 16(3)
  05e7d1c  stfs 1, 20(3)
  05e7d20  stfs 1, 24(3)
  05e7d24  stfs 1, 28(3)
  05e7d28  stfs 1, 32(3)
  05e7d2c  stfs 1, 36(3)
  05e7d30  addic 6, 3, 40
  05e7d34  addic 4, 4, -1
  05e7d38  addc 6, 6, 5
  05e7d3c  cmpwi 4, 0
  05e7d40  clrldi 6, 6, 32
  05e7d44  addic 5, 5, 12
  05e7d48  stfs 1, 0(6)
  05e7d4c  stfs 1, 4(6)
  05e7d50  stfs 1, 8(6)
  05e7d54  bf 2, 0x5e7d30
  05e7d58  blr

STUB_005e7d60:   # 0x5e7d60, 0x4 bytes
  05e7d60  blr

FUN_005e7d64:   # 0x5e7d64, 0xa8 bytes
  05e7d64  lfs 1, 0(4)
  05e7d68  lfs 2, 4(4)
  05e7d6c  lfs 3, 0(5)
  05e7d70  lfs 4, 16(5)
  05e7d74  lfs 5, 8(4)
  05e7d78  fmuls 3, 3, 1
  05e7d7c  lfs 6, 4(5)
  05e7d80  fmuls 4, 4, 2
  05e7d84  lfs 7, 12(5)
  05e7d88  lfs 8, 20(5)
  05e7d8c  lfs 9, 28(5)
  05e7d90  fmuls 6, 6, 1
  05e7d94  fmuls 8, 8, 2
  05e7d98  lfs 10, 8(5)
  05e7d9c  fmuls 7, 7, 1
  05e7da0  lfs 11, 24(5)
  05e7da4  fmuls 9, 9, 2
  05e7da8  lfs 12, 32(5)
  05e7dac  fmuls 1, 10, 1
  05e7db0  fmuls 2, 11, 2
  05e7db4  lfs 10, 36(5)
  05e7db8  fmuls 12, 12, 5
  05e7dbc  fadds 3, 3, 4
  05e7dc0  lfs 11, 44(5)
  05e7dc4  fmuls 4, 10, 5
  05e7dc8  fmuls 11, 11, 5
  05e7dcc  lfs 10, 40(5)
  05e7dd0  fadds 6, 6, 8
  05e7dd4  fmuls 5, 10, 5
  05e7dd8  fadds 7, 7, 9
  05e7ddc  fadds 1, 1, 2
  05e7de0  fadds 2, 3, 12
  05e7de4  lfs 3, 12(4)
  05e7de8  fadds 4, 6, 4
  05e7dec  fadds 6, 7, 11
  05e7df0  fadds 1, 1, 5
  05e7df4  stfs 2, 0(3)
  05e7df8  fadds 2, 6, 3
  05e7dfc  stfs 4, 4(3)
  05e7e00  stfs 1, 8(3)
  05e7e04  stfs 2, 12(3)
  05e7e08  blr
