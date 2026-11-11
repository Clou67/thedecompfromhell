# game/update/moby402.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_00362820:   # 0x362820, 0x110 bytes
  0362820  stdu 1, -144(1)
  0362824  mflr 0
  0362828  std 0, 160(1)
  036282c  std 29, 120(1)
  0362830  ori 29, 3, 0
  0362834  std 31, 136(1)
  0362838  li 3, 402
  036283c  std 30, 128(1)
  0362840  ori 31, 5, 0
  0362844  std 28, 112(1)
  0362848  ori 30, 4, 0
  036284c  bl 0xefa28
  0362850  nop
  0362854  ori 28, 3, 0
  0362858  cmpwi 28, 0
  036285c  bt 2, 0x36290c
  0362860  li 3, 255
  0362864  li 4, 1
  0362868  lis 6, 54
  036286c  li 5, 0
  0362870  stb 3, 48(28)
  0362874  addi 6, 6, 10264
  0362878  sth 3, 50(28)
  036287c  stb 4, 49(28)
  0362880  stb 5, 32(28)
  0362884  stb 5, 188(28)
  0362888  lfs 1, 0(6)
  036288c  lwz 3, 36(28)
  0362890  lwz 4, 120(28)
  0362894  lfs 2, 36(3)
  0362898  fmuls 1, 2, 1
  036289c  ori 3, 28, 0
  03628a0  stfs 1, 44(28)
  03628a4  lfs 1, 0(30)
  03628a8  stfs 1, 16(28)
  03628ac  lfs 1, 4(30)
  03628b0  stfs 1, 20(28)
  03628b4  lfs 1, 8(30)
  03628b8  stfs 1, 24(28)
  03628bc  lfs 1, 12(30)
  03628c0  stfs 1, 28(28)
  03628c4  lfs 1, 0(31)
  03628c8  stfs 1, 0(4)
  03628cc  lfs 1, 4(31)
  03628d0  stfs 1, 4(4)
  03628d4  lfs 1, 8(31)
  03628d8  stfs 1, 8(4)
  03628dc  lfs 1, 12(31)
  03628e0  stw 29, 16(4)
  03628e4  stfs 1, 12(4)
  03628e8  lwz 4, 120(29)
  03628ec  lwz 5, 12(4)
  03628f0  addic 5, 5, 1
  03628f4  stw 5, 12(4)
  03628f8  bl 0xf31a8
  03628fc  nop
  0362900  ori 3, 28, 0
  0362904  bl 0x10c000
  0362908  nop
  036290c  ori 3, 28, 0
  0362910  ld 0, 160(1)
  0362914  mtlr 0
  0362918  ld 28, 112(1)
  036291c  ld 29, 120(1)
  0362920  ld 30, 128(1)
  0362924  ld 31, 136(1)
  0362928  addi 1, 1, 144
  036292c  blr

