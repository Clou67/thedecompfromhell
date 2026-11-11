# game/update/moby587.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_003d4228:   # 0x3d4228, 0x80 bytes
  03d4228  stdu 1, -128(1)
  03d422c  mflr 0
  03d4230  std 0, 144(1)
  03d4234  std 31, 120(1)
  03d4238  lbz 5, 32(3)
  03d423c  std 30, 112(1)
  03d4240  ori 31, 3, 0
  03d4244  lwz 30, 120(3)
  03d4248  cmpwi 5, 2
  03d424c  bt 2, 0x3d425c
  03d4250  li 3, 2
  03d4254  stb 3, 32(31)
  03d4258  stw 4, 108(30)
  03d425c  ori 3, 31, 0
  03d4260  lwz 4, 112(30)
  03d4264  extsw 4, 4
  03d4268  bl 0x15cc7c
  03d426c  nop
  03d4270  cmpwi 3, 0
  03d4274  bf 2, 0x3d4290
  03d4278  li 3, 18
  03d427c  li 4, 0
  03d4280  ori 5, 31, 0
  03d4284  bl 0x15d380
  03d4288  nop
  03d428c  stw 3, 112(30)
  03d4290  ld 0, 144(1)
  03d4294  mtlr 0
  03d4298  ld 30, 112(1)
  03d429c  ld 31, 120(1)
  03d42a0  addi 1, 1, 128
  03d42a4  blr

FUN_003d42a8:   # 0x3d42a8, 0x98 bytes
  03d42a8  stdu 1, -128(1)
  03d42ac  mflr 0
  03d42b0  std 0, 144(1)
  03d42b4  std 31, 120(1)
  03d42b8  lbz 4, 32(3)
  03d42bc  lwz 31, 120(3)
  03d42c0  cmpwi 4, 2
  03d42c4  bf 2, 0x3d432c
  03d42c8  li 4, 3
  03d42cc  stb 4, 32(3)
  03d42d0  lwz 4, 112(31)
  03d42d4  cmpwi 4, -1
  03d42d8  bt 2, 0x3d4324
  03d42dc  sldi 5, 4, 7
  03d42e0  sldi 7, 4, 4
  03d42e4  lis 6, 150
  03d42e8  subc 5, 5, 7
  03d42ec  ori 7, 3, 0
  03d42f0  addic 6, 6, 14312
  03d42f4  extsw 3, 5
  03d42f8  lwzx 5, 6, 3
  03d42fc  cmpw 5, 7
  03d4300  bf 2, 0x3d4324
  03d4304  lis 5, 150
  03d4308  addic 5, 5, 14292
  03d430c  lbzx 3, 5, 3
  03d4310  cmpwi 3, 0
  03d4314  bt 2, 0x3d4324
  03d4318  extsw 3, 4
  03d431c  bl 0x15cdb0
  03d4320  nop
  03d4324  li 3, -1
  03d4328  stw 3, 112(31)
  03d432c  ld 0, 144(1)
  03d4330  mtlr 0
  03d4334  ld 31, 120(1)
  03d4338  addi 1, 1, 128
  03d433c  blr

M587_003d4340:   # 0x3d4340, 0x44 bytes
  03d4340  lbz 5, 32(3)
  03d4344  lwz 4, 120(3)
  03d4348  cmpwi 5, 3
  03d434c  cmpwi 1, 5, 2
  03d4350  bf 2, 0x3d4364
  03d4354  li 4, 1
  03d4358  stb 4, 32(3)
  03d435c  ori 3, 4, 0
  03d4360  b 0x3d4380
  03d4364  bf 6, 0x3d437c
  03d4368  lwz 3, 108(4)
  03d436c  cmpwi 3, 0
  03d4370  bf 2, 0x3d437c
  03d4374  li 3, -1
  03d4378  b 0x3d4380
  03d437c  li 3, 0
  03d4380  blr

