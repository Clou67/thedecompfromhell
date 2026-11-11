# game/update/moby895.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M895_004a4134:   # 0x4a4134, 0x14 bytes
  04a4134  lis 3, 141
  04a4138  lis 4, 1
  04a413c  addic 3, 3, -16052
  04a4140  stw 4, 72(3)
  04a4144  blr

UpdateMoby_895:   # 0x4a4158, 0x188 bytes
  04a4158  stdu 1, -128(1)
  04a415c  mflr 0
  04a4160  std 0, 144(1)
  04a4164  std 30, 112(1)
  04a4168  lbz 4, 32(3)
  04a416c  std 31, 120(1)
  04a4170  lwz 30, 120(3)
  04a4174  ori 31, 3, 0
  04a4178  cmpwi 4, 0
  04a417c  lfs 1, 72(3)
  04a4180  cmpwi 1, 4, 2
  04a4184  cmpwi 6, 4, 1
  04a4188  cmpwi 7, 4, -1
  04a418c  bt 1, 0x4a4198
  04a4190  bf 29, 0x4a42c8
  04a4194  b 0x4a41a4
  04a4198  bf 25, 0x4a4210
  04a419c  bf 5, 0x4a4254
  04a41a0  b 0x4a42c8
  04a41a4  lwz 3, 0(30)
  04a41a8  cmpwi 3, 0
  04a41ac  bt 2, 0x4a41c4
  04a41b0  lis 3, 0
  04a41b4  lhz 4, 52(31)
  04a41b8  ori 3, 3, 32768
  04a41bc  or 3, 4, 3
  04a41c0  sth 3, 52(31)
  04a41c4  li 3, 1
  04a41c8  lis 4, 74
  04a41cc  addi 4, 4, 16712
  04a41d0  stb 3, 32(31)
  04a41d4  stfs 1, 12(30)
  04a41d8  lwz 3, 0(30)
  04a41dc  cmpwi 3, 0
  04a41e0  lfs 1, 0(4)
  04a41e4  bt 2, 0x4a41fc
  04a41e8  fmr 2, 1
  04a41ec  lfs 1, 72(31)
  04a41f0  bl 0x5025e0
  04a41f4  nop
  04a41f8  b 0x4a420c
  04a41fc  fmr 2, 1
  04a4200  lfs 1, 72(31)
  04a4204  bl 0x502578
  04a4208  nop
  04a420c  stfs 1, 72(31)
  04a4210  lis 3, 164
  04a4214  lwz 4, 8(30)
  04a4218  slwi 4, 4, 8
  04a421c  lwz 3, -28512(3)
  04a4220  addc 3, 3, 4
  04a4224  clrldi 3, 3, 32
  04a4228  lbz 3, 188(3)
  04a422c  cmpwi 3, 0
  04a4230  bt 2, 0x4a42c8
  04a4234  li 3, 0
  04a4238  li 4, 0
  04a423c  ori 5, 31, 0
  04a4240  bl 0x15d12c
  04a4244  nop
  04a4248  li 3, 2
  04a424c  stb 3, 32(31)
  04a4250  b 0x4a42c8
  04a4254  lis 3, 74
  04a4258  lwz 4, 0(30)
  04a425c  addi 3, 3, 16712
  04a4260  cmpwi 4, 0
  04a4264  lfs 1, 4(3)
  04a4268  bt 2, 0x4a4280
  04a426c  fmr 2, 1
  04a4270  lfs 1, 12(30)
  04a4274  bl 0x5025e0
  04a4278  nop
  04a427c  b 0x4a4290
  04a4280  fmr 2, 1
  04a4284  lfs 1, 12(30)
  04a4288  bl 0x502578
  04a428c  nop
  04a4290  lis 3, 74
  04a4294  lis 4, 114
  04a4298  addi 3, 3, 16712
  04a429c  lis 6, 114
  04a42a0  addic 5, 30, 4
  04a42a4  lfs 4, 8(3)
  04a42a8  lfs 3, -3048(4)
  04a42ac  addic 3, 31, 72
  04a42b0  lfs 5, -3052(6)
  04a42b4  fmuls 2, 3, 4
  04a42b8  fmuls 4, 5, 4
  04a42bc  fmr 3, 2
  04a42c0  bl 0x10a2e0
  04a42c4  nop
  04a42c8  ld 0, 144(1)
  04a42cc  mtlr 0
  04a42d0  ld 30, 112(1)
  04a42d4  ld 31, 120(1)
  04a42d8  addi 1, 1, 128
  04a42dc  blr
