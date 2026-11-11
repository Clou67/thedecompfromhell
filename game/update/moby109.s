# game/update/moby109.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1089_001bb8c8:   # 0x1bb8c8, 0xd0 bytes
  01bb8c8  stdu 1, -144(1)
  01bb8cc  mflr 0
  01bb8d0  std 0, 160(1)
  01bb8d4  stfd 31, 136(1)
  01bb8d8  std 31, 128(1)
  01bb8dc  lis 4, 28
  01bb8e0  ori 31, 3, 0
  01bb8e4  addi 5, 4, -18240
  01bb8e8  li 6, 0
  01bb8ec  std 30, 120(1)
  01bb8f0  lis 4, 51
  01bb8f4  lwz 30, 120(31)
  01bb8f8  lfs 31, 0(5)
  01bb8fc  li 5, 0
  01bb900  stw 6, 116(1)
  01bb904  bl 0x10675c
  01bb908  nop
  01bb90c  ori 4, 3, 0
  01bb910  ori 3, 31, 0
  01bb914  li 6, 0
  01bb918  addic 5, 30, 32
  01bb91c  li 9, 0
  01bb920  addic 7, 1, 112
  01bb924  li 10, 4
  01bb928  addic 8, 1, 116
  01bb92c  bl 0x106840
  01bb930  nop
  01bb934  lwz 3, 112(1)
  01bb938  cmpwi 3, 1
  01bb93c  bt 2, 0x1bb974
  01bb940  lbz 3, 32(31)
  01bb944  cmpwi 1, 3, 9
  01bb948  cmpwi 3, 8
  01bb94c  cror 2, 2, 6
  01bb950  bt 2, 0x1bb974
  01bb954  lfs 1, 32(30)
  01bb958  lfs 2, 116(1)
  01bb95c  fsubs 1, 1, 2
  01bb960  fcmpu 0, 1, 31
  01bb964  stfs 1, 32(30)
  01bb968  bt 1, 0x1bb974
  01bb96c  li 3, 8
  01bb970  stb 3, 32(31)
  01bb974  li 3, 255
  01bb978  stb 3, 164(31)
  01bb97c  ld 0, 160(1)
  01bb980  mtlr 0
  01bb984  lfd 31, 136(1)
  01bb988  ld 30, 120(1)
  01bb98c  ld 31, 128(1)
  01bb990  addi 1, 1, 144
  01bb994  blr

