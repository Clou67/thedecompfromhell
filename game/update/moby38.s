# game/update/moby38.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_38:   # 0x358ad0, 0x7a4 bytes
  0358ad0  stdu 1, -192(1)
  0358ad4  mflr 0
  0358ad8  std 0, 208(1)
  0358adc  stfd 28, 160(1)
  0358ae0  stfd 29, 168(1)
  0358ae4  stfd 30, 176(1)
  0358ae8  stfd 31, 184(1)
  0358aec  std 30, 144(1)
  0358af0  std 31, 152(1)
  0358af4  lwz 30, 120(3)
  0358af8  std 29, 136(1)
  0358afc  ori 31, 3, 0
  0358b00  lwz 29, 180(30)
  0358b04  std 28, 128(1)
  0358b08  cmpwi 29, -1
  0358b0c  bt 2, 0x359244
  0358b10  lis 3, 165
  0358b14  lfs 29, 16(31)
  0358b18  slwi 4, 29, 2
  0358b1c  lfs 30, 20(31)
  0358b20  addic 29, 3, 7136
  0358b24  lfs 31, 24(31)
  0358b28  extsw 4, 4
  0358b2c  addic 3, 30, 186
  0358b30  lwzx 29, 29, 4
  0358b34  bl 0x4fffb4
  0358b38  nop
  0358b3c  lbz 3, 32(31)
  0358b40  cmpwi 3, 0
  0358b44  bf 2, 0x358c10
  0358b48  li 3, 0
  0358b4c  li 5, 4
  0358b50  li 6, 5
  0358b54  lis 4, 54
  0358b58  stw 3, 32(30)
  0358b5c  sth 3, 36(30)
  0358b60  stb 5, 40(30)
  0358b64  addi 4, 4, -30040
  0358b68  lwz 3, 160(30)
  0358b6c  sth 6, 62(30)
  0358b70  stb 3, 188(31)
  0358b74  clrlwi 3, 3, 24
  0358b78  lfs 1, 0(4)
  0358b7c  cmpwi 3, 0
  0358b80  bf 2, 0x358b90
  0358b84  lis 3, 54
  0358b88  addi 3, 3, -30040
  0358b8c  lfs 1, 4(3)
  0358b90  fmr 2, 1
  0358b94  stfs 2, 164(30)
  0358b98  bl 0x502758
  0358b9c  nop
  0358ba0  ori 4, 3, 0
  0358ba4  li 3, 0
  0358ba8  cmpwi 4, 0
  0358bac  bt 2, 0x358bb8
  0358bb0  lwz 3, 0(29)
  0358bb4  addic 3, 3, -1
  0358bb8  sldi 3, 3, 4
  0358bbc  li 5, 0
  0358bc0  addc 3, 29, 3
  0358bc4  li 4, 1
  0358bc8  clrldi 3, 3, 32
  0358bcc  li 7, 255
  0358bd0  li 6, -1
  0358bd4  lfs 1, 16(3)
  0358bd8  stfs 1, 16(31)
  0358bdc  lfs 1, 20(3)
  0358be0  stfs 1, 20(31)
  0358be4  lfs 1, 24(3)
  0358be8  stfs 1, 24(31)
  0358bec  lfs 1, 28(3)
  0358bf0  stfs 1, 28(31)
  0358bf4  sth 5, 186(30)
  0358bf8  stw 5, 168(30)
  0358bfc  stw 5, 188(30)
  0358c00  stb 4, 32(31)
  0358c04  stb 7, 48(31)
  0358c08  sth 7, 50(31)
  0358c0c  stw 6, 196(30)
  0358c10  lbz 3, 188(31)
  0358c14  cmpwi 3, 0
  0358c18  cmpwi 1, 3, 2
  0358c1c  cmpwi 6, 3, 1
  0358c20  cmpwi 7, 3, -1
  0358c24  bt 1, 0x358c30
  0358c28  bf 29, 0x359168
  0358c2c  b 0x358c3c
  0358c30  bf 25, 0x358ca4
  0358c34  bf 5, 0x358d8c
  0358c38  b 0x359168
  0358c3c  lis 3, 54
  0358c40  lwz 4, 36(31)
  0358c44  addi 3, 3, -30040
  0358c48  lfs 2, 44(31)
  0358c4c  lfs 3, 8(3)
  0358c50  lfs 1, 36(4)
  0358c54  fnmsubs 2, 1, 3, 2
  0358c58  stfs 2, 44(31)
  0358c5c  lfs 3, 0(3)
  0358c60  fcmpu 0, 2, 3
  0358c64  cror 6, 1, 2
  0358c68  bt 6, 0x359168
  0358c6c  stfs 1, 44(31)
  0358c70  lfs 1, 16(29)
  0358c74  li 3, 1
  0358c78  li 4, 0
  0358c7c  stfs 1, 16(31)
  0358c80  lfs 1, 20(29)
  0358c84  stfs 1, 20(31)
  0358c88  lfs 1, 24(29)
  0358c8c  stfs 1, 24(31)
  0358c90  lfs 1, 28(29)
  0358c94  stb 3, 188(31)
  0358c98  stfs 1, 28(31)
  0358c9c  stw 4, 164(30)
  0358ca0  b 0x359168
  0358ca4  lhz 3, 184(30)
  0358ca8  cmpwi 3, 0
  0358cac  bt 2, 0x359168
  0358cb0  lis 3, 151
  0358cb4  addic 3, 3, -25376
  0358cb8  lwz 4, 8332(3)
  0358cbc  cmpwi 1, 4, 3
  0358cc0  bt 6, 0x358cd0
  0358cc4  lwz 4, 8324(3)
  0358cc8  cmpwi 4, 28
  0358ccc  bf 2, 0x358ce0
  0358cd0  lwz 4, 1272(3)
  0358cd4  cmpw 4, 31
  0358cd8  bt 2, 0x358cf8
  0358cdc  b 0x359168
  0358ce0  lhz 4, 782(3)
  0358ce4  cmpwi 4, 0
  0358ce8  bf 2, 0x359168
  0358cec  lwz 4, 764(3)
  0358cf0  cmpw 4, 31
  0358cf4  bf 2, 0x359168
  0358cf8  lwz 4, 200(30)
  0358cfc  cmpwi 4, 0
  0358d00  bf 2, 0x358d4c
  0358d04  bt 6, 0x358d14
  0358d08  lwz 4, 8324(3)
  0358d0c  cmpwi 4, 28
  0358d10  bf 2, 0x358d24
  0358d14  lwz 3, 1272(3)
  0358d18  cmpw 3, 31
  0358d1c  bt 2, 0x358d3c
  0358d20  b 0x358d4c
  0358d24  lhz 4, 782(3)
  0358d28  cmpwi 4, 0
  0358d2c  bf 2, 0x358d4c
  0358d30  lwz 3, 764(3)
  0358d34  cmpw 3, 31
  0358d38  bf 2, 0x358d4c
  0358d3c  li 3, 114
  0358d40  li 4, 1
  0358d44  bl 0xb72b0
  0358d48  nop
  0358d4c  lis 4, 54
  0358d50  li 3, 2
  0358d54  addi 4, 4, -30040
  0358d58  stb 3, 188(31)
  0358d5c  lfs 1, 176(30)
  0358d60  lfs 2, 12(4)
  0358d64  lis 3, 114
  0358d68  fmuls 1, 1, 2
  0358d6c  lfs 3, -3056(3)
  0358d70  lfs 4, 4(4)
  0358d74  li 3, 0
  0358d78  fmuls 1, 3, 1
  0358d7c  sth 3, 184(30)
  0358d80  fdivs 1, 4, 1
  0358d84  stfs 1, 172(30)
  0358d88  b 0x359168
  0358d8c  lhz 3, 186(30)
  0358d90  cmpwi 3, 0
  0358d94  bf 2, 0x358e74
  0358d98  lis 3, 54
  0358d9c  lwz 4, 188(30)
  0358da0  addi 3, 3, -30040
  0358da4  cmpwi 4, 0
  0358da8  lfs 28, 0(3)
  0358dac  bf 0, 0x358ed4
  0358db0  lis 3, 151
  0358db4  lfs 1, 20(31)
  0358db8  lfs 2, 16(31)
  0358dbc  addic 3, 3, -25376
  0358dc0  lis 4, 54
  0358dc4  lfs 3, 132(3)
  0358dc8  lfs 4, 128(3)
  0358dcc  fsubs 1, 1, 3
  0358dd0  fsubs 2, 2, 4
  0358dd4  addi 4, 4, -30040
  0358dd8  fmuls 1, 1, 1
  0358ddc  fmadds 1, 2, 2, 1
  0358de0  lfs 2, 16(4)
  0358de4  fsqrts 1, 1
  0358de8  fcmpu 0, 1, 2
  0358dec  cror 6, 1, 2
  0358df0  bt 6, 0x358ed4
  0358df4  lfs 2, 136(3)
  0358df8  lfs 1, 24(31)
  0358dfc  lis 4, 54
  0358e00  fsubs 3, 2, 1
  0358e04  addi 4, 4, -30040
  0358e08  lfs 4, 20(4)
  0358e0c  fabs 3, 3
  0358e10  fcmpu 0, 3, 4
  0358e14  cror 6, 1, 2
  0358e18  bt 6, 0x358ed4
  0358e1c  fsubs 1, 1, 2
  0358e20  lis 3, 54
  0358e24  addi 3, 3, -30040
  0358e28  lfs 2, 4(3)
  0358e2c  fcmpu 0, 1, 2
  0358e30  cror 6, 0, 2
  0358e34  bt 6, 0x358ed4
  0358e38  lis 3, 54
  0358e3c  vspltisw 2, -1
  0358e40  li 5, 24
  0358e44  addi 3, 3, -30040
  0358e48  lis 4, 114
  0358e4c  li 6, -3056
  0358e50  vslw 2, 2, 2
  0358e54  lvlx 3, 5, 3
  0358e58  li 3, 186
  0358e5c  vspltw 3, 3, 0
  0358e60  lvlx 4, 6, 4
  0358e64  vmaddfp 2, 4, 3, 2
  0358e68  vctsxs 2, 2, 0
  0358e6c  vsplth 2, 2, 1
  0358e70  stvehx 2, 3, 30
  0358e74  li 3, 0
  0358e78  lwz 4, 196(30)
  0358e7c  cmpwi 4, -1
  0358e80  stw 3, 168(30)
  0358e84  bt 2, 0x358ec8
  0358e88  sldi 3, 4, 7
  0358e8c  sldi 6, 4, 4
  0358e90  lis 5, 150
  0358e94  subc 3, 3, 6
  0358e98  addic 5, 5, 14176
  0358e9c  extsw 3, 3
  0358ea0  addc 3, 5, 3
  0358ea4  lwz 5, 136(3)
  0358ea8  cmpw 5, 31
  0358eac  bf 2, 0x358ec8
  0358eb0  lbz 3, 116(3)
  0358eb4  cmpwi 3, 0
  0358eb8  bt 2, 0x358ec8
  0358ebc  extsw 3, 4
  0358ec0  bl 0x15cdb0
  0358ec4  nop
  0358ec8  li 3, -1
  0358ecc  stw 3, 196(30)
  0358ed0  b 0x359168
  0358ed4  ori 3, 31, 0
  0358ed8  lwz 4, 196(30)
  0358edc  extsw 4, 4
  0358ee0  bl 0x15cc7c
  0358ee4  nop
  0358ee8  cmpwi 3, 0
  0358eec  bf 2, 0x358f08
  0358ef0  li 3, 0
  0358ef4  li 4, 4
  0358ef8  ori 5, 31, 0
  0358efc  bl 0x15d12c
  0358f00  nop
  0358f04  stw 3, 196(30)
  0358f08  lis 3, 114
  0358f0c  lfs 1, 172(30)
  0358f10  lfs 2, 168(30)
  0358f14  lfs 3, -3052(3)
  0358f18  fmadds 2, 1, 3, 2
  0358f1c  fabs 3, 1
  0358f20  fabs 4, 2
  0358f24  stfs 2, 168(30)
  0358f28  fcmpu 0, 4, 3
  0358f2c  cror 6, 0, 2
  0358f30  bt 6, 0x358f3c
  0358f34  fmr 2, 1
  0358f38  stfs 1, 168(30)
  0358f3c  lfs 3, 164(30)
  0358f40  lis 3, 54
  0358f44  fadds 2, 3, 2
  0358f48  addi 3, 3, -30040
  0358f4c  stfs 2, 164(30)
  0358f50  lfs 3, 28(3)
  0358f54  fsubs 2, 2, 3
  0358f58  fabs 2, 2
  0358f5c  fcmpu 0, 2, 3
  0358f60  cror 6, 0, 2
  0358f64  bt 6, 0x359090
  0358f68  lwz 3, 200(30)
  0358f6c  cmpwi 3, 0
  0358f70  bf 2, 0x358fc8
  0358f74  lis 3, 151
  0358f78  addic 3, 3, -25376
  0358f7c  lwz 4, 8332(3)
  0358f80  cmpwi 4, 3
  0358f84  bt 2, 0x358f94
  0358f88  lwz 4, 8324(3)
  0358f8c  cmpwi 4, 28
  0358f90  bf 2, 0x358fa4
  0358f94  lwz 3, 1272(3)
  0358f98  cmpw 3, 31
  0358f9c  bt 2, 0x358fbc
  0358fa0  b 0x358fc8
  0358fa4  lhz 4, 782(3)
  0358fa8  cmpwi 4, 0
  0358fac  bf 2, 0x358fc8
  0358fb0  lwz 3, 764(3)
  0358fb4  cmpw 3, 31
  0358fb8  bf 2, 0x358fc8
  0358fbc  bl 0xa2560
  0358fc0  nop
  0358fc4  lfs 1, 172(30)
  0358fc8  fcmpu 0, 1, 28
  0358fcc  cror 6, 0, 2
  0358fd0  bt 6, 0x358fec
  0358fd4  lis 3, 54
  0358fd8  li 4, 0
  0358fdc  addi 3, 3, -30040
  0358fe0  stb 4, 188(31)
  0358fe4  lfs 28, 4(3)
  0358fe8  b 0x358ff4
  0358fec  li 3, 1
  0358ff0  stb 3, 188(31)
  0358ff4  lis 3, 54
  0358ff8  li 4, 0
  0358ffc  stfs 28, 164(30)
  0359000  addi 3, 3, -30040
  0359004  vspltisw 2, -1
  0359008  li 5, 32
  035900c  lis 6, 114
  0359010  li 7, -3056
  0359014  stw 4, 168(30)
  0359018  vslw 2, 2, 2
  035901c  lvlx 3, 5, 3
  0359020  li 3, 186
  0359024  vspltw 3, 3, 0
  0359028  lvlx 4, 7, 6
  035902c  lwz 4, 196(30)
  0359030  vmaddfp 2, 4, 3, 2
  0359034  cmpwi 4, -1
  0359038  vctsxs 2, 2, 0
  035903c  vsplth 2, 2, 1
  0359040  stvehx 2, 3, 30
  0359044  bt 2, 0x359088
  0359048  sldi 3, 4, 7
  035904c  sldi 6, 4, 4
  0359050  lis 5, 150
  0359054  subc 3, 3, 6
  0359058  addic 5, 5, 14176
  035905c  extsw 3, 3
  0359060  addc 3, 5, 3
  0359064  lwz 5, 136(3)
  0359068  cmpw 5, 31
  035906c  bf 2, 0x359088
  0359070  lbz 3, 116(3)
  0359074  cmpwi 3, 0
  0359078  bt 2, 0x359088
  035907c  extsw 3, 4
  0359080  bl 0x15cdb0
  0359084  nop
  0359088  li 3, -1
  035908c  stw 3, 196(30)
  0359090  lwz 3, 0(29)
  0359094  addic 3, 3, -1
  0359098  extsw 3, 3
  035909c  bl 0x502730
  03590a0  nop
  03590a4  lfs 2, 164(30)
  03590a8  fmuls 1, 1, 2
  03590ac  bl 0x502758
  03590b0  nop
  03590b4  ori 28, 3, 0
  03590b8  bl 0x502730
  03590bc  nop
  03590c0  fmr 28, 1
  03590c4  lwz 3, 0(29)
  03590c8  addic 3, 3, -1
  03590cc  extsw 3, 3
  03590d0  bl 0x502730
  03590d4  nop
  03590d8  lwz 4, 0(29)
  03590dc  sldi 3, 28, 4
  03590e0  lfs 4, 164(30)
  03590e4  addic 4, 4, -1
  03590e8  fmsubs 4, 1, 4, 28
  03590ec  cmpw 28, 4
  03590f0  bf 2, 0x359110
  03590f4  addc 3, 29, 3
  03590f8  clrldi 3, 3, 32
  03590fc  lfs 1, 16(3)
  0359100  lfs 2, 20(3)
  0359104  lfs 3, 24(3)
  0359108  lfs 4, 28(3)
  035910c  b 0x359150
  0359110  addc 3, 29, 3
  0359114  clrldi 3, 3, 32
  0359118  lfs 1, 32(3)
  035911c  lfs 2, 16(3)
  0359120  lfs 3, 36(3)
  0359124  lfs 5, 20(3)
  0359128  lfs 6, 40(3)
  035912c  fsubs 1, 1, 2
  0359130  lfs 7, 24(3)
  0359134  fsubs 3, 3, 5
  0359138  lfs 8, 44(3)
  035913c  fsubs 6, 6, 7
  0359140  fmadds 1, 4, 1, 2
  0359144  fmadds 2, 4, 3, 5
  0359148  fmadds 3, 4, 6, 7
  035914c  fmr 4, 8
  0359150  fsubs 5, 3, 31
  0359154  stfs 1, 16(31)
  0359158  stfs 2, 20(31)
  035915c  stfs 3, 24(31)
  0359160  stfs 4, 28(31)
  0359164  stfs 5, 188(30)
  0359168  lfs 1, 16(31)
  035916c  addic 5, 31, 64
  0359170  lfs 2, 20(31)
  0359174  addic 4, 1, 112
  0359178  fsubs 1, 1, 29
  035917c  lfs 3, 24(31)
  0359180  fsubs 2, 2, 30
  0359184  lfs 4, 28(31)
  0359188  fsubs 3, 3, 31
  035918c  ori 6, 5, 0
  0359190  stfs 4, 124(1)
  0359194  addic 3, 30, 96
  0359198  stfs 1, 112(1)
  035919c  stfs 2, 116(1)
  03591a0  stfs 3, 120(1)
  03591a4  bl 0x112900
  03591a8  nop
  03591ac  lis 4, 151
  03591b0  addic 4, 4, -25376
  03591b4  lwz 5, 8332(4)
  03591b8  lwz 3, 1272(4)
  03591bc  cmpwi 5, 3
  03591c0  bt 2, 0x3591d0
  03591c4  lwz 5, 8324(4)
  03591c8  cmpwi 5, 28
  03591cc  bf 2, 0x3591dc
  03591d0  cmpw 3, 31
  03591d4  bt 2, 0x359244
  03591d8  b 0x3591f4
  03591dc  lhz 3, 782(4)
  03591e0  cmpwi 3, 0
  03591e4  bf 2, 0x3591f4
  03591e8  lwz 3, 764(4)
  03591ec  cmpw 3, 31
  03591f0  bt 2, 0x359244
  03591f4  lfs 1, 20(31)
  03591f8  lfs 2, 132(4)
  03591fc  lfs 3, 16(31)
  0359200  fsubs 1, 1, 2
  0359204  lfs 2, 128(4)
  0359208  fsubs 2, 3, 2
  035920c  lis 3, 54
  0359210  addi 3, 3, -30040
  0359214  fmuls 1, 1, 1
  0359218  fmadds 1, 2, 2, 1
  035921c  lfs 2, 16(3)
  0359220  fsqrts 1, 1
  0359224  fcmpu 0, 1, 2
  0359228  cror 6, 0, 2
  035922c  bt 6, 0x359244
  0359230  lhz 3, 186(30)
  0359234  cmpwi 3, 0
  0359238  bf 2, 0x359244
  035923c  li 3, 1
  0359240  sth 3, 184(30)
  0359244  ld 0, 208(1)
  0359248  mtlr 0
  035924c  lfd 28, 160(1)
  0359250  lfd 29, 168(1)
  0359254  lfd 30, 176(1)
  0359258  lfd 31, 184(1)
  035925c  ld 28, 128(1)
  0359260  ld 29, 136(1)
  0359264  ld 30, 144(1)
  0359268  ld 31, 152(1)
  035926c  addi 1, 1, 192
  0359270  blr
