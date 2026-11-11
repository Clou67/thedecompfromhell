# game/update/moby1901.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1901_002d3d88:   # 0x2d3d88, 0x14 bytes
  02d3d88  lis 3, 124
  02d3d8c  lis 4, 1
  02d3d90  addic 3, 3, -10480
  02d3d94  stw 4, 72(3)
  02d3d98  blr

M1901_002d3da8:   # 0x2d3da8, 0x220 bytes
  02d3da8  stdu 1, -288(1)
  02d3dac  mflr 0
  02d3db0  std 0, 304(1)
  02d3db4  stfd 24, 224(1)
  02d3db8  stfd 25, 232(1)
  02d3dbc  stfd 26, 240(1)
  02d3dc0  stfd 27, 248(1)
  02d3dc4  stfd 28, 256(1)
  02d3dc8  stfd 29, 264(1)
  02d3dcc  stfd 30, 272(1)
  02d3dd0  stfd 31, 280(1)
  02d3dd4  std 19, 120(1)
  02d3dd8  li 19, 0
  02d3ddc  cmpwi 4, 0
  02d3de0  std 28, 192(1)
  02d3de4  fmr 28, 1
  02d3de8  std 25, 168(1)
  02d3dec  ori 28, 3, 0
  02d3df0  fmr 29, 2
  02d3df4  std 29, 200(1)
  02d3df8  ori 25, 19, 0
  02d3dfc  fmr 30, 3
  02d3e00  std 30, 208(1)
  02d3e04  ori 29, 4, 0
  02d3e08  fmr 31, 4
  02d3e0c  std 31, 216(1)
  02d3e10  ori 30, 5, 0
  02d3e14  std 27, 184(1)
  02d3e18  std 26, 176(1)
  02d3e1c  std 24, 160(1)
  02d3e20  std 23, 152(1)
  02d3e24  std 22, 144(1)
  02d3e28  std 21, 136(1)
  02d3e2c  std 20, 128(1)
  02d3e30  ori 31, 10, 0
  02d3e34  bf 1, 0x2d3f64
  02d3e38  lis 3, 45
  02d3e3c  ori 26, 30, 0
  02d3e40  addi 3, 3, 15776
  02d3e44  ori 27, 19, 0
  02d3e48  lfs 24, 0(3)
  02d3e4c  lwz 3, 0(26)
  02d3e50  ori 20, 25, 0
  02d3e54  cmpwi 3, 0
  02d3e58  bf 1, 0x2d3f50
  02d3e5c  ori 24, 25, 0
  02d3e60  lwzx 3, 28, 27
  02d3e64  cmpwi 31, 0
  02d3e68  lwzx 23, 3, 24
  02d3e6c  clrlwi 3, 23, 24
  02d3e70  rlwinm 21, 23, 24, 24, 31
  02d3e74  rlwinm 22, 23, 16, 24, 31
  02d3e78  srwi 23, 23, 24
  02d3e7c  bf 2, 0x2d3ebc
  02d3e80  bl 0x502730
  02d3e84  nop
  02d3e88  ori 3, 21, 0
  02d3e8c  fmr 27, 1
  02d3e90  bl 0x502730
  02d3e94  nop
  02d3e98  ori 3, 22, 0
  02d3e9c  fmr 25, 1
  02d3ea0  bl 0x502730
  02d3ea4  nop
  02d3ea8  fmr 26, 1
  02d3eac  ori 3, 23, 0
  02d3eb0  bl 0x502730
  02d3eb4  nop
  02d3eb8  b 0x2d3ed4
  02d3ebc  ori 3, 23, 0
  02d3ec0  bl 0x502730
  02d3ec4  nop
  02d3ec8  fmr 25, 24
  02d3ecc  fmr 26, 25
  02d3ed0  fmr 27, 26
  02d3ed4  fmuls 2, 27, 28
  02d3ed8  fmuls 27, 1, 31
  02d3edc  fmuls 26, 26, 30
  02d3ee0  fmuls 25, 25, 29
  02d3ee4  fmr 1, 2
  02d3ee8  bl 0x502758
  02d3eec  nop
  02d3ef0  ori 23, 3, 0
  02d3ef4  fmr 1, 27
  02d3ef8  bl 0x502758
  02d3efc  nop
  02d3f00  ori 22, 3, 0
  02d3f04  fmr 1, 26
  02d3f08  bl 0x502758
  02d3f0c  nop
  02d3f10  slwi 4, 22, 24
  02d3f14  slwi 3, 3, 16
  02d3f18  fmr 1, 25
  02d3f1c  addc 22, 4, 3
  02d3f20  bl 0x502758
  02d3f24  nop
  02d3f28  slwi 3, 3, 8
  02d3f2c  lwzx 4, 28, 27
  02d3f30  addic 20, 20, 1
  02d3f34  addc 3, 22, 3
  02d3f38  addc 3, 3, 23
  02d3f3c  stwx 3, 4, 24
  02d3f40  lwzx 3, 30, 27
  02d3f44  addic 24, 24, 4
  02d3f48  cmpw 20, 3
  02d3f4c  bt 0, 0x2d3e60
  02d3f50  addic 19, 19, 1
  02d3f54  addic 26, 26, 4
  02d3f58  cmpw 19, 29
  02d3f5c  addic 27, 27, 4
  02d3f60  bt 0, 0x2d3e4c
  02d3f64  ld 0, 304(1)
  02d3f68  mtlr 0
  02d3f6c  lfd 24, 224(1)
  02d3f70  lfd 25, 232(1)
  02d3f74  lfd 26, 240(1)
  02d3f78  lfd 27, 248(1)
  02d3f7c  lfd 28, 256(1)
  02d3f80  lfd 29, 264(1)
  02d3f84  lfd 30, 272(1)
  02d3f88  lfd 31, 280(1)
  02d3f8c  ld 19, 120(1)
  02d3f90  ld 20, 128(1)
  02d3f94  ld 21, 136(1)
  02d3f98  ld 22, 144(1)
  02d3f9c  ld 23, 152(1)
  02d3fa0  ld 24, 160(1)
  02d3fa4  ld 25, 168(1)
  02d3fa8  ld 26, 176(1)
  02d3fac  ld 27, 184(1)
  02d3fb0  ld 28, 192(1)
  02d3fb4  ld 29, 200(1)
  02d3fb8  ld 30, 208(1)
  02d3fbc  ld 31, 216(1)
  02d3fc0  addi 1, 1, 288
  02d3fc4  blr

