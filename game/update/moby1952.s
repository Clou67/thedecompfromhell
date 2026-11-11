# game/update/moby1952.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1952_002e40a8:   # 0x2e40a8, 0x21c bytes
  02e40a8  stdu 1, -64(1)
  02e40ac  stfd 31, 56(1)
  02e40b0  cmpwi 3, 0
  02e40b4  li 8, 0
  02e40b8  bf 1, 0x2e42b8
  02e40bc  lis 6, 46
  02e40c0  ori 9, 7, 0
  02e40c4  addi 10, 6, 16536
  02e40c8  lis 7, 149
  02e40cc  ori 6, 5, 0
  02e40d0  ori 5, 4, 0
  02e40d4  addic 7, 7, 5056
  02e40d8  lfs 4, 0(10)
  02e40dc  ori 4, 9, 0
  02e40e0  lfs 3, 4(10)
  02e40e4  lfs 2, 8(10)
  02e40e8  lfs 1, 12(10)
  02e40ec  lfs 9, 4(6)
  02e40f0  lfs 5, 324(7)
  02e40f4  lfs 10, 0(6)
  02e40f8  fsubs 9, 9, 5
  02e40fc  lfs 5, 320(7)
  02e4100  lfs 8, 8(6)
  02e4104  fsubs 10, 10, 5
  02e4108  lfs 5, 328(7)
  02e410c  fsubs 8, 8, 5
  02e4110  fmr 7, 4
  02e4114  fmuls 5, 9, 9
  02e4118  fmr 6, 7
  02e411c  fmadds 11, 10, 10, 5
  02e4120  fmr 5, 6
  02e4124  fmadds 11, 8, 8, 11
  02e4128  fsqrts 12, 11
  02e412c  fcmpu 0, 12, 5
  02e4130  bt 2, 0x2e4174
  02e4134  frsqrte 5, 11
  02e4138  fmuls 6, 11, 5
  02e413c  fmuls 7, 5, 3
  02e4140  fnmsubs 6, 6, 5, 2
  02e4144  fmadds 5, 6, 7, 5
  02e4148  fmuls 6, 11, 5
  02e414c  fmuls 7, 5, 3
  02e4150  fnmsubs 6, 6, 5, 2
  02e4154  fmadds 5, 6, 7, 5
  02e4158  fmuls 6, 11, 5
  02e415c  fmuls 7, 5, 3
  02e4160  fnmsubs 6, 6, 5, 2
  02e4164  fmadds 5, 6, 7, 5
  02e4168  fmuls 7, 10, 5
  02e416c  fmuls 6, 9, 5
  02e4170  fmuls 5, 8, 5
  02e4174  lfs 13, 4(5)
  02e4178  lfs 0, 0(5)
  02e417c  fmuls 8, 13, 13
  02e4180  lfs 12, 8(5)
  02e4184  fmr 10, 4
  02e4188  fmadds 11, 0, 0, 8
  02e418c  fmr 9, 10
  02e4190  fmadds 11, 12, 12, 11
  02e4194  fmr 8, 9
  02e4198  fsqrts 31, 11
  02e419c  fcmpu 0, 31, 8
  02e41a0  bt 2, 0x2e41e4
  02e41a4  frsqrte 8, 11
  02e41a8  fmuls 9, 11, 8
  02e41ac  fmuls 10, 8, 3
  02e41b0  fnmsubs 9, 9, 8, 2
  02e41b4  fmadds 8, 9, 10, 8
  02e41b8  fmuls 9, 11, 8
  02e41bc  fmuls 10, 8, 3
  02e41c0  fnmsubs 9, 9, 8, 2
  02e41c4  fmadds 8, 9, 10, 8
  02e41c8  fmuls 9, 11, 8
  02e41cc  fmuls 10, 8, 3
  02e41d0  fnmsubs 9, 9, 8, 2
  02e41d4  fmadds 8, 9, 10, 8
  02e41d8  fmuls 10, 8, 0
  02e41dc  fmuls 9, 8, 13
  02e41e0  fmuls 8, 8, 12
  02e41e4  fmr 11, 5
  02e41e8  fmuls 5, 6, 9
  02e41ec  fmadds 5, 7, 10, 5
  02e41f0  fmadds 5, 11, 8, 5
  02e41f4  fmuls 12, 5, 1
  02e41f8  fnmsubs 5, 12, 9, 6
  02e41fc  fnmsubs 6, 12, 10, 7
  02e4200  fnmsubs 7, 12, 8, 11
  02e4204  fmr 11, 4
  02e4208  fmuls 8, 5, 5
  02e420c  fmr 10, 11
  02e4210  fmadds 8, 6, 6, 8
  02e4214  fmr 9, 10
  02e4218  fmadds 8, 7, 7, 8
  02e421c  fsqrts 12, 8
  02e4220  fcmpu 0, 12, 9
  02e4224  bt 2, 0x2e4268
  02e4228  frsqrte 9, 8
  02e422c  fmuls 10, 8, 9
  02e4230  fmuls 11, 9, 3
  02e4234  fnmsubs 10, 10, 9, 2
  02e4238  fmadds 9, 10, 11, 9
  02e423c  fmuls 10, 8, 9
  02e4240  fmuls 11, 9, 3
  02e4244  fnmsubs 10, 10, 9, 2
  02e4248  fmadds 9, 10, 11, 9
  02e424c  fmuls 8, 8, 9
  02e4250  fmuls 10, 9, 3
  02e4254  fnmsubs 8, 8, 9, 2
  02e4258  fmadds 9, 8, 10, 9
  02e425c  fmuls 11, 9, 6
  02e4260  fmuls 10, 9, 5
  02e4264  fmuls 9, 9, 7
  02e4268  fmuls 5, 10, 10
  02e426c  fadds 6, 9, 2
  02e4270  addic 8, 8, 1
  02e4274  addic 6, 6, 12
  02e4278  fmadds 5, 11, 11, 5
  02e427c  cmpw 8, 3
  02e4280  addic 5, 5, 12
  02e4284  fmadds 5, 6, 6, 5
  02e4288  fsqrts 5, 5
  02e428c  fmuls 5, 5, 1
  02e4290  fdivs 6, 11, 5
  02e4294  fdivs 5, 10, 5
  02e4298  fadds 6, 6, 3
  02e429c  fmuls 6, 6, 1
  02e42a0  fadds 5, 5, 3
  02e42a4  stfs 6, 0(4)
  02e42a8  fmuls 5, 5, 1
  02e42ac  stfs 5, 4(4)
  02e42b0  addic 4, 4, 8
  02e42b4  bt 0, 0x2e40ec
  02e42b8  lfd 31, 56(1)
  02e42bc  addi 1, 1, 64
  02e42c0  blr

