# game/update/moby877.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M877_0049eaa0:   # 0x49eaa0, 0x1d8 bytes
  049eaa0  stdu 1, -240(1)
  049eaa4  mflr 0
  049eaa8  std 0, 256(1)
  049eaac  stfd 22, 160(1)
  049eab0  stfd 23, 168(1)
  049eab4  stfd 24, 176(1)
  049eab8  stfd 25, 184(1)
  049eabc  stfd 26, 192(1)
  049eac0  stfd 27, 200(1)
  049eac4  stfd 28, 208(1)
  049eac8  stfd 29, 216(1)
  049eacc  stfd 30, 224(1)
  049ead0  stfd 31, 232(1)
  049ead4  std 28, 128(1)
  049ead8  lis 4, 165
  049eadc  lis 6, 74
  049eae0  std 29, 136(1)
  049eae4  addic 28, 4, 7136
  049eae8  lwz 4, 120(3)
  049eaec  std 31, 152(1)
  049eaf0  li 29, 0
  049eaf4  ori 31, 3, 0
  049eaf8  lwz 4, 104(4)
  049eafc  slwi 4, 4, 2
  049eb00  extsw 4, 4
  049eb04  lwzx 28, 28, 4
  049eb08  lwz 4, 0(28)
  049eb0c  addic 5, 4, -1
  049eb10  extsw 5, 5
  049eb14  cmpwi 4, 0
  049eb18  std 5, 112(1)
  049eb1c  addi 5, 6, -5512
  049eb20  lfs 22, 0(5)
  049eb24  lfs 1, 4(5)
  049eb28  lfd 2, 112(1)
  049eb2c  fmr 23, 1
  049eb30  fcfid 2, 2
  049eb34  frsp 2, 2
  049eb38  std 30, 144(1)
  049eb3c  fdivs 22, 22, 2
  049eb40  bf 1, 0x49ec30
  049eb44  lis 3, 74
  049eb48  ori 30, 28, 0
  049eb4c  addi 3, 3, -5512
  049eb50  lfs 24, 8(3)
  049eb54  lfs 25, 12(3)
  049eb58  lfs 26, 16(3)
  049eb5c  lfs 27, 20(3)
  049eb60  lfs 28, 24(3)
  049eb64  lfs 29, 28(3)
  049eb68  lfs 30, 32(3)
  049eb6c  lfs 31, 36(3)
  049eb70  fadds 2, 1, 24
  049eb74  fsubs 3, 25, 1
  049eb78  fsubs 4, 26, 1
  049eb7c  fsubs 5, 25, 2
  049eb80  fsub 7, 1, 3
  049eb84  fsubs 6, 26, 2
  049eb88  fsub 8, 2, 5
  049eb8c  fsel 3, 7, 3, 1
  049eb90  fsel 2, 8, 5, 2
  049eb94  fsub 5, 4, 3
  049eb98  fsub 7, 6, 2
  049eb9c  fsel 3, 5, 4, 3
  049eba0  fsel 2, 7, 6, 2
  049eba4  fmuls 4, 3, 3
  049eba8  fmuls 5, 2, 2
  049ebac  fmuls 6, 4, 3
  049ebb0  fmuls 7, 5, 2
  049ebb4  fmuls 8, 4, 6
  049ebb8  fmadds 3, 6, 27, 3
  049ebbc  fmuls 6, 5, 7
  049ebc0  fmadds 2, 7, 27, 2
  049ebc4  fmuls 7, 4, 8
  049ebc8  fmadds 3, 8, 28, 3
  049ebcc  lfs 8, 16(31)
  049ebd0  fmuls 9, 5, 6
  049ebd4  fmadds 2, 6, 28, 2
  049ebd8  fmuls 4, 4, 7
  049ebdc  fmadds 3, 7, 29, 3
  049ebe0  fmuls 5, 5, 9
  049ebe4  fmadds 2, 9, 29, 2
  049ebe8  fmadds 3, 4, 30, 3
  049ebec  fmadds 4, 5, 30, 2
  049ebf0  fmr 2, 22
  049ebf4  fmadds 4, 4, 31, 8
  049ebf8  stfs 4, 16(30)
  049ebfc  lfs 4, 20(31)
  049ec00  fmadds 3, 3, 31, 4
  049ec04  stfs 3, 20(30)
  049ec08  lfs 3, 24(31)
  049ec0c  fadds 3, 3, 23
  049ec10  stfs 3, 24(30)
  049ec14  bl 0x502578
  049ec18  nop
  049ec1c  lwz 3, 0(28)
  049ec20  addic 29, 29, 1
  049ec24  addic 30, 30, 16
  049ec28  cmpw 29, 3
  049ec2c  bt 0, 0x49eb70
  049ec30  ld 0, 256(1)
  049ec34  mtlr 0
  049ec38  lfd 22, 160(1)
  049ec3c  lfd 23, 168(1)
  049ec40  lfd 24, 176(1)
  049ec44  lfd 25, 184(1)
  049ec48  lfd 26, 192(1)
  049ec4c  lfd 27, 200(1)
  049ec50  lfd 28, 208(1)
  049ec54  lfd 29, 216(1)
  049ec58  lfd 30, 224(1)
  049ec5c  lfd 31, 232(1)
  049ec60  ld 28, 128(1)
  049ec64  ld 29, 136(1)
  049ec68  ld 30, 144(1)
  049ec6c  ld 31, 152(1)
  049ec70  addi 1, 1, 240
  049ec74  blr