M1901_002d3fc8:   # 0x2d3fc8, 0xf0 bytes
  02d3fc8  stdu 1, -176(1)
  02d3fcc  mflr 0
  02d3fd0  std 0, 192(1)
  02d3fd4  std 25, 120(1)
  02d3fd8  std 30, 160(1)
  02d3fdc  std 28, 144(1)
  02d3fe0  lis 25, 267
  02d3fe4  lis 30, 125
  02d3fe8  std 31, 168(1)
  02d3fec  lis 28, 125
  02d3ff0  std 29, 152(1)
  02d3ff4  lis 31, 125
  02d3ff8  std 26, 128(1)
  02d3ffc  std 24, 112(1)
  02d4000  lis 29, 124
  02d4004  lis 26, 267
  02d4008  std 27, 136(1)
  02d400c  li 24, 0
  02d4010  sldi 27, 3, 3
  02d4014  addic 25, 25, 20560
  02d4018  addic 28, 28, -23284
  02d401c  addic 30, 30, -23304
  02d4020  addic 29, 29, 29936
  02d4024  addic 31, 31, -23244
  02d4028  addic 26, 26, 24560
  02d402c  lwz 4, 0(28)
  02d4030  addc 6, 27, 26
  02d4034  lwz 5, 0(29)
  02d4038  ori 3, 25, 0
  02d403c  clrldi 6, 6, 32
  02d4040  extsw 5, 5
  02d4044  bl 0xe915c
  02d4048  nop
  02d404c  lwz 3, 0(29)
  02d4050  lwz 4, 0(30)
  02d4054  ori 6, 25, 0
  02d4058  li 7, 152
  02d405c  lwz 5, 0(31)
  02d4060  extsw 3, 3
  02d4064  bl 0x74604
  02d4068  nop
  02d406c  addic 24, 24, 1
  02d4070  addic 28, 28, 4
  02d4074  cmpwi 24, 5
  02d4078  addic 29, 29, 4
  02d407c  addic 30, 30, 4
  02d4080  addic 31, 31, 4
  02d4084  bt 0, 0x2d402c
  02d4088  ld 0, 192(1)
  02d408c  mtlr 0
  02d4090  ld 24, 112(1)
  02d4094  ld 25, 120(1)
  02d4098  ld 26, 128(1)
  02d409c  ld 27, 136(1)
  02d40a0  ld 28, 144(1)
  02d40a4  ld 29, 152(1)
  02d40a8  ld 30, 160(1)
  02d40ac  ld 31, 168(1)
  02d40b0  addi 1, 1, 176
  02d40b4  blr

