# game/update/moby922.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M922_004b56cc:   # 0x4b56cc, 0x14 bytes
  04b56cc  lis 3, 143
  04b56d0  lis 4, 1
  04b56d4  addic 3, 3, 17756
  04b56d8  stw 4, 72(3)
  04b56dc  blr

M922_004b5710:   # 0x4b5710, 0x49c bytes
  04b5710  stdu 1, -320(1)
  04b5714  mflr 0
  04b5718  std 0, 336(1)
  04b571c  stfd 24, 256(1)
  04b5720  stfd 25, 264(1)
  04b5724  stfd 26, 272(1)
  04b5728  stfd 27, 280(1)
  04b572c  stfd 28, 288(1)
  04b5730  stfd 29, 296(1)
  04b5734  stfd 30, 304(1)
  04b5738  stfd 31, 312(1)
  04b573c  addi 0, 1, 144
  04b5740  stvx 31, 0, 0
  04b5744  lis 4, 143
  04b5748  std 22, 176(1)
  04b574c  lfs 1, 192(3)
  04b5750  lis 5, 270
  04b5754  std 26, 208(1)
  04b5758  li 22, 0
  04b575c  lis 26, 161
  04b5760  lfs 2, 17864(4)
  04b5764  lfs 3, 196(3)
  04b5768  lfs 4, 200(3)
  04b576c  lfs 5, 16(3)
  04b5770  lfs 6, 20(3)
  04b5774  lis 4, 75
  04b5778  fmadds 1, 1, 2, 5
  04b577c  lfs 5, 24(3)
  04b5780  fmadds 3, 3, 2, 6
  04b5784  lfs 28, 224(3)
  04b5788  fmadds 2, 4, 2, 5
  04b578c  lfs 30, 18376(5)
  04b5790  lfs 29, 228(3)
  04b5794  lis 5, 270
  04b5798  lfs 4, 232(3)
  04b579c  std 25, 200(1)
  04b57a0  std 23, 184(1)
  04b57a4  addi 4, 4, 22240
  04b57a8  addic 25, 1, 112
  04b57ac  std 27, 216(1)
  04b57b0  ori 23, 22, 0
  04b57b4  lis 27, 114
  04b57b8  fmadds 28, 28, 30, 1
  04b57bc  fmadds 29, 29, 30, 3
  04b57c0  stfs 1, 112(1)
  04b57c4  fmadds 30, 4, 30, 2
  04b57c8  lfs 1, 208(3)
  04b57cc  stfs 3, 116(1)
  04b57d0  addic 26, 26, 23856
  04b57d4  std 28, 224(1)
  04b57d8  lfs 3, 18372(5)
  04b57dc  li 28, 2
  04b57e0  lfs 4, 212(3)
  04b57e4  li 5, 16
  04b57e8  std 29, 232(1)
  04b57ec  stfs 2, 120(1)
  04b57f0  li 29, -3056
  04b57f4  std 30, 240(1)
  04b57f8  lfs 2, 216(3)
  04b57fc  li 30, 10
  04b5800  std 31, 248(1)
  04b5804  lfs 27, 28(3)
  04b5808  li 31, 43
  04b580c  std 24, 192(1)
  04b5810  fmadds 1, 1, 3, 28
  04b5814  ori 24, 3, 0
  04b5818  stfs 27, 124(1)
  04b581c  fmadds 4, 4, 3, 29
  04b5820  fmadds 2, 2, 3, 30
  04b5824  stfs 28, 112(1)
  04b5828  stfs 29, 116(1)
  04b582c  stfs 30, 120(1)
  04b5830  stfs 1, 112(1)
  04b5834  stfs 4, 116(1)
  04b5838  stfs 2, 120(1)
  04b583c  lfs 24, 0(4)
  04b5840  lfs 31, 4(4)
  04b5844  lfs 25, 8(4)
  04b5848  lfs 26, 12(4)
  04b584c  std 21, 168(1)
  04b5850  std 20, 160(1)
  04b5854  lvlx 31, 5, 4
  04b5858  vspltw 31, 31, 0
  04b585c  li 3, 16
  04b5860  bl 0xfc620
  04b5864  nop
  04b5868  ori 21, 3, 0
  04b586c  li 3, 2
  04b5870  bl 0xfc620
  04b5874  nop
  04b5878  li 4, 0
  04b587c  fmr 1, 24
  04b5880  lis 5, 143
  04b5884  fmr 2, 31
  04b5888  subc 3, 4, 3
  04b588c  fmr 3, 25
  04b5890  neg 7, 21
  04b5894  fmr 4, 26
  04b5898  cntlzw 3, 3
  04b589c  subc 4, 21, 7
  04b58a0  sldi 3, 3, 58
  04b58a4  lwz 10, 17876(5)
  04b58a8  ori 8, 26, 0
  04b58ac  sradi 3, 3, 63
  04b58b0  extsw 10, 10
  04b58b4  and 4, 3, 4
  04b58b8  ori 3, 25, 0
  04b58bc  addc 7, 7, 4
  04b58c0  bl 0x126f50
  04b58c4  nop
  04b58c8  cmpwi 3, 0
  04b58cc  bt 2, 0x4b5900
  04b58d0  vspltisw 2, -1
  04b58d4  lvlx 3, 29, 27
  04b58d8  li 4, 127
  04b58dc  vslw 2, 2, 2
  04b58e0  vmaddfp 2, 3, 31, 2
  04b58e4  vctsxs 2, 2, 0
  04b58e8  vsplth 3, 2, 1
  04b58ec  vspltb 2, 2, 3
  04b58f0  stvehx 3, 30, 3
  04b58f4  stw 28, 36(3)
  04b58f8  stb 4, 42(3)
  04b58fc  stvebx 2, 31, 3
  04b5900  addic 22, 22, 1
  04b5904  cmpwi 22, 2
  04b5908  bt 0, 0x4b585c
  04b590c  lis 3, 143
  04b5910  lfs 1, 192(24)
  04b5914  lis 4, 75
  04b5918  li 21, 16
  04b591c  lfs 2, 17868(3)
  04b5920  lfs 3, 196(24)
  04b5924  addi 3, 4, 22240
  04b5928  lfs 4, 200(24)
  04b592c  lfs 5, 112(1)
  04b5930  lfs 6, 116(1)
  04b5934  fmadds 1, 1, 2, 5
  04b5938  lfs 5, 120(1)
  04b593c  fmadds 3, 3, 2, 6
  04b5940  fmadds 2, 4, 2, 5
  04b5944  lfs 4, -3056(27)
  04b5948  stfs 1, 112(1)
  04b594c  stfs 3, 116(1)
  04b5950  stfs 2, 120(1)
  04b5954  lfs 1, 20(3)
  04b5958  fmuls 1, 4, 1
  04b595c  fctiwz 1, 1
  04b5960  stfd 1, 128(1)
  04b5964  lwz 22, 132(1)
  04b5968  lfs 24, 24(3)
  04b596c  lfs 25, 28(3)
  04b5970  lfs 26, 32(3)
  04b5974  ori 3, 25, 0
  04b5978  lis 10, 32767
  04b597c  fmr 1, 25
  04b5980  ori 7, 21, 0
  04b5984  fmr 2, 31
  04b5988  fmr 3, 31
  04b598c  ori 8, 26, 0
  04b5990  fmr 4, 24
  04b5994  ori 10, 10, 65535
  04b5998  bl 0x126f50
  04b599c  nop
  04b59a0  ori 20, 3, 0
  04b59a4  cmpwi 20, 0
  04b59a8  bt 2, 0x4b59d4
  04b59ac  li 3, 255
  04b59b0  sth 22, 10(20)
  04b59b4  bl 0xfc620
  04b59b8  nop
  04b59bc  li 4, 127
  04b59c0  stb 3, 8(20)
  04b59c4  stw 28, 36(20)
  04b59c8  lhz 3, 10(20)
  04b59cc  stb 4, 42(20)
  04b59d0  stb 3, 43(20)
  04b59d4  addic 23, 23, 1
  04b59d8  fsubs 24, 24, 26
  04b59dc  neg 21, 21
  04b59e0  cmpwi 23, 3
  04b59e4  sldi 22, 22, 1
  04b59e8  bt 0, 0x4b5974
  04b59ec  lis 4, 143
  04b59f0  lfs 1, 192(24)
  04b59f4  li 3, 64
  04b59f8  lfs 2, 17872(4)
  04b59fc  lfs 3, 196(24)
  04b5a00  lfs 4, 200(24)
  04b5a04  fmadds 1, 1, 2, 28
  04b5a08  fmadds 3, 3, 2, 29
  04b5a0c  stfs 27, 124(1)
  04b5a10  fmadds 2, 4, 2, 30
  04b5a14  li 4, 128
  04b5a18  stfs 1, 112(1)
  04b5a1c  stfs 3, 116(1)
  04b5a20  stfs 2, 120(1)
  04b5a24  bl 0xfe484
  04b5a28  nop
  04b5a2c  slwi 4, 3, 8
  04b5a30  slwi 5, 3, 16
  04b5a34  or 3, 4, 3
  04b5a38  or 4, 3, 5
  04b5a3c  li 3, 3
  04b5a40  oris 24, 4, 32512
  04b5a44  extsw 24, 24
  04b5a48  bl 0xfc620
  04b5a4c  nop
  04b5a50  cmpwi 3, 0
  04b5a54  bt 2, 0x4b5b44
  04b5a58  li 3, 4
  04b5a5c  bl 0xfc620
  04b5a60  nop
  04b5a64  ori 23, 3, 0
  04b5a68  li 3, 2
  04b5a6c  bl 0xfc620
  04b5a70  nop
  04b5a74  li 4, 0
  04b5a78  neg 7, 23
  04b5a7c  fmr 1, 25
  04b5a80  subc 3, 4, 3
  04b5a84  fmr 2, 31
  04b5a88  lis 5, 75
  04b5a8c  fmr 3, 31
  04b5a90  cntlzw 3, 3
  04b5a94  subc 4, 23, 7
  04b5a98  sldi 3, 3, 58
  04b5a9c  addi 5, 5, 22240
  04b5aa0  sradi 3, 3, 63
  04b5aa4  ori 10, 24, 0
  04b5aa8  and 4, 3, 4
  04b5aac  ori 3, 25, 0
  04b5ab0  ori 8, 26, 0
  04b5ab4  lfs 4, 36(5)
  04b5ab8  addc 7, 7, 4
  04b5abc  bl 0x126f50
  04b5ac0  nop
  04b5ac4  ori 24, 3, 0
  04b5ac8  cmpwi 24, 0
  04b5acc  bt 2, 0x4b5b44
  04b5ad0  lis 3, 75
  04b5ad4  vspltisw 2, -1
  04b5ad8  li 4, 40
  04b5adc  lvlx 3, 29, 27
  04b5ae0  addi 3, 3, 22240
  04b5ae4  vslw 2, 2, 2
  04b5ae8  lvlx 31, 4, 3
  04b5aec  vspltw 31, 31, 0
  04b5af0  li 3, 2
  04b5af4  vmaddfp 2, 3, 31, 2
  04b5af8  vctsxs 2, 2, 0
  04b5afc  vsplth 2, 2, 1
  04b5b00  stvehx 2, 30, 24
  04b5b04  bl 0xfc620
  04b5b08  nop
  04b5b0c  cmpwi 3, 0
  04b5b10  bt 2, 0x4b5b1c
  04b5b14  li 3, 68
  04b5b18  stb 3, 3(24)
  04b5b1c  li 3, 64
  04b5b20  vspltisw 2, -1
  04b5b24  stb 3, 42(24)
  04b5b28  vslw 2, 2, 2
  04b5b2c  stw 28, 36(24)
  04b5b30  lvlx 3, 29, 27
  04b5b34  vmaddfp 2, 3, 31, 2
  04b5b38  vctsxs 2, 2, 0
  04b5b3c  vspltb 2, 2, 3
  04b5b40  stvebx 2, 31, 24
  04b5b44  li 0, 144
  04b5b48  lvx 31, 1, 0
  04b5b4c  ld 0, 336(1)
  04b5b50  mtlr 0
  04b5b54  lfd 24, 256(1)
  04b5b58  lfd 25, 264(1)
  04b5b5c  lfd 26, 272(1)
  04b5b60  lfd 27, 280(1)
  04b5b64  lfd 28, 288(1)
  04b5b68  lfd 29, 296(1)
  04b5b6c  lfd 30, 304(1)
  04b5b70  lfd 31, 312(1)
  04b5b74  ld 20, 160(1)
  04b5b78  ld 21, 168(1)
  04b5b7c  ld 22, 176(1)
  04b5b80  ld 23, 184(1)
  04b5b84  ld 24, 192(1)
  04b5b88  ld 25, 200(1)
  04b5b8c  ld 26, 208(1)
  04b5b90  ld 27, 216(1)
  04b5b94  ld 28, 224(1)
  04b5b98  ld 29, 232(1)
  04b5b9c  ld 30, 240(1)
  04b5ba0  ld 31, 248(1)
  04b5ba4  addi 1, 1, 320
  04b5ba8  blr

