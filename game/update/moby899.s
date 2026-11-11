# game/update/moby899.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M899_004a4540:   # 0x4a4540, 0x2cc bytes
  04a4540  stdu 1, -208(1)
  04a4544  mflr 0
  04a4548  std 0, 224(1)
  04a454c  stfd 31, 200(1)
  04a4550  std 31, 192(1)
  04a4554  ori 31, 3, 0
  04a4558  li 3, 898
  04a455c  std 30, 184(1)
  04a4560  std 29, 176(1)
  04a4564  std 28, 168(1)
  04a4568  fmr 31, 1
  04a456c  bl 0xefa28
  04a4570  nop
  04a4574  ori 29, 3, 0
  04a4578  cmpwi 29, 0
  04a457c  bt 2, 0x4a47e4
  04a4580  li 4, 128
  04a4584  li 5, 64
  04a4588  lwz 30, 120(29)
  04a458c  li 6, 1
  04a4590  lhz 7, 52(29)
  04a4594  li 28, 0
  04a4598  stb 4, 48(29)
  04a459c  ori 4, 7, 32
  04a45a0  sth 5, 50(29)
  04a45a4  stb 6, 49(29)
  04a45a8  ori 3, 29, 0
  04a45ac  stb 28, 32(29)
  04a45b0  sth 4, 52(29)
  04a45b4  bl 0x10c000
  04a45b8  nop
  04a45bc  lfs 1, 16(31)
  04a45c0  lis 3, 74
  04a45c4  stfs 1, 16(29)
  04a45c8  addi 3, 3, 17720
  04a45cc  lfs 2, 20(31)
  04a45d0  stfs 2, 20(29)
  04a45d4  lfs 3, 24(31)
  04a45d8  lwz 4, 0(31)
  04a45dc  stfs 3, 24(29)
  04a45e0  lfs 3, 28(31)
  04a45e4  slwi 4, 4, 4
  04a45e8  stfs 3, 28(29)
  04a45ec  lfs 3, 0(3)
  04a45f0  extsw 3, 4
  04a45f4  stw 28, 76(29)
  04a45f8  addc 4, 31, 4
  04a45fc  stw 28, 72(29)
  04a4600  clrldi 4, 4, 32
  04a4604  stw 28, 68(29)
  04a4608  stw 28, 64(29)
  04a460c  lfsx 4, 31, 3
  04a4610  fsubs 4, 4, 1
  04a4614  lfs 1, 4(4)
  04a4618  fsubs 2, 1, 2
  04a461c  fmr 1, 3
  04a4620  lis 3, 115
  04a4624  addic 3, 3, 22784
  04a4628  fabs 5, 4
  04a462c  stfs 4, 112(1)
  04a4630  fabs 3, 2
  04a4634  stfs 2, 116(1)
  04a4638  fsubs 2, 5, 3
  04a463c  stfs 2, 120(1)
  04a4640  lwz 4, 112(1)
  04a4644  lfs 2, 112(1)
  04a4648  lwz 5, 116(1)
  04a464c  fabs 4, 2
  04a4650  lfs 2, 116(1)
  04a4654  lwz 6, 120(1)
  04a4658  rlwinm 5, 5, 3, 29, 29
  04a465c  lfs 6, 120(1)
  04a4660  fabs 2, 2
  04a4664  rlwimi 5, 6, 2, 30, 30
  04a4668  fsub 7, 6, 1
  04a466c  fsub 6, 6, 1
  04a4670  rlwimi 5, 4, 4, 28, 28
  04a4674  ori 4, 3, 0
  04a4678  rlwimi 4, 5, 2, 26, 28
  04a467c  slwi 5, 5, 2
  04a4680  clrldi 4, 4, 32
  04a4684  fsel 4, 7, 4, 3
  04a4688  lfsx 3, 3, 5
  04a468c  fsel 5, 6, 2, 5
  04a4690  lfs 2, 4(4)
  04a4694  fcmpu 0, 4, 1
  04a4698  bt 1, 0x4a46a0
  04a469c  b 0x4a47c4
  04a46a0  fsubs 6, 5, 4
  04a46a4  fadds 4, 5, 4
  04a46a8  addic 6, 1, 16
  04a46ac  li 3, 2
  04a46b0  addic 4, 6, 124
  04a46b4  addic 5, 6, 108
  04a46b8  mtctr 3
  04a46bc  fdivs 4, 6, 4
  04a46c0  fmuls 6, 4, 4
  04a46c4  stfs 4, 136(1)
  04a46c8  stfs 4, 128(1)
  04a46cc  stfs 4, 132(1)
  04a46d0  stfs 4, 124(1)
  04a46d4  lfs 7, 136(1)
  04a46d8  lfs 8, 128(1)
  04a46dc  lfs 9, 132(1)
  04a46e0  fmuls 4, 6, 6
  04a46e4  fmuls 8, 8, 6
  04a46e8  fmuls 7, 7, 4
  04a46ec  fmuls 5, 4, 4
  04a46f0  fmuls 4, 9, 4
  04a46f4  stfs 8, 128(1)
  04a46f8  fmuls 6, 7, 6
  04a46fc  stfs 4, 132(1)
  04a4700  stfs 6, 136(1)
  04a4704  lfs 4, 108(6)
  04a4708  fmuls 4, 4, 5
  04a470c  stfs 4, 124(6)
  04a4710  lfs 4, 4(5)
  04a4714  addic 5, 5, 8
  04a4718  fmuls 4, 4, 5
  04a471c  addic 6, 6, 8
  04a4720  stfs 4, 4(4)
  04a4724  addic 4, 4, 8
  04a4728  bdnz 0x4a4704
  04a472c  ori 7, 1, 0
  04a4730  li 4, 4
  04a4734  lis 6, 115
  04a4738  addic 5, 7, 124
  04a473c  mtctr 4
  04a4740  addic 6, 6, 22752
  04a4744  ori 4, 5, 0
  04a4748  lfs 4, 124(7)
  04a474c  lfs 5, 0(6)
  04a4750  fmuls 4, 4, 5
  04a4754  lfs 5, 4(6)
  04a4758  addic 6, 6, 8
  04a475c  stfs 4, 124(7)
  04a4760  lfs 4, 4(5)
  04a4764  addic 7, 7, 8
  04a4768  fmuls 4, 4, 5
  04a476c  stfs 4, 4(5)
  04a4770  addic 5, 5, 8
  04a4774  bdnz 0x4a4748
  04a4778  ori 5, 3, 0
  04a477c  ori 3, 1, 0
  04a4780  mtctr 5
  04a4784  lfs 4, 124(3)
  04a4788  fadds 1, 1, 4
  04a478c  lfs 4, 4(4)
  04a4790  addic 3, 3, 16
  04a4794  lfs 5, 8(4)
  04a4798  lfs 6, 12(4)
  04a479c  addic 4, 4, 16
  04a47a0  fadds 1, 1, 4
  04a47a4  fadds 1, 1, 5
  04a47a8  fadds 1, 1, 6
  04a47ac  bdnz 0x4a4784
  04a47b0  lis 3, 74
  04a47b4  addi 3, 3, 17720
  04a47b8  lfs 4, 4(3)
  04a47bc  fadds 1, 1, 4
  04a47c0  fmadds 1, 1, 3, 2
  04a47c4  addic 4, 30, 32
  04a47c8  stfs 1, 72(29)
  04a47cc  ori 3, 29, 0
  04a47d0  stw 4, 8(30)
  04a47d4  stw 31, 96(30)
  04a47d8  stfs 31, 100(30)
  04a47dc  bl 0xf31a8
  04a47e0  nop
  04a47e4  ori 3, 29, 0
  04a47e8  ld 0, 224(1)
  04a47ec  mtlr 0
  04a47f0  lfd 31, 200(1)
  04a47f4  ld 28, 168(1)
  04a47f8  ld 29, 176(1)
  04a47fc  ld 30, 184(1)
  04a4800  ld 31, 192(1)
  04a4804  addi 1, 1, 208
  04a4808  blr

