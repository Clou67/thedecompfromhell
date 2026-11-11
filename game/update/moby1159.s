# game/update/moby1159.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1159_001e40d8:   # 0x1e40d8, 0x30 bytes
  01e40d8  stdu 1, -112(1)
  01e40dc  mflr 0
  01e40e0  std 0, 128(1)
  01e40e4  lis 3, 239
  01e40e8  li 4, 20
  01e40ec  addic 3, 3, 10560
  01e40f0  bl 0x17cfdc
  01e40f4  nop
  01e40f8  ld 0, 128(1)
  01e40fc  mtlr 0
  01e4100  addi 1, 1, 112
  01e4104  blr

M1159_001e4108:   # 0x1e4108, 0x14 bytes
  01e4108  lis 3, 118
  01e410c  lis 4, 1
  01e4110  addic 3, 3, 20280
  01e4114  stw 4, 72(3)
  01e4118  blr

UpdateMoby_1159:   # 0x1e4130, 0x2a8 bytes
  01e4130  stdu 1, -160(1)
  01e4134  mflr 0
  01e4138  std 0, 176(1)
  01e413c  std 31, 152(1)
  01e4140  lbz 4, 32(3)
  01e4144  std 30, 144(1)
  01e4148  ori 31, 3, 0
  01e414c  lwz 30, 120(3)
  01e4150  cmpwi 4, 0
  01e4154  cmpwi 1, 4, 2
  01e4158  cmpwi 6, 4, 1
  01e415c  std 29, 136(1)
  01e4160  std 28, 128(1)
  01e4164  std 27, 120(1)
  01e4168  cmpwi 7, 4, -1
  01e416c  bt 1, 0x1e4178
  01e4170  bf 29, 0x1e43b4
  01e4174  b 0x1e4184
  01e4178  bf 25, 0x1e4274
  01e417c  bf 5, 0x1e42f0
  01e4180  b 0x1e43b4
  01e4184  lis 3, 30
  01e4188  lfs 1, 24(31)
  01e418c  addi 29, 3, 16672
  01e4190  li 3, 1159
  01e4194  lfs 2, 0(29)
  01e4198  lfs 3, 12(30)
  01e419c  fmadds 1, 3, 2, 1
  01e41a0  stfs 1, 24(31)
  01e41a4  bl 0xefa28
  01e41a8  nop
  01e41ac  ori 28, 3, 0
  01e41b0  li 3, 64
  01e41b4  li 27, 1
  01e41b8  sth 3, 50(28)
  01e41bc  stb 27, 49(28)
  01e41c0  ld 3, 56(31)
  01e41c4  std 3, 56(28)
  01e41c8  lhz 3, 52(31)
  01e41cc  sth 3, 52(28)
  01e41d0  lfs 1, 16(31)
  01e41d4  stfs 1, 16(28)
  01e41d8  lfs 1, 20(31)
  01e41dc  stfs 1, 20(28)
  01e41e0  lfs 1, 24(31)
  01e41e4  stfs 1, 24(28)
  01e41e8  lfs 1, 28(31)
  01e41ec  stfs 1, 28(28)
  01e41f0  lfs 1, 64(31)
  01e41f4  stfs 1, 64(28)
  01e41f8  lfs 2, 68(31)
  01e41fc  stfs 2, 68(28)
  01e4200  lfs 2, 72(31)
  01e4204  stfs 2, 72(28)
  01e4208  lfs 2, 76(31)
  01e420c  stfs 2, 76(28)
  01e4210  lfs 2, 4(29)
  01e4214  bl 0x502578
  01e4218  nop
  01e421c  ori 3, 28, 0
  01e4220  stfs 1, 64(28)
  01e4224  bl 0xf31a8
  01e4228  nop
  01e422c  lwz 3, 120(28)
  01e4230  lwz 4, 8(30)
  01e4234  stw 4, 8(3)
  01e4238  lfs 1, 16(30)
  01e423c  stfs 1, 16(3)
  01e4240  lwz 4, 20(30)
  01e4244  stw 4, 20(3)
  01e4248  lwz 3, 36(31)
  01e424c  lfs 1, 12(30)
  01e4250  lfs 2, 36(3)
  01e4254  fmuls 1, 2, 1
  01e4258  stfs 1, 44(31)
  01e425c  lfs 1, 12(30)
  01e4260  stb 27, 32(28)
  01e4264  fmuls 1, 2, 1
  01e4268  stfs 1, 44(28)
  01e426c  stb 27, 32(31)
  01e4270  b 0x1e43b4
  01e4274  lis 3, 164
  01e4278  lwz 4, 8(30)
  01e427c  slwi 4, 4, 8
  01e4280  lwz 3, -28512(3)
  01e4284  addc 3, 3, 4
  01e4288  clrldi 3, 3, 32
  01e428c  lhz 4, 166(3)
  01e4290  cmpwi 4, 615
  01e4294  cmpwi 1, 4, 830
  01e4298  bf 2, 0x1e42a8
  01e429c  lbz 4, 32(3)
  01e42a0  cmpwi 4, 4
  01e42a4  bt 2, 0x1e42b8
  01e42a8  bf 6, 0x1e43b4
  01e42ac  lbz 3, 188(3)
  01e42b0  cmpwi 3, 0
  01e42b4  bt 2, 0x1e43b4
  01e42b8  li 4, 2
  01e42bc  lis 3, 151
  01e42c0  li 6, 1
  01e42c4  addic 7, 3, -16313
  01e42c8  stb 4, 32(31)
  01e42cc  lwz 4, 20(30)
  01e42d0  li 3, 0
  01e42d4  ori 5, 31, 0
  01e42d8  extsw 8, 4
  01e42dc  li 4, 0
  01e42e0  stbx 6, 7, 8
  01e42e4  bl 0x15d12c
  01e42e8  nop
  01e42ec  b 0x1e43b4
  01e42f0  lis 3, 30
  01e42f4  lis 4, 114
  01e42f8  lfs 1, 16(30)
  01e42fc  addi 29, 3, 16672
  01e4300  lis 6, 114
  01e4304  addic 5, 30, 4
  01e4308  ori 3, 30, 0
  01e430c  lfs 3, -3048(4)
  01e4310  lfs 5, 8(29)
  01e4314  lfs 4, -3052(6)
  01e4318  fmr 2, 3
  01e431c  fmuls 4, 4, 5
  01e4320  bl 0x109c30
  01e4324  nop
  01e4328  lfs 1, 212(31)
  01e432c  lfs 2, 208(31)
  01e4330  fmuls 3, 1, 1
  01e4334  lfs 4, 216(31)
  01e4338  lfs 5, 4(30)
  01e433c  fneg 5, 5
  01e4340  lfs 6, 12(29)
  01e4344  fmadds 3, 2, 2, 3
  01e4348  lfs 7, 16(31)
  01e434c  lfs 8, 20(31)
  01e4350  lfs 9, 24(31)
  01e4354  fmadds 3, 4, 4, 3
  01e4358  fsqrts 3, 3
  01e435c  fdivs 5, 5, 3
  01e4360  fsub 10, 6, 3
  01e4364  fsub 11, 6, 3
  01e4368  fsub 12, 6, 3
  01e436c  fsub 13, 3, 6
  01e4370  fsub 0, 3, 6
  01e4374  fsub 3, 3, 6
  01e4378  fmuls 4, 4, 5
  01e437c  fmuls 1, 1, 5
  01e4380  fmuls 2, 2, 5
  01e4384  fsel 5, 10, 6, 4
  01e4388  fsel 10, 11, 6, 1
  01e438c  fsel 6, 12, 6, 2
  01e4390  fsel 4, 13, 5, 4
  01e4394  fsel 1, 0, 10, 1
  01e4398  fsel 2, 3, 6, 2
  01e439c  fadds 3, 9, 4
  01e43a0  fadds 1, 8, 1
  01e43a4  fadds 2, 7, 2
  01e43a8  stfs 3, 24(31)
  01e43ac  stfs 1, 20(31)
  01e43b0  stfs 2, 16(31)
  01e43b4  ld 0, 176(1)
  01e43b8  mtlr 0
  01e43bc  ld 27, 120(1)
  01e43c0  ld 28, 128(1)
  01e43c4  ld 29, 136(1)
  01e43c8  ld 30, 144(1)
  01e43cc  ld 31, 152(1)
  01e43d0  addi 1, 1, 160
  01e43d4  blr
