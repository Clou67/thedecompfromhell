# game/update/moby1667.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1671_002a8af0:   # 0x2a8af0, 0x274 bytes
  02a8af0  stdu 1, -224(1)
  02a8af4  mflr 0
  02a8af8  std 0, 240(1)
  02a8afc  stfd 26, 176(1)
  02a8b00  stfd 27, 184(1)
  02a8b04  stfd 28, 192(1)
  02a8b08  stfd 29, 200(1)
  02a8b0c  stfd 30, 208(1)
  02a8b10  stfd 31, 216(1)
  02a8b14  ori 4, 5, 0
  02a8b18  ori 5, 3, 0
  02a8b1c  ori 3, 6, 0
  02a8b20  li 6, 224
  02a8b24  lbz 8, 49(5)
  02a8b28  std 31, 168(1)
  02a8b2c  std 30, 160(1)
  02a8b30  cmpwi 8, 0
  02a8b34  bt 2, 0x2a8d34
  02a8b38  lis 7, 161
  02a8b3c  srawi 8, 5, 8
  02a8b40  lwz 7, 1808(7)
  02a8b44  xor 7, 7, 8
  02a8b48  clrlwi 7, 7, 31
  02a8b4c  cmpwi 7, 0
  02a8b50  bf 2, 0x2a8d34
  02a8b54  lis 7, 149
  02a8b58  lfs 2, 20(5)
  02a8b5c  addic 7, 7, 5056
  02a8b60  lfs 1, 324(7)
  02a8b64  lfs 3, 16(5)
  02a8b68  fsubs 4, 2, 1
  02a8b6c  lfs 1, 320(7)
  02a8b70  fsubs 5, 3, 1
  02a8b74  lfs 1, 24(5)
  02a8b78  lfs 6, 328(7)
  02a8b7c  fsubs 6, 1, 6
  02a8b80  fmuls 4, 4, 4
  02a8b84  lis 7, 43
  02a8b88  addi 7, 7, -29992
  02a8b8c  fmadds 4, 5, 5, 4
  02a8b90  lfs 5, 0(7)
  02a8b94  fmadds 4, 6, 6, 4
  02a8b98  fsqrts 4, 4
  02a8b9c  fcmpu 0, 4, 5
  02a8ba0  cror 6, 1, 2
  02a8ba4  bt 6, 0x2a8d34
  02a8ba8  addc 6, 1, 6
  02a8bac  std 4, 64(6)
  02a8bb0  std 3, 72(6)
  02a8bb4  lfs 31, 196(5)
  02a8bb8  lfs 30, 192(5)
  02a8bbc  fmuls 4, 31, 31
  02a8bc0  lfs 29, 200(5)
  02a8bc4  lfs 5, 68(6)
  02a8bc8  lis 3, 43
  02a8bcc  fsubs 5, 2, 5
  02a8bd0  addi 31, 3, -29992
  02a8bd4  lis 3, 123
  02a8bd8  fmadds 4, 30, 30, 4
  02a8bdc  lfs 6, 8(31)
  02a8be0  lfs 7, 64(6)
  02a8be4  fmuls 5, 5, 5
  02a8be8  lfs 8, 72(6)
  02a8bec  fsubs 7, 3, 7
  02a8bf0  fsubs 8, 1, 8
  02a8bf4  fmadds 4, 29, 29, 4
  02a8bf8  lfs 9, 4(31)
  02a8bfc  lis 4, 123
  02a8c00  lfs 10, 204(5)
  02a8c04  fmadds 5, 7, 7, 5
  02a8c08  lis 5, 114
  02a8c0c  lfs 11, 23224(3)
  02a8c10  fsqrts 4, 4
  02a8c14  lfs 12, 23228(4)
  02a8c18  lfs 13, -3052(5)
  02a8c1c  stfs 10, 124(1)
  02a8c20  fmadds 5, 8, 8, 5
  02a8c24  fmuls 27, 12, 13
  02a8c28  fsqrts 5, 5
  02a8c2c  fdivs 6, 6, 4
  02a8c30  fsub 7, 9, 4
  02a8c34  fsub 8, 9, 4
  02a8c38  fsub 10, 9, 4
  02a8c3c  fsub 0, 4, 9
  02a8c40  fsub 28, 4, 9
  02a8c44  fsub 4, 4, 9
  02a8c48  fmuls 26, 11, 5
  02a8c4c  fmuls 12, 29, 6
  02a8c50  fmuls 13, 31, 6
  02a8c54  fmuls 6, 30, 6
  02a8c58  fsel 7, 7, 9, 12
  02a8c5c  fsel 8, 8, 9, 13
  02a8c60  fsel 9, 10, 9, 6
  02a8c64  fsel 5, 0, 7, 12
  02a8c68  fsel 7, 28, 8, 13
  02a8c6c  fsel 4, 4, 9, 6
  02a8c70  fadds 1, 5, 1
  02a8c74  fadds 2, 7, 2
  02a8c78  fadds 3, 4, 3
  02a8c7c  stfs 1, 120(1)
  02a8c80  stfs 2, 116(1)
  02a8c84  stfs 3, 112(1)
  02a8c88  bl 0xfcc68
  02a8c8c  nop
  02a8c90  fmr 28, 1
  02a8c94  bl 0xfcc68
  02a8c98  nop
  02a8c9c  fmr 3, 1
  02a8ca0  addic 30, 1, 128
  02a8ca4  fmr 1, 27
  02a8ca8  ori 3, 30, 0
  02a8cac  fmr 2, 28
  02a8cb0  bl 0xfe610
  02a8cb4  nop
  02a8cb8  lfs 1, 128(1)
  02a8cbc  lfs 2, 132(1)
  02a8cc0  lis 3, 114
  02a8cc4  fmadds 1, 30, 26, 1
  02a8cc8  lfs 3, 136(1)
  02a8ccc  fmadds 2, 31, 26, 2
  02a8cd0  lis 4, 123
  02a8cd4  fmadds 3, 29, 26, 3
  02a8cd8  lis 6, 123
  02a8cdc  lis 7, 123
  02a8ce0  lfs 4, -3056(3)
  02a8ce4  addic 3, 1, 112
  02a8ce8  stfs 1, 128(1)
  02a8cec  stfs 2, 132(1)
  02a8cf0  stfs 3, 136(1)
  02a8cf4  lfs 1, 16(31)
  02a8cf8  lfs 2, 12(31)
  02a8cfc  fmuls 4, 4, 1
  02a8d00  lwz 5, 23216(4)
  02a8d04  lwz 6, 23220(6)
  02a8d08  ori 4, 30, 0
  02a8d0c  lfs 3, 23232(7)
  02a8d10  extsw 5, 5
  02a8d14  extsw 6, 6
  02a8d18  fmuls 1, 3, 2
  02a8d1c  fctiwz 2, 4
  02a8d20  stfd 2, 144(1)
  02a8d24  lwz 8, 148(1)
  02a8d28  extsw 8, 8
  02a8d2c  bl 0x126dd8
  02a8d30  nop
  02a8d34  ld 0, 240(1)
  02a8d38  mtlr 0
  02a8d3c  lfd 26, 176(1)
  02a8d40  lfd 27, 184(1)
  02a8d44  lfd 28, 192(1)
  02a8d48  lfd 29, 200(1)
  02a8d4c  lfd 30, 208(1)
  02a8d50  lfd 31, 216(1)
  02a8d54  ld 30, 160(1)
  02a8d58  ld 31, 168(1)
  02a8d5c  addi 1, 1, 224
  02a8d60  blr

