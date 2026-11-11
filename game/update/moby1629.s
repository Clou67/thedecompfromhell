# game/update/moby1629.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1629:   # 0x2a4070, 0x38c bytes
  02a4070  stdu 1, -336(1)
  02a4074  mflr 0
  02a4078  std 0, 352(1)
  02a407c  stfd 14, 192(1)
  02a4080  stfd 15, 200(1)
  02a4084  stfd 16, 208(1)
  02a4088  stfd 17, 216(1)
  02a408c  stfd 18, 224(1)
  02a4090  stfd 19, 232(1)
  02a4094  stfd 20, 240(1)
  02a4098  stfd 21, 248(1)
  02a409c  stfd 22, 256(1)
  02a40a0  stfd 23, 264(1)
  02a40a4  stfd 24, 272(1)
  02a40a8  stfd 25, 280(1)
  02a40ac  stfd 26, 288(1)
  02a40b0  stfd 27, 296(1)
  02a40b4  stfd 28, 304(1)
  02a40b8  stfd 29, 312(1)
  02a40bc  stfd 30, 320(1)
  02a40c0  stfd 31, 328(1)
  02a40c4  std 28, 160(1)
  02a40c8  lis 28, 149
  02a40cc  lfs 17, 20(3)
  02a40d0  lis 4, 42
  02a40d4  addic 28, 28, 5056
  02a40d8  lfs 16, 16(3)
  02a40dc  addi 4, 4, 16448
  02a40e0  std 31, 184(1)
  02a40e4  li 5, 0
  02a40e8  ori 31, 3, 0
  02a40ec  lfs 1, 324(28)
  02a40f0  lfs 2, 320(28)
  02a40f4  fsubs 1, 1, 17
  02a40f8  lfs 3, 328(28)
  02a40fc  fsubs 2, 2, 16
  02a4100  std 27, 152(1)
  02a4104  lfs 22, 24(3)
  02a4108  lwz 27, 120(3)
  02a410c  fsubs 3, 3, 22
  02a4110  lfs 4, 332(28)
  02a4114  stfs 4, 124(1)
  02a4118  fmuls 4, 1, 1
  02a411c  stfs 1, 116(1)
  02a4120  stfs 2, 112(1)
  02a4124  stfs 3, 120(1)
  02a4128  lfs 23, 0(4)
  02a412c  stw 5, 120(1)
  02a4130  lfs 1, 4(27)
  02a4134  fmadds 2, 2, 2, 4
  02a4138  fmuls 1, 1, 1
  02a413c  fcmpu 0, 2, 1
  02a4140  std 30, 176(1)
  02a4144  std 29, 168(1)
  02a4148  cror 6, 1, 2
  02a414c  bt 6, 0x2a4390
  02a4150  lis 3, 42
  02a4154  lfs 1, 40(27)
  02a4158  lis 4, 114
  02a415c  addi 3, 3, 16448
  02a4160  lfs 2, 4(3)
  02a4164  lfs 3, 8(3)
  02a4168  lfs 4, 44(27)
  02a416c  fsubs 1, 1, 2
  02a4170  lfs 21, 12(3)
  02a4174  fsubs 2, 4, 2
  02a4178  lfs 18, 36(27)
  02a417c  lfs 6, -3052(4)
  02a4180  lfs 19, 28(31)
  02a4184  lwz 3, 20(27)
  02a4188  fmuls 18, 18, 6
  02a418c  cmpwi 3, 0
  02a4190  fmuls 20, 1, 3
  02a4194  fmuls 1, 2, 3
  02a4198  fmuls 20, 20, 21
  02a419c  fmuls 21, 1, 21
  02a41a0  bf 1, 0x2a4390
  02a41a4  lis 3, 42
  02a41a8  fneg 31, 18
  02a41ac  lis 30, 250
  02a41b0  addi 3, 3, 16448
  02a41b4  addic 29, 28, 320
  02a41b8  li 28, 0
  02a41bc  addic 30, 30, 17248
  02a41c0  lfs 24, 16(3)
  02a41c4  lfs 25, 20(3)
  02a41c8  lfs 26, 24(3)
  02a41cc  lfs 27, 28(3)
  02a41d0  lfs 28, 32(3)
  02a41d4  lfs 29, 36(3)
  02a41d8  lfs 30, 40(3)
  02a41dc  fmr 1, 20
  02a41e0  stfs 16, 112(1)
  02a41e4  stfs 17, 116(1)
  02a41e8  fmr 2, 21
  02a41ec  stfs 22, 120(1)
  02a41f0  stfs 19, 124(1)
  02a41f4  bl 0xfcbe8
  02a41f8  nop
  02a41fc  fmr 15, 1
  02a4200  lfs 1, 12(27)
  02a4204  lfs 2, 8(27)
  02a4208  bl 0xfcbe8
  02a420c  nop
  02a4210  fadds 2, 15, 24
  02a4214  fsubs 3, 25, 15
  02a4218  fsubs 4, 26, 15
  02a421c  addic 3, 1, 128
  02a4220  addic 4, 1, 112
  02a4224  ori 5, 29, 0
  02a4228  fsubs 5, 25, 2
  02a422c  fsub 6, 15, 3
  02a4230  fsubs 7, 26, 2
  02a4234  fsub 8, 2, 5
  02a4238  fsel 3, 6, 3, 15
  02a423c  fsel 2, 8, 5, 2
  02a4240  fsub 5, 4, 3
  02a4244  fsub 6, 7, 2
  02a4248  fsel 3, 5, 4, 3
  02a424c  lfs 5, 112(1)
  02a4250  lfs 8, 116(1)
  02a4254  fsel 2, 6, 7, 2
  02a4258  fmuls 4, 3, 3
  02a425c  fmuls 6, 2, 2
  02a4260  fmuls 7, 4, 3
  02a4264  fmuls 9, 6, 2
  02a4268  fmuls 10, 4, 7
  02a426c  fmadds 3, 7, 27, 3
  02a4270  fmuls 7, 6, 9
  02a4274  fmadds 2, 9, 27, 2
  02a4278  fmuls 9, 4, 10
  02a427c  fmadds 3, 10, 28, 3
  02a4280  fmuls 10, 6, 7
  02a4284  fmadds 2, 7, 28, 2
  02a4288  fmuls 4, 4, 9
  02a428c  fmadds 3, 9, 29, 3
  02a4290  fmuls 6, 6, 10
  02a4294  fmadds 2, 10, 29, 2
  02a4298  fmadds 3, 4, 30, 3
  02a429c  fmadds 2, 6, 30, 2
  02a42a0  fmadds 3, 3, 1, 8
  02a42a4  fmadds 1, 2, 1, 5
  02a42a8  stfs 3, 116(1)
  02a42ac  stfs 1, 112(1)
  02a42b0  bl 0x502a64
  02a42b4  nop
  02a42b8  lfs 1, 132(1)
  02a42bc  lfs 2, 128(1)
  02a42c0  fmuls 1, 1, 1
  02a42c4  fmadds 1, 2, 2, 1
  02a42c8  lfs 2, 16(27)
  02a42cc  fsqrts 1, 1
  02a42d0  fcmpu 0, 1, 2
  02a42d4  cror 6, 0, 2
  02a42d8  bt 6, 0x2a4380
  02a42dc  fmr 1, 31
  02a42e0  stfs 30, 148(1)
  02a42e4  fmr 2, 18
  02a42e8  bl 0xfcbe8
  02a42ec  nop
  02a42f0  fmr 15, 1
  02a42f4  fmr 1, 31
  02a42f8  lis 3, 250
  02a42fc  stfs 31, 144(1)
  02a4300  fmr 2, 18
  02a4304  lfs 14, 17248(3)
  02a4308  bl 0xfcbe8
  02a430c  nop
  02a4310  fmr 31, 1
  02a4314  lfs 1, 24(27)
  02a4318  lfs 2, 28(27)
  02a431c  lfs 30, 4(30)
  02a4320  bl 0xfcbe8
  02a4324  nop
  02a4328  lis 3, 114
  02a432c  fadds 2, 14, 15
  02a4330  lfs 3, -3052(3)
  02a4334  lwz 4, 0(27)
  02a4338  addic 3, 1, 112
  02a433c  fmuls 1, 1, 3
  02a4340  lfs 4, 24(31)
  02a4344  fadds 3, 30, 31
  02a4348  extsw 4, 4
  02a434c  stfs 2, 80(1)
  02a4350  fneg 2, 1
  02a4354  lfs 1, 32(27)
  02a4358  stfs 23, 92(1)
  02a435c  stfs 3, 84(1)
  02a4360  fsubs 1, 4, 1
  02a4364  stfs 2, 88(1)
  02a4368  ld 7, 80(1)
  02a436c  ld 8, 88(1)
  02a4370  bl 0x11ffb0
  02a4374  nop
  02a4378  lfs 31, 144(1)
  02a437c  lfs 30, 148(1)
  02a4380  addic 28, 28, 1
  02a4384  lwz 3, 20(27)
  02a4388  cmpw 28, 3
  02a438c  bt 0, 0x2a41dc
  02a4390  ld 0, 352(1)
  02a4394  mtlr 0
  02a4398  lfd 14, 192(1)
  02a439c  lfd 15, 200(1)
  02a43a0  lfd 16, 208(1)
  02a43a4  lfd 17, 216(1)
  02a43a8  lfd 18, 224(1)
  02a43ac  lfd 19, 232(1)
  02a43b0  lfd 20, 240(1)
  02a43b4  lfd 21, 248(1)
  02a43b8  lfd 22, 256(1)
  02a43bc  lfd 23, 264(1)
  02a43c0  lfd 24, 272(1)
  02a43c4  lfd 25, 280(1)
  02a43c8  lfd 26, 288(1)
  02a43cc  lfd 27, 296(1)
  02a43d0  lfd 28, 304(1)
  02a43d4  lfd 29, 312(1)
  02a43d8  lfd 30, 320(1)
  02a43dc  lfd 31, 328(1)
  02a43e0  ld 27, 152(1)
  02a43e4  ld 28, 160(1)
  02a43e8  ld 29, 168(1)
  02a43ec  ld 30, 176(1)
  02a43f0  ld 31, 184(1)
  02a43f4  addi 1, 1, 336
  02a43f8  blr
