# game/update/moby1118.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1118_001d4010:   # 0x1d4010, 0x14 bytes
  01d4010  lis 3, 118
  01d4014  lis 4, 1
  01d4018  addic 3, 3, 17540
  01d401c  stw 4, 72(3)
  01d4020  blr

M1118_001d4048:   # 0x1d4048, 0x284 bytes
  01d4048  stdu 1, -336(1)
  01d404c  mflr 0
  01d4050  std 0, 352(1)
  01d4054  stfd 23, 264(1)
  01d4058  stfd 24, 272(1)
  01d405c  stfd 25, 280(1)
  01d4060  stfd 26, 288(1)
  01d4064  stfd 27, 296(1)
  01d4068  stfd 28, 304(1)
  01d406c  stfd 29, 312(1)
  01d4070  stfd 30, 320(1)
  01d4074  stfd 31, 328(1)
  01d4078  std 30, 248(1)
  01d407c  lis 3, 118
  01d4080  std 31, 256(1)
  01d4084  li 30, 0
  01d4088  ori 31, 4, 0
  01d408c  stw 30, 140(1)
  01d4090  lwz 3, 17668(3)
  01d4094  stw 30, 136(1)
  01d4098  cmpwi 3, 0
  01d409c  stw 30, 132(1)
  01d40a0  std 29, 240(1)
  01d40a4  std 28, 232(1)
  01d40a8  std 27, 224(1)
  01d40ac  std 26, 216(1)
  01d40b0  std 25, 208(1)
  01d40b4  stw 30, 128(1)
  01d40b8  bf 1, 0x1d427c
  01d40bc  lis 3, 29
  01d40c0  ori 29, 30, 0
  01d40c4  addi 3, 3, 16424
  01d40c8  lfs 25, 0(3)
  01d40cc  lfs 26, 4(3)
  01d40d0  lfs 27, 8(3)
  01d40d4  lfs 28, 12(3)
  01d40d8  lfs 29, 16(3)
  01d40dc  lfs 30, 20(3)
  01d40e0  lfs 31, 24(3)
  01d40e4  fmr 1, 25
  01d40e8  fmr 2, 26
  01d40ec  bl 0xfcbe8
  01d40f0  nop
  01d40f4  lis 3, 114
  01d40f8  lis 4, 20224
  01d40fc  lis 6, 20224
  01d4100  ori 4, 4, 36863
  01d4104  lis 5, 12287
  01d4108  lfs 2, -3052(3)
  01d410c  ori 6, 6, 32767
  01d4110  lis 3, 20224
  01d4114  stw 4, 144(1)
  01d4118  ori 3, 3, 28671
  01d411c  stw 4, 148(1)
  01d4120  ori 5, 5, 65535
  01d4124  stw 6, 152(1)
  01d4128  lis 4, 12032
  01d412c  fmuls 24, 1, 2
  01d4130  lis 7, 12032
  01d4134  stw 3, 156(1)
  01d4138  ori 3, 4, 24447
  01d413c  stw 5, 160(1)
  01d4140  lis 6, 12032
  01d4144  stw 5, 164(1)
  01d4148  ori 4, 7, 20351
  01d414c  lis 5, 12032
  01d4150  ori 6, 6, 16255
  01d4154  stw 3, 168(1)
  01d4158  ori 5, 5, 79
  01d415c  lis 7, 12032
  01d4160  stw 4, 172(1)
  01d4164  li 3, 6
  01d4168  lis 4, 16128
  01d416c  stw 6, 176(1)
  01d4170  stw 5, 180(1)
  01d4174  stw 7, 184(1)
  01d4178  stw 4, 188(1)
  01d417c  bl 0xfc620
  01d4180  nop
  01d4184  sldi 3, 3, 2
  01d4188  addc 3, 3, 1
  01d418c  clrldi 4, 3, 32
  01d4190  li 3, 6
  01d4194  lwz 4, 144(4)
  01d4198  extsw 28, 4
  01d419c  bl 0xfc620
  01d41a0  nop
  01d41a4  lis 27, 114
  01d41a8  sldi 3, 3, 2
  01d41ac  lis 26, 118
  01d41b0  addc 3, 3, 1
  01d41b4  lfs 1, -3056(27)
  01d41b8  clrldi 3, 3, 32
  01d41bc  fmuls 2, 1, 28
  01d41c0  fmuls 1, 1, 29
  01d41c4  lfs 3, 17664(26)
  01d41c8  fmuls 23, 3, 27
  01d41cc  lwz 3, 168(3)
  01d41d0  extsw 25, 3
  01d41d4  fctiwz 2, 2
  01d41d8  fctiwz 1, 1
  01d41dc  stfd 2, 192(1)
  01d41e0  lwz 3, 196(1)
  01d41e4  stfd 1, 192(1)
  01d41e8  lwz 4, 196(1)
  01d41ec  extsw 3, 3
  01d41f0  extsw 4, 4
  01d41f4  bl 0xfe484
  01d41f8  nop
  01d41fc  lfs 1, -3056(27)
  01d4200  ori 27, 3, 0
  01d4204  fmuls 2, 1, 30
  01d4208  fmuls 1, 1, 31
  01d420c  fctiwz 2, 2
  01d4210  fctiwz 1, 1
  01d4214  stfd 2, 192(1)
  01d4218  lwz 3, 196(1)
  01d421c  stfd 1, 192(1)
  01d4220  lwz 4, 196(1)
  01d4224  extsw 3, 3
  01d4228  extsw 4, 4
  01d422c  bl 0xfe484
  01d4230  nop
  01d4234  ori 9, 3, 0
  01d4238  lfs 2, 17664(26)
  01d423c  ori 3, 31, 0
  01d4240  std 30, 112(1)
  01d4244  addic 4, 1, 128
  01d4248  fmr 1, 23
  01d424c  ori 5, 28, 0
  01d4250  fmuls 2, 2, 24
  01d4254  ori 6, 25, 0
  01d4258  std 30, 120(1)
  01d425c  ori 8, 27, 0
  01d4260  bl 0x123390
  01d4264  nop
  01d4268  lis 3, 118
  01d426c  addic 29, 29, 1
  01d4270  lwz 3, 17668(3)
  01d4274  cmpw 29, 3
  01d4278  bt 0, 0x1d40e4
  01d427c  ld 0, 352(1)
  01d4280  mtlr 0
  01d4284  lfd 23, 264(1)
  01d4288  lfd 24, 272(1)
  01d428c  lfd 25, 280(1)
  01d4290  lfd 26, 288(1)
  01d4294  lfd 27, 296(1)
  01d4298  lfd 28, 304(1)
  01d429c  lfd 29, 312(1)
  01d42a0  lfd 30, 320(1)
  01d42a4  lfd 31, 328(1)
  01d42a8  ld 25, 208(1)
  01d42ac  ld 26, 216(1)
  01d42b0  ld 27, 224(1)
  01d42b4  ld 28, 232(1)
  01d42b8  ld 29, 240(1)
  01d42bc  ld 30, 248(1)
  01d42c0  ld 31, 256(1)
  01d42c4  addi 1, 1, 336
  01d42c8  blr

