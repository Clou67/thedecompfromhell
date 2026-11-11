# game/update/moby754.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M754_0044d980:   # 0x44d980, 0x14 bytes
  044d980  lis 3, 135
  044d984  lis 4, 1
  044d988  addic 3, 3, 7148
  044d98c  stw 4, 72(3)
  044d990  blr

UpdateMoby_754:   # 0x44d9d0, 0x47c bytes
  044d9d0  stdu 1, -448(1)
  044d9d4  mflr 0
  044d9d8  std 0, 464(1)
  044d9dc  stfd 29, 424(1)
  044d9e0  stfd 30, 432(1)
  044d9e4  stfd 31, 440(1)
  044d9e8  addi 0, 1, 192
  044d9ec  stvx 20, 0, 0
  044d9f0  addic 0, 0, 16
  044d9f4  stvx 21, 0, 0
  044d9f8  addic 0, 0, 16
  044d9fc  stvx 22, 0, 0
  044da00  addic 0, 0, 16
  044da04  stvx 23, 0, 0
  044da08  addic 0, 0, 16
  044da0c  stvx 24, 0, 0
  044da10  addic 0, 0, 16
  044da14  stvx 25, 0, 0
  044da18  addic 0, 0, 16
  044da1c  stvx 26, 0, 0
  044da20  addic 0, 0, 16
  044da24  stvx 27, 0, 0
  044da28  addic 0, 0, 16
  044da2c  stvx 28, 0, 0
  044da30  addic 0, 0, 16
  044da34  stvx 29, 0, 0
  044da38  addic 0, 0, 16
  044da3c  stvx 30, 0, 0
  044da40  addic 0, 0, 16
  044da44  stvx 31, 0, 0
  044da48  std 31, 416(1)
  044da4c  ori 31, 3, 0
  044da50  lis 4, 1
  044da54  std 30, 408(1)
  044da58  std 29, 400(1)
  044da5c  std 28, 392(1)
  044da60  li 5, 0
  044da64  bl 0x10675c
  044da68  nop
  044da6c  ori 4, 3, 0
  044da70  lbz 3, 32(31)
  044da74  cmpwi 3, 0
  044da78  bt 1, 0x44da88
  044da7c  cmpwi 3, -1
  044da80  bf 1, 0x44ddc0
  044da84  b 0x44da9c
  044da88  cmpwi 3, 1
  044da8c  bf 1, 0x44daa8
  044da90  cmpwi 3, 2
  044da94  bf 1, 0x44dac8
  044da98  b 0x44ddc0
  044da9c  li 3, 1
  044daa0  stb 3, 32(31)
  044daa4  b 0x44ddc0
  044daa8  cmpwi 4, 0
  044daac  bt 2, 0x44ddc0
  044dab0  lwz 3, 44(4)
  044dab4  cmpwi 3, 0
  044dab8  bf 1, 0x44ddc0
  044dabc  li 3, 2
  044dac0  stb 3, 32(31)
  044dac4  b 0x44ddc0
  044dac8  li 3, 0
  044dacc  li 4, 0
  044dad0  ori 5, 31, 0
  044dad4  bl 0x15d12c
  044dad8  nop
  044dadc  ori 3, 31, 0
  044dae0  bl 0x11a100
  044dae4  nop
  044dae8  lwz 3, 36(31)
  044daec  li 4, 36
  044daf0  lis 5, 69
  044daf4  vspltisw 5, -1
  044daf8  addi 5, 5, -9832
  044dafc  vspltisw 8, -1
  044db00  <unknown>
  044db04  vslw 5, 5, 5
  044db08  vrefp 3, 2
  044db0c  <unknown>
  044db10  vspltw 4, 4, 0
  044db14  li 3, 44
  044db18  vspltisw 7, -1
  044db1c  li 4, 20
  044db20  li 6, 24
  044db24  vspltisw 9, -1
  044db28  li 7, 28
  044db2c  vspltisw 31, 0
  044db30  vslw 7, 7, 7
  044db34  li 8, 32
  044db38  <unknown>
  044db3c  li 9, 44
  044db40  li 3, 4
  044db44  li 10, 48
  044db48  vnmsubfp 6, 3, 2, 4
  044db4c  li 28, 0
  044db50  <unknown>
  044db54  lis 29, 161
  044db58  li 3, 16
  044db5c  lfs 29, 4(5)
  044db60  lfs 30, 8(5)
  044db64  ori 30, 28, 0
  044db68  lfs 31, 12(5)
  044db6c  addic 29, 29, 23856
  044db70  vspltw 21, 21, 0
  044db74  <unknown>
  044db78  li 3, 36
  044db7c  <unknown>
  044db80  <unknown>
  044db84  li 4, 40
  044db88  vmaddfp 3, 3, 6, 5
  044db8c  vslw 5, 8, 8
  044db90  vspltisw 6, -1
  044db94  <unknown>
  044db98  <unknown>
  044db9c  <unknown>
  044dba0  vslw 6, 6, 6
  044dba4  vspltw 22, 22, 0
  044dba8  vspltw 20, 20, 0
  044dbac  vspltw 23, 23, 0
  044dbb0  vnmsubfp 8, 3, 2, 4
  044dbb4  vspltw 27, 27, 0
  044dbb8  vspltw 26, 26, 0
  044dbbc  vspltw 25, 25, 0
  044dbc0  vmaddfp 3, 3, 8, 7
  044dbc4  vnmsubfp 2, 3, 2, 4
  044dbc8  vmaddfp 2, 3, 2, 5
  044dbcc  <unknown>
  044dbd0  <unknown>
  044dbd4  vspltw 29, 3, 0
  044dbd8  <unknown>
  044dbdc  vspltw 24, 24, 0
  044dbe0  vspltw 30, 30, 0
  044dbe4  vmaddfp 28, 2, 28, 6
  044dbe8  vslw 2, 9, 9
  044dbec  vmaddfp 29, 29, 28, 2
  044dbf0  li 0, 176
  044dbf4  vcfsx 2, 31, 0
  044dbf8  extsw 3, 28
  044dbfc  vspltisw 3, -1
  044dc00  fmr 2, 31
  044dc04  stvx 21, 1, 0
  044dc08  std 3, 160(1)
  044dc0c  stw 30, 156(1)
  044dc10  stw 30, 152(1)
  044dc14  stw 30, 148(1)
  044dc18  stw 30, 144(1)
  044dc1c  lfd 1, 160(1)
  044dc20  vslw 3, 3, 3
  044dc24  fcfid 1, 1
  044dc28  vmaddfp 21, 2, 21, 3
  044dc2c  frsp 1, 1
  044dc30  fmuls 1, 1, 29
  044dc34  bl 0x502578
  044dc38  nop
  044dc3c  vaddfp 2, 21, 22
  044dc40  vsubfp 3, 20, 21
  044dc44  vspltisw 8, -1
  044dc48  vsubfp 4, 23, 21
  044dc4c  vspltisw 9, -1
  044dc50  vspltisw 11, -1
  044dc54  li 3, 24
  044dc58  vspltisw 12, -1
  044dc5c  li 4, 16
  044dc60  li 5, 20
  044dc64  li 9, 128
  044dc68  vslw 12, 12, 12
  044dc6c  li 11, 132
  044dc70  vsubfp 6, 20, 2
  044dc74  vsubfp 7, 23, 2
  044dc78  vcmpgtfp 5, 3, 21
  044dc7c  vsel 3, 3, 21, 5
  044dc80  vslw 5, 8, 8
  044dc84  vcmpgtfp 8, 3, 4
  044dc88  vsel 3, 4, 3, 8
  044dc8c  vspltisw 8, -1
  044dc90  vcmpgtfp 10, 6, 2
  044dc94  vsel 2, 6, 2, 10
  044dc98  vslw 8, 8, 8
  044dc9c  vspltisw 10, -1
  044dca0  vcmpgtfp 6, 2, 7
  044dca4  vsel 2, 7, 2, 6
  044dca8  vslw 6, 9, 9
  044dcac  vspltisw 7, -1
  044dcb0  vslw 10, 10, 10
  044dcb4  vmaddfp 4, 2, 2, 5
  044dcb8  vspltisw 5, -1
  044dcbc  vslw 7, 7, 7
  044dcc0  vspltisw 9, -1
  044dcc4  vslw 5, 5, 5
  044dcc8  vslw 9, 9, 9
  044dccc  vmaddfp 5, 3, 3, 5
  044dcd0  <unknown>
  044dcd4  vmaddfp 6, 4, 2, 6
  044dcd8  li 12, 136
  044dcdc  li 8, 0
  044dce0  li 7, 0
  044dce4  addic 6, 1, 144
  044dce8  ori 10, 29, 0
  044dcec  ori 3, 31, 0
  044dcf0  vmaddfp 8, 5, 3, 8
  044dcf4  vmaddfp 7, 4, 6, 7
  044dcf8  vmaddfp 2, 6, 27, 2
  044dcfc  vslw 6, 11, 11
  044dd00  vspltisw 11, -1
  044dd04  vslw 11, 11, 11
  044dd08  vmaddfp 10, 5, 8, 10
  044dd0c  vmaddfp 3, 8, 27, 3
  044dd10  vmaddfp 8, 4, 7, 9
  044dd14  vmaddfp 2, 7, 26, 2
  044dd18  <unknown>
  044dd1c  <unknown>
  044dd20  li 4, 1817
  044dd24  addic 5, 1, 128
  044dd28  vmaddfp 11, 5, 10, 11
  044dd2c  vmaddfp 3, 10, 26, 3
  044dd30  vmaddfp 4, 4, 8, 6
  044dd34  vmaddfp 2, 8, 25, 2
  044dd38  vmaddfp 6, 30, 28, 13
  044dd3c  vmaddfp 5, 5, 11, 12
  044dd40  vmaddfp 3, 11, 25, 3
  044dd44  vmaddfp 2, 4, 24, 2
  044dd48  vspltw 4, 6, 0
  044dd4c  vmaddfp 3, 5, 24, 3
  044dd50  vmaddfp 2, 2, 29, 7
  044dd54  vmaddfp 3, 3, 29, 9
  044dd58  vspltw 2, 2, 0
  044dd5c  stvewx 2, 9, 1
  044dd60  vspltw 2, 3, 0
  044dd64  stvewx 2, 11, 1
  044dd68  stvewx 4, 12, 1
  044dd6c  stfs 1, 152(1)
  044dd70  std 29, 112(1)
  044dd74  fmr 1, 30
  044dd78  std 29, 120(1)
  044dd7c  bl 0x11a560
  044dd80  nop
  044dd84  li 0, 176
  044dd88  vspltisw 2, 1
  044dd8c  addic 28, 28, 1
  044dd90  cmpwi 28, 4
  044dd94  vadduwm 31, 31, 2
  044dd98  lvx 21, 1, 0
  044dd9c  bt 0, 0x44dbf0
  044dda0  ori 3, 31, 0
  044dda4  li 4, 1816
  044dda8  bl 0x11ad48
  044ddac  nop
  044ddb0  ori 3, 31, 0
  044ddb4  bl 0xefb38
  044ddb8  nop
  044ddbc  b 0x44ddc0
  044ddc0  li 0, 192
  044ddc4  lvx 20, 1, 0
  044ddc8  addic 0, 0, 16
  044ddcc  lvx 21, 1, 0
  044ddd0  addic 0, 0, 16
  044ddd4  lvx 22, 1, 0
  044ddd8  addic 0, 0, 16
  044dddc  lvx 23, 1, 0
  044dde0  addic 0, 0, 16
  044dde4  lvx 24, 1, 0
  044dde8  addic 0, 0, 16
  044ddec  lvx 25, 1, 0
  044ddf0  addic 0, 0, 16
  044ddf4  lvx 26, 1, 0
  044ddf8  addic 0, 0, 16
  044ddfc  lvx 27, 1, 0
  044de00  addic 0, 0, 16
  044de04  lvx 28, 1, 0
  044de08  addic 0, 0, 16
  044de0c  lvx 29, 1, 0
  044de10  addic 0, 0, 16
  044de14  lvx 30, 1, 0
  044de18  addic 0, 0, 16
  044de1c  lvx 31, 1, 0
  044de20  ld 0, 464(1)
  044de24  mtlr 0
  044de28  lfd 29, 424(1)
  044de2c  lfd 30, 432(1)
  044de30  lfd 31, 440(1)
  044de34  ld 28, 392(1)
  044de38  ld 29, 400(1)
  044de3c  ld 30, 408(1)
  044de40  ld 31, 416(1)
  044de44  addi 1, 1, 448
  044de48  blr
