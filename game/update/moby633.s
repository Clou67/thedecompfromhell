# game/update/moby633.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_633:   # 0x3f3e00, 0x1cf8 bytes
  03f3e00  stdu 1, -512(1)
  03f3e04  mflr 0
  03f3e08  std 0, 528(1)
  03f3e0c  stfd 28, 480(1)
  03f3e10  stfd 29, 488(1)
  03f3e14  stfd 30, 496(1)
  03f3e18  stfd 31, 504(1)
  03f3e1c  std 31, 472(1)
  03f3e20  ori 31, 3, 0
  03f3e24  lbz 3, 32(31)
  03f3e28  cmpwi 3, 5
  03f3e2c  cmpwi 1, 3, 4
  03f3e30  cmpwi 6, 3, 3
  03f3e34  std 30, 464(1)
  03f3e38  std 29, 456(1)
  03f3e3c  std 28, 448(1)
  03f3e40  std 27, 440(1)
  03f3e44  std 26, 432(1)
  03f3e48  std 25, 424(1)
  03f3e4c  cmpwi 7, 3, 2
  03f3e50  bt 2, 0x3f5720
  03f3e54  bt 6, 0x3f50b4
  03f3e58  bt 26, 0x3f486c
  03f3e5c  bt 30, 0x3f4570
  03f3e60  cmpwi 3, 1
  03f3e64  bt 2, 0x3f4154
  03f3e68  cmpwi 3, 0
  03f3e6c  bf 2, 0x3f5abc
  03f3e70  lhz 3, 166(31)
  03f3e74  lwz 29, 120(31)
  03f3e78  extsh 3, 3
  03f3e7c  cmpwi 3, 987
  03f3e80  cmpwi 1, 3, 633
  03f3e84  cmpwi 6, 3, 988
  03f3e88  cmpwi 7, 3, 989
  03f3e8c  bt 1, 0x3f3e98
  03f3e90  bt 6, 0x3f3ea4
  03f3e94  b 0x3f3ef4
  03f3e98  bf 25, 0x3f3ec0
  03f3e9c  bf 29, 0x3f3edc
  03f3ea0  b 0x3f3ef4
  03f3ea4  lis 3, 133
  03f3ea8  lwz 4, 36(31)
  03f3eac  lfs 1, 17544(3)
  03f3eb0  lfs 2, 36(4)
  03f3eb4  fmuls 1, 2, 1
  03f3eb8  stfs 1, 44(31)
  03f3ebc  b 0x3f3ef4
  03f3ec0  lis 3, 133
  03f3ec4  lwz 4, 36(31)
  03f3ec8  lfs 1, 17548(3)
  03f3ecc  lfs 2, 36(4)
  03f3ed0  fmuls 1, 2, 1
  03f3ed4  stfs 1, 44(31)
  03f3ed8  b 0x3f3ef4
  03f3edc  lis 3, 133
  03f3ee0  lwz 4, 36(31)
  03f3ee4  lfs 1, 17552(3)
  03f3ee8  lfs 2, 36(4)
  03f3eec  fmuls 1, 2, 1
  03f3ef0  stfs 1, 44(31)
  03f3ef4  lis 3, 269
  03f3ef8  lis 4, 161
  03f3efc  li 30, 0
  03f3f00  ori 28, 30, 0
  03f3f04  lwz 5, -17452(3)
  03f3f08  lwz 4, 1808(4)
  03f3f0c  extsw 6, 5
  03f3f10  lhz 8, 52(31)
  03f3f14  subc 7, 4, 5
  03f3f18  lfs 1, 16(31)
  03f3f1c  extsw 4, 4
  03f3f20  rlwimi 8, 28, 0, 23, 23
  03f3f24  subc 4, 4, 6
  03f3f28  sradi 4, 4, 63
  03f3f2c  sth 8, 52(31)
  03f3f30  and 4, 4, 7
  03f3f34  addc 4, 5, 4
  03f3f38  stw 4, -17452(3)
  03f3f3c  stfs 1, 0(29)
  03f3f40  lfs 1, 20(31)
  03f3f44  lhz 3, 110(29)
  03f3f48  stfs 1, 4(29)
  03f3f4c  lfs 1, 24(31)
  03f3f50  cmpwi 3, 0
  03f3f54  stfs 1, 8(29)
  03f3f58  lfs 1, 28(31)
  03f3f5c  stfs 1, 12(29)
  03f3f60  bf 2, 0x3f4088
  03f3f64  lis 3, 63
  03f3f68  addic 27, 1, 144
  03f3f6c  addi 26, 3, 15704
  03f3f70  ori 3, 27, 0
  03f3f74  addic 4, 31, 224
  03f3f78  lfs 1, 0(26)
  03f3f7c  bl 0x5e7f98
  03f3f80  nop
  03f3f84  lfs 1, 144(1)
  03f3f88  lfs 2, 16(31)
  03f3f8c  lfs 3, 148(1)
  03f3f90  lfs 4, 20(31)
  03f3f94  lfs 5, 152(1)
  03f3f98  fadds 1, 1, 2
  03f3f9c  lfs 6, 24(31)
  03f3fa0  fadds 3, 3, 4
  03f3fa4  lfs 7, 224(31)
  03f3fa8  ori 3, 27, 0
  03f3fac  fadds 5, 5, 6
  03f3fb0  lfs 8, 228(31)
  03f3fb4  lfs 9, 232(31)
  03f3fb8  addic 4, 1, 160
  03f3fbc  li 5, 2
  03f3fc0  li 6, 0
  03f3fc4  li 7, 0
  03f3fc8  stfs 1, 144(1)
  03f3fcc  stfs 3, 148(1)
  03f3fd0  stfs 5, 152(1)
  03f3fd4  lfs 1, 4(26)
  03f3fd8  lfs 3, 236(31)
  03f3fdc  fmadds 2, 7, 1, 2
  03f3fe0  stfs 3, 172(1)
  03f3fe4  fmadds 3, 8, 1, 4
  03f3fe8  fmadds 1, 9, 1, 6
  03f3fec  stfs 2, 160(1)
  03f3ff0  stfs 3, 164(1)
  03f3ff4  stfs 1, 168(1)
  03f3ff8  bl 0x57820
  03f3ffc  nop
  03f4000  cmpwi 3, 0
  03f4004  bt 2, 0x3f4054
  03f4008  lis 3, 161
  03f400c  addic 5, 3, 2368
  03f4010  lis 3, 63
  03f4014  addic 4, 5, 64
  03f4018  addi 6, 3, 15704
  03f401c  addic 3, 1, 128
  03f4020  lfs 1, 32(5)
  03f4024  stfs 1, 0(29)
  03f4028  lfs 1, 36(5)
  03f402c  stfs 1, 4(29)
  03f4030  lfs 1, 40(5)
  03f4034  stfs 1, 8(29)
  03f4038  lfs 1, 44(5)
  03f403c  stfs 1, 12(29)
  03f4040  lwz 30, 24(5)
  03f4044  lfs 1, 8(6)
  03f4048  bl 0x5e7f98
  03f404c  nop
  03f4050  b 0x3f4088
  03f4054  lfs 1, 16(31)
  03f4058  lis 3, 16256
  03f405c  stfs 1, 0(29)
  03f4060  lfs 1, 20(31)
  03f4064  stfs 1, 4(29)
  03f4068  lfs 1, 24(31)
  03f406c  stfs 1, 8(29)
  03f4070  lfs 1, 28(31)
  03f4074  stfs 1, 12(29)
  03f4078  stw 30, 140(1)
  03f407c  stw 30, 132(1)
  03f4080  stw 30, 128(1)
  03f4084  stw 3, 136(1)
  03f4088  addic 4, 1, 128
  03f408c  ori 3, 31, 0
  03f4090  bl 0x3f3c7c
  03f4094  bl 0xfcc68
  03f4098  nop
  03f409c  stfs 1, 96(29)
  03f40a0  lfs 1, 64(31)
  03f40a4  addic 4, 31, 16
  03f40a8  addic 5, 31, 64
  03f40ac  ori 3, 31, 0
  03f40b0  stfs 1, 100(29)
  03f40b4  bl 0x3f3388
  03f40b8  cmpwi 30, 0
  03f40bc  bt 2, 0x3f40f8
  03f40c0  ori 3, 30, 0
  03f40c4  bl 0x1122ac
  03f40c8  nop
  03f40cc  cmpwi 3, 0
  03f40d0  bt 2, 0x3f40f8
  03f40d4  addic 6, 29, 16
  03f40d8  stw 30, 124(29)
  03f40dc  ori 5, 29, 0
  03f40e0  addic 7, 29, 32
  03f40e4  addic 8, 29, 48
  03f40e8  ori 3, 31, 0
  03f40ec  ori 4, 30, 0
  03f40f0  bl 0x1124c0
  03f40f4  nop
  03f40f8  li 3, 1
  03f40fc  lis 4, 63
  03f4100  addi 4, 4, 15704
  03f4104  stb 3, 32(31)
  03f4108  lis 3, 114
  03f410c  sth 28, 108(29)
  03f4110  lfs 1, 16(4)
  03f4114  lfs 2, -3056(3)
  03f4118  lfs 3, 12(4)
  03f411c  fmuls 2, 2, 1
  03f4120  fmr 1, 3
  03f4124  fctidz 2, 2
  03f4128  fcfid 2, 2
  03f412c  frsp 2, 2
  03f4130  bl 0xfcbe8
  03f4134  nop
  03f4138  bl 0x502758
  03f413c  nop
  03f4140  stw 3, 112(29)
  03f4144  lis 3, 133
  03f4148  lwz 3, 17564(3)
  03f414c  stw 3, 120(29)
  03f4150  b 0x3f5abc
  03f4154  lwz 30, 120(31)
  03f4158  lwz 3, 124(30)
  03f415c  cmpwi 3, 0
  03f4160  bt 2, 0x3f41ec
  03f4164  ori 4, 3, 0
  03f4168  ori 3, 31, 0
  03f416c  addic 5, 30, 32
  03f4170  ori 7, 30, 0
  03f4174  addic 6, 30, 48
  03f4178  addic 8, 30, 16
  03f417c  bl 0x112678
  03f4180  nop
  03f4184  lwz 3, 124(30)
  03f4188  lbz 3, 32(3)
  03f418c  cmpwi 3, 127
  03f4190  bf 1, 0x3f41ec
  03f4194  lwz 6, 120(31)
  03f4198  li 3, 0
  03f419c  lis 4, 63
  03f41a0  lis 5, 133
  03f41a4  addi 4, 4, 15704
  03f41a8  lis 7, 114
  03f41ac  stw 3, 76(6)
  03f41b0  stw 3, 72(6)
  03f41b4  stw 3, 68(6)
  03f41b8  stw 3, 64(6)
  03f41bc  lfs 1, 20(4)
  03f41c0  ori 3, 6, 0
  03f41c4  lfs 2, 17516(5)
  03f41c8  addic 4, 31, 208
  03f41cc  lfs 3, -3052(7)
  03f41d0  fmuls 1, 2, 1
  03f41d4  fmuls 1, 1, 3
  03f41d8  bl 0x110e18
  03f41dc  nop
  03f41e0  li 3, 4
  03f41e4  stb 3, 32(31)
  03f41e8  b 0x3f5abc
  03f41ec  lis 3, 151
  03f41f0  lfs 1, 24(31)
  03f41f4  addic 3, 3, -25376
  03f41f8  lfs 2, 136(3)
  03f41fc  fsubs 1, 1, 2
  03f4200  lfs 2, 8840(3)
  03f4204  fabs 1, 1
  03f4208  fcmpu 0, 1, 2
  03f420c  cror 6, 1, 2
  03f4210  bt 6, 0x3f428c
  03f4214  lfs 1, 20(31)
  03f4218  lfs 2, 132(3)
  03f421c  lfs 3, 16(31)
  03f4220  fsubs 1, 1, 2
  03f4224  lfs 2, 128(3)
  03f4228  fsubs 2, 3, 2
  03f422c  fmuls 1, 1, 1
  03f4230  fmadds 1, 2, 2, 1
  03f4234  lfs 2, 8844(3)
  03f4238  fsqrts 1, 1
  03f423c  fcmpu 0, 1, 2
  03f4240  cror 6, 1, 2
  03f4244  bt 6, 0x3f428c
  03f4248  lis 4, 63
  03f424c  li 5, 24
  03f4250  vspltisw 2, -1
  03f4254  addi 4, 4, 15704
  03f4258  lis 6, 114
  03f425c  li 7, -3056
  03f4260  vslw 2, 2, 2
  03f4264  <unknown>
  03f4268  li 4, 104
  03f426c  vspltw 3, 3, 0
  03f4270  li 5, 2
  03f4274  <unknown>
  03f4278  vmaddfp 2, 4, 3, 2
  03f427c  vctsxs 2, 2, 0
  03f4280  vspltw 2, 2, 0
  03f4284  stvewx 2, 4, 30
  03f4288  stb 5, 32(31)
  03f428c  lbz 4, 49(31)
  03f4290  cmpwi 4, 0
  03f4294  bf 2, 0x3f42f4
  03f4298  lis 4, 164
  03f429c  lwz 4, -28508(4)
  03f42a0  cmplw 31, 4
  03f42a4  bf 1, 0x3f5abc
  03f42a8  lfs 1, 20(31)
  03f42ac  lfs 2, 132(3)
  03f42b0  lfs 3, 16(31)
  03f42b4  fsubs 1, 1, 2
  03f42b8  lfs 2, 128(3)
  03f42bc  fsubs 2, 3, 2
  03f42c0  lis 3, 63
  03f42c4  addi 3, 3, 15704
  03f42c8  fmuls 1, 1, 1
  03f42cc  fmadds 1, 2, 2, 1
  03f42d0  lfs 2, 28(3)
  03f42d4  fsqrts 1, 1
  03f42d8  fcmpu 0, 1, 2
  03f42dc  cror 6, 0, 2
  03f42e0  bt 6, 0x3f5abc
  03f42e4  ori 3, 31, 0
  03f42e8  bl 0xefb38
  03f42ec  nop
  03f42f0  b 0x3f5abc
  03f42f4  lhz 3, 166(31)
  03f42f8  extsh 3, 3
  03f42fc  cmpwi 3, 988
  03f4300  cmpwi 1, 3, 987
  03f4304  cmpwi 6, 3, 989
  03f4308  bt 1, 0x3f4314
  03f430c  bf 5, 0x3f43d0
  03f4310  b 0x3f4374
  03f4314  bt 25, 0x3f43d0
  03f4318  lis 3, 63
  03f431c  lis 4, 133
  03f4320  addi 3, 3, 15704
  03f4324  lis 29, 114
  03f4328  lfs 31, 20(3)
  03f432c  lfs 2, 17536(4)
  03f4330  lfs 1, 96(30)
  03f4334  fmuls 2, 2, 31
  03f4338  lfs 3, -3052(29)
  03f433c  fmuls 2, 2, 3
  03f4340  bl 0x502578
  03f4344  nop
  03f4348  lis 3, 133
  03f434c  stfs 1, 96(30)
  03f4350  lfs 1, 100(30)
  03f4354  lfs 2, -3052(29)
  03f4358  lfs 3, 17540(3)
  03f435c  fmuls 3, 3, 31
  03f4360  fmuls 2, 3, 2
  03f4364  bl 0x502578
  03f4368  nop
  03f436c  stfs 1, 100(30)
  03f4370  b 0x3f4428
  03f4374  lis 3, 63
  03f4378  lis 4, 133
  03f437c  addi 3, 3, 15704
  03f4380  lis 29, 114
  03f4384  lfs 31, 20(3)
  03f4388  lfs 2, 17528(4)
  03f438c  lfs 1, 96(30)
  03f4390  fmuls 2, 2, 31
  03f4394  lfs 3, -3052(29)
  03f4398  fmuls 2, 2, 3
  03f439c  bl 0x502578
  03f43a0  nop
  03f43a4  lis 3, 133
  03f43a8  stfs 1, 96(30)
  03f43ac  lfs 1, 100(30)
  03f43b0  lfs 2, -3052(29)
  03f43b4  lfs 3, 17532(3)
  03f43b8  fmuls 3, 3, 31
  03f43bc  fmuls 2, 3, 2
  03f43c0  bl 0x502578
  03f43c4  nop
  03f43c8  stfs 1, 100(30)
  03f43cc  b 0x3f4428
  03f43d0  lis 3, 63
  03f43d4  lis 4, 133
  03f43d8  addi 3, 3, 15704
  03f43dc  lis 29, 114
  03f43e0  lfs 31, 20(3)
  03f43e4  lfs 2, 17520(4)
  03f43e8  lfs 1, 96(30)
  03f43ec  fmuls 2, 2, 31
  03f43f0  lfs 3, -3052(29)
  03f43f4  fmuls 2, 2, 3
  03f43f8  bl 0x502578
  03f43fc  nop
  03f4400  lis 3, 133
  03f4404  stfs 1, 96(30)
  03f4408  lfs 1, 100(30)
  03f440c  lfs 2, -3052(29)
  03f4410  lfs 3, 17524(3)
  03f4414  fmuls 3, 3, 31
  03f4418  fmuls 2, 3, 2
  03f441c  bl 0x502578
  03f4420  nop
  03f4424  stfs 1, 100(30)
  03f4428  ori 3, 31, 0
  03f442c  addic 4, 31, 16
  03f4430  addic 5, 31, 64
  03f4434  bl 0x3f3388
  03f4438  lhz 3, 108(30)
  03f443c  cmpwi 3, 0
  03f4440  bt 2, 0x3f453c
  03f4444  lis 3, 63
  03f4448  lis 4, 114
  03f444c  lfs 1, 116(30)
  03f4450  addi 3, 3, 15704
  03f4454  lfs 2, 32(3)
  03f4458  lfs 3, -3052(4)
  03f445c  fmuls 2, 3, 2
  03f4460  bl 0x502578
  03f4464  nop
  03f4468  lwz 3, 112(30)
  03f446c  stfs 1, 116(30)
  03f4470  cmpwi 3, 12
  03f4474  bf 1, 0x3f4488
  03f4478  lis 3, 1280
  03f447c  lwz 4, 120(30)
  03f4480  addc 3, 4, 3
  03f4484  b 0x3f4494
  03f4488  lis 3, 1280
  03f448c  lwz 4, 120(30)
  03f4490  subc 3, 4, 3
  03f4494  ori 4, 3, 0
  03f4498  addic 3, 30, 112
  03f449c  stw 4, 120(30)
  03f44a0  bl 0x4fff60
  03f44a4  nop
  03f44a8  cmpwi 3, 0
  03f44ac  bt 2, 0x3f4508
  03f44b0  lis 3, 63
  03f44b4  li 4, 0
  03f44b8  addi 3, 3, 15704
  03f44bc  lis 5, 114
  03f44c0  sth 4, 108(30)
  03f44c4  lfs 1, 36(3)
  03f44c8  lfs 2, 16(3)
  03f44cc  lfs 3, -3056(5)
  03f44d0  fmuls 1, 3, 1
  03f44d4  fmuls 2, 3, 2
  03f44d8  fctidz 1, 1
  03f44dc  fctidz 2, 2
  03f44e0  fcfid 1, 1
  03f44e4  fcfid 2, 2
  03f44e8  frsp 1, 1
  03f44ec  frsp 2, 2
  03f44f0  bl 0xfcbe8
  03f44f4  nop
  03f44f8  bl 0x502758
  03f44fc  nop
  03f4500  stw 3, 112(30)
  03f4504  b 0x3f5abc
  03f4508  lbz 3, 49(31)
  03f450c  cmpwi 3, 0
  03f4510  bt 2, 0x3f5abc
  03f4514  lis 3, 133
  03f4518  lwz 3, 17560(3)
  03f451c  cmpwi 3, 0
  03f4520  bt 2, 0x3f5abc
  03f4524  lis 3, 113
  03f4528  ori 4, 31, 0
  03f452c  addic 3, 3, -9112
  03f4530  bl 0x6d720
  03f4534  nop
  03f4538  b 0x3f5abc
  03f453c  addic 3, 30, 112
  03f4540  bl 0x4fff60
  03f4544  nop
  03f4548  cmpwi 3, 0
  03f454c  bt 2, 0x3f5abc
  03f4550  li 3, 24
  03f4554  stw 3, 112(30)
  03f4558  bl 0xfcc68
  03f455c  nop
  03f4560  li 3, 1
  03f4564  stfs 1, 116(30)
  03f4568  sth 3, 108(30)
  03f456c  b 0x3f5abc
  03f4570  lwz 30, 120(31)
  03f4574  addic 3, 1, 336
  03f4578  addic 4, 30, 16
  03f457c  bl 0x500ca4
  03f4580  nop
  03f4584  lfs 1, 368(1)
  03f4588  lfs 2, 372(1)
  03f458c  addic 3, 30, 104
  03f4590  stfs 1, 176(1)
  03f4594  lfs 1, 376(1)
  03f4598  stfs 2, 180(1)
  03f459c  lfs 2, 380(1)
  03f45a0  stfs 1, 184(1)
  03f45a4  stfs 2, 188(1)
  03f45a8  bl 0x4fff60
  03f45ac  nop
  03f45b0  cmpwi 3, 0
  03f45b4  bt 2, 0x3f473c
  03f45b8  lis 3, 151
  03f45bc  lfs 1, 16(31)
  03f45c0  lfs 2, 20(31)
  03f45c4  addic 27, 1, 192
  03f45c8  addic 29, 3, -25376
  03f45cc  lis 3, 63
  03f45d0  ori 4, 27, 0
  03f45d4  addi 28, 3, 15704
  03f45d8  ori 3, 27, 0
  03f45dc  lfs 3, 128(29)
  03f45e0  lfs 4, 132(29)
  03f45e4  fsubs 1, 1, 3
  03f45e8  lfs 3, 24(31)
  03f45ec  fsubs 2, 2, 4
  03f45f0  lfs 4, 136(29)
  03f45f4  lwz 30, 120(31)
  03f45f8  fsubs 3, 3, 4
  03f45fc  lfs 4, 28(31)
  03f4600  stfs 4, 204(1)
  03f4604  stfs 1, 192(1)
  03f4608  stfs 2, 196(1)
  03f460c  stfs 3, 200(1)
  03f4610  lfs 1, 8(28)
  03f4614  bl 0x5e7f98
  03f4618  nop
  03f461c  addic 26, 1, 176
  03f4620  ori 3, 27, 0
  03f4624  ori 4, 26, 0
  03f4628  ori 5, 27, 0
  03f462c  bl 0x5e8f4c
  03f4630  nop
  03f4634  lis 3, 133
  03f4638  lfs 31, 20(28)
  03f463c  lis 25, 114
  03f4640  ori 4, 27, 0
  03f4644  lfs 1, 17512(3)
  03f4648  lfs 2, -3052(25)
  03f464c  ori 3, 30, 0
  03f4650  fmuls 1, 1, 31
  03f4654  fmuls 1, 1, 2
  03f4658  bl 0x110e18
  03f465c  nop
  03f4660  lhz 3, 52(31)
  03f4664  lfs 1, -3052(25)
  03f4668  ori 4, 3, 256
  03f466c  addic 3, 30, 64
  03f4670  sth 4, 52(31)
  03f4674  lfs 2, 40(28)
  03f4678  ori 4, 26, 0
  03f467c  fmr 30, 2
  03f4680  fmuls 1, 1, 30
  03f4684  bl 0x5e7f98
  03f4688  nop
  03f468c  lfs 1, -3052(25)
  03f4690  li 3, 0
  03f4694  fmuls 1, 1, 30
  03f4698  lis 4, 16128
  03f469c  lis 5, 114
  03f46a0  lis 6, 161
  03f46a4  lis 7, 269
  03f46a8  stfs 1, 112(30)
  03f46ac  lfs 30, 12(28)
  03f46b0  stw 3, 116(30)
  03f46b4  lwz 3, 8320(29)
  03f46b8  stw 4, 124(30)
  03f46bc  stw 3, 120(30)
  03f46c0  lfs 1, 44(28)
  03f46c4  lfs 2, -3056(5)
  03f46c8  lwz 3, 1808(6)
  03f46cc  fmuls 1, 2, 1
  03f46d0  lwz 4, -17452(7)
  03f46d4  fctiwz 1, 1
  03f46d8  stfd 1, 400(1)
  03f46dc  lwz 5, 404(1)
  03f46e0  addc 4, 4, 5
  03f46e4  cmpw 3, 4
  03f46e8  bf 1, 0x3f4710
  03f46ec  lis 7, 269
  03f46f0  ori 6, 3, 0
  03f46f4  li 3, 0
  03f46f8  li 4, 32
  03f46fc  ori 5, 31, 0
  03f4700  stw 6, -17452(7)
  03f4704  bl 0x15d12c
  03f4708  nop
  03f470c  b 0x3f472c
  03f4710  lis 3, 63
  03f4714  addi 3, 3, 15704
  03f4718  lfs 1, 48(3)
  03f471c  lfs 2, 52(3)
  03f4720  bl 0xfcbe8
  03f4724  nop
  03f4728  fmuls 30, 1, 31
  03f472c  li 3, 3
  03f4730  stfs 30, 100(30)
  03f4734  stb 3, 32(31)
  03f4738  b 0x3f5abc
  03f473c  lis 3, 63
  03f4740  lis 4, 114
  03f4744  addi 3, 3, 15704
  03f4748  lfs 1, 56(3)
  03f474c  lfs 2, -3056(4)
  03f4750  lwz 3, 104(30)
  03f4754  fmuls 1, 2, 1
  03f4758  fctiwz 1, 1
  03f475c  stfd 1, 400(1)
  03f4760  lwz 4, 404(1)
  03f4764  cmpw 3, 4
  03f4768  bf 1, 0x3f47dc
  03f476c  srawi 4, 3, 3
  03f4770  addze 4, 4
  03f4774  sldi 4, 4, 3
  03f4778  subc 3, 3, 4
  03f477c  lis 4, 63
  03f4780  addic 3, 3, -4
  03f4784  addi 29, 4, 15704
  03f4788  extsw 3, 3
  03f478c  std 3, 400(1)
  03f4790  lfs 1, 60(29)
  03f4794  lfd 2, 400(1)
  03f4798  fcfid 2, 2
  03f479c  frsp 2, 2
  03f47a0  fmuls 1, 2, 1
  03f47a4  bl 0x5e8128
  03f47a8  nop
  03f47ac  lfs 2, 64(29)
  03f47b0  lfs 3, 96(30)
  03f47b4  fmuls 2, 1, 2
  03f47b8  fmr 1, 3
  03f47bc  bl 0x502578
  03f47c0  nop
  03f47c4  addic 3, 30, 96
  03f47c8  lfs 2, 68(29)
  03f47cc  li 6, 0
  03f47d0  bl 0x109ec0
  03f47d4  nop
  03f47d8  b 0x3f4858
  03f47dc  lis 3, 151
  03f47e0  lfs 1, 16(31)
  03f47e4  addic 3, 3, -25376
  03f47e8  lfs 2, 20(31)
  03f47ec  lfs 3, 128(3)
  03f47f0  lfs 4, 132(3)
  03f47f4  fsubs 1, 3, 1
  03f47f8  fsubs 2, 4, 2
  03f47fc  bl 0x5e8338
  03f4800  nop
  03f4804  lis 3, 63
  03f4808  addi 29, 3, 15704
  03f480c  lfs 2, 72(29)
  03f4810  bl 0x502578
  03f4814  nop
  03f4818  fmr 31, 1
  03f481c  lfs 30, 76(29)
  03f4820  addic 3, 30, 96
  03f4824  li 6, 0
  03f4828  fmr 2, 30
  03f482c  bl 0x109ec0
  03f4830  nop
  03f4834  lfs 1, 96(30)
  03f4838  fmr 2, 31
  03f483c  bl 0x5026a0
  03f4840  nop
  03f4844  fcmpu 0, 1, 30
  03f4848  cror 6, 1, 2
  03f484c  bt 6, 0x3f4858
  03f4850  li 3, 0
  03f4854  stw 3, 104(30)
  03f4858  addic 4, 31, 16
  03f485c  addic 5, 31, 64
  03f4860  ori 3, 31, 0
  03f4864  bl 0x3f3388
  03f4868  b 0x3f5abc
  03f486c  lwz 30, 120(31)
  03f4870  lwz 3, 120(30)
  03f4874  cmpwi 3, 0
  03f4878  bt 2, 0x3f5abc
  03f487c  addic 5, 1, 224
  03f4880  lfs 1, 124(30)
  03f4884  addic 4, 3, 224
  03f4888  ori 3, 5, 0
  03f488c  bl 0x5e7f98
  03f4890  nop
  03f4894  lwz 3, 120(30)
  03f4898  lfs 3, 224(1)
  03f489c  lfs 4, 228(1)
  03f48a0  lis 4, 63
  03f48a4  lfs 1, 16(3)
  03f48a8  lfs 5, 232(1)
  03f48ac  fadds 3, 3, 1
  03f48b0  lfs 31, 16(31)
  03f48b4  lfs 1, 20(31)
  03f48b8  lfs 2, 24(31)
  03f48bc  addi 4, 4, 15704
  03f48c0  stfs 3, 224(1)
  03f48c4  lfs 6, 20(3)
  03f48c8  lfs 7, 236(1)
  03f48cc  fadds 4, 4, 6
  03f48d0  fsubs 6, 3, 31
  03f48d4  stfs 4, 228(1)
  03f48d8  lfs 8, 24(3)
  03f48dc  stfs 6, 208(1)
  03f48e0  fadds 5, 5, 8
  03f48e4  fsubs 8, 4, 1
  03f48e8  stfs 7, 220(1)
  03f48ec  fsubs 6, 5, 2
  03f48f0  stfs 5, 232(1)
  03f48f4  stfs 8, 212(1)
  03f48f8  stfs 6, 216(1)
  03f48fc  lwz 3, 100(30)
  03f4900  lfs 6, 100(30)
  03f4904  cmpwi 3, 0
  03f4908  lfs 30, 12(4)
  03f490c  bt 2, 0x3f4964
  03f4910  fmr 1, 6
  03f4914  bl 0x5e8128
  03f4918  nop
  03f491c  fmr 29, 1
  03f4920  lfs 1, 100(30)
  03f4924  bl 0x5e8078
  03f4928  nop
  03f492c  lfs 6, 212(1)
  03f4930  lfs 4, 208(1)
  03f4934  fmuls 5, 29, 6
  03f4938  lfs 31, 16(31)
  03f493c  lfs 2, 24(31)
  03f4940  lfs 3, 224(1)
  03f4944  fmadds 7, 1, 4, 5
  03f4948  lfs 4, 228(1)
  03f494c  lfs 5, 232(1)
  03f4950  fmuls 8, 29, 7
  03f4954  stfs 7, 208(1)
  03f4958  fmsubs 1, 1, 6, 8
  03f495c  stfs 1, 212(1)
  03f4960  lfs 1, 20(31)
  03f4964  fsubs 1, 4, 1
  03f4968  addic 3, 30, 64
  03f496c  fsubs 2, 5, 2
  03f4970  lfs 4, 112(30)
  03f4974  fsubs 3, 3, 31
  03f4978  ori 4, 3, 0
  03f497c  fmuls 5, 1, 1
  03f4980  fmr 1, 4
  03f4984  fmadds 3, 3, 3, 5
  03f4988  fmadds 31, 2, 2, 3
  03f498c  fsqrts 31, 31
  03f4990  bl 0x5e7f98
  03f4994  nop
  03f4998  lfs 1, 16(31)
  03f499c  lfs 2, 64(30)
  03f49a0  addic 3, 1, 208
  03f49a4  fadds 1, 1, 2
  03f49a8  lfs 2, 20(31)
  03f49ac  lfs 3, 24(31)
  03f49b0  ori 4, 3, 0
  03f49b4  stfs 1, 16(31)
  03f49b8  lfs 1, 68(30)
  03f49bc  fadds 1, 2, 1
  03f49c0  stfs 1, 20(31)
  03f49c4  lfs 1, 72(30)
  03f49c8  fadds 1, 3, 1
  03f49cc  stfs 1, 24(31)
  03f49d0  lfs 1, 116(30)
  03f49d4  bl 0x5e7f98
  03f49d8  nop
  03f49dc  lfs 1, 16(31)
  03f49e0  lis 29, 151
  03f49e4  lfs 2, 208(1)
  03f49e8  addic 29, 29, -25376
  03f49ec  fadds 1, 1, 2
  03f49f0  lfs 2, 20(31)
  03f49f4  lfs 3, 212(1)
  03f49f8  fadds 2, 2, 3
  03f49fc  lfs 3, 320(29)
  03f4a00  lfs 4, 24(31)
  03f4a04  lfs 5, 216(1)
  03f4a08  addic 3, 1, 240
  03f4a0c  fadds 1, 1, 3
  03f4a10  fadds 3, 4, 5
  03f4a14  lfs 4, 28(31)
  03f4a18  ori 4, 3, 0
  03f4a1c  addic 5, 29, 64
  03f4a20  stfs 1, 16(31)
  03f4a24  lfs 5, 324(29)
  03f4a28  stfs 4, 252(1)
  03f4a2c  fadds 2, 2, 5
  03f4a30  stfs 2, 20(31)
  03f4a34  lfs 4, 328(29)
  03f4a38  fadds 3, 3, 4
  03f4a3c  stfs 3, 24(31)
  03f4a40  lfs 4, 672(29)
  03f4a44  lfs 5, 676(29)
  03f4a48  fsubs 1, 1, 4
  03f4a4c  lfs 4, 680(29)
  03f4a50  fsubs 2, 2, 5
  03f4a54  fsubs 3, 3, 4
  03f4a58  stfs 1, 240(1)
  03f4a5c  stfs 2, 244(1)
  03f4a60  stfs 3, 248(1)
  03f4a64  bl 0x5e825c
  03f4a68  nop
  03f4a6c  lwz 3, 120(30)
  03f4a70  lis 4, 133
  03f4a74  lhz 3, 166(3)
  03f4a78  lfs 1, 17504(4)
  03f4a7c  cmpwi 3, 0
  03f4a80  bf 2, 0x3f4a90
  03f4a84  lwz 3, 248(1)
  03f4a88  cmpwi 3, 0
  03f4a8c  bf 1, 0x3f4ae4
  03f4a90  fmr 2, 1
  03f4a94  lis 29, 114
  03f4a98  fmr 1, 30
  03f4a9c  addic 3, 30, 112
  03f4aa0  lfs 3, -3048(29)
  03f4aa4  fmuls 2, 2, 3
  03f4aa8  bl 0x109af0
  03f4aac  nop
  03f4ab0  lis 4, 133
  03f4ab4  lis 5, 114
  03f4ab8  lfs 2, -3048(29)
  03f4abc  lis 6, 133
  03f4ac0  addic 3, 30, 116
  03f4ac4  lfs 1, 17500(4)
  03f4ac8  lfs 3, -3052(5)
  03f4acc  lfs 4, 17504(6)
  03f4ad0  fmuls 1, 1, 3
  03f4ad4  fmuls 2, 4, 2
  03f4ad8  bl 0x109af0
  03f4adc  nop
  03f4ae0  b 0x3f4b80
  03f4ae4  lfs 1, 112(30)
  03f4ae8  addic 3, 1, 256
  03f4aec  addic 4, 29, 32
  03f4af0  bl 0x5e7f98
  03f4af4  nop
  03f4af8  lfs 1, 256(1)
  03f4afc  lfs 2, 64(30)
  03f4b00  lis 4, 133
  03f4b04  lis 5, 114
  03f4b08  fsubs 1, 1, 2
  03f4b0c  lfs 2, 260(1)
  03f4b10  lfs 3, 264(1)
  03f4b14  lfs 4, 268(1)
  03f4b18  lfs 5, 17504(4)
  03f4b1c  addic 3, 1, 272
  03f4b20  stfs 1, 272(1)
  03f4b24  lfs 1, 68(30)
  03f4b28  fsubs 2, 2, 1
  03f4b2c  lfs 1, -3048(5)
  03f4b30  fmuls 1, 5, 1
  03f4b34  stfs 2, 276(1)
  03f4b38  lfs 2, 72(30)
  03f4b3c  stfs 4, 284(1)
  03f4b40  fsubs 2, 3, 2
  03f4b44  stfs 2, 280(1)
  03f4b48  bl 0x110488
  03f4b4c  nop
  03f4b50  lfs 1, 64(30)
  03f4b54  lfs 2, 272(1)
  03f4b58  fadds 1, 1, 2
  03f4b5c  lfs 2, 68(30)
  03f4b60  lfs 3, 72(30)
  03f4b64  stfs 1, 64(30)
  03f4b68  lfs 1, 276(1)
  03f4b6c  fadds 1, 2, 1
  03f4b70  stfs 1, 68(30)
  03f4b74  lfs 1, 280(1)
  03f4b78  fadds 1, 3, 1
  03f4b7c  stfs 1, 72(30)
  03f4b80  lfs 1, 116(30)
  03f4b84  fcmpu 0, 1, 31
  03f4b88  cror 6, 0, 2
  03f4b8c  bt 6, 0x3f4b98
  03f4b90  fmr 1, 31
  03f4b94  stfs 31, 116(30)
  03f4b98  lis 3, 63
  03f4b9c  lis 4, 114
  03f4ba0  addi 3, 3, 15704
  03f4ba4  lfs 2, 80(3)
  03f4ba8  lfs 3, -3056(4)
  03f4bac  fmuls 2, 3, 2
  03f4bb0  fctidz 2, 2
  03f4bb4  fcfid 2, 2
  03f4bb8  frsp 2, 2
  03f4bbc  fmuls 1, 1, 2
  03f4bc0  fcmpu 0, 1, 31
  03f4bc4  cror 6, 0, 2
  03f4bc8  bt 6, 0x3f509c
  03f4bcc  lfs 2, 228(1)
  03f4bd0  lfs 3, 20(31)
  03f4bd4  lfs 4, 224(1)
  03f4bd8  fsubs 2, 2, 3
  03f4bdc  lfs 3, 16(31)
  03f4be0  fsubs 3, 4, 3
  03f4be4  lfs 4, 232(1)
  03f4be8  lfs 5, 24(31)
  03f4bec  fsubs 4, 4, 5
  03f4bf0  fmuls 2, 2, 2
  03f4bf4  lis 3, 63
  03f4bf8  addi 3, 3, 15704
  03f4bfc  fmadds 2, 3, 3, 2
  03f4c00  lfs 3, 84(3)
  03f4c04  fmadds 2, 4, 4, 2
  03f4c08  fsqrts 2, 2
  03f4c0c  fcmpu 0, 2, 3
  03f4c10  cror 6, 0, 2
  03f4c14  bt 6, 0x3f4c94
  03f4c18  lis 3, 63
  03f4c1c  lis 4, 269
  03f4c20  fadds 2, 2, 1
  03f4c24  addi 3, 3, 15704
  03f4c28  lwz 4, -17456(4)
  03f4c2c  lfs 3, 88(3)
  03f4c30  cmpwi 4, 0
  03f4c34  fmuls 1, 1, 3
  03f4c38  bt 2, 0x3f4c60
  03f4c3c  lis 3, 63
  03f4c40  addi 3, 3, 15704
  03f4c44  lfs 3, 92(3)
  03f4c48  fmuls 3, 2, 3
  03f4c4c  fdivs 3, 3, 1
  03f4c50  fctidz 3, 3
  03f4c54  stfd 3, 400(1)
  03f4c58  lwz 3, 404(1)
  03f4c5c  stb 3, 35(31)
  03f4c60  lis 3, 133
  03f4c64  lwz 3, 17556(3)
  03f4c68  cmpwi 3, 0
  03f4c6c  bt 2, 0x3f509c
  03f4c70  lis 3, 133
  03f4c74  lwz 4, 36(31)
  03f4c78  lfs 3, 17544(3)
  03f4c7c  lfs 4, 36(4)
  03f4c80  fmuls 3, 4, 3
  03f4c84  fmuls 2, 3, 2
  03f4c88  fdivs 1, 2, 1
  03f4c8c  stfs 1, 44(31)
  03f4c90  b 0x3f509c
  03f4c94  lhz 3, 166(31)
  03f4c98  extsh 3, 3
  03f4c9c  cmpwi 3, 987
  03f4ca0  cmpwi 1, 3, 773
  03f4ca4  cmpwi 6, 3, 988
  03f4ca8  cmpwi 7, 3, 989
  03f4cac  bt 1, 0x3f4cb8
  03f4cb0  bt 6, 0x3f4cc4
  03f4cb4  b 0x3f4de8
  03f4cb8  bf 25, 0x3f4de0
  03f4cbc  bf 29, 0x3f4dd8
  03f4cc0  b 0x3f4de8
  03f4cc4  lis 3, 151
  03f4cc8  lbz 5, 188(31)
  03f4ccc  lis 30, 161
  03f4cd0  li 4, 1
  03f4cd4  addic 30, 30, -13772
  03f4cd8  lwz 3, -25488(3)
  03f4cdc  addc 5, 5, 30
  03f4ce0  slwi 3, 3, 2
  03f4ce4  clrldi 5, 5, 32
  03f4ce8  extsw 3, 3
  03f4cec  stbx 4, 5, 3
  03f4cf0  bl 0x11b1b4
  03f4cf4  nop
  03f4cf8  cmpwi 3, 40
  03f4cfc  bf 2, 0x3f4d0c
  03f4d00  li 3, 1
  03f4d04  bl 0x112dc0
  03f4d08  nop
  03f4d0c  li 4, 20
  03f4d10  ori 3, 30, 0
  03f4d14  li 30, 0
  03f4d18  mtctr 4
  03f4d1c  li 6, 0
  03f4d20  lbz 7, 0(3)
  03f4d24  addic 4, 30, 1
  03f4d28  subc 6, 6, 7
  03f4d2c  lbz 7, 1(3)
  03f4d30  li 8, 0
  03f4d34  cntlzw 6, 6
  03f4d38  subc 5, 30, 4
  03f4d3c  sldi 6, 6, 58
  03f4d40  subc 7, 8, 7
  03f4d44  sradi 6, 6, 63
  03f4d48  li 8, 0
  03f4d4c  and 5, 6, 5
  03f4d50  cntlzw 6, 7
  03f4d54  addc 4, 4, 5
  03f4d58  lbz 7, 2(3)
  03f4d5c  sldi 5, 6, 58
  03f4d60  addic 6, 4, 1
  03f4d64  sradi 5, 5, 63
  03f4d68  subc 4, 4, 6
  03f4d6c  subc 7, 8, 7
  03f4d70  and 4, 5, 4
  03f4d74  cntlzw 5, 7
  03f4d78  addc 4, 6, 4
  03f4d7c  sldi 5, 5, 58
  03f4d80  lbz 7, 3(3)
  03f4d84  addic 6, 4, 1
  03f4d88  sradi 5, 5, 63
  03f4d8c  li 8, 0
  03f4d90  subc 4, 4, 6
  03f4d94  subc 7, 8, 7
  03f4d98  and 4, 5, 4
  03f4d9c  cntlzw 5, 7
  03f4da0  addc 4, 6, 4
  03f4da4  sldi 5, 5, 58
  03f4da8  addic 30, 4, 1
  03f4dac  sradi 5, 5, 63
  03f4db0  subc 4, 4, 30
  03f4db4  addic 3, 3, 4
  03f4db8  and 4, 5, 4
  03f4dbc  addc 30, 30, 4
  03f4dc0  bdnz 0x3f4d1c
  03f4dc4  sldi 3, 30, 5
  03f4dc8  addc 4, 30, 3
  03f4dcc  sldi 30, 4, 2
  03f4dd0  subc 30, 30, 3
  03f4dd4  b 0x3f4dec
  03f4dd8  li 30, 10
  03f4ddc  b 0x3f4dec
  03f4de0  li 30, 5
  03f4de4  b 0x3f4dec
  03f4de8  li 30, 1
  03f4dec  lis 3, 63
  03f4df0  lis 4, 114
  03f4df4  addi 29, 3, 15704
  03f4df8  addic 28, 1, 288
  03f4dfc  ori 3, 28, 0
  03f4e00  lfs 31, 120(29)
  03f4e04  lfs 3, -3052(4)
  03f4e08  fmuls 1, 3, 31
  03f4e0c  fmr 2, 3
  03f4e10  bl 0xfea60
  03f4e14  nop
  03f4e18  lfs 1, 124(29)
  03f4e1c  lfs 2, 288(1)
  03f4e20  li 3, 2
  03f4e24  lfs 3, 292(1)
  03f4e28  lfs 4, 296(1)
  03f4e2c  lfs 5, 16(31)
  03f4e30  lfs 6, 20(31)
  03f4e34  lfs 7, 24(31)
  03f4e38  fmadds 2, 2, 1, 5
  03f4e3c  fmadds 3, 3, 1, 6
  03f4e40  lfs 8, 300(1)
  03f4e44  fmadds 1, 4, 1, 7
  03f4e48  stfs 8, 316(1)
  03f4e4c  stfs 2, 304(1)
  03f4e50  stfs 3, 308(1)
  03f4e54  stfs 1, 312(1)
  03f4e58  bl 0xfc620
  03f4e5c  nop
  03f4e60  li 4, 0
  03f4e64  addic 5, 3, -1
  03f4e68  lfs 1, 128(29)
  03f4e6c  subc 4, 4, 3
  03f4e70  lfs 2, 132(29)
  03f4e74  extsw 5, 5
  03f4e78  cntlzw 4, 4
  03f4e7c  subc 5, 5, 3
  03f4e80  sldi 4, 4, 58
  03f4e84  sradi 4, 4, 63
  03f4e88  and 4, 4, 5
  03f4e8c  addc 27, 3, 4
  03f4e90  bl 0xfcbe8
  03f4e94  nop
  03f4e98  lis 26, 114
  03f4e9c  lfs 29, 136(29)
  03f4ea0  fmr 28, 1
  03f4ea4  addic 25, 1, 304
  03f4ea8  fmr 3, 30
  03f4eac  lis 7, 32544
  03f4eb0  ori 3, 25, 0
  03f4eb4  lfs 1, -3056(26)
  03f4eb8  ori 7, 7, 32639
  03f4ebc  li 8, 0
  03f4ec0  fmuls 1, 1, 29
  03f4ec4  ori 9, 27, 0
  03f4ec8  ori 10, 28, 0
  03f4ecc  fmr 2, 28
  03f4ed0  fctiwz 1, 1
  03f4ed4  stfd 1, 400(1)
  03f4ed8  lfs 1, 140(29)
  03f4edc  lwz 4, 404(1)
  03f4ee0  fmuls 1, 28, 1
  03f4ee4  extsw 4, 4
  03f4ee8  bl 0x12f8c0
  03f4eec  nop
  03f4ef0  lfs 1, -3056(26)
  03f4ef4  lis 7, 32639
  03f4ef8  fmuls 2, 28, 31
  03f4efc  fmuls 1, 1, 29
  03f4f00  ori 3, 25, 0
  03f4f04  neg 9, 27
  03f4f08  fmr 3, 30
  03f4f0c  ori 7, 7, 32639
  03f4f10  li 8, 1
  03f4f14  ori 10, 28, 0
  03f4f18  fctiwz 1, 1
  03f4f1c  stfd 1, 400(1)
  03f4f20  lfs 1, 144(29)
  03f4f24  lwz 4, 404(1)
  03f4f28  fmuls 1, 28, 1
  03f4f2c  extsw 4, 4
  03f4f30  bl 0x12f8c0
  03f4f34  nop
  03f4f38  lwz 3, 184(31)
  03f4f3c  cmpwi 3, 0
  03f4f40  bt 2, 0x3f4f94
  03f4f44  lbz 3, 177(3)
  03f4f48  rlwinm 4, 3, 0, 24, 24
  03f4f4c  cmpwi 4, 0
  03f4f50  bf 2, 0x3f4f94
  03f4f54  lis 5, 151
  03f4f58  lis 4, 161
  03f4f5c  rlwinm 6, 3, 2, 22, 29
  03f4f60  addic 4, 4, -7908
  03f4f64  slwi 3, 3, 2
  03f4f68  addic 4, 4, 2
  03f4f6c  lwz 5, -25488(5)
  03f4f70  addc 6, 6, 4
  03f4f74  slwi 5, 5, 8
  03f4f78  clrldi 6, 6, 32
  03f4f7c  extsw 5, 5
  03f4f80  addc 3, 3, 4
  03f4f84  clrldi 3, 3, 32
  03f4f88  lhzx 4, 6, 5
  03f4f8c  addc 4, 4, 30
  03f4f90  sthx 4, 3, 5
  03f4f94  lis 3, 151
  03f4f98  lis 8, 151
  03f4f9c  lis 5, 151
  03f4fa0  lis 4, 161
  03f4fa4  lis 10, 112
  03f4fa8  lwz 3, -25488(3)
  03f4fac  lwz 6, -25440(8)
  03f4fb0  addic 4, 4, -2332
  03f4fb4  slwi 3, 3, 2
  03f4fb8  lwz 7, -13820(5)
  03f4fbc  addc 6, 6, 30
  03f4fc0  extsw 3, 3
  03f4fc4  addc 7, 7, 30
  03f4fc8  stw 6, -25440(8)
  03f4fcc  lis 6, 112
  03f4fd0  lwzx 9, 4, 3
  03f4fd4  stw 7, -13820(5)
  03f4fd8  addic 8, 8, -25440
  03f4fdc  addic 5, 6, 22544
  03f4fe0  addc 6, 9, 30
  03f4fe4  lis 7, 112
  03f4fe8  lis 9, 152
  03f4fec  addic 7, 7, 22560
  03f4ff0  stwx 6, 4, 3
  03f4ff4  li 3, 2
  03f4ff8  addic 6, 10, 22552
  03f4ffc  li 4, 30030
  03f5000  ori 9, 9, 38527
  03f5004  bl 0xc8444
  03f5008  nop
  03f500c  lis 3, 164
  03f5010  lwz 3, -28508(3)
  03f5014  cmplw 31, 3
  03f5018  bf 0, 0x3f508c
  03f501c  lis 3, 165
  03f5020  addic 6, 3, 14692
  03f5024  lbz 3, 176(31)
  03f5028  lhz 5, 178(31)
  03f502c  addic 4, 3, 2
  03f5030  extsh 5, 5
  03f5034  cmpwi 3, 255
  03f5038  stbx 4, 6, 5
  03f503c  bt 2, 0x3f5080
  03f5040  lis 6, 162
  03f5044  addic 6, 6, 704
  03f5048  lbzx 6, 3, 6
  03f504c  cmpwi 6, 255
  03f5050  bt 2, 0x3f508c
  03f5054  lis 6, 151
  03f5058  lis 7, 161
  03f505c  addic 7, 7, -13692
  03f5060  lwz 6, -25488(6)
  03f5064  addc 3, 3, 7
  03f5068  slwi 6, 6, 4
  03f506c  clrldi 3, 3, 32
  03f5070  extsw 6, 6
  03f5074  lbzx 3, 3, 6
  03f5078  cmpwi 3, 255
  03f507c  bf 2, 0x3f508c
  03f5080  lis 3, 165
  03f5084  addic 3, 3, 17860
  03f5088  stbx 4, 3, 5
  03f508c  ori 3, 31, 0
  03f5090  bl 0xefb38
  03f5094  nop
  03f5098  b 0x3f5abc
  03f509c  addic 3, 31, 192
  03f50a0  ori 4, 30, 0
  03f50a4  ori 5, 3, 0
  03f50a8  bl 0x5014d4
  03f50ac  nop
  03f50b0  b 0x3f5abc
  03f50b4  lwz 29, 120(31)
  03f50b8  lfs 1, 16(31)
  03f50bc  lfs 2, 20(31)
  03f50c0  lis 3, 63
  03f50c4  lfs 3, 64(29)
  03f50c8  fadds 1, 1, 3
  03f50cc  addi 6, 3, 15704
  03f50d0  lfs 3, 24(31)
  03f50d4  lis 7, 114
  03f50d8  addic 30, 31, 192
  03f50dc  ori 4, 29, 0
  03f50e0  ori 3, 30, 0
  03f50e4  ori 5, 30, 0
  03f50e8  stfs 1, 16(31)
  03f50ec  lfs 1, 68(29)
  03f50f0  fadds 1, 2, 1
  03f50f4  stfs 1, 20(31)
  03f50f8  lfs 1, 72(29)
  03f50fc  fadds 1, 3, 1
  03f5100  stfs 1, 24(31)
  03f5104  lfs 30, 148(6)
  03f5108  lfs 1, 72(29)
  03f510c  lfs 2, -3048(7)
  03f5110  fnmsubs 1, 2, 30, 1
  03f5114  stfs 1, 72(29)
  03f5118  bl 0x5014d4
  03f511c  nop
  03f5120  lwz 3, 24(31)
  03f5124  lis 6, 16384
  03f5128  lfs 1, 24(31)
  03f512c  srawi 4, 3, 31
  03f5130  srwi 5, 4, 1
  03f5134  xor 3, 5, 3
  03f5138  subc 3, 3, 4
  03f513c  cmpw 3, 6
  03f5140  bt 0, 0x3f519c
  03f5144  lwz 5, 16(31)
  03f5148  lis 3, 17407
  03f514c  srawi 6, 5, 31
  03f5150  lis 4, 16384
  03f5154  srwi 7, 6, 1
  03f5158  xor 5, 7, 5
  03f515c  subc 5, 5, 6
  03f5160  cmpw 1, 5, 4
  03f5164  cmpw 5, 3
  03f5168  cror 2, 1, 4
  03f516c  bt 2, 0x3f519c
  03f5170  lwz 5, 20(31)
  03f5174  lis 4, 17407
  03f5178  lis 3, 16384
  03f517c  srawi 6, 5, 31
  03f5180  srwi 7, 6, 1
  03f5184  xor 5, 7, 5
  03f5188  subc 5, 5, 6
  03f518c  cmpw 5, 4
  03f5190  cmpw 1, 5, 3
  03f5194  bt 1, 0x3f519c
  03f5198  bf 4, 0x3f5288
  03f519c  lhz 3, 166(31)
  03f51a0  extsh 3, 3
  03f51a4  cmpwi 3, 988
  03f51a8  cmpwi 1, 3, 987
  03f51ac  cmpwi 6, 3, 989
  03f51b0  bt 1, 0x3f51bc
  03f51b4  bf 5, 0x3f51d0
  03f51b8  b 0x3f51c8
  03f51bc  bt 25, 0x3f51d0
  03f51c0  li 3, 10
  03f51c4  b 0x3f51d4
  03f51c8  li 3, 5
  03f51cc  b 0x3f51d4
  03f51d0  li 3, 1
  03f51d4  lwz 4, 184(31)
  03f51d8  cmpwi 4, 0
  03f51dc  bt 2, 0x3f5230
  03f51e0  lbz 4, 177(4)
  03f51e4  rlwinm 5, 4, 0, 24, 24
  03f51e8  cmpwi 5, 0
  03f51ec  bf 2, 0x3f5230
  03f51f0  lis 6, 151
  03f51f4  lis 5, 161
  03f51f8  rlwinm 7, 4, 2, 22, 29
  03f51fc  addic 5, 5, -7908
  03f5200  slwi 4, 4, 2
  03f5204  addic 5, 5, 2
  03f5208  lwz 6, -25488(6)
  03f520c  addc 7, 7, 5
  03f5210  slwi 6, 6, 8
  03f5214  clrldi 7, 7, 32
  03f5218  extsw 6, 6
  03f521c  addc 4, 4, 5
  03f5220  clrldi 4, 4, 32
  03f5224  lhzx 5, 7, 6
  03f5228  addc 5, 5, 3
  03f522c  sthx 5, 4, 6
  03f5230  ori 4, 3, 0
  03f5234  lis 3, 151
  03f5238  lis 6, 151
  03f523c  lis 5, 161
  03f5240  lis 7, 151
  03f5244  addic 5, 5, -2332
  03f5248  lwz 3, -25488(3)
  03f524c  lwz 8, -25440(6)
  03f5250  slwi 3, 3, 2
  03f5254  addc 8, 8, 4
  03f5258  extsw 10, 3
  03f525c  lwz 9, -13820(7)
  03f5260  ori 3, 31, 0
  03f5264  addc 9, 9, 4
  03f5268  stw 8, -25440(6)
  03f526c  lwzx 6, 5, 10
  03f5270  stw 9, -13820(7)
  03f5274  addc 4, 6, 4
  03f5278  stwx 4, 5, 10
  03f527c  bl 0xefb38
  03f5280  nop
  03f5284  b 0x3f5abc
  03f5288  lis 3, 63
  03f528c  lfs 3, 96(29)
  03f5290  addi 3, 3, 15704
  03f5294  lfs 2, 152(3)
  03f5298  fsubs 3, 3, 2
  03f529c  fcmpu 0, 1, 3
  03f52a0  cror 6, 1, 2
  03f52a4  bt 6, 0x3f5330
  03f52a8  lis 3, 151
  03f52ac  addic 3, 3, -25376
  03f52b0  lfs 3, 136(3)
  03f52b4  fsubs 2, 3, 2
  03f52b8  fcmpu 0, 1, 2
  03f52bc  cror 6, 1, 2
  03f52c0  bt 6, 0x3f5330
  03f52c4  lwz 6, 120(31)
  03f52c8  lfs 1, 144(3)
  03f52cc  lis 4, 63
  03f52d0  li 5, 24
  03f52d4  vspltisw 3, -1
  03f52d8  addi 4, 4, 15704
  03f52dc  lis 7, 114
  03f52e0  stfs 1, 16(6)
  03f52e4  lfs 1, 148(3)
  03f52e8  vslw 3, 3, 3
  03f52ec  stfs 1, 20(6)
  03f52f0  lfs 1, 152(3)
  03f52f4  stfs 1, 24(6)
  03f52f8  lfs 1, 156(3)
  03f52fc  li 3, -3056
  03f5300  stfs 1, 28(6)
  03f5304  <unknown>
  03f5308  vspltw 2, 2, 0
  03f530c  li 4, 2
  03f5310  <unknown>
  03f5314  li 3, 104
  03f5318  vmaddfp 2, 4, 2, 3
  03f531c  vctsxs 2, 2, 0
  03f5320  vspltw 2, 2, 0
  03f5324  stvewx 2, 3, 6
  03f5328  stb 4, 32(31)
  03f532c  b 0x3f5abc
  03f5330  lis 3, 63
  03f5334  li 5, 34
  03f5338  addi 4, 3, 15704
  03f533c  addic 3, 31, 16
  03f5340  ori 6, 31, 0
  03f5344  lfs 1, 156(4)
  03f5348  bl 0x59e20
  03f534c  nop
  03f5350  cmpwi 3, 0
  03f5354  bt 2, 0x3f5abc
  03f5358  lis 27, 161
  03f535c  lfs 1, 16(31)
  03f5360  lfs 2, 20(31)
  03f5364  addic 3, 29, 64
  03f5368  addic 27, 27, 2368
  03f536c  addic 5, 1, 320
  03f5370  ori 4, 3, 0
  03f5374  lfs 3, 32(27)
  03f5378  lfs 4, 36(27)
  03f537c  fsubs 1, 1, 3
  03f5380  lfs 3, 24(31)
  03f5384  fsubs 2, 2, 4
  03f5388  lfs 4, 40(27)
  03f538c  fsubs 3, 3, 4
  03f5390  lfs 4, 28(31)
  03f5394  stfs 4, 332(1)
  03f5398  stfs 1, 320(1)
  03f539c  stfs 2, 324(1)
  03f53a0  stfs 3, 328(1)
  03f53a4  bl 0x500608
  03f53a8  nop
  03f53ac  lfs 1, 324(1)
  03f53b0  lfs 2, 320(1)
  03f53b4  fmuls 3, 1, 1
  03f53b8  lfs 1, 328(1)
  03f53bc  fmadds 2, 2, 2, 3
  03f53c0  fsqrts 2, 2
  03f53c4  bl 0x5e8338
  03f53c8  nop
  03f53cc  lis 3, 63
  03f53d0  addi 3, 3, 15704
  03f53d4  lfs 31, 160(3)
  03f53d8  fcmpu 0, 1, 31
  03f53dc  cror 6, 1, 2
  03f53e0  bt 6, 0x3f5abc
  03f53e4  lfs 1, 68(27)
  03f53e8  lfs 2, 64(27)
  03f53ec  fmuls 3, 1, 1
  03f53f0  lfs 1, 72(27)
  03f53f4  fmadds 2, 2, 2, 3
  03f53f8  fsqrts 2, 2
  03f53fc  bl 0x5e8338
  03f5400  nop
  03f5404  fcmpu 0, 1, 31
  03f5408  cror 6, 1, 2
  03f540c  bt 6, 0x3f5abc
  03f5410  lis 4, 63
  03f5414  li 3, 0
  03f5418  addi 26, 4, 15704
  03f541c  lhz 4, 52(31)
  03f5420  lwz 28, 120(31)
  03f5424  ori 29, 30, 0
  03f5428  rlwimi 4, 3, 0, 23, 23
  03f542c  sth 4, 52(31)
  03f5430  lfs 1, 164(26)
  03f5434  lfs 2, 124(26)
  03f5438  bl 0xfcbe8
  03f543c  nop
  03f5440  lis 3, 133
  03f5444  lis 4, 114
  03f5448  lfs 2, 17568(3)
  03f544c  fadds 1, 2, 1
  03f5450  lfs 2, -3056(4)
  03f5454  fmuls 1, 2, 1
  03f5458  bl 0x502758
  03f545c  nop
  03f5460  ori 30, 3, 0
  03f5464  bl 0x502730
  03f5468  nop
  03f546c  lfs 29, 8(26)
  03f5470  lfs 2, 32(27)
  03f5474  fdivs 31, 29, 1
  03f5478  stfs 2, 0(28)
  03f547c  addic 4, 31, 64
  03f5480  lfs 2, 36(27)
  03f5484  ori 3, 29, 0
  03f5488  stfs 2, 4(28)
  03f548c  lfs 1, 40(27)
  03f5490  stfs 1, 8(28)
  03f5494  lfs 1, 44(27)
  03f5498  stfs 1, 12(28)
  03f549c  bl 0x10c1e8
  03f54a0  nop
  03f54a4  fmr 1, 29
  03f54a8  addic 29, 1, 320
  03f54ac  addic 4, 27, 64
  03f54b0  ori 3, 29, 0
  03f54b4  bl 0x5e7f98
  03f54b8  nop
  03f54bc  ori 3, 31, 0
  03f54c0  ori 4, 29, 0
  03f54c4  bl 0x3f3c7c
  03f54c8  bl 0xfcc68
  03f54cc  nop
  03f54d0  stfs 1, 96(28)
  03f54d4  bl 0xfcc68
  03f54d8  nop
  03f54dc  stfs 1, 100(28)
  03f54e0  addic 4, 28, 32
  03f54e4  addic 5, 28, 48
  03f54e8  ori 3, 31, 0
  03f54ec  bl 0x3f3388
  03f54f0  lfs 1, 32(28)
  03f54f4  lfs 2, 16(31)
  03f54f8  fsubs 1, 1, 2
  03f54fc  lfs 2, 36(28)
  03f5500  lfs 3, 40(28)
  03f5504  lfs 4, 44(28)
  03f5508  stfs 1, 64(28)
  03f550c  lfs 5, 20(31)
  03f5510  fmuls 1, 1, 31
  03f5514  fsubs 2, 2, 5
  03f5518  stfs 2, 68(28)
  03f551c  lfs 5, 24(31)
  03f5520  stfs 4, 76(28)
  03f5524  fmuls 2, 2, 31
  03f5528  fsubs 3, 3, 5
  03f552c  stfs 1, 64(28)
  03f5530  fmuls 1, 3, 31
  03f5534  stfs 2, 68(28)
  03f5538  stfs 1, 72(28)
  03f553c  lwz 3, 24(27)
  03f5540  cmpwi 3, 0
  03f5544  bt 2, 0x3f55ec
  03f5548  bl 0x1122ac
  03f554c  nop
  03f5550  ori 29, 3, 0
  03f5554  cmpwi 29, 0
  03f5558  bt 2, 0x3f55ec
  03f555c  lfs 1, 64(28)
  03f5560  lfs 2, 16(29)
  03f5564  ori 3, 30, 0
  03f5568  fadds 1, 1, 2
  03f556c  lfs 2, 68(28)
  03f5570  lfs 3, 72(28)
  03f5574  stfs 1, 64(28)
  03f5578  lfs 1, 20(29)
  03f557c  fadds 1, 2, 1
  03f5580  stfs 1, 68(28)
  03f5584  lfs 1, 24(29)
  03f5588  fadds 1, 3, 1
  03f558c  stfs 1, 72(28)
  03f5590  bl 0x502730
  03f5594  nop
  03f5598  lfs 2, 16(29)
  03f559c  lfs 3, 20(29)
  03f55a0  lfs 4, 24(29)
  03f55a4  lfs 5, 32(28)
  03f55a8  lfs 6, 36(28)
  03f55ac  lfs 7, 40(28)
  03f55b0  fmadds 5, 2, 1, 5
  03f55b4  lfs 8, 0(28)
  03f55b8  fmadds 6, 3, 1, 6
  03f55bc  lfs 9, 4(28)
  03f55c0  fmadds 7, 4, 1, 7
  03f55c4  fmadds 2, 2, 1, 8
  03f55c8  lfs 8, 8(28)
  03f55cc  fmadds 3, 3, 1, 9
  03f55d0  fmadds 1, 4, 1, 8
  03f55d4  stfs 5, 32(28)
  03f55d8  stfs 6, 36(28)
  03f55dc  stfs 7, 40(28)
  03f55e0  stfs 2, 0(28)
  03f55e4  stfs 3, 4(28)
  03f55e8  stfs 1, 8(28)
  03f55ec  srawi 3, 30, 1
  03f55f0  lis 4, 114
  03f55f4  extsw 3, 3
  03f55f8  std 3, 400(1)
  03f55fc  lfs 1, -3048(4)
  03f5600  lfs 2, 72(28)
  03f5604  fmuls 3, 1, 30
  03f5608  lfs 1, 48(28)
  03f560c  lfd 4, 400(1)
  03f5610  fcfid 4, 4
  03f5614  frsp 4, 4
  03f5618  fmadds 2, 3, 4, 2
  03f561c  stfs 2, 72(28)
  03f5620  lfs 2, 64(31)
  03f5624  bl 0x5025e0
  03f5628  nop
  03f562c  fmuls 2, 1, 31
  03f5630  lfs 1, 52(28)
  03f5634  stfs 2, 80(28)
  03f5638  lfs 2, 68(31)
  03f563c  bl 0x5025e0
  03f5640  nop
  03f5644  fmuls 2, 1, 31
  03f5648  lfs 1, 56(28)
  03f564c  stfs 2, 84(28)
  03f5650  lfs 2, 72(31)
  03f5654  bl 0x5025e0
  03f5658  nop
  03f565c  fmuls 1, 1, 31
  03f5660  li 3, 5
  03f5664  lis 4, 151
  03f5668  stfs 1, 88(28)
  03f566c  stb 3, 32(31)
  03f5670  stw 30, 104(28)
  03f5674  addic 30, 4, -25376
  03f5678  lwz 3, 24(27)
  03f567c  stw 3, 124(28)
  03f5680  lfs 1, 24(31)
  03f5684  lfs 2, 136(30)
  03f5688  fsubs 1, 1, 2
  03f568c  lfs 2, 8840(30)
  03f5690  fabs 1, 1
  03f5694  fcmpu 0, 1, 2
  03f5698  cror 6, 1, 2
  03f569c  bt 6, 0x3f5abc
  03f56a0  lfs 1, 20(31)
  03f56a4  lfs 2, 132(30)
  03f56a8  lfs 3, 16(31)
  03f56ac  fsubs 1, 1, 2
  03f56b0  lfs 2, 128(30)
  03f56b4  fsubs 2, 3, 2
  03f56b8  fmuls 1, 1, 1
  03f56bc  fmadds 1, 2, 2, 1
  03f56c0  lfs 2, 8844(30)
  03f56c4  fsqrts 1, 1
  03f56c8  fcmpu 0, 1, 2
  03f56cc  cror 6, 1, 2
  03f56d0  bt 6, 0x3f5abc
  03f56d4  lis 3, 63
  03f56d8  li 4, 24
  03f56dc  vspltisw 2, -1
  03f56e0  addi 3, 3, 15704
  03f56e4  li 5, -3056
  03f56e8  lis 6, 114
  03f56ec  vslw 2, 2, 2
  03f56f0  <unknown>
  03f56f4  li 4, 104
  03f56f8  vspltw 3, 3, 0
  03f56fc  <unknown>
  03f5700  lwz 3, 120(31)
  03f5704  li 5, 2
  03f5708  vmaddfp 2, 4, 3, 2
  03f570c  vctsxs 2, 2, 0
  03f5710  vspltw 2, 2, 0
  03f5714  stvewx 2, 4, 3
  03f5718  stb 5, 32(31)
  03f571c  b 0x3f5abc
  03f5720  lwz 30, 120(31)
  03f5724  lfs 1, 64(31)
  03f5728  lfs 2, 80(30)
  03f572c  bl 0x502578
  03f5730  nop
  03f5734  stfs 1, 64(31)
  03f5738  lfs 1, 68(31)
  03f573c  lfs 2, 84(30)
  03f5740  bl 0x502578
  03f5744  nop
  03f5748  stfs 1, 68(31)
  03f574c  lfs 1, 72(31)
  03f5750  lfs 2, 88(30)
  03f5754  bl 0x502578
  03f5758  nop
  03f575c  stfs 1, 72(31)
  03f5760  lfs 1, 16(31)
  03f5764  lfs 2, 64(30)
  03f5768  fadds 1, 1, 2
  03f576c  lis 3, 63
  03f5770  lfs 2, 20(31)
  03f5774  lis 5, 114
  03f5778  lfs 3, 24(31)
  03f577c  addi 4, 3, 15704
  03f5780  addic 3, 30, 104
  03f5784  stfs 1, 16(31)
  03f5788  lfs 1, 68(30)
  03f578c  fadds 1, 2, 1
  03f5790  stfs 1, 20(31)
  03f5794  lfs 1, 72(30)
  03f5798  fadds 1, 3, 1
  03f579c  stfs 1, 24(31)
  03f57a0  lfs 31, 148(4)
  03f57a4  lfs 1, 72(30)
  03f57a8  lfs 2, -3048(5)
  03f57ac  fnmsubs 1, 2, 31, 1
  03f57b0  stfs 1, 72(30)
  03f57b4  bl 0x4fff60
  03f57b8  nop
  03f57bc  cmpwi 3, 0
  03f57c0  lwz 4, 120(31)
  03f57c4  bt 2, 0x3f5abc
  03f57c8  lis 3, 151
  03f57cc  lfs 1, 24(31)
  03f57d0  addic 3, 3, -25376
  03f57d4  lfs 2, 136(3)
  03f57d8  fsubs 1, 1, 2
  03f57dc  lfs 2, 8840(3)
  03f57e0  fabs 1, 1
  03f57e4  fcmpu 0, 1, 2
  03f57e8  cror 6, 1, 2
  03f57ec  bt 6, 0x3f586c
  03f57f0  lfs 1, 20(31)
  03f57f4  lfs 2, 132(3)
  03f57f8  lfs 3, 16(31)
  03f57fc  fsubs 1, 1, 2
  03f5800  lfs 2, 128(3)
  03f5804  fsubs 2, 3, 2
  03f5808  fmuls 1, 1, 1
  03f580c  fmadds 1, 2, 2, 1
  03f5810  lfs 2, 8844(3)
  03f5814  fsqrts 1, 1
  03f5818  fcmpu 0, 1, 2
  03f581c  cror 6, 1, 2
  03f5820  bt 6, 0x3f586c
  03f5824  lis 3, 63
  03f5828  li 4, 24
  03f582c  vspltisw 2, -1
  03f5830  addi 3, 3, 15704
  03f5834  lis 5, 114
  03f5838  li 6, -3056
  03f583c  vslw 2, 2, 2
  03f5840  <unknown>
  03f5844  li 3, 104
  03f5848  vspltw 3, 3, 0
  03f584c  li 4, 2
  03f5850  <unknown>
  03f5854  vmaddfp 2, 4, 3, 2
  03f5858  vctsxs 2, 2, 0
  03f585c  vspltw 2, 2, 0
  03f5860  stvewx 2, 3, 30
  03f5864  stb 4, 32(31)
  03f5868  b 0x3f5abc
  03f586c  lbz 3, 188(31)
  03f5870  cmpwi 3, 0
  03f5874  bt 2, 0x3f58f4
  03f5878  li 3, 1
  03f587c  stb 3, 32(31)
  03f5880  lwz 3, 124(30)
  03f5884  cmpwi 3, 0
  03f5888  bt 2, 0x3f58b0
  03f588c  addic 6, 4, 16
  03f5890  addic 7, 4, 32
  03f5894  addic 8, 4, 48
  03f5898  ori 5, 4, 0
  03f589c  ori 3, 31, 0
  03f58a0  lwz 4, 124(4)
  03f58a4  bl 0x1124c0
  03f58a8  nop
  03f58ac  b 0x3f5abc
  03f58b0  lfs 1, 32(30)
  03f58b4  stfs 1, 16(31)
  03f58b8  lfs 1, 36(30)
  03f58bc  stfs 1, 20(31)
  03f58c0  lfs 1, 40(30)
  03f58c4  stfs 1, 24(31)
  03f58c8  lfs 1, 44(30)
  03f58cc  stfs 1, 28(31)
  03f58d0  lfs 1, 48(30)
  03f58d4  stfs 1, 64(31)
  03f58d8  lfs 1, 52(30)
  03f58dc  stfs 1, 68(31)
  03f58e0  lfs 1, 56(30)
  03f58e4  stfs 1, 72(31)
  03f58e8  lfs 1, 60(30)
  03f58ec  stfs 1, 76(31)
  03f58f0  b 0x3f5abc
  03f58f4  lis 3, 63
  03f58f8  addi 29, 3, 15704
  03f58fc  lis 3, 114
  03f5900  ori 28, 31, 0
  03f5904  lfs 1, 80(29)
  03f5908  lfs 2, -3056(3)
  03f590c  fmuls 1, 2, 1
  03f5910  fctidz 1, 1
  03f5914  fcfid 1, 1
  03f5918  frsp 1, 1
  03f591c  bl 0x502758
  03f5920  nop
  03f5924  ori 31, 3, 0
  03f5928  bl 0x502730
  03f592c  nop
  03f5930  lfs 2, 8(29)
  03f5934  fdivs 30, 2, 1
  03f5938  lfs 2, 64(28)
  03f593c  lbz 3, 188(28)
  03f5940  addic 3, 3, 1
  03f5944  stb 3, 188(28)
  03f5948  lfs 1, 48(30)
  03f594c  bl 0x5025e0
  03f5950  nop
  03f5954  fmuls 3, 1, 30
  03f5958  lfs 1, 52(30)
  03f595c  stfs 3, 80(30)
  03f5960  lfs 2, 68(28)
  03f5964  bl 0x5025e0
  03f5968  nop
  03f596c  fmuls 2, 1, 30
  03f5970  lfs 1, 56(30)
  03f5974  stfs 2, 84(30)
  03f5978  lfs 2, 72(28)
  03f597c  bl 0x5025e0
  03f5980  nop
  03f5984  fmuls 1, 1, 30
  03f5988  lfs 2, 32(30)
  03f598c  lfs 3, 36(30)
  03f5990  lfs 4, 40(30)
  03f5994  stfs 1, 88(30)
  03f5998  lfs 1, 16(28)
  03f599c  fsubs 1, 2, 1
  03f59a0  lfs 2, 44(30)
  03f59a4  lwz 3, 124(30)
  03f59a8  cmpwi 3, 0
  03f59ac  stfs 1, 64(30)
  03f59b0  lfs 5, 20(28)
  03f59b4  fmuls 1, 1, 30
  03f59b8  fsubs 3, 3, 5
  03f59bc  stfs 3, 68(30)
  03f59c0  lfs 5, 24(28)
  03f59c4  fmuls 3, 3, 30
  03f59c8  stfs 2, 76(30)
  03f59cc  fsubs 4, 4, 5
  03f59d0  stfs 1, 64(30)
  03f59d4  stw 31, 104(30)
  03f59d8  fmuls 1, 4, 30
  03f59dc  stfs 3, 68(30)
  03f59e0  stfs 1, 72(30)
  03f59e4  bt 2, 0x3f5a8c
  03f59e8  bl 0x1122ac
  03f59ec  nop
  03f59f0  ori 29, 3, 0
  03f59f4  cmpwi 29, 0
  03f59f8  bt 2, 0x3f5a8c
  03f59fc  lfs 1, 64(30)
  03f5a00  lfs 2, 16(29)
  03f5a04  ori 3, 31, 0
  03f5a08  fadds 1, 1, 2
  03f5a0c  lfs 2, 68(30)
  03f5a10  lfs 3, 72(30)
  03f5a14  stfs 1, 64(30)
  03f5a18  lfs 1, 20(29)
  03f5a1c  fadds 1, 2, 1
  03f5a20  stfs 1, 68(30)
  03f5a24  lfs 1, 24(29)
  03f5a28  fadds 1, 3, 1
  03f5a2c  stfs 1, 72(30)
  03f5a30  bl 0x502730
  03f5a34  nop
  03f5a38  lfs 2, 16(29)
  03f5a3c  lfs 3, 20(29)
  03f5a40  lfs 4, 24(29)
  03f5a44  lfs 5, 32(30)
  03f5a48  lfs 6, 36(30)
  03f5a4c  lfs 7, 40(30)
  03f5a50  fmadds 5, 2, 1, 5
  03f5a54  lfs 8, 0(30)
  03f5a58  fmadds 6, 3, 1, 6
  03f5a5c  lfs 9, 4(30)
  03f5a60  fmadds 7, 4, 1, 7
  03f5a64  fmadds 2, 2, 1, 8
  03f5a68  lfs 8, 8(30)
  03f5a6c  fmadds 3, 3, 1, 9
  03f5a70  fmadds 1, 4, 1, 8
  03f5a74  stfs 5, 32(30)
  03f5a78  stfs 6, 36(30)
  03f5a7c  stfs 7, 40(30)
  03f5a80  stfs 2, 0(30)
  03f5a84  stfs 3, 4(30)
  03f5a88  stfs 1, 8(30)
  03f5a8c  srawi 3, 31, 1
  03f5a90  lis 4, 114
  03f5a94  extsw 3, 3
  03f5a98  std 3, 400(1)
  03f5a9c  lfs 1, -3048(4)
  03f5aa0  lfs 2, 72(30)
  03f5aa4  lfd 3, 400(1)
  03f5aa8  fmuls 1, 1, 31
  03f5aac  fcfid 3, 3
  03f5ab0  frsp 3, 3
  03f5ab4  fmadds 1, 1, 3, 2
  03f5ab8  stfs 1, 72(30)
  03f5abc  ld 0, 528(1)
  03f5ac0  mtlr 0
  03f5ac4  lfd 28, 480(1)
  03f5ac8  lfd 29, 488(1)
  03f5acc  lfd 30, 496(1)
  03f5ad0  lfd 31, 504(1)
  03f5ad4  ld 25, 424(1)
  03f5ad8  ld 26, 432(1)
  03f5adc  ld 27, 440(1)
  03f5ae0  ld 28, 448(1)
  03f5ae4  ld 29, 456(1)
  03f5ae8  ld 30, 464(1)
  03f5aec  ld 31, 472(1)
  03f5af0  addi 1, 1, 512
  03f5af4  blr
