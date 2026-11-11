# game/update/moby1381.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1381_002666e8:   # 0x2666e8, 0x14 bytes
  02666e8  lis 3, 122
  02666ec  lis 4, 1
  02666f0  addic 3, 3, -14428
  02666f4  stw 4, 72(3)
  02666f8  blr

UpdateMoby_1381:   # 0x266758, 0x7c4 bytes
  0266758  stdu 1, -208(1)
  026675c  mflr 0
  0266760  std 0, 224(1)
  0266764  stfd 30, 192(1)
  0266768  stfd 31, 200(1)
  026676c  std 30, 176(1)
  0266770  std 31, 184(1)
  0266774  lwz 30, 120(3)
  0266778  ori 31, 3, 0
  026677c  std 29, 168(1)
  0266780  std 28, 160(1)
  0266784  cmpwi 30, 0
  0266788  bt 2, 0x266ef4
  026678c  lis 3, 122
  0266790  lis 4, 114
  0266794  lis 5, 114
  0266798  lis 6, 122
  026679c  lis 7, 122
  02667a0  lfs 1, -14316(3)
  02667a4  lis 3, 122
  02667a8  lfs 5, -3048(4)
  02667ac  lis 4, 122
  02667b0  lfs 6, -3052(5)
  02667b4  fmuls 1, 1, 5
  02667b8  lis 5, 122
  02667bc  lfs 2, -14312(6)
  02667c0  lfs 4, -14304(7)
  02667c4  lfs 3, -14308(3)
  02667c8  lfs 7, -14300(4)
  02667cc  fmuls 2, 2, 5
  02667d0  fmuls 3, 3, 6
  02667d4  lfs 8, -14296(5)
  02667d8  lbz 3, 32(31)
  02667dc  fmuls 4, 4, 5
  02667e0  cmpwi 3, 4
  02667e4  fmuls 5, 7, 5
  02667e8  cmpwi 1, 3, 2
  02667ec  fmuls 6, 8, 6
  02667f0  cmpwi 6, 3, 0
  02667f4  bt 2, 0x266b5c
  02667f8  bt 6, 0x266920
  02667fc  bf 26, 0x266c04
  0266800  lfs 1, 16(31)
  0266804  lis 3, 165
  0266808  stfs 1, 16(30)
  026680c  addic 3, 3, -28284
  0266810  lfs 1, 20(31)
  0266814  stfs 1, 20(30)
  0266818  lfs 1, 24(31)
  026681c  stfs 1, 24(30)
  0266820  lfs 1, 28(31)
  0266824  stfs 1, 28(30)
  0266828  lfs 1, 64(31)
  026682c  stfs 1, 32(30)
  0266830  lfs 1, 68(31)
  0266834  stfs 1, 36(30)
  0266838  lfs 1, 72(31)
  026683c  stfs 1, 40(30)
  0266840  lfs 1, 76(31)
  0266844  stfs 1, 44(30)
  0266848  lbz 4, 33(31)
  026684c  slwi 4, 4, 2
  0266850  lwzx 4, 3, 4
  0266854  cmpwi 4, 0
  0266858  bt 2, 0x266ef4
  026685c  lis 7, 164
  0266860  li 3, 0
  0266864  ori 8, 30, 0
  0266868  ori 6, 3, 0
  026686c  lwz 7, -28512(7)
  0266870  lhz 5, 0(4)
  0266874  rlwinm 9, 5, 8, 9, 23
  0266878  clrlwi 5, 5, 17
  026687c  addc 9, 7, 9
  0266880  clrldi 9, 9, 32
  0266884  lhz 9, 166(9)
  0266888  cmpwi 9, 1584
  026688c  bf 2, 0x26689c
  0266890  stw 5, 80(8)
  0266894  addic 3, 3, 1
  0266898  addic 8, 8, 48
  026689c  lhz 5, 0(4)
  02668a0  cmpwi 1, 3, 16
  02668a4  extsh 5, 5
  02668a8  addic 4, 4, 2
  02668ac  cmpwi 5, 0
  02668b0  crandc 2, 4, 0
  02668b4  bt 2, 0x266870
  02668b8  ori 7, 3, 0
  02668bc  stw 6, 840(30)
  02668c0  lis 3, 38
  02668c4  vspltisw 3, -1
  02668c8  lis 4, 114
  02668cc  stw 6, 848(30)
  02668d0  addi 3, 3, 26368
  02668d4  li 5, -3056
  02668d8  vslw 3, 3, 3
  02668dc  li 6, 844
  02668e0  <unknown>
  02668e4  <unknown>
  02668e8  vspltw 2, 2, 0
  02668ec  ori 3, 31, 0
  02668f0  addic 4, 30, 48
  02668f4  extsw 5, 7
  02668f8  vmaddfp 2, 4, 2, 3
  02668fc  vctsxs 2, 2, 0
  0266900  vspltw 2, 2, 0
  0266904  stvewx 2, 6, 30
  0266908  stw 7, 824(30)
  026690c  bl 0x116d1c
  0266910  nop
  0266914  li 3, 1
  0266918  stb 3, 32(31)
  026691c  b 0x266c04
  0266920  lis 3, 122
  0266924  lwz 3, -14320(3)
  0266928  cmpwi 3, 0
  026692c  bt 2, 0x2669a8
  0266930  lis 3, 38
  0266934  lwz 6, 816(30)
  0266938  lis 5, 16320
  026693c  addi 3, 3, 26368
  0266940  srawi 7, 6, 31
  0266944  addic 4, 30, 820
  0266948  lfs 7, 4(3)
  026694c  srwi 3, 7, 1
  0266950  xor 3, 3, 6
  0266954  subc 6, 3, 7
  0266958  addic 3, 30, 816
  026695c  cmpw 6, 5
  0266960  bf 0, 0x266984
  0266964  fmr 4, 3
  0266968  fmr 3, 2
  026696c  ori 5, 4, 0
  0266970  fmr 2, 1
  0266974  fmr 1, 7
  0266978  bl 0x109c30
  026697c  nop
  0266980  b 0x2669a8
  0266984  lis 5, 38
  0266988  fmr 2, 4
  026698c  addi 6, 5, 26368
  0266990  fmr 3, 5
  0266994  ori 5, 4, 0
  0266998  fmr 4, 6
  026699c  lfs 1, 8(6)
  02669a0  bl 0x109c30
  02669a4  nop
  02669a8  lis 3, 122
  02669ac  lwz 4, 816(30)
  02669b0  srawi 6, 4, 31
  02669b4  srwi 8, 6, 1
  02669b8  lwz 3, -14276(3)
  02669bc  xor 4, 8, 4
  02669c0  srawi 5, 3, 31
  02669c4  srwi 7, 5, 1
  02669c8  xor 3, 7, 3
  02669cc  subc 5, 3, 5
  02669d0  subc 3, 4, 6
  02669d4  cmpw 3, 5
  02669d8  bf 1, 0x266a04
  02669dc  lwz 4, 836(30)
  02669e0  cmpwi 4, 0
  02669e4  bf 2, 0x266a04
  02669e8  lis 4, 122
  02669ec  li 5, -14272
  02669f0  li 6, 836
  02669f4  <unknown>
  02669f8  vcfsx 2, 2, 0
  02669fc  vspltw 2, 2, 0
  0266a00  stvewx 2, 6, 30
  0266a04  lis 4, 122
  0266a08  lwz 4, -14280(4)
  0266a0c  srawi 5, 4, 31
  0266a10  srwi 6, 5, 1
  0266a14  xor 4, 6, 4
  0266a18  subc 4, 4, 5
  0266a1c  cmpw 3, 4
  0266a20  bf 1, 0x266a38
  0266a24  lwz 3, 8(30)
  0266a28  cmpwi 3, 0
  0266a2c  bt 2, 0x266a38
  0266a30  li 3, 4
  0266a34  stb 3, 32(31)
  0266a38  lwz 5, 824(30)
  0266a3c  li 4, 0
  0266a40  cmpwi 5, 0
  0266a44  ori 3, 4, 0
  0266a48  bf 1, 0x266ad0
  0266a4c  lis 7, 151
  0266a50  lis 6, 164
  0266a54  addic 7, 7, -25376
  0266a58  ori 8, 30, 0
  0266a5c  lwz 9, 80(8)
  0266a60  lwz 10, -28512(6)
  0266a64  slwi 9, 9, 8
  0266a68  lwz 11, 764(7)
  0266a6c  addc 9, 10, 9
  0266a70  cmpw 11, 9
  0266a74  bf 2, 0x266ac0
  0266a78  lis 3, 38
  0266a7c  lwz 5, 848(30)
  0266a80  lis 4, 114
  0266a84  addi 3, 3, 26368
  0266a88  addic 5, 5, 1
  0266a8c  lfs 1, -3056(4)
  0266a90  stw 5, 848(30)
  0266a94  lfs 2, 12(3)
  0266a98  fmuls 1, 1, 2
  0266a9c  fctiwz 1, 1
  0266aa0  stfd 1, 144(1)
  0266aa4  lwz 3, 148(1)
  0266aa8  cmpw 5, 3
  0266aac  bf 1, 0x266ab8
  0266ab0  li 3, 1
  0266ab4  stw 3, 840(30)
  0266ab8  li 3, 1
  0266abc  b 0x266ad0
  0266ac0  addic 4, 4, 1
  0266ac4  addic 8, 8, 48
  0266ac8  cmpw 4, 5
  0266acc  bt 0, 0x266a5c
  0266ad0  lis 5, 151
  0266ad4  addic 5, 5, -25376
  0266ad8  lwz 4, 764(5)
  0266adc  cmpwi 4, 0
  0266ae0  bt 2, 0x266b1c
  0266ae4  lhz 6, 166(4)
  0266ae8  cmpwi 6, 1892
  0266aec  bf 2, 0x266af4
  0266af0  li 3, 1
  0266af4  lhz 6, 166(4)
  0266af8  lhz 7, 166(31)
  0266afc  extsh 6, 6
  0266b00  extsh 7, 7
  0266b04  cmpw 6, 7
  0266b08  bf 2, 0x266b1c
  0266b0c  lbz 4, 32(4)
  0266b10  cmpwi 4, 4
  0266b14  bf 2, 0x266b1c
  0266b18  li 3, 1
  0266b1c  cmpwi 1, 3, 0
  0266b20  lwz 3, 840(30)
  0266b24  cmpwi 3, 0
  0266b28  crorc 2, 2, 6
  0266b2c  bt 2, 0x266c04
  0266b30  lhz 3, 782(5)
  0266b34  cmpwi 3, 0
  0266b38  bf 2, 0x266c04
  0266b3c  addic 3, 30, 844
  0266b40  bl 0x4fff60
  0266b44  nop
  0266b48  cmpwi 3, 0
  0266b4c  bt 2, 0x266c04
  0266b50  li 3, 4
  0266b54  stb 3, 32(31)
  0266b58  b 0x266c04
  0266b5c  lfs 1, 24(31)
  0266b60  lfs 2, 832(30)
  0266b64  lis 3, 38
  0266b68  lis 4, 114
  0266b6c  fadds 1, 1, 2
  0266b70  addi 3, 3, 26368
  0266b74  lis 5, 16800
  0266b78  stfs 1, 24(31)
  0266b7c  lfs 1, 16(3)
  0266b80  lfs 2, 832(30)
  0266b84  lfs 3, -3048(4)
  0266b88  fnmsubs 1, 3, 1, 2
  0266b8c  stfs 1, 832(30)
  0266b90  lwz 3, 24(31)
  0266b94  srawi 4, 3, 31
  0266b98  srwi 6, 4, 1
  0266b9c  xor 3, 6, 3
  0266ba0  subc 3, 3, 4
  0266ba4  cmpw 3, 5
  0266ba8  bf 0, 0x266c04
  0266bac  lwz 3, 824(30)
  0266bb0  li 29, 0
  0266bb4  cmpwi 3, 0
  0266bb8  bf 1, 0x266bf4
  0266bbc  ori 28, 30, 0
  0266bc0  lis 3, 164
  0266bc4  lwz 4, 80(28)
  0266bc8  slwi 4, 4, 8
  0266bcc  lwz 3, -28512(3)
  0266bd0  addc 3, 3, 4
  0266bd4  clrldi 3, 3, 32
  0266bd8  bl 0x2a0dec
  0266bdc  nop
  0266be0  lwz 3, 824(30)
  0266be4  addic 29, 29, 1
  0266be8  addic 28, 28, 48
  0266bec  cmpw 29, 3
  0266bf0  bt 0, 0x266bc0
  0266bf4  ori 3, 31, 0
  0266bf8  bl 0xefb38
  0266bfc  nop
  0266c00  b 0x266ef4
  0266c04  lbz 3, 32(31)
  0266c08  cmpwi 3, 2
  0266c0c  cmpwi 1, 3, 1
  0266c10  bt 2, 0x266c18
  0266c14  bf 6, 0x266cf0
  0266c18  lis 4, 38
  0266c1c  lis 3, 165
  0266c20  lwz 5, 4(30)
  0266c24  addi 4, 4, 26368
  0266c28  slwi 6, 5, 7
  0266c2c  lwz 3, 7128(3)
  0266c30  lfs 1, 20(4)
  0266c34  addc 4, 3, 6
  0266c38  lfs 2, 816(30)
  0266c3c  lfs 3, 16(30)
  0266c40  clrldi 4, 4, 32
  0266c44  lfs 4, 20(30)
  0266c48  fmuls 2, 2, 1
  0266c4c  lfs 5, 48(4)
  0266c50  lfs 6, 52(4)
  0266c54  fsubs 5, 5, 3
  0266c58  fsubs 4, 6, 4
  0266c5c  lfs 6, 56(4)
  0266c60  lfs 7, 24(30)
  0266c64  lfs 8, 60(4)
  0266c68  fsubs 6, 6, 7
  0266c6c  slwi 4, 5, 7
  0266c70  addc 3, 3, 4
  0266c74  fmadds 3, 2, 5, 3
  0266c78  clrldi 3, 3, 32
  0266c7c  stfs 3, 16(31)
  0266c80  lfs 3, 20(30)
  0266c84  fmadds 3, 2, 4, 3
  0266c88  stfs 3, 20(31)
  0266c8c  lfs 3, 24(30)
  0266c90  stfs 8, 28(31)
  0266c94  fmadds 2, 2, 6, 3
  0266c98  stfs 2, 24(31)
  0266c9c  lfs 2, 816(30)
  0266ca0  lfs 3, 112(3)
  0266ca4  fmuls 1, 2, 1
  0266ca8  lfs 2, 32(30)
  0266cac  lfs 4, 116(3)
  0266cb0  fsubs 3, 3, 2
  0266cb4  lfs 5, 36(30)
  0266cb8  fsubs 4, 4, 5
  0266cbc  lfs 5, 120(3)
  0266cc0  lfs 6, 40(30)
  0266cc4  lfs 7, 124(3)
  0266cc8  fsubs 5, 5, 6
  0266ccc  fmadds 2, 1, 3, 2
  0266cd0  stfs 2, 64(31)
  0266cd4  lfs 2, 36(30)
  0266cd8  fmadds 2, 1, 4, 2
  0266cdc  stfs 2, 68(31)
  0266ce0  lfs 2, 40(30)
  0266ce4  stfs 7, 76(31)
  0266ce8  fmadds 1, 1, 5, 2
  0266cec  stfs 1, 72(31)
  0266cf0  lwz 5, 824(30)
  0266cf4  ori 3, 31, 0
  0266cf8  addic 4, 30, 48
  0266cfc  extsw 5, 5
  0266d00  bl 0x116eb8
  0266d04  nop
  0266d08  lis 3, 38
  0266d0c  lwz 4, 836(30)
  0266d10  addi 3, 3, 26368
  0266d14  lfs 1, 836(30)
  0266d18  cmpwi 4, 0
  0266d1c  lfs 31, 24(3)
  0266d20  bt 2, 0x266ef4
  0266d24  lbz 3, 32(31)
  0266d28  cmpwi 3, 4
  0266d2c  bt 2, 0x266ef4
  0266d30  lis 3, 38
  0266d34  addi 3, 3, 26368
  0266d38  lfs 2, 28(3)
  0266d3c  fadds 1, 1, 2
  0266d40  stfs 1, 836(30)
  0266d44  bl 0x502758
  0266d48  nop
  0266d4c  bl 0xfc620
  0266d50  nop
  0266d54  cmpwi 3, 0
  0266d58  bf 2, 0x266ef4
  0266d5c  lis 3, 38
  0266d60  addi 31, 3, 26368
  0266d64  lfs 1, 32(31)
  0266d68  lfs 2, 36(31)
  0266d6c  bl 0xfcbe8
  0266d70  nop
  0266d74  lis 3, 149
  0266d78  addic 3, 3, 5056
  0266d7c  lfs 2, 344(3)
  0266d80  bl 0x502578
  0266d84  nop
  0266d88  fmr 30, 1
  0266d8c  lfs 2, 40(31)
  0266d90  fmr 1, 31
  0266d94  bl 0xfcbe8
  0266d98  nop
  0266d9c  lfs 2, 44(31)
  0266da0  lfs 3, 48(31)
  0266da4  fadds 2, 30, 2
  0266da8  lfs 4, 52(31)
  0266dac  fsubs 5, 3, 30
  0266db0  fsubs 6, 4, 30
  0266db4  lis 3, 114
  0266db8  lis 4, 151
  0266dbc  addic 4, 4, -25376
  0266dc0  fsubs 3, 3, 2
  0266dc4  fsub 7, 30, 5
  0266dc8  fsubs 4, 4, 2
  0266dcc  fsub 8, 2, 3
  0266dd0  fsel 5, 7, 5, 30
  0266dd4  lfs 7, 56(31)
  0266dd8  fsel 2, 8, 3, 2
  0266ddc  fsub 3, 6, 5
  0266de0  fsub 9, 4, 2
  0266de4  fsel 3, 3, 6, 5
  0266de8  lfs 5, 60(31)
  0266dec  lfs 6, 64(31)
  0266df0  lfs 10, 68(31)
  0266df4  fsel 2, 9, 4, 2
  0266df8  fmuls 4, 3, 3
  0266dfc  fmuls 8, 2, 2
  0266e00  fmuls 9, 4, 3
  0266e04  fmuls 11, 8, 2
  0266e08  fmuls 12, 4, 9
  0266e0c  fmadds 3, 9, 7, 3
  0266e10  fmuls 9, 8, 11
  0266e14  fmadds 2, 11, 7, 2
  0266e18  fmuls 7, 4, 12
  0266e1c  fmadds 3, 12, 5, 3
  0266e20  lfs 11, 76(31)
  0266e24  fmuls 12, 8, 9
  0266e28  fmadds 2, 9, 5, 2
  0266e2c  fmuls 4, 4, 7
  0266e30  fmadds 3, 7, 6, 3
  0266e34  fmr 5, 11
  0266e38  lfs 7, 72(31)
  0266e3c  fmuls 8, 8, 12
  0266e40  fmadds 2, 12, 6, 2
  0266e44  lfs 6, -3056(3)
  0266e48  fmadds 3, 4, 10, 3
  0266e4c  fmuls 4, 6, 5
  0266e50  lis 3, 122
  0266e54  lfs 5, 128(4)
  0266e58  lfs 6, 132(4)
  0266e5c  fmadds 2, 8, 10, 2
  0266e60  lfs 8, 136(4)
  0266e64  fmadds 6, 3, 1, 6
  0266e68  fctiwz 4, 4
  0266e6c  fadds 7, 7, 8
  0266e70  lfs 8, -14268(3)
  0266e74  fmadds 1, 2, 1, 5
  0266e78  stfd 4, 144(1)
  0266e7c  lwz 9, 148(1)
  0266e80  lfs 2, 8(31)
  0266e84  lfs 3, 80(31)
  0266e88  extsw 9, 9
  0266e8c  lfs 4, 84(31)
  0266e90  stfs 1, 48(1)
  0266e94  stfs 6, 52(1)
  0266e98  stfs 7, 56(1)
  0266e9c  lis 3, 161
  0266ea0  stfs 1, 60(1)
  0266ea4  li 5, 0
  0266ea8  addic 4, 3, 23856
  0266eac  li 7, 696
  0266eb0  lfs 1, 23856(3)
  0266eb4  stfs 1, 64(1)
  0266eb8  lfs 1, 8(4)
  0266ebc  stfs 1, 72(1)
  0266ec0  ld 3, 48(1)
  0266ec4  ld 6, 56(1)
  0266ec8  lfs 1, 4(4)
  0266ecc  lfs 5, 12(4)
  0266ed0  stfs 1, 68(1)
  0266ed4  ori 4, 6, 0
  0266ed8  stfs 5, 76(1)
  0266edc  fmr 1, 8
  0266ee0  std 5, 128(1)
  0266ee4  ld 5, 64(1)
  0266ee8  ld 6, 72(1)
  0266eec  bl 0x425540
  0266ef0  nop
  0266ef4  ld 0, 224(1)
  0266ef8  mtlr 0
  0266efc  lfd 30, 192(1)
  0266f00  lfd 31, 200(1)
  0266f04  ld 28, 160(1)
  0266f08  ld 29, 168(1)
  0266f0c  ld 30, 176(1)
  0266f10  ld 31, 184(1)
  0266f14  addi 1, 1, 208
  0266f18  blr