UpdateMoby_1118:   # 0x1d4308, 0x9a8 bytes
  01d4308  stdu 1, -320(1)
  01d430c  mflr 0
  01d4310  std 0, 336(1)
  01d4314  stfd 29, 296(1)
  01d4318  stfd 30, 304(1)
  01d431c  stfd 31, 312(1)
  01d4320  std 30, 280(1)
  01d4324  ori 30, 3, 0
  01d4328  std 31, 288(1)
  01d432c  lbz 3, 32(30)
  01d4330  lwz 31, 120(30)
  01d4334  cmpwi 3, 6
  01d4338  cmpwi 1, 3, 5
  01d433c  cmpwi 6, 3, 4
  01d4340  std 29, 272(1)
  01d4344  std 28, 264(1)
  01d4348  std 27, 256(1)
  01d434c  std 26, 248(1)
  01d4350  cmpwi 7, 3, 3
  01d4354  bt 2, 0x1d4aec
  01d4358  bt 6, 0x1d47a4
  01d435c  bt 26, 0x1d45dc
  01d4360  bt 30, 0x1d4500
  01d4364  cmpwi 3, 2
  01d4368  bt 2, 0x1d43ac
  01d436c  cmpwi 3, 0
  01d4370  bf 2, 0x1d4c7c
  01d4374  li 3, 255
  01d4378  lis 4, 29
  01d437c  addi 4, 4, 17100
  01d4380  stb 3, 48(30)
  01d4384  lfs 1, 64(30)
  01d4388  lfs 2, 0(4)
  01d438c  bl 0x5025e0
  01d4390  nop
  01d4394  li 3, 1
  01d4398  stfs 1, 64(30)
  01d439c  li 4, -1
  01d43a0  stb 3, 32(30)
  01d43a4  stw 4, 72(31)
  01d43a8  b 0x1d4c7c
  01d43ac  lis 3, 29
  01d43b0  lis 4, 114
  01d43b4  addi 29, 3, 17100
  01d43b8  lis 6, 114
  01d43bc  addic 5, 31, 48
  01d43c0  addic 3, 31, 44
  01d43c4  lis 28, 16256
  01d43c8  lfs 1, 4(29)
  01d43cc  lfs 3, -3048(4)
  01d43d0  lfs 4, -3052(6)
  01d43d4  fmr 2, 3
  01d43d8  bl 0x109c30
  01d43dc  nop
  01d43e0  lfs 3, 0(29)
  01d43e4  lfs 2, 48(31)
  01d43e8  lfs 1, 64(30)
  01d43ec  fmuls 31, 2, 3
  01d43f0  fmr 2, 31
  01d43f4  bl 0x502578
  01d43f8  nop
  01d43fc  lis 29, 164
  01d4400  lwz 3, 56(31)
  01d4404  stfs 1, 64(30)
  01d4408  fmr 2, 31
  01d440c  slwi 3, 3, 8
  01d4410  lwz 4, -28512(29)
  01d4414  addc 3, 4, 3
  01d4418  clrldi 3, 3, 32
  01d441c  lfs 1, 64(3)
  01d4420  bl 0x5025e0
  01d4424  nop
  01d4428  lwz 3, 56(31)
  01d442c  lwz 4, -28512(29)
  01d4430  slwi 3, 3, 8
  01d4434  fmr 2, 31
  01d4438  addc 3, 4, 3
  01d443c  clrldi 3, 3, 32
  01d4440  stfs 1, 64(3)
  01d4444  lwz 3, 60(31)
  01d4448  lwz 4, -28512(29)
  01d444c  slwi 3, 3, 8
  01d4450  addc 3, 4, 3
  01d4454  clrldi 3, 3, 32
  01d4458  lfs 1, 64(3)
  01d445c  bl 0x5025e0
  01d4460  nop
  01d4464  lwz 3, 60(31)
  01d4468  lwz 4, -28512(29)
  01d446c  slwi 3, 3, 8
  01d4470  addc 3, 4, 3
  01d4474  clrldi 3, 3, 32
  01d4478  stfs 1, 64(3)
  01d447c  lwz 3, 56(31)
  01d4480  lwz 4, -28512(29)
  01d4484  slwi 3, 3, 8
  01d4488  addc 3, 4, 3
  01d448c  clrldi 3, 3, 32
  01d4490  bl 0xf31a8
  01d4494  nop
  01d4498  lwz 3, 60(31)
  01d449c  lwz 4, -28512(29)
  01d44a0  slwi 3, 3, 8
  01d44a4  addc 3, 4, 3
  01d44a8  clrldi 3, 3, 32
  01d44ac  bl 0xf31a8
  01d44b0  nop
  01d44b4  lwz 3, 44(31)
  01d44b8  srawi 4, 3, 31
  01d44bc  srwi 5, 4, 1
  01d44c0  xor 3, 5, 3
  01d44c4  subc 3, 3, 4
  01d44c8  cmpw 3, 28
  01d44cc  bt 0, 0x1d4c7c
  01d44d0  li 6, 3
  01d44d4  li 3, 1
  01d44d8  li 4, 0
  01d44dc  ori 5, 30, 0
  01d44e0  stb 6, 32(30)
  01d44e4  bl 0x15d12c
  01d44e8  nop
  01d44ec  lis 3, 151
  01d44f0  li 4, 1
  01d44f4  addic 3, 3, -16400
  01d44f8  stb 4, 34(3)
  01d44fc  b 0x1d4c7c
  01d4500  lis 3, 151
  01d4504  lfs 1, 20(30)
  01d4508  addic 3, 3, -25376
  01d450c  lfs 2, 132(3)
  01d4510  lfs 3, 128(3)
  01d4514  fsubs 1, 2, 1
  01d4518  lfs 2, 16(30)
  01d451c  fsubs 2, 3, 2
  01d4520  lis 3, 29
  01d4524  addi 3, 3, 17100
  01d4528  fmuls 1, 1, 1
  01d452c  fmadds 1, 2, 2, 1
  01d4530  lfs 2, 8(3)
  01d4534  fsqrts 1, 1
  01d4538  fcmpu 0, 1, 2
  01d453c  cror 6, 1, 2
  01d4540  bt 6, 0x1d4c7c
  01d4544  li 4, 6019
  01d4548  li 3, 4
  01d454c  bl 0x11aeec
  01d4550  nop
  01d4554  lis 4, 150
  01d4558  addic 4, 4, 19008
  01d455c  lwz 4, 164(4)
  01d4560  rlwinm 4, 4, 0, 27, 27
  01d4564  cmpwi 4, 0
  01d4568  bt 2, 0x1d4c7c
  01d456c  cmpwi 3, 0
  01d4570  bt 2, 0x1d4c7c
  01d4574  li 3, 2
  01d4578  li 4, 0
  01d457c  ori 5, 30, 0
  01d4580  bl 0x15d12c
  01d4584  nop
  01d4588  li 3, 4
  01d458c  bl 0x11b0b0
  01d4590  nop
  01d4594  lis 3, 29
  01d4598  vspltisw 2, -1
  01d459c  li 4, 4
  01d45a0  addi 3, 3, 17100
  01d45a4  li 6, 12
  01d45a8  lis 5, 114
  01d45ac  stb 4, 32(30)
  01d45b0  li 4, -3056
  01d45b4  vslw 2, 2, 2
  01d45b8  <unknown>
  01d45bc  li 3, 64
  01d45c0  vspltw 3, 3, 0
  01d45c4  <unknown>
  01d45c8  vmaddfp 2, 4, 3, 2
  01d45cc  vctsxs 2, 2, 0
  01d45d0  vspltw 2, 2, 0
  01d45d4  stvewx 2, 3, 31
  01d45d8  b 0x1d4c7c
  01d45dc  addic 3, 31, 64
  01d45e0  bl 0x4fff60
  01d45e4  nop
  01d45e8  cmpwi 3, 0
  01d45ec  bt 2, 0x1d4730
  01d45f0  lis 3, 165
  01d45f4  lwz 4, 0(31)
  01d45f8  lis 6, 29
  01d45fc  slwi 5, 4, 7
  01d4600  slwi 4, 4, 7
  01d4604  lwz 3, 7128(3)
  01d4608  addi 29, 6, 17100
  01d460c  addc 5, 3, 5
  01d4610  addc 3, 3, 4
  01d4614  clrldi 5, 5, 32
  01d4618  clrldi 3, 3, 32
  01d461c  li 4, 5
  01d4620  lfs 1, 48(5)
  01d4624  stfs 1, 112(1)
  01d4628  lfs 1, 52(5)
  01d462c  stfs 1, 116(1)
  01d4630  lfs 1, 56(5)
  01d4634  stfs 1, 120(1)
  01d4638  lfs 1, 60(5)
  01d463c  li 5, 0
  01d4640  stfs 1, 124(1)
  01d4644  lfs 1, 112(3)
  01d4648  stfs 1, 128(1)
  01d464c  lfs 1, 116(3)
  01d4650  stfs 1, 132(1)
  01d4654  lfs 1, 120(3)
  01d4658  stfs 1, 136(1)
  01d465c  lfs 1, 124(3)
  01d4660  stb 4, 32(30)
  01d4664  lis 30, 114
  01d4668  stfs 1, 140(1)
  01d466c  stw 5, 44(31)
  01d4670  stw 5, 48(31)
  01d4674  lfs 1, 16(29)
  01d4678  lfs 2, -3056(30)
  01d467c  fmuls 1, 2, 1
  01d4680  fctiwz 1, 1
  01d4684  stfd 1, 224(1)
  01d4688  lwz 3, 228(1)
  01d468c  extsw 3, 3
  01d4690  bl 0x6dad0
  01d4694  nop
  01d4698  lfs 1, 20(29)
  01d469c  lfs 2, -3056(30)
  01d46a0  addic 29, 1, 128
  01d46a4  addic 30, 1, 112
  01d46a8  fmuls 1, 2, 1
  01d46ac  ori 3, 30, 0
  01d46b0  ori 4, 29, 0
  01d46b4  li 5, 2
  01d46b8  li 7, 0
  01d46bc  fctiwz 1, 1
  01d46c0  stfd 1, 224(1)
  01d46c4  lwz 6, 228(1)
  01d46c8  extsw 6, 6
  01d46cc  bl 0x47f74
  01d46d0  nop
  01d46d4  lis 3, 118
  01d46d8  lis 5, 118
  01d46dc  lis 4, 118
  01d46e0  lis 7, 239
  01d46e4  lis 8, 118
  01d46e8  lis 6, 239
  01d46ec  lfs 1, 17648(3)
  01d46f0  lfs 2, 17652(5)
  01d46f4  lfs 5, 17660(4)
  01d46f8  lfs 3, 9920(7)
  01d46fc  lfs 4, 17656(8)
  01d4700  lfs 6, 9924(6)
  01d4704  bl 0x47f48
  01d4708  nop
  01d470c  ori 3, 30, 0
  01d4710  bl 0x47b98
  01d4714  nop
  01d4718  ori 3, 29, 0
  01d471c  bl 0x47c08
  01d4720  nop
  01d4724  lis 3, 150
  01d4728  li 4, 1
  01d472c  stw 4, -12480(3)
  01d4730  lis 3, 29
  01d4734  lis 4, 114
  01d4738  addi 3, 3, 17100
  01d473c  lfs 31, 24(3)
  01d4740  lfs 1, -3056(4)
  01d4744  lwz 31, 64(31)
  01d4748  fmuls 1, 1, 31
  01d474c  fctiwz 1, 1
  01d4750  stfd 1, 224(1)
  01d4754  lwz 3, 228(1)
  01d4758  cmpw 31, 3
  01d475c  bf 0, 0x1d4c7c
  01d4760  extsw 3, 31
  01d4764  bl 0x502730
  01d4768  nop
  01d476c  lis 3, 114
  01d4770  lfs 2, -3056(3)
  01d4774  fmuls 2, 2, 31
  01d4778  lis 3, 29
  01d477c  lis 4, 150
  01d4780  addi 3, 3, 17100
  01d4784  fctidz 2, 2
  01d4788  fcfid 2, 2
  01d478c  frsp 2, 2
  01d4790  fdivs 1, 1, 2
  01d4794  lfs 2, 4(3)
  01d4798  fsubs 1, 2, 1
  01d479c  stfs 1, -12528(4)
  01d47a0  b 0x1d4c7c
  01d47a4  lis 3, 29
  01d47a8  lis 4, 114
  01d47ac  addi 3, 3, 17100
  01d47b0  lfs 31, 24(3)
  01d47b4  lfs 1, -3056(4)
  01d47b8  lwz 3, 64(31)
  01d47bc  fmuls 1, 1, 31
  01d47c0  fctiwz 1, 1
  01d47c4  stfd 1, 224(1)
  01d47c8  lwz 4, 228(1)
  01d47cc  cmpw 3, 4
  01d47d0  bf 0, 0x1d481c
  01d47d4  addic 4, 3, 1
  01d47d8  extsw 3, 4
  01d47dc  stw 4, 64(31)
  01d47e0  bl 0x502730
  01d47e4  nop
  01d47e8  lis 3, 114
  01d47ec  lfs 2, -3056(3)
  01d47f0  fmuls 2, 2, 31
  01d47f4  lis 3, 29
  01d47f8  addi 3, 3, 17100
  01d47fc  fctidz 2, 2
  01d4800  fcfid 2, 2
  01d4804  frsp 2, 2
  01d4808  fdivs 1, 1, 2
  01d480c  lfs 2, 4(3)
  01d4810  lis 3, 150
  01d4814  fsubs 1, 2, 1
  01d4818  stfs 1, -12528(3)
  01d481c  lis 3, 29
  01d4820  lfs 30, 44(31)
  01d4824  lis 4, 114
  01d4828  addi 29, 3, 17100
  01d482c  lis 6, 114
  01d4830  addic 5, 31, 48
  01d4834  addic 3, 31, 44
  01d4838  lfs 4, 32(29)
  01d483c  lfs 1, 28(29)
  01d4840  lfs 3, -3048(4)
  01d4844  lfs 5, -3052(6)
  01d4848  fmr 2, 3
  01d484c  fmuls 4, 5, 4
  01d4850  bl 0x109c30
  01d4854  nop
  01d4858  lis 27, 165
  01d485c  lwz 3, 0(31)
  01d4860  slwi 3, 3, 7
  01d4864  lwz 4, 7128(27)
  01d4868  addc 3, 4, 3
  01d486c  clrldi 3, 3, 32
  01d4870  lfs 1, 48(3)
  01d4874  stfs 1, 144(1)
  01d4878  lfs 1, 52(3)
  01d487c  stfs 1, 148(1)
  01d4880  lfs 1, 56(3)
  01d4884  stfs 1, 152(1)
  01d4888  lfs 2, 60(3)
  01d488c  addic 3, 1, 144
  01d4890  stfs 2, 156(1)
  01d4894  lfs 2, 36(29)
  01d4898  lfs 3, 44(31)
  01d489c  fmadds 1, 3, 2, 1
  01d48a0  stfs 1, 152(1)
  01d48a4  bl 0x47b98
  01d48a8  nop
  01d48ac  lwz 3, 0(31)
  01d48b0  lwz 4, 7128(27)
  01d48b4  slwi 3, 3, 7
  01d48b8  addc 3, 4, 3
  01d48bc  addic 3, 3, 112
  01d48c0  clrldi 3, 3, 32
  01d48c4  bl 0x47c08
  01d48c8  nop
  01d48cc  lfs 1, 40(29)
  01d48d0  li 26, 0
  01d48d4  lfs 2, 44(29)
  01d48d8  ori 28, 31, 0
  01d48dc  lfs 3, 44(31)
  01d48e0  fmuls 29, 30, 1
  01d48e4  ori 29, 26, 0
  01d48e8  fmuls 30, 3, 1
  01d48ec  fmuls 29, 29, 2
  01d48f0  fmuls 30, 30, 2
  01d48f4  lwz 3, 8(28)
  01d48f8  lwz 4, 7128(27)
  01d48fc  slwi 3, 3, 7
  01d4900  addc 3, 4, 3
  01d4904  clrldi 4, 3, 32
  01d4908  lfs 1, 120(4)
  01d490c  fcmpu 1, 1, 30
  01d4910  fcmpu 0, 1, 29
  01d4914  crnand 2, 1, 4
  01d4918  bt 2, 0x1d4940
  01d491c  addic 4, 3, 48
  01d4920  ori 3, 30, 0
  01d4924  clrldi 4, 4, 32
  01d4928  bl 0x1d4048
  01d492c  li 3, 0
  01d4930  li 4, 0
  01d4934  ori 5, 30, 0
  01d4938  bl 0x15d380
  01d493c  nop
  01d4940  addic 26, 26, 1
  01d4944  addic 28, 28, 4
  01d4948  cmpwi 26, 9
  01d494c  bt 0, 0x1d48f4
  01d4950  lwz 4, 44(31)
  01d4954  lis 3, 16265
  01d4958  srawi 5, 4, 31
  01d495c  ori 3, 3, 39322
  01d4960  srwi 6, 5, 1
  01d4964  xor 4, 6, 4
  01d4968  subc 4, 4, 5
  01d496c  cmpw 4, 3
  01d4970  bt 0, 0x1d4c7c
  01d4974  lwz 3, 4(31)
  01d4978  lwz 4, 7128(27)
  01d497c  li 5, 114
  01d4980  slwi 3, 3, 7
  01d4984  li 6, 0
  01d4988  addc 3, 4, 3
  01d498c  addic 4, 3, 48
  01d4990  addic 7, 3, 112
  01d4994  clrldi 3, 4, 32
  01d4998  clrldi 4, 7, 32
  01d499c  bl 0xa0c38
  01d49a0  nop
  01d49a4  lis 28, 114
  01d49a8  lfs 1, -3056(28)
  01d49ac  fmuls 1, 1, 31
  01d49b0  fctiwz 1, 1
  01d49b4  stfd 1, 224(1)
  01d49b8  lwz 3, 228(1)
  01d49bc  extsw 3, 3
  01d49c0  bl 0x6dad0
  01d49c4  nop
  01d49c8  li 4, 6
  01d49cc  li 3, 3
  01d49d0  stb 4, 32(30)
  01d49d4  bl 0x481d0
  01d49d8  nop
  01d49dc  lwz 3, 4(31)
  01d49e0  lwz 4, 7128(27)
  01d49e4  slwi 3, 3, 7
  01d49e8  addc 3, 4, 3
  01d49ec  lis 4, 29
  01d49f0  clrldi 3, 3, 32
  01d49f4  addi 31, 4, 17100
  01d49f8  lis 4, -16762
  01d49fc  lfs 1, 48(3)
  01d4a00  stfs 1, 176(1)
  01d4a04  lfs 1, 52(3)
  01d4a08  stfs 1, 180(1)
  01d4a0c  lfs 2, 56(3)
  01d4a10  ori 4, 4, 2706
  01d4a14  stfs 2, 184(1)
  01d4a18  lfs 3, 60(3)
  01d4a1c  lis 3, 151
  01d4a20  stfs 3, 188(1)
  01d4a24  lfs 3, 4(31)
  01d4a28  addic 3, 3, -25376
  01d4a2c  fadds 2, 2, 3
  01d4a30  li 5, 2
  01d4a34  li 7, 0
  01d4a38  lfs 3, 152(3)
  01d4a3c  lfs 4, -3056(28)
  01d4a40  addic 3, 1, 176
  01d4a44  stfs 2, 184(1)
  01d4a48  lfs 2, 48(31)
  01d4a4c  stw 29, 168(1)
  01d4a50  fsubs 1, 1, 2
  01d4a54  stw 29, 172(1)
  01d4a58  stw 29, 164(1)
  01d4a5c  stw 29, 160(1)
  01d4a60  stfs 3, 168(1)
  01d4a64  stw 4, 164(1)
  01d4a68  addic 4, 1, 160
  01d4a6c  stfs 1, 180(1)
  01d4a70  lfs 1, 20(31)
  01d4a74  fmuls 1, 4, 1
  01d4a78  fctiwz 1, 1
  01d4a7c  stfd 1, 224(1)
  01d4a80  lwz 6, 228(1)
  01d4a84  extsw 6, 6
  01d4a88  bl 0x47f74
  01d4a8c  nop
  01d4a90  lis 3, 149
  01d4a94  vspltisw 2, -1
  01d4a98  lis 4, 16025
  01d4a9c  addic 6, 3, 5056
  01d4aa0  li 5, 52
  01d4aa4  ori 3, 4, 39322
  01d4aa8  li 4, -3056
  01d4aac  vslw 2, 2, 2
  01d4ab0  li 7, 360
  01d4ab4  stw 3, 352(6)
  01d4ab8  <unknown>
  01d4abc  <unknown>
  01d4ac0  vspltw 3, 3, 0
  01d4ac4  li 3, 0
  01d4ac8  li 4, 0
  01d4acc  ori 5, 30, 0
  01d4ad0  vmaddfp 2, 4, 3, 2
  01d4ad4  vctsxs 2, 2, 0
  01d4ad8  vspltw 2, 2, 0
  01d4adc  stvewx 2, 7, 6
  01d4ae0  bl 0x15d380
  01d4ae4  nop
  01d4ae8  b 0x1d4c7c
  01d4aec  lis 3, 29
  01d4af0  lis 4, 114
  01d4af4  addi 29, 3, 17100
  01d4af8  lis 6, 114
  01d4afc  addic 3, 31, 44
  01d4b00  lis 28, 16384
  01d4b04  addic 5, 31, 48
  01d4b08  lfs 1, 28(29)
  01d4b0c  lfs 3, -3048(4)
  01d4b10  lfs 4, -3052(6)
  01d4b14  fmr 2, 3
  01d4b18  fmuls 4, 4, 1
  01d4b1c  bl 0x109c30
  01d4b20  nop
  01d4b24  lis 3, 165
  01d4b28  lwz 4, 4(31)
  01d4b2c  lis 6, -16762
  01d4b30  slwi 4, 4, 7
  01d4b34  lwz 3, 7128(3)
  01d4b38  addc 3, 3, 4
  01d4b3c  clrldi 3, 3, 32
  01d4b40  li 4, 0
  01d4b44  ori 6, 6, 2706
  01d4b48  lfs 1, 48(3)
  01d4b4c  stfs 1, 208(1)
  01d4b50  lfs 1, 52(3)
  01d4b54  stfs 1, 212(1)
  01d4b58  lfs 2, 56(3)
  01d4b5c  stfs 2, 216(1)
  01d4b60  lfs 3, 60(3)
  01d4b64  lis 3, 151
  01d4b68  stfs 3, 220(1)
  01d4b6c  lfs 3, 4(29)
  01d4b70  addic 5, 3, -25376
  01d4b74  fadds 2, 2, 3
  01d4b78  addic 3, 1, 208
  01d4b7c  lfs 3, 152(5)
  01d4b80  stfs 2, 216(1)
  01d4b84  lfs 2, 48(29)
  01d4b88  stw 4, 200(1)
  01d4b8c  fsubs 1, 1, 2
  01d4b90  stw 4, 204(1)
  01d4b94  stw 4, 196(1)
  01d4b98  stw 4, 192(1)
  01d4b9c  stfs 3, 200(1)
  01d4ba0  stw 6, 196(1)
  01d4ba4  stfs 1, 212(1)
  01d4ba8  bl 0x47b98
  01d4bac  nop
  01d4bb0  addic 3, 1, 192
  01d4bb4  bl 0x47c08
  01d4bb8  nop
  01d4bbc  lwz 3, 44(31)
  01d4bc0  srawi 4, 3, 31
  01d4bc4  srwi 5, 4, 1
  01d4bc8  xor 3, 5, 3
  01d4bcc  subc 3, 3, 4
  01d4bd0  cmpw 3, 28
  01d4bd4  bt 0, 0x1d4c7c
  01d4bd8  lis 3, 29
  01d4bdc  vspltisw 2, -1
  01d4be0  li 4, 7
  01d4be4  addi 3, 3, 17100
  01d4be8  li 6, 56
  01d4bec  lis 5, 114
  01d4bf0  stb 4, 32(30)
  01d4bf4  li 4, -3056
  01d4bf8  vslw 2, 2, 2
  01d4bfc  <unknown>
  01d4c00  lis 3, 165
  01d4c04  vspltw 3, 3, 0
  01d4c08  <unknown>
  01d4c0c  li 7, 68
  01d4c10  lwz 4, 4(31)
  01d4c14  li 5, 0
  01d4c18  vmaddfp 2, 4, 3, 2
  01d4c1c  slwi 4, 4, 7
  01d4c20  lwz 3, 7128(3)
  01d4c24  li 6, 0
  01d4c28  addc 3, 3, 4
  01d4c2c  addic 4, 3, 48
  01d4c30  addic 8, 3, 112
  01d4c34  clrldi 3, 4, 32
  01d4c38  clrldi 4, 8, 32
  01d4c3c  vctsxs 2, 2, 0
  01d4c40  vspltw 2, 2, 0
  01d4c44  stvewx 2, 7, 31
  01d4c48  bl 0xa0c38
  01d4c4c  nop
  01d4c50  li 3, 3
  01d4c54  bl 0x481d0
  01d4c58  nop
  01d4c5c  lis 3, 164
  01d4c60  lwz 4, 52(31)
  01d4c64  slwi 4, 4, 8
  01d4c68  lwz 3, -28512(3)
  01d4c6c  addc 3, 3, 4
  01d4c70  clrldi 3, 3, 32
  01d4c74  bl 0x1ce0f0
  01d4c78  nop
  01d4c7c  ld 0, 336(1)
  01d4c80  mtlr 0
  01d4c84  lfd 29, 296(1)
  01d4c88  lfd 30, 304(1)
  01d4c8c  lfd 31, 312(1)
  01d4c90  ld 26, 248(1)
  01d4c94  ld 27, 256(1)
  01d4c98  ld 28, 264(1)
  01d4c9c  ld 29, 272(1)
  01d4ca0  ld 30, 280(1)
  01d4ca4  ld 31, 288(1)
  01d4ca8  addi 1, 1, 320
  01d4cac  blr