UpdateMoby_109:   # 0x1bb9c0, 0x6c0 bytes
  01bb9c0  stdu 1, -288(1)
  01bb9c4  mflr 0
  01bb9c8  std 0, 304(1)
  01bb9cc  stfd 31, 280(1)
  01bb9d0  addi 0, 1, 240
  01bb9d4  stvx 31, 0, 0
  01bb9d8  std 31, 272(1)
  01bb9dc  lis 4, 28
  01bb9e0  ori 31, 3, 0
  01bb9e4  addi 5, 4, -18024
  01bb9e8  li 6, 0
  01bb9ec  std 30, 264(1)
  01bb9f0  lis 4, 51
  01bb9f4  lwz 30, 120(31)
  01bb9f8  lfs 31, 0(5)
  01bb9fc  li 5, 0
  01bba00  stw 6, 212(1)
  01bba04  bl 0x10675c
  01bba08  nop
  01bba0c  ori 4, 3, 0
  01bba10  ori 3, 31, 0
  01bba14  li 6, 0
  01bba18  addic 5, 30, 32
  01bba1c  li 9, 0
  01bba20  addic 7, 1, 208
  01bba24  li 10, 4
  01bba28  addic 8, 1, 212
  01bba2c  bl 0x106840
  01bba30  nop
  01bba34  lwz 3, 208(1)
  01bba38  cmpwi 3, 1
  01bba3c  bt 2, 0x1bba74
  01bba40  lbz 3, 32(31)
  01bba44  cmpwi 1, 3, 9
  01bba48  cmpwi 3, 8
  01bba4c  cror 2, 2, 6
  01bba50  bt 2, 0x1bba74
  01bba54  lfs 1, 32(30)
  01bba58  lfs 2, 212(1)
  01bba5c  fsubs 1, 1, 2
  01bba60  fcmpu 0, 1, 31
  01bba64  stfs 1, 32(30)
  01bba68  bt 1, 0x1bba74
  01bba6c  li 3, 8
  01bba70  stb 3, 32(31)
  01bba74  li 3, 255
  01bba78  lis 4, 165
  01bba7c  addic 5, 4, 7136
  01bba80  stb 3, 164(31)
  01bba84  lwz 3, 112(30)
  01bba88  lbz 4, 32(31)
  01bba8c  slwi 3, 3, 2
  01bba90  cmpwi 4, 4
  01bba94  extsw 3, 3
  01bba98  cmpwi 1, 4, 1
  01bba9c  cmpwi 6, 4, -1
  01bbaa0  cmpwi 7, 4, 0
  01bbaa4  lwzx 3, 5, 3
  01bbaa8  bt 1, 0x1bbad0
  01bbaac  bt 5, 0x1bbabc
  01bbab0  bf 25, 0x1bc05c
  01bbab4  bf 29, 0x1bbb10
  01bbab8  b 0x1bbb44
  01bbabc  cmpwi 4, 2
  01bbac0  bf 1, 0x1bbbc8
  01bbac4  cmpwi 4, 3
  01bbac8  bf 1, 0x1bbc24
  01bbacc  b 0x1bbcd4
  01bbad0  cmpwi 4, 10
  01bbad4  bt 2, 0x1bc024
  01bbad8  cmpwi 4, 9
  01bbadc  bt 2, 0x1bbf9c
  01bbae0  cmpwi 4, 8
  01bbae4  bt 2, 0x1bbee8
  01bbae8  lis 3, 28
  01bbaec  li 5, 4
  01bbaf0  addi 3, 3, -18024
  01bbaf4  cmpwi 4, 7
  01bbaf8  <unknown>
  01bbafc  vspltw 31, 31, 0
  01bbb00  bt 2, 0x1bbea0
  01bbb04  cmpwi 4, 6
  01bbb08  bt 2, 0x1bbddc
  01bbb0c  b 0x1bc05c
  01bbb10  li 3, 1
  01bbb14  lfs 1, 16(31)
  01bbb18  stb 3, 32(31)
  01bbb1c  stfs 1, 144(30)
  01bbb20  lfs 1, 20(31)
  01bbb24  stfs 1, 148(30)
  01bbb28  lfs 1, 24(31)
  01bbb2c  stfs 1, 152(30)
  01bbb30  lfs 1, 28(31)
  01bbb34  stfs 1, 156(30)
  01bbb38  lfs 1, 72(31)
  01bbb3c  stfs 1, 156(30)
  01bbb40  b 0x1bc05c
  01bbb44  lis 3, 151
  01bbb48  lwz 4, 136(30)
  01bbb4c  addic 3, 3, -25168
  01bbb50  extsw 4, 4
  01bbb54  bl 0x110b70
  01bbb58  nop
  01bbb5c  cmpwi 3, 0
  01bbb60  bt 2, 0x1bc05c
  01bbb64  li 3, 120
  01bbb68  vspltisw 4, -1
  01bbb6c  li 4, 2
  01bbb70  addi 5, 3, 16
  01bbb74  li 6, 8
  01bbb78  vslw 4, 4, 4
  01bbb7c  stb 4, 32(31)
  01bbb80  <unknown>
  01bbb84  <unknown>
  01bbb88  lis 4, 28
  01bbb8c  vor 2, 2, 3
  01bbb90  addi 3, 4, -18024
  01bbb94  li 4, -3056
  01bbb98  vcfsx 2, 2, 0
  01bbb9c  <unknown>
  01bbba0  lis 3, 114
  01bbba4  vspltw 3, 3, 0
  01bbba8  <unknown>
  01bbbac  li 3, 164
  01bbbb0  vaddfp 2, 2, 3
  01bbbb4  vmaddfp 2, 5, 2, 4
  01bbbb8  vctsxs 2, 2, 0
  01bbbbc  vspltw 2, 2, 0
  01bbbc0  stvewx 2, 3, 30
  01bbbc4  b 0x1bc05c
  01bbbc8  addic 3, 30, 164
  01bbbcc  bl 0x4fff60
  01bbbd0  nop
  01bbbd4  cmpwi 3, 0
  01bbbd8  bt 2, 0x1bc05c
  01bbbdc  lis 3, 28
  01bbbe0  vspltisw 2, -1
  01bbbe4  li 4, 3
  01bbbe8  addi 3, 3, -18024
  01bbbec  li 6, 12
  01bbbf0  lis 5, 114
  01bbbf4  stb 4, 32(31)
  01bbbf8  li 4, -3056
  01bbbfc  vslw 2, 2, 2
  01bbc00  <unknown>
  01bbc04  li 3, 164
  01bbc08  vspltw 3, 3, 0
  01bbc0c  <unknown>
  01bbc10  vmaddfp 2, 4, 3, 2
  01bbc14  vctsxs 2, 2, 0
  01bbc18  vspltw 2, 2, 0
  01bbc1c  stvewx 2, 3, 30
  01bbc20  b 0x1bc05c
  01bbc24  lwz 6, 164(30)
  01bbc28  lis 4, 28
  01bbc2c  lis 5, 114
  01bbc30  addic 6, 6, -1
  01bbc34  addi 4, 4, -18024
  01bbc38  extsw 7, 6
  01bbc3c  stw 6, 164(30)
  01bbc40  std 7, 216(1)
  01bbc44  lfs 1, 12(4)
  01bbc48  lfs 2, -3056(5)
  01bbc4c  addic 5, 3, 16
  01bbc50  fmuls 1, 2, 1
  01bbc54  lfd 2, 216(1)
  01bbc58  ori 3, 31, 0
  01bbc5c  addic 4, 30, 144
  01bbc60  fcfid 2, 2
  01bbc64  fctidz 3, 1
  01bbc68  frsp 1, 2
  01bbc6c  fcfid 2, 3
  01bbc70  frsp 2, 2
  01bbc74  bl 0x1bb7e0
  01bbc78  lwz 3, 164(30)
  01bbc7c  cmpwi 3, 0
  01bbc80  bf 2, 0x1bc05c
  01bbc84  lis 4, 28
  01bbc88  li 3, 6
  01bbc8c  lfs 1, 72(31)
  01bbc90  li 5, 12
  01bbc94  vspltisw 4, -1
  01bbc98  addi 4, 4, -18024
  01bbc9c  stfs 1, 168(30)
  01bbca0  li 6, -3056
  01bbca4  lis 7, 114
  01bbca8  stb 3, 32(31)
  01bbcac  vslw 4, 4, 4
  01bbcb0  <unknown>
  01bbcb4  li 3, 164
  01bbcb8  vspltw 2, 2, 0
  01bbcbc  <unknown>
  01bbcc0  vmaddfp 2, 3, 2, 4
  01bbcc4  vctsxs 2, 2, 0
  01bbcc8  vspltw 2, 2, 0
  01bbccc  stvewx 2, 3, 30
  01bbcd0  b 0x1bc05c
  01bbcd4  lwz 4, 164(30)
  01bbcd8  addic 4, 4, -1
  01bbcdc  extsw 5, 4
  01bbce0  std 5, 216(1)
  01bbce4  lis 5, 28
  01bbce8  stw 4, 164(30)
  01bbcec  addi 5, 5, -18024
  01bbcf0  lwz 6, 160(30)
  01bbcf4  addic 4, 3, 32
  01bbcf8  cmpwi 6, 0
  01bbcfc  lfs 1, 4(5)
  01bbd00  lfd 2, 216(1)
  01bbd04  fcfid 2, 2
  01bbd08  frsp 2, 2
  01bbd0c  bt 2, 0x1bbd40
  01bbd10  lis 5, 114
  01bbd14  lfs 3, -3056(5)
  01bbd18  fmuls 3, 3, 1
  01bbd1c  addic 5, 3, 16
  01bbd20  fmr 1, 2
  01bbd24  ori 3, 31, 0
  01bbd28  fmr 2, 3
  01bbd2c  fctidz 2, 2
  01bbd30  fcfid 2, 2
  01bbd34  frsp 2, 2
  01bbd38  bl 0x1bb7e0
  01bbd3c  b 0x1bbd70
  01bbd40  ori 5, 4, 0
  01bbd44  lis 4, 114
  01bbd48  lfs 3, -3056(4)
  01bbd4c  fmuls 3, 3, 1
  01bbd50  addic 4, 3, 16
  01bbd54  fmr 1, 2
  01bbd58  ori 3, 31, 0
  01bbd5c  fmr 2, 3
  01bbd60  fctidz 2, 2
  01bbd64  fcfid 2, 2
  01bbd68  frsp 2, 2
  01bbd6c  bl 0x1bb7e0
  01bbd70  lwz 3, 164(30)
  01bbd74  cmpwi 3, 0
  01bbd78  bf 2, 0x1bc05c
  01bbd7c  lwz 5, 160(30)
  01bbd80  lis 3, 28
  01bbd84  vspltisw 2, -1
  01bbd88  addic 5, 5, 1
  01bbd8c  li 4, 6
  01bbd90  clrlwi 5, 5, 31
  01bbd94  addi 3, 3, -18024
  01bbd98  li 6, 12
  01bbd9c  vslw 2, 2, 2
  01bbda0  lis 7, 114
  01bbda4  stw 5, 160(30)
  01bbda8  li 8, -3056
  01bbdac  stb 4, 32(31)
  01bbdb0  <unknown>
  01bbdb4  li 3, 164
  01bbdb8  vspltw 3, 3, 0
  01bbdbc  <unknown>
  01bbdc0  vmaddfp 2, 4, 3, 2
  01bbdc4  vctsxs 2, 2, 0
  01bbdc8  vspltw 2, 2, 0
  01bbdcc  stvewx 2, 3, 30
  01bbdd0  lfs 1, 72(31)
  01bbdd4  stfs 1, 168(30)
  01bbdd8  b 0x1bc05c
  01bbddc  lwz 4, 164(30)
  01bbde0  lis 3, 28
  01bbde4  addic 4, 4, -1
  01bbde8  addi 3, 3, -18024
  01bbdec  extsw 5, 4
  01bbdf0  stw 4, 164(30)
  01bbdf4  lis 4, 114
  01bbdf8  std 5, 216(1)
  01bbdfc  lfs 1, 12(3)
  01bbe00  lfs 2, -3056(4)
  01bbe04  lwz 3, 160(30)
  01bbe08  lis 4, 165
  01bbe0c  fmuls 3, 2, 1
  01bbe10  slwi 3, 3, 2
  01bbe14  addc 3, 30, 3
  01bbe18  clrldi 3, 3, 32
  01bbe1c  lwz 4, 7128(4)
  01bbe20  lwz 3, 128(3)
  01bbe24  lfs 2, 168(30)
  01bbe28  lfd 1, 216(1)
  01bbe2c  fctidz 5, 3
  01bbe30  slwi 3, 3, 7
  01bbe34  fcfid 4, 1
  01bbe38  addc 3, 4, 3
  01bbe3c  fmr 1, 2
  01bbe40  clrldi 3, 3, 32
  01bbe44  lfs 2, 120(3)
  01bbe48  ori 3, 31, 0
  01bbe4c  frsp 3, 4
  01bbe50  fcfid 4, 5
  01bbe54  frsp 4, 4
  01bbe58  bl 0x1bb6f0
  01bbe5c  stfs 1, 72(31)
  01bbe60  lwz 3, 164(30)
  01bbe64  cmpwi 3, 0
  01bbe68  bf 2, 0x1bc05c
  01bbe6c  vspltisw 2, -1
  01bbe70  li 3, 7
  01bbe74  li 4, -3056
  01bbe78  lis 5, 114
  01bbe7c  vslw 2, 2, 2
  01bbe80  stb 3, 32(31)
  01bbe84  li 3, 164
  01bbe88  <unknown>
  01bbe8c  vmaddfp 2, 3, 31, 2
  01bbe90  vctsxs 2, 2, 0
  01bbe94  vspltw 2, 2, 0
  01bbe98  stvewx 2, 3, 30
  01bbe9c  b 0x1bc05c
  01bbea0  lwz 3, 164(30)
  01bbea4  addic 3, 3, -1
  01bbea8  cmpwi 3, 0
  01bbeac  stw 3, 164(30)
  01bbeb0  bf 2, 0x1bc05c
  01bbeb4  vspltisw 2, -1
  01bbeb8  li 3, 4
  01bbebc  lis 4, 114
  01bbec0  li 5, -3056
  01bbec4  vslw 2, 2, 2
  01bbec8  stb 3, 32(31)
  01bbecc  li 3, 164
  01bbed0  <unknown>
  01bbed4  vmaddfp 2, 3, 31, 2
  01bbed8  vctsxs 2, 2, 0
  01bbedc  vspltw 2, 2, 0
  01bbee0  stvewx 2, 3, 30
  01bbee4  b 0x1bc05c
  01bbee8  lis 3, 28
  01bbeec  lfs 1, 16(31)
  01bbef0  li 11, -1
  01bbef4  addi 6, 3, -18024
  01bbef8  lfs 2, 20(31)
  01bbefc  stfs 1, 192(1)
  01bbf00  li 30, 0
  01bbf04  lfs 1, 28(31)
  01bbf08  li 7, 7
  01bbf0c  stfs 2, 196(1)
  01bbf10  lis 4, 161
  01bbf14  stfs 1, 204(1)
  01bbf18  ori 3, 31, 0
  01bbf1c  lfs 1, 16(6)
  01bbf20  addic 5, 1, 192
  01bbf24  lfs 2, 24(31)
  01bbf28  addic 4, 4, 23856
  01bbf2c  std 11, 144(1)
  01bbf30  li 8, 7
  01bbf34  fadds 3, 2, 1
  01bbf38  std 30, 160(1)
  01bbf3c  std 7, 168(1)
  01bbf40  fmr 1, 31
  01bbf44  std 11, 176(1)
  01bbf48  fmr 2, 31
  01bbf4c  std 30, 184(1)
  01bbf50  li 9, 10
  01bbf54  li 10, 20
  01bbf58  stfs 3, 200(1)
  01bbf5c  lfs 3, 20(6)
  01bbf60  lfs 4, 8(6)
  01bbf64  lfs 7, 24(6)
  01bbf68  fmr 5, 3
  01bbf6c  fmr 6, 4
  01bbf70  bl 0x10e030
  01bbf74  nop
  01bbf78  lhz 3, 52(31)
  01bbf7c  li 4, 9
  01bbf80  stb 30, 49(31)
  01bbf84  rlwimi 3, 30, 0, 19, 19
  01bbf88  stw 30, 148(31)
  01bbf8c  ori 3, 3, 1
  01bbf90  stb 4, 32(31)
  01bbf94  sth 3, 52(31)
  01bbf98  b 0x1bc05c
  01bbf9c  lwz 3, 116(30)
  01bbfa0  cmpwi 3, 0
  01bbfa4  bt 2, 0x1bc05c
  01bbfa8  addic 3, 3, -1
  01bbfac  lfs 1, 144(30)
  01bbfb0  lis 4, 28
  01bbfb4  li 5, 1
  01bbfb8  li 7, 10
  01bbfbc  stw 3, 116(30)
  01bbfc0  stfs 1, 16(31)
  01bbfc4  lfs 1, 148(30)
  01bbfc8  addi 3, 4, -18024
  01bbfcc  stfs 1, 20(31)
  01bbfd0  lfs 1, 152(30)
  01bbfd4  stfs 1, 24(31)
  01bbfd8  lfs 2, 156(30)
  01bbfdc  stfs 2, 28(31)
  01bbfe0  lfs 2, 156(30)
  01bbfe4  stfs 2, 72(31)
  01bbfe8  lfs 2, 28(3)
  01bbfec  lhz 4, 52(31)
  01bbff0  li 3, 0
  01bbff4  fsubs 1, 1, 2
  01bbff8  ori 4, 4, 4096
  01bbffc  lwz 6, 36(31)
  01bc000  rlwinm 4, 4, 0, 16, 30
  01bc004  sth 4, 52(31)
  01bc008  stfs 1, 24(31)
  01bc00c  stw 3, 160(30)
  01bc010  stb 5, 49(31)
  01bc014  lwz 3, 16(6)
  01bc018  stb 7, 32(31)
  01bc01c  stw 3, 148(31)
  01bc020  b 0x1bc05c
  01bc024  lis 3, 28
  01bc028  lfs 1, 152(30)
  01bc02c  lis 5, 114
  01bc030  addi 4, 3, -18024
  01bc034  addic 3, 31, 24
  01bc038  lfs 2, 32(4)
  01bc03c  lfs 3, -3052(5)
  01bc040  fmuls 2, 3, 2
  01bc044  bl 0x109af0
  01bc048  nop
  01bc04c  fcmpu 0, 1, 31
  01bc050  bf 2, 0x1bc05c
  01bc054  li 3, 1
  01bc058  stb 3, 32(31)
  01bc05c  li 0, 240
  01bc060  lvx 31, 1, 0
  01bc064  ld 0, 304(1)
  01bc068  mtlr 0
  01bc06c  lfd 31, 280(1)
  01bc070  ld 30, 264(1)
  01bc074  ld 31, 272(1)
  01bc078  addi 1, 1, 288
  01bc07c  blr