M587_003d43c8:   # 0x3d43c8, 0x308 bytes
  03d43c8  stdu 1, -160(1)
  03d43cc  mflr 0
  03d43d0  std 0, 176(1)
  03d43d4  lis 4, 132
  03d43d8  lis 5, 132
  03d43dc  lis 7, 132
  03d43e0  lis 6, 132
  03d43e4  lis 10, 132
  03d43e8  lwz 4, 26240(4)
  03d43ec  lis 8, 132
  03d43f0  lwz 5, 26252(5)
  03d43f4  std 31, 152(1)
  03d43f8  lis 9, 61
  03d43fc  lwz 31, 120(3)
  03d4400  lwz 7, 26256(7)
  03d4404  addc 3, 4, 5
  03d4408  lwz 5, 26260(6)
  03d440c  std 30, 144(1)
  03d4410  lis 6, 132
  03d4414  addi 30, 9, 17284
  03d4418  lwz 9, 26236(10)
  03d441c  addc 4, 7, 4
  03d4420  lwz 8, 26264(8)
  03d4424  extsw 3, 3
  03d4428  addc 5, 9, 5
  03d442c  lwz 7, 26268(6)
  03d4430  addc 6, 9, 8
  03d4434  extsw 4, 4
  03d4438  extsw 7, 7
  03d443c  extsw 5, 5
  03d4440  extsw 6, 6
  03d4444  bl 0x6a718
  03d4448  nop
  03d444c  lis 3, 161
  03d4450  lis 4, -30584
  03d4454  ori 4, 4, 34953
  03d4458  lwz 3, 1808(3)
  03d445c  mulhw 4, 4, 3
  03d4460  addc 4, 4, 3
  03d4464  srawi 4, 4, 5
  03d4468  srwi 5, 4, 31
  03d446c  addc 4, 4, 5
  03d4470  sldi 5, 4, 6
  03d4474  sldi 4, 4, 2
  03d4478  subc 4, 5, 4
  03d447c  subc 3, 3, 4
  03d4480  extsw 3, 3
  03d4484  bl 0x502730
  03d4488  nop
  03d448c  lfs 2, 0(30)
  03d4490  lfs 3, 4(30)
  03d4494  fmuls 1, 1, 2
  03d4498  lfs 4, 8(30)
  03d449c  lfs 2, 12(30)
  03d44a0  fmuls 1, 1, 3
  03d44a4  fsubs 3, 4, 1
  03d44a8  fsubs 2, 2, 1
  03d44ac  lfs 4, 16(30)
  03d44b0  fsub 5, 1, 3
  03d44b4  fsel 1, 5, 3, 1
  03d44b8  lfs 3, 20(30)
  03d44bc  fsub 5, 2, 1
  03d44c0  fsel 1, 5, 2, 1
  03d44c4  lfs 5, 24(30)
  03d44c8  lfs 7, 28(30)
  03d44cc  lfs 10, 32(30)
  03d44d0  lfs 9, 36(30)
  03d44d4  lfs 2, 40(30)
  03d44d8  fmuls 6, 1, 1
  03d44dc  fmuls 8, 6, 1
  03d44e0  fmuls 11, 6, 8
  03d44e4  fmadds 1, 8, 4, 1
  03d44e8  fmuls 4, 6, 11
  03d44ec  fmadds 1, 11, 3, 1
  03d44f0  fmuls 3, 6, 4
  03d44f4  fmadds 1, 4, 5, 1
  03d44f8  fmadds 1, 3, 7, 1
  03d44fc  fmadds 1, 1, 10, 9
  03d4500  fcmpu 0, 1, 2
  03d4504  cror 6, 0, 2
  03d4508  bt 6, 0x3d4514
  03d450c  fmr 1, 2
  03d4510  b 0x3d4530
  03d4514  lis 3, 61
  03d4518  addi 3, 3, 17284
  03d451c  lfs 2, 44(3)
  03d4520  fcmpu 0, 1, 2
  03d4524  cror 6, 1, 2
  03d4528  bt 6, 0x3d4530
  03d452c  fmr 1, 2
  03d4530  lis 3, 132
  03d4534  lis 4, 132
  03d4538  lwz 3, 26244(3)
  03d453c  lwz 4, 26248(4)
  03d4540  extsw 3, 3
  03d4544  extsw 4, 4
  03d4548  bl 0x5027bc
  03d454c  nop
  03d4550  lis 4, 61
  03d4554  li 5, 48
  03d4558  addi 4, 4, 17284
  03d455c  lis 6, 114
  03d4560  stb 5, 112(1)
  03d4564  lfs 1, 48(4)
  03d4568  lfs 2, -3056(6)
  03d456c  li 6, 58
  03d4570  fmuls 3, 2, 1
  03d4574  lwz 5, 108(31)
  03d4578  fmuls 1, 2, 1
  03d457c  stb 6, 114(1)
  03d4580  ori 30, 3, 0
  03d4584  fctiwz 3, 3
  03d4588  fctiwz 1, 1
  03d458c  stfd 3, 120(1)
  03d4590  lwz 7, 124(1)
  03d4594  stfd 1, 120(1)
  03d4598  divw 5, 5, 7
  03d459c  addic 5, 5, 48
  03d45a0  lwz 7, 124(1)
  03d45a4  stb 5, 113(1)
  03d45a8  lwz 5, 108(31)
  03d45ac  lfs 1, 52(4)
  03d45b0  divw 8, 5, 7
  03d45b4  fmuls 3, 2, 1
  03d45b8  mullw 7, 8, 7
  03d45bc  fctiwz 3, 3
  03d45c0  subc 5, 5, 7
  03d45c4  fmuls 1, 2, 1
  03d45c8  fctiwz 1, 1
  03d45cc  stfd 3, 120(1)
  03d45d0  lwz 7, 124(1)
  03d45d4  divw 5, 5, 7
  03d45d8  addic 5, 5, 48
  03d45dc  stfd 1, 120(1)
  03d45e0  lwz 7, 124(1)
  03d45e4  stb 5, 115(1)
  03d45e8  lwz 5, 108(31)
  03d45ec  lfs 1, 56(4)
  03d45f0  divw 8, 5, 7
  03d45f4  fmuls 3, 2, 1
  03d45f8  mullw 7, 8, 7
  03d45fc  fctiwz 3, 3
  03d4600  stb 6, 117(1)
  03d4604  subc 5, 5, 7
  03d4608  fmuls 1, 2, 1
  03d460c  stfd 3, 120(1)
  03d4610  lwz 3, 124(1)
  03d4614  fctiwz 1, 1
  03d4618  divw 3, 5, 3
  03d461c  addic 3, 3, 48
  03d4620  stfd 1, 120(1)
  03d4624  lwz 5, 124(1)
  03d4628  stb 3, 116(1)
  03d462c  lwz 3, 108(31)
  03d4630  lfs 1, 60(4)
  03d4634  divw 4, 3, 5
  03d4638  fmuls 1, 2, 1
  03d463c  mullw 4, 4, 5
  03d4640  fctiwz 1, 1
  03d4644  subc 4, 3, 4
  03d4648  li 3, 10
  03d464c  stfd 1, 120(1)
  03d4650  lwz 5, 124(1)
  03d4654  divw 4, 4, 5
  03d4658  addic 4, 4, 48
  03d465c  stb 4, 118(1)
  03d4660  bl 0xfc620
  03d4664  nop
  03d4668  extsw 3, 3
  03d466c  std 3, 120(1)
  03d4670  lfd 1, 120(1)
  03d4674  fcfid 1, 1
  03d4678  frsp 1, 1
  03d467c  bl 0x502758
  03d4680  nop
  03d4684  lis 4, 132
  03d4688  addic 3, 3, 48
  03d468c  lis 8, 132
  03d4690  addic 6, 1, 112
  03d4694  ori 5, 30, 0
  03d4698  lwz 4, 26236(4)
  03d469c  li 7, 8
  03d46a0  stb 3, 119(1)
  03d46a4  lwz 8, 26240(8)
  03d46a8  extsw 3, 4
  03d46ac  extsw 4, 8
  03d46b0  bl 0x70998
  03d46b4  nop
  03d46b8  ld 0, 176(1)
  03d46bc  mtlr 0
  03d46c0  ld 30, 144(1)
  03d46c4  ld 31, 152(1)
  03d46c8  addi 1, 1, 160
  03d46cc  blr

M587_003d46d0:   # 0x3d46d0, 0x14 bytes
  03d46d0  lis 3, 132
  03d46d4  lis 4, 1
  03d46d8  addic 3, 3, 26276
  03d46dc  stw 4, 72(3)
  03d46e0  blr

