# sdk/libc/xscanf.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Scanf:   # 0x5c9b38, 0x5c8 bytes
  05c9b38  stdu 1, -224(1)
  05c9b3c  mflr 0
  05c9b40  std 28, 192(1)
  05c9b44  std 29, 200(1)
  05c9b48  mr 28, 5
  05c9b4c  li 29, 0
  05c9b50  stw 3, 124(1)
  05c9b54  stw 4, 128(1)
  05c9b58  addi 3, 1, 132
  05c9b5c  mr 4, 6
  05c9b60  std 24, 160(1)
  05c9b64  std 25, 168(1)
  05c9b68  std 26, 176(1)
  05c9b6c  std 27, 184(1)
  05c9b70  std 30, 208(1)
  05c9b74  std 31, 216(1)
  05c9b78  std 0, 240(1)
  05c9b7c  stw 29, 116(1)
  05c9b80  sth 29, 120(1)
  05c9b84  sth 29, 122(1)
  05c9b88  bl 0x5cc0a8
  05c9b8c  nop
  05c9b90  lwz 27, -24708(2)
  05c9b94  mr 4, 28
  05c9b98  li 26, 0
  05c9b9c  addi 25, 1, 112
  05c9ba0  addi 24, 1, 116
  05c9ba4  stw 29, 140(1)
  05c9ba8  stw 28, 136(1)
  05c9bac  li 5, -1
  05c9bb0  li 11, 0
  05c9bb4  clrldi 4, 4, 32
  05c9bb8  clrldi 5, 5, 33
  05c9bbc  mr 3, 25
  05c9bc0  mr 6, 24
  05c9bc4  sth 11, 112(1)
  05c9bc8  bl 0x5d9b38
  05c9bcc  nop
  05c9bd0  cmpwi 7, 3, 0
  05c9bd4  mr 30, 3
  05c9bd8  bf 29, 0x5c9df4
  05c9bdc  lhz 3, 112(1)
  05c9be0  bl 0x5cc0d8
  05c9be4  nop
  05c9be8  lwz 0, 0(27)
  05c9bec  slwi 3, 3, 1
  05c9bf0  li 9, 324
  05c9bf4  add 3, 3, 0
  05c9bf8  clrldi 3, 3, 32
  05c9bfc  lhz 0, 0(3)
  05c9c00  and 9, 0, 9
  05c9c04  cmpwi 7, 9, 0
  05c9c08  bf 30, 0x5c9d0c
  05c9c0c  lhz 11, 112(1)
  05c9c10  lwz 4, 136(1)
  05c9c14  xori 0, 11, 37
  05c9c18  mr 29, 4
  05c9c1c  srawi 10, 0, 31
  05c9c20  xor 9, 10, 0
  05c9c24  sub 9, 9, 10
  05c9c28  addi 0, 9, -1
  05c9c2c  srwi 0, 0, 31
  05c9c30  sub 31, 30, 0
  05c9c34  cmpwi 7, 31, 0
  05c9c38  bf 29, 0x5c9da8
  05c9c3c  li 28, 0
  05c9c40  b 0x5c9c48
  05c9c44  bt 26, 0x5c9e08
  05c9c48  lwz 11, 124(1)
  05c9c4c  li 4, 0
  05c9c50  lwz 9, 140(1)
  05c9c54  li 5, 1
  05c9c58  lwz 3, 128(1)
  05c9c5c  addi 28, 28, 1
  05c9c60  addi 9, 9, 1
  05c9c64  stw 9, 140(1)
  05c9c68  lwz 0, 0(11)
  05c9c6c  std 2, 40(1)
  05c9c70  mtctr 0
  05c9c74  lwz 2, 4(11)
  05c9c78  bctrl
  05c9c7c  ld 2, 40(1)
  05c9c80  clrldi 9, 29, 32
  05c9c84  cmpw 6, 31, 28
  05c9c88  addi 29, 29, 1
  05c9c8c  lbz 0, 0(9)
  05c9c90  extsb 0, 0
  05c9c94  cmpw 7, 0, 3
  05c9c98  bt 30, 0x5c9c44
  05c9c9c  cmpwi 7, 3, -1
  05c9ca0  bt 30, 0x5c9cd8
  05c9ca4  lwz 9, 124(1)
  05c9ca8  extsw 4, 3
  05c9cac  lwz 11, 140(1)
  05c9cb0  li 5, 0
  05c9cb4  lwz 3, 128(1)
  05c9cb8  addi 11, 11, -1
  05c9cbc  stw 11, 140(1)
  05c9cc0  lwz 0, 0(9)
  05c9cc4  std 2, 40(1)
  05c9cc8  mtctr 0
  05c9ccc  lwz 2, 4(9)
  05c9cd0  bctrl
  05c9cd4  ld 2, 40(1)
  05c9cd8  ld 0, 240(1)
  05c9cdc  extsw 3, 26
  05c9ce0  ld 24, 160(1)
  05c9ce4  ld 25, 168(1)
  05c9ce8  mtlr 0
  05c9cec  ld 26, 176(1)
  05c9cf0  ld 27, 184(1)
  05c9cf4  ld 28, 192(1)
  05c9cf8  ld 29, 200(1)
  05c9cfc  ld 30, 208(1)
  05c9d00  ld 31, 216(1)
  05c9d04  addi 1, 1, 224
  05c9d08  blr
  05c9d0c  lwz 11, 124(1)
  05c9d10  li 4, 0
  05c9d14  lwz 9, 140(1)
  05c9d18  li 5, 1
  05c9d1c  lwz 3, 128(1)
  05c9d20  addi 9, 9, 1
  05c9d24  stw 9, 140(1)
  05c9d28  lwz 10, 0(11)
  05c9d2c  std 2, 40(1)
  05c9d30  mtctr 10
  05c9d34  lwz 2, 4(11)
  05c9d38  bctrl
  05c9d3c  ld 2, 40(1)
  05c9d40  lwz 0, 0(27)
  05c9d44  rlwinm 9, 3, 1, 23, 30
  05c9d48  add 9, 9, 0
  05c9d4c  clrldi 9, 9, 32
  05c9d50  lhz 0, 0(9)
  05c9d54  li 9, 324
  05c9d58  and 9, 0, 9
  05c9d5c  cmpwi 7, 9, 0
  05c9d60  bf 30, 0x5c9d0c
  05c9d64  cmpwi 7, 3, -1
  05c9d68  bt 30, 0x5c9f90
  05c9d6c  lwz 9, 124(1)
  05c9d70  extsw 4, 3
  05c9d74  lwz 11, 140(1)
  05c9d78  li 5, 0
  05c9d7c  lwz 3, 128(1)
  05c9d80  addi 11, 11, -1
  05c9d84  stw 11, 140(1)
  05c9d88  lwz 10, 0(9)
  05c9d8c  std 2, 40(1)
  05c9d90  mtctr 10
  05c9d94  lwz 2, 4(9)
  05c9d98  bctrl
  05c9d9c  ld 2, 40(1)
  05c9da0  lwz 4, 136(1)
  05c9da4  lhz 11, 112(1)
  05c9da8  clrlwi 0, 11, 16
  05c9dac  add 4, 30, 4
  05c9db0  cmpwi 7, 0, 37
  05c9db4  stw 4, 136(1)
  05c9db8  bt 30, 0x5c9e24
  05c9dbc  cmpwi 7, 0, 0
  05c9dc0  bt 30, 0x5c9cd8
  05c9dc4  li 5, -1
  05c9dc8  li 11, 0
  05c9dcc  clrldi 4, 4, 32
  05c9dd0  clrldi 5, 5, 33
  05c9dd4  mr 3, 25
  05c9dd8  mr 6, 24
  05c9ddc  sth 11, 112(1)
  05c9de0  bl 0x5d9b38
  05c9de4  nop
  05c9de8  cmpwi 7, 3, 0
  05c9dec  mr 30, 3
  05c9df0  bt 29, 0x5c9bdc
  05c9df4  lwz 9, 136(1)
  05c9df8  lbz 0, 0(9)
  05c9dfc  neg 0, 0
  05c9e00  rldicl 30, 0, 1, 63
  05c9e04  b 0x5c9bdc
  05c9e08  lhz 11, 112(1)
  05c9e0c  lwz 4, 136(1)
  05c9e10  clrlwi 0, 11, 16
  05c9e14  add 4, 30, 4
  05c9e18  cmpwi 7, 0, 37
  05c9e1c  stw 4, 136(1)
  05c9e20  bf 30, 0x5c9dbc
  05c9e24  clrldi 9, 4, 32
  05c9e28  li 11, 0
  05c9e2c  lbz 0, 0(9)
  05c9e30  cmpwi 7, 0, 42
  05c9e34  bt 30, 0x5ca040
  05c9e38  clrldi 9, 4, 32
  05c9e3c  lwz 6, 0(27)
  05c9e40  li 0, 0
  05c9e44  stb 11, 152(1)
  05c9e48  stw 0, 148(1)
  05c9e4c  li 8, 0
  05c9e50  lbz 7, 0(9)
  05c9e54  clrlwi 11, 7, 24
  05c9e58  slwi 9, 11, 1
  05c9e5c  add 9, 9, 6
  05c9e60  clrldi 9, 9, 32
  05c9e64  lhz 0, 0(9)
  05c9e68  rlwinm 0, 0, 0, 26, 26
  05c9e6c  cmpwi 7, 0, 0
  05c9e70  bf 30, 0x5c9f24
  05c9e74  extsb 4, 7
  05c9e78  lwz 3, -24704(2)
  05c9e7c  bl 0x5cc578
  05c9e80  nop
  05c9e84  cmpwi 7, 3, 0
  05c9e88  bt 30, 0x5ca08c
  05c9e8c  lwz 4, 136(1)
  05c9e90  clrldi 9, 4, 32
  05c9e94  addi 4, 4, 1
  05c9e98  lbz 0, 0(9)
  05c9e9c  stw 4, 136(1)
  05c9ea0  extsb 9, 0
  05c9ea4  stb 0, 153(1)
  05c9ea8  cmpwi 7, 9, 104
  05c9eac  bt 30, 0x5ca098
  05c9eb0  cmpwi 7, 9, 108
  05c9eb4  bt 30, 0x5ca0bc
  05c9eb8  clrldi 9, 4, 32
  05c9ebc  lwz 3, -24700(2)
  05c9ec0  lbz 4, 0(9)
  05c9ec4  extsb 4, 4
  05c9ec8  bl 0x5cc578
  05c9ecc  nop
  05c9ed0  cmpwi 7, 3, 0
  05c9ed4  bt 30, 0x5c9fa8
  05c9ed8  addi 3, 1, 124
  05c9edc  bl 0x5d6920
  05c9ee0  nop
  05c9ee4  cmpwi 7, 3, 0
  05c9ee8  bf 29, 0x5ca0f0
  05c9eec  lbz 0, 154(1)
  05c9ef0  lwz 4, 136(1)
  05c9ef4  extsb 0, 0
  05c9ef8  addi 4, 4, 1
  05c9efc  srawi 10, 0, 31
  05c9f00  stw 4, 136(1)
  05c9f04  xor 9, 10, 0
  05c9f08  sub 9, 10, 9
  05c9f0c  srwi 9, 9, 31
  05c9f10  add 26, 26, 9
  05c9f14  b 0x5c9bac
  05c9f18  lwz 8, 148(1)
  05c9f1c  cmpw 7, 8, 10
  05c9f20  bt 30, 0x5c9f3c
  05c9f24  slwi 0, 8, 3
  05c9f28  slwi 9, 8, 1
  05c9f2c  add 9, 9, 0
  05c9f30  add 9, 9, 11
  05c9f34  addi 9, 9, -48
  05c9f38  stw 9, 148(1)
  05c9f3c  addi 4, 4, 1
  05c9f40  lis 10, 32767
  05c9f44  clrldi 9, 4, 32
  05c9f48  stw 4, 136(1)
  05c9f4c  ori 10, 10, 65535
  05c9f50  lbz 7, 0(9)
  05c9f54  clrlwi 11, 7, 24
  05c9f58  slwi 9, 11, 1
  05c9f5c  add 9, 9, 6
  05c9f60  clrldi 9, 9, 32
  05c9f64  lhz 0, 0(9)
  05c9f68  rlwinm 0, 0, 0, 26, 26
  05c9f6c  cmpwi 7, 0, 0
  05c9f70  bf 30, 0x5c9f18
  05c9f74  extsb 4, 7
  05c9f78  lwz 3, -24704(2)
  05c9f7c  bl 0x5cc578
  05c9f80  nop
  05c9f84  cmpwi 7, 3, 0
  05c9f88  bf 30, 0x5c9e8c
  05c9f8c  b 0x5ca08c
  05c9f90  lwz 9, 140(1)
  05c9f94  lwz 4, 136(1)
  05c9f98  addi 9, 9, -1
  05c9f9c  lhz 11, 112(1)
  05c9fa0  stw 9, 140(1)
  05c9fa4  b 0x5c9da8
  05c9fa8  lwz 11, 124(1)
  05c9fac  li 4, 0
  05c9fb0  lwz 9, 140(1)
  05c9fb4  li 5, 1
  05c9fb8  lwz 3, 128(1)
  05c9fbc  addi 9, 9, 1
  05c9fc0  stw 9, 140(1)
  05c9fc4  lwz 0, 0(11)
  05c9fc8  std 2, 40(1)
  05c9fcc  mtctr 0
  05c9fd0  lwz 2, 4(11)
  05c9fd4  bctrl
  05c9fd8  ld 2, 40(1)
  05c9fdc  lwz 0, 0(27)
  05c9fe0  rlwinm 9, 3, 1, 23, 30
  05c9fe4  add 9, 9, 0
  05c9fe8  clrldi 9, 9, 32
  05c9fec  lhz 0, 0(9)
  05c9ff0  li 9, 324
  05c9ff4  and 9, 0, 9
  05c9ff8  cmpwi 7, 9, 0
  05c9ffc  bf 30, 0x5c9fa8
  05ca000  cmpwi 7, 3, -1
  05ca004  bt 30, 0x5ca0e0
  05ca008  lwz 9, 124(1)
  05ca00c  extsw 4, 3
  05ca010  lwz 11, 140(1)
  05ca014  li 5, 0
  05ca018  lwz 3, 128(1)
  05ca01c  addi 11, 11, -1
  05ca020  stw 11, 140(1)
  05ca024  lwz 10, 0(9)
  05ca028  std 2, 40(1)
  05ca02c  mtctr 10
  05ca030  lwz 2, 4(9)
  05ca034  bctrl
  05ca038  ld 2, 40(1)
  05ca03c  b 0x5c9ed8
  05ca040  addi 4, 4, 1
  05ca044  lwz 6, 0(27)
  05ca048  li 11, 42
  05ca04c  clrldi 9, 4, 32
  05ca050  li 0, 0
  05ca054  stb 11, 152(1)
  05ca058  stw 0, 148(1)
  05ca05c  stw 4, 136(1)
  05ca060  lbz 7, 0(9)
  05ca064  li 8, 0
  05ca068  clrlwi 11, 7, 24
  05ca06c  slwi 9, 11, 1
  05ca070  add 9, 9, 6
  05ca074  clrldi 9, 9, 32
  05ca078  lhz 0, 0(9)
  05ca07c  rlwinm 0, 0, 0, 26, 26
  05ca080  cmpwi 7, 0, 0
  05ca084  bf 30, 0x5c9f24
  05ca088  b 0x5c9e74
  05ca08c  lwz 4, 136(1)
  05ca090  stb 3, 153(1)
  05ca094  b 0x5c9eb8
  05ca098  clrldi 9, 4, 32
  05ca09c  lbz 0, 0(9)
  05ca0a0  cmpwi 7, 0, 104
  05ca0a4  bf 30, 0x5c9eb8
  05ca0a8  addi 4, 4, 1
  05ca0ac  li 0, 98
  05ca0b0  stw 4, 136(1)
  05ca0b4  stb 0, 153(1)
  05ca0b8  b 0x5c9eb8
  05ca0bc  clrldi 9, 4, 32
  05ca0c0  lbz 0, 0(9)
  05ca0c4  cmpwi 7, 0, 108
  05ca0c8  bf 30, 0x5c9eb8
  05ca0cc  addi 4, 4, 1
  05ca0d0  li 0, 113
  05ca0d4  stw 4, 136(1)
  05ca0d8  stb 0, 153(1)
  05ca0dc  b 0x5c9eb8
  05ca0e0  lwz 9, 140(1)
  05ca0e4  addi 9, 9, -1
  05ca0e8  stw 9, 140(1)
  05ca0ec  b 0x5c9ed8
  05ca0f0  cmpwi 7, 26, 0
  05ca0f4  bf 30, 0x5c9cd8
  05ca0f8  mr 26, 3
  05ca0fc  b 0x5c9cd8

