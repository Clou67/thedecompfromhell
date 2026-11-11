# game/update/moby167.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1671_002aa928:   # 0x2aa928, 0x6c bytes
  02aa928  stdu 1, -128(1)
  02aa92c  mflr 0
  02aa930  std 0, 144(1)
  02aa934  std 31, 120(1)
  02aa938  ori 31, 3, 0
  02aa93c  li 3, 167
  02aa940  bl 0xefa28
  02aa944  nop
  02aa948  cmpwi 3, 0
  02aa94c  bt 2, 0x2aa980
  02aa950  li 6, 126
  02aa954  lwz 7, 120(3)
  02aa958  li 4, 0
  02aa95c  li 5, 255
  02aa960  sth 6, 50(3)
  02aa964  stw 4, 0(7)
  02aa968  stw 31, 4(7)
  02aa96c  stw 4, 8(7)
  02aa970  stw 4, 12(7)
  02aa974  stb 5, 48(3)
  02aa978  stb 4, 49(3)
  02aa97c  stb 4, 32(3)
  02aa980  ld 0, 144(1)
  02aa984  mtlr 0
  02aa988  ld 31, 120(1)
  02aa98c  addi 1, 1, 128
  02aa990  blr

UpdateMoby_167:   # 0x2aa9c0, 0x5dc bytes
  02aa9c0  stdu 1, -176(1)
  02aa9c4  mflr 0
  02aa9c8  std 0, 192(1)
  02aa9cc  std 29, 152(1)
  02aa9d0  std 31, 168(1)
  02aa9d4  lis 29, 151
  02aa9d8  std 28, 144(1)
  02aa9dc  ori 31, 3, 0
  02aa9e0  addic 29, 29, -25376
  02aa9e4  std 30, 160(1)
  02aa9e8  li 28, 0
  02aa9ec  std 27, 136(1)
  02aa9f0  ori 30, 28, 0
  02aa9f4  lwz 27, 120(31)
  02aa9f8  lwz 3, 2728(29)
  02aa9fc  lwz 4, 4520(29)
  02aaa00  srawi 5, 3, 31
  02aaa04  lwz 9, 8324(29)
  02aaa08  cmpwi 4, 3
  02aaa0c  srwi 6, 5, 1
  02aaa10  lwz 8, 8320(29)
  02aaa14  lhz 7, 1054(29)
  02aaa18  cmpwi 7, 9, 13
  02aaa1c  xor 3, 6, 3
  02aaa20  lbz 4, 32(31)
  02aaa24  lwz 6, 408(29)
  02aaa28  subc 3, 3, 5
  02aaa2c  lhz 5, 782(29)
  02aaa30  cmpwi 1, 4, 1
  02aaa34  cmpwi 6, 4, 3
  02aaa38  bf 2, 0x2aab4c
  02aaa3c  bt 6, 0x2aaa44
  02aaa40  bf 26, 0x2aab4c
  02aaa44  bt 30, 0x2aaa90
  02aaa48  cmpwi 9, 14
  02aaa4c  bt 2, 0x2aaa90
  02aaa50  cmpwi 9, 12
  02aaa54  bt 2, 0x2aaa90
  02aaa58  cmpwi 9, 11
  02aaa5c  bt 2, 0x2aaa90
  02aaa60  cmpwi 9, 28
  02aaa64  bf 2, 0x2aaa9c
  02aaa68  lbz 10, 82(8)
  02aaa6c  lbz 8, 83(8)
  02aaa70  cmpw 10, 8
  02aaa74  bf 2, 0x2aaa9c
  02aaa78  lis 8, 16576
  02aaa7c  cmpw 3, 8
  02aaa80  bt 0, 0x2aaa9c
  02aaa84  lis 8, 16768
  02aaa88  cmpw 3, 8
  02aaa8c  bt 1, 0x2aaa9c
  02aaa90  cmpwi 7, 0
  02aaa94  bf 2, 0x2aaa9c
  02aaa98  li 28, 1
  02aaa9c  cmpwi 9, 16
  02aaaa0  bf 2, 0x2aaad4
  02aaaa4  lis 3, 43
  02aaaa8  lis 7, 114
  02aaaac  addi 3, 3, -22124
  02aaab0  lfs 1, 0(3)
  02aaab4  lfs 2, -3056(7)
  02aaab8  fmuls 1, 2, 1
  02aaabc  fctiwz 1, 1
  02aaac0  stfd 1, 112(1)
  02aaac4  lwz 3, 116(1)
  02aaac8  cmpw 6, 3
  02aaacc  bf 0, 0x2aaad4
  02aaad0  li 28, 1
  02aaad4  cmpwi 9, 34
  02aaad8  bf 2, 0x2aab38
  02aaadc  lis 3, 43
  02aaae0  lis 7, 114
  02aaae4  addi 3, 3, -22124
  02aaae8  lfs 2, 4(3)
  02aaaec  lfs 1, -3056(7)
  02aaaf0  fmuls 2, 1, 2
  02aaaf4  fctiwz 2, 2
  02aaaf8  stfd 2, 112(1)
  02aaafc  lwz 3, 116(1)
  02aab00  cmpw 6, 3
  02aab04  bt 0, 0x2aab34
  02aab08  lis 3, 43
  02aab0c  addi 3, 3, -22124
  02aab10  lfs 2, 8(3)
  02aab14  fmuls 1, 1, 2
  02aab18  fctiwz 1, 1
  02aab1c  stfd 1, 112(1)
  02aab20  lwz 3, 116(1)
  02aab24  cmpw 6, 3
  02aab28  bf 1, 0x2aab38
  02aab2c  cmpwi 5, 0
  02aab30  bt 2, 0x2aab38
  02aab34  li 28, 1
  02aab38  cmpwi 9, 8
  02aab3c  bt 2, 0x2aab48
  02aab40  cmpwi 9, 129
  02aab44  bf 2, 0x2aab4c
  02aab48  li 28, 1
  02aab4c  cmpwi 4, 4
  02aab50  bt 2, 0x2aaefc
  02aab54  bt 26, 0x2aada8
  02aab58  cmpwi 4, 2
  02aab5c  bt 2, 0x2aacf8
  02aab60  bt 6, 0x2aaba4
  02aab64  cmpwi 4, 0
  02aab68  bf 2, 0x2aaf78
  02aab6c  li 3, 1
  02aab70  lis 5, 43
  02aab74  li 4, 255
  02aab78  addi 5, 5, -22124
  02aab7c  stb 3, 32(31)
  02aab80  stb 4, 48(31)
  02aab84  lfs 1, 24(31)
  02aab88  lfs 2, 12(5)
  02aab8c  lhz 3, 52(31)
  02aab90  fadds 1, 1, 2
  02aab94  ori 3, 3, 1
  02aab98  sth 3, 52(31)
  02aab9c  stfs 1, 24(31)
  02aaba0  b 0x2aaf78
  02aaba4  li 3, 3
  02aaba8  bl 0x7f41c
  02aabac  nop
  02aabb0  cmpwi 3, 3
  02aabb4  bt 2, 0x2aabc8
  02aabb8  ori 3, 31, 0
  02aabbc  bl 0xefb38
  02aabc0  nop
  02aabc4  b 0x2aaf78
  02aabc8  cmpwi 28, 0
  02aabcc  bt 2, 0x2aaf78
  02aabd0  lis 3, 43
  02aabd4  vspltisw 2, -1
  02aabd8  li 4, 2
  02aabdc  addi 3, 3, -22124
  02aabe0  li 6, 16
  02aabe4  lis 5, 114
  02aabe8  stb 4, 32(31)
  02aabec  li 4, -3056
  02aabf0  vslw 2, 2, 2
  02aabf4  <unknown>
  02aabf8  vspltw 3, 3, 0
  02aabfc  <unknown>
  02aac00  li 4, 24
  02aac04  vmaddfp 2, 4, 3, 2
  02aac08  vspltisw 3, -1
  02aac0c  vspltisw 6, -1
  02aac10  vspltisw 8, -1
  02aac14  vslw 3, 3, 3
  02aac18  vslw 6, 6, 6
  02aac1c  vslw 8, 8, 8
  02aac20  vctsxs 2, 2, 0
  02aac24  li 5, 28
  02aac28  vspltisw 10, -1
  02aac2c  li 6, 52
  02aac30  li 7, 32
  02aac34  li 8, 56
  02aac38  li 9, 36
  02aac3c  vcfsx 4, 2, 0
  02aac40  vspltw 2, 2, 0
  02aac44  stvewx 2, 0, 27
  02aac48  <unknown>
  02aac4c  vspltw 2, 2, 0
  02aac50  vrefp 5, 4
  02aac54  li 4, 20
  02aac58  <unknown>
  02aac5c  li 4, 48
  02aac60  vspltw 9, 9, 0
  02aac64  vnmsubfp 7, 5, 4, 2
  02aac68  vmaddfp 3, 5, 7, 3
  02aac6c  vspltisw 5, -1
  02aac70  vslw 5, 5, 5
  02aac74  vnmsubfp 7, 3, 4, 2
  02aac78  vmaddfp 3, 3, 7, 6
  02aac7c  vslw 6, 10, 10
  02aac80  vnmsubfp 2, 3, 4, 2
  02aac84  vspltisw 4, -1
  02aac88  vmaddfp 2, 3, 2, 8
  02aac8c  vslw 3, 4, 4
  02aac90  vmaddfp 4, 2, 9, 5
  02aac94  vspltisw 5, -1
  02aac98  vslw 5, 5, 5
  02aac9c  vspltw 4, 4, 0
  02aaca0  stvewx 4, 4, 27
  02aaca4  <unknown>
  02aaca8  vspltw 4, 4, 0
  02aacac  li 4, 60
  02aacb0  vmaddfp 4, 2, 4, 6
  02aacb4  vspltw 4, 4, 0
  02aacb8  stvewx 4, 6, 27
  02aacbc  <unknown>
  02aacc0  vspltw 4, 4, 0
  02aacc4  vmaddfp 3, 2, 4, 3
  02aacc8  vspltw 3, 3, 0
  02aaccc  stvewx 3, 8, 27
  02aacd0  <unknown>
  02aacd4  vspltw 3, 3, 0
  02aacd8  vmaddfp 2, 2, 3, 5
  02aacdc  vspltw 2, 2, 0
  02aace0  stvewx 2, 4, 27
  02aace4  stw 30, 32(27)
  02aace8  stw 30, 36(27)
  02aacec  stw 30, 40(27)
  02aacf0  stw 30, 44(27)
  02aacf4  b 0x2aaf78
  02aacf8  lfs 1, 32(27)
  02aacfc  lis 3, 113
  02aad00  lfs 2, 48(27)
  02aad04  ori 4, 31, 0
  02aad08  lfs 3, 36(27)
  02aad0c  addic 3, 3, -21224
  02aad10  fadds 1, 1, 2
  02aad14  lfs 2, 52(27)
  02aad18  lfs 4, 40(27)
  02aad1c  fadds 2, 3, 2
  02aad20  lfs 3, 56(27)
  02aad24  lfs 5, 44(27)
  02aad28  fadds 3, 4, 3
  02aad2c  lfs 4, 60(27)
  02aad30  fadds 4, 5, 4
  02aad34  stfs 1, 32(27)
  02aad38  stfs 2, 36(27)
  02aad3c  stfs 3, 40(27)
  02aad40  stfs 4, 44(27)
  02aad44  lwz 5, 4480(29)
  02aad48  stw 5, 8(27)
  02aad4c  bl 0x6d7e0
  02aad50  nop
  02aad54  ori 3, 27, 0
  02aad58  bl 0x4fff60
  02aad5c  nop
  02aad60  cmpwi 3, 0
  02aad64  bt 2, 0x2aaf78
  02aad68  li 3, 3
  02aad6c  lis 4, 15692
  02aad70  lis 5, 15436
  02aad74  lis 7, 15948
  02aad78  ori 4, 4, 52429
  02aad7c  stb 3, 32(31)
  02aad80  lis 6, 15564
  02aad84  stw 30, 12(27)
  02aad88  ori 3, 5, 52429
  02aad8c  ori 5, 7, 52429
  02aad90  ori 6, 6, 52429
  02aad94  stw 4, 40(27)
  02aad98  stw 3, 32(27)
  02aad9c  stw 5, 36(27)
  02aada0  stw 6, 44(27)
  02aada4  b 0x2aaf78
  02aada8  lis 3, 113
  02aadac  lwz 5, 4480(29)
  02aadb0  ori 4, 31, 0
  02aadb4  addic 3, 3, -21224
  02aadb8  stw 5, 8(27)
  02aadbc  bl 0x6d7e0
  02aadc0  nop
  02aadc4  cmpwi 28, 0
  02aadc8  bf 2, 0x2aaee4
  02aadcc  lis 3, 43
  02aadd0  li 4, 4
  02aadd4  vspltisw 2, -1
  02aadd8  addi 3, 3, -22124
  02aaddc  li 5, 40
  02aade0  lis 6, 114
  02aade4  stb 4, 32(31)
  02aade8  li 4, -3056
  02aadec  vslw 2, 2, 2
  02aadf0  <unknown>
  02aadf4  vspltw 3, 3, 0
  02aadf8  <unknown>
  02aadfc  li 4, 24
  02aae00  vmaddfp 2, 4, 3, 2
  02aae04  vspltisw 3, -1
  02aae08  vspltisw 4, -1
  02aae0c  vspltisw 7, -1
  02aae10  vslw 3, 3, 3
  02aae14  vslw 4, 4, 4
  02aae18  vslw 7, 7, 7
  02aae1c  li 5, 28
  02aae20  vctsxs 2, 2, 0
  02aae24  li 6, 52
  02aae28  li 7, 32
  02aae2c  li 8, 56
  02aae30  li 9, 36
  02aae34  vcfsx 5, 2, 0
  02aae38  vspltw 2, 2, 0
  02aae3c  stvewx 2, 0, 27
  02aae40  <unknown>
  02aae44  vspltw 2, 2, 0
  02aae48  vrefp 6, 5
  02aae4c  li 4, 20
  02aae50  <unknown>
  02aae54  li 4, 48
  02aae58  vspltw 9, 9, 0
  02aae5c  vnmsubfp 8, 6, 5, 2
  02aae60  vmaddfp 3, 6, 8, 3
  02aae64  vspltisw 6, -1
  02aae68  vslw 6, 6, 6
  02aae6c  vnmsubfp 8, 3, 5, 2
  02aae70  vmaddfp 3, 3, 8, 4
  02aae74  vspltisw 4, -1
  02aae78  vslw 4, 4, 4
  02aae7c  vnmsubfp 2, 3, 5, 2
  02aae80  vmaddfp 2, 3, 2, 7
  02aae84  vspltisw 3, -1
  02aae88  vslw 3, 3, 3
  02aae8c  vmaddfp 5, 2, 9, 6
  02aae90  vspltw 5, 5, 0
  02aae94  stvewx 5, 4, 27
  02aae98  <unknown>
  02aae9c  vspltw 5, 5, 0
  02aaea0  li 4, 60
  02aaea4  vmaddfp 4, 2, 5, 4
  02aaea8  vspltisw 5, -1
  02aaeac  vslw 5, 5, 5
  02aaeb0  vspltw 4, 4, 0
  02aaeb4  stvewx 4, 6, 27
  02aaeb8  <unknown>
  02aaebc  vspltw 4, 4, 0
  02aaec0  vmaddfp 3, 2, 4, 3
  02aaec4  vspltw 3, 3, 0
  02aaec8  stvewx 3, 8, 27
  02aaecc  <unknown>
  02aaed0  vspltw 3, 3, 0
  02aaed4  vmaddfp 2, 2, 3, 5
  02aaed8  vspltw 2, 2, 0
  02aaedc  stvewx 2, 4, 27
  02aaee0  b 0x2aaf78
  02aaee4  lis 4, 15436
  02aaee8  ori 3, 31, 0
  02aaeec  ori 4, 4, 52429
  02aaef0  stw 4, 32(27)
  02aaef4  bl 0x2a9f18
  02aaef8  b 0x2aaf78
  02aaefc  ori 3, 27, 0
  02aaf00  bl 0x4fff60
  02aaf04  nop
  02aaf08  cmpwi 3, 0
  02aaf0c  bt 2, 0x2aaf1c
  02aaf10  li 3, 1
  02aaf14  stb 3, 32(31)
  02aaf18  b 0x2aaf78
  02aaf1c  lfs 1, 32(27)
  02aaf20  lis 3, 113
  02aaf24  lfs 2, 48(27)
  02aaf28  ori 4, 31, 0
  02aaf2c  lfs 3, 36(27)
  02aaf30  addic 3, 3, -21224
  02aaf34  fsubs 1, 1, 2
  02aaf38  lfs 2, 52(27)
  02aaf3c  lfs 4, 40(27)
  02aaf40  fsubs 2, 3, 2
  02aaf44  lfs 3, 56(27)
  02aaf48  lfs 5, 44(27)
  02aaf4c  fsubs 3, 4, 3
  02aaf50  lfs 4, 60(27)
  02aaf54  fsubs 4, 5, 4
  02aaf58  stfs 1, 32(27)
  02aaf5c  stfs 2, 36(27)
  02aaf60  stfs 3, 40(27)
  02aaf64  stfs 4, 44(27)
  02aaf68  lwz 5, 4480(29)
  02aaf6c  stw 5, 8(27)
  02aaf70  bl 0x6d7e0
  02aaf74  nop
  02aaf78  ld 0, 192(1)
  02aaf7c  mtlr 0
  02aaf80  ld 27, 136(1)
  02aaf84  ld 28, 144(1)
  02aaf88  ld 29, 152(1)
  02aaf8c  ld 30, 160(1)
  02aaf90  ld 31, 168(1)
  02aaf94  addi 1, 1, 176
  02aaf98  blr
