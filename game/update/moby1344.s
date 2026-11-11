# game/update/moby1344.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1344_00251af8:   # 0x251af8, 0x14 bytes
  0251af8  lis 3, 122
  0251afc  lis 4, 1
  0251b00  addic 3, 3, -18892
  0251b04  stw 4, 72(3)
  0251b08  blr

UpdateMoby_1344:   # 0x251b20, 0x604 bytes
  0251b20  stdu 1, -160(1)
  0251b24  mflr 0
  0251b28  std 0, 176(1)
  0251b2c  std 28, 128(1)
  0251b30  std 29, 136(1)
  0251b34  ori 28, 3, 0
  0251b38  lis 29, 151
  0251b3c  std 31, 152(1)
  0251b40  addic 29, 29, -25376
  0251b44  std 30, 144(1)
  0251b48  lwz 31, 120(28)
  0251b4c  addic 30, 29, 128
  0251b50  ori 3, 30, 0
  0251b54  lwz 4, 28(31)
  0251b58  extsw 4, 4
  0251b5c  bl 0x110b70
  0251b60  nop
  0251b64  cntlzw 3, 3
  0251b68  lis 4, 250
  0251b6c  rlwinm 3, 3, 27, 31, 31
  0251b70  xori 3, 3, 1
  0251b74  stw 3, 14400(4)
  0251b78  lbz 3, 32(28)
  0251b7c  cmpwi 3, 0
  0251b80  bt 1, 0x251b90
  0251b84  cmpwi 3, -1
  0251b88  bf 1, 0x252104
  0251b8c  b 0x251b9c
  0251b90  cmpwi 3, 1
  0251b94  bf 1, 0x251bb0
  0251b98  b 0x252104
  0251b9c  li 3, 255
  0251ba0  li 4, 1
  0251ba4  stb 3, 48(28)
  0251ba8  stb 4, 32(28)
  0251bac  b 0x252104
  0251bb0  ori 3, 30, 0
  0251bb4  lwz 4, 0(31)
  0251bb8  extsw 4, 4
  0251bbc  bl 0x110b70
  0251bc0  nop
  0251bc4  cmpwi 3, 0
  0251bc8  bt 2, 0x251c30
  0251bcc  lwz 3, 8332(29)
  0251bd0  cmpwi 1, 3, 1
  0251bd4  cmpwi 3, 0
  0251bd8  cror 2, 2, 6
  0251bdc  bt 2, 0x251be8
  0251be0  cmpwi 3, 9
  0251be4  bf 2, 0x251c30
  0251be8  lis 3, 114
  0251bec  lwz 3, 2180(3)
  0251bf0  cmpwi 3, 0
  0251bf4  bf 2, 0x251c30
  0251bf8  lis 3, 114
  0251bfc  addic 3, 3, 2180
  0251c00  lwz 3, 36(3)
  0251c04  cmpwi 3, -1
  0251c08  bf 2, 0x251c30
  0251c0c  lis 3, 161
  0251c10  addic 3, 3, 12
  0251c14  lhz 3, 424(3)
  0251c18  cmpwi 3, 0
  0251c1c  bf 2, 0x251c30
  0251c20  li 3, 10000
  0251c24  li 4, 53
  0251c28  bl 0x7b310
  0251c2c  nop
  0251c30  ori 3, 30, 0
  0251c34  lwz 4, 4(31)
  0251c38  extsw 4, 4
  0251c3c  bl 0x110b70
  0251c40  nop
  0251c44  cmpwi 3, 0
  0251c48  bt 2, 0x251cfc
  0251c4c  lwz 3, 8332(29)
  0251c50  cmpwi 1, 3, 1
  0251c54  cmpwi 3, 0
  0251c58  cror 2, 2, 6
  0251c5c  bt 2, 0x251c68
  0251c60  cmpwi 3, 9
  0251c64  bf 2, 0x251cfc
  0251c68  lis 3, 114
  0251c6c  lwz 3, 2180(3)
  0251c70  cmpwi 3, 0
  0251c74  bf 2, 0x251cfc
  0251c78  lis 3, 114
  0251c7c  addic 3, 3, 2180
  0251c80  lwz 3, 36(3)
  0251c84  cmpwi 3, -1
  0251c88  bf 2, 0x251cfc
  0251c8c  lis 3, 151
  0251c90  addic 3, 3, -16400
  0251c94  lbz 4, 4(3)
  0251c98  cmpwi 1, 4, 0
  0251c9c  bf 6, 0x251cc8
  0251ca0  lis 4, 161
  0251ca4  addic 4, 4, 12
  0251ca8  lhz 4, 440(4)
  0251cac  cmpwi 4, 0
  0251cb0  bf 2, 0x251cc8
  0251cb4  li 3, 10002
  0251cb8  li 4, 55
  0251cbc  bl 0x7b310
  0251cc0  nop
  0251cc4  b 0x251cfc
  0251cc8  bt 6, 0x251cfc
  0251ccc  lbz 3, 5(3)
  0251cd0  cmpwi 3, 0
  0251cd4  bf 2, 0x251cfc
  0251cd8  lis 3, 161
  0251cdc  addic 3, 3, 12
  0251ce0  lhz 3, 448(3)
  0251ce4  cmpwi 3, 0
  0251ce8  bf 2, 0x251cfc
  0251cec  li 3, 10003
  0251cf0  li 4, 56
  0251cf4  bl 0x7b310
  0251cf8  nop
  0251cfc  lis 3, 161
  0251d00  lwz 3, 1800(3)
  0251d04  cmpwi 3, 0
  0251d08  bf 2, 0x251d68
  0251d0c  lis 3, 151
  0251d10  addic 3, 3, -16027
  0251d14  lbz 3, 28(3)
  0251d18  cmpwi 3, 0
  0251d1c  bt 2, 0x251d68
  0251d20  lis 3, 114
  0251d24  lwz 3, 2180(3)
  0251d28  cmpwi 3, 0
  0251d2c  bf 2, 0x251d68
  0251d30  lis 3, 114
  0251d34  addic 3, 3, 2180
  0251d38  lwz 3, 36(3)
  0251d3c  cmpwi 3, -1
  0251d40  bf 2, 0x251d68
  0251d44  lis 3, 161
  0251d48  addic 3, 3, 12
  0251d4c  lhz 3, 432(3)
  0251d50  cmpwi 3, 0
  0251d54  bf 2, 0x251d68
  0251d58  li 3, 10001
  0251d5c  li 4, 54
  0251d60  bl 0x7b310
  0251d64  nop
  0251d68  ori 3, 30, 0
  0251d6c  lwz 4, 8(31)
  0251d70  extsw 4, 4
  0251d74  bl 0x110b70
  0251d78  nop
  0251d7c  cmpwi 3, 0
  0251d80  bt 2, 0x251dfc
  0251d84  lwz 3, 8332(29)
  0251d88  cmpwi 1, 3, 1
  0251d8c  cmpwi 3, 0
  0251d90  cror 2, 2, 6
  0251d94  bt 2, 0x251da0
  0251d98  cmpwi 3, 9
  0251d9c  bf 2, 0x251dfc
  0251da0  lis 3, 151
  0251da4  addic 3, 3, -16064
  0251da8  lbz 3, 11(3)
  0251dac  cmpwi 3, 0
  0251db0  bf 2, 0x251dfc
  0251db4  lis 3, 114
  0251db8  lwz 3, 2180(3)
  0251dbc  cmpwi 3, 0
  0251dc0  bf 2, 0x251dfc
  0251dc4  lis 3, 114
  0251dc8  addic 3, 3, 2180
  0251dcc  lwz 3, 36(3)
  0251dd0  cmpwi 3, -1
  0251dd4  bf 2, 0x251dfc
  0251dd8  lis 3, 161
  0251ddc  addic 3, 3, 12
  0251de0  lhz 3, 736(3)
  0251de4  cmpwi 3, 0
  0251de8  bf 2, 0x251dfc
  0251dec  li 3, 10005
  0251df0  li 4, 92
  0251df4  bl 0x7b310
  0251df8  nop
  0251dfc  lis 3, 164
  0251e00  li 4, 0
  0251e04  lwz 3, -28500(3)
  0251e08  cmpwi 3, 0
  0251e0c  bt 2, 0x252104
  0251e10  lhz 5, 166(3)
  0251e14  cmpwi 5, 857
  0251e18  bf 2, 0x251e2c
  0251e1c  lbz 5, 32(3)
  0251e20  cmpwi 5, 1
  0251e24  bt 2, 0x251e2c
  0251e28  li 4, 1
  0251e2c  lwz 3, 40(3)
  0251e30  cmpwi 3, 0
  0251e34  bf 2, 0x251e10
  0251e38  cmpwi 4, 0
  0251e3c  bt 2, 0x252104
  0251e40  lwz 3, 16(31)
  0251e44  cmpwi 3, -1
  0251e48  bt 2, 0x251f00
  0251e4c  lis 4, 164
  0251e50  slwi 5, 3, 8
  0251e54  lwz 3, -28512(4)
  0251e58  lfs 2, 132(29)
  0251e5c  addc 4, 3, 5
  0251e60  lfs 3, 128(29)
  0251e64  clrldi 4, 4, 32
  0251e68  lfs 1, 20(4)
  0251e6c  lfs 4, 16(4)
  0251e70  fsubs 1, 2, 1
  0251e74  fsubs 4, 3, 4
  0251e78  lis 4, 37
  0251e7c  addi 4, 4, 6928
  0251e80  fmuls 1, 1, 1
  0251e84  fmadds 1, 4, 4, 1
  0251e88  fsqrts 4, 1
  0251e8c  lfs 1, 0(4)
  0251e90  fcmpu 0, 4, 1
  0251e94  cror 6, 1, 2
  0251e98  bt 6, 0x251f00
  0251e9c  lwz 4, 20(31)
  0251ea0  cmpwi 4, -1
  0251ea4  bt 2, 0x251f00
  0251ea8  slwi 4, 4, 8
  0251eac  addc 3, 3, 4
  0251eb0  clrldi 3, 3, 32
  0251eb4  lfs 4, 20(3)
  0251eb8  lfs 5, 16(3)
  0251ebc  fsubs 2, 2, 4
  0251ec0  fsubs 3, 3, 5
  0251ec4  fmuls 2, 2, 2
  0251ec8  fmadds 2, 3, 3, 2
  0251ecc  fsqrts 2, 2
  0251ed0  fcmpu 0, 2, 1
  0251ed4  cror 6, 1, 2
  0251ed8  bt 6, 0x251f00
  0251edc  lis 3, 161
  0251ee0  addic 3, 3, 12
  0251ee4  lhz 3, 848(3)
  0251ee8  cmpwi 3, 0
  0251eec  bf 2, 0x251f00
  0251ef0  li 3, 10007
  0251ef4  li 4, 106
  0251ef8  bl 0x7b310
  0251efc  nop
  0251f00  ori 3, 30, 0
  0251f04  lwz 4, 24(31)
  0251f08  extsw 4, 4
  0251f0c  bl 0x110b70
  0251f10  nop
  0251f14  cmpwi 3, 0
  0251f18  bt 2, 0x252104
  0251f1c  lwz 31, 32(31)
  0251f20  cmpwi 31, -1
  0251f24  bt 2, 0x252104
  0251f28  lis 3, 164
  0251f2c  slwi 4, 31, 8
  0251f30  lwz 3, -28512(3)
  0251f34  addc 31, 3, 4
  0251f38  clrldi 31, 31, 32
  0251f3c  lhz 3, 166(31)
  0251f40  cmpwi 3, 1015
  0251f44  bf 2, 0x252104
  0251f48  lbz 3, 32(31)
  0251f4c  cmpwi 3, 4
  0251f50  bt 2, 0x252104
  0251f54  lis 3, 161
  0251f58  addic 3, 3, 12
  0251f5c  lhz 4, 856(3)
  0251f60  cmpwi 4, 0
  0251f64  bt 2, 0x252044
  0251f68  lis 4, 161
  0251f6c  lis 5, 37
  0251f70  lwz 4, -2344(4)
  0251f74  extsw 4, 4
  0251f78  std 4, 112(1)
  0251f7c  addi 4, 5, 6928
  0251f80  lis 5, 114
  0251f84  lfs 1, 4(4)
  0251f88  lfs 2, -3056(5)
  0251f8c  lfd 3, 112(1)
  0251f90  fcfid 3, 3
  0251f94  frsp 3, 3
  0251f98  fadds 1, 3, 1
  0251f9c  fmuls 1, 2, 1
  0251fa0  fctiwz 1, 1
  0251fa4  stfd 1, 112(1)
  0251fa8  lfs 1, 8(4)
  0251fac  fmuls 1, 2, 1
  0251fb0  lfs 3, 12(4)
  0251fb4  lhz 4, 858(3)
  0251fb8  mulli 6, 4, 600
  0251fbc  fctidz 1, 1
  0251fc0  lwz 5, 116(1)
  0251fc4  cmpwi 1, 6, 0
  0251fc8  subc 7, 5, 6
  0251fcc  fcfid 1, 1
  0251fd0  frsp 1, 1
  0251fd4  fmuls 1, 1, 3
  0251fd8  fctiwz 1, 1
  0251fdc  stfd 1, 112(1)
  0251fe0  lwz 6, 116(1)
  0251fe4  cmpw 7, 6
  0251fe8  bt 1, 0x251ff0
  0251fec  bf 6, 0x252004
  0251ff0  li 3, 10008
  0251ff4  li 4, 107
  0251ff8  bl 0x7b310
  0251ffc  nop
  0252000  b 0x252104
  0252004  lis 6, 6990
  0252008  ori 6, 6, 33205
  025200c  mulhw 6, 6, 5
  0252010  srawi 6, 6, 6
  0252014  srwi 7, 6, 31
  0252018  addc 6, 6, 7
  025201c  cmpw 6, 4
  0252020  bf 1, 0x252104
  0252024  lis 4, 6990
  0252028  ori 4, 4, 33205
  025202c  mulhw 4, 4, 5
  0252030  srawi 4, 4, 6
  0252034  srwi 5, 4, 31
  0252038  addc 4, 4, 5
  025203c  sth 4, 858(3)
  0252040  b 0x252104
  0252044  lis 5, 0
  0252048  ori 5, 5, 65535
  025204c  cmpw 4, 5
  0252050  bf 0, 0x25205c
  0252054  addic 4, 4, 1
  0252058  sth 4, 856(3)
  025205c  lis 4, 161
  0252060  lis 5, 114
  0252064  lwz 4, -2344(4)
  0252068  extsw 4, 4
  025206c  std 4, 112(1)
  0252070  lis 4, 37
  0252074  addi 4, 4, 6928
  0252078  lfs 1, 4(4)
  025207c  lfs 2, -3056(5)
  0252080  lfd 3, 112(1)
  0252084  lis 4, 6990
  0252088  fcfid 3, 3
  025208c  ori 5, 4, 33205
  0252090  lhz 6, 858(3)
  0252094  frsp 3, 3
  0252098  fadds 1, 3, 1
  025209c  fmuls 1, 2, 1
  02520a0  fctiwz 1, 1
  02520a4  stfd 1, 112(1)
  02520a8  lwz 4, 116(1)
  02520ac  mulhw 5, 5, 4
  02520b0  srawi 5, 5, 6
  02520b4  srwi 7, 5, 31
  02520b8  addc 5, 5, 7
  02520bc  cmpw 5, 6
  02520c0  bf 1, 0x2520e0
  02520c4  lis 5, 6990
  02520c8  ori 5, 5, 33205
  02520cc  mulhw 4, 5, 4
  02520d0  srawi 4, 4, 6
  02520d4  srwi 5, 4, 31
  02520d8  addc 4, 4, 5
  02520dc  sth 4, 858(3)
  02520e0  lis 4, 151
  02520e4  lwz 7, 860(3)
  02520e8  li 5, 1
  02520ec  lis 6, -32768
  02520f0  lwz 4, -25488(4)
  02520f4  slw 4, 5, 4
  02520f8  or 4, 7, 4
  02520fc  or 4, 4, 6
  0252100  stw 4, 860(3)
  0252104  ld 0, 176(1)
  0252108  mtlr 0
  025210c  ld 28, 128(1)
  0252110  ld 29, 136(1)
  0252114  ld 30, 144(1)
  0252118  ld 31, 152(1)
  025211c  addi 1, 1, 160
  0252120  blr
