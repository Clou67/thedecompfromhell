# game/update/moby646.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_00400670:   # 0x400670, 0x1d8 bytes
  0400670  stdu 1, -80(1)
  0400674  li 11, 0
  0400678  stw 10, 48(1)
  040067c  lis 12, 64
  0400680  stw 10, 52(1)
  0400684  li 0, 48
  0400688  stw 10, 56(1)
  040068c  stw 10, 60(1)
  0400690  std 31, 72(1)
  0400694  lwz 10, 120(3)
  0400698  lis 31, 114
  040069c  lvx 2, 1, 0
  04006a0  stw 9, 48(1)
  04006a4  stw 9, 52(1)
  04006a8  stw 9, 56(1)
  04006ac  stw 9, 60(1)
  04006b0  li 9, 2
  04006b4  li 0, 48
  04006b8  addi 12, 12, 1632
  04006bc  vspltisw 4, -1
  04006c0  lvx 3, 1, 0
  04006c4  stw 11, 96(10)
  04006c8  stw 11, 100(10)
  04006cc  lfs 1, 0(4)
  04006d0  stfs 1, 0(10)
  04006d4  lfs 1, 4(4)
  04006d8  stfs 1, 4(10)
  04006dc  lfs 1, 8(4)
  04006e0  stfs 1, 8(10)
  04006e4  lfs 1, 12(4)
  04006e8  stfs 1, 12(10)
  04006ec  lfs 1, 0(5)
  04006f0  stfs 1, 16(10)
  04006f4  lfs 1, 4(5)
  04006f8  stfs 1, 20(10)
  04006fc  lfs 1, 8(5)
  0400700  stfs 1, 24(10)
  0400704  lfs 1, 12(5)
  0400708  stfs 1, 28(10)
  040070c  lfs 1, 0(6)
  0400710  stfs 1, 32(10)
  0400714  lfs 1, 4(6)
  0400718  stfs 1, 36(10)
  040071c  lfs 1, 8(6)
  0400720  stfs 1, 40(10)
  0400724  lfs 1, 12(6)
  0400728  stfs 1, 44(10)
  040072c  lfs 1, 0(7)
  0400730  stfs 1, 48(10)
  0400734  lfs 1, 4(7)
  0400738  stfs 1, 52(10)
  040073c  vcfsx 3, 3, 0
  0400740  lfs 1, 8(7)
  0400744  lis 4, 114
  0400748  stfs 1, 56(10)
  040074c  lfs 1, 12(7)
  0400750  stfs 1, 60(10)
  0400754  lfs 1, 0(8)
  0400758  stfs 1, 64(10)
  040075c  lfs 1, 4(8)
  0400760  stfs 1, 68(10)
  0400764  lfs 1, 8(8)
  0400768  stfs 1, 72(10)
  040076c  lfs 1, 12(8)
  0400770  li 5, -3056
  0400774  stfs 1, 76(10)
  0400778  stb 9, 32(3)
  040077c  lfs 1, 0(12)
  0400780  lfs 2, -3048(31)
  0400784  li 3, 4
  0400788  vslw 4, 4, 4
  040078c  fmuls 1, 2, 1
  0400790  li 6, 8
  0400794  vcfsx 2, 2, 0
  0400798  vspltisw 8, -1
  040079c  li 7, 448
  04007a0  vspltisw 11, -1
  04007a4  vslw 8, 8, 8
  04007a8  stfs 1, 104(10)
  04007ac  lvlx 5, 3, 12
  04007b0  lvlx 6, 5, 4
  04007b4  vspltw 5, 5, 0
  04007b8  lvlx 7, 6, 12
  04007bc  vaddfp 3, 3, 5
  04007c0  vspltw 7, 7, 0
  04007c4  vaddfp 2, 2, 5
  04007c8  vspltisw 5, -1
  04007cc  li 4, 112
  04007d0  vslw 5, 5, 5
  04007d4  li 5, 116
  04007d8  lis 6, 151
  04007dc  vmaddfp 3, 6, 3, 4
  04007e0  vspltisw 4, -1
  04007e4  vmaddfp 2, 6, 2, 5
  04007e8  vslw 5, 11, 11
  04007ec  addic 6, 6, -25376
  04007f0  vslw 4, 4, 4
  04007f4  lwz 3, 196(1)
  04007f8  vctsxs 3, 3, 0
  04007fc  vctsxs 2, 2, 0
  0400800  vcfsx 9, 3, 0
  0400804  vspltw 2, 2, 0
  0400808  vspltw 3, 3, 0
  040080c  vrefp 10, 9
  0400810  vnmsubfp 12, 10, 9, 7
  0400814  vmaddfp 4, 10, 12, 4
  0400818  vnmsubfp 6, 4, 9, 7
  040081c  vmaddfp 4, 4, 6, 8
  0400820  vnmsubfp 6, 4, 9, 7
  0400824  vmaddfp 4, 4, 6, 5
  0400828  vspltw 4, 4, 0
  040082c  stvewx 4, 4, 10
  0400830  stvewx 2, 5, 10
  0400834  stw 3, 120(10)
  0400838  stvewx 3, 7, 6
  040083c  ld 31, 72(1)
  0400840  addi 1, 1, 80
  0400844  blr

