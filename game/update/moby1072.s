# game/update/moby1072.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1072_001b4100:   # 0x1b4100, 0x14 bytes
  01b4100  lis 3, 117
  01b4104  lis 4, 1
  01b4108  addic 3, 3, 32112
  01b410c  stw 4, 72(3)
  01b4110  blr

M1072_001b4118:   # 0x1b4118, 0x78 bytes
  01b4118  lis 4, 165
  01b411c  lis 6, 164
  01b4120  addic 7, 4, -28284
  01b4124  lbz 4, 33(3)
  01b4128  lis 5, 230
  01b412c  slwi 8, 4, 2
  01b4130  lwz 4, -28512(6)
  01b4134  addic 5, 5, 10312
  01b4138  lwzx 7, 7, 8
  01b413c  lhz 8, 0(7)
  01b4140  lfs 1, 24(3)
  01b4144  rlwinm 8, 8, 8, 9, 23
  01b4148  addc 4, 4, 8
  01b414c  clrldi 4, 4, 32
  01b4150  stfs 1, 24(4)
  01b4154  lwz 4, -28512(6)
  01b4158  lfs 1, 24(3)
  01b415c  addc 8, 4, 8
  01b4160  clrldi 8, 8, 32
  01b4164  lwz 8, 120(8)
  01b4168  lwz 8, 24(8)
  01b416c  mulli 8, 8, 4512
  01b4170  extsw 8, 8
  01b4174  stfsx 1, 5, 8
  01b4178  lhz 8, 0(7)
  01b417c  addic 7, 7, 2
  01b4180  extsh 8, 8
  01b4184  cmpwi 8, 0
  01b4188  bf 0, 0x1b413c
  01b418c  blr

M1072_001b4198:   # 0x1b4198, 0x1a0 bytes
  01b4198  mulli 8, 3, 4512
  01b419c  lis 4, 27
  01b41a0  lis 7, 230
  01b41a4  addi 5, 4, 16784
  01b41a8  addic 7, 7, 10304
  01b41ac  extsw 8, 8
  01b41b0  li 10, 255
  01b41b4  addc 4, 7, 8
  01b41b8  lfs 2, 0(5)
  01b41bc  ori 6, 7, 0
  01b41c0  lfs 1, 4(5)
  01b41c4  li 9, 0
  01b41c8  addic 5, 6, 4
  01b41cc  stb 10, 12(4)
  01b41d0  stb 10, 14(4)
  01b41d4  stb 10, 13(4)
  01b41d8  stb 10, 15(4)
  01b41dc  stb 10, 16(4)
  01b41e0  stb 10, 17(4)
  01b41e4  stb 10, 18(4)
  01b41e8  stb 10, 19(4)
  01b41ec  cmpw 3, 9
  01b41f0  bt 2, 0x1b4320
  01b41f4  lfsx 4, 7, 8
  01b41f8  lfs 3, 0(6)
  01b41fc  fsubs 4, 4, 3
  01b4200  lfs 3, 4(4)
  01b4204  lfs 5, 0(5)
  01b4208  fsubs 3, 3, 5
  01b420c  fabs 5, 4
  01b4210  fcmpu 0, 5, 2
  01b4214  cror 6, 1, 2
  01b4218  bt 6, 0x1b4250
  01b421c  fsubs 4, 3, 1
  01b4220  fabs 4, 4
  01b4224  fcmpu 0, 4, 2
  01b4228  cror 6, 1, 2
  01b422c  bt 6, 0x1b4234
  01b4230  stb 9, 12(4)
  01b4234  fadds 3, 3, 1
  01b4238  fabs 3, 3
  01b423c  fcmpu 0, 3, 2
  01b4240  cror 6, 1, 2
  01b4244  bt 6, 0x1b4320
  01b4248  stb 9, 14(4)
  01b424c  b 0x1b4320
  01b4250  fabs 5, 3
  01b4254  fcmpu 0, 5, 2
  01b4258  cror 6, 1, 2
  01b425c  bt 6, 0x1b4294
  01b4260  fsubs 3, 4, 1
  01b4264  fabs 3, 3
  01b4268  fcmpu 0, 3, 2
  01b426c  cror 6, 1, 2
  01b4270  bt 6, 0x1b4278
  01b4274  stb 9, 13(4)
  01b4278  fadds 3, 4, 1
  01b427c  fabs 3, 3
  01b4280  fcmpu 0, 3, 2
  01b4284  cror 6, 1, 2
  01b4288  bt 6, 0x1b4320
  01b428c  stb 9, 15(4)
  01b4290  b 0x1b4320
  01b4294  fadds 5, 4, 1
  01b4298  fabs 5, 5
  01b429c  fcmpu 0, 5, 2
  01b42a0  cror 6, 1, 2
  01b42a4  bt 6, 0x1b42dc
  01b42a8  fsubs 4, 3, 1
  01b42ac  fabs 4, 4
  01b42b0  fcmpu 0, 4, 2
  01b42b4  cror 6, 1, 2
  01b42b8  bt 6, 0x1b42c0
  01b42bc  stb 9, 17(4)
  01b42c0  fadds 3, 3, 1
  01b42c4  fabs 3, 3
  01b42c8  fcmpu 0, 3, 2
  01b42cc  cror 6, 1, 2
  01b42d0  bt 6, 0x1b4320
  01b42d4  stb 9, 19(4)
  01b42d8  b 0x1b4320
  01b42dc  fsubs 4, 4, 1
  01b42e0  fabs 4, 4
  01b42e4  fcmpu 0, 4, 2
  01b42e8  cror 6, 1, 2
  01b42ec  bt 6, 0x1b4320
  01b42f0  fsubs 4, 3, 1
  01b42f4  fabs 4, 4
  01b42f8  fcmpu 0, 4, 2
  01b42fc  cror 6, 1, 2
  01b4300  bt 6, 0x1b4308
  01b4304  stb 9, 16(4)
  01b4308  fadds 3, 3, 1
  01b430c  fabs 3, 3
  01b4310  fcmpu 0, 3, 2
  01b4314  cror 6, 1, 2
  01b4318  bt 6, 0x1b4320
  01b431c  stb 9, 18(4)
  01b4320  addic 9, 9, 1
  01b4324  addic 6, 6, 4512
  01b4328  cmpwi 9, 128
  01b432c  addic 5, 5, 4512
  01b4330  bt 0, 0x1b41ec
  01b4334  blr

