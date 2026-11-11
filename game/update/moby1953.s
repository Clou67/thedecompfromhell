# game/update/moby1953.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1953_002e44d0:   # 0x2e44d0, 0x21c bytes
  02e44d0  stdu 1, -64(1)
  02e44d4  stfd 31, 56(1)
  02e44d8  cmpwi 3, 0
  02e44dc  li 8, 0
  02e44e0  bf 1, 0x2e46e0
  02e44e4  lis 6, 46
  02e44e8  ori 9, 7, 0
  02e44ec  addi 10, 6, 17600
  02e44f0  lis 7, 149
  02e44f4  ori 6, 5, 0
  02e44f8  ori 5, 4, 0
  02e44fc  addic 7, 7, 5056
  02e4500  lfs 4, 0(10)
  02e4504  ori 4, 9, 0
  02e4508  lfs 3, 4(10)
  02e450c  lfs 2, 8(10)
  02e4510  lfs 1, 12(10)
  02e4514  lfs 9, 4(6)
  02e4518  lfs 5, 324(7)
  02e451c  lfs 10, 0(6)
  02e4520  fsubs 9, 9, 5
  02e4524  lfs 5, 320(7)
  02e4528  lfs 8, 8(6)
  02e452c  fsubs 10, 10, 5
  02e4530  lfs 5, 328(7)
  02e4534  fsubs 8, 8, 5
  02e4538  fmr 7, 4
  02e453c  fmuls 5, 9, 9
  02e4540  fmr 6, 7
  02e4544  fmadds 11, 10, 10, 5
  02e4548  fmr 5, 6
  02e454c  fmadds 11, 8, 8, 11
  02e4550  fsqrts 12, 11
  02e4554  fcmpu 0, 12, 5
  02e4558  bt 2, 0x2e459c
  02e455c  frsqrte 5, 11
  02e4560  fmuls 6, 11, 5
  02e4564  fmuls 7, 5, 3
  02e4568  fnmsubs 6, 6, 5, 2
  02e456c  fmadds 5, 6, 7, 5
  02e4570  fmuls 6, 11, 5
  02e4574  fmuls 7, 5, 3
  02e4578  fnmsubs 6, 6, 5, 2
  02e457c  fmadds 5, 6, 7, 5
  02e4580  fmuls 6, 11, 5
  02e4584  fmuls 7, 5, 3
  02e4588  fnmsubs 6, 6, 5, 2
  02e458c  fmadds 5, 6, 7, 5
  02e4590  fmuls 7, 10, 5
  02e4594  fmuls 6, 9, 5
  02e4598  fmuls 5, 8, 5
  02e459c  lfs 13, 4(5)
  02e45a0  lfs 0, 0(5)
  02e45a4  fmuls 8, 13, 13
  02e45a8  lfs 12, 8(5)
  02e45ac  fmr 10, 4
  02e45b0  fmadds 11, 0, 0, 8
  02e45b4  fmr 9, 10
  02e45b8  fmadds 11, 12, 12, 11
  02e45bc  fmr 8, 9
  02e45c0  fsqrts 31, 11
  02e45c4  fcmpu 0, 31, 8
  02e45c8  bt 2, 0x2e460c
  02e45cc  frsqrte 8, 11
  02e45d0  fmuls 9, 11, 8
  02e45d4  fmuls 10, 8, 3
  02e45d8  fnmsubs 9, 9, 8, 2
  02e45dc  fmadds 8, 9, 10, 8
  02e45e0  fmuls 9, 11, 8
  02e45e4  fmuls 10, 8, 3
  02e45e8  fnmsubs 9, 9, 8, 2
  02e45ec  fmadds 8, 9, 10, 8
  02e45f0  fmuls 9, 11, 8
  02e45f4  fmuls 10, 8, 3
  02e45f8  fnmsubs 9, 9, 8, 2
  02e45fc  fmadds 8, 9, 10, 8
  02e4600  fmuls 10, 8, 0
  02e4604  fmuls 9, 8, 13
  02e4608  fmuls 8, 8, 12
  02e460c  fmr 11, 5
  02e4610  fmuls 5, 6, 9
  02e4614  fmadds 5, 7, 10, 5
  02e4618  fmadds 5, 11, 8, 5
  02e461c  fmuls 12, 5, 1
  02e4620  fnmsubs 5, 12, 9, 6
  02e4624  fnmsubs 6, 12, 10, 7
  02e4628  fnmsubs 7, 12, 8, 11
  02e462c  fmr 11, 4
  02e4630  fmuls 8, 5, 5
  02e4634  fmr 10, 11
  02e4638  fmadds 8, 6, 6, 8
  02e463c  fmr 9, 10
  02e4640  fmadds 8, 7, 7, 8
  02e4644  fsqrts 12, 8
  02e4648  fcmpu 0, 12, 9
  02e464c  bt 2, 0x2e4690
  02e4650  frsqrte 9, 8
  02e4654  fmuls 10, 8, 9
  02e4658  fmuls 11, 9, 3
  02e465c  fnmsubs 10, 10, 9, 2
  02e4660  fmadds 9, 10, 11, 9
  02e4664  fmuls 10, 8, 9
  02e4668  fmuls 11, 9, 3
  02e466c  fnmsubs 10, 10, 9, 2
  02e4670  fmadds 9, 10, 11, 9
  02e4674  fmuls 8, 8, 9
  02e4678  fmuls 10, 9, 3
  02e467c  fnmsubs 8, 8, 9, 2
  02e4680  fmadds 9, 8, 10, 9
  02e4684  fmuls 11, 9, 6
  02e4688  fmuls 10, 9, 5
  02e468c  fmuls 9, 9, 7
  02e4690  fmuls 5, 10, 10
  02e4694  fadds 6, 9, 2
  02e4698  addic 8, 8, 1
  02e469c  addic 6, 6, 12
  02e46a0  fmadds 5, 11, 11, 5
  02e46a4  cmpw 8, 3
  02e46a8  addic 5, 5, 12
  02e46ac  fmadds 5, 6, 6, 5
  02e46b0  fsqrts 5, 5
  02e46b4  fmuls 5, 5, 1
  02e46b8  fdivs 6, 11, 5
  02e46bc  fdivs 5, 10, 5
  02e46c0  fadds 6, 6, 3
  02e46c4  fmuls 6, 6, 1
  02e46c8  fadds 5, 5, 3
  02e46cc  stfs 6, 0(4)
  02e46d0  fmuls 5, 5, 1
  02e46d4  stfs 5, 4(4)
  02e46d8  addic 4, 4, 8
  02e46dc  bt 0, 0x2e4514
  02e46e0  lfd 31, 56(1)
  02e46e4  addi 1, 1, 64
  02e46e8  blr

