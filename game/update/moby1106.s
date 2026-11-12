# game/update/moby1106.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1106_001bf888:   # 0x1bf888, 0x14 bytes
  01bf888  lis 3, 118
  01bf88c  lis 4, 1
  01bf890  addic 3, 3, 16008
  01bf894  stw 4, 72(3)
  01bf898  blr

M1106_001bf8b0:   # 0x1bf8b0, 0x298 bytes
  01bf8b0  stdu 1, -192(1)
  01bf8b4  mflr 0
  01bf8b8  std 0, 208(1)
  01bf8bc  stfd 31, 184(1)
  01bf8c0  std 30, 168(1)
  01bf8c4  std 25, 128(1)
  01bf8c8  ori 30, 4, 0
  01bf8cc  extsh 25, 7
  01bf8d0  std 29, 160(1)
  01bf8d4  cmpwi 6, 0
  01bf8d8  ori 29, 9, 0
  01bf8dc  cmpwi 1, 25, 0
  01bf8e0  std 28, 152(1)
  01bf8e4  std 27, 144(1)
  01bf8e8  lhz 4, 640(30)
  01bf8ec  ori 28, 8, 0
  01bf8f0  std 31, 176(1)
  01bf8f4  extsh 27, 5
  01bf8f8  std 26, 136(1)
  01bf8fc  ori 31, 6, 0
  01bf900  bf 2, 0x1bf918
  01bf904  lfs 2, 16(3)
  01bf908  lfs 3, 20(3)
  01bf90c  lfs 4, 24(3)
  01bf910  lfs 5, 28(3)
  01bf914  b 0x1bf928
  01bf918  lfs 2, 0(31)
  01bf91c  lfs 3, 4(31)
  01bf920  lfs 4, 8(31)
  01bf924  lfs 5, 12(31)
  01bf928  extsh 3, 4
  01bf92c  stfs 2, 112(1)
  01bf930  stfs 3, 116(1)
  01bf934  cmpwi 3, -1
  01bf938  stfs 4, 120(1)
  01bf93c  stfs 5, 124(1)
  01bf940  bf 2, 0x1bf9e0
  01bf944  bf 5, 0x1bf9e0
  01bf948  lis 3, 28
  01bf94c  li 4, -1
  01bf950  addi 3, 3, -1888
  01bf954  subc 4, 4, 28
  01bf958  lis 5, -32768
  01bf95c  cntlzw 4, 4
  01bf960  ori 5, 5, 16512
  01bf964  lfs 2, 0(3)
  01bf968  lfs 3, 4(3)
  01bf96c  sldi 4, 4, 58
  01bf970  fsub 4, 2, 1
  01bf974  subc 5, 5, 28
  01bf978  fsub 5, 1, 2
  01bf97c  li 26, 0
  01bf980  lfs 2, 8(3)
  01bf984  sradi 3, 4, 63
  01bf988  and 4, 3, 5
  01bf98c  addic 3, 1, 112
  01bf990  addc 28, 28, 4
  01bf994  ori 6, 28, 0
  01bf998  fsel 3, 4, 3, 1
  01bf99c  fsel 31, 5, 3, 1
  01bf9a0  fmr 1, 31
  01bf9a4  bl 0xda308
  01bf9a8  nop
  01bf9ac  li 5, -1
  01bf9b0  ori 4, 3, 0
  01bf9b4  sth 26, 644(30)
  01bf9b8  subc 3, 5, 29
  01bf9bc  fmr 1, 31
  01bf9c0  li 5, 0
  01bf9c4  cntlzw 3, 3
  01bf9c8  subc 5, 5, 29
  01bf9cc  sth 4, 640(30)
  01bf9d0  sldi 3, 3, 58
  01bf9d4  sradi 3, 3, 63
  01bf9d8  and 3, 3, 5
  01bf9dc  addc 29, 29, 3
  01bf9e0  extsh 4, 4
  01bf9e4  cmpwi 4, -1
  01bf9e8  bt 2, 0x1bfb18
  01bf9ec  lis 3, 162
  01bf9f0  sldi 4, 4, 5
  01bf9f4  addic 3, 3, -8448
  01bf9f8  addc 26, 3, 4
  01bf9fc  lhz 3, 642(30)
  01bfa00  clrldi 26, 26, 32
  01bfa04  extsh 3, 3
  01bfa08  cmpw 3, 27
  01bfa0c  bf 2, 0x1bfa24
  01bfa10  cmpwi 27, -1
  01bfa14  bt 2, 0x1bfa24
  01bfa18  lhz 3, 644(30)
  01bfa1c  cmpwi 3, 0
  01bfa20  bf 2, 0x1bfa38
  01bfa24  cmpwi 25, -1
  01bfa28  bt 2, 0x1bfa68
  01bfa2c  sth 25, 644(30)
  01bfa30  sth 25, 646(30)
  01bfa34  b 0x1bfa68
  01bfa38  cmpwi 25, -1
  01bfa3c  bt 2, 0x1bfa68
  01bfa40  extsh 4, 3
  01bfa44  lhz 3, 646(30)
  01bfa48  extsh 3, 3
  01bfa4c  sldi 5, 3, 3
  01bfa50  subc 3, 5, 3
  01bfa54  srawi 3, 3, 3
  01bfa58  addze 3, 3
  01bfa5c  cmpw 4, 3
  01bfa60  bt 1, 0x1bfa68
  01bfa64  sth 3, 644(30)
  01bfa68  lis 3, 28
  01bfa6c  cmpwi 1, 28, -1
  01bfa70  addi 3, 3, -1888
  01bfa74  lfs 2, 0(3)
  01bfa78  fcmpu 0, 1, 2
  01bfa7c  bt 2, 0x1bfa84
  01bfa80  stfs 1, 28(26)
  01bfa84  bt 6, 0x1bfae0
  01bfa88  clrlwi 3, 28, 24
  01bfa8c  stw 28, 648(30)
  01bfa90  bl 0x502730
  01bfa94  nop
  01bfa98  lis 3, 28
  01bfa9c  addi 3, 3, -1888
  01bfaa0  lfs 2, 12(3)
  01bfaa4  srawi 3, 28, 8
  01bfaa8  fmr 31, 2
  01bfaac  clrlwi 3, 3, 24
  01bfab0  fmuls 1, 1, 31
  01bfab4  stfs 1, 0(26)
  01bfab8  bl 0x502730
  01bfabc  nop
  01bfac0  fmuls 1, 1, 31
  01bfac4  srawi 3, 28, 16
  01bfac8  clrlwi 3, 3, 24
  01bfacc  stfs 1, 4(26)
  01bfad0  bl 0x502730
  01bfad4  nop
  01bfad8  fmuls 1, 1, 31
  01bfadc  stfs 1, 8(26)
  01bfae0  cmpwi 29, -1
  01bfae4  bt 2, 0x1bfaec
  01bfae8  stw 29, 652(30)
  01bfaec  cmpwi 31, 0
  01bfaf0  bt 2, 0x1bfb0c
  01bfaf4  lfs 1, 0(31)
  01bfaf8  stfs 1, 16(26)
  01bfafc  lfs 1, 4(31)
  01bfb00  stfs 1, 20(26)
  01bfb04  lfs 1, 8(31)
  01bfb08  stfs 1, 24(26)
  01bfb0c  cmpwi 27, -1
  01bfb10  bt 2, 0x1bfb18
  01bfb14  sth 27, 642(30)
  01bfb18  ld 0, 208(1)
  01bfb1c  mtlr 0
  01bfb20  lfd 31, 184(1)
  01bfb24  ld 25, 128(1)
  01bfb28  ld 26, 136(1)
  01bfb2c  ld 27, 144(1)
  01bfb30  ld 28, 152(1)
  01bfb34  ld 29, 160(1)
  01bfb38  ld 30, 168(1)
  01bfb3c  ld 31, 176(1)
  01bfb40  addi 1, 1, 192
  01bfb44  blr

M1106_001bfb58:   # 0x1bfb58, 0x74 bytes
  01bfb58  lis 4, 149
  01bfb5c  lfs 1, 20(3)
  01bfb60  addic 4, 4, 5056
  01bfb64  lfs 2, 324(4)
  01bfb68  lfs 3, 16(3)
  01bfb6c  fsubs 1, 1, 2
  01bfb70  lfs 2, 320(4)
  01bfb74  fsubs 2, 3, 2
  01bfb78  lfs 3, 24(3)
  01bfb7c  lfs 4, 328(4)
  01bfb80  fsubs 3, 3, 4
  01bfb84  fmuls 1, 1, 1
  01bfb88  lis 3, 28
  01bfb8c  addi 3, 3, -1208
  01bfb90  fmadds 1, 2, 2, 1
  01bfb94  lfs 2, 0(3)
  01bfb98  fmadds 1, 3, 3, 1
  01bfb9c  lfs 3, 4(3)
  01bfba0  lfs 4, 8(3)
  01bfba4  li 3, 20
  01bfba8  fsqrts 1, 1
  01bfbac  stw 3, 360(4)
  01bfbb0  fsub 5, 2, 1
  01bfbb4  fsel 1, 5, 1, 2
  01bfbb8  fsubs 1, 2, 1
  01bfbbc  fmuls 1, 1, 3
  01bfbc0  fmuls 1, 1, 4
  01bfbc4  stfs 1, 352(4)
  01bfbc8  blr

M1106_001bfbd8:   # 0x1bfbd8, 0x1c0 bytes
  01bfbd8  stdu 1, -144(1)
  01bfbdc  mflr 0
  01bfbe0  std 0, 160(1)
  01bfbe4  stfd 30, 128(1)
  01bfbe8  stfd 31, 136(1)
  01bfbec  std 31, 120(1)
  01bfbf0  ori 31, 3, 0
  01bfbf4  std 30, 112(1)
  01bfbf8  addic 3, 31, 644
  01bfbfc  bl 0x4fffb4
  01bfc00  nop
  01bfc04  cmpwi 3, 0
  01bfc08  bt 2, 0x1bfc34
  01bfc0c  lhz 3, 640(31)
  01bfc10  extsh 3, 3
  01bfc14  cmpwi 3, -1
  01bfc18  bt 2, 0x1bfd78
  01bfc1c  bl 0xda9e8
  01bfc20  nop
  01bfc24  li 3, -1
  01bfc28  sth 3, 640(31)
  01bfc2c  sth 3, 642(31)
  01bfc30  b 0x1bfd78
  01bfc34  lhz 3, 640(31)
  01bfc38  extsh 3, 3
  01bfc3c  cmpwi 3, -1
  01bfc40  bt 2, 0x1bfd78
  01bfc44  lhz 4, 646(31)
  01bfc48  lis 3, 28
  01bfc4c  lhz 5, 644(31)
  01bfc50  extsh 4, 4
  01bfc54  addi 3, 3, -1076
  01bfc58  sldi 6, 4, 3
  01bfc5c  subc 4, 6, 4
  01bfc60  srawi 4, 4, 3
  01bfc64  lfs 31, 0(3)
  01bfc68  extsh 3, 5
  01bfc6c  addze 30, 4
  01bfc70  extsw 30, 30
  01bfc74  cmpw 3, 30
  01bfc78  bf 1, 0x1bfccc
  01bfc7c  subc 3, 3, 30
  01bfc80  extsw 3, 3
  01bfc84  bl 0x502730
  01bfc88  nop
  01bfc8c  fmr 30, 1
  01bfc90  lhz 3, 646(31)
  01bfc94  extsh 3, 3
  01bfc98  subc 3, 3, 30
  01bfc9c  extsw 3, 3
  01bfca0  bl 0x502730
  01bfca4  nop
  01bfca8  fdivs 1, 30, 1
  01bfcac  li 3, 0
  01bfcb0  lwz 4, 648(31)
  01bfcb4  extsw 4, 4
  01bfcb8  fsubs 1, 31, 1
  01bfcbc  bl 0x5027bc
  01bfcc0  nop
  01bfcc4  ori 30, 3, 0
  01bfcc8  b 0x1bfd08
  01bfccc  bl 0x502730
  01bfcd0  nop
  01bfcd4  fmr 30, 1
  01bfcd8  ori 3, 30, 0
  01bfcdc  bl 0x502730
  01bfce0  nop
  01bfce4  fdivs 1, 30, 1
  01bfce8  lwz 3, 648(31)
  01bfcec  lwz 4, 652(31)
  01bfcf0  extsw 3, 3
  01bfcf4  extsw 4, 4
  01bfcf8  fsubs 1, 31, 1
  01bfcfc  bl 0x5027bc
  01bfd00  nop
  01bfd04  ori 30, 3, 0
  01bfd08  lhz 5, 640(31)
  01bfd0c  lis 3, 162
  01bfd10  extsh 5, 5
  01bfd14  addic 4, 3, -8448
  01bfd18  sldi 5, 5, 5
  01bfd1c  clrlwi 3, 30, 24
  01bfd20  addc 4, 4, 5
  01bfd24  clrldi 31, 4, 32
  01bfd28  bl 0x502730
  01bfd2c  nop
  01bfd30  lis 3, 28
  01bfd34  addi 3, 3, -1076
  01bfd38  lfs 2, 4(3)
  01bfd3c  srawi 3, 30, 8
  01bfd40  fmr 31, 2
  01bfd44  clrlwi 3, 3, 24
  01bfd48  fmuls 1, 1, 31
  01bfd4c  stfs 1, 0(31)
  01bfd50  bl 0x502730
  01bfd54  nop
  01bfd58  fmuls 1, 1, 31
  01bfd5c  srawi 3, 30, 16
  01bfd60  clrlwi 3, 3, 24
  01bfd64  stfs 1, 4(31)
  01bfd68  bl 0x502730
  01bfd6c  nop
  01bfd70  fmuls 1, 1, 31
  01bfd74  stfs 1, 8(31)
  01bfd78  ld 0, 160(1)
  01bfd7c  mtlr 0
  01bfd80  lfd 30, 128(1)
  01bfd84  lfd 31, 136(1)
  01bfd88  ld 30, 112(1)
  01bfd8c  ld 31, 120(1)
  01bfd90  addi 1, 1, 144
  01bfd94  blr

M1106_001bfdb8:   # 0x1bfdb8, 0x2b0 bytes
  01bfdb8  stdu 1, -208(1)
  01bfdbc  mflr 0
  01bfdc0  std 0, 224(1)
  01bfdc4  std 30, 192(1)
  01bfdc8  std 29, 184(1)
  01bfdcc  ori 30, 4, 0
  01bfdd0  ori 29, 3, 0
  01bfdd4  std 31, 200(1)
  01bfdd8  addic 3, 30, 352
  01bfddc  std 28, 176(1)
  01bfde0  std 27, 168(1)
  01bfde4  ori 31, 5, 0
  01bfde8  bl 0x4fff60
  01bfdec  nop
  01bfdf0  cmpwi 3, 0
  01bfdf4  bt 2, 0x1c0040
  01bfdf8  lwz 4, 356(30)
  01bfdfc  addic 5, 1, 112
  01bfe00  ori 3, 29, 0
  01bfe04  clrlwi 4, 4, 31
  01bfe08  bl 0xf1114
  01bfe0c  nop
  01bfe10  lfs 1, 4(31)
  01bfe14  lfs 2, 116(1)
  01bfe18  lfs 3, 0(31)
  01bfe1c  fsubs 1, 1, 2
  01bfe20  lfs 2, 112(1)
  01bfe24  fsubs 2, 3, 2
  01bfe28  lis 3, 28
  01bfe2c  addi 3, 3, -616
  01bfe30  fmuls 3, 1, 1
  01bfe34  stfs 2, 128(1)
  01bfe38  stfs 1, 132(1)
  01bfe3c  fmadds 6, 2, 2, 3
  01bfe40  lfs 3, 12(31)
  01bfe44  stfs 3, 140(1)
  01bfe48  lfs 5, 0(3)
  01bfe4c  lfs 4, 8(31)
  01bfe50  lfs 3, 120(1)
  01bfe54  fsqrts 6, 6
  01bfe58  fcmpu 0, 6, 5
  01bfe5c  cror 6, 0, 2
  01bfe60  bt 6, 0x1bfe78
  01bfe64  fdivs 5, 5, 6
  01bfe68  fmuls 2, 2, 5
  01bfe6c  fmuls 1, 1, 5
  01bfe70  stfs 2, 128(1)
  01bfe74  stfs 1, 132(1)
  01bfe78  fsubs 4, 4, 3
  01bfe7c  lis 3, 28
  01bfe80  addi 3, 3, -616
  01bfe84  lfs 3, 4(3)
  01bfe88  fadds 4, 4, 3
  01bfe8c  stfs 4, 136(1)
  01bfe90  lfs 3, 8(3)
  01bfe94  fcmpu 0, 4, 3
  01bfe98  cror 6, 0, 2
  01bfe9c  bt 6, 0x1bfeac
  01bfea0  li 3, 0
  01bfea4  fmr 4, 3
  01bfea8  stw 3, 136(1)
  01bfeac  fmuls 5, 1, 1
  01bfeb0  lis 3, 28
  01bfeb4  addi 31, 3, -616
  01bfeb8  lis 3, 114
  01bfebc  lfs 6, 12(31)
  01bfec0  fmadds 5, 2, 2, 5
  01bfec4  lfs 7, -3052(3)
  01bfec8  fmuls 6, 7, 6
  01bfecc  fmadds 5, 4, 4, 5
  01bfed0  addic 28, 1, 112
  01bfed4  addic 4, 1, 128
  01bfed8  ori 3, 28, 0
  01bfedc  ori 5, 29, 0
  01bfee0  fsqrts 5, 5
  01bfee4  fdivs 6, 6, 5
  01bfee8  fsub 7, 3, 5
  01bfeec  fsub 8, 3, 5
  01bfef0  fsub 9, 3, 5
  01bfef4  fsub 10, 5, 3
  01bfef8  fsub 11, 5, 3
  01bfefc  fsub 5, 5, 3
  01bff00  fmuls 2, 2, 6
  01bff04  fmuls 1, 1, 6
  01bff08  fmuls 4, 4, 6
  01bff0c  fsel 6, 7, 3, 2
  01bff10  fsel 7, 8, 3, 1
  01bff14  fsel 3, 9, 3, 4
  01bff18  fsel 2, 10, 6, 2
  01bff1c  fsel 1, 11, 7, 1
  01bff20  fsel 3, 5, 3, 4
  01bff24  stfs 2, 128(1)
  01bff28  stfs 1, 132(1)
  01bff2c  stfs 3, 136(1)
  01bff30  bl 0x1a1f28
  01bff34  nop
  01bff38  li 3, 0
  01bff3c  li 4, 0
  01bff40  ori 5, 29, 0
  01bff44  bl 0x15d12c
  01bff48  nop
  01bff4c  lis 27, 114
  01bff50  lfs 1, 16(31)
  01bff54  lis 8, -32768
  01bff58  ori 3, 29, 0
  01bff5c  ori 4, 30, 0
  01bff60  li 5, 0
  01bff64  lfs 2, -3056(27)
  01bff68  ori 6, 28, 0
  01bff6c  ori 8, 8, 24831
  01bff70  fmuls 1, 2, 1
  01bff74  li 9, 0
  01bff78  fctiwz 1, 1
  01bff7c  stfd 1, 144(1)
  01bff80  lwz 7, 148(1)
  01bff84  lfs 1, 20(31)
  01bff88  extsh 7, 7
  01bff8c  bl 0x1bf8b0
  01bff90  li 3, 24
  01bff94  vspltisw 2, -1
  01bff98  li 4, -3056
  01bff9c  vslw 2, 2, 2
  01bffa0  lvlx 3, 3, 31
  01bffa4  lvlx 4, 4, 27
  01bffa8  vspltw 3, 3, 0
  01bffac  li 3, 352
  01bffb0  lwz 4, 356(30)
  01bffb4  addic 4, 4, 1
  01bffb8  vmaddfp 2, 4, 3, 2
  01bffbc  cmpwi 4, 20
  01bffc0  vctsxs 2, 2, 0
  01bffc4  vspltw 2, 2, 0
  01bffc8  stvewx 2, 3, 30
  01bffcc  stw 4, 356(30)
  01bffd0  bf 1, 0x1c0040
  01bffd4  lis 3, 28
  01bffd8  li 4, 28
  01bffdc  vspltisw 2, -1
  01bffe0  addi 5, 3, -616
  01bffe4  lis 3, 114
  01bffe8  li 6, -3056
  01bffec  vslw 2, 2, 2
  01bfff0  lvlx 3, 4, 5
  01bfff4  li 4, 408
  01bfff8  vspltw 3, 3, 0
  01bfffc  lvlx 4, 6, 3
  01c0000  li 6, 16
  01c0004  vmaddfp 2, 4, 3, 2
  01c0008  vspltisw 3, -1
  01c000c  li 7, 352
  01c0010  li 3, 1
  01c0014  vslw 3, 3, 3
  01c0018  vctsxs 2, 2, 0
  01c001c  vsplth 2, 2, 1
  01c0020  stvehx 2, 4, 30
  01c0024  lvlx 2, 6, 5
  01c0028  vspltw 2, 2, 0
  01c002c  vmaddfp 2, 4, 2, 3
  01c0030  vctsxs 2, 2, 0
  01c0034  vspltw 2, 2, 0
  01c0038  stvewx 2, 7, 30
  01c003c  b 0x1c0044
  01c0040  lbz 3, 32(29)
  01c0044  ld 0, 224(1)
  01c0048  mtlr 0
  01c004c  ld 27, 168(1)
  01c0050  ld 28, 176(1)
  01c0054  ld 29, 184(1)
  01c0058  ld 30, 192(1)
  01c005c  ld 31, 200(1)
  01c0060  addi 1, 1, 208
  01c0064  blr

M1106_001c00b8:   # 0x1c00b8, 0x948 bytes
  01c00b8  stdu 1, -560(1)
  01c00bc  mflr 0
  01c00c0  std 0, 576(1)
  01c00c4  stfd 16, 432(1)
  01c00c8  stfd 17, 440(1)
  01c00cc  stfd 18, 448(1)
  01c00d0  stfd 19, 456(1)
  01c00d4  stfd 20, 464(1)
  01c00d8  stfd 21, 472(1)
  01c00dc  stfd 22, 480(1)
  01c00e0  stfd 23, 488(1)
  01c00e4  stfd 24, 496(1)
  01c00e8  stfd 25, 504(1)
  01c00ec  stfd 26, 512(1)
  01c00f0  stfd 27, 520(1)
  01c00f4  stfd 28, 528(1)
  01c00f8  stfd 29, 536(1)
  01c00fc  stfd 30, 544(1)
  01c0100  stfd 31, 552(1)
  01c0104  std 31, 424(1)
  01c0108  ori 31, 3, 0
  01c010c  lis 3, 161
  01c0110  std 29, 408(1)
  01c0114  std 28, 400(1)
  01c0118  lis 4, 28
  01c011c  li 29, 1
  01c0120  std 30, 416(1)
  01c0124  addi 28, 4, 104
  01c0128  lwz 30, 120(31)
  01c012c  lwz 3, 1808(3)
  01c0130  std 27, 392(1)
  01c0134  std 26, 384(1)
  01c0138  std 25, 376(1)
  01c013c  extsw 3, 3
  01c0140  bl 0x502730
  01c0144  nop
  01c0148  fmr 31, 1
  01c014c  lfs 1, 4(28)
  01c0150  lfs 30, 320(30)
  01c0154  lfs 29, 324(30)
  01c0158  lfs 2, 0(28)
  01c015c  lfs 27, 328(30)
  01c0160  lfs 28, 332(30)
  01c0164  fmr 26, 2
  01c0168  fmuls 1, 31, 1
  01c016c  bl 0x10de78
  01c0170  nop
  01c0174  lfs 2, 8(28)
  01c0178  lfs 25, 12(28)
  01c017c  fadds 1, 1, 2
  01c0180  lfs 24, 16(28)
  01c0184  lfs 23, 20(28)
  01c0188  lfs 22, 24(28)
  01c018c  lfs 21, 28(28)
  01c0190  lfs 20, 32(28)
  01c0194  fsubs 2, 25, 1
  01c0198  fsubs 3, 24, 1
  01c019c  fsub 4, 1, 2
  01c01a0  fsel 1, 4, 2, 1
  01c01a4  lfs 2, 36(28)
  01c01a8  fsub 4, 3, 1
  01c01ac  fsel 1, 4, 3, 1
  01c01b0  fmuls 3, 1, 1
  01c01b4  fmuls 4, 3, 1
  01c01b8  fmuls 5, 3, 4
  01c01bc  fmadds 1, 4, 23, 1
  01c01c0  fmuls 4, 3, 5
  01c01c4  fmadds 1, 5, 22, 1
  01c01c8  fmuls 3, 3, 4
  01c01cc  fmadds 1, 4, 21, 1
  01c01d0  fmadds 1, 3, 20, 1
  01c01d4  fmuls 1, 1, 2
  01c01d8  fmadds 1, 31, 26, 1
  01c01dc  bl 0x10de78
  01c01e0  nop
  01c01e4  fsubs 2, 25, 1
  01c01e8  fsubs 3, 24, 1
  01c01ec  addic 27, 1, 144
  01c01f0  ori 3, 31, 0
  01c01f4  li 4, 2
  01c01f8  ori 5, 27, 0
  01c01fc  fsub 4, 1, 2
  01c0200  fsel 1, 4, 2, 1
  01c0204  fsub 2, 3, 1
  01c0208  fsel 1, 2, 3, 1
  01c020c  fmuls 2, 1, 1
  01c0210  fmuls 3, 2, 1
  01c0214  fmuls 4, 2, 3
  01c0218  fmadds 1, 3, 23, 1
  01c021c  fmuls 3, 2, 4
  01c0220  fmadds 1, 4, 22, 1
  01c0224  fmuls 2, 2, 3
  01c0228  fmadds 1, 3, 21, 1
  01c022c  fmadds 1, 2, 20, 1
  01c0230  fadds 31, 30, 1
  01c0234  bl 0xf1114
  01c0238  nop
  01c023c  lfs 1, 148(1)
  01c0240  lfs 2, 144(1)
  01c0244  fsubs 1, 29, 1
  01c0248  lfs 3, 152(1)
  01c024c  fsubs 2, 31, 2
  01c0250  fsubs 3, 27, 3
  01c0254  lfs 5, 44(28)
  01c0258  lfs 6, 40(28)
  01c025c  fmuls 4, 1, 1
  01c0260  stfs 28, 140(1)
  01c0264  fmr 28, 6
  01c0268  ori 3, 27, 0
  01c026c  addic 4, 1, 128
  01c0270  li 5, 2
  01c0274  fmadds 4, 2, 2, 4
  01c0278  ori 6, 31, 0
  01c027c  li 7, 0
  01c0280  fmadds 4, 3, 3, 4
  01c0284  fsqrts 4, 4
  01c0288  fdivs 5, 5, 4
  01c028c  fsub 6, 28, 4
  01c0290  fsub 7, 28, 4
  01c0294  fsub 8, 28, 4
  01c0298  fsub 9, 4, 28
  01c029c  fsub 10, 4, 28
  01c02a0  fsub 4, 4, 28
  01c02a4  fmuls 3, 3, 5
  01c02a8  fmuls 1, 1, 5
  01c02ac  fmuls 2, 2, 5
  01c02b0  fsel 5, 6, 28, 3
  01c02b4  fsel 6, 7, 28, 1
  01c02b8  fsel 7, 8, 28, 2
  01c02bc  fsel 3, 9, 5, 3
  01c02c0  fsel 1, 10, 6, 1
  01c02c4  fsel 2, 4, 7, 2
  01c02c8  fadds 3, 3, 27
  01c02cc  fadds 1, 1, 29
  01c02d0  fadds 2, 2, 31
  01c02d4  stfs 3, 136(1)
  01c02d8  stfs 1, 132(1)
  01c02dc  stfs 2, 128(1)
  01c02e0  bl 0x57820
  01c02e4  nop
  01c02e8  lfs 31, 144(1)
  01c02ec  cmpwi 3, 0
  01c02f0  lfs 1, 148(1)
  01c02f4  lfs 2, 152(1)
  01c02f8  bt 2, 0x1c0328
  01c02fc  lis 3, 161
  01c0300  addic 3, 3, 2368
  01c0304  lfs 3, 32(3)
  01c0308  lfs 30, 36(3)
  01c030c  stfs 3, 128(1)
  01c0310  lfs 29, 40(3)
  01c0314  stfs 30, 132(1)
  01c0318  lfs 4, 44(3)
  01c031c  stfs 29, 136(1)
  01c0320  stfs 4, 140(1)
  01c0324  b 0x1c0338
  01c0328  lfs 3, 128(1)
  01c032c  lfs 30, 132(1)
  01c0330  li 29, 0
  01c0334  lfs 29, 136(1)
  01c0338  fsubs 4, 31, 3
  01c033c  lis 3, 149
  01c0340  fsubs 2, 2, 29
  01c0344  fsubs 1, 1, 30
  01c0348  addic 3, 3, 5056
  01c034c  lfs 5, 856(3)
  01c0350  lfs 6, 852(3)
  01c0354  fmuls 8, 4, 5
  01c0358  lfs 7, 848(3)
  01c035c  fmuls 9, 2, 6
  01c0360  fmuls 10, 1, 7
  01c0364  lis 3, 28
  01c0368  addi 3, 3, 104
  01c036c  fmsubs 2, 2, 7, 8
  01c0370  fmsubs 1, 1, 5, 9
  01c0374  fmsubs 4, 4, 6, 10
  01c0378  lfs 6, 48(3)
  01c037c  fmuls 5, 2, 2
  01c0380  cmpwi 29, 0
  01c0384  fmadds 5, 1, 1, 5
  01c0388  fmadds 5, 4, 4, 5
  01c038c  fsqrts 5, 5
  01c0390  fdivs 6, 6, 5
  01c0394  fsub 7, 28, 5
  01c0398  fsub 8, 28, 5
  01c039c  fsub 9, 28, 5
  01c03a0  fsub 21, 5, 28
  01c03a4  fsub 20, 5, 28
  01c03a8  fsub 19, 5, 28
  01c03ac  fmuls 4, 4, 6
  01c03b0  fmuls 2, 2, 6
  01c03b4  fmuls 1, 1, 6
  01c03b8  fsel 5, 7, 28, 4
  01c03bc  fsel 6, 8, 28, 2
  01c03c0  fsel 7, 9, 28, 1
  01c03c4  fsel 21, 21, 5, 4
  01c03c8  fsel 20, 20, 6, 2
  01c03cc  fsel 19, 19, 7, 1
  01c03d0  fadds 29, 21, 29
  01c03d4  fadds 30, 20, 30
  01c03d8  fadds 31, 19, 3
  01c03dc  bt 2, 0x1c0834
  01c03e0  bl 0x5c8318
  01c03e4  nop
  01c03e8  clrlwi 3, 3, 31
  01c03ec  lis 28, 114
  01c03f0  addic 3, 3, 45
  01c03f4  extsw 3, 3
  01c03f8  std 3, 352(1)
  01c03fc  lis 3, 28
  01c0400  addi 29, 3, 104
  01c0404  lfs 27, 52(29)
  01c0408  lfs 1, -3056(28)
  01c040c  lfd 2, 352(1)
  01c0410  fcfid 2, 2
  01c0414  frsp 2, 2
  01c0418  fadds 2, 2, 27
  01c041c  fmuls 1, 1, 2
  01c0420  fctiwz 1, 1
  01c0424  stfd 1, 352(1)
  01c0428  lwz 3, 356(1)
  01c042c  clrlwi 27, 3, 24
  01c0430  bl 0x5c8318
  01c0434  nop
  01c0438  clrlwi 3, 3, 29
  01c043c  addic 3, 3, 55
  01c0440  extsw 3, 3
  01c0444  std 3, 352(1)
  01c0448  lfs 1, -3056(28)
  01c044c  lfd 2, 352(1)
  01c0450  fcfid 2, 2
  01c0454  frsp 2, 2
  01c0458  fadds 2, 2, 27
  01c045c  fmuls 1, 1, 2
  01c0460  fctiwz 1, 1
  01c0464  stfd 1, 352(1)
  01c0468  lwz 3, 356(1)
  01c046c  clrlwi 26, 3, 24
  01c0470  bl 0x5c8318
  01c0474  nop
  01c0478  clrlwi 3, 3, 30
  01c047c  addic 3, 3, 13
  01c0480  extsw 3, 3
  01c0484  li 4, 0
  01c0488  std 3, 352(1)
  01c048c  lfs 1, -3056(28)
  01c0490  lfd 2, 352(1)
  01c0494  fcfid 2, 2
  01c0498  addic 3, 1, 128
  01c049c  ori 5, 27, 0
  01c04a0  ori 6, 26, 0
  01c04a4  li 7, 1
  01c04a8  ori 9, 31, 0
  01c04ac  frsp 2, 2
  01c04b0  fadds 2, 2, 27
  01c04b4  fmuls 1, 1, 2
  01c04b8  fctiwz 1, 1
  01c04bc  stfd 1, 352(1)
  01c04c0  lfs 26, 56(29)
  01c04c4  lwz 8, 356(1)
  01c04c8  fmr 1, 26
  01c04cc  clrlwi 8, 8, 24
  01c04d0  fmr 2, 26
  01c04d4  bl 0x130810
  01c04d8  nop
  01c04dc  lwz 3, 348(30)
  01c04e0  cmpwi 3, 0
  01c04e4  bt 2, 0x1c0814
  01c04e8  lfs 1, 132(1)
  01c04ec  lfs 2, 340(30)
  01c04f0  lfs 3, 128(1)
  01c04f4  fsubs 1, 1, 2
  01c04f8  lfs 2, 336(30)
  01c04fc  lfs 4, 136(1)
  01c0500  lfs 5, 344(30)
  01c0504  fsubs 3, 3, 2
  01c0508  fsubs 4, 4, 5
  01c050c  lis 3, 28
  01c0510  fmuls 5, 1, 1
  01c0514  addi 3, 3, 104
  01c0518  lis 28, 161
  01c051c  lfs 6, 60(3)
  01c0520  stfs 2, 160(1)
  01c0524  fmadds 5, 3, 3, 5
  01c0528  lfs 2, 340(30)
  01c052c  stfs 2, 164(1)
  01c0530  lfs 2, 344(30)
  01c0534  stfs 2, 168(1)
  01c0538  lfs 2, 348(30)
  01c053c  fmadds 5, 4, 4, 5
  01c0540  stfs 2, 172(1)
  01c0544  lfs 25, 64(3)
  01c0548  addic 28, 28, 2368
  01c054c  lfs 24, 68(3)
  01c0550  li 29, 0
  01c0554  lfs 23, 72(3)
  01c0558  lfs 22, 76(3)
  01c055c  fsqrts 5, 5
  01c0560  fdivs 2, 6, 5
  01c0564  fsub 6, 28, 5
  01c0568  fsub 7, 28, 5
  01c056c  fsub 8, 28, 5
  01c0570  fsub 18, 5, 28
  01c0574  fsub 17, 5, 28
  01c0578  fsub 16, 5, 28
  01c057c  fmuls 4, 4, 2
  01c0580  fmuls 1, 1, 2
  01c0584  fmuls 2, 3, 2
  01c0588  fsel 3, 6, 28, 4
  01c058c  fsel 5, 7, 28, 1
  01c0590  fsel 6, 8, 28, 2
  01c0594  fsel 18, 18, 3, 4
  01c0598  fsel 17, 17, 5, 1
  01c059c  fsel 16, 16, 6, 2
  01c05a0  lfs 1, 164(1)
  01c05a4  lfs 2, 160(1)
  01c05a8  fadds 1, 1, 17
  01c05ac  lfs 3, 148(1)
  01c05b0  fadds 2, 2, 16
  01c05b4  lfs 4, 168(1)
  01c05b8  lfs 5, 144(1)
  01c05bc  fadds 4, 4, 18
  01c05c0  lfs 6, 152(1)
  01c05c4  fsubs 3, 1, 3
  01c05c8  fsubs 5, 2, 5
  01c05cc  fsubs 6, 4, 6
  01c05d0  stfs 2, 160(1)
  01c05d4  stfs 1, 164(1)
  01c05d8  stfs 4, 168(1)
  01c05dc  fmuls 7, 3, 3
  01c05e0  lfs 8, 172(1)
  01c05e4  stfs 8, 188(1)
  01c05e8  stfs 8, 204(1)
  01c05ec  fmadds 7, 5, 5, 7
  01c05f0  addic 3, 1, 176
  01c05f4  addic 4, 1, 192
  01c05f8  li 5, 2
  01c05fc  ori 6, 31, 0
  01c0600  fmadds 7, 6, 6, 7
  01c0604  li 7, 0
  01c0608  fsqrts 7, 7
  01c060c  fdivs 8, 25, 7
  01c0610  fsub 9, 28, 7
  01c0614  fsub 10, 28, 7
  01c0618  fsub 11, 28, 7
  01c061c  fsub 12, 7, 28
  01c0620  fsub 13, 7, 28
  01c0624  fsub 7, 7, 28
  01c0628  fmuls 6, 6, 8
  01c062c  fmuls 3, 3, 8
  01c0630  fmuls 5, 5, 8
  01c0634  fsel 8, 9, 28, 6
  01c0638  fsel 9, 10, 28, 3
  01c063c  fsel 10, 11, 28, 5
  01c0640  fsel 6, 12, 8, 6
  01c0644  fsel 3, 13, 9, 3
  01c0648  fsel 5, 7, 10, 5
  01c064c  fsubs 7, 4, 6
  01c0650  fsubs 8, 1, 3
  01c0654  fsubs 9, 2, 5
  01c0658  fadds 2, 2, 5
  01c065c  fadds 1, 1, 3
  01c0660  fadds 3, 4, 6
  01c0664  stfs 7, 184(1)
  01c0668  stfs 8, 180(1)
  01c066c  stfs 9, 176(1)
  01c0670  stfs 2, 192(1)
  01c0674  stfs 1, 196(1)
  01c0678  stfs 3, 200(1)
  01c067c  bl 0x57820
  01c0680  nop
  01c0684  cmpwi 3, 0
  01c0688  bt 2, 0x1c06ac
  01c068c  lfs 1, 32(28)
  01c0690  lfs 2, 36(28)
  01c0694  stfs 1, 160(1)
  01c0698  lfs 1, 40(28)
  01c069c  stfs 2, 164(1)
  01c06a0  lfs 2, 44(28)
  01c06a4  stfs 1, 168(1)
  01c06a8  stfs 2, 172(1)
  01c06ac  cmpwi 29, 2
  01c06b0  bf 2, 0x1c07a4
  01c06b4  bl 0x5c8318
  01c06b8  nop
  01c06bc  clrlwi 3, 3, 31
  01c06c0  lis 27, 114
  01c06c4  addic 3, 3, 45
  01c06c8  extsw 3, 3
  01c06cc  std 3, 352(1)
  01c06d0  lfs 1, -3056(27)
  01c06d4  lfd 2, 352(1)
  01c06d8  fcfid 2, 2
  01c06dc  frsp 2, 2
  01c06e0  fadds 2, 2, 27
  01c06e4  fmuls 1, 1, 2
  01c06e8  fctiwz 1, 1
  01c06ec  stfd 1, 352(1)
  01c06f0  lwz 3, 356(1)
  01c06f4  clrlwi 26, 3, 24
  01c06f8  bl 0x5c8318
  01c06fc  nop
  01c0700  clrlwi 3, 3, 29
  01c0704  addic 3, 3, 55
  01c0708  extsw 3, 3
  01c070c  std 3, 352(1)
  01c0710  lfs 1, -3056(27)
  01c0714  lfd 2, 352(1)
  01c0718  fcfid 2, 2
  01c071c  frsp 2, 2
  01c0720  fadds 2, 2, 27
  01c0724  fmuls 1, 1, 2
  01c0728  fctiwz 1, 1
  01c072c  stfd 1, 352(1)
  01c0730  lwz 3, 356(1)
  01c0734  clrlwi 25, 3, 24
  01c0738  bl 0x5c8318
  01c073c  nop
  01c0740  clrlwi 3, 3, 30
  01c0744  addic 3, 3, 13
  01c0748  extsw 3, 3
  01c074c  li 4, 0
  01c0750  fmr 1, 26
  01c0754  ori 5, 26, 0
  01c0758  fmr 2, 26
  01c075c  std 3, 352(1)
  01c0760  lfs 3, -3056(27)
  01c0764  lfd 4, 352(1)
  01c0768  addic 3, 1, 160
  01c076c  fcfid 4, 4
  01c0770  ori 6, 25, 0
  01c0774  li 7, 1
  01c0778  ori 9, 31, 0
  01c077c  frsp 4, 4
  01c0780  fadds 4, 4, 27
  01c0784  fmuls 3, 3, 4
  01c0788  fctiwz 3, 3
  01c078c  stfd 3, 352(1)
  01c0790  lwz 8, 356(1)
  01c0794  clrlwi 8, 8, 24
  01c0798  bl 0x130810
  01c079c  nop
  01c07a0  b 0x1c0808
  01c07a4  lis 3, 114
  01c07a8  fmr 2, 26
  01c07ac  li 4, 1
  01c07b0  li 7, 1
  01c07b4  ori 9, 31, 0
  01c07b8  lfs 1, -3056(3)
  01c07bc  addic 3, 1, 160
  01c07c0  fmuls 3, 1, 24
  01c07c4  fmuls 4, 1, 23
  01c07c8  fmuls 5, 1, 22
  01c07cc  fmr 1, 26
  01c07d0  fctiwz 3, 3
  01c07d4  fctiwz 4, 4
  01c07d8  fctiwz 5, 5
  01c07dc  stfd 3, 352(1)
  01c07e0  lwz 5, 356(1)
  01c07e4  stfd 4, 352(1)
  01c07e8  lwz 6, 356(1)
  01c07ec  stfd 5, 352(1)
  01c07f0  clrlwi 5, 5, 24
  01c07f4  lwz 8, 356(1)
  01c07f8  clrlwi 6, 6, 24
  01c07fc  clrlwi 8, 8, 24
  01c0800  bl 0x130810
  01c0804  nop
  01c0808  addic 29, 29, 1
  01c080c  cmpwi 29, 4
  01c0810  bt 0, 0x1c05a0
  01c0814  lfs 1, 128(1)
  01c0818  fmr 28, 26
  01c081c  stfs 1, 336(30)
  01c0820  lfs 1, 132(1)
  01c0824  stfs 1, 340(30)
  01c0828  lfs 1, 136(1)
  01c082c  stfs 1, 344(30)
  01c0830  b 0x1c0834
  01c0834  li 3, 59
  01c0838  stfs 28, 348(30)
  01c083c  bl 0x685c4
  01c0840  nop
  01c0844  ori 31, 3, 0
  01c0848  li 3, 0
  01c084c  lis 9, 0
  01c0850  li 4, 0
  01c0854  li 5, 1
  01c0858  li 6, 1
  01c085c  li 7, 1
  01c0860  li 8, 0
  01c0864  ori 9, 9, 65424
  01c0868  bl 0x502fd4
  01c086c  nop
  01c0870  ori 30, 3, 0
  01c0874  li 3, 0
  01c0878  li 4, 1
  01c087c  li 8, 0
  01c0880  li 5, 0
  01c0884  li 6, 0
  01c0888  li 7, 0
  01c088c  bl 0x502f08
  01c0890  nop
  01c0894  ori 29, 3, 0
  01c0898  li 4, 2
  01c089c  li 3, 0
  01c08a0  li 5, 0
  01c08a4  li 6, 1
  01c08a8  li 7, 128
  01c08ac  bl 0x502ea8
  01c08b0  nop
  01c08b4  lis 4, -32640
  01c08b8  lfs 1, 144(1)
  01c08bc  li 6, 0
  01c08c0  ori 4, 4, 32896
  01c08c4  lfs 2, 148(1)
  01c08c8  lfs 3, 152(1)
  01c08cc  lis 5, 16256
  01c08d0  std 31, 328(1)
  01c08d4  fadds 4, 1, 19
  01c08d8  std 30, 336(1)
  01c08dc  fadds 5, 2, 20
  01c08e0  stw 4, 284(1)
  01c08e4  fadds 6, 3, 21
  01c08e8  stw 4, 280(1)
  01c08ec  stw 4, 276(1)
  01c08f0  stw 4, 272(1)
  01c08f4  std 3, 344(1)
  01c08f8  std 29, 320(1)
  01c08fc  lis 3, 161
  01c0900  stw 6, 288(1)
  01c0904  li 4, 0
  01c0908  stw 6, 304(1)
  01c090c  addic 8, 3, 24396
  01c0910  stw 5, 296(1)
  01c0914  addic 3, 1, 208
  01c0918  stw 5, 312(1)
  01c091c  li 7, 9
  01c0920  stw 6, 292(1)
  01c0924  stw 6, 300(1)
  01c0928  stw 5, 308(1)
  01c092c  stw 5, 316(1)
  01c0930  stfs 1, 208(1)
  01c0934  li 5, 1
  01c0938  stfs 2, 212(1)
  01c093c  lfs 1, 156(1)
  01c0940  stfs 3, 216(1)
  01c0944  stfs 1, 220(1)
  01c0948  stfs 4, 224(1)
  01c094c  stfs 5, 228(1)
  01c0950  lfs 2, 128(1)
  01c0954  stfs 6, 232(1)
  01c0958  stfs 1, 236(1)
  01c095c  lfs 1, 132(1)
  01c0960  stfs 2, 240(1)
  01c0964  lfs 2, 136(1)
  01c0968  stfs 1, 244(1)
  01c096c  lfs 1, 140(1)
  01c0970  stfs 2, 248(1)
  01c0974  stfs 1, 252(1)
  01c0978  stfs 31, 256(1)
  01c097c  stfs 30, 260(1)
  01c0980  stfs 29, 264(1)
  01c0984  stw 6, 268(1)
  01c0988  lwz 6, 28(8)
  01c098c  bl 0x72280
  01c0990  nop
  01c0994  ld 0, 576(1)
  01c0998  mtlr 0
  01c099c  lfd 16, 432(1)
  01c09a0  lfd 17, 440(1)
  01c09a4  lfd 18, 448(1)
  01c09a8  lfd 19, 456(1)
  01c09ac  lfd 20, 464(1)
  01c09b0  lfd 21, 472(1)
  01c09b4  lfd 22, 480(1)
  01c09b8  lfd 23, 488(1)
  01c09bc  lfd 24, 496(1)
  01c09c0  lfd 25, 504(1)
  01c09c4  lfd 26, 512(1)
  01c09c8  lfd 27, 520(1)
  01c09cc  lfd 28, 528(1)
  01c09d0  lfd 29, 536(1)
  01c09d4  lfd 30, 544(1)
  01c09d8  lfd 31, 552(1)
  01c09dc  ld 25, 376(1)
  01c09e0  ld 26, 384(1)
  01c09e4  ld 27, 392(1)
  01c09e8  ld 28, 400(1)
  01c09ec  ld 29, 408(1)
  01c09f0  ld 30, 416(1)
  01c09f4  ld 31, 424(1)
  01c09f8  addi 1, 1, 560
  01c09fc  blr

M1106_001c0a10:   # 0x1c0a10, 0x30c bytes
  01c0a10  stdu 1, -368(1)
  01c0a14  mflr 0
  01c0a18  std 0, 384(1)
  01c0a1c  stfd 25, 312(1)
  01c0a20  stfd 26, 320(1)
  01c0a24  stfd 27, 328(1)
  01c0a28  stfd 28, 336(1)
  01c0a2c  stfd 29, 344(1)
  01c0a30  stfd 30, 352(1)
  01c0a34  stfd 31, 360(1)
  01c0a38  std 30, 296(1)
  01c0a3c  lwz 30, 120(3)
  01c0a40  lis 6, 28
  01c0a44  addic 5, 1, 112
  01c0a48  std 31, 304(1)
  01c0a4c  li 4, 4
  01c0a50  std 29, 288(1)
  01c0a54  std 28, 280(1)
  01c0a58  addi 31, 6, 2560
  01c0a5c  bl 0xf1114
  01c0a60  nop
  01c0a64  lfs 1, 324(30)
  01c0a68  lfs 2, 116(1)
  01c0a6c  lfs 3, 320(30)
  01c0a70  fsubs 1, 1, 2
  01c0a74  lfs 4, 112(1)
  01c0a78  lfs 5, 328(30)
  01c0a7c  fsubs 3, 3, 4
  01c0a80  lfs 6, 120(1)
  01c0a84  fsubs 5, 5, 6
  01c0a88  lfs 8, 364(30)
  01c0a8c  fmuls 7, 1, 1
  01c0a90  lfs 9, 0(31)
  01c0a94  lis 3, 149
  01c0a98  addic 3, 3, 5056
  01c0a9c  fmadds 7, 3, 3, 7
  01c0aa0  lfs 10, 856(3)
  01c0aa4  lfs 11, 852(3)
  01c0aa8  lfs 12, 848(3)
  01c0aac  fmadds 7, 5, 5, 7
  01c0ab0  fsqrts 7, 7
  01c0ab4  lfs 13, 4(31)
  01c0ab8  li 3, 60
  01c0abc  lfs 27, 332(30)
  01c0ac0  fdivs 8, 8, 7
  01c0ac4  fsub 0, 9, 7
  01c0ac8  fsub 31, 9, 7
  01c0acc  fsub 28, 9, 7
  01c0ad0  fsub 30, 7, 9
  01c0ad4  fsub 29, 7, 9
  01c0ad8  fsub 7, 7, 9
  01c0adc  fmuls 3, 8, 3
  01c0ae0  fmuls 5, 8, 5
  01c0ae4  fmuls 1, 8, 1
  01c0ae8  fsel 8, 0, 9, 3
  01c0aec  fsel 0, 31, 9, 5
  01c0af0  fsel 31, 28, 9, 1
  01c0af4  fsel 3, 30, 8, 3
  01c0af8  fsel 5, 29, 0, 5
  01c0afc  fsel 1, 7, 31, 1
  01c0b00  fadds 31, 3, 4
  01c0b04  fadds 30, 5, 6
  01c0b08  fadds 29, 1, 2
  01c0b0c  fsubs 1, 4, 31
  01c0b10  fsubs 3, 6, 30
  01c0b14  fsubs 2, 2, 29
  01c0b18  fmuls 4, 1, 10
  01c0b1c  fmuls 5, 3, 11
  01c0b20  fmuls 6, 2, 12
  01c0b24  fmsubs 3, 3, 12, 4
  01c0b28  fmsubs 2, 2, 10, 5
  01c0b2c  fmsubs 1, 1, 11, 6
  01c0b30  fmuls 4, 3, 3
  01c0b34  fmadds 4, 2, 2, 4
  01c0b38  fmadds 4, 1, 1, 4
  01c0b3c  fsqrts 4, 4
  01c0b40  fdivs 5, 13, 4
  01c0b44  fsub 6, 9, 4
  01c0b48  fsub 7, 9, 4
  01c0b4c  fsub 8, 9, 4
  01c0b50  fsub 10, 4, 9
  01c0b54  fsub 11, 4, 9
  01c0b58  fsub 4, 4, 9
  01c0b5c  fmuls 1, 1, 5
  01c0b60  fmuls 3, 3, 5
  01c0b64  fmuls 2, 2, 5
  01c0b68  fsel 5, 6, 9, 1
  01c0b6c  fsel 6, 7, 9, 3
  01c0b70  fsel 7, 8, 9, 2
  01c0b74  fsel 28, 10, 5, 1
  01c0b78  fsel 26, 11, 6, 3
  01c0b7c  fsel 25, 4, 7, 2
  01c0b80  bl 0x685c4
  01c0b84  nop
  01c0b88  ori 30, 3, 0
  01c0b8c  lis 9, 0
  01c0b90  li 3, 0
  01c0b94  ori 9, 9, 65424
  01c0b98  li 4, 0
  01c0b9c  li 5, 1
  01c0ba0  li 6, 1
  01c0ba4  li 7, 1
  01c0ba8  li 8, 0
  01c0bac  bl 0x502fd4
  01c0bb0  nop
  01c0bb4  ori 29, 3, 0
  01c0bb8  li 3, 0
  01c0bbc  li 4, 1
  01c0bc0  li 5, 0
  01c0bc4  li 6, 0
  01c0bc8  li 7, 0
  01c0bcc  li 8, 0
  01c0bd0  bl 0x502f08
  01c0bd4  nop
  01c0bd8  ori 28, 3, 0
  01c0bdc  li 4, 2
  01c0be0  li 3, 0
  01c0be4  li 5, 0
  01c0be8  li 6, 1
  01c0bec  li 7, 128
  01c0bf0  bl 0x502ea8
  01c0bf4  nop
  01c0bf8  lis 4, -32640
  01c0bfc  std 30, 248(1)
  01c0c00  li 6, 0
  01c0c04  ori 4, 4, 32896
  01c0c08  std 29, 256(1)
  01c0c0c  std 28, 240(1)
  01c0c10  lis 5, 16256
  01c0c14  std 3, 264(1)
  01c0c18  fadds 6, 31, 25
  01c0c1c  fadds 7, 29, 26
  01c0c20  stw 4, 204(1)
  01c0c24  stw 4, 200(1)
  01c0c28  fsubs 8, 29, 26
  01c0c2c  stw 4, 196(1)
  01c0c30  lis 3, 161
  01c0c34  stw 4, 192(1)
  01c0c38  stw 6, 208(1)
  01c0c3c  stw 6, 224(1)
  01c0c40  stw 5, 216(1)
  01c0c44  stw 5, 232(1)
  01c0c48  stw 6, 212(1)
  01c0c4c  stw 6, 220(1)
  01c0c50  li 4, 0
  01c0c54  stw 5, 228(1)
  01c0c58  addic 6, 3, 24396
  01c0c5c  lfs 1, 116(1)
  01c0c60  addic 3, 1, 128
  01c0c64  stw 5, 236(1)
  01c0c68  li 7, 9
  01c0c6c  lfs 2, 120(1)
  01c0c70  li 5, 1
  01c0c74  stfs 1, 132(1)
  01c0c78  lfs 3, 124(1)
  01c0c7c  stfs 2, 136(1)
  01c0c80  stfs 3, 140(1)
  01c0c84  lfs 4, 8(31)
  01c0c88  lfs 5, 112(1)
  01c0c8c  stfs 1, 148(1)
  01c0c90  fadds 1, 30, 28
  01c0c94  stfs 2, 152(1)
  01c0c98  fsubs 9, 5, 4
  01c0c9c  fsubs 2, 31, 25
  01c0ca0  stfs 3, 156(1)
  01c0ca4  fsubs 3, 30, 28
  01c0ca8  stfs 27, 172(1)
  01c0cac  fadds 4, 5, 4
  01c0cb0  stfs 27, 188(1)
  01c0cb4  stfs 6, 160(1)
  01c0cb8  stfs 7, 164(1)
  01c0cbc  stfs 1, 168(1)
  01c0cc0  stfs 2, 176(1)
  01c0cc4  stfs 8, 180(1)
  01c0cc8  stfs 3, 184(1)
  01c0ccc  lwz 6, 28(6)
  01c0cd0  stfs 9, 128(1)
  01c0cd4  stfs 4, 144(1)
  01c0cd8  bl 0x72280
  01c0cdc  nop
  01c0ce0  ld 0, 384(1)
  01c0ce4  mtlr 0
  01c0ce8  lfd 25, 312(1)
  01c0cec  lfd 26, 320(1)
  01c0cf0  lfd 27, 328(1)
  01c0cf4  lfd 28, 336(1)
  01c0cf8  lfd 29, 344(1)
  01c0cfc  lfd 30, 352(1)
  01c0d00  lfd 31, 360(1)
  01c0d04  ld 28, 280(1)
  01c0d08  ld 29, 288(1)
  01c0d0c  ld 30, 296(1)
  01c0d10  ld 31, 304(1)
  01c0d14  addi 1, 1, 368
  01c0d18  blr

M1106_001c0d58:   # 0x1c0d58, 0x660 bytes
  01c0d58  stdu 1, -576(1)
  01c0d5c  mflr 0
  01c0d60  std 0, 592(1)
  01c0d64  stfd 14, 432(1)
  01c0d68  stfd 15, 440(1)
  01c0d6c  stfd 16, 448(1)
  01c0d70  stfd 17, 456(1)
  01c0d74  stfd 18, 464(1)
  01c0d78  stfd 19, 472(1)
  01c0d7c  stfd 20, 480(1)
  01c0d80  stfd 21, 488(1)
  01c0d84  stfd 22, 496(1)
  01c0d88  stfd 23, 504(1)
  01c0d8c  stfd 24, 512(1)
  01c0d90  stfd 25, 520(1)
  01c0d94  stfd 26, 528(1)
  01c0d98  stfd 27, 536(1)
  01c0d9c  stfd 28, 544(1)
  01c0da0  stfd 29, 552(1)
  01c0da4  stfd 30, 560(1)
  01c0da8  stfd 31, 568(1)
  01c0dac  std 31, 424(1)
  01c0db0  ori 31, 3, 0
  01c0db4  fmr 31, 4
  01c0db8  std 30, 416(1)
  01c0dbc  lis 3, 150
  01c0dc0  ori 30, 4, 0
  01c0dc4  fmr 30, 5
  01c0dc8  addic 3, 3, 27352
  01c0dcc  fmr 14, 2
  01c0dd0  lis 4, 28
  01c0dd4  fmr 29, 1
  01c0dd8  lwz 5, 120(31)
  01c0ddc  std 29, 408(1)
  01c0de0  stfs 3, 344(1)
  01c0de4  addi 29, 4, 3356
  01c0de8  li 4, 1
  01c0dec  lbz 5, 454(5)
  01c0df0  rlwinm 6, 5, 16, 8, 15
  01c0df4  ori 7, 5, 0
  01c0df8  stfd 31, 328(1)
  01c0dfc  rlwimi 6, 5, 24, 0, 7
  01c0e00  rlwimi 7, 5, 8, 16, 23
  01c0e04  std 28, 400(1)
  01c0e08  lwz 5, 8(3)
  01c0e0c  or 28, 6, 7
  01c0e10  std 3, 280(1)
  01c0e14  std 27, 392(1)
  01c0e18  std 26, 384(1)
  01c0e1c  std 25, 376(1)
  01c0e20  std 24, 368(1)
  01c0e24  srawi 3, 5, 13
  01c0e28  li 5, 1
  01c0e2c  std 28, 320(1)
  01c0e30  bl 0x502ffc
  01c0e34  nop
  01c0e38  ori 4, 3, 0
  01c0e3c  li 3, 33
  01c0e40  bl 0x174f80
  01c0e44  nop
  01c0e48  li 3, 60
  01c0e4c  bl 0x685c4
  01c0e50  nop
  01c0e54  ori 27, 3, 0
  01c0e58  lis 9, 0
  01c0e5c  li 3, 0
  01c0e60  ori 9, 9, 65424
  01c0e64  li 4, 0
  01c0e68  li 5, 1
  01c0e6c  li 6, 1
  01c0e70  li 7, 1
  01c0e74  li 8, 0
  01c0e78  bl 0x502fd4
  01c0e7c  nop
  01c0e80  ori 26, 3, 0
  01c0e84  li 3, 0
  01c0e88  li 4, 0
  01c0e8c  li 5, 0
  01c0e90  li 6, 0
  01c0e94  li 7, 0
  01c0e98  li 8, 0
  01c0e9c  bl 0x502f08
  01c0ea0  nop
  01c0ea4  ori 25, 3, 0
  01c0ea8  li 3, 1
  01c0eac  li 4, 2
  01c0eb0  li 5, 2
  01c0eb4  li 6, 0
  01c0eb8  li 7, 160
  01c0ebc  bl 0x502ea8
  01c0ec0  nop
  01c0ec4  ori 24, 3, 0
  01c0ec8  li 3, 0
  01c0ecc  bl 0x502730
  01c0ed0  nop
  01c0ed4  fmuls 1, 1, 31
  01c0ed8  bl 0x502758
  01c0edc  nop
  01c0ee0  lis 4, 64
  01c0ee4  std 27, 248(1)
  01c0ee8  lis 5, 161
  01c0eec  std 26, 256(1)
  01c0ef0  ori 4, 4, 16448
  01c0ef4  rlwimi 4, 3, 24, 0, 7
  01c0ef8  or 4, 4, 28
  01c0efc  lwz 3, 1808(5)
  01c0f00  std 25, 240(1)
  01c0f04  std 24, 264(1)
  01c0f08  addc 3, 30, 3
  01c0f0c  stw 4, 204(1)
  01c0f10  stw 4, 200(1)
  01c0f14  extsw 3, 3
  01c0f18  stw 4, 196(1)
  01c0f1c  stw 4, 192(1)
  01c0f20  bl 0x502730
  01c0f24  nop
  01c0f28  fmuls 29, 1, 29
  01c0f2c  addic 5, 1, 112
  01c0f30  ori 3, 31, 0
  01c0f34  li 4, 9
  01c0f38  stfs 29, 316(1)
  01c0f3c  bl 0xf1114
  01c0f40  nop
  01c0f44  lfs 1, 112(1)
  01c0f48  lfs 2, 116(1)
  01c0f4c  addic 31, 1, 272
  01c0f50  stfd 1, 296(1)
  01c0f54  stfs 2, 364(1)
  01c0f58  lfs 1, 0(29)
  01c0f5c  ori 4, 31, 0
  01c0f60  lfs 2, 124(1)
  01c0f64  fsubs 4, 14, 1
  01c0f68  lfs 3, 120(1)
  01c0f6c  stfd 2, 304(1)
  01c0f70  lfs 2, 4(29)
  01c0f74  fmuls 1, 29, 2
  01c0f78  fsubs 2, 3, 4
  01c0f7c  stfs 2, 312(1)
  01c0f80  bl 0x5026dc
  01c0f84  nop
  01c0f88  stfs 1, 208(1)
  01c0f8c  stfs 1, 224(1)
  01c0f90  lfs 2, 8(29)
  01c0f94  ori 4, 31, 0
  01c0f98  fmr 28, 2
  01c0f9c  fadds 1, 1, 28
  01c0fa0  stfs 1, 216(1)
  01c0fa4  stfs 1, 232(1)
  01c0fa8  lfs 1, 12(29)
  01c0fac  fmuls 1, 29, 1
  01c0fb0  bl 0x5026dc
  01c0fb4  nop
  01c0fb8  fadds 2, 1, 28
  01c0fbc  stfs 1, 212(1)
  01c0fc0  stfs 1, 220(1)
  01c0fc4  fsubs 1, 30, 31
  01c0fc8  stfs 2, 228(1)
  01c0fcc  stfs 2, 236(1)
  01c0fd0  lfs 2, 20(29)
  01c0fd4  lfs 3, 24(29)
  01c0fd8  lfs 15, 16(29)
  01c0fdc  stfd 1, 352(1)
  01c0fe0  stfs 2, 360(1)
  01c0fe4  stfd 3, 288(1)
  01c0fe8  lfd 21, 328(1)
  01c0fec  li 3, 0
  01c0ff0  lfs 1, 364(1)
  01c0ff4  lfs 2, 312(1)
  01c0ff8  lfd 3, 304(1)
  01c0ffc  lfd 4, 296(1)
  01c1000  stfs 1, 164(1)
  01c1004  stfs 4, 160(1)
  01c1008  stfs 2, 168(1)
  01c100c  stfs 3, 172(1)
  01c1010  stfs 4, 176(1)
  01c1014  stfs 1, 180(1)
  01c1018  stfs 2, 184(1)
  01c101c  stfs 3, 188(1)
  01c1020  bl 0x502730
  01c1024  nop
  01c1028  fmuls 1, 1, 21
  01c102c  bl 0x502758
  01c1030  nop
  01c1034  lis 4, 64
  01c1038  ld 31, 320(1)
  01c103c  slwi 3, 3, 24
  01c1040  ori 4, 4, 16448
  01c1044  lfs 1, 344(1)
  01c1048  lis 5, 28
  01c104c  or 31, 31, 4
  01c1050  addi 5, 5, 3356
  01c1054  or 3, 3, 31
  01c1058  ori 4, 3, 0
  01c105c  stw 3, 204(1)
  01c1060  stw 4, 200(1)
  01c1064  lfs 22, 28(5)
  01c1068  lfs 2, 32(5)
  01c106c  fmadds 22, 1, 15, 22
  01c1070  fsubs 1, 1, 2
  01c1074  fcmpu 0, 22, 1
  01c1078  stfd 1, 336(1)
  01c107c  bt 1, 0x1c12f0
  01c1080  lis 5, 28
  01c1084  lfs 16, 360(1)
  01c1088  lis 30, 161
  01c108c  addi 5, 5, 3356
  01c1090  addic 30, 30, 24396
  01c1094  lfs 1, 36(5)
  01c1098  lfs 2, 316(1)
  01c109c  lfs 17, 40(5)
  01c10a0  lfs 18, 44(5)
  01c10a4  fmadds 16, 1, 2, 16
  01c10a8  lfs 19, 48(5)
  01c10ac  lfs 20, 52(5)
  01c10b0  lfs 1, 160(1)
  01c10b4  ori 5, 3, 0
  01c10b8  lfd 2, 352(1)
  01c10bc  li 3, 0
  01c10c0  lfs 3, 164(1)
  01c10c4  stfs 1, 128(1)
  01c10c8  lfs 1, 168(1)
  01c10cc  fmadds 21, 2, 15, 21
  01c10d0  stfs 3, 132(1)
  01c10d4  lfs 2, 172(1)
  01c10d8  stfs 1, 136(1)
  01c10dc  lfs 1, 176(1)
  01c10e0  stfs 2, 140(1)
  01c10e4  lfs 2, 180(1)
  01c10e8  stfs 1, 144(1)
  01c10ec  lfs 1, 184(1)
  01c10f0  stfs 2, 148(1)
  01c10f4  lfs 2, 188(1)
  01c10f8  stfs 1, 152(1)
  01c10fc  stfs 2, 156(1)
  01c1100  stw 5, 192(1)
  01c1104  stw 4, 196(1)
  01c1108  bl 0x502730
  01c110c  nop
  01c1110  fmuls 1, 1, 21
  01c1114  bl 0x502758
  01c1118  nop
  01c111c  fmr 1, 16
  01c1120  slwi 3, 3, 24
  01c1124  or 3, 3, 31
  01c1128  stw 3, 204(1)
  01c112c  stw 3, 200(1)
  01c1130  bl 0x10de78
  01c1134  nop
  01c1138  fmr 31, 1
  01c113c  addic 3, 1, 160
  01c1140  fmr 1, 14
  01c1144  fmr 3, 22
  01c1148  fmr 2, 31
  01c114c  bl 0xfe610
  01c1150  nop
  01c1154  fmr 1, 31
  01c1158  fmr 2, 17
  01c115c  bl 0x502578
  01c1160  nop
  01c1164  fmr 2, 1
  01c1168  fmr 1, 14
  01c116c  addic 3, 1, 176
  01c1170  fmr 3, 22
  01c1174  bl 0xfe610
  01c1178  nop
  01c117c  lfs 1, 184(1)
  01c1180  lfs 3, 168(1)
  01c1184  fsub 2, 18, 22
  01c1188  fadds 5, 1, 19
  01c118c  lfs 7, 160(1)
  01c1190  fadds 6, 3, 19
  01c1194  lfs 8, 112(1)
  01c1198  fsubs 1, 1, 20
  01c119c  lfs 9, 164(1)
  01c11a0  fsub 4, 18, 22
  01c11a4  lfs 10, 116(1)
  01c11a8  fsubs 3, 3, 20
  01c11ac  lfs 11, 120(1)
  01c11b0  lfs 12, 176(1)
  01c11b4  lfs 13, 180(1)
  01c11b8  lwz 3, 192(1)
  01c11bc  lwz 4, 196(1)
  01c11c0  rlwinm 7, 3, 8, 8, 15
  01c11c4  lwz 5, 200(1)
  01c11c8  lwz 6, 204(1)
  01c11cc  rlwinm 9, 4, 8, 8, 15
  01c11d0  rlwimi 7, 3, 24, 0, 7
  01c11d4  lwz 8, 28(30)
  01c11d8  fsel 1, 2, 1, 5
  01c11dc  rlwinm 11, 5, 8, 8, 15
  01c11e0  fadds 5, 12, 8
  01c11e4  rlwimi 7, 3, 24, 16, 23
  01c11e8  fsel 2, 4, 3, 6
  01c11ec  rlwimi 9, 4, 24, 0, 7
  01c11f0  fadds 3, 7, 8
  01c11f4  rlwinm 10, 6, 8, 8, 15
  01c11f8  fadds 4, 9, 10
  01c11fc  rlwimi 7, 3, 8, 24, 31
  01c1200  fadds 6, 13, 10
  01c1204  rlwimi 11, 5, 24, 0, 7
  01c1208  rlwimi 9, 4, 24, 16, 23
  01c120c  rlwimi 10, 6, 24, 0, 7
  01c1210  rlwimi 11, 5, 24, 16, 23
  01c1214  rlwimi 9, 4, 8, 24, 31
  01c1218  fadds 1, 1, 11
  01c121c  rlwimi 10, 6, 24, 16, 23
  01c1220  rlwimi 11, 5, 8, 24, 31
  01c1224  fadds 2, 2, 11
  01c1228  rlwimi 10, 6, 8, 24, 31
  01c122c  addic 3, 1, 128
  01c1230  stfs 3, 160(1)
  01c1234  ori 6, 8, 0
  01c1238  stfs 4, 164(1)
  01c123c  li 4, 0
  01c1240  stfs 5, 176(1)
  01c1244  li 5, 1
  01c1248  stfs 6, 180(1)
  01c124c  stw 7, 192(1)
  01c1250  li 7, 9
  01c1254  stfs 1, 184(1)
  01c1258  stfs 2, 168(1)
  01c125c  stw 9, 196(1)
  01c1260  stw 11, 200(1)
  01c1264  stw 10, 204(1)
  01c1268  bl 0x72280
  01c126c  nop
  01c1270  lwz 3, 192(1)
  01c1274  lfs 1, 344(1)
  01c1278  rlwinm 4, 3, 8, 8, 15
  01c127c  lwz 5, 196(1)
  01c1280  fmadds 22, 1, 15, 22
  01c1284  rlwimi 4, 3, 24, 0, 7
  01c1288  lwz 7, 200(1)
  01c128c  rlwinm 6, 5, 8, 8, 15
  01c1290  rlwimi 4, 3, 24, 16, 23
  01c1294  lwz 8, 204(1)
  01c1298  rlwinm 9, 7, 8, 8, 15
  01c129c  rlwimi 4, 3, 8, 24, 31
  01c12a0  rlwinm 3, 8, 8, 8, 15
  01c12a4  rlwimi 9, 7, 24, 0, 7
  01c12a8  rlwimi 6, 5, 24, 0, 7
  01c12ac  stw 4, 192(1)
  01c12b0  lfd 1, 336(1)
  01c12b4  rlwimi 3, 8, 24, 0, 7
  01c12b8  rlwimi 9, 7, 24, 16, 23
  01c12bc  fcmpu 0, 22, 1
  01c12c0  rlwimi 6, 5, 24, 16, 23
  01c12c4  ori 4, 3, 0
  01c12c8  ori 3, 9, 0
  01c12cc  rlwimi 6, 5, 8, 24, 31
  01c12d0  rlwimi 4, 8, 24, 16, 23
  01c12d4  rlwimi 3, 7, 8, 24, 31
  01c12d8  rlwimi 4, 8, 8, 24, 31
  01c12dc  stw 6, 196(1)
  01c12e0  stw 3, 200(1)
  01c12e4  cror 6, 0, 2
  01c12e8  stw 4, 204(1)
  01c12ec  bt 6, 0x1c10b0
  01c12f0  lis 3, 28
  01c12f4  lfs 1, 360(1)
  01c12f8  addi 3, 3, 3356
  01c12fc  lfs 2, 40(3)
  01c1300  lfd 3, 288(1)
  01c1304  fadds 1, 1, 2
  01c1308  fcmpu 0, 1, 3
  01c130c  stfs 1, 360(1)
  01c1310  bt 0, 0x1c0fe8
  01c1314  ld 3, 280(1)
  01c1318  li 4, 1
  01c131c  li 5, 0
  01c1320  lwz 3, 8(3)
  01c1324  srawi 3, 3, 13
  01c1328  bl 0x502ffc
  01c132c  nop
  01c1330  ori 4, 3, 0
  01c1334  li 3, 33
  01c1338  bl 0x174f80
  01c133c  nop
  01c1340  ld 0, 592(1)
  01c1344  mtlr 0
  01c1348  lfd 14, 432(1)
  01c134c  lfd 15, 440(1)
  01c1350  lfd 16, 448(1)
  01c1354  lfd 17, 456(1)
  01c1358  lfd 18, 464(1)
  01c135c  lfd 19, 472(1)
  01c1360  lfd 20, 480(1)
  01c1364  lfd 21, 488(1)
  01c1368  lfd 22, 496(1)
  01c136c  lfd 23, 504(1)
  01c1370  lfd 24, 512(1)
  01c1374  lfd 25, 520(1)
  01c1378  lfd 26, 528(1)
  01c137c  lfd 27, 536(1)
  01c1380  lfd 28, 544(1)
  01c1384  lfd 29, 552(1)
  01c1388  lfd 30, 560(1)
  01c138c  lfd 31, 568(1)
  01c1390  ld 24, 368(1)
  01c1394  ld 25, 376(1)
  01c1398  ld 26, 384(1)
  01c139c  ld 27, 392(1)
  01c13a0  ld 28, 400(1)
  01c13a4  ld 29, 408(1)
  01c13a8  ld 30, 416(1)
  01c13ac  ld 31, 424(1)
  01c13b0  addi 1, 1, 576
  01c13b4  blr

M1106_001c13d0:   # 0x1c13d0, 0xa8 bytes
  01c13d0  stdu 1, -112(1)
  01c13d4  mflr 0
  01c13d8  std 0, 128(1)
  01c13dc  lis 4, 28
  01c13e0  lwz 6, 120(3)
  01c13e4  lis 5, 16204
  01c13e8  addi 4, 4, 5048
  01c13ec  ori 5, 5, 52429
  01c13f0  lfs 1, 0(4)
  01c13f4  lwz 4, 456(6)
  01c13f8  lfs 2, 456(6)
  01c13fc  srawi 7, 4, 31
  01c1400  srwi 6, 7, 1
  01c1404  xor 4, 6, 4
  01c1408  subc 4, 4, 7
  01c140c  cmpw 4, 5
  01c1410  bf 0, 0x1c1444
  01c1414  lis 4, 28
  01c1418  addi 4, 4, 5048
  01c141c  lfs 3, 4(4)
  01c1420  lfs 4, 8(4)
  01c1424  fmuls 3, 2, 3
  01c1428  lfs 5, 12(4)
  01c142c  fmadds 3, 3, 4, 5
  01c1430  fcmpu 0, 3, 1
  01c1434  cror 6, 0, 2
  01c1438  bt 6, 0x1c1448
  01c143c  fmr 3, 1
  01c1440  b 0x1c1448
  01c1444  fmr 3, 1
  01c1448  lis 4, 28
  01c144c  fmr 5, 2
  01c1450  addi 5, 4, 5048
  01c1454  li 4, 0
  01c1458  lfs 1, 20(5)
  01c145c  lfs 2, 16(5)
  01c1460  fmr 4, 1
  01c1464  bl 0x1c0d58
  01c1468  ld 0, 128(1)
  01c146c  mtlr 0
  01c1470  addi 1, 1, 112
  01c1474  blr

M1106_001c14d0:   # 0x1c14d0, 0x560 bytes
  01c14d0  stdu 1, -560(1)
  01c14d4  mflr 0
  01c14d8  std 0, 576(1)
  01c14dc  stfd 18, 448(1)
  01c14e0  stfd 19, 456(1)
  01c14e4  stfd 20, 464(1)
  01c14e8  stfd 21, 472(1)
  01c14ec  stfd 22, 480(1)
  01c14f0  stfd 23, 488(1)
  01c14f4  stfd 24, 496(1)
  01c14f8  stfd 25, 504(1)
  01c14fc  stfd 26, 512(1)
  01c1500  stfd 27, 520(1)
  01c1504  stfd 28, 528(1)
  01c1508  stfd 29, 536(1)
  01c150c  stfd 30, 544(1)
  01c1510  stfd 31, 552(1)
  01c1514  std 31, 440(1)
  01c1518  ori 31, 3, 0
  01c151c  lis 3, 161
  01c1520  std 29, 424(1)
  01c1524  fmr 18, 2
  01c1528  fmr 31, 1
  01c152c  std 30, 432(1)
  01c1530  ori 29, 7, 0
  01c1534  lwz 30, 120(31)
  01c1538  lwz 3, 1808(3)
  01c153c  addc 3, 5, 3
  01c1540  std 28, 416(1)
  01c1544  std 27, 408(1)
  01c1548  std 26, 400(1)
  01c154c  extsw 3, 3
  01c1550  bl 0x502730
  01c1554  nop
  01c1558  lwz 3, 356(30)
  01c155c  fmuls 18, 1, 18
  01c1560  cmpwi 3, 4
  01c1564  bf 2, 0x1c15d4
  01c1568  srawi 3, 29, 24
  01c156c  bl 0x502730
  01c1570  nop
  01c1574  lwz 3, 352(30)
  01c1578  fmr 30, 1
  01c157c  extsw 3, 3
  01c1580  bl 0x502730
  01c1584  nop
  01c1588  lis 3, 28
  01c158c  lis 4, 114
  01c1590  addi 3, 3, 5248
  01c1594  lfs 2, 0(3)
  01c1598  lfs 3, -3056(4)
  01c159c  fmuls 2, 3, 2
  01c15a0  clrlwi 29, 29, 8
  01c15a4  fctidz 2, 2
  01c15a8  fcfid 2, 2
  01c15ac  frsp 2, 2
  01c15b0  fdivs 1, 1, 2
  01c15b4  lfs 2, 4(3)
  01c15b8  fmuls 1, 30, 1
  01c15bc  fsub 3, 1, 2
  01c15c0  fsel 1, 3, 1, 2
  01c15c4  bl 0x502758
  01c15c8  nop
  01c15cc  rlwimi 29, 3, 24, 0, 7
  01c15d0  b 0x1c15dc
  01c15d4  cmpwi 3, 4
  01c15d8  bt 1, 0x1c19d0
  01c15dc  li 3, 61
  01c15e0  bl 0x685c4
  01c15e4  nop
  01c15e8  ori 28, 3, 0
  01c15ec  lis 9, 0
  01c15f0  li 3, 0
  01c15f4  ori 9, 9, 65424
  01c15f8  li 4, 0
  01c15fc  li 5, 1
  01c1600  li 6, 1
  01c1604  li 7, 1
  01c1608  li 8, 0
  01c160c  bl 0x502fd4
  01c1610  nop
  01c1614  ori 27, 3, 0
  01c1618  li 3, 0
  01c161c  li 4, 1
  01c1620  li 5, 0
  01c1624  li 6, 0
  01c1628  li 7, 0
  01c162c  li 8, 0
  01c1630  bl 0x502f08
  01c1634  nop
  01c1638  ori 26, 3, 0
  01c163c  li 4, 2
  01c1640  li 3, 0
  01c1644  li 5, 0
  01c1648  li 6, 1
  01c164c  li 7, 128
  01c1650  bl 0x502ea8
  01c1654  nop
  01c1658  li 4, 0
  01c165c  std 28, 232(1)
  01c1660  lis 6, 16256
  01c1664  lis 5, 16128
  01c1668  stw 4, 192(1)
  01c166c  stw 4, 208(1)
  01c1670  stw 6, 200(1)
  01c1674  stw 6, 216(1)
  01c1678  stw 4, 196(1)
  01c167c  stw 4, 204(1)
  01c1680  stw 5, 212(1)
  01c1684  stw 5, 220(1)
  01c1688  lfs 1, 272(30)
  01c168c  li 5, 160
  01c1690  std 27, 240(1)
  01c1694  std 26, 224(1)
  01c1698  stfs 1, 128(1)
  01c169c  std 3, 248(1)
  01c16a0  lfs 1, 276(30)
  01c16a4  li 3, 332
  01c16a8  li 6, 112
  01c16ac  stfs 1, 132(1)
  01c16b0  lfs 1, 280(30)
  01c16b4  addi 4, 3, 16
  01c16b8  li 7, 128
  01c16bc  stfs 1, 136(1)
  01c16c0  lfs 1, 284(30)
  01c16c4  li 8, 144
  01c16c8  stw 29, 188(1)
  01c16cc  li 9, 176
  01c16d0  stfs 1, 140(1)
  01c16d4  li 10, 192
  01c16d8  lfs 1, 320(30)
  01c16dc  stw 29, 184(1)
  01c16e0  stfs 1, 160(1)
  01c16e4  stw 29, 180(1)
  01c16e8  lfs 1, 324(30)
  01c16ec  stw 29, 176(1)
  01c16f0  stfs 1, 164(1)
  01c16f4  lfs 1, 328(30)
  01c16f8  stfs 1, 168(1)
  01c16fc  lvlx 2, 3, 30
  01c1700  lvrx 3, 4, 30
  01c1704  li 3, 172
  01c1708  lfs 1, 332(30)
  01c170c  lis 4, 28
  01c1710  vor 2, 2, 3
  01c1714  lvx 3, 5, 1
  01c1718  addi 4, 4, 5248
  01c171c  li 5, 16
  01c1720  vspltw 4, 2, 0
  01c1724  lis 29, 161
  01c1728  addic 29, 29, 24396
  01c172c  stvewx 4, 3, 1
  01c1730  li 3, 256
  01c1734  lvx 4, 5, 4
  01c1738  li 5, 272
  01c173c  lvx 5, 6, 1
  01c1740  li 6, 288
  01c1744  lvx 6, 7, 1
  01c1748  vperm 2, 3, 2, 4
  01c174c  li 7, 304
  01c1750  lvx 3, 8, 1
  01c1754  stvx 5, 3, 1
  01c1758  li 8, 208
  01c175c  stvx 6, 5, 1
  01c1760  li 3, 224
  01c1764  stvx 3, 6, 1
  01c1768  li 5, 320
  01c176c  lvx 3, 9, 1
  01c1770  li 6, 336
  01c1774  stvx 2, 7, 1
  01c1778  li 9, 352
  01c177c  lvx 2, 10, 1
  01c1780  li 7, 240
  01c1784  lvx 4, 8, 1
  01c1788  li 10, 368
  01c178c  lvx 5, 3, 1
  01c1790  li 8, 384
  01c1794  stvx 3, 5, 1
  01c1798  stvx 2, 6, 1
  01c179c  stvx 4, 9, 1
  01c17a0  lvx 2, 7, 1
  01c17a4  stvx 5, 10, 1
  01c17a8  stvx 2, 8, 1
  01c17ac  lfs 2, 288(30)
  01c17b0  stfs 2, 256(1)
  01c17b4  lfs 2, 292(30)
  01c17b8  stfs 2, 260(1)
  01c17bc  lfs 2, 296(30)
  01c17c0  stfs 2, 264(1)
  01c17c4  lfs 2, 300(30)
  01c17c8  stfs 2, 268(1)
  01c17cc  lfs 2, 288(30)
  01c17d0  stfs 2, 272(1)
  01c17d4  lfs 2, 292(30)
  01c17d8  stfs 2, 276(1)
  01c17dc  lfs 2, 296(30)
  01c17e0  stfs 2, 280(1)
  01c17e4  lfs 2, 300(30)
  01c17e8  stfs 2, 284(1)
  01c17ec  lfs 19, 32(4)
  01c17f0  lfs 20, 36(4)
  01c17f4  lfs 22, 40(4)
  01c17f8  lfs 23, 44(4)
  01c17fc  fmr 21, 19
  01c1800  lfs 24, 48(4)
  01c1804  lfs 25, 52(4)
  01c1808  lfs 26, 56(4)
  01c180c  lfs 27, 60(4)
  01c1810  lfs 28, 64(4)
  01c1814  lfs 29, 68(4)
  01c1818  lfs 30, 72(4)
  01c181c  lfs 3, 128(1)
  01c1820  lfs 4, 132(1)
  01c1824  fmr 2, 1
  01c1828  stfs 3, 112(1)
  01c182c  fmadds 1, 22, 18, 19
  01c1830  lfs 3, 136(1)
  01c1834  stfs 4, 116(1)
  01c1838  lfs 4, 140(1)
  01c183c  stfs 3, 120(1)
  01c1840  lfs 3, 160(1)
  01c1844  stfs 4, 124(1)
  01c1848  lfs 4, 164(1)
  01c184c  stfs 3, 144(1)
  01c1850  lfs 3, 168(1)
  01c1854  stfs 4, 148(1)
  01c1858  stfs 3, 152(1)
  01c185c  stfs 2, 156(1)
  01c1860  bl 0x10de78
  01c1864  nop
  01c1868  fadds 2, 1, 23
  01c186c  fsubs 3, 24, 1
  01c1870  fsubs 4, 25, 1
  01c1874  fcmpu 0, 19, 21
  01c1878  fsubs 5, 24, 2
  01c187c  fsub 6, 1, 3
  01c1880  fsubs 7, 25, 2
  01c1884  fsub 8, 2, 5
  01c1888  fsel 1, 6, 3, 1
  01c188c  fsel 2, 8, 5, 2
  01c1890  fsub 3, 4, 1
  01c1894  fsub 5, 7, 2
  01c1898  fsel 1, 3, 4, 1
  01c189c  lfs 4, 224(31)
  01c18a0  fsel 2, 5, 7, 2
  01c18a4  fmuls 3, 1, 1
  01c18a8  lfs 5, 320(30)
  01c18ac  lfs 8, 208(31)
  01c18b0  fmuls 6, 2, 2
  01c18b4  fmuls 7, 3, 1
  01c18b8  fmuls 9, 6, 2
  01c18bc  fmuls 10, 3, 7
  01c18c0  fmadds 1, 7, 26, 1
  01c18c4  fmuls 7, 6, 9
  01c18c8  fmadds 2, 9, 26, 2
  01c18cc  fmuls 9, 3, 10
  01c18d0  fmadds 1, 10, 27, 1
  01c18d4  lfs 10, 228(31)
  01c18d8  fmuls 11, 6, 7
  01c18dc  fmadds 2, 7, 27, 2
  01c18e0  fmuls 3, 3, 9
  01c18e4  fmadds 1, 9, 28, 1
  01c18e8  fmuls 6, 6, 11
  01c18ec  fmadds 2, 11, 28, 2
  01c18f0  fmadds 1, 3, 29, 1
  01c18f4  lfs 3, 212(31)
  01c18f8  fmadds 2, 6, 29, 2
  01c18fc  lfs 6, 232(31)
  01c1900  fmuls 1, 1, 31
  01c1904  fmuls 2, 2, 31
  01c1908  fmadds 4, 4, 1, 5
  01c190c  lfs 5, 216(31)
  01c1910  lwz 3, 28(29)
  01c1914  fmadds 4, 8, 2, 4
  01c1918  stfs 4, 160(1)
  01c191c  lfs 4, 324(30)
  01c1920  fmadds 4, 10, 1, 4
  01c1924  fmadds 3, 3, 2, 4
  01c1928  stfs 3, 164(1)
  01c192c  lfs 3, 328(30)
  01c1930  fmadds 1, 6, 1, 3
  01c1934  fmadds 1, 5, 2, 1
  01c1938  stfs 1, 168(1)
  01c193c  lfs 1, 332(30)
  01c1940  stfs 1, 172(1)
  01c1944  bt 2, 0x1c19c4
  01c1948  ori 6, 3, 0
  01c194c  addic 3, 1, 112
  01c1950  li 4, 0
  01c1954  li 5, 1
  01c1958  li 7, 9
  01c195c  bl 0x72280
  01c1960  nop
  01c1964  lfs 1, 144(1)
  01c1968  lfs 2, 148(1)
  01c196c  addic 3, 1, 256
  01c1970  stfs 1, 288(1)
  01c1974  li 4, 0
  01c1978  lfs 1, 152(1)
  01c197c  li 5, 0
  01c1980  stfs 2, 292(1)
  01c1984  li 7, 9
  01c1988  lfs 2, 156(1)
  01c198c  stfs 1, 296(1)
  01c1990  lfs 1, 160(1)
  01c1994  stfs 2, 300(1)
  01c1998  lfs 2, 164(1)
  01c199c  stfs 1, 304(1)
  01c19a0  lfs 1, 168(1)
  01c19a4  stfs 2, 308(1)
  01c19a8  lfs 2, 172(1)
  01c19ac  stfs 1, 312(1)
  01c19b0  lwz 6, 28(29)
  01c19b4  stfs 2, 316(1)
  01c19b8  bl 0x72280
  01c19bc  nop
  01c19c0  lfs 1, 172(1)
  01c19c4  fadds 19, 19, 30
  01c19c8  fcmpu 0, 19, 20
  01c19cc  bt 0, 0x1c181c
  01c19d0  ld 0, 576(1)
  01c19d4  mtlr 0
  01c19d8  lfd 18, 448(1)
  01c19dc  lfd 19, 456(1)
  01c19e0  lfd 20, 464(1)
  01c19e4  lfd 21, 472(1)
  01c19e8  lfd 22, 480(1)
  01c19ec  lfd 23, 488(1)
  01c19f0  lfd 24, 496(1)
  01c19f4  lfd 25, 504(1)
  01c19f8  lfd 26, 512(1)
  01c19fc  lfd 27, 520(1)
  01c1a00  lfd 28, 528(1)
  01c1a04  lfd 29, 536(1)
  01c1a08  lfd 30, 544(1)
  01c1a0c  lfd 31, 552(1)
  01c1a10  ld 26, 400(1)
  01c1a14  ld 27, 408(1)
  01c1a18  ld 28, 416(1)
  01c1a1c  ld 29, 424(1)
  01c1a20  ld 30, 432(1)
  01c1a24  ld 31, 440(1)
  01c1a28  addi 1, 1, 560
  01c1a2c  blr

M1106_001c1a58:   # 0x1c1a58, 0x2d0 bytes
  01c1a58  stdu 1, -224(1)
  01c1a5c  mflr 0
  01c1a60  std 0, 240(1)
  01c1a64  stfd 30, 208(1)
  01c1a68  stfd 31, 216(1)
  01c1a6c  std 30, 192(1)
  01c1a70  lwz 30, 120(3)
  01c1a74  lis 4, 28
  01c1a78  lfs 8, 308(30)
  01c1a7c  lfs 7, 304(30)
  01c1a80  fmuls 1, 8, 8
  01c1a84  lfs 9, 312(30)
  01c1a88  std 31, 200(1)
  01c1a8c  addi 4, 4, 6704
  01c1a90  ori 31, 3, 0
  01c1a94  lfs 31, 4(4)
  01c1a98  fmadds 1, 7, 7, 1
  01c1a9c  lfs 2, 0(4)
  01c1aa0  fmadds 6, 9, 9, 1
  01c1aa4  lfs 1, 364(30)
  01c1aa8  lfs 3, 272(30)
  01c1aac  lfs 4, 276(30)
  01c1ab0  lfs 5, 280(30)
  01c1ab4  fmuls 2, 1, 2
  01c1ab8  fsqrts 6, 6
  01c1abc  std 29, 184(1)
  01c1ac0  fcmpu 0, 6, 31
  01c1ac4  bf 2, 0x1c1adc
  01c1ac8  fmr 7, 31
  01c1acc  lfs 2, 316(30)
  01c1ad0  fmr 8, 7
  01c1ad4  fmr 6, 8
  01c1ad8  b 0x1c1af0
  01c1adc  fdivs 10, 2, 6
  01c1ae0  lfs 2, 316(30)
  01c1ae4  fmuls 6, 7, 10
  01c1ae8  fmuls 8, 8, 10
  01c1aec  fmuls 7, 9, 10
  01c1af0  fmuls 9, 8, 8
  01c1af4  stfs 2, 332(30)
  01c1af8  fadds 10, 8, 4
  01c1afc  stfs 2, 300(30)
  01c1b00  fadds 11, 7, 5
  01c1b04  fadds 2, 6, 3
  01c1b08  fmr 30, 31
  01c1b0c  fmadds 9, 6, 6, 9
  01c1b10  lis 3, 28
  01c1b14  lis 7, 8192
  01c1b18  addi 29, 3, 6704
  01c1b1c  ori 7, 7, 128
  01c1b20  fmadds 9, 7, 7, 9
  01c1b24  stfs 2, 320(30)
  01c1b28  stfs 10, 324(30)
  01c1b2c  stfs 11, 328(30)
  01c1b30  ori 3, 31, 0
  01c1b34  fsqrts 9, 9
  01c1b38  li 5, 0
  01c1b3c  fdivs 1, 1, 9
  01c1b40  fsub 2, 30, 9
  01c1b44  fsub 10, 30, 9
  01c1b48  fsub 11, 30, 9
  01c1b4c  fsub 12, 9, 30
  01c1b50  fsub 13, 9, 30
  01c1b54  fsub 9, 9, 30
  01c1b58  fmuls 6, 6, 1
  01c1b5c  fmuls 8, 8, 1
  01c1b60  fmuls 1, 7, 1
  01c1b64  fsel 2, 2, 30, 6
  01c1b68  fsel 7, 10, 30, 8
  01c1b6c  fsel 10, 11, 30, 1
  01c1b70  fsel 2, 12, 2, 6
  01c1b74  fsel 6, 13, 7, 8
  01c1b78  fsel 1, 9, 10, 1
  01c1b7c  fadds 2, 2, 3
  01c1b80  fadds 3, 6, 4
  01c1b84  fadds 1, 1, 5
  01c1b88  stfs 2, 288(30)
  01c1b8c  stfs 3, 292(30)
  01c1b90  stfs 1, 296(30)
  01c1b94  lfs 31, 8(29)
  01c1b98  fmr 1, 31
  01c1b9c  fmr 2, 31
  01c1ba0  bl 0x1c14d0
  01c1ba4  lis 7, 10240
  01c1ba8  lfs 1, 12(29)
  01c1bac  ori 3, 31, 0
  01c1bb0  lfs 2, 16(29)
  01c1bb4  ori 7, 7, 32896
  01c1bb8  li 5, 10
  01c1bbc  bl 0x1c14d0
  01c1bc0  lfs 1, 20(29)
  01c1bc4  lis 7, 12464
  01c1bc8  lfs 2, 24(29)
  01c1bcc  ori 3, 31, 0
  01c1bd0  li 5, 20
  01c1bd4  ori 7, 7, 65535
  01c1bd8  bl 0x1c14d0
  01c1bdc  lfs 1, 288(30)
  01c1be0  lfs 2, 272(30)
  01c1be4  fsubs 1, 1, 2
  01c1be8  stfs 1, 112(1)
  01c1bec  lfs 2, 292(30)
  01c1bf0  lfs 3, 276(30)
  01c1bf4  fsubs 2, 2, 3
  01c1bf8  fmuls 4, 2, 2
  01c1bfc  stfs 2, 116(1)
  01c1c00  lfs 3, 296(30)
  01c1c04  lfs 5, 280(30)
  01c1c08  fsubs 3, 3, 5
  01c1c0c  fmr 5, 30
  01c1c10  fmadds 4, 1, 1, 4
  01c1c14  fmr 6, 5
  01c1c18  fmadds 4, 3, 3, 4
  01c1c1c  stfs 3, 120(1)
  01c1c20  lfs 7, 300(30)
  01c1c24  stfs 7, 124(1)
  01c1c28  fmr 7, 6
  01c1c2c  fsqrts 8, 4
  01c1c30  fcmpu 0, 8, 7
  01c1c34  bt 2, 0x1c1c84
  01c1c38  frsqrte 5, 4
  01c1c3c  lis 3, 28
  01c1c40  addi 3, 3, 6704
  01c1c44  lfs 6, 28(3)
  01c1c48  fmuls 7, 4, 5
  01c1c4c  fmuls 8, 6, 5
  01c1c50  fnmsubs 7, 7, 5, 31
  01c1c54  fmadds 5, 7, 8, 5
  01c1c58  fmuls 7, 4, 5
  01c1c5c  fmuls 8, 6, 5
  01c1c60  fnmsubs 7, 7, 5, 31
  01c1c64  fmadds 5, 7, 8, 5
  01c1c68  fmuls 4, 4, 5
  01c1c6c  fmuls 6, 6, 5
  01c1c70  fnmsubs 4, 4, 5, 31
  01c1c74  fmadds 5, 4, 6, 5
  01c1c78  fmuls 7, 1, 5
  01c1c7c  fmuls 6, 2, 5
  01c1c80  fmuls 5, 3, 5
  01c1c84  lis 3, 28
  01c1c88  addic 29, 1, 128
  01c1c8c  stfs 7, 112(1)
  01c1c90  addi 6, 3, 6704
  01c1c94  stfs 6, 116(1)
  01c1c98  ori 3, 29, 0
  01c1c9c  stfs 5, 120(1)
  01c1ca0  addic 7, 1, 112
  01c1ca4  ori 4, 31, 0
  01c1ca8  lis 5, 3
  01c1cac  lfs 1, 32(6)
  01c1cb0  bl 0x10581c
  01c1cb4  nop
  01c1cb8  addic 3, 30, 272
  01c1cbc  addic 30, 30, 288
  01c1cc0  li 5, 0
  01c1cc4  ori 4, 30, 0
  01c1cc8  ori 6, 31, 0
  01c1ccc  ori 7, 29, 0
  01c1cd0  bl 0x57820
  01c1cd4  nop
  01c1cd8  cmpwi 3, 0
  01c1cdc  bf 2, 0x1c1d04
  01c1ce0  lis 4, 28
  01c1ce4  ori 3, 30, 0
  01c1ce8  addi 4, 4, 6704
  01c1cec  addic 7, 1, 128
  01c1cf0  li 5, 0
  01c1cf4  ori 6, 31, 0
  01c1cf8  lfs 1, 28(4)
  01c1cfc  bl 0x5e598
  01c1d00  nop
  01c1d04  ld 0, 240(1)
  01c1d08  mtlr 0
  01c1d0c  lfd 30, 208(1)
  01c1d10  lfd 31, 216(1)
  01c1d14  ld 29, 184(1)
  01c1d18  ld 30, 192(1)
  01c1d1c  ld 31, 200(1)
  01c1d20  addi 1, 1, 224
  01c1d24  blr

M1106_001c1d28:   # 0x1c1d28, 0xc4 bytes
  01c1d28  lwz 6, 368(4)
  01c1d2c  li 3, 0
  01c1d30  cmpwi 6, -1
  01c1d34  bt 2, 0x1c1d40
  01c1d38  li 3, 1
  01c1d3c  stw 6, 0(5)
  01c1d40  lwz 6, 372(4)
  01c1d44  cmpwi 6, -1
  01c1d48  bt 2, 0x1c1d58
  01c1d4c  slwi 7, 3, 2
  01c1d50  addic 3, 3, 1
  01c1d54  stwx 6, 5, 7
  01c1d58  lwz 6, 376(4)
  01c1d5c  cmpwi 6, -1
  01c1d60  bt 2, 0x1c1d70
  01c1d64  slwi 7, 3, 2
  01c1d68  addic 3, 3, 1
  01c1d6c  stwx 6, 5, 7
  01c1d70  lbz 6, 412(4)
  01c1d74  clrlwi 7, 6, 31
  01c1d78  cmpwi 7, 0
  01c1d7c  bf 2, 0x1c1d9c
  01c1d80  lwz 7, 380(4)
  01c1d84  cmpwi 7, -1
  01c1d88  bt 2, 0x1c1d9c
  01c1d8c  slwi 6, 3, 2
  01c1d90  addic 3, 3, 1
  01c1d94  stwx 7, 5, 6
  01c1d98  lbz 6, 412(4)
  01c1d9c  rlwinm 7, 6, 0, 30, 30
  01c1da0  cmpwi 7, 0
  01c1da4  bf 2, 0x1c1dc4
  01c1da8  lwz 7, 384(4)
  01c1dac  cmpwi 7, -1
  01c1db0  bt 2, 0x1c1dc4
  01c1db4  slwi 6, 3, 2
  01c1db8  addic 3, 3, 1
  01c1dbc  stwx 7, 5, 6
  01c1dc0  lbz 6, 412(4)
  01c1dc4  rlwinm 6, 6, 0, 29, 29
  01c1dc8  cmpwi 6, 0
  01c1dcc  bf 2, 0x1c1de8
  01c1dd0  lwz 4, 388(4)
  01c1dd4  cmpwi 4, -1
  01c1dd8  bt 2, 0x1c1de8
  01c1ddc  slwi 6, 3, 2
  01c1de0  addic 3, 3, 1
  01c1de4  stwx 4, 5, 6
  01c1de8  blr

M1106_001c1e18:   # 0x1c1e18, 0x668 bytes
  01c1e18  stdu 1, -288(1)
  01c1e1c  mflr 0
  01c1e20  std 0, 304(1)
  01c1e24  std 29, 264(1)
  01c1e28  addi 0, 1, 144
  01c1e2c  stvx 26, 0, 0
  01c1e30  addic 0, 0, 16
  01c1e34  stvx 27, 0, 0
  01c1e38  addic 0, 0, 16
  01c1e3c  stvx 28, 0, 0
  01c1e40  addic 0, 0, 16
  01c1e44  stvx 29, 0, 0
  01c1e48  addic 0, 0, 16
  01c1e4c  stvx 30, 0, 0
  01c1e50  addic 0, 0, 16
  01c1e54  stvx 31, 0, 0
  01c1e58  std 30, 272(1)
  01c1e5c  ori 29, 3, 0
  01c1e60  lbz 3, 32(3)
  01c1e64  std 31, 280(1)
  01c1e68  ori 30, 4, 0
  01c1e6c  ori 31, 5, 0
  01c1e70  std 28, 256(1)
  01c1e74  std 27, 248(1)
  01c1e78  cmpwi 3, 10
  01c1e7c  bt 2, 0x1c23ec
  01c1e80  ori 3, 29, 0
  01c1e84  lis 4, 51
  01c1e88  li 5, 0
  01c1e8c  bl 0x10675c
  01c1e90  nop
  01c1e94  ori 28, 3, 0
  01c1e98  li 6, 0
  01c1e9c  addic 7, 1, 112
  01c1ea0  li 9, 0
  01c1ea4  ori 3, 29, 0
  01c1ea8  li 10, 4
  01c1eac  ori 4, 28, 0
  01c1eb0  ori 5, 31, 0
  01c1eb4  li 8, 0
  01c1eb8  bl 0x106840
  01c1ebc  nop
  01c1ec0  cmpwi 28, 0
  01c1ec4  bt 2, 0x1c1f40
  01c1ec8  lwz 3, 44(28)
  01c1ecc  cmpwi 3, 0
  01c1ed0  bf 1, 0x1c1f18
  01c1ed4  lhz 3, 42(28)
  01c1ed8  cmpwi 3, 305
  01c1edc  cmpwi 1, 3, 121
  01c1ee0  cmpwi 6, 3, 186
  01c1ee4  bt 2, 0x1c1ef4
  01c1ee8  bt 26, 0x1c1f10
  01c1eec  bt 6, 0x1c1f04
  01c1ef0  b 0x1c1f18
  01c1ef4  lis 3, 15948
  01c1ef8  ori 3, 3, 52429
  01c1efc  stw 3, 44(28)
  01c1f00  b 0x1c1f18
  01c1f04  lis 3, 16256
  01c1f08  stw 3, 44(28)
  01c1f0c  b 0x1c1f18
  01c1f10  lis 3, 16256
  01c1f14  stw 3, 44(28)
  01c1f18  lwz 3, 32(28)
  01c1f1c  cmpwi 3, 0
  01c1f20  bt 2, 0x1c1f38
  01c1f24  lhz 3, 166(3)
  01c1f28  cmpwi 3, 1049
  01c1f2c  cmpwi 1, 3, 1046
  01c1f30  bt 2, 0x1c1f38
  01c1f34  bf 6, 0x1c1f40
  01c1f38  li 3, 1
  01c1f3c  stw 3, 112(1)
  01c1f40  lwz 3, 456(30)
  01c1f44  cmpwi 3, 0
  01c1f48  bt 1, 0x1c23a8
  01c1f4c  lbz 3, 453(30)
  01c1f50  cmpwi 3, 0
  01c1f54  bf 2, 0x1c23a8
  01c1f58  lwz 3, 112(1)
  01c1f5c  cmpwi 3, 1
  01c1f60  bf 1, 0x1c23bc
  01c1f64  li 3, 44
  01c1f68  addi 4, 3, 16
  01c1f6c  lvlx 2, 3, 28
  01c1f70  lvlx 30, 0, 31
  01c1f74  lvrx 3, 4, 28
  01c1f78  vspltw 31, 30, 0
  01c1f7c  vor 2, 2, 3
  01c1f80  lfs 1, 0(31)
  01c1f84  vspltw 3, 2, 0
  01c1f88  vcmpgtfp. 3, 31, 3
  01c1f8c  bf 26, 0x1c209c
  01c1f90  li 6, 0
  01c1f94  lhz 7, 52(29)
  01c1f98  li 5, -1
  01c1f9c  ori 3, 29, 0
  01c1fa0  rlwimi 7, 6, 0, 19, 19
  01c1fa4  stw 6, 0(31)
  01c1fa8  li 4, 0
  01c1fac  sth 7, 52(29)
  01c1fb0  bl 0xfd8d0
  01c1fb4  nop
  01c1fb8  li 5, 120
  01c1fbc  ori 3, 29, 0
  01c1fc0  addic 4, 30, 96
  01c1fc4  stb 5, 103(30)
  01c1fc8  bl 0x10c808
  01c1fcc  nop
  01c1fd0  lbz 3, 83(29)
  01c1fd4  cmpwi 3, 2
  01c1fd8  bt 2, 0x1c2004
  01c1fdc  li 3, 10
  01c1fe0  li 4, 13
  01c1fe4  bl 0xfe484
  01c1fe8  nop
  01c1fec  ori 6, 3, 0
  01c1ff0  ori 3, 29, 0
  01c1ff4  li 4, 2
  01c1ff8  li 5, 0
  01c1ffc  bl 0xfddc0
  01c2000  nop
  01c2004  lis 3, 151
  01c2008  addic 3, 3, -25376
  01c200c  lwz 3, 8324(3)
  01c2010  cmpwi 3, 120
  01c2014  bf 2, 0x1c2028
  01c2018  li 3, 0
  01c201c  li 4, 1
  01c2020  bl 0xb72b0
  01c2024  nop
  01c2028  lwz 3, 496(30)
  01c202c  cmpwi 3, -1
  01c2030  bt 2, 0x1c2090
  01c2034  ori 3, 29, 0
  01c2038  li 4, 1
  01c203c  bl 0x4d407c
  01c2040  nop
  01c2044  ori 3, 29, 0
  01c2048  li 4, 0
  01c204c  li 5, -1
  01c2050  bl 0xfd8d0
  01c2054  nop
  01c2058  lbz 3, 176(29)
  01c205c  bl 0xf1e50
  01c2060  nop
  01c2064  lis 3, 165
  01c2068  lwz 4, 496(30)
  01c206c  slwi 4, 4, 7
  01c2070  lwz 3, 7128(3)
  01c2074  addc 3, 3, 4
  01c2078  addic 4, 3, 48
  01c207c  addic 5, 3, 112
  01c2080  clrldi 3, 4, 32
  01c2084  clrldi 4, 5, 32
  01c2088  bl 0x151e70
  01c208c  nop
  01c2090  li 3, 10
  01c2094  stb 3, 32(29)
  01c2098  b 0x1c23bc
  01c209c  li 3, 4
  01c20a0  lhz 5, 4(31)
  01c20a4  lis 4, 28
  01c20a8  vspltisw 4, -1
  01c20ac  extsh 5, 5
  01c20b0  vspltisw 28, -16
  01c20b4  addi 27, 4, 7660
  01c20b8  vspltisw 5, -1
  01c20bc  extsw 5, 5
  01c20c0  lvlx 3, 3, 31
  01c20c4  li 3, 12
  01c20c8  vslw 4, 4, 4
  01c20cc  vsraw 3, 3, 28
  01c20d0  li 4, 16
  01c20d4  std 5, 120(1)
  01c20d8  lfs 2, 0(27)
  01c20dc  vslw 5, 5, 5
  01c20e0  lvlx 6, 3, 27
  01c20e4  li 3, 4
  01c20e8  lvlx 7, 0, 27
  01c20ec  vspltw 6, 6, 0
  01c20f0  vcfsx 3, 3, 0
  01c20f4  vspltw 7, 7, 0
  01c20f8  vsldoi 27, 30, 30, 0
  01c20fc  vmaddfp 2, 2, 6, 4
  01c2100  lvlx 4, 3, 27
  01c2104  lfd 3, 120(1)
  01c2108  li 3, 8
  01c210c  vspltw 29, 4, 0
  01c2110  fcfid 3, 3
  01c2114  lvlx 4, 4, 27
  01c2118  addic 4, 1, 116
  01c211c  vspltw 4, 4, 0
  01c2120  vmaddfp 26, 3, 7, 5
  01c2124  vspltisw 5, -1
  01c2128  lvlx 7, 3, 27
  01c212c  li 3, 508
  01c2130  vcmpgtfp 3, 2, 6
  01c2134  vslw 5, 5, 5
  01c2138  frsp 3, 3
  01c213c  vsel 2, 2, 6, 3
  01c2140  vspltisw 3, -1
  01c2144  vspltw 30, 7, 0
  01c2148  vxor 2, 4, 2
  01c214c  vslw 3, 3, 3
  01c2150  vmaddfp 29, 26, 29, 5
  01c2154  vspltw 2, 2, 0
  01c2158  fmuls 2, 3, 2
  01c215c  vmaddfp 30, 26, 30, 3
  01c2160  stvewx 2, 3, 30
  01c2164  fdivs 1, 1, 2
  01c2168  bl 0x5026dc
  01c216c  nop
  01c2170  li 3, 36
  01c2174  li 4, 20
  01c2178  vspltisw 4, -1
  01c217c  li 5, 250
  01c2180  lvlx 2, 3, 30
  01c2184  lvlx 3, 4, 27
  01c2188  li 3, 24
  01c218c  vsraw 2, 2, 28
  01c2190  li 4, 116
  01c2194  vspltw 3, 3, 0
  01c2198  vslw 4, 4, 4
  01c219c  vcfsx 2, 2, 0
  01c21a0  lvlx 5, 3, 27
  01c21a4  lvlx 6, 4, 1
  01c21a8  vspltw 5, 5, 0
  01c21ac  lfs 1, 0(31)
  01c21b0  li 7, 28
  01c21b4  lis 6, 114
  01c21b8  li 8, -3056
  01c21bc  li 9, 38
  01c21c0  ori 3, 29, 0
  01c21c4  vsubfp 2, 2, 3
  01c21c8  vspltisw 3, -1
  01c21cc  vslw 3, 3, 3
  01c21d0  vcmpgtfp 2, 27, 2
  01c21d4  vsel 2, 6, 5, 2
  01c21d8  vmaddfp 2, 26, 2, 4
  01c21dc  vspltw 2, 2, 0
  01c21e0  stvewx 2, 4, 1
  01c21e4  lfs 2, 44(28)
  01c21e8  addic 4, 30, 96
  01c21ec  fsubs 1, 1, 2
  01c21f0  stfs 1, 0(31)
  01c21f4  stb 5, 103(30)
  01c21f8  lvlx 2, 7, 27
  01c21fc  lvlx 4, 8, 6
  01c2200  vspltw 2, 2, 0
  01c2204  vmaddfp 2, 4, 2, 3
  01c2208  vctsxs 2, 2, 0
  01c220c  vsplth 2, 2, 1
  01c2210  stvehx 2, 9, 30
  01c2214  bl 0x10c808
  01c2218  nop
  01c221c  lbz 3, 32(29)
  01c2220  cmpwi 3, 10
  01c2224  bf 0, 0x1c2358
  01c2228  lwz 3, 0(31)
  01c222c  lwz 4, 116(1)
  01c2230  srawi 6, 3, 31
  01c2234  srawi 5, 4, 31
  01c2238  srwi 8, 6, 1
  01c223c  srwi 7, 5, 1
  01c2240  xor 3, 8, 3
  01c2244  xor 4, 7, 4
  01c2248  subc 3, 3, 6
  01c224c  subc 4, 4, 5
  01c2250  cmpw 3, 4
  01c2254  bf 0, 0x1c2358
  01c2258  lis 3, 151
  01c225c  addic 3, 3, -25376
  01c2260  lwz 3, 8324(3)
  01c2264  cmpwi 3, 120
  01c2268  bf 2, 0x1c227c
  01c226c  li 3, 0
  01c2270  li 4, 1
  01c2274  bl 0xb72b0
  01c2278  nop
  01c227c  lbz 3, 83(29)
  01c2280  cmpwi 3, 2
  01c2284  bt 2, 0x1c22c4
  01c2288  li 3, 0
  01c228c  li 4, 2
  01c2290  bl 0xfe484
  01c2294  nop
  01c2298  ori 28, 3, 0
  01c229c  li 3, 20
  01c22a0  li 4, 22
  01c22a4  bl 0xfe484
  01c22a8  nop
  01c22ac  ori 6, 3, 0
  01c22b0  ori 3, 29, 0
  01c22b4  li 4, 2
  01c22b8  ori 5, 28, 0
  01c22bc  bl 0xfddc0
  01c22c0  nop
  01c22c4  li 3, 0
  01c22c8  lwz 4, 504(30)
  01c22cc  li 5, 1
  01c22d0  cmpwi 4, -1
  01c22d4  stw 3, 456(30)
  01c22d8  stb 5, 453(30)
  01c22dc  bt 2, 0x1c2324
  01c22e0  sldi 3, 4, 7
  01c22e4  sldi 6, 4, 4
  01c22e8  lis 5, 150
  01c22ec  subc 3, 3, 6
  01c22f0  addic 5, 5, 14312
  01c22f4  extsw 3, 3
  01c22f8  lwzx 5, 5, 3
  01c22fc  cmpw 5, 29
  01c2300  bf 2, 0x1c2324
  01c2304  lis 5, 150
  01c2308  addic 5, 5, 14292
  01c230c  lbzx 3, 5, 3
  01c2310  cmpwi 3, 0
  01c2314  bt 2, 0x1c2324
  01c2318  extsw 3, 4
  01c231c  bl 0x15cdb0
  01c2320  nop
  01c2324  li 6, -1
  01c2328  li 3, 15
  01c232c  li 4, 4
  01c2330  ori 5, 29, 0
  01c2334  stw 6, 504(30)
  01c2338  bl 0x15d12c
  01c233c  nop
  01c2340  stw 3, 504(30)
  01c2344  lbz 3, 188(29)
  01c2348  li 4, 11
  01c234c  addic 3, 3, 1
  01c2350  stb 4, 32(29)
  01c2354  stb 3, 188(29)
  01c2358  vspltw 29, 29, 0
  01c235c  vcmpgtfp. 2, 31, 29
  01c2360  bt 26, 0x1c2380
  01c2364  lvlx 2, 0, 31
  01c2368  vspltw 2, 2, 0
  01c236c  vcmpgtfp. 2, 2, 29
  01c2370  bf 26, 0x1c2380
  01c2374  li 3, 1
  01c2378  stb 3, 455(30)
  01c237c  b 0x1c23bc
  01c2380  vspltw 30, 30, 0
  01c2384  vcmpgtfp. 2, 31, 30
  01c2388  bt 26, 0x1c23bc
  01c238c  lvlx 2, 0, 31
  01c2390  vspltw 2, 2, 0
  01c2394  vcmpgtfp. 2, 2, 30
  01c2398  bf 26, 0x1c23bc
  01c239c  li 3, 1
  01c23a0  stb 3, 455(30)
  01c23a4  b 0x1c23bc
  01c23a8  lwz 3, 112(1)
  01c23ac  cmpwi 3, 1
  01c23b0  bf 1, 0x1c23bc
  01c23b4  li 3, 255
  01c23b8  stb 3, 454(30)
  01c23bc  li 3, 20
  01c23c0  lbz 5, 454(30)
  01c23c4  li 4, 0
  01c23c8  addic 7, 5, -20
  01c23cc  subc 3, 3, 5
  01c23d0  subc 7, 7, 4
  01c23d4  sradi 3, 3, 63
  01c23d8  li 6, 255
  01c23dc  and 3, 3, 7
  01c23e0  addc 3, 4, 3
  01c23e4  stb 3, 454(30)
  01c23e8  stb 6, 164(29)
  01c23ec  ori 3, 29, 0
  01c23f0  addic 4, 30, 96
  01c23f4  bl 0x10c9a0
  01c23f8  nop
  01c23fc  lis 3, 28
  01c2400  lfs 1, 508(30)
  01c2404  addi 3, 3, 7660
  01c2408  lfs 2, 32(3)
  01c240c  fadds 1, 1, 2
  01c2410  stfs 1, 508(30)
  01c2414  lfs 2, 36(3)
  01c2418  fcmpu 0, 1, 2
  01c241c  cror 6, 0, 2
  01c2420  bt 6, 0x1c242c
  01c2424  li 3, 0
  01c2428  stw 3, 508(30)
  01c242c  li 0, 144
  01c2430  lvx 26, 1, 0
  01c2434  addic 0, 0, 16
  01c2438  lvx 27, 1, 0
  01c243c  addic 0, 0, 16
  01c2440  lvx 28, 1, 0
  01c2444  addic 0, 0, 16
  01c2448  lvx 29, 1, 0
  01c244c  addic 0, 0, 16
  01c2450  lvx 30, 1, 0
  01c2454  addic 0, 0, 16
  01c2458  lvx 31, 1, 0
  01c245c  ld 0, 304(1)
  01c2460  mtlr 0
  01c2464  ld 27, 248(1)
  01c2468  ld 28, 256(1)
  01c246c  ld 29, 264(1)
  01c2470  ld 30, 272(1)
  01c2474  ld 31, 280(1)
  01c2478  addi 1, 1, 288
  01c247c  blr

M1106_001c2480:   # 0x1c2480, 0x78 bytes
  01c2480  stdu 1, -144(1)
  01c2484  mflr 0
  01c2488  std 0, 160(1)
  01c248c  stfd 30, 128(1)
  01c2490  stfd 31, 136(1)
  01c2494  std 31, 120(1)
  01c2498  fmr 31, 1
  01c249c  ori 31, 3, 0
  01c24a0  fneg 30, 31
  01c24a4  fmr 2, 31
  01c24a8  fmr 1, 30
  01c24ac  bl 0xfcbe8
  01c24b0  nop
  01c24b4  lfs 2, 0(31)
  01c24b8  fadds 3, 2, 1
  01c24bc  fmr 1, 30
  01c24c0  fmr 2, 31
  01c24c4  stfs 3, 0(31)
  01c24c8  bl 0xfcbe8
  01c24cc  nop
  01c24d0  lfs 2, 4(31)
  01c24d4  fadds 1, 2, 1
  01c24d8  stfs 1, 4(31)
  01c24dc  ld 0, 160(1)
  01c24e0  mtlr 0
  01c24e4  lfd 30, 128(1)
  01c24e8  lfd 31, 136(1)
  01c24ec  ld 31, 120(1)
  01c24f0  addi 1, 1, 144
  01c24f4  blr

M1106_001c2500:   # 0x1c2500, 0x1c4 bytes
  01c2500  stdu 1, -208(1)
  01c2504  mflr 0
  01c2508  std 0, 224(1)
  01c250c  stfd 31, 200(1)
  01c2510  std 29, 176(1)
  01c2514  lis 7, 28
  01c2518  std 28, 168(1)
  01c251c  std 27, 160(1)
  01c2520  ori 29, 4, 0
  01c2524  addi 28, 7, 9464
  01c2528  std 30, 184(1)
  01c252c  std 25, 144(1)
  01c2530  addic 27, 1, 112
  01c2534  ori 30, 5, 0
  01c2538  std 31, 192(1)
  01c253c  ori 25, 3, 0
  01c2540  ori 31, 6, 0
  01c2544  std 26, 152(1)
  01c2548  ori 5, 27, 0
  01c254c  bl 0x1c1d28
  01c2550  lfs 31, 0(28)
  01c2554  ori 26, 3, 0
  01c2558  lwz 5, 392(29)
  01c255c  addic 28, 25, 16
  01c2560  fmr 1, 31
  01c2564  ori 3, 27, 0
  01c2568  ori 8, 30, 0
  01c256c  extsw 5, 5
  01c2570  ori 4, 26, 0
  01c2574  ori 7, 28, 0
  01c2578  ori 9, 31, 0
  01c257c  bl 0x114d58
  01c2580  nop
  01c2584  cmpwi 3, 0
  01c2588  bf 2, 0x1c2694
  01c258c  lis 4, 165
  01c2590  fmr 1, 31
  01c2594  ori 3, 30, 0
  01c2598  addic 30, 4, 7136
  01c259c  lwz 4, 656(29)
  01c25a0  slwi 4, 4, 2
  01c25a4  extsw 4, 4
  01c25a8  lwzx 4, 30, 4
  01c25ac  bl 0x1367d0
  01c25b0  nop
  01c25b4  lwz 4, 656(29)
  01c25b8  sldi 3, 3, 4
  01c25bc  lwz 5, 392(29)
  01c25c0  slwi 4, 4, 2
  01c25c4  slwi 5, 5, 2
  01c25c8  fmr 1, 31
  01c25cc  extsw 4, 4
  01c25d0  extsw 5, 5
  01c25d4  lwzx 4, 30, 4
  01c25d8  addc 3, 4, 3
  01c25dc  lwzx 4, 30, 5
  01c25e0  addic 3, 3, 16
  01c25e4  clrldi 3, 3, 32
  01c25e8  bl 0x1367d0
  01c25ec  nop
  01c25f0  lwz 5, 392(29)
  01c25f4  sldi 6, 3, 4
  01c25f8  fmr 1, 31
  01c25fc  slwi 3, 5, 2
  01c2600  ori 4, 26, 0
  01c2604  extsw 8, 3
  01c2608  ori 3, 27, 0
  01c260c  extsw 5, 5
  01c2610  ori 7, 28, 0
  01c2614  ori 9, 31, 0
  01c2618  lwzx 8, 30, 8
  01c261c  addc 6, 8, 6
  01c2620  addic 8, 6, 16
  01c2624  clrldi 8, 8, 32
  01c2628  bl 0x114d58
  01c262c  nop
  01c2630  cmpwi 3, 0
  01c2634  bf 2, 0x1c2694
  01c2638  lwz 4, 392(29)
  01c263c  ori 3, 28, 0
  01c2640  fmr 1, 31
  01c2644  slwi 4, 4, 2
  01c2648  extsw 4, 4
  01c264c  lwzx 4, 30, 4
  01c2650  bl 0x1367d0
  01c2654  nop
  01c2658  lwz 4, 392(29)
  01c265c  sldi 3, 3, 4
  01c2660  slwi 4, 4, 2
  01c2664  extsw 4, 4
  01c2668  lwzx 4, 30, 4
  01c266c  addc 3, 4, 3
  01c2670  clrldi 3, 3, 32
  01c2674  lfs 1, 16(3)
  01c2678  stfs 1, 0(31)
  01c267c  lfs 1, 20(3)
  01c2680  stfs 1, 4(31)
  01c2684  lfs 1, 24(3)
  01c2688  stfs 1, 8(31)
  01c268c  lfs 1, 28(3)
  01c2690  stfs 1, 12(31)
  01c2694  ld 0, 224(1)
  01c2698  mtlr 0
  01c269c  lfd 31, 200(1)
  01c26a0  ld 25, 144(1)
  01c26a4  ld 26, 152(1)
  01c26a8  ld 27, 160(1)
  01c26ac  ld 28, 168(1)
  01c26b0  ld 29, 176(1)
  01c26b4  ld 30, 184(1)
  01c26b8  ld 31, 192(1)
  01c26bc  addi 1, 1, 208
  01c26c0  blr

M1106_001c26e0:   # 0x1c26e0, 0x42c bytes
  01c26e0  stdu 1, -192(1)
  01c26e4  mflr 0
  01c26e8  std 0, 208(1)
  01c26ec  lfs 3, 20(3)
  01c26f0  lfs 4, 4(5)
  01c26f4  fmr 2, 1
  01c26f8  lfs 1, 16(3)
  01c26fc  fsubs 4, 3, 4
  01c2700  lfs 5, 0(5)
  01c2704  std 31, 184(1)
  01c2708  fsubs 5, 1, 5
  01c270c  ori 31, 3, 0
  01c2710  lwz 3, 656(4)
  01c2714  lis 5, 165
  01c2718  std 28, 160(1)
  01c271c  fmuls 4, 4, 4
  01c2720  slwi 3, 3, 2
  01c2724  std 29, 168(1)
  01c2728  addic 28, 5, 7136
  01c272c  extsw 3, 3
  01c2730  std 30, 176(1)
  01c2734  ori 29, 4, 0
  01c2738  ori 30, 6, 0
  01c273c  fmadds 4, 5, 5, 4
  01c2740  lwzx 28, 28, 3
  01c2744  fsqrts 4, 4
  01c2748  fcmpu 0, 4, 2
  01c274c  cror 6, 0, 2
  01c2750  bt 6, 0x1c2820
  01c2754  ori 3, 31, 0
  01c2758  ori 5, 30, 0
  01c275c  addic 4, 29, 112
  01c2760  addic 6, 29, 256
  01c2764  bl 0x101cc0
  01c2768  nop
  01c276c  ori 30, 3, 0
  01c2770  rlwinm 3, 30, 0, 30, 30
  01c2774  cmpwi 3, 0
  01c2778  bt 2, 0x1c2a24
  01c277c  lis 4, 28
  01c2780  addic 3, 31, 16
  01c2784  addi 5, 4, 9924
  01c2788  ori 4, 28, 0
  01c278c  lfs 1, 0(5)
  01c2790  bl 0x1367d0
  01c2794  nop
  01c2798  sldi 3, 3, 4
  01c279c  lfs 1, 20(31)
  01c27a0  lfs 2, 16(31)
  01c27a4  addc 3, 28, 3
  01c27a8  lfs 3, 24(31)
  01c27ac  clrldi 3, 3, 32
  01c27b0  lfs 4, 20(3)
  01c27b4  lfs 5, 16(3)
  01c27b8  fsubs 4, 4, 1
  01c27bc  lfs 6, 24(3)
  01c27c0  fsubs 5, 5, 2
  01c27c4  fsubs 6, 6, 3
  01c27c8  lfs 8, 148(29)
  01c27cc  fmuls 7, 4, 4
  01c27d0  fmadds 7, 5, 5, 7
  01c27d4  fmadds 7, 6, 6, 7
  01c27d8  fsqrts 7, 7
  01c27dc  fdivs 9, 8, 7
  01c27e0  fsub 10, 8, 7
  01c27e4  fsub 11, 8, 7
  01c27e8  fsub 7, 8, 7
  01c27ec  fmuls 8, 6, 9
  01c27f0  fmuls 12, 4, 9
  01c27f4  fmuls 9, 5, 9
  01c27f8  fsel 6, 10, 6, 8
  01c27fc  fsel 4, 11, 4, 12
  01c2800  fsel 5, 7, 5, 9
  01c2804  fadds 3, 3, 6
  01c2808  fadds 1, 1, 4
  01c280c  fadds 2, 2, 5
  01c2810  stfs 3, 24(31)
  01c2814  stfs 1, 20(31)
  01c2818  stfs 2, 16(31)
  01c281c  b 0x1c2a24
  01c2820  lis 3, 151
  01c2824  addic 3, 3, -25376
  01c2828  lis 4, 115
  01c282c  li 30, 4
  01c2830  lfs 2, 128(3)
  01c2834  lfs 4, 132(3)
  01c2838  fsubs 1, 2, 1
  01c283c  lis 3, 28
  01c2840  fsubs 2, 4, 3
  01c2844  addi 3, 3, 9924
  01c2848  addic 4, 4, 22784
  01c284c  fabs 5, 1
  01c2850  fabs 4, 2
  01c2854  stfs 1, 112(1)
  01c2858  stfs 2, 116(1)
  01c285c  fsubs 1, 5, 4
  01c2860  stfs 1, 120(1)
  01c2864  lwz 5, 112(1)
  01c2868  lfs 1, 0(3)
  01c286c  lfs 2, 112(1)
  01c2870  lwz 3, 116(1)
  01c2874  lfs 3, 116(1)
  01c2878  lwz 6, 120(1)
  01c287c  rlwinm 3, 3, 3, 29, 29
  01c2880  fabs 6, 3
  01c2884  lfs 3, 120(1)
  01c2888  fabs 2, 2
  01c288c  rlwimi 3, 6, 2, 30, 30
  01c2890  fsub 7, 3, 1
  01c2894  rlwimi 3, 5, 4, 28, 28
  01c2898  fsub 8, 3, 1
  01c289c  ori 5, 4, 0
  01c28a0  rlwimi 5, 3, 2, 26, 28
  01c28a4  slwi 3, 3, 2
  01c28a8  clrldi 5, 5, 32
  01c28ac  fsel 4, 7, 2, 4
  01c28b0  lfsx 3, 4, 3
  01c28b4  lfs 2, 4(5)
  01c28b8  fsel 5, 8, 6, 5
  01c28bc  fcmpu 0, 4, 1
  01c28c0  bt 1, 0x1c28c8
  01c28c4  b 0x1c29e8
  01c28c8  fsubs 6, 5, 4
  01c28cc  fadds 4, 5, 4
  01c28d0  addic 6, 1, 16
  01c28d4  li 3, 2
  01c28d8  addic 5, 6, 108
  01c28dc  addic 4, 6, 124
  01c28e0  mtctr 3
  01c28e4  fdivs 4, 6, 4
  01c28e8  fmuls 6, 4, 4
  01c28ec  stfs 4, 136(1)
  01c28f0  stfs 4, 128(1)
  01c28f4  stfs 4, 132(1)
  01c28f8  stfs 4, 124(1)
  01c28fc  lfs 7, 136(1)
  01c2900  lfs 8, 128(1)
  01c2904  lfs 9, 132(1)
  01c2908  fmuls 4, 6, 6
  01c290c  fmuls 8, 8, 6
  01c2910  fmuls 7, 7, 4
  01c2914  fmuls 5, 4, 4
  01c2918  fmuls 4, 9, 4
  01c291c  stfs 8, 128(1)
  01c2920  fmuls 6, 7, 6
  01c2924  stfs 4, 132(1)
  01c2928  stfs 6, 136(1)
  01c292c  lfs 4, 108(6)
  01c2930  fmuls 4, 4, 5
  01c2934  stfs 4, 124(6)
  01c2938  lfs 4, 4(5)
  01c293c  addic 6, 6, 8
  01c2940  addic 5, 5, 8
  01c2944  fmuls 4, 4, 5
  01c2948  stfs 4, 4(4)
  01c294c  addic 4, 4, 8
  01c2950  bdnz 0x1c292c
  01c2954  ori 7, 1, 0
  01c2958  lis 6, 115
  01c295c  addic 5, 7, 124
  01c2960  mtctr 30
  01c2964  addic 6, 6, 22752
  01c2968  ori 4, 5, 0
  01c296c  lfs 4, 124(7)
  01c2970  lfs 5, 0(6)
  01c2974  fmuls 4, 4, 5
  01c2978  lfs 5, 4(6)
  01c297c  addic 6, 6, 8
  01c2980  stfs 4, 124(7)
  01c2984  lfs 4, 4(5)
  01c2988  addic 7, 7, 8
  01c298c  fmuls 4, 4, 5
  01c2990  stfs 4, 4(5)
  01c2994  addic 5, 5, 8
  01c2998  bdnz 0x1c296c
  01c299c  ori 5, 3, 0
  01c29a0  ori 3, 1, 0
  01c29a4  mtctr 5
  01c29a8  lfs 4, 124(3)
  01c29ac  fadds 1, 1, 4
  01c29b0  lfs 4, 4(4)
  01c29b4  addic 3, 3, 16
  01c29b8  lfs 5, 8(4)
  01c29bc  lfs 6, 12(4)
  01c29c0  addic 4, 4, 16
  01c29c4  fadds 1, 1, 4
  01c29c8  fadds 1, 1, 5
  01c29cc  fadds 1, 1, 6
  01c29d0  bdnz 0x1c29a8
  01c29d4  lis 3, 28
  01c29d8  addi 3, 3, 9924
  01c29dc  lfs 4, 4(3)
  01c29e0  fadds 1, 1, 4
  01c29e4  fmadds 1, 1, 3, 2
  01c29e8  lis 3, 28
  01c29ec  lis 4, 114
  01c29f0  addi 3, 3, 9924
  01c29f4  lis 6, 114
  01c29f8  addic 5, 29, 360
  01c29fc  lfs 4, 8(3)
  01c2a00  lfs 3, 12(3)
  01c2a04  lfs 5, -3048(4)
  01c2a08  lfs 6, -3052(6)
  01c2a0c  ori 3, 31, 0
  01c2a10  fmuls 2, 5, 4
  01c2a14  fmuls 3, 5, 3
  01c2a18  fmuls 4, 6, 4
  01c2a1c  bl 0xff2e8
  01c2a20  nop
  01c2a24  lis 3, 161
  01c2a28  lwz 3, 1808(3)
  01c2a2c  clrlwi 3, 3, 30
  01c2a30  cmpwi 3, 3
  01c2a34  bf 2, 0x1c2ae8
  01c2a38  lis 3, 28
  01c2a3c  ori 6, 31, 0
  01c2a40  addi 4, 3, 9924
  01c2a44  addic 3, 31, 16
  01c2a48  li 7, 0
  01c2a4c  lfs 1, 16(4)
  01c2a50  lfs 2, 20(4)
  01c2a54  bl 0xff6b8
  01c2a58  nop
  01c2a5c  cmpwi 3, 0
  01c2a60  bt 2, 0x1c2ae8
  01c2a64  lis 3, 161
  01c2a68  addic 3, 3, 2368
  01c2a6c  lwz 4, 24(3)
  01c2a70  cmpwi 4, 0
  01c2a74  bt 2, 0x1c2ae8
  01c2a78  lwz 3, 28(3)
  01c2a7c  cmpwi 3, 0
  01c2a80  bf 1, 0x1c2ae8
  01c2a84  lhz 3, 166(4)
  01c2a88  cmpwi 3, 1069
  01c2a8c  bf 2, 0x1c2ae8
  01c2a90  lbz 3, 188(4)
  01c2a94  cmpwi 3, 1
  01c2a98  bf 0, 0x1c2ae8
  01c2a9c  lwz 3, 120(4)
  01c2aa0  lbz 3, 190(3)
  01c2aa4  cmpwi 3, 0
  01c2aa8  bt 2, 0x1c2ae0
  01c2aac  lfs 1, 16(4)
  01c2ab0  lfs 2, 16(31)
  01c2ab4  lis 3, 28
  01c2ab8  lfs 3, 20(4)
  01c2abc  lfs 4, 20(31)
  01c2ac0  fsubs 1, 1, 2
  01c2ac4  addi 3, 3, 9924
  01c2ac8  fsubs 3, 3, 4
  01c2acc  lfs 5, 24(3)
  01c2ad0  fmadds 1, 1, 5, 2
  01c2ad4  fmadds 2, 3, 5, 4
  01c2ad8  stfs 1, 16(31)
  01c2adc  stfs 2, 20(31)
  01c2ae0  li 3, 1
  01c2ae4  stb 3, 188(4)
  01c2ae8  ori 3, 30, 0
  01c2aec  ld 0, 208(1)
  01c2af0  mtlr 0
  01c2af4  ld 28, 160(1)
  01c2af8  ld 29, 168(1)
  01c2afc  ld 30, 176(1)
  01c2b00  ld 31, 184(1)
  01c2b04  addi 1, 1, 192
  01c2b08  blr

M1106_001c2b20:   # 0x1c2b20, 0x8c bytes
  01c2b20  fcmpu 0, 1, 2
  01c2b24  lis 5, 28
  01c2b28  lis 6, 114
  01c2b2c  addi 5, 5, 11020
  01c2b30  lfs 5, 0(5)
  01c2b34  lfs 6, -3064(6)
  01c2b38  lfs 4, 128(4)
  01c2b3c  cror 6, 0, 2
  01c2b40  fmuls 7, 6, 5
  01c2b44  bt 6, 0x1c2b84
  01c2b48  fsubs 1, 1, 2
  01c2b4c  lis 5, 28
  01c2b50  addi 5, 5, 11020
  01c2b54  lfs 2, 4(5)
  01c2b58  lfs 8, 8(5)
  01c2b5c  lfs 9, 12(5)
  01c2b60  fsub 10, 2, 1
  01c2b64  lfs 11, 16(5)
  01c2b68  fsel 1, 10, 1, 2
  01c2b6c  fmsubs 2, 6, 11, 7
  01c2b70  fsub 6, 1, 8
  01c2b74  fsel 1, 6, 1, 8
  01c2b78  fmuls 1, 1, 9
  01c2b7c  fmuls 1, 1, 1
  01c2b80  fmadds 7, 1, 2, 7
  01c2b84  lis 5, 114
  01c2b88  stfs 7, 444(4)
  01c2b8c  stfs 7, 148(4)
  01c2b90  lfs 1, -3064(5)
  01c2b94  fmuls 1, 1, 5
  01c2b98  fdivs 2, 4, 1
  01c2b9c  fmr 1, 7
  01c2ba0  fmuls 2, 2, 3
  01c2ba4  stfs 2, 88(3)
  01c2ba8  blr

M1106_001c2bb8:   # 0x1c2bb8, 0x4f0 bytes
  01c2bb8  stdu 1, -272(1)
  01c2bbc  mflr 0
  01c2bc0  std 0, 288(1)
  01c2bc4  stfd 30, 256(1)
  01c2bc8  stfd 31, 264(1)
  01c2bcc  lfs 1, 0(5)
  01c2bd0  lfs 2, 16(3)
  01c2bd4  lfs 3, 4(5)
  01c2bd8  lfs 4, 20(3)
  01c2bdc  fsubs 1, 1, 2
  01c2be0  lis 8, 28
  01c2be4  std 26, 208(1)
  01c2be8  fsubs 2, 3, 4
  01c2bec  addi 8, 8, 11180
  01c2bf0  std 31, 248(1)
  01c2bf4  lis 26, 115
  01c2bf8  ori 31, 3, 0
  01c2bfc  std 30, 240(1)
  01c2c00  addic 26, 26, 22784
  01c2c04  ori 30, 4, 0
  01c2c08  fabs 4, 1
  01c2c0c  fabs 5, 2
  01c2c10  stfs 1, 124(1)
  01c2c14  stfs 2, 128(1)
  01c2c18  std 29, 232(1)
  01c2c1c  lfs 1, 72(3)
  01c2c20  std 28, 224(1)
  01c2c24  ori 29, 5, 0
  01c2c28  std 27, 216(1)
  01c2c2c  ori 28, 6, 0
  01c2c30  ori 27, 7, 0
  01c2c34  fsubs 2, 4, 5
  01c2c38  stfs 2, 132(1)
  01c2c3c  lwz 9, 124(1)
  01c2c40  lfs 30, 0(8)
  01c2c44  lfs 2, 124(1)
  01c2c48  lwz 10, 128(1)
  01c2c4c  lfs 3, 128(1)
  01c2c50  lfs 31, 4(8)
  01c2c54  fabs 2, 2
  01c2c58  lwz 8, 132(1)
  01c2c5c  rlwinm 10, 10, 3, 29, 29
  01c2c60  lfs 6, 132(1)
  01c2c64  fabs 3, 3
  01c2c68  rlwimi 10, 8, 2, 30, 30
  01c2c6c  fsub 7, 6, 30
  01c2c70  fsub 6, 6, 30
  01c2c74  rlwimi 10, 9, 4, 28, 28
  01c2c78  ori 8, 26, 0
  01c2c7c  slwi 9, 10, 2
  01c2c80  rlwimi 8, 10, 2, 26, 28
  01c2c84  clrldi 8, 8, 32
  01c2c88  fsel 5, 7, 2, 5
  01c2c8c  lfsx 2, 26, 9
  01c2c90  fsel 4, 6, 3, 4
  01c2c94  lfs 3, 4(8)
  01c2c98  fcmpu 0, 5, 30
  01c2c9c  bt 1, 0x1c2ca8
  01c2ca0  fmr 2, 30
  01c2ca4  b 0x1c2dc0
  01c2ca8  fsubs 6, 4, 5
  01c2cac  fadds 4, 4, 5
  01c2cb0  addic 3, 1, 16
  01c2cb4  li 7, 2
  01c2cb8  addic 4, 3, 152
  01c2cbc  addic 5, 3, 168
  01c2cc0  mtctr 7
  01c2cc4  fdivs 4, 6, 4
  01c2cc8  fmuls 5, 4, 4
  01c2ccc  stfs 4, 180(1)
  01c2cd0  stfs 4, 172(1)
  01c2cd4  stfs 4, 176(1)
  01c2cd8  stfs 4, 168(1)
  01c2cdc  lfs 7, 180(1)
  01c2ce0  lfs 8, 172(1)
  01c2ce4  lfs 9, 176(1)
  01c2ce8  fmuls 6, 5, 5
  01c2cec  fmuls 8, 8, 5
  01c2cf0  fmuls 7, 7, 6
  01c2cf4  fmuls 4, 6, 6
  01c2cf8  fmuls 6, 9, 6
  01c2cfc  stfs 8, 172(1)
  01c2d00  fmuls 5, 7, 5
  01c2d04  stfs 6, 176(1)
  01c2d08  stfs 5, 180(1)
  01c2d0c  lfs 5, 152(3)
  01c2d10  fmuls 5, 5, 4
  01c2d14  stfs 5, 168(3)
  01c2d18  lfs 5, 4(4)
  01c2d1c  addic 3, 3, 8
  01c2d20  addic 4, 4, 8
  01c2d24  fmuls 5, 5, 4
  01c2d28  stfs 5, 4(5)
  01c2d2c  addic 5, 5, 8
  01c2d30  bdnz 0x1c2d0c
  01c2d34  ori 3, 1, 0
  01c2d38  lis 4, 115
  01c2d3c  li 8, 4
  01c2d40  addic 5, 3, 168
  01c2d44  addic 4, 4, 22752
  01c2d48  ori 6, 5, 0
  01c2d4c  mtctr 8
  01c2d50  lfs 4, 168(3)
  01c2d54  lfs 5, 0(4)
  01c2d58  fmuls 4, 4, 5
  01c2d5c  lfs 5, 4(4)
  01c2d60  addic 4, 4, 8
  01c2d64  stfs 4, 168(3)
  01c2d68  lfs 4, 4(5)
  01c2d6c  addic 3, 3, 8
  01c2d70  fmuls 4, 4, 5
  01c2d74  stfs 4, 4(5)
  01c2d78  addic 5, 5, 8
  01c2d7c  bdnz 0x1c2d50
  01c2d80  fmr 4, 30
  01c2d84  ori 3, 1, 0
  01c2d88  mtctr 7
  01c2d8c  lfs 5, 168(3)
  01c2d90  fadds 4, 4, 5
  01c2d94  addic 3, 3, 16
  01c2d98  lfs 5, 4(6)
  01c2d9c  lfs 6, 8(6)
  01c2da0  lfs 7, 12(6)
  01c2da4  addic 6, 6, 16
  01c2da8  fadds 4, 4, 5
  01c2dac  fadds 4, 4, 6
  01c2db0  fadds 4, 4, 7
  01c2db4  bdnz 0x1c2d8c
  01c2db8  fadds 4, 4, 31
  01c2dbc  fmadds 2, 4, 2, 3
  01c2dc0  bl 0x5026a0
  01c2dc4  nop
  01c2dc8  lfs 2, 152(30)
  01c2dcc  fcmpu 0, 1, 2
  01c2dd0  cror 6, 0, 2
  01c2dd4  bt 6, 0x1c3074
  01c2dd8  li 3, 0
  01c2ddc  lis 4, 16256
  01c2de0  stw 3, 360(30)
  01c2de4  lbz 3, 32(31)
  01c2de8  stw 4, 88(31)
  01c2dec  stb 3, 500(30)
  01c2df0  stb 28, 502(30)
  01c2df4  stb 27, 501(30)
  01c2df8  lfs 1, 0(29)
  01c2dfc  stfs 1, 192(30)
  01c2e00  lfs 1, 4(29)
  01c2e04  stfs 1, 196(30)
  01c2e08  lfs 1, 8(29)
  01c2e0c  stfs 1, 200(30)
  01c2e10  lfs 1, 12(29)
  01c2e14  stfs 1, 204(30)
  01c2e18  lfs 1, 0(29)
  01c2e1c  lfs 2, 16(31)
  01c2e20  lfs 3, 4(29)
  01c2e24  lfs 4, 20(31)
  01c2e28  fsubs 1, 1, 2
  01c2e2c  fsubs 2, 3, 4
  01c2e30  fabs 3, 1
  01c2e34  fabs 4, 2
  01c2e38  stfs 1, 112(1)
  01c2e3c  stfs 2, 116(1)
  01c2e40  fsubs 1, 3, 4
  01c2e44  stfs 1, 120(1)
  01c2e48  lwz 3, 112(1)
  01c2e4c  lfs 1, 112(1)
  01c2e50  lwz 4, 116(1)
  01c2e54  lfs 2, 116(1)
  01c2e58  lwz 5, 120(1)
  01c2e5c  rlwinm 4, 4, 3, 29, 29
  01c2e60  fabs 5, 2
  01c2e64  lfs 2, 120(1)
  01c2e68  fabs 1, 1
  01c2e6c  rlwimi 4, 5, 2, 30, 30
  01c2e70  fsub 6, 2, 30
  01c2e74  fsub 7, 2, 30
  01c2e78  rlwimi 4, 3, 4, 28, 28
  01c2e7c  ori 3, 26, 0
  01c2e80  rlwimi 3, 4, 2, 26, 28
  01c2e84  slwi 4, 4, 2
  01c2e88  clrldi 3, 3, 32
  01c2e8c  fsel 4, 6, 1, 4
  01c2e90  lfsx 1, 26, 4
  01c2e94  fsel 3, 7, 5, 3
  01c2e98  lfs 2, 4(3)
  01c2e9c  fcmpu 0, 4, 30
  01c2ea0  bt 1, 0x1c2eac
  01c2ea4  fmr 31, 30
  01c2ea8  b 0x1c2fc4
  01c2eac  fsubs 5, 3, 4
  01c2eb0  fadds 3, 3, 4
  01c2eb4  addic 3, 1, 16
  01c2eb8  li 7, 2
  01c2ebc  addic 5, 3, 136
  01c2ec0  addic 4, 3, 120
  01c2ec4  mtctr 7
  01c2ec8  fdivs 3, 5, 3
  01c2ecc  fmuls 4, 3, 3
  01c2ed0  stfs 3, 148(1)
  01c2ed4  stfs 3, 140(1)
  01c2ed8  stfs 3, 144(1)
  01c2edc  stfs 3, 136(1)
  01c2ee0  lfs 6, 148(1)
  01c2ee4  lfs 7, 140(1)
  01c2ee8  lfs 8, 144(1)
  01c2eec  fmuls 5, 4, 4
  01c2ef0  fmuls 7, 7, 4
  01c2ef4  fmuls 6, 6, 5
  01c2ef8  fmuls 3, 5, 5
  01c2efc  fmuls 5, 8, 5
  01c2f00  stfs 7, 140(1)
  01c2f04  fmuls 4, 6, 4
  01c2f08  stfs 5, 144(1)
  01c2f0c  stfs 4, 148(1)
  01c2f10  lfs 4, 120(3)
  01c2f14  fmuls 4, 4, 3
  01c2f18  stfs 4, 136(3)
  01c2f1c  lfs 4, 4(4)
  01c2f20  addic 4, 4, 8
  01c2f24  fmuls 4, 4, 3
  01c2f28  addic 3, 3, 8
  01c2f2c  stfs 4, 4(5)
  01c2f30  addic 5, 5, 8
  01c2f34  bdnz 0x1c2f10
  01c2f38  li 5, 4
  01c2f3c  ori 3, 1, 0
  01c2f40  mtctr 5
  01c2f44  lis 4, 115
  01c2f48  addic 5, 3, 136
  01c2f4c  addic 4, 4, 22752
  01c2f50  ori 6, 5, 0
  01c2f54  lfs 3, 136(3)
  01c2f58  lfs 4, 0(4)
  01c2f5c  fmuls 3, 3, 4
  01c2f60  lfs 4, 4(4)
  01c2f64  addic 4, 4, 8
  01c2f68  stfs 3, 136(3)
  01c2f6c  lfs 3, 4(5)
  01c2f70  addic 3, 3, 8
  01c2f74  fmuls 3, 3, 4
  01c2f78  stfs 3, 4(5)
  01c2f7c  addic 5, 5, 8
  01c2f80  bdnz 0x1c2f54
  01c2f84  ori 3, 1, 0
  01c2f88  fmr 3, 30
  01c2f8c  mtctr 7
  01c2f90  lfs 4, 136(3)
  01c2f94  fadds 3, 3, 4
  01c2f98  lfs 4, 4(6)
  01c2f9c  addic 3, 3, 16
  01c2fa0  lfs 5, 8(6)
  01c2fa4  lfs 6, 12(6)
  01c2fa8  addic 6, 6, 16
  01c2fac  fadds 3, 3, 4
  01c2fb0  fadds 3, 3, 5
  01c2fb4  fadds 3, 3, 6
  01c2fb8  bdnz 0x1c2f90
  01c2fbc  fadds 31, 3, 31
  01c2fc0  fmadds 31, 31, 1, 2
  01c2fc4  fcmpu 0, 31, 30
  01c2fc8  cror 6, 1, 2
  01c2fcc  bt 6, 0x1c301c
  01c2fd0  lbz 3, 83(31)
  01c2fd4  cmpwi 3, 3
  01c2fd8  bt 2, 0x1c3064
  01c2fdc  li 3, 0
  01c2fe0  li 4, 1
  01c2fe4  bl 0xfe484
  01c2fe8  nop
  01c2fec  ori 30, 3, 0
  01c2ff0  li 3, 15
  01c2ff4  li 4, 20
  01c2ff8  bl 0xfe484
  01c2ffc  nop
  01c3000  ori 6, 3, 0
  01c3004  ori 3, 31, 0
  01c3008  li 4, 3
  01c300c  ori 5, 30, 0
  01c3010  bl 0xfddc0
  01c3014  nop
  01c3018  b 0x1c3064
  01c301c  lbz 3, 83(31)
  01c3020  cmpwi 3, 14
  01c3024  bt 2, 0x1c3064
  01c3028  li 3, 0
  01c302c  li 4, 1
  01c3030  bl 0xfe484
  01c3034  nop
  01c3038  ori 30, 3, 0
  01c303c  li 3, 15
  01c3040  li 4, 20
  01c3044  bl 0xfe484
  01c3048  nop
  01c304c  ori 6, 3, 0
  01c3050  ori 3, 31, 0
  01c3054  li 4, 14
  01c3058  ori 5, 30, 0
  01c305c  bl 0xfddc0
  01c3060  nop
  01c3064  li 4, 7
  01c3068  li 3, 1
  01c306c  stb 4, 32(31)
  01c3070  b 0x1c3078
  01c3074  li 3, 0
  01c3078  ld 0, 288(1)
  01c307c  mtlr 0
  01c3080  lfd 30, 256(1)
  01c3084  lfd 31, 264(1)
  01c3088  ld 26, 208(1)
  01c308c  ld 27, 216(1)
  01c3090  ld 28, 224(1)
  01c3094  ld 29, 232(1)
  01c3098  ld 30, 240(1)
  01c309c  ld 31, 248(1)
  01c30a0  addi 1, 1, 272
  01c30a4  blr

M1106_001c30c0:   # 0x1c30c0, 0x2b0 bytes
  01c30c0  stdu 1, -176(1)
  01c30c4  mflr 0
  01c30c8  std 0, 192(1)
  01c30cc  std 30, 160(1)
  01c30d0  ori 30, 3, 0
  01c30d4  std 31, 168(1)
  01c30d8  lbz 3, 32(3)
  01c30dc  ori 31, 4, 0
  01c30e0  cmpwi 3, 10
  01c30e4  bf 0, 0x1c32c0
  01c30e8  lfs 1, 0(5)
  01c30ec  lfs 2, 16(30)
  01c30f0  lfs 3, 4(5)
  01c30f4  lis 3, 28
  01c30f8  lfs 4, 20(30)
  01c30fc  fsubs 1, 1, 2
  01c3100  addi 3, 3, 12456
  01c3104  fsubs 2, 3, 4
  01c3108  lis 4, 115
  01c310c  addic 4, 4, 22784
  01c3110  fabs 5, 1
  01c3114  fabs 4, 2
  01c3118  stfs 1, 112(1)
  01c311c  stfs 2, 116(1)
  01c3120  fsubs 1, 5, 4
  01c3124  stfs 1, 120(1)
  01c3128  lwz 5, 112(1)
  01c312c  lfs 1, 0(3)
  01c3130  lfs 2, 112(1)
  01c3134  lwz 3, 116(1)
  01c3138  lfs 3, 116(1)
  01c313c  fabs 2, 2
  01c3140  lwz 6, 120(1)
  01c3144  rlwinm 3, 3, 3, 29, 29
  01c3148  fabs 6, 3
  01c314c  lfs 3, 120(1)
  01c3150  rlwimi 3, 6, 2, 30, 30
  01c3154  fsub 7, 3, 1
  01c3158  rlwimi 3, 5, 4, 28, 28
  01c315c  fsub 8, 3, 1
  01c3160  ori 5, 4, 0
  01c3164  rlwimi 5, 3, 2, 26, 28
  01c3168  slwi 3, 3, 2
  01c316c  clrldi 5, 5, 32
  01c3170  fsel 4, 7, 2, 4
  01c3174  lfsx 3, 4, 3
  01c3178  lfs 2, 4(5)
  01c317c  fsel 5, 8, 6, 5
  01c3180  fcmpu 0, 4, 1
  01c3184  bt 1, 0x1c318c
  01c3188  b 0x1c32b0
  01c318c  fsubs 6, 5, 4
  01c3190  fadds 4, 5, 4
  01c3194  addic 6, 1, 16
  01c3198  li 3, 2
  01c319c  addic 4, 6, 124
  01c31a0  addic 5, 6, 108
  01c31a4  mtctr 3
  01c31a8  fdivs 4, 6, 4
  01c31ac  fmuls 6, 4, 4
  01c31b0  stfs 4, 136(1)
  01c31b4  stfs 4, 128(1)
  01c31b8  stfs 4, 132(1)
  01c31bc  stfs 4, 124(1)
  01c31c0  lfs 7, 136(1)
  01c31c4  lfs 8, 128(1)
  01c31c8  lfs 9, 132(1)
  01c31cc  fmuls 4, 6, 6
  01c31d0  fmuls 8, 8, 6
  01c31d4  fmuls 7, 7, 4
  01c31d8  fmuls 5, 4, 4
  01c31dc  fmuls 4, 9, 4
  01c31e0  stfs 8, 128(1)
  01c31e4  fmuls 6, 7, 6
  01c31e8  stfs 4, 132(1)
  01c31ec  stfs 6, 136(1)
  01c31f0  lfs 4, 108(6)
  01c31f4  fmuls 4, 4, 5
  01c31f8  stfs 4, 124(6)
  01c31fc  lfs 4, 4(5)
  01c3200  addic 5, 5, 8
  01c3204  fmuls 4, 4, 5
  01c3208  addic 6, 6, 8
  01c320c  stfs 4, 4(4)
  01c3210  addic 4, 4, 8
  01c3214  bdnz 0x1c31f0
  01c3218  ori 7, 1, 0
  01c321c  li 4, 4
  01c3220  lis 6, 115
  01c3224  addic 5, 7, 124
  01c3228  mtctr 4
  01c322c  addic 6, 6, 22752
  01c3230  ori 4, 5, 0
  01c3234  lfs 4, 124(7)
  01c3238  lfs 5, 0(6)
  01c323c  fmuls 4, 4, 5
  01c3240  lfs 5, 4(6)
  01c3244  addic 6, 6, 8
  01c3248  stfs 4, 124(7)
  01c324c  lfs 4, 4(5)
  01c3250  addic 7, 7, 8
  01c3254  fmuls 4, 4, 5
  01c3258  stfs 4, 4(5)
  01c325c  addic 5, 5, 8
  01c3260  bdnz 0x1c3234
  01c3264  ori 5, 3, 0
  01c3268  ori 3, 1, 0
  01c326c  mtctr 5
  01c3270  lfs 4, 124(3)
  01c3274  fadds 1, 1, 4
  01c3278  lfs 4, 4(4)
  01c327c  addic 3, 3, 16
  01c3280  lfs 5, 8(4)
  01c3284  lfs 6, 12(4)
  01c3288  addic 4, 4, 16
  01c328c  fadds 1, 1, 4
  01c3290  fadds 1, 1, 5
  01c3294  fadds 1, 1, 6
  01c3298  bdnz 0x1c3270
  01c329c  lis 3, 28
  01c32a0  addi 3, 3, 12456
  01c32a4  lfs 4, 4(3)
  01c32a8  fadds 1, 1, 4
  01c32ac  fmadds 1, 1, 3, 2
  01c32b0  lfs 2, 72(30)
  01c32b4  bl 0x5025e0
  01c32b8  nop
  01c32bc  b 0x1c32cc
  01c32c0  lis 3, 28
  01c32c4  addi 3, 3, 12456
  01c32c8  lfs 1, 0(3)
  01c32cc  lis 3, 28
  01c32d0  stfs 1, 616(31)
  01c32d4  addi 3, 3, 12456
  01c32d8  lfs 2, 8(3)
  01c32dc  fcmpu 0, 1, 2
  01c32e0  cror 6, 0, 2
  01c32e4  bt 6, 0x1c32f8
  01c32e8  lis 3, 16306
  01c32ec  ori 3, 3, 47298
  01c32f0  stw 3, 616(31)
  01c32f4  b 0x1c331c
  01c32f8  lis 3, 28
  01c32fc  addi 3, 3, 12456
  01c3300  lfs 2, 12(3)
  01c3304  fcmpu 0, 1, 2
  01c3308  cror 6, 1, 2
  01c330c  bt 6, 0x1c331c
  01c3310  lis 3, -16462
  01c3314  ori 3, 3, 47298
  01c3318  stw 3, 616(31)
  01c331c  lis 3, 28
  01c3320  lis 5, 114
  01c3324  lfs 1, 508(31)
  01c3328  addi 3, 3, 12456
  01c332c  stfs 1, 612(31)
  01c3330  addic 4, 31, 512
  01c3334  lfs 1, 16(3)
  01c3338  lfs 2, 20(3)
  01c333c  lfs 3, -3060(5)
  01c3340  ori 3, 30, 0
  01c3344  li 5, 11
  01c3348  fmuls 1, 3, 1
  01c334c  fmuls 2, 3, 2
  01c3350  bl 0x1167c8
  01c3354  nop
  01c3358  ld 0, 192(1)
  01c335c  mtlr 0
  01c3360  ld 30, 160(1)
  01c3364  ld 31, 168(1)
  01c3368  addi 1, 1, 176
  01c336c  blr

M1106_001c3370:   # 0x1c3370, 0x108 bytes
  01c3370  stdu 1, -160(1)
  01c3374  mflr 0
  01c3378  std 0, 176(1)
  01c337c  std 31, 152(1)
  01c3380  lis 4, 161
  01c3384  ori 31, 3, 0
  01c3388  lwz 3, 1800(4)
  01c338c  std 30, 144(1)
  01c3390  std 29, 136(1)
  01c3394  std 28, 128(1)
  01c3398  std 27, 120(1)
  01c339c  cmpwi 3, 2
  01c33a0  bf 2, 0x1c3454
  01c33a4  lis 3, 151
  01c33a8  lbz 4, -16268(3)
  01c33ac  cmpwi 4, 0
  01c33b0  bt 2, 0x1c3454
  01c33b4  lis 28, 150
  01c33b8  li 27, 0
  01c33bc  addic 28, 28, -12976
  01c33c0  lhz 3, 68(28)
  01c33c4  extsh 5, 3
  01c33c8  cmpwi 5, 0
  01c33cc  bf 1, 0x1c3454
  01c33d0  lis 29, 118
  01c33d4  ori 30, 28, 0
  01c33d8  addic 29, 29, 16336
  01c33dc  lwz 5, 376(30)
  01c33e0  lhz 6, 166(31)
  01c33e4  extsh 6, 6
  01c33e8  lhz 7, 166(5)
  01c33ec  extsh 7, 7
  01c33f0  cmpw 7, 6
  01c33f4  bf 2, 0x1c3440
  01c33f8  clrlwi 4, 4, 24
  01c33fc  cmpwi 4, 0
  01c3400  bt 2, 0x1c3440
  01c3404  lbz 6, 1(29)
  01c3408  cmpwi 6, 0
  01c340c  bf 2, 0x1c3440
  01c3410  ori 3, 5, 0
  01c3414  li 4, 11
  01c3418  ori 5, 29, 0
  01c341c  bl 0xf0ea8
  01c3420  nop
  01c3424  lis 4, 16432
  01c3428  lhz 3, 68(28)
  01c342c  lis 5, 151
  01c3430  stw 4, 32(29)
  01c3434  stw 4, 36(29)
  01c3438  stw 4, 40(29)
  01c343c  lbz 4, -16268(5)
  01c3440  extsh 5, 3
  01c3444  addic 27, 27, 1
  01c3448  addic 30, 30, 4
  01c344c  cmpw 27, 5
  01c3450  bt 0, 0x1c33dc
  01c3454  ld 0, 176(1)
  01c3458  mtlr 0
  01c345c  ld 27, 120(1)
  01c3460  ld 28, 128(1)
  01c3464  ld 29, 136(1)
  01c3468  ld 30, 144(1)
  01c346c  ld 31, 152(1)
  01c3470  addi 1, 1, 160
  01c3474  blr

M1106_001c3478:   # 0x1c3478, 0x88 bytes
  01c3478  stdu 1, -112(1)
  01c347c  mflr 0
  01c3480  std 0, 128(1)
  01c3484  lis 4, 239
  01c3488  lhz 4, 3512(4)
  01c348c  extsh 4, 4
  01c3490  cmpwi 4, 0
  01c3494  bf 1, 0x1c34f0
  01c3498  lis 4, 239
  01c349c  li 5, 10
  01c34a0  addic 4, 4, 3512
  01c34a4  mtctr 5
  01c34a8  lhz 7, 0(4)
  01c34ac  li 5, 64
  01c34b0  li 6, 64
  01c34b4  extsh 8, 7
  01c34b8  subc 6, 6, 7
  01c34bc  subc 5, 5, 8
  01c34c0  sradi 5, 5, 63
  01c34c4  and 5, 5, 6
  01c34c8  addc 5, 7, 5
  01c34cc  addic 5, 5, -4
  01c34d0  sth 5, 0(4)
  01c34d4  addic 4, 4, 2
  01c34d8  bdnz 0x1c34a8
  01c34dc  lis 5, 113
  01c34e0  ori 4, 3, 0
  01c34e4  addic 3, 5, -29520
  01c34e8  bl 0x6d720
  01c34ec  nop
  01c34f0  ld 0, 128(1)
  01c34f4  mtlr 0
  01c34f8  addi 1, 1, 112
  01c34fc  blr

M1106_001c3510:   # 0x1c3510, 0x254 bytes
  01c3510  stdu 1, -160(1)
  01c3514  mflr 0
  01c3518  std 0, 176(1)
  01c351c  stfd 29, 136(1)
  01c3520  stfd 30, 144(1)
  01c3524  stfd 31, 152(1)
  01c3528  lis 4, 28
  01c352c  std 30, 120(1)
  01c3530  lis 6, 118
  01c3534  addi 30, 4, 13568
  01c3538  lis 4, 118
  01c353c  li 7, 1
  01c3540  std 31, 128(1)
  01c3544  lis 8, 118
  01c3548  ori 31, 3, 0
  01c354c  lfs 1, 0(30)
  01c3550  li 3, 10
  01c3554  lfs 2, 16408(6)
  01c3558  ori 5, 31, 0
  01c355c  stw 7, 16400(4)
  01c3560  fmuls 1, 2, 1
  01c3564  stw 7, 16404(8)
  01c3568  li 4, 0
  01c356c  stfs 1, 16408(6)
  01c3570  bl 0x15d12c
  01c3574  nop
  01c3578  lis 5, 239
  01c357c  lis 7, 239
  01c3580  lfs 3, 4(30)
  01c3584  li 9, 0
  01c3588  lfs 2, 8(30)
  01c358c  addic 5, 5, -1496
  01c3590  lfs 1, 12(30)
  01c3594  addic 7, 7, 3312
  01c3598  ori 8, 9, 0
  01c359c  addic 6, 5, 20
  01c35a0  addic 4, 5, 4
  01c35a4  addic 3, 7, -16
  01c35a8  lwz 10, 0(6)
  01c35ac  cmpwi 10, 0
  01c35b0  bt 2, 0x1c36bc
  01c35b4  lhz 11, 0(5)
  01c35b8  extsh 11, 11
  01c35bc  sldi 11, 11, 4
  01c35c0  addc 12, 11, 3
  01c35c4  addc 11, 11, 7
  01c35c8  clrldi 12, 12, 32
  01c35cc  clrldi 11, 11, 32
  01c35d0  lfs 4, 4(12)
  01c35d4  lfs 5, 4(11)
  01c35d8  lfs 6, 0(12)
  01c35dc  fsubs 4, 4, 5
  01c35e0  lfs 7, 0(11)
  01c35e4  lfs 8, 8(12)
  01c35e8  fsubs 6, 6, 7
  01c35ec  lfs 9, 8(11)
  01c35f0  fsubs 8, 8, 9
  01c35f4  lfs 11, 0(4)
  01c35f8  fmuls 10, 4, 4
  01c35fc  lfs 12, 20(10)
  01c3600  lfs 13, 16(10)
  01c3604  lfs 0, 24(10)
  01c3608  fmadds 10, 6, 6, 10
  01c360c  fmadds 10, 8, 8, 10
  01c3610  fsqrts 10, 10
  01c3614  stw 8, 0(6)
  01c3618  lfs 31, 28(10)
  01c361c  stfs 31, 60(10)
  01c3620  li 11, 70
  01c3624  sth 11, 10(10)
  01c3628  fdivs 11, 11, 10
  01c362c  fdivs 10, 1, 10
  01c3630  fmuls 4, 4, 11
  01c3634  fmuls 6, 6, 11
  01c3638  fmuls 8, 8, 11
  01c363c  fadds 5, 5, 4
  01c3640  fadds 7, 7, 6
  01c3644  fadds 9, 9, 8
  01c3648  fsubs 5, 12, 5
  01c364c  fsubs 7, 13, 7
  01c3650  fsubs 9, 0, 9
  01c3654  fmuls 11, 5, 5
  01c3658  fmadds 11, 7, 7, 11
  01c365c  fmadds 11, 9, 9, 11
  01c3660  fsqrts 11, 11
  01c3664  fdivs 12, 2, 11
  01c3668  fsub 13, 3, 11
  01c366c  fsub 0, 3, 11
  01c3670  fsub 31, 3, 11
  01c3674  fsub 30, 11, 3
  01c3678  fsub 29, 11, 3
  01c367c  fsub 11, 11, 3
  01c3680  fmuls 9, 12, 9
  01c3684  fmuls 5, 12, 5
  01c3688  fmuls 7, 12, 7
  01c368c  fsel 12, 13, 3, 9
  01c3690  fsel 13, 0, 3, 5
  01c3694  fsel 0, 31, 3, 7
  01c3698  fsel 9, 30, 12, 9
  01c369c  fsel 5, 29, 13, 5
  01c36a0  fsel 7, 11, 0, 7
  01c36a4  fmadds 8, 8, 10, 9
  01c36a8  fmadds 4, 4, 10, 5
  01c36ac  fmadds 5, 6, 10, 7
  01c36b0  stfs 8, 56(10)
  01c36b4  stfs 4, 52(10)
  01c36b8  stfs 5, 48(10)
  01c36bc  addic 9, 9, 1
  01c36c0  addic 6, 6, 24
  01c36c4  cmpwi 9, 200
  01c36c8  addic 5, 5, 24
  01c36cc  addic 4, 4, 24
  01c36d0  bt 0, 0x1c35a8
  01c36d4  lis 3, 239
  01c36d8  lhz 3, 3512(3)
  01c36dc  extsh 3, 3
  01c36e0  cmpwi 3, 0
  01c36e4  bf 1, 0x1c3740
  01c36e8  lis 3, 239
  01c36ec  li 4, 10
  01c36f0  addic 3, 3, 3512
  01c36f4  mtctr 4
  01c36f8  lhz 6, 0(3)
  01c36fc  li 4, 64
  01c3700  extsh 7, 6
  01c3704  li 5, 64
  01c3708  subc 4, 4, 7
  01c370c  subc 5, 5, 6
  01c3710  sradi 4, 4, 63
  01c3714  and 4, 4, 5
  01c3718  addc 4, 6, 4
  01c371c  addic 4, 4, -4
  01c3720  sth 4, 0(3)
  01c3724  addic 3, 3, 2
  01c3728  bdnz 0x1c36f8
  01c372c  lis 3, 113
  01c3730  ori 4, 31, 0
  01c3734  addic 3, 3, -29520
  01c3738  bl 0x6d720
  01c373c  nop
  01c3740  ld 0, 176(1)
  01c3744  mtlr 0
  01c3748  lfd 29, 136(1)
  01c374c  lfd 30, 144(1)
  01c3750  lfd 31, 152(1)
  01c3754  ld 30, 120(1)
  01c3758  ld 31, 128(1)
  01c375c  addi 1, 1, 160
  01c3760  blr

M1106_001c3770:   # 0x1c3770, 0x21c bytes
  01c3770  stdu 1, -160(1)
  01c3774  mflr 0
  01c3778  std 0, 176(1)
  01c377c  stfd 31, 152(1)
  01c3780  lis 5, 118
  01c3784  lwz 5, 16400(5)
  01c3788  std 31, 144(1)
  01c378c  cmpwi 5, 0
  01c3790  bt 2, 0x1c3974
  01c3794  lfs 1, 196(3)
  01c3798  lfs 2, 192(3)
  01c379c  fmuls 3, 1, 1
  01c37a0  lfs 4, 200(3)
  01c37a4  ori 6, 4, 0
  01c37a8  lis 4, 28
  01c37ac  lis 3, 118
  01c37b0  li 31, 0
  01c37b4  addi 4, 4, 14180
  01c37b8  fmadds 3, 2, 2, 3
  01c37bc  stw 31, 16400(3)
  01c37c0  lfs 5, 4(4)
  01c37c4  lis 7, 239
  01c37c8  lfs 6, 0(4)
  01c37cc  lis 4, 239
  01c37d0  lfs 7, 0(6)
  01c37d4  addic 3, 4, 3312
  01c37d8  fmadds 3, 4, 4, 3
  01c37dc  stfs 7, 3312(4)
  01c37e0  lfs 7, 4(6)
  01c37e4  addic 5, 7, 3512
  01c37e8  li 8, 9
  01c37ec  stfs 7, 4(3)
  01c37f0  lfs 7, 8(6)
  01c37f4  addic 5, 5, 2
  01c37f8  fsqrts 3, 3
  01c37fc  stfs 7, 8(3)
  01c3800  lfs 7, 12(6)
  01c3804  addic 4, 3, 16
  01c3808  sth 31, 3512(7)
  01c380c  mtctr 8
  01c3810  stfs 7, 12(3)
  01c3814  fdivs 5, 5, 3
  01c3818  fsub 7, 6, 3
  01c381c  fsub 8, 6, 3
  01c3820  fsub 9, 6, 3
  01c3824  fsub 10, 3, 6
  01c3828  fsub 11, 3, 6
  01c382c  fsub 12, 3, 6
  01c3830  fmuls 3, 4, 5
  01c3834  fmuls 1, 1, 5
  01c3838  fmuls 4, 2, 5
  01c383c  fsel 2, 7, 6, 3
  01c3840  fsel 5, 8, 6, 1
  01c3844  fsel 6, 9, 6, 4
  01c3848  fsel 3, 10, 2, 3
  01c384c  fsel 2, 11, 5, 1
  01c3850  fsel 1, 12, 6, 4
  01c3854  lfs 4, 0(3)
  01c3858  fadds 4, 4, 1
  01c385c  stfs 4, 0(4)
  01c3860  lfs 4, 4(3)
  01c3864  fadds 4, 4, 2
  01c3868  stfs 4, 4(4)
  01c386c  lfs 4, 8(3)
  01c3870  fadds 4, 4, 3
  01c3874  stfs 4, 8(4)
  01c3878  lfs 4, 12(3)
  01c387c  addic 3, 3, 16
  01c3880  stfs 4, 12(4)
  01c3884  sth 31, 0(5)
  01c3888  addic 4, 4, 16
  01c388c  addic 5, 5, 2
  01c3890  bdnz 0x1c3854
  01c3894  lis 3, 239
  01c3898  lis 4, 15820
  01c389c  addic 5, 3, -1536
  01c38a0  ori 4, 4, 52429
  01c38a4  lis 6, 16256
  01c38a8  stw 31, -1536(3)
  01c38ac  stw 31, 112(1)
  01c38b0  stw 31, 116(1)
  01c38b4  stw 31, 12(5)
  01c38b8  stw 31, 8(5)
  01c38bc  stw 31, 4(5)
  01c38c0  stw 4, 120(1)
  01c38c4  stw 6, 124(1)
  01c38c8  stw 6, 128(1)
  01c38cc  stw 31, 132(1)
  01c38d0  stw 31, 136(1)
  01c38d4  stw 6, 140(1)
  01c38d8  bl 0xfcc68
  01c38dc  nop
  01c38e0  fmr 31, 1
  01c38e4  lis 3, 239
  01c38e8  addic 4, 1, 112
  01c38ec  addic 3, 3, -1520
  01c38f0  addic 5, 1, 128
  01c38f4  bl 0x1113e0
  01c38f8  nop
  01c38fc  lis 3, 239
  01c3900  lis 4, 239
  01c3904  lis 5, 239
  01c3908  lis 7, 118
  01c390c  lis 6, 15300
  01c3910  stfs 31, -1504(3)
  01c3914  lis 8, 118
  01c3918  stw 31, -1552(4)
  01c391c  ori 3, 6, 39846
  01c3920  stw 31, -1500(5)
  01c3924  lwz 4, 16404(7)
  01c3928  cmpwi 4, 0
  01c392c  stw 3, 16408(8)
  01c3930  bt 2, 0x1c3974
  01c3934  lis 4, 118
  01c3938  lis 3, 239
  01c393c  li 5, 25
  01c3940  addic 3, 3, -1476
  01c3944  mtctr 5
  01c3948  stw 31, 16404(4)
  01c394c  stw 31, 0(3)
  01c3950  stw 31, 24(3)
  01c3954  stw 31, 48(3)
  01c3958  stw 31, 72(3)
  01c395c  stw 31, 96(3)
  01c3960  stw 31, 120(3)
  01c3964  stw 31, 144(3)
  01c3968  stw 31, 168(3)
  01c396c  addic 3, 3, 192
  01c3970  bdnz 0x1c394c
  01c3974  ld 0, 176(1)
  01c3978  mtlr 0
  01c397c  lfd 31, 152(1)
  01c3980  ld 31, 144(1)
  01c3984  addi 1, 1, 160
  01c3988  blr

M1106_001c3a18:   # 0x1c3a18, 0x1550 bytes
  01c3a18  stdu 1, -768(1)
  01c3a1c  mflr 0
  01c3a20  std 0, 784(1)
  01c3a24  stfd 14, 624(1)
  01c3a28  stfd 15, 632(1)
  01c3a2c  stfd 16, 640(1)
  01c3a30  stfd 17, 648(1)
  01c3a34  stfd 18, 656(1)
  01c3a38  stfd 19, 664(1)
  01c3a3c  stfd 20, 672(1)
  01c3a40  stfd 21, 680(1)
  01c3a44  stfd 22, 688(1)
  01c3a48  stfd 23, 696(1)
  01c3a4c  stfd 24, 704(1)
  01c3a50  stfd 25, 712(1)
  01c3a54  stfd 26, 720(1)
  01c3a58  stfd 27, 728(1)
  01c3a5c  stfd 28, 736(1)
  01c3a60  stfd 29, 744(1)
  01c3a64  stfd 30, 752(1)
  01c3a68  stfd 31, 760(1)
  01c3a6c  std 30, 608(1)
  01c3a70  std 27, 584(1)
  01c3a74  lis 27, 28
  01c3a78  std 31, 616(1)
  01c3a7c  ori 30, 4, 0
  01c3a80  ori 31, 3, 0
  01c3a84  std 29, 600(1)
  01c3a88  std 28, 592(1)
  01c3a8c  std 26, 576(1)
  01c3a90  std 25, 568(1)
  01c3a94  std 24, 560(1)
  01c3a98  std 23, 552(1)
  01c3a9c  std 22, 544(1)
  01c3aa0  std 21, 536(1)
  01c3aa4  std 20, 528(1)
  01c3aa8  std 19, 520(1)
  01c3aac  std 18, 512(1)
  01c3ab0  std 17, 504(1)
  01c3ab4  std 16, 496(1)
  01c3ab8  std 15, 488(1)
  01c3abc  addi 27, 27, 14732
  01c3ac0  bl 0x1c3770
  01c3ac4  lis 25, 151
  01c3ac8  lis 5, 239
  01c3acc  addic 25, 25, -25376
  01c3ad0  addic 23, 5, 3512
  01c3ad4  li 18, 9
  01c3ad8  ori 3, 23, 0
  01c3adc  mtctr 18
  01c3ae0  lfs 1, 128(25)
  01c3ae4  lfs 2, 132(25)
  01c3ae8  stfs 1, 112(1)
  01c3aec  lfs 3, 136(25)
  01c3af0  stfs 2, 116(1)
  01c3af4  stfs 3, 120(1)
  01c3af8  lfs 30, 0(27)
  01c3afc  lhz 4, 3512(5)
  01c3b00  fadds 7, 3, 30
  01c3b04  lfs 1, 140(25)
  01c3b08  addic 6, 4, 4
  01c3b0c  stfs 1, 124(1)
  01c3b10  lfs 1, 128(25)
  01c3b14  addic 4, 3, 2
  01c3b18  sth 6, 3512(5)
  01c3b1c  lfs 2, 0(30)
  01c3b20  lfs 3, 132(25)
  01c3b24  lfs 4, 4(30)
  01c3b28  lfs 5, 136(25)
  01c3b2c  lfs 6, 8(30)
  01c3b30  lfs 27, 140(25)
  01c3b34  stfs 7, 120(1)
  01c3b38  lhz 5, 0(3)
  01c3b3c  addic 3, 3, 2
  01c3b40  addic 5, 5, -32
  01c3b44  sth 5, 0(4)
  01c3b48  addic 4, 4, 2
  01c3b4c  bdnz 0x1c3b38
  01c3b50  fsubs 3, 3, 4
  01c3b54  fsubs 4, 5, 6
  01c3b58  fsubs 1, 1, 2
  01c3b5c  lis 3, 239
  01c3b60  lfs 17, 8(27)
  01c3b64  addic 24, 3, 3312
  01c3b68  lfs 21, 4(27)
  01c3b6c  fmuls 5, 3, 3
  01c3b70  fadds 4, 4, 30
  01c3b74  stfs 2, 3312(3)
  01c3b78  lfs 2, 4(30)
  01c3b7c  stfs 2, 4(24)
  01c3b80  lfs 2, 8(30)
  01c3b84  stfs 2, 8(24)
  01c3b88  fmadds 5, 1, 1, 5
  01c3b8c  lfs 2, 12(30)
  01c3b90  stfs 2, 12(24)
  01c3b94  lis 29, 239
  01c3b98  addic 28, 31, 192
  01c3b9c  fmadds 5, 4, 4, 5
  01c3ba0  addic 29, 29, -1536
  01c3ba4  addic 3, 1, 128
  01c3ba8  ori 4, 29, 0
  01c3bac  ori 5, 28, 0
  01c3bb0  fsqrts 5, 5
  01c3bb4  fdivs 2, 17, 5
  01c3bb8  fsub 6, 21, 5
  01c3bbc  fsub 7, 21, 5
  01c3bc0  fsub 8, 21, 5
  01c3bc4  fsub 9, 5, 21
  01c3bc8  fsub 10, 5, 21
  01c3bcc  fsub 5, 5, 21
  01c3bd0  fmuls 1, 1, 2
  01c3bd4  fmuls 3, 3, 2
  01c3bd8  fmuls 2, 4, 2
  01c3bdc  fsel 4, 6, 21, 1
  01c3be0  fsel 6, 7, 21, 3
  01c3be4  fsel 7, 8, 21, 2
  01c3be8  fsel 31, 9, 4, 1
  01c3bec  fsel 30, 10, 6, 3
  01c3bf0  fsel 29, 5, 7, 2
  01c3bf4  bl 0x5e7d64
  01c3bf8  nop
  01c3bfc  lfs 1, 128(1)
  01c3c00  lfs 2, 132(1)
  01c3c04  lis 3, 239
  01c3c08  fadds 1, 1, 31
  01c3c0c  lfs 3, 136(1)
  01c3c10  fadds 2, 2, 30
  01c3c14  ori 5, 28, 0
  01c3c18  fadds 3, 3, 29
  01c3c1c  addic 28, 3, -1520
  01c3c20  addic 3, 1, 144
  01c3c24  ori 4, 28, 0
  01c3c28  stfs 1, 128(1)
  01c3c2c  stfs 2, 132(1)
  01c3c30  stfs 3, 136(1)
  01c3c34  bl 0x5e7d64
  01c3c38  nop
  01c3c3c  lfs 1, 144(1)
  01c3c40  lfs 2, 148(1)
  01c3c44  lis 26, 114
  01c3c48  fadds 1, 1, 31
  01c3c4c  lfs 3, 152(1)
  01c3c50  fadds 2, 2, 30
  01c3c54  fadds 3, 3, 29
  01c3c58  lfs 4, -3056(26)
  01c3c5c  stfs 1, 144(1)
  01c3c60  stfs 2, 148(1)
  01c3c64  stfs 3, 152(1)
  01c3c68  lfs 31, 12(27)
  01c3c6c  fmuls 1, 4, 31
  01c3c70  fctiwz 1, 1
  01c3c74  stfd 1, 464(1)
  01c3c78  lwz 3, 468(1)
  01c3c7c  extsw 3, 3
  01c3c80  bl 0x502730
  01c3c84  nop
  01c3c88  lis 3, 239
  01c3c8c  lwz 4, -1552(3)
  01c3c90  extsw 5, 4
  01c3c94  std 5, 464(1)
  01c3c98  lfs 2, -3056(26)
  01c3c9c  lfs 30, 128(1)
  01c3ca0  lfs 3, 144(1)
  01c3ca4  lfs 29, 132(1)
  01c3ca8  lfs 4, 148(1)
  01c3cac  lfs 28, 136(1)
  01c3cb0  lfd 5, 464(1)
  01c3cb4  fcfid 5, 5
  01c3cb8  fmuls 2, 2, 31
  01c3cbc  addic 4, 4, 1
  01c3cc0  fsubs 3, 3, 30
  01c3cc4  fsubs 4, 4, 29
  01c3cc8  frsp 5, 5
  01c3ccc  fctiwz 2, 2
  01c3cd0  fdivs 1, 5, 1
  01c3cd4  lfs 5, 152(1)
  01c3cd8  stw 4, -1552(3)
  01c3cdc  stfd 2, 464(1)
  01c3ce0  fsubs 5, 5, 28
  01c3ce4  lwz 3, 468(1)
  01c3ce8  cmpw 4, 3
  01c3cec  fmadds 30, 3, 1, 30
  01c3cf0  fmadds 29, 4, 1, 29
  01c3cf4  fmadds 28, 5, 1, 28
  01c3cf8  bt 0, 0x1c3da4
  01c3cfc  lis 3, 239
  01c3d00  lis 4, 239
  01c3d04  li 26, 0
  01c3d08  lis 6, 15820
  01c3d0c  lis 5, 16256
  01c3d10  lfs 1, -1520(3)
  01c3d14  lfs 2, 4(28)
  01c3d18  stfs 1, -1536(4)
  01c3d1c  ori 3, 6, 52429
  01c3d20  lfs 1, 8(28)
  01c3d24  stfs 2, 4(29)
  01c3d28  lfs 2, 12(28)
  01c3d2c  stfs 1, 8(29)
  01c3d30  stfs 2, 12(29)
  01c3d34  stw 26, 160(1)
  01c3d38  stw 26, 164(1)
  01c3d3c  stw 3, 168(1)
  01c3d40  stw 5, 172(1)
  01c3d44  stw 5, 176(1)
  01c3d48  stw 26, 180(1)
  01c3d4c  stw 26, 184(1)
  01c3d50  stw 5, 188(1)
  01c3d54  lfs 1, 16(27)
  01c3d58  lfs 2, 20(27)
  01c3d5c  bl 0xfcbe8
  01c3d60  nop
  01c3d64  lis 29, 239
  01c3d68  lfs 2, 24(27)
  01c3d6c  fmuls 2, 1, 2
  01c3d70  lfs 3, -1504(29)
  01c3d74  fmr 1, 3
  01c3d78  bl 0x502578
  01c3d7c  nop
  01c3d80  fmr 31, 1
  01c3d84  ori 3, 28, 0
  01c3d88  addic 4, 1, 160
  01c3d8c  addic 5, 1, 176
  01c3d90  bl 0x1113e0
  01c3d94  nop
  01c3d98  lis 3, 239
  01c3d9c  stfs 31, -1504(29)
  01c3da0  stw 26, -1552(3)
  01c3da4  lis 29, 239
  01c3da8  lfs 3, 28(27)
  01c3dac  fmr 2, 3
  01c3db0  lfs 1, -1500(29)
  01c3db4  stfs 3, 456(1)
  01c3db8  bl 0x502578
  01c3dbc  nop
  01c3dc0  lfs 3, 660(25)
  01c3dc4  lfs 4, 656(25)
  01c3dc8  fmuls 2, 3, 3
  01c3dcc  lfs 5, 664(25)
  01c3dd0  stfs 1, -1500(29)
  01c3dd4  lfs 14, 32(27)
  01c3dd8  fmadds 2, 4, 4, 2
  01c3ddc  fmadds 1, 5, 5, 2
  01c3de0  fmr 16, 21
  01c3de4  fsqrts 1, 1
  01c3de8  lfs 2, 668(25)
  01c3dec  li 17, 0
  01c3df0  stfs 2, 396(1)
  01c3df4  stw 17, 380(1)
  01c3df8  fdivs 6, 14, 1
  01c3dfc  fsub 7, 21, 1
  01c3e00  fsub 8, 21, 1
  01c3e04  fsub 18, 1, 21
  01c3e08  fsub 9, 21, 1
  01c3e0c  fsub 20, 1, 21
  01c3e10  fsub 19, 1, 21
  01c3e14  fmr 1, 16
  01c3e18  fmr 2, 1
  01c3e1c  fmuls 4, 4, 6
  01c3e20  fmuls 5, 5, 6
  01c3e24  fmuls 3, 3, 6
  01c3e28  fsel 6, 7, 21, 4
  01c3e2c  fsel 7, 8, 21, 5
  01c3e30  fsel 8, 9, 21, 3
  01c3e34  fsel 18, 18, 6, 4
  01c3e38  fsel 20, 20, 7, 5
  01c3e3c  fsel 19, 19, 8, 3
  01c3e40  fmuls 4, 18, 28
  01c3e44  fmuls 3, 20, 29
  01c3e48  fmuls 5, 19, 30
  01c3e4c  stfs 18, 384(1)
  01c3e50  stfs 19, 388(1)
  01c3e54  stfs 20, 392(1)
  01c3e58  fmsubs 4, 20, 30, 4
  01c3e5c  fmsubs 3, 19, 28, 3
  01c3e60  fmsubs 5, 18, 29, 5
  01c3e64  fmuls 6, 4, 4
  01c3e68  fmadds 6, 3, 3, 6
  01c3e6c  fmadds 6, 5, 5, 6
  01c3e70  fsqrts 7, 6
  01c3e74  fcmpu 0, 7, 2
  01c3e78  bt 2, 0x1c3ec4
  01c3e7c  frsqrte 1, 6
  01c3e80  lfs 2, 36(27)
  01c3e84  lfs 7, 40(27)
  01c3e88  fmuls 8, 6, 1
  01c3e8c  fmuls 9, 2, 1
  01c3e90  fnmsubs 8, 8, 1, 7
  01c3e94  fmadds 1, 8, 9, 1
  01c3e98  fmuls 8, 6, 1
  01c3e9c  fmuls 9, 2, 1
  01c3ea0  fnmsubs 8, 8, 1, 7
  01c3ea4  fmadds 1, 8, 9, 1
  01c3ea8  fmuls 6, 6, 1
  01c3eac  fmuls 2, 2, 1
  01c3eb0  fnmsubs 6, 6, 1, 7
  01c3eb4  fmadds 16, 6, 2, 1
  01c3eb8  fmuls 2, 3, 16
  01c3ebc  fmuls 1, 4, 16
  01c3ec0  fmuls 16, 5, 16
  01c3ec4  fmuls 3, 16, 19
  01c3ec8  fmuls 4, 2, 20
  01c3ecc  stfs 2, 368(1)
  01c3ed0  fmuls 5, 1, 18
  01c3ed4  stfs 1, 372(1)
  01c3ed8  stfs 16, 376(1)
  01c3edc  lis 22, 118
  01c3ee0  lis 21, 239
  01c3ee4  stw 17, 364(1)
  01c3ee8  addic 22, 22, 16416
  01c3eec  addic 21, 21, 3536
  01c3ef0  ori 28, 22, 0
  01c3ef4  ori 26, 21, 0
  01c3ef8  ori 29, 17, 0
  01c3efc  fmsubs 1, 1, 20, 3
  01c3f00  fmsubs 3, 16, 18, 4
  01c3f04  fmsubs 2, 2, 19, 5
  01c3f08  stfs 1, 352(1)
  01c3f0c  stfs 3, 356(1)
  01c3f10  stfs 2, 360(1)
  01c3f14  lfs 16, 44(27)
  01c3f18  lfs 1, 0(28)
  01c3f1c  addic 3, 1, 192
  01c3f20  fmuls 1, 1, 16
  01c3f24  ori 4, 3, 0
  01c3f28  addic 5, 1, 352
  01c3f2c  stfs 1, 192(1)
  01c3f30  lfs 1, 4(28)
  01c3f34  fmuls 1, 1, 16
  01c3f38  stfs 1, 196(1)
  01c3f3c  lfs 1, 8(28)
  01c3f40  fmuls 1, 1, 16
  01c3f44  stfs 1, 200(1)
  01c3f48  lfs 1, 12(28)
  01c3f4c  stfs 1, 204(1)
  01c3f50  bl 0x5e7d64
  01c3f54  nop
  01c3f58  lis 3, 239
  01c3f5c  lfs 1, 192(1)
  01c3f60  addic 29, 29, 1
  01c3f64  addic 28, 28, 16
  01c3f68  cmpwi 29, 20
  01c3f6c  lfs 2, 3312(3)
  01c3f70  fadds 1, 2, 1
  01c3f74  stfs 1, 0(26)
  01c3f78  lfs 1, 4(24)
  01c3f7c  lfs 2, 196(1)
  01c3f80  fadds 1, 1, 2
  01c3f84  stfs 1, 4(26)
  01c3f88  lfs 1, 8(24)
  01c3f8c  lfs 2, 200(1)
  01c3f90  fadds 1, 1, 2
  01c3f94  stfs 1, 8(26)
  01c3f98  lfs 1, 12(24)
  01c3f9c  stfs 1, 12(26)
  01c3fa0  addic 26, 26, 16
  01c3fa4  bt 0, 0x1c3f18
  01c3fa8  li 29, 1
  01c3fac  lfs 31, 48(27)
  01c3fb0  addic 15, 21, 320
  01c3fb4  li 26, 4
  01c3fb8  addic 19, 24, 16
  01c3fbc  lfs 1, 0(19)
  01c3fc0  lfs 2, -16(19)
  01c3fc4  fsubs 1, 1, 2
  01c3fc8  addic 28, 19, -16
  01c3fcc  stfs 1, 208(1)
  01c3fd0  lfs 2, 4(19)
  01c3fd4  lfs 3, -12(19)
  01c3fd8  fsubs 2, 2, 3
  01c3fdc  fmuls 7, 1, 28
  01c3fe0  fmuls 3, 2, 2
  01c3fe4  stfs 2, 212(1)
  01c3fe8  lfs 4, 8(19)
  01c3fec  lfs 5, -8(19)
  01c3ff0  fsubs 4, 4, 5
  01c3ff4  fmuls 5, 2, 29
  01c3ff8  fmadds 3, 1, 1, 3
  01c3ffc  fmuls 6, 4, 29
  01c4000  fmadds 5, 1, 30, 5
  01c4004  stfs 4, 216(1)
  01c4008  fmadds 3, 4, 4, 3
  01c400c  lfs 8, 12(19)
  01c4010  stfs 8, 220(1)
  01c4014  fmuls 8, 2, 30
  01c4018  stw 17, 236(1)
  01c401c  fmsubs 2, 2, 28, 6
  01c4020  fmsubs 6, 4, 30, 7
  01c4024  fsqrts 3, 3
  01c4028  stfs 2, 224(1)
  01c402c  stfs 6, 228(1)
  01c4030  fmsubs 1, 1, 29, 8
  01c4034  fmadds 4, 4, 28, 5
  01c4038  stfs 1, 232(1)
  01c403c  fmuls 1, 3, 17
  01c4040  fdivs 1, 4, 1
  01c4044  bl 0x5e8e08
  01c4048  nop
  01c404c  lfs 2, 52(27)
  01c4050  lis 3, 239
  01c4054  lfs 15, 60(27)
  01c4058  lfs 3, 56(27)
  01c405c  fmr 5, 21
  01c4060  addic 3, 3, 3472
  01c4064  fmr 4, 15
  01c4068  addc 5, 3, 26
  01c406c  clrldi 5, 5, 32
  01c4070  fsubs 25, 2, 1
  01c4074  fmr 1, 21
  01c4078  fmr 2, 25
  01c407c  bl 0x50288
  01c4080  nop
  01c4084  fmr 26, 1
  01c4088  fmr 1, 25
  01c408c  fmr 2, 26
  01c4090  bl 0x5025e0
  01c4094  nop
  01c4098  fabs 3, 1
  01c409c  lfs 2, 64(27)
  01c40a0  fcmpu 0, 3, 2
  01c40a4  cror 6, 0, 2
  01c40a8  bt 6, 0x1c40c8
  01c40ac  bl 0x5025e0
  01c40b0  nop
  01c40b4  fmr 2, 1
  01c40b8  fmr 1, 26
  01c40bc  bl 0x502578
  01c40c0  nop
  01c40c4  fmr 26, 1
  01c40c8  fmr 1, 26
  01c40cc  addic 3, 1, 240
  01c40d0  addic 4, 1, 208
  01c40d4  addic 5, 1, 224
  01c40d8  bl 0x1113e0
  01c40dc  nop
  01c40e0  lfs 1, 244(1)
  01c40e4  lfs 26, 240(1)
  01c40e8  fmuls 2, 1, 1
  01c40ec  lfs 3, 248(1)
  01c40f0  fmadds 2, 26, 26, 2
  01c40f4  fmadds 2, 3, 3, 2
  01c40f8  fsqrts 2, 2
  01c40fc  fdivs 4, 17, 2
  01c4100  fsub 5, 21, 2
  01c4104  fsub 8, 21, 2
  01c4108  fsub 6, 2, 21
  01c410c  fsub 7, 21, 2
  01c4110  fsub 9, 2, 21
  01c4114  fsub 2, 2, 21
  01c4118  fmuls 10, 1, 4
  01c411c  fmuls 11, 26, 4
  01c4120  fmuls 4, 3, 4
  01c4124  fsel 5, 5, 21, 10
  01c4128  fsel 7, 7, 21, 11
  01c412c  fsel 8, 8, 21, 4
  01c4130  fsel 5, 6, 5, 10
  01c4134  fsel 6, 9, 7, 11
  01c4138  fsel 2, 2, 8, 4
  01c413c  fsubs 4, 5, 1
  01c4140  fsubs 5, 6, 26
  01c4144  fsubs 2, 2, 3
  01c4148  fadds 1, 4, 1
  01c414c  fadds 26, 5, 26
  01c4150  fadds 2, 2, 3
  01c4154  fmuls 3, 1, 1
  01c4158  stfs 26, 240(1)
  01c415c  stfs 1, 244(1)
  01c4160  stfs 2, 248(1)
  01c4164  lfs 4, 68(27)
  01c4168  fmadds 3, 26, 26, 3
  01c416c  fmadds 3, 2, 2, 3
  01c4170  fsqrts 3, 3
  01c4174  fcmpu 0, 3, 4
  01c4178  cror 6, 0, 2
  01c417c  bt 6, 0x1c419c
  01c4180  fdivs 3, 4, 3
  01c4184  fmuls 26, 26, 3
  01c4188  fmuls 1, 1, 3
  01c418c  fmuls 2, 2, 3
  01c4190  stfs 26, 240(1)
  01c4194  stfs 1, 244(1)
  01c4198  stfs 2, 248(1)
  01c419c  cmpwi 29, 5
  01c41a0  bf 1, 0x1c420c
  01c41a4  li 3, 10
  01c41a8  bl 0x502730
  01c41ac  nop
  01c41b0  extsw 3, 29
  01c41b4  std 3, 464(1)
  01c41b8  lfs 2, 208(1)
  01c41bc  lfs 26, 240(1)
  01c41c0  lfs 3, 212(1)
  01c41c4  lfs 4, 244(1)
  01c41c8  lfs 5, 216(1)
  01c41cc  lfs 6, 248(1)
  01c41d0  lfd 7, 464(1)
  01c41d4  fcfid 7, 7
  01c41d8  fsubs 2, 2, 26
  01c41dc  fsubs 3, 3, 4
  01c41e0  fsubs 5, 5, 6
  01c41e4  frsp 7, 7
  01c41e8  fdivs 1, 7, 1
  01c41ec  lfs 7, 220(1)
  01c41f0  stfs 7, 252(1)
  01c41f4  fmadds 26, 1, 2, 26
  01c41f8  fmadds 2, 1, 3, 4
  01c41fc  fmadds 1, 1, 5, 6
  01c4200  stfs 26, 240(1)
  01c4204  stfs 2, 244(1)
  01c4208  stfs 1, 248(1)
  01c420c  lfs 1, -16(19)
  01c4210  lfs 3, -12(19)
  01c4214  fadds 2, 1, 26
  01c4218  lfs 4, -8(19)
  01c421c  fmr 1, 21
  01c4220  lfs 5, -4(19)
  01c4224  addic 4, 1, 112
  01c4228  addic 3, 1, 272
  01c422c  ori 6, 28, 0
  01c4230  ori 7, 19, 0
  01c4234  ori 5, 4, 0
  01c4238  stfs 2, 0(19)
  01c423c  lfs 2, 244(1)
  01c4240  fadds 2, 3, 2
  01c4244  stfs 2, 4(19)
  01c4248  lfs 2, 248(1)
  01c424c  stfs 5, 12(19)
  01c4250  fadds 2, 4, 2
  01c4254  stfs 2, 8(19)
  01c4258  bl 0x137238
  01c425c  nop
  01c4260  fsub 3, 1, 31
  01c4264  lfs 5, 72(27)
  01c4268  fabs 4, 28
  01c426c  lfs 2, 664(25)
  01c4270  fsel 1, 3, 31, 1
  01c4274  fcmpu 0, 4, 5
  01c4278  lfs 31, 656(25)
  01c427c  cror 6, 0, 2
  01c4280  stfd 1, 448(1)
  01c4284  lfs 1, 660(25)
  01c4288  bt 6, 0x1c4324
  01c428c  lfs 1, -32(19)
  01c4290  lfs 2, -16(19)
  01c4294  fmr 6, 20
  01c4298  fmr 7, 18
  01c429c  fsubs 1, 1, 2
  01c42a0  lfs 2, -24(19)
  01c42a4  fmr 8, 19
  01c42a8  lfs 3, -8(19)
  01c42ac  fsubs 2, 2, 3
  01c42b0  lfs 3, -28(19)
  01c42b4  lfs 5, -12(19)
  01c42b8  fmuls 4, 30, 6
  01c42bc  fsubs 3, 3, 5
  01c42c0  fmuls 11, 1, 6
  01c42c4  fmr 5, 7
  01c42c8  fmuls 9, 28, 8
  01c42cc  fmuls 10, 29, 7
  01c42d0  fmuls 13, 2, 8
  01c42d4  fmsubs 12, 28, 7, 4
  01c42d8  fmr 4, 8
  01c42dc  fmsubs 2, 2, 7, 11
  01c42e0  fmuls 0, 3, 5
  01c42e4  fmsubs 9, 29, 6, 9
  01c42e8  fmsubs 10, 30, 8, 10
  01c42ec  fmsubs 3, 3, 6, 13
  01c42f0  fmuls 2, 12, 2
  01c42f4  fmsubs 1, 1, 4, 0
  01c42f8  fmadds 2, 9, 3, 2
  01c42fc  fmadds 1, 10, 1, 2
  01c4300  fcmpu 0, 1, 21
  01c4304  cror 6, 0, 2
  01c4308  bt 6, 0x1c4370
  01c430c  fneg 5, 18
  01c4310  fneg 4, 19
  01c4314  fneg 6, 20
  01c4318  fmr 7, 5
  01c431c  fmr 8, 4
  01c4320  b 0x1c4370
  01c4324  fmuls 1, 1, 1
  01c4328  fmr 6, 21
  01c432c  fmadds 1, 31, 31, 1
  01c4330  fmr 8, 6
  01c4334  fmadds 1, 2, 2, 1
  01c4338  fmr 7, 8
  01c433c  fsqrts 1, 1
  01c4340  fcmpu 0, 1, 7
  01c4344  bt 2, 0x1c4368
  01c4348  fdivs 6, 14, 1
  01c434c  lfs 8, 660(25)
  01c4350  lfs 1, 664(25)
  01c4354  fmuls 7, 31, 6
  01c4358  fmuls 8, 8, 6
  01c435c  fmuls 6, 1, 6
  01c4360  stfs 7, 432(1)
  01c4364  stfs 8, 436(1)
  01c4368  fmr 5, 7
  01c436c  fmr 4, 8
  01c4370  fmuls 1, 29, 29
  01c4374  fmadds 9, 30, 30, 1
  01c4378  fmr 1, 21
  01c437c  fmadds 9, 28, 28, 9
  01c4380  fmr 2, 1
  01c4384  fsqrts 10, 9
  01c4388  fmr 3, 2
  01c438c  fcmpu 0, 10, 3
  01c4390  bt 2, 0x1c43dc
  01c4394  frsqrte 1, 9
  01c4398  lfs 2, 36(27)
  01c439c  lfs 3, 40(27)
  01c43a0  fmuls 10, 9, 1
  01c43a4  fmuls 11, 2, 1
  01c43a8  fnmsubs 10, 10, 1, 3
  01c43ac  fmadds 1, 10, 11, 1
  01c43b0  fmuls 10, 9, 1
  01c43b4  fmuls 11, 2, 1
  01c43b8  fnmsubs 10, 10, 1, 3
  01c43bc  fmadds 1, 10, 11, 1
  01c43c0  fmuls 9, 9, 1
  01c43c4  fmuls 2, 2, 1
  01c43c8  fnmsubs 3, 9, 1, 3
  01c43cc  fmadds 1, 3, 2, 1
  01c43d0  fmuls 3, 30, 1
  01c43d4  fmuls 2, 29, 1
  01c43d8  fmuls 1, 28, 1
  01c43dc  fmuls 5, 5, 1
  01c43e0  fmr 9, 7
  01c43e4  fmuls 10, 6, 2
  01c43e8  fmuls 8, 8, 3
  01c43ec  stfs 27, 412(1)
  01c43f0  fmr 27, 21
  01c43f4  stfs 3, 400(1)
  01c43f8  stfs 2, 404(1)
  01c43fc  fmsubs 7, 6, 3, 5
  01c4400  fmsubs 6, 4, 1, 10
  01c4404  fmsubs 8, 9, 2, 8
  01c4408  stfs 1, 408(1)
  01c440c  stw 17, 428(1)
  01c4410  fmuls 4, 7, 7
  01c4414  fmadds 9, 6, 6, 4
  01c4418  fmr 4, 27
  01c441c  fmadds 9, 8, 8, 9
  01c4420  fmr 5, 4
  01c4424  fsqrts 10, 9
  01c4428  fcmpu 0, 10, 5
  01c442c  bt 2, 0x1c4478
  01c4430  frsqrte 4, 9
  01c4434  lfs 5, 36(27)
  01c4438  lfs 10, 40(27)
  01c443c  fmuls 11, 9, 4
  01c4440  fmuls 12, 5, 4
  01c4444  fnmsubs 11, 11, 4, 10
  01c4448  fmadds 4, 11, 12, 4
  01c444c  fmuls 11, 9, 4
  01c4450  fmuls 12, 5, 4
  01c4454  fnmsubs 11, 11, 4, 10
  01c4458  fmadds 4, 11, 12, 4
  01c445c  fmuls 9, 9, 4
  01c4460  fmuls 5, 5, 4
  01c4464  fnmsubs 9, 9, 4, 10
  01c4468  fmadds 27, 9, 5, 4
  01c446c  fmuls 5, 6, 27
  01c4470  fmuls 4, 7, 27
  01c4474  fmuls 27, 8, 27
  01c4478  fmuls 18, 1, 4
  01c447c  extsw 3, 29
  01c4480  fmuls 19, 3, 27
  01c4484  fmuls 20, 2, 5
  01c4488  std 3, 464(1)
  01c448c  stfs 5, 416(1)
  01c4490  stfs 4, 420(1)
  01c4494  stfs 27, 424(1)
  01c4498  stw 17, 444(1)
  01c449c  ori 28, 17, 0
  01c44a0  fmsubs 18, 2, 27, 18
  01c44a4  fmsubs 19, 1, 5, 19
  01c44a8  fmsubs 20, 3, 4, 20
  01c44ac  ori 20, 22, 0
  01c44b0  ori 16, 15, 0
  01c44b4  stfs 18, 432(1)
  01c44b8  stfs 19, 436(1)
  01c44bc  lfd 1, 464(1)
  01c44c0  stfs 20, 440(1)
  01c44c4  fcfid 30, 1
  01c44c8  lfs 29, 104(27)
  01c44cc  lfs 22, 76(27)
  01c44d0  lfs 23, 80(27)
  01c44d4  lfs 24, 84(27)
  01c44d8  lfs 25, 88(27)
  01c44dc  lfs 26, 92(27)
  01c44e0  lfs 27, 96(27)
  01c44e4  lfs 28, 100(27)
  01c44e8  frsp 30, 30
  01c44ec  fmadds 31, 30, 15, 16
  01c44f0  fmuls 29, 31, 29
  01c44f4  lis 3, 239
  01c44f8  fmr 2, 21
  01c44fc  lfs 1, -1500(3)
  01c4500  fmadds 1, 30, 22, 1
  01c4504  bl 0x502578
  01c4508  nop
  01c450c  fsubs 2, 23, 1
  01c4510  fsubs 3, 24, 1
  01c4514  addic 3, 1, 256
  01c4518  addic 5, 1, 400
  01c451c  ori 4, 3, 0
  01c4520  fsub 4, 1, 2
  01c4524  fsel 1, 4, 2, 1
  01c4528  fsub 2, 3, 1
  01c452c  fsel 1, 2, 3, 1
  01c4530  lfs 2, 0(20)
  01c4534  fmuls 3, 1, 1
  01c4538  fmuls 4, 3, 1
  01c453c  fmuls 5, 3, 4
  01c4540  fmadds 1, 4, 25, 1
  01c4544  fmuls 4, 3, 5
  01c4548  fmadds 1, 5, 26, 1
  01c454c  fmuls 3, 3, 4
  01c4550  fmadds 1, 4, 27, 1
  01c4554  fmadds 1, 3, 28, 1
  01c4558  fmadds 1, 1, 29, 31
  01c455c  fmuls 2, 2, 1
  01c4560  stfs 2, 256(1)
  01c4564  lfs 2, 4(20)
  01c4568  fmuls 2, 2, 1
  01c456c  stfs 2, 260(1)
  01c4570  lfs 2, 8(20)
  01c4574  fmuls 1, 2, 1
  01c4578  stfs 1, 264(1)
  01c457c  lfs 1, 12(20)
  01c4580  stfs 1, 268(1)
  01c4584  bl 0x5e7d64
  01c4588  nop
  01c458c  lfs 1, 0(19)
  01c4590  lfs 2, 256(1)
  01c4594  addic 28, 28, 1
  01c4598  fadds 1, 1, 2
  01c459c  cmpwi 28, 20
  01c45a0  addic 20, 20, 16
  01c45a4  stfs 1, 0(16)
  01c45a8  lfs 1, 4(19)
  01c45ac  lfs 2, 260(1)
  01c45b0  fadds 1, 1, 2
  01c45b4  stfs 1, 4(16)
  01c45b8  lfs 1, 8(19)
  01c45bc  lfs 2, 264(1)
  01c45c0  fadds 1, 1, 2
  01c45c4  stfs 1, 8(16)
  01c45c8  lfs 1, 12(19)
  01c45cc  stfs 1, 12(16)
  01c45d0  addic 16, 16, 16
  01c45d4  bt 0, 0x1c44f4
  01c45d8  lfs 1, 244(1)
  01c45dc  lfs 2, 240(1)
  01c45e0  fmuls 3, 1, 1
  01c45e4  lfs 4, 248(1)
  01c45e8  addic 29, 29, 1
  01c45ec  lfs 27, 252(1)
  01c45f0  lfd 31, 448(1)
  01c45f4  addic 15, 15, 320
  01c45f8  cmpwi 29, 10
  01c45fc  fmadds 3, 2, 2, 3
  01c4600  addic 26, 26, 4
  01c4604  addic 19, 19, 16
  01c4608  fmadds 3, 4, 4, 3
  01c460c  fsqrts 3, 3
  01c4610  fdivs 5, 17, 3
  01c4614  fsub 6, 21, 3
  01c4618  fsub 7, 21, 3
  01c461c  fsub 8, 21, 3
  01c4620  fsub 30, 3, 21
  01c4624  fsub 29, 3, 21
  01c4628  fsub 28, 3, 21
  01c462c  fmuls 2, 2, 5
  01c4630  fmuls 1, 1, 5
  01c4634  fmuls 3, 4, 5
  01c4638  fsel 4, 6, 21, 2
  01c463c  fsel 5, 7, 21, 1
  01c4640  fsel 6, 8, 21, 3
  01c4644  fsel 30, 30, 4, 2
  01c4648  fsel 29, 29, 5, 1
  01c464c  fsel 28, 28, 6, 3
  01c4650  bt 0, 0x1c3fbc
  01c4654  lis 3, 113
  01c4658  ori 4, 31, 0
  01c465c  addic 3, 3, -29520
  01c4660  bl 0x6d720
  01c4664  nop
  01c4668  ori 29, 17, 0
  01c466c  ori 28, 29, 0
  01c4670  ori 31, 28, 0
  01c4674  ori 26, 31, 0
  01c4678  lis 22, 239
  01c467c  cmpwi 1, 31, 5
  01c4680  addic 22, 22, -1496
  01c4684  addc 20, 22, 26
  01c4688  lwz 3, 20(20)
  01c468c  cmpwi 3, 0
  01c4690  crnand 2, 2, 4
  01c4694  bt 2, 0x1c4988
  01c4698  ori 25, 18, 0
  01c469c  li 4, 18
  01c46a0  extsw 5, 4
  01c46a4  lhzx 5, 23, 5
  01c46a8  extsh 5, 5
  01c46ac  cmpwi 5, 64
  01c46b0  bf 0, 0x1c46c4
  01c46b4  addic 25, 25, -1
  01c46b8  addic 4, 4, -2
  01c46bc  cmpwi 25, 0
  01c46c0  bf 0, 0x1c46a0
  01c46c4  cmpwi 25, 0
  01c46c8  bf 1, 0x1c4988
  01c46cc  cmpwi 1, 29, 2
  01c46d0  cmpwi 25, 1
  01c46d4  crnand 2, 1, 4
  01c46d8  bt 2, 0x1c4898
  01c46dc  li 3, 20
  01c46e0  bl 0xfc620
  01c46e4  nop
  01c46e8  lfs 28, 40(27)
  01c46ec  ori 19, 3, 0
  01c46f0  fmr 1, 15
  01c46f4  fmr 2, 28
  01c46f8  bl 0xfcbe8
  01c46fc  nop
  01c4700  sldi 3, 19, 4
  01c4704  sldi 4, 25, 8
  01c4708  sldi 5, 25, 6
  01c470c  addc 3, 3, 21
  01c4710  addc 4, 4, 5
  01c4714  clrldi 6, 3, 32
  01c4718  addc 3, 3, 4
  01c471c  clrldi 3, 3, 32
  01c4720  lfs 2, 0(6)
  01c4724  lfs 3, 4(6)
  01c4728  lfs 4, 0(3)
  01c472c  lis 4, 239
  01c4730  lfs 5, 4(3)
  01c4734  fsubs 4, 4, 2
  01c4738  fsubs 3, 5, 3
  01c473c  lfs 5, 8(3)
  01c4740  lfs 6, 8(6)
  01c4744  lfs 7, 12(3)
  01c4748  lfs 30, 4(24)
  01c474c  fsubs 5, 5, 6
  01c4750  lfs 29, 8(24)
  01c4754  sldi 3, 25, 4
  01c4758  addc 3, 3, 24
  01c475c  fmadds 2, 1, 4, 2
  01c4760  clrldi 3, 3, 32
  01c4764  stfs 2, 288(1)
  01c4768  lfs 2, 4(6)
  01c476c  lfs 31, 3312(4)
  01c4770  fmadds 2, 1, 3, 2
  01c4774  stfs 2, 292(1)
  01c4778  lfs 2, 8(6)
  01c477c  stfs 7, 300(1)
  01c4780  fmadds 2, 1, 5, 2
  01c4784  stfs 2, 296(1)
  01c4788  lfs 2, 0(3)
  01c478c  lfs 3, 4(3)
  01c4790  fsubs 4, 2, 31
  01c4794  lfs 2, 8(3)
  01c4798  fsubs 3, 3, 30
  01c479c  lfs 6, 108(27)
  01c47a0  fsubs 5, 2, 29
  01c47a4  lfs 2, 112(27)
  01c47a8  fmadds 31, 1, 4, 31
  01c47ac  fmadds 30, 1, 3, 30
  01c47b0  fmadds 29, 1, 5, 29
  01c47b4  fmr 1, 6
  01c47b8  bl 0xfcbe8
  01c47bc  nop
  01c47c0  lfs 2, 116(27)
  01c47c4  fmr 27, 1
  01c47c8  li 3, 5
  01c47cc  fmr 26, 2
  01c47d0  bl 0xfc620
  01c47d4  nop
  01c47d8  addic 7, 3, 1
  01c47dc  fmr 1, 21
  01c47e0  lis 10, 64
  01c47e4  fmr 2, 28
  01c47e8  addic 3, 1, 288
  01c47ec  fmr 3, 26
  01c47f0  addic 8, 1, 304
  01c47f4  fmr 4, 27
  01c47f8  extsw 7, 7
  01c47fc  ori 10, 10, 16448
  01c4800  bl 0x126f50
  01c4804  nop
  01c4808  cmpwi 3, 0
  01c480c  bt 2, 0x1c4898
  01c4810  lfs 1, 292(1)
  01c4814  lfs 2, 288(1)
  01c4818  fsubs 1, 1, 30
  01c481c  lfs 3, 296(1)
  01c4820  fsubs 2, 2, 31
  01c4824  fsubs 3, 3, 29
  01c4828  lfs 5, 120(27)
  01c482c  lfs 6, 300(1)
  01c4830  fmuls 4, 1, 1
  01c4834  stfs 6, 60(3)
  01c4838  addic 29, 29, 1
  01c483c  fmadds 4, 2, 2, 4
  01c4840  fmadds 4, 3, 3, 4
  01c4844  fsqrts 4, 4
  01c4848  fdivs 5, 5, 4
  01c484c  fsub 6, 21, 4
  01c4850  fsub 7, 21, 4
  01c4854  fsub 8, 21, 4
  01c4858  fsub 9, 4, 21
  01c485c  fsub 10, 4, 21
  01c4860  fsub 4, 4, 21
  01c4864  fmuls 3, 3, 5
  01c4868  fmuls 2, 2, 5
  01c486c  fmuls 1, 1, 5
  01c4870  fsel 5, 6, 21, 3
  01c4874  fsel 6, 7, 21, 2
  01c4878  fsel 7, 8, 21, 1
  01c487c  fsel 3, 9, 5, 3
  01c4880  fsel 2, 10, 6, 2
  01c4884  fsel 1, 4, 7, 1
  01c4888  fadds 3, 3, 16
  01c488c  stfs 2, 48(3)
  01c4890  stfs 1, 52(3)
  01c4894  stfs 3, 56(3)
  01c4898  sldi 3, 25, 4
  01c489c  addc 3, 3, 24
  01c48a0  clrldi 3, 3, 32
  01c48a4  lfs 1, 0(3)
  01c48a8  stfs 1, 288(1)
  01c48ac  lfs 1, 4(3)
  01c48b0  stfs 1, 292(1)
  01c48b4  lfs 1, 8(3)
  01c48b8  stfs 1, 296(1)
  01c48bc  lfs 1, 12(3)
  01c48c0  stw 17, 316(1)
  01c48c4  stfs 1, 300(1)
  01c48c8  stw 17, 312(1)
  01c48cc  stw 17, 308(1)
  01c48d0  stw 17, 304(1)
  01c48d4  lfs 1, 108(27)
  01c48d8  lfs 2, 112(27)
  01c48dc  bl 0xfcbe8
  01c48e0  nop
  01c48e4  addic 3, 1, 288
  01c48e8  lfs 2, 40(27)
  01c48ec  lis 10, 32576
  01c48f0  fmr 4, 1
  01c48f4  addic 8, 1, 304
  01c48f8  fmr 1, 21
  01c48fc  li 7, 6
  01c4900  ori 10, 10, 16448
  01c4904  fmr 3, 2
  01c4908  bl 0x126f50
  01c490c  nop
  01c4910  cmpwi 3, 0
  01c4914  stw 3, 20(20)
  01c4918  bt 2, 0x1c493c
  01c491c  li 4, 200
  01c4920  li 5, 2
  01c4924  li 6, 127
  01c4928  addic 31, 31, 1
  01c492c  sth 4, 10(3)
  01c4930  stw 5, 36(3)
  01c4934  stb 6, 42(3)
  01c4938  stb 4, 43(3)
  01c493c  lfs 31, 456(1)
  01c4940  li 3, 20
  01c4944  sthx 25, 22, 26
  01c4948  stw 17, 4(20)
  01c494c  stw 17, 8(20)
  01c4950  bl 0xfc620
  01c4954  nop
  01c4958  fmr 1, 31
  01c495c  sth 3, 2(20)
  01c4960  lfs 2, 124(27)
  01c4964  bl 0xfcbe8
  01c4968  nop
  01c496c  stfs 1, 12(20)
  01c4970  fmr 1, 31
  01c4974  lfs 2, 128(27)
  01c4978  bl 0xfcbe8
  01c497c  nop
  01c4980  lwz 3, 20(20)
  01c4984  stfs 1, 16(20)
  01c4988  cmpwi 3, 0
  01c498c  bt 2, 0x1c4eb8
  01c4990  lhzx 4, 22, 26
  01c4994  addic 25, 24, -16
  01c4998  extsh 4, 4
  01c499c  sldi 4, 4, 4
  01c49a0  addc 5, 25, 4
  01c49a4  addc 4, 4, 24
  01c49a8  clrldi 5, 5, 32
  01c49ac  clrldi 4, 4, 32
  01c49b0  lfs 30, 4(5)
  01c49b4  lfs 1, 4(4)
  01c49b8  lfs 31, 0(5)
  01c49bc  fsubs 30, 30, 1
  01c49c0  lfs 1, 0(4)
  01c49c4  lfs 29, 8(5)
  01c49c8  fsubs 31, 31, 1
  01c49cc  lfs 1, 8(4)
  01c49d0  fsubs 29, 29, 1
  01c49d4  lfs 2, 4(20)
  01c49d8  lfs 3, 16(20)
  01c49dc  fmuls 1, 30, 30
  01c49e0  li 4, 200
  01c49e4  fmadds 1, 31, 31, 1
  01c49e8  fmadds 28, 29, 29, 1
  01c49ec  fadds 1, 2, 3
  01c49f0  fsqrts 28, 28
  01c49f4  stfs 1, 4(20)
  01c49f8  sth 4, 10(3)
  01c49fc  lfs 1, 4(20)
  01c4a00  fcmpu 0, 1, 28
  01c4a04  cror 6, 0, 2
  01c4a08  bt 6, 0x1c4a94
  01c4a0c  lhzx 3, 22, 26
  01c4a10  addic 3, 3, -1
  01c4a14  extsh 4, 3
  01c4a18  cmpwi 4, 1
  01c4a1c  sthx 3, 22, 26
  01c4a20  bf 0, 0x1c4a38
  01c4a24  lwz 3, 20(20)
  01c4a28  bl 0x11e6ec
  01c4a2c  nop
  01c4a30  stw 17, 20(20)
  01c4a34  b 0x1c4a94
  01c4a38  lfs 1, 4(20)
  01c4a3c  lhzx 3, 22, 26
  01c4a40  fsubs 1, 1, 28
  01c4a44  extsh 3, 3
  01c4a48  sldi 3, 3, 4
  01c4a4c  addc 4, 25, 3
  01c4a50  addc 3, 3, 24
  01c4a54  clrldi 4, 4, 32
  01c4a58  clrldi 3, 3, 32
  01c4a5c  stfs 1, 4(20)
  01c4a60  lfs 30, 4(4)
  01c4a64  lfs 1, 4(3)
  01c4a68  lfs 31, 0(4)
  01c4a6c  fsubs 30, 30, 1
  01c4a70  lfs 1, 0(3)
  01c4a74  lfs 29, 8(4)
  01c4a78  fsubs 31, 31, 1
  01c4a7c  lfs 1, 8(3)
  01c4a80  fsubs 29, 29, 1
  01c4a84  fmuls 1, 30, 30
  01c4a88  fmadds 1, 31, 31, 1
  01c4a8c  fmadds 28, 29, 29, 1
  01c4a90  fsqrts 28, 28
  01c4a94  lwz 3, 20(20)
  01c4a98  cmpwi 3, 0
  01c4a9c  bt 2, 0x1c4eb8
  01c4aa0  lfs 1, 4(20)
  01c4aa4  lhzx 4, 22, 26
  01c4aa8  fdivs 28, 1, 28
  01c4aac  cmpwi 4, 2
  01c4ab0  bf 2, 0x1c4ac0
  01c4ab4  li 4, 100
  01c4ab8  sth 4, 10(3)
  01c4abc  b 0x1c4b08
  01c4ac0  extsh 3, 4
  01c4ac4  cmpwi 3, 2
  01c4ac8  bf 0, 0x1c4b08
  01c4acc  lfs 1, 40(27)
  01c4ad0  lfs 2, 132(27)
  01c4ad4  fsubs 1, 1, 28
  01c4ad8  fmuls 1, 1, 2
  01c4adc  bl 0x502758
  01c4ae0  nop
  01c4ae4  lwz 4, 20(20)
  01c4ae8  sth 3, 10(4)
  01c4aec  lwz 3, 20(20)
  01c4af0  lhz 4, 10(3)
  01c4af4  extsh 4, 4
  01c4af8  cmpwi 4, 60
  01c4afc  bt 1, 0x1c4b08
  01c4b00  li 4, 60
  01c4b04  sth 4, 10(3)
  01c4b08  lhzx 3, 22, 26
  01c4b0c  cmpwi 3, 1
  01c4b10  bf 2, 0x1c4bd0
  01c4b14  lwz 3, 20(20)
  01c4b18  lfs 1, 4(30)
  01c4b1c  lfs 2, 0(30)
  01c4b20  lfs 3, 20(3)
  01c4b24  lfs 4, 16(3)
  01c4b28  fsubs 1, 1, 3
  01c4b2c  lfs 5, 8(30)
  01c4b30  fsubs 2, 2, 4
  01c4b34  lfs 6, 24(3)
  01c4b38  fsubs 5, 5, 6
  01c4b3c  lfs 8, 16(20)
  01c4b40  fmuls 7, 1, 1
  01c4b44  lis 4, 114
  01c4b48  fmadds 7, 2, 2, 7
  01c4b4c  fmadds 7, 5, 5, 7
  01c4b50  fsqrts 7, 7
  01c4b54  fdivs 8, 8, 7
  01c4b58  fsub 9, 21, 7
  01c4b5c  fsub 10, 21, 7
  01c4b60  fsub 11, 21, 7
  01c4b64  fsub 12, 7, 21
  01c4b68  fsub 13, 7, 21
  01c4b6c  fsub 7, 7, 21
  01c4b70  fmuls 5, 8, 5
  01c4b74  fmuls 1, 8, 1
  01c4b78  fmuls 2, 8, 2
  01c4b7c  fsel 8, 9, 21, 5
  01c4b80  fsel 9, 10, 21, 1
  01c4b84  fsel 10, 11, 21, 2
  01c4b88  fsel 5, 12, 8, 5
  01c4b8c  fsel 1, 13, 9, 1
  01c4b90  fsel 2, 7, 10, 2
  01c4b94  fadds 5, 6, 5
  01c4b98  fadds 1, 3, 1
  01c4b9c  fadds 2, 4, 2
  01c4ba0  stfs 5, 24(3)
  01c4ba4  stfs 1, 20(3)
  01c4ba8  stfs 2, 16(3)
  01c4bac  lfs 1, 136(27)
  01c4bb0  lfs 2, 40(27)
  01c4bb4  lfs 3, -3064(4)
  01c4bb8  lwz 3, 20(20)
  01c4bbc  fmadds 1, 3, 1, 2
  01c4bc0  lfs 4, 12(3)
  01c4bc4  fmuls 1, 4, 1
  01c4bc8  stfs 1, 12(3)
  01c4bcc  b 0x1c4eb8
  01c4bd0  extsh 3, 3
  01c4bd4  lwz 4, 20(20)
  01c4bd8  sldi 3, 3, 4
  01c4bdc  addc 3, 3, 24
  01c4be0  clrldi 3, 3, 32
  01c4be4  ori 19, 25, 0
  01c4be8  addic 16, 21, -320
  01c4bec  lfs 1, 0(3)
  01c4bf0  fmadds 1, 31, 28, 1
  01c4bf4  addic 15, 1, 320
  01c4bf8  stfs 1, 16(4)
  01c4bfc  lfs 1, 4(3)
  01c4c00  fmadds 1, 30, 28, 1
  01c4c04  stfs 1, 20(4)
  01c4c08  lfs 1, 8(3)
  01c4c0c  fmadds 1, 29, 28, 1
  01c4c10  stfs 1, 24(4)
  01c4c14  lfs 1, 12(3)
  01c4c18  stfs 1, 28(4)
  01c4c1c  lhz 3, 2(20)
  01c4c20  lhzx 4, 22, 26
  01c4c24  extsh 25, 3
  01c4c28  extsh 3, 4
  01c4c2c  sldi 5, 25, 4
  01c4c30  sldi 4, 3, 6
  01c4c34  sldi 6, 3, 4
  01c4c38  sldi 3, 3, 8
  01c4c3c  addc 7, 5, 21
  01c4c40  addc 8, 6, 24
  01c4c44  addc 3, 3, 4
  01c4c48  clrldi 4, 8, 32
  01c4c4c  addc 7, 7, 3
  01c4c50  addc 5, 5, 16
  01c4c54  clrldi 7, 7, 32
  01c4c58  addc 3, 5, 3
  01c4c5c  addc 5, 19, 6
  01c4c60  lfs 1, 0(4)
  01c4c64  clrldi 3, 3, 32
  01c4c68  lfs 2, 8(4)
  01c4c6c  clrldi 5, 5, 32
  01c4c70  lfs 3, 0(7)
  01c4c74  lfs 4, 8(7)
  01c4c78  fsubs 1, 3, 1
  01c4c7c  fsubs 2, 4, 2
  01c4c80  lfs 3, 0(3)
  01c4c84  lfs 4, 0(5)
  01c4c88  lfs 5, 8(3)
  01c4c8c  fsubs 3, 3, 4
  01c4c90  lfs 4, 4(7)
  01c4c94  lfs 6, 8(5)
  01c4c98  lfs 7, 4(4)
  01c4c9c  fsubs 5, 5, 6
  01c4ca0  lfs 6, 12(7)
  01c4ca4  fsubs 4, 4, 7
  01c4ca8  lfs 7, 4(3)
  01c4cac  lfs 8, 4(5)
  01c4cb0  lfs 9, 12(3)
  01c4cb4  stfs 1, 64(1)
  01c4cb8  stfs 2, 72(1)
  01c4cbc  ori 3, 15, 0
  01c4cc0  fsubs 2, 7, 8
  01c4cc4  stfs 3, 80(1)
  01c4cc8  stfs 6, 76(1)
  01c4ccc  fmr 1, 28
  01c4cd0  stfs 5, 88(1)
  01c4cd4  stfs 4, 68(1)
  01c4cd8  stfs 9, 92(1)
  01c4cdc  stfs 2, 84(1)
  01c4ce0  ld 5, 64(1)
  01c4ce4  ld 6, 72(1)
  01c4ce8  ld 7, 80(1)
  01c4cec  ld 8, 88(1)
  01c4cf0  bl 0x1099f8
  01c4cf4  nop
  01c4cf8  lis 3, 26214
  01c4cfc  lhzx 5, 22, 26
  01c4d00  addic 25, 25, 19
  01c4d04  ori 3, 3, 26215
  01c4d08  mulhw 3, 3, 25
  01c4d0c  extsh 5, 5
  01c4d10  srawi 3, 3, 3
  01c4d14  sldi 6, 5, 6
  01c4d18  srwi 4, 3, 31
  01c4d1c  addc 3, 3, 4
  01c4d20  sldi 4, 3, 4
  01c4d24  sldi 3, 3, 2
  01c4d28  addc 3, 4, 3
  01c4d2c  sldi 4, 5, 8
  01c4d30  subc 25, 25, 3
  01c4d34  addc 3, 4, 6
  01c4d38  sldi 4, 25, 4
  01c4d3c  sldi 5, 5, 4
  01c4d40  addc 6, 4, 21
  01c4d44  addc 4, 4, 16
  01c4d48  addc 6, 6, 3
  01c4d4c  addc 7, 5, 24
  01c4d50  clrldi 6, 6, 32
  01c4d54  addc 3, 4, 3
  01c4d58  clrldi 4, 7, 32
  01c4d5c  addc 5, 19, 5
  01c4d60  clrldi 3, 3, 32
  01c4d64  lfs 1, 0(6)
  01c4d68  lfs 2, 8(6)
  01c4d6c  clrldi 5, 5, 32
  01c4d70  lfs 3, 0(4)
  01c4d74  lfs 4, 8(4)
  01c4d78  fsubs 1, 1, 3
  01c4d7c  lfs 3, 0(3)
  01c4d80  fsubs 2, 2, 4
  01c4d84  lfs 4, 8(3)
  01c4d88  lfs 5, 0(5)
  01c4d8c  lfs 6, 8(5)
  01c4d90  fsubs 3, 3, 5
  01c4d94  lfs 5, 4(6)
  01c4d98  lfs 7, 4(4)
  01c4d9c  fsubs 4, 4, 6
  01c4da0  lfs 6, 12(6)
  01c4da4  lfs 8, 4(3)
  01c4da8  fsubs 5, 5, 7
  01c4dac  lfs 7, 4(5)
  01c4db0  lfs 9, 12(3)
  01c4db4  fsubs 7, 8, 7
  01c4db8  stfs 1, 64(1)
  01c4dbc  addic 3, 1, 336
  01c4dc0  stfs 2, 72(1)
  01c4dc4  fmr 1, 28
  01c4dc8  stfs 3, 80(1)
  01c4dcc  stfs 4, 88(1)
  01c4dd0  stfs 6, 76(1)
  01c4dd4  stfs 9, 92(1)
  01c4dd8  stfs 5, 68(1)
  01c4ddc  stfs 7, 84(1)
  01c4de0  ld 5, 64(1)
  01c4de4  ld 6, 72(1)
  01c4de8  ld 7, 80(1)
  01c4dec  ld 8, 88(1)
  01c4df0  bl 0x1099f8
  01c4df4  nop
  01c4df8  lfs 1, 320(1)
  01c4dfc  ori 3, 15, 0
  01c4e00  lfs 2, 328(1)
  01c4e04  stfs 1, 64(1)
  01c4e08  stfs 2, 72(1)
  01c4e0c  lfs 1, 336(1)
  01c4e10  lfs 2, 344(1)
  01c4e14  stfs 1, 80(1)
  01c4e18  stfs 2, 88(1)
  01c4e1c  lfs 1, 324(1)
  01c4e20  lfs 2, 8(20)
  01c4e24  stfs 1, 68(1)
  01c4e28  lfs 1, 332(1)
  01c4e2c  lfs 3, 340(1)
  01c4e30  stfs 1, 76(1)
  01c4e34  stfs 3, 84(1)
  01c4e38  lfs 3, 348(1)
  01c4e3c  fmr 1, 2
  01c4e40  stfs 3, 92(1)
  01c4e44  ld 5, 64(1)
  01c4e48  ld 6, 72(1)
  01c4e4c  ld 7, 80(1)
  01c4e50  ld 8, 88(1)
  01c4e54  bl 0x1099f8
  01c4e58  nop
  01c4e5c  lfs 31, 8(20)
  01c4e60  lfs 1, 12(20)
  01c4e64  lfs 2, 320(1)
  01c4e68  fadds 31, 31, 1
  01c4e6c  lwz 3, 20(20)
  01c4e70  stfs 31, 8(20)
  01c4e74  lfs 1, 40(27)
  01c4e78  fcmpu 0, 31, 1
  01c4e7c  bt 0, 0x1c4e8c
  01c4e80  fsubs 1, 31, 1
  01c4e84  sth 25, 2(20)
  01c4e88  stfs 1, 8(20)
  01c4e8c  lfs 1, 16(3)
  01c4e90  fadds 1, 1, 2
  01c4e94  lfs 2, 20(3)
  01c4e98  lfs 3, 24(3)
  01c4e9c  stfs 1, 16(3)
  01c4ea0  lfs 1, 324(1)
  01c4ea4  fadds 1, 2, 1
  01c4ea8  stfs 1, 20(3)
  01c4eac  lfs 1, 328(1)
  01c4eb0  fadds 1, 3, 1
  01c4eb4  stfs 1, 24(3)
  01c4eb8  addic 28, 28, 1
  01c4ebc  addic 26, 26, 24
  01c4ec0  cmpwi 28, 200
  01c4ec4  bt 0, 0x1c4678
  01c4ec8  lfd 1, 448(1)
  01c4ecc  ld 0, 784(1)
  01c4ed0  mtlr 0
  01c4ed4  lfd 14, 624(1)
  01c4ed8  lfd 15, 632(1)
  01c4edc  lfd 16, 640(1)
  01c4ee0  lfd 17, 648(1)
  01c4ee4  lfd 18, 656(1)
  01c4ee8  lfd 19, 664(1)
  01c4eec  lfd 20, 672(1)
  01c4ef0  lfd 21, 680(1)
  01c4ef4  lfd 22, 688(1)
  01c4ef8  lfd 23, 696(1)
  01c4efc  lfd 24, 704(1)
  01c4f00  lfd 25, 712(1)
  01c4f04  lfd 26, 720(1)
  01c4f08  lfd 27, 728(1)
  01c4f0c  lfd 28, 736(1)
  01c4f10  lfd 29, 744(1)
  01c4f14  lfd 30, 752(1)
  01c4f18  lfd 31, 760(1)
  01c4f1c  ld 15, 488(1)
  01c4f20  ld 16, 496(1)
  01c4f24  ld 17, 504(1)
  01c4f28  ld 18, 512(1)
  01c4f2c  ld 19, 520(1)
  01c4f30  ld 20, 528(1)
  01c4f34  ld 21, 536(1)
  01c4f38  ld 22, 544(1)
  01c4f3c  ld 23, 552(1)
  01c4f40  ld 24, 560(1)
  01c4f44  ld 25, 568(1)
  01c4f48  ld 26, 576(1)
  01c4f4c  ld 27, 584(1)
  01c4f50  ld 28, 592(1)
  01c4f54  ld 29, 600(1)
  01c4f58  ld 30, 608(1)
  01c4f5c  ld 31, 616(1)
  01c4f60  addi 1, 1, 768
  01c4f64  blr

M1106_001c4f68:   # 0x1c4f68, 0x24 bytes
  01c4f68  lis 3, 118
  01c4f6c  li 5, 1
  01c4f70  lis 6, 118
  01c4f74  lis 4, 239
  01c4f78  li 7, 0
  01c4f7c  stw 5, 16400(3)
  01c4f80  stw 5, 16404(6)
  01c4f84  sth 7, 3512(4)
  01c4f88  blr

UpdateMoby_1106:   # 0x1c50b0, 0x3fec bytes
  01c50b0  stdu 1, -1136(1)
  01c50b4  mflr 0
  01c50b8  std 0, 1152(1)
  01c50bc  stfd 22, 1056(1)
  01c50c0  stfd 23, 1064(1)
  01c50c4  stfd 24, 1072(1)
  01c50c8  stfd 25, 1080(1)
  01c50cc  stfd 26, 1088(1)
  01c50d0  stfd 27, 1096(1)
  01c50d4  stfd 28, 1104(1)
  01c50d8  stfd 29, 1112(1)
  01c50dc  stfd 30, 1120(1)
  01c50e0  stfd 31, 1128(1)
  01c50e4  std 31, 1048(1)
  01c50e8  lis 4, 28
  01c50ec  ori 31, 3, 0
  01c50f0  addi 5, 4, 20364
  01c50f4  std 30, 1040(1)
  01c50f8  li 4, 11
  01c50fc  lwz 30, 120(31)
  01c5100  lfs 27, 0(5)
  01c5104  addic 5, 30, 672
  01c5108  std 29, 1032(1)
  01c510c  std 28, 1024(1)
  01c5110  std 27, 1016(1)
  01c5114  std 26, 1008(1)
  01c5118  std 25, 1000(1)
  01c511c  std 24, 992(1)
  01c5120  std 23, 984(1)
  01c5124  std 22, 976(1)
  01c5128  std 21, 968(1)
  01c512c  std 20, 960(1)
  01c5130  std 19, 952(1)
  01c5134  std 18, 944(1)
  01c5138  std 17, 936(1)
  01c513c  std 16, 928(1)
  01c5140  std 15, 920(1)
  01c5144  fmr 1, 27
  01c5148  bl 0x119a18
  01c514c  nop
  01c5150  ori 3, 31, 0
  01c5154  bl 0x1c3370
  01c5158  lis 3, 161
  01c515c  lwz 3, 1800(3)
  01c5160  cmpwi 3, 2
  01c5164  bt 2, 0x1c9020
  01c5168  lwz 3, 420(30)
  01c516c  cmpwi 3, -1
  01c5170  bt 2, 0x1c5194
  01c5174  lis 5, 151
  01c5178  extsw 4, 3
  01c517c  addic 3, 5, -25376
  01c5180  addic 3, 3, 128
  01c5184  bl 0x110b70
  01c5188  nop
  01c518c  cmpwi 3, 0
  01c5190  bt 2, 0x1c9020
  01c5194  lbz 3, 49(31)
  01c5198  cmpwi 3, 0
  01c519c  bt 2, 0x1c51e0
  01c51a0  lis 4, 149
  01c51a4  addic 3, 31, 16
  01c51a8  addic 4, 4, 5376
  01c51ac  bl 0x5e8548
  01c51b0  nop
  01c51b4  lis 3, 28
  01c51b8  addi 3, 3, 20364
  01c51bc  lfs 2, 4(3)
  01c51c0  fcmpu 0, 1, 2
  01c51c4  cror 6, 1, 2
  01c51c8  bt 6, 0x1c51e0
  01c51cc  ori 3, 31, 0
  01c51d0  bl 0x106360
  01c51d4  nop
  01c51d8  li 3, 28
  01c51dc  stb 3, 127(31)
  01c51e0  addic 22, 31, 16
  01c51e4  addic 3, 1, 192
  01c51e8  ori 4, 22, 0
  01c51ec  bl 0x5e7e98
  01c51f0  nop
  01c51f4  ori 3, 31, 0
  01c51f8  addic 5, 30, 32
  01c51fc  ori 4, 30, 0
  01c5200  bl 0x1c1e18
  01c5204  lis 3, 28
  01c5208  addic 29, 1, 752
  01c520c  addi 4, 3, 20364
  01c5210  ori 3, 31, 0
  01c5214  ori 5, 29, 0
  01c5218  lfs 26, 8(4)
  01c521c  fmr 1, 26
  01c5220  bl 0x1118d8
  01c5224  nop
  01c5228  ori 3, 29, 0
  01c522c  ori 4, 22, 0
  01c5230  bl 0x5e8588
  01c5234  nop
  01c5238  lfs 2, 752(1)
  01c523c  fmr 31, 1
  01c5240  lfs 1, 16(31)
  01c5244  lfs 3, 756(1)
  01c5248  fsubs 1, 2, 1
  01c524c  lfs 4, 20(31)
  01c5250  fsubs 2, 3, 4
  01c5254  bl 0x5e8338
  01c5258  nop
  01c525c  lis 21, 151
  01c5260  fmr 30, 1
  01c5264  ori 3, 22, 0
  01c5268  addic 21, 21, -25376
  01c526c  addic 20, 21, 128
  01c5270  ori 4, 20, 0
  01c5274  bl 0x5e8588
  01c5278  nop
  01c527c  lfs 2, 128(21)
  01c5280  fmr 29, 1
  01c5284  lfs 1, 16(31)
  01c5288  lfs 3, 132(21)
  01c528c  fsubs 1, 2, 1
  01c5290  lfs 4, 20(31)
  01c5294  fsubs 2, 3, 4
  01c5298  bl 0x5e8338
  01c529c  nop
  01c52a0  li 29, 0
  01c52a4  addic 3, 30, 503
  01c52a8  fmr 28, 1
  01c52ac  ori 19, 29, 0
  01c52b0  bl 0x5000b4
  01c52b4  nop
  01c52b8  cmpwi 3, 0
  01c52bc  bt 2, 0x1c535c
  01c52c0  ori 3, 22, 0
  01c52c4  ori 4, 20, 0
  01c52c8  bl 0x5e8588
  01c52cc  nop
  01c52d0  lis 3, 28
  01c52d4  addi 3, 3, 20364
  01c52d8  lfs 2, 12(3)
  01c52dc  fcmpu 0, 1, 2
  01c52e0  cror 6, 0, 2
  01c52e4  bt 6, 0x1c52f4
  01c52e8  lbz 3, 32(31)
  01c52ec  cmpwi 3, 5
  01c52f0  bf 2, 0x1c5358
  01c52f4  ori 3, 22, 0
  01c52f8  ori 4, 20, 0
  01c52fc  bl 0x5e8588
  01c5300  nop
  01c5304  lis 3, 28
  01c5308  addi 3, 3, 20364
  01c530c  lfs 2, 16(3)
  01c5310  fcmpu 0, 1, 2
  01c5314  cror 6, 0, 2
  01c5318  bt 6, 0x1c535c
  01c531c  lbz 3, 32(31)
  01c5320  cmpwi 3, 5
  01c5324  bt 2, 0x1c5358
  01c5328  lbz 3, 188(31)
  01c532c  addic 4, 3, 1
  01c5330  sldi 5, 4, 4
  01c5334  addc 4, 4, 5
  01c5338  sldi 5, 4, 2
  01c533c  addc 4, 4, 5
  01c5340  srwi 4, 4, 8
  01c5344  addc 5, 4, 4
  01c5348  addc 4, 4, 5
  01c534c  subc 3, 3, 4
  01c5350  cmpwi 3, 1
  01c5354  bf 2, 0x1c535c
  01c5358  li 29, 1
  01c535c  addic 3, 30, 404
  01c5360  bl 0x4fffb4
  01c5364  nop
  01c5368  cntlzw 3, 3
  01c536c  ori 27, 19, 0
  01c5370  rlwinm 28, 3, 27, 31, 31
  01c5374  addic 3, 30, 410
  01c5378  xori 28, 28, 1
  01c537c  bl 0x4fffb4
  01c5380  nop
  01c5384  ori 4, 3, 0
  01c5388  lbz 3, 455(30)
  01c538c  cmpwi 4, 0
  01c5390  lwz 4, 816(1)
  01c5394  lwz 5, 8320(21)
  01c5398  lfs 1, 72(31)
  01c539c  bt 2, 0x1c53bc
  01c53a0  lis 6, 28
  01c53a4  addi 6, 6, 20364
  01c53a8  lfs 2, 20(6)
  01c53ac  fcmpu 0, 31, 2
  01c53b0  cror 6, 0, 2
  01c53b4  bt 6, 0x1c53bc
  01c53b8  li 27, 1
  01c53bc  cmpwi 3, 0
  01c53c0  ori 26, 19, 0
  01c53c4  bt 2, 0x1c540c
  01c53c8  cmpw 4, 5
  01c53cc  bf 2, 0x1c540c
  01c53d0  fcmpu 0, 31, 26
  01c53d4  cror 6, 1, 2
  01c53d8  bt 6, 0x1c540c
  01c53dc  fmr 2, 1
  01c53e0  fmr 1, 30
  01c53e4  bl 0x5025e0
  01c53e8  nop
  01c53ec  fabs 1, 1
  01c53f0  lis 3, 28
  01c53f4  addi 3, 3, 20364
  01c53f8  lfs 2, 24(3)
  01c53fc  fcmpu 0, 1, 2
  01c5400  cror 6, 1, 2
  01c5404  bt 6, 0x1c540c
  01c5408  li 26, 1
  01c540c  addic 3, 30, 408
  01c5410  ori 25, 19, 0
  01c5414  bl 0x4fffb4
  01c5418  nop
  01c541c  ori 4, 3, 0
  01c5420  lbz 3, 32(31)
  01c5424  cmpwi 4, 0
  01c5428  bt 2, 0x1c549c
  01c542c  cmpwi 3, 5
  01c5430  bt 2, 0x1c5464
  01c5434  lbz 4, 188(31)
  01c5438  addic 5, 4, 1
  01c543c  sldi 6, 5, 4
  01c5440  addc 5, 5, 6
  01c5444  sldi 6, 5, 2
  01c5448  addc 5, 5, 6
  01c544c  srwi 5, 5, 8
  01c5450  addc 6, 5, 5
  01c5454  addc 5, 5, 6
  01c5458  subc 4, 4, 5
  01c545c  cmpwi 4, 1
  01c5460  bf 2, 0x1c5478
  01c5464  lis 4, 28
  01c5468  addi 4, 4, 20364
  01c546c  lfs 1, 28(4)
  01c5470  fcmpu 0, 31, 1
  01c5474  bt 0, 0x1c5498
  01c5478  cmpwi 3, 5
  01c547c  bt 2, 0x1c549c
  01c5480  lis 4, 28
  01c5484  addi 4, 4, 20364
  01c5488  lfs 1, 32(4)
  01c548c  fcmpu 0, 31, 1
  01c5490  cror 6, 1, 2
  01c5494  bt 6, 0x1c549c
  01c5498  li 25, 1
  01c549c  lis 4, 28
  01c54a0  lfs 1, 24(31)
  01c54a4  ori 24, 19, 0
  01c54a8  addi 4, 4, 20364
  01c54ac  ori 23, 24, 0
  01c54b0  lfs 25, 36(4)
  01c54b4  lfs 2, 728(21)
  01c54b8  fadds 1, 1, 25
  01c54bc  fcmpu 0, 2, 1
  01c54c0  cror 6, 0, 2
  01c54c4  bt 6, 0x1c54f0
  01c54c8  lwz 4, 764(21)
  01c54cc  cmpwi 4, 0
  01c54d0  bt 2, 0x1c54f0
  01c54d4  lhz 4, 166(4)
  01c54d8  extsh 4, 4
  01c54dc  cmpwi 1, 4, 1116
  01c54e0  cmpwi 4, 1113
  01c54e4  cror 2, 0, 5
  01c54e8  bt 2, 0x1c54f0
  01c54ec  li 23, 1
  01c54f0  lbz 4, 188(31)
  01c54f4  cmpwi 4, 3
  01c54f8  cmpwi 1, 4, 0
  01c54fc  cmpwi 6, 4, -1
  01c5500  cmpwi 7, 4, 1
  01c5504  bt 1, 0x1c5524
  01c5508  bt 5, 0x1c5514
  01c550c  bf 25, 0x1c5688
  01c5510  b 0x1c5554
  01c5514  bf 29, 0x1c5560
  01c5518  cmpwi 4, 2
  01c551c  bf 1, 0x1c5578
  01c5520  b 0x1c558c
  01c5524  cmpwi 4, 6
  01c5528  bt 1, 0x1c5540
  01c552c  cmpwi 4, 4
  01c5530  bf 1, 0x1c560c
  01c5534  cmpwi 4, 5
  01c5538  bf 1, 0x1c5624
  01c553c  b 0x1c5638
  01c5540  cmpwi 4, 7
  01c5544  bf 1, 0x1c5660
  01c5548  cmpwi 4, 8
  01c554c  bf 1, 0x1c5678
  01c5550  b 0x1c5688
  01c5554  ori 29, 19, 0
  01c5558  ori 26, 29, 0
  01c555c  b 0x1c5688
  01c5560  ori 26, 19, 0
  01c5564  cmpwi 3, 1
  01c5568  ori 28, 26, 0
  01c556c  bt 2, 0x1c5688
  01c5570  ori 27, 19, 0
  01c5574  b 0x1c5688
  01c5578  ori 25, 19, 0
  01c557c  ori 28, 25, 0
  01c5580  ori 26, 28, 0
  01c5584  ori 27, 26, 0
  01c5588  b 0x1c5688
  01c558c  li 3, -1
  01c5590  lwz 5, 424(30)
  01c5594  li 6, -1
  01c5598  li 7, -1
  01c559c  subc 3, 3, 5
  01c55a0  subc 6, 6, 5
  01c55a4  subc 5, 7, 5
  01c55a8  cntlzw 3, 3
  01c55ac  li 4, 0
  01c55b0  cntlzw 6, 6
  01c55b4  cntlzw 5, 5
  01c55b8  li 29, 1
  01c55bc  sldi 3, 3, 58
  01c55c0  li 8, 0
  01c55c4  li 9, 0
  01c55c8  sldi 6, 6, 58
  01c55cc  sldi 5, 5, 58
  01c55d0  subc 4, 4, 29
  01c55d4  sradi 3, 3, 63
  01c55d8  subc 7, 28, 8
  01c55dc  subc 10, 25, 9
  01c55e0  sradi 6, 6, 63
  01c55e4  sradi 5, 5, 63
  01c55e8  and 3, 3, 4
  01c55ec  and 28, 6, 7
  01c55f0  and 25, 5, 10
  01c55f4  addc 29, 29, 3
  01c55f8  addc 28, 8, 28
  01c55fc  addc 25, 9, 25
  01c5600  ori 26, 19, 0
  01c5604  ori 24, 29, 0
  01c5608  b 0x1c5688
  01c560c  ori 26, 19, 0
  01c5610  cmpwi 3, 1
  01c5614  ori 28, 26, 0
  01c5618  bt 2, 0x1c5688
  01c561c  ori 27, 19, 0
  01c5620  b 0x1c5688
  01c5624  ori 25, 19, 0
  01c5628  ori 28, 25, 0
  01c562c  ori 26, 28, 0
  01c5630  ori 27, 26, 0
  01c5634  b 0x1c5688
  01c5638  lwz 3, 424(30)
  01c563c  cmpwi 3, -1
  01c5640  bt 2, 0x1c5658
  01c5644  li 24, 1
  01c5648  ori 25, 19, 0
  01c564c  ori 29, 24, 0
  01c5650  ori 28, 25, 0
  01c5654  b 0x1c5688
  01c5658  ori 29, 19, 0
  01c565c  b 0x1c5688
  01c5660  ori 26, 19, 0
  01c5664  cmpwi 3, 1
  01c5668  ori 28, 26, 0
  01c566c  bt 2, 0x1c5688
  01c5670  ori 27, 19, 0
  01c5674  b 0x1c5688
  01c5678  ori 25, 19, 0
  01c567c  ori 28, 25, 0
  01c5680  ori 27, 28, 0
  01c5684  ori 26, 27, 0
  01c5688  lis 3, 28
  01c568c  lfs 1, 32(30)
  01c5690  addi 18, 3, 20364
  01c5694  lfs 24, 40(18)
  01c5698  fmuls 1, 1, 24
  01c569c  bl 0x502758
  01c56a0  nop
  01c56a4  lhz 4, 36(30)
  01c56a8  rlwinm 17, 3, 0, 16, 27
  01c56ac  extsh 4, 4
  01c56b0  extsw 4, 4
  01c56b4  std 4, 896(1)
  01c56b8  stw 17, 436(30)
  01c56bc  lfs 23, 44(18)
  01c56c0  lfd 1, 896(1)
  01c56c4  fcfid 1, 1
  01c56c8  frsp 1, 1
  01c56cc  fsubs 1, 1, 23
  01c56d0  fmuls 1, 1, 24
  01c56d4  bl 0x502758
  01c56d8  nop
  01c56dc  cmpw 17, 3
  01c56e0  bt 0, 0x1c56f0
  01c56e4  lwz 3, 436(30)
  01c56e8  ori 3, 3, 15
  01c56ec  stw 3, 436(30)
  01c56f0  lbz 3, 188(31)
  01c56f4  addic 4, 3, 1
  01c56f8  sldi 5, 4, 4
  01c56fc  addc 4, 4, 5
  01c5700  sldi 5, 4, 2
  01c5704  addc 4, 4, 5
  01c5708  srwi 4, 4, 8
  01c570c  addc 5, 4, 4
  01c5710  addc 4, 4, 5
  01c5714  subc 3, 3, 4
  01c5718  cmpwi 3, 0
  01c571c  bf 2, 0x1c57cc
  01c5720  lwz 4, 32(30)
  01c5724  lis 3, 16128
  01c5728  lfs 1, 32(30)
  01c572c  srawi 5, 4, 31
  01c5730  srwi 6, 5, 1
  01c5734  xor 4, 6, 4
  01c5738  subc 4, 4, 5
  01c573c  cmpw 4, 3
  01c5740  bf 1, 0x1c57c8
  01c5744  bl 0x502758
  01c5748  nop
  01c574c  lis 4, 10922
  01c5750  lhz 5, 36(30)
  01c5754  ori 4, 4, 43691
  01c5758  extsh 5, 5
  01c575c  mulhw 6, 4, 5
  01c5760  mulhw 8, 4, 5
  01c5764  srwi 7, 6, 31
  01c5768  mulhw 4, 4, 5
  01c576c  addc 6, 6, 7
  01c5770  srwi 7, 8, 31
  01c5774  divw 6, 3, 6
  01c5778  addc 5, 8, 7
  01c577c  mullw 5, 6, 5
  01c5780  srwi 6, 4, 31
  01c5784  subc 3, 3, 5
  01c5788  addc 4, 4, 6
  01c578c  sldi 3, 3, 4
  01c5790  li 5, 0
  01c5794  divw 3, 3, 4
  01c5798  extsw 4, 3
  01c579c  li 6, 0
  01c57a0  subc 4, 4, 5
  01c57a4  subc 6, 6, 3
  01c57a8  lwz 5, 436(30)
  01c57ac  sradi 4, 4, 63
  01c57b0  and 4, 4, 6
  01c57b4  addc 3, 3, 4
  01c57b8  clrlwi 3, 3, 28
  01c57bc  addc 3, 5, 3
  01c57c0  stw 3, 436(30)
  01c57c4  b 0x1c57cc
  01c57c8  stw 19, 436(30)
  01c57cc  lbz 3, 188(31)
  01c57d0  addic 4, 3, 1
  01c57d4  sldi 5, 4, 4
  01c57d8  addc 4, 4, 5
  01c57dc  sldi 5, 4, 2
  01c57e0  addc 4, 4, 5
  01c57e4  srwi 4, 4, 8
  01c57e8  addc 5, 4, 4
  01c57ec  addc 4, 4, 5
  01c57f0  subc 3, 3, 4
  01c57f4  cmpwi 3, 2
  01c57f8  bf 2, 0x1c5808
  01c57fc  lwz 3, 436(30)
  01c5800  addic 3, 3, 15
  01c5804  stw 3, 436(30)
  01c5808  lbz 3, 32(31)
  01c580c  cmpwi 1, 3, 0
  01c5810  cmpwi 3, 8
  01c5814  cror 2, 2, 6
  01c5818  bt 2, 0x1c5824
  01c581c  ori 3, 31, 0
  01c5820  bl 0x1c3478
  01c5824  lbz 3, 453(30)
  01c5828  cmpwi 3, 1
  01c582c  bf 2, 0x1c5894
  01c5830  lwz 4, 504(30)
  01c5834  cmpwi 4, -1
  01c5838  bf 2, 0x1c5858
  01c583c  li 3, 15
  01c5840  li 4, 4
  01c5844  ori 5, 31, 0
  01c5848  bl 0x15d12c
  01c584c  nop
  01c5850  stw 3, 504(30)
  01c5854  lbz 3, 453(30)
  01c5858  lis 4, 28
  01c585c  lfs 1, 456(30)
  01c5860  lis 5, 114
  01c5864  addi 4, 4, 20364
  01c5868  lfs 2, 48(4)
  01c586c  lfs 3, -3064(5)
  01c5870  fmadds 1, 3, 2, 1
  01c5874  fcmpu 1, 1, 25
  01c5878  stfs 1, 456(30)
  01c587c  bt 4, 0x1c5888
  01c5880  ori 3, 19, 0
  01c5884  stb 19, 453(30)
  01c5888  bf 5, 0x1c5894
  01c588c  lis 4, 16256
  01c5890  stw 4, 456(30)
  01c5894  cmpwi 3, 2
  01c5898  bf 2, 0x1c5954
  01c589c  lwz 3, 504(30)
  01c58a0  cmpwi 3, -1
  01c58a4  bf 2, 0x1c58c0
  01c58a8  li 3, 15
  01c58ac  li 4, 4
  01c58b0  ori 5, 31, 0
  01c58b4  bl 0x15d12c
  01c58b8  nop
  01c58bc  stw 3, 504(30)
  01c58c0  lis 4, 28
  01c58c4  lfs 1, 456(30)
  01c58c8  lis 5, 114
  01c58cc  addi 4, 4, 20364
  01c58d0  cmpwi 1, 3, -1
  01c58d4  lfs 2, 48(4)
  01c58d8  lfs 3, -3064(5)
  01c58dc  fnmsubs 1, 3, 2, 1
  01c58e0  stfs 1, 456(30)
  01c58e4  lfs 22, 52(4)
  01c58e8  fcmpu 0, 1, 22
  01c58ec  bt 1, 0x1c5944
  01c58f0  bt 6, 0x1c5938
  01c58f4  sldi 4, 3, 7
  01c58f8  sldi 6, 3, 4
  01c58fc  lis 5, 150
  01c5900  subc 4, 4, 6
  01c5904  addic 5, 5, 14176
  01c5908  extsw 4, 4
  01c590c  addc 4, 5, 4
  01c5910  lwz 5, 136(4)
  01c5914  cmpw 5, 31
  01c5918  bf 2, 0x1c5938
  01c591c  lbz 4, 116(4)
  01c5920  cmpwi 4, 0
  01c5924  bt 2, 0x1c5938
  01c5928  extsw 3, 3
  01c592c  bl 0x15cdb0
  01c5930  nop
  01c5934  lfs 1, 456(30)
  01c5938  li 3, -1
  01c593c  stw 3, 504(30)
  01c5940  stb 19, 453(30)
  01c5944  fcmpu 0, 1, 22
  01c5948  cror 6, 1, 2
  01c594c  bt 6, 0x1c5954
  01c5950  stw 19, 456(30)
  01c5954  lis 3, 28
  01c5958  lwz 4, 456(30)
  01c595c  addi 3, 3, 20364
  01c5960  cmpwi 4, 0
  01c5964  lfs 22, 52(3)
  01c5968  bf 1, 0x1c5980
  01c596c  lis 3, 113
  01c5970  ori 4, 31, 0
  01c5974  addic 3, 3, -29784
  01c5978  bl 0x6d720
  01c597c  nop
  01c5980  ori 3, 31, 0
  01c5984  ori 4, 30, 0
  01c5988  ori 5, 20, 0
  01c598c  bl 0x1c30c0
  01c5990  lbz 3, 32(31)
  01c5994  cmpwi 3, 0
  01c5998  bt 2, 0x1c59f4
  01c599c  cmpwi 1, 3, 16
  01c59a0  cmpwi 3, 10
  01c59a4  cror 2, 2, 6
  01c59a8  bt 2, 0x1c59f4
  01c59ac  lhz 3, 36(30)
  01c59b0  lis 5, 112
  01c59b4  lis 6, 112
  01c59b8  extsh 9, 3
  01c59bc  li 3, 22
  01c59c0  lis 4, 0
  01c59c4  lis 7, 112
  01c59c8  sldi 9, 9, 4
  01c59cc  addic 8, 30, 436
  01c59d0  addic 5, 5, 22176
  01c59d4  addic 6, 6, 22216
  01c59d8  addic 7, 7, 22632
  01c59dc  ori 4, 4, 65535
  01c59e0  addic 9, 9, 15
  01c59e4  bl 0xc8444
  01c59e8  nop
  01c59ec  stw 3, 432(30)
  01c59f0  lbz 3, 32(31)
  01c59f4  cmpwi 3, 8
  01c59f8  cmpwi 1, 3, 2
  01c59fc  bt 1, 0x1c5a4c
  01c5a00  cmpwi 6, 3, 0
  01c5a04  cmpwi 7, 3, 4
  01c5a08  bt 5, 0x1c5a28
  01c5a0c  cmpwi 1, 3, -1
  01c5a10  cmpwi 7, 3, 1
  01c5a14  bt 25, 0x1c5a20
  01c5a18  bf 5, 0x1c8fe8
  01c5a1c  b 0x1c5a9c
  01c5a20  bf 29, 0x1c5d88
  01c5a24  b 0x1c603c
  01c5a28  cmpwi 1, 3, 3
  01c5a2c  cmpwi 6, 3, 6
  01c5a30  bt 29, 0x1c5a3c
  01c5a34  bf 5, 0x1c6310
  01c5a38  b 0x1c6628
  01c5a3c  cmpwi 1, 3, 7
  01c5a40  bf 25, 0x1c6aec
  01c5a44  bf 5, 0x1c7250
  01c5a48  b 0x1c80c4
  01c5a4c  cmpwi 3, 13
  01c5a50  cmpwi 6, 3, 10
  01c5a54  cmpwi 7, 3, 15
  01c5a58  bt 1, 0x1c5a80
  01c5a5c  cmpwi 1, 3, 9
  01c5a60  cmpwi 7, 3, 11
  01c5a64  bt 25, 0x1c5a70
  01c5a68  bf 5, 0x1c8928
  01c5a6c  b 0x1c8dd0
  01c5a70  cmpwi 1, 3, 12
  01c5a74  bf 29, 0x1c8eec
  01c5a78  bf 5, 0x1c76e8
  01c5a7c  b 0x1c797c
  01c5a80  cmpwi 1, 3, 14
  01c5a84  cmpwi 6, 3, 16
  01c5a88  bt 29, 0x1c5a94
  01c5a8c  bf 5, 0x1c7af0
  01c5a90  b 0x1c7f68
  01c5a94  bf 25, 0x1c8f4c
  01c5a98  b 0x1c8fe8
  01c5a9c  lis 3, 239
  01c5aa0  li 4, 1
  01c5aa4  li 5, -1
  01c5aa8  stb 19, -1568(3)
  01c5aac  stb 4, 32(31)
  01c5ab0  stb 19, 188(31)
  01c5ab4  lwz 4, 396(30)
  01c5ab8  stw 19, 400(30)
  01c5abc  cmpwi 4, -1
  01c5ac0  sth 5, 640(30)
  01c5ac4  bt 2, 0x1c5b90
  01c5ac8  lis 29, 165
  01c5acc  slwi 3, 4, 2
  01c5ad0  addic 29, 29, 7136
  01c5ad4  extsw 5, 3
  01c5ad8  ori 3, 19, 0
  01c5adc  lwzx 5, 29, 5
  01c5ae0  lwz 5, 0(5)
  01c5ae4  cmpwi 5, 0
  01c5ae8  bf 1, 0x1c5b90
  01c5aec  ori 28, 19, 0
  01c5af0  slwi 4, 4, 2
  01c5af4  addic 27, 3, 1
  01c5af8  extsw 4, 4
  01c5afc  lwzx 3, 29, 4
  01c5b00  lwz 4, 0(3)
  01c5b04  divw 5, 27, 4
  01c5b08  mullw 4, 5, 4
  01c5b0c  addc 5, 3, 28
  01c5b10  subc 4, 27, 4
  01c5b14  addic 5, 5, 16
  01c5b18  sldi 4, 4, 4
  01c5b1c  clrldi 5, 5, 32
  01c5b20  addc 4, 3, 4
  01c5b24  ori 3, 5, 0
  01c5b28  addic 4, 4, 16
  01c5b2c  clrldi 4, 4, 32
  01c5b30  bl 0x5e8548
  01c5b34  nop
  01c5b38  lwz 3, 396(30)
  01c5b3c  slwi 3, 3, 2
  01c5b40  extsw 3, 3
  01c5b44  lwzx 3, 29, 3
  01c5b48  addc 3, 3, 28
  01c5b4c  clrldi 3, 3, 32
  01c5b50  stfs 1, 28(3)
  01c5b54  lwz 4, 396(30)
  01c5b58  lfs 1, 400(30)
  01c5b5c  slwi 3, 4, 2
  01c5b60  extsw 5, 3
  01c5b64  ori 3, 27, 0
  01c5b68  lwzx 5, 29, 5
  01c5b6c  addc 6, 5, 28
  01c5b70  addic 28, 28, 16
  01c5b74  clrldi 6, 6, 32
  01c5b78  lfs 2, 28(6)
  01c5b7c  fadds 1, 1, 2
  01c5b80  stfs 1, 400(30)
  01c5b84  lwz 5, 0(5)
  01c5b88  cmpw 3, 5
  01c5b8c  bt 0, 0x1c5af0
  01c5b90  lwz 3, 656(30)
  01c5b94  cmpwi 3, -1
  01c5b98  bt 2, 0x1c5c0c
  01c5b9c  lis 4, 165
  01c5ba0  slwi 3, 3, 2
  01c5ba4  addic 29, 4, 7136
  01c5ba8  extsw 4, 3
  01c5bac  ori 3, 19, 0
  01c5bb0  lwzx 29, 29, 4
  01c5bb4  lwz 4, 0(29)
  01c5bb8  cmpwi 4, 0
  01c5bbc  bf 1, 0x1c5c0c
  01c5bc0  ori 28, 29, 0
  01c5bc4  addic 27, 28, 16
  01c5bc8  addic 26, 3, 1
  01c5bcc  divw 3, 26, 4
  01c5bd0  mullw 3, 3, 4
  01c5bd4  addic 25, 28, 16
  01c5bd8  subc 3, 26, 3
  01c5bdc  sldi 4, 3, 4
  01c5be0  ori 3, 25, 0
  01c5be4  addc 4, 4, 27
  01c5be8  clrldi 4, 4, 32
  01c5bec  bl 0x5e8548
  01c5bf0  nop
  01c5bf4  stfs 1, 28(28)
  01c5bf8  ori 3, 26, 0
  01c5bfc  lwz 4, 0(29)
  01c5c00  ori 28, 25, 0
  01c5c04  cmpw 3, 4
  01c5c08  bt 0, 0x1c5bc8
  01c5c0c  lwz 3, 392(30)
  01c5c10  cmpwi 3, -1
  01c5c14  bt 2, 0x1c5ca0
  01c5c18  lis 28, 165
  01c5c1c  slwi 4, 3, 2
  01c5c20  addic 28, 28, 7136
  01c5c24  extsw 4, 4
  01c5c28  ori 29, 19, 0
  01c5c2c  lwzx 4, 28, 4
  01c5c30  lwz 4, 0(4)
  01c5c34  cmpwi 4, 0
  01c5c38  bf 1, 0x1c5ca0
  01c5c3c  ori 27, 19, 0
  01c5c40  slwi 3, 3, 2
  01c5c44  extsw 3, 3
  01c5c48  lwzx 3, 28, 3
  01c5c4c  addc 3, 3, 27
  01c5c50  clrldi 3, 3, 32
  01c5c54  lfs 1, 28(3)
  01c5c58  bl 0x502758
  01c5c5c  nop
  01c5c60  cmpwi 3, 0
  01c5c64  bt 0, 0x1c5c7c
  01c5c68  cmpwi 3, 3
  01c5c6c  bt 1, 0x1c5c7c
  01c5c70  addc 3, 3, 30
  01c5c74  clrldi 3, 3, 32
  01c5c78  stb 29, 468(3)
  01c5c7c  lwz 3, 392(30)
  01c5c80  addic 29, 29, 1
  01c5c84  addic 27, 27, 16
  01c5c88  slwi 4, 3, 2
  01c5c8c  extsw 4, 4
  01c5c90  lwzx 4, 28, 4
  01c5c94  lwz 4, 0(4)
  01c5c98  cmpw 29, 4
  01c5c9c  bt 0, 0x1c5c40
  01c5ca0  lwz 5, 168(30)
  01c5ca4  lhz 6, 52(31)
  01c5ca8  addic 3, 30, 368
  01c5cac  rlwimi 5, 19, 0, 28, 28
  01c5cb0  lwz 7, 392(30)
  01c5cb4  ori 6, 6, 4096
  01c5cb8  li 4, 3
  01c5cbc  stw 5, 168(30)
  01c5cc0  extsw 5, 7
  01c5cc4  sth 6, 52(31)
  01c5cc8  bl 0x11440c
  01c5ccc  nop
  01c5cd0  li 3, 7
  01c5cd4  li 4, 255
  01c5cd8  fmr 1, 22
  01c5cdc  lis 5, 165
  01c5ce0  li 6, -1
  01c5ce4  stb 3, 412(30)
  01c5ce8  addic 5, 5, 7136
  01c5cec  stb 4, 48(31)
  01c5cf0  ori 3, 22, 0
  01c5cf4  lwz 7, 392(30)
  01c5cf8  sth 4, 50(31)
  01c5cfc  slwi 4, 7, 2
  01c5d00  stw 6, 424(30)
  01c5d04  stw 6, 432(30)
  01c5d08  extsw 4, 4
  01c5d0c  lwzx 4, 5, 4
  01c5d10  bl 0x1367d0
  01c5d14  nop
  01c5d18  stw 3, 448(30)
  01c5d1c  lis 3, 118
  01c5d20  fmr 1, 26
  01c5d24  li 4, 1
  01c5d28  lis 5, 118
  01c5d2c  lis 6, 239
  01c5d30  lis 7, 28
  01c5d34  stw 4, 16400(3)
  01c5d38  addi 29, 7, 20364
  01c5d3c  stw 4, 16404(5)
  01c5d40  lis 3, 16351
  01c5d44  sth 19, 3512(6)
  01c5d48  lfs 2, 44(31)
  01c5d4c  ori 3, 3, 26355
  01c5d50  lfs 3, 56(29)
  01c5d54  fmuls 2, 2, 3
  01c5d58  stfs 2, 44(31)
  01c5d5c  stb 19, 455(30)
  01c5d60  stw 3, 152(30)
  01c5d64  stb 4, 41(30)
  01c5d68  bl 0x502758
  01c5d6c  nop
  01c5d70  stb 3, 88(30)
  01c5d74  lfs 1, 60(29)
  01c5d78  bl 0x502758
  01c5d7c  nop
  01c5d80  stb 3, 90(30)
  01c5d84  b 0x1c8fe8
  01c5d88  lbz 3, 112(31)
  01c5d8c  rlwinm 3, 3, 0, 30, 30
  01c5d90  cmpwi 3, 0
  01c5d94  bt 2, 0x1c5df8
  01c5d98  lbz 24, 83(31)
  01c5d9c  bl 0x5c8318
  01c5da0  nop
  01c5da4  clrlwi 3, 3, 31
  01c5da8  cmpw 24, 3
  01c5dac  bt 2, 0x1c5df8
  01c5db0  bl 0x5c8318
  01c5db4  nop
  01c5db8  clrlwi 24, 3, 31
  01c5dbc  li 3, 0
  01c5dc0  li 4, 15
  01c5dc4  bl 0xfe484
  01c5dc8  nop
  01c5dcc  ori 23, 3, 0
  01c5dd0  li 3, 30
  01c5dd4  li 4, 42
  01c5dd8  bl 0xfe484
  01c5ddc  nop
  01c5de0  ori 6, 3, 0
  01c5de4  ori 3, 31, 0
  01c5de8  ori 4, 24, 0
  01c5dec  ori 5, 23, 0
  01c5df0  bl 0xfddc0
  01c5df4  nop
  01c5df8  addic 3, 30, 352
  01c5dfc  bl 0x4fff60
  01c5e00  nop
  01c5e04  cmpwi 3, 0
  01c5e08  bt 2, 0x1c5fc8
  01c5e0c  cmpwi 27, 0
  01c5e10  lbz 3, 32(31)
  01c5e14  bt 2, 0x1c5e70
  01c5e18  stw 19, 356(30)
  01c5e1c  stw 19, 352(30)
  01c5e20  lbz 3, 83(31)
  01c5e24  cmpwi 3, 5
  01c5e28  bt 2, 0x1c5e68
  01c5e2c  li 3, 0
  01c5e30  li 4, 2
  01c5e34  bl 0xfe484
  01c5e38  nop
  01c5e3c  ori 27, 3, 0
  01c5e40  li 3, 18
  01c5e44  li 4, 20
  01c5e48  bl 0xfe484
  01c5e4c  nop
  01c5e50  ori 6, 3, 0
  01c5e54  ori 3, 31, 0
  01c5e58  li 4, 5
  01c5e5c  ori 5, 27, 0
  01c5e60  bl 0xfddc0
  01c5e64  nop
  01c5e68  li 3, 4
  01c5e6c  stb 3, 32(31)
  01c5e70  cmpwi 28, 0
  01c5e74  cmpwi 1, 3, 5
  01c5e78  bt 2, 0x1c5ef0
  01c5e7c  bf 6, 0x1c5e94
  01c5e80  li 3, 4
  01c5e84  bl 0xfc620
  01c5e88  nop
  01c5e8c  cmpwi 3, 0
  01c5e90  bf 2, 0x1c5ef0
  01c5e94  stw 19, 356(30)
  01c5e98  lbz 3, 83(31)
  01c5e9c  cmpwi 3, 4
  01c5ea0  bt 2, 0x1c5ee0
  01c5ea4  li 3, 0
  01c5ea8  li 4, 9
  01c5eac  bl 0xfe484
  01c5eb0  nop
  01c5eb4  ori 28, 3, 0
  01c5eb8  li 3, 20
  01c5ebc  li 4, 40
  01c5ec0  bl 0xfe484
  01c5ec4  nop
  01c5ec8  ori 6, 3, 0
  01c5ecc  ori 3, 31, 0
  01c5ed0  li 4, 4
  01c5ed4  ori 5, 28, 0
  01c5ed8  bl 0xfddc0
  01c5edc  nop
  01c5ee0  lis 3, 16256
  01c5ee4  li 4, 3
  01c5ee8  stw 3, 88(31)
  01c5eec  stb 4, 32(31)
  01c5ef0  cmpwi 26, 0
  01c5ef4  bt 2, 0x1c5f70
  01c5ef8  lbz 3, 83(31)
  01c5efc  cmpwi 3, 6
  01c5f00  bt 2, 0x1c5f40
  01c5f04  li 3, 0
  01c5f08  li 4, 2
  01c5f0c  bl 0xfe484
  01c5f10  nop
  01c5f14  ori 28, 3, 0
  01c5f18  li 3, 15
  01c5f1c  li 4, 25
  01c5f20  bl 0xfe484
  01c5f24  nop
  01c5f28  ori 6, 3, 0
  01c5f2c  ori 3, 31, 0
  01c5f30  li 4, 6
  01c5f34  ori 5, 28, 0
  01c5f38  bl 0xfddc0
  01c5f3c  nop
  01c5f40  li 6, 8
  01c5f44  li 3, 9
  01c5f48  stw 19, 356(30)
  01c5f4c  stw 19, 364(30)
  01c5f50  li 4, 4
  01c5f54  stb 19, 452(30)
  01c5f58  ori 5, 31, 0
  01c5f5c  stb 6, 32(31)
  01c5f60  stw 19, 660(30)
  01c5f64  bl 0x15d12c
  01c5f68  nop
  01c5f6c  stw 3, 504(30)
  01c5f70  cmpwi 25, 0
  01c5f74  bt 2, 0x1c5fc8
  01c5f78  lbz 3, 83(31)
  01c5f7c  cmpwi 3, 9
  01c5f80  bt 2, 0x1c5fc0
  01c5f84  li 3, 0
  01c5f88  li 4, 2
  01c5f8c  bl 0xfe484
  01c5f90  nop
  01c5f94  ori 28, 3, 0
  01c5f98  li 3, 17
  01c5f9c  li 4, 25
  01c5fa0  bl 0xfe484
  01c5fa4  nop
  01c5fa8  ori 6, 3, 0
  01c5fac  ori 3, 31, 0
  01c5fb0  li 4, 9
  01c5fb4  ori 5, 28, 0
  01c5fb8  bl 0xfddc0
  01c5fbc  nop
  01c5fc0  li 3, 2
  01c5fc4  stb 3, 32(31)
  01c5fc8  cmpwi 29, 0
  01c5fcc  bt 2, 0x1c8fe8
  01c5fd0  lbz 3, 32(31)
  01c5fd4  cmpwi 3, 8
  01c5fd8  bt 2, 0x1c8fe8
  01c5fdc  lbz 3, 83(31)
  01c5fe0  cmpwi 3, 10
  01c5fe4  bt 2, 0x1c6024
  01c5fe8  li 3, 0
  01c5fec  li 4, 4
  01c5ff0  bl 0xfe484
  01c5ff4  nop
  01c5ff8  ori 29, 3, 0
  01c5ffc  li 3, 20
  01c6000  li 4, 30
  01c6004  bl 0xfe484
  01c6008  nop
  01c600c  ori 6, 3, 0
  01c6010  ori 3, 31, 0
  01c6014  li 4, 10
  01c6018  ori 5, 29, 0
  01c601c  bl 0xfddc0
  01c6020  nop
  01c6024  lis 3, 16320
  01c6028  stw 19, 664(30)
  01c602c  li 4, 5
  01c6030  stw 3, 88(31)
  01c6034  stb 4, 32(31)
  01c6038  b 0x1c8fe8
  01c603c  lis 3, 161
  01c6040  lis 4, 10922
  01c6044  ori 4, 4, 43691
  01c6048  lwz 3, 1808(3)
  01c604c  mulhw 4, 4, 3
  01c6050  lfs 31, 72(31)
  01c6054  srwi 5, 4, 31
  01c6058  addc 4, 4, 5
  01c605c  addc 5, 4, 4
  01c6060  addc 4, 4, 5
  01c6064  addc 4, 4, 4
  01c6068  subc 4, 3, 4
  01c606c  cmpwi 4, 0
  01c6070  bf 2, 0x1c609c
  01c6074  lis 4, 28
  01c6078  ori 3, 31, 0
  01c607c  addi 5, 4, 20364
  01c6080  li 4, 0
  01c6084  lfs 1, 64(5)
  01c6088  lfs 2, 68(5)
  01c608c  bl 0x1314c8
  01c6090  nop
  01c6094  lis 3, 161
  01c6098  lwz 3, 1808(3)
  01c609c  lis 4, 10922
  01c60a0  addic 3, 3, -2
  01c60a4  ori 4, 4, 43691
  01c60a8  mulhw 4, 4, 3
  01c60ac  srwi 5, 4, 31
  01c60b0  addc 4, 4, 5
  01c60b4  addc 5, 4, 4
  01c60b8  addc 4, 4, 5
  01c60bc  addc 4, 4, 4
  01c60c0  subc 3, 3, 4
  01c60c4  cmpwi 3, 0
  01c60c8  bf 2, 0x1c60ec
  01c60cc  lis 4, 28
  01c60d0  ori 3, 31, 0
  01c60d4  addi 5, 4, 20364
  01c60d8  li 4, 1
  01c60dc  lfs 1, 64(5)
  01c60e0  lfs 2, 68(5)
  01c60e4  bl 0x1314c8
  01c60e8  nop
  01c60ec  ori 3, 31, 0
  01c60f0  ori 4, 30, 0
  01c60f4  ori 5, 20, 0
  01c60f8  li 6, 9
  01c60fc  li 7, 0
  01c6100  bl 0x1c2bb8
  01c6104  cmpwi 3, 0
  01c6108  bf 2, 0x1c8fe8
  01c610c  lis 3, 28
  01c6110  lis 28, 114
  01c6114  fmr 1, 30
  01c6118  addi 29, 3, 20364
  01c611c  lis 3, 114
  01c6120  addic 5, 30, 360
  01c6124  lfs 4, 72(29)
  01c6128  lfs 5, 76(29)
  01c612c  lfs 3, -3048(3)
  01c6130  lfs 6, -3052(28)
  01c6134  ori 3, 31, 0
  01c6138  fmuls 2, 3, 4
  01c613c  fmuls 3, 3, 5
  01c6140  fmuls 4, 6, 4
  01c6144  bl 0xff2e8
  01c6148  nop
  01c614c  lfs 1, 72(31)
  01c6150  fmr 2, 31
  01c6154  bl 0x5026a0
  01c6158  nop
  01c615c  lfs 2, 80(29)
  01c6160  lfs 3, -3052(28)
  01c6164  fmuls 2, 3, 2
  01c6168  fcmpu 0, 1, 2
  01c616c  cror 6, 0, 2
  01c6170  bt 6, 0x1c61c4
  01c6174  lbz 3, 83(31)
  01c6178  cmpwi 1, 3, 13
  01c617c  bt 6, 0x1c6210
  01c6180  bt 6, 0x1c6210
  01c6184  li 3, 0
  01c6188  li 4, 1
  01c618c  bl 0xfe484
  01c6190  nop
  01c6194  ori 29, 3, 0
  01c6198  li 3, 15
  01c619c  li 4, 22
  01c61a0  bl 0xfe484
  01c61a4  nop
  01c61a8  ori 6, 3, 0
  01c61ac  ori 3, 31, 0
  01c61b0  li 4, 13
  01c61b4  ori 5, 29, 0
  01c61b8  bl 0xfddc0
  01c61bc  nop
  01c61c0  b 0x1c6210
  01c61c4  lbz 3, 83(31)
  01c61c8  cmpwi 1, 3, 9
  01c61cc  bt 6, 0x1c6210
  01c61d0  bt 6, 0x1c6210
  01c61d4  li 3, 0
  01c61d8  li 4, 1
  01c61dc  bl 0xfe484
  01c61e0  nop
  01c61e4  ori 29, 3, 0
  01c61e8  li 3, 15
  01c61ec  li 4, 22
  01c61f0  bl 0xfe484
  01c61f4  nop
  01c61f8  ori 6, 3, 0
  01c61fc  ori 3, 31, 0
  01c6200  li 4, 9
  01c6204  ori 5, 29, 0
  01c6208  bl 0xfddc0
  01c620c  nop
  01c6210  lbz 3, 82(31)
  01c6214  cmpwi 3, 9
  01c6218  cmpwi 1, 3, 13
  01c621c  bt 2, 0x1c6224
  01c6220  bf 6, 0x1c6238
  01c6224  ori 3, 31, 0
  01c6228  addic 5, 1, 752
  01c622c  ori 4, 30, 0
  01c6230  bl 0x1bfdb8
  01c6234  stb 3, 32(31)
  01c6238  lbz 3, 188(31)
  01c623c  addic 4, 3, 1
  01c6240  sldi 5, 4, 4
  01c6244  addc 4, 4, 5
  01c6248  sldi 5, 4, 2
  01c624c  addc 4, 4, 5
  01c6250  srwi 4, 4, 8
  01c6254  addc 5, 4, 4
  01c6258  addc 4, 4, 5
  01c625c  subc 4, 3, 4
  01c6260  cmpwi 4, 0
  01c6264  bf 2, 0x1c6290
  01c6268  addic 3, 1, 752
  01c626c  ori 4, 22, 0
  01c6270  bl 0x5e8588
  01c6274  nop
  01c6278  lis 3, 28
  01c627c  addi 3, 3, 20364
  01c6280  lfs 2, 84(3)
  01c6284  fcmpu 0, 1, 2
  01c6288  bt 1, 0x1c62e4
  01c628c  lbz 3, 188(31)
  01c6290  addic 4, 3, 1
  01c6294  sldi 5, 4, 4
  01c6298  addc 4, 4, 5
  01c629c  sldi 5, 4, 2
  01c62a0  addc 4, 4, 5
  01c62a4  srwi 4, 4, 8
  01c62a8  addc 5, 4, 4
  01c62ac  addc 4, 4, 5
  01c62b0  subc 3, 3, 4
  01c62b4  cmpwi 3, 1
  01c62b8  bf 2, 0x1c8fe8
  01c62bc  addic 3, 1, 752
  01c62c0  ori 4, 22, 0
  01c62c4  bl 0x5e8588
  01c62c8  nop
  01c62cc  lis 3, 28
  01c62d0  addi 3, 3, 20364
  01c62d4  lfs 2, 88(3)
  01c62d8  fcmpu 0, 1, 2
  01c62dc  cror 6, 0, 2
  01c62e0  bt 6, 0x1c8fe8
  01c62e4  li 3, 35
  01c62e8  bl 0x5e7e18
  01c62ec  nop
  01c62f0  sth 3, 408(30)
  01c62f4  li 3, 30
  01c62f8  bl 0x5e7e18
  01c62fc  nop
  01c6300  li 4, 1
  01c6304  stw 3, 352(30)
  01c6308  stb 4, 32(31)
  01c630c  b 0x1c8fe8
  01c6310  lis 3, 28
  01c6314  lis 28, 114
  01c6318  fmr 1, 30
  01c631c  addi 29, 3, 20364
  01c6320  lis 3, 114
  01c6324  addic 5, 30, 360
  01c6328  lfs 3, 92(29)
  01c632c  lfs 4, 76(29)
  01c6330  lfs 6, 96(29)
  01c6334  lfs 5, -3048(3)
  01c6338  lfs 7, -3052(28)
  01c633c  fmuls 2, 5, 3
  01c6340  ori 3, 31, 0
  01c6344  fmuls 3, 5, 4
  01c6348  fmuls 4, 7, 6
  01c634c  bl 0xff2e8
  01c6350  nop
  01c6354  ori 3, 31, 0
  01c6358  lfs 1, 100(29)
  01c635c  bl 0x113e88
  01c6360  nop
  01c6364  cmpwi 3, 0
  01c6368  bf 2, 0x1c63ac
  01c636c  lis 3, 28
  01c6370  addi 4, 3, 20364
  01c6374  ori 3, 31, 0
  01c6378  lfs 1, 104(4)
  01c637c  bl 0x113e88
  01c6380  nop
  01c6384  cmpwi 3, 0
  01c6388  bf 2, 0x1c63ac
  01c638c  lis 3, 28
  01c6390  addi 4, 3, 20364
  01c6394  ori 3, 31, 0
  01c6398  lfs 1, 108(4)
  01c639c  bl 0x113e88
  01c63a0  nop
  01c63a4  cmpwi 3, 0
  01c63a8  bt 2, 0x1c6518
  01c63ac  lwz 5, 356(30)
  01c63b0  addic 29, 1, 208
  01c63b4  ori 4, 22, 0
  01c63b8  addic 5, 5, 1
  01c63bc  ori 3, 29, 0
  01c63c0  stw 5, 356(30)
  01c63c4  bl 0x5e7e98
  01c63c8  nop
  01c63cc  lis 3, 28
  01c63d0  stw 19, 360(30)
  01c63d4  lfs 4, -3052(28)
  01c63d8  ori 4, 29, 0
  01c63dc  addi 26, 3, 20364
  01c63e0  fmr 1, 25
  01c63e4  ori 3, 31, 0
  01c63e8  fmr 5, 25
  01c63ec  li 9, 58
  01c63f0  lfs 6, 12(26)
  01c63f4  lfs 2, 112(26)
  01c63f8  lfs 7, 116(26)
  01c63fc  fmuls 4, 4, 6
  01c6400  fmr 3, 7
  01c6404  bl 0x19ddd0
  01c6408  nop
  01c640c  lwz 4, 356(30)
  01c6410  ori 3, 31, 0
  01c6414  ori 5, 29, 0
  01c6418  clrlwi 4, 4, 31
  01c641c  addic 4, 4, 5
  01c6420  bl 0xf1114
  01c6424  nop
  01c6428  li 3, 30
  01c642c  bl 0x5e7e18
  01c6430  nop
  01c6434  lis 8, -32768
  01c6438  lfs 1, 32(26)
  01c643c  extsh 7, 3
  01c6440  ori 3, 31, 0
  01c6444  li 9, 0
  01c6448  ori 4, 30, 0
  01c644c  li 5, 1
  01c6450  ori 6, 29, 0
  01c6454  ori 8, 8, 24831
  01c6458  bl 0x1bf8b0
  01c645c  lfs 1, 24(31)
  01c6460  ori 29, 19, 0
  01c6464  stfs 1, 216(1)
  01c6468  lfs 25, 120(26)
  01c646c  lfs 31, 124(26)
  01c6470  lfs 30, 68(26)
  01c6474  lfs 29, 128(26)
  01c6478  lfs 28, 132(26)
  01c647c  bl 0xfcc68
  01c6480  nop
  01c6484  fmr 26, 1
  01c6488  fmr 1, 25
  01c648c  fmr 2, 31
  01c6490  bl 0xfcbe8
  01c6494  nop
  01c6498  lfs 2, -3052(28)
  01c649c  addic 26, 1, 224
  01c64a0  fmr 3, 1
  01c64a4  fmuls 1, 2, 30
  01c64a8  ori 3, 26, 0
  01c64ac  fmr 2, 26
  01c64b0  bl 0xfe610
  01c64b4  nop
  01c64b8  addic 25, 1, 240
  01c64bc  fmr 1, 29
  01c64c0  ori 4, 26, 0
  01c64c4  ori 3, 25, 0
  01c64c8  bl 0x5e7f98
  01c64cc  nop
  01c64d0  lfs 1, 248(1)
  01c64d4  ori 3, 25, 0
  01c64d8  ori 4, 25, 0
  01c64dc  fadds 1, 1, 28
  01c64e0  addic 5, 1, 208
  01c64e4  stfs 1, 248(1)
  01c64e8  bl 0x5e7f54
  01c64ec  nop
  01c64f0  stw 19, 236(1)
  01c64f4  ori 3, 25, 0
  01c64f8  ori 4, 26, 0
  01c64fc  bl 0x132650
  01c6500  nop
  01c6504  addic 29, 29, 1
  01c6508  cmpwi 29, 55
  01c650c  bt 0, 0x1c647c
  01c6510  ori 3, 31, 0
  01c6514  bl 0x1bfb58
  01c6518  lwz 3, 356(30)
  01c651c  cmpwi 3, 3
  01c6520  bt 0, 0x1c8fe8
  01c6524  lis 3, 28
  01c6528  addi 4, 3, 20364
  01c652c  ori 3, 31, 0
  01c6530  lfs 1, 136(4)
  01c6534  bl 0x113e88
  01c6538  nop
  01c653c  cmpwi 3, 0
  01c6540  bt 2, 0x1c8fe8
  01c6544  cmpwi 27, 0
  01c6548  bt 2, 0x1c6560
  01c654c  li 3, 192
  01c6550  li 4, 170
  01c6554  sth 3, 404(30)
  01c6558  stw 4, 352(30)
  01c655c  b 0x1c65b4
  01c6560  li 3, 60
  01c6564  bl 0x5e7e18
  01c6568  nop
  01c656c  sth 3, 404(30)
  01c6570  li 3, 55
  01c6574  bl 0x5e7e18
  01c6578  nop
  01c657c  lhz 4, 410(30)
  01c6580  stw 3, 352(30)
  01c6584  extsh 29, 4
  01c6588  li 3, 55
  01c658c  bl 0x5e7e18
  01c6590  nop
  01c6594  cmpw 29, 3
  01c6598  bt 1, 0x1c65b4
  01c659c  li 3, 60
  01c65a0  bl 0x5e7e18
  01c65a4  nop
  01c65a8  lhz 4, 410(30)
  01c65ac  addc 3, 4, 3
  01c65b0  sth 3, 410(30)
  01c65b4  lis 3, 16256
  01c65b8  stw 3, 88(31)
  01c65bc  lbz 29, 83(31)
  01c65c0  bl 0x5c8318
  01c65c4  nop
  01c65c8  clrlwi 3, 3, 31
  01c65cc  cmpw 29, 3
  01c65d0  bt 2, 0x1c661c
  01c65d4  bl 0x5c8318
  01c65d8  nop
  01c65dc  clrlwi 29, 3, 31
  01c65e0  li 3, 0
  01c65e4  li 4, 15
  01c65e8  bl 0xfe484
  01c65ec  nop
  01c65f0  ori 28, 3, 0
  01c65f4  li 3, 30
  01c65f8  li 4, 42
  01c65fc  bl 0xfe484
  01c6600  nop
  01c6604  ori 6, 3, 0
  01c6608  ori 3, 31, 0
  01c660c  ori 4, 29, 0
  01c6610  ori 5, 28, 0
  01c6614  bl 0xfddc0
  01c6618  nop
  01c661c  li 3, 1
  01c6620  stb 3, 32(31)
  01c6624  b 0x1c8fe8
  01c6628  ori 3, 31, 0
  01c662c  ori 4, 30, 0
  01c6630  ori 5, 20, 0
  01c6634  li 6, 5
  01c6638  li 7, 0
  01c663c  bl 0x1c2bb8
  01c6640  cmpwi 3, 0
  01c6644  bf 2, 0x1c8fe8
  01c6648  li 3, 60
  01c664c  lwz 29, 352(30)
  01c6650  bl 0x5e7e18
  01c6654  nop
  01c6658  srawi 3, 3, 1
  01c665c  addze 3, 3
  01c6660  cmpw 29, 3
  01c6664  bf 0, 0x1c6734
  01c6668  addic 29, 1, 256
  01c666c  ori 3, 31, 0
  01c6670  li 4, 2
  01c6674  ori 5, 29, 0
  01c6678  bl 0xf1114
  01c667c  nop
  01c6680  li 3, 30
  01c6684  bl 0x5e7e18
  01c6688  nop
  01c668c  lis 4, 28
  01c6690  extsh 7, 3
  01c6694  addi 28, 4, 20364
  01c6698  lis 8, -32768
  01c669c  ori 3, 31, 0
  01c66a0  li 9, 0
  01c66a4  ori 4, 30, 0
  01c66a8  lfs 1, 32(28)
  01c66ac  li 5, 2
  01c66b0  ori 6, 29, 0
  01c66b4  ori 8, 8, 24831
  01c66b8  bl 0x1bf8b0
  01c66bc  lis 3, 161
  01c66c0  lfs 31, 140(28)
  01c66c4  lwz 3, 1808(3)
  01c66c8  srawi 4, 3, 3
  01c66cc  addze 4, 4
  01c66d0  sldi 4, 4, 3
  01c66d4  subc 4, 3, 4
  01c66d8  cmpwi 4, 0
  01c66dc  bf 2, 0x1c6700
  01c66e0  ori 3, 31, 0
  01c66e4  fmr 1, 22
  01c66e8  li 4, 2
  01c66ec  fmr 2, 31
  01c66f0  bl 0x1314c8
  01c66f4  nop
  01c66f8  lis 3, 161
  01c66fc  lwz 3, 1808(3)
  01c6700  addic 3, 3, -4
  01c6704  srawi 4, 3, 3
  01c6708  addze 4, 4
  01c670c  sldi 4, 4, 3
  01c6710  subc 3, 3, 4
  01c6714  cmpwi 3, 0
  01c6718  bf 2, 0x1c6734
  01c671c  fmr 1, 22
  01c6720  ori 3, 31, 0
  01c6724  fmr 2, 31
  01c6728  li 4, 3
  01c672c  bl 0x1314c8
  01c6730  nop
  01c6734  lbz 3, 82(31)
  01c6738  cmpwi 3, 5
  01c673c  bf 2, 0x1c8fe8
  01c6740  addic 29, 1, 272
  01c6744  addic 4, 1, 752
  01c6748  ori 3, 29, 0
  01c674c  bl 0x5e7e98
  01c6750  nop
  01c6754  fmr 1, 23
  01c6758  ori 3, 29, 0
  01c675c  li 4, 0
  01c6760  bl 0xffb70
  01c6764  nop
  01c6768  stfs 1, 280(1)
  01c676c  lwz 29, 352(30)
  01c6770  lwz 3, 356(30)
  01c6774  addic 29, 29, 1
  01c6778  cmpwi 3, 0
  01c677c  stw 29, 352(30)
  01c6780  bf 2, 0x1c6a74
  01c6784  addic 29, 1, 288
  01c6788  addic 28, 1, 272
  01c678c  ori 3, 29, 0
  01c6790  ori 4, 22, 0
  01c6794  ori 5, 28, 0
  01c6798  bl 0x5e81f0
  01c679c  nop
  01c67a0  ori 3, 29, 0
  01c67a4  stw 19, 296(1)
  01c67a8  ori 4, 29, 0
  01c67ac  fmr 1, 25
  01c67b0  bl 0x5e7f98
  01c67b4  nop
  01c67b8  lis 3, 28
  01c67bc  addic 27, 1, 352
  01c67c0  addi 26, 3, 20364
  01c67c4  ori 3, 27, 0
  01c67c8  ori 4, 29, 0
  01c67cc  lfs 1, 144(26)
  01c67d0  bl 0x5e7f98
  01c67d4  nop
  01c67d8  lfs 1, 776(1)
  01c67dc  bl 0x5e8078
  01c67e0  nop
  01c67e4  lfs 2, 776(1)
  01c67e8  stfs 1, 304(1)
  01c67ec  fmr 1, 2
  01c67f0  bl 0x5e8128
  01c67f4  nop
  01c67f8  addic 25, 1, 304
  01c67fc  stfs 1, 308(1)
  01c6800  ori 4, 29, 0
  01c6804  stw 19, 312(1)
  01c6808  ori 3, 25, 0
  01c680c  bl 0x5e81c0
  01c6810  nop
  01c6814  addic 24, 1, 368
  01c6818  ori 4, 29, 0
  01c681c  ori 3, 24, 0
  01c6820  bl 0x5e7f98
  01c6824  nop
  01c6828  ori 5, 24, 0
  01c682c  ori 3, 25, 0
  01c6830  ori 4, 25, 0
  01c6834  bl 0x5e81f0
  01c6838  nop
  01c683c  stw 19, 312(1)
  01c6840  addic 24, 1, 320
  01c6844  lfs 31, 12(26)
  01c6848  ori 4, 29, 0
  01c684c  ori 3, 24, 0
  01c6850  fmr 1, 31
  01c6854  bl 0x5e7f98
  01c6858  nop
  01c685c  ori 3, 25, 0
  01c6860  lfs 1, 148(26)
  01c6864  ori 4, 25, 0
  01c6868  bl 0x5e7f98
  01c686c  nop
  01c6870  ori 3, 24, 0
  01c6874  ori 4, 24, 0
  01c6878  ori 5, 28, 0
  01c687c  bl 0x5e7f54
  01c6880  nop
  01c6884  ori 3, 24, 0
  01c6888  ori 4, 24, 0
  01c688c  ori 5, 25, 0
  01c6890  bl 0x5e81f0
  01c6894  nop
  01c6898  ori 3, 25, 0
  01c689c  ori 4, 25, 0
  01c68a0  fmr 1, 31
  01c68a4  bl 0x5e7f98
  01c68a8  nop
  01c68ac  ori 3, 25, 0
  01c68b0  ori 4, 25, 0
  01c68b4  ori 5, 28, 0
  01c68b8  bl 0x5e7f54
  01c68bc  nop
  01c68c0  lfs 1, 116(26)
  01c68c4  ori 3, 29, 0
  01c68c8  ori 4, 29, 0
  01c68cc  bl 0x5e7f98
  01c68d0  nop
  01c68d4  ori 3, 25, 0
  01c68d8  ori 4, 25, 0
  01c68dc  ori 5, 29, 0
  01c68e0  bl 0x5e81f0
  01c68e4  nop
  01c68e8  addic 26, 1, 384
  01c68ec  addic 4, 21, 256
  01c68f0  ori 3, 26, 0
  01c68f4  bl 0x5e7e98
  01c68f8  nop
  01c68fc  li 3, 40
  01c6900  stw 19, 392(1)
  01c6904  addic 23, 1, 336
  01c6908  bl 0x5e7e18
  01c690c  nop
  01c6910  extsw 3, 3
  01c6914  ori 4, 26, 0
  01c6918  std 3, 896(1)
  01c691c  ori 3, 23, 0
  01c6920  lfd 1, 896(1)
  01c6924  fcfid 1, 1
  01c6928  frsp 1, 1
  01c692c  bl 0x5e822c
  01c6930  nop
  01c6934  ori 3, 29, 0
  01c6938  ori 4, 25, 0
  01c693c  ori 5, 24, 0
  01c6940  bl 0x5e81f0
  01c6944  nop
  01c6948  ori 3, 29, 0
  01c694c  ori 4, 29, 0
  01c6950  fmr 1, 23
  01c6954  bl 0x5e822c
  01c6958  nop
  01c695c  ori 3, 29, 0
  01c6960  ori 4, 29, 0
  01c6964  ori 5, 24, 0
  01c6968  bl 0x5e7f54
  01c696c  nop
  01c6970  ori 3, 29, 0
  01c6974  ori 4, 29, 0
  01c6978  ori 5, 28, 0
  01c697c  bl 0x5e81f0
  01c6980  nop
  01c6984  ori 3, 29, 0
  01c6988  ori 4, 29, 0
  01c698c  ori 5, 27, 0
  01c6990  bl 0x5e81f0
  01c6994  nop
  01c6998  ori 3, 29, 0
  01c699c  ori 4, 23, 0
  01c69a0  ori 5, 29, 0
  01c69a4  bl 0x5e81f0
  01c69a8  nop
  01c69ac  ori 3, 24, 0
  01c69b0  ori 4, 24, 0
  01c69b4  ori 5, 29, 0
  01c69b8  bl 0x5e7f54
  01c69bc  nop
  01c69c0  ori 3, 25, 0
  01c69c4  ori 4, 25, 0
  01c69c8  ori 5, 29, 0
  01c69cc  bl 0x5e7f54
  01c69d0  nop
  01c69d4  addic 3, 30, 272
  01c69d8  ori 4, 24, 0
  01c69dc  bl 0x5e7e98
  01c69e0  nop
  01c69e4  addic 3, 30, 288
  01c69e8  ori 4, 25, 0
  01c69ec  bl 0x5e7e98
  01c69f0  nop
  01c69f4  addic 29, 30, 320
  01c69f8  ori 4, 24, 0
  01c69fc  ori 3, 29, 0
  01c6a00  bl 0x5e7e98
  01c6a04  nop
  01c6a08  addic 28, 30, 304
  01c6a0c  ori 4, 25, 0
  01c6a10  ori 3, 28, 0
  01c6a14  ori 5, 24, 0
  01c6a18  bl 0x5e81f0
  01c6a1c  nop
  01c6a20  li 3, 60
  01c6a24  bl 0x5e7e18
  01c6a28  nop
  01c6a2c  extsw 3, 3
  01c6a30  ori 4, 28, 0
  01c6a34  std 3, 896(1)
  01c6a38  ori 3, 28, 0
  01c6a3c  lfd 1, 896(1)
  01c6a40  fcfid 1, 1
  01c6a44  frsp 1, 1
  01c6a48  fdivs 1, 25, 1
  01c6a4c  bl 0x5e822c
  01c6a50  nop
  01c6a54  addic 3, 30, 336
  01c6a58  ori 4, 29, 0
  01c6a5c  bl 0x5e7e98
  01c6a60  nop
  01c6a64  li 3, 1
  01c6a68  stw 19, 348(30)
  01c6a6c  stw 3, 356(30)
  01c6a70  b 0x1c8fe8
  01c6a74  li 3, 60
  01c6a78  bl 0x5e7e18
  01c6a7c  nop
  01c6a80  cmpw 29, 3
  01c6a84  bf 0, 0x1c6abc
  01c6a88  addic 3, 30, 320
  01c6a8c  addic 5, 30, 304
  01c6a90  ori 4, 3, 0
  01c6a94  bl 0x5e7f54
  01c6a98  nop
  01c6a9c  lis 3, 113
  01c6aa0  ori 4, 31, 0
  01c6aa4  addic 3, 3, -29808
  01c6aa8  bl 0x6d720
  01c6aac  nop
  01c6ab0  li 3, 2
  01c6ab4  stw 3, 356(30)
  01c6ab8  b 0x1c8fe8
  01c6abc  li 3, 240
  01c6ac0  stw 19, 356(30)
  01c6ac4  bl 0x5e7e18
  01c6ac8  nop
  01c6acc  sth 3, 410(30)
  01c6ad0  li 3, 200
  01c6ad4  bl 0x5e7e18
  01c6ad8  nop
  01c6adc  stw 3, 352(30)
  01c6ae0  li 3, 1
  01c6ae4  stb 3, 32(31)
  01c6ae8  b 0x1c8fe8
  01c6aec  lis 4, 28
  01c6af0  lfs 29, 72(31)
  01c6af4  ori 3, 31, 0
  01c6af8  addi 6, 4, 20364
  01c6afc  addic 5, 1, 844
  01c6b00  ori 4, 30, 0
  01c6b04  lfs 30, 116(6)
  01c6b08  bl 0x1c1d28
  01c6b0c  cmpwi 24, 0
  01c6b10  bf 2, 0x1c6c68
  01c6b14  lis 3, 28
  01c6b18  addi 4, 3, 20364
  01c6b1c  lwz 3, 668(30)
  01c6b20  cmpwi 3, -1
  01c6b24  lfs 30, 16(4)
  01c6b28  bt 2, 0x1c6bc4
  01c6b2c  lbz 4, 412(30)
  01c6b30  clrlwi 4, 4, 30
  01c6b34  cmpwi 4, 0
  01c6b38  bf 2, 0x1c6bc4
  01c6b3c  extsw 4, 3
  01c6b40  addic 3, 1, 752
  01c6b44  bl 0x110b70
  01c6b48  nop
  01c6b4c  cmpwi 3, 0
  01c6b50  bt 2, 0x1c6bc4
  01c6b54  lwz 4, 416(30)
  01c6b58  lis 3, 165
  01c6b5c  fmr 1, 22
  01c6b60  slwi 4, 4, 2
  01c6b64  addic 25, 3, 7136
  01c6b68  extsw 4, 4
  01c6b6c  addic 3, 1, 752
  01c6b70  lwzx 4, 25, 4
  01c6b74  bl 0x1367d0
  01c6b78  nop
  01c6b7c  lwz 4, 416(30)
  01c6b80  sldi 5, 3, 4
  01c6b84  slwi 3, 4, 2
  01c6b88  addic 20, 1, 416
  01c6b8c  extsw 4, 3
  01c6b90  ori 3, 20, 0
  01c6b94  lwzx 4, 25, 4
  01c6b98  addc 4, 4, 5
  01c6b9c  addic 4, 4, 16
  01c6ba0  clrldi 4, 4, 32
  01c6ba4  bl 0x5e7e98
  01c6ba8  nop
  01c6bac  ori 3, 22, 0
  01c6bb0  ori 4, 20, 0
  01c6bb4  bl 0x5e8588
  01c6bb8  nop
  01c6bbc  fmr 22, 1
  01c6bc0  b 0x1c6cb8
  01c6bc4  addic 25, 1, 416
  01c6bc8  addic 4, 1, 752
  01c6bcc  ori 3, 25, 0
  01c6bd0  bl 0x5e7e98
  01c6bd4  nop
  01c6bd8  lwz 3, 656(30)
  01c6bdc  lis 4, 165
  01c6be0  fmr 1, 22
  01c6be4  slwi 3, 3, 2
  01c6be8  addic 20, 4, 7136
  01c6bec  extsw 4, 3
  01c6bf0  ori 3, 25, 0
  01c6bf4  lwzx 4, 20, 4
  01c6bf8  bl 0x1367d0
  01c6bfc  nop
  01c6c00  lwz 4, 656(30)
  01c6c04  sldi 5, 3, 4
  01c6c08  ori 3, 25, 0
  01c6c0c  slwi 4, 4, 2
  01c6c10  extsw 4, 4
  01c6c14  lwzx 4, 20, 4
  01c6c18  addc 4, 4, 5
  01c6c1c  addic 4, 4, 16
  01c6c20  clrldi 4, 4, 32
  01c6c24  bl 0x5e7e98
  01c6c28  nop
  01c6c2c  ori 3, 22, 0
  01c6c30  ori 4, 25, 0
  01c6c34  bl 0x5e8588
  01c6c38  nop
  01c6c3c  lfs 2, 156(30)
  01c6c40  fmr 22, 1
  01c6c44  fadds 1, 2, 25
  01c6c48  fcmpu 0, 22, 1
  01c6c4c  cror 6, 1, 2
  01c6c50  bt 6, 0x1c6cb8
  01c6c54  addic 4, 1, 752
  01c6c58  addic 3, 1, 416
  01c6c5c  bl 0x5e7e98
  01c6c60  nop
  01c6c64  b 0x1c6cb8
  01c6c68  lwz 4, 392(30)
  01c6c6c  lis 3, 165
  01c6c70  lwz 5, 424(30)
  01c6c74  addic 25, 1, 416
  01c6c78  slwi 4, 4, 2
  01c6c7c  addic 3, 3, 7136
  01c6c80  extsw 4, 4
  01c6c84  slwi 5, 5, 4
  01c6c88  lwzx 4, 3, 4
  01c6c8c  ori 3, 25, 0
  01c6c90  addc 4, 4, 5
  01c6c94  addic 4, 4, 16
  01c6c98  clrldi 4, 4, 32
  01c6c9c  bl 0x5e7e98
  01c6ca0  nop
  01c6ca4  ori 3, 22, 0
  01c6ca8  ori 4, 25, 0
  01c6cac  bl 0x5e8588
  01c6cb0  nop
  01c6cb4  fmr 22, 1
  01c6cb8  lis 3, 28
  01c6cbc  fmr 1, 22
  01c6cc0  ori 4, 30, 0
  01c6cc4  fmr 2, 30
  01c6cc8  addi 5, 3, 20364
  01c6ccc  ori 3, 31, 0
  01c6cd0  lfs 3, 152(5)
  01c6cd4  bl 0x1c2b20
  01c6cd8  lwz 3, 664(30)
  01c6cdc  clrlwi 3, 3, 30
  01c6ce0  cmpwi 3, 0
  01c6ce4  bf 2, 0x1c6cfc
  01c6ce8  addic 6, 30, 320
  01c6cec  addic 5, 1, 416
  01c6cf0  ori 3, 31, 0
  01c6cf4  ori 4, 30, 0
  01c6cf8  bl 0x1c2500
  01c6cfc  addic 3, 1, 400
  01c6d00  addic 4, 30, 320
  01c6d04  bl 0x5e7e98
  01c6d08  nop
  01c6d0c  lwz 3, 664(30)
  01c6d10  lfs 1, 400(1)
  01c6d14  lfs 28, 72(31)
  01c6d18  lfs 2, 16(31)
  01c6d1c  addic 3, 3, 1
  01c6d20  lfs 3, 404(1)
  01c6d24  fsubs 1, 1, 2
  01c6d28  stw 3, 664(30)
  01c6d2c  lfs 4, 20(31)
  01c6d30  fsubs 2, 3, 4
  01c6d34  bl 0x5e8338
  01c6d38  nop
  01c6d3c  fmr 2, 1
  01c6d40  fmr 1, 28
  01c6d44  bl 0x5026a0
  01c6d48  nop
  01c6d4c  lfs 2, 152(30)
  01c6d50  fcmpu 0, 1, 2
  01c6d54  cror 6, 0, 2
  01c6d58  bt 6, 0x1c6de0
  01c6d5c  lis 5, 16256
  01c6d60  li 6, 10
  01c6d64  lbz 8, 32(31)
  01c6d68  li 7, 1
  01c6d6c  addic 3, 30, 192
  01c6d70  stw 5, 88(31)
  01c6d74  addic 4, 1, 400
  01c6d78  stb 8, 500(30)
  01c6d7c  stb 6, 502(30)
  01c6d80  stb 7, 501(30)
  01c6d84  bl 0x5e7e98
  01c6d88  nop
  01c6d8c  lbz 3, 83(31)
  01c6d90  cmpwi 3, 3
  01c6d94  bt 2, 0x1c6dd4
  01c6d98  li 3, 0
  01c6d9c  li 4, 1
  01c6da0  bl 0xfe484
  01c6da4  nop
  01c6da8  ori 29, 3, 0
  01c6dac  li 3, 15
  01c6db0  li 4, 22
  01c6db4  bl 0xfe484
  01c6db8  nop
  01c6dbc  ori 6, 3, 0
  01c6dc0  ori 3, 31, 0
  01c6dc4  li 4, 3
  01c6dc8  ori 5, 29, 0
  01c6dcc  bl 0xfddc0
  01c6dd0  nop
  01c6dd4  li 3, 7
  01c6dd8  stb 3, 32(31)
  01c6ddc  b 0x1c71e8
  01c6de0  ori 3, 31, 0
  01c6de4  fmr 1, 30
  01c6de8  addic 5, 1, 416
  01c6dec  addic 6, 1, 400
  01c6df0  ori 4, 30, 0
  01c6df4  bl 0x1c26e0
  01c6df8  ori 25, 3, 0
  01c6dfc  lfs 1, 72(31)
  01c6e00  fmr 2, 29
  01c6e04  bl 0x5026a0
  01c6e08  nop
  01c6e0c  addic 3, 30, 256
  01c6e10  bl 0x5e8030
  01c6e14  nop
  01c6e18  lbz 4, 83(31)
  01c6e1c  cmpwi 24, 0
  01c6e20  fmr 30, 1
  01c6e24  ori 3, 19, 0
  01c6e28  lbz 5, 112(31)
  01c6e2c  bf 2, 0x1c6e4c
  01c6e30  lis 6, 28
  01c6e34  addi 6, 6, 20364
  01c6e38  lfs 1, 88(6)
  01c6e3c  fcmpu 0, 31, 1
  01c6e40  cror 6, 1, 2
  01c6e44  bt 6, 0x1c6e4c
  01c6e48  li 3, 1
  01c6e4c  lis 6, 28
  01c6e50  lis 7, 114
  01c6e54  addi 6, 6, 20364
  01c6e58  lfs 1, 48(6)
  01c6e5c  lfs 2, -3052(7)
  01c6e60  ori 6, 19, 0
  01c6e64  fmuls 1, 2, 1
  01c6e68  fcmpu 0, 30, 1
  01c6e6c  cror 6, 0, 2
  01c6e70  bt 6, 0x1c6e78
  01c6e74  li 6, 1
  01c6e78  rlwinm 7, 25, 0, 29, 29
  01c6e7c  cmpwi 1, 6, 0
  01c6e80  cmpwi 7, 0
  01c6e84  bf 2, 0x1c6e8c
  01c6e88  bf 6, 0x1c6f10
  01c6e8c  li 3, 90
  01c6e90  bl 0x5e7e18
  01c6e94  nop
  01c6e98  stb 3, 503(30)
  01c6e9c  lbz 29, 83(31)
  01c6ea0  bl 0x5c8318
  01c6ea4  nop
  01c6ea8  clrlwi 3, 3, 31
  01c6eac  cmpw 29, 3
  01c6eb0  bt 2, 0x1c6efc
  01c6eb4  bl 0x5c8318
  01c6eb8  nop
  01c6ebc  clrlwi 29, 3, 31
  01c6ec0  li 3, 0
  01c6ec4  li 4, 9
  01c6ec8  bl 0xfe484
  01c6ecc  nop
  01c6ed0  ori 28, 3, 0
  01c6ed4  li 3, 20
  01c6ed8  li 4, 40
  01c6edc  bl 0xfe484
  01c6ee0  nop
  01c6ee4  ori 6, 3, 0
  01c6ee8  ori 3, 31, 0
  01c6eec  ori 4, 29, 0
  01c6ef0  ori 5, 28, 0
  01c6ef4  bl 0xfddc0
  01c6ef8  nop
  01c6efc  li 3, -1
  01c6f00  li 4, 1
  01c6f04  stw 3, 424(30)
  01c6f08  stb 4, 32(31)
  01c6f0c  b 0x1c8fe8
  01c6f10  cmpwi 4, 10
  01c6f14  cmpwi 1, 3, 0
  01c6f18  bt 2, 0x1c6f60
  01c6f1c  bf 6, 0x1c6fac
  01c6f20  rlwinm 3, 5, 0, 30, 30
  01c6f24  cmpwi 3, 0
  01c6f28  bt 2, 0x1c6fac
  01c6f2c  cmpwi 4, 10
  01c6f30  bt 2, 0x1c6fac
  01c6f34  li 3, 10
  01c6f38  li 4, 13
  01c6f3c  bl 0xfe484
  01c6f40  nop
  01c6f44  ori 6, 3, 0
  01c6f48  ori 3, 31, 0
  01c6f4c  li 4, 10
  01c6f50  li 5, 5
  01c6f54  bl 0xfddc0
  01c6f58  nop
  01c6f5c  b 0x1c6fac
  01c6f60  cmpwi 1, 3, 0
  01c6f64  cmpwi 4, 12
  01c6f68  cror 2, 2, 6
  01c6f6c  bt 2, 0x1c6fac
  01c6f70  rlwinm 3, 5, 0, 30, 30
  01c6f74  cmpwi 3, 0
  01c6f78  bt 2, 0x1c6fac
  01c6f7c  cmpwi 4, 12
  01c6f80  bt 2, 0x1c6fac
  01c6f84  li 3, 10
  01c6f88  li 4, 13
  01c6f8c  bl 0xfe484
  01c6f90  nop
  01c6f94  ori 6, 3, 0
  01c6f98  ori 3, 31, 0
  01c6f9c  li 4, 12
  01c6fa0  li 5, 5
  01c6fa4  bl 0xfddc0
  01c6fa8  nop
  01c6fac  addic 3, 30, 352
  01c6fb0  bl 0x4fff60
  01c6fb4  nop
  01c6fb8  cmpwi 3, 0
  01c6fbc  bt 2, 0x1c7154
  01c6fc0  cmpwi 27, 0
  01c6fc4  bt 2, 0x1c7028
  01c6fc8  stw 19, 356(30)
  01c6fcc  lis 3, 16256
  01c6fd0  stw 19, 352(30)
  01c6fd4  lbz 4, 83(31)
  01c6fd8  cmpwi 4, 5
  01c6fdc  stw 3, 88(31)
  01c6fe0  bt 2, 0x1c7020
  01c6fe4  li 3, 0
  01c6fe8  li 4, 2
  01c6fec  bl 0xfe484
  01c6ff0  nop
  01c6ff4  ori 27, 3, 0
  01c6ff8  li 3, 20
  01c6ffc  li 4, 25
  01c7000  bl 0xfe484
  01c7004  nop
  01c7008  ori 6, 3, 0
  01c700c  ori 3, 31, 0
  01c7010  li 4, 5
  01c7014  ori 5, 27, 0
  01c7018  bl 0xfddc0
  01c701c  nop
  01c7020  li 3, 4
  01c7024  stb 3, 32(31)
  01c7028  cmpwi 28, 0
  01c702c  bt 2, 0x1c708c
  01c7030  stw 19, 356(30)
  01c7034  lbz 3, 83(31)
  01c7038  cmpwi 3, 4
  01c703c  bt 2, 0x1c707c
  01c7040  li 3, 0
  01c7044  li 4, 5
  01c7048  bl 0xfe484
  01c704c  nop
  01c7050  ori 28, 3, 0
  01c7054  li 3, 20
  01c7058  li 4, 40
  01c705c  bl 0xfe484
  01c7060  nop
  01c7064  ori 6, 3, 0
  01c7068  ori 3, 31, 0
  01c706c  li 4, 4
  01c7070  ori 5, 28, 0
  01c7074  bl 0xfddc0
  01c7078  nop
  01c707c  lis 3, 16256
  01c7080  li 4, 3
  01c7084  stw 3, 88(31)
  01c7088  stb 4, 32(31)
  01c708c  cmpwi 23, 0
  01c7090  bt 2, 0x1c70cc
  01c7094  lwz 4, 764(21)
  01c7098  addic 3, 30, 336
  01c709c  stw 19, 356(30)
  01c70a0  addic 4, 4, 16
  01c70a4  bl 0x5e7e98
  01c70a8  nop
  01c70ac  lis 3, 28
  01c70b0  lfs 1, 344(30)
  01c70b4  li 4, 9
  01c70b8  addi 3, 3, 20364
  01c70bc  lfs 2, 156(3)
  01c70c0  fadds 1, 1, 2
  01c70c4  stfs 1, 344(30)
  01c70c8  stb 4, 32(31)
  01c70cc  cmpwi 26, 0
  01c70d0  bt 2, 0x1c7154
  01c70d4  lis 3, 16256
  01c70d8  lbz 4, 83(31)
  01c70dc  cmpwi 4, 6
  01c70e0  stw 3, 88(31)
  01c70e4  bt 2, 0x1c7124
  01c70e8  li 3, 0
  01c70ec  li 4, 2
  01c70f0  bl 0xfe484
  01c70f4  nop
  01c70f8  ori 28, 3, 0
  01c70fc  li 3, 20
  01c7100  li 4, 25
  01c7104  bl 0xfe484
  01c7108  nop
  01c710c  ori 6, 3, 0
  01c7110  ori 3, 31, 0
  01c7114  li 4, 6
  01c7118  ori 5, 28, 0
  01c711c  bl 0xfddc0
  01c7120  nop
  01c7124  li 6, 8
  01c7128  stw 19, 356(30)
  01c712c  li 3, 9
  01c7130  stw 19, 364(30)
  01c7134  stb 19, 452(30)
  01c7138  li 4, 4
  01c713c  stw 19, 660(30)
  01c7140  ori 5, 31, 0
  01c7144  stb 6, 32(31)
  01c7148  bl 0x15d12c
  01c714c  nop
  01c7150  stw 3, 504(30)
  01c7154  cmpwi 29, 0
  01c7158  bf 2, 0x1c71cc
  01c715c  lis 3, 16256
  01c7160  stw 3, 88(31)
  01c7164  lbz 29, 83(31)
  01c7168  bl 0x5c8318
  01c716c  nop
  01c7170  clrlwi 3, 3, 31
  01c7174  cmpw 29, 3
  01c7178  bt 2, 0x1c71c4
  01c717c  bl 0x5c8318
  01c7180  nop
  01c7184  clrlwi 29, 3, 31
  01c7188  li 3, 0
  01c718c  li 4, 2
  01c7190  bl 0xfe484
  01c7194  nop
  01c7198  ori 28, 3, 0
  01c719c  li 3, 28
  01c71a0  li 4, 40
  01c71a4  bl 0xfe484
  01c71a8  nop
  01c71ac  ori 6, 3, 0
  01c71b0  ori 3, 31, 0
  01c71b4  ori 4, 29, 0
  01c71b8  ori 5, 28, 0
  01c71bc  bl 0xfddc0
  01c71c0  nop
  01c71c4  li 3, 1
  01c71c8  stb 3, 32(31)
  01c71cc  lbz 3, 82(31)
  01c71d0  cmpwi 3, 12
  01c71d4  bf 2, 0x1c71e8
  01c71d8  addic 5, 1, 752
  01c71dc  ori 3, 31, 0
  01c71e0  ori 4, 30, 0
  01c71e4  bl 0x1bfdb8
  01c71e8  lbz 3, 82(31)
  01c71ec  cmpwi 3, 10
  01c71f0  cmpwi 1, 3, 12
  01c71f4  bt 2, 0x1c71fc
  01c71f8  bf 6, 0x1c8fe8
  01c71fc  lis 3, 28
  01c7200  addi 4, 3, 20364
  01c7204  ori 3, 31, 0
  01c7208  lfs 1, 160(4)
  01c720c  bl 0x113e88
  01c7210  nop
  01c7214  cmpwi 3, 0
  01c7218  bt 2, 0x1c7224
  01c721c  ori 3, 31, 0
  01c7220  bl 0x1bfb58
  01c7224  lis 3, 28
  01c7228  addi 4, 3, 20364
  01c722c  ori 3, 31, 0
  01c7230  lfs 1, 164(4)
  01c7234  bl 0x113e88
  01c7238  nop
  01c723c  cmpwi 3, 0
  01c7240  bt 2, 0x1c8fe8
  01c7244  ori 3, 31, 0
  01c7248  bl 0x1bfb58
  01c724c  b 0x1c8fe8
  01c7250  lbz 3, 501(30)
  01c7254  cmpwi 3, 0
  01c7258  cmpwi 1, 3, -1
  01c725c  bt 1, 0x1c7274
  01c7260  bf 5, 0x1c7274
  01c7264  addic 3, 30, 192
  01c7268  ori 4, 20, 0
  01c726c  bl 0x5e7e98
  01c7270  nop
  01c7274  lfs 1, 192(30)
  01c7278  lfs 2, 16(31)
  01c727c  lfs 3, 196(30)
  01c7280  fsubs 1, 1, 2
  01c7284  lfs 4, 20(31)
  01c7288  fsubs 2, 3, 4
  01c728c  bl 0x5e8338
  01c7290  nop
  01c7294  lfs 2, 72(31)
  01c7298  bl 0x5025e0
  01c729c  nop
  01c72a0  lbz 3, 83(31)
  01c72a4  fmr 31, 1
  01c72a8  cmpwi 3, 3
  01c72ac  lbz 4, 112(31)
  01c72b0  bf 2, 0x1c72bc
  01c72b4  cmpwi 3, 14
  01c72b8  bt 2, 0x1c7350
  01c72bc  cmpwi 25, 0
  01c72c0  bf 2, 0x1c739c
  01c72c4  rlwinm 4, 4, 0, 30, 30
  01c72c8  cmpwi 4, 0
  01c72cc  bt 2, 0x1c739c
  01c72d0  lis 4, 28
  01c72d4  addi 4, 4, 20364
  01c72d8  lfs 1, 168(4)
  01c72dc  fcmpu 0, 31, 1
  01c72e0  cror 6, 1, 2
  01c72e4  bt 6, 0x1c731c
  01c72e8  cmpwi 3, 3
  01c72ec  bt 2, 0x1c739c
  01c72f0  li 3, 10
  01c72f4  li 4, 13
  01c72f8  bl 0xfe484
  01c72fc  nop
  01c7300  ori 6, 3, 0
  01c7304  ori 3, 31, 0
  01c7308  li 4, 3
  01c730c  li 5, 5
  01c7310  bl 0xfddc0
  01c7314  nop
  01c7318  b 0x1c739c
  01c731c  cmpwi 3, 14
  01c7320  bt 2, 0x1c739c
  01c7324  li 3, 10
  01c7328  li 4, 13
  01c732c  bl 0xfe484
  01c7330  nop
  01c7334  ori 6, 3, 0
  01c7338  ori 3, 31, 0
  01c733c  li 4, 14
  01c7340  li 5, 5
  01c7344  bl 0xfddc0
  01c7348  nop
  01c734c  b 0x1c739c
  01c7350  cmpwi 1, 25, 0
  01c7354  cmpwi 3, 13
  01c7358  cror 2, 2, 6
  01c735c  bt 2, 0x1c739c
  01c7360  rlwinm 4, 4, 0, 30, 30
  01c7364  cmpwi 4, 0
  01c7368  bt 2, 0x1c739c
  01c736c  cmpwi 3, 13
  01c7370  bt 2, 0x1c739c
  01c7374  li 3, 10
  01c7378  li 4, 13
  01c737c  bl 0xfe484
  01c7380  nop
  01c7384  ori 6, 3, 0
  01c7388  ori 3, 31, 0
  01c738c  li 4, 13
  01c7390  li 5, 5
  01c7394  bl 0xfddc0
  01c7398  nop
  01c739c  lbz 3, 82(31)
  01c73a0  cmpwi 1, 3, 14
  01c73a4  cmpwi 3, 3
  01c73a8  cror 2, 2, 6
  01c73ac  bt 2, 0x1c73b8
  01c73b0  cmpwi 3, 13
  01c73b4  bf 2, 0x1c7510
  01c73b8  ori 3, 31, 0
  01c73bc  bl 0xefe40
  01c73c0  nop
  01c73c4  lis 3, 28
  01c73c8  addi 3, 3, 20364
  01c73cc  lfs 2, 172(3)
  01c73d0  fcmpu 0, 1, 2
  01c73d4  bt 0, 0x1c741c
  01c73d8  lis 3, 28
  01c73dc  addi 3, 3, 20364
  01c73e0  lfs 2, 176(3)
  01c73e4  fcmpu 0, 1, 2
  01c73e8  cror 6, 0, 2
  01c73ec  bt 6, 0x1c7404
  01c73f0  lis 3, 28
  01c73f4  addi 3, 3, 20364
  01c73f8  lfs 2, 180(3)
  01c73fc  fcmpu 0, 1, 2
  01c7400  bt 0, 0x1c741c
  01c7404  lis 3, 28
  01c7408  addi 3, 3, 20364
  01c740c  lfs 2, 184(3)
  01c7410  fcmpu 0, 1, 2
  01c7414  cror 6, 0, 2
  01c7418  bt 6, 0x1c7478
  01c741c  lfs 1, 192(30)
  01c7420  lfs 2, 16(31)
  01c7424  lfs 3, 196(30)
  01c7428  lfs 4, 20(31)
  01c742c  fsubs 1, 1, 2
  01c7430  fsubs 2, 3, 4
  01c7434  bl 0x5e8338
  01c7438  nop
  01c743c  lis 4, 28
  01c7440  lis 6, 114
  01c7444  addi 4, 4, 20364
  01c7448  lis 7, 114
  01c744c  ori 3, 31, 0
  01c7450  addic 5, 30, 360
  01c7454  lfs 4, 72(4)
  01c7458  lfs 3, 76(4)
  01c745c  lfs 5, -3048(6)
  01c7460  lfs 6, -3052(7)
  01c7464  fmuls 2, 5, 4
  01c7468  fmuls 3, 5, 3
  01c746c  fmuls 4, 6, 4
  01c7470  bl 0xff2e8
  01c7474  nop
  01c7478  lis 3, 28
  01c747c  addi 3, 3, 20364
  01c7480  lfs 1, 188(3)
  01c7484  fcmpu 6, 31, 1
  01c7488  bf 25, 0x1c74cc
  01c748c  lbz 3, 83(31)
  01c7490  cmpwi 3, 3
  01c7494  cmpwi 1, 3, 14
  01c7498  bf 2, 0x1c74cc
  01c749c  bt 6, 0x1c7514
  01c74a0  li 3, 10
  01c74a4  li 4, 13
  01c74a8  bl 0xfe484
  01c74ac  nop
  01c74b0  ori 6, 3, 0
  01c74b4  ori 3, 31, 0
  01c74b8  li 4, 14
  01c74bc  li 5, 5
  01c74c0  bl 0xfddc0
  01c74c4  nop
  01c74c8  b 0x1c7514
  01c74cc  bf 24, 0x1c7514
  01c74d0  lbz 3, 83(31)
  01c74d4  cmpwi 1, 3, 3
  01c74d8  cmpwi 3, 14
  01c74dc  crorc 2, 6, 2
  01c74e0  bt 2, 0x1c7514
  01c74e4  li 3, 10
  01c74e8  li 4, 13
  01c74ec  bl 0xfe484
  01c74f0  nop
  01c74f4  ori 6, 3, 0
  01c74f8  ori 3, 31, 0
  01c74fc  li 4, 3
  01c7500  li 5, 5
  01c7504  bl 0xfddc0
  01c7508  nop
  01c750c  b 0x1c7514
  01c7510  stw 19, 132(30)
  01c7514  lfs 1, 192(30)
  01c7518  lfs 31, 72(31)
  01c751c  lfs 2, 16(31)
  01c7520  lfs 3, 196(30)
  01c7524  fsubs 1, 1, 2
  01c7528  lfs 4, 20(31)
  01c752c  fsubs 2, 3, 4
  01c7530  bl 0x5e8338
  01c7534  nop
  01c7538  fmr 2, 1
  01c753c  fmr 1, 31
  01c7540  bl 0x5026a0
  01c7544  nop
  01c7548  lis 3, 28
  01c754c  lfs 2, 152(30)
  01c7550  addi 3, 3, 20364
  01c7554  lfs 3, 192(3)
  01c7558  fmuls 2, 2, 3
  01c755c  fcmpu 0, 1, 2
  01c7560  cror 6, 1, 2
  01c7564  bt 6, 0x1c762c
  01c7568  li 3, 257
  01c756c  stb 19, 256(30)
  01c7570  li 5, 258
  01c7574  li 7, 259
  01c7578  li 4, 261
  01c757c  li 6, 262
  01c7580  stbx 19, 30, 3
  01c7584  li 8, 267
  01c7588  li 3, 263
  01c758c  stbx 19, 30, 5
  01c7590  stbx 19, 30, 7
  01c7594  li 5, 265
  01c7598  stb 19, 260(30)
  01c759c  li 7, 266
  01c75a0  stbx 19, 30, 4
  01c75a4  stbx 19, 30, 6
  01c75a8  stbx 19, 30, 3
  01c75ac  li 4, 269
  01c75b0  stb 19, 264(30)
  01c75b4  li 6, 270
  01c75b8  stbx 19, 30, 5
  01c75bc  li 3, 271
  01c75c0  stbx 19, 30, 7
  01c75c4  stbx 19, 30, 8
  01c75c8  stb 19, 268(30)
  01c75cc  stbx 19, 30, 4
  01c75d0  stbx 19, 30, 6
  01c75d4  stbx 19, 30, 3
  01c75d8  lbz 3, 83(31)
  01c75dc  lbz 19, 502(30)
  01c75e0  cmpw 3, 19
  01c75e4  bt 2, 0x1c7624
  01c75e8  li 3, 0
  01c75ec  li 4, 2
  01c75f0  bl 0xfe484
  01c75f4  nop
  01c75f8  ori 29, 3, 0
  01c75fc  li 3, 15
  01c7600  li 4, 27
  01c7604  bl 0xfe484
  01c7608  nop
  01c760c  ori 6, 3, 0
  01c7610  ori 3, 31, 0
  01c7614  ori 4, 19, 0
  01c7618  ori 5, 29, 0
  01c761c  bl 0xfddc0
  01c7620  nop
  01c7624  lbz 3, 500(30)
  01c7628  stb 3, 32(31)
  01c762c  lbz 3, 82(31)
  01c7630  cmpwi 3, 3
  01c7634  cmpwi 1, 3, 14
  01c7638  cmpwi 6, 3, 13
  01c763c  bt 2, 0x1c7644
  01c7640  bf 6, 0x1c7690
  01c7644  ori 3, 31, 0
  01c7648  fmr 1, 24
  01c764c  bl 0x113e88
  01c7650  nop
  01c7654  cmpwi 3, 0
  01c7658  bt 2, 0x1c7664
  01c765c  ori 3, 31, 0
  01c7660  bl 0x1bfb58
  01c7664  lis 3, 28
  01c7668  addi 4, 3, 20364
  01c766c  ori 3, 31, 0
  01c7670  lfs 1, 196(4)
  01c7674  bl 0x113e88
  01c7678  nop
  01c767c  cmpwi 3, 0
  01c7680  bt 2, 0x1c8fe8
  01c7684  ori 3, 31, 0
  01c7688  bl 0x1bfb58
  01c768c  b 0x1c8fe8
  01c7690  bf 26, 0x1c8fe8
  01c7694  lis 3, 28
  01c7698  addi 4, 3, 20364
  01c769c  ori 3, 31, 0
  01c76a0  lfs 1, 84(4)
  01c76a4  bl 0x113e88
  01c76a8  nop
  01c76ac  cmpwi 3, 0
  01c76b0  bt 2, 0x1c76bc
  01c76b4  ori 3, 31, 0
  01c76b8  bl 0x1bfb58
  01c76bc  lis 3, 28
  01c76c0  addi 4, 3, 20364
  01c76c4  ori 3, 31, 0
  01c76c8  lfs 1, 200(4)
  01c76cc  bl 0x113e88
  01c76d0  nop
  01c76d4  cmpwi 3, 0
  01c76d8  bt 2, 0x1c8fe8
  01c76dc  ori 3, 31, 0
  01c76e0  bl 0x1bfb58
  01c76e4  b 0x1c8fe8
  01c76e8  lis 3, 10922
  01c76ec  lhz 4, 36(30)
  01c76f0  lfs 31, 32(30)
  01c76f4  ori 3, 3, 43691
  01c76f8  extsh 4, 4
  01c76fc  mulhw 3, 3, 4
  01c7700  srwi 4, 3, 31
  01c7704  addc 3, 3, 4
  01c7708  extsw 3, 3
  01c770c  bl 0x502730
  01c7710  nop
  01c7714  fcmpu 0, 31, 1
  01c7718  bt 1, 0x1c7754
  01c771c  lbz 3, 83(31)
  01c7720  cmpwi 3, 8
  01c7724  bt 2, 0x1c7778
  01c7728  li 3, 10
  01c772c  li 4, 13
  01c7730  bl 0xfe484
  01c7734  nop
  01c7738  ori 6, 3, 0
  01c773c  ori 3, 31, 0
  01c7740  li 4, 8
  01c7744  li 5, 53
  01c7748  bl 0xfddc0
  01c774c  nop
  01c7750  b 0x1c7778
  01c7754  lbz 3, 83(31)
  01c7758  cmpwi 3, 11
  01c775c  bt 2, 0x1c7778
  01c7760  ori 3, 31, 0
  01c7764  li 4, 11
  01c7768  li 5, 61
  01c776c  li 6, 1
  01c7770  bl 0xfddc0
  01c7774  nop
  01c7778  li 3, 13
  01c777c  stb 3, 32(31)
  01c7780  stw 19, 264(30)
  01c7784  lbz 3, 188(31)
  01c7788  addic 19, 3, 1
  01c778c  sldi 4, 19, 4
  01c7790  addc 4, 19, 4
  01c7794  sldi 5, 4, 2
  01c7798  addc 4, 4, 5
  01c779c  srwi 4, 4, 8
  01c77a0  addc 5, 4, 4
  01c77a4  addc 4, 4, 5
  01c77a8  subc 4, 3, 4
  01c77ac  cmpwi 4, 2
  01c77b0  bf 0, 0x1c77bc
  01c77b4  ori 3, 19, 0
  01c77b8  stb 19, 188(31)
  01c77bc  clrlwi 4, 3, 24
  01c77c0  addic 3, 4, 1
  01c77c4  sldi 5, 3, 4
  01c77c8  addc 5, 3, 5
  01c77cc  sldi 6, 5, 2
  01c77d0  addc 5, 5, 6
  01c77d4  srwi 5, 5, 8
  01c77d8  addc 6, 5, 5
  01c77dc  addc 5, 5, 6
  01c77e0  subc 5, 4, 5
  01c77e4  cmpwi 5, 2
  01c77e8  bf 0, 0x1c77f4
  01c77ec  ori 4, 3, 0
  01c77f0  stb 3, 188(31)
  01c77f4  clrlwi 3, 4, 24
  01c77f8  cmpwi 3, 8
  01c77fc  bt 0, 0x1c7808
  01c7800  li 3, 8
  01c7804  stb 3, 188(31)
  01c7808  lbz 29, 413(30)
  01c780c  slwi 3, 29, 2
  01c7810  addc 27, 30, 3
  01c7814  clrldi 27, 27, 32
  01c7818  lwz 28, 472(27)
  01c781c  cmpwi 1, 28, -1
  01c7820  bt 6, 0x1c8fe8
  01c7824  bt 6, 0x1c794c
  01c7828  lwz 27, 484(27)
  01c782c  cmpwi 27, -1
  01c7830  bt 2, 0x1c794c
  01c7834  lis 3, 164
  01c7838  slwi 5, 27, 8
  01c783c  slwi 4, 28, 8
  01c7840  lwz 3, -28512(3)
  01c7844  addc 5, 3, 5
  01c7848  addc 3, 3, 4
  01c784c  clrldi 27, 5, 32
  01c7850  clrldi 28, 3, 32
  01c7854  lwz 28, 120(28)
  01c7858  lwz 27, 120(27)
  01c785c  lwz 3, 40(28)
  01c7860  cmpwi 3, -1
  01c7864  bt 2, 0x1c794c
  01c7868  lwz 4, 40(27)
  01c786c  cmpwi 4, -1
  01c7870  bt 2, 0x1c794c
  01c7874  lis 26, 165
  01c7878  slwi 4, 3, 7
  01c787c  ori 3, 20, 0
  01c7880  lwz 5, 7128(26)
  01c7884  addc 4, 5, 4
  01c7888  addic 4, 4, 48
  01c788c  clrldi 4, 4, 32
  01c7890  bl 0x5e8588
  01c7894  nop
  01c7898  fmr 31, 1
  01c789c  lwz 3, 40(27)
  01c78a0  lwz 4, 7128(26)
  01c78a4  slwi 3, 3, 7
  01c78a8  addc 4, 4, 3
  01c78ac  ori 3, 20, 0
  01c78b0  addic 4, 4, 48
  01c78b4  clrldi 4, 4, 32
  01c78b8  bl 0x5e8588
  01c78bc  nop
  01c78c0  fcmpu 0, 31, 1
  01c78c4  cror 6, 0, 2
  01c78c8  bt 6, 0x1c7910
  01c78cc  lis 3, 165
  01c78d0  lwz 4, 40(27)
  01c78d4  addic 29, 29, 3
  01c78d8  slwi 4, 4, 7
  01c78dc  lwz 3, 7128(3)
  01c78e0  lfs 1, 16(31)
  01c78e4  addc 3, 3, 4
  01c78e8  lfs 2, 20(31)
  01c78ec  clrldi 3, 3, 32
  01c78f0  lfs 3, 48(3)
  01c78f4  lfs 4, 52(3)
  01c78f8  fsubs 1, 3, 1
  01c78fc  fsubs 2, 4, 2
  01c7900  bl 0x5e8338
  01c7904  nop
  01c7908  stfs 1, 72(31)
  01c790c  b 0x1c794c
  01c7910  lis 3, 165
  01c7914  lwz 4, 40(28)
  01c7918  slwi 4, 4, 7
  01c791c  lwz 3, 7128(3)
  01c7920  lfs 1, 16(31)
  01c7924  addc 3, 3, 4
  01c7928  lfs 2, 20(31)
  01c792c  clrldi 3, 3, 32
  01c7930  lfs 3, 48(3)
  01c7934  lfs 4, 52(3)
  01c7938  fsubs 1, 3, 1
  01c793c  fsubs 2, 4, 2
  01c7940  bl 0x5e8338
  01c7944  nop
  01c7948  stfs 1, 72(31)
  01c794c  slwi 3, 29, 2
  01c7950  lis 4, 164
  01c7954  addc 3, 30, 3
  01c7958  li 5, 1
  01c795c  clrldi 3, 3, 32
  01c7960  lwz 4, -28512(4)
  01c7964  lwz 3, 472(3)
  01c7968  slwi 3, 3, 8
  01c796c  addc 3, 4, 3
  01c7970  clrldi 3, 3, 32
  01c7974  stb 5, 188(3)
  01c7978  b 0x1c8fe8
  01c797c  ori 3, 31, 0
  01c7980  bl 0xefe40
  01c7984  nop
  01c7988  lis 3, 28
  01c798c  addi 3, 3, 20364
  01c7990  lfs 2, 32(3)
  01c7994  fcmpu 0, 1, 2
  01c7998  cror 6, 0, 2
  01c799c  bt 6, 0x1c79fc
  01c79a0  li 4, 10
  01c79a4  addic 5, 1, 432
  01c79a8  ori 3, 31, 0
  01c79ac  bl 0xf1114
  01c79b0  nop
  01c79b4  lis 4, 16906
  01c79b8  li 3, 26
  01c79bc  ori 4, 4, 26214
  01c79c0  stw 4, 440(1)
  01c79c4  bl 0xfc620
  01c79c8  nop
  01c79cc  cmpwi 3, 0
  01c79d0  bf 2, 0x1c79fc
  01c79d4  lis 3, 28
  01c79d8  lis 6, 16400
  01c79dc  addi 4, 3, 20364
  01c79e0  addic 3, 1, 432
  01c79e4  li 5, 0
  01c79e8  ori 6, 6, 12416
  01c79ec  lfs 1, 204(4)
  01c79f0  lfs 2, 208(4)
  01c79f4  bl 0x12aee8
  01c79f8  nop
  01c79fc  lbz 3, 188(31)
  01c7a00  cmpwi 3, 8
  01c7a04  bf 2, 0x1c7a88
  01c7a08  lis 3, 28
  01c7a0c  lfs 31, 264(30)
  01c7a10  addic 29, 30, 256
  01c7a14  addi 28, 3, 20364
  01c7a18  ori 4, 29, 0
  01c7a1c  ori 3, 29, 0
  01c7a20  lfs 1, 212(28)
  01c7a24  bl 0x5e822c
  01c7a28  nop
  01c7a2c  lis 4, 114
  01c7a30  lfs 1, 216(28)
  01c7a34  ori 3, 22, 0
  01c7a38  ori 5, 29, 0
  01c7a3c  lfs 2, -3052(4)
  01c7a40  ori 4, 22, 0
  01c7a44  fnmsubs 1, 2, 1, 31
  01c7a48  stfs 1, 264(30)
  01c7a4c  bl 0x5e7f54
  01c7a50  nop
  01c7a54  lwz 3, 24(31)
  01c7a58  lwz 4, 440(30)
  01c7a5c  srawi 6, 3, 31
  01c7a60  srawi 5, 4, 31
  01c7a64  srwi 8, 6, 1
  01c7a68  srwi 7, 5, 1
  01c7a6c  xor 3, 8, 3
  01c7a70  xor 4, 7, 4
  01c7a74  subc 3, 3, 6
  01c7a78  subc 4, 4, 5
  01c7a7c  cmpw 3, 4
  01c7a80  bt 0, 0x1c7aac
  01c7a84  b 0x1c8fe8
  01c7a88  ori 3, 31, 0
  01c7a8c  bl 0xefe40
  01c7a90  nop
  01c7a94  lis 3, 28
  01c7a98  addi 3, 3, 20364
  01c7a9c  lfs 2, 220(3)
  01c7aa0  fcmpu 0, 1, 2
  01c7aa4  cror 6, 0, 2
  01c7aa8  bt 6, 0x1c8fe8
  01c7aac  li 3, 10
  01c7ab0  bl 0x5e7e18
  01c7ab4  nop
  01c7ab8  stw 3, 352(30)
  01c7abc  li 4, 14
  01c7ac0  li 3, 2
  01c7ac4  lis 5, 10922
  01c7ac8  stb 3, 453(30)
  01c7acc  stb 4, 32(31)
  01c7ad0  lhz 4, 36(30)
  01c7ad4  ori 3, 5, 43691
  01c7ad8  extsh 4, 4
  01c7adc  mulhw 3, 3, 4
  01c7ae0  srwi 4, 3, 31
  01c7ae4  addc 3, 3, 4
  01c7ae8  stw 3, 356(30)
  01c7aec  b 0x1c8fe8
  01c7af0  lis 3, 28
  01c7af4  addic 29, 30, 256
  01c7af8  addi 28, 3, 20364
  01c7afc  ori 3, 29, 0
  01c7b00  ori 4, 29, 0
  01c7b04  lfs 1, 224(28)
  01c7b08  bl 0x5e822c
  01c7b0c  nop
  01c7b10  ori 3, 22, 0
  01c7b14  ori 4, 22, 0
  01c7b18  ori 5, 29, 0
  01c7b1c  bl 0x5e7f54
  01c7b20  nop
  01c7b24  ori 3, 31, 0
  01c7b28  bl 0xefe40
  01c7b2c  nop
  01c7b30  lfs 31, 228(28)
  01c7b34  fcmpu 0, 1, 31
  01c7b38  cror 6, 1, 2
  01c7b3c  bt 6, 0x1c7b9c
  01c7b40  li 4, 10
  01c7b44  addic 5, 1, 448
  01c7b48  ori 3, 31, 0
  01c7b4c  bl 0xf1114
  01c7b50  nop
  01c7b54  lis 4, 16906
  01c7b58  li 3, 26
  01c7b5c  ori 4, 4, 26214
  01c7b60  stw 4, 456(1)
  01c7b64  bl 0xfc620
  01c7b68  nop
  01c7b6c  cmpwi 3, 0
  01c7b70  bf 2, 0x1c7b9c
  01c7b74  lis 3, 28
  01c7b78  lis 6, 16400
  01c7b7c  addi 4, 3, 20364
  01c7b80  addic 3, 1, 448
  01c7b84  li 5, 0
  01c7b88  ori 6, 6, 12416
  01c7b8c  lfs 1, 204(4)
  01c7b90  lfs 2, 208(4)
  01c7b94  bl 0x12aee8
  01c7b98  nop
  01c7b9c  ori 3, 31, 0
  01c7ba0  fmr 1, 31
  01c7ba4  bl 0x113e88
  01c7ba8  nop
  01c7bac  cmpwi 3, 0
  01c7bb0  bt 2, 0x1c7c08
  01c7bb4  addic 29, 1, 464
  01c7bb8  li 4, 5
  01c7bbc  ori 3, 31, 0
  01c7bc0  ori 5, 29, 0
  01c7bc4  bl 0xf1114
  01c7bc8  nop
  01c7bcc  lis 4, 28
  01c7bd0  lis 6, 114
  01c7bd4  fmr 1, 25
  01c7bd8  addi 5, 4, 20364
  01c7bdc  fmr 5, 25
  01c7be0  ori 3, 31, 0
  01c7be4  ori 4, 29, 0
  01c7be8  li 9, 58
  01c7bec  lfs 4, 12(5)
  01c7bf0  lfs 2, 112(5)
  01c7bf4  lfs 3, 116(5)
  01c7bf8  lfs 6, -3052(6)
  01c7bfc  fmuls 4, 6, 4
  01c7c00  bl 0x19ddd0
  01c7c04  nop
  01c7c08  lis 3, 28
  01c7c0c  addi 4, 3, 20364
  01c7c10  ori 3, 31, 0
  01c7c14  lfs 1, 232(4)
  01c7c18  bl 0x113e88
  01c7c1c  nop
  01c7c20  cmpwi 3, 0
  01c7c24  bt 2, 0x1c7c84
  01c7c28  addic 29, 1, 480
  01c7c2c  ori 3, 31, 0
  01c7c30  li 4, 6
  01c7c34  ori 5, 29, 0
  01c7c38  bl 0xf1114
  01c7c3c  nop
  01c7c40  lis 3, 28
  01c7c44  fmr 1, 25
  01c7c48  lis 5, 114
  01c7c4c  fmr 5, 25
  01c7c50  addi 4, 3, 20364
  01c7c54  ori 3, 31, 0
  01c7c58  li 9, 58
  01c7c5c  lfs 4, 12(4)
  01c7c60  lfs 2, 112(4)
  01c7c64  lfs 3, 116(4)
  01c7c68  lfs 6, -3052(5)
  01c7c6c  ori 4, 29, 0
  01c7c70  fmuls 4, 6, 4
  01c7c74  bl 0x19ddd0
  01c7c78  nop
  01c7c7c  ori 3, 31, 0
  01c7c80  bl 0x1bfb58
  01c7c84  lwz 3, 356(30)
  01c7c88  cmpwi 3, 0
  01c7c8c  bf 1, 0x1c7dbc
  01c7c90  addic 3, 30, 352
  01c7c94  bl 0x4fff60
  01c7c98  nop
  01c7c9c  cmpwi 3, 0
  01c7ca0  bt 2, 0x1c8fe8
  01c7ca4  lfs 1, 32(30)
  01c7ca8  li 3, 250
  01c7cac  lwz 5, 356(30)
  01c7cb0  fsubs 1, 1, 25
  01c7cb4  addic 5, 5, -1
  01c7cb8  stb 3, 103(30)
  01c7cbc  ori 3, 31, 0
  01c7cc0  addic 4, 30, 96
  01c7cc4  stw 5, 356(30)
  01c7cc8  stfs 1, 32(30)
  01c7ccc  bl 0x10c808
  01c7cd0  nop
  01c7cd4  lwz 3, 32(30)
  01c7cd8  cmpwi 3, 0
  01c7cdc  bt 1, 0x1c7d8c
  01c7ce0  stw 19, 32(30)
  01c7ce4  lbz 3, 83(31)
  01c7ce8  cmpwi 3, 8
  01c7cec  bt 2, 0x1c7d18
  01c7cf0  li 3, 10
  01c7cf4  li 4, 13
  01c7cf8  bl 0xfe484
  01c7cfc  nop
  01c7d00  ori 6, 3, 0
  01c7d04  ori 3, 31, 0
  01c7d08  li 4, 8
  01c7d0c  li 5, 0
  01c7d10  bl 0xfddc0
  01c7d14  nop
  01c7d18  lwz 3, 496(30)
  01c7d1c  cmpwi 3, -1
  01c7d20  bt 2, 0x1c7d80
  01c7d24  ori 3, 31, 0
  01c7d28  li 4, 1
  01c7d2c  bl 0x4d407c
  01c7d30  nop
  01c7d34  ori 3, 31, 0
  01c7d38  li 4, 0
  01c7d3c  li 5, -1
  01c7d40  bl 0xfd8d0
  01c7d44  nop
  01c7d48  lbz 3, 176(31)
  01c7d4c  bl 0xf1e50
  01c7d50  nop
  01c7d54  lis 3, 165
  01c7d58  lwz 4, 496(30)
  01c7d5c  slwi 4, 4, 7
  01c7d60  lwz 3, 7128(3)
  01c7d64  addc 3, 3, 4
  01c7d68  addic 4, 3, 48
  01c7d6c  addic 5, 3, 112
  01c7d70  clrldi 3, 4, 32
  01c7d74  clrldi 4, 5, 32
  01c7d78  bl 0x151e70
  01c7d7c  nop
  01c7d80  li 3, 10
  01c7d84  stb 3, 32(31)
  01c7d88  b 0x1c8fe8
  01c7d8c  lwz 3, 356(30)
  01c7d90  cmpwi 3, 0
  01c7d94  bf 1, 0x1c7da8
  01c7d98  li 3, 10
  01c7d9c  bl 0x5e7e18
  01c7da0  nop
  01c7da4  b 0x1c7db4
  01c7da8  li 3, 20
  01c7dac  bl 0x5e7e18
  01c7db0  nop
  01c7db4  stw 3, 352(30)
  01c7db8  b 0x1c8fe8
  01c7dbc  addic 3, 30, 352
  01c7dc0  bl 0x4fff60
  01c7dc4  nop
  01c7dc8  cmpwi 3, 0
  01c7dcc  bt 2, 0x1c8fe8
  01c7dd0  lbz 3, 413(30)
  01c7dd4  cmpwi 3, 0
  01c7dd8  cmpwi 1, 3, -1
  01c7ddc  cmpwi 6, 3, 1
  01c7de0  cmpwi 7, 3, 2
  01c7de4  bt 1, 0x1c7df0
  01c7de8  bf 5, 0x1c7f1c
  01c7dec  b 0x1c7dfc
  01c7df0  bf 25, 0x1c7e34
  01c7df4  bf 29, 0x1c7e70
  01c7df8  b 0x1c7f1c
  01c7dfc  lwz 5, 416(30)
  01c7e00  lis 4, 165
  01c7e04  addic 3, 30, 288
  01c7e08  slwi 5, 5, 2
  01c7e0c  addic 4, 4, 7136
  01c7e10  extsw 5, 5
  01c7e14  lwzx 4, 4, 5
  01c7e18  addic 4, 4, 16
  01c7e1c  bl 0x5e7e98
  01c7e20  nop
  01c7e24  lbz 3, 412(30)
  01c7e28  rlwinm 3, 3, 0, 24, 30
  01c7e2c  stb 3, 412(30)
  01c7e30  b 0x1c7f1c
  01c7e34  lwz 5, 416(30)
  01c7e38  lis 4, 165
  01c7e3c  addic 3, 30, 288
  01c7e40  slwi 5, 5, 2
  01c7e44  addic 4, 4, 7136
  01c7e48  extsw 5, 5
  01c7e4c  lwzx 4, 4, 5
  01c7e50  addic 4, 4, 32
  01c7e54  bl 0x5e7e98
  01c7e58  nop
  01c7e5c  lbz 3, 412(30)
  01c7e60  li 4, 253
  01c7e64  and 3, 3, 4
  01c7e68  stb 3, 412(30)
  01c7e6c  b 0x1c7f1c
  01c7e70  lwz 4, 416(30)
  01c7e74  lis 29, 165
  01c7e78  slwi 4, 4, 2
  01c7e7c  addic 29, 29, 7136
  01c7e80  extsw 4, 4
  01c7e84  ori 3, 20, 0
  01c7e88  lwzx 4, 29, 4
  01c7e8c  addic 4, 4, 48
  01c7e90  bl 0x5e8588
  01c7e94  nop
  01c7e98  lwz 3, 416(30)
  01c7e9c  fmr 31, 1
  01c7ea0  slwi 3, 3, 2
  01c7ea4  extsw 4, 3
  01c7ea8  ori 3, 20, 0
  01c7eac  lwzx 4, 29, 4
  01c7eb0  addic 4, 4, 64
  01c7eb4  bl 0x5e8588
  01c7eb8  nop
  01c7ebc  fcmpu 0, 31, 1
  01c7ec0  cror 6, 0, 2
  01c7ec4  bt 6, 0x1c7eec
  01c7ec8  lwz 4, 416(30)
  01c7ecc  addic 3, 30, 288
  01c7ed0  slwi 4, 4, 2
  01c7ed4  extsw 4, 4
  01c7ed8  lwzx 4, 29, 4
  01c7edc  addic 4, 4, 48
  01c7ee0  bl 0x5e7e98
  01c7ee4  nop
  01c7ee8  b 0x1c7f0c
  01c7eec  lwz 4, 416(30)
  01c7ef0  addic 3, 30, 288
  01c7ef4  slwi 4, 4, 2
  01c7ef8  extsw 4, 4
  01c7efc  lwzx 4, 29, 4
  01c7f00  addic 4, 4, 64
  01c7f04  bl 0x5e7e98
  01c7f08  nop
  01c7f0c  li 3, 251
  01c7f10  lbz 4, 412(30)
  01c7f14  and 3, 4, 3
  01c7f18  stb 3, 412(30)
  01c7f1c  lbz 5, 413(30)
  01c7f20  addic 29, 1, 868
  01c7f24  ori 3, 31, 0
  01c7f28  addc 6, 30, 5
  01c7f2c  ori 4, 30, 0
  01c7f30  clrldi 6, 6, 32
  01c7f34  ori 5, 29, 0
  01c7f38  lbz 6, 468(6)
  01c7f3c  stw 6, 424(30)
  01c7f40  bl 0x1c1d28
  01c7f44  ori 4, 3, 0
  01c7f48  lwz 5, 392(30)
  01c7f4c  ori 3, 29, 0
  01c7f50  extsw 5, 5
  01c7f54  bl 0x11440c
  01c7f58  nop
  01c7f5c  li 3, 15
  01c7f60  stb 3, 32(31)
  01c7f64  b 0x1c8fe8
  01c7f68  ori 3, 31, 0
  01c7f6c  bl 0xefe40
  01c7f70  nop
  01c7f74  lis 3, 28
  01c7f78  addi 3, 3, 20364
  01c7f7c  lfs 2, 236(3)
  01c7f80  fcmpu 0, 1, 2
  01c7f84  cror 6, 0, 2
  01c7f88  bt 6, 0x1c8028
  01c7f8c  lbz 3, 83(31)
  01c7f90  cmpwi 3, 10
  01c7f94  bt 2, 0x1c7fb0
  01c7f98  ori 3, 31, 0
  01c7f9c  li 4, 10
  01c7fa0  li 5, 0
  01c7fa4  li 6, 0
  01c7fa8  bl 0xfddc0
  01c7fac  nop
  01c7fb0  addic 29, 1, 496
  01c7fb4  ori 3, 31, 0
  01c7fb8  li 4, 10
  01c7fbc  ori 5, 29, 0
  01c7fc0  bl 0xf1114
  01c7fc4  nop
  01c7fc8  addic 3, 30, 192
  01c7fcc  ori 4, 29, 0
  01c7fd0  bl 0x5e7e98
  01c7fd4  nop
  01c7fd8  li 3, 10
  01c7fdc  lfs 1, 296(30)
  01c7fe0  addic 29, 1, 688
  01c7fe4  stfs 1, 200(30)
  01c7fe8  li 4, 1
  01c7fec  stw 3, 832(1)
  01c7ff0  ori 3, 31, 0
  01c7ff4  ori 6, 29, 0
  01c7ff8  addic 5, 1, 832
  01c7ffc  bl 0xf9d18
  01c8000  nop
  01c8004  addic 4, 1, 512
  01c8008  ori 3, 29, 0
  01c800c  bl 0x10c1e8
  01c8010  nop
  01c8014  lfs 1, 72(31)
  01c8018  lfs 2, 520(1)
  01c801c  bl 0x502578
  01c8020  nop
  01c8024  stfs 1, 204(30)
  01c8028  lbz 3, 82(31)
  01c802c  cmpwi 3, 10
  01c8030  bf 2, 0x1c8fe8
  01c8034  addic 4, 30, 192
  01c8038  ori 3, 22, 0
  01c803c  bl 0x5e7e98
  01c8040  nop
  01c8044  lfs 1, 204(30)
  01c8048  stfs 1, 72(31)
  01c804c  lbz 3, 413(30)
  01c8050  slwi 4, 3, 2
  01c8054  addc 4, 30, 4
  01c8058  clrldi 4, 4, 32
  01c805c  lwz 4, 472(4)
  01c8060  cmpwi 4, -1
  01c8064  bt 2, 0x1c8090
  01c8068  rlwinm 3, 3, 2, 22, 29
  01c806c  lis 4, 164
  01c8070  addc 3, 30, 3
  01c8074  clrldi 3, 3, 32
  01c8078  lwz 4, -28512(4)
  01c807c  lwz 3, 472(3)
  01c8080  slwi 3, 3, 8
  01c8084  addc 3, 4, 3
  01c8088  clrldi 3, 3, 32
  01c808c  stb 19, 188(3)
  01c8090  lis 4, 16320
  01c8094  lbz 6, 188(31)
  01c8098  li 3, 55
  01c809c  li 5, 6
  01c80a0  stw 4, 88(31)
  01c80a4  addic 4, 6, 1
  01c80a8  stb 4, 188(31)
  01c80ac  stw 19, 664(30)
  01c80b0  stb 5, 32(31)
  01c80b4  bl 0x5e7e18
  01c80b8  nop
  01c80bc  stw 3, 352(30)
  01c80c0  b 0x1c8fe8
  01c80c4  lwz 3, 660(30)
  01c80c8  cmpwi 3, 0
  01c80cc  bt 1, 0x1c80f0
  01c80d0  ori 3, 31, 0
  01c80d4  ori 4, 30, 0
  01c80d8  ori 5, 20, 0
  01c80dc  li 6, 6
  01c80e0  li 7, 0
  01c80e4  bl 0x1c2bb8
  01c80e8  cmpwi 3, 0
  01c80ec  bf 2, 0x1c8fe8
  01c80f0  li 3, 1
  01c80f4  lis 4, 28
  01c80f8  fmr 1, 28
  01c80fc  lis 6, 114
  01c8100  addi 4, 4, 20364
  01c8104  stw 3, 660(30)
  01c8108  addic 5, 30, 360
  01c810c  lis 3, 114
  01c8110  lfs 4, 72(4)
  01c8114  lfs 5, 76(4)
  01c8118  lfs 3, -3048(3)
  01c811c  lfs 6, -3052(6)
  01c8120  ori 3, 31, 0
  01c8124  fmuls 2, 3, 4
  01c8128  fmuls 3, 3, 5
  01c812c  fmuls 4, 6, 4
  01c8130  bl 0xff2e8
  01c8134  nop
  01c8138  addic 29, 1, 528
  01c813c  ori 3, 31, 0
  01c8140  li 4, 4
  01c8144  ori 5, 29, 0
  01c8148  bl 0xf1114
  01c814c  nop
  01c8150  ori 3, 31, 0
  01c8154  ori 4, 29, 0
  01c8158  bl 0x1c3a18
  01c815c  lbz 3, 82(31)
  01c8160  fmr 28, 1
  01c8164  cmpwi 3, 6
  01c8168  bf 2, 0x1c8fe8
  01c816c  addic 3, 30, 320
  01c8170  ori 4, 20, 0
  01c8174  bl 0x5e7e98
  01c8178  nop
  01c817c  lis 3, 28
  01c8180  lfs 2, 328(30)
  01c8184  addi 3, 3, 20364
  01c8188  lfs 1, 364(30)
  01c818c  fcmpu 0, 1, 29
  01c8190  lfs 31, 240(3)
  01c8194  fadds 2, 2, 31
  01c8198  cror 6, 1, 2
  01c819c  stfs 2, 328(30)
  01c81a0  bt 6, 0x1c81c8
  01c81a4  lis 3, 28
  01c81a8  lis 4, 114
  01c81ac  addi 3, 3, 20364
  01c81b0  lfs 2, 244(3)
  01c81b4  lfs 3, -3052(4)
  01c81b8  stw 19, 352(30)
  01c81bc  fmadds 1, 3, 2, 1
  01c81c0  stfs 1, 364(30)
  01c81c4  b 0x1c8794
  01c81c8  lbz 3, 452(30)
  01c81cc  cmpwi 3, 0
  01c81d0  bf 2, 0x1c81f4
  01c81d4  addic 3, 30, 352
  01c81d8  bl 0x4fff60
  01c81dc  nop
  01c81e0  cmpwi 3, 0
  01c81e4  bt 2, 0x1c8794
  01c81e8  fcmpu 0, 28, 31
  01c81ec  cror 6, 1, 2
  01c81f0  bt 6, 0x1c8794
  01c81f4  li 3, 1
  01c81f8  stb 3, 452(30)
  01c81fc  lwz 3, 8324(21)
  01c8200  cmpwi 3, 120
  01c8204  bt 2, 0x1c826c
  01c8208  addic 3, 30, 272
  01c820c  ori 4, 20, 0
  01c8210  bl 0x5e7e98
  01c8214  nop
  01c8218  addic 3, 30, 288
  01c821c  ori 4, 20, 0
  01c8220  bl 0x5e7e98
  01c8224  nop
  01c8228  lfs 1, 136(21)
  01c822c  lis 3, 28
  01c8230  lfs 2, 24(31)
  01c8234  addi 4, 3, 20364
  01c8238  fsub 3, 2, 1
  01c823c  li 3, 120
  01c8240  lfs 4, 116(4)
  01c8244  li 4, 1
  01c8248  fsel 1, 3, 2, 1
  01c824c  fadds 1, 1, 4
  01c8250  stfs 1, 296(30)
  01c8254  bl 0xb72b0
  01c8258  nop
  01c825c  lis 3, 16800
  01c8260  stw 19, 356(30)
  01c8264  sth 19, 414(30)
  01c8268  stw 3, 428(30)
  01c826c  addic 29, 1, 544
  01c8270  addic 28, 30, 272
  01c8274  ori 3, 29, 0
  01c8278  addic 4, 30, 288
  01c827c  ori 5, 28, 0
  01c8280  bl 0x5e81f0
  01c8284  nop
  01c8288  lis 3, 28
  01c828c  lis 5, 114
  01c8290  addi 27, 3, 20364
  01c8294  ori 3, 29, 0
  01c8298  ori 4, 29, 0
  01c829c  lfs 1, 132(27)
  01c82a0  lfs 2, -3064(5)
  01c82a4  fmuls 1, 2, 1
  01c82a8  bl 0x5e822c
  01c82ac  nop
  01c82b0  ori 3, 28, 0
  01c82b4  ori 4, 28, 0
  01c82b8  ori 5, 29, 0
  01c82bc  bl 0x5e7f54
  01c82c0  nop
  01c82c4  addic 3, 21, 7472
  01c82c8  ori 4, 28, 0
  01c82cc  bl 0x5e7e98
  01c82d0  nop
  01c82d4  ori 3, 20, 0
  01c82d8  ori 4, 28, 0
  01c82dc  bl 0x5e7e98
  01c82e0  nop
  01c82e4  lis 29, 114
  01c82e8  lfs 31, 248(27)
  01c82ec  lfs 1, 7496(21)
  01c82f0  lfs 2, -3052(29)
  01c82f4  fmuls 2, 2, 31
  01c82f8  bl 0x502578
  01c82fc  nop
  01c8300  lfs 2, -3052(29)
  01c8304  stfs 1, 7496(21)
  01c8308  fmuls 2, 2, 31
  01c830c  bl 0x502578
  01c8310  nop
  01c8314  lis 3, 118
  01c8318  lwz 4, 356(30)
  01c831c  addic 28, 3, 16132
  01c8320  slwi 3, 4, 4
  01c8324  stfs 1, 152(21)
  01c8328  stfs 29, 364(30)
  01c832c  extsw 3, 3
  01c8330  lwzx 28, 28, 3
  01c8334  cmpwi 28, -1
  01c8338  bf 2, 0x1c83e8
  01c833c  li 3, 800
  01c8340  stw 19, 356(30)
  01c8344  bl 0x5e7e18
  01c8348  nop
  01c834c  sth 3, 406(30)
  01c8350  li 3, 240
  01c8354  bl 0x5e7e18
  01c8358  nop
  01c835c  stw 3, 352(30)
  01c8360  ori 3, 31, 0
  01c8364  bl 0x1c3510
  01c8368  lwz 3, 8324(21)
  01c836c  cmpwi 3, 120
  01c8370  bf 2, 0x1c8384
  01c8374  li 3, 0
  01c8378  li 4, 1
  01c837c  bl 0xb72b0
  01c8380  nop
  01c8384  lwz 3, 504(30)
  01c8388  stb 19, 455(30)
  01c838c  cmpwi 3, -1
  01c8390  bt 2, 0x1c83d4
  01c8394  sldi 4, 3, 7
  01c8398  sldi 6, 3, 4
  01c839c  lis 5, 150
  01c83a0  subc 4, 4, 6
  01c83a4  addic 5, 5, 14176
  01c83a8  extsw 4, 4
  01c83ac  addc 4, 5, 4
  01c83b0  lwz 5, 136(4)
  01c83b4  cmpw 5, 31
  01c83b8  bf 2, 0x1c83d4
  01c83bc  lbz 4, 116(4)
  01c83c0  cmpwi 4, 0
  01c83c4  bt 2, 0x1c83d4
  01c83c8  extsw 3, 3
  01c83cc  bl 0x15cdb0
  01c83d0  nop
  01c83d4  li 3, -1
  01c83d8  li 4, 1
  01c83dc  stw 3, 504(30)
  01c83e0  stb 4, 32(31)
  01c83e4  b 0x1c8794
  01c83e8  extsw 28, 28
  01c83ec  lis 3, 114
  01c83f0  lhz 18, 414(30)
  01c83f4  sldi 4, 28, 4
  01c83f8  addic 3, 3, 4156
  01c83fc  subc 5, 28, 4
  01c8400  cmpwi 18, 0
  01c8404  sldi 5, 5, 2
  01c8408  subc 4, 4, 5
  01c840c  extsw 4, 4
  01c8410  lhzx 3, 3, 4
  01c8414  extsh 4, 3
  01c8418  bf 2, 0x1c8478
  01c841c  lis 5, 151
  01c8420  slwi 6, 28, 2
  01c8424  addic 5, 5, -16212
  01c8428  extsw 6, 6
  01c842c  lwzx 5, 5, 6
  01c8430  srawi 5, 5, 3
  01c8434  addze 5, 5
  01c8438  extsh 6, 5
  01c843c  cmpw 6, 4
  01c8440  sth 5, 414(30)
  01c8444  bf 0, 0x1c844c
  01c8448  sth 3, 414(30)
  01c844c  lis 3, 28
  01c8450  lfs 2, 428(30)
  01c8454  addi 3, 3, 20364
  01c8458  lfs 1, 88(3)
  01c845c  lfs 3, 252(3)
  01c8460  fadds 1, 2, 1
  01c8464  fadds 2, 2, 3
  01c8468  bl 0xfcbe8
  01c846c  nop
  01c8470  stfs 1, 428(30)
  01c8474  lhz 18, 414(30)
  01c8478  lis 27, 151
  01c847c  slwi 24, 28, 2
  01c8480  addic 27, 27, -16212
  01c8484  extsw 24, 24
  01c8488  extsh 18, 18
  01c848c  lwzx 3, 27, 24
  01c8490  cmpw 3, 18
  01c8494  bf 0, 0x1c84b0
  01c8498  extsw 18, 3
  01c849c  lwz 3, 356(30)
  01c84a0  sth 19, 414(30)
  01c84a4  addic 3, 3, 1
  01c84a8  stw 3, 356(30)
  01c84ac  lwzx 3, 27, 24
  01c84b0  sldi 4, 18, 3
  01c84b4  subc 3, 3, 4
  01c84b8  li 4, 0
  01c84bc  addc 5, 18, 3
  01c84c0  extsw 3, 3
  01c84c4  extsw 5, 5
  01c84c8  subc 3, 4, 3
  01c84cc  subc 4, 5, 18
  01c84d0  sradi 3, 3, 63
  01c84d4  and 3, 3, 4
  01c84d8  addc 18, 18, 3
  01c84dc  cmpwi 18, 0
  01c84e0  bf 1, 0x1c8794
  01c84e4  lwz 29, 396(30)
  01c84e8  cmpwi 29, -1
  01c84ec  bf 2, 0x1c8598
  01c84f0  lis 3, 28
  01c84f4  lis 23, 114
  01c84f8  addi 29, 3, 20364
  01c84fc  addic 3, 1, 560
  01c8500  lfs 1, 148(29)
  01c8504  lfs 2, 32(29)
  01c8508  lfs 3, -3052(23)
  01c850c  fmuls 2, 3, 2
  01c8510  fmuls 1, 3, 1
  01c8514  bl 0xfea60
  01c8518  nop
  01c851c  lfs 2, 116(29)
  01c8520  lfs 1, -3052(23)
  01c8524  lfs 3, 568(1)
  01c8528  fmuls 2, 1, 2
  01c852c  fcmpu 0, 3, 2
  01c8530  cror 6, 1, 2
  01c8534  bt 6, 0x1c8560
  01c8538  lis 3, 28
  01c853c  addi 3, 3, 20364
  01c8540  lfs 2, 156(3)
  01c8544  lfs 3, 16(3)
  01c8548  fmuls 4, 1, 2
  01c854c  fmuls 2, 1, 3
  01c8550  fmr 1, 4
  01c8554  bl 0xfcbe8
  01c8558  nop
  01c855c  stfs 1, 568(1)
  01c8560  lis 3, 28
  01c8564  addic 29, 1, 576
  01c8568  addi 5, 3, 20364
  01c856c  addic 4, 1, 560
  01c8570  ori 3, 29, 0
  01c8574  lfs 1, 256(5)
  01c8578  bl 0x5e7f98
  01c857c  nop
  01c8580  ori 3, 29, 0
  01c8584  ori 4, 29, 0
  01c8588  ori 5, 20, 0
  01c858c  bl 0x5e7f54
  01c8590  nop
  01c8594  b 0x1c8728
  01c8598  lis 3, 165
  01c859c  slwi 4, 29, 2
  01c85a0  stw 19, 836(1)
  01c85a4  addic 29, 3, 7136
  01c85a8  stw 19, 840(1)
  01c85ac  extsw 4, 4
  01c85b0  fmr 1, 22
  01c85b4  ori 3, 20, 0
  01c85b8  lwzx 29, 29, 4
  01c85bc  ori 4, 29, 0
  01c85c0  bl 0x1367d0
  01c85c4  nop
  01c85c8  lis 4, 28
  01c85cc  stw 3, 836(1)
  01c85d0  addic 23, 1, 592
  01c85d4  addi 3, 4, 20364
  01c85d8  lfs 22, 12(3)
  01c85dc  lfs 31, 260(3)
  01c85e0  lfs 30, 32(3)
  01c85e4  b 0x1c85f4
  01c85e8  fcmpu 0, 1, 31
  01c85ec  cror 6, 1, 2
  01c85f0  bt 6, 0x1c864c
  01c85f4  lfs 1, 428(30)
  01c85f8  ori 3, 29, 0
  01c85fc  ori 4, 23, 0
  01c8600  fadds 1, 1, 30
  01c8604  addic 5, 1, 836
  01c8608  addic 6, 1, 840
  01c860c  li 8, 1
  01c8610  stfs 1, 428(30)
  01c8614  bl 0x10ce18
  01c8618  nop
  01c861c  ori 3, 20, 0
  01c8620  ori 4, 23, 0
  01c8624  bl 0x5e8588
  01c8628  nop
  01c862c  fmr 29, 1
  01c8630  ori 3, 22, 0
  01c8634  ori 4, 23, 0
  01c8638  bl 0x5e8588
  01c863c  nop
  01c8640  fcmpu 0, 29, 22
  01c8644  bt 0, 0x1c85f4
  01c8648  b 0x1c85e8
  01c864c  fmr 1, 23
  01c8650  ori 3, 23, 0
  01c8654  bl 0x1c2480
  01c8658  addic 29, 1, 576
  01c865c  ori 4, 23, 0
  01c8660  ori 3, 29, 0
  01c8664  ori 5, 20, 0
  01c8668  bl 0x5e81f0
  01c866c  nop
  01c8670  lis 3, 28
  01c8674  lfs 22, 600(1)
  01c8678  ori 4, 29, 0
  01c867c  addi 17, 3, 20364
  01c8680  ori 3, 29, 0
  01c8684  lfs 1, 256(17)
  01c8688  bl 0x5e7f98
  01c868c  nop
  01c8690  addic 16, 1, 560
  01c8694  ori 4, 29, 0
  01c8698  ori 3, 16, 0
  01c869c  bl 0x5e7e98
  01c86a0  nop
  01c86a4  lis 15, 114
  01c86a8  stw 19, 568(1)
  01c86ac  ori 3, 16, 0
  01c86b0  lfs 31, 244(17)
  01c86b4  ori 4, 16, 0
  01c86b8  lfs 1, -3052(15)
  01c86bc  fmuls 1, 1, 31
  01c86c0  bl 0x5e7f98
  01c86c4  nop
  01c86c8  ori 3, 29, 0
  01c86cc  ori 4, 29, 0
  01c86d0  ori 5, 20, 0
  01c86d4  bl 0x5e7f54
  01c86d8  nop
  01c86dc  lfs 3, 264(17)
  01c86e0  lis 4, 114
  01c86e4  lfs 2, -3052(15)
  01c86e8  ori 3, 29, 0
  01c86ec  fmuls 1, 2, 31
  01c86f0  li 7, 0
  01c86f4  lfs 2, -3048(4)
  01c86f8  ori 4, 23, 0
  01c86fc  fmuls 2, 2, 3
  01c8700  bl 0x108180
  01c8704  nop
  01c8708  stfs 1, 568(1)
  01c870c  lfs 1, 212(17)
  01c8710  lfs 2, 116(17)
  01c8714  bl 0xfcbe8
  01c8718  nop
  01c871c  lfs 2, 428(30)
  01c8720  fadds 1, 2, 1
  01c8724  stfs 1, 428(30)
  01c8728  li 3, 11
  01c872c  li 4, 0
  01c8730  ori 5, 31, 0
  01c8734  bl 0x15d12c
  01c8738  nop
  01c873c  addic 3, 1, 576
  01c8740  ori 4, 28, 0
  01c8744  ori 5, 18, 0
  01c8748  li 6, 0
  01c874c  bl 0x2ea758
  01c8750  nop
  01c8754  ori 28, 3, 0
  01c8758  cmpwi 28, 0
  01c875c  bt 2, 0x1c8794
  01c8760  lwz 29, 120(28)
  01c8764  addic 4, 1, 560
  01c8768  addic 3, 29, 16
  01c876c  bl 0x5e7e98
  01c8770  nop
  01c8774  stfs 22, 40(29)
  01c8778  lwzx 4, 27, 24
  01c877c  li 3, 0
  01c8780  subc 4, 4, 18
  01c8784  stwx 4, 27, 24
  01c8788  bl 0x5e7e18
  01c878c  nop
  01c8790  stw 3, 352(30)
  01c8794  cmpwi 26, 0
  01c8798  bf 2, 0x1c8844
  01c879c  li 3, 15
  01c87a0  stw 19, 356(30)
  01c87a4  bl 0x5e7e18
  01c87a8  nop
  01c87ac  sth 3, 406(30)
  01c87b0  ori 3, 31, 0
  01c87b4  bl 0x1c3510
  01c87b8  lwz 3, 8324(21)
  01c87bc  cmpwi 3, 120
  01c87c0  bf 2, 0x1c87d4
  01c87c4  li 3, 0
  01c87c8  li 4, 1
  01c87cc  bl 0xb72b0
  01c87d0  nop
  01c87d4  li 3, 70
  01c87d8  bl 0x5e7e18
  01c87dc  nop
  01c87e0  stb 19, 455(30)
  01c87e4  lwz 19, 504(30)
  01c87e8  stw 3, 352(30)
  01c87ec  cmpwi 19, -1
  01c87f0  bt 2, 0x1c8834
  01c87f4  sldi 3, 19, 7
  01c87f8  sldi 5, 19, 4
  01c87fc  lis 4, 150
  01c8800  subc 3, 3, 5
  01c8804  addic 4, 4, 14176
  01c8808  extsw 3, 3
  01c880c  addc 3, 4, 3
  01c8810  lwz 4, 136(3)
  01c8814  cmpw 4, 31
  01c8818  bf 2, 0x1c8834
  01c881c  lbz 3, 116(3)
  01c8820  cmpwi 3, 0
  01c8824  bt 2, 0x1c8834
  01c8828  extsw 3, 19
  01c882c  bl 0x15cdb0
  01c8830  nop
  01c8834  li 3, -1
  01c8838  li 4, 1
  01c883c  stw 3, 504(30)
  01c8840  stb 4, 32(31)
  01c8844  cmpwi 25, 0
  01c8848  bt 2, 0x1c8fe8
  01c884c  li 3, 30
  01c8850  bl 0x5e7e18
  01c8854  nop
  01c8858  sth 3, 406(30)
  01c885c  lbz 3, 83(31)
  01c8860  cmpwi 3, 9
  01c8864  bt 2, 0x1c88a4
  01c8868  li 3, 0
  01c886c  li 4, 2
  01c8870  bl 0xfe484
  01c8874  nop
  01c8878  ori 29, 3, 0
  01c887c  li 3, 16
  01c8880  li 4, 25
  01c8884  bl 0xfe484
  01c8888  nop
  01c888c  ori 6, 3, 0
  01c8890  ori 3, 31, 0
  01c8894  li 4, 9
  01c8898  ori 5, 29, 0
  01c889c  bl 0xfddc0
  01c88a0  nop
  01c88a4  ori 3, 31, 0
  01c88a8  bl 0x1c3510
  01c88ac  lwz 3, 8324(21)
  01c88b0  cmpwi 3, 120
  01c88b4  bf 2, 0x1c88c8
  01c88b8  li 3, 0
  01c88bc  li 4, 1
  01c88c0  bl 0xb72b0
  01c88c4  nop
  01c88c8  lwz 3, 504(30)
  01c88cc  cmpwi 3, -1
  01c88d0  bt 2, 0x1c8914
  01c88d4  sldi 4, 3, 7
  01c88d8  sldi 6, 3, 4
  01c88dc  lis 5, 150
  01c88e0  subc 4, 4, 6
  01c88e4  addic 5, 5, 14176
  01c88e8  extsw 4, 4
  01c88ec  addc 4, 5, 4
  01c88f0  lwz 5, 136(4)
  01c88f4  cmpw 5, 31
  01c88f8  bf 2, 0x1c8914
  01c88fc  lbz 4, 116(4)
  01c8900  cmpwi 4, 0
  01c8904  bt 2, 0x1c8914
  01c8908  extsw 3, 3
  01c890c  bl 0x15cdb0
  01c8910  nop
  01c8914  li 3, -1
  01c8918  li 4, 2
  01c891c  stw 3, 504(30)
  01c8920  stb 4, 32(31)
  01c8924  b 0x1c8fe8
  01c8928  lwz 3, 356(30)
  01c892c  cmpwi 3, 0
  01c8930  bt 1, 0x1c8954
  01c8934  ori 3, 31, 0
  01c8938  addic 5, 30, 336
  01c893c  ori 4, 30, 0
  01c8940  li 6, 7
  01c8944  li 7, 1
  01c8948  bl 0x1c2bb8
  01c894c  cmpwi 3, 0
  01c8950  bf 2, 0x1c8fe8
  01c8954  lfs 1, 336(30)
  01c8958  lfs 2, 16(31)
  01c895c  lfs 3, 340(30)
  01c8960  lfs 4, 20(31)
  01c8964  fsubs 1, 1, 2
  01c8968  fsubs 2, 3, 4
  01c896c  bl 0x5e8338
  01c8970  nop
  01c8974  lis 3, 28
  01c8978  lis 4, 114
  01c897c  addi 3, 3, 20364
  01c8980  lis 6, 114
  01c8984  addic 5, 30, 360
  01c8988  lfs 4, 72(3)
  01c898c  lfs 3, 76(3)
  01c8990  lfs 5, -3048(4)
  01c8994  lfs 6, -3052(6)
  01c8998  ori 3, 31, 0
  01c899c  fmuls 2, 5, 4
  01c89a0  fmuls 3, 5, 3
  01c89a4  fmuls 4, 6, 4
  01c89a8  bl 0xff2e8
  01c89ac  nop
  01c89b0  lwz 3, 356(30)
  01c89b4  cmpwi 3, 5
  01c89b8  bt 2, 0x1c8d54
  01c89bc  cmpwi 3, 4
  01c89c0  bt 2, 0x1c8c90
  01c89c4  cmpwi 3, 3
  01c89c8  bt 2, 0x1c8c20
  01c89cc  cmpwi 3, 2
  01c89d0  bt 2, 0x1c8b44
  01c89d4  cmpwi 3, 1
  01c89d8  bt 2, 0x1c8a28
  01c89dc  cmpwi 3, 0
  01c89e0  bf 2, 0x1c8fe8
  01c89e4  lbz 3, 83(31)
  01c89e8  cmpwi 3, 7
  01c89ec  bt 2, 0x1c8a18
  01c89f0  li 3, 10
  01c89f4  li 4, 13
  01c89f8  bl 0xfe484
  01c89fc  nop
  01c8a00  ori 6, 3, 0
  01c8a04  ori 3, 31, 0
  01c8a08  li 4, 7
  01c8a0c  li 5, 0
  01c8a10  bl 0xfddc0
  01c8a14  nop
  01c8a18  li 3, 1
  01c8a1c  stw 19, 352(30)
  01c8a20  stw 3, 356(30)
  01c8a24  b 0x1c8fe8
  01c8a28  lbz 3, 82(31)
  01c8a2c  lbz 4, 83(31)
  01c8a30  cmpwi 3, 7
  01c8a34  cmpwi 1, 4, 7
  01c8a38  bf 2, 0x1c8a40
  01c8a3c  bt 6, 0x1c8a70
  01c8a40  bt 6, 0x1c8a70
  01c8a44  li 3, 10
  01c8a48  li 4, 13
  01c8a4c  bl 0xfe484
  01c8a50  nop
  01c8a54  ori 6, 3, 0
  01c8a58  ori 3, 31, 0
  01c8a5c  li 4, 7
  01c8a60  li 5, 0
  01c8a64  bl 0xfddc0
  01c8a68  nop
  01c8a6c  lbz 3, 82(31)
  01c8a70  cmpwi 3, 7
  01c8a74  bf 2, 0x1c8fe8
  01c8a78  ori 3, 31, 0
  01c8a7c  bl 0xefe40
  01c8a80  nop
  01c8a84  lis 3, 28
  01c8a88  addi 3, 3, 20364
  01c8a8c  lfs 2, 268(3)
  01c8a90  fcmpu 0, 1, 2
  01c8a94  bt 0, 0x1c8fe8
  01c8a98  addic 29, 1, 624
  01c8a9c  ori 3, 31, 0
  01c8aa0  li 4, 0
  01c8aa4  ori 5, 29, 0
  01c8aa8  bl 0xf1114
  01c8aac  nop
  01c8ab0  addic 28, 1, 640
  01c8ab4  ori 3, 31, 0
  01c8ab8  li 4, 1
  01c8abc  ori 5, 28, 0
  01c8ac0  bl 0xf1114
  01c8ac4  nop
  01c8ac8  addic 27, 1, 608
  01c8acc  ori 4, 29, 0
  01c8ad0  ori 3, 27, 0
  01c8ad4  ori 5, 28, 0
  01c8ad8  bl 0x5e7f54
  01c8adc  nop
  01c8ae0  ori 3, 27, 0
  01c8ae4  fmr 1, 23
  01c8ae8  ori 4, 27, 0
  01c8aec  bl 0x5e822c
  01c8af0  nop
  01c8af4  addic 29, 30, 272
  01c8af8  ori 4, 27, 0
  01c8afc  ori 3, 29, 0
  01c8b00  bl 0x5e7e98
  01c8b04  nop
  01c8b08  addic 28, 30, 304
  01c8b0c  ori 5, 29, 0
  01c8b10  addic 4, 30, 336
  01c8b14  ori 3, 28, 0
  01c8b18  bl 0x5e81f0
  01c8b1c  nop
  01c8b20  lis 5, 114
  01c8b24  ori 3, 28, 0
  01c8b28  ori 4, 28, 0
  01c8b2c  lfs 1, -3064(5)
  01c8b30  bl 0x5e7f98
  01c8b34  nop
  01c8b38  li 3, 2
  01c8b3c  stw 3, 356(30)
  01c8b40  b 0x1c8fe8
  01c8b44  lbz 3, 82(31)
  01c8b48  lbz 4, 83(31)
  01c8b4c  cmpwi 3, 7
  01c8b50  cmpwi 1, 4, 7
  01c8b54  bf 2, 0x1c8b5c
  01c8b58  bt 6, 0x1c8b88
  01c8b5c  bt 6, 0x1c8b88
  01c8b60  li 3, 7
  01c8b64  li 4, 10
  01c8b68  bl 0xfe484
  01c8b6c  nop
  01c8b70  ori 6, 3, 0
  01c8b74  ori 3, 31, 0
  01c8b78  li 4, 7
  01c8b7c  li 5, 0
  01c8b80  bl 0xfddc0
  01c8b84  nop
  01c8b88  addic 3, 30, 352
  01c8b8c  bl 0x4fff60
  01c8b90  nop
  01c8b94  cmpwi 3, 0
  01c8b98  bt 2, 0x1c8bec
  01c8b9c  li 3, 10
  01c8ba0  bl 0x5e7e18
  01c8ba4  nop
  01c8ba8  lis 4, 28
  01c8bac  stw 3, 352(30)
  01c8bb0  addi 5, 4, 20364
  01c8bb4  ori 3, 31, 0
  01c8bb8  li 4, 0
  01c8bbc  lfs 31, 272(5)
  01c8bc0  lfs 30, 68(5)
  01c8bc4  fmr 1, 31
  01c8bc8  fmr 2, 30
  01c8bcc  bl 0x1314c8
  01c8bd0  nop
  01c8bd4  fmr 1, 31
  01c8bd8  ori 3, 31, 0
  01c8bdc  fmr 2, 30
  01c8be0  li 4, 1
  01c8be4  bl 0x1314c8
  01c8be8  nop
  01c8bec  ori 3, 31, 0
  01c8bf0  bl 0xefe40
  01c8bf4  nop
  01c8bf8  lis 3, 28
  01c8bfc  addi 3, 3, 20364
  01c8c00  lfs 2, 276(3)
  01c8c04  fcmpu 0, 1, 2
  01c8c08  bt 0, 0x1c8fe8
  01c8c0c  li 3, 3
  01c8c10  stw 19, 364(30)
  01c8c14  stw 3, 356(30)
  01c8c18  stw 19, 284(30)
  01c8c1c  b 0x1c8fe8
  01c8c20  ori 3, 22, 0
  01c8c24  addic 4, 1, 800
  01c8c28  bl 0x5e8588
  01c8c2c  nop
  01c8c30  lis 3, 114
  01c8c34  lfs 2, 364(30)
  01c8c38  lfs 3, -3064(3)
  01c8c3c  fadds 2, 2, 3
  01c8c40  fcmpu 0, 2, 1
  01c8c44  stfs 2, 364(30)
  01c8c48  bt 0, 0x1c8c54
  01c8c4c  li 3, 4
  01c8c50  stw 3, 356(30)
  01c8c54  addic 3, 30, 352
  01c8c58  bl 0x4fff60
  01c8c5c  nop
  01c8c60  cmpwi 3, 0
  01c8c64  bt 2, 0x1c8c78
  01c8c68  li 3, 20
  01c8c6c  bl 0x5e7e18
  01c8c70  nop
  01c8c74  stw 3, 352(30)
  01c8c78  lis 3, 113
  01c8c7c  ori 4, 31, 0
  01c8c80  addic 3, 3, -29768
  01c8c84  bl 0x6d720
  01c8c88  nop
  01c8c8c  b 0x1c8fe8
  01c8c90  addic 28, 30, 272
  01c8c94  addic 29, 1, 656
  01c8c98  ori 5, 28, 0
  01c8c9c  addic 4, 30, 288
  01c8ca0  ori 3, 29, 0
  01c8ca4  bl 0x5e81f0
  01c8ca8  nop
  01c8cac  lis 5, 114
  01c8cb0  ori 3, 29, 0
  01c8cb4  ori 4, 29, 0
  01c8cb8  lfs 1, -3064(5)
  01c8cbc  bl 0x5e7f98
  01c8cc0  nop
  01c8cc4  ori 3, 28, 0
  01c8cc8  ori 4, 28, 0
  01c8ccc  ori 5, 29, 0
  01c8cd0  bl 0x5e7f54
  01c8cd4  nop
  01c8cd8  li 3, 30
  01c8cdc  bl 0x5e7e18
  01c8ce0  nop
  01c8ce4  lis 4, 28
  01c8ce8  extsh 7, 3
  01c8cec  addi 5, 4, 20364
  01c8cf0  lis 8, -32768
  01c8cf4  ori 3, 31, 0
  01c8cf8  li 9, 0
  01c8cfc  ori 4, 30, 0
  01c8d00  lfs 1, 32(5)
  01c8d04  li 5, 3
  01c8d08  ori 6, 28, 0
  01c8d0c  ori 8, 8, 24831
  01c8d10  bl 0x1bf8b0
  01c8d14  lwz 3, 356(30)
  01c8d18  cmpwi 3, 0
  01c8d1c  bt 2, 0x1c8d3c
  01c8d20  addic 3, 30, 352
  01c8d24  bl 0x4fff60
  01c8d28  nop
  01c8d2c  cmpwi 3, 0
  01c8d30  bt 2, 0x1c8d3c
  01c8d34  li 3, 5
  01c8d38  stw 3, 356(30)
  01c8d3c  lis 3, 113
  01c8d40  ori 4, 31, 0
  01c8d44  addic 3, 3, -29768
  01c8d48  bl 0x6d720
  01c8d4c  nop
  01c8d50  b 0x1c8fe8
  01c8d54  lis 3, 16256
  01c8d58  stw 3, 88(31)
  01c8d5c  stw 19, 356(30)
  01c8d60  stw 19, 352(30)
  01c8d64  lbz 29, 83(31)
  01c8d68  bl 0x5c8318
  01c8d6c  nop
  01c8d70  clrlwi 3, 3, 31
  01c8d74  cmpw 29, 3
  01c8d78  bt 2, 0x1c8dc4
  01c8d7c  bl 0x5c8318
  01c8d80  nop
  01c8d84  clrlwi 29, 3, 31
  01c8d88  li 3, 0
  01c8d8c  li 4, 7
  01c8d90  bl 0xfe484
  01c8d94  nop
  01c8d98  ori 28, 3, 0
  01c8d9c  li 3, 27
  01c8da0  li 4, 45
  01c8da4  bl 0xfe484
  01c8da8  nop
  01c8dac  ori 6, 3, 0
  01c8db0  ori 3, 31, 0
  01c8db4  ori 4, 29, 0
  01c8db8  ori 5, 28, 0
  01c8dbc  bl 0xfddc0
  01c8dc0  nop
  01c8dc4  li 3, 1
  01c8dc8  stb 3, 32(31)
  01c8dcc  b 0x1c8fe8
  01c8dd0  lwz 3, 432(30)
  01c8dd4  cmpwi 3, -1
  01c8dd8  bt 2, 0x1c8df4
  01c8ddc  extsw 3, 3
  01c8de0  li 4, 0
  01c8de4  bl 0xc8b28
  01c8de8  nop
  01c8dec  li 3, -1
  01c8df0  stw 3, 432(30)
  01c8df4  lbz 3, 112(31)
  01c8df8  rlwinm 3, 3, 0, 30, 30
  01c8dfc  cmpwi 3, 0
  01c8e00  bt 2, 0x1c8fe8
  01c8e04  addic 29, 30, 256
  01c8e08  fmr 1, 25
  01c8e0c  ori 3, 29, 0
  01c8e10  ori 4, 29, 0
  01c8e14  bl 0x5e7f98
  01c8e18  nop
  01c8e1c  lis 5, 16256
  01c8e20  addic 28, 1, 672
  01c8e24  ori 4, 22, 0
  01c8e28  ori 3, 28, 0
  01c8e2c  stw 5, 264(30)
  01c8e30  bl 0x5e7e98
  01c8e34  nop
  01c8e38  lfs 1, 440(30)
  01c8e3c  lis 3, 28
  01c8e40  li 11, -1
  01c8e44  fmr 2, 22
  01c8e48  fadds 3, 1, 25
  01c8e4c  li 7, 1
  01c8e50  addi 6, 3, 20364
  01c8e54  fmr 1, 22
  01c8e58  ori 3, 31, 0
  01c8e5c  fmr 6, 25
  01c8e60  std 11, 144(1)
  01c8e64  li 8, 20
  01c8e68  std 7, 160(1)
  01c8e6c  ori 4, 29, 0
  01c8e70  ori 5, 28, 0
  01c8e74  li 9, 12
  01c8e78  li 10, 64
  01c8e7c  stfs 3, 680(1)
  01c8e80  lfs 3, 280(6)
  01c8e84  lfs 4, 68(6)
  01c8e88  lfs 5, 32(6)
  01c8e8c  lfs 7, 284(6)
  01c8e90  std 7, 168(1)
  01c8e94  std 11, 176(1)
  01c8e98  std 19, 184(1)
  01c8e9c  bl 0x10e030
  01c8ea0  nop
  01c8ea4  lhz 3, 52(31)
  01c8ea8  lwz 19, 460(30)
  01c8eac  ori 3, 3, 65
  01c8eb0  cmpwi 19, -1
  01c8eb4  sth 3, 52(31)
  01c8eb8  bt 2, 0x1c8ed8
  01c8ebc  lis 3, 164
  01c8ec0  slwi 4, 19, 8
  01c8ec4  lwz 3, -28512(3)
  01c8ec8  addc 3, 3, 4
  01c8ecc  clrldi 3, 3, 32
  01c8ed0  bl 0x44cddc
  01c8ed4  nop
  01c8ed8  lis 3, 16800
  01c8edc  li 4, 16
  01c8ee0  stw 3, 24(31)
  01c8ee4  stb 4, 32(31)
  01c8ee8  b 0x1c8fe8
  01c8eec  lbz 3, 112(31)
  01c8ef0  cmpwi 1, 23, 0
  01c8ef4  rlwinm 3, 3, 0, 30, 30
  01c8ef8  cmpwi 3, 0
  01c8efc  bt 2, 0x1c8fe8
  01c8f00  bt 6, 0x1c8f40
  01c8f04  lwz 4, 764(21)
  01c8f08  addic 3, 30, 336
  01c8f0c  stw 19, 356(30)
  01c8f10  addic 4, 4, 16
  01c8f14  bl 0x5e7e98
  01c8f18  nop
  01c8f1c  lis 3, 28
  01c8f20  lfs 1, 344(30)
  01c8f24  addi 3, 3, 20364
  01c8f28  lfs 2, 156(3)
  01c8f2c  li 3, 9
  01c8f30  fadds 1, 1, 2
  01c8f34  stfs 1, 344(30)
  01c8f38  stb 3, 32(31)
  01c8f3c  b 0x1c8fe8
  01c8f40  li 3, 1
  01c8f44  stb 3, 32(31)
  01c8f48  b 0x1c8fe8
  01c8f4c  lhz 3, 640(30)
  01c8f50  extsh 3, 3
  01c8f54  cmpwi 3, -1
  01c8f58  bt 2, 0x1c8f64
  01c8f5c  bl 0xda9e8
  01c8f60  nop
  01c8f64  lwz 3, 464(30)
  01c8f68  cmpwi 3, -1
  01c8f6c  bf 2, 0x1c8f80
  01c8f70  ori 3, 31, 0
  01c8f74  bl 0xefb38
  01c8f78  nop
  01c8f7c  b 0x1c9020
  01c8f80  lis 4, 164
  01c8f84  slwi 3, 3, 8
  01c8f88  lwz 4, -28512(4)
  01c8f8c  addc 3, 4, 3
  01c8f90  lis 4, 16906
  01c8f94  clrldi 3, 3, 32
  01c8f98  lwz 5, 24(3)
  01c8f9c  lfs 1, 24(3)
  01c8fa0  srawi 6, 5, 31
  01c8fa4  srwi 7, 6, 1
  01c8fa8  xor 5, 7, 5
  01c8fac  subc 5, 5, 6
  01c8fb0  cmpw 5, 4
  01c8fb4  bf 0, 0x1c8fd8
  01c8fb8  lis 4, 28
  01c8fbc  addi 4, 4, 20364
  01c8fc0  lfs 2, 288(4)
  01c8fc4  lfs 3, 132(4)
  01c8fc8  fsubs 2, 2, 1
  01c8fcc  fmadds 1, 2, 3, 1
  01c8fd0  stfs 1, 24(3)
  01c8fd4  b 0x1c8fe8
  01c8fd8  ori 3, 31, 0
  01c8fdc  bl 0xefb38
  01c8fe0  nop
  01c8fe4  b 0x1c9020
  01c8fe8  addic 3, 30, 256
  01c8fec  addic 5, 1, 192
  01c8ff0  ori 4, 22, 0
  01c8ff4  bl 0x5e81f0
  01c8ff8  nop
  01c8ffc  lbz 3, 32(31)
  01c9000  cmpwi 3, 10
  01c9004  bf 0, 0x1c9018
  01c9008  fmr 1, 27
  01c900c  ori 3, 31, 0
  01c9010  bl 0x106150
  01c9014  nop
  01c9018  ori 3, 30, 0
  01c901c  bl 0x1bfbd8
  01c9020  ld 0, 1152(1)
  01c9024  mtlr 0
  01c9028  lfd 22, 1056(1)
  01c902c  lfd 23, 1064(1)
  01c9030  lfd 24, 1072(1)
  01c9034  lfd 25, 1080(1)
  01c9038  lfd 26, 1088(1)
  01c903c  lfd 27, 1096(1)
  01c9040  lfd 28, 1104(1)
  01c9044  lfd 29, 1112(1)
  01c9048  lfd 30, 1120(1)
  01c904c  lfd 31, 1128(1)
  01c9050  ld 15, 920(1)
  01c9054  ld 16, 928(1)
  01c9058  ld 17, 936(1)
  01c905c  ld 18, 944(1)
  01c9060  ld 19, 952(1)
  01c9064  ld 20, 960(1)
  01c9068  ld 21, 968(1)
  01c906c  ld 22, 976(1)
  01c9070  ld 23, 984(1)
  01c9074  ld 24, 992(1)
  01c9078  ld 25, 1000(1)
  01c907c  ld 26, 1008(1)
  01c9080  ld 27, 1016(1)
  01c9084  ld 28, 1024(1)
  01c9088  ld 29, 1032(1)
  01c908c  ld 30, 1040(1)
  01c9090  ld 31, 1048(1)
  01c9094  addi 1, 1, 1136
  01c9098  blr