M1901_002d40b8:   # 0x2d40b8, 0x47c bytes
  02d40b8  stdu 1, -208(1)
  02d40bc  mflr 0
  02d40c0  std 0, 224(1)
  02d40c4  std 31, 200(1)
  02d40c8  std 30, 192(1)
  02d40cc  std 29, 184(1)
  02d40d0  std 28, 176(1)
  02d40d4  std 27, 168(1)
  02d40d8  std 26, 160(1)
  02d40dc  std 25, 152(1)
  02d40e0  std 24, 144(1)
  02d40e4  std 23, 136(1)
  02d40e8  std 22, 128(1)
  02d40ec  std 21, 120(1)
  02d40f0  lwz 31, 120(3)
  02d40f4  bl 0x71170
  02d40f8  nop
  02d40fc  li 3, 0
  02d4100  li 4, 1
  02d4104  li 5, 2
  02d4108  li 6, 1
  02d410c  li 7, 127
  02d4110  bl 0x502ea8
  02d4114  nop
  02d4118  ori 4, 3, 0
  02d411c  li 3, 3
  02d4120  bl 0x174f80
  02d4124  nop
  02d4128  li 3, 0
  02d412c  li 4, 0
  02d4130  li 5, 0
  02d4134  li 6, 0
  02d4138  li 7, 0
  02d413c  li 8, 0
  02d4140  bl 0x502f08
  02d4144  nop
  02d4148  ori 4, 3, 0
  02d414c  li 3, 6
  02d4150  bl 0x174f80
  02d4154  nop
  02d4158  li 3, 0
  02d415c  lis 9, 0
  02d4160  li 4, 0
  02d4164  li 5, 1
  02d4168  li 6, 1
  02d416c  li 7, 1
  02d4170  li 8, 0
  02d4174  ori 9, 9, 65424
  02d4178  bl 0x502fd4
  02d417c  nop
  02d4180  ori 4, 3, 0
  02d4184  li 3, 26
  02d4188  bl 0x174f80
  02d418c  nop
  02d4190  li 3, 0
  02d4194  li 4, 5
  02d4198  li 10, 2
  02d419c  li 5, 96
  02d41a0  li 6, 3
  02d41a4  li 7, 0
  02d41a8  li 8, 0
  02d41ac  li 9, 1
  02d41b0  bl 0x502f7c
  02d41b4  nop
  02d41b8  ori 4, 3, 0
  02d41bc  li 3, 22
  02d41c0  bl 0x174f80
  02d41c4  nop
  02d41c8  lis 26, 144
  02d41cc  li 4, 0
  02d41d0  addic 26, 26, -23532
  02d41d4  lwz 3, 32(26)
  02d41d8  bl 0x4d5fe4
  02d41dc  nop
  02d41e0  lwz 3, 32(26)
  02d41e4  lis 4, 4
  02d41e8  li 29, 0
  02d41ec  ori 30, 4, 772
  02d41f0  li 4, 0
  02d41f4  lwz 5, 8(3)
  02d41f8  stw 30, 0(5)
  02d41fc  lwz 5, 8(3)
  02d4200  stw 29, 4(5)
  02d4204  lwz 5, 8(3)
  02d4208  addic 5, 5, 8
  02d420c  stw 5, 8(3)
  02d4210  lwz 3, 36(26)
  02d4214  bl 0x4d5fe4
  02d4218  nop
  02d421c  lwz 5, 36(26)
  02d4220  lis 3, 149
  02d4224  addic 3, 3, 5376
  02d4228  lwz 4, 8(5)
  02d422c  stw 30, 0(4)
  02d4230  lwz 4, 8(5)
  02d4234  stw 29, 4(4)
  02d4238  lwz 4, 8(5)
  02d423c  lwz 6, 0(31)
  02d4240  addic 7, 4, 8
  02d4244  extsw 4, 6
  02d4248  stw 7, 8(5)
  02d424c  bl 0x110b70
  02d4250  nop
  02d4254  cmpwi 3, 0
  02d4258  bt 2, 0x2d438c
  02d425c  li 3, 44
  02d4260  bl 0x685c4
  02d4264  nop
  02d4268  ori 4, 3, 0
  02d426c  li 3, 24
  02d4270  bl 0x174f80
  02d4274  nop
  02d4278  lis 3, 161
  02d427c  lwz 31, 32(26)
  02d4280  addic 30, 3, 24396
  02d4284  li 3, 44
  02d4288  lwz 29, 28(30)
  02d428c  bl 0x685c4
  02d4290  nop
  02d4294  sldi 4, 3, 5
  02d4298  sldi 3, 3, 2
  02d429c  li 6, 1
  02d42a0  addc 4, 4, 3
  02d42a4  ori 3, 31, 0
  02d42a8  addc 5, 29, 4
  02d42ac  li 4, 0
  02d42b0  clrldi 5, 5, 32
  02d42b4  li 7, 1
  02d42b8  bl 0x4d676c
  02d42bc  nop
  02d42c0  li 3, 44
  02d42c4  lwz 31, 36(26)
  02d42c8  lwz 30, 28(30)
  02d42cc  bl 0x685c4
  02d42d0  nop
  02d42d4  sldi 4, 3, 5
  02d42d8  sldi 3, 3, 2
  02d42dc  li 6, 1
  02d42e0  addc 4, 4, 3
  02d42e4  ori 3, 31, 0
  02d42e8  addc 5, 30, 4
  02d42ec  li 4, 0
  02d42f0  clrldi 5, 5, 32
  02d42f4  li 7, 1
  02d42f8  bl 0x4d676c
  02d42fc  nop
  02d4300  lis 26, 267
  02d4304  lis 30, 124
  02d4308  lis 28, 124
  02d430c  lis 31, 124
  02d4310  lis 29, 124
  02d4314  lis 27, 267
  02d4318  li 25, 0
  02d431c  addic 28, 28, 29816
  02d4320  addic 26, 26, 20560
  02d4324  addic 30, 30, 29776
  02d4328  addic 31, 31, 29896
  02d432c  addic 29, 29, -10336
  02d4330  addic 27, 27, 24576
  02d4334  lwz 4, 0(28)
  02d4338  ori 3, 26, 0
  02d433c  lwz 5, 0(29)
  02d4340  ori 6, 27, 0
  02d4344  extsw 5, 5
  02d4348  bl 0xe915c
  02d434c  nop
  02d4350  lwz 3, 0(29)
  02d4354  lwz 4, 0(30)
  02d4358  ori 6, 26, 0
  02d435c  li 7, 137
  02d4360  lwz 5, 0(31)
  02d4364  extsw 3, 3
  02d4368  bl 0x74604
  02d436c  nop
  02d4370  addic 25, 25, 1
  02d4374  addic 28, 28, 4
  02d4378  cmpwi 25, 10
  02d437c  addic 29, 29, 4
  02d4380  addic 30, 30, 4
  02d4384  addic 31, 31, 4
  02d4388  bt 0, 0x2d4334
  02d438c  li 3, 47
  02d4390  bl 0x685c4
  02d4394  nop
  02d4398  ori 4, 3, 0
  02d439c  li 3, 24
  02d43a0  bl 0x174f80
  02d43a4  nop
  02d43a8  lis 23, 125
  02d43ac  lis 25, 125
  02d43b0  lis 24, 124
  02d43b4  lis 26, 125
  02d43b8  lis 27, 267
  02d43bc  addic 23, 23, -23284
  02d43c0  addic 25, 25, -23304
  02d43c4  addic 24, 24, 29936
  02d43c8  lis 22, 267
  02d43cc  addic 26, 26, -23244
  02d43d0  li 21, 0
  02d43d4  addic 27, 27, 20560
  02d43d8  ori 31, 23, 0
  02d43dc  ori 30, 24, 0
  02d43e0  ori 29, 25, 0
  02d43e4  addic 22, 22, 24560
  02d43e8  ori 28, 26, 0
  02d43ec  lwz 4, 0(23)
  02d43f0  ori 3, 27, 0
  02d43f4  lwz 5, 0(24)
  02d43f8  ori 6, 22, 0
  02d43fc  extsw 5, 5
  02d4400  bl 0xe915c
  02d4404  nop
  02d4408  lwz 3, 0(24)
  02d440c  lwz 4, 0(25)
  02d4410  ori 6, 27, 0
  02d4414  li 7, 152
  02d4418  lwz 5, 0(26)
  02d441c  extsw 3, 3
  02d4420  bl 0x74604
  02d4424  nop
  02d4428  addic 21, 21, 1
  02d442c  addic 23, 23, 4
  02d4430  cmpwi 21, 5
  02d4434  addic 24, 24, 4
  02d4438  addic 25, 25, 4
  02d443c  addic 26, 26, 4
  02d4440  bt 0, 0x2d43ec
  02d4444  lis 3, 124
  02d4448  li 4, 2
  02d444c  addic 7, 3, -10368
  02d4450  li 3, 0
  02d4454  li 5, 2
  02d4458  li 6, 1
  02d445c  lwz 7, 4(7)
  02d4460  bl 0x502ea8
  02d4464  nop
  02d4468  ori 4, 3, 0
  02d446c  li 3, 3
  02d4470  bl 0x174f80
  02d4474  nop
  02d4478  li 3, 48
  02d447c  bl 0x685c4
  02d4480  nop
  02d4484  ori 4, 3, 0
  02d4488  li 3, 24
  02d448c  bl 0x174f80
  02d4490  nop
  02d4494  lis 26, 267
  02d4498  li 25, 0
  02d449c  addic 26, 26, 24568
  02d44a0  lwz 4, 0(31)
  02d44a4  lwz 5, 0(30)
  02d44a8  ori 3, 27, 0
  02d44ac  ori 6, 26, 0
  02d44b0  extsw 5, 5
  02d44b4  bl 0xe915c
  02d44b8  nop
  02d44bc  lwz 3, 0(30)
  02d44c0  ori 6, 27, 0
  02d44c4  lwz 4, 0(29)
  02d44c8  li 7, 152
  02d44cc  lwz 5, 0(28)
  02d44d0  extsw 3, 3
  02d44d4  bl 0x74604
  02d44d8  nop
  02d44dc  addic 25, 25, 1
  02d44e0  addic 31, 31, 4
  02d44e4  cmpwi 25, 5
  02d44e8  addic 30, 30, 4
  02d44ec  addic 29, 29, 4
  02d44f0  addic 28, 28, 4
  02d44f4  bt 0, 0x2d44a0
  02d44f8  ld 0, 224(1)
  02d44fc  mtlr 0
  02d4500  ld 21, 120(1)
  02d4504  ld 22, 128(1)
  02d4508  ld 23, 136(1)
  02d450c  ld 24, 144(1)
  02d4510  ld 25, 152(1)
  02d4514  ld 26, 160(1)
  02d4518  ld 27, 168(1)
  02d451c  ld 28, 176(1)
  02d4520  ld 29, 184(1)
  02d4524  ld 30, 192(1)
  02d4528  ld 31, 200(1)
  02d452c  addi 1, 1, 208
  02d4530  blr