M1953_002e46f0:   # 0x2e46f0, 0x1dc bytes
  02e46f0  stdu 1, -192(1)
  02e46f4  mflr 0
  02e46f8  std 0, 208(1)
  02e46fc  stfd 31, 184(1)
  02e4700  lis 4, 46
  02e4704  std 31, 176(1)
  02e4708  li 3, 41
  02e470c  std 30, 168(1)
  02e4710  std 29, 160(1)
  02e4714  std 28, 152(1)
  02e4718  std 27, 144(1)
  02e471c  std 26, 136(1)
  02e4720  std 25, 128(1)
  02e4724  std 24, 120(1)
  02e4728  addi 31, 4, 18156
  02e472c  bl 0x685c4
  02e4730  nop
  02e4734  ori 4, 3, 0
  02e4738  li 3, 24
  02e473c  bl 0x174f80
  02e4740  nop
  02e4744  li 3, 0
  02e4748  li 4, 1
  02e474c  li 5, 2
  02e4750  li 6, 1
  02e4754  li 7, 64
  02e4758  bl 0x502ea8
  02e475c  nop
  02e4760  ori 4, 3, 0
  02e4764  li 3, 3
  02e4768  bl 0x174f80
  02e476c  nop
  02e4770  li 3, 0
  02e4774  li 4, 0
  02e4778  li 5, 0
  02e477c  li 6, 0
  02e4780  li 7, 0
  02e4784  li 8, 0
  02e4788  bl 0x502f08
  02e478c  nop
  02e4790  ori 4, 3, 0
  02e4794  li 3, 6
  02e4798  bl 0x174f80
  02e479c  nop
  02e47a0  li 3, 0
  02e47a4  lis 9, 0
  02e47a8  li 4, 0
  02e47ac  li 5, 1
  02e47b0  li 6, 1
  02e47b4  li 7, 1
  02e47b8  li 8, 0
  02e47bc  ori 9, 9, 65424
  02e47c0  bl 0x502fd4
  02e47c4  nop
  02e47c8  ori 4, 3, 0
  02e47cc  li 3, 26
  02e47d0  bl 0x174f80
  02e47d4  nop
  02e47d8  bl 0x71170
  02e47dc  nop
  02e47e0  lis 3, 268
  02e47e4  lis 28, 128
  02e47e8  lfs 31, 0(31)
  02e47ec  lis 30, 128
  02e47f0  lis 26, 128
  02e47f4  lis 29, 128
  02e47f8  lis 27, 128
  02e47fc  lis 25, 268
  02e4800  li 24, 0
  02e4804  addic 26, 26, -6048
  02e4808  addic 28, 28, -15792
  02e480c  addic 30, 30, -6036
  02e4810  addic 27, 27, -6060
  02e4814  addic 31, 3, -20688
  02e4818  addic 29, 29, -6072
  02e481c  addic 25, 25, -20640
  02e4820  ori 3, 31, 0
  02e4824  fmr 1, 31
  02e4828  bl 0x502910
  02e482c  nop
  02e4830  cmpwi 3, -1
  02e4834  bt 2, 0x2e4874
  02e4838  lwz 3, 0(28)
  02e483c  lwz 4, 0(26)
  02e4840  ori 7, 25, 0
  02e4844  lwz 5, 0(29)
  02e4848  extsw 3, 3
  02e484c  lwz 6, 0(27)
  02e4850  bl 0x2e44d0
  02e4854  lwz 3, 0(28)
  02e4858  lwz 4, 0(29)
  02e485c  ori 6, 25, 0
  02e4860  li 7, 9
  02e4864  lwz 5, 0(30)
  02e4868  extsw 3, 3
  02e486c  bl 0x74604
  02e4870  nop
  02e4874  addic 24, 24, 1
  02e4878  addic 31, 31, 16
  02e487c  cmpwi 24, 3
  02e4880  addic 26, 26, 4
  02e4884  addic 27, 27, 4
  02e4888  addic 28, 28, 4
  02e488c  addic 29, 29, 4
  02e4890  addic 30, 30, 4
  02e4894  bt 0, 0x2e4820
  02e4898  ld 0, 208(1)
  02e489c  mtlr 0
  02e48a0  lfd 31, 184(1)
  02e48a4  ld 24, 120(1)
  02e48a8  ld 25, 128(1)
  02e48ac  ld 26, 136(1)
  02e48b0  ld 27, 144(1)
  02e48b4  ld 28, 152(1)
  02e48b8  ld 29, 160(1)
  02e48bc  ld 30, 168(1)
  02e48c0  ld 31, 176(1)
  02e48c4  addi 1, 1, 192
  02e48c8  blr

