# game/update/moby1126.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1126:   # 0x1d6b28, 0xd28 bytes
  01d6b28  stdu 1, -304(1)
  01d6b2c  mflr 0
  01d6b30  std 0, 320(1)
  01d6b34  stfd 31, 296(1)
  01d6b38  addi 0, 1, 240
  01d6b3c  stvx 31, 0, 0
  01d6b40  std 31, 288(1)
  01d6b44  cmpwi 3, 0
  01d6b48  std 30, 280(1)
  01d6b4c  std 29, 272(1)
  01d6b50  std 28, 264(1)
  01d6b54  ori 31, 3, 0
  01d6b58  bt 2, 0x1d7824
  01d6b5c  lwz 30, 120(31)
  01d6b60  cmpwi 30, 0
  01d6b64  bt 2, 0x1d7824
  01d6b68  ori 3, 31, 0
  01d6b6c  lis 4, 35
  01d6b70  addic 29, 30, 32
  01d6b74  li 5, 0
  01d6b78  bl 0x10675c
  01d6b7c  nop
  01d6b80  ori 4, 3, 0
  01d6b84  ori 3, 31, 0
  01d6b88  addic 7, 1, 144
  01d6b8c  li 10, 4
  01d6b90  ori 5, 29, 0
  01d6b94  li 6, 0
  01d6b98  li 8, 0
  01d6b9c  li 9, 0
  01d6ba0  bl 0x106840
  01d6ba4  nop
  01d6ba8  lbz 3, 32(31)
  01d6bac  cmpwi 3, 2
  01d6bb0  bf 0, 0x1d6c94
  01d6bb4  lwz 3, 144(1)
  01d6bb8  cmpwi 3, 1
  01d6bbc  bf 1, 0x1d6c94
  01d6bc0  li 3, 1
  01d6bc4  li 4, 0
  01d6bc8  ori 5, 31, 0
  01d6bcc  bl 0x15d12c
  01d6bd0  nop
  01d6bd4  ori 3, 31, 0
  01d6bd8  li 4, 0
  01d6bdc  li 5, -1
  01d6be0  bl 0xfd8d0
  01d6be4  nop
  01d6be8  li 3, 0
  01d6bec  lhz 4, 52(31)
  01d6bf0  lis 5, 29
  01d6bf4  li 6, 250
  01d6bf8  vspltisw 2, -1
  01d6bfc  rlwimi 4, 3, 0, 19, 19
  01d6c00  addi 5, 5, 27344
  01d6c04  lis 29, 114
  01d6c08  li 28, -3056
  01d6c0c  sth 4, 52(31)
  01d6c10  stb 6, 103(30)
  01d6c14  lvlx 3, 0, 5
  01d6c18  vslw 2, 2, 2
  01d6c1c  vspltw 31, 3, 0
  01d6c20  li 5, 38
  01d6c24  lvlx 3, 28, 29
  01d6c28  addic 4, 30, 96
  01d6c2c  ori 3, 31, 0
  01d6c30  vmaddfp 2, 3, 31, 2
  01d6c34  vctsxs 2, 2, 0
  01d6c38  vsplth 2, 2, 1
  01d6c3c  stvehx 2, 5, 30
  01d6c40  bl 0x10c808
  01d6c44  nop
  01d6c48  vspltisw 2, -1
  01d6c4c  lvlx 3, 28, 29
  01d6c50  li 3, 124
  01d6c54  vslw 2, 2, 2
  01d6c58  vmaddfp 2, 3, 31, 2
  01d6c5c  vctsxs 2, 2, 0
  01d6c60  vsplth 2, 2, 1
  01d6c64  stvehx 2, 3, 30
  01d6c68  lbz 3, 83(31)
  01d6c6c  cmpwi 3, 2
  01d6c70  bt 2, 0x1d6c8c
  01d6c74  ori 3, 31, 0
  01d6c78  li 4, 2
  01d6c7c  li 5, 0
  01d6c80  li 6, 5
  01d6c84  bl 0xfddc0
  01d6c88  nop
  01d6c8c  li 3, 2
  01d6c90  stb 3, 32(31)
  01d6c94  li 5, 255
  01d6c98  ori 3, 31, 0
  01d6c9c  addic 4, 30, 96
  01d6ca0  stb 5, 164(31)
  01d6ca4  bl 0x10c9a0
  01d6ca8  nop
  01d6cac  lbz 3, 32(31)
  01d6cb0  cmpwi 3, 4
  01d6cb4  bt 2, 0x1d7790
  01d6cb8  cmpwi 3, 3
  01d6cbc  bt 2, 0x1d7634
  01d6cc0  cmpwi 3, 2
  01d6cc4  bt 2, 0x1d7570
  01d6cc8  cmpwi 3, 1
  01d6ccc  bt 2, 0x1d71a0
  01d6cd0  cmpwi 3, 0
  01d6cd4  bf 2, 0x1d7824
  01d6cd8  lwz 3, 112(30)
  01d6cdc  cmpwi 3, -1
  01d6ce0  bt 2, 0x1d6ee8
  01d6ce4  lis 4, 164
  01d6ce8  slwi 3, 3, 8
  01d6cec  lwz 4, -28512(4)
  01d6cf0  lfs 1, 16(31)
  01d6cf4  addc 3, 4, 3
  01d6cf8  lfs 2, 20(31)
  01d6cfc  clrldi 3, 3, 32
  01d6d00  lis 4, 115
  01d6d04  lfs 3, 16(3)
  01d6d08  lfs 4, 20(3)
  01d6d0c  fsubs 1, 3, 1
  01d6d10  lis 3, 29
  01d6d14  fsubs 2, 4, 2
  01d6d18  addi 3, 3, 27344
  01d6d1c  addic 4, 4, 22784
  01d6d20  fabs 3, 1
  01d6d24  fabs 5, 2
  01d6d28  stfs 1, 160(1)
  01d6d2c  stfs 2, 164(1)
  01d6d30  fsubs 1, 3, 5
  01d6d34  stfs 1, 168(1)
  01d6d38  lwz 5, 160(1)
  01d6d3c  lfs 4, 4(3)
  01d6d40  lfs 1, 160(1)
  01d6d44  lwz 3, 164(1)
  01d6d48  lfs 2, 164(1)
  01d6d4c  lwz 6, 168(1)
  01d6d50  rlwinm 3, 3, 3, 29, 29
  01d6d54  fabs 6, 2
  01d6d58  lfs 2, 168(1)
  01d6d5c  fabs 1, 1
  01d6d60  rlwimi 3, 6, 2, 30, 30
  01d6d64  fsub 7, 2, 4
  01d6d68  rlwimi 3, 5, 4, 28, 28
  01d6d6c  fsub 8, 2, 4
  01d6d70  ori 5, 4, 0
  01d6d74  rlwimi 5, 3, 2, 26, 28
  01d6d78  slwi 3, 3, 2
  01d6d7c  clrldi 5, 5, 32
  01d6d80  fsel 5, 7, 1, 5
  01d6d84  lfsx 1, 4, 3
  01d6d88  lfs 2, 4(5)
  01d6d8c  fsel 3, 8, 6, 3
  01d6d90  fcmpu 0, 5, 4
  01d6d94  bt 1, 0x1d6da0
  01d6d98  fmr 1, 4
  01d6d9c  b 0x1d6ec4
  01d6da0  fsubs 6, 3, 5
  01d6da4  fadds 3, 3, 5
  01d6da8  addic 3, 1, 16
  01d6dac  li 7, 2
  01d6db0  addic 5, 3, 204
  01d6db4  addic 4, 3, 188
  01d6db8  mtctr 7
  01d6dbc  fdivs 3, 6, 3
  01d6dc0  fmuls 5, 3, 3
  01d6dc4  stfs 3, 216(1)
  01d6dc8  stfs 3, 208(1)
  01d6dcc  stfs 3, 212(1)
  01d6dd0  stfs 3, 204(1)
  01d6dd4  lfs 7, 216(1)
  01d6dd8  lfs 8, 208(1)
  01d6ddc  lfs 9, 212(1)
  01d6de0  fmuls 6, 5, 5
  01d6de4  fmuls 8, 8, 5
  01d6de8  fmuls 7, 7, 6
  01d6dec  fmuls 3, 6, 6
  01d6df0  fmuls 6, 9, 6
  01d6df4  stfs 8, 208(1)
  01d6df8  fmuls 5, 7, 5
  01d6dfc  stfs 6, 212(1)
  01d6e00  stfs 5, 216(1)
  01d6e04  lfs 5, 188(3)
  01d6e08  fmuls 5, 5, 3
  01d6e0c  stfs 5, 204(3)
  01d6e10  lfs 5, 4(4)
  01d6e14  addic 4, 4, 8
  01d6e18  fmuls 5, 5, 3
  01d6e1c  addic 3, 3, 8
  01d6e20  stfs 5, 4(5)
  01d6e24  addic 5, 5, 8
  01d6e28  bdnz 0x1d6e04
  01d6e2c  li 5, 4
  01d6e30  ori 3, 1, 0
  01d6e34  mtctr 5
  01d6e38  lis 4, 115
  01d6e3c  addic 5, 3, 204
  01d6e40  addic 4, 4, 22752
  01d6e44  ori 6, 5, 0
  01d6e48  lfs 3, 204(3)
  01d6e4c  lfs 5, 0(4)
  01d6e50  fmuls 3, 3, 5
  01d6e54  lfs 5, 4(4)
  01d6e58  addic 4, 4, 8
  01d6e5c  stfs 3, 204(3)
  01d6e60  lfs 3, 4(5)
  01d6e64  addic 3, 3, 8
  01d6e68  fmuls 3, 3, 5
  01d6e6c  stfs 3, 4(5)
  01d6e70  addic 5, 5, 8
  01d6e74  bdnz 0x1d6e48
  01d6e78  ori 3, 1, 0
  01d6e7c  fmr 3, 4
  01d6e80  mtctr 7
  01d6e84  lfs 5, 204(3)
  01d6e88  fadds 3, 3, 5
  01d6e8c  lfs 5, 4(6)
  01d6e90  addic 3, 3, 16
  01d6e94  lfs 6, 8(6)
  01d6e98  lfs 7, 12(6)
  01d6e9c  addic 6, 6, 16
  01d6ea0  fadds 3, 3, 5
  01d6ea4  fadds 3, 3, 6
  01d6ea8  fadds 3, 3, 7
  01d6eac  bdnz 0x1d6e84
  01d6eb0  lis 3, 29
  01d6eb4  addi 3, 3, 27344
  01d6eb8  lfs 5, 8(3)
  01d6ebc  fadds 3, 3, 5
  01d6ec0  fmadds 1, 3, 1, 2
  01d6ec4  fcmpu 0, 1, 4
  01d6ec8  stfs 1, 128(30)
  01d6ecc  cror 6, 1, 2
  01d6ed0  bt 6, 0x1d6ee8
  01d6ed4  lis 3, 29
  01d6ed8  addi 3, 3, 27344
  01d6edc  lfs 2, 12(3)
  01d6ee0  fadds 1, 1, 2
  01d6ee4  stfs 1, 128(30)
  01d6ee8  lwz 3, 116(30)
  01d6eec  cmpwi 3, -1
  01d6ef0  bt 2, 0x1d7124
  01d6ef4  lis 4, 164
  01d6ef8  slwi 3, 3, 8
  01d6efc  lwz 4, -28512(4)
  01d6f00  lfs 1, 16(31)
  01d6f04  addc 3, 4, 3
  01d6f08  lfs 2, 20(31)
  01d6f0c  clrldi 3, 3, 32
  01d6f10  lis 4, 115
  01d6f14  lfs 3, 16(3)
  01d6f18  lfs 4, 20(3)
  01d6f1c  fsubs 1, 3, 1
  01d6f20  lis 3, 29
  01d6f24  fsubs 2, 4, 2
  01d6f28  addi 3, 3, 27344
  01d6f2c  addic 4, 4, 22784
  01d6f30  fabs 3, 1
  01d6f34  fabs 5, 2
  01d6f38  stfs 1, 148(1)
  01d6f3c  stfs 2, 152(1)
  01d6f40  fsubs 1, 3, 5
  01d6f44  stfs 1, 156(1)
  01d6f48  lwz 5, 148(1)
  01d6f4c  lfs 4, 4(3)
  01d6f50  lfs 1, 148(1)
  01d6f54  lwz 3, 152(1)
  01d6f58  lfs 2, 152(1)
  01d6f5c  lwz 6, 156(1)
  01d6f60  rlwinm 3, 3, 3, 29, 29
  01d6f64  fabs 6, 2
  01d6f68  lfs 2, 156(1)
  01d6f6c  fabs 1, 1
  01d6f70  rlwimi 3, 6, 2, 30, 30
  01d6f74  fsub 7, 2, 4
  01d6f78  rlwimi 3, 5, 4, 28, 28
  01d6f7c  fsub 8, 2, 4
  01d6f80  ori 5, 4, 0
  01d6f84  rlwimi 5, 3, 2, 26, 28
  01d6f88  slwi 3, 3, 2
  01d6f8c  clrldi 5, 5, 32
  01d6f90  fsel 5, 7, 1, 5
  01d6f94  lfsx 1, 4, 3
  01d6f98  lfs 2, 4(5)
  01d6f9c  fsel 3, 8, 6, 3
  01d6fa0  fcmpu 0, 5, 4
  01d6fa4  bt 1, 0x1d6fb0
  01d6fa8  fmr 1, 4
  01d6fac  b 0x1d70d4
  01d6fb0  fsubs 6, 3, 5
  01d6fb4  fadds 3, 3, 5
  01d6fb8  addic 3, 1, 16
  01d6fbc  li 7, 2
  01d6fc0  addic 5, 3, 172
  01d6fc4  addic 4, 3, 156
  01d6fc8  mtctr 7
  01d6fcc  fdivs 3, 6, 3
  01d6fd0  fmuls 5, 3, 3
  01d6fd4  stfs 3, 184(1)
  01d6fd8  stfs 3, 176(1)
  01d6fdc  stfs 3, 180(1)
  01d6fe0  stfs 3, 172(1)
  01d6fe4  lfs 7, 184(1)
  01d6fe8  lfs 8, 176(1)
  01d6fec  lfs 9, 180(1)
  01d6ff0  fmuls 6, 5, 5
  01d6ff4  fmuls 8, 8, 5
  01d6ff8  fmuls 7, 7, 6
  01d6ffc  fmuls 3, 6, 6
  01d7000  fmuls 6, 9, 6
  01d7004  stfs 8, 176(1)
  01d7008  fmuls 5, 7, 5
  01d700c  stfs 6, 180(1)
  01d7010  stfs 5, 184(1)
  01d7014  lfs 5, 156(3)
  01d7018  fmuls 5, 5, 3
  01d701c  stfs 5, 172(3)
  01d7020  lfs 5, 4(4)
  01d7024  addic 4, 4, 8
  01d7028  fmuls 5, 5, 3
  01d702c  addic 3, 3, 8
  01d7030  stfs 5, 4(5)
  01d7034  addic 5, 5, 8
  01d7038  bdnz 0x1d7014
  01d703c  li 5, 4
  01d7040  ori 3, 1, 0
  01d7044  mtctr 5
  01d7048  lis 4, 115
  01d704c  addic 5, 3, 172
  01d7050  addic 4, 4, 22752
  01d7054  ori 6, 5, 0
  01d7058  lfs 3, 172(3)
  01d705c  lfs 5, 0(4)
  01d7060  fmuls 3, 3, 5
  01d7064  lfs 5, 4(4)
  01d7068  addic 4, 4, 8
  01d706c  stfs 3, 172(3)
  01d7070  lfs 3, 4(5)
  01d7074  addic 3, 3, 8
  01d7078  fmuls 3, 3, 5
  01d707c  stfs 3, 4(5)
  01d7080  addic 5, 5, 8
  01d7084  bdnz 0x1d7058
  01d7088  ori 3, 1, 0
  01d708c  fmr 3, 4
  01d7090  mtctr 7
  01d7094  lfs 5, 172(3)
  01d7098  fadds 3, 3, 5
  01d709c  lfs 5, 4(6)
  01d70a0  addic 3, 3, 16
  01d70a4  lfs 6, 8(6)
  01d70a8  lfs 7, 12(6)
  01d70ac  addic 6, 6, 16
  01d70b0  fadds 3, 3, 5
  01d70b4  fadds 3, 3, 6
  01d70b8  fadds 3, 3, 7
  01d70bc  bdnz 0x1d7094
  01d70c0  lis 3, 29
  01d70c4  addi 3, 3, 27344
  01d70c8  lfs 5, 8(3)
  01d70cc  fadds 3, 3, 5
  01d70d0  fmadds 1, 3, 1, 2
  01d70d4  fmr 2, 1
  01d70d8  stfs 1, 132(30)
  01d70dc  fcmpu 0, 2, 4
  01d70e0  cror 6, 1, 2
  01d70e4  bt 6, 0x1d70fc
  01d70e8  lis 3, 29
  01d70ec  addi 3, 3, 27344
  01d70f0  lfs 2, 12(3)
  01d70f4  fadds 2, 1, 2
  01d70f8  stfs 2, 132(30)
  01d70fc  lfs 1, 128(30)
  01d7100  fcmpu 0, 2, 1
  01d7104  cror 6, 1, 2
  01d7108  bt 6, 0x1d713c
  01d710c  lis 3, 29
  01d7110  addi 3, 3, 27344
  01d7114  lfs 3, 12(3)
  01d7118  fadds 2, 2, 3
  01d711c  stfs 2, 132(30)
  01d7120  b 0x1d713c
  01d7124  lis 3, 29
  01d7128  lfs 1, 128(30)
  01d712c  addi 3, 3, 27344
  01d7130  lfs 2, 12(3)
  01d7134  fadds 2, 1, 2
  01d7138  stfs 2, 132(30)
  01d713c  fsubs 2, 2, 1
  01d7140  li 29, 0
  01d7144  stw 29, 136(30)
  01d7148  stfs 2, 140(30)
  01d714c  bl 0x10de78
  01d7150  nop
  01d7154  lfs 2, 24(31)
  01d7158  stfs 1, 72(31)
  01d715c  stfs 2, 144(30)
  01d7160  stb 29, 41(30)
  01d7164  stb 29, 188(31)
  01d7168  lwz 3, 148(30)
  01d716c  sth 3, 156(30)
  01d7170  lbz 3, 83(31)
  01d7174  cmpwi 3, 1
  01d7178  bt 2, 0x1d7194
  01d717c  ori 3, 31, 0
  01d7180  li 4, 1
  01d7184  li 5, 0
  01d7188  li 6, 0
  01d718c  bl 0xfddc0
  01d7190  nop
  01d7194  li 3, 1
  01d7198  stb 3, 32(31)
  01d719c  b 0x1d7824
  01d71a0  lbz 3, 82(31)
  01d71a4  cmpwi 3, 1
  01d71a8  bt 2, 0x1d71e0
  01d71ac  lbz 3, 112(31)
  01d71b0  rlwinm 3, 3, 0, 30, 30
  01d71b4  cmpwi 3, 0
  01d71b8  bt 2, 0x1d71e0
  01d71bc  lbz 3, 83(31)
  01d71c0  cmpwi 3, 1
  01d71c4  bt 2, 0x1d71e0
  01d71c8  ori 3, 31, 0
  01d71cc  li 4, 1
  01d71d0  li 5, 0
  01d71d4  li 6, 1
  01d71d8  bl 0xfddc0
  01d71dc  nop
  01d71e0  lhz 3, 126(30)
  01d71e4  cmpwi 3, 0
  01d71e8  bt 2, 0x1d7238
  01d71ec  lis 3, 29
  01d71f0  lfs 1, 120(30)
  01d71f4  lis 4, 114
  01d71f8  addi 3, 3, 27344
  01d71fc  lfs 2, 16(3)
  01d7200  lfs 3, 136(30)
  01d7204  fmuls 2, 1, 2
  01d7208  lfs 4, -3052(4)
  01d720c  fnmsubs 2, 2, 4, 3
  01d7210  stfs 2, 136(30)
  01d7214  lfs 1, 4(3)
  01d7218  fcmpu 0, 2, 1
  01d721c  cror 6, 1, 2
  01d7220  bt 6, 0x1d7280
  01d7224  li 3, 0
  01d7228  fmr 2, 1
  01d722c  sth 3, 126(30)
  01d7230  stw 3, 136(30)
  01d7234  b 0x1d7280
  01d7238  lis 3, 29
  01d723c  lfs 2, 120(30)
  01d7240  lis 4, 114
  01d7244  addi 3, 3, 27344
  01d7248  lfs 3, 16(3)
  01d724c  lfs 4, 136(30)
  01d7250  fmuls 2, 2, 3
  01d7254  lfs 5, -3052(4)
  01d7258  lfs 1, 140(30)
  01d725c  fmadds 2, 2, 5, 4
  01d7260  fcmpu 0, 2, 1
  01d7264  stfs 2, 136(30)
  01d7268  cror 6, 0, 2
  01d726c  bt 6, 0x1d7280
  01d7270  li 3, 1
  01d7274  fmr 2, 1
  01d7278  sth 3, 126(30)
  01d727c  stfs 1, 136(30)
  01d7280  lfs 1, 128(30)
  01d7284  fadds 1, 1, 2
  01d7288  bl 0x10de78
  01d728c  nop
  01d7290  addic 3, 30, 124
  01d7294  stfs 1, 72(31)
  01d7298  bl 0x4fffb4
  01d729c  nop
  01d72a0  cmpwi 3, 0
  01d72a4  bt 2, 0x1d7824
  01d72a8  lbz 3, 188(31)
  01d72ac  cmpwi 3, 0
  01d72b0  bf 2, 0x1d7428
  01d72b4  lwz 3, 152(30)
  01d72b8  cmpwi 3, 0
  01d72bc  bt 2, 0x1d72d0
  01d72c0  lhz 4, 156(30)
  01d72c4  clrlwi 4, 4, 31
  01d72c8  cmpwi 4, 0
  01d72cc  bt 2, 0x1d73e8
  01d72d0  addic 29, 1, 112
  01d72d4  ori 3, 31, 0
  01d72d8  li 4, 0
  01d72dc  ori 5, 29, 0
  01d72e0  bl 0xf1114
  01d72e4  nop
  01d72e8  lis 3, 29
  01d72ec  lfs 1, 72(31)
  01d72f0  addi 3, 3, 27344
  01d72f4  lfs 2, 20(3)
  01d72f8  lfs 3, 24(3)
  01d72fc  fadds 2, 1, 2
  01d7300  lfs 4, 28(3)
  01d7304  fsubs 5, 3, 1
  01d7308  li 6, 0
  01d730c  li 4, 0
  01d7310  ori 5, 31, 0
  01d7314  fsubs 3, 3, 2
  01d7318  fsub 7, 1, 5
  01d731c  fsubs 6, 4, 2
  01d7320  fsubs 4, 4, 1
  01d7324  fsub 8, 2, 3
  01d7328  fsel 1, 7, 5, 1
  01d732c  fsel 2, 8, 3, 2
  01d7330  fsub 5, 4, 1
  01d7334  lfs 3, 32(3)
  01d7338  fsub 7, 6, 2
  01d733c  fsel 1, 5, 4, 1
  01d7340  lfs 4, 36(3)
  01d7344  lfs 5, 40(3)
  01d7348  lfs 8, 44(3)
  01d734c  lfs 10, 48(3)
  01d7350  lis 3, 114
  01d7354  fsel 2, 7, 6, 2
  01d7358  fmuls 6, 1, 1
  01d735c  fmuls 7, 2, 2
  01d7360  fmuls 9, 6, 1
  01d7364  fmuls 11, 7, 2
  01d7368  fmuls 12, 6, 9
  01d736c  fmadds 1, 9, 3, 1
  01d7370  fmuls 9, 7, 11
  01d7374  fmadds 2, 11, 3, 2
  01d7378  fmuls 3, 6, 12
  01d737c  fmadds 1, 12, 4, 1
  01d7380  lfs 11, -3052(3)
  01d7384  stw 6, 136(1)
  01d7388  li 3, 0
  01d738c  fmuls 12, 11, 10
  01d7390  fmuls 13, 7, 9
  01d7394  fmadds 2, 9, 4, 2
  01d7398  fmuls 4, 6, 3
  01d739c  fmadds 1, 3, 5, 1
  01d73a0  fmuls 3, 7, 13
  01d73a4  fmadds 2, 13, 5, 2
  01d73a8  fmuls 5, 11, 10
  01d73ac  fmadds 1, 4, 8, 1
  01d73b0  fmadds 2, 3, 8, 2
  01d73b4  fmuls 1, 5, 1
  01d73b8  fmuls 2, 12, 2
  01d73bc  stfs 1, 132(1)
  01d73c0  stfs 2, 128(1)
  01d73c4  bl 0x15d12c
  01d73c8  nop
  01d73cc  lbz 6, 158(30)
  01d73d0  ori 3, 29, 0
  01d73d4  addic 4, 1, 128
  01d73d8  ori 5, 31, 0
  01d73dc  bl 0x49fba0
  01d73e0  nop
  01d73e4  lwz 3, 152(30)
  01d73e8  cmpwi 3, 0
  01d73ec  bt 2, 0x1d7418
  01d73f0  addic 3, 30, 156
  01d73f4  bl 0x4fffb4
  01d73f8  nop
  01d73fc  cmpwi 3, 0
  01d7400  bt 2, 0x1d744c
  01d7404  li 3, 1
  01d7408  stb 3, 188(31)
  01d740c  lwz 3, 152(30)
  01d7410  sth 3, 156(30)
  01d7414  b 0x1d744c
  01d7418  lhz 3, 156(30)
  01d741c  xori 3, 3, 1
  01d7420  sth 3, 156(30)
  01d7424  b 0x1d744c
  01d7428  addic 3, 30, 156
  01d742c  bl 0x4fffb4
  01d7430  nop
  01d7434  cmpwi 3, 0
  01d7438  bt 2, 0x1d744c
  01d743c  li 3, 0
  01d7440  stb 3, 188(31)
  01d7444  lwz 3, 148(30)
  01d7448  sth 3, 156(30)
  01d744c  lis 3, 29
  01d7450  vspltisw 2, -1
  01d7454  li 5, 52
  01d7458  addi 3, 3, 27344
  01d745c  lis 4, 114
  01d7460  li 6, -3056
  01d7464  vslw 2, 2, 2
  01d7468  lvlx 3, 5, 3
  01d746c  lis 5, 151
  01d7470  vspltw 3, 3, 0
  01d7474  lvlx 4, 6, 4
  01d7478  addic 5, 5, -25376
  01d747c  li 4, 124
  01d7480  vmaddfp 2, 4, 3, 2
  01d7484  vctsxs 2, 2, 0
  01d7488  vsplth 3, 2, 1
  01d748c  stvehx 3, 4, 30
  01d7490  lfs 1, 20(31)
  01d7494  lfs 2, 132(5)
  01d7498  lfs 3, 16(31)
  01d749c  fsubs 1, 1, 2
  01d74a0  lfs 2, 128(5)
  01d74a4  fsubs 2, 3, 2
  01d74a8  fmuls 1, 1, 1
  01d74ac  fmadds 1, 2, 2, 1
  01d74b0  lfs 2, 56(3)
  01d74b4  fsqrts 1, 1
  01d74b8  fcmpu 0, 1, 2
  01d74bc  bt 1, 0x1d74e4
  01d74c0  lis 3, 29
  01d74c4  addi 3, 3, 27344
  01d74c8  lfs 2, 60(3)
  01d74cc  fcmpu 0, 1, 2
  01d74d0  cror 6, 0, 2
  01d74d4  bt 6, 0x1d7824
  01d74d8  lbz 3, 49(31)
  01d74dc  cmpwi 3, 0
  01d74e0  bf 2, 0x1d7824
  01d74e4  lis 3, 29
  01d74e8  addi 3, 3, 27344
  01d74ec  lfs 2, 64(3)
  01d74f0  fcmpu 0, 1, 2
  01d74f4  cror 6, 0, 2
  01d74f8  bt 6, 0x1d7520
  01d74fc  vspltisw 3, 3
  01d7500  vspltisw 4, -16
  01d7504  vspltisw 5, 0
  01d7508  vrlw 6, 3, 4
  01d750c  vmulouh 3, 2, 3
  01d7510  vmsumshm 2, 2, 6, 5
  01d7514  vslw 2, 2, 4
  01d7518  vadduwm 2, 2, 3
  01d751c  b 0x1d7560
  01d7520  lis 3, 29
  01d7524  vspltisw 3, 2
  01d7528  addi 3, 3, 27344
  01d752c  lfs 2, 68(3)
  01d7530  fcmpu 0, 1, 2
  01d7534  cror 6, 0, 2
  01d7538  bt 6, 0x1d7540
  01d753c  vspltisw 3, 4
  01d7540  vspltisw 4, -16
  01d7544  vmulouh 6, 2, 3
  01d7548  vspltisw 5, 0
  01d754c  vrlw 3, 3, 4
  01d7550  vmsumshm 2, 2, 3, 5
  01d7554  vslw 2, 2, 4
  01d7558  vadduwm 2, 2, 6
  01d755c  vspltw 2, 2, 0
  01d7560  vsplth 2, 2, 1
  01d7564  li 3, 124
  01d7568  stvehx 2, 3, 30
  01d756c  b 0x1d7824
  01d7570  lbz 3, 82(31)
  01d7574  cmpwi 3, 4
  01d7578  bt 2, 0x1d75b0
  01d757c  lbz 3, 112(31)
  01d7580  rlwinm 3, 3, 0, 30, 30
  01d7584  cmpwi 3, 0
  01d7588  bt 2, 0x1d75b0
  01d758c  lbz 3, 83(31)
  01d7590  cmpwi 3, 4
  01d7594  bt 2, 0x1d75b0
  01d7598  ori 3, 31, 0
  01d759c  li 4, 4
  01d75a0  li 5, 0
  01d75a4  li 6, 1
  01d75a8  bl 0xfddc0
  01d75ac  nop
  01d75b0  lis 3, 29
  01d75b4  lis 4, 114
  01d75b8  lfs 1, 72(31)
  01d75bc  addi 3, 3, 27344
  01d75c0  lfs 2, 72(3)
  01d75c4  lfs 3, -3052(4)
  01d75c8  fmuls 2, 3, 2
  01d75cc  bl 0x502578
  01d75d0  nop
  01d75d4  addic 3, 30, 124
  01d75d8  stfs 1, 72(31)
  01d75dc  bl 0x4fffb4
  01d75e0  nop
  01d75e4  cmpwi 3, 0
  01d75e8  bt 2, 0x1d7824
  01d75ec  lis 3, 29
  01d75f0  vspltisw 2, -1
  01d75f4  li 5, 76
  01d75f8  addi 3, 3, 27344
  01d75fc  lis 4, 114
  01d7600  li 6, -3056
  01d7604  vslw 2, 2, 2
  01d7608  lvlx 3, 5, 3
  01d760c  li 3, 124
  01d7610  vspltw 3, 3, 0
  01d7614  lvlx 4, 6, 4
  01d7618  li 4, 3
  01d761c  vmaddfp 2, 4, 3, 2
  01d7620  vctsxs 2, 2, 0
  01d7624  vsplth 2, 2, 1
  01d7628  stvehx 2, 3, 30
  01d762c  stb 4, 32(31)
  01d7630  b 0x1d7824
  01d7634  lbz 3, 82(31)
  01d7638  cmpwi 3, 4
  01d763c  bt 2, 0x1d7674
  01d7640  lbz 3, 112(31)
  01d7644  rlwinm 3, 3, 0, 30, 30
  01d7648  cmpwi 3, 0
  01d764c  bt 2, 0x1d7674
  01d7650  lbz 3, 83(31)
  01d7654  cmpwi 3, 4
  01d7658  bt 2, 0x1d7674
  01d765c  ori 3, 31, 0
  01d7660  li 4, 4
  01d7664  li 5, 0
  01d7668  li 6, 0
  01d766c  bl 0xfddc0
  01d7670  nop
  01d7674  lis 3, 29
  01d7678  lfs 2, 144(30)
  01d767c  addi 3, 3, 27344
  01d7680  lfs 3, 80(3)
  01d7684  lfs 1, 24(31)
  01d7688  fsubs 4, 2, 3
  01d768c  fcmpu 0, 1, 4
  01d7690  cror 6, 0, 2
  01d7694  bt 6, 0x1d76b4
  01d7698  lis 3, 29
  01d769c  lis 4, 114
  01d76a0  fmr 2, 1
  01d76a4  addi 3, 3, 27344
  01d76a8  lfs 1, 84(3)
  01d76ac  lfs 3, -3052(4)
  01d76b0  fmuls 3, 3, 1
  01d76b4  fsubs 1, 2, 3
  01d76b8  lfs 31, 72(31)
  01d76bc  stfs 1, 24(31)
  01d76c0  lfs 1, 128(30)
  01d76c4  lfs 2, 136(30)
  01d76c8  fadds 1, 1, 2
  01d76cc  bl 0x10de78
  01d76d0  nop
  01d76d4  fmr 2, 1
  01d76d8  fmr 1, 31
  01d76dc  bl 0x5026a0
  01d76e0  nop
  01d76e4  lis 3, 29
  01d76e8  lis 4, 114
  01d76ec  addi 3, 3, 27344
  01d76f0  lfs 2, 72(3)
  01d76f4  lfs 3, -3052(4)
  01d76f8  fmuls 2, 3, 2
  01d76fc  fcmpu 0, 1, 2
  01d7700  cror 6, 0, 2
  01d7704  bt 6, 0x1d771c
  01d7708  lfs 1, 72(31)
  01d770c  bl 0x502578
  01d7710  nop
  01d7714  fmr 2, 1
  01d7718  b 0x1d7734
  01d771c  lfs 1, 128(30)
  01d7720  lfs 2, 136(30)
  01d7724  fadds 1, 1, 2
  01d7728  bl 0x10de78
  01d772c  nop
  01d7730  fmr 2, 1
  01d7734  addic 3, 30, 124
  01d7738  stfs 2, 72(31)
  01d773c  bl 0x4fffb4
  01d7740  nop
  01d7744  cmpwi 3, 0
  01d7748  bt 2, 0x1d7824
  01d774c  li 3, 2
  01d7750  li 4, 0
  01d7754  ori 5, 31, 0
  01d7758  bl 0x15d12c
  01d775c  nop
  01d7760  lbz 3, 83(31)
  01d7764  cmpwi 3, 3
  01d7768  bt 2, 0x1d7784
  01d776c  ori 3, 31, 0
  01d7770  li 4, 3
  01d7774  li 5, 0
  01d7778  li 6, 5
  01d777c  bl 0xfddc0
  01d7780  nop
  01d7784  li 3, 4
  01d7788  stb 3, 32(31)
  01d778c  b 0x1d7824
  01d7790  lwz 3, 24(31)
  01d7794  lwz 4, 144(30)
  01d7798  srawi 6, 3, 31
  01d779c  srawi 5, 4, 31
  01d77a0  lfs 1, 24(31)
  01d77a4  srwi 8, 6, 1
  01d77a8  lfs 2, 144(30)
  01d77ac  srwi 7, 5, 1
  01d77b0  xor 3, 8, 3
  01d77b4  xor 4, 7, 4
  01d77b8  subc 3, 3, 6
  01d77bc  subc 4, 4, 5
  01d77c0  cmpw 3, 4
  01d77c4  bf 0, 0x1d77e8
  01d77c8  lis 3, 29
  01d77cc  lis 4, 114
  01d77d0  addi 3, 3, 27344
  01d77d4  lfs 2, 84(3)
  01d77d8  lfs 3, -3052(4)
  01d77dc  fmadds 1, 3, 2, 1
  01d77e0  stfs 1, 24(31)
  01d77e4  b 0x1d7824
  01d77e8  lhz 3, 52(31)
  01d77ec  lbz 4, 83(31)
  01d77f0  ori 3, 3, 4096
  01d77f4  cmpwi 4, 1
  01d77f8  stfs 2, 24(31)
  01d77fc  sth 3, 52(31)
  01d7800  bt 2, 0x1d781c
  01d7804  ori 3, 31, 0
  01d7808  li 4, 1
  01d780c  li 5, 0
  01d7810  li 6, 5
  01d7814  bl 0xfddc0
  01d7818  nop
  01d781c  li 3, 1
  01d7820  stb 3, 32(31)
  01d7824  li 0, 240
  01d7828  lvx 31, 1, 0
  01d782c  ld 0, 320(1)
  01d7830  mtlr 0
  01d7834  lfd 31, 296(1)
  01d7838  ld 28, 264(1)
  01d783c  ld 29, 272(1)
  01d7840  ld 30, 280(1)
  01d7844  ld 31, 288(1)
  01d7848  addi 1, 1, 304
  01d784c  blr
