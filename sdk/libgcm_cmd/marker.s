# sdk/libgcm_cmd/marker.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

cellGcmSetPerfMonMarker:   # 0x50e998, 0x160 bytes
  050e998  stdu 1, -160(1)
  050e99c  mflr 0
  050e9a0  std 26, 112(1)
  050e9a4  std 27, 120(1)
  050e9a8  std 28, 128(1)
  050e9ac  std 29, 136(1)
  050e9b0  std 30, 144(1)
  050e9b4  std 31, 152(1)
  050e9b8  std 0, 176(1)
  050e9bc  lbz 0, 0(4)
  050e9c0  mr 29, 3
  050e9c4  mr 28, 4
  050e9c8  cmpwi 7, 0, 0
  050e9cc  li 26, 0
  050e9d0  li 31, 0
  050e9d4  li 30, 0
  050e9d8  li 27, 0
  050e9dc  bt 30, 0x50ea00
  050e9e0  lbzu 0, 1(4)
  050e9e4  cmpwi 7, 0, 0
  050e9e8  bf 30, 0x50e9e0
  050e9ec  sub 31, 4, 28
  050e9f0  addi 0, 31, 3
  050e9f4  mr 26, 31
  050e9f8  srwi 30, 0, 2
  050e9fc  slwi 27, 30, 2
  050ea00  lwz 8, 8(29)
  050ea04  clrldi 3, 3, 32
  050ea08  lwz 0, 4(29)
  050ea0c  add 9, 27, 8
  050ea10  addi 9, 9, 8
  050ea14  cmplw 7, 9, 0
  050ea18  bt 29, 0x50eac4
  050ea1c  addi 0, 30, 1
  050ea20  clrldi 11, 8, 32
  050ea24  slwi 0, 0, 18
  050ea28  clrlwi 10, 31, 30
  050ea2c  oris 0, 0, 16384
  050ea30  lis 9, 26741
  050ea34  cmpwi 7, 10, 0
  050ea38  ori 0, 0, 256
  050ea3c  ori 9, 9, 1
  050ea40  stw 0, 0(11)
  050ea44  stw 9, 4(11)
  050ea48  add 7, 8, 27
  050ea4c  bf 30, 0x50eab4
  050ea50  cmpwi 7, 26, 0
  050ea54  bt 30, 0x50ea84
  050ea58  li 10, 0
  050ea5c  rlwinm 9, 10, 0, 0, 29
  050ea60  addi 10, 10, 4
  050ea64  add 11, 9, 28
  050ea68  add 9, 8, 9
  050ea6c  clrldi 11, 11, 32
  050ea70  clrldi 9, 9, 32
  050ea74  cmplw 7, 31, 10
  050ea78  lwz 0, 0(11)
  050ea7c  stw 0, 8(9)
  050ea80  bt 29, 0x50ea5c
  050ea84  addi 0, 7, 8
  050ea88  stw 0, 8(29)
  050ea8c  ld 0, 176(1)
  050ea90  ld 26, 112(1)
  050ea94  ld 27, 120(1)
  050ea98  mtlr 0
  050ea9c  ld 28, 128(1)
  050eaa0  ld 29, 136(1)
  050eaa4  ld 30, 144(1)
  050eaa8  ld 31, 152(1)
  050eaac  addi 1, 1, 160
  050eab0  blr
  050eab4  clrldi 9, 7, 32
  050eab8  li 0, 0
  050eabc  stw 0, 4(9)
  050eac0  b 0x50ea50
  050eac4  lwz 9, 12(29)
  050eac8  addi 4, 30, 2
  050eacc  clrldi 4, 4, 32
  050ead0  lwz 0, 0(9)
  050ead4  std 2, 40(1)
  050ead8  mtctr 0
  050eadc  lwz 2, 4(9)
  050eae0  bctrl
  050eae4  ld 2, 40(1)
  050eae8  cmpwi 7, 3, 0
  050eaec  bf 30, 0x50ea8c
  050eaf0  lwz 8, 8(29)
  050eaf4  b 0x50ea1c