UpdateMoby_1901:   # 0x2d4550, 0x298 bytes
  02d4550  stdu 1, -160(1)
  02d4554  mflr 0
  02d4558  std 0, 176(1)
  02d455c  stfd 29, 136(1)
  02d4560  stfd 30, 144(1)
  02d4564  stfd 31, 152(1)
  02d4568  std 31, 128(1)
  02d456c  ori 31, 3, 0
  02d4570  lbz 3, 32(3)
  02d4574  cmpwi 3, 0
  02d4578  cmpwi 1, 3, 1
  02d457c  std 30, 120(1)
  02d4580  cmpwi 6, 3, -1
  02d4584  bt 1, 0x2d4590
  02d4588  bf 25, 0x2d47c4
  02d458c  b 0x2d4598
  02d4590  bf 5, 0x2d4668
  02d4594  b 0x2d47c4
  02d4598  lis 3, 267
  02d459c  lwz 3, 20544(3)
  02d45a0  cmpwi 3, 0
  02d45a4  bf 2, 0x2d4620
  02d45a8  lis 3, 45
  02d45ac  lis 5, 124
  02d45b0  addi 30, 3, 17716
  02d45b4  lis 3, 125
  02d45b8  addic 5, 5, 29936
  02d45bc  addic 3, 3, -23244
  02d45c0  li 4, 5
  02d45c4  lfs 31, 0(30)
  02d45c8  li 10, 1
  02d45cc  lfs 30, 4(30)
  02d45d0  lfs 29, 8(30)
  02d45d4  fmr 1, 31
  02d45d8  fmr 3, 30
  02d45dc  fmr 2, 29
  02d45e0  fmr 4, 29
  02d45e4  bl 0x2d3da8
  02d45e8  lis 3, 124
  02d45ec  lfs 2, 12(30)
  02d45f0  lis 5, 124
  02d45f4  fmr 1, 31
  02d45f8  addic 3, 3, 29896
  02d45fc  fmr 3, 30
  02d4600  li 10, 1
  02d4604  fmr 4, 29
  02d4608  addic 5, 5, -10336
  02d460c  li 4, 10
  02d4610  bl 0x2d3da8
  02d4614  lis 3, 267
  02d4618  li 4, 1
  02d461c  stw 4, 20544(3)
  02d4620  li 4, 1
  02d4624  li 6, 255
  02d4628  lis 5, 267
  02d462c  li 3, 0
  02d4630  stb 4, 32(31)
  02d4634  addic 5, 5, 24560
  02d4638  stb 6, 48(31)
  02d463c  sth 6, 50(31)
  02d4640  addic 4, 5, 4
  02d4644  ori 31, 3, 0
  02d4648  addic 3, 3, 1
  02d464c  stw 31, 0(5)
  02d4650  cmpwi 3, 2
  02d4654  stw 31, 0(4)
  02d4658  addic 5, 5, 8
  02d465c  addic 4, 4, 8
  02d4660  bt 0, 0x2d4648
  02d4664  b 0x2d47c4
  02d4668  lis 3, 45
  02d466c  lis 8, 114
  02d4670  addi 4, 3, 17716
  02d4674  lis 6, 267
  02d4678  lis 5, 124
  02d467c  addic 6, 6, 24560
  02d4680  lis 7, 124
  02d4684  lfs 3, 16(4)
  02d4688  li 3, 0
  02d468c  lfs 2, 20(4)
  02d4690  addic 7, 7, -10352
  02d4694  addic 4, 6, 4
  02d4698  lfs 1, -3036(8)
  02d469c  addic 5, 5, -10348
  02d46a0  lfs 4, 0(6)
  02d46a4  lfs 5, 0(7)
  02d46a8  fmadds 4, 5, 1, 4
  02d46ac  fcmpu 0, 4, 3
  02d46b0  stfs 4, 0(6)
  02d46b4  cror 6, 0, 2
  02d46b8  bt 6, 0x2d46c4
  02d46bc  fsubs 4, 4, 3
  02d46c0  stfs 4, 0(6)
  02d46c4  fcmpu 0, 4, 2
  02d46c8  cror 6, 1, 2
  02d46cc  bt 6, 0x2d46d8
  02d46d0  fadds 4, 4, 3
  02d46d4  stfs 4, 0(6)
  02d46d8  lfs 4, 0(4)
  02d46dc  lfs 5, 0(5)
  02d46e0  fmadds 4, 5, 1, 4
  02d46e4  fcmpu 0, 4, 3
  02d46e8  stfs 4, 0(4)
  02d46ec  cror 6, 0, 2
  02d46f0  bt 6, 0x2d46fc
  02d46f4  fsubs 4, 4, 3
  02d46f8  stfs 4, 0(4)
  02d46fc  fcmpu 0, 4, 2
  02d4700  cror 6, 1, 2
  02d4704  bt 6, 0x2d4710
  02d4708  fadds 4, 4, 3
  02d470c  stfs 4, 0(4)
  02d4710  addic 3, 3, 1
  02d4714  addic 7, 7, 8
  02d4718  cmpwi 3, 2
  02d471c  addic 6, 6, 8
  02d4720  addic 5, 5, 8
  02d4724  addic 4, 4, 8
  02d4728  bt 0, 0x2d46a0
  02d472c  lis 3, 267
  02d4730  lis 4, 124
  02d4734  lfs 4, 24576(3)
  02d4738  lfs 5, -10360(4)
  02d473c  fmadds 4, 5, 1, 4
  02d4740  fcmpu 0, 4, 3
  02d4744  stfs 4, 24576(3)
  02d4748  cror 6, 0, 2
  02d474c  bt 6, 0x2d4758
  02d4750  fsubs 4, 4, 3
  02d4754  stfs 4, 24576(3)
  02d4758  fcmpu 0, 4, 2
  02d475c  cror 6, 1, 2
  02d4760  bt 6, 0x2d476c
  02d4764  fadds 4, 4, 3
  02d4768  stfs 4, 24576(3)
  02d476c  lis 4, 124
  02d4770  addic 3, 3, 24576
  02d4774  addic 4, 4, -10360
  02d4778  lfs 4, 4(3)
  02d477c  lfs 5, 4(4)
  02d4780  fmadds 1, 5, 1, 4
  02d4784  fcmpu 0, 1, 3
  02d4788  stfs 1, 4(3)
  02d478c  cror 6, 0, 2
  02d4790  bt 6, 0x2d479c
  02d4794  fsubs 1, 1, 3
  02d4798  stfs 1, 4(3)
  02d479c  fcmpu 0, 1, 2
  02d47a0  cror 6, 1, 2
  02d47a4  bt 6, 0x2d47b0
  02d47a8  fadds 1, 1, 3
  02d47ac  stfs 1, 4(3)
  02d47b0  lis 3, 113
  02d47b4  ori 4, 31, 0
  02d47b8  addic 3, 3, -19696
  02d47bc  bl 0x6d760
  02d47c0  nop
  02d47c4  ld 0, 176(1)
  02d47c8  mtlr 0
  02d47cc  lfd 29, 136(1)
  02d47d0  lfd 30, 144(1)
  02d47d4  lfd 31, 152(1)
  02d47d8  ld 30, 120(1)
  02d47dc  ld 31, 128(1)
  02d47e0  addi 1, 1, 160
  02d47e4  blr
