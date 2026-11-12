# game/update/moby221.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M221_002f8bf4:   # 0x2f8bf4, 0x14 bytes
  02f8bf4  lis 3, 128
  02f8bf8  lis 4, 1
  02f8bfc  addic 3, 3, -4156
  02f8c00  stw 4, 72(3)
  02f8c04  blr

UpdateMoby_221:   # 0x2f8c70, 0x99c bytes
  02f8c70  stdu 1, -272(1)
  02f8c74  mflr 0
  02f8c78  std 0, 288(1)
  02f8c7c  stfd 30, 256(1)
  02f8c80  stfd 31, 264(1)
  02f8c84  std 31, 248(1)
  02f8c88  std 29, 232(1)
  02f8c8c  ori 31, 3, 0
  02f8c90  li 29, 0
  02f8c94  std 30, 240(1)
  02f8c98  lbz 3, 32(31)
  02f8c9c  lwz 30, 120(31)
  02f8ca0  std 28, 224(1)
  02f8ca4  std 27, 216(1)
  02f8ca8  std 26, 208(1)
  02f8cac  cmpwi 3, 6
  02f8cb0  bt 2, 0x2f8cf0
  02f8cb4  ori 3, 31, 0
  02f8cb8  lis 4, 1
  02f8cbc  li 5, 0
  02f8cc0  bl 0x10675c
  02f8cc4  nop
  02f8cc8  ori 4, 3, 0
  02f8ccc  lbz 3, 32(31)
  02f8cd0  cmpwi 4, 0
  02f8cd4  bt 2, 0x2f8cf0
  02f8cd8  lwz 4, 44(4)
  02f8cdc  cmpwi 4, 0
  02f8ce0  bf 1, 0x2f8cf0
  02f8ce4  li 3, 6
  02f8ce8  stb 3, 32(31)
  02f8cec  b 0x2f8cf8
  02f8cf0  cmpwi 3, 0
  02f8cf4  bt 2, 0x2f8d38
  02f8cf8  lis 3, 48
  02f8cfc  lfs 1, 132(30)
  02f8d00  lis 4, 114
  02f8d04  addi 3, 3, -29688
  02f8d08  stfs 1, 104(30)
  02f8d0c  li 5, 0
  02f8d10  lfs 1, 0(3)
  02f8d14  lfs 2, 4(3)
  02f8d18  lfs 3, -3060(4)
  02f8d1c  ori 3, 31, 0
  02f8d20  ori 4, 30, 0
  02f8d24  fmuls 1, 3, 1
  02f8d28  fmuls 2, 3, 2
  02f8d2c  bl 0x1167c8
  02f8d30  nop
  02f8d34  lbz 3, 32(31)
  02f8d38  cmpwi 3, 6
  02f8d3c  cmpwi 6, 3, 5
  02f8d40  bt 2, 0x2f94e4
  02f8d44  cmpwi 1, 3, 4
  02f8d48  bt 26, 0x2f9434
  02f8d4c  cmpwi 6, 3, 3
  02f8d50  bt 6, 0x2f90dc
  02f8d54  cmpwi 1, 3, 2
  02f8d58  bt 26, 0x2f9010
  02f8d5c  cmpwi 6, 3, 1
  02f8d60  bt 6, 0x2f8f3c
  02f8d64  cmpwi 1, 3, 0
  02f8d68  bt 26, 0x2f8dd8
  02f8d6c  bf 6, 0x2f95dc
  02f8d70  lis 3, 48
  02f8d74  lis 4, 128
  02f8d78  addi 3, 3, -29688
  02f8d7c  lis 5, 128
  02f8d80  lfs 1, 8(3)
  02f8d84  lfs 2, -4028(4)
  02f8d88  lfs 3, -4024(5)
  02f8d8c  lis 3, 114
  02f8d90  fmuls 2, 2, 1
  02f8d94  fmuls 3, 3, 1
  02f8d98  lfs 4, -3056(3)
  02f8d9c  fmuls 1, 4, 2
  02f8da0  fmuls 2, 4, 3
  02f8da4  bl 0xfcbe8
  02f8da8  nop
  02f8dac  bl 0x502758
  02f8db0  nop
  02f8db4  li 4, 255
  02f8db8  sth 3, 128(30)
  02f8dbc  li 3, 1
  02f8dc0  stw 29, 132(30)
  02f8dc4  sth 29, 130(30)
  02f8dc8  stw 29, 136(30)
  02f8dcc  stb 4, 48(31)
  02f8dd0  stb 3, 32(31)
  02f8dd4  b 0x2f95dc
  02f8dd8  addic 3, 30, 128
  02f8ddc  bl 0x4fffb4
  02f8de0  nop
  02f8de4  cmpwi 3, 0
  02f8de8  bt 2, 0x2f95dc
  02f8dec  lis 3, 149
  02f8df0  lfs 1, 20(31)
  02f8df4  addic 3, 3, 5056
  02f8df8  lfs 2, 324(3)
  02f8dfc  lfs 3, 320(3)
  02f8e00  fsubs 1, 2, 1
  02f8e04  lfs 2, 16(31)
  02f8e08  fsubs 2, 3, 2
  02f8e0c  lfs 3, 328(3)
  02f8e10  lfs 4, 24(31)
  02f8e14  fsubs 3, 3, 4
  02f8e18  fmuls 1, 1, 1
  02f8e1c  lis 3, 48
  02f8e20  addi 3, 3, -29688
  02f8e24  fmadds 1, 2, 2, 1
  02f8e28  lfs 2, 12(3)
  02f8e2c  fmadds 1, 3, 3, 1
  02f8e30  fsqrts 1, 1
  02f8e34  fcmpu 0, 1, 2
  02f8e38  cror 6, 1, 2
  02f8e3c  bt 6, 0x2f95dc
  02f8e40  lbz 3, 33(31)
  02f8e44  cmpwi 3, 255
  02f8e48  bt 2, 0x2f8f14
  02f8e4c  lis 4, 165
  02f8e50  rlwinm 5, 3, 2, 22, 29
  02f8e54  addic 4, 4, -28284
  02f8e58  lwzx 5, 4, 5
  02f8e5c  cmpwi 5, 0
  02f8e60  bt 2, 0x2f95dc
  02f8e64  slwi 3, 3, 2
  02f8e68  lis 5, 164
  02f8e6c  lwzx 3, 4, 3
  02f8e70  ori 4, 29, 0
  02f8e74  lwz 29, -28512(5)
  02f8e78  lhz 5, 0(3)
  02f8e7c  rlwinm 5, 5, 8, 9, 23
  02f8e80  addc 5, 29, 5
  02f8e84  clrldi 5, 5, 32
  02f8e88  lbz 6, 32(5)
  02f8e8c  cmpwi 6, 128
  02f8e90  cmpwi 1, 6, 1
  02f8e94  bf 0, 0x2f8eb8
  02f8e98  lhz 5, 166(5)
  02f8e9c  lhz 6, 166(31)
  02f8ea0  extsh 5, 5
  02f8ea4  extsh 6, 6
  02f8ea8  cmpw 5, 6
  02f8eac  bf 2, 0x2f8eb8
  02f8eb0  bt 6, 0x2f8eb8
  02f8eb4  addic 4, 4, 1
  02f8eb8  lhz 5, 0(3)
  02f8ebc  addic 3, 3, 2
  02f8ec0  extsh 5, 5
  02f8ec4  cmpwi 5, 0
  02f8ec8  bf 0, 0x2f8e78
  02f8ecc  cmpwi 4, 0
  02f8ed0  bt 2, 0x2f8f14
  02f8ed4  lis 3, 48
  02f8ed8  li 4, 16
  02f8edc  vspltisw 2, -1
  02f8ee0  addi 3, 3, -29688
  02f8ee4  li 5, -3056
  02f8ee8  lis 6, 114
  02f8eec  vslw 2, 2, 2
  02f8ef0  lvlx 3, 4, 3
  02f8ef4  li 3, 128
  02f8ef8  vspltw 3, 3, 0
  02f8efc  lvlx 4, 5, 6
  02f8f00  vmaddfp 2, 4, 3, 2
  02f8f04  vctsxs 2, 2, 0
  02f8f08  vsplth 2, 2, 1
  02f8f0c  stvehx 2, 3, 30
  02f8f10  b 0x2f95dc
  02f8f14  lis 3, 48
  02f8f18  addi 3, 3, -29688
  02f8f1c  lfs 1, 20(3)
  02f8f20  lfs 2, 24(3)
  02f8f24  bl 0xfcbe8
  02f8f28  nop
  02f8f2c  li 3, 2
  02f8f30  stfs 1, 140(30)
  02f8f34  stb 3, 32(31)
  02f8f38  b 0x2f95dc
  02f8f3c  li 3, 0
  02f8f40  li 4, 1
  02f8f44  bl 0xfe484
  02f8f48  nop
  02f8f4c  lfs 1, 132(30)
  02f8f50  lfs 2, 140(30)
  02f8f54  sth 3, 130(30)
  02f8f58  bl 0x5026a0
  02f8f5c  nop
  02f8f60  lis 3, 48
  02f8f64  addi 3, 3, -29688
  02f8f68  lfs 2, 28(3)
  02f8f6c  fcmpu 0, 1, 2
  02f8f70  cror 6, 1, 2
  02f8f74  bt 6, 0x2f8fc8
  02f8f78  lis 3, 48
  02f8f7c  lis 4, 114
  02f8f80  addi 3, 3, -29688
  02f8f84  li 5, 0
  02f8f88  lfs 1, 32(3)
  02f8f8c  lfs 2, -3056(4)
  02f8f90  lhz 3, 130(30)
  02f8f94  fmuls 1, 2, 1
  02f8f98  extsh 3, 3
  02f8f9c  sldi 4, 3, 1
  02f8fa0  ori 3, 31, 0
  02f8fa4  addic 4, 4, 1
  02f8fa8  fctiwz 1, 1
  02f8fac  stfd 1, 192(1)
  02f8fb0  lwz 6, 196(1)
  02f8fb4  extsw 6, 6
  02f8fb8  bl 0xfddc0
  02f8fbc  nop
  02f8fc0  li 3, 3
  02f8fc4  stb 3, 32(31)
  02f8fc8  lis 3, 48
  02f8fcc  lfs 1, 132(30)
  02f8fd0  lis 4, 114
  02f8fd4  lfs 2, 140(30)
  02f8fd8  addi 3, 3, -29688
  02f8fdc  lis 6, 114
  02f8fe0  addic 5, 30, 136
  02f8fe4  lfs 3, 36(3)
  02f8fe8  lfs 5, 40(3)
  02f8fec  lfs 4, -3048(4)
  02f8ff0  lfs 6, -3052(6)
  02f8ff4  fmuls 3, 4, 3
  02f8ff8  fmuls 4, 4, 5
  02f8ffc  fmuls 5, 6, 5
  02f9000  bl 0xff190
  02f9004  nop
  02f9008  stfs 1, 132(30)
  02f900c  b 0x2f95dc
  02f9010  lhz 3, 130(30)
  02f9014  lbz 4, 83(31)
  02f9018  extsh 3, 3
  02f901c  sldi 3, 3, 1
  02f9020  addic 3, 3, 1
  02f9024  cmpw 4, 3
  02f9028  bf 2, 0x2f95dc
  02f902c  lbz 3, 112(31)
  02f9030  rlwinm 3, 3, 0, 30, 30
  02f9034  cmpwi 3, 0
  02f9038  bt 2, 0x2f95dc
  02f903c  li 3, 15
  02f9040  li 4, 45
  02f9044  bl 0xfe484
  02f9048  nop
  02f904c  extsw 3, 3
  02f9050  lis 4, 114
  02f9054  std 3, 192(1)
  02f9058  lis 3, 48
  02f905c  addi 3, 3, -29688
  02f9060  lfs 1, 44(3)
  02f9064  lfs 2, -3056(4)
  02f9068  lfd 3, 192(1)
  02f906c  fcfid 3, 3
  02f9070  lhz 4, 130(30)
  02f9074  extsh 4, 4
  02f9078  sldi 4, 4, 1
  02f907c  addic 4, 4, 2
  02f9080  frsp 3, 3
  02f9084  fadds 1, 3, 1
  02f9088  fmuls 1, 2, 1
  02f908c  fctiwz 1, 1
  02f9090  stfd 1, 192(1)
  02f9094  lwz 5, 196(1)
  02f9098  sth 5, 128(30)
  02f909c  lfs 1, 48(3)
  02f90a0  ori 3, 31, 0
  02f90a4  fmuls 1, 2, 1
  02f90a8  li 5, 0
  02f90ac  fctiwz 1, 1
  02f90b0  stfd 1, 192(1)
  02f90b4  lwz 6, 196(1)
  02f90b8  extsw 6, 6
  02f90bc  bl 0xfddc0
  02f90c0  nop
  02f90c4  bl 0xfcc68
  02f90c8  nop
  02f90cc  li 3, 4
  02f90d0  stfs 1, 144(30)
  02f90d4  stb 3, 32(31)
  02f90d8  b 0x2f95dc
  02f90dc  lis 3, 149
  02f90e0  lfs 1, 20(31)
  02f90e4  addic 3, 3, 5056
  02f90e8  lfs 2, 16(31)
  02f90ec  lfs 3, 324(3)
  02f90f0  lfs 4, 320(3)
  02f90f4  fsubs 1, 1, 3
  02f90f8  fsubs 2, 2, 4
  02f90fc  lfs 3, 24(31)
  02f9100  lfs 4, 328(3)
  02f9104  fsubs 3, 3, 4
  02f9108  lis 3, 48
  02f910c  fmuls 1, 1, 1
  02f9110  addi 3, 3, -29688
  02f9114  fmadds 1, 2, 2, 1
  02f9118  lfs 2, 52(3)
  02f911c  fmadds 1, 3, 3, 1
  02f9120  fsqrts 1, 1
  02f9124  fcmpu 0, 1, 2
  02f9128  cror 6, 1, 2
  02f912c  bt 6, 0x2f93cc
  02f9130  li 3, 2
  02f9134  bl 0xfc620
  02f9138  nop
  02f913c  cmpwi 3, 0
  02f9140  bf 2, 0x2f93cc
  02f9144  lbz 3, 49(31)
  02f9148  cmpwi 3, 0
  02f914c  bt 2, 0x2f93cc
  02f9150  lis 3, 48
  02f9154  lis 27, 128
  02f9158  addi 28, 3, -29688
  02f915c  lfs 31, 56(28)
  02f9160  lfs 3, -4032(27)
  02f9164  fmuls 1, 3, 31
  02f9168  fmr 2, 3
  02f916c  bl 0xfcbe8
  02f9170  nop
  02f9174  lis 26, 114
  02f9178  lfs 3, 60(28)
  02f917c  lfs 2, -4032(27)
  02f9180  fmuls 2, 2, 31
  02f9184  lfs 4, -3052(26)
  02f9188  fmuls 31, 1, 4
  02f918c  fmr 1, 3
  02f9190  bl 0xfcbe8
  02f9194  nop
  02f9198  lfs 2, -3052(26)
  02f919c  fmuls 30, 1, 2
  02f91a0  bl 0xfcc68
  02f91a4  nop
  02f91a8  lfs 2, 64(28)
  02f91ac  lfs 3, 144(30)
  02f91b0  lfs 4, 68(28)
  02f91b4  fadds 3, 3, 2
  02f91b8  lfs 5, 72(28)
  02f91bc  fadds 2, 1, 2
  02f91c0  lfs 8, 76(28)
  02f91c4  fsubs 6, 4, 3
  02f91c8  fsubs 7, 5, 3
  02f91cc  addic 27, 1, 144
  02f91d0  addic 3, 1, 176
  02f91d4  fsub 9, 3, 6
  02f91d8  addic 5, 1, 160
  02f91dc  ori 4, 27, 0
  02f91e0  fsel 3, 9, 6, 3
  02f91e4  lfs 6, 80(28)
  02f91e8  fsub 9, 7, 3
  02f91ec  fsel 3, 9, 7, 3
  02f91f0  lfs 7, 84(28)
  02f91f4  lfs 9, 88(28)
  02f91f8  fmuls 10, 3, 3
  02f91fc  fmuls 11, 10, 3
  02f9200  fmuls 12, 10, 11
  02f9204  fmadds 3, 11, 8, 3
  02f9208  fmuls 11, 10, 12
  02f920c  fmadds 3, 12, 6, 3
  02f9210  fsubs 12, 4, 1
  02f9214  fmuls 10, 10, 11
  02f9218  fmadds 3, 11, 7, 3
  02f921c  fsubs 11, 4, 2
  02f9220  fsub 13, 1, 12
  02f9224  fmadds 3, 10, 9, 3
  02f9228  fsub 10, 2, 11
  02f922c  fmuls 3, 3, 31
  02f9230  fsel 10, 10, 11, 2
  02f9234  fsubs 2, 5, 2
  02f9238  fsel 11, 13, 12, 1
  02f923c  fsubs 1, 5, 1
  02f9240  stfs 3, 144(1)
  02f9244  fsub 12, 2, 10
  02f9248  lfs 3, 144(30)
  02f924c  fsub 13, 1, 11
  02f9250  fsubs 4, 4, 3
  02f9254  fsubs 5, 5, 3
  02f9258  stw 29, 168(1)
  02f925c  fsel 2, 12, 2, 10
  02f9260  fsel 1, 13, 1, 11
  02f9264  fsub 0, 3, 4
  02f9268  fmuls 10, 1, 1
  02f926c  fsel 3, 0, 4, 3
  02f9270  fmuls 4, 2, 2
  02f9274  fmuls 13, 10, 1
  02f9278  fsub 11, 5, 3
  02f927c  fmuls 12, 4, 2
  02f9280  fmadds 1, 13, 8, 1
  02f9284  fsel 3, 11, 5, 3
  02f9288  fmuls 5, 4, 12
  02f928c  fmadds 2, 12, 8, 2
  02f9290  fmuls 12, 10, 13
  02f9294  fmuls 11, 3, 3
  02f9298  fmuls 0, 4, 5
  02f929c  fmadds 2, 5, 6, 2
  02f92a0  fmuls 13, 10, 12
  02f92a4  fmadds 1, 12, 6, 1
  02f92a8  fmuls 5, 11, 3
  02f92ac  fmuls 4, 4, 0
  02f92b0  fmadds 2, 0, 7, 2
  02f92b4  fmadds 1, 13, 7, 1
  02f92b8  fmuls 12, 11, 5
  02f92bc  fmadds 3, 5, 8, 3
  02f92c0  fmuls 5, 10, 13
  02f92c4  fmadds 2, 4, 9, 2
  02f92c8  fmuls 4, 11, 12
  02f92cc  fmadds 3, 12, 6, 3
  02f92d0  fmadds 1, 5, 9, 1
  02f92d4  fmuls 2, 2, 30
  02f92d8  fmuls 5, 11, 4
  02f92dc  fmadds 3, 4, 7, 3
  02f92e0  fmuls 1, 1, 30
  02f92e4  stfs 2, 160(1)
  02f92e8  stw 29, 152(1)
  02f92ec  fmadds 3, 5, 9, 3
  02f92f0  stfs 1, 164(1)
  02f92f4  fmuls 2, 3, 31
  02f92f8  stfs 2, 148(1)
  02f92fc  bl 0x502b08
  02f9300  nop
  02f9304  addic 29, 1, 128
  02f9308  ori 3, 31, 0
  02f930c  li 4, 1
  02f9310  ori 5, 29, 0
  02f9314  bl 0xf1114
  02f9318  nop
  02f931c  lis 3, 128
  02f9320  lfs 31, 92(28)
  02f9324  lis 4, 128
  02f9328  lwz 3, -4040(3)
  02f932c  extsw 3, 3
  02f9330  std 3, 192(1)
  02f9334  lis 3, 114
  02f9338  lfs 2, 44(28)
  02f933c  lfs 3, -3056(3)
  02f9340  lwz 3, -4036(4)
  02f9344  lfd 4, 192(1)
  02f9348  fcfid 4, 4
  02f934c  extsw 3, 3
  02f9350  lis 4, 128
  02f9354  frsp 4, 4
  02f9358  fadds 4, 4, 2
  02f935c  fmuls 4, 3, 4
  02f9360  fctiwz 4, 4
  02f9364  stfd 4, 192(1)
  02f9368  lwz 5, 196(1)
  02f936c  std 3, 192(1)
  02f9370  lwz 3, -4048(4)
  02f9374  lfd 1, 192(1)
  02f9378  fcfid 1, 1
  02f937c  extsw 28, 3
  02f9380  extsw 3, 5
  02f9384  frsp 1, 1
  02f9388  fadds 1, 1, 2
  02f938c  fmuls 1, 3, 1
  02f9390  fctiwz 1, 1
  02f9394  stfd 1, 192(1)
  02f9398  lwz 4, 196(1)
  02f939c  extsw 4, 4
  02f93a0  bl 0xfe484
  02f93a4  nop
  02f93a8  ori 8, 3, 0
  02f93ac  fmr 1, 31
  02f93b0  li 9, 1
  02f93b4  ori 3, 29, 0
  02f93b8  ori 4, 27, 0
  02f93bc  ori 5, 28, 0
  02f93c0  ori 6, 28, 0
  02f93c4  bl 0x1268f8
  02f93c8  nop
  02f93cc  addic 3, 30, 128
  02f93d0  bl 0x4fffb4
  02f93d4  nop
  02f93d8  cmpwi 3, 0
  02f93dc  bt 2, 0x2f95dc
  02f93e0  lis 3, 48
  02f93e4  lis 4, 114
  02f93e8  addi 3, 3, -29688
  02f93ec  li 5, 0
  02f93f0  lfs 1, 32(3)
  02f93f4  lfs 2, -3056(4)
  02f93f8  lhz 3, 130(30)
  02f93fc  fmuls 1, 2, 1
  02f9400  extsh 3, 3
  02f9404  sldi 4, 3, 1
  02f9408  ori 3, 31, 0
  02f940c  addic 4, 4, 3
  02f9410  fctiwz 1, 1
  02f9414  stfd 1, 192(1)
  02f9418  lwz 6, 196(1)
  02f941c  extsw 6, 6
  02f9420  bl 0xfddc0
  02f9424  nop
  02f9428  li 3, 5
  02f942c  stb 3, 32(31)
  02f9430  b 0x2f95dc
  02f9434  lhz 3, 130(30)
  02f9438  lbz 4, 83(31)
  02f943c  extsh 3, 3
  02f9440  sldi 3, 3, 1
  02f9444  addic 3, 3, 3
  02f9448  cmpw 4, 3
  02f944c  bf 2, 0x2f95dc
  02f9450  lbz 3, 112(31)
  02f9454  rlwinm 3, 3, 0, 30, 30
  02f9458  cmpwi 3, 0
  02f945c  bt 2, 0x2f95dc
  02f9460  lis 3, 48
  02f9464  lis 4, 128
  02f9468  addi 29, 3, -29688
  02f946c  lis 3, 128
  02f9470  lis 28, 114
  02f9474  lfs 1, 8(29)
  02f9478  lfs 2, -4028(3)
  02f947c  lfs 3, -4024(4)
  02f9480  fmuls 2, 2, 1
  02f9484  lfs 4, -3056(28)
  02f9488  fmuls 3, 3, 1
  02f948c  fmuls 1, 4, 2
  02f9490  fmuls 2, 4, 3
  02f9494  bl 0xfcbe8
  02f9498  nop
  02f949c  bl 0x502758
  02f94a0  nop
  02f94a4  sth 3, 128(30)
  02f94a8  lfs 1, 32(29)
  02f94ac  ori 3, 31, 0
  02f94b0  lfs 2, -3056(28)
  02f94b4  li 4, 0
  02f94b8  li 5, 0
  02f94bc  fmuls 1, 2, 1
  02f94c0  fctiwz 1, 1
  02f94c4  stfd 1, 192(1)
  02f94c8  lwz 6, 196(1)
  02f94cc  extsw 6, 6
  02f94d0  bl 0xfddc0
  02f94d4  nop
  02f94d8  li 3, 1
  02f94dc  stb 3, 32(31)
  02f94e0  b 0x2f95dc
  02f94e4  li 3, 0
  02f94e8  li 4, 0
  02f94ec  ori 5, 31, 0
  02f94f0  bl 0x15d12c
  02f94f4  nop
  02f94f8  lis 3, 48
  02f94fc  addic 30, 31, 16
  02f9500  addi 29, 3, -29688
  02f9504  ori 3, 31, 0
  02f9508  ori 4, 30, 0
  02f950c  li 6, -1
  02f9510  lfs 1, 96(29)
  02f9514  lfs 2, 100(29)
  02f9518  bl 0x10fb28
  02f951c  nop
  02f9520  ori 3, 31, 0
  02f9524  bl 0x11a100
  02f9528  nop
  02f952c  lis 4, 161
  02f9530  lfs 31, 60(29)
  02f9534  ori 3, 31, 0
  02f9538  addic 28, 4, 23856
  02f953c  addic 29, 31, 64
  02f9540  ori 10, 28, 0
  02f9544  fmr 1, 31
  02f9548  li 4, 1867
  02f954c  std 28, 112(1)
  02f9550  std 28, 120(1)
  02f9554  ori 5, 30, 0
  02f9558  ori 6, 29, 0
  02f955c  li 7, 0
  02f9560  li 8, 0
  02f9564  bl 0x11a560
  02f9568  nop
  02f956c  std 28, 112(1)
  02f9570  ori 3, 31, 0
  02f9574  std 28, 120(1)
  02f9578  ori 10, 28, 0
  02f957c  fmr 1, 31
  02f9580  li 4, 1868
  02f9584  ori 5, 30, 0
  02f9588  ori 6, 29, 0
  02f958c  li 7, 0
  02f9590  li 8, 0
  02f9594  bl 0x11a560
  02f9598  nop
  02f959c  ori 3, 31, 0
  02f95a0  std 28, 112(1)
  02f95a4  ori 10, 28, 0
  02f95a8  li 4, 1869
  02f95ac  fmr 1, 31
  02f95b0  ori 5, 30, 0
  02f95b4  std 28, 120(1)
  02f95b8  ori 6, 29, 0
  02f95bc  li 7, 0
  02f95c0  li 8, 0
  02f95c4  bl 0x11a560
  02f95c8  nop
  02f95cc  ori 3, 31, 0
  02f95d0  bl 0xefb38
  02f95d4  nop
  02f95d8  b 0x2f95dc
  02f95dc  ld 0, 288(1)
  02f95e0  mtlr 0
  02f95e4  lfd 30, 256(1)
  02f95e8  lfd 31, 264(1)
  02f95ec  ld 26, 208(1)
  02f95f0  ld 27, 216(1)
  02f95f4  ld 28, 224(1)
  02f95f8  ld 29, 232(1)
  02f95fc  ld 30, 240(1)
  02f9600  ld 31, 248(1)
  02f9604  addi 1, 1, 272
  02f9608  blr
