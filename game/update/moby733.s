# game/update/moby733.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M733_00437780:   # 0x437780, 0x208 bytes
  0437780  stdu 1, -160(1)
  0437784  mflr 0
  0437788  std 0, 176(1)
  043778c  stfd 30, 144(1)
  0437790  stfd 31, 152(1)
  0437794  std 30, 128(1)
  0437798  std 31, 136(1)
  043779c  lwz 30, 120(3)
  04377a0  ori 31, 3, 0
  04377a4  lwz 3, 16(30)
  04377a8  lfs 1, 16(30)
  04377ac  std 29, 120(1)
  04377b0  std 28, 112(1)
  04377b4  cmpwi 3, 0
  04377b8  bt 0, 0x437960
  04377bc  lis 3, 149
  04377c0  lfs 2, 20(31)
  04377c4  addic 3, 3, 5056
  04377c8  lis 4, 114
  04377cc  lfs 3, 324(3)
  04377d0  lfs 4, 320(3)
  04377d4  fsubs 2, 3, 2
  04377d8  lfs 3, 16(31)
  04377dc  fsubs 3, 4, 3
  04377e0  lfs 4, 328(3)
  04377e4  lfs 5, 24(31)
  04377e8  fsubs 4, 4, 5
  04377ec  lis 3, 134
  04377f0  fmuls 2, 2, 2
  04377f4  fmadds 2, 3, 3, 2
  04377f8  fmadds 31, 4, 4, 2
  04377fc  lfs 2, -24056(3)
  0437800  lfs 3, -3052(4)
  0437804  fmadds 1, 2, 3, 1
  0437808  fsqrts 31, 31
  043780c  stfs 1, 16(30)
  0437810  fcmpu 0, 31, 1
  0437814  cror 6, 1, 2
  0437818  bt 6, 0x437960
  043781c  lis 3, 151
  0437820  addic 3, 3, -25376
  0437824  lwz 3, 8324(3)
  0437828  cmpwi 3, 114
  043782c  bt 2, 0x437960
  0437830  li 3, 0
  0437834  li 4, 16
  0437838  ori 5, 31, 0
  043783c  bl 0x15d12c
  0437840  nop
  0437844  ori 29, 3, 0
  0437848  li 4, 16
  043784c  li 3, 1
  0437850  ori 5, 31, 0
  0437854  bl 0x15d12c
  0437858  nop
  043785c  lis 4, 269
  0437860  lis 5, 134
  0437864  lfs 1, -13044(4)
  0437868  lfs 2, -24048(5)
  043786c  fsubs 3, 31, 1
  0437870  fsubs 1, 2, 1
  0437874  lis 4, 67
  0437878  ori 31, 3, 0
  043787c  addi 4, 4, 30584
  0437880  lfs 2, 0(4)
  0437884  fdivs 1, 3, 1
  0437888  lfs 3, 4(4)
  043788c  fmr 30, 3
  0437890  fsubs 1, 2, 1
  0437894  fmuls 1, 1, 30
  0437898  bl 0x502758
  043789c  nop
  04378a0  lis 4, 134
  04378a4  lis 5, 269
  04378a8  ori 28, 3, 0
  04378ac  lfs 1, -24044(4)
  04378b0  lfs 2, -13040(5)
  04378b4  fsubs 3, 31, 1
  04378b8  fsubs 1, 2, 1
  04378bc  fdivs 1, 3, 1
  04378c0  fmuls 1, 1, 30
  04378c4  bl 0x502758
  04378c8  nop
  04378cc  li 4, 0
  04378d0  li 6, 0
  04378d4  subc 4, 28, 4
  04378d8  subc 6, 6, 28
  04378dc  sradi 4, 4, 63
  04378e0  li 5, 0
  04378e4  and 4, 4, 6
  04378e8  subc 5, 3, 5
  04378ec  li 6, 1024
  04378f0  li 7, 0
  04378f4  sradi 5, 5, 63
  04378f8  addc 4, 28, 4
  04378fc  subc 6, 6, 28
  0437900  subc 7, 7, 3
  0437904  li 9, 1024
  0437908  li 8, 1024
  043790c  sradi 6, 6, 63
  0437910  subc 9, 9, 4
  0437914  and 5, 5, 7
  0437918  subc 8, 8, 3
  043791c  and 6, 6, 9
  0437920  addc 5, 3, 5
  0437924  li 3, 1024
  0437928  addc 4, 4, 6
  043792c  sradi 7, 8, 63
  0437930  subc 6, 3, 5
  0437934  ori 3, 29, 0
  0437938  and 6, 7, 6
  043793c  addc 29, 5, 6
  0437940  bl 0x15d710
  0437944  nop
  0437948  ori 3, 31, 0
  043794c  ori 4, 29, 0
  0437950  bl 0x15d710
  0437954  nop
  0437958  lis 3, -16512
  043795c  stw 3, 16(30)
  0437960  ld 0, 176(1)
  0437964  mtlr 0
  0437968  lfd 30, 144(1)
  043796c  lfd 31, 152(1)
  0437970  ld 28, 112(1)
  0437974  ld 29, 120(1)
  0437978  ld 30, 128(1)
  043797c  ld 31, 136(1)
  0437980  addi 1, 1, 160
  0437984  blr

