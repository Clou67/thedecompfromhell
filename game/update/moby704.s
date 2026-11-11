# game/update/moby704.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_704:   # 0x4296b8, 0x6ac bytes
  04296b8  stdu 1, -480(1)
  04296bc  mflr 0
  04296c0  std 0, 496(1)
  04296c4  stfd 14, 336(1)
  04296c8  stfd 15, 344(1)
  04296cc  stfd 16, 352(1)
  04296d0  stfd 17, 360(1)
  04296d4  stfd 18, 368(1)
  04296d8  stfd 19, 376(1)
  04296dc  stfd 20, 384(1)
  04296e0  stfd 21, 392(1)
  04296e4  stfd 22, 400(1)
  04296e8  stfd 23, 408(1)
  04296ec  stfd 24, 416(1)
  04296f0  stfd 25, 424(1)
  04296f4  stfd 26, 432(1)
  04296f8  stfd 27, 440(1)
  04296fc  stfd 28, 448(1)
  0429700  stfd 29, 456(1)
  0429704  stfd 30, 464(1)
  0429708  stfd 31, 472(1)
  042970c  std 31, 328(1)
  0429710  ori 31, 3, 0
  0429714  lis 4, 1
  0429718  std 30, 320(1)
  042971c  std 29, 312(1)
  0429720  std 28, 304(1)
  0429724  li 5, 0
  0429728  bl 0x10675c
  042972c  nop
  0429730  li 4, 255
  0429734  ori 29, 3, 0
  0429738  cmpwi 29, 0
  042973c  stb 4, 164(31)
  0429740  bt 2, 0x429cfc
  0429744  lis 3, 67
  0429748  lwz 4, 44(29)
  042974c  addi 3, 3, -27048
  0429750  cmpwi 4, 0
  0429754  li 29, 0
  0429758  lfs 26, 0(3)
  042975c  bf 1, 0x429cfc
  0429760  li 3, 0
  0429764  li 4, 16
  0429768  ori 5, 31, 0
  042976c  bl 0x15d12c
  0429770  nop
  0429774  lis 3, 67
  0429778  ori 30, 29, 0
  042977c  addi 3, 3, -27048
  0429780  lfs 1, 12(3)
  0429784  lfs 24, 4(3)
  0429788  lfs 25, 8(3)
  042978c  lfs 2, 48(3)
  0429790  lfs 17, 16(3)
  0429794  lfs 18, 20(3)
  0429798  lfs 19, 24(3)
  042979c  lfs 20, 28(3)
  04297a0  lfs 21, 32(3)
  04297a4  lfs 22, 36(3)
  04297a8  stfd 1, 240(1)
  04297ac  lfs 31, 40(3)
  04297b0  lfs 30, 44(3)
  04297b4  lfs 23, 52(3)
  04297b8  lfs 29, 56(3)
  04297bc  lfs 28, 60(3)
  04297c0  stfd 2, 232(1)
  04297c4  fmr 1, 24
  04297c8  stw 29, 144(1)
  04297cc  fmr 2, 25
  04297d0  stw 29, 148(1)
  04297d4  stw 29, 152(1)
  04297d8  stw 29, 156(1)
  04297dc  bl 0xfcbe8
  04297e0  nop
  04297e4  stfs 1, 144(1)
  04297e8  fmr 1, 24
  04297ec  fmr 2, 25
  04297f0  bl 0xfcbe8
  04297f4  nop
  04297f8  stfs 1, 148(1)
  04297fc  fmr 2, 25
  0429800  fmr 1, 24
  0429804  bl 0xfcbe8
  0429808  nop
  042980c  stfs 1, 152(1)
  0429810  stw 29, 160(1)
  0429814  fmr 2, 25
  0429818  stw 29, 164(1)
  042981c  fmr 1, 24
  0429820  stw 29, 168(1)
  0429824  stw 29, 172(1)
  0429828  bl 0xfcbe8
  042982c  nop
  0429830  lfd 2, 240(1)
  0429834  lfs 3, 72(31)
  0429838  fadds 2, 3, 2
  042983c  fsubs 3, 17, 2
  0429840  fsubs 4, 18, 2
  0429844  fsub 5, 2, 3
  0429848  fsel 2, 5, 3, 2
  042984c  fsub 3, 4, 2
  0429850  fsel 3, 3, 4, 2
  0429854  fmr 2, 30
  0429858  fmuls 4, 3, 3
  042985c  fmuls 5, 4, 3
  0429860  fmuls 6, 4, 5
  0429864  fmadds 3, 5, 19, 3
  0429868  fmuls 5, 4, 6
  042986c  fmadds 3, 6, 20, 3
  0429870  fmuls 4, 4, 5
  0429874  fmadds 3, 5, 21, 3
  0429878  fmadds 3, 4, 22, 3
  042987c  fmuls 3, 1, 3
  0429880  fmr 1, 31
  0429884  stfs 3, 160(1)
  0429888  bl 0xfcbe8
  042988c  nop
  0429890  lfs 2, 72(31)
  0429894  fsubs 3, 17, 2
  0429898  fsubs 4, 18, 2
  042989c  fsub 5, 2, 3
  04298a0  fsel 2, 5, 3, 2
  04298a4  lfd 5, 232(1)
  04298a8  fsub 3, 4, 2
  04298ac  fsel 2, 3, 4, 2
  04298b0  fmuls 3, 2, 2
  04298b4  fmuls 4, 3, 2
  04298b8  fmuls 6, 3, 4
  04298bc  fmadds 4, 4, 19, 2
  04298c0  fmr 2, 5
  04298c4  fmuls 5, 3, 6
  04298c8  fmadds 4, 6, 20, 4
  04298cc  fmuls 3, 3, 5
  04298d0  fmadds 4, 5, 21, 4
  04298d4  fmadds 3, 3, 22, 4
  04298d8  fmuls 3, 1, 3
  04298dc  fmr 1, 26
  04298e0  stfs 3, 164(1)
  04298e4  bl 0xfcbe8
  04298e8  nop
  04298ec  lfs 2, 160(1)
  04298f0  lfs 3, 16(31)
  04298f4  lfs 4, 164(1)
  04298f8  fadds 3, 2, 3
  04298fc  lfs 2, 20(31)
  0429900  lfs 5, 24(31)
  0429904  fadds 4, 4, 2
  0429908  fadds 5, 1, 5
  042990c  fmr 1, 23
  0429910  fmr 2, 29
  0429914  stfs 3, 160(1)
  0429918  stfs 4, 164(1)
  042991c  stfs 5, 168(1)
  0429920  bl 0xfcbe8
  0429924  nop
  0429928  lfs 3, 148(1)
  042992c  lfs 4, 144(1)
  0429930  fmuls 2, 3, 3
  0429934  lfs 5, 152(1)
  0429938  lis 3, 114
  042993c  lfs 6, -3052(3)
  0429940  fmadds 2, 4, 4, 2
  0429944  fmuls 6, 1, 6
  0429948  fmr 1, 23
  042994c  fmadds 2, 5, 5, 2
  0429950  fsqrts 7, 2
  0429954  fmr 2, 25
  0429958  fdivs 6, 6, 7
  042995c  fsub 8, 26, 7
  0429960  fsub 9, 26, 7
  0429964  fsub 10, 26, 7
  0429968  fsub 11, 7, 26
  042996c  fsub 12, 7, 26
  0429970  fsub 7, 7, 26
  0429974  fmuls 4, 4, 6
  0429978  fmuls 3, 3, 6
  042997c  fmuls 5, 5, 6
  0429980  fsel 6, 8, 26, 4
  0429984  fsel 8, 9, 26, 3
  0429988  fsel 9, 10, 26, 5
  042998c  fsel 4, 11, 6, 4
  0429990  fsel 3, 12, 8, 3
  0429994  fsel 5, 7, 9, 5
  0429998  stfs 4, 144(1)
  042999c  stfs 3, 148(1)
  04299a0  stfs 5, 152(1)
  04299a4  bl 0xfcbe8
  04299a8  nop
  04299ac  li 3, 30
  04299b0  fmuls 27, 1, 28
  04299b4  li 4, 90
  04299b8  bl 0xfe484
  04299bc  nop
  04299c0  extsw 3, 3
  04299c4  lis 5, 24440
  04299c8  std 3, 248(1)
  04299cc  lis 3, 114
  04299d0  lis 6, 24
  04299d4  addic 4, 1, 144
  04299d8  ori 5, 5, 30840
  04299dc  lfs 2, -3056(3)
  04299e0  lfd 1, 248(1)
  04299e4  addic 3, 1, 160
  04299e8  fcfid 3, 1
  04299ec  ori 6, 6, 6168
  04299f0  fmr 1, 27
  04299f4  frsp 3, 3
  04299f8  fadds 3, 3, 23
  04299fc  fmuls 2, 2, 3
  0429a00  fctiwz 2, 2
  0429a04  stfd 2, 248(1)
  0429a08  lwz 8, 252(1)
  0429a0c  extsw 8, 8
  0429a10  bl 0x126dd8
  0429a14  nop
  0429a18  addic 30, 30, 1
  0429a1c  cmpwi 30, 200
  0429a20  bt 0, 0x4297c4
  0429a24  lis 3, 67
  0429a28  ori 30, 29, 0
  0429a2c  addi 3, 3, -27048
  0429a30  lfs 1, 64(3)
  0429a34  lfs 2, 68(3)
  0429a38  lfs 3, 72(3)
  0429a3c  lfs 4, 76(3)
  0429a40  lfs 5, 80(3)
  0429a44  lfs 14, 84(3)
  0429a48  lfs 15, 88(3)
  0429a4c  lfs 16, 92(3)
  0429a50  stfd 1, 224(1)
  0429a54  stfd 2, 216(1)
  0429a58  stfd 3, 208(1)
  0429a5c  stfd 4, 200(1)
  0429a60  stfd 5, 192(1)
  0429a64  fmr 1, 24
  0429a68  fmr 2, 25
  0429a6c  bl 0xfcbe8
  0429a70  nop
  0429a74  fmr 31, 1
  0429a78  fmr 1, 24
  0429a7c  fmr 2, 25
  0429a80  bl 0xfcbe8
  0429a84  nop
  0429a88  fmr 30, 1
  0429a8c  fmr 1, 24
  0429a90  fmr 2, 25
  0429a94  bl 0xfcbe8
  0429a98  nop
  0429a9c  lfd 2, 216(1)
  0429aa0  fmr 29, 1
  0429aa4  lfd 1, 224(1)
  0429aa8  bl 0xfcbe8
  0429aac  nop
  0429ab0  lfd 2, 240(1)
  0429ab4  lfs 3, 72(31)
  0429ab8  fadds 2, 3, 2
  0429abc  fmr 28, 1
  0429ac0  fsubs 3, 17, 2
  0429ac4  fsubs 4, 18, 2
  0429ac8  fsub 5, 2, 3
  0429acc  fsel 2, 5, 3, 2
  0429ad0  fsub 3, 4, 2
  0429ad4  fsel 3, 3, 4, 2
  0429ad8  lfd 2, 200(1)
  0429adc  lfd 1, 208(1)
  0429ae0  fmuls 4, 3, 3
  0429ae4  fmuls 5, 4, 3
  0429ae8  fmuls 6, 4, 5
  0429aec  fmadds 3, 5, 19, 3
  0429af0  fmuls 5, 4, 6
  0429af4  fmadds 3, 6, 20, 3
  0429af8  fmuls 4, 4, 5
  0429afc  fmadds 3, 5, 21, 3
  0429b00  fmadds 27, 4, 22, 3
  0429b04  bl 0xfcbe8
  0429b08  nop
  0429b0c  lfs 2, 72(31)
  0429b10  fsubs 3, 17, 2
  0429b14  fsubs 4, 18, 2
  0429b18  stfs 18, 264(1)
  0429b1c  fmr 18, 1
  0429b20  fmr 1, 23
  0429b24  fsub 5, 2, 3
  0429b28  fsel 2, 5, 3, 2
  0429b2c  fsub 3, 4, 2
  0429b30  fsel 3, 3, 4, 2
  0429b34  lfd 2, 232(1)
  0429b38  stfs 23, 268(1)
  0429b3c  stfs 19, 284(1)
  0429b40  stfs 20, 280(1)
  0429b44  stfs 21, 276(1)
  0429b48  stfs 22, 272(1)
  0429b4c  fmuls 4, 3, 3
  0429b50  fmuls 5, 4, 3
  0429b54  fmuls 6, 4, 5
  0429b58  fmadds 3, 5, 19, 3
  0429b5c  fmuls 5, 4, 6
  0429b60  fmadds 3, 6, 20, 3
  0429b64  fmuls 4, 4, 5
  0429b68  fmadds 3, 5, 21, 3
  0429b6c  fmadds 23, 4, 22, 3
  0429b70  bl 0xfcbe8
  0429b74  nop
  0429b78  lfs 21, 16(31)
  0429b7c  fmr 22, 1
  0429b80  lfd 2, 192(1)
  0429b84  fmr 1, 25
  0429b88  lfs 20, 20(31)
  0429b8c  lfs 19, 24(31)
  0429b90  bl 0xfcbe8
  0429b94  nop
  0429b98  fmuls 2, 30, 30
  0429b9c  lis 3, 114
  0429ba0  lfs 3, -3052(3)
  0429ba4  fmuls 1, 1, 3
  0429ba8  fmadds 2, 31, 31, 2
  0429bac  li 3, 3
  0429bb0  fmadds 2, 29, 29, 2
  0429bb4  fsqrts 2, 2
  0429bb8  fdivs 1, 1, 2
  0429bbc  fsub 3, 26, 2
  0429bc0  fsub 4, 26, 2
  0429bc4  fsub 5, 26, 2
  0429bc8  fsub 6, 2, 26
  0429bcc  fsub 7, 2, 26
  0429bd0  fsub 2, 2, 26
  0429bd4  fmuls 8, 29, 1
  0429bd8  fmuls 9, 30, 1
  0429bdc  fmuls 1, 31, 1
  0429be0  fsel 3, 3, 26, 8
  0429be4  fsel 4, 4, 26, 9
  0429be8  fsel 5, 5, 26, 1
  0429bec  fsel 31, 6, 3, 8
  0429bf0  fsel 30, 7, 4, 9
  0429bf4  fsel 29, 2, 5, 1
  0429bf8  bl 0xfc620
  0429bfc  nop
  0429c00  sldi 3, 3, 2
  0429c04  fmr 1, 14
  0429c08  li 4, 698
  0429c0c  fmr 2, 15
  0429c10  addc 3, 3, 1
  0429c14  li 5, 697
  0429c18  clrldi 3, 3, 32
  0429c1c  li 6, 696
  0429c20  stw 4, 184(1)
  0429c24  stw 5, 180(1)
  0429c28  stw 6, 176(1)
  0429c2c  lwz 3, 176(3)
  0429c30  stfs 15, 288(1)
  0429c34  extsw 28, 3
  0429c38  bl 0xfcbe8
  0429c3c  nop
  0429c40  li 3, 60
  0429c44  fmr 15, 1
  0429c48  li 4, 180
  0429c4c  bl 0xfe484
  0429c50  nop
  0429c54  fmadds 3, 28, 27, 21
  0429c58  fadds 4, 22, 19
  0429c5c  stfs 29, 64(1)
  0429c60  fmadds 5, 18, 23, 20
  0429c64  stfs 31, 72(1)
  0429c68  stfs 26, 60(1)
  0429c6c  ori 9, 3, 0
  0429c70  stfs 30, 68(1)
  0429c74  ori 7, 28, 0
  0429c78  stfs 26, 76(1)
  0429c7c  fmr 1, 15
  0429c80  fmr 2, 25
  0429c84  stfs 3, 48(1)
  0429c88  stfs 4, 56(1)
  0429c8c  fmr 3, 25
  0429c90  stfs 5, 52(1)
  0429c94  fmr 4, 16
  0429c98  std 29, 128(1)
  0429c9c  ld 5, 64(1)
  0429ca0  ld 6, 72(1)
  0429ca4  ld 3, 48(1)
  0429ca8  ld 4, 56(1)
  0429cac  bl 0x425540
  0429cb0  nop
  0429cb4  lfs 18, 264(1)
  0429cb8  lfs 23, 268(1)
  0429cbc  addic 30, 30, 1
  0429cc0  lfs 22, 272(1)
  0429cc4  lfs 21, 276(1)
  0429cc8  lfs 20, 280(1)
  0429ccc  cmpwi 30, 40
  0429cd0  lfs 19, 284(1)
  0429cd4  lfs 15, 288(1)
  0429cd8  bt 0, 0x429a64
  0429cdc  ori 3, 31, 0
  0429ce0  li 4, 0
  0429ce4  li 5, -1
  0429ce8  bl 0xfd8d0
  0429cec  nop
  0429cf0  ori 3, 31, 0
  0429cf4  bl 0xefb38
  0429cf8  nop
  0429cfc  ld 0, 496(1)
  0429d00  mtlr 0
  0429d04  lfd 14, 336(1)
  0429d08  lfd 15, 344(1)
  0429d0c  lfd 16, 352(1)
  0429d10  lfd 17, 360(1)
  0429d14  lfd 18, 368(1)
  0429d18  lfd 19, 376(1)
  0429d1c  lfd 20, 384(1)
  0429d20  lfd 21, 392(1)
  0429d24  lfd 22, 400(1)
  0429d28  lfd 23, 408(1)
  0429d2c  lfd 24, 416(1)
  0429d30  lfd 25, 424(1)
  0429d34  lfd 26, 432(1)
  0429d38  lfd 27, 440(1)
  0429d3c  lfd 28, 448(1)
  0429d40  lfd 29, 456(1)
  0429d44  lfd 30, 464(1)
  0429d48  lfd 31, 472(1)
  0429d4c  ld 28, 304(1)
  0429d50  ld 29, 312(1)
  0429d54  ld 30, 320(1)
  0429d58  ld 31, 328(1)
  0429d5c  addi 1, 1, 480
  0429d60  blr