UpdateMoby_1953:   # 0x2e48d8, 0x1f0 bytes
  02e48d8  stdu 1, -160(1)
  02e48dc  mflr 0
  02e48e0  std 0, 176(1)
  02e48e4  stfd 30, 144(1)
  02e48e8  stfd 31, 152(1)
  02e48ec  lbz 5, 32(3)
  02e48f0  lis 4, 46
  02e48f4  cmpwi 5, 0
  02e48f8  addi 4, 4, 18636
  02e48fc  cmpwi 1, 5, 1
  02e4900  std 31, 136(1)
  02e4904  std 30, 128(1)
  02e4908  std 29, 120(1)
  02e490c  cmpwi 6, 5, -1
  02e4910  bt 1, 0x2e491c
  02e4914  bf 25, 0x2e4aa4
  02e4918  b 0x2e4924
  02e491c  bf 5, 0x2e4a90
  02e4920  b 0x2e4aa4
  02e4924  li 11, 0
  02e4928  lfs 4, 0(4)
  02e492c  lis 5, 268
  02e4930  ori 9, 11, 0
  02e4934  lis 6, 128
  02e4938  lis 7, 128
  02e493c  addic 6, 6, -15792
  02e4940  ori 8, 9, 0
  02e4944  addic 7, 7, -6072
  02e4948  addic 5, 5, -20688
  02e494c  lfs 6, 4(4)
  02e4950  lfs 1, 8(4)
  02e4954  fmr 5, 6
  02e4958  fmr 2, 1
  02e495c  lwz 10, 0(6)
  02e4960  cmpwi 1, 10, 0
  02e4964  fmr 7, 5
  02e4968  fmr 3, 2
  02e496c  bf 5, 0x2e49d0
  02e4970  ori 31, 9, 0
  02e4974  ori 12, 10, 0
  02e4978  lwzx 30, 7, 8
  02e497c  addic 12, 12, -1
  02e4980  addc 29, 30, 31
  02e4984  cmpwi 12, 0
  02e4988  clrldi 29, 29, 32
  02e498c  lfsx 8, 30, 31
  02e4990  addic 31, 31, 12
  02e4994  fsub 9, 5, 8
  02e4998  fsub 10, 8, 3
  02e499c  lfs 11, 4(29)
  02e49a0  lfs 12, 8(29)
  02e49a4  fsub 13, 6, 11
  02e49a8  fsub 0, 7, 12
  02e49ac  fsub 31, 11, 2
  02e49b0  fsub 30, 12, 1
  02e49b4  fsel 5, 9, 5, 8
  02e49b8  fsel 3, 10, 3, 8
  02e49bc  fsel 6, 13, 6, 11
  02e49c0  fsel 7, 0, 7, 12
  02e49c4  fsel 2, 31, 2, 11
  02e49c8  fsel 1, 30, 1, 12
  02e49cc  bt 1, 0x2e4978
  02e49d0  fadds 3, 5, 3
  02e49d4  fadds 2, 6, 2
  02e49d8  stw 9, 12(5)
  02e49dc  fadds 1, 7, 1
  02e49e0  ori 31, 9, 0
  02e49e4  fmuls 3, 3, 4
  02e49e8  fmuls 2, 2, 4
  02e49ec  fmuls 1, 1, 4
  02e49f0  stfs 3, 0(5)
  02e49f4  stfs 2, 4(5)
  02e49f8  stfs 1, 8(5)
  02e49fc  bf 5, 0x2e4a60
  02e4a00  ori 12, 9, 0
  02e4a04  lfs 5, 12(5)
  02e4a08  lwzx 30, 7, 8
  02e4a0c  addc 29, 30, 12
  02e4a10  clrldi 29, 29, 32
  02e4a14  lfsx 6, 30, 12
  02e4a18  fsubs 6, 6, 3
  02e4a1c  lfs 7, 4(29)
  02e4a20  lfs 8, 8(29)
  02e4a24  fsubs 7, 7, 2
  02e4a28  fsubs 8, 8, 1
  02e4a2c  fmuls 7, 7, 7
  02e4a30  fmadds 6, 6, 6, 7
  02e4a34  fmadds 6, 8, 8, 6
  02e4a38  fsqrts 6, 6
  02e4a3c  fcmpu 0, 6, 5
  02e4a40  cror 6, 0, 2
  02e4a44  bt 6, 0x2e4a50
  02e4a48  fmr 5, 6
  02e4a4c  stfs 6, 12(5)
  02e4a50  addic 31, 31, 1
  02e4a54  addic 12, 12, 12
  02e4a58  cmpw 31, 10
  02e4a5c  bt 0, 0x2e4a08
  02e4a60  addic 11, 11, 1
  02e4a64  addic 6, 6, 4
  02e4a68  cmpwi 11, 3
  02e4a6c  addic 8, 8, 4
  02e4a70  addic 5, 5, 16
  02e4a74  bt 0, 0x2e494c
  02e4a78  li 4, 1
  02e4a7c  li 5, 255
  02e4a80  stb 4, 32(3)
  02e4a84  sth 5, 50(3)
  02e4a88  stb 5, 48(3)
  02e4a8c  b 0x2e4aa4
  02e4a90  lis 5, 113
  02e4a94  ori 4, 3, 0
  02e4a98  addic 3, 5, -18848
  02e4a9c  bl 0x6d720
  02e4aa0  nop
  02e4aa4  ld 0, 176(1)
  02e4aa8  mtlr 0
  02e4aac  lfd 30, 144(1)
  02e4ab0  lfd 31, 152(1)
  02e4ab4  ld 29, 120(1)
  02e4ab8  ld 30, 128(1)
  02e4abc  ld 31, 136(1)
  02e4ac0  addi 1, 1, 160
  02e4ac4  blr
