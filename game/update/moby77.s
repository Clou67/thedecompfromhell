# game/update/moby77.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_77:   # 0x453bc8, 0x760 bytes
  0453bc8  stdu 1, -288(1)
  0453bcc  mflr 0
  0453bd0  std 0, 304(1)
  0453bd4  stfd 31, 280(1)
  0453bd8  std 31, 272(1)
  0453bdc  ori 31, 3, 0
  0453be0  lis 4, 51
  0453be4  std 30, 264(1)
  0453be8  li 5, 0
  0453bec  std 29, 256(1)
  0453bf0  std 28, 248(1)
  0453bf4  lwz 30, 120(31)
  0453bf8  bl 0x10675c
  0453bfc  nop
  0453c00  ori 4, 3, 0
  0453c04  lbz 3, 32(31)
  0453c08  cmpwi 4, 0
  0453c0c  bt 2, 0x453c24
  0453c10  li 3, 4
  0453c14  li 4, 255
  0453c18  stb 3, 32(31)
  0453c1c  stb 4, 164(31)
  0453c20  b 0x453c2c
  0453c24  cmpwi 3, 1
  0453c28  bt 2, 0x453d7c
  0453c2c  lis 3, 69
  0453c30  lis 4, 114
  0453c34  addi 5, 3, 15224
  0453c38  addic 3, 1, 128
  0453c3c  lfs 3, 4(5)
  0453c40  lfs 1, 0(5)
  0453c44  lfs 4, -3052(4)
  0453c48  fmuls 2, 4, 3
  0453c4c  bl 0xfea60
  0453c50  nop
  0453c54  lfs 1, 16(31)
  0453c58  lis 3, 135
  0453c5c  lfs 2, 20(31)
  0453c60  lis 4, 268
  0453c64  stfs 1, 144(1)
  0453c68  lfs 1, 24(31)
  0453c6c  stfs 2, 148(1)
  0453c70  lfs 2, 28(31)
  0453c74  stfs 1, 152(1)
  0453c78  lfs 3, 13920(3)
  0453c7c  stfs 2, 156(1)
  0453c80  lwz 3, 20772(4)
  0453c84  fadds 1, 1, 3
  0453c88  cmpwi 3, 0
  0453c8c  bf 2, 0x453ca4
  0453c90  li 3, 1
  0453c94  li 4, 0
  0453c98  stb 3, 32(31)
  0453c9c  stw 4, 148(31)
  0453ca0  b 0x454304
  0453ca4  lis 3, 135
  0453ca8  lis 4, 114
  0453cac  lwz 3, 13916(3)
  0453cb0  extsw 3, 3
  0453cb4  std 3, 224(1)
  0453cb8  lis 3, 69
  0453cbc  stfs 1, 152(1)
  0453cc0  addi 3, 3, 15224
  0453cc4  lfs 1, 8(3)
  0453cc8  lfs 2, -3056(4)
  0453ccc  lfd 3, 224(1)
  0453cd0  fcfid 3, 3
  0453cd4  lis 3, 135
  0453cd8  lis 4, 135
  0453cdc  lwz 3, 13908(3)
  0453ce0  lfs 31, 13912(4)
  0453ce4  extsw 29, 3
  0453ce8  frsp 3, 3
  0453cec  fadds 1, 3, 1
  0453cf0  fmuls 1, 2, 1
  0453cf4  fctidz 1, 1
  0453cf8  fcfid 1, 1
  0453cfc  frsp 1, 1
  0453d00  bl 0x502758
  0453d04  nop
  0453d08  clrlwi 28, 3, 24
  0453d0c  li 3, 255
  0453d10  bl 0xfc620
  0453d14  nop
  0453d18  clrlwi 8, 3, 24
  0453d1c  fmr 1, 31
  0453d20  addic 3, 1, 144
  0453d24  addic 4, 1, 128
  0453d28  ori 5, 29, 0
  0453d2c  ori 7, 28, 0
  0453d30  li 9, 0
  0453d34  bl 0x131100
  0453d38  nop
  0453d3c  lwz 3, 108(30)
  0453d40  cmpwi 3, 0
  0453d44  bt 2, 0x453d68
  0453d48  lis 4, 161
  0453d4c  lwz 5, 0(3)
  0453d50  lwz 4, 1808(4)
  0453d54  cmpw 5, 4
  0453d58  bt 2, 0x453d7c
  0453d5c  lis 4, 161
  0453d60  lwz 4, 1808(4)
  0453d64  stw 4, 0(3)
  0453d68  lis 3, 113
  0453d6c  ori 4, 31, 0
  0453d70  addic 3, 3, -5912
  0453d74  bl 0x6d720
  0453d78  nop
  0453d7c  lbz 3, 32(31)
  0453d80  cmpwi 3, 4
  0453d84  cmpwi 1, 3, 3
  0453d88  cmpwi 6, 3, 2
  0453d8c  cmpwi 7, 3, 0
  0453d90  bt 2, 0x45428c
  0453d94  bt 6, 0x453e88
  0453d98  bt 26, 0x453dc4
  0453d9c  bf 30, 0x454304
  0453da0  li 3, 1
  0453da4  lhz 5, 52(31)
  0453da8  li 4, 0
  0453dac  stb 3, 32(31)
  0453db0  ori 3, 5, 1
  0453db4  stw 4, 148(31)
  0453db8  stb 4, 49(31)
  0453dbc  sth 3, 52(31)
  0453dc0  b 0x454304
  0453dc4  lis 3, 69
  0453dc8  lis 4, 114
  0453dcc  lfs 1, 24(31)
  0453dd0  addi 3, 3, 15224
  0453dd4  lfs 2, 4(3)
  0453dd8  lfs 3, -3052(4)
  0453ddc  addic 3, 30, 104
  0453de0  fmadds 1, 3, 2, 1
  0453de4  stfs 1, 24(31)
  0453de8  bl 0x4fff60
  0453dec  nop
  0453df0  cmpwi 3, 0
  0453df4  bt 2, 0x454304
  0453df8  li 3, 3
  0453dfc  lbz 4, 83(31)
  0453e00  cmpwi 4, 1
  0453e04  stb 3, 32(31)
  0453e08  bt 2, 0x453e48
  0453e0c  lis 3, 69
  0453e10  lis 4, 114
  0453e14  addi 3, 3, 15224
  0453e18  li 5, 0
  0453e1c  lfs 1, 12(3)
  0453e20  lfs 2, -3056(4)
  0453e24  ori 3, 31, 0
  0453e28  li 4, 1
  0453e2c  fmuls 1, 2, 1
  0453e30  fctiwz 1, 1
  0453e34  stfd 1, 224(1)
  0453e38  lwz 6, 228(1)
  0453e3c  extsw 6, 6
  0453e40  bl 0xfddc0
  0453e44  nop
  0453e48  lis 3, 69
  0453e4c  vspltisw 2, -1
  0453e50  li 5, 16
  0453e54  addi 3, 3, 15224
  0453e58  lis 4, 114
  0453e5c  li 6, -3056
  0453e60  vslw 2, 2, 2
  0453e64  <unknown>
  0453e68  li 3, 104
  0453e6c  vspltw 3, 3, 0
  0453e70  <unknown>
  0453e74  vmaddfp 2, 4, 3, 2
  0453e78  vctsxs 2, 2, 0
  0453e7c  vspltw 2, 2, 0
  0453e80  stvewx 2, 3, 30
  0453e84  b 0x454304
  0453e88  lis 29, 151
  0453e8c  lfs 1, 16(31)
  0453e90  lfs 2, 20(31)
  0453e94  addic 29, 29, -25376
  0453e98  lis 3, 69
  0453e9c  addi 3, 3, 15224
  0453ea0  lfs 3, 128(29)
  0453ea4  lfs 4, 132(29)
  0453ea8  fsubs 3, 3, 1
  0453eac  fsubs 2, 4, 2
  0453eb0  lfs 1, 100(30)
  0453eb4  lis 4, 115
  0453eb8  addic 4, 4, 22784
  0453ebc  fabs 5, 3
  0453ec0  fabs 4, 2
  0453ec4  stfs 3, 176(1)
  0453ec8  stfs 2, 180(1)
  0453ecc  fsubs 2, 5, 4
  0453ed0  stfs 2, 184(1)
  0453ed4  lwz 5, 176(1)
  0453ed8  lfs 31, 0(3)
  0453edc  lfs 2, 176(1)
  0453ee0  lwz 3, 180(1)
  0453ee4  lfs 3, 180(1)
  0453ee8  lwz 6, 184(1)
  0453eec  rlwinm 3, 3, 3, 29, 29
  0453ef0  fabs 6, 3
  0453ef4  lfs 3, 184(1)
  0453ef8  fabs 2, 2
  0453efc  rlwimi 3, 6, 2, 30, 30
  0453f00  fsub 7, 3, 31
  0453f04  rlwimi 3, 5, 4, 28, 28
  0453f08  fsub 8, 3, 31
  0453f0c  ori 5, 4, 0
  0453f10  rlwimi 5, 3, 2, 26, 28
  0453f14  slwi 3, 3, 2
  0453f18  clrldi 5, 5, 32
  0453f1c  fsel 4, 7, 2, 4
  0453f20  lfsx 3, 4, 3
  0453f24  lfs 2, 4(5)
  0453f28  fsel 5, 8, 6, 5
  0453f2c  fcmpu 0, 4, 31
  0453f30  bt 1, 0x453f3c
  0453f34  fmr 3, 31
  0453f38  b 0x454064
  0453f3c  fsubs 6, 5, 4
  0453f40  fadds 4, 5, 4
  0453f44  addic 6, 1, 16
  0453f48  li 3, 2
  0453f4c  addic 4, 6, 188
  0453f50  addic 5, 6, 172
  0453f54  mtctr 3
  0453f58  fdivs 4, 6, 4
  0453f5c  fmuls 6, 4, 4
  0453f60  stfs 4, 200(1)
  0453f64  stfs 4, 192(1)
  0453f68  stfs 4, 196(1)
  0453f6c  stfs 4, 188(1)
  0453f70  lfs 7, 200(1)
  0453f74  lfs 8, 192(1)
  0453f78  lfs 9, 196(1)
  0453f7c  fmuls 4, 6, 6
  0453f80  fmuls 8, 8, 6
  0453f84  fmuls 7, 7, 4
  0453f88  fmuls 5, 4, 4
  0453f8c  fmuls 4, 9, 4
  0453f90  stfs 8, 192(1)
  0453f94  fmuls 6, 7, 6
  0453f98  stfs 4, 196(1)
  0453f9c  stfs 6, 200(1)
  0453fa0  lfs 4, 172(6)
  0453fa4  fmuls 4, 4, 5
  0453fa8  stfs 4, 188(6)
  0453fac  lfs 4, 4(5)
  0453fb0  addic 5, 5, 8
  0453fb4  fmuls 4, 4, 5
  0453fb8  addic 6, 6, 8
  0453fbc  stfs 4, 4(4)
  0453fc0  addic 4, 4, 8
  0453fc4  bdnz 0x453fa0
  0453fc8  ori 7, 1, 0
  0453fcc  li 4, 4
  0453fd0  lis 6, 115
  0453fd4  addic 5, 7, 188
  0453fd8  mtctr 4
  0453fdc  addic 6, 6, 22752
  0453fe0  ori 4, 5, 0
  0453fe4  lfs 4, 188(7)
  0453fe8  lfs 5, 0(6)
  0453fec  fmuls 4, 4, 5
  0453ff0  lfs 5, 4(6)
  0453ff4  addic 6, 6, 8
  0453ff8  stfs 4, 188(7)
  0453ffc  lfs 4, 4(5)
  0454000  addic 7, 7, 8
  0454004  fmuls 4, 4, 5
  0454008  stfs 4, 4(5)
  045400c  addic 5, 5, 8
  0454010  bdnz 0x453fe4
  0454014  ori 5, 3, 0
  0454018  fmr 4, 31
  045401c  ori 3, 1, 0
  0454020  mtctr 5
  0454024  lfs 5, 188(3)
  0454028  fadds 4, 4, 5
  045402c  addic 3, 3, 16
  0454030  lfs 5, 4(4)
  0454034  lfs 6, 8(4)
  0454038  lfs 7, 12(4)
  045403c  addic 4, 4, 16
  0454040  fadds 4, 4, 5
  0454044  fadds 4, 4, 6
  0454048  fadds 4, 4, 7
  045404c  bdnz 0x454024
  0454050  lis 3, 69
  0454054  addi 3, 3, 15224
  0454058  lfs 5, 20(3)
  045405c  fadds 4, 4, 5
  0454060  fmadds 3, 4, 3, 2
  0454064  fmr 2, 3
  0454068  bl 0x502578
  045406c  nop
  0454070  lis 3, 69
  0454074  addi 3, 3, 15224
  0454078  lis 4, 135
  045407c  lfs 2, 24(3)
  0454080  lfs 3, 28(3)
  0454084  fadds 2, 1, 2
  0454088  fsubs 5, 3, 1
  045408c  lfs 4, 32(3)
  0454090  lis 5, 114
  0454094  fsubs 3, 3, 2
  0454098  fsub 7, 1, 5
  045409c  fsubs 6, 4, 2
  04540a0  fsubs 4, 4, 1
  04540a4  fsub 8, 2, 3
  04540a8  fsel 1, 7, 5, 1
  04540ac  lfs 5, 36(3)
  04540b0  fsel 2, 8, 3, 2
  04540b4  fsub 3, 4, 1
  04540b8  fsub 8, 6, 2
  04540bc  fsel 1, 3, 4, 1
  04540c0  lfs 3, 40(3)
  04540c4  lfs 4, 44(3)
  04540c8  lfs 9, 48(3)
  04540cc  fsel 2, 8, 6, 2
  04540d0  fmuls 6, 1, 1
  04540d4  fmuls 7, 2, 2
  04540d8  fmuls 8, 6, 1
  04540dc  fmuls 10, 7, 2
  04540e0  fmuls 11, 6, 8
  04540e4  fmadds 1, 8, 5, 1
  04540e8  fmuls 8, 7, 10
  04540ec  fmadds 2, 10, 5, 2
  04540f0  fmuls 5, 6, 11
  04540f4  lfs 10, 200(29)
  04540f8  fmadds 1, 11, 3, 1
  04540fc  lfs 11, 13904(4)
  0454100  lfs 12, -3052(5)
  0454104  li 4, 0
  0454108  fmuls 13, 7, 8
  045410c  fmadds 2, 8, 3, 2
  0454110  fmuls 6, 6, 5
  0454114  lfs 3, 24(31)
  0454118  fmadds 1, 5, 4, 1
  045411c  stw 4, 168(1)
  0454120  fmuls 8, 11, 12
  0454124  fmuls 5, 7, 13
  0454128  fmadds 2, 13, 4, 2
  045412c  fmuls 4, 11, 12
  0454130  fmadds 1, 6, 9, 1
  0454134  fmadds 2, 5, 9, 2
  0454138  fmuls 4, 4, 1
  045413c  fsubs 1, 3, 10
  0454140  fmuls 2, 8, 2
  0454144  stfs 4, 164(1)
  0454148  stfs 2, 160(1)
  045414c  lfs 2, 52(3)
  0454150  fcmpu 0, 1, 2
  0454154  cror 6, 0, 2
  0454158  bt 6, 0x45417c
  045415c  lis 3, 69
  0454160  lis 4, 114
  0454164  addi 3, 3, 15224
  0454168  lfs 1, 56(3)
  045416c  lfs 2, -3052(4)
  0454170  fmuls 1, 2, 1
  0454174  stfs 1, 168(1)
  0454178  b 0x4541b0
  045417c  lis 3, 69
  0454180  addi 3, 3, 15224
  0454184  lfs 2, 60(3)
  0454188  fcmpu 0, 1, 2
  045418c  cror 6, 1, 2
  0454190  bt 6, 0x4541b0
  0454194  lis 3, 69
  0454198  lis 4, 114
  045419c  addi 3, 3, 15224
  04541a0  lfs 1, 64(3)
  04541a4  lfs 2, -3052(4)
  04541a8  fmuls 1, 2, 1
  04541ac  stfs 1, 168(1)
  04541b0  lis 3, 69
  04541b4  fmr 3, 31
  04541b8  addic 4, 1, 160
  04541bc  addi 28, 3, 15224
  04541c0  li 8, 0
  04541c4  ori 3, 31, 0
  04541c8  lfs 1, 68(28)
  04541cc  fmr 2, 1
  04541d0  bl 0x1009b0
  04541d4  nop
  04541d8  lfs 1, 212(29)
  04541dc  lfs 2, 20(31)
  04541e0  lfs 3, 208(29)
  04541e4  fsubs 1, 1, 2
  04541e8  lfs 2, 16(31)
  04541ec  fsubs 2, 3, 2
  04541f0  fmuls 1, 1, 1
  04541f4  fmadds 1, 2, 2, 1
  04541f8  lfs 2, 8(28)
  04541fc  fsqrts 1, 1
  0454200  fcmpu 0, 1, 2
  0454204  bt 0, 0x45421c
  0454208  addic 3, 30, 104
  045420c  bl 0x4fff60
  0454210  nop
  0454214  cmpwi 3, 0
  0454218  bt 2, 0x454228
  045421c  li 3, 4
  0454220  stb 3, 32(31)
  0454224  b 0x454304
  0454228  lbz 3, 83(31)
  045422c  cmpwi 3, 1
  0454230  cmpwi 1, 3, 2
  0454234  bf 2, 0x454304
  0454238  lbz 3, 112(31)
  045423c  rlwinm 3, 3, 0, 30, 30
  0454240  cmpwi 3, 0
  0454244  bt 2, 0x454304
  0454248  bt 6, 0x454304
  045424c  lis 3, 69
  0454250  lis 4, 114
  0454254  addi 3, 3, 15224
  0454258  li 5, 0
  045425c  lfs 1, 12(3)
  0454260  lfs 2, -3056(4)
  0454264  ori 3, 31, 0
  0454268  li 4, 2
  045426c  fmuls 1, 2, 1
  0454270  fctiwz 1, 1
  0454274  stfd 1, 224(1)
  0454278  lwz 6, 228(1)
  045427c  extsw 6, 6
  0454280  bl 0xfddc0
  0454284  nop
  0454288  b 0x454304
  045428c  lis 3, 69
  0454290  addic 30, 31, 16
  0454294  addi 29, 3, 15224
  0454298  ori 3, 31, 0
  045429c  ori 4, 30, 0
  04542a0  li 6, -1
  04542a4  lfs 1, 68(29)
  04542a8  lfs 2, 72(29)
  04542ac  bl 0x10fb28
  04542b0  nop
  04542b4  lfs 1, 76(29)
  04542b8  li 29, 0
  04542bc  lis 6, 1
  04542c0  ori 4, 30, 0
  04542c4  fmr 2, 1
  04542c8  li 9, 0
  04542cc  fmr 3, 1
  04542d0  std 29, 112(1)
  04542d4  ori 3, 31, 0
  04542d8  li 10, 1
  04542dc  ori 6, 6, 1
  04542e0  bl 0x105870
  04542e4  nop
  04542e8  lhz 4, 52(31)
  04542ec  li 3, 1
  04542f0  stw 29, 148(31)
  04542f4  ori 4, 4, 1
  04542f8  stb 29, 49(31)
  04542fc  stb 3, 32(31)
  0454300  sth 4, 52(31)
  0454304  ld 0, 304(1)
  0454308  mtlr 0
  045430c  lfd 31, 280(1)
  0454310  ld 28, 248(1)
  0454314  ld 29, 256(1)
  0454318  ld 30, 264(1)
  045431c  ld 31, 272(1)
  0454320  addi 1, 1, 288
  0454324  blr