M587_003d4720:   # 0x3d4720, 0x1ec bytes
  03d4720  stdu 1, -144(1)
  03d4724  mflr 0
  03d4728  std 0, 160(1)
  03d472c  std 31, 136(1)
  03d4730  std 30, 128(1)
  03d4734  ori 31, 3, 0
  03d4738  lwz 30, 120(31)
  03d473c  lfs 1, 68(31)
  03d4740  std 29, 120(1)
  03d4744  lfs 2, 108(30)
  03d4748  bl 0x502578
  03d474c  nop
  03d4750  lbz 3, 32(31)
  03d4754  stfs 1, 68(31)
  03d4758  cmpwi 3, 5
  03d475c  bf 2, 0x3d47b0
  03d4760  lis 3, 61
  03d4764  addi 3, 3, 18152
  03d4768  lfs 2, 0(3)
  03d476c  fcmpu 0, 1, 2
  03d4770  cror 6, 0, 2
  03d4774  bt 6, 0x3d4788
  03d4778  lis 3, 16134
  03d477c  ori 3, 3, 2706
  03d4780  stw 3, 68(31)
  03d4784  b 0x3d4854
  03d4788  lis 3, 61
  03d478c  addi 3, 3, 18152
  03d4790  lfs 2, 4(3)
  03d4794  fcmpu 0, 1, 2
  03d4798  cror 6, 1, 2
  03d479c  bt 6, 0x3d4854
  03d47a0  lis 3, -16634
  03d47a4  ori 3, 3, 2706
  03d47a8  stw 3, 68(31)
  03d47ac  b 0x3d4854
  03d47b0  cmpwi 3, 4
  03d47b4  bf 2, 0x3d4808
  03d47b8  lis 3, 61
  03d47bc  addi 3, 3, 18152
  03d47c0  lfs 2, 8(3)
  03d47c4  fcmpu 0, 1, 2
  03d47c8  cror 6, 0, 2
  03d47cc  bt 6, 0x3d47e0
  03d47d0  lis 3, 15794
  03d47d4  ori 3, 3, 47298
  03d47d8  stw 3, 68(31)
  03d47dc  b 0x3d4854
  03d47e0  lis 3, 61
  03d47e4  addi 3, 3, 18152
  03d47e8  lfs 2, 12(3)
  03d47ec  fcmpu 0, 1, 2
  03d47f0  cror 6, 1, 2
  03d47f4  bt 6, 0x3d4854
  03d47f8  lis 3, -16974
  03d47fc  ori 3, 3, 47298
  03d4800  stw 3, 68(31)
  03d4804  b 0x3d4854
  03d4808  lis 3, 61
  03d480c  addi 3, 3, 18152
  03d4810  lfs 2, 16(3)
  03d4814  fcmpu 0, 1, 2
  03d4818  cror 6, 0, 2
  03d481c  bt 6, 0x3d4830
  03d4820  lis 3, 15630
  03d4824  ori 3, 3, 64053
  03d4828  stw 3, 68(31)
  03d482c  b 0x3d4854
  03d4830  lis 3, 61
  03d4834  addi 3, 3, 18152
  03d4838  lfs 2, 20(3)
  03d483c  fcmpu 0, 1, 2
  03d4840  cror 6, 1, 2
  03d4844  bt 6, 0x3d4854
  03d4848  lis 3, -17138
  03d484c  ori 3, 3, 64053
  03d4850  stw 3, 68(31)
  03d4854  lis 3, 61
  03d4858  lis 4, 114
  03d485c  addi 29, 3, 18152
  03d4860  lis 3, 132
  03d4864  lfs 3, 24(29)
  03d4868  lfs 2, 26396(3)
  03d486c  lfs 1, 116(30)
  03d4870  fmuls 2, 2, 3
  03d4874  lfs 4, -3052(4)
  03d4878  fmuls 2, 2, 4
  03d487c  bl 0x502578
  03d4880  nop
  03d4884  lfs 2, 28(29)
  03d4888  lfs 3, 32(29)
  03d488c  fsubs 2, 2, 1
  03d4890  fsubs 3, 3, 1
  03d4894  lfs 5, 36(29)
  03d4898  lis 3, 132
  03d489c  fsub 4, 1, 2
  03d48a0  fsel 2, 4, 2, 1
  03d48a4  lfs 4, 40(29)
  03d48a8  fsub 6, 3, 2
  03d48ac  fsel 2, 6, 3, 2
  03d48b0  lfs 3, 44(29)
  03d48b4  lfs 6, 48(29)
  03d48b8  lfs 8, 100(30)
  03d48bc  fmuls 7, 2, 2
  03d48c0  fmuls 9, 7, 2
  03d48c4  fmuls 10, 7, 9
  03d48c8  fmadds 2, 9, 5, 2
  03d48cc  lfs 5, 26392(3)
  03d48d0  stfs 1, 116(30)
  03d48d4  fmuls 9, 7, 10
  03d48d8  fmadds 2, 10, 4, 2
  03d48dc  fmuls 1, 7, 9
  03d48e0  fmadds 2, 9, 3, 2
  03d48e4  fmadds 1, 1, 6, 2
  03d48e8  fmadds 1, 5, 1, 8
  03d48ec  stfs 1, 24(31)
  03d48f0  ld 0, 160(1)
  03d48f4  mtlr 0
  03d48f8  ld 29, 120(1)
  03d48fc  ld 30, 128(1)
  03d4900  ld 31, 136(1)
  03d4904  addi 1, 1, 144
  03d4908  blr