M1952_002e42c4:   # 0x2e42c4, 0x19c bytes
  02e42c4  stdu 1, -176(1)
  02e42c8  mflr 0
  02e42cc  std 0, 192(1)
  02e42d0  std 31, 168(1)
  02e42d4  std 30, 160(1)
  02e42d8  std 29, 152(1)
  02e42dc  std 28, 144(1)
  02e42e0  std 27, 136(1)
  02e42e4  std 26, 128(1)
  02e42e8  std 25, 120(1)
  02e42ec  li 3, 41
  02e42f0  bl 0x685c4
  02e42f4  nop
  02e42f8  ori 4, 3, 0
  02e42fc  li 3, 24
  02e4300  bl 0x174f80
  02e4304  nop
  02e4308  li 3, 0
  02e430c  li 4, 1
  02e4310  li 5, 2
  02e4314  li 6, 1
  02e4318  li 7, 64
  02e431c  bl 0x502ea8
  02e4320  nop
  02e4324  ori 4, 3, 0
  02e4328  li 3, 3
  02e432c  bl 0x174f80
  02e4330  nop
  02e4334  li 3, 0
  02e4338  li 4, 0
  02e433c  li 5, 0
  02e4340  li 6, 0
  02e4344  li 7, 0
  02e4348  li 8, 0
  02e434c  bl 0x502f08
  02e4350  nop
  02e4354  ori 4, 3, 0
  02e4358  li 3, 6
  02e435c  bl 0x174f80
  02e4360  nop
  02e4364  li 3, 0
  02e4368  lis 9, 0
  02e436c  li 4, 0
  02e4370  li 5, 1
  02e4374  li 6, 1
  02e4378  li 7, 1
  02e437c  li 8, 0
  02e4380  ori 9, 9, 65424
  02e4384  bl 0x502fd4
  02e4388  nop
  02e438c  ori 4, 3, 0
  02e4390  li 3, 26
  02e4394  bl 0x174f80
  02e4398  nop
  02e439c  bl 0x71170
  02e43a0  nop
  02e43a4  lis 29, 128
  02e43a8  lis 31, 128
  02e43ac  lis 27, 128
  02e43b0  lis 30, 128
  02e43b4  lis 28, 128
  02e43b8  lis 26, 268
  02e43bc  li 25, 0
  02e43c0  addic 27, 27, -15824
  02e43c4  addic 29, 29, -28480
  02e43c8  addic 28, 28, -15836
  02e43cc  addic 31, 31, -15812
  02e43d0  addic 30, 30, -15848
  02e43d4  addic 26, 26, -21888
  02e43d8  lwz 3, 0(29)
  02e43dc  ori 7, 26, 0
  02e43e0  lwz 4, 0(27)
  02e43e4  lwz 5, 0(30)
  02e43e8  extsw 3, 3
  02e43ec  lwz 6, 0(28)
  02e43f0  bl 0x2e40a8
  02e43f4  lwz 3, 0(29)
  02e43f8  ori 6, 26, 0
  02e43fc  lwz 4, 0(30)
  02e4400  li 7, 9
  02e4404  lwz 5, 0(31)
  02e4408  extsw 3, 3
  02e440c  bl 0x74604
  02e4410  nop
  02e4414  addic 25, 25, 1
  02e4418  addic 27, 27, 4
  02e441c  cmpwi 25, 3
  02e4420  addic 28, 28, 4
  02e4424  addic 29, 29, 4
  02e4428  addic 30, 30, 4
  02e442c  addic 31, 31, 4
  02e4430  bt 0, 0x2e43d8
  02e4434  ld 0, 192(1)
  02e4438  mtlr 0
  02e443c  ld 25, 120(1)
  02e4440  ld 26, 128(1)
  02e4444  ld 27, 136(1)
  02e4448  ld 28, 144(1)
  02e444c  ld 29, 152(1)
  02e4450  ld 30, 160(1)
  02e4454  ld 31, 168(1)
  02e4458  addi 1, 1, 176
  02e445c  blr

UpdateMoby_1952:   # 0x2e4460, 0x60 bytes
  02e4460  stdu 1, -112(1)
  02e4464  mflr 0
  02e4468  std 0, 128(1)
  02e446c  lbz 4, 32(3)
  02e4470  cmpwi 4, 0
  02e4474  cmpwi 1, 4, 1
  02e4478  cmpwi 6, 4, -1
  02e447c  bt 1, 0x2e4488
  02e4480  bf 25, 0x2e44b0
  02e4484  b 0x2e4490
  02e4488  bf 5, 0x2e449c
  02e448c  b 0x2e44b0
  02e4490  li 4, 1
  02e4494  stb 4, 32(3)
  02e4498  b 0x2e44b0
  02e449c  lis 5, 113
  02e44a0  ori 4, 3, 0
  02e44a4  addic 3, 5, -18872
  02e44a8  bl 0x6d720
  02e44ac  nop
  02e44b0  ld 0, 128(1)
  02e44b4  mtlr 0
  02e44b8  addi 1, 1, 112
  02e44bc  blr