M1671_002a8d68:   # 0x2a8d68, 0x298 bytes
  02a8d68  stdu 1, -304(1)
  02a8d6c  mflr 0
  02a8d70  std 0, 320(1)
  02a8d74  stfd 30, 288(1)
  02a8d78  stfd 31, 296(1)
  02a8d7c  addi 0, 1, 192
  02a8d80  stvx 31, 0, 0
  02a8d84  lis 4, 165
  02a8d88  std 30, 272(1)
  02a8d8c  lbz 5, 33(3)
  02a8d90  lwz 30, 120(3)
  02a8d94  addic 4, 4, -28284
  02a8d98  slwi 3, 5, 2
  02a8d9c  lwzx 3, 4, 3
  02a8da0  std 31, 280(1)
  02a8da4  std 29, 264(1)
  02a8da8  std 28, 256(1)
  02a8dac  std 27, 248(1)
  02a8db0  std 26, 240(1)
  02a8db4  std 25, 232(1)
  02a8db8  std 24, 224(1)
  02a8dbc  std 23, 216(1)
  02a8dc0  cmpwi 3, 0
  02a8dc4  bt 2, 0x2a8fbc
  02a8dc8  lwz 30, 0(30)
  02a8dcc  cmpwi 30, -1
  02a8dd0  bt 2, 0x2a8fbc
  02a8dd4  lis 4, 165
  02a8dd8  slwi 5, 30, 2
  02a8ddc  addic 4, 4, 7136
  02a8de0  extsw 5, 5
  02a8de4  li 30, 0
  02a8de8  ori 31, 30, 0
  02a8dec  lwzx 4, 4, 5
  02a8df0  lis 5, 43
  02a8df4  addi 5, 5, -29340
  02a8df8  lwz 6, 0(4)
  02a8dfc  extsw 6, 6
  02a8e00  std 6, 176(1)
  02a8e04  lvlx 2, 0, 4
  02a8e08  lis 4, 164
  02a8e0c  vcfsx 31, 2, 0
  02a8e10  lfs 31, 0(5)
  02a8e14  lvlx 2, 0, 5
  02a8e18  vspltw 2, 2, 0
  02a8e1c  lwz 4, -28512(4)
  02a8e20  lfd 1, 176(1)
  02a8e24  fcfid 1, 1
  02a8e28  vsubfp 31, 31, 2
  02a8e2c  frsp 1, 1
  02a8e30  fsubs 31, 1, 31
  02a8e34  sldi 5, 30, 2
  02a8e38  lhz 6, 0(3)
  02a8e3c  addic 30, 30, 1
  02a8e40  addc 5, 1, 5
  02a8e44  rlwinm 7, 6, 8, 9, 23
  02a8e48  clrldi 5, 5, 32
  02a8e4c  addc 7, 4, 7
  02a8e50  extsh 6, 6
  02a8e54  addic 3, 3, 2
  02a8e58  cmpwi 6, 0
  02a8e5c  stw 7, 112(5)
  02a8e60  extsh 30, 30
  02a8e64  bf 0, 0x2a8e34
  02a8e68  sldi 3, 30, 2
  02a8e6c  ori 25, 30, 0
  02a8e70  addc 28, 1, 3
  02a8e74  cmpwi 25, 0
  02a8e78  clrldi 28, 28, 32
  02a8e7c  ori 27, 31, 0
  02a8e80  lwz 26, 108(28)
  02a8e84  bf 1, 0x2a8fbc
  02a8e88  addic 29, 30, -1
  02a8e8c  vspltw 31, 31, 0
  02a8e90  cmpw 27, 29
  02a8e94  bf 2, 0x2a8ea0
  02a8e98  lwz 24, 108(28)
  02a8e9c  b 0x2a8eec
  02a8ea0  ori 3, 29, 0
  02a8ea4  bl 0xfc620
  02a8ea8  nop
  02a8eac  ori 4, 3, 0
  02a8eb0  sldi 3, 4, 2
  02a8eb4  addc 3, 1, 3
  02a8eb8  clrldi 3, 3, 32
  02a8ebc  lwz 24, 112(3)
  02a8ec0  cmpwi 24, 0
  02a8ec4  bt 2, 0x2a8ed0
  02a8ec8  stw 31, 112(3)
  02a8ecc  b 0x2a8eec
  02a8ed0  addic 4, 4, 1
  02a8ed4  divw 3, 4, 29
  02a8ed8  mullw 5, 3, 30
  02a8edc  neg 3, 3
  02a8ee0  addc 3, 5, 3
  02a8ee4  subc 4, 4, 3
  02a8ee8  b 0x2a8eb0
  02a8eec  lis 3, 123
  02a8ef0  stw 31, 148(24)
  02a8ef4  li 4, 255
  02a8ef8  extsw 5, 25
  02a8efc  lis 6, 123
  02a8f00  lwz 3, 23208(3)
  02a8f04  stb 4, 48(24)
  02a8f08  sth 3, 50(24)
  02a8f0c  std 5, 176(1)
  02a8f10  ori 3, 30, 0
  02a8f14  lfs 1, 44(24)
  02a8f18  lfs 2, 23212(6)
  02a8f1c  lwz 23, 120(24)
  02a8f20  fmuls 1, 1, 2
  02a8f24  stfs 1, 44(24)
  02a8f28  lfd 1, 176(1)
  02a8f2c  fcfid 1, 1
  02a8f30  frsp 30, 1
  02a8f34  bl 0x502730
  02a8f38  nop
  02a8f3c  fdivs 1, 31, 1
  02a8f40  li 3, 12
  02a8f44  lis 4, 123
  02a8f48  lis 5, 123
  02a8f4c  fmuls 1, 30, 1
  02a8f50  stfs 1, 4(23)
  02a8f54  stvewx 31, 3, 23
  02a8f58  stw 26, 16(23)
  02a8f5c  lfs 1, 23188(4)
  02a8f60  lfs 2, 23192(5)
  02a8f64  bl 0xfcbe8
  02a8f68  nop
  02a8f6c  lis 3, 123
  02a8f70  stfs 1, 20(23)
  02a8f74  lis 4, 123
  02a8f78  lfs 1, 23176(3)
  02a8f7c  lfs 2, 23180(4)
  02a8f80  bl 0xfcbe8
  02a8f84  nop
  02a8f88  lis 3, 114
  02a8f8c  ori 26, 24, 0
  02a8f90  addic 27, 27, 1
  02a8f94  addic 25, 25, -1
  02a8f98  cmpw 27, 30
  02a8f9c  lfs 2, -3052(3)
  02a8fa0  extsh 25, 25
  02a8fa4  li 3, 1
  02a8fa8  fmuls 1, 1, 2
  02a8fac  stfs 1, 8(23)
  02a8fb0  stfs 1, 24(23)
  02a8fb4  stb 3, 32(26)
  02a8fb8  bt 0, 0x2a8e90
  02a8fbc  li 0, 192
  02a8fc0  lvx 31, 1, 0
  02a8fc4  ld 0, 320(1)
  02a8fc8  mtlr 0
  02a8fcc  lfd 30, 288(1)
  02a8fd0  lfd 31, 296(1)
  02a8fd4  ld 23, 216(1)
  02a8fd8  ld 24, 224(1)
  02a8fdc  ld 25, 232(1)
  02a8fe0  ld 26, 240(1)
  02a8fe4  ld 27, 248(1)
  02a8fe8  ld 28, 256(1)
  02a8fec  ld 29, 264(1)
  02a8ff0  ld 30, 272(1)
  02a8ff4  ld 31, 280(1)
  02a8ff8  addi 1, 1, 304
  02a8ffc  blr

UpdateMoby_1667:   # 0x2a9010, 0x48c bytes
  02a9010  stdu 1, -272(1)
  02a9014  mflr 0
  02a9018  std 0, 288(1)
  02a901c  stfd 25, 216(1)
  02a9020  stfd 26, 224(1)
  02a9024  stfd 27, 232(1)
  02a9028  stfd 28, 240(1)
  02a902c  stfd 29, 248(1)
  02a9030  stfd 30, 256(1)
  02a9034  stfd 31, 264(1)
  02a9038  std 25, 160(1)
  02a903c  std 26, 168(1)
  02a9040  std 27, 176(1)
  02a9044  std 28, 184(1)
  02a9048  std 29, 192(1)
  02a904c  std 30, 200(1)
  02a9050  std 31, 208(1)
  02a9054  fmr 30, 31
  02a9058  lis 4, 165
  02a905c  lwz 26, 120(3)
  02a9060  li 28, 0
  02a9064  addic 27, 4, 7136
  02a9068  lhz 4, 166(3)
  02a906c  ori 31, 3, 0
  02a9070  clrlwi 4, 4, 31
  02a9074  lwz 5, 0(26)
  02a9078  cmpwi 4, 0
  02a907c  slwi 5, 5, 2
  02a9080  fmr 29, 30
  02a9084  extsw 5, 5
  02a9088  lwzx 27, 27, 5
  02a908c  fmr 28, 29
  02a9090  bf 2, 0x2a90d4
  02a9094  ori 3, 31, 0
  02a9098  lhz 4, 30(26)
  02a909c  extsh 4, 4
  02a90a0  bl 0x15cc7c
  02a90a4  nop
  02a90a8  cmpwi 3, 0
  02a90ac  bf 2, 0x2a90cc
  02a90b0  li 3, 0
  02a90b4  li 4, 4
  02a90b8  ori 5, 31, 0
  02a90bc  bl 0x15d12c
  02a90c0  nop
  02a90c4  sth 3, 30(26)
  02a90c8  b 0x2a90e4
  02a90cc  li 28, 1
  02a90d0  b 0x2a90e4
  02a90d4  lfs 31, 16(31)
  02a90d8  lfs 30, 20(31)
  02a90dc  lfs 29, 24(31)
  02a90e0  lfs 28, 28(31)
  02a90e4  lbz 3, 32(31)
  02a90e8  cmpwi 3, 0
  02a90ec  cmpwi 1, 3, 1
  02a90f0  cmpwi 6, 3, -1
  02a90f4  bt 1, 0x2a9100
  02a90f8  bf 25, 0x2a9424
  02a90fc  b 0x2a9108
  02a9100  bf 5, 0x2a9130
  02a9104  b 0x2a9424
  02a9108  lbz 3, 33(31)
  02a910c  cmpwi 3, 255
  02a9110  bf 2, 0x2a9124
  02a9114  ori 3, 31, 0
  02a9118  bl 0xefb38
  02a911c  nop
  02a9120  b 0x2a9454
  02a9124  ori 3, 31, 0
  02a9128  bl 0x2a8d68
  02a912c  b 0x2a9424
  02a9130  lwz 29, 16(26)
  02a9134  addic 6, 31, 16
  02a9138  lfs 1, 4(26)
  02a913c  li 8, 0
  02a9140  addic 7, 31, 64
  02a9144  ori 3, 27, 0
  02a9148  li 5, 0
  02a914c  lwz 29, 120(29)
  02a9150  bl 0x117390
  02a9154  nop
  02a9158  lfs 1, 24(31)
  02a915c  lis 4, 123
  02a9160  lfs 2, 20(26)
  02a9164  lis 25, 114
  02a9168  fadds 1, 1, 2
  02a916c  addic 30, 26, 8
  02a9170  ori 3, 30, 0
  02a9174  stfs 1, 24(31)
  02a9178  lfs 1, 4(26)
  02a917c  lfs 2, 8(26)
  02a9180  fadds 2, 1, 2
  02a9184  lfs 1, 24(26)
  02a9188  stfs 2, 4(26)
  02a918c  lfs 2, 23184(4)
  02a9190  lfs 3, -3048(25)
  02a9194  fmuls 2, 2, 3
  02a9198  bl 0x109af0
  02a919c  nop
  02a91a0  lfs 26, 4(29)
  02a91a4  lis 3, 43
  02a91a8  lfs 1, 4(26)
  02a91ac  addi 3, 3, -28672
  02a91b0  fsubs 26, 26, 1
  02a91b4  lfs 1, -3048(25)
  02a91b8  lfs 27, 0(3)
  02a91bc  fcmpu 0, 26, 27
  02a91c0  cror 6, 1, 2
  02a91c4  bt 6, 0x2a91d0
  02a91c8  lfs 2, 12(26)
  02a91cc  fadds 26, 26, 2
  02a91d0  lis 3, 123
  02a91d4  lfs 2, 23168(3)
  02a91d8  fcmpu 0, 2, 26
  02a91dc  cror 6, 0, 2
  02a91e0  bt 6, 0x2a9224
  02a91e4  lwz 3, 24(26)
  02a91e8  lwz 4, 24(29)
  02a91ec  srawi 6, 3, 31
  02a91f0  srawi 5, 4, 31
  02a91f4  lfs 3, 24(26)
  02a91f8  srwi 8, 6, 1
  02a91fc  lfs 2, 24(29)
  02a9200  srwi 7, 5, 1
  02a9204  xor 3, 8, 3
  02a9208  xor 4, 7, 4
  02a920c  subc 3, 3, 6
  02a9210  subc 4, 4, 5
  02a9214  cmpw 3, 4
  02a9218  bf 1, 0x2a9224
  02a921c  stfs 3, 24(29)
  02a9220  stfs 2, 24(26)
  02a9224  lis 3, 43
  02a9228  addi 3, 3, -28672
  02a922c  lfs 2, 4(3)
  02a9230  fcmpu 0, 26, 2
  02a9234  cror 6, 1, 2
  02a9238  bt 6, 0x2a9278
  02a923c  fmr 2, 1
  02a9240  lis 3, 43
  02a9244  addi 4, 3, -28672
  02a9248  ori 3, 30, 0
  02a924c  lfs 3, 8(4)
  02a9250  lfs 1, 24(26)
  02a9254  fmuls 25, 2, 3
  02a9258  fmr 2, 25
  02a925c  bl 0x109af0
  02a9260  nop
  02a9264  lfs 1, 24(29)
  02a9268  addic 3, 29, 8
  02a926c  fmr 2, 25
  02a9270  bl 0x109af0
  02a9274  nop
  02a9278  lbz 3, 49(31)
  02a927c  or 3, 3, 28
  02a9280  cmpwi 3, 0
  02a9284  bf 2, 0x2a93dc
  02a9288  lis 3, 43
  02a928c  lis 4, 123
  02a9290  addi 3, 3, -28672
  02a9294  lfs 1, 12(3)
  02a9298  lfs 2, 23172(4)
  02a929c  fadds 1, 2, 1
  02a92a0  fcmpu 0, 26, 1
  02a92a4  cror 6, 0, 2
  02a92a8  bt 6, 0x2a93e4
  02a92ac  lis 3, 123
  02a92b0  lis 4, 123
  02a92b4  lfs 1, 23188(3)
  02a92b8  lfs 2, 23192(4)
  02a92bc  bl 0xfcbe8
  02a92c0  nop
  02a92c4  lwz 3, 16(26)
  02a92c8  fmr 25, 1
  02a92cc  lbz 3, 49(3)
  02a92d0  cmpwi 3, 0
  02a92d4  bt 2, 0x2a9314
  02a92d8  lhz 3, 28(26)
  02a92dc  cmpwi 3, 0
  02a92e0  bt 2, 0x2a9314
  02a92e4  lis 3, 123
  02a92e8  lis 4, 123
  02a92ec  lfs 1, 23168(3)
  02a92f0  lfs 2, 23172(4)
  02a92f4  bl 0xfcbe8
  02a92f8  nop
  02a92fc  lhz 3, 28(26)
  02a9300  lfs 26, 4(29)
  02a9304  addic 3, 3, -1
  02a9308  fsubs 26, 26, 1
  02a930c  sth 3, 28(26)
  02a9310  b 0x2a932c
  02a9314  lis 3, 123
  02a9318  lis 4, 114
  02a931c  lfs 26, 4(26)
  02a9320  lfs 1, 23204(3)
  02a9324  lfs 2, -3052(4)
  02a9328  fmadds 26, 1, 2, 26
  02a932c  fcmpu 0, 26, 27
  02a9330  cror 6, 1, 2
  02a9334  bt 6, 0x2a9340
  02a9338  lfs 1, 12(26)
  02a933c  fadds 26, 26, 1
  02a9340  addic 30, 1, 128
  02a9344  fmr 1, 26
  02a9348  li 5, 0
  02a934c  addic 7, 1, 112
  02a9350  ori 3, 27, 0
  02a9354  ori 6, 30, 0
  02a9358  li 8, 1
  02a935c  bl 0x117390
  02a9360  nop
  02a9364  lis 4, 123
  02a9368  lfs 1, 136(1)
  02a936c  ori 3, 30, 0
  02a9370  fadds 1, 1, 25
  02a9374  lwz 4, 23208(4)
  02a9378  extsw 4, 4
  02a937c  std 4, 144(1)
  02a9380  lis 4, 16384
  02a9384  stw 4, 140(1)
  02a9388  stfs 1, 136(1)
  02a938c  lfd 1, 144(1)
  02a9390  fcfid 1, 1
  02a9394  frsp 1, 1
  02a9398  bl 0x502910
  02a939c  nop
  02a93a0  cmpwi 3, -1
  02a93a4  bf 2, 0x2a93e4
  02a93a8  lis 3, 123
  02a93ac  lis 4, 123
  02a93b0  lfs 1, 23176(3)
  02a93b4  lfs 2, 23180(4)
  02a93b8  bl 0xfcbe8
  02a93bc  nop
  02a93c0  lis 3, 114
  02a93c4  lfs 2, -3052(3)
  02a93c8  stfs 26, 4(26)
  02a93cc  fmuls 1, 1, 2
  02a93d0  stfs 25, 20(26)
  02a93d4  stfs 1, 24(26)
  02a93d8  b 0x2a93e4
  02a93dc  li 3, 30
  02a93e0  sth 3, 28(26)
  02a93e4  lwz 3, 4(26)
  02a93e8  lwz 4, 12(26)
  02a93ec  srawi 6, 3, 31
  02a93f0  srawi 5, 4, 31
  02a93f4  lfs 2, 4(26)
  02a93f8  srwi 8, 6, 1
  02a93fc  lfs 1, 12(26)
  02a9400  srwi 7, 5, 1
  02a9404  xor 3, 8, 3
  02a9408  xor 4, 7, 4
  02a940c  subc 3, 3, 6
  02a9410  subc 4, 4, 5
  02a9414  cmpw 3, 4
  02a9418  bf 1, 0x2a9424
  02a941c  fsubs 1, 2, 1
  02a9420  stfs 1, 4(26)
  02a9424  lhz 3, 166(31)
  02a9428  clrlwi 3, 3, 31
  02a942c  cmpwi 3, 0
  02a9430  bt 2, 0x2a9454
  02a9434  stfs 31, 64(1)
  02a9438  stfs 29, 72(1)
  02a943c  ori 3, 31, 0
  02a9440  stfs 30, 68(1)
  02a9444  stfs 28, 76(1)
  02a9448  ld 5, 64(1)
  02a944c  ld 6, 72(1)
  02a9450  bl 0x2a8af0
  02a9454  ld 0, 288(1)
  02a9458  mtlr 0
  02a945c  lfd 25, 216(1)
  02a9460  lfd 26, 224(1)
  02a9464  lfd 27, 232(1)
  02a9468  lfd 28, 240(1)
  02a946c  lfd 29, 248(1)
  02a9470  lfd 30, 256(1)
  02a9474  lfd 31, 264(1)
  02a9478  ld 25, 160(1)
  02a947c  ld 26, 168(1)
  02a9480  ld 27, 176(1)
  02a9484  ld 28, 184(1)
  02a9488  ld 29, 192(1)
  02a948c  ld 30, 200(1)
  02a9490  ld 31, 208(1)
  02a9494  addi 1, 1, 272
  02a9498  blr