M587_003d4938:   # 0x3d4938, 0x5d0 bytes
  03d4938  stdu 1, -416(1)
  03d493c  mflr 0
  03d4940  std 0, 432(1)
  03d4944  stfd 14, 272(1)
  03d4948  stfd 15, 280(1)
  03d494c  stfd 16, 288(1)
  03d4950  stfd 17, 296(1)
  03d4954  stfd 18, 304(1)
  03d4958  stfd 19, 312(1)
  03d495c  stfd 20, 320(1)
  03d4960  stfd 21, 328(1)
  03d4964  stfd 22, 336(1)
  03d4968  stfd 23, 344(1)
  03d496c  stfd 24, 352(1)
  03d4970  stfd 25, 360(1)
  03d4974  stfd 26, 368(1)
  03d4978  stfd 27, 376(1)
  03d497c  stfd 28, 384(1)
  03d4980  stfd 29, 392(1)
  03d4984  stfd 30, 400(1)
  03d4988  stfd 31, 408(1)
  03d498c  std 30, 256(1)
  03d4990  lis 4, 61
  03d4994  std 29, 248(1)
  03d4998  ori 30, 3, 0
  03d499c  addi 29, 4, 18700
  03d49a0  std 31, 264(1)
  03d49a4  std 28, 240(1)
  03d49a8  std 27, 232(1)
  03d49ac  std 26, 224(1)
  03d49b0  std 25, 216(1)
  03d49b4  std 24, 208(1)
  03d49b8  li 3, 5
  03d49bc  bl 0xfc620
  03d49c0  nop
  03d49c4  lfs 19, 0(29)
  03d49c8  lfs 2, 4(29)
  03d49cc  addic 31, 3, 5
  03d49d0  fmr 1, 19
  03d49d4  bl 0xfcbe8
  03d49d8  nop
  03d49dc  fmr 31, 1
  03d49e0  bl 0xfcc68
  03d49e4  nop
  03d49e8  lfs 2, 8(29)
  03d49ec  lfs 3, 12(29)
  03d49f0  fadds 2, 1, 2
  03d49f4  lfs 4, 16(29)
  03d49f8  fsubs 5, 3, 1
  03d49fc  cmpwi 31, 0
  03d4a00  fsubs 3, 3, 2
  03d4a04  fsubs 6, 4, 2
  03d4a08  fsub 7, 1, 5
  03d4a0c  fsubs 4, 4, 1
  03d4a10  fsub 8, 2, 3
  03d4a14  fsel 1, 7, 5, 1
  03d4a18  fsel 2, 8, 3, 2
  03d4a1c  lfs 3, 20(29)
  03d4a20  fsub 5, 4, 1
  03d4a24  fsub 7, 6, 2
  03d4a28  fsel 1, 5, 4, 1
  03d4a2c  lfs 4, 24(29)
  03d4a30  lfs 5, 28(29)
  03d4a34  lfs 8, 32(29)
  03d4a38  lfs 10, 192(30)
  03d4a3c  lfs 12, 196(30)
  03d4a40  fsel 2, 7, 6, 2
  03d4a44  fmuls 6, 1, 1
  03d4a48  fmuls 7, 2, 2
  03d4a4c  fmuls 9, 6, 1
  03d4a50  fmuls 11, 7, 2
  03d4a54  fmuls 13, 6, 9
  03d4a58  fmadds 1, 9, 3, 1
  03d4a5c  lfs 9, 200(30)
  03d4a60  fmuls 0, 7, 11
  03d4a64  fmadds 2, 11, 3, 2
  03d4a68  fmuls 11, 6, 13
  03d4a6c  lfs 3, 204(30)
  03d4a70  fmadds 1, 13, 4, 1
  03d4a74  lfs 13, 140(1)
  03d4a78  lfs 30, 16(30)
  03d4a7c  fmuls 29, 7, 0
  03d4a80  fmadds 2, 0, 4, 2
  03d4a84  fmuls 6, 6, 11
  03d4a88  fmadds 1, 11, 5, 1
  03d4a8c  lfs 4, 20(30)
  03d4a90  lfs 0, 24(30)
  03d4a94  lfs 28, 208(30)
  03d4a98  lfs 27, 212(30)
  03d4a9c  lfs 26, 216(30)
  03d4aa0  lfs 11, 220(30)
  03d4aa4  fmuls 7, 7, 29
  03d4aa8  fmadds 2, 29, 5, 2
  03d4aac  lfs 17, 224(30)
  03d4ab0  lfs 16, 228(30)
  03d4ab4  fmadds 1, 6, 8, 1
  03d4ab8  lfs 15, 232(30)
  03d4abc  lfs 14, 236(30)
  03d4ac0  lfs 18, 36(29)
  03d4ac4  li 30, 0
  03d4ac8  fmadds 2, 7, 8, 2
  03d4acc  fmuls 1, 1, 31
  03d4ad0  fmuls 2, 2, 31
  03d4ad4  fmadds 3, 3, 2, 13
  03d4ad8  fmadds 5, 10, 2, 30
  03d4adc  fmadds 4, 12, 2, 4
  03d4ae0  fmadds 2, 9, 2, 0
  03d4ae4  fmadds 3, 11, 1, 3
  03d4ae8  fmadds 5, 28, 1, 5
  03d4aec  fmadds 4, 27, 1, 4
  03d4af0  fmadds 1, 26, 1, 2
  03d4af4  stfs 3, 140(1)
  03d4af8  stfs 5, 128(1)
  03d4afc  stfs 4, 132(1)
  03d4b00  stfs 1, 136(1)
  03d4b04  bf 1, 0x3d4e90
  03d4b08  fmuls 1, 16, 16
  03d4b0c  lis 3, 61
  03d4b10  addi 3, 3, 18700
  03d4b14  lfs 2, 40(3)
  03d4b18  fmadds 1, 17, 17, 1
  03d4b1c  fmadds 1, 15, 15, 1
  03d4b20  frsqrte 3, 1
  03d4b24  fsqrts 31, 1
  03d4b28  fmuls 4, 1, 3
  03d4b2c  fmuls 5, 2, 3
  03d4b30  fnmsubs 4, 4, 3, 19
  03d4b34  fmadds 3, 4, 5, 3
  03d4b38  fmuls 4, 1, 3
  03d4b3c  fmuls 5, 2, 3
  03d4b40  fnmsubs 4, 4, 3, 19
  03d4b44  fmadds 3, 4, 5, 3
  03d4b48  fmuls 1, 1, 3
  03d4b4c  fmuls 2, 2, 3
  03d4b50  fnmsubs 1, 1, 3, 19
  03d4b54  fmadds 1, 1, 2, 3
  03d4b58  fmuls 15, 1, 15
  03d4b5c  fmuls 16, 1, 16
  03d4b60  fmuls 17, 1, 17
  03d4b64  lis 4, 132
  03d4b68  lis 29, 114
  03d4b6c  fmr 1, 18
  03d4b70  addic 3, 1, 176
  03d4b74  lfs 2, 26440(4)
  03d4b78  lfs 3, -3052(29)
  03d4b7c  fmuls 2, 2, 3
  03d4b80  bl 0xfea60
  03d4b84  nop
  03d4b88  lis 28, 132
  03d4b8c  lfs 2, 26436(28)
  03d4b90  fneg 1, 2
  03d4b94  bl 0xfcbe8
  03d4b98  nop
  03d4b9c  fadds 1, 1, 19
  03d4ba0  lis 3, 132
  03d4ba4  lfs 2, -3052(29)
  03d4ba8  fsub 4, 18, 31
  03d4bac  fsub 5, 18, 31
  03d4bb0  fsub 6, 31, 18
  03d4bb4  lfs 3, 26424(3)
  03d4bb8  fsub 7, 31, 18
  03d4bbc  lfs 9, 176(1)
  03d4bc0  fsub 8, 31, 18
  03d4bc4  lfs 10, 180(1)
  03d4bc8  fmuls 1, 3, 1
  03d4bcc  lfs 11, 184(1)
  03d4bd0  fsub 3, 18, 31
  03d4bd4  stfs 14, 156(1)
  03d4bd8  lfs 13, 26436(28)
  03d4bdc  fmuls 1, 1, 2
  03d4be0  fmuls 2, 1, 15
  03d4be4  fmuls 12, 1, 16
  03d4be8  fmuls 1, 1, 17
  03d4bec  fsel 4, 4, 18, 2
  03d4bf0  fsel 3, 3, 18, 12
  03d4bf4  fsel 5, 5, 18, 1
  03d4bf8  fsel 4, 6, 4, 2
  03d4bfc  fsel 3, 7, 3, 12
  03d4c00  fsel 5, 8, 5, 1
  03d4c04  fneg 1, 13
  03d4c08  fmr 2, 13
  03d4c0c  fadds 4, 4, 11
  03d4c10  fadds 3, 3, 10
  03d4c14  fadds 5, 5, 9
  03d4c18  stfs 4, 152(1)
  03d4c1c  stfs 3, 148(1)
  03d4c20  stfs 5, 144(1)
  03d4c24  bl 0xfcbe8
  03d4c28  nop
  03d4c2c  lfs 3, 148(1)
  03d4c30  lfs 4, 144(1)
  03d4c34  fadds 1, 1, 19
  03d4c38  fmuls 2, 3, 3
  03d4c3c  lfs 5, 152(1)
  03d4c40  lis 3, 132
  03d4c44  lfs 6, 26428(3)
  03d4c48  fmuls 1, 6, 1
  03d4c4c  fmadds 2, 4, 4, 2
  03d4c50  lfs 7, -3052(29)
  03d4c54  lis 3, 132
  03d4c58  lis 4, 132
  03d4c5c  lis 5, 132
  03d4c60  fmadds 2, 5, 5, 2
  03d4c64  fmuls 10, 1, 7
  03d4c68  fsqrts 6, 2
  03d4c6c  lfs 2, 156(1)
  03d4c70  stfs 2, 172(1)
  03d4c74  lfs 8, 26432(3)
  03d4c78  lfs 1, 26460(4)
  03d4c7c  lfs 2, 26464(5)
  03d4c80  fdivs 9, 10, 6
  03d4c84  fsub 10, 18, 6
  03d4c88  fsub 11, 18, 6
  03d4c8c  fsub 12, 18, 6
  03d4c90  fsub 13, 6, 18
  03d4c94  fsub 0, 6, 18
  03d4c98  fsub 6, 6, 18
  03d4c9c  fmuls 5, 5, 9
  03d4ca0  fmuls 4, 4, 9
  03d4ca4  fmuls 3, 3, 9
  03d4ca8  fsel 9, 10, 18, 5
  03d4cac  fsel 10, 11, 18, 4
  03d4cb0  fsel 11, 12, 18, 3
  03d4cb4  fsel 5, 13, 9, 5
  03d4cb8  fsel 4, 0, 10, 4
  03d4cbc  fsel 3, 6, 11, 3
  03d4cc0  fnmsubs 6, 8, 7, 5
  03d4cc4  stfs 5, 168(1)
  03d4cc8  stfs 4, 160(1)
  03d4ccc  stfs 3, 164(1)
  03d4cd0  stfs 6, 168(1)
  03d4cd4  bl 0xfcbe8
  03d4cd8  nop
  03d4cdc  lis 3, 132
  03d4ce0  lis 4, 132
  03d4ce4  stfs 1, 156(1)
  03d4ce8  lfs 1, 26468(3)
  03d4cec  lfs 2, 26472(4)
  03d4cf0  bl 0xfcbe8
  03d4cf4  nop
  03d4cf8  lis 3, 132
  03d4cfc  stfs 1, 172(1)
  03d4d00  lis 4, 132
  03d4d04  fmr 1, 18
  03d4d08  fmr 2, 19
  03d4d0c  lwz 3, 26476(3)
  03d4d10  lwz 4, 26480(4)
  03d4d14  extsw 29, 3
  03d4d18  extsw 28, 4
  03d4d1c  bl 0xfcbe8
  03d4d20  nop
  03d4d24  ori 4, 28, 0
  03d4d28  ori 3, 29, 0
  03d4d2c  bl 0x5027bc
  03d4d30  nop
  03d4d34  lis 4, 132
  03d4d38  lis 5, 132
  03d4d3c  fmr 1, 18
  03d4d40  ori 29, 3, 0
  03d4d44  fmr 2, 19
  03d4d48  lwz 3, 26484(4)
  03d4d4c  lwz 4, 26488(5)
  03d4d50  extsw 28, 3
  03d4d54  extsw 27, 4
  03d4d58  bl 0xfcbe8
  03d4d5c  nop
  03d4d60  ori 3, 28, 0
  03d4d64  ori 4, 27, 0
  03d4d68  bl 0x5027bc
  03d4d6c  nop
  03d4d70  ori 28, 3, 0
  03d4d74  fmr 1, 18
  03d4d78  fmr 2, 19
  03d4d7c  bl 0xfcbe8
  03d4d80  nop
  03d4d84  lis 3, 132
  03d4d88  lis 27, 114
  03d4d8c  lwz 3, 26444(3)
  03d4d90  extsw 3, 3
  03d4d94  std 3, 192(1)
  03d4d98  lfs 2, -3056(27)
  03d4d9c  lfd 3, 192(1)
  03d4da0  fcfid 3, 3
  03d4da4  frsp 3, 3
  03d4da8  fmadds 1, 3, 1, 19
  03d4dac  fmuls 1, 2, 1
  03d4db0  bl 0x502758
  03d4db4  nop
  03d4db8  lis 4, 132
  03d4dbc  lis 26, 132
  03d4dc0  ori 25, 3, 0
  03d4dc4  lwz 4, 26448(4)
  03d4dc8  extsw 4, 4
  03d4dcc  std 4, 192(1)
  03d4dd0  lfs 2, 26456(26)
  03d4dd4  lfd 3, 192(1)
  03d4dd8  fneg 1, 2
  03d4ddc  fcfid 3, 3
  03d4de0  frsp 30, 3
  03d4de4  bl 0xfcbe8
  03d4de8  nop
  03d4dec  fadds 1, 1, 19
  03d4df0  lfs 2, -3056(27)
  03d4df4  fmuls 1, 30, 1
  03d4df8  fmuls 1, 2, 1
  03d4dfc  bl 0x502758
  03d4e00  nop
  03d4e04  lis 4, 132
  03d4e08  ori 24, 3, 0
  03d4e0c  lwz 4, 26452(4)
  03d4e10  extsw 4, 4
  03d4e14  std 4, 192(1)
  03d4e18  lfs 2, 26456(26)
  03d4e1c  lfd 3, 192(1)
  03d4e20  fneg 1, 2
  03d4e24  fcfid 3, 3
  03d4e28  frsp 30, 3
  03d4e2c  bl 0xfcbe8
  03d4e30  nop
  03d4e34  fadds 1, 1, 19
  03d4e38  lfs 2, -3056(27)
  03d4e3c  fmuls 1, 30, 1
  03d4e40  fmuls 1, 2, 1
  03d4e44  bl 0x502758
  03d4e48  nop
  03d4e4c  lis 5, 132
  03d4e50  ori 10, 3, 0
  03d4e54  addic 4, 1, 144
  03d4e58  ori 7, 28, 0
  03d4e5c  addic 3, 1, 128
  03d4e60  lwz 6, 26500(5)
  03d4e64  ori 8, 25, 0
  03d4e68  addic 5, 1, 160
  03d4e6c  extsw 11, 6
  03d4e70  ori 6, 29, 0
  03d4e74  ori 9, 24, 0
  03d4e78  std 11, 112(1)
  03d4e7c  bl 0x1206e8
  03d4e80  nop
  03d4e84  addic 30, 30, 1
  03d4e88  cmpw 30, 31
  03d4e8c  bt 0, 0x3d4b64
  03d4e90  ld 0, 432(1)
  03d4e94  mtlr 0
  03d4e98  lfd 14, 272(1)
  03d4e9c  lfd 15, 280(1)
  03d4ea0  lfd 16, 288(1)
  03d4ea4  lfd 17, 296(1)
  03d4ea8  lfd 18, 304(1)
  03d4eac  lfd 19, 312(1)
  03d4eb0  lfd 20, 320(1)
  03d4eb4  lfd 21, 328(1)
  03d4eb8  lfd 22, 336(1)
  03d4ebc  lfd 23, 344(1)
  03d4ec0  lfd 24, 352(1)
  03d4ec4  lfd 25, 360(1)
  03d4ec8  lfd 26, 368(1)
  03d4ecc  lfd 27, 376(1)
  03d4ed0  lfd 28, 384(1)
  03d4ed4  lfd 29, 392(1)
  03d4ed8  lfd 30, 400(1)
  03d4edc  lfd 31, 408(1)
  03d4ee0  ld 24, 208(1)
  03d4ee4  ld 25, 216(1)
  03d4ee8  ld 26, 224(1)
  03d4eec  ld 27, 232(1)
  03d4ef0  ld 28, 240(1)
  03d4ef4  ld 29, 248(1)
  03d4ef8  ld 30, 256(1)
  03d4efc  ld 31, 264(1)
  03d4f00  addi 1, 1, 416
  03d4f04  blr

