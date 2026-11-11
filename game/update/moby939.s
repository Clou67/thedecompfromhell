# game/update/moby939.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M939_004c467c:   # 0x4c467c, 0x14 bytes
  04c467c  lis 3, 143
  04c4680  lis 4, 1
  04c4684  addic 3, 3, 19560
  04c4688  stw 4, 72(3)
  04c468c  blr

UpdateMoby_939:   # 0x4c4698, 0x214 bytes
  04c4698  stdu 1, -208(1)
  04c469c  mflr 0
  04c46a0  std 0, 224(1)
  04c46a4  stfd 30, 192(1)
  04c46a8  stfd 31, 200(1)
  04c46ac  std 31, 184(1)
  04c46b0  lbz 4, 32(3)
  04c46b4  std 30, 176(1)
  04c46b8  ori 31, 3, 0
  04c46bc  lwz 30, 120(3)
  04c46c0  std 29, 168(1)
  04c46c4  std 28, 160(1)
  04c46c8  cmpwi 4, 0
  04c46cc  bf 2, 0x4c4730
  04c46d0  lis 3, 143
  04c46d4  lis 4, 143
  04c46d8  lwz 3, 19668(3)
  04c46dc  lwz 4, 19672(4)
  04c46e0  extsw 3, 3
  04c46e4  extsw 4, 4
  04c46e8  bl 0xfe484
  04c46ec  nop
  04c46f0  extsw 3, 3
  04c46f4  lis 4, 76
  04c46f8  std 3, 144(1)
  04c46fc  addi 3, 4, 18064
  04c4700  lis 4, 114
  04c4704  lfs 1, 0(3)
  04c4708  lfs 2, -3056(4)
  04c470c  lfd 3, 144(1)
  04c4710  fcfid 3, 3
  04c4714  li 3, 1
  04c4718  frsp 3, 3
  04c471c  fadds 1, 3, 1
  04c4720  fmuls 1, 2, 1
  04c4724  fctiwz 1, 1
  04c4728  stfiwx 1, 0, 30
  04c472c  stb 3, 32(31)
  04c4730  ori 3, 30, 0
  04c4734  bl 0x4fff60
  04c4738  nop
  04c473c  cmpwi 3, 0
  04c4740  bt 2, 0x4c4884
  04c4744  lis 3, 143
  04c4748  lfs 2, 19676(3)
  04c474c  lfs 31, 72(31)
  04c4750  fneg 1, 2
  04c4754  bl 0xfcbe8
  04c4758  nop
  04c475c  lis 3, 76
  04c4760  addi 29, 3, 18064
  04c4764  lfs 30, 4(29)
  04c4768  fmuls 2, 1, 30
  04c476c  fmr 1, 31
  04c4770  bl 0x502578
  04c4774  nop
  04c4778  lis 3, 143
  04c477c  fmr 31, 1
  04c4780  lis 4, 143
  04c4784  lfs 1, 19680(3)
  04c4788  lfs 2, 19684(4)
  04c478c  bl 0xfcbe8
  04c4790  nop
  04c4794  lis 3, 143
  04c4798  lis 4, 143
  04c479c  fmuls 30, 1, 30
  04c47a0  lfs 1, 19688(3)
  04c47a4  lfs 2, 19692(4)
  04c47a8  bl 0xfcbe8
  04c47ac  nop
  04c47b0  lis 4, 114
  04c47b4  fmr 2, 31
  04c47b8  addic 28, 1, 112
  04c47bc  fmr 3, 30
  04c47c0  ori 3, 28, 0
  04c47c4  lfs 4, -3052(4)
  04c47c8  fmuls 1, 1, 4
  04c47cc  bl 0xfe610
  04c47d0  nop
  04c47d4  lfs 1, 16(31)
  04c47d8  lfs 2, 112(1)
  04c47dc  ori 3, 31, 0
  04c47e0  lfs 3, 20(31)
  04c47e4  addic 4, 1, 128
  04c47e8  fadds 1, 1, 2
  04c47ec  ori 5, 28, 0
  04c47f0  lfs 2, 116(1)
  04c47f4  lfs 4, 24(31)
  04c47f8  fadds 2, 3, 2
  04c47fc  lfs 3, 120(1)
  04c4800  fadds 3, 4, 3
  04c4804  lfs 4, 28(31)
  04c4808  stfs 4, 140(1)
  04c480c  stfs 1, 128(1)
  04c4810  stfs 2, 132(1)
  04c4814  stfs 3, 136(1)
  04c4818  bl 0x4c2b28
  04c481c  nop
  04c4820  li 3, 0
  04c4824  li 4, 0
  04c4828  ori 5, 31, 0
  04c482c  bl 0x15d12c
  04c4830  nop
  04c4834  lis 3, 143
  04c4838  lis 4, 143
  04c483c  lwz 3, 19668(3)
  04c4840  lwz 4, 19672(4)
  04c4844  extsw 3, 3
  04c4848  extsw 4, 4
  04c484c  bl 0xfe484
  04c4850  nop
  04c4854  extsw 3, 3
  04c4858  std 3, 144(1)
  04c485c  lis 3, 114
  04c4860  lfs 1, 0(29)
  04c4864  lfs 2, -3056(3)
  04c4868  lfd 3, 144(1)
  04c486c  fcfid 3, 3
  04c4870  frsp 3, 3
  04c4874  fadds 1, 3, 1
  04c4878  fmuls 1, 2, 1
  04c487c  fctiwz 1, 1
  04c4880  stfiwx 1, 0, 30
  04c4884  ld 0, 224(1)
  04c4888  mtlr 0
  04c488c  lfd 30, 192(1)
  04c4890  lfd 31, 200(1)
  04c4894  ld 28, 160(1)
  04c4898  ld 29, 168(1)
  04c489c  ld 30, 176(1)
  04c48a0  ld 31, 184(1)
  04c48a4  addi 1, 1, 208
  04c48a8  blr