FUN_00400848:   # 0x400848, 0xc bytes
  0400848  lwz 3, 120(3)
  040084c  lfs 1, 96(3)
  0400850  blr

FUN_00400854:   # 0x400854, 0x54 bytes
  0400854  li 4, 3
  0400858  lbz 3, 32(3)
  040085c  li 6, 2
  0400860  subc 4, 4, 3
  0400864  li 7, 2
  0400868  cntlzw 4, 4
  040086c  li 8, 0
  0400870  sldi 4, 4, 58
  0400874  subc 3, 6, 3
  0400878  subc 6, 7, 8
  040087c  sradi 4, 4, 63
  0400880  cntlzw 3, 3
  0400884  and 4, 4, 6
  0400888  li 5, 1
  040088c  sldi 3, 3, 58
  0400890  addc 4, 8, 4
  0400894  sradi 3, 3, 63
  0400898  subc 5, 5, 4
  040089c  and 3, 3, 5
  04008a0  addc 3, 4, 3
  04008a4  blr

M752_004008a8:   # 0x4008a8, 0x110 bytes
  04008a8  stdu 1, -160(1)
  04008ac  mflr 0
  04008b0  std 0, 176(1)
  04008b4  stfd 31, 152(1)
  04008b8  std 31, 144(1)
  04008bc  ori 31, 3, 0
  04008c0  std 30, 136(1)
  04008c4  fmr 31, 1
  04008c8  ori 30, 4, 0
  04008cc  lwz 3, 0(31)
  04008d0  addic 3, 3, -1
  04008d4  extsw 3, 3
  04008d8  std 3, 112(1)
  04008dc  lfd 1, 112(1)
  04008e0  fcfid 1, 1
  04008e4  frsp 1, 1
  04008e8  fmuls 1, 1, 31
  04008ec  bl 0x502758
  04008f0  nop
  04008f4  lwz 4, 0(31)
  04008f8  extsw 7, 3
  04008fc  addic 5, 4, -1
  0400900  addic 4, 4, -2
  0400904  extsw 6, 5
  0400908  extsw 5, 5
  040090c  subc 5, 3, 5
  0400910  std 6, 112(1)
  0400914  subc 3, 3, 4
  0400918  sradi 5, 5, 63
  040091c  and 3, 5, 3
  0400920  addc 3, 4, 3
  0400924  sldi 3, 3, 4
  0400928  addc 3, 31, 3
  040092c  clrldi 3, 3, 32
  0400930  lfd 1, 112(1)
  0400934  std 7, 112(1)
  0400938  lfs 2, 32(3)
  040093c  lfs 3, 16(3)
  0400940  fcfid 1, 1
  0400944  lfs 4, 36(3)
  0400948  lfd 5, 112(1)
  040094c  fsubs 2, 2, 3
  0400950  fcfid 5, 5
  0400954  lfs 6, 20(3)
  0400958  fsubs 4, 4, 6
  040095c  lfs 6, 40(3)
  0400960  frsp 1, 1
  0400964  lfs 7, 24(3)
  0400968  lfs 8, 44(3)
  040096c  frsp 5, 5
  0400970  fsubs 6, 6, 7
  0400974  fmsubs 1, 1, 31, 5
  0400978  fmadds 2, 1, 2, 3
  040097c  stfs 2, 0(30)
  0400980  lfs 2, 20(3)
  0400984  fmadds 2, 1, 4, 2
  0400988  stfs 2, 4(30)
  040098c  lfs 2, 24(3)
  0400990  stfs 8, 12(30)
  0400994  fmadds 1, 1, 6, 2
  0400998  stfs 1, 8(30)
  040099c  ld 0, 176(1)
  04009a0  mtlr 0
  04009a4  lfd 31, 152(1)
  04009a8  ld 30, 136(1)
  04009ac  ld 31, 144(1)
  04009b0  addi 1, 1, 160
  04009b4  blr