UpdateMoby_733:   # 0x4379b8, 0x43c bytes
  04379b8  stdu 1, -256(1)
  04379bc  mflr 0
  04379c0  std 0, 272(1)
  04379c4  stfd 31, 248(1)
  04379c8  std 31, 240(1)
  04379cc  std 30, 232(1)
  04379d0  ori 31, 3, 0
  04379d4  std 29, 224(1)
  04379d8  lwz 30, 120(31)
  04379dc  bl 0x437780
  04379e0  lbz 3, 32(31)
  04379e4  cmpwi 3, 0
  04379e8  bt 1, 0x4379f8
  04379ec  cmpwi 3, -1
  04379f0  bf 1, 0x437dd4
  04379f4  b 0x437a0c
  04379f8  cmpwi 3, 1
  04379fc  bf 1, 0x437a5c
  0437a00  cmpwi 3, 2
  0437a04  bf 1, 0x437d10
  0437a08  b 0x437dd4
  0437a0c  addic 3, 30, 8
  0437a10  bl 0x4fffb4
  0437a14  nop
  0437a18  cmpwi 3, 0
  0437a1c  bt 2, 0x437dd4
  0437a20  lis 3, 67
  0437a24  addi 3, 3, 31112
  0437a28  lfs 1, 0(3)
  0437a2c  lfs 2, 4(3)
  0437a30  bl 0xfcbe8
  0437a34  nop
  0437a38  li 6, 1
  0437a3c  stfs 1, 4(30)
  0437a40  li 3, 4
  0437a44  li 4, 0
  0437a48  ori 5, 31, 0
  0437a4c  stb 6, 32(31)
  0437a50  bl 0x15d12c
  0437a54  nop
  0437a58  b 0x437dd4
  0437a5c  lis 3, 67
  0437a60  lis 4, 134
  0437a64  addi 3, 3, 31112
  0437a68  lis 5, 114
  0437a6c  lis 6, 114
  0437a70  lfs 31, 8(3)
  0437a74  lfs 2, -24072(4)
  0437a78  addic 3, 31, 72
  0437a7c  lis 4, 134
  0437a80  lfs 3, -3048(5)
  0437a84  fmuls 2, 2, 31
  0437a88  lfs 1, 4(30)
  0437a8c  ori 5, 30, 0
  0437a90  lfs 4, -24068(4)
  0437a94  lfs 5, -3052(6)
  0437a98  fmuls 4, 4, 31
  0437a9c  fmuls 2, 2, 3
  0437aa0  fmuls 4, 4, 5
  0437aa4  fmr 3, 2
  0437aa8  bl 0x10a2e0
  0437aac  nop
  0437ab0  lhz 4, 12(30)
  0437ab4  ori 3, 31, 0
  0437ab8  extsh 4, 4
  0437abc  bl 0x15cc7c
  0437ac0  nop
  0437ac4  cmpwi 3, 0
  0437ac8  bf 2, 0x437ae4
  0437acc  li 3, 2
  0437ad0  li 4, 4
  0437ad4  ori 5, 31, 0
  0437ad8  bl 0x15d12c
  0437adc  nop
  0437ae0  sth 3, 12(30)
  0437ae4  lfs 1, 72(31)
  0437ae8  lfs 2, 4(30)
  0437aec  bl 0x5026a0
  0437af0  nop
  0437af4  fcmpu 0, 1, 31
  0437af8  cror 6, 1, 2
  0437afc  bt 6, 0x437dd4
  0437b00  lis 3, 67
  0437b04  lwz 4, 0(30)
  0437b08  addi 3, 3, 31112
  0437b0c  cmpwi 4, 0
  0437b10  lfs 31, 0(3)
  0437b14  bf 2, 0x437dd4
  0437b18  lhz 4, 12(30)
  0437b1c  extsh 4, 4
  0437b20  cmpwi 4, -1
  0437b24  bt 2, 0x437b68
  0437b28  lis 3, 150
  0437b2c  sldi 5, 4, 7
  0437b30  sldi 6, 4, 4
  0437b34  addic 7, 3, 14312
  0437b38  subc 3, 5, 6
  0437b3c  lwzx 5, 7, 3
  0437b40  cmpw 5, 31
  0437b44  bf 2, 0x437b68
  0437b48  lis 5, 150
  0437b4c  addic 5, 5, 14292
  0437b50  lbzx 3, 5, 3
  0437b54  cmpwi 3, 0
  0437b58  bt 2, 0x437b68
  0437b5c  ori 3, 4, 0
  0437b60  bl 0x15cdb0
  0437b64  nop
  0437b68  li 6, -1
  0437b6c  li 3, 3
  0437b70  li 4, 0
  0437b74  ori 5, 31, 0
  0437b78  sth 6, 12(30)
  0437b7c  bl 0x15d12c
  0437b80  nop
  0437b84  lis 3, 134
  0437b88  li 4, 2
  0437b8c  lfs 1, -24052(3)
  0437b90  stfs 1, 16(30)
  0437b94  lbz 3, 83(31)
  0437b98  stb 4, 32(31)
  0437b9c  cmpwi 3, 1
  0437ba0  bt 2, 0x437bbc
  0437ba4  ori 3, 31, 0
  0437ba8  li 4, 1
  0437bac  li 5, 0
  0437bb0  li 6, 1
  0437bb4  bl 0xfddc0
  0437bb8  nop
  0437bbc  addic 30, 1, 208
  0437bc0  ori 3, 31, 0
  0437bc4  li 4, 1
  0437bc8  ori 5, 30, 0
  0437bcc  bl 0xf1114
  0437bd0  nop
  0437bd4  addic 29, 1, 192
  0437bd8  ori 3, 31, 0
  0437bdc  li 4, 0
  0437be0  ori 5, 29, 0
  0437be4  bl 0xf1114
  0437be8  nop
  0437bec  lfs 1, 212(1)
  0437bf0  lfs 2, 196(1)
  0437bf4  lfs 3, 208(1)
  0437bf8  fsubs 4, 1, 2
  0437bfc  lfs 1, 192(1)
  0437c00  fsubs 3, 3, 1
  0437c04  lfs 1, 216(1)
  0437c08  lfs 2, 200(1)
  0437c0c  fsubs 5, 1, 2
  0437c10  lis 3, 134
  0437c14  fmuls 1, 4, 4
  0437c18  lis 4, 114
  0437c1c  lfs 2, -24076(3)
  0437c20  li 12, -1
  0437c24  li 11, 0
  0437c28  fmadds 1, 3, 3, 1
  0437c2c  li 6, 1
  0437c30  lis 3, 67
  0437c34  ori 5, 30, 0
  0437c38  fmadds 1, 5, 5, 1
  0437c3c  addi 7, 3, 31112
  0437c40  ori 3, 31, 0
  0437c44  li 8, 0
  0437c48  fsqrts 6, 1
  0437c4c  lfs 1, -3052(4)
  0437c50  stfs 3, 192(1)
  0437c54  stfs 4, 196(1)
  0437c58  lfs 7, 220(1)
  0437c5c  stfs 5, 200(1)
  0437c60  stfs 7, 204(1)
  0437c64  std 12, 144(1)
  0437c68  ori 4, 29, 0
  0437c6c  std 11, 160(1)
  0437c70  li 9, 6
  0437c74  std 6, 168(1)
  0437c78  li 10, 32
  0437c7c  std 12, 176(1)
  0437c80  std 11, 184(1)
  0437c84  fmuls 7, 2, 1
  0437c88  fmr 1, 31
  0437c8c  fmr 2, 31
  0437c90  fdivs 7, 7, 6
  0437c94  fsub 8, 31, 6
  0437c98  fsub 9, 31, 6
  0437c9c  fsub 10, 31, 6
  0437ca0  fsub 11, 6, 31
  0437ca4  fsub 12, 6, 31
  0437ca8  fsub 6, 6, 31
  0437cac  fmuls 3, 3, 7
  0437cb0  fmuls 4, 4, 7
  0437cb4  fmuls 5, 5, 7
  0437cb8  fsel 7, 8, 31, 3
  0437cbc  fsel 8, 9, 31, 4
  0437cc0  fsel 9, 10, 31, 5
  0437cc4  fsel 3, 11, 7, 3
  0437cc8  fsel 4, 12, 8, 4
  0437ccc  fsel 5, 6, 9, 5
  0437cd0  stfs 3, 192(1)
  0437cd4  stfs 4, 196(1)
  0437cd8  stfs 5, 200(1)
  0437cdc  lfs 3, 12(7)
  0437ce0  lfs 4, 16(7)
  0437ce4  lfs 5, 20(7)
  0437ce8  lfs 6, 24(7)
  0437cec  lfs 7, 28(7)
  0437cf0  bl 0x10e030
  0437cf4  nop
  0437cf8  ori 3, 31, 0
  0437cfc  ori 4, 30, 0
  0437d00  ori 5, 29, 0
  0437d04  bl 0x1ffaf0
  0437d08  nop
  0437d0c  b 0x437dd4
  0437d10  lhz 4, 52(31)
  0437d14  ori 3, 31, 0
  0437d18  ori 4, 4, 16
  0437d1c  sth 4, 52(31)
  0437d20  bl 0xefe40
  0437d24  nop
  0437d28  lis 3, 67
  0437d2c  lis 4, 134
  0437d30  addi 3, 3, 31112
  0437d34  lis 5, 134
  0437d38  lfs 2, 32(3)
  0437d3c  lfs 3, 20(3)
  0437d40  fmuls 1, 1, 2
  0437d44  lwz 3, -24064(4)
  0437d48  lwz 4, -24060(5)
  0437d4c  extsw 3, 3
  0437d50  extsw 4, 4
  0437d54  fsub 2, 3, 1
  0437d58  fsel 1, 2, 1, 3
  0437d5c  bl 0x5027bc
  0437d60  nop
  0437d64  lbz 4, 112(31)
  0437d68  stw 3, 144(31)
  0437d6c  rlwinm 3, 4, 0, 30, 30
  0437d70  cmpwi 3, 0
  0437d74  bt 2, 0x437dd4
  0437d78  lbz 3, 83(31)
  0437d7c  cmpwi 3, 0
  0437d80  bt 2, 0x437d9c
  0437d84  ori 3, 31, 0
  0437d88  li 4, 0
  0437d8c  li 5, 0
  0437d90  li 6, 1
  0437d94  bl 0xfddc0
  0437d98  nop
  0437d9c  lis 3, 67
  0437da0  li 4, 0
  0437da4  addi 3, 3, 31112
  0437da8  stb 4, 32(31)
  0437dac  lfs 1, 36(3)
  0437db0  lfs 2, 40(3)
  0437db4  bl 0xfcbe8
  0437db8  nop
  0437dbc  lis 3, 114
  0437dc0  lfs 2, -3056(3)
  0437dc4  fmuls 1, 1, 2
  0437dc8  bl 0x502758
  0437dcc  nop
  0437dd0  sth 3, 8(30)
  0437dd4  ld 0, 272(1)
  0437dd8  mtlr 0
  0437ddc  lfd 31, 248(1)
  0437de0  ld 29, 224(1)
  0437de4  ld 30, 232(1)
  0437de8  ld 31, 240(1)
  0437dec  addi 1, 1, 256
  0437df0  blr