UpdateMoby_587:   # 0x3d4f28, 0x5f0 bytes
  03d4f28  stdu 1, -192(1)
  03d4f2c  mflr 0
  03d4f30  std 0, 208(1)
  03d4f34  std 31, 184(1)
  03d4f38  ori 31, 3, 0
  03d4f3c  lfs 1, 16(31)
  03d4f40  lfs 2, 20(31)
  03d4f44  fneg 3, 1
  03d4f48  lfs 1, 24(31)
  03d4f4c  fneg 2, 2
  03d4f50  std 30, 176(1)
  03d4f54  fneg 4, 1
  03d4f58  lwz 30, 120(31)
  03d4f5c  lfs 5, 28(31)
  03d4f60  lfs 6, 64(31)
  03d4f64  stfs 5, 124(1)
  03d4f68  lfs 5, 68(31)
  03d4f6c  stfs 6, 128(1)
  03d4f70  lfs 6, 72(31)
  03d4f74  stfs 5, 132(1)
  03d4f78  stfs 3, 112(1)
  03d4f7c  stfs 2, 116(1)
  03d4f80  stfs 4, 120(1)
  03d4f84  lfs 2, 76(31)
  03d4f88  lbz 3, 32(31)
  03d4f8c  stfs 6, 136(1)
  03d4f90  cmpwi 3, 2
  03d4f94  stfs 2, 140(1)
  03d4f98  cmpwi 1, 3, -1
  03d4f9c  cmpwi 6, 3, 0
  03d4fa0  std 29, 168(1)
  03d4fa4  cmpwi 7, 3, 4
  03d4fa8  bt 1, 0x3d4fb8
  03d4fac  bf 5, 0x3d54ac
  03d4fb0  bf 25, 0x3d4fd4
  03d4fb4  b 0x3d54ac
  03d4fb8  bt 29, 0x3d4fc8
  03d4fbc  cmpwi 3, 3
  03d4fc0  bf 1, 0x3d503c
  03d4fc4  b 0x3d511c
  03d4fc8  cmpwi 3, 5
  03d4fcc  bf 1, 0x3d5240
  03d4fd0  b 0x3d54ac
  03d4fd4  li 3, 0
  03d4fd8  stfs 1, 96(30)
  03d4fdc  lfs 1, 24(31)
  03d4fe0  stw 3, 112(30)
  03d4fe4  stfs 1, 100(30)
  03d4fe8  stw 3, 104(30)
  03d4fec  stw 3, 108(30)
  03d4ff0  bl 0xfcc68
  03d4ff4  nop
  03d4ff8  lwz 3, 136(30)
  03d4ffc  li 4, 0
  03d5000  lwz 5, 92(30)
  03d5004  stfs 1, 116(30)
  03d5008  li 6, 2
  03d500c  subc 3, 4, 3
  03d5010  ori 4, 5, 1
  03d5014  cntlzw 3, 3
  03d5018  li 5, 1
  03d501c  sldi 3, 3, 58
  03d5020  stw 4, 92(30)
  03d5024  subc 4, 5, 6
  03d5028  sradi 3, 3, 63
  03d502c  and 3, 3, 4
  03d5030  addc 3, 6, 3
  03d5034  stb 3, 32(31)
  03d5038  b 0x3d54ac
  03d503c  addic 3, 30, 124
  03d5040  bl 0x4fff60
  03d5044  nop
  03d5048  cmpwi 3, 0
  03d504c  bt 2, 0x3d54ac
  03d5050  lis 3, 251
  03d5054  lwz 3, -13188(3)
  03d5058  extsw 3, 3
  03d505c  bl 0x502730
  03d5060  nop
  03d5064  lis 3, 132
  03d5068  lis 4, 132
  03d506c  lfs 2, 26416(3)
  03d5070  lfs 3, 26420(4)
  03d5074  fsubs 1, 1, 2
  03d5078  fsubs 2, 3, 2
  03d507c  lis 3, 61
  03d5080  addi 3, 3, 20232
  03d5084  fdivs 2, 1, 2
  03d5088  lfs 1, 0(3)
  03d508c  lwz 3, 132(30)
  03d5090  fcmpu 0, 2, 1
  03d5094  cror 6, 0, 2
  03d5098  bt 6, 0x3d50a4
  03d509c  fmr 2, 1
  03d50a0  b 0x3d50c0
  03d50a4  lis 4, 61
  03d50a8  addi 4, 4, 20232
  03d50ac  lfs 3, 4(4)
  03d50b0  fcmpu 0, 2, 3
  03d50b4  cror 6, 1, 2
  03d50b8  bt 6, 0x3d50c0
  03d50bc  fmr 2, 3
  03d50c0  lis 4, 61
  03d50c4  cmpwi 3, 0
  03d50c8  addi 4, 4, 20232
  03d50cc  lfs 3, 8(4)
  03d50d0  fnmsubs 1, 2, 3, 1
  03d50d4  bt 2, 0x3d50e4
  03d50d8  lis 3, 132
  03d50dc  lfs 2, 26400(3)
  03d50e0  b 0x3d50ec
  03d50e4  lis 3, 132
  03d50e8  lfs 2, 26408(3)
  03d50ec  fmuls 1, 2, 1
  03d50f0  lis 3, 61
  03d50f4  lis 4, 114
  03d50f8  addi 3, 3, 20232
  03d50fc  lfs 2, 12(3)
  03d5100  lfs 3, -3052(4)
  03d5104  li 3, 4
  03d5108  fmuls 1, 1, 2
  03d510c  fmuls 1, 1, 3
  03d5110  stfs 1, 108(30)
  03d5114  stb 3, 32(31)
  03d5118  b 0x3d54ac
  03d511c  lbz 3, 49(31)
  03d5120  cmpwi 3, 0
  03d5124  bt 2, 0x3d5190
  03d5128  addic 3, 30, 140
  03d512c  bl 0x4fff60
  03d5130  nop
  03d5134  cmpwi 3, 0
  03d5138  bt 2, 0x3d5190
  03d513c  ori 3, 31, 0
  03d5140  bl 0x3d4938
  03d5144  li 3, 90
  03d5148  li 4, 120
  03d514c  bl 0xfe484
  03d5150  nop
  03d5154  extsw 3, 3
  03d5158  lis 4, 114
  03d515c  std 3, 144(1)
  03d5160  lis 3, 61
  03d5164  addi 3, 3, 20232
  03d5168  lfs 1, 16(3)
  03d516c  lfs 2, -3056(4)
  03d5170  lfd 3, 144(1)
  03d5174  li 3, 140
  03d5178  fcfid 3, 3
  03d517c  frsp 3, 3
  03d5180  fadds 1, 3, 1
  03d5184  fmuls 1, 2, 1
  03d5188  fctiwz 1, 1
  03d518c  stfiwx 1, 3, 30
  03d5190  lis 29, 151
  03d5194  addic 29, 29, -25376
  03d5198  lwz 3, 764(29)
  03d519c  cmpw 3, 31
  03d51a0  bf 2, 0x3d51d8
  03d51a4  lhz 3, 782(29)
  03d51a8  cmpwi 3, 0
  03d51ac  bf 2, 0x3d51d8
  03d51b0  li 5, 0
  03d51b4  li 3, 1
  03d51b8  li 6, 5
  03d51bc  li 4, 0
  03d51c0  stw 5, 140(30)
  03d51c4  ori 5, 31, 0
  03d51c8  stb 6, 32(31)
  03d51cc  bl 0x15d12c
  03d51d0  nop
  03d51d4  sth 3, 146(30)
  03d51d8  lwz 3, 128(30)
  03d51dc  cmpwi 3, 0
  03d51e0  bt 2, 0x3d54ac
  03d51e4  lfs 1, 20(31)
  03d51e8  lfs 2, 132(29)
  03d51ec  lfs 3, 16(31)
  03d51f0  fsubs 1, 1, 2
  03d51f4  lfs 2, 128(29)
  03d51f8  fsubs 2, 3, 2
  03d51fc  lis 3, 132
  03d5200  fmuls 1, 1, 1
  03d5204  fmadds 1, 2, 2, 1
  03d5208  lfs 2, 26412(3)
  03d520c  fsqrts 1, 1
  03d5210  fcmpu 0, 1, 2
  03d5214  cror 6, 1, 2
  03d5218  bt 6, 0x3d54ac
  03d521c  li 6, 5
  03d5220  li 3, 1
  03d5224  li 4, 0
  03d5228  ori 5, 31, 0
  03d522c  stb 6, 32(31)
  03d5230  bl 0x15d12c
  03d5234  nop
  03d5238  sth 3, 146(30)
  03d523c  b 0x3d54ac
  03d5240  lbz 3, 49(31)
  03d5244  cmpwi 3, 0
  03d5248  bt 2, 0x3d52b4
  03d524c  addic 3, 30, 140
  03d5250  bl 0x4fff60
  03d5254  nop
  03d5258  cmpwi 3, 0
  03d525c  bt 2, 0x3d52b4
  03d5260  ori 3, 31, 0
  03d5264  bl 0x3d4938
  03d5268  li 3, 15
  03d526c  li 4, 30
  03d5270  bl 0xfe484
  03d5274  nop
  03d5278  extsw 3, 3
  03d527c  lis 4, 114
  03d5280  std 3, 144(1)
  03d5284  lis 3, 61
  03d5288  addi 3, 3, 20232
  03d528c  lfs 1, 16(3)
  03d5290  lfs 2, -3056(4)
  03d5294  lfd 3, 144(1)
  03d5298  li 3, 140
  03d529c  fcfid 3, 3
  03d52a0  frsp 3, 3
  03d52a4  fadds 1, 3, 1
  03d52a8  fmuls 1, 2, 1
  03d52ac  fctiwz 1, 1
  03d52b0  stfiwx 1, 3, 30
  03d52b4  lis 3, 251
  03d52b8  lwz 3, -13188(3)
  03d52bc  extsw 3, 3
  03d52c0  bl 0x502730
  03d52c4  nop
  03d52c8  lis 3, 132
  03d52cc  lis 4, 132
  03d52d0  lfs 2, 26416(3)
  03d52d4  lfs 3, 26420(4)
  03d52d8  fsubs 4, 1, 2
  03d52dc  fsubs 1, 3, 2
  03d52e0  lis 3, 61
  03d52e4  lfs 2, 100(30)
  03d52e8  addi 3, 3, 20232
  03d52ec  lfs 3, 0(3)
  03d52f0  fdivs 4, 4, 1
  03d52f4  lfs 1, 96(30)
  03d52f8  lwz 3, 128(30)
  03d52fc  fcmpu 0, 4, 3
  03d5300  cror 6, 0, 2
  03d5304  bt 6, 0x3d5310
  03d5308  fmr 4, 3
  03d530c  b 0x3d532c
  03d5310  lis 4, 61
  03d5314  addi 4, 4, 20232
  03d5318  lfs 5, 4(4)
  03d531c  fcmpu 0, 4, 5
  03d5320  cror 6, 1, 2
  03d5324  bt 6, 0x3d532c
  03d5328  fmr 4, 5
  03d532c  lis 4, 61
  03d5330  cmpwi 3, 0
  03d5334  addi 4, 4, 20232
  03d5338  lfs 5, 8(4)
  03d533c  fnmsubs 3, 4, 5, 3
  03d5340  bf 2, 0x3d535c
  03d5344  lwz 3, 136(30)
  03d5348  cmpwi 3, 0
  03d534c  bt 2, 0x3d5378
  03d5350  lwz 3, 132(30)
  03d5354  cmpwi 3, 0
  03d5358  bf 2, 0x3d5378
  03d535c  lis 4, 61
  03d5360  lfs 5, 112(30)
  03d5364  lis 3, 114
  03d5368  addi 4, 4, 20232
  03d536c  lfs 4, -3048(3)
  03d5370  lfs 3, 20(4)
  03d5374  b 0x3d53bc
  03d5378  lwz 3, 132(30)
  03d537c  cmpwi 3, 0
  03d5380  bt 2, 0x3d539c
  03d5384  lis 3, 132
  03d5388  lfs 6, 112(30)
  03d538c  lis 4, 114
  03d5390  lfs 4, 26384(3)
  03d5394  lfs 5, -3048(4)
  03d5398  b 0x3d53b0
  03d539c  lis 3, 132
  03d53a0  lfs 6, 112(30)
  03d53a4  lis 4, 114
  03d53a8  lfs 4, 26388(3)
  03d53ac  lfs 5, -3048(4)
  03d53b0  fmuls 4, 4, 3
  03d53b4  fmr 3, 5
  03d53b8  fmr 5, 6
  03d53bc  fnmsubs 5, 4, 3, 5
  03d53c0  lis 3, 61
  03d53c4  addi 3, 3, 20232
  03d53c8  fadds 2, 2, 5
  03d53cc  stfs 5, 112(30)
  03d53d0  stfs 2, 100(30)
  03d53d4  lfs 2, 24(3)
  03d53d8  lfs 3, 24(31)
  03d53dc  fsubs 1, 1, 2
  03d53e0  fcmpu 0, 3, 1
  03d53e4  cror 6, 1, 2
  03d53e8  bt 6, 0x3d54ac
  03d53ec  lis 3, 151
  03d53f0  addic 3, 3, -25376
  03d53f4  lwz 4, 764(3)
  03d53f8  cmpw 4, 31
  03d53fc  bf 2, 0x3d5460
  03d5400  lhz 4, 782(3)
  03d5404  cmpwi 4, 0
  03d5408  bf 2, 0x3d5460
  03d540c  lis 4, 161
  03d5410  lwz 5, 136(3)
  03d5414  srawi 7, 5, 31
  03d5418  srwi 9, 7, 1
  03d541c  lwz 4, 2356(4)
  03d5420  xor 5, 9, 5
  03d5424  srawi 6, 4, 31
  03d5428  subc 5, 5, 7
  03d542c  srwi 8, 6, 1
  03d5430  xor 4, 8, 4
  03d5434  subc 4, 4, 6
  03d5438  cmpw 5, 4
  03d543c  bf 0, 0x3d5460
  03d5440  lwz 3, 8324(3)
  03d5444  cmpwi 3, 119
  03d5448  bt 2, 0x3d5460
  03d544c  li 3, 119
  03d5450  li 4, 1
  03d5454  bl 0xb72b0
  03d5458  nop
  03d545c  lfs 5, 112(30)
  03d5460  lis 3, 61
  03d5464  lis 4, 114
  03d5468  addi 3, 3, 20232
  03d546c  lfs 1, 28(3)
  03d5470  lfs 2, -3048(4)
  03d5474  lis 3, 16752
  03d5478  fnmsubs 1, 2, 1, 5
  03d547c  stfs 1, 112(30)
  03d5480  lwz 4, 24(31)
  03d5484  srawi 5, 4, 31
  03d5488  srwi 6, 5, 1
  03d548c  xor 4, 6, 4
  03d5490  subc 4, 4, 5
  03d5494  cmpw 4, 3
  03d5498  bf 0, 0x3d54ac
  03d549c  ori 3, 31, 0
  03d54a0  bl 0xefb38
  03d54a4  nop
  03d54a8  b 0x3d54fc
  03d54ac  ori 3, 31, 0
  03d54b0  bl 0x3d4720
  03d54b4  lfs 1, 112(1)
  03d54b8  addic 3, 30, 32
  03d54bc  lfs 2, 16(31)
  03d54c0  addic 4, 1, 112
  03d54c4  lfs 3, 116(1)
  03d54c8  addic 5, 1, 128
  03d54cc  fadds 1, 1, 2
  03d54d0  addic 6, 31, 64
  03d54d4  lfs 2, 20(31)
  03d54d8  lfs 4, 120(1)
  03d54dc  fadds 2, 3, 2
  03d54e0  lfs 3, 24(31)
  03d54e4  fadds 3, 4, 3
  03d54e8  stfs 1, 112(1)
  03d54ec  stfs 2, 116(1)
  03d54f0  stfs 3, 120(1)
  03d54f4  bl 0x112900
  03d54f8  nop
  03d54fc  ld 0, 208(1)
  03d5500  mtlr 0
  03d5504  ld 29, 168(1)
  03d5508  ld 30, 176(1)
  03d550c  ld 31, 184(1)
  03d5510  addi 1, 1, 192
  03d5514  blr