M939_004c48b8:   # 0x4c48b8, 0xc0 bytes
  04c48b8  stdu 1, -128(1)
  04c48bc  mflr 0
  04c48c0  std 0, 144(1)
  04c48c4  lis 4, 76
  04c48c8  std 31, 120(1)
  04c48cc  lis 5, -16311
  04c48d0  lwz 31, 120(3)
  04c48d4  addi 4, 4, 18608
  04c48d8  vspltisw 2, -1
  04c48dc  ori 5, 5, 4058
  04c48e0  lis 6, 114
  04c48e4  li 8, -3056
  04c48e8  vslw 2, 2, 2
  04c48ec  stw 5, 16(31)
  04c48f0  <unknown>
  04c48f4  li 4, 20
  04c48f8  vspltw 3, 3, 0
  04c48fc  std 30, 112(1)
  04c4900  <unknown>
  04c4904  li 30, 0
  04c4908  vmaddfp 2, 4, 3, 2
  04c490c  vctsxs 2, 2, 0
  04c4910  vspltw 2, 2, 0
  04c4914  stvewx 2, 4, 31
  04c4918  lbz 4, 188(3)
  04c491c  cntlzw 4, 4
  04c4920  rlwinm 4, 4, 27, 31, 31
  04c4924  stb 4, 188(3)
  04c4928  lwz 3, 0(31)
  04c492c  cmpwi 3, -1
  04c4930  bt 2, 0x4c4950
  04c4934  lis 4, 164
  04c4938  slwi 3, 3, 8
  04c493c  lwz 4, -28512(4)
  04c4940  addc 3, 4, 3
  04c4944  clrldi 3, 3, 32
  04c4948  bl 0x4c82d0
  04c494c  nop
  04c4950  addic 30, 30, 1
  04c4954  addic 31, 31, 4
  04c4958  cmpwi 30, 4
  04c495c  bt 0, 0x4c4928
  04c4960  ld 0, 144(1)
  04c4964  mtlr 0
  04c4968  ld 30, 112(1)
  04c496c  ld 31, 120(1)
  04c4970  addi 1, 1, 128
  04c4974  blr
