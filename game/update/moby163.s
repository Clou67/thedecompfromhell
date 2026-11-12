# game/update/moby163.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_163:   # 0x2a4420, 0xa5c bytes
  02a4420  stdu 1, -352(1)
  02a4424  mflr 0
  02a4428  std 0, 368(1)
  02a442c  stfd 27, 312(1)
  02a4430  stfd 28, 320(1)
  02a4434  stfd 29, 328(1)
  02a4438  stfd 30, 336(1)
  02a443c  stfd 31, 344(1)
  02a4440  std 31, 304(1)
  02a4444  cmpwi 3, 0
  02a4448  std 30, 296(1)
  02a444c  std 29, 288(1)
  02a4450  std 28, 280(1)
  02a4454  std 27, 272(1)
  02a4458  ori 31, 3, 0
  02a445c  bt 2, 0x2a4e44
  02a4460  lwz 30, 120(31)
  02a4464  ori 3, 30, 0
  02a4468  bl 0x4fff60
  02a446c  nop
  02a4470  lis 29, 150
  02a4474  lis 28, 151
  02a4478  addic 29, 29, 19008
  02a447c  addic 28, 28, -25376
  02a4480  lwz 3, 164(29)
  02a4484  lwz 5, 4256(28)
  02a4488  lwz 4, 768(28)
  02a448c  and 3, 3, 5
  02a4490  lwz 5, 764(28)
  02a4494  cmpwi 3, 0
  02a4498  bt 2, 0x2a4e04
  02a449c  lwz 3, 0(30)
  02a44a0  cmpwi 3, 0
  02a44a4  bf 2, 0x2a4e04
  02a44a8  lwz 3, 4(30)
  02a44ac  cmpwi 3, 0
  02a44b0  bf 2, 0x2a4e04
  02a44b4  lbz 3, 8364(28)
  02a44b8  cmpwi 3, 0
  02a44bc  bf 2, 0x2a4e04
  02a44c0  lwz 3, 8332(28)
  02a44c4  cmpwi 1, 3, 2
  02a44c8  cmpwi 3, 7
  02a44cc  cror 2, 2, 6
  02a44d0  bt 2, 0x2a4e04
  02a44d4  cmpwi 3, 3
  02a44d8  bt 2, 0x2a4e04
  02a44dc  cmpwi 3, 4
  02a44e0  bt 2, 0x2a4e04
  02a44e4  cmpwi 3, 5
  02a44e8  bt 2, 0x2a4e04
  02a44ec  cmpwi 3, 6
  02a44f0  bt 2, 0x2a4e04
  02a44f4  cmpwi 3, 16
  02a44f8  bt 2, 0x2a4e04
  02a44fc  cmpwi 3, 14
  02a4500  bt 2, 0x2a4e04
  02a4504  cmpwi 3, 9
  02a4508  bt 2, 0x2a4e04
  02a450c  cmpwi 3, 10
  02a4510  bt 2, 0x2a4e04
  02a4514  cmpwi 3, 11
  02a4518  bt 2, 0x2a4e04
  02a451c  cmpwi 3, 12
  02a4520  bt 1, 0x2a4e04
  02a4524  lwz 3, 8324(28)
  02a4528  cmpwi 1, 3, 101
  02a452c  cmpwi 3, 114
  02a4530  cror 2, 2, 6
  02a4534  bt 2, 0x2a4e04
  02a4538  cmpwi 3, 50
  02a453c  bt 2, 0x2a4e04
  02a4540  lis 27, 149
  02a4544  addic 27, 27, 5056
  02a4548  lwz 3, 384(27)
  02a454c  cmpwi 3, 0
  02a4550  bt 2, 0x2a4560
  02a4554  lhz 3, 134(3)
  02a4558  cmpwi 3, 5
  02a455c  bt 2, 0x2a4e04
  02a4560  cmpwi 4, 0
  02a4564  bt 2, 0x2a4e04
  02a4568  cmpwi 5, 0
  02a456c  bt 2, 0x2a4584
  02a4570  lhz 3, 166(5)
  02a4574  cmpwi 3, 318
  02a4578  cmpwi 1, 3, 1135
  02a457c  bt 2, 0x2a4e04
  02a4580  bt 6, 0x2a4e04
  02a4584  li 3, -1
  02a4588  li 4, 1
  02a458c  bl 0xaa258
  02a4590  nop
  02a4594  ori 4, 3, 0
  02a4598  lwz 3, 856(27)
  02a459c  cmpwi 4, 0
  02a45a0  lfs 6, 856(27)
  02a45a4  lhz 4, 8904(28)
  02a45a8  bt 2, 0x2a4ddc
  02a45ac  lis 5, 42
  02a45b0  lfs 31, 1672(28)
  02a45b4  addi 5, 5, 17408
  02a45b8  lfs 30, 0(5)
  02a45bc  lwz 5, 8324(28)
  02a45c0  fmr 5, 30
  02a45c4  cmpwi 5, 1
  02a45c8  bf 2, 0x2a4a34
  02a45cc  lwz 5, 8320(28)
  02a45d0  lhz 5, 52(5)
  02a45d4  clrlwi 5, 5, 31
  02a45d8  cmpwi 5, 0
  02a45dc  bt 2, 0x2a4a34
  02a45e0  lwz 5, 848(27)
  02a45e4  lwz 4, 852(27)
  02a45e8  lfs 3, 848(27)
  02a45ec  lfs 1, 852(27)
  02a45f0  fabs 4, 3
  02a45f4  fabs 8, 1
  02a45f8  rlwinm 6, 4, 3, 29, 29
  02a45fc  lis 4, 115
  02a4600  addic 4, 4, 22784
  02a4604  fsubs 2, 4, 8
  02a4608  stfs 2, 144(1)
  02a460c  lwz 7, 144(1)
  02a4610  lfs 2, 144(1)
  02a4614  rlwimi 6, 7, 2, 30, 30
  02a4618  fsub 7, 2, 30
  02a461c  fsub 9, 2, 30
  02a4620  rlwimi 6, 5, 4, 28, 28
  02a4624  ori 5, 4, 0
  02a4628  rlwimi 5, 6, 2, 26, 28
  02a462c  slwi 6, 6, 2
  02a4630  clrldi 5, 5, 32
  02a4634  fsel 7, 7, 4, 8
  02a4638  lfsx 31, 4, 6
  02a463c  fsel 4, 9, 8, 4
  02a4640  lfs 2, 4(5)
  02a4644  fcmpu 0, 7, 30
  02a4648  bt 1, 0x2a4654
  02a464c  fmr 31, 30
  02a4650  b 0x2a4778
  02a4654  fsubs 8, 4, 7
  02a4658  fadds 4, 4, 7
  02a465c  addic 5, 1, 16
  02a4660  li 9, 2
  02a4664  addic 7, 5, 212
  02a4668  addic 6, 5, 196
  02a466c  mtctr 9
  02a4670  fdivs 4, 8, 4
  02a4674  fmuls 7, 4, 4
  02a4678  stfs 4, 224(1)
  02a467c  stfs 4, 216(1)
  02a4680  stfs 4, 220(1)
  02a4684  stfs 4, 212(1)
  02a4688  lfs 9, 224(1)
  02a468c  lfs 10, 216(1)
  02a4690  lfs 11, 220(1)
  02a4694  fmuls 8, 7, 7
  02a4698  fmuls 10, 10, 7
  02a469c  fmuls 9, 9, 8
  02a46a0  fmuls 4, 8, 8
  02a46a4  fmuls 8, 11, 8
  02a46a8  stfs 10, 216(1)
  02a46ac  fmuls 7, 9, 7
  02a46b0  stfs 8, 220(1)
  02a46b4  stfs 7, 224(1)
  02a46b8  lfs 7, 196(5)
  02a46bc  fmuls 7, 7, 4
  02a46c0  stfs 7, 212(5)
  02a46c4  lfs 7, 4(6)
  02a46c8  addic 6, 6, 8
  02a46cc  fmuls 7, 7, 4
  02a46d0  addic 5, 5, 8
  02a46d4  stfs 7, 4(7)
  02a46d8  addic 7, 7, 8
  02a46dc  bdnz 0x2a46b8
  02a46e0  li 7, 4
  02a46e4  ori 5, 1, 0
  02a46e8  mtctr 7
  02a46ec  lis 6, 115
  02a46f0  addic 7, 5, 212
  02a46f4  addic 6, 6, 22752
  02a46f8  ori 8, 7, 0
  02a46fc  lfs 4, 212(5)
  02a4700  lfs 7, 0(6)
  02a4704  fmuls 4, 4, 7
  02a4708  lfs 7, 4(6)
  02a470c  addic 6, 6, 8
  02a4710  stfs 4, 212(5)
  02a4714  lfs 4, 4(7)
  02a4718  addic 5, 5, 8
  02a471c  fmuls 4, 4, 7
  02a4720  stfs 4, 4(7)
  02a4724  addic 7, 7, 8
  02a4728  bdnz 0x2a46fc
  02a472c  ori 5, 1, 0
  02a4730  fmr 4, 30
  02a4734  mtctr 9
  02a4738  lfs 7, 212(5)
  02a473c  fadds 4, 4, 7
  02a4740  lfs 7, 4(8)
  02a4744  addic 5, 5, 16
  02a4748  lfs 8, 8(8)
  02a474c  lfs 9, 12(8)
  02a4750  addic 8, 8, 16
  02a4754  fadds 4, 4, 7
  02a4758  fadds 4, 4, 8
  02a475c  fadds 4, 4, 9
  02a4760  bdnz 0x2a4738
  02a4764  lis 5, 42
  02a4768  addi 5, 5, 17408
  02a476c  lfs 7, 4(5)
  02a4770  fadds 4, 4, 7
  02a4774  fmadds 31, 4, 31, 2
  02a4778  fmuls 4, 1, 1
  02a477c  fabs 7, 6
  02a4780  rlwinm 3, 3, 3, 29, 29
  02a4784  fmadds 4, 3, 3, 4
  02a4788  fsqrts 1, 4
  02a478c  fabs 9, 1
  02a4790  stfs 1, 136(1)
  02a4794  fsubs 1, 9, 7
  02a4798  stfs 1, 140(1)
  02a479c  lwz 5, 136(1)
  02a47a0  lfs 1, 136(1)
  02a47a4  lwz 6, 140(1)
  02a47a8  fabs 8, 1
  02a47ac  lfs 1, 140(1)
  02a47b0  rlwimi 3, 6, 2, 30, 30
  02a47b4  fsub 2, 1, 30
  02a47b8  fsub 10, 1, 30
  02a47bc  rlwimi 3, 5, 4, 28, 28
  02a47c0  ori 5, 4, 0
  02a47c4  rlwimi 5, 3, 2, 26, 28
  02a47c8  slwi 3, 3, 2
  02a47cc  clrldi 5, 5, 32
  02a47d0  fsel 8, 2, 8, 7
  02a47d4  lfsx 1, 4, 3
  02a47d8  lfs 2, 4(5)
  02a47dc  fsel 7, 10, 7, 9
  02a47e0  fcmpu 0, 8, 30
  02a47e4  bt 1, 0x2a47ec
  02a47e8  b 0x2a490c
  02a47ec  fsubs 9, 7, 8
  02a47f0  fadds 7, 7, 8
  02a47f4  addic 3, 1, 16
  02a47f8  li 6, 2
  02a47fc  addic 5, 3, 180
  02a4800  addic 4, 3, 164
  02a4804  mtctr 6
  02a4808  fdivs 7, 9, 7
  02a480c  fmuls 8, 7, 7
  02a4810  stfs 7, 192(1)
  02a4814  stfs 7, 184(1)
  02a4818  stfs 7, 188(1)
  02a481c  stfs 7, 180(1)
  02a4820  lfs 10, 192(1)
  02a4824  lfs 11, 184(1)
  02a4828  lfs 12, 188(1)
  02a482c  fmuls 9, 8, 8
  02a4830  fmuls 11, 11, 8
  02a4834  fmuls 10, 10, 9
  02a4838  fmuls 7, 9, 9
  02a483c  fmuls 9, 12, 9
  02a4840  stfs 11, 184(1)
  02a4844  fmuls 8, 10, 8
  02a4848  stfs 9, 188(1)
  02a484c  stfs 8, 192(1)
  02a4850  lfs 8, 164(3)
  02a4854  fmuls 8, 8, 7
  02a4858  stfs 8, 180(3)
  02a485c  lfs 8, 4(4)
  02a4860  addic 4, 4, 8
  02a4864  fmuls 8, 8, 7
  02a4868  addic 3, 3, 8
  02a486c  stfs 8, 4(5)
  02a4870  addic 5, 5, 8
  02a4874  bdnz 0x2a4850
  02a4878  li 5, 4
  02a487c  ori 3, 1, 0
  02a4880  mtctr 5
  02a4884  lis 4, 115
  02a4888  addic 5, 3, 180
  02a488c  addic 4, 4, 22752
  02a4890  ori 7, 5, 0
  02a4894  lfs 7, 180(3)
  02a4898  lfs 8, 0(4)
  02a489c  fmuls 7, 7, 8
  02a48a0  lfs 8, 4(4)
  02a48a4  addic 4, 4, 8
  02a48a8  stfs 7, 180(3)
  02a48ac  lfs 7, 4(5)
  02a48b0  addic 3, 3, 8
  02a48b4  fmuls 7, 7, 8
  02a48b8  stfs 7, 4(5)
  02a48bc  addic 5, 5, 8
  02a48c0  bdnz 0x2a4894
  02a48c4  ori 3, 1, 0
  02a48c8  mtctr 6
  02a48cc  lfs 7, 180(3)
  02a48d0  lfs 8, 4(7)
  02a48d4  fadds 7, 30, 7
  02a48d8  lfs 9, 8(7)
  02a48dc  addic 3, 3, 16
  02a48e0  lfs 30, 12(7)
  02a48e4  addic 7, 7, 16
  02a48e8  fadds 7, 7, 8
  02a48ec  fadds 7, 7, 9
  02a48f0  fadds 30, 7, 30
  02a48f4  bdnz 0x2a48cc
  02a48f8  lis 3, 42
  02a48fc  addi 3, 3, 17408
  02a4900  lfs 7, 4(3)
  02a4904  fadds 30, 30, 7
  02a4908  fmadds 30, 30, 1, 2
  02a490c  fmadds 1, 6, 6, 4
  02a4910  fneg 30, 30
  02a4914  fsqrts 1, 1
  02a4918  fcmpu 0, 1, 5
  02a491c  bf 2, 0x2a4954
  02a4920  fmr 2, 5
  02a4924  stfs 3, 112(1)
  02a4928  lfs 1, 852(27)
  02a492c  stfs 1, 116(1)
  02a4930  lfs 3, 856(27)
  02a4934  stfs 3, 120(1)
  02a4938  lfs 4, 860(27)
  02a493c  stfs 5, 120(1)
  02a4940  fmr 1, 2
  02a4944  stfs 2, 116(1)
  02a4948  fmr 3, 1
  02a494c  stfs 1, 112(1)
  02a4950  b 0x2a4988
  02a4954  lis 3, 42
  02a4958  addi 3, 3, 17408
  02a495c  lfs 2, 8(3)
  02a4960  fdivs 2, 2, 1
  02a4964  lfs 1, 852(27)
  02a4968  lfs 6, 856(27)
  02a496c  lfs 4, 860(27)
  02a4970  fmuls 3, 3, 2
  02a4974  fmuls 1, 1, 2
  02a4978  fmuls 2, 6, 2
  02a497c  stfs 3, 112(1)
  02a4980  stfs 1, 116(1)
  02a4984  stfs 2, 120(1)
  02a4988  lfs 6, 884(27)
  02a498c  lfs 7, 880(27)
  02a4990  fmuls 8, 6, 6
  02a4994  lfs 9, 888(27)
  02a4998  stfs 4, 124(1)
  02a499c  lis 3, 42
  02a49a0  addi 3, 3, 17408
  02a49a4  fmadds 8, 7, 7, 8
  02a49a8  fmadds 8, 9, 9, 8
  02a49ac  fsqrts 4, 8
  02a49b0  lfs 8, 12(3)
  02a49b4  lfs 10, 320(27)
  02a49b8  lfs 11, 324(27)
  02a49bc  lfs 12, 328(27)
  02a49c0  fdivs 8, 8, 4
  02a49c4  fsub 13, 5, 4
  02a49c8  fsub 0, 5, 4
  02a49cc  fsub 29, 5, 4
  02a49d0  fsub 28, 4, 5
  02a49d4  fsub 27, 4, 5
  02a49d8  fsub 4, 4, 5
  02a49dc  fmuls 9, 9, 8
  02a49e0  fmuls 6, 6, 8
  02a49e4  fmuls 7, 7, 8
  02a49e8  fsel 8, 13, 5, 9
  02a49ec  fsel 13, 0, 5, 6
  02a49f0  fsel 5, 29, 5, 7
  02a49f4  fsel 8, 28, 8, 9
  02a49f8  fsel 6, 27, 13, 6
  02a49fc  fsel 4, 4, 5, 7
  02a4a00  fadds 2, 2, 8
  02a4a04  fadds 1, 1, 6
  02a4a08  fadds 3, 3, 4
  02a4a0c  fadds 4, 2, 12
  02a4a10  fadds 5, 1, 11
  02a4a14  fadds 6, 3, 10
  02a4a18  stfs 2, 120(1)
  02a4a1c  stfs 1, 116(1)
  02a4a20  stfs 3, 112(1)
  02a4a24  stfs 4, 120(1)
  02a4a28  stfs 5, 116(1)
  02a4a2c  stfs 6, 112(1)
  02a4a30  b 0x2a4c8c
  02a4a34  cmpwi 4, 1
  02a4a38  bf 2, 0x2a4c3c
  02a4a3c  lfs 1, 212(31)
  02a4a40  lfs 2, 208(31)
  02a4a44  fmuls 1, 1, 1
  02a4a48  lwz 4, 216(31)
  02a4a4c  lis 3, 115
  02a4a50  rlwinm 4, 4, 3, 29, 29
  02a4a54  addic 3, 3, 22784
  02a4a58  fmadds 1, 2, 2, 1
  02a4a5c  lfs 2, 216(31)
  02a4a60  fabs 3, 2
  02a4a64  fsqrts 1, 1
  02a4a68  fabs 5, 1
  02a4a6c  stfs 1, 128(1)
  02a4a70  fsubs 1, 5, 3
  02a4a74  stfs 1, 132(1)
  02a4a78  lwz 5, 128(1)
  02a4a7c  lfs 1, 128(1)
  02a4a80  lwz 6, 132(1)
  02a4a84  fabs 4, 1
  02a4a88  lfs 1, 132(1)
  02a4a8c  rlwimi 4, 6, 2, 30, 30
  02a4a90  fsub 2, 1, 30
  02a4a94  rlwimi 4, 5, 4, 28, 28
  02a4a98  fsub 6, 1, 30
  02a4a9c  ori 5, 3, 0
  02a4aa0  rlwimi 5, 4, 2, 26, 28
  02a4aa4  slwi 4, 4, 2
  02a4aa8  clrldi 5, 5, 32
  02a4aac  lfsx 1, 3, 4
  02a4ab0  fsel 4, 2, 4, 3
  02a4ab4  lfs 2, 4(5)
  02a4ab8  fsel 3, 6, 3, 5
  02a4abc  fcmpu 0, 4, 30
  02a4ac0  bt 1, 0x2a4ac8
  02a4ac4  b 0x2a4be8
  02a4ac8  fsubs 5, 3, 4
  02a4acc  fadds 3, 3, 4
  02a4ad0  addic 3, 1, 16
  02a4ad4  li 6, 2
  02a4ad8  addic 4, 3, 132
  02a4adc  addic 5, 3, 148
  02a4ae0  mtctr 6
  02a4ae4  fdivs 3, 5, 3
  02a4ae8  fmuls 4, 3, 3
  02a4aec  stfs 3, 160(1)
  02a4af0  stfs 3, 152(1)
  02a4af4  stfs 3, 156(1)
  02a4af8  stfs 3, 148(1)
  02a4afc  lfs 6, 160(1)
  02a4b00  lfs 7, 152(1)
  02a4b04  lfs 8, 156(1)
  02a4b08  fmuls 5, 4, 4
  02a4b0c  fmuls 7, 7, 4
  02a4b10  fmuls 6, 6, 5
  02a4b14  fmuls 3, 5, 5
  02a4b18  fmuls 5, 8, 5
  02a4b1c  stfs 7, 152(1)
  02a4b20  fmuls 4, 6, 4
  02a4b24  stfs 5, 156(1)
  02a4b28  stfs 4, 160(1)
  02a4b2c  lfs 4, 132(3)
  02a4b30  fmuls 4, 4, 3
  02a4b34  stfs 4, 148(3)
  02a4b38  lfs 4, 4(4)
  02a4b3c  addic 3, 3, 8
  02a4b40  addic 4, 4, 8
  02a4b44  fmuls 4, 4, 3
  02a4b48  stfs 4, 4(5)
  02a4b4c  addic 5, 5, 8
  02a4b50  bdnz 0x2a4b2c
  02a4b54  li 5, 4
  02a4b58  ori 3, 1, 0
  02a4b5c  mtctr 5
  02a4b60  lis 4, 115
  02a4b64  addic 5, 3, 148
  02a4b68  addic 4, 4, 22752
  02a4b6c  ori 7, 5, 0
  02a4b70  lfs 3, 148(3)
  02a4b74  lfs 4, 0(4)
  02a4b78  fmuls 3, 3, 4
  02a4b7c  lfs 4, 4(4)
  02a4b80  addic 4, 4, 8
  02a4b84  stfs 3, 148(3)
  02a4b88  lfs 3, 4(5)
  02a4b8c  addic 3, 3, 8
  02a4b90  fmuls 3, 3, 4
  02a4b94  stfs 3, 4(5)
  02a4b98  addic 5, 5, 8
  02a4b9c  bdnz 0x2a4b70
  02a4ba0  ori 3, 1, 0
  02a4ba4  mtctr 6
  02a4ba8  lfs 3, 148(3)
  02a4bac  lfs 4, 4(7)
  02a4bb0  fadds 3, 30, 3
  02a4bb4  lfs 5, 8(7)
  02a4bb8  lfs 30, 12(7)
  02a4bbc  addic 3, 3, 16
  02a4bc0  addic 7, 7, 16
  02a4bc4  fadds 3, 3, 4
  02a4bc8  fadds 3, 3, 5
  02a4bcc  fadds 30, 3, 30
  02a4bd0  bdnz 0x2a4ba8
  02a4bd4  lis 3, 42
  02a4bd8  addi 3, 3, 17408
  02a4bdc  lfs 3, 4(3)
  02a4be0  fadds 30, 30, 3
  02a4be4  fmadds 30, 30, 1, 2
  02a4be8  lis 4, 42
  02a4bec  fmr 2, 31
  02a4bf0  addic 3, 1, 112
  02a4bf4  fneg 3, 30
  02a4bf8  addi 4, 4, 17408
  02a4bfc  lfs 1, 16(4)
  02a4c00  bl 0xfe610
  02a4c04  nop
  02a4c08  lfs 1, 112(1)
  02a4c0c  lfs 2, 16(31)
  02a4c10  lfs 3, 116(1)
  02a4c14  fadds 1, 1, 2
  02a4c18  lfs 2, 20(31)
  02a4c1c  lfs 4, 120(1)
  02a4c20  fadds 2, 3, 2
  02a4c24  lfs 3, 24(31)
  02a4c28  fadds 3, 4, 3
  02a4c2c  stfs 1, 112(1)
  02a4c30  stfs 2, 116(1)
  02a4c34  stfs 3, 120(1)
  02a4c38  b 0x2a4c8c
  02a4c3c  lis 4, 42
  02a4c40  addic 3, 1, 112
  02a4c44  fmr 2, 31
  02a4c48  addi 4, 4, 17408
  02a4c4c  lfs 1, 16(4)
  02a4c50  lfs 3, 20(4)
  02a4c54  bl 0xfe610
  02a4c58  nop
  02a4c5c  lfs 1, 112(1)
  02a4c60  lfs 2, 16(31)
  02a4c64  lfs 3, 116(1)
  02a4c68  fadds 1, 1, 2
  02a4c6c  lfs 2, 20(31)
  02a4c70  lfs 4, 120(1)
  02a4c74  fadds 2, 3, 2
  02a4c78  lfs 3, 24(31)
  02a4c7c  fadds 3, 4, 3
  02a4c80  stfs 1, 112(1)
  02a4c84  stfs 2, 116(1)
  02a4c88  stfs 3, 120(1)
  02a4c8c  lbz 3, 83(31)
  02a4c90  cmpwi 3, 3
  02a4c94  bt 2, 0x2a4cb0
  02a4c98  ori 3, 31, 0
  02a4c9c  li 4, 3
  02a4ca0  li 5, 0
  02a4ca4  li 6, 0
  02a4ca8  bl 0xfddc0
  02a4cac  nop
  02a4cb0  bl 0x7b7d8
  02a4cb4  nop
  02a4cb8  addic 4, 1, 112
  02a4cbc  fmr 1, 31
  02a4cc0  fmr 2, 30
  02a4cc4  ori 3, 31, 0
  02a4cc8  bl 0x2ae5d8
  02a4ccc  nop
  02a4cd0  lis 4, 161
  02a4cd4  stw 3, 4(30)
  02a4cd8  lis 5, 0
  02a4cdc  addic 4, 4, -732
  02a4ce0  ori 5, 5, 65535
  02a4ce4  lhz 6, 104(4)
  02a4ce8  lhz 3, 106(4)
  02a4cec  cmpw 6, 5
  02a4cf0  lwz 5, 108(4)
  02a4cf4  bf 0, 0x2a4d00
  02a4cf8  addic 6, 6, 1
  02a4cfc  sth 6, 104(4)
  02a4d00  lis 6, 161
  02a4d04  lis 7, 42
  02a4d08  lwz 6, -2344(6)
  02a4d0c  extsw 6, 6
  02a4d10  std 6, 248(1)
  02a4d14  addi 6, 7, 17408
  02a4d18  lis 7, 114
  02a4d1c  lfs 1, 24(6)
  02a4d20  lfs 2, -3056(7)
  02a4d24  lfd 3, 248(1)
  02a4d28  fcfid 3, 3
  02a4d2c  ori 6, 3, 0
  02a4d30  lis 3, 6990
  02a4d34  ori 8, 3, 33205
  02a4d38  li 3, -3056
  02a4d3c  frsp 3, 3
  02a4d40  lvlx 2, 3, 7
  02a4d44  fadds 1, 3, 1
  02a4d48  fmuls 1, 2, 1
  02a4d4c  fctiwz 1, 1
  02a4d50  stfd 1, 248(1)
  02a4d54  lwz 3, 252(1)
  02a4d58  mulhw 7, 8, 3
  02a4d5c  srawi 7, 7, 6
  02a4d60  srwi 8, 7, 31
  02a4d64  addc 7, 7, 8
  02a4d68  cmpw 7, 6
  02a4d6c  bf 1, 0x2a4d8c
  02a4d70  lis 6, 6990
  02a4d74  ori 6, 6, 33205
  02a4d78  mulhw 3, 6, 3
  02a4d7c  srawi 3, 3, 6
  02a4d80  srwi 6, 3, 31
  02a4d84  addc 3, 3, 6
  02a4d88  sth 3, 106(4)
  02a4d8c  lis 3, 151
  02a4d90  li 6, 1
  02a4d94  vspltisw 3, -1
  02a4d98  lis 8, -32768
  02a4d9c  lis 9, 42
  02a4da0  li 7, 28
  02a4da4  lwz 3, -25488(3)
  02a4da8  vslw 3, 3, 3
  02a4dac  slw 3, 6, 3
  02a4db0  addi 6, 9, 17408
  02a4db4  or 3, 5, 3
  02a4db8  or 3, 3, 8
  02a4dbc  stw 3, 108(4)
  02a4dc0  lvlx 4, 7, 6
  02a4dc4  vspltw 4, 4, 0
  02a4dc8  vmaddfp 2, 2, 4, 3
  02a4dcc  vctsxs 2, 2, 0
  02a4dd0  vspltw 2, 2, 0
  02a4dd4  stvewx 2, 0, 30
  02a4dd8  b 0x2a4e04
  02a4ddc  lwz 3, 164(29)
  02a4de0  lwz 4, 4256(28)
  02a4de4  and 3, 3, 4
  02a4de8  cmpwi 3, 0
  02a4dec  bt 2, 0x2a4e04
  02a4df0  li 3, 0
  02a4df4  li 4, 0
  02a4df8  ori 5, 31, 0
  02a4dfc  bl 0x15d12c
  02a4e00  nop
  02a4e04  lbz 3, 112(31)
  02a4e08  rlwinm 3, 3, 0, 30, 30
  02a4e0c  cmpwi 3, 0
  02a4e10  bt 2, 0x2a4e38
  02a4e14  lbz 3, 83(31)
  02a4e18  cmpwi 3, 1
  02a4e1c  bt 2, 0x2a4e38
  02a4e20  ori 3, 31, 0
  02a4e24  li 4, 1
  02a4e28  li 5, 0
  02a4e2c  li 6, 0
  02a4e30  bl 0xfddc0
  02a4e34  nop
  02a4e38  lhz 3, 52(31)
  02a4e3c  ori 3, 3, 4
  02a4e40  sth 3, 52(31)
  02a4e44  ld 0, 368(1)
  02a4e48  mtlr 0
  02a4e4c  lfd 27, 312(1)
  02a4e50  lfd 28, 320(1)
  02a4e54  lfd 29, 328(1)
  02a4e58  lfd 30, 336(1)
  02a4e5c  lfd 31, 344(1)
  02a4e60  ld 27, 272(1)
  02a4e64  ld 28, 280(1)
  02a4e68  ld 29, 288(1)
  02a4e6c  ld 30, 296(1)
  02a4e70  ld 31, 304(1)
  02a4e74  addi 1, 1, 352
  02a4e78  blr