M1671_002a94c8:   # 0x2a94c8, 0x9e8 bytes
  02a94c8  stdu 1, -640(1)
  02a94cc  mflr 0
  02a94d0  std 0, 656(1)
  02a94d4  stfd 25, 584(1)
  02a94d8  stfd 26, 592(1)
  02a94dc  stfd 27, 600(1)
  02a94e0  stfd 28, 608(1)
  02a94e4  stfd 29, 616(1)
  02a94e8  stfd 30, 624(1)
  02a94ec  stfd 31, 632(1)
  02a94f0  std 30, 568(1)
  02a94f4  std 31, 576(1)
  02a94f8  lwz 30, 120(3)
  02a94fc  std 29, 560(1)
  02a9500  ori 31, 3, 0
  02a9504  lwz 29, 8(30)
  02a9508  std 28, 552(1)
  02a950c  std 27, 544(1)
  02a9510  std 26, 536(1)
  02a9514  std 25, 528(1)
  02a9518  std 24, 520(1)
  02a951c  std 23, 512(1)
  02a9520  std 22, 504(1)
  02a9524  std 21, 496(1)
  02a9528  cmpwi 29, 0
  02a952c  bt 2, 0x2a9e58
  02a9530  lhz 3, 166(29)
  02a9534  cmpwi 3, 608
  02a9538  bf 2, 0x2a9e58
  02a953c  li 3, 0
  02a9540  lis 9, 0
  02a9544  li 4, 0
  02a9548  li 5, 1
  02a954c  li 6, 1
  02a9550  li 7, 1
  02a9554  li 8, 0
  02a9558  ori 9, 9, 65424
  02a955c  bl 0x502fd4
  02a9560  nop
  02a9564  std 3, 464(1)
  02a9568  li 3, 0
  02a956c  li 4, 0
  02a9570  li 5, 0
  02a9574  li 6, 0
  02a9578  li 7, 0
  02a957c  li 8, 0
  02a9580  bl 0x502f08
  02a9584  nop
  02a9588  std 3, 448(1)
  02a958c  li 4, 2
  02a9590  li 3, 0
  02a9594  li 5, 0
  02a9598  li 6, 1
  02a959c  li 7, 128
  02a95a0  bl 0x502ea8
  02a95a4  nop
  02a95a8  lwz 4, 4(30)
  02a95ac  std 3, 472(1)
  02a95b0  cmpwi 4, 0
  02a95b4  bt 2, 0x2a95e4
  02a95b8  li 3, 0
  02a95bc  li 4, 1
  02a95c0  addic 5, 1, 480
  02a95c4  addic 6, 1, 112
  02a95c8  stw 3, 480(1)
  02a95cc  stw 4, 484(1)
  02a95d0  ori 3, 29, 0
  02a95d4  li 4, 2
  02a95d8  bl 0xf1238
  02a95dc  nop
  02a95e0  b 0x2a960c
  02a95e4  li 4, 2
  02a95e8  li 7, 3
  02a95ec  addic 5, 1, 488
  02a95f0  addic 6, 1, 112
  02a95f4  stw 4, 488(1)
  02a95f8  ori 3, 29, 0
  02a95fc  stw 7, 492(1)
  02a9600  li 4, 2
  02a9604  bl 0xf1238
  02a9608  nop
  02a960c  lfs 7, 116(1)
  02a9610  lfs 1, 132(1)
  02a9614  lfs 6, 112(1)
  02a9618  fsubs 7, 7, 1
  02a961c  lfs 29, 128(1)
  02a9620  lfs 8, 120(1)
  02a9624  fsubs 6, 6, 29
  02a9628  lfs 2, 136(1)
  02a962c  lis 3, 43
  02a9630  fsubs 8, 8, 2
  02a9634  addi 3, 3, -27488
  02a9638  fmuls 3, 7, 7
  02a963c  lfs 31, 0(3)
  02a9640  fmadds 9, 6, 6, 3
  02a9644  fmr 3, 31
  02a9648  fmadds 9, 8, 8, 9
  02a964c  fmr 4, 3
  02a9650  fsqrts 10, 9
  02a9654  fmr 5, 4
  02a9658  fcmpu 0, 10, 5
  02a965c  bt 2, 0x2a96b0
  02a9660  frsqrte 3, 9
  02a9664  lis 3, 43
  02a9668  addi 3, 3, -27488
  02a966c  lfs 4, 4(3)
  02a9670  lfs 5, 8(3)
  02a9674  fmuls 10, 9, 3
  02a9678  fmuls 11, 4, 3
  02a967c  fnmsubs 10, 10, 3, 5
  02a9680  fmadds 3, 10, 11, 3
  02a9684  fmuls 10, 9, 3
  02a9688  fmuls 11, 4, 3
  02a968c  fnmsubs 10, 10, 3, 5
  02a9690  fmadds 3, 10, 11, 3
  02a9694  fmuls 9, 9, 3
  02a9698  fmuls 4, 4, 3
  02a969c  fnmsubs 5, 9, 3, 5
  02a96a0  fmadds 3, 5, 4, 3
  02a96a4  fmuls 5, 6, 3
  02a96a8  fmuls 4, 7, 3
  02a96ac  fmuls 3, 8, 3
  02a96b0  fmuls 6, 3, 3
  02a96b4  li 3, 0
  02a96b8  stfs 5, 176(1)
  02a96bc  stfs 4, 180(1)
  02a96c0  stfs 3, 184(1)
  02a96c4  stw 3, 188(1)
  02a96c8  fneg 6, 6
  02a96cc  fneg 8, 6
  02a96d0  fmr 6, 31
  02a96d4  fmadds 8, 5, 5, 8
  02a96d8  fmr 7, 6
  02a96dc  fsqrts 9, 8
  02a96e0  fcmpu 0, 9, 7
  02a96e4  bt 2, 0x2a9738
  02a96e8  frsqrte 6, 8
  02a96ec  lis 3, 43
  02a96f0  addi 3, 3, -27488
  02a96f4  lfs 7, 4(3)
  02a96f8  lfs 9, 8(3)
  02a96fc  fmuls 10, 8, 6
  02a9700  fmuls 11, 7, 6
  02a9704  fnmsubs 10, 10, 6, 9
  02a9708  fmadds 6, 10, 11, 6
  02a970c  fmuls 10, 8, 6
  02a9710  fmuls 11, 7, 6
  02a9714  fnmsubs 10, 10, 6, 9
  02a9718  fmadds 6, 10, 11, 6
  02a971c  fmuls 8, 8, 6
  02a9720  fmuls 7, 7, 6
  02a9724  fnmsubs 8, 8, 6, 9
  02a9728  fmadds 6, 8, 7, 6
  02a972c  fmuls 7, 3, 6
  02a9730  fmuls 6, 5, 6
  02a9734  fneg 7, 7
  02a9738  fmuls 8, 6, 4
  02a973c  li 21, 0
  02a9740  fmuls 9, 7, 3
  02a9744  stfs 7, 144(1)
  02a9748  fmsubs 10, 7, 4, 31
  02a974c  lis 3, 43
  02a9750  lis 28, 16256
  02a9754  stw 21, 148(1)
  02a9758  stfs 6, 152(1)
  02a975c  addi 29, 3, -27488
  02a9760  stw 21, 156(1)
  02a9764  addic 27, 1, 272
  02a9768  stw 21, 172(1)
  02a976c  stfs 29, 192(1)
  02a9770  fmsubs 8, 31, 3, 8
  02a9774  fmsubs 9, 6, 5, 9
  02a9778  ori 3, 27, 0
  02a977c  stfs 10, 168(1)
  02a9780  stfs 1, 196(1)
  02a9784  stfs 2, 200(1)
  02a9788  stfs 8, 160(1)
  02a978c  stfs 9, 164(1)
  02a9790  lfs 30, 8(29)
  02a9794  stw 28, 204(1)
  02a9798  stfs 7, 192(31)
  02a979c  stw 21, 196(31)
  02a97a0  stfs 6, 200(31)
  02a97a4  stw 21, 204(31)
  02a97a8  stfs 8, 208(31)
  02a97ac  stfs 9, 212(31)
  02a97b0  stfs 10, 216(31)
  02a97b4  stw 21, 220(31)
  02a97b8  stfs 5, 224(31)
  02a97bc  stfs 4, 228(31)
  02a97c0  stfs 3, 232(31)
  02a97c4  stw 21, 236(31)
  02a97c8  stfs 29, 16(31)
  02a97cc  stfs 1, 20(31)
  02a97d0  stfs 2, 24(31)
  02a97d4  stw 28, 28(31)
  02a97d8  bl 0x500af8
  02a97dc  nop
  02a97e0  lis 4, -16999
  02a97e4  stw 21, 320(1)
  02a97e8  stw 21, 324(1)
  02a97ec  addic 3, 1, 208
  02a97f0  ori 6, 4, 39322
  02a97f4  stw 28, 332(1)
  02a97f8  addic 4, 1, 144
  02a97fc  ori 5, 27, 0
  02a9800  stw 6, 328(1)
  02a9804  bl 0x50162c
  02a9808  nop
  02a980c  li 3, 12
  02a9810  bl 0x685c4
  02a9814  nop
  02a9818  lis 26, 123
  02a981c  std 3, 456(1)
  02a9820  addic 27, 1, 336
  02a9824  lfs 29, 12(29)
  02a9828  lis 24, 123
  02a982c  addic 26, 26, 28736
  02a9830  lis 25, 123
  02a9834  ori 31, 1, 0
  02a9838  ori 29, 1, 0
  02a983c  ori 28, 1, 0
  02a9840  addic 24, 24, 28868
  02a9844  ori 23, 27, 0
  02a9848  addic 25, 25, 28864
  02a984c  ori 22, 26, 0
  02a9850  lis 3, -32640
  02a9854  cmpwi 21, 0
  02a9858  ori 3, 3, 32896
  02a985c  cmpwi 1, 21, 2
  02a9860  stw 3, 400(31)
  02a9864  bt 2, 0x2a986c
  02a9868  bf 6, 0x2a98a0
  02a986c  lfs 1, 44(30)
  02a9870  lfs 2, 0(22)
  02a9874  fmuls 2, 2, 1
  02a9878  stfs 2, 0(23)
  02a987c  lfs 2, 4(22)
  02a9880  fmuls 2, 2, 1
  02a9884  stfs 2, 4(23)
  02a9888  lfs 2, 8(22)
  02a988c  fmuls 1, 2, 1
  02a9890  stfs 1, 8(23)
  02a9894  lfs 1, 12(22)
  02a9898  stfs 1, 12(23)
  02a989c  b 0x2a98ec
  02a98a0  lfs 3, 44(30)
  02a98a4  lfs 1, 0(22)
  02a98a8  fmuls 4, 1, 3
  02a98ac  fmr 1, 31
  02a98b0  fmr 2, 29
  02a98b4  stfs 4, 0(23)
  02a98b8  lfs 4, 4(22)
  02a98bc  fmuls 4, 4, 3
  02a98c0  stfs 4, 4(23)
  02a98c4  lfs 4, 8(22)
  02a98c8  fmuls 3, 4, 3
  02a98cc  stfs 3, 8(23)
  02a98d0  lfs 3, 12(22)
  02a98d4  stfs 3, 12(23)
  02a98d8  bl 0xfcbe8
  02a98dc  nop
  02a98e0  lfs 2, 344(29)
  02a98e4  fsubs 1, 2, 1
  02a98e8  stfs 1, 344(29)
  02a98ec  lfs 1, 0(25)
  02a98f0  addic 21, 21, 1
  02a98f4  lfs 2, 0(24)
  02a98f8  stfs 1, 416(28)
  02a98fc  addic 23, 23, 16
  02a9900  stfs 2, 420(28)
  02a9904  cmpwi 21, 4
  02a9908  addic 22, 22, 16
  02a990c  addic 31, 31, 4
  02a9910  addic 25, 25, 8
  02a9914  addic 24, 24, 8
  02a9918  addic 29, 29, 16
  02a991c  addic 28, 28, 8
  02a9920  bt 0, 0x2a9850
  02a9924  lis 29, 161
  02a9928  addic 3, 1, 336
  02a992c  addic 29, 29, 24396
  02a9930  addic 4, 1, 208
  02a9934  li 5, 0
  02a9938  li 7, 9
  02a993c  lwz 6, 28(29)
  02a9940  bl 0x72280
  02a9944  nop
  02a9948  lis 25, 123
  02a994c  li 24, 0
  02a9950  ori 31, 1, 0
  02a9954  addic 25, 25, 28800
  02a9958  ori 28, 27, 0
  02a995c  cmpwi 24, 0
  02a9960  cmpwi 1, 24, 2
  02a9964  bt 2, 0x2a996c
  02a9968  bf 6, 0x2a99a0
  02a996c  lfs 1, 44(30)
  02a9970  lfs 2, 0(25)
  02a9974  fmuls 2, 2, 1
  02a9978  stfs 2, 0(28)
  02a997c  lfs 2, 4(25)
  02a9980  fmuls 2, 2, 1
  02a9984  stfs 2, 4(28)
  02a9988  lfs 2, 8(25)
  02a998c  fmuls 1, 2, 1
  02a9990  stfs 1, 8(28)
  02a9994  lfs 1, 12(25)
  02a9998  stfs 1, 12(28)
  02a999c  b 0x2a99ec
  02a99a0  lfs 3, 44(30)
  02a99a4  lfs 1, 0(25)
  02a99a8  fmuls 4, 1, 3
  02a99ac  fmr 1, 31
  02a99b0  fmr 2, 29
  02a99b4  stfs 4, 0(28)
  02a99b8  lfs 4, 4(25)
  02a99bc  fmuls 4, 4, 3
  02a99c0  stfs 4, 4(28)
  02a99c4  lfs 4, 8(25)
  02a99c8  fmuls 3, 4, 3
  02a99cc  stfs 3, 8(28)
  02a99d0  lfs 3, 12(25)
  02a99d4  stfs 3, 12(28)
  02a99d8  bl 0xfcbe8
  02a99dc  nop
  02a99e0  lfs 2, 344(31)
  02a99e4  fsubs 1, 2, 1
  02a99e8  stfs 1, 344(31)
  02a99ec  addic 24, 24, 1
  02a99f0  addic 28, 28, 16
  02a99f4  cmpwi 24, 4
  02a99f8  addic 25, 25, 16
  02a99fc  addic 31, 31, 16
  02a9a00  bt 0, 0x2a995c
  02a9a04  addic 3, 1, 336
  02a9a08  addic 4, 1, 208
  02a9a0c  lwz 6, 28(29)
  02a9a10  li 5, 0
  02a9a14  li 7, 9
  02a9a18  bl 0x72280
  02a9a1c  nop
  02a9a20  li 3, 11
  02a9a24  bl 0x685c4
  02a9a28  nop
  02a9a2c  lis 4, 43
  02a9a30  std 3, 456(1)
  02a9a34  addi 3, 4, -27488
  02a9a38  lfs 2, 180(1)
  02a9a3c  lis 4, 149
  02a9a40  lfs 1, 196(1)
  02a9a44  lfs 3, 176(1)
  02a9a48  addic 4, 4, 5056
  02a9a4c  lfs 4, 16(3)
  02a9a50  lfs 5, 192(1)
  02a9a54  fmadds 2, 2, 4, 1
  02a9a58  fmadds 1, 3, 4, 5
  02a9a5c  lfs 10, 324(4)
  02a9a60  lfs 6, 184(1)
  02a9a64  lfs 7, 200(1)
  02a9a68  lfs 9, 320(4)
  02a9a6c  fmadds 3, 6, 4, 7
  02a9a70  lfs 11, 328(4)
  02a9a74  fmr 6, 31
  02a9a78  fsubs 10, 10, 2
  02a9a7c  fsubs 9, 9, 1
  02a9a80  lfs 5, 188(1)
  02a9a84  fsubs 11, 11, 3
  02a9a88  fmr 7, 6
  02a9a8c  fmuls 4, 10, 10
  02a9a90  fmr 8, 7
  02a9a94  fmadds 12, 9, 9, 4
  02a9a98  lfs 4, 332(4)
  02a9a9c  lwz 29, 28(29)
  02a9aa0  fmadds 12, 11, 11, 12
  02a9aa4  fsqrts 13, 12
  02a9aa8  fcmpu 0, 13, 8
  02a9aac  bt 2, 0x2a9afc
  02a9ab0  frsqrte 6, 12
  02a9ab4  lis 3, 43
  02a9ab8  addi 3, 3, -27488
  02a9abc  lfs 7, 4(3)
  02a9ac0  fmuls 8, 12, 6
  02a9ac4  fmuls 13, 7, 6
  02a9ac8  fnmsubs 8, 8, 6, 30
  02a9acc  fmadds 6, 8, 13, 6
  02a9ad0  fmuls 8, 12, 6
  02a9ad4  fmuls 13, 7, 6
  02a9ad8  fnmsubs 8, 8, 6, 30
  02a9adc  fmadds 6, 8, 13, 6
  02a9ae0  fmuls 8, 12, 6
  02a9ae4  fmuls 7, 7, 6
  02a9ae8  fnmsubs 8, 8, 6, 30
  02a9aec  fmadds 6, 8, 7, 6
  02a9af0  fmuls 8, 9, 6
  02a9af4  fmuls 7, 10, 6
  02a9af8  fmuls 6, 11, 6
  02a9afc  lis 3, 151
  02a9b00  addic 3, 3, -25376
  02a9b04  lfs 9, 656(3)
  02a9b08  lfs 10, 664(3)
  02a9b0c  fmuls 11, 9, 6
  02a9b10  fmuls 12, 10, 7
  02a9b14  lfs 13, 660(3)
  02a9b18  fmuls 0, 13, 8
  02a9b1c  lis 3, 43
  02a9b20  addi 3, 3, -27488
  02a9b24  fmsubs 10, 10, 8, 11
  02a9b28  fmsubs 11, 13, 6, 12
  02a9b2c  fmsubs 9, 9, 7, 0
  02a9b30  lfs 0, 20(3)
  02a9b34  fmuls 13, 29, 4
  02a9b38  fmuls 12, 10, 10
  02a9b3c  lis 3, 32544
  02a9b40  li 4, 4
  02a9b44  ori 3, 3, 8447
  02a9b48  mtctr 4
  02a9b4c  fmadds 12, 11, 11, 12
  02a9b50  stw 3, 412(1)
  02a9b54  stw 3, 408(1)
  02a9b58  stw 3, 404(1)
  02a9b5c  fmadds 12, 9, 9, 12
  02a9b60  stw 3, 400(1)
  02a9b64  fsqrts 12, 12
  02a9b68  fdivs 4, 0, 12
  02a9b6c  fsub 0, 31, 12
  02a9b70  fsub 30, 31, 12
  02a9b74  fsub 28, 31, 12
  02a9b78  fsub 27, 12, 31
  02a9b7c  fsub 26, 12, 31
  02a9b80  fsub 12, 12, 31
  02a9b84  fmuls 11, 11, 4
  02a9b88  fmuls 10, 10, 4
  02a9b8c  fmuls 4, 9, 4
  02a9b90  fsel 9, 0, 31, 11
  02a9b94  fsel 0, 30, 31, 10
  02a9b98  fsel 31, 28, 31, 4
  02a9b9c  fsel 30, 27, 9, 11
  02a9ba0  fsel 9, 26, 0, 10
  02a9ba4  fsel 31, 12, 31, 4
  02a9ba8  fmuls 4, 7, 30
  02a9bac  fmuls 0, 6, 9
  02a9bb0  fmuls 28, 8, 31
  02a9bb4  fmuls 11, 29, 9
  02a9bb8  fmuls 12, 29, 31
  02a9bbc  fmuls 10, 29, 30
  02a9bc0  fmsubs 9, 8, 9, 4
  02a9bc4  fmsubs 31, 7, 31, 0
  02a9bc8  fmsubs 4, 6, 30, 28
  02a9bcc  lfs 0, 0(26)
  02a9bd0  fmuls 30, 0, 29
  02a9bd4  fmuls 0, 0, 13
  02a9bd8  stfs 30, 0(27)
  02a9bdc  lfs 28, 4(26)
  02a9be0  fmuls 27, 28, 29
  02a9be4  fmuls 26, 28, 10
  02a9be8  fmuls 25, 28, 11
  02a9bec  fmuls 28, 28, 12
  02a9bf0  stfs 27, 4(27)
  02a9bf4  fmadds 25, 30, 7, 25
  02a9bf8  fmadds 27, 30, 8, 26
  02a9bfc  lfs 26, 8(26)
  02a9c00  fmadds 30, 30, 6, 28
  02a9c04  fmuls 26, 26, 29
  02a9c08  fmadds 28, 26, 31, 27
  02a9c0c  fmadds 27, 26, 4, 25
  02a9c10  fmadds 30, 26, 9, 30
  02a9c14  stfs 26, 8(27)
  02a9c18  lfs 26, 12(26)
  02a9c1c  addic 26, 26, 16
  02a9c20  fmadds 0, 26, 5, 0
  02a9c24  fmadds 28, 26, 1, 28
  02a9c28  fmadds 27, 26, 2, 27
  02a9c2c  fmadds 30, 26, 3, 30
  02a9c30  stfs 0, 12(27)
  02a9c34  stfs 28, 0(27)
  02a9c38  stfs 27, 4(27)
  02a9c3c  stfs 30, 8(27)
  02a9c40  addic 27, 27, 16
  02a9c44  bdnz 0x2a9bcc
  02a9c48  addic 3, 1, 336
  02a9c4c  li 4, 0
  02a9c50  li 5, 0
  02a9c54  ori 6, 29, 0
  02a9c58  li 7, 9
  02a9c5c  bl 0x72280
  02a9c60  nop
  02a9c64  li 3, 10
  02a9c68  bl 0x685c4
  02a9c6c  nop
  02a9c70  ori 4, 3, 0
  02a9c74  li 3, 24
  02a9c78  bl 0x174f80
  02a9c7c  nop
  02a9c80  li 3, 3
  02a9c84  ld 4, 472(1)
  02a9c88  bl 0x174f80
  02a9c8c  nop
  02a9c90  li 3, 0
  02a9c94  li 4, 0
  02a9c98  li 5, 0
  02a9c9c  li 6, 0
  02a9ca0  li 7, 0
  02a9ca4  li 8, 0
  02a9ca8  bl 0x502f08
  02a9cac  nop
  02a9cb0  ori 4, 3, 0
  02a9cb4  li 3, 6
  02a9cb8  bl 0x174f80
  02a9cbc  nop
  02a9cc0  li 3, 0
  02a9cc4  lis 9, 0
  02a9cc8  li 4, 0
  02a9ccc  li 5, 1
  02a9cd0  li 6, 1
  02a9cd4  li 7, 1
  02a9cd8  li 8, 0
  02a9cdc  ori 9, 9, 65424
  02a9ce0  bl 0x502fd4
  02a9ce4  nop
  02a9ce8  ori 4, 3, 0
  02a9cec  li 3, 26
  02a9cf0  bl 0x174f80
  02a9cf4  nop
  02a9cf8  li 3, 0
  02a9cfc  bl 0x502e50
  02a9d00  nop
  02a9d04  ori 4, 3, 0
  02a9d08  li 3, 8
  02a9d0c  bl 0x174f80
  02a9d10  nop
  02a9d14  bl 0x71170
  02a9d18  nop
  02a9d1c  lis 3, 43
  02a9d20  lis 29, 251
  02a9d24  addi 7, 3, -27488
  02a9d28  lis 31, 123
  02a9d2c  lis 5, 123
  02a9d30  addic 29, 29, -1960
  02a9d34  addic 31, 31, 26384
  02a9d38  lfs 2, 24(7)
  02a9d3c  li 3, 0
  02a9d40  lfs 3, 28(7)
  02a9d44  addic 5, 5, 23248
  02a9d48  lfs 4, 144(1)
  02a9d4c  addic 4, 31, 4
  02a9d50  lfs 5, 160(1)
  02a9d54  ori 6, 29, 0
  02a9d58  lfs 6, 176(1)
  02a9d5c  lfs 7, 192(1)
  02a9d60  lfs 8, 148(1)
  02a9d64  lfs 9, 164(1)
  02a9d68  lfs 10, 180(1)
  02a9d6c  lfs 11, 196(1)
  02a9d70  lfs 12, 152(1)
  02a9d74  lfs 13, 168(1)
  02a9d78  lfs 0, 184(1)
  02a9d7c  lfs 30, 32(7)
  02a9d80  lfs 31, 200(1)
  02a9d84  lfs 1, 32(30)
  02a9d88  lfs 29, 4(5)
  02a9d8c  lfs 28, 0(5)
  02a9d90  fmuls 29, 29, 1
  02a9d94  lfs 27, 8(5)
  02a9d98  fmuls 28, 28, 1
  02a9d9c  fmuls 1, 27, 1
  02a9da0  lfs 27, 12(5)
  02a9da4  fmuls 26, 29, 5
  02a9da8  fmuls 25, 29, 9
  02a9dac  fmuls 29, 29, 13
  02a9db0  fmadds 26, 28, 4, 26
  02a9db4  fmadds 25, 28, 8, 25
  02a9db8  fmadds 29, 28, 12, 29
  02a9dbc  fmadds 28, 1, 6, 26
  02a9dc0  fmadds 26, 1, 10, 25
  02a9dc4  fmadds 1, 1, 0, 29
  02a9dc8  fmadds 29, 27, 7, 28
  02a9dcc  fmadds 28, 27, 11, 26
  02a9dd0  fmadds 1, 27, 31, 1
  02a9dd4  stfs 29, 0(6)
  02a9dd8  stfs 28, 4(6)
  02a9ddc  stfs 1, 8(6)
  02a9de0  lfs 1, 0(4)
  02a9de4  fsubs 29, 1, 2
  02a9de8  fcmpu 0, 29, 3
  02a9dec  stfs 29, 0(4)
  02a9df0  cror 6, 1, 2
  02a9df4  bt 6, 0x2a9e00
  02a9df8  fsubs 1, 1, 30
  02a9dfc  stfs 1, 0(4)
  02a9e00  addic 3, 3, 1
  02a9e04  addic 5, 5, 16
  02a9e08  cmpwi 3, 196
  02a9e0c  addic 6, 6, 12
  02a9e10  addic 4, 4, 8
  02a9e14  bt 0, 0x2a9d84
  02a9e18  lis 5, 123
  02a9e1c  li 3, 148
  02a9e20  addic 5, 5, 27952
  02a9e24  ori 4, 29, 0
  02a9e28  ori 6, 31, 0
  02a9e2c  li 7, 9
  02a9e30  bl 0x74604
  02a9e34  nop
  02a9e38  lis 5, 123
  02a9e3c  li 3, 50
  02a9e40  addic 4, 29, 1752
  02a9e44  addic 5, 5, 28536
  02a9e48  addic 6, 31, 1168
  02a9e4c  li 7, 9
  02a9e50  bl 0x74604
  02a9e54  nop
  02a9e58  ld 0, 656(1)
  02a9e5c  mtlr 0
  02a9e60  lfd 25, 584(1)
  02a9e64  lfd 26, 592(1)
  02a9e68  lfd 27, 600(1)
  02a9e6c  lfd 28, 608(1)
  02a9e70  lfd 29, 616(1)
  02a9e74  lfd 30, 624(1)
  02a9e78  lfd 31, 632(1)
  02a9e7c  ld 21, 496(1)
  02a9e80  ld 22, 504(1)
  02a9e84  ld 23, 512(1)
  02a9e88  ld 24, 520(1)
  02a9e8c  ld 25, 528(1)
  02a9e90  ld 26, 536(1)
  02a9e94  ld 27, 544(1)
  02a9e98  ld 28, 552(1)
  02a9e9c  ld 29, 560(1)
  02a9ea0  ld 30, 568(1)
  02a9ea4  ld 31, 576(1)
  02a9ea8  addi 1, 1, 640
  02a9eac  blr