M877_0049ec80:   # 0x49ec80, 0x10c bytes
  049ec80  lfs 1, 196(3)
  049ec84  lfs 3, 192(3)
  049ec88  fmuls 1, 1, 1
  049ec8c  lfs 2, 200(3)
  049ec90  lis 6, 74
  049ec94  addi 6, 6, -5000
  049ec98  fmadds 1, 3, 3, 1
  049ec9c  fmadds 2, 2, 2, 1
  049eca0  lfs 1, 0(6)
  049eca4  lis 6, 141
  049eca8  fsqrts 2, 2
  049ecac  lfs 4, -32680(6)
  049ecb0  fcmpu 0, 2, 1
  049ecb4  bf 2, 0x49ecf0
  049ecb8  stfs 3, 0(4)
  049ecbc  li 6, 0
  049ecc0  lfs 2, 196(3)
  049ecc4  stfs 2, 4(4)
  049ecc8  fmr 2, 1
  049eccc  lfs 3, 200(3)
  049ecd0  stfs 3, 8(4)
  049ecd4  lfs 3, 204(3)
  049ecd8  stw 6, 8(4)
  049ecdc  stfs 3, 12(4)
  049ece0  stw 6, 4(4)
  049ece4  stw 6, 0(4)
  049ece8  fmr 3, 2
  049ecec  b 0x49ed1c
  049ecf0  fdivs 1, 4, 2
  049ecf4  fmuls 3, 3, 1
  049ecf8  stfs 3, 0(4)
  049ecfc  lfs 2, 196(3)
  049ed00  fmuls 2, 2, 1
  049ed04  stfs 2, 4(4)
  049ed08  lfs 4, 200(3)
  049ed0c  fmuls 1, 4, 1
  049ed10  stfs 1, 8(4)
  049ed14  lfs 4, 204(3)
  049ed18  stfs 4, 12(4)
  049ed1c  lfs 4, 16(3)
  049ed20  fadds 3, 3, 4
  049ed24  lis 6, 141
  049ed28  li 7, 0
  049ed2c  lis 8, 74
  049ed30  lis 9, 141
  049ed34  addi 8, 8, -5000
  049ed38  stfs 3, 0(4)
  049ed3c  lfs 3, 20(3)
  049ed40  fadds 2, 2, 3
  049ed44  stfs 2, 4(4)
  049ed48  lfs 2, 24(3)
  049ed4c  fadds 1, 1, 2
  049ed50  stfs 1, 8(4)
  049ed54  lfs 2, -32688(6)
  049ed58  stw 7, 12(5)
  049ed5c  fadds 1, 1, 2
  049ed60  stw 7, 4(5)
  049ed64  stw 7, 0(5)
  049ed68  stfs 1, 8(4)
  049ed6c  stw 7, 8(5)
  049ed70  lfs 1, 72(3)
  049ed74  stfs 1, 8(5)
  049ed78  lfs 1, 4(8)
  049ed7c  lfs 2, -32684(9)
  049ed80  fmuls 1, 2, 1
  049ed84  stfs 1, 4(5)
  049ed88  blr