UpdateMoby_402:   # 0x362968, 0x464 bytes
  0362968  stdu 1, -304(1)
  036296c  mflr 0
  0362970  std 0, 320(1)
  0362974  stfd 30, 288(1)
  0362978  stfd 31, 296(1)
  036297c  std 31, 280(1)
  0362980  cmpwi 3, 0
  0362984  std 30, 272(1)
  0362988  std 29, 264(1)
  036298c  std 28, 256(1)
  0362990  std 27, 248(1)
  0362994  std 26, 240(1)
  0362998  ori 31, 3, 0
  036299c  bt 2, 0x362d9c
  03629a0  lwz 28, 120(31)
  03629a4  li 29, 0
  03629a8  ori 30, 29, 0
  03629ac  lwz 3, 16(28)
  03629b0  cmpwi 3, 0
  03629b4  bt 2, 0x3629dc
  03629b8  lhz 4, 166(3)
  03629bc  cmpwi 4, 376
  03629c0  bf 2, 0x3629dc
  03629c4  lbz 4, 32(3)
  03629c8  cmpwi 1, 4, 253
  03629cc  cmpwi 4, 254
  03629d0  cror 2, 2, 6
  03629d4  bt 2, 0x3629dc
  03629d8  lwz 29, 120(3)
  03629dc  lis 3, 54
  03629e0  lfs 1, 44(31)
  03629e4  lis 4, 114
  03629e8  addi 3, 3, 10544
  03629ec  cmpwi 28, 0
  03629f0  lfs 2, 0(3)
  03629f4  lwz 3, 36(31)
  03629f8  lfs 3, -3064(4)
  03629fc  fmuls 2, 3, 2
  0362a00  lfs 4, 36(3)
  0362a04  fsubs 4, 4, 1
  0362a08  fmadds 1, 2, 4, 1
  0362a0c  stfs 1, 44(31)
  0362a10  bt 2, 0x362d9c
  0362a14  lis 3, 54
  0362a18  addic 26, 1, 192
  0362a1c  addi 27, 3, 10544
  0362a20  lwz 3, 20(28)
  0362a24  ori 4, 31, 0
  0362a28  lis 5, 3
  0362a2c  addic 3, 3, 1
  0362a30  ori 7, 28, 0
  0362a34  stw 3, 20(28)
  0362a38  lfs 31, 4(27)
  0362a3c  ori 3, 26, 0
  0362a40  fmr 1, 31
  0362a44  bl 0x10581c
  0362a48  nop
  0362a4c  lfs 30, 8(27)
  0362a50  addic 27, 31, 16
  0362a54  li 5, 16
  0362a58  ori 3, 27, 0
  0362a5c  fmr 1, 30
  0362a60  ori 6, 31, 0
  0362a64  ori 7, 26, 0
  0362a68  bl 0x5e598
  0362a6c  nop
  0362a70  ori 3, 27, 0
  0362a74  fmr 1, 30
  0362a78  li 5, 4
  0362a7c  ori 6, 31, 0
  0362a80  bl 0x59e20
  0362a84  nop
  0362a88  cmpwi 29, 0
  0362a8c  ori 26, 3, 0
  0362a90  bt 2, 0x362ac0
  0362a94  lwz 4, 16(29)
  0362a98  lwz 3, 20(28)
  0362a9c  cmpw 4, 3
  0362aa0  bf 0, 0x362ac0
  0362aa4  lwz 4, 12(29)
  0362aa8  cmpwi 4, 30
  0362aac  bf 1, 0x362abc
  0362ab0  ori 26, 26, 4
  0362ab4  stw 30, 16(29)
  0362ab8  b 0x362ac0
  0362abc  stw 3, 16(29)
  0362ac0  ori 3, 31, 0
  0362ac4  li 4, -1
  0362ac8  li 5, 0
  0362acc  bl 0x10675c
  0362ad0  nop
  0362ad4  lfs 1, 24(31)
  0362ad8  cmpwi 3, 0
  0362adc  lbz 3, 49(31)
  0362ae0  bt 2, 0x362af4
  0362ae4  lis 4, 161
  0362ae8  ori 26, 26, 2
  0362aec  addic 4, 4, 2368
  0362af0  stw 30, 24(4)
  0362af4  lis 4, 161
  0362af8  addic 4, 4, 2368
  0362afc  lwz 4, 24(4)
  0362b00  cmpwi 4, 0
  0362b04  bt 2, 0x362b30
  0362b08  lhz 4, 166(4)
  0362b0c  cmpwi 1, 4, 376
  0362b10  cmpwi 4, 373
  0362b14  cror 2, 2, 6
  0362b18  bt 2, 0x362b2c
  0362b1c  cmpwi 4, 378
  0362b20  bt 2, 0x362b2c
  0362b24  cmpwi 4, 377
  0362b28  bf 2, 0x362b30
  0362b2c  rlwinm 26, 26, 0, 0, 30
  0362b30  cmpwi 26, 0
  0362b34  bt 2, 0x362bcc
  0362b38  cmpwi 3, 0
  0362b3c  bt 2, 0x362ba0
  0362b40  lis 3, 54
  0362b44  fmr 2, 31
  0362b48  li 6, 1
  0362b4c  fmr 6, 31
  0362b50  addi 4, 3, 10544
  0362b54  li 7, -1
  0362b58  ori 3, 31, 0
  0362b5c  li 5, 0
  0362b60  li 8, 20
  0362b64  lfs 1, 16(4)
  0362b68  lfs 3, 12(4)
  0362b6c  li 9, 5
  0362b70  lfs 5, 20(4)
  0362b74  li 10, 16
  0362b78  lfs 7, 24(4)
  0362b7c  fmr 4, 1
  0362b80  std 6, 144(1)
  0362b84  ori 4, 28, 0
  0362b88  std 6, 160(1)
  0362b8c  std 6, 168(1)
  0362b90  std 7, 176(1)
  0362b94  std 30, 184(1)
  0362b98  bl 0x10e030
  0362b9c  nop
  0362ba0  cmpwi 29, 0
  0362ba4  bt 2, 0x362bbc
  0362ba8  lwz 3, 16(28)
  0362bac  lwz 3, 120(3)
  0362bb0  lwz 4, 12(3)
  0362bb4  addic 4, 4, -1
  0362bb8  stw 4, 12(3)
  0362bbc  ori 3, 31, 0
  0362bc0  bl 0xefb38
  0362bc4  nop
  0362bc8  b 0x362d9c
  0362bcc  lis 3, 132
  0362bd0  fmr 3, 1
  0362bd4  lwz 3, -16892(3)
  0362bd8  cmpwi 3, 0
  0362bdc  bt 2, 0x362bf4
  0362be0  ori 3, 27, 0
  0362be4  bl 0x342d38
  0362be8  nop
  0362bec  fmr 3, 1
  0362bf0  lfs 1, 24(31)
  0362bf4  fmr 2, 1
  0362bf8  lfs 1, 8(28)
  0362bfc  fadds 2, 2, 1
  0362c00  fcmpu 0, 2, 3
  0362c04  cror 6, 1, 2
  0362c08  bt 6, 0x362c70
  0362c0c  fsubs 2, 3, 2
  0362c10  lis 3, 54
  0362c14  addi 3, 3, 10544
  0362c18  lfs 3, 28(3)
  0362c1c  lfs 4, 0(28)
  0362c20  lfs 5, 4(28)
  0362c24  fmadds 1, 2, 3, 1
  0362c28  stfs 1, 8(28)
  0362c2c  lfs 2, 32(3)
  0362c30  fmuls 3, 4, 2
  0362c34  fmuls 2, 5, 2
  0362c38  stfs 3, 0(28)
  0362c3c  stfs 2, 4(28)
  0362c40  lbz 3, 32(31)
  0362c44  cmpwi 3, 0
  0362c48  bf 2, 0x362c70
  0362c4c  li 3, 0
  0362c50  li 4, 0
  0362c54  ori 5, 31, 0
  0362c58  bl 0x15d12c
  0362c5c  nop
  0362c60  lbz 3, 32(31)
  0362c64  addic 3, 3, 1
  0362c68  stb 3, 32(31)
  0362c6c  lfs 1, 8(28)
  0362c70  lis 3, 54
  0362c74  lis 4, 114
  0362c78  addi 3, 3, 10544
  0362c7c  lfs 2, 36(3)
  0362c80  lfs 3, -3064(4)
  0362c84  lfs 4, 0(28)
  0362c88  lis 4, 114
  0362c8c  fmadds 3, 3, 2, 31
  0362c90  lfs 5, 4(28)
  0362c94  fmuls 31, 4, 3
  0362c98  fmuls 4, 5, 3
  0362c9c  fmuls 6, 4, 4
  0362ca0  stfs 31, 0(28)
  0362ca4  stfs 4, 4(28)
  0362ca8  lfs 2, 40(3)
  0362cac  lfs 5, -3048(4)
  0362cb0  fmuls 2, 5, 2
  0362cb4  fmadds 5, 31, 31, 6
  0362cb8  fmsubs 3, 1, 3, 2
  0362cbc  fmadds 2, 3, 3, 5
  0362cc0  stfs 3, 8(28)
  0362cc4  lfs 1, 44(3)
  0362cc8  fsqrts 2, 2
  0362ccc  fcmpu 0, 2, 1
  0362cd0  cror 6, 0, 2
  0362cd4  bt 6, 0x362cf4
  0362cd8  fdivs 1, 1, 2
  0362cdc  fmuls 31, 31, 1
  0362ce0  fmuls 2, 4, 1
  0362ce4  fmuls 1, 3, 1
  0362ce8  stfs 31, 0(28)
  0362cec  stfs 2, 4(28)
  0362cf0  stfs 1, 8(28)
  0362cf4  lfs 1, 16(31)
  0362cf8  lis 3, 54
  0362cfc  fadds 1, 1, 31
  0362d00  addi 3, 3, 10544
  0362d04  lfs 31, 20(31)
  0362d08  lfs 2, 24(31)
  0362d0c  stfs 1, 16(31)
  0362d10  lfs 3, 4(28)
  0362d14  fadds 31, 31, 3
  0362d18  stfs 31, 20(31)
  0362d1c  lfs 3, 8(28)
  0362d20  fadds 2, 2, 3
  0362d24  stfs 2, 24(31)
  0362d28  lfs 3, 16(3)
  0362d2c  fcmpu 1, 1, 3
  0362d30  fcmpu 0, 2, 3
  0362d34  cror 2, 0, 4
  0362d38  bt 2, 0x362d70
  0362d3c  fcmpu 0, 31, 3
  0362d40  bt 0, 0x362d70
  0362d44  fmr 3, 1
  0362d48  lis 3, 54
  0362d4c  addi 3, 3, 10544
  0362d50  lfs 1, 48(3)
  0362d54  fcmpu 0, 2, 1
  0362d58  fcmpu 1, 3, 1
  0362d5c  cror 2, 1, 5
  0362d60  bt 2, 0x362d70
  0362d64  fcmpu 0, 31, 1
  0362d68  cror 6, 0, 2
  0362d6c  bt 6, 0x362d9c
  0362d70  lis 4, 16448
  0362d74  lis 3, 101
  0362d78  addic 3, 3, 26256
  0362d7c  stw 4, 16(31)
  0362d80  stw 4, 20(31)
  0362d84  stw 4, 24(31)
  0362d88  bl 0x5cd098
  0362d8c  nop
  0362d90  ori 3, 31, 0
  0362d94  bl 0xefb38
  0362d98  nop
  0362d9c  ld 0, 320(1)
  0362da0  mtlr 0
  0362da4  lfd 30, 288(1)
  0362da8  lfd 31, 296(1)
  0362dac  ld 26, 240(1)
  0362db0  ld 27, 248(1)
  0362db4  ld 28, 256(1)
  0362db8  ld 29, 264(1)
  0362dbc  ld 30, 272(1)
  0362dc0  ld 31, 280(1)
  0362dc4  addi 1, 1, 304
  0362dc8  blr