FUN_005ca100:   # 0x5ca100, 0x398 bytes
  05ca100  stdu 1, -336(1)
  05ca104  mflr 0
  05ca108  std 31, 328(1)
  05ca10c  std 0, 352(1)
  05ca110  mr 31, 6
  05ca114  mr 0, 3
  05ca118  addi 3, 1, 384
  05ca11c  std 26, 288(1)
  05ca120  std 27, 296(1)
  05ca124  std 28, 304(1)
  05ca128  std 29, 312(1)
  05ca12c  std 30, 320(1)
  05ca130  std 23, 264(1)
  05ca134  std 24, 272(1)
  05ca138  std 25, 280(1)
  05ca13c  mr 30, 4
  05ca140  mr 28, 6
  05ca144  stw 0, 384(1)
  05ca148  mr 26, 5
  05ca14c  mr 29, 0
  05ca150  bl 0x5ca99c
  05ca154  nop
  05ca158  cmpwi 7, 31, 0
  05ca15c  mr 27, 3
  05ca160  bt 30, 0x5ca16c
  05ca164  li 0, 0
  05ca168  stw 0, 0(31)
  05ca16c  rlwinm 0, 27, 28, 1, 31
  05ca170  rotlwi 0, 0, 4
  05ca174  cmpwi 7, 0, 1
  05ca178  bt 30, 0x5ca23c
  05ca17c  cmpwi 7, 0, 2
  05ca180  bt 30, 0x5ca36c
  05ca184  cmpwi 7, 0, 3
  05ca188  bt 30, 0x5ca21c
  05ca18c  cmpwi 7, 0, 4
  05ca190  bt 30, 0x5ca22c
  05ca194  lfd 0, -24696(2)
  05ca198  stfd 0, 112(1)
  05ca19c  rlwinm 0, 27, 0, 28, 28
  05ca1a0  cmpwi 7, 0, 0
  05ca1a4  bt 30, 0x5ca1e4
  05ca1a8  ld 0, 352(1)
  05ca1ac  lfd 0, 112(1)
  05ca1b0  fneg 1, 0
  05ca1b4  ld 23, 264(1)
  05ca1b8  ld 24, 272(1)
  05ca1bc  mtlr 0
  05ca1c0  ld 25, 280(1)
  05ca1c4  ld 26, 288(1)
  05ca1c8  ld 27, 296(1)
  05ca1cc  ld 28, 304(1)
  05ca1d0  ld 29, 312(1)
  05ca1d4  ld 30, 320(1)
  05ca1d8  ld 31, 328(1)
  05ca1dc  addi 1, 1, 336
  05ca1e0  blr
  05ca1e4  ld 0, 352(1)
  05ca1e8  lfd 1, 112(1)
  05ca1ec  ld 23, 264(1)
  05ca1f0  mtlr 0
  05ca1f4  ld 24, 272(1)
  05ca1f8  ld 25, 280(1)
  05ca1fc  ld 26, 288(1)
  05ca200  ld 27, 296(1)
  05ca204  ld 28, 304(1)
  05ca208  ld 29, 312(1)
  05ca20c  ld 30, 320(1)
  05ca210  ld 31, 328(1)
  05ca214  addi 1, 1, 336
  05ca218  blr
  05ca21c  lwz 9, -24684(2)
  05ca220  lfd 0, 0(9)
  05ca224  stfd 0, 112(1)
  05ca228  b 0x5ca19c
  05ca22c  lwz 9, -24680(2)
  05ca230  lfd 0, 0(9)
  05ca234  stfd 0, 112(1)
  05ca238  b 0x5ca19c
  05ca23c  addi 31, 1, 120
  05ca240  lwz 4, 384(1)
  05ca244  mr 5, 30
  05ca248  clrldi 3, 29, 32
  05ca24c  mr 6, 31
  05ca250  li 7, 2
  05ca254  bl 0x5ca4a0
  05ca258  nop
  05ca25c  cmpwi 7, 3, 0
  05ca260  mr 30, 3
  05ca264  bt 30, 0x5ca194
  05ca268  lwz 0, 124(1)
  05ca26c  cmpwi 7, 0, 0
  05ca270  bt 30, 0x5ca194
  05ca274  extsw 0, 0
  05ca278  lis 9, -4501
  05ca27c  std 0, 240(1)
  05ca280  lfd 0, 240(1)
  05ca284  ori 9, 9, 10240
  05ca288  fcfid 1, 0
  05ca28c  li 0, 16412
  05ca290  sldi 9, 9, 32
  05ca294  addi 3, 1, 136
  05ca298  stw 0, 184(1)
  05ca29c  std 9, 192(1)
  05ca2a0  bl 0x5d60b0
  05ca2a4  nop
  05ca2a8  cmpwi 7, 30, 1
  05ca2ac  bf 29, 0x5ca340
  05ca2b0  addi 31, 31, 4
  05ca2b4  li 29, 1
  05ca2b8  addi 23, 1, 168
  05ca2bc  addi 24, 1, 152
  05ca2c0  addi 25, 1, 208
  05ca2c4  ld 4, 136(1)
  05ca2c8  clrldi 3, 23, 32
  05ca2cc  ld 5, 144(1)
  05ca2d0  addi 31, 31, 4
  05ca2d4  ld 6, 184(1)
  05ca2d8  addi 29, 29, 1
  05ca2dc  ld 7, 192(1)
  05ca2e0  bl 0x5d615c
  05ca2e4  nop
  05ca2e8  clrldi 9, 31, 32
  05ca2ec  clrldi 3, 24, 32
  05ca2f0  lwz 0, 0(9)
  05ca2f4  extsw 0, 0
  05ca2f8  std 0, 240(1)
  05ca2fc  lfd 0, 240(1)
  05ca300  fcfid 1, 0
  05ca304  bl 0x5d60b0
  05ca308  nop
  05ca30c  ld 4, 168(1)
  05ca310  ld 5, 176(1)
  05ca314  clrldi 3, 25, 32
  05ca318  ld 6, 152(1)
  05ca31c  ld 7, 160(1)
  05ca320  bl 0x5d63b4
  05ca324  nop
  05ca328  cmpw 7, 30, 29
  05ca32c  lwz 0, 208(1)
  05ca330  ld 9, 216(1)
  05ca334  stw 0, 136(1)
  05ca338  std 9, 144(1)
  05ca33c  bf 30, 0x5ca2c4
  05ca340  lwz 0, 120(1)
  05ca344  add 4, 26, 0
  05ca348  cmpwi 7, 4, 0
  05ca34c  bf 30, 0x5ca460
  05ca350  clrldi 5, 28, 32
  05ca354  ld 3, 136(1)
  05ca358  ld 4, 144(1)
  05ca35c  bl 0x5d6668
  05ca360  nop
  05ca364  stfd 1, 112(1)
  05ca368  b 0x5ca19c
  05ca36c  clrldi 3, 29, 32
  05ca370  lwz 4, 384(1)
  05ca374  mr 5, 30
  05ca378  addi 6, 1, 120
  05ca37c  li 7, 2
  05ca380  bl 0x5caf7c
  05ca384  nop
  05ca388  cmpwi 7, 3, 0
  05ca38c  bf 30, 0x5ca3cc
  05ca390  lfd 0, -24696(2)
  05ca394  addi 8, 1, 112
  05ca398  stfd 0, 112(1)
  05ca39c  lwz 4, 120(1)
  05ca3a0  mr 3, 8
  05ca3a4  extsw 4, 4
  05ca3a8  bl 0x5d5d10
  05ca3ac  nop
  05ca3b0  extsw 4, 26
  05ca3b4  lfd 1, 112(1)
  05ca3b8  clrldi 5, 28, 32
  05ca3bc  bl 0x5d5f5c
  05ca3c0  nop
  05ca3c4  stfd 1, 112(1)
  05ca3c8  b 0x5ca19c
  05ca3cc  slwi 9, 3, 2
  05ca3d0  lwz 11, -24688(2)
  05ca3d4  addi 8, 1, 112
  05ca3d8  extsw 9, 9
  05ca3dc  addi 0, 3, -1
  05ca3e0  add 9, 8, 9
  05ca3e4  cmpwi 7, 0, 0
  05ca3e8  clrldi 0, 3, 32
  05ca3ec  mtctr 0
  05ca3f0  lwz 0, 8(9)
  05ca3f4  extsw 0, 0
  05ca3f8  std 0, 240(1)
  05ca3fc  lfd 0, 240(1)
  05ca400  fcfid 12, 0
  05ca404  bt- 28, 0x5ca48c
  05ca408  clrldi 10, 11, 32
  05ca40c  addi 3, 3, -1
  05ca410  addi 11, 11, 8
  05ca414  bdz 0x5ca458
  05ca418  slwi 9, 3, 2
  05ca41c  extsw 9, 9
  05ca420  add 9, 8, 9
  05ca424  lwz 0, 8(9)
  05ca428  cmpwi 7, 0, 0
  05ca42c  extsw 9, 0
  05ca430  bt 30, 0x5ca408
  05ca434  std 9, 240(1)
  05ca438  lfd 0, 240(1)
  05ca43c  addi 3, 3, -1
  05ca440  fcfid 13, 0
  05ca444  lfd 0, 0(10)
  05ca448  clrldi 10, 11, 32
  05ca44c  addi 11, 11, 8
  05ca450  fmadd 12, 13, 0, 12
  05ca454  bdnz 0x5ca418
  05ca458  stfd 12, 112(1)
  05ca45c  b 0x5ca39c
  05ca460  extsw 6, 4
  05ca464  ld 5, 144(1)
  05ca468  addi 3, 1, 224
  05ca46c  ld 4, 136(1)
  05ca470  bl 0x5d6450
  05ca474  nop
  05ca478  lwz 0, 224(1)
  05ca47c  ld 9, 232(1)
  05ca480  stw 0, 136(1)
  05ca484  std 9, 144(1)
  05ca488  b 0x5ca350
  05ca48c  li 0, 1
  05ca490  mtctr 0
  05ca494  b 0x5ca408

FUN_005ca498:   # 0x5ca498, 0x8 bytes
  05ca498  li 6, 0
  05ca49c  b 0x5ca100