M587_003d5518:   # 0x3d5518, 0x2c bytes
  03d5518  lbz 4, 32(3)
  03d551c  cmpwi 4, 1
  03d5520  cmpwi 1, 4, 2
  03d5524  bf 2, 0x3d5530
  03d5528  li 3, 1
  03d552c  b 0x3d5540
  03d5530  bf 6, 0x3d553c
  03d5534  li 4, 5
  03d5538  stb 4, 32(3)
  03d553c  li 3, 0
  03d5540  blr

M587_003d5544:   # 0x3d5544, 0x30 bytes
  03d5544  lbz 7, 32(3)
  03d5548  lwz 6, 120(3)
  03d554c  cmpwi 7, 1
  03d5550  bf 2, 0x3d556c
  03d5554  li 7, 3
  03d5558  stb 7, 32(3)
  03d555c  stw 4, 124(6)
  03d5560  li 3, 1
  03d5564  stw 5, 120(6)
  03d5568  b 0x3d5570
  03d556c  li 3, 0
  03d5570  blr

M587_003d5574:   # 0x3d5574, 0x14 bytes
  03d5574  lis 3, 132
  03d5578  lis 4, 1
  03d557c  addic 3, 3, 26508
  03d5580  stw 4, 72(3)
  03d5584  blr