UpdateMoby_877:   # 0x49ede8, 0xaac bytes
  049ede8  stdu 1, -272(1)
  049edec  mflr 0
  049edf0  std 0, 288(1)
  049edf4  stfd 31, 264(1)
  049edf8  std 31, 256(1)
  049edfc  ori 31, 3, 0
  049ee00  lfs 1, 16(31)
  049ee04  lfs 2, 20(31)
  049ee08  fneg 1, 1
  049ee0c  lfs 3, 24(31)
  049ee10  fneg 2, 2
  049ee14  std 30, 248(1)
  049ee18  fneg 3, 3
  049ee1c  lwz 30, 120(31)
  049ee20  lfs 4, 28(31)
  049ee24  lfs 5, 64(31)
  049ee28  stfs 4, 124(1)
  049ee2c  lfs 4, 68(31)
  049ee30  stfs 5, 128(1)
  049ee34  lfs 5, 72(31)
  049ee38  stfs 4, 132(1)
  049ee3c  stfs 1, 112(1)
  049ee40  stfs 2, 116(1)
  049ee44  stfs 3, 120(1)
  049ee48  lfs 1, 76(31)
  049ee4c  lbz 3, 32(31)
  049ee50  stfs 5, 136(1)
  049ee54  cmpwi 3, 1
  049ee58  stfs 1, 140(1)
  049ee5c  cmpwi 1, 3, -1
  049ee60  cmpwi 6, 3, 0
  049ee64  std 29, 240(1)
  049ee68  std 28, 232(1)
  049ee6c  std 27, 224(1)
  049ee70  cmpwi 7, 3, 5
  049ee74  bt 1, 0x49ee84
  049ee78  bf 5, 0x49f824
  049ee7c  bf 25, 0x49eea0
  049ee80  b 0x49eec8
  049ee84  bt 29, 0x49ee94
  049ee88  cmpwi 3, 3
  049ee8c  bf 1, 0x49ef58
  049ee90  b 0x49f548
  049ee94  cmpwi 3, 7
  049ee98  bf 1, 0x49f2a0
  049ee9c  b 0x49f824
  049eea0  bl 0xfcc68
  049eea4  nop
  049eea8  stfs 1, 128(30)
  049eeac  li 3, -1
  049eeb0  lfs 1, 72(31)
  049eeb4  li 4, 3
  049eeb8  stfs 1, 132(30)
  049eebc  stw 3, 116(30)
  049eec0  stb 4, 32(31)
  049eec4  b 0x49f824
  049eec8  lis 3, 151
  049eecc  lwz 6, 104(30)
  049eed0  lis 4, 74
  049eed4  addic 5, 3, -25376
  049eed8  addi 4, 4, -4724
  049eedc  addic 3, 30, 120
  049eee0  lis 29, 16256
  049eee4  sth 6, 8922(5)
  049eee8  lfs 1, 0(4)
  049eeec  lfs 2, 4(4)
  049eef0  bl 0x109af0
  049eef4  nop
  049eef8  lis 4, 150
  049eefc  lwz 3, 120(30)
  049ef00  lfs 1, 120(30)
  049ef04  cmpw 3, 29
  049ef08  stfs 1, -12528(4)
  049ef0c  bf 2, 0x49f824
  049ef10  addic 29, 1, 144
  049ef14  addic 28, 1, 160
  049ef18  ori 4, 29, 0
  049ef1c  ori 3, 31, 0
  049ef20  ori 5, 28, 0
  049ef24  bl 0x49ec80
  049ef28  ori 4, 28, 0
  049ef2c  ori 3, 29, 0
  049ef30  li 5, 1
  049ef34  li 6, 0
  049ef38  li 7, 0
  049ef3c  bl 0x47f74
  049ef40  nop
  049ef44  li 4, 1
  049ef48  lbz 3, 188(31)
  049ef4c  stb 3, 32(31)
  049ef50  stb 4, 188(31)
  049ef54  b 0x49f824
  049ef58  ori 3, 31, 0
  049ef5c  lwz 4, 116(30)
  049ef60  extsw 4, 4
  049ef64  bl 0x15cc7c
  049ef68  nop
  049ef6c  cmpwi 3, 0
  049ef70  bf 2, 0x49ef8c
  049ef74  li 3, 0
  049ef78  li 4, 4
  049ef7c  ori 5, 31, 0
  049ef80  bl 0x15d12c
  049ef84  nop
  049ef88  stw 3, 116(30)
  049ef8c  lbz 3, 188(31)
  049ef90  cmpwi 3, 0
  049ef94  bt 2, 0x49f078
  049ef98  lis 4, 74
  049ef9c  lis 3, 151
  049efa0  lwz 5, 104(30)
  049efa4  addi 29, 4, -4724
  049efa8  addic 4, 3, -25376
  049efac  addic 3, 30, 120
  049efb0  sth 5, 8922(4)
  049efb4  lfs 1, 8(29)
  049efb8  lfs 2, 4(29)
  049efbc  bl 0x109af0
  049efc0  nop
  049efc4  lis 5, 150
  049efc8  lfs 1, 120(30)
  049efcc  addic 28, 1, 176
  049efd0  addic 27, 1, 192
  049efd4  ori 3, 31, 0
  049efd8  ori 4, 28, 0
  049efdc  stfs 1, -12528(5)
  049efe0  ori 5, 27, 0
  049efe4  bl 0x49ec80
  049efe8  ori 3, 28, 0
  049efec  bl 0x47b98
  049eff0  nop
  049eff4  ori 3, 27, 0
  049eff8  bl 0x47c08
  049effc  nop
  049f000  lfs 1, 96(30)
  049f004  lfs 2, 100(30)
  049f008  fsubs 5, 1, 2
  049f00c  lfs 1, 0(29)
  049f010  lbz 3, 188(31)
  049f014  cmpwi 3, 0
  049f018  fdivs 5, 1, 5
  049f01c  bt 2, 0x49f044
  049f020  lis 3, 74
  049f024  lis 4, 114
  049f028  lis 5, 114
  049f02c  addi 3, 3, -4724
  049f030  lfs 2, -3048(4)
  049f034  lfs 4, -3052(5)
  049f038  lfs 3, 12(3)
  049f03c  fmr 1, 3
  049f040  b 0x49f064
  049f044  lis 3, 74
  049f048  lis 4, 114
  049f04c  addi 3, 3, -4724
  049f050  lis 5, 114
  049f054  lfs 4, -3052(4)
  049f058  lfs 3, 16(3)
  049f05c  lfs 2, -3048(5)
  049f060  fmr 1, 3
  049f064  fmuls 3, 4, 3
  049f068  fmuls 1, 2, 1
  049f06c  fmuls 2, 3, 5
  049f070  fmuls 1, 1, 5
  049f074  b 0x49f088
  049f078  lis 3, 114
  049f07c  lis 4, 114
  049f080  lfs 2, -3052(3)
  049f084  lfs 1, -3048(4)
  049f088  lis 3, 74
  049f08c  lbz 4, 32(31)
  049f090  addi 3, 3, -4724
  049f094  cmpwi 4, 2
  049f098  lfs 31, 8(3)
  049f09c  bf 2, 0x49f0ac
  049f0a0  lis 3, 74
  049f0a4  addi 3, 3, -4724
  049f0a8  lfs 31, 0(3)
  049f0ac  fmr 3, 1
  049f0b0  fmr 4, 2
  049f0b4  addic 3, 30, 112
  049f0b8  fmr 1, 31
  049f0bc  addic 5, 30, 136
  049f0c0  fmr 2, 3
  049f0c4  bl 0x109c30
  049f0c8  nop
  049f0cc  lfs 1, 96(30)
  049f0d0  lfs 2, 100(30)
  049f0d4  lis 3, 165
  049f0d8  lfs 3, 112(30)
  049f0dc  fsubs 1, 1, 2
  049f0e0  lwz 4, 108(30)
  049f0e4  slwi 4, 4, 7
  049f0e8  lwz 3, 7128(3)
  049f0ec  addc 3, 3, 4
  049f0f0  clrldi 3, 3, 32
  049f0f4  fmadds 1, 1, 3, 2
  049f0f8  stfs 1, 24(31)
  049f0fc  lfs 1, 120(3)
  049f100  lfs 2, 132(30)
  049f104  bl 0x5025e0
  049f108  nop
  049f10c  lfs 2, 112(30)
  049f110  fmuls 1, 1, 2
  049f114  stfs 1, 72(31)
  049f118  lfs 2, 132(30)
  049f11c  bl 0x502578
  049f120  nop
  049f124  stfs 1, 72(31)
  049f128  lfs 1, 112(30)
  049f12c  lis 3, 74
  049f130  fsubs 1, 1, 31
  049f134  addi 3, 3, -4724
  049f138  lfs 2, 20(3)
  049f13c  fabs 1, 1
  049f140  fcmpu 0, 1, 2
  049f144  cror 6, 1, 2
  049f148  bt 6, 0x49f824
  049f14c  lis 3, 74
  049f150  li 4, 24
  049f154  vspltisw 2, -1
  049f158  addi 3, 3, -4724
  049f15c  lis 5, 114
  049f160  li 6, -3056
  049f164  vslw 2, 2, 2
  049f168  lvlx 3, 4, 3
  049f16c  li 3, 124
  049f170  vspltw 3, 3, 0
  049f174  lvlx 4, 6, 5
  049f178  lwz 4, 116(30)
  049f17c  vmaddfp 2, 4, 3, 2
  049f180  cmpwi 4, -1
  049f184  vctsxs 2, 2, 0
  049f188  vspltw 2, 2, 0
  049f18c  stvewx 2, 3, 30
  049f190  bt 2, 0x49f1d8
  049f194  sldi 3, 4, 7
  049f198  sldi 6, 4, 4
  049f19c  lis 5, 150
  049f1a0  subc 3, 3, 6
  049f1a4  addic 5, 5, 14312
  049f1a8  extsw 3, 3
  049f1ac  lwzx 5, 5, 3
  049f1b0  cmpw 5, 31
  049f1b4  bf 2, 0x49f1d8
  049f1b8  lis 5, 150
  049f1bc  addic 5, 5, 14292
  049f1c0  lbzx 3, 5, 3
  049f1c4  cmpwi 3, 0
  049f1c8  bt 2, 0x49f1d8
  049f1cc  extsw 3, 4
  049f1d0  bl 0x15cdb0
  049f1d4  nop
  049f1d8  li 3, -1
  049f1dc  lwz 5, 136(30)
  049f1e0  lis 4, 15011
  049f1e4  ori 4, 4, 55050
  049f1e8  stw 3, 116(30)
  049f1ec  srawi 3, 5, 31
  049f1f0  srwi 6, 3, 1
  049f1f4  xor 5, 6, 5
  049f1f8  subc 3, 5, 3
  049f1fc  cmpw 3, 4
  049f200  bf 1, 0x49f214
  049f204  lis 3, 15011
  049f208  ori 3, 3, 55050
  049f20c  stw 3, 136(30)
  049f210  b 0x49f230
  049f214  lis 4, -15012
  049f218  ori 4, 4, 10486
  049f21c  cmpw 3, 4
  049f220  bf 0, 0x49f230
  049f224  lis 3, -17757
  049f228  ori 3, 3, 55050
  049f22c  stw 3, 136(30)
  049f230  lbz 3, 188(31)
  049f234  cmpwi 3, 0
  049f238  bt 2, 0x49f26c
  049f23c  li 4, 2
  049f240  lbz 6, 32(31)
  049f244  li 3, 6
  049f248  li 5, 7
  049f24c  subc 4, 4, 6
  049f250  subc 3, 3, 5
  049f254  cntlzw 4, 4
  049f258  sldi 4, 4, 58
  049f25c  sradi 4, 4, 63
  049f260  and 3, 4, 3
  049f264  addc 3, 5, 3
  049f268  b 0x49f298
  049f26c  li 4, 2
  049f270  lbz 6, 32(31)
  049f274  li 3, 4
  049f278  li 5, 5
  049f27c  subc 4, 4, 6
  049f280  subc 3, 3, 5
  049f284  cntlzw 4, 4
  049f288  sldi 4, 4, 58
  049f28c  sradi 4, 4, 63
  049f290  and 3, 4, 3
  049f294  addc 3, 5, 3
  049f298  stb 3, 32(31)
  049f29c  b 0x49f824
  049f2a0  ori 3, 31, 0
  049f2a4  lwz 4, 116(30)
  049f2a8  extsw 4, 4
  049f2ac  bl 0x15cc7c
  049f2b0  nop
  049f2b4  cmpwi 3, 0
  049f2b8  bt 2, 0x49f2d4
  049f2bc  lwz 3, 116(30)
  049f2c0  extsw 3, 3
  049f2c4  bl 0x15cdb0
  049f2c8  nop
  049f2cc  li 3, -1
  049f2d0  stw 3, 116(30)
  049f2d4  lis 3, 74
  049f2d8  lis 4, 114
  049f2dc  addi 3, 3, -4724
  049f2e0  lfs 1, 28(3)
  049f2e4  lfs 2, -3056(4)
  049f2e8  lwz 3, 124(30)
  049f2ec  fmuls 1, 2, 1
  049f2f0  fctiwz 1, 1
  049f2f4  stfd 1, 208(1)
  049f2f8  lwz 4, 212(1)
  049f2fc  cmpw 3, 4
  049f300  bt 1, 0x49f348
  049f304  lis 3, 151
  049f308  lfs 1, 20(31)
  049f30c  addic 3, 3, -25376
  049f310  lfs 2, 132(3)
  049f314  lfs 3, 128(3)
  049f318  fsubs 1, 2, 1
  049f31c  lfs 2, 16(31)
  049f320  fsubs 2, 3, 2
  049f324  lis 3, 74
  049f328  addi 3, 3, -4724
  049f32c  fmuls 1, 1, 1
  049f330  fmadds 1, 2, 2, 1
  049f334  lfs 2, 32(3)
  049f338  fsqrts 1, 1
  049f33c  fcmpu 0, 1, 2
  049f340  cror 6, 0, 2
  049f344  bt 6, 0x49f354
  049f348  addic 3, 30, 124
  049f34c  bl 0x4fff60
  049f350  nop
  049f354  lis 29, 151
  049f358  addic 29, 29, -25376
  049f35c  lwz 3, 764(29)
  049f360  cmpw 3, 31
  049f364  bt 2, 0x49f3a8
  049f368  li 3, 1
  049f36c  bl 0x481d0
  049f370  nop
  049f374  lbz 3, 32(31)
  049f378  li 4, 7
  049f37c  li 5, 5
  049f380  subc 3, 4, 3
  049f384  li 4, 4
  049f388  cntlzw 3, 3
  049f38c  subc 5, 5, 4
  049f390  sldi 3, 3, 58
  049f394  sradi 3, 3, 63
  049f398  and 3, 3, 5
  049f39c  addc 3, 4, 3
  049f3a0  stb 3, 32(31)
  049f3a4  b 0x49f824
  049f3a8  lwz 3, 124(30)
  049f3ac  cmpwi 3, 0
  049f3b0  bf 2, 0x49f824
  049f3b4  lis 3, 74
  049f3b8  lfs 1, 128(30)
  049f3bc  addi 28, 3, -4724
  049f3c0  lis 3, 114
  049f3c4  lfs 2, 36(28)
  049f3c8  lfs 3, -3052(3)
  049f3cc  fmuls 2, 3, 2
  049f3d0  bl 0x502578
  049f3d4  nop
  049f3d8  lfs 2, 40(28)
  049f3dc  lfs 3, 44(28)
  049f3e0  fsubs 2, 2, 1
  049f3e4  fsubs 3, 3, 1
  049f3e8  lfs 5, 48(28)
  049f3ec  fsub 4, 1, 2
  049f3f0  fsel 2, 4, 2, 1
  049f3f4  lfs 4, 52(28)
  049f3f8  fsub 6, 3, 2
  049f3fc  fsel 2, 6, 3, 2
  049f400  lfs 3, 56(28)
  049f404  lfs 6, 60(28)
  049f408  lfs 8, 64(28)
  049f40c  lfs 9, 68(28)
  049f410  fmuls 7, 2, 2
  049f414  fmuls 10, 7, 2
  049f418  fmuls 11, 7, 10
  049f41c  fmadds 2, 10, 5, 2
  049f420  fmuls 10, 7, 11
  049f424  fmadds 2, 11, 4, 2
  049f428  lfs 4, 72(28)
  049f42c  stfs 1, 128(30)
  049f430  fmuls 5, 7, 10
  049f434  fmadds 2, 10, 3, 2
  049f438  fmadds 1, 5, 6, 2
  049f43c  fmsubs 1, 1, 8, 9
  049f440  fmuls 1, 1, 4
  049f444  bl 0x502758
  049f448  nop
  049f44c  li 4, 32
  049f450  li 5, 32
  049f454  subc 4, 3, 4
  049f458  subc 5, 5, 3
  049f45c  sradi 4, 4, 63
  049f460  li 6, 128
  049f464  and 4, 4, 5
  049f468  subc 6, 6, 3
  049f46c  lwz 5, 764(29)
  049f470  addc 4, 3, 4
  049f474  li 7, 128
  049f478  sradi 6, 6, 63
  049f47c  lhz 3, 782(29)
  049f480  subc 7, 7, 4
  049f484  lfs 4, 128(29)
  049f488  lis 8, -32768
  049f48c  lfs 3, 16(31)
  049f490  and 6, 6, 7
  049f494  lfs 2, 132(29)
  049f498  lfs 1, 20(31)
  049f49c  cmpw 5, 31
  049f4a0  addc 4, 4, 6
  049f4a4  slwi 7, 4, 8
  049f4a8  slwi 6, 4, 16
  049f4ac  or 4, 7, 4
  049f4b0  or 4, 4, 6
  049f4b4  or 4, 4, 8
  049f4b8  stw 4, 144(31)
  049f4bc  bf 2, 0x49f824
  049f4c0  cmpwi 3, 0
  049f4c4  bf 2, 0x49f824
  049f4c8  fsubs 1, 2, 1
  049f4cc  fsubs 2, 4, 3
  049f4d0  lis 3, 74
  049f4d4  addi 3, 3, -4724
  049f4d8  fmuls 1, 1, 1
  049f4dc  fmadds 1, 2, 2, 1
  049f4e0  lfs 2, 32(3)
  049f4e4  fsqrts 1, 1
  049f4e8  fcmpu 0, 1, 2
  049f4ec  cror 6, 1, 2
  049f4f0  bt 6, 0x49f824
  049f4f4  li 3, 1
  049f4f8  li 4, 0
  049f4fc  ori 5, 31, 0
  049f500  bl 0x15d12c
  049f504  nop
  049f508  lbz 3, 32(31)
  049f50c  li 4, 7
  049f510  lis 5, -32736
  049f514  subc 3, 4, 3
  049f518  ori 4, 5, 32800
  049f51c  cntlzw 3, 3
  049f520  li 5, 2
  049f524  li 6, 3
  049f528  sldi 3, 3, 58
  049f52c  stw 4, 144(31)
  049f530  subc 5, 5, 6
  049f534  sradi 3, 3, 63
  049f538  and 3, 3, 5
  049f53c  addc 3, 6, 3
  049f540  stb 3, 32(31)
  049f544  b 0x49f824
  049f548  lis 3, 74
  049f54c  lfs 1, 128(30)
  049f550  addi 29, 3, -4724
  049f554  lis 3, 114
  049f558  lfs 2, 36(29)
  049f55c  lfs 3, -3052(3)
  049f560  fmuls 2, 3, 2
  049f564  bl 0x502578
  049f568  nop
  049f56c  lfs 2, 40(29)
  049f570  lfs 3, 44(29)
  049f574  fsubs 2, 2, 1
  049f578  fsubs 3, 3, 1
  049f57c  fsub 4, 1, 2
  049f580  fsel 2, 4, 2, 1
  049f584  lfs 4, 48(29)
  049f588  lfs 5, 52(29)
  049f58c  fsub 6, 3, 2
  049f590  fsel 2, 6, 3, 2
  049f594  lfs 3, 56(29)
  049f598  lfs 6, 60(29)
  049f59c  lfs 8, 64(29)
  049f5a0  lfs 10, 68(29)
  049f5a4  fmuls 7, 2, 2
  049f5a8  fmuls 9, 7, 2
  049f5ac  fmuls 11, 7, 9
  049f5b0  fmadds 2, 9, 4, 2
  049f5b4  lfs 4, 72(29)
  049f5b8  stfs 1, 128(30)
  049f5bc  fmuls 9, 7, 11
  049f5c0  fmadds 2, 11, 5, 2
  049f5c4  fmuls 1, 7, 9
  049f5c8  fmadds 2, 9, 3, 2
  049f5cc  fmadds 1, 1, 6, 2
  049f5d0  fmsubs 1, 1, 8, 10
  049f5d4  fmuls 1, 1, 4
  049f5d8  bl 0x502758
  049f5dc  nop
  049f5e0  li 5, 32
  049f5e4  lfs 3, 16(31)
  049f5e8  li 4, 32
  049f5ec  lfs 2, 20(31)
  049f5f0  subc 5, 3, 5
  049f5f4  subc 4, 4, 3
  049f5f8  sradi 5, 5, 63
  049f5fc  li 6, 128
  049f600  and 4, 5, 4
  049f604  subc 6, 6, 3
  049f608  addc 4, 3, 4
  049f60c  li 3, 128
  049f610  sradi 5, 6, 63
  049f614  subc 3, 3, 4
  049f618  lis 8, -32768
  049f61c  and 5, 5, 3
  049f620  lbz 3, 32(31)
  049f624  addc 4, 4, 5
  049f628  lis 5, 151
  049f62c  slwi 7, 4, 8
  049f630  slwi 6, 4, 16
  049f634  or 7, 7, 4
  049f638  addic 4, 5, -25376
  049f63c  or 5, 7, 6
  049f640  or 5, 5, 8
  049f644  lwz 6, 764(4)
  049f648  lfs 1, 728(4)
  049f64c  cmpw 6, 31
  049f650  stw 5, 144(31)
  049f654  bf 2, 0x49f710
  049f658  lhz 5, 782(4)
  049f65c  cmpwi 5, 0
  049f660  bf 2, 0x49f710
  049f664  lfs 4, 132(4)
  049f668  lfs 5, 128(4)
  049f66c  fsubs 4, 4, 2
  049f670  fsubs 5, 5, 3
  049f674  lis 5, 74
  049f678  addi 5, 5, -4724
  049f67c  fmuls 4, 4, 4
  049f680  fmadds 4, 5, 5, 4
  049f684  lfs 5, 32(5)
  049f688  fsqrts 4, 4
  049f68c  fcmpu 0, 4, 5
  049f690  cror 6, 1, 2
  049f694  bt 6, 0x49f710
  049f698  li 3, 1
  049f69c  li 4, 0
  049f6a0  ori 5, 31, 0
  049f6a4  bl 0x15d12c
  049f6a8  nop
  049f6ac  lwz 3, 104(30)
  049f6b0  cmpwi 3, -1
  049f6b4  bt 2, 0x49f6c0
  049f6b8  ori 3, 31, 0
  049f6bc  bl 0x49eaa0
  049f6c0  li 3, 5
  049f6c4  lbz 6, 32(31)
  049f6c8  lis 4, -32736
  049f6cc  li 5, 2
  049f6d0  subc 3, 3, 6
  049f6d4  li 7, 3
  049f6d8  cntlzw 3, 3
  049f6dc  ori 4, 4, 32800
  049f6e0  sldi 3, 3, 58
  049f6e4  subc 5, 5, 7
  049f6e8  sradi 3, 3, 63
  049f6ec  stw 4, 144(31)
  049f6f0  li 6, 0
  049f6f4  and 3, 3, 5
  049f6f8  li 4, 1
  049f6fc  addc 3, 7, 3
  049f700  stb 4, 32(31)
  049f704  stb 3, 188(31)
  049f708  stw 6, 120(30)
  049f70c  b 0x49f824
  049f710  cmpwi 3, 4
  049f714  bf 2, 0x49f79c
  049f718  lfs 4, 132(4)
  049f71c  lfs 5, 100(30)
  049f720  lis 3, 74
  049f724  fsubs 2, 2, 4
  049f728  fsubs 1, 1, 5
  049f72c  lfs 4, 128(4)
  049f730  addi 3, 3, -4724
  049f734  fsubs 3, 3, 4
  049f738  lfs 4, 76(3)
  049f73c  fmuls 2, 2, 2
  049f740  fabs 1, 1
  049f744  fmadds 3, 3, 3, 2
  049f748  fcmpu 0, 1, 4
  049f74c  fsqrts 3, 3
  049f750  cror 6, 1, 2
  049f754  bt 6, 0x49f824
  049f758  lis 3, 74
  049f75c  addi 3, 3, -4724
  049f760  lfs 1, 80(3)
  049f764  fcmpu 0, 3, 1
  049f768  cror 6, 1, 2
  049f76c  bt 6, 0x49f824
  049f770  lis 3, 74
  049f774  addi 3, 3, -4724
  049f778  lfs 1, 84(3)
  049f77c  fcmpu 0, 3, 1
  049f780  cror 6, 0, 2
  049f784  bt 6, 0x49f824
  049f788  li 3, 3
  049f78c  li 4, 0
  049f790  stb 3, 32(31)
  049f794  stb 4, 188(31)
  049f798  b 0x49f824
  049f79c  cmpwi 3, 5
  049f7a0  bf 2, 0x49f824
  049f7a4  lfs 4, 132(4)
  049f7a8  lis 3, 74
  049f7ac  lfs 5, 96(30)
  049f7b0  fsubs 2, 2, 4
  049f7b4  fsubs 1, 1, 5
  049f7b8  lfs 4, 128(4)
  049f7bc  addi 3, 3, -4724
  049f7c0  fsubs 3, 3, 4
  049f7c4  lfs 4, 76(3)
  049f7c8  fmuls 2, 2, 2
  049f7cc  fabs 1, 1
  049f7d0  fmadds 3, 3, 3, 2
  049f7d4  fcmpu 0, 1, 4
  049f7d8  fsqrts 3, 3
  049f7dc  cror 6, 1, 2
  049f7e0  bt 6, 0x49f824
  049f7e4  lis 3, 74
  049f7e8  addi 3, 3, -4724
  049f7ec  lfs 1, 80(3)
  049f7f0  fcmpu 0, 3, 1
  049f7f4  cror 6, 1, 2
  049f7f8  bt 6, 0x49f824
  049f7fc  lis 3, 74
  049f800  addi 3, 3, -4724
  049f804  lfs 1, 84(3)
  049f808  fcmpu 0, 3, 1
  049f80c  cror 6, 0, 2
  049f810  bt 6, 0x49f824
  049f814  li 3, 2
  049f818  li 4, 0
  049f81c  stb 3, 32(31)
  049f820  stb 4, 188(31)
  049f824  lfs 1, 112(1)
  049f828  addic 3, 30, 32
  049f82c  lfs 2, 16(31)
  049f830  addic 4, 1, 112
  049f834  lfs 3, 116(1)
  049f838  addic 5, 1, 128
  049f83c  fadds 1, 1, 2
  049f840  addic 6, 31, 64
  049f844  lfs 2, 20(31)
  049f848  lfs 4, 120(1)
  049f84c  fadds 2, 3, 2
  049f850  lfs 3, 24(31)
  049f854  fadds 3, 4, 3
  049f858  stfs 1, 112(1)
  049f85c  stfs 2, 116(1)
  049f860  stfs 3, 120(1)
  049f864  bl 0x112900
  049f868  nop
  049f86c  ld 0, 288(1)
  049f870  mtlr 0
  049f874  lfd 31, 264(1)
  049f878  ld 27, 224(1)
  049f87c  ld 28, 232(1)
  049f880  ld 29, 240(1)
  049f884  ld 30, 248(1)
  049f888  ld 31, 256(1)
  049f88c  addi 1, 1, 272
  049f890  blr