UpdateMoby_1072:   # 0x1b4378, 0x964 bytes
  01b4378  stdu 1, -224(1)
  01b437c  mflr 0
  01b4380  std 0, 240(1)
  01b4384  stfd 30, 208(1)
  01b4388  stfd 31, 216(1)
  01b438c  std 31, 200(1)
  01b4390  ori 31, 3, 0
  01b4394  std 30, 192(1)
  01b4398  lbz 3, 32(31)
  01b439c  lwz 30, 120(31)
  01b43a0  cmpwi 3, 1
  01b43a4  cmpwi 1, 3, 3
  01b43a8  cmpwi 6, 3, 2
  01b43ac  std 29, 184(1)
  01b43b0  std 28, 176(1)
  01b43b4  std 27, 168(1)
  01b43b8  std 26, 160(1)
  01b43bc  cmpwi 7, 3, 0
  01b43c0  bt 1, 0x1b43d4
  01b43c4  cmpwi 3, -1
  01b43c8  bf 1, 0x1b4c0c
  01b43cc  bf 29, 0x1b43e0
  01b43d0  b 0x1b48a8
  01b43d4  bf 25, 0x1b4a7c
  01b43d8  bf 5, 0x1b48e8
  01b43dc  b 0x1b4c0c
  01b43e0  lis 3, 239
  01b43e4  lwz 4, -1728(3)
  01b43e8  stw 4, 24(30)
  01b43ec  addic 4, 4, 1
  01b43f0  cmpwi 4, 127
  01b43f4  stw 4, -1728(3)
  01b43f8  bf 1, 0x1b440c
  01b43fc  lis 3, 101
  01b4400  addic 3, 3, 17836
  01b4404  bl 0x5cd098
  01b4408  nop
  01b440c  lhz 3, 52(31)
  01b4410  li 29, 0
  01b4414  ori 5, 3, 1
  01b4418  lwz 3, 24(30)
  01b441c  sth 29, 50(31)
  01b4420  cmpwi 3, 0
  01b4424  sth 5, 52(31)
  01b4428  bf 2, 0x1b47b0
  01b442c  lis 28, 230
  01b4430  li 3, 16
  01b4434  addic 28, 28, 10304
  01b4438  mtctr 3
  01b443c  li 27, 128
  01b4440  addic 3, 28, 30
  01b4444  sth 29, 0(3)
  01b4448  sth 29, 4512(3)
  01b444c  lis 4, 0
  01b4450  sth 29, 9024(3)
  01b4454  sth 29, 13536(3)
  01b4458  sth 29, 18048(3)
  01b445c  ori 4, 4, 36096
  01b4460  sth 29, 22560(3)
  01b4464  sth 29, 27072(3)
  01b4468  sth 29, 31584(3)
  01b446c  addc 3, 3, 4
  01b4470  bdnz 0x1b4444
  01b4474  ori 3, 28, 0
  01b4478  li 4, 128
  01b447c  bl 0x17b230
  01b4480  nop
  01b4484  lis 3, 27
  01b4488  addi 26, 3, 17208
  01b448c  lfs 1, 0(26)
  01b4490  bl 0x17b780
  01b4494  nop
  01b4498  lis 3, 162
  01b449c  lis 6, 116
  01b44a0  addic 3, 3, -9472
  01b44a4  lis 5, 16768
  01b44a8  addic 4, 6, -22016
  01b44ac  lis 9, 16230
  01b44b0  lis 10, 15820
  01b44b4  lwz 7, 16(3)
  01b44b8  lwz 8, 20(3)
  01b44bc  ori 9, 9, 26214
  01b44c0  lfs 1, 16(3)
  01b44c4  lfs 2, 20(3)
  01b44c8  fabs 3, 1
  01b44cc  lis 3, -16128
  01b44d0  fabs 6, 2
  01b44d4  stw 5, -22016(6)
  01b44d8  lis 6, 16256
  01b44dc  stw 5, 4(4)
  01b44e0  ori 5, 10, 52429
  01b44e4  stw 3, 8(4)
  01b44e8  stw 3, 12(4)
  01b44ec  stw 6, 16(4)
  01b44f0  stw 6, 20(4)
  01b44f4  stw 9, 24(4)
  01b44f8  stw 5, 32(4)
  01b44fc  rlwinm 3, 8, 3, 29, 29
  01b4500  fsubs 1, 3, 6
  01b4504  lis 5, 115
  01b4508  addic 5, 5, 22784
  01b450c  stfs 1, 112(1)
  01b4510  lfs 4, 4(26)
  01b4514  lwz 6, 112(1)
  01b4518  lfs 1, 112(1)
  01b451c  rlwimi 3, 6, 2, 30, 30
  01b4520  fsub 5, 1, 4
  01b4524  ori 6, 5, 0
  01b4528  fsub 7, 1, 4
  01b452c  rlwimi 3, 7, 4, 28, 28
  01b4530  rlwimi 6, 3, 2, 26, 28
  01b4534  slwi 3, 3, 2
  01b4538  clrldi 6, 6, 32
  01b453c  lfsx 1, 5, 3
  01b4540  fsel 5, 5, 3, 6
  01b4544  lfs 2, 4(6)
  01b4548  fsel 3, 7, 6, 3
  01b454c  fcmpu 0, 5, 4
  01b4550  bt 1, 0x1b4558
  01b4554  b 0x1b4678
  01b4558  fsubs 6, 3, 5
  01b455c  fadds 3, 3, 5
  01b4560  addic 3, 1, 16
  01b4564  li 7, 2
  01b4568  addic 5, 3, 100
  01b456c  addic 6, 3, 116
  01b4570  mtctr 7
  01b4574  fdivs 3, 6, 3
  01b4578  fmuls 5, 3, 3
  01b457c  stfs 3, 128(1)
  01b4580  stfs 3, 120(1)
  01b4584  stfs 3, 124(1)
  01b4588  stfs 3, 116(1)
  01b458c  lfs 7, 128(1)
  01b4590  lfs 8, 120(1)
  01b4594  lfs 9, 124(1)
  01b4598  fmuls 6, 5, 5
  01b459c  fmuls 8, 8, 5
  01b45a0  fmuls 7, 7, 6
  01b45a4  fmuls 3, 6, 6
  01b45a8  fmuls 6, 9, 6
  01b45ac  stfs 8, 120(1)
  01b45b0  fmuls 5, 7, 5
  01b45b4  stfs 6, 124(1)
  01b45b8  stfs 5, 128(1)
  01b45bc  lfs 5, 100(3)
  01b45c0  fmuls 5, 5, 3
  01b45c4  stfs 5, 116(3)
  01b45c8  lfs 5, 4(5)
  01b45cc  addic 3, 3, 8
  01b45d0  addic 5, 5, 8
  01b45d4  fmuls 5, 5, 3
  01b45d8  stfs 5, 4(6)
  01b45dc  addic 6, 6, 8
  01b45e0  bdnz 0x1b45bc
  01b45e4  li 6, 4
  01b45e8  ori 3, 1, 0
  01b45ec  mtctr 6
  01b45f0  lis 5, 115
  01b45f4  addic 6, 3, 116
  01b45f8  addic 5, 5, 22752
  01b45fc  ori 8, 6, 0
  01b4600  lfs 3, 116(3)
  01b4604  lfs 5, 0(5)
  01b4608  fmuls 3, 3, 5
  01b460c  lfs 5, 4(5)
  01b4610  addic 5, 5, 8
  01b4614  stfs 3, 116(3)
  01b4618  lfs 3, 4(6)
  01b461c  addic 3, 3, 8
  01b4620  fmuls 3, 3, 5
  01b4624  stfs 3, 4(6)
  01b4628  addic 6, 6, 8
  01b462c  bdnz 0x1b4600
  01b4630  ori 3, 1, 0
  01b4634  mtctr 7
  01b4638  lfs 3, 116(3)
  01b463c  fadds 3, 4, 3
  01b4640  lfs 4, 4(8)
  01b4644  addic 3, 3, 16
  01b4648  lfs 5, 8(8)
  01b464c  lfs 6, 12(8)
  01b4650  addic 8, 8, 16
  01b4654  fadds 3, 3, 4
  01b4658  fadds 4, 3, 5
  01b465c  fadds 4, 4, 6
  01b4660  bdnz 0x1b4638
  01b4664  lis 3, 27
  01b4668  addi 3, 3, 17208
  01b466c  lfs 3, 8(3)
  01b4670  fadds 4, 4, 3
  01b4674  fmadds 4, 4, 1, 2
  01b4678  lis 3, 27
  01b467c  addi 3, 3, 17208
  01b4680  lfs 1, 12(3)
  01b4684  lfs 2, 16(3)
  01b4688  fadds 1, 4, 1
  01b468c  lfs 3, 20(3)
  01b4690  fsubs 5, 2, 4
  01b4694  li 6, 28
  01b4698  lis 7, 230
  01b469c  lis 9, 230
  01b46a0  lis 8, 18176
  01b46a4  fsubs 2, 2, 1
  01b46a8  fsub 7, 4, 5
  01b46ac  fsubs 6, 3, 1
  01b46b0  fsubs 3, 3, 4
  01b46b4  fsub 8, 1, 2
  01b46b8  fsel 4, 7, 5, 4
  01b46bc  fsel 1, 8, 2, 1
  01b46c0  fsub 5, 3, 4
  01b46c4  lfs 2, 24(3)
  01b46c8  fsub 7, 6, 1
  01b46cc  fsel 3, 5, 3, 4
  01b46d0  lfs 4, 28(3)
  01b46d4  lfs 5, 32(3)
  01b46d8  lfs 8, 36(3)
  01b46dc  fsel 1, 7, 6, 1
  01b46e0  fmuls 6, 3, 3
  01b46e4  fmuls 7, 1, 1
  01b46e8  fmuls 9, 6, 3
  01b46ec  fmuls 10, 7, 1
  01b46f0  fmuls 11, 6, 9
  01b46f4  fmadds 3, 9, 2, 3
  01b46f8  lfs 9, 40(3)
  01b46fc  lwz 5, 12(30)
  01b4700  lis 3, -16621
  01b4704  addic 5, 5, 40
  01b4708  ori 3, 3, 52534
  01b470c  fmuls 12, 7, 10
  01b4710  fmadds 1, 10, 2, 1
  01b4714  fmuls 2, 6, 11
  01b4718  fmadds 3, 11, 4, 3
  01b471c  stw 5, 40(4)
  01b4720  lwz 5, 16(30)
  01b4724  stw 3, 56(4)
  01b4728  addic 5, 5, 40
  01b472c  li 3, 64
  01b4730  fmuls 10, 7, 12
  01b4734  fmadds 1, 12, 4, 1
  01b4738  fmuls 4, 6, 2
  01b473c  stw 5, 44(4)
  01b4740  fmadds 2, 2, 5, 3
  01b4744  lis 5, 230
  01b4748  stb 6, 60(4)
  01b474c  stb 3, 61(4)
  01b4750  lis 6, 230
  01b4754  addic 3, 5, 8256
  01b4758  lis 5, 230
  01b475c  fmuls 3, 7, 10
  01b4760  fmadds 1, 10, 5, 1
  01b4764  fmadds 2, 4, 8, 2
  01b4768  fmadds 1, 3, 8, 1
  01b476c  fmuls 2, 2, 9
  01b4770  fmuls 1, 1, 9
  01b4774  stfs 2, 52(4)
  01b4778  stw 28, -21888(7)
  01b477c  lis 7, 116
  01b4780  stw 3, -21884(6)
  01b4784  lis 3, 116
  01b4788  stw 27, -21880(5)
  01b478c  lis 6, 16960
  01b4790  lis 5, 17279
  01b4794  stfs 1, 48(4)
  01b4798  lis 4, 116
  01b479c  stw 29, -21856(9)
  01b47a0  stw 8, -22168(7)
  01b47a4  stw 5, -22164(3)
  01b47a8  lwz 3, 24(30)
  01b47ac  stw 6, -22160(4)
  01b47b0  mulli 3, 3, 4512
  01b47b4  lwz 5, 24(30)
  01b47b8  mulli 6, 5, 4512
  01b47bc  lis 4, 230
  01b47c0  mulli 7, 5, 4512
  01b47c4  extsw 3, 3
  01b47c8  addic 4, 4, 10304
  01b47cc  lfs 1, 16(31)
  01b47d0  extsw 7, 7
  01b47d4  addc 7, 4, 7
  01b47d8  stfsx 1, 4, 3
  01b47dc  extsw 3, 6
  01b47e0  lfs 1, 20(31)
  01b47e4  addc 3, 4, 3
  01b47e8  lwz 6, 12(30)
  01b47ec  addic 6, 6, 40
  01b47f0  stfs 1, 4(3)
  01b47f4  lfs 1, 24(31)
  01b47f8  stw 6, 20(7)
  01b47fc  lwz 3, 24(30)
  01b4800  mulli 3, 3, 4512
  01b4804  lwz 6, 16(30)
  01b4808  extsw 3, 3
  01b480c  addic 6, 6, 40
  01b4810  addc 3, 4, 3
  01b4814  li 7, 28
  01b4818  mulli 5, 5, 4512
  01b481c  stw 6, 24(3)
  01b4820  lwz 3, 24(30)
  01b4824  extsw 5, 5
  01b4828  mulli 3, 3, 4512
  01b482c  li 6, 68
  01b4830  extsw 3, 3
  01b4834  addc 5, 4, 5
  01b4838  addc 3, 4, 3
  01b483c  lis 8, 230
  01b4840  stb 7, 28(3)
  01b4844  lwz 3, 24(30)
  01b4848  mulli 3, 3, 4512
  01b484c  lis 7, 0
  01b4850  extsw 3, 3
  01b4854  ori 7, 7, 65535
  01b4858  addc 3, 4, 3
  01b485c  stb 6, 29(3)
  01b4860  stfs 1, 8(5)
  01b4864  lwz 3, 24(30)
  01b4868  mulli 5, 3, 4512
  01b486c  mulli 6, 3, 4512
  01b4870  extsw 5, 5
  01b4874  addc 6, 4, 6
  01b4878  addc 4, 4, 5
  01b487c  addic 5, 8, 8256
  01b4880  slwi 8, 3, 4
  01b4884  clrldi 3, 6, 32
  01b4888  addc 5, 5, 8
  01b488c  sth 7, 30(4)
  01b4890  clrldi 4, 5, 32
  01b4894  bl 0x17b4b0
  01b4898  nop
  01b489c  li 3, 1
  01b48a0  stb 3, 32(31)
  01b48a4  b 0x1b4c0c
  01b48a8  lwz 3, 24(30)
  01b48ac  extsw 3, 3
  01b48b0  bl 0x1b4198
  01b48b4  lwz 3, 8(30)
  01b48b8  li 4, 0
  01b48bc  li 5, 2
  01b48c0  subc 3, 4, 3
  01b48c4  li 4, 3
  01b48c8  cntlzw 3, 3
  01b48cc  subc 4, 4, 5
  01b48d0  sldi 3, 3, 58
  01b48d4  sradi 3, 3, 63
  01b48d8  and 3, 3, 4
  01b48dc  addc 3, 5, 3
  01b48e0  stb 3, 32(31)
  01b48e4  b 0x1b4c0c
  01b48e8  lbz 3, 188(31)
  01b48ec  rlwinm 3, 3, 0, 29, 29
  01b48f0  cmpwi 3, 0
  01b48f4  bt 2, 0x1b4910
  01b48f8  li 3, 1
  01b48fc  li 4, 2
  01b4900  stw 3, 28(30)
  01b4904  lbz 3, 33(31)
  01b4908  bl 0x1042ec
  01b490c  nop
  01b4910  li 3, 1
  01b4914  stb 3, 188(31)
  01b4918  lwz 3, 28(30)
  01b491c  cmpwi 3, 0
  01b4920  bt 2, 0x1b49dc
  01b4924  lis 3, 27
  01b4928  lis 4, 114
  01b492c  addi 3, 3, 17208
  01b4930  lis 6, 114
  01b4934  addic 5, 30, 20
  01b4938  lfs 4, 44(3)
  01b493c  lfs 2, -3048(4)
  01b4940  addic 3, 31, 24
  01b4944  lfs 1, 4(30)
  01b4948  fmuls 2, 2, 4
  01b494c  lfs 3, -3052(6)
  01b4950  fmuls 4, 3, 4
  01b4954  fmr 3, 2
  01b4958  bl 0x109c30
  01b495c  nop
  01b4960  lis 3, 165
  01b4964  lbz 4, 33(31)
  01b4968  lis 5, 164
  01b496c  addic 3, 3, -28284
  01b4970  slwi 6, 4, 2
  01b4974  lis 4, 230
  01b4978  lwz 5, -28512(5)
  01b497c  addic 4, 4, 10304
  01b4980  lwzx 3, 3, 6
  01b4984  lhz 7, 0(3)
  01b4988  lis 6, 164
  01b498c  lfs 1, 24(31)
  01b4990  rlwinm 7, 7, 8, 9, 23
  01b4994  addc 5, 5, 7
  01b4998  clrldi 5, 5, 32
  01b499c  stfs 1, 24(5)
  01b49a0  lwz 5, -28512(6)
  01b49a4  lfs 1, 24(31)
  01b49a8  addc 6, 5, 7
  01b49ac  clrldi 6, 6, 32
  01b49b0  lwz 6, 120(6)
  01b49b4  lwz 6, 24(6)
  01b49b8  mulli 6, 6, 4512
  01b49bc  extsw 6, 6
  01b49c0  addc 6, 4, 6
  01b49c4  stfs 1, 8(6)
  01b49c8  lhz 6, 0(3)
  01b49cc  addic 3, 3, 2
  01b49d0  extsh 6, 6
  01b49d4  cmpwi 6, 0
  01b49d8  bf 0, 0x1b4984
  01b49dc  li 3, 200
  01b49e0  bl 0xfc620
  01b49e4  nop
  01b49e8  cmpwi 3, 0
  01b49ec  bf 2, 0x1b4c0c
  01b49f0  lis 3, 27
  01b49f4  addi 29, 3, 17208
  01b49f8  lfs 31, 48(29)
  01b49fc  lfs 30, 44(29)
  01b4a00  fmr 1, 31
  01b4a04  fmr 2, 30
  01b4a08  bl 0xfcbe8
  01b4a0c  nop
  01b4a10  lwz 3, 24(30)
  01b4a14  mulli 3, 3, 4512
  01b4a18  lis 4, 230
  01b4a1c  extsw 3, 3
  01b4a20  fmr 2, 30
  01b4a24  addic 28, 4, 10304
  01b4a28  lfsx 3, 28, 3
  01b4a2c  fadds 30, 3, 1
  01b4a30  fmr 1, 31
  01b4a34  bl 0xfcbe8
  01b4a38  nop
  01b4a3c  lwz 3, 24(30)
  01b4a40  li 9, 1
  01b4a44  mulli 3, 3, 4512
  01b4a48  lfs 3, 0(29)
  01b4a4c  extsw 4, 3
  01b4a50  lfs 4, 52(29)
  01b4a54  addc 3, 28, 3
  01b4a58  addc 5, 28, 4
  01b4a5c  li 4, 1
  01b4a60  clrldi 3, 3, 32
  01b4a64  lfs 2, 4(5)
  01b4a68  fadds 2, 2, 1
  01b4a6c  fmr 1, 30
  01b4a70  bl 0x17bd90
  01b4a74  nop
  01b4a78  b 0x1b4c0c
  01b4a7c  lbz 3, 188(31)
  01b4a80  rlwinm 3, 3, 0, 28, 28
  01b4a84  cmpwi 3, 0
  01b4a88  bt 2, 0x1b4aa4
  01b4a8c  li 3, 1
  01b4a90  li 4, 3
  01b4a94  stw 3, 28(30)
  01b4a98  lbz 3, 33(31)
  01b4a9c  bl 0x1042ec
  01b4aa0  nop
  01b4aa4  li 3, 2
  01b4aa8  stb 3, 188(31)
  01b4aac  lwz 3, 28(30)
  01b4ab0  cmpwi 3, 0
  01b4ab4  bt 2, 0x1b4b70
  01b4ab8  lis 3, 27
  01b4abc  lis 4, 114
  01b4ac0  addi 3, 3, 17208
  01b4ac4  lis 6, 114
  01b4ac8  addic 5, 30, 20
  01b4acc  lfs 4, 44(3)
  01b4ad0  lfs 2, -3048(4)
  01b4ad4  lfs 1, 0(30)
  01b4ad8  addic 3, 31, 24
  01b4adc  fmuls 2, 2, 4
  01b4ae0  lfs 3, -3052(6)
  01b4ae4  fmuls 4, 3, 4
  01b4ae8  fmr 3, 2
  01b4aec  bl 0x109c30
  01b4af0  nop
  01b4af4  lbz 3, 33(31)
  01b4af8  lis 4, 165
  01b4afc  lis 5, 164
  01b4b00  addic 6, 4, -28284
  01b4b04  slwi 3, 3, 2
  01b4b08  lis 4, 230
  01b4b0c  lwz 5, -28512(5)
  01b4b10  addic 4, 4, 10304
  01b4b14  lwzx 3, 6, 3
  01b4b18  lhz 7, 0(3)
  01b4b1c  lis 6, 164
  01b4b20  lfs 1, 24(31)
  01b4b24  rlwinm 7, 7, 8, 9, 23
  01b4b28  addc 5, 5, 7
  01b4b2c  clrldi 5, 5, 32
  01b4b30  stfs 1, 24(5)
  01b4b34  lwz 5, -28512(6)
  01b4b38  lfs 1, 24(31)
  01b4b3c  addc 6, 5, 7
  01b4b40  clrldi 6, 6, 32
  01b4b44  lwz 6, 120(6)
  01b4b48  lwz 6, 24(6)
  01b4b4c  mulli 6, 6, 4512
  01b4b50  extsw 6, 6
  01b4b54  addc 6, 4, 6
  01b4b58  stfs 1, 8(6)
  01b4b5c  lhz 6, 0(3)
  01b4b60  addic 3, 3, 2
  01b4b64  extsh 6, 6
  01b4b68  cmpwi 6, 0
  01b4b6c  bf 0, 0x1b4b18
  01b4b70  li 3, 200
  01b4b74  bl 0xfc620
  01b4b78  nop
  01b4b7c  cmpwi 3, 0
  01b4b80  bf 2, 0x1b4c0c
  01b4b84  lis 3, 27
  01b4b88  addi 29, 3, 17208
  01b4b8c  lfs 31, 48(29)
  01b4b90  lfs 30, 44(29)
  01b4b94  fmr 1, 31
  01b4b98  fmr 2, 30
  01b4b9c  bl 0xfcbe8
  01b4ba0  nop
  01b4ba4  lwz 3, 24(30)
  01b4ba8  lis 4, 230
  01b4bac  mulli 3, 3, 4512
  01b4bb0  addic 28, 4, 10304
  01b4bb4  extsw 3, 3
  01b4bb8  fmr 2, 30
  01b4bbc  lfsx 3, 28, 3
  01b4bc0  fadds 30, 3, 1
  01b4bc4  fmr 1, 31
  01b4bc8  bl 0xfcbe8
  01b4bcc  nop
  01b4bd0  lwz 3, 24(30)
  01b4bd4  mulli 3, 3, 4512
  01b4bd8  lfs 3, 0(29)
  01b4bdc  extsw 5, 3
  01b4be0  lfs 4, 52(29)
  01b4be4  addc 3, 28, 3
  01b4be8  addc 5, 28, 5
  01b4bec  li 4, 1
  01b4bf0  li 9, 1
  01b4bf4  clrldi 3, 3, 32
  01b4bf8  lfs 2, 4(5)
  01b4bfc  fadds 2, 2, 1
  01b4c00  fmr 1, 30
  01b4c04  bl 0x17bd90
  01b4c08  nop
  01b4c0c  lwz 3, 24(30)
  01b4c10  cmpwi 3, -1
  01b4c14  bf 1, 0x1b4cac
  01b4c18  lis 3, 27
  01b4c1c  addi 4, 3, 17208
  01b4c20  ori 3, 31, 0
  01b4c24  lfs 31, 4(4)
  01b4c28  lfs 1, 56(4)
  01b4c2c  fmr 30, 31
  01b4c30  bl 0x1129d0
  01b4c34  nop
  01b4c38  cmpwi 3, -1
  01b4c3c  lwz 4, 24(30)
  01b4c40  bt 2, 0x1b4c50
  01b4c44  lis 3, 27
  01b4c48  addi 3, 3, 17208
  01b4c4c  lfs 31, 0(3)
  01b4c50  fcmpu 0, 31, 30
  01b4c54  lis 3, 0
  01b4c58  ori 3, 3, 65535
  01b4c5c  bf 2, 0x1b4c64
  01b4c60  li 3, 0
  01b4c64  mulli 4, 4, 4512
  01b4c68  lis 5, 230
  01b4c6c  ori 6, 3, 0
  01b4c70  addic 3, 5, 10304
  01b4c74  extsw 4, 4
  01b4c78  lwz 5, 24(30)
  01b4c7c  addc 4, 3, 4
  01b4c80  cmpwi 5, 0
  01b4c84  sth 6, 30(4)
  01b4c88  bf 2, 0x1b4cac
  01b4c8c  li 4, 128
  01b4c90  bl 0x17b8b8
  01b4c94  nop
  01b4c98  lis 3, 113
  01b4c9c  ori 4, 31, 0
  01b4ca0  addic 3, 3, -30280
  01b4ca4  bl 0x6d720
  01b4ca8  nop
  01b4cac  ld 0, 240(1)
  01b4cb0  mtlr 0
  01b4cb4  lfd 30, 208(1)
  01b4cb8  lfd 31, 216(1)
  01b4cbc  ld 26, 160(1)
  01b4cc0  ld 27, 168(1)
  01b4cc4  ld 28, 176(1)
  01b4cc8  ld 29, 184(1)
  01b4ccc  ld 30, 192(1)
  01b4cd0  ld 31, 200(1)
  01b4cd4  addi 1, 1, 224
  01b4cd8  blr