idol_draw::RsxCmd_DebugStr_Marker:   # 0x50eaf8, 0x164 bytes
  050eaf8  stdu 1, -160(1)
  050eafc  mflr 0
  050eb00  std 26, 112(1)
  050eb04  std 27, 120(1)
  050eb08  std 28, 128(1)
  050eb0c  std 29, 136(1)
  050eb10  std 30, 144(1)
  050eb14  std 31, 152(1)
  050eb18  std 0, 176(1)
  050eb1c  lbz 0, 0(4)
  050eb20  mr 29, 3
  050eb24  mr 28, 4
  050eb28  cmpwi 7, 0, 0
  050eb2c  li 26, 0
  050eb30  li 31, 0
  050eb34  li 30, 0
  050eb38  li 27, 0
  050eb3c  bt 30, 0x50eb60
  050eb40  lbzu 0, 1(4)
  050eb44  cmpwi 7, 0, 0
  050eb48  bf 30, 0x50eb40
  050eb4c  sub 31, 4, 28
  050eb50  addi 0, 31, 3
  050eb54  mr 26, 31
  050eb58  srwi 30, 0, 2
  050eb5c  slwi 27, 30, 2
  050eb60  lwz 8, 8(29)
  050eb64  clrldi 3, 3, 32
  050eb68  lwz 0, 4(29)
  050eb6c  add 9, 27, 8
  050eb70  addi 9, 9, 8
  050eb74  cmplw 7, 9, 0
  050eb78  bt 29, 0x50ec28
  050eb7c  addi 0, 30, 1
  050eb80  clrldi 11, 8, 32
  050eb84  slwi 0, 0, 18
  050eb88  clrlwi 10, 31, 30
  050eb8c  oris 0, 0, 16384
  050eb90  lis 9, 26741
  050eb94  cmpwi 7, 10, 0
  050eb98  ori 0, 0, 256
  050eb9c  ori 9, 9, 2
  050eba0  stw 0, 0(11)
  050eba4  stw 9, 4(11)
  050eba8  bf 30, 0x50ec14
  050ebac  cmpwi 7, 26, 0
  050ebb0  bt 30, 0x50ebe0
  050ebb4  li 10, 0
  050ebb8  rlwinm 9, 10, 0, 0, 29
  050ebbc  addi 10, 10, 4
  050ebc0  add 11, 9, 28
  050ebc4  add 9, 9, 8
  050ebc8  clrldi 11, 11, 32
  050ebcc  clrldi 9, 9, 32
  050ebd0  cmplw 7, 31, 10
  050ebd4  lwz 0, 0(11)
  050ebd8  stw 0, 8(9)
  050ebdc  bt 29, 0x50ebb8
  050ebe0  add 9, 27, 8
  050ebe4  addi 9, 9, 8
  050ebe8  stw 9, 8(29)
  050ebec  ld 0, 176(1)
  050ebf0  ld 26, 112(1)
  050ebf4  ld 27, 120(1)
  050ebf8  mtlr 0
  050ebfc  ld 28, 128(1)
  050ec00  ld 29, 136(1)
  050ec04  ld 30, 144(1)
  050ec08  ld 31, 152(1)
  050ec0c  addi 1, 1, 160
  050ec10  blr
  050ec14  add 9, 27, 8
  050ec18  li 0, 0
  050ec1c  clrldi 9, 9, 32
  050ec20  stw 0, 4(9)
  050ec24  b 0x50ebac
  050ec28  lwz 9, 12(29)
  050ec2c  addi 4, 30, 2
  050ec30  clrldi 4, 4, 32
  050ec34  lwz 0, 0(9)
  050ec38  std 2, 40(1)
  050ec3c  mtctr 0
  050ec40  lwz 2, 4(9)
  050ec44  bctrl
  050ec48  ld 2, 40(1)
  050ec4c  cmpwi 7, 3, 0
  050ec50  bf 30, 0x50ebec
  050ec54  lwz 8, 8(29)
  050ec58  b 0x50eb7c

