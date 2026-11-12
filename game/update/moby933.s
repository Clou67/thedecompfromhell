# game/update/moby933.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M933_004bf81c:   # 0x4bf81c, 0x14 bytes
  04bf81c  lis 3, 143
  04bf820  lis 4, 1
  04bf824  addic 3, 3, 19040
  04bf828  stw 4, 72(3)
  04bf82c  blr

UpdateMoby_933:   # 0x4bf890, 0x554 bytes
  04bf890  stdu 1, -336(1)
  04bf894  mflr 0
  04bf898  std 0, 352(1)
  04bf89c  stfd 31, 328(1)
  04bf8a0  std 31, 320(1)
  04bf8a4  lbz 4, 32(3)
  04bf8a8  std 30, 312(1)
  04bf8ac  ori 31, 3, 0
  04bf8b0  lwz 30, 120(3)
  04bf8b4  cmpwi 4, 0
  04bf8b8  cmpwi 1, 4, 2
  04bf8bc  cmpwi 6, 4, 1
  04bf8c0  std 29, 304(1)
  04bf8c4  std 28, 296(1)
  04bf8c8  cmpwi 7, 4, -1
  04bf8cc  bt 1, 0x4bf8d8
  04bf8d0  bf 29, 0x4bfcc4
  04bf8d4  b 0x4bf8e4
  04bf8d8  bf 25, 0x4bf984
  04bf8dc  bf 5, 0x4bfc60
  04bf8e0  b 0x4bfcc4
  04bf8e4  lis 4, -16512
  04bf8e8  lwz 3, 0(30)
  04bf8ec  cmpwi 3, 0
  04bf8f0  stw 4, 4(30)
  04bf8f4  bf 2, 0x4bf96c
  04bf8f8  lis 4, 76
  04bf8fc  addic 3, 31, 16
  04bf900  addi 29, 4, -2000
  04bf904  li 4, 0
  04bf908  lfs 1, 0(29)
  04bf90c  bl 0xffb70
  04bf910  nop
  04bf914  lfs 2, 4(29)
  04bf918  fadds 1, 1, 2
  04bf91c  stfs 1, 24(31)
  04bf920  lfs 1, 8(29)
  04bf924  lfs 2, 12(29)
  04bf928  bl 0xfcbe8
  04bf92c  nop
  04bf930  stfs 1, 16(30)
  04bf934  lfs 31, 16(29)
  04bf938  lfs 2, 20(29)
  04bf93c  fmr 1, 31
  04bf940  bl 0xfcbe8
  04bf944  nop
  04bf948  stfs 1, 20(30)
  04bf94c  lfs 1, 24(29)
  04bf950  fmr 2, 31
  04bf954  bl 0xfcbe8
  04bf958  nop
  04bf95c  li 3, 1
  04bf960  stfs 1, 24(30)
  04bf964  stb 3, 32(31)
  04bf968  b 0x4bfcc4
  04bf96c  lbz 3, 32(3)
  04bf970  cmpwi 3, 128
  04bf974  bt 0, 0x4bfcc4
  04bf978  li 3, 1
  04bf97c  stb 3, 32(31)
  04bf980  b 0x4bfcc4
  04bf984  lis 3, 151
  04bf988  lwz 3, -25488(3)
  04bf98c  cmpwi 3, 16
  04bf990  bf 2, 0x4bfa40
  04bf994  lis 3, 76
  04bf998  lwz 4, 4(30)
  04bf99c  lfs 1, 4(30)
  04bf9a0  addi 3, 3, -2000
  04bf9a4  cmpwi 4, 0
  04bf9a8  lfs 31, 28(3)
  04bf9ac  bf 0, 0x4bf9d8
  04bf9b0  lis 4, 76
  04bf9b4  addic 3, 31, 16
  04bf9b8  addi 29, 4, -2000
  04bf9bc  li 4, 0
  04bf9c0  lfs 1, 0(29)
  04bf9c4  bl 0xffb70
  04bf9c8  nop
  04bf9cc  lfs 2, 4(29)
  04bf9d0  fadds 1, 1, 2
  04bf9d4  stfs 1, 4(30)
  04bf9d8  lis 3, 76
  04bf9dc  lis 6, 114
  04bf9e0  fmr 4, 31
  04bf9e4  addi 4, 3, -2000
  04bf9e8  addic 3, 31, 24
  04bf9ec  addic 5, 30, 8
  04bf9f0  lfs 2, 32(4)
  04bf9f4  lfs 3, 36(4)
  04bf9f8  lfs 5, -3060(6)
  04bf9fc  fmuls 2, 5, 2
  04bfa00  fmuls 3, 5, 3
  04bfa04  bl 0x109b40
  04bfa08  nop
  04bfa0c  lis 3, 164
  04bfa10  lwz 3, -28508(3)
  04bfa14  cmplw 31, 3
  04bfa18  bf 1, 0x4bfa40
  04bfa1c  lis 3, 151
  04bfa20  addic 3, 3, -25376
  04bfa24  lwz 3, 8332(3)
  04bfa28  cmpwi 3, 15
  04bfa2c  bt 2, 0x4bfa40
  04bfa30  ori 3, 31, 0
  04bfa34  bl 0xefb38
  04bfa38  nop
  04bfa3c  b 0x4bfdc0
  04bfa40  ori 3, 31, 0
  04bfa44  lis 4, 35
  04bfa48  li 5, 0
  04bfa4c  bl 0x10675c
  04bfa50  nop
  04bfa54  addic 28, 1, 224
  04bfa58  ori 29, 3, 0
  04bfa5c  ori 3, 28, 0
  04bfa60  li 4, 64
  04bfa64  bl 0x500250
  04bfa68  nop
  04bfa6c  lis 3, 76
  04bfa70  li 4, 1
  04bfa74  addi 3, 3, -2000
  04bfa78  li 5, 40
  04bfa7c  li 6, 224
  04bfa80  sth 4, 228(1)
  04bfa84  lis 8, 16128
  04bfa88  li 9, 7
  04bfa8c  lvlx 2, 5, 3
  04bfa90  li 11, 255
  04bfa94  ori 3, 31, 0
  04bfa98  vspltw 2, 2, 0
  04bfa9c  addic 7, 1, 288
  04bfaa0  li 10, 4
  04bfaa4  ori 4, 29, 0
  04bfaa8  ori 5, 28, 0
  04bfaac  stvewx 2, 6, 1
  04bfab0  stw 8, 240(1)
  04bfab4  stb 9, 282(1)
  04bfab8  li 6, 0
  04bfabc  stb 11, 283(1)
  04bfac0  li 8, 0
  04bfac4  li 9, 0
  04bfac8  bl 0x106840
  04bfacc  nop
  04bfad0  lwz 3, 288(1)
  04bfad4  cmpwi 3, 1
  04bfad8  bf 1, 0x4bfaf4
  04bfadc  cmpwi 29, 0
  04bfae0  bt 2, 0x4bfaf4
  04bfae4  lwz 3, 32(29)
  04bfae8  lhz 3, 166(3)
  04bfaec  cmpwi 3, 643
  04bfaf0  bf 2, 0x4bfb08
  04bfaf4  lis 3, 151
  04bfaf8  addic 3, 3, -25376
  04bfafc  lwz 3, 572(3)
  04bfb00  cmpw 3, 31
  04bfb04  bf 2, 0x4bfcc4
  04bfb08  lis 3, 76
  04bfb0c  li 6, 0
  04bfb10  addi 30, 3, -2000
  04bfb14  li 3, 0
  04bfb18  li 4, 0
  04bfb1c  ori 5, 31, 0
  04bfb20  lfs 31, 28(30)
  04bfb24  stw 6, 204(1)
  04bfb28  stw 6, 200(1)
  04bfb2c  stw 6, 196(1)
  04bfb30  stw 6, 192(1)
  04bfb34  bl 0x15d12c
  04bfb38  nop
  04bfb3c  lis 3, 151
  04bfb40  lfs 5, 40(30)
  04bfb44  lfs 3, 44(30)
  04bfb48  addic 3, 3, -25376
  04bfb4c  lfs 4, 48(30)
  04bfb50  lfs 2, 52(30)
  04bfb54  lwz 3, 572(3)
  04bfb58  lfs 1, 56(30)
  04bfb5c  cmpw 3, 31
  04bfb60  bf 2, 0x4bfbbc
  04bfb64  fmr 6, 5
  04bfb68  li 6, -1
  04bfb6c  li 7, 1
  04bfb70  fmr 5, 3
  04bfb74  li 11, 0
  04bfb78  fmr 7, 2
  04bfb7c  fmr 3, 1
  04bfb80  ori 3, 31, 0
  04bfb84  std 6, 144(1)
  04bfb88  addic 5, 31, 16
  04bfb8c  std 7, 160(1)
  04bfb90  li 8, 10
  04bfb94  std 7, 168(1)
  04bfb98  addic 4, 1, 192
  04bfb9c  std 6, 176(1)
  04bfba0  li 9, 20
  04bfba4  li 10, 60
  04bfba8  std 11, 184(1)
  04bfbac  fmr 2, 6
  04bfbb0  bl 0x10e030
  04bfbb4  nop
  04bfbb8  b 0x4bfc14
  04bfbbc  li 6, -1
  04bfbc0  fmr 6, 5
  04bfbc4  li 7, 1
  04bfbc8  fmr 5, 3
  04bfbcc  li 11, 0
  04bfbd0  fmr 7, 2
  04bfbd4  fmr 3, 1
  04bfbd8  ori 3, 31, 0
  04bfbdc  std 6, 144(1)
  04bfbe0  addic 5, 31, 16
  04bfbe4  std 7, 160(1)
  04bfbe8  li 8, 10
  04bfbec  std 7, 168(1)
  04bfbf0  addic 4, 1, 192
  04bfbf4  std 6, 176(1)
  04bfbf8  li 9, 20
  04bfbfc  fmr 1, 31
  04bfc00  li 10, 60
  04bfc04  fmr 2, 31
  04bfc08  std 11, 184(1)
  04bfc0c  bl 0x10e030
  04bfc10  nop
  04bfc14  lis 3, 164
  04bfc18  lwz 3, -28508(3)
  04bfc1c  cmplw 31, 3
  04bfc20  bf 0, 0x4bfc50
  04bfc24  li 3, 255
  04bfc28  lhz 6, 52(31)
  04bfc2c  li 5, 2
  04bfc30  li 4, 0
  04bfc34  ori 6, 6, 65
  04bfc38  stb 3, 164(31)
  04bfc3c  stb 5, 32(31)
  04bfc40  stw 4, 148(31)
  04bfc44  stb 3, 48(31)
  04bfc48  sth 6, 52(31)
  04bfc4c  b 0x4bfdc0
  04bfc50  ori 3, 31, 0
  04bfc54  bl 0xefb38
  04bfc58  nop
  04bfc5c  b 0x4bfdc0
  04bfc60  lis 5, 76
  04bfc64  lfs 1, 16(31)
  04bfc68  lfs 2, 20(31)
  04bfc6c  lis 4, 16448
  04bfc70  addi 5, 5, -2000
  04bfc74  stfs 1, 208(1)
  04bfc78  lfs 1, 24(31)
  04bfc7c  addic 3, 1, 208
  04bfc80  stfs 2, 212(1)
  04bfc84  stfs 1, 216(1)
  04bfc88  stw 4, 220(1)
  04bfc8c  lfs 1, 60(5)
  04bfc90  bl 0x502910
  04bfc94  nop
  04bfc98  cmpwi 3, -1
  04bfc9c  bf 2, 0x4bfcc4
  04bfca0  li 3, 1
  04bfca4  lhz 5, 52(31)
  04bfca8  li 4, -66
  04bfcac  lwz 6, 36(31)
  04bfcb0  stb 3, 32(31)
  04bfcb4  and 3, 5, 4
  04bfcb8  sth 3, 52(31)
  04bfcbc  lwz 3, 16(6)
  04bfcc0  stw 3, 148(31)
  04bfcc4  lis 3, 143
  04bfcc8  lfs 1, 12(30)
  04bfccc  lfs 2, 19156(3)
  04bfcd0  bl 0x502578
  04bfcd4  nop
  04bfcd8  lis 3, 76
  04bfcdc  addi 29, 3, -2000
  04bfce0  lfs 2, 64(29)
  04bfce4  lfs 3, 68(29)
  04bfce8  fsubs 2, 2, 1
  04bfcec  fsubs 3, 3, 1
  04bfcf0  lfs 5, 72(29)
  04bfcf4  fsub 4, 1, 2
  04bfcf8  fsel 2, 4, 2, 1
  04bfcfc  lfs 4, 76(29)
  04bfd00  fsub 6, 3, 2
  04bfd04  fsel 2, 6, 3, 2
  04bfd08  lfs 3, 80(29)
  04bfd0c  lfs 6, 84(29)
  04bfd10  lfs 8, 88(29)
  04bfd14  stfs 1, 12(30)
  04bfd18  fmuls 7, 2, 2
  04bfd1c  fmuls 9, 7, 2
  04bfd20  fmuls 10, 7, 9
  04bfd24  fmadds 2, 9, 5, 2
  04bfd28  fmuls 1, 7, 10
  04bfd2c  fmadds 2, 10, 4, 2
  04bfd30  fmuls 4, 7, 1
  04bfd34  fmadds 1, 1, 3, 2
  04bfd38  fmadds 31, 4, 6, 1
  04bfd3c  fmuls 1, 31, 8
  04bfd40  bl 0x502758
  04bfd44  nop
  04bfd48  lfs 1, 92(29)
  04bfd4c  addic 29, 3, 207
  04bfd50  fmuls 1, 31, 1
  04bfd54  bl 0x502758
  04bfd58  nop
  04bfd5c  slwi 4, 3, 8
  04bfd60  slwi 3, 3, 16
  04bfd64  lfs 1, 64(31)
  04bfd68  addic 4, 4, 12288
  04bfd6c  lfs 2, 16(30)
  04bfd70  lis 6, 48
  04bfd74  or 4, 4, 29
  04bfd78  addc 3, 3, 6
  04bfd7c  lis 5, -256
  04bfd80  or 3, 4, 3
  04bfd84  or 3, 3, 5
  04bfd88  stw 3, 144(31)
  04bfd8c  bl 0x502578
  04bfd90  nop
  04bfd94  stfs 1, 64(31)
  04bfd98  lfs 1, 68(31)
  04bfd9c  lfs 2, 20(30)
  04bfda0  bl 0x502578
  04bfda4  nop
  04bfda8  stfs 1, 68(31)
  04bfdac  lfs 1, 72(31)
  04bfdb0  lfs 2, 24(30)
  04bfdb4  bl 0x502578
  04bfdb8  nop
  04bfdbc  stfs 1, 72(31)
  04bfdc0  ld 0, 352(1)
  04bfdc4  mtlr 0
  04bfdc8  lfd 31, 328(1)
  04bfdcc  ld 28, 296(1)
  04bfdd0  ld 29, 304(1)
  04bfdd4  ld 30, 312(1)
  04bfdd8  ld 31, 320(1)
  04bfddc  addi 1, 1, 336
  04bfde0  blr