UpdateMoby_899:   # 0x4a4820, 0x25c bytes
  04a4820  stdu 1, -176(1)
  04a4824  mflr 0
  04a4828  std 0, 192(1)
  04a482c  stfd 30, 160(1)
  04a4830  stfd 31, 168(1)
  04a4834  std 31, 152(1)
  04a4838  lbz 4, 32(3)
  04a483c  std 29, 136(1)
  04a4840  ori 31, 3, 0
  04a4844  lwz 29, 120(3)
  04a4848  std 30, 144(1)
  04a484c  cmpwi 4, 0
  04a4850  bf 2, 0x4a49c4
  04a4854  lwz 4, 0(29)
  04a4858  cmpwi 4, -1
  04a485c  bf 2, 0x4a4888
  04a4860  lis 3, 102
  04a4864  lwz 4, 168(31)
  04a4868  addic 3, 3, -30528
  04a486c  clrlwi 4, 4, 16
  04a4870  bl 0x5cd098
  04a4874  nop
  04a4878  ori 3, 31, 0
  04a487c  bl 0xefb38
  04a4880  nop
  04a4884  b 0x4a4a58
  04a4888  lis 3, 74
  04a488c  lis 5, 114
  04a4890  addi 3, 3, 18448
  04a4894  lis 6, 165
  04a4898  addic 30, 6, 7136
  04a489c  lfs 1, 0(3)
  04a48a0  lfs 2, -3052(5)
  04a48a4  slwi 3, 4, 2
  04a48a8  lis 5, 270
  04a48ac  fmuls 1, 2, 1
  04a48b0  extsw 3, 3
  04a48b4  li 4, 0
  04a48b8  lwzx 30, 30, 3
  04a48bc  ori 3, 4, 0
  04a48c0  stfs 1, 17664(5)
  04a48c4  lwz 5, 0(30)
  04a48c8  addic 5, 5, -2
  04a48cc  cmpwi 5, 0
  04a48d0  bf 1, 0x4a4928
  04a48d4  ori 5, 30, 0
  04a48d8  lfs 1, 20(5)
  04a48dc  lfs 2, 36(5)
  04a48e0  lfs 3, 16(5)
  04a48e4  fsubs 1, 1, 2
  04a48e8  lfs 2, 32(5)
  04a48ec  fsubs 2, 3, 2
  04a48f0  lfs 3, 24(5)
  04a48f4  lfs 4, 40(5)
  04a48f8  fsubs 3, 3, 4
  04a48fc  fmuls 1, 1, 1
  04a4900  addic 4, 4, 1
  04a4904  fmadds 1, 2, 2, 1
  04a4908  fmadds 1, 3, 3, 1
  04a490c  fsqrts 1, 1
  04a4910  stfs 1, 28(5)
  04a4914  lwz 6, 0(30)
  04a4918  addic 5, 5, 16
  04a491c  addic 6, 6, -2
  04a4920  cmpw 4, 6
  04a4924  bt 0, 0x4a48d8
  04a4928  li 4, 1
  04a492c  stw 3, 4(29)
  04a4930  li 5, -1
  04a4934  vspltisw 2, -1
  04a4938  li 6, 28
  04a493c  lis 3, 74
  04a4940  stb 4, 32(31)
  04a4944  stw 5, 8(29)
  04a4948  <unknown>
  04a494c  addi 3, 3, 18448
  04a4950  vslw 2, 2, 2
  04a4954  li 4, 4
  04a4958  vcfsx 3, 3, 0
  04a495c  <unknown>
  04a4960  lfs 30, 4(3)
  04a4964  <unknown>
  04a4968  fmr 31, 30
  04a496c  vmaddfp 2, 3, 4, 2
  04a4970  vspltw 3, 5, 0
  04a4974  vspltw 2, 2, 0
  04a4978  vcmpgefp. 2, 3, 2
  04a497c  bf 26, 0x4a49bc
  04a4980  ori 3, 30, 0
  04a4984  fmr 1, 30
  04a4988  bl 0x4a4540
  04a498c  nop
  04a4990  lwz 3, 0(30)
  04a4994  fadds 30, 30, 31
  04a4998  extsw 3, 3
  04a499c  std 3, 112(1)
  04a49a0  lfs 1, 28(30)
  04a49a4  lfd 2, 112(1)
  04a49a8  fcfid 2, 2
  04a49ac  frsp 2, 2
  04a49b0  fmuls 1, 2, 1
  04a49b4  fcmpu 0, 30, 1
  04a49b8  bt 0, 0x4a4980
  04a49bc  li 3, 96
  04a49c0  stb 3, 48(31)
  04a49c4  addic 3, 29, 4
  04a49c8  bl 0x4fff60
  04a49cc  nop
  04a49d0  cmpwi 3, 0
  04a49d4  bt 2, 0x4a4a20
  04a49d8  lis 3, 74
  04a49dc  lis 4, 270
  04a49e0  addi 30, 3, 18448
  04a49e4  lfs 1, 4(30)
  04a49e8  lfs 2, 17664(4)
  04a49ec  fdivs 1, 1, 2
  04a49f0  bl 0x502758
  04a49f4  nop
  04a49f8  lwz 5, 0(29)
  04a49fc  lis 4, 165
  04a4a00  stw 3, 4(29)
  04a4a04  slwi 3, 5, 2
  04a4a08  addic 4, 4, 7136
  04a4a0c  lfs 1, 8(30)
  04a4a10  extsw 3, 3
  04a4a14  lwzx 3, 4, 3
  04a4a18  bl 0x4a4540
  04a4a1c  nop
  04a4a20  ori 3, 31, 0
  04a4a24  lwz 4, 8(29)
  04a4a28  extsw 4, 4
  04a4a2c  bl 0x15cc7c
  04a4a30  nop
  04a4a34  cmpwi 3, 0
  04a4a38  bf 2, 0x4a4a58
  04a4a3c  li 3, 0
  04a4a40  li 4, 4
  04a4a44  ori 5, 31, 0
  04a4a48  li 6, 898
  04a4a4c  bl 0x15d204
  04a4a50  nop
  04a4a54  stw 3, 8(29)
  04a4a58  ld 0, 192(1)
  04a4a5c  mtlr 0
  04a4a60  lfd 30, 160(1)
  04a4a64  lfd 31, 168(1)
  04a4a68  ld 29, 136(1)
  04a4a6c  ld 30, 144(1)
  04a4a70  ld 31, 152(1)
  04a4a74  addi 1, 1, 176
  04a4a78  blr