idol_draw::RsxCmd_WritePass:   # 0x50ec5c, 0x90 bytes
  050ec5c  stdu 1, -128(1)
  050ec60  mflr 0
  050ec64  std 31, 120(1)
  050ec68  mr 31, 3
  050ec6c  std 0, 144(1)
  050ec70  li 4, 2
  050ec74  lwz 11, 8(31)
  050ec78  lwz 9, 4(31)
  050ec7c  addi 0, 11, 8
  050ec80  cmplw 7, 0, 9
  050ec84  bt 29, 0x50ecc0
  050ec88  clrldi 10, 11, 32
  050ec8c  lis 9, 16388
  050ec90  lis 0, 26741
  050ec94  ori 9, 9, 256
  050ec98  ori 0, 0, 3
  050ec9c  addi 11, 11, 8
  050eca0  stw 0, 4(10)
  050eca4  stw 11, 8(31)
  050eca8  stw 9, 0(10)
  050ecac  ld 0, 144(1)
  050ecb0  ld 31, 120(1)
  050ecb4  addi 1, 1, 128
  050ecb8  mtlr 0
  050ecbc  blr
  050ecc0  lwz 9, 12(31)
  050ecc4  lwz 0, 0(9)
  050ecc8  std 2, 40(1)
  050eccc  mtctr 0
  050ecd0  lwz 2, 4(9)
  050ecd4  bctrl
  050ecd8  ld 2, 40(1)
  050ecdc  cmpwi 7, 3, 0
  050ece0  bf 30, 0x50ecac
  050ece4  lwz 11, 8(31)
  050ece8  b 0x50ec88

cellGcmSetPerfMonMarkerUnsafe:   # 0x50ecec, 0xd0 bytes
  050ecec  lbz 0, 0(4)
  050ecf0  lis 11, 16388
  050ecf4  mr 5, 4
  050ecf8  cmpwi 7, 0, 0
  050ecfc  ori 11, 11, 256
  050ed00  li 12, 0
  050ed04  li 7, 0
  050ed08  li 10, 0
  050ed0c  li 6, 0
  050ed10  bt 30, 0x50ed44
  050ed14  lbzu 0, 1(4)
  050ed18  cmpwi 7, 0, 0
  050ed1c  bf 30, 0x50ed14
  050ed20  sub 7, 4, 5
  050ed24  addi 0, 7, 3
  050ed28  clrlwi 6, 7, 30
  050ed2c  srwi 10, 0, 2
  050ed30  mr 12, 7
  050ed34  addi 0, 10, 1
  050ed38  slwi 0, 0, 18
  050ed3c  oris 0, 0, 16384
  050ed40  ori 11, 0, 256
  050ed44  lwz 8, 8(3)
  050ed48  lis 0, 26741
  050ed4c  cmpwi 7, 6, 0
  050ed50  clrldi 9, 8, 32
  050ed54  ori 0, 0, 1
  050ed58  slwi 6, 10, 2
  050ed5c  stw 0, 4(9)
  050ed60  stw 11, 0(9)
  050ed64  bt 30, 0x50ed78
  050ed68  add 9, 6, 8
  050ed6c  li 0, 0
  050ed70  clrldi 9, 9, 32
  050ed74  stw 0, 4(9)
  050ed78  cmpwi 7, 12, 0
  050ed7c  bt 30, 0x50edac
  050ed80  li 10, 0
  050ed84  rlwinm 9, 10, 0, 0, 29
  050ed88  addi 10, 10, 4
  050ed8c  add 11, 9, 5
  050ed90  add 9, 9, 8
  050ed94  clrldi 11, 11, 32
  050ed98  clrldi 9, 9, 32
  050ed9c  cmplw 7, 7, 10
  050eda0  lwz 0, 0(11)
  050eda4  stw 0, 8(9)
  050eda8  bt 29, 0x50ed84
  050edac  add 9, 6, 8
  050edb0  addi 9, 9, 8
  050edb4  stw 9, 8(3)
  050edb8  blr