UpdateMoby_922:   # 0x4b5bd8, 0x720 bytes
  04b5bd8  stdu 1, -384(1)
  04b5bdc  mflr 0
  04b5be0  std 0, 400(1)
  04b5be4  stfd 26, 336(1)
  04b5be8  stfd 27, 344(1)
  04b5bec  stfd 28, 352(1)
  04b5bf0  stfd 29, 360(1)
  04b5bf4  stfd 30, 368(1)
  04b5bf8  stfd 31, 376(1)
  04b5bfc  std 31, 328(1)
  04b5c00  lbz 4, 32(3)
  04b5c04  std 30, 320(1)
  04b5c08  ori 31, 3, 0
  04b5c0c  lwz 30, 120(3)
  04b5c10  cmpwi 4, 1
  04b5c14  cmpwi 1, 4, 2
  04b5c18  cmpwi 6, 4, 0
  04b5c1c  std 29, 312(1)
  04b5c20  std 28, 304(1)
  04b5c24  cmpwi 7, 4, -1
  04b5c28  bt 1, 0x4b5c38
  04b5c2c  bf 29, 0x4b62c0
  04b5c30  bf 25, 0x4b5c40
  04b5c34  b 0x4b62c0
  04b5c38  bf 5, 0x4b5cf4
  04b5c3c  b 0x4b62c0
  04b5c40  lwz 3, 0(30)
  04b5c44  cmpwi 3, 0
  04b5c48  bf 0, 0x4b5c5c
  04b5c4c  ori 3, 31, 0
  04b5c50  bl 0xefb38
  04b5c54  nop
  04b5c58  b 0x4b62c0
  04b5c5c  lwz 3, 4(30)
  04b5c60  cmpwi 3, 0
  04b5c64  bf 0, 0x4b5c78
  04b5c68  ori 3, 31, 0
  04b5c6c  bl 0xefb38
  04b5c70  nop
  04b5c74  b 0x4b62c0
  04b5c78  lis 3, 75
  04b5c7c  lfs 1, 24(31)
  04b5c80  li 4, 255
  04b5c84  addi 3, 3, 23468
  04b5c88  li 6, 1
  04b5c8c  vspltisw 3, -1
  04b5c90  lis 5, 143
  04b5c94  li 7, -1
  04b5c98  li 8, 17888
  04b5c9c  lfs 2, 0(3)
  04b5ca0  stb 4, 48(31)
  04b5ca4  fadds 1, 1, 2
  04b5ca8  stb 6, 32(31)
  04b5cac  li 4, 4
  04b5cb0  stw 7, 8(30)
  04b5cb4  li 6, -3056
  04b5cb8  lvlx 2, 8, 5
  04b5cbc  lis 5, 114
  04b5cc0  vcfsx 2, 2, 0
  04b5cc4  vslw 3, 3, 3
  04b5cc8  stfs 1, 24(31)
  04b5ccc  lvlx 4, 4, 3
  04b5cd0  lvlx 5, 6, 5
  04b5cd4  vspltw 4, 4, 0
  04b5cd8  li 3, 12
  04b5cdc  vaddfp 2, 2, 4
  04b5ce0  vmaddfp 2, 5, 2, 3
  04b5ce4  vctsxs 2, 2, 0
  04b5ce8  vspltw 2, 2, 0
  04b5cec  stvewx 2, 3, 30
  04b5cf0  b 0x4b62c0
  04b5cf4  lis 3, 165
  04b5cf8  lwz 4, 0(30)
  04b5cfc  slwi 4, 4, 7
  04b5d00  lwz 3, 7128(3)
  04b5d04  lfs 30, 20(31)
  04b5d08  addc 3, 3, 4
  04b5d0c  lfs 31, 16(31)
  04b5d10  clrldi 3, 3, 32
  04b5d14  lfs 1, 52(3)
  04b5d18  lfs 2, 48(3)
  04b5d1c  fsubs 30, 1, 30
  04b5d20  fsubs 31, 2, 31
  04b5d24  lfs 29, 56(3)
  04b5d28  lfs 1, 24(31)
  04b5d2c  fsubs 29, 29, 1
  04b5d30  addic 3, 30, 12
  04b5d34  fmuls 26, 30, 30
  04b5d38  fmadds 26, 31, 31, 26
  04b5d3c  fmadds 28, 29, 29, 26
  04b5d40  fsqrts 28, 28
  04b5d44  bl 0x4fff60
  04b5d48  nop
  04b5d4c  lis 3, 114
  04b5d50  lis 4, 143
  04b5d54  lfs 27, -3052(3)
  04b5d58  lfs 1, 17880(4)
  04b5d5c  fmuls 27, 27, 1
  04b5d60  fcmpu 0, 28, 27
  04b5d64  bt 0, 0x4b5d80
  04b5d68  fmr 1, 28
  04b5d6c  lis 3, 75
  04b5d70  addi 3, 3, 23468
  04b5d74  lfs 28, 8(3)
  04b5d78  fcmpu 0, 1, 28
  04b5d7c  bt 1, 0x4b5ed0
  04b5d80  lwz 3, 8(30)
  04b5d84  cmpwi 3, -1
  04b5d88  bt 2, 0x4b5dd0
  04b5d8c  sldi 4, 3, 7
  04b5d90  sldi 6, 3, 4
  04b5d94  lis 5, 150
  04b5d98  subc 4, 4, 6
  04b5d9c  addic 5, 5, 14312
  04b5da0  extsw 4, 4
  04b5da4  lwzx 5, 5, 4
  04b5da8  cmpw 5, 31
  04b5dac  bf 2, 0x4b5dd0
  04b5db0  lis 5, 150
  04b5db4  addic 5, 5, 14292
  04b5db8  lbzx 4, 5, 4
  04b5dbc  cmpwi 4, 0
  04b5dc0  bt 2, 0x4b5dd0
  04b5dc4  extsw 3, 3
  04b5dc8  bl 0x15cdb0
  04b5dcc  nop
  04b5dd0  lis 3, 164
  04b5dd4  lwz 5, 4(30)
  04b5dd8  li 4, -1
  04b5ddc  slwi 5, 5, 8
  04b5de0  lwz 3, -28512(3)
  04b5de4  stw 4, 8(30)
  04b5de8  addc 3, 3, 5
  04b5dec  clrldi 3, 3, 32
  04b5df0  cmpwi 3, 0
  04b5df4  bt 2, 0x4b5e00
  04b5df8  bl 0xefb38
  04b5dfc  nop
  04b5e00  lis 3, 165
  04b5e04  lwz 5, 0(30)
  04b5e08  lis 4, 75
  04b5e0c  slwi 5, 5, 7
  04b5e10  addi 6, 4, 23468
  04b5e14  lis 4, 16256
  04b5e18  lwz 3, 7128(3)
  04b5e1c  li 7, 0
  04b5e20  lfs 1, 192(31)
  04b5e24  li 10, 1
  04b5e28  addc 3, 3, 5
  04b5e2c  li 11, 10
  04b5e30  clrldi 3, 3, 32
  04b5e34  li 12, -1
  04b5e38  addic 5, 31, 16
  04b5e3c  li 8, 20
  04b5e40  li 9, 10
  04b5e44  lfs 2, 48(3)
  04b5e48  stfs 2, 16(31)
  04b5e4c  lfs 2, 52(3)
  04b5e50  stfs 2, 20(31)
  04b5e54  lfs 2, 56(3)
  04b5e58  lfs 3, 196(31)
  04b5e5c  stfs 2, 24(31)
  04b5e60  lfs 2, 60(3)
  04b5e64  stfs 1, 192(1)
  04b5e68  stfs 2, 28(31)
  04b5e6c  ori 3, 31, 0
  04b5e70  lfs 1, 204(31)
  04b5e74  stfs 3, 196(1)
  04b5e78  stfs 1, 204(1)
  04b5e7c  lfs 6, 12(6)
  04b5e80  stw 4, 200(1)
  04b5e84  lfs 1, 8(6)
  04b5e88  lfs 3, 16(6)
  04b5e8c  addic 4, 1, 192
  04b5e90  lfs 4, 20(6)
  04b5e94  fmr 2, 1
  04b5e98  lfs 5, 24(6)
  04b5e9c  lfs 7, 28(6)
  04b5ea0  std 7, 144(1)
  04b5ea4  std 10, 160(1)
  04b5ea8  std 11, 168(1)
  04b5eac  li 10, 12
  04b5eb0  std 12, 176(1)
  04b5eb4  std 7, 184(1)
  04b5eb8  bl 0x10e030
  04b5ebc  nop
  04b5ec0  ori 3, 31, 0
  04b5ec4  bl 0xefb38
  04b5ec8  nop
  04b5ecc  b 0x4b62c0
  04b5ed0  lis 3, 75
  04b5ed4  lfs 1, 64(31)
  04b5ed8  addi 28, 3, 23468
  04b5edc  lfs 2, 32(28)
  04b5ee0  bl 0x502578
  04b5ee4  nop
  04b5ee8  fsqrts 2, 26
  04b5eec  stfs 29, 224(1)
  04b5ef0  stfs 1, 64(31)
  04b5ef4  lfs 1, 68(31)
  04b5ef8  lis 29, 115
  04b5efc  addic 29, 29, 22784
  04b5f00  lwz 3, 224(1)
  04b5f04  lfs 3, 224(1)
  04b5f08  fabs 5, 29
  04b5f0c  fabs 4, 3
  04b5f10  rlwinm 3, 3, 3, 29, 29
  04b5f14  fabs 3, 2
  04b5f18  stfs 2, 220(1)
  04b5f1c  fsubs 2, 3, 5
  04b5f20  stfs 2, 228(1)
  04b5f24  lwz 4, 220(1)
  04b5f28  lfs 2, 220(1)
  04b5f2c  lfs 29, 36(28)
  04b5f30  lwz 5, 228(1)
  04b5f34  lfs 6, 228(1)
  04b5f38  fabs 2, 2
  04b5f3c  rlwimi 3, 5, 2, 30, 30
  04b5f40  fsub 7, 6, 28
  04b5f44  fsub 6, 6, 28
  04b5f48  rlwimi 3, 4, 4, 28, 28
  04b5f4c  ori 4, 29, 0
  04b5f50  rlwimi 4, 3, 2, 26, 28
  04b5f54  slwi 3, 3, 2
  04b5f58  clrldi 4, 4, 32
  04b5f5c  fsel 5, 7, 2, 5
  04b5f60  lfsx 2, 29, 3
  04b5f64  fsel 4, 6, 4, 3
  04b5f68  lfs 3, 4(4)
  04b5f6c  fcmpu 0, 5, 28
  04b5f70  bt 1, 0x4b5f7c
  04b5f74  fmr 2, 28
  04b5f78  b 0x4b6094
  04b5f7c  fsubs 6, 4, 5
  04b5f80  fadds 4, 4, 5
  04b5f84  addic 3, 1, 16
  04b5f88  li 7, 2
  04b5f8c  addic 5, 3, 264
  04b5f90  addic 4, 3, 248
  04b5f94  mtctr 7
  04b5f98  fdivs 4, 6, 4
  04b5f9c  fmuls 5, 4, 4
  04b5fa0  stfs 4, 276(1)
  04b5fa4  stfs 4, 268(1)
  04b5fa8  stfs 4, 272(1)
  04b5fac  stfs 4, 264(1)
  04b5fb0  lfs 7, 276(1)
  04b5fb4  lfs 8, 268(1)
  04b5fb8  lfs 9, 272(1)
  04b5fbc  fmuls 6, 5, 5
  04b5fc0  fmuls 8, 8, 5
  04b5fc4  fmuls 7, 7, 6
  04b5fc8  fmuls 4, 6, 6
  04b5fcc  fmuls 6, 9, 6
  04b5fd0  stfs 8, 268(1)
  04b5fd4  fmuls 5, 7, 5
  04b5fd8  stfs 6, 272(1)
  04b5fdc  stfs 5, 276(1)
  04b5fe0  lfs 5, 248(3)
  04b5fe4  fmuls 5, 5, 4
  04b5fe8  stfs 5, 264(3)
  04b5fec  lfs 5, 4(4)
  04b5ff0  addic 4, 4, 8
  04b5ff4  fmuls 5, 5, 4
  04b5ff8  addic 3, 3, 8
  04b5ffc  stfs 5, 4(5)
  04b6000  addic 5, 5, 8
  04b6004  bdnz 0x4b5fe0
  04b6008  li 5, 4
  04b600c  ori 3, 1, 0
  04b6010  mtctr 5
  04b6014  lis 4, 115
  04b6018  addic 5, 3, 264
  04b601c  addic 4, 4, 22752
  04b6020  ori 6, 5, 0
  04b6024  lfs 4, 264(3)
  04b6028  lfs 5, 0(4)
  04b602c  fmuls 4, 4, 5
  04b6030  lfs 5, 4(4)
  04b6034  addic 4, 4, 8
  04b6038  stfs 4, 264(3)
  04b603c  lfs 4, 4(5)
  04b6040  addic 3, 3, 8
  04b6044  fmuls 4, 4, 5
  04b6048  stfs 4, 4(5)
  04b604c  addic 5, 5, 8
  04b6050  bdnz 0x4b6024
  04b6054  ori 3, 1, 0
  04b6058  fmr 4, 28
  04b605c  mtctr 7
  04b6060  lfs 5, 264(3)
  04b6064  fadds 4, 4, 5
  04b6068  lfs 5, 4(6)
  04b606c  addic 3, 3, 16
  04b6070  lfs 6, 8(6)
  04b6074  lfs 7, 12(6)
  04b6078  addic 6, 6, 16
  04b607c  fadds 4, 4, 5
  04b6080  fadds 4, 4, 6
  04b6084  fadds 4, 4, 7
  04b6088  bdnz 0x4b6060
  04b608c  fadds 4, 4, 29
  04b6090  fmadds 2, 4, 2, 3
  04b6094  lis 28, 143
  04b6098  fneg 2, 2
  04b609c  lfs 3, 17884(28)
  04b60a0  bl 0x103ab0
  04b60a4  nop
  04b60a8  fabs 4, 31
  04b60ac  stfs 31, 208(1)
  04b60b0  fabs 5, 30
  04b60b4  stfs 30, 212(1)
  04b60b8  stfs 1, 68(31)
  04b60bc  lfs 2, 72(31)
  04b60c0  fsubs 3, 4, 5
  04b60c4  stfs 3, 216(1)
  04b60c8  lwz 3, 208(1)
  04b60cc  lfs 1, 208(1)
  04b60d0  lwz 4, 212(1)
  04b60d4  lfs 3, 212(1)
  04b60d8  fabs 1, 1
  04b60dc  rlwinm 4, 4, 3, 29, 29
  04b60e0  fabs 6, 3
  04b60e4  lfs 3, 17884(28)
  04b60e8  lwz 5, 216(1)
  04b60ec  lfs 7, 216(1)
  04b60f0  rlwimi 4, 5, 2, 30, 30
  04b60f4  fsub 8, 7, 28
  04b60f8  fsub 7, 7, 28
  04b60fc  rlwimi 4, 3, 4, 28, 28
  04b6100  ori 3, 29, 0
  04b6104  rlwimi 3, 4, 2, 26, 28
  04b6108  slwi 4, 4, 2
  04b610c  clrldi 3, 3, 32
  04b6110  fsel 5, 8, 1, 5
  04b6114  lfsx 31, 29, 4
  04b6118  fsel 4, 7, 6, 4
  04b611c  lfs 1, 4(3)
  04b6120  fcmpu 0, 5, 28
  04b6124  bt 1, 0x4b612c
  04b6128  b 0x4b6240
  04b612c  fsubs 6, 4, 5
  04b6130  fadds 4, 4, 5
  04b6134  addic 3, 1, 16
  04b6138  li 7, 2
  04b613c  addic 5, 3, 232
  04b6140  addic 4, 3, 216
  04b6144  mtctr 7
  04b6148  fdivs 4, 6, 4
  04b614c  fmuls 5, 4, 4
  04b6150  stfs 4, 244(1)
  04b6154  stfs 4, 236(1)
  04b6158  stfs 4, 240(1)
  04b615c  stfs 4, 232(1)
  04b6160  lfs 7, 244(1)
  04b6164  lfs 8, 236(1)
  04b6168  lfs 9, 240(1)
  04b616c  fmuls 6, 5, 5
  04b6170  fmuls 8, 8, 5
  04b6174  fmuls 7, 7, 6
  04b6178  fmuls 4, 6, 6
  04b617c  fmuls 6, 9, 6
  04b6180  stfs 8, 236(1)
  04b6184  fmuls 5, 7, 5
  04b6188  stfs 6, 240(1)
  04b618c  stfs 5, 244(1)
  04b6190  lfs 5, 216(3)
  04b6194  fmuls 5, 5, 4
  04b6198  stfs 5, 232(3)
  04b619c  lfs 5, 4(4)
  04b61a0  addic 4, 4, 8
  04b61a4  fmuls 5, 5, 4
  04b61a8  addic 3, 3, 8
  04b61ac  stfs 5, 4(5)
  04b61b0  addic 5, 5, 8
  04b61b4  bdnz 0x4b6190
  04b61b8  li 5, 4
  04b61bc  ori 3, 1, 0
  04b61c0  mtctr 5
  04b61c4  lis 4, 115
  04b61c8  addic 5, 3, 232
  04b61cc  addic 4, 4, 22752
  04b61d0  ori 6, 5, 0
  04b61d4  lfs 4, 232(3)
  04b61d8  lfs 5, 0(4)
  04b61dc  fmuls 4, 4, 5
  04b61e0  lfs 5, 4(4)
  04b61e4  addic 4, 4, 8
  04b61e8  stfs 4, 232(3)
  04b61ec  lfs 4, 4(5)
  04b61f0  addic 3, 3, 8
  04b61f4  fmuls 4, 4, 5
  04b61f8  stfs 4, 4(5)
  04b61fc  addic 5, 5, 8
  04b6200  bdnz 0x4b61d4
  04b6204  ori 3, 1, 0
  04b6208  mtctr 7
  04b620c  lfs 4, 232(3)
  04b6210  lfs 5, 4(6)
  04b6214  fadds 4, 28, 4
  04b6218  lfs 6, 8(6)
  04b621c  addic 3, 3, 16
  04b6220  lfs 28, 12(6)
  04b6224  addic 6, 6, 16
  04b6228  fadds 4, 4, 5
  04b622c  fadds 4, 4, 6
  04b6230  fadds 28, 4, 28
  04b6234  bdnz 0x4b620c
  04b6238  fadds 28, 28, 29
  04b623c  fmadds 28, 28, 31, 1
  04b6240  fmr 1, 2
  04b6244  fmr 2, 28
  04b6248  bl 0x103ab0
  04b624c  nop
  04b6250  lfs 2, 192(31)
  04b6254  ori 3, 31, 0
  04b6258  lfs 3, 196(31)
  04b625c  lfs 4, 200(31)
  04b6260  lfs 5, 16(31)
  04b6264  lfs 6, 20(31)
  04b6268  fmadds 2, 2, 27, 5
  04b626c  lfs 5, 24(31)
  04b6270  fmadds 3, 3, 27, 6
  04b6274  stfs 1, 72(31)
  04b6278  fmadds 1, 4, 27, 5
  04b627c  stfs 2, 16(31)
  04b6280  stfs 3, 20(31)
  04b6284  stfs 1, 24(31)
  04b6288  bl 0x4b5710
  04b628c  lwz 4, 8(30)
  04b6290  ori 3, 31, 0
  04b6294  extsw 4, 4
  04b6298  bl 0x15cc7c
  04b629c  nop
  04b62a0  cmpwi 3, 0
  04b62a4  bf 2, 0x4b62c0
  04b62a8  li 3, 1
  04b62ac  li 4, 4
  04b62b0  ori 5, 31, 0
  04b62b4  bl 0x15d12c
  04b62b8  nop
  04b62bc  stw 3, 8(30)
  04b62c0  ld 0, 400(1)
  04b62c4  mtlr 0
  04b62c8  lfd 26, 336(1)
  04b62cc  lfd 27, 344(1)
  04b62d0  lfd 28, 352(1)
  04b62d4  lfd 29, 360(1)
  04b62d8  lfd 30, 368(1)
  04b62dc  lfd 31, 376(1)
  04b62e0  ld 28, 304(1)
  04b62e4  ld 29, 312(1)
  04b62e8  ld 30, 320(1)
  04b62ec  ld 31, 328(1)
  04b62f0  addi 1, 1, 384
  04b62f4  blr
