# game/update/moby1488.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1488:   # 0x28cba8, 0x128 bytes
  028cba8  stdu 1, -192(1)
  028cbac  mflr 0
  028cbb0  std 0, 208(1)
  028cbb4  stfd 31, 184(1)
  028cbb8  std 31, 176(1)
  028cbbc  ori 31, 3, 0
  028cbc0  lbz 3, 32(3)
  028cbc4  cmpwi 3, 0
  028cbc8  cmpwi 1, 3, 1
  028cbcc  std 30, 168(1)
  028cbd0  std 29, 160(1)
  028cbd4  std 28, 152(1)
  028cbd8  std 27, 144(1)
  028cbdc  std 26, 136(1)
  028cbe0  cmpwi 6, 3, -1
  028cbe4  bt 1, 0x28cbf0
  028cbe8  bf 25, 0x28cca4
  028cbec  b 0x28cbf8
  028cbf0  bf 5, 0x28cc30
  028cbf4  b 0x28cca4
  028cbf8  lis 3, 251
  028cbfc  lwz 3, -9712(3)
  028cc00  cmpwi 3, 0
  028cc04  bt 2, 0x28cca4
  028cc08  addic 3, 31, 192
  028cc0c  addic 4, 31, 64
  028cc10  bl 0x500b64
  028cc14  nop
  028cc18  li 3, 1
  028cc1c  lis 4, 251
  028cc20  li 5, 0
  028cc24  stb 3, 32(31)
  028cc28  stw 5, -9712(4)
  028cc2c  b 0x28cca4
  028cc30  lis 3, 41
  028cc34  li 26, 0
  028cc38  addi 3, 3, -13408
  028cc3c  lis 29, 123
  028cc40  lis 28, 161
  028cc44  lis 30, 251
  028cc48  addic 28, 28, 23856
  028cc4c  lfs 31, 0(3)
  028cc50  ori 27, 26, 0
  028cc54  addic 29, 29, -20112
  028cc58  addic 30, 30, -9696
  028cc5c  std 28, 112(1)
  028cc60  ori 3, 31, 0
  028cc64  ori 10, 28, 0
  028cc68  fmr 1, 31
  028cc6c  li 4, 1503
  028cc70  std 28, 120(1)
  028cc74  ori 5, 29, 0
  028cc78  ori 6, 30, 0
  028cc7c  li 7, 0
  028cc80  li 8, 0
  028cc84  bl 0x11a560
  028cc88  nop
  028cc8c  addic 26, 26, 1
  028cc90  addic 29, 29, 16
  028cc94  cmpwi 26, 4
  028cc98  addic 30, 30, 16
  028cc9c  bt 0, 0x28cc5c
  028cca0  stb 27, 32(31)
  028cca4  ld 0, 208(1)
  028cca8  mtlr 0
  028ccac  lfd 31, 184(1)
  028ccb0  ld 26, 136(1)
  028ccb4  ld 27, 144(1)
  028ccb8  ld 28, 152(1)
  028ccbc  ld 29, 160(1)
  028ccc0  ld 30, 168(1)
  028ccc4  ld 31, 176(1)
  028ccc8  addi 1, 1, 192
  028cccc  blr