cellGcmSetPerfMonPushMarkerUnsafe:   # 0x50edbc, 0xd0 bytes
  050edbc  lbz 0, 0(4)
  050edc0  lis 11, 16388
  050edc4  mr 5, 4
  050edc8  cmpwi 7, 0, 0
  050edcc  ori 11, 11, 256
  050edd0  li 12, 0
  050edd4  li 7, 0
  050edd8  li 10, 0
  050eddc  li 6, 0
  050ede0  bt 30, 0x50ee14
  050ede4  lbzu 0, 1(4)
  050ede8  cmpwi 7, 0, 0
  050edec  bf 30, 0x50ede4
  050edf0  sub 7, 4, 5
  050edf4  addi 0, 7, 3
  050edf8  clrlwi 6, 7, 30
  050edfc  srwi 10, 0, 2
  050ee00  mr 12, 7
  050ee04  addi 0, 10, 1
  050ee08  slwi 0, 0, 18
  050ee0c  oris 0, 0, 16384
  050ee10  ori 11, 0, 256
  050ee14  lwz 8, 8(3)
  050ee18  lis 0, 26741
  050ee1c  cmpwi 7, 6, 0
  050ee20  clrldi 9, 8, 32
  050ee24  ori 0, 0, 2
  050ee28  slwi 6, 10, 2
  050ee2c  stw 0, 4(9)
  050ee30  stw 11, 0(9)
  050ee34  bt 30, 0x50ee48
  050ee38  add 9, 6, 8
  050ee3c  li 0, 0
  050ee40  clrldi 9, 9, 32
  050ee44  stw 0, 4(9)
  050ee48  cmpwi 7, 12, 0
  050ee4c  bt 30, 0x50ee7c
  050ee50  li 10, 0
  050ee54  rlwinm 9, 10, 0, 0, 29
  050ee58  addi 10, 10, 4
  050ee5c  add 11, 9, 5
  050ee60  add 9, 8, 9
  050ee64  clrldi 11, 11, 32
  050ee68  clrldi 9, 9, 32
  050ee6c  cmplw 7, 7, 10
  050ee70  lwz 0, 0(11)
  050ee74  stw 0, 8(9)
  050ee78  bt 29, 0x50ee54
  050ee7c  add 9, 8, 6
  050ee80  addi 9, 9, 8
  050ee84  stw 9, 8(3)
  050ee88  blr

FUN_0050ee8c:   # 0x50ee8c, 0x2c bytes
  050ee8c  lwz 9, 8(3)
  050ee90  lis 11, 16388
  050ee94  lis 0, 26741
  050ee98  clrldi 10, 9, 32
  050ee9c  ori 11, 11, 256
  050eea0  ori 0, 0, 3
  050eea4  addi 9, 9, 8
  050eea8  stw 0, 4(10)
  050eeac  stw 9, 8(3)
  050eeb0  stw 11, 0(10)
  050eeb4  blr

FUN_0050eeb8:   # 0x50eeb8, 0x40 bytes
  050eeb8  lbz 0, 0(4)
  050eebc  mr 9, 4
  050eec0  li 11, 0
  050eec4  cmpwi 7, 0, 0
  050eec8  bt 30, 0x50eee4
  050eecc  lbzu 0, 1(4)
  050eed0  cmpwi 7, 0, 0
  050eed4  bf 30, 0x50eecc
  050eed8  sub 9, 4, 9
  050eedc  addi 9, 9, 3
  050eee0  rlwinm 11, 9, 0, 0, 29
  050eee4  lwz 9, 8(3)
  050eee8  add 9, 11, 9
  050eeec  addi 9, 9, 8
  050eef0  stw 9, 8(3)
  050eef4  blr

FUN_0050eef8:   # 0x50eef8, 0x40 bytes
  050eef8  lbz 0, 0(4)
  050eefc  mr 9, 4
  050ef00  li 11, 0
  050ef04  cmpwi 7, 0, 0
  050ef08  bt 30, 0x50ef24
  050ef0c  lbzu 0, 1(4)
  050ef10  cmpwi 7, 0, 0
  050ef14  bf 30, 0x50ef0c
  050ef18  sub 9, 4, 9
  050ef1c  addi 9, 9, 3
  050ef20  rlwinm 11, 9, 0, 0, 29
  050ef24  lwz 9, 8(3)
  050ef28  add 9, 11, 9
  050ef2c  addi 9, 9, 8
  050ef30  stw 9, 8(3)
  050ef34  blr