M167_002a9f18:   # 0x2a9f18, 0xa10 bytes
  02a9f18  stdu 1, -416(1)
  02a9f1c  mflr 0
  02a9f20  std 0, 432(1)
  02a9f24  stfd 25, 360(1)
  02a9f28  stfd 26, 368(1)
  02a9f2c  stfd 27, 376(1)
  02a9f30  stfd 28, 384(1)
  02a9f34  stfd 29, 392(1)
  02a9f38  stfd 30, 400(1)
  02a9f3c  stfd 31, 408(1)
  02a9f40  addi 0, 1, 208
  02a9f44  stvx 26, 0, 0
  02a9f48  addic 0, 0, 16
  02a9f4c  stvx 27, 0, 0
  02a9f50  addic 0, 0, 16
  02a9f54  stvx 28, 0, 0
  02a9f58  addic 0, 0, 16
  02a9f5c  stvx 29, 0, 0
  02a9f60  addic 0, 0, 16
  02a9f64  stvx 30, 0, 0
  02a9f68  addic 0, 0, 16
  02a9f6c  stvx 31, 0, 0
  02a9f70  std 31, 352(1)
  02a9f74  lis 4, 43
  02a9f78  std 29, 336(1)
  02a9f7c  std 27, 320(1)
  02a9f80  ori 31, 3, 0
  02a9f84  addi 27, 4, -24912
  02a9f88  std 30, 344(1)
  02a9f8c  std 28, 328(1)
  02a9f90  std 26, 312(1)
  02a9f94  lwz 29, 120(31)
  02a9f98  bl 0xfcc68
  02a9f9c  nop
  02a9fa0  lfs 2, 0(27)
  02a9fa4  lfs 30, 4(27)
  02a9fa8  fadds 1, 1, 2
  02a9fac  lfs 29, 8(27)
  02a9fb0  lfs 5, 12(27)
  02a9fb4  lfs 27, 16(27)
  02a9fb8  fmr 28, 5
  02a9fbc  lfs 26, 20(27)
  02a9fc0  lfs 25, 24(27)
  02a9fc4  fsubs 2, 30, 1
  02a9fc8  fsubs 3, 29, 1
  02a9fcc  lfs 31, 28(27)
  02a9fd0  fsub 4, 1, 2
  02a9fd4  fsel 1, 4, 2, 1
  02a9fd8  fsub 4, 3, 1
  02a9fdc  fsel 1, 4, 3, 1
  02a9fe0  fmuls 3, 1, 1
  02a9fe4  fmuls 2, 3, 1
  02a9fe8  fmuls 4, 3, 2
  02a9fec  fmadds 1, 2, 28, 1
  02a9ff0  fmuls 2, 3, 4
  02a9ff4  fmadds 1, 4, 27, 1
  02a9ff8  fmuls 3, 3, 2
  02a9ffc  fmadds 1, 2, 26, 1
  02aa000  fmadds 1, 3, 25, 1
  02aa004  fmuls 1, 1, 31
  02aa008  stfs 1, 112(1)
  02aa00c  bl 0xfcc68
  02aa010  nop
  02aa014  fsubs 2, 30, 1
  02aa018  fsubs 3, 29, 1
  02aa01c  li 3, 0
  02aa020  stw 3, 120(1)
  02aa024  fsub 4, 1, 2
  02aa028  fsel 1, 4, 2, 1
  02aa02c  fsub 2, 3, 1
  02aa030  fsel 1, 2, 3, 1
  02aa034  fmuls 2, 1, 1
  02aa038  fmuls 3, 2, 1
  02aa03c  fmuls 4, 2, 3
  02aa040  fmadds 1, 3, 28, 1
  02aa044  fmuls 3, 2, 4
  02aa048  fmadds 1, 4, 27, 1
  02aa04c  fmuls 2, 2, 3
  02aa050  fmadds 1, 3, 26, 1
  02aa054  fmadds 1, 2, 25, 1
  02aa058  fmuls 1, 1, 31
  02aa05c  stfs 1, 116(1)
  02aa060  lfs 1, 32(27)
  02aa064  lfs 2, 36(27)
  02aa068  bl 0xfcbe8
  02aa06c  nop
  02aa070  lfs 2, 116(1)
  02aa074  lfs 3, 112(1)
  02aa078  lfs 4, 208(31)
  02aa07c  lfs 5, 224(31)
  02aa080  lfs 6, 212(31)
  02aa084  lfs 7, 220(31)
  02aa088  fmuls 4, 4, 2
  02aa08c  lfs 8, 228(31)
  02aa090  fmuls 5, 1, 5
  02aa094  lfs 9, 192(31)
  02aa098  fmuls 6, 6, 2
  02aa09c  lfs 10, 236(31)
  02aa0a0  fmuls 7, 7, 2
  02aa0a4  fmuls 8, 1, 8
  02aa0a8  lfs 11, 216(31)
  02aa0ac  fmuls 10, 1, 10
  02aa0b0  lfs 12, 232(31)
  02aa0b4  fmuls 2, 11, 2
  02aa0b8  lis 28, 151
  02aa0bc  lfs 11, 196(31)
  02aa0c0  fmuls 1, 1, 12
  02aa0c4  addic 28, 28, -25376
  02aa0c8  fmadds 4, 9, 3, 4
  02aa0cc  lfs 9, 204(31)
  02aa0d0  fneg 5, 5
  02aa0d4  fmadds 6, 11, 3, 6
  02aa0d8  lfs 12, 200(31)
  02aa0dc  fmadds 7, 9, 3, 7
  02aa0e0  fneg 8, 8
  02aa0e4  fneg 9, 10
  02aa0e8  fmadds 2, 12, 3, 2
  02aa0ec  fneg 1, 1
  02aa0f0  addic 30, 1, 112
  02aa0f4  fadds 3, 4, 5
  02aa0f8  lfs 4, 124(1)
  02aa0fc  fadds 5, 6, 8
  02aa100  fadds 6, 7, 9
  02aa104  fadds 1, 2, 1
  02aa108  stfs 3, 112(1)
  02aa10c  fadds 2, 6, 4
  02aa110  stfs 5, 116(1)
  02aa114  lwz 3, 8324(28)
  02aa118  stfs 1, 120(1)
  02aa11c  cmpwi 3, 129
  02aa120  stfs 2, 124(1)
  02aa124  lfs 1, 16(31)
  02aa128  lfs 2, 20(31)
  02aa12c  stfs 1, 128(1)
  02aa130  lfs 1, 24(31)
  02aa134  stfs 2, 132(1)
  02aa138  lfs 2, 28(31)
  02aa13c  stfs 1, 136(1)
  02aa140  stfs 2, 140(1)
  02aa144  lfs 30, 40(27)
  02aa148  lfs 29, 44(27)
  02aa14c  bf 2, 0x2aa1c8
  02aa150  lis 3, 161
  02aa154  lis 4, 21845
  02aa158  ori 4, 4, 21846
  02aa15c  lwz 3, 1808(3)
  02aa160  mulhw 4, 4, 3
  02aa164  srwi 5, 4, 31
  02aa168  addc 4, 4, 5
  02aa16c  addc 5, 4, 4
  02aa170  addc 4, 4, 5
  02aa174  subc 3, 3, 4
  02aa178  cmpwi 3, 0
  02aa17c  bf 2, 0x2aa20c
  02aa180  lis 3, 114
  02aa184  lis 5, 20224
  02aa188  lis 6, 8191
  02aa18c  li 9, 1
  02aa190  ori 4, 30, 0
  02aa194  lfs 1, -3056(3)
  02aa198  ori 5, 5, 32767
  02aa19c  addic 3, 1, 128
  02aa1a0  fmuls 2, 1, 30
  02aa1a4  fmr 1, 29
  02aa1a8  ori 6, 6, 65535
  02aa1ac  fctiwz 2, 2
  02aa1b0  stfd 2, 192(1)
  02aa1b4  lwz 8, 196(1)
  02aa1b8  extsw 8, 8
  02aa1bc  bl 0x1268f8
  02aa1c0  nop
  02aa1c4  b 0x2aa20c
  02aa1c8  lis 3, 114
  02aa1cc  lis 5, 20224
  02aa1d0  lis 6, 8191
  02aa1d4  li 9, 1
  02aa1d8  ori 4, 30, 0
  02aa1dc  lfs 1, -3056(3)
  02aa1e0  ori 5, 5, 32767
  02aa1e4  addic 3, 1, 128
  02aa1e8  fmuls 2, 1, 30
  02aa1ec  fmr 1, 29
  02aa1f0  ori 6, 6, 65535
  02aa1f4  fctiwz 2, 2
  02aa1f8  stfd 2, 192(1)
  02aa1fc  lwz 8, 196(1)
  02aa200  extsw 8, 8
  02aa204  bl 0x1268f8
  02aa208  nop
  02aa20c  lwz 3, 12(29)
  02aa210  cmpwi 3, 0
  02aa214  bt 2, 0x2aa440
  02aa218  lfs 1, 20(29)
  02aa21c  lfs 2, 132(1)
  02aa220  li 3, 20
  02aa224  lfs 3, 16(29)
  02aa228  fsubs 1, 1, 2
  02aa22c  lfs 4, 128(1)
  02aa230  addi 4, 3, 16
  02aa234  fsubs 2, 3, 4
  02aa238  li 5, 16
  02aa23c  lfs 3, 24(29)
  02aa240  lfs 4, 136(1)
  02aa244  addi 6, 5, 16
  02aa248  lvlx 2, 3, 29
  02aa24c  fsubs 3, 3, 4
  02aa250  li 3, 132
  02aa254  lvrx 3, 4, 29
  02aa258  fmuls 1, 1, 1
  02aa25c  vor 2, 2, 3
  02aa260  li 4, 128
  02aa264  lvlx 3, 5, 29
  02aa268  lvrx 4, 6, 29
  02aa26c  lvlx 5, 3, 1
  02aa270  li 5, 136
  02aa274  vspltisw 6, -1
  02aa278  li 3, 24
  02aa27c  vsubfp 2, 2, 5
  02aa280  vor 3, 3, 4
  02aa284  lvlx 4, 4, 1
  02aa288  addi 4, 3, 16
  02aa28c  fmadds 1, 2, 2, 1
  02aa290  vslw 6, 6, 6
  02aa294  vsubfp 3, 3, 4
  02aa298  lvlx 7, 3, 29
  02aa29c  lvrx 8, 4, 29
  02aa2a0  lis 3, 43
  02aa2a4  vor 7, 7, 8
  02aa2a8  lvlx 8, 5, 1
  02aa2ac  vmaddfp 6, 2, 2, 6
  02aa2b0  fmadds 1, 3, 3, 1
  02aa2b4  vsubfp 7, 7, 8
  02aa2b8  vspltisw 9, -1
  02aa2bc  addi 3, 3, -24912
  02aa2c0  vspltisw 10, -1
  02aa2c4  li 5, 48
  02aa2c8  vspltisw 11, -1
  02aa2cc  li 4, 52
  02aa2d0  vslw 9, 9, 9
  02aa2d4  vslw 10, 10, 10
  02aa2d8  fsqrts 1, 1
  02aa2dc  vslw 11, 11, 11
  02aa2e0  vspltisw 12, -1
  02aa2e4  vspltisw 0, -1
  02aa2e8  li 0, 176
  02aa2ec  vspltisw 15, -1
  02aa2f0  vslw 12, 12, 12
  02aa2f4  vslw 0, 0, 0
  02aa2f8  vspltisw 18, -1
  02aa2fc  vspltisw 17, -1
  02aa300  vspltisw 16, -1
  02aa304  li 7, 144
  02aa308  li 8, 148
  02aa30c  vslw 16, 16, 16
  02aa310  li 10, 152
  02aa314  lis 6, 8191
  02aa318  li 9, 1
  02aa31c  ori 6, 6, 65535
  02aa320  vmaddfp 6, 3, 3, 6
  02aa324  vmaddfp 6, 7, 7, 6
  02aa328  vrsqrtefp 13, 6
  02aa32c  vmaddfp 9, 6, 13, 9
  02aa330  stfs 1, 176(1)
  02aa334  stfs 1, 180(1)
  02aa338  stfs 1, 184(1)
  02aa33c  stfs 1, 188(1)
  02aa340  lvlx 1, 5, 3
  02aa344  lvlx 14, 4, 3
  02aa348  vspltw 1, 1, 0
  02aa34c  vspltw 14, 14, 0
  02aa350  vmaddfp 10, 1, 13, 10
  02aa354  vnmsubfp 9, 9, 13, 14
  02aa358  lis 4, 114
  02aa35c  lis 5, 20224
  02aa360  addic 3, 1, 144
  02aa364  ori 5, 5, 32767
  02aa368  vmaddfp 9, 9, 10, 13
  02aa36c  vslw 10, 15, 15
  02aa370  vspltisw 15, -1
  02aa374  lvx 13, 1, 0
  02aa378  lfs 1, -3056(4)
  02aa37c  vslw 15, 15, 15
  02aa380  fmuls 1, 1, 30
  02aa384  lfs 3, 140(1)
  02aa388  ori 4, 30, 0
  02aa38c  vmaddfp 11, 6, 9, 11
  02aa390  vmaddfp 12, 1, 9, 12
  02aa394  vmaddfp 15, 13, 1, 15
  02aa398  fctiwz 2, 1
  02aa39c  fmr 1, 29
  02aa3a0  vnmsubfp 11, 11, 9, 14
  02aa3a4  vmaddfp 9, 11, 12, 9
  02aa3a8  vslw 12, 18, 18
  02aa3ac  vslw 11, 17, 17
  02aa3b0  vspltisw 17, -1
  02aa3b4  vspltisw 18, -1
  02aa3b8  vmaddfp 6, 6, 9, 0
  02aa3bc  vmaddfp 10, 1, 9, 10
  02aa3c0  vspltisw 0, -1
  02aa3c4  vslw 1, 17, 17
  02aa3c8  vslw 17, 18, 18
  02aa3cc  vslw 0, 0, 0
  02aa3d0  vnmsubfp 6, 6, 9, 14
  02aa3d4  vspltisw 14, 0
  02aa3d8  vmaddfp 6, 6, 10, 9
  02aa3dc  vcmpeqfp 9, 13, 14
  02aa3e0  vmaddfp 3, 6, 3, 12
  02aa3e4  vmaddfp 2, 6, 2, 11
  02aa3e8  vmaddfp 7, 6, 7, 16
  02aa3ec  vmaddfp 3, 15, 3, 0
  02aa3f0  vmaddfp 2, 15, 2, 17
  02aa3f4  vmaddfp 6, 15, 7, 1
  02aa3f8  vandc 3, 3, 9
  02aa3fc  vandc 2, 2, 9
  02aa400  vandc 6, 6, 9
  02aa404  vaddfp 3, 4, 3
  02aa408  vaddfp 2, 5, 2
  02aa40c  vaddfp 6, 8, 6
  02aa410  vspltw 3, 3, 0
  02aa414  vspltw 2, 2, 0
  02aa418  vspltw 4, 6, 0
  02aa41c  stvewx 3, 7, 1
  02aa420  stvewx 2, 8, 1
  02aa424  stvewx 4, 10, 1
  02aa428  stfs 3, 156(1)
  02aa42c  stfd 2, 192(1)
  02aa430  lwz 8, 196(1)
  02aa434  extsw 8, 8
  02aa438  bl 0x1268f8
  02aa43c  nop
  02aa440  lis 3, 114
  02aa444  lfs 1, -3056(3)
  02aa448  fmuls 1, 1, 30
  02aa44c  fctiwz 1, 1
  02aa450  stfd 1, 192(1)
  02aa454  lwz 3, 196(1)
  02aa458  extsw 3, 3
  02aa45c  bl 0xfc620
  02aa460  nop
  02aa464  lis 4, 43
  02aa468  stw 3, 0(29)
  02aa46c  lfs 1, 224(31)
  02aa470  lis 3, 15564
  02aa474  addi 4, 4, -24912
  02aa478  lfs 2, 228(31)
  02aa47c  lfs 3, 232(31)
  02aa480  ori 6, 3, 52429
  02aa484  lfs 4, 56(4)
  02aa488  lfs 5, 16(31)
  02aa48c  lfs 6, 20(31)
  02aa490  lfs 7, 24(31)
  02aa494  fmadds 5, 1, 4, 5
  02aa498  lfs 8, 52(4)
  02aa49c  fmadds 6, 2, 4, 6
  02aa4a0  lfs 9, 28(31)
  02aa4a4  fmadds 3, 3, 4, 7
  02aa4a8  stfs 9, 140(1)
  02aa4ac  lfs 4, 236(31)
  02aa4b0  lwz 3, 8324(28)
  02aa4b4  lis 31, 128
  02aa4b8  cmpwi 3, 8
  02aa4bc  ori 31, 31, 32896
  02aa4c0  stfs 5, 128(1)
  02aa4c4  stfs 6, 132(1)
  02aa4c8  stfs 3, 136(1)
  02aa4cc  lfs 3, 60(4)
  02aa4d0  fmuls 1, 1, 3
  02aa4d4  fmuls 2, 2, 3
  02aa4d8  fmadds 3, 4, 3, 8
  02aa4dc  stfs 1, 112(1)
  02aa4e0  stfs 2, 116(1)
  02aa4e4  stfs 3, 124(1)
  02aa4e8  lfs 1, 64(4)
  02aa4ec  stw 6, 120(1)
  02aa4f0  lfs 30, 68(4)
  02aa4f4  bf 2, 0x2aa524
  02aa4f8  lis 3, 43
  02aa4fc  lis 4, 114
  02aa500  addi 3, 3, -24912
  02aa504  lis 31, 160
  02aa508  ori 31, 31, 41120
  02aa50c  lfs 2, 76(3)
  02aa510  lfs 3, -3052(4)
  02aa514  lfs 30, 72(3)
  02aa518  fnmsubs 1, 3, 2, 1
  02aa51c  lwz 3, 8324(28)
  02aa520  stfs 1, 120(1)
  02aa524  cmpwi 3, 129
  02aa528  bf 2, 0x2aa554
  02aa52c  lis 3, 43
  02aa530  lis 4, 114
  02aa534  addi 3, 3, -24912
  02aa538  lis 31, 160
  02aa53c  ori 31, 31, 41120
  02aa540  lfs 2, 84(3)
  02aa544  lfs 3, -3052(4)
  02aa548  lfs 30, 80(3)
  02aa54c  fnmsubs 1, 3, 2, 1
  02aa550  stfs 1, 120(1)
  02aa554  lis 3, 43
  02aa558  fmr 1, 31
  02aa55c  fmr 3, 30
  02aa560  li 7, 6
  02aa564  addi 4, 3, -24912
  02aa568  addic 3, 1, 128
  02aa56c  ori 8, 30, 0
  02aa570  ori 10, 31, 0
  02aa574  lfs 28, 88(4)
  02aa578  lfs 29, 92(4)
  02aa57c  fmr 2, 28
  02aa580  fmr 4, 29
  02aa584  bl 0x126f50
  02aa588  nop
  02aa58c  cmpwi 3, 0
  02aa590  lwz 28, 8324(28)
  02aa594  bt 2, 0x2aa5a0
  02aa598  li 4, 68
  02aa59c  stb 4, 3(3)
  02aa5a0  lwz 3, 12(29)
  02aa5a4  cmpwi 3, 0
  02aa5a8  bt 2, 0x2aa88c
  02aa5ac  lfs 1, 20(29)
  02aa5b0  lfs 2, 132(1)
  02aa5b4  lfs 3, 16(29)
  02aa5b8  fsubs 1, 1, 2
  02aa5bc  lfs 4, 128(1)
  02aa5c0  li 3, 20
  02aa5c4  fsubs 2, 3, 4
  02aa5c8  lfs 3, 24(29)
  02aa5cc  lfs 4, 136(1)
  02aa5d0  addi 5, 3, 16
  02aa5d4  fsubs 3, 3, 4
  02aa5d8  li 6, 16
  02aa5dc  fmuls 1, 1, 1
  02aa5e0  li 4, 132
  02aa5e4  lvlx 2, 3, 29
  02aa5e8  lvrx 3, 5, 29
  02aa5ec  addi 3, 6, 16
  02aa5f0  lvlx 4, 6, 29
  02aa5f4  vor 2, 2, 3
  02aa5f8  li 5, 128
  02aa5fc  vspltisw 3, -1
  02aa600  li 6, 24
  02aa604  li 10, 8
  02aa608  vspltisw 30, 1
  02aa60c  addi 8, 6, 16
  02aa610  fmadds 1, 2, 2, 1
  02aa614  vslw 5, 3, 3
  02aa618  li 9, 136
  02aa61c  vspltisw 3, -1
  02aa620  subc 10, 10, 28
  02aa624  li 27, 129
  02aa628  cntlzw 10, 10
  02aa62c  subc 28, 27, 28
  02aa630  vslw 6, 3, 3
  02aa634  lvrx 3, 3, 29
  02aa638  sldi 10, 10, 58
  02aa63c  lvlx 7, 4, 1
  02aa640  fmadds 1, 3, 3, 1
  02aa644  vsubfp 2, 2, 7
  02aa648  vor 3, 4, 3
  02aa64c  lvlx 4, 5, 1
  02aa650  li 27, 2
  02aa654  li 26, 4
  02aa658  lis 11, 43
  02aa65c  vsubfp 3, 3, 4
  02aa660  sradi 10, 10, 63
  02aa664  lvlx 4, 6, 29
  02aa668  subc 27, 27, 26
  02aa66c  lvrx 7, 8, 29
  02aa670  addi 11, 11, -24912
  02aa674  fsqrts 1, 1
  02aa678  vor 4, 4, 7
  02aa67c  li 12, 96
  02aa680  cntlzw 28, 28
  02aa684  and 3, 10, 27
  02aa688  li 7, 1
  02aa68c  sldi 28, 28, 58
  02aa690  addc 3, 26, 3
  02aa694  li 27, 1
  02aa698  sradi 28, 28, 63
  02aa69c  subc 4, 7, 3
  02aa6a0  li 0, 176
  02aa6a4  and 28, 28, 4
  02aa6a8  addc 28, 3, 28
  02aa6ac  cmpwi 28, 1
  02aa6b0  vmaddfp 5, 2, 2, 5
  02aa6b4  lvlx 8, 9, 1
  02aa6b8  vsubfp 4, 4, 8
  02aa6bc  vmaddfp 26, 3, 3, 5
  02aa6c0  vmaddfp 26, 4, 4, 26
  02aa6c4  stfs 1, 176(1)
  02aa6c8  stfs 1, 180(1)
  02aa6cc  stfs 1, 184(1)
  02aa6d0  stfs 1, 188(1)
  02aa6d4  lvlx 5, 12, 11
  02aa6d8  lvx 31, 1, 0
  02aa6dc  vspltw 5, 5, 0
  02aa6e0  vmaddfp 5, 31, 5, 6
  02aa6e4  bf 1, 0x2aa88c
  02aa6e8  vrsqrtefp 6, 26
  02aa6ec  vspltisw 7, -1
  02aa6f0  lis 3, 43
  02aa6f4  li 4, 48
  02aa6f8  vspltisw 8, -1
  02aa6fc  addi 3, 3, -24912
  02aa700  vspltisw 11, -1
  02aa704  li 5, 52
  02aa708  vslw 7, 7, 7
  02aa70c  vslw 8, 8, 8
  02aa710  vslw 11, 11, 11
  02aa714  lvlx 9, 4, 3
  02aa718  lvlx 10, 5, 3
  02aa71c  vspltw 9, 9, 0
  02aa720  vspltw 10, 10, 0
  02aa724  vspltisw 12, -1
  02aa728  vmaddfp 7, 26, 6, 7
  02aa72c  vmaddfp 8, 9, 6, 8
  02aa730  vspltisw 13, -1
  02aa734  vslw 12, 12, 12
  02aa738  vsldoi 29, 30, 30, 0
  02aa73c  vspltisw 0, -1
  02aa740  vspltisw 1, -1
  02aa744  vnmsubfp 7, 7, 6, 10
  02aa748  vmaddfp 6, 7, 8, 6
  02aa74c  vslw 7, 13, 13
  02aa750  vspltisw 8, -1
  02aa754  vspltisw 13, -1
  02aa758  vslw 8, 8, 8
  02aa75c  vslw 13, 13, 13
  02aa760  vmaddfp 11, 26, 6, 11
  02aa764  vmaddfp 12, 9, 6, 12
  02aa768  vnmsubfp 11, 11, 6, 10
  02aa76c  vmaddfp 6, 11, 12, 6
  02aa770  vslw 11, 0, 0
  02aa774  vslw 12, 1, 1
  02aa778  vspltisw 0, -1
  02aa77c  vspltisw 1, 0
  02aa780  vslw 28, 0, 0
  02aa784  vspltisw 0, -1
  02aa788  vcmpeqfp 31, 31, 1
  02aa78c  vmaddfp 7, 26, 6, 7
  02aa790  vmaddfp 8, 9, 6, 8
  02aa794  vspltisw 9, -1
  02aa798  vslw 26, 0, 0
  02aa79c  vslw 27, 9, 9
  02aa7a0  vnmsubfp 7, 7, 6, 10
  02aa7a4  vmaddfp 6, 7, 8, 6
  02aa7a8  vmaddfp 4, 6, 4, 13
  02aa7ac  vmaddfp 2, 6, 2, 11
  02aa7b0  vmaddfp 3, 6, 3, 12
  02aa7b4  vmaddfp 28, 5, 4, 28
  02aa7b8  vmaddfp 27, 5, 2, 27
  02aa7bc  vmaddfp 26, 5, 3, 26
  02aa7c0  vcfsx 2, 29, 0
  02aa7c4  vspltisw 3, -1
  02aa7c8  li 3, 128
  02aa7cc  vspltisw 4, -1
  02aa7d0  li 4, 136
  02aa7d4  vspltisw 5, -1
  02aa7d8  li 5, 132
  02aa7dc  vslw 3, 3, 3
  02aa7e0  vslw 4, 4, 4
  02aa7e4  vslw 5, 5, 5
  02aa7e8  li 6, 160
  02aa7ec  fmr 1, 31
  02aa7f0  li 7, 6
  02aa7f4  fmr 2, 28
  02aa7f8  ori 8, 30, 0
  02aa7fc  fmr 3, 30
  02aa800  ori 10, 31, 0
  02aa804  vmaddfp 3, 2, 28, 3
  02aa808  vmaddfp 4, 2, 27, 4
  02aa80c  vmaddfp 2, 2, 26, 5
  02aa810  lvlx 5, 3, 1
  02aa814  lvlx 6, 4, 1
  02aa818  addic 3, 1, 160
  02aa81c  lvlx 7, 5, 1
  02aa820  li 4, 164
  02aa824  li 5, 168
  02aa828  lfs 5, 140(1)
  02aa82c  fmr 4, 29
  02aa830  vandc 3, 3, 31
  02aa834  vandc 4, 4, 31
  02aa838  vandc 2, 2, 31
  02aa83c  vaddfp 3, 6, 3
  02aa840  vaddfp 4, 7, 4
  02aa844  vaddfp 2, 5, 2
  02aa848  vspltw 3, 3, 0
  02aa84c  vspltw 4, 4, 0
  02aa850  vspltw 2, 2, 0
  02aa854  stvewx 2, 6, 1
  02aa858  stvewx 4, 4, 1
  02aa85c  stvewx 3, 5, 1
  02aa860  stfs 5, 172(1)
  02aa864  bl 0x126f50
  02aa868  nop
  02aa86c  cmpwi 3, 0
  02aa870  bt 2, 0x2aa87c
  02aa874  li 4, 68
  02aa878  stb 4, 3(3)
  02aa87c  addic 27, 27, 1
  02aa880  vadduwm 29, 29, 30
  02aa884  cmpw 27, 28
  02aa888  bt 0, 0x2aa7c0
  02aa88c  lfs 1, 128(1)
  02aa890  li 3, 1
  02aa894  stfs 1, 16(29)
  02aa898  lfs 1, 132(1)
  02aa89c  stfs 1, 20(29)
  02aa8a0  lfs 1, 136(1)
  02aa8a4  stw 3, 12(29)
  02aa8a8  stfs 1, 24(29)
  02aa8ac  lfs 1, 140(1)
  02aa8b0  stfs 1, 28(29)
  02aa8b4  li 0, 208
  02aa8b8  lvx 26, 1, 0
  02aa8bc  addic 0, 0, 16
  02aa8c0  lvx 27, 1, 0
  02aa8c4  addic 0, 0, 16
  02aa8c8  lvx 28, 1, 0
  02aa8cc  addic 0, 0, 16
  02aa8d0  lvx 29, 1, 0
  02aa8d4  addic 0, 0, 16
  02aa8d8  lvx 30, 1, 0
  02aa8dc  addic 0, 0, 16
  02aa8e0  lvx 31, 1, 0
  02aa8e4  ld 0, 432(1)
  02aa8e8  mtlr 0
  02aa8ec  lfd 25, 360(1)
  02aa8f0  lfd 26, 368(1)
  02aa8f4  lfd 27, 376(1)
  02aa8f8  lfd 28, 384(1)
  02aa8fc  lfd 29, 392(1)
  02aa900  lfd 30, 400(1)
  02aa904  lfd 31, 408(1)
  02aa908  ld 26, 312(1)
  02aa90c  ld 27, 320(1)
  02aa910  ld 28, 328(1)
  02aa914  ld 29, 336(1)
  02aa918  ld 30, 344(1)
  02aa91c  ld 31, 352(1)
  02aa920  addi 1, 1, 416
  02aa924  blr
