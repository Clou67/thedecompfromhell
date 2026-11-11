# sdk/libc/memcpy.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

memcpy:   # 0x5c5ad0, 0x5c4 bytes
  05c5ad0  cmpldi 7, 5, 7
  05c5ad4  clrldi 3, 3, 32
  05c5ad8  clrldi 4, 4, 32
  05c5adc  mr 11, 3
  05c5ae0  bt 29, 0x5c5b50
  05c5ae4  cmpdi 5, 0
  05c5ae8  bclr 12, 2
  05c5aec  cmpldi 1, 5, 15
  05c5af0  bf 5, 0x5c5b14
  05c5af4  rldicl 12, 5, 61, 3
  05c5af8  mtctr 12
  05c5afc  ld 7, 0(4)
  05c5b00  addi 5, 5, -8
  05c5b04  addi 4, 4, 8
  05c5b08  std 7, 0(11)
  05c5b0c  addi 11, 11, 8
  05c5b10  bdnz 0x5c5afc
  05c5b14  cmpdi 5, 0
  05c5b18  bclr 12, 2
  05c5b1c  mtctr 5
  05c5b20  lbz 0, 0(4)
  05c5b24  addi 4, 4, 1
  05c5b28  stb 0, 0(11)
  05c5b2c  addi 11, 11, 1
  05c5b30  bdnz 0x5c5b20
  05c5b34  blr
  05c5b38  mtctr 7
  05c5b3c  lbzu 8, -1(4)
  05c5b40  addi 5, 5, -1
  05c5b44  stbu 8, -1(11)
  05c5b48  bdnz 0x5c5b3c
  05c5b4c  b 0x5c5b80
  05c5b50  dcbt 0, 4
  05c5b54  clrldi 6, 4, 52
  05c5b58  clrldi 9, 3, 52
  05c5b5c  cmpld 1, 6, 9
  05c5b60  bf 4, 0x5c5cac
  05c5b64  add 4, 4, 5
  05c5b68  add 11, 3, 5
  05c5b6c  addi 10, 4, -128
  05c5b70  dcbt 0, 10
  05c5b74  clrldi 7, 4, 61
  05c5b78  cmpdi 6, 7, 0
  05c5b7c  bf 26, 0x5c5b38
  05c5b80  cmpdi 1, 5, 0
  05c5b84  bclr 12, 6
  05c5b88  clrldi 0, 11, 62
  05c5b8c  cmpdi 6, 0, 1
  05c5b90  bt 26, 0x5c5ec4
  05c5b94  cmpdi 1, 0, 2
  05c5b98  bt 6, 0x5c5f8c
  05c5b9c  cmpdi 0, 3
  05c5ba0  bt 2, 0x5c5df4
  05c5ba4  clrldi 12, 11, 61
  05c5ba8  cmpdi 7, 12, 0
  05c5bac  bf 30, 0x5c5fec
  05c5bb0  cmpldi 5, 47
  05c5bb4  bf 1, 0x5c5c48
  05c5bb8  addi 4, 4, -48
  05c5bbc  addi 5, 5, -48
  05c5bc0  addi 11, 11, -48
  05c5bc4  cmpldi 1, 5, 47
  05c5bc8  ld 0, 40(4)
  05c5bcc  ld 9, 32(4)
  05c5bd0  ld 12, 24(4)
  05c5bd4  ld 10, 16(4)
  05c5bd8  ld 8, 8(4)
  05c5bdc  ld 7, 0(4)
  05c5be0  std 0, 40(11)
  05c5be4  std 9, 32(11)
  05c5be8  std 12, 24(11)
  05c5bec  std 10, 16(11)
  05c5bf0  std 8, 8(11)
  05c5bf4  std 7, 0(11)
  05c5bf8  bf 5, 0x5c5c48
  05c5bfc  addi 4, 4, -48
  05c5c00  addi 11, 11, -48
  05c5c04  addi 5, 5, -48
  05c5c08  addi 6, 4, -256
  05c5c0c  ld 0, 40(4)
  05c5c10  ld 9, 32(4)
  05c5c14  ld 12, 24(4)
  05c5c18  ld 10, 16(4)
  05c5c1c  ld 8, 8(4)
  05c5c20  ld 7, 0(4)
  05c5c24  std 0, 40(11)
  05c5c28  std 9, 32(11)
  05c5c2c  std 12, 24(11)
  05c5c30  std 10, 16(11)
  05c5c34  std 8, 8(11)
  05c5c38  std 7, 0(11)
  05c5c3c  dcbt 0, 6
  05c5c40  cmpldi 5, 47
  05c5c44  bt 1, 0x5c5bb8
  05c5c48  cmpldi 6, 5, 7
  05c5c4c  bf 25, 0x5c5c68
  05c5c50  rldicl 6, 5, 61, 3
  05c5c54  mtctr 6
  05c5c58  ldu 7, -8(4)
  05c5c5c  addi 5, 5, -8
  05c5c60  stdu 7, -8(11)
  05c5c64  bdnz 0x5c5c58
  05c5c68  cmpdi 7, 5, 0
  05c5c6c  mtctr 5
  05c5c70  bclr 12, 30
  05c5c74  lbzu 6, -1(4)
  05c5c78  stbu 6, -1(11)
  05c5c7c  bdnz 0x5c5c74
  05c5c80  blr
  05c5c84  li 6, 8
  05c5c88  sub 7, 6, 7
  05c5c8c  mtctr 7
  05c5c90  lbz 6, 0(4)
  05c5c94  addi 5, 5, -1
  05c5c98  addi 4, 4, 1
  05c5c9c  stb 6, 0(11)
  05c5ca0  addi 11, 11, 1
  05c5ca4  bdnz 0x5c5c90
  05c5ca8  b 0x5c5cc0
  05c5cac  addi 10, 4, 128
  05c5cb0  dcbt 0, 10
  05c5cb4  clrldi 7, 4, 61
  05c5cb8  cmpdi 1, 7, 0
  05c5cbc  bf 6, 0x5c5c84
  05c5cc0  cmpdi 5, 0
  05c5cc4  bclr 12, 2
  05c5cc8  clrldi 0, 11, 62
  05c5ccc  cmpdi 1, 0, 1
  05c5cd0  bt 6, 0x5c5e5c
  05c5cd4  cmpdi 0, 2
  05c5cd8  bt 2, 0x5c5f2c
  05c5cdc  cmpdi 7, 0, 3
  05c5ce0  bt 30, 0x5c5d8c
  05c5ce4  clrldi 6, 11, 61
  05c5ce8  cmpdi 6, 6, 0
  05c5cec  bf 26, 0x5c6040
  05c5cf0  cmpldi 7, 5, 256
  05c5cf4  bf 29, 0x5c5aec
  05c5cf8  addi 5, 5, -48
  05c5cfc  ld 7, 0(4)
  05c5d00  ld 0, 8(4)
  05c5d04  cmpldi 5, 47
  05c5d08  ld 9, 16(4)
  05c5d0c  ld 6, 24(4)
  05c5d10  ld 10, 32(4)
  05c5d14  ld 8, 40(4)
  05c5d18  addi 4, 4, 48
  05c5d1c  std 7, 0(11)
  05c5d20  std 0, 8(11)
  05c5d24  std 9, 16(11)
  05c5d28  std 6, 24(11)
  05c5d2c  std 10, 32(11)
  05c5d30  std 8, 40(11)
  05c5d34  addi 11, 11, 48
  05c5d38  bf 1, 0x5c5aec
  05c5d3c  ld 0, 0(4)
  05c5d40  addi 5, 5, -48
  05c5d44  ld 9, 8(4)
  05c5d48  ld 6, 16(4)
  05c5d4c  ld 10, 24(4)
  05c5d50  ld 8, 32(4)
  05c5d54  ld 7, 40(4)
  05c5d58  addi 4, 4, 48
  05c5d5c  std 0, 0(11)
  05c5d60  std 9, 8(11)
  05c5d64  addi 12, 4, 256
  05c5d68  std 6, 16(11)
  05c5d6c  std 10, 24(11)
  05c5d70  std 8, 32(11)
  05c5d74  std 7, 40(11)
  05c5d78  addi 11, 11, 48
  05c5d7c  dcbt 0, 12
  05c5d80  cmpldi 7, 5, 47
  05c5d84  bt 29, 0x5c5cf8
  05c5d88  b 0x5c5aec
  05c5d8c  cmpldi 5, 15
  05c5d90  bf 1, 0x5c5b14
  05c5d94  rldicl 7, 5, 60, 4
  05c5d98  mtctr 7
  05c5d9c  ld 7, 0(4)
  05c5da0  addi 8, 4, 128
  05c5da4  addi 5, 5, -16
  05c5da8  ld 12, 8(4)
  05c5dac  addi 4, 4, 16
  05c5db0  sldi 10, 7, 8
  05c5db4  rldicl 6, 12, 8, 56
  05c5db8  dcbt 0, 8
  05c5dbc  stb 12, 15(11)
  05c5dc0  rldicl 8, 7, 8, 56
  05c5dc4  or 9, 6, 10
  05c5dc8  rldicl 0, 7, 40, 24
  05c5dcc  stb 8, 0(11)
  05c5dd0  rldicl 10, 12, 40, 24
  05c5dd4  stw 9, 5(11)
  05c5dd8  rldicl 6, 12, 56, 8
  05c5ddc  stw 0, 1(11)
  05c5de0  stw 10, 9(11)
  05c5de4  sth 6, 13(11)
  05c5de8  addi 11, 11, 16
  05c5dec  bdnz 0x5c5d9c
  05c5df0  b 0x5c5b14
  05c5df4  cmpldi 1, 5, 15
  05c5df8  bf 5, 0x5c5c68
  05c5dfc  rldicl 6, 5, 60, 4
  05c5e00  mtctr 6
  05c5e04  addi 4, 4, -16
  05c5e08  addi 11, 11, -16
  05c5e0c  addi 5, 5, -16
  05c5e10  ld 10, 8(4)
  05c5e14  ld 12, 0(4)
  05c5e18  addi 8, 4, -128
  05c5e1c  rldicl 0, 10, 8, 56
  05c5e20  stb 10, 15(11)
  05c5e24  sldi 9, 12, 8
  05c5e28  rldicl 7, 12, 8, 56
  05c5e2c  dcbt 0, 8
  05c5e30  or 6, 0, 9
  05c5e34  rldicl 8, 10, 56, 8
  05c5e38  stb 7, 0(11)
  05c5e3c  rldicl 9, 10, 40, 24
  05c5e40  stw 6, 5(11)
  05c5e44  rldicl 0, 12, 40, 24
  05c5e48  sth 8, 13(11)
  05c5e4c  stw 9, 9(11)
  05c5e50  stw 0, 1(11)
  05c5e54  bdnz 0x5c5e04
  05c5e58  b 0x5c5c68
  05c5e5c  cmpldi 6, 5, 15
  05c5e60  bf 25, 0x5c5b14
  05c5e64  rldicl 8, 5, 60, 4
  05c5e68  mtctr 8
  05c5e6c  ld 12, 0(4)
  05c5e70  addi 8, 4, 128
  05c5e74  addi 5, 5, -16
  05c5e78  ld 10, 8(4)
  05c5e7c  addi 4, 4, 16
  05c5e80  sldi 6, 12, 24
  05c5e84  rldicl 9, 10, 24, 40
  05c5e88  dcbt 0, 8
  05c5e8c  stb 10, 15(11)
  05c5e90  rldicl 7, 12, 8, 56
  05c5e94  or 9, 9, 6
  05c5e98  rldicl 8, 12, 24, 40
  05c5e9c  stb 7, 0(11)
  05c5ea0  rldicl 0, 12, 56, 8
  05c5ea4  stw 9, 7(11)
  05c5ea8  rldicl 6, 10, 56, 8
  05c5eac  sth 8, 1(11)
  05c5eb0  stw 0, 3(11)
  05c5eb4  stw 6, 11(11)
  05c5eb8  addi 11, 11, 16
  05c5ebc  bdnz 0x5c5e6c
  05c5ec0  b 0x5c5b14
  05c5ec4  cmpldi 7, 5, 15
  05c5ec8  bf 29, 0x5c5c68
  05c5ecc  rldicl 6, 5, 60, 4
  05c5ed0  mtctr 6
  05c5ed4  addi 4, 4, -16
  05c5ed8  addi 11, 11, -16
  05c5edc  addi 5, 5, -16
  05c5ee0  ld 6, 0(4)
  05c5ee4  ld 8, 8(4)
  05c5ee8  addi 10, 4, -128
  05c5eec  sldi 12, 6, 24
  05c5ef0  rldicl 0, 8, 24, 40
  05c5ef4  stb 8, 15(11)
  05c5ef8  rldicl 7, 6, 8, 56
  05c5efc  dcbt 0, 10
  05c5f00  or 9, 0, 12
  05c5f04  rldicl 10, 8, 56, 8
  05c5f08  stb 7, 0(11)
  05c5f0c  rldicl 12, 6, 56, 8
  05c5f10  stw 9, 7(11)
  05c5f14  rldicl 0, 6, 24, 40
  05c5f18  stw 10, 11(11)
  05c5f1c  stw 12, 3(11)
  05c5f20  sth 0, 1(11)
  05c5f24  bdnz 0x5c5ed4
  05c5f28  b 0x5c5c68
  05c5f2c  cmpldi 1, 5, 15
  05c5f30  bf 5, 0x5c5b14
  05c5f34  rldicl 10, 5, 60, 4
  05c5f38  mtctr 10
  05c5f3c  ld 12, 0(4)
  05c5f40  addi 8, 4, 128
  05c5f44  addi 5, 5, -16
  05c5f48  ld 6, 8(4)
  05c5f4c  addi 4, 4, 16
  05c5f50  sldi 10, 12, 16
  05c5f54  rldicl 7, 6, 16, 48
  05c5f58  dcbt 0, 8
  05c5f5c  sth 6, 14(11)
  05c5f60  rldicl 8, 12, 16, 48
  05c5f64  or 9, 7, 10
  05c5f68  rldicl 0, 12, 48, 16
  05c5f6c  sth 8, 0(11)
  05c5f70  rldicl 7, 6, 48, 16
  05c5f74  stw 9, 6(11)
  05c5f78  stw 0, 2(11)
  05c5f7c  stw 7, 10(11)
  05c5f80  addi 11, 11, 16
  05c5f84  bdnz 0x5c5f3c
  05c5f88  b 0x5c5b14
  05c5f8c  cmpldi 6, 5, 15
  05c5f90  bf 25, 0x5c5c68
  05c5f94  rldicl 8, 5, 60, 4
  05c5f98  mtctr 8
  05c5f9c  addi 4, 4, -16
  05c5fa0  addi 11, 11, -16
  05c5fa4  addi 5, 5, -16
  05c5fa8  ld 12, 8(4)
  05c5fac  ld 8, 0(4)
  05c5fb0  addi 10, 4, -128
  05c5fb4  rldicl 0, 12, 16, 48
  05c5fb8  sth 12, 14(11)
  05c5fbc  sldi 6, 8, 16
  05c5fc0  rldicl 7, 8, 16, 48
  05c5fc4  dcbt 0, 10
  05c5fc8  or 9, 0, 6
  05c5fcc  rldicl 10, 12, 48, 16
  05c5fd0  sth 7, 0(11)
  05c5fd4  rldicl 0, 8, 48, 16
  05c5fd8  stw 9, 6(11)
  05c5fdc  stw 10, 10(11)
  05c5fe0  stw 0, 2(11)
  05c5fe4  bdnz 0x5c5f9c
  05c5fe8  b 0x5c5c68
  05c5fec  cmpldi 7, 5, 23
  05c5ff0  bf 29, 0x5c5c68
  05c5ff4  addi 4, 4, -24
  05c5ff8  addi 5, 5, -24
  05c5ffc  addi 11, 11, -24
  05c6000  cmpldi 7, 5, 23
  05c6004  ld 10, 16(4)
  05c6008  addi 12, 4, -256
  05c600c  ld 8, 8(4)
  05c6010  ld 6, 0(4)
  05c6014  rldicl 0, 10, 32, 32
  05c6018  rldicl 9, 8, 32, 32
  05c601c  dcbt 0, 12
  05c6020  stw 10, 20(11)
  05c6024  rldicl 12, 6, 32, 32
  05c6028  stw 0, 16(11)
  05c602c  stw 9, 8(11)
  05c6030  stw 12, 0(11)
  05c6034  stw 8, 12(11)
  05c6038  stw 6, 4(11)
  05c603c  b 0x5c5ff0
  05c6040  cmpldi 7, 5, 23
  05c6044  bf 29, 0x5c5b14
  05c6048  ld 10, 0(4)
  05c604c  addi 6, 4, 256
  05c6050  addi 5, 5, -24
  05c6054  ld 8, 8(4)
  05c6058  ld 12, 16(4)
  05c605c  rldicl 0, 10, 32, 32
  05c6060  rldicl 9, 8, 32, 32
  05c6064  dcbt 0, 6
  05c6068  stw 10, 4(11)
  05c606c  rldicl 6, 12, 32, 32
  05c6070  stw 0, 0(11)
  05c6074  cmpldi 7, 5, 23
  05c6078  stw 9, 8(11)
  05c607c  stw 8, 12(11)
  05c6080  addi 4, 4, 24
  05c6084  stw 6, 16(11)
  05c6088  stw 12, 20(11)
  05c608c  addi 11, 11, 24
  05c6090  b 0x5c6044