M752_004009b8:   # 0x4009b8, 0x14 bytes
  04009b8  lis 3, 133
  04009bc  lis 4, 1
  04009c0  addic 3, 3, 18280
  04009c4  stw 4, 72(3)
  04009c8  blr

M752_004009d0:   # 0x4009d0, 0x4 bytes
  04009d0  blr

UpdateMoby_646:   # 0x4009e0, 0x544 bytes
  04009e0  stdu 1, -192(1)
  04009e4  mflr 0
  04009e8  std 0, 208(1)
  04009ec  lfs 1, 16(3)
  04009f0  std 31, 184(1)
  04009f4  lfs 2, 20(3)
  04009f8  ori 31, 3, 0
  04009fc  fneg 1, 1
  0400a00  lfs 3, 24(3)
  0400a04  fneg 2, 2
  0400a08  std 30, 176(1)
  0400a0c  fneg 3, 3
  0400a10  lwz 30, 120(3)
  0400a14  lfs 4, 28(3)
  0400a18  lfs 5, 64(3)
  0400a1c  stfs 4, 124(1)
  0400a20  lfs 4, 68(3)
  0400a24  stfs 5, 128(1)
  0400a28  lfs 5, 72(3)
  0400a2c  stfs 4, 132(1)
  0400a30  stfs 1, 112(1)
  0400a34  stfs 2, 116(1)
  0400a38  stfs 3, 120(1)
  0400a3c  lfs 1, 76(3)
  0400a40  lbz 3, 32(3)
  0400a44  stfs 5, 136(1)
  0400a48  cmpwi 3, 0
  0400a4c  stfs 1, 140(1)
  0400a50  cmpwi 1, 3, 2
  0400a54  cmpwi 6, 3, 1
  0400a58  std 29, 168(1)
  0400a5c  std 28, 160(1)
  0400a60  std 27, 152(1)
  0400a64  cmpwi 7, 3, -1
  0400a68  bt 1, 0x400a74
  0400a6c  bf 29, 0x400eb8
  0400a70  b 0x400a80
  0400a74  bf 25, 0x400b70
  0400a78  bf 5, 0x400e9c
  0400a7c  b 0x400eb8
  0400a80  lis 3, 165
  0400a84  li 4, 0
  0400a88  addic 5, 3, 7136
  0400a8c  lwz 3, 248(30)
  0400a90  li 7, -1
  0400a94  lwz 6, 224(30)
  0400a98  li 29, 1
  0400a9c  subc 3, 4, 3
  0400aa0  slwi 4, 6, 2
  0400aa4  cntlzw 3, 3
  0400aa8  li 6, 1
  0400aac  sldi 3, 3, 58
  0400ab0  subc 6, 6, 7
  0400ab4  sradi 3, 3, 63
  0400ab8  extsw 4, 4
  0400abc  and 3, 3, 6
  0400ac0  addc 6, 7, 3
  0400ac4  lwzx 5, 5, 4
  0400ac8  extsb 7, 6
  0400acc  li 4, 0
  0400ad0  stw 5, 192(30)
  0400ad4  cmpwi 7, 0
  0400ad8  stb 6, 180(30)
  0400adc  ori 3, 4, 0
  0400ae0  bt 0, 0x400aec
  0400ae4  lwz 4, 0(5)
  0400ae8  addic 4, 4, -1
  0400aec  sldi 4, 4, 4
  0400af0  addc 4, 5, 4
  0400af4  clrldi 4, 4, 32
  0400af8  lfs 1, 16(4)
  0400afc  stfs 1, 16(31)
  0400b00  lfs 1, 20(4)
  0400b04  stfs 1, 20(31)
  0400b08  lfs 1, 24(4)
  0400b0c  stfs 1, 24(31)
  0400b10  lfs 1, 28(4)
  0400b14  stfs 1, 28(31)
  0400b18  lbz 4, 180(30)
  0400b1c  lfs 1, 252(30)
  0400b20  extsb 4, 4
  0400b24  cmpwi 4, 0
  0400b28  bt 0, 0x400b38
  0400b2c  lwz 3, 192(30)
  0400b30  lwz 3, 0(3)
  0400b34  addic 3, 3, -1
  0400b38  stw 3, 176(30)
  0400b3c  lwz 5, 36(31)
  0400b40  li 4, -1
  0400b44  addic 3, 30, 256
  0400b48  lfs 2, 36(5)
  0400b4c  stw 4, 260(30)
  0400b50  fmuls 1, 2, 1
  0400b54  stfs 1, 44(31)
  0400b58  bl 0x4fff60
  0400b5c  nop
  0400b60  cmpwi 3, 0
  0400b64  bt 2, 0x400eb8
  0400b68  stb 29, 32(31)
  0400b6c  b 0x400eb8
  0400b70  lwz 3, 192(30)
  0400b74  lwz 4, 176(30)
  0400b78  lbz 5, 180(30)
  0400b7c  li 6, 0
  0400b80  extsb 5, 5
  0400b84  lwz 3, 0(3)
  0400b88  addc 4, 4, 3
  0400b8c  addic 29, 3, -1
  0400b90  addc 27, 4, 5
  0400b94  divw 4, 27, 3
  0400b98  mullw 4, 4, 3
  0400b9c  subc 3, 5, 6
  0400ba0  li 5, 0
  0400ba4  sradi 3, 3, 63
  0400ba8  lhz 6, 166(31)
  0400bac  subc 5, 5, 29
  0400bb0  cmpwi 6, 905
  0400bb4  and 3, 3, 5
  0400bb8  subc 27, 27, 4
  0400bbc  addc 29, 29, 3
  0400bc0  bf 2, 0x400bfc
  0400bc4  ori 3, 31, 0
  0400bc8  lwz 4, 260(30)
  0400bcc  extsw 4, 4
  0400bd0  bl 0x15cc7c
  0400bd4  nop
  0400bd8  cmpwi 3, 0
  0400bdc  bf 2, 0x400bfc
  0400be0  li 3, 0
  0400be4  li 4, 4
  0400be8  ori 5, 31, 0
  0400bec  li 6, 905
  0400bf0  bl 0x15d204
  0400bf4  nop
  0400bf8  stw 3, 260(30)
  0400bfc  sldi 28, 27, 4
  0400c00  lwz 3, 192(30)
  0400c04  lfs 1, 16(31)
  0400c08  addc 4, 3, 28
  0400c0c  clrldi 4, 4, 32
  0400c10  li 5, 0
  0400c14  subc 7, 29, 27
  0400c18  lfs 2, 16(4)
  0400c1c  lwz 6, 264(30)
  0400c20  fsubs 1, 2, 1
  0400c24  subc 5, 5, 6
  0400c28  cntlzw 5, 5
  0400c2c  sldi 5, 5, 58
  0400c30  sradi 5, 5, 63
  0400c34  and 5, 5, 7
  0400c38  addc 5, 27, 5
  0400c3c  stfs 1, 160(30)
  0400c40  lfs 1, 20(4)
  0400c44  lfs 2, 20(31)
  0400c48  sldi 5, 5, 4
  0400c4c  fsubs 1, 1, 2
  0400c50  addc 3, 3, 5
  0400c54  clrldi 3, 3, 32
  0400c58  stfs 1, 164(30)
  0400c5c  lfs 1, 24(4)
  0400c60  lfs 2, 24(31)
  0400c64  fsubs 1, 1, 2
  0400c68  stfs 1, 168(30)
  0400c6c  lfs 1, 28(4)
  0400c70  stfs 1, 172(30)
  0400c74  lfs 1, 20(31)
  0400c78  lfs 2, 16(31)
  0400c7c  lfs 3, 20(3)
  0400c80  lfs 4, 16(3)
  0400c84  fsubs 1, 1, 3
  0400c88  fsubs 2, 2, 4
  0400c8c  lfs 3, 24(31)
  0400c90  lfs 4, 24(3)
  0400c94  fsubs 3, 3, 4
  0400c98  lis 3, 64
  0400c9c  fmuls 1, 1, 1
  0400ca0  addi 4, 3, 2516
  0400ca4  addic 3, 30, 228
  0400ca8  fmadds 1, 2, 2, 1
  0400cac  fmadds 1, 3, 3, 1
  0400cb0  fsqrts 3, 1
  0400cb4  lfs 1, 244(30)
  0400cb8  lfs 2, 0(4)
  0400cbc  fcmpu 0, 3, 1
  0400cc0  cror 6, 1, 2
  0400cc4  bt 6, 0x400cfc
  0400cc8  lfs 3, 236(30)
  0400ccc  fmuls 3, 3, 3
  0400cd0  lis 4, 114
  0400cd4  lis 5, 114
  0400cd8  fdivs 3, 3, 1
  0400cdc  lfs 1, -3052(4)
  0400ce0  lfs 4, -3048(5)
  0400ce4  fmuls 1, 1, 2
  0400ce8  fmuls 3, 3, 4
  0400cec  fmuls 2, 3, 2
  0400cf0  bl 0x109af0
  0400cf4  nop
  0400cf8  b 0x400d2c
  0400cfc  lfs 3, 236(30)
  0400d00  fmuls 4, 3, 3
  0400d04  lis 4, 114
  0400d08  lis 5, 114
  0400d0c  fdivs 4, 4, 1
  0400d10  lfs 1, -3052(4)
  0400d14  lfs 5, -3048(5)
  0400d18  fmuls 1, 3, 1
  0400d1c  fmuls 3, 4, 5
  0400d20  fmuls 2, 3, 2
  0400d24  bl 0x109af0
  0400d28  nop
  0400d2c  lfs 1, 228(30)
  0400d30  addic 3, 30, 160
  0400d34  bl 0x110488
  0400d38  nop
  0400d3c  lfs 1, 16(31)
  0400d40  lfs 2, 160(30)
  0400d44  fadds 1, 1, 2
  0400d48  lfs 2, 20(31)
  0400d4c  lfs 3, 24(31)
  0400d50  stfs 1, 16(31)
  0400d54  lfs 4, 164(30)
  0400d58  fadds 2, 2, 4
  0400d5c  stfs 2, 20(31)
  0400d60  lfs 4, 168(30)
  0400d64  fadds 3, 3, 4
  0400d68  stfs 3, 24(31)
  0400d6c  lwz 3, 192(30)
  0400d70  addc 3, 3, 28
  0400d74  clrldi 3, 3, 32
  0400d78  lfs 4, 20(3)
  0400d7c  lfs 5, 16(3)
  0400d80  fsubs 2, 2, 4
  0400d84  fsubs 1, 1, 5
  0400d88  lfs 4, 24(3)
  0400d8c  fsubs 3, 3, 4
  0400d90  lis 3, 64
  0400d94  addi 3, 3, 2516
  0400d98  fmuls 2, 2, 2
  0400d9c  fmadds 1, 1, 1, 2
  0400da0  lfs 2, 4(3)
  0400da4  fmadds 1, 3, 3, 1
  0400da8  lfs 3, 228(30)
  0400dac  fmuls 2, 3, 2
  0400db0  fsqrts 1, 1
  0400db4  fcmpu 0, 1, 2
  0400db8  cror 6, 1, 2
  0400dbc  bt 6, 0x400eb8
  0400dc0  cmpw 27, 29
  0400dc4  stw 27, 176(30)
  0400dc8  bt 2, 0x400dd8
  0400dcc  lwz 3, 264(30)
  0400dd0  cmpwi 3, 0
  0400dd4  bt 2, 0x400eb8
  0400dd8  lwz 3, 240(30)
  0400ddc  cmpwi 3, 0
  0400de0  bf 1, 0x400eb8
  0400de4  lwz 4, 260(30)
  0400de8  cmpwi 4, -1
  0400dec  bt 2, 0x400e34
  0400df0  sldi 3, 4, 7
  0400df4  sldi 6, 4, 4
  0400df8  lis 5, 150
  0400dfc  subc 3, 3, 6
  0400e00  addic 5, 5, 14312
  0400e04  extsw 3, 3
  0400e08  lwzx 5, 5, 3
  0400e0c  cmpw 5, 31
  0400e10  bf 2, 0x400e34
  0400e14  lis 5, 150
  0400e18  addic 5, 5, 14292
  0400e1c  lbzx 3, 5, 3
  0400e20  cmpwi 3, 0
  0400e24  bt 2, 0x400e34
  0400e28  extsw 3, 4
  0400e2c  bl 0x15cdb0
  0400e30  nop
  0400e34  li 3, -1
  0400e38  vspltisw 4, -1
  0400e3c  li 4, 240
  0400e40  li 5, 2
  0400e44  addi 6, 4, 16
  0400e48  stw 3, 260(30)
  0400e4c  lis 3, 64
  0400e50  vslw 4, 4, 4
  0400e54  stb 5, 32(31)
  0400e58  lvlx 2, 4, 30
  0400e5c  lvrx 3, 6, 30
  0400e60  addi 3, 3, 2516
  0400e64  lis 4, 114
  0400e68  vor 2, 2, 3
  0400e6c  lvlx 3, 0, 3
  0400e70  vcfsx 2, 2, 0
  0400e74  vspltw 3, 3, 0
  0400e78  li 3, -3056
  0400e7c  lvlx 5, 3, 4
  0400e80  li 3, 232
  0400e84  vaddfp 2, 2, 3
  0400e88  vmaddfp 2, 5, 2, 4
  0400e8c  vctsxs 2, 2, 0
  0400e90  vspltw 2, 2, 0
  0400e94  stvewx 2, 3, 30
  0400e98  b 0x400eb8
  0400e9c  addic 3, 30, 232
  0400ea0  bl 0x4fff60
  0400ea4  nop
  0400ea8  cmpwi 3, 0
  0400eac  bt 2, 0x400eb8
  0400eb0  li 3, 1
  0400eb4  stb 3, 32(31)
  0400eb8  lfs 1, 112(1)
  0400ebc  lfs 2, 16(31)
  0400ec0  addic 3, 30, 96
  0400ec4  lfs 3, 116(1)
  0400ec8  addic 4, 1, 112
  0400ecc  fadds 1, 1, 2
  0400ed0  addic 5, 1, 128
  0400ed4  lfs 2, 20(31)
  0400ed8  addic 6, 31, 64
  0400edc  lfs 4, 120(1)
  0400ee0  fadds 2, 3, 2
  0400ee4  lfs 3, 24(31)
  0400ee8  fadds 3, 4, 3
  0400eec  stfs 1, 112(1)
  0400ef0  stfs 2, 116(1)
  0400ef4  stfs 3, 120(1)
  0400ef8  bl 0x112900
  0400efc  nop
  0400f00  ld 0, 208(1)
  0400f04  mtlr 0
  0400f08  ld 27, 152(1)
  0400f0c  ld 28, 160(1)
  0400f10  ld 29, 168(1)
  0400f14  ld 30, 176(1)
  0400f18  ld 31, 184(1)
  0400f1c  addi 1, 1, 192
  0400f20  blr

M752_00400f24:   # 0x400f24, 0x14 bytes
  0400f24  lis 3, 133
  0400f28  lis 4, 1
  0400f2c  addic 3, 3, 18392
  0400f30  stw 4, 72(3)
  0400f34  blr
