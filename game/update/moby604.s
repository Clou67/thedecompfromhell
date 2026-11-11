# game/update/moby604.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M604_003d8af0:   # 0x3d8af0, 0x58 bytes
  03d8af0  stdu 1, -128(1)
  03d8af4  mflr 0
  03d8af8  std 0, 144(1)
  03d8afc  std 31, 120(1)
  03d8b00  ori 31, 3, 0
  03d8b04  bl 0x48a718
  03d8b08  nop
  03d8b0c  cmpwi 3, 0
  03d8b10  bt 2, 0x3d8b20
  03d8b14  li 4, 11
  03d8b18  stb 4, 32(31)
  03d8b1c  b 0x3d8b34
  03d8b20  lbz 4, 32(31)
  03d8b24  cmpwi 4, 11
  03d8b28  bf 2, 0x3d8b34
  03d8b2c  li 4, 1
  03d8b30  stb 4, 32(31)
  03d8b34  ld 0, 144(1)
  03d8b38  mtlr 0
  03d8b3c  ld 31, 120(1)
  03d8b40  addi 1, 1, 128
  03d8b44  blr

M604_003d8b48:   # 0x3d8b48, 0x58 bytes
  03d8b48  stdu 1, -128(1)
  03d8b4c  mflr 0
  03d8b50  std 0, 144(1)
  03d8b54  std 31, 120(1)
  03d8b58  ori 31, 3, 0
  03d8b5c  bl 0x48aa70
  03d8b60  nop
  03d8b64  cmpwi 3, 0
  03d8b68  bt 2, 0x3d8b78
  03d8b6c  li 4, 11
  03d8b70  stb 4, 32(31)
  03d8b74  b 0x3d8b8c
  03d8b78  lbz 4, 32(31)
  03d8b7c  cmpwi 4, 11
  03d8b80  bf 2, 0x3d8b8c
  03d8b84  li 4, 1
  03d8b88  stb 4, 32(31)
  03d8b8c  ld 0, 144(1)
  03d8b90  mtlr 0
  03d8b94  ld 31, 120(1)
  03d8b98  addi 1, 1, 128
  03d8b9c  blr

M604_003d8ba0:   # 0x3d8ba0, 0x58 bytes
  03d8ba0  stdu 1, -128(1)
  03d8ba4  mflr 0
  03d8ba8  std 0, 144(1)
  03d8bac  std 31, 120(1)
  03d8bb0  ori 31, 3, 0
  03d8bb4  bl 0x48acb8
  03d8bb8  nop
  03d8bbc  cmpwi 3, 0
  03d8bc0  bt 2, 0x3d8bd0
  03d8bc4  li 4, 11
  03d8bc8  stb 4, 32(31)
  03d8bcc  b 0x3d8be4
  03d8bd0  lbz 4, 32(31)
  03d8bd4  cmpwi 4, 11
  03d8bd8  bf 2, 0x3d8be4
  03d8bdc  li 4, 1
  03d8be0  stb 4, 32(31)
  03d8be4  ld 0, 144(1)
  03d8be8  mtlr 0
  03d8bec  ld 31, 120(1)
  03d8bf0  addi 1, 1, 128
  03d8bf4  blr

M604_003d8bf8:   # 0x3d8bf8, 0x38 bytes
  03d8bf8  stdu 1, -128(1)
  03d8bfc  mflr 0
  03d8c00  std 0, 144(1)
  03d8c04  std 31, 120(1)
  03d8c08  ori 31, 3, 0
  03d8c0c  bl 0x48afe8
  03d8c10  nop
  03d8c14  li 4, 11
  03d8c18  stb 4, 32(31)
  03d8c1c  ld 0, 144(1)
  03d8c20  mtlr 0
  03d8c24  ld 31, 120(1)
  03d8c28  addi 1, 1, 128
  03d8c2c  blr

