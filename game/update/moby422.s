# game/update/moby422.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M422_0036887c:   # 0x36887c, 0x14 bytes
  036887c  lis 3, 132
  0368880  lis 4, 1
  0368884  addic 3, 3, 3956
  0368888  stw 4, 72(3)
  036888c  blr

UpdateMoby_422:   # 0x3688a8, 0x3dc bytes
  03688a8  stdu 1, -144(1)
  03688ac  mflr 0
  03688b0  std 0, 160(1)
  03688b4  std 30, 128(1)
  03688b8  lwz 30, 120(3)
  03688bc  li 4, -1
  03688c0  lwz 3, 12(30)
  03688c4  std 31, 136(1)
  03688c8  extsw 3, 3
  03688cc  bl 0x104214
  03688d0  nop
  03688d4  cmpwi 3, 0
  03688d8  bf 2, 0x3688e8
  03688dc  li 3, 20
  03688e0  bl 0x11b728
  03688e4  nop
  03688e8  lis 31, 161
  03688ec  addic 31, 31, 12
  03688f0  lhz 4, 872(31)
  03688f4  cmpwi 4, 0
  03688f8  bf 2, 0x3689fc
  03688fc  lis 3, 151
  0368900  addic 3, 3, -25376
  0368904  lwz 5, 8324(3)
  0368908  cmpwi 5, 129
  036890c  bf 2, 0x368928
  0368910  lis 5, 0
  0368914  ori 5, 5, 65535
  0368918  cmpw 4, 5
  036891c  bf 0, 0x368928
  0368920  addic 4, 4, 1
  0368924  sth 4, 872(31)
  0368928  lis 4, 161
  036892c  lis 5, 55
  0368930  lwz 4, -2344(4)
  0368934  extsw 4, 4
  0368938  std 4, 112(1)
  036893c  addi 4, 5, -30576
  0368940  lis 5, 114
  0368944  lfs 1, 0(4)
  0368948  lfs 2, -3056(5)
  036894c  lfd 3, 112(1)
  0368950  fcfid 3, 3
  0368954  lis 4, 6990
  0368958  lhz 6, 874(31)
  036895c  ori 5, 4, 33205
  0368960  frsp 3, 3
  0368964  fadds 1, 3, 1
  0368968  fmuls 1, 2, 1
  036896c  fctiwz 1, 1
  0368970  stfd 1, 112(1)
  0368974  lwz 4, 116(1)
  0368978  mulhw 5, 5, 4
  036897c  srawi 5, 5, 6
  0368980  srwi 7, 5, 31
  0368984  addc 5, 5, 7
  0368988  cmpw 5, 6
  036898c  bf 1, 0x3689ac
  0368990  lis 5, 6990
  0368994  ori 5, 5, 33205
  0368998  mulhw 4, 5, 4
  036899c  srawi 4, 4, 6
  03689a0  srwi 5, 4, 31
  03689a4  addc 4, 4, 5
  03689a8  sth 4, 874(31)
  03689ac  lis 4, 151
  03689b0  lwz 7, 876(31)
  03689b4  li 5, 1
  03689b8  lis 6, -32768
  03689bc  addic 3, 3, 128
  03689c0  lwz 4, -25488(4)
  03689c4  slw 4, 5, 4
  03689c8  or 4, 7, 4
  03689cc  or 4, 4, 6
  03689d0  stw 4, 876(31)
  03689d4  lwz 4, 0(30)
  03689d8  extsw 4, 4
  03689dc  bl 0x110b70
  03689e0  nop
  03689e4  cmpwi 3, 0
  03689e8  bt 2, 0x3689fc
  03689ec  li 3, 12003
  03689f0  li 4, 109
  03689f4  bl 0x7b310
  03689f8  nop
  03689fc  lhz 3, 880(31)
  0368a00  cmpwi 3, 0
  0368a04  cmpwi 1, 3, 2
  0368a08  bt 2, 0x368a7c
  0368a0c  bf 4, 0x368c3c
  0368a10  lis 3, 161
  0368a14  lis 4, 55
  0368a18  lwz 3, -2344(3)
  0368a1c  extsw 3, 3
  0368a20  std 3, 112(1)
  0368a24  addi 3, 4, -30576
  0368a28  lis 4, 114
  0368a2c  lfs 1, 0(3)
  0368a30  lfs 2, -3056(4)
  0368a34  lfd 3, 112(1)
  0368a38  fcfid 3, 3
  0368a3c  lhz 4, 882(31)
  0368a40  mulli 4, 4, 600
  0368a44  frsp 3, 3
  0368a48  fadds 1, 3, 1
  0368a4c  fmuls 1, 2, 1
  0368a50  fctiwz 1, 1
  0368a54  stfd 1, 112(1)
  0368a58  lfs 1, 4(3)
  0368a5c  lwz 3, 116(1)
  0368a60  fmuls 1, 2, 1
  0368a64  subc 3, 3, 4
  0368a68  fctiwz 1, 1
  0368a6c  stfd 1, 112(1)
  0368a70  lwz 4, 116(1)
  0368a74  cmpw 3, 4
  0368a78  bf 1, 0x368c3c
  0368a7c  lis 6, 151
  0368a80  addic 6, 6, -25376
  0368a84  lwz 3, 8324(6)
  0368a88  cmpwi 3, 129
  0368a8c  bf 2, 0x368c3c
  0368a90  lis 4, 150
  0368a94  lwz 5, 4(30)
  0368a98  li 3, 0
  0368a9c  addic 7, 4, 19008
  0368aa0  addic 5, 5, 1
  0368aa4  ori 4, 3, 0
  0368aa8  stw 5, 4(30)
  0368aac  lwz 7, 160(7)
  0368ab0  clrlwi 7, 7, 30
  0368ab4  cmpwi 7, 0
  0368ab8  bt 2, 0x368ae8
  0368abc  lwz 6, 8860(6)
  0368ac0  lis 7, 16025
  0368ac4  srawi 8, 6, 31
  0368ac8  ori 7, 7, 39322
  0368acc  srwi 9, 8, 1
  0368ad0  xor 6, 9, 6
  0368ad4  subc 6, 6, 8
  0368ad8  cmpw 6, 7
  0368adc  bf 1, 0x368ae8
  0368ae0  lwz 3, 8(30)
  0368ae4  addic 3, 3, 1
  0368ae8  lis 6, 55
  0368aec  ori 7, 3, 0
  0368af0  addi 3, 6, -30576
  0368af4  lis 6, 114
  0368af8  stw 7, 8(30)
  0368afc  lfs 2, 8(3)
  0368b00  lfs 1, -3056(6)
  0368b04  lhz 3, 880(31)
  0368b08  fmuls 2, 1, 2
  0368b0c  fctiwz 2, 2
  0368b10  stfd 2, 112(1)
  0368b14  lwz 6, 116(1)
  0368b18  cmpw 7, 6
  0368b1c  bf 1, 0x368be8
  0368b20  lis 3, 0
  0368b24  ori 5, 3, 65535
  0368b28  lhz 3, 880(31)
  0368b2c  stw 4, 4(30)
  0368b30  cmpw 3, 5
  0368b34  lhz 5, 882(31)
  0368b38  lwz 4, 884(31)
  0368b3c  bf 0, 0x368b48
  0368b40  addic 3, 3, 1
  0368b44  sth 3, 880(31)
  0368b48  lis 6, 161
  0368b4c  lis 7, 55
  0368b50  lwz 6, -2344(6)
  0368b54  extsw 6, 6
  0368b58  std 6, 112(1)
  0368b5c  addi 6, 7, -30576
  0368b60  lfs 2, 0(6)
  0368b64  lfd 3, 112(1)
  0368b68  fcfid 3, 3
  0368b6c  ori 6, 5, 0
  0368b70  lis 5, 6990
  0368b74  ori 7, 5, 33205
  0368b78  frsp 3, 3
  0368b7c  fadds 2, 3, 2
  0368b80  fmuls 2, 1, 2
  0368b84  fctiwz 2, 2
  0368b88  stfd 2, 112(1)
  0368b8c  lwz 5, 116(1)
  0368b90  mulhw 7, 7, 5
  0368b94  srawi 7, 7, 6
  0368b98  srwi 8, 7, 31
  0368b9c  addc 7, 7, 8
  0368ba0  cmpw 7, 6
  0368ba4  bf 1, 0x368bc4
  0368ba8  lis 6, 6990
  0368bac  ori 6, 6, 33205
  0368bb0  mulhw 5, 6, 5
  0368bb4  srawi 5, 5, 6
  0368bb8  srwi 6, 5, 31
  0368bbc  addc 5, 5, 6
  0368bc0  sth 5, 882(31)
  0368bc4  lis 5, 151
  0368bc8  li 6, 1
  0368bcc  lis 7, -32768
  0368bd0  lwz 5, -25488(5)
  0368bd4  slw 5, 6, 5
  0368bd8  or 4, 4, 5
  0368bdc  or 4, 4, 7
  0368be0  stw 4, 884(31)
  0368be4  lwz 5, 4(30)
  0368be8  lis 4, 55
  0368bec  addi 4, 4, -30576
  0368bf0  clrlwi 3, 3, 16
  0368bf4  lfs 2, 12(4)
  0368bf8  fmuls 2, 1, 2
  0368bfc  fctiwz 2, 2
  0368c00  stfd 2, 112(1)
  0368c04  lfs 2, 16(4)
  0368c08  lwz 4, 116(1)
  0368c0c  fmuls 1, 1, 2
  0368c10  fctiwz 1, 1
  0368c14  stfd 1, 112(1)
  0368c18  lwz 6, 116(1)
  0368c1c  mullw 3, 3, 6
  0368c20  addc 3, 3, 4
  0368c24  cmpw 5, 3
  0368c28  bf 1, 0x368c3c
  0368c2c  li 3, 12004
  0368c30  li 4, 110
  0368c34  bl 0x7b310
  0368c38  nop
  0368c3c  lis 3, 151
  0368c40  addic 3, 3, -16064
  0368c44  lbz 3, 4(3)
  0368c48  cmpwi 3, 0
  0368c4c  bt 2, 0x368c6c
  0368c50  lhz 3, 496(31)
  0368c54  cmpwi 3, 0
  0368c58  bf 2, 0x368c6c
  0368c5c  li 3, 12000
  0368c60  li 4, 62
  0368c64  bl 0x7b310
  0368c68  nop
  0368c6c  ld 0, 160(1)
  0368c70  mtlr 0
  0368c74  ld 30, 128(1)
  0368c78  ld 31, 136(1)
  0368c7c  addi 1, 1, 144
  0368c80  blr