M899_004a4a80:   # 0x4a4a80, 0xf8 bytes
  04a4a80  stdu 1, -160(1)
  04a4a84  mflr 0
  04a4a88  std 0, 176(1)
  04a4a8c  std 31, 152(1)
  04a4a90  lis 4, 161
  04a4a94  ori 31, 3, 0
  04a4a98  lwz 3, 1800(4)
  04a4a9c  std 30, 144(1)
  04a4aa0  std 29, 136(1)
  04a4aa4  std 28, 128(1)
  04a4aa8  std 27, 120(1)
  04a4aac  cmpwi 3, 2
  04a4ab0  bf 2, 0x4a4b54
  04a4ab4  lis 3, 151
  04a4ab8  lbz 3, -16268(3)
  04a4abc  cmpwi 3, 0
  04a4ac0  bt 2, 0x4a4b54
  04a4ac4  lis 28, 150
  04a4ac8  li 27, 0
  04a4acc  addic 28, 28, -12976
  04a4ad0  lhz 3, 68(28)
  04a4ad4  extsh 4, 3
  04a4ad8  cmpwi 4, 0
  04a4adc  bf 1, 0x4a4b54
  04a4ae0  lis 29, 162
  04a4ae4  ori 30, 28, 0
  04a4ae8  addic 29, 29, -16512
  04a4aec  lwz 4, 376(30)
  04a4af0  lhz 5, 166(31)
  04a4af4  extsh 5, 5
  04a4af8  lhz 6, 166(4)
  04a4afc  extsh 6, 6
  04a4b00  cmpw 6, 5
  04a4b04  bf 2, 0x4a4b40
  04a4b08  lbz 5, 1(29)
  04a4b0c  cmpwi 5, 0
  04a4b10  bf 2, 0x4a4b40
  04a4b14  ori 3, 4, 0
  04a4b18  li 4, 0
  04a4b1c  ori 5, 29, 0
  04a4b20  bl 0xf0ea8
  04a4b24  nop
  04a4b28  lis 4, 141
  04a4b2c  lhz 3, 68(28)
  04a4b30  lfs 1, -15940(4)
  04a4b34  stfs 1, 32(29)
  04a4b38  stfs 1, 36(29)
  04a4b3c  stfs 1, 40(29)
  04a4b40  extsh 4, 3
  04a4b44  addic 27, 27, 1
  04a4b48  addic 30, 30, 4
  04a4b4c  cmpw 27, 4
  04a4b50  bt 0, 0x4a4aec
  04a4b54  ld 0, 176(1)
  04a4b58  mtlr 0
  04a4b5c  ld 27, 120(1)
  04a4b60  ld 28, 128(1)
  04a4b64  ld 29, 136(1)
  04a4b68  ld 30, 144(1)
  04a4b6c  ld 31, 152(1)
  04a4b70  addi 1, 1, 160
  04a4b74  blr