M1488_0028cce0:   # 0x28cce0, 0x22c bytes
  028cce0  stdu 1, -208(1)
  028cce4  mflr 0
  028cce8  std 0, 224(1)
  028ccec  stfd 29, 184(1)
  028ccf0  stfd 30, 192(1)
  028ccf4  stfd 31, 200(1)
  028ccf8  std 27, 144(1)
  028ccfc  ori 27, 3, 0
  028cd00  ori 3, 7, 0
  028cd04  std 31, 176(1)
  028cd08  fmr 31, 2
  028cd0c  ori 31, 10, 0
  028cd10  std 30, 168(1)
  028cd14  fmr 30, 1
  028cd18  std 29, 160(1)
  028cd1c  ori 30, 6, 0
  028cd20  std 28, 152(1)
  028cd24  ori 29, 5, 0
  028cd28  std 26, 136(1)
  028cd2c  std 25, 128(1)
  028cd30  std 24, 120(1)
  028cd34  ori 28, 4, 0
  028cd38  bl 0xefa28
  028cd3c  nop
  028cd40  ori 26, 3, 0
  028cd44  cmpwi 26, 0
  028cd48  bt 2, 0x28cecc
  028cd4c  lwz 24, 120(26)
  028cd50  li 3, 255
  028cd54  li 4, 126
  028cd58  li 5, 1
  028cd5c  li 25, 0
  028cd60  stw 27, 0(24)
  028cd64  stb 3, 48(26)
  028cd68  sth 4, 50(26)
  028cd6c  ld 3, 56(27)
  028cd70  stb 5, 49(26)
  028cd74  std 3, 56(26)
  028cd78  stb 25, 32(26)
  028cd7c  bl 0xfcc68
  028cd80  nop
  028cd84  stfs 1, 64(26)
  028cd88  bl 0xfcc68
  028cd8c  nop
  028cd90  stfs 1, 68(26)
  028cd94  bl 0xfcc68
  028cd98  nop
  028cd9c  stfs 1, 72(26)
  028cda0  lfs 1, 0(29)
  028cda4  stfs 1, 16(26)
  028cda8  lis 3, 41
  028cdac  lfs 1, 4(29)
  028cdb0  lis 4, 114
  028cdb4  stfs 1, 20(26)
  028cdb8  lfs 1, 8(29)
  028cdbc  vspltisw 3, -1
  028cdc0  stfs 1, 24(26)
  028cdc4  lfs 1, 12(29)
  028cdc8  stfs 1, 28(26)
  028cdcc  lfs 1, 0(30)
  028cdd0  vslw 3, 3, 3
  028cdd4  stfs 1, 64(26)
  028cdd8  lfs 1, 4(30)
  028cddc  stfs 1, 68(26)
  028cde0  lfs 1, 8(30)
  028cde4  stfs 1, 72(26)
  028cde8  lfs 1, 12(30)
  028cdec  addi 30, 3, -13104
  028cdf0  stfs 1, 76(26)
  028cdf4  lfs 1, 0(28)
  028cdf8  li 3, -3056
  028cdfc  stfs 1, 16(24)
  028ce00  lfs 1, 4(28)
  028ce04  stfs 1, 20(24)
  028ce08  lfs 1, 8(28)
  028ce0c  stfs 1, 24(24)
  028ce10  lfs 1, 12(28)
  028ce14  stfs 1, 28(24)
  028ce18  lfs 1, 24(26)
  028ce1c  stfs 1, 4(24)
  028ce20  lvlx 2, 0, 30
  028ce24  lvlx 4, 3, 4
  028ce28  vspltw 2, 2, 0
  028ce2c  li 3, 14
  028ce30  lis 29, 251
  028ce34  lis 28, 123
  028ce38  vmaddfp 2, 4, 2, 3
  028ce3c  vctsxs 2, 2, 0
  028ce40  vsplth 2, 2, 1
  028ce44  stvehx 2, 3, 24
  028ce48  stw 25, 32(24)
  028ce4c  lfs 1, -9632(29)
  028ce50  lfs 2, -20048(28)
  028ce54  bl 0xfe4f0
  028ce58  nop
  028ce5c  lfs 29, 4(30)
  028ce60  lis 27, 114
  028ce64  fmuls 1, 1, 29
  028ce68  lfs 2, -3052(27)
  028ce6c  fmuls 1, 1, 2
  028ce70  stfs 1, 36(24)
  028ce74  lfs 1, -9632(29)
  028ce78  lfs 2, -20048(28)
  028ce7c  bl 0xfe4f0
  028ce80  nop
  028ce84  fmuls 3, 1, 29
  028ce88  lfs 4, -3052(27)
  028ce8c  fmr 1, 30
  028ce90  fmr 2, 31
  028ce94  fmuls 3, 3, 4
  028ce98  stfs 3, 40(24)
  028ce9c  bl 0xfcbe8
  028cea0  nop
  028cea4  lfs 2, 44(26)
  028cea8  ori 3, 26, 0
  028ceac  fmuls 2, 2, 1
  028ceb0  stfs 2, 44(26)
  028ceb4  lfs 2, 8(30)
  028ceb8  sth 31, 12(24)
  028cebc  fmuls 1, 1, 2
  028cec0  stfs 1, 8(24)
  028cec4  bl 0xf31a8
  028cec8  nop
  028cecc  ori 3, 26, 0
  028ced0  ld 0, 224(1)
  028ced4  mtlr 0
  028ced8  lfd 29, 184(1)
  028cedc  lfd 30, 192(1)
  028cee0  lfd 31, 200(1)
  028cee4  ld 24, 120(1)
  028cee8  ld 25, 128(1)
  028ceec  ld 26, 136(1)
  028cef0  ld 27, 144(1)
  028cef4  ld 28, 152(1)
  028cef8  ld 29, 160(1)
  028cefc  ld 30, 168(1)
  028cf00  ld 31, 176(1)
  028cf04  addi 1, 1, 208
  028cf08  blr