M604_003d8c30:   # 0x3d8c30, 0x40 bytes
  03d8c30  cmpwi 3, 0
  03d8c34  bt 2, 0x3d8c68
  03d8c38  li 4, 0
  03d8c3c  lwz 3, 120(3)
  03d8c40  li 5, 0
  03d8c44  subc 4, 4, 3
  03d8c48  addic 3, 3, 64
  03d8c4c  cntlzw 4, 4
  03d8c50  subc 5, 5, 3
  03d8c54  sldi 4, 4, 58
  03d8c58  sradi 4, 4, 63
  03d8c5c  and 4, 4, 5
  03d8c60  addc 3, 3, 4
  03d8c64  b 0x3d8c6c
  03d8c68  li 3, 0
  03d8c6c  blr

M604_003d8c70:   # 0x3d8c70, 0x14 bytes
  03d8c70  lis 3, 133
  03d8c74  lis 4, 1
  03d8c78  addic 3, 3, 13964
  03d8c7c  stw 4, 72(3)
  03d8c80  blr

UpdateMoby_604:   # 0x3d8ca0, 0x4fc bytes
  03d8ca0  stdu 1, -144(1)
  03d8ca4  mflr 0
  03d8ca8  std 0, 160(1)
  03d8cac  std 31, 136(1)
  03d8cb0  cmpwi 3, 0
  03d8cb4  std 30, 128(1)
  03d8cb8  ori 31, 3, 0
  03d8cbc  bt 2, 0x3d9184
  03d8cc0  lwz 30, 120(31)
  03d8cc4  cmpwi 30, 0
  03d8cc8  bt 2, 0x3d8d3c
  03d8ccc  lbz 3, 32(31)
  03d8cd0  cmpwi 3, 0
  03d8cd4  bt 2, 0x3d8d3c
  03d8cd8  lis 3, 151
  03d8cdc  addic 3, 3, -16064
  03d8ce0  lbz 3, 5(3)
  03d8ce4  cmpwi 3, 0
  03d8ce8  bt 2, 0x3d8d3c
  03d8cec  lis 3, 151
  03d8cf0  addic 3, 3, -25376
  03d8cf4  lwz 3, 4440(3)
  03d8cf8  cmpwi 3, 5
  03d8cfc  bf 2, 0x3d8d3c
  03d8d00  lis 3, 62
  03d8d04  lfs 1, 72(31)
  03d8d08  lis 4, 114
  03d8d0c  lfs 2, 0(30)
  03d8d10  addi 3, 3, -29560
  03d8d14  addic 5, 30, 4
  03d8d18  lfs 3, 0(3)
  03d8d1c  lfs 4, 4(3)
  03d8d20  lfs 6, -3048(4)
  03d8d24  lfs 5, 8(3)
  03d8d28  fmuls 3, 6, 3
  03d8d2c  fmuls 4, 6, 4
  03d8d30  bl 0xff190
  03d8d34  nop
  03d8d38  stfs 1, 72(31)
  03d8d3c  lbz 3, 32(31)
  03d8d40  cmpwi 3, 7
  03d8d44  cmpwi 1, 3, 6
  03d8d48  cmpwi 6, 3, 5
  03d8d4c  cmpwi 7, 3, 4
  03d8d50  bt 2, 0x3d9124
  03d8d54  bt 6, 0x3d9058
  03d8d58  bt 26, 0x3d8fe0
  03d8d5c  bt 30, 0x3d8f7c
  03d8d60  cmpwi 3, 3
  03d8d64  bt 2, 0x3d8eb0
  03d8d68  cmpwi 3, 2
  03d8d6c  bt 2, 0x3d8e4c
  03d8d70  cmpwi 3, 1
  03d8d74  bt 2, 0x3d8ddc
  03d8d78  cmpwi 3, 0
  03d8d7c  bf 2, 0x3d9184
  03d8d80  lbz 3, 83(31)
  03d8d84  cmpwi 3, 0
  03d8d88  bt 2, 0x3d8dc8
  03d8d8c  lis 3, 62
  03d8d90  lis 4, 114
  03d8d94  addi 3, 3, -29560
  03d8d98  li 5, 0
  03d8d9c  lfs 1, 12(3)
  03d8da0  lfs 2, -3056(4)
  03d8da4  ori 3, 31, 0
  03d8da8  li 4, 0
  03d8dac  fmuls 1, 2, 1
  03d8db0  fctiwz 1, 1
  03d8db4  stfd 1, 112(1)
  03d8db8  lwz 6, 116(1)
  03d8dbc  extsw 6, 6
  03d8dc0  bl 0xfddc0
  03d8dc4  nop
  03d8dc8  li 3, 1
  03d8dcc  lfs 1, 72(31)
  03d8dd0  stb 3, 32(31)
  03d8dd4  stfs 1, 0(30)
  03d8dd8  b 0x3d9184
  03d8ddc  lbz 3, 188(31)
  03d8de0  cmpwi 1, 3, 4
  03d8de4  cmpwi 3, 3
  03d8de8  cror 2, 2, 6
  03d8dec  bt 2, 0x3d8df8
  03d8df0  cmpwi 3, 5
  03d8df4  bf 2, 0x3d9184
  03d8df8  lbz 3, 83(31)
  03d8dfc  cmpwi 3, 1
  03d8e00  bt 2, 0x3d8e40
  03d8e04  lis 3, 62
  03d8e08  lis 4, 114
  03d8e0c  addi 3, 3, -29560
  03d8e10  li 5, 0
  03d8e14  lfs 1, 16(3)
  03d8e18  lfs 2, -3056(4)
  03d8e1c  ori 3, 31, 0
  03d8e20  li 4, 1
  03d8e24  fmuls 1, 2, 1
  03d8e28  fctiwz 1, 1
  03d8e2c  stfd 1, 112(1)
  03d8e30  lwz 6, 116(1)
  03d8e34  extsw 6, 6
  03d8e38  bl 0xfddc0
  03d8e3c  nop
  03d8e40  li 3, 2
  03d8e44  stb 3, 32(31)
  03d8e48  b 0x3d9184
  03d8e4c  lbz 3, 112(31)
  03d8e50  rlwinm 3, 3, 0, 30, 30
  03d8e54  cmpwi 3, 0
  03d8e58  bt 2, 0x3d9184
  03d8e5c  lbz 3, 83(31)
  03d8e60  cmpwi 3, 2
  03d8e64  bt 2, 0x3d8ea4
  03d8e68  lis 3, 62
  03d8e6c  lis 4, 114
  03d8e70  addi 3, 3, -29560
  03d8e74  li 5, 0
  03d8e78  lfs 1, 20(3)
  03d8e7c  lfs 2, -3056(4)
  03d8e80  ori 3, 31, 0
  03d8e84  fmuls 1, 2, 1
  03d8e88  li 4, 2
  03d8e8c  fctiwz 1, 1
  03d8e90  stfd 1, 112(1)
  03d8e94  lwz 6, 116(1)
  03d8e98  extsw 6, 6
  03d8e9c  bl 0xfddc0
  03d8ea0  nop
  03d8ea4  li 3, 3
  03d8ea8  stb 3, 32(31)
  03d8eac  b 0x3d9184
  03d8eb0  lbz 3, 188(31)
  03d8eb4  cmpwi 3, 4
  03d8eb8  cmpwi 1, 3, 5
  03d8ebc  cmpwi 6, 3, 7
  03d8ec0  cmpwi 7, 3, 1
  03d8ec4  bt 2, 0x3d8ecc
  03d8ec8  bf 6, 0x3d8f20
  03d8ecc  lbz 3, 83(31)
  03d8ed0  cmpwi 3, 3
  03d8ed4  bt 2, 0x3d8f14
  03d8ed8  lis 3, 62
  03d8edc  lis 4, 114
  03d8ee0  addi 3, 3, -29560
  03d8ee4  li 5, 0
  03d8ee8  lfs 1, 20(3)
  03d8eec  lfs 2, -3056(4)
  03d8ef0  ori 3, 31, 0
  03d8ef4  fmuls 1, 2, 1
  03d8ef8  li 4, 3
  03d8efc  fctiwz 1, 1
  03d8f00  stfd 1, 112(1)
  03d8f04  lwz 6, 116(1)
  03d8f08  extsw 6, 6
  03d8f0c  bl 0xfddc0
  03d8f10  nop
  03d8f14  li 3, 4
  03d8f18  stb 3, 32(31)
  03d8f1c  b 0x3d9184
  03d8f20  bt 26, 0x3d8f28
  03d8f24  bf 30, 0x3d9184
  03d8f28  lbz 3, 83(31)
  03d8f2c  cmpwi 3, 6
  03d8f30  bt 2, 0x3d8f70
  03d8f34  lis 3, 62
  03d8f38  lis 4, 114
  03d8f3c  addi 3, 3, -29560
  03d8f40  li 5, 0
  03d8f44  lfs 1, 20(3)
  03d8f48  lfs 2, -3056(4)
  03d8f4c  ori 3, 31, 0
  03d8f50  li 4, 6
  03d8f54  fmuls 1, 2, 1
  03d8f58  fctiwz 1, 1
  03d8f5c  stfd 1, 112(1)
  03d8f60  lwz 6, 116(1)
  03d8f64  extsw 6, 6
  03d8f68  bl 0xfddc0
  03d8f6c  nop
  03d8f70  li 3, 7
  03d8f74  stb 3, 32(31)
  03d8f78  b 0x3d9184
  03d8f7c  lbz 3, 112(31)
  03d8f80  rlwinm 3, 3, 0, 30, 30
  03d8f84  cmpwi 3, 0
  03d8f88  bt 2, 0x3d9184
  03d8f8c  lbz 3, 83(31)
  03d8f90  cmpwi 3, 4
  03d8f94  bt 2, 0x3d8fd4
  03d8f98  lis 3, 62
  03d8f9c  lis 4, 114
  03d8fa0  addi 3, 3, -29560
  03d8fa4  li 5, 0
  03d8fa8  lfs 1, 20(3)
  03d8fac  lfs 2, -3056(4)
  03d8fb0  ori 3, 31, 0
  03d8fb4  fmuls 1, 2, 1
  03d8fb8  li 4, 4
  03d8fbc  fctiwz 1, 1
  03d8fc0  stfd 1, 112(1)
  03d8fc4  lwz 6, 116(1)
  03d8fc8  extsw 6, 6
  03d8fcc  bl 0xfddc0
  03d8fd0  nop
  03d8fd4  li 3, 5
  03d8fd8  stb 3, 32(31)
  03d8fdc  b 0x3d9184
  03d8fe0  lbz 3, 188(31)
  03d8fe4  cmpwi 1, 3, 6
  03d8fe8  cmpwi 3, 3
  03d8fec  cror 2, 2, 6
  03d8ff0  bt 2, 0x3d9004
  03d8ff4  cmpwi 3, 7
  03d8ff8  bt 2, 0x3d9004
  03d8ffc  cmpwi 3, 1
  03d9000  bf 2, 0x3d9184
  03d9004  lbz 3, 83(31)
  03d9008  cmpwi 3, 5
  03d900c  bt 2, 0x3d904c
  03d9010  lis 3, 62
  03d9014  lis 4, 114
  03d9018  addi 3, 3, -29560
  03d901c  li 5, 0
  03d9020  lfs 1, 20(3)
  03d9024  lfs 2, -3056(4)
  03d9028  ori 3, 31, 0
  03d902c  fmuls 1, 2, 1
  03d9030  li 4, 5
  03d9034  fctiwz 1, 1
  03d9038  stfd 1, 112(1)
  03d903c  lwz 6, 116(1)
  03d9040  extsw 6, 6
  03d9044  bl 0xfddc0
  03d9048  nop
  03d904c  li 3, 6
  03d9050  stb 3, 32(31)
  03d9054  b 0x3d9184
  03d9058  lbz 3, 112(31)
  03d905c  rlwinm 3, 3, 0, 30, 30
  03d9060  cmpwi 3, 0
  03d9064  bt 2, 0x3d9184
  03d9068  lbz 3, 188(31)
  03d906c  cmpwi 3, 7
  03d9070  cmpwi 1, 3, 1
  03d9074  bt 2, 0x3d907c
  03d9078  bf 6, 0x3d90d0
  03d907c  lbz 3, 83(31)
  03d9080  cmpwi 3, 6
  03d9084  bt 2, 0x3d90c4
  03d9088  lis 3, 62
  03d908c  lis 4, 114
  03d9090  addi 3, 3, -29560
  03d9094  li 5, 0
  03d9098  lfs 1, 20(3)
  03d909c  lfs 2, -3056(4)
  03d90a0  ori 3, 31, 0
  03d90a4  fmuls 1, 2, 1
  03d90a8  li 4, 6
  03d90ac  fctiwz 1, 1
  03d90b0  stfd 1, 112(1)
  03d90b4  lwz 6, 116(1)
  03d90b8  extsw 6, 6
  03d90bc  bl 0xfddc0
  03d90c0  nop
  03d90c4  li 3, 7
  03d90c8  stb 3, 32(31)
  03d90cc  b 0x3d9184
  03d90d0  lbz 3, 83(31)
  03d90d4  cmpwi 3, 2
  03d90d8  bt 2, 0x3d9118
  03d90dc  lis 3, 62
  03d90e0  lis 4, 114
  03d90e4  addi 3, 3, -29560
  03d90e8  li 5, 0
  03d90ec  lfs 1, 20(3)
  03d90f0  lfs 2, -3056(4)
  03d90f4  ori 3, 31, 0
  03d90f8  li 4, 2
  03d90fc  fmuls 1, 2, 1
  03d9100  fctiwz 1, 1
  03d9104  stfd 1, 112(1)
  03d9108  lwz 6, 116(1)
  03d910c  extsw 6, 6
  03d9110  bl 0xfddc0
  03d9114  nop
  03d9118  li 3, 3
  03d911c  stb 3, 32(31)
  03d9120  b 0x3d9184
  03d9124  lbz 3, 112(31)
  03d9128  rlwinm 3, 3, 0, 30, 30
  03d912c  cmpwi 3, 0
  03d9130  bt 2, 0x3d9184
  03d9134  lbz 3, 83(31)
  03d9138  cmpwi 3, 0
  03d913c  bt 2, 0x3d917c
  03d9140  lis 3, 62
  03d9144  lis 4, 114
  03d9148  addi 3, 3, -29560
  03d914c  li 5, 0
  03d9150  lfs 1, 20(3)
  03d9154  lfs 2, -3056(4)
  03d9158  ori 3, 31, 0
  03d915c  fmuls 1, 2, 1
  03d9160  li 4, 0
  03d9164  fctiwz 1, 1
  03d9168  stfd 1, 112(1)
  03d916c  lwz 6, 116(1)
  03d9170  extsw 6, 6
  03d9174  bl 0xfddc0
  03d9178  nop
  03d917c  li 3, 1
  03d9180  stb 3, 32(31)
  03d9184  ld 0, 160(1)
  03d9188  mtlr 0
  03d918c  ld 30, 128(1)
  03d9190  ld 31, 136(1)
  03d9194  addi 1, 1, 144
  03d9198  blr
