# game/update/moby429.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M429_003714d8:   # 0x3714d8, 0x14 bytes
  03714d8  lis 3, 132
  03714dc  lis 4, 1
  03714e0  addic 3, 3, 5404
  03714e4  stw 4, 72(3)
  03714e8  blr

UpdateMoby_429:   # 0x371520, 0x9d4 bytes
  0371520  stdu 1, -288(1)
  0371524  mflr 0
  0371528  std 0, 304(1)
  037152c  stfd 29, 264(1)
  0371530  stfd 30, 272(1)
  0371534  stfd 31, 280(1)
  0371538  std 31, 256(1)
  037153c  ori 31, 3, 0
  0371540  std 30, 248(1)
  0371544  lbz 3, 32(31)
  0371548  lwz 30, 120(31)
  037154c  cmpwi 3, 5
  0371550  cmpwi 1, 3, 4
  0371554  cmpwi 6, 3, 3
  0371558  std 29, 240(1)
  037155c  std 28, 232(1)
  0371560  std 27, 224(1)
  0371564  cmpwi 7, 3, 2
  0371568  bt 2, 0x371d48
  037156c  bt 6, 0x371a20
  0371570  bt 26, 0x371794
  0371574  bt 30, 0x371728
  0371578  cmpwi 3, 1
  037157c  bt 2, 0x3716f4
  0371580  cmpwi 3, 0
  0371584  bf 2, 0x371ec4
  0371588  lwz 3, 292(30)
  037158c  lwz 4, 192(30)
  0371590  ori 3, 3, 1
  0371594  cmpwi 4, 0
  0371598  stw 3, 292(30)
  037159c  bf 2, 0x3715a8
  03715a0  rlwinm 3, 3, 0, 0, 30
  03715a4  stw 3, 292(30)
  03715a8  lis 3, 151
  03715ac  addic 4, 3, -25376
  03715b0  ori 3, 30, 0
  03715b4  lwz 4, 8320(4)
  03715b8  ld 4, 56(4)
  03715bc  std 4, 56(31)
  03715c0  bl 0x100f8c
  03715c4  nop
  03715c8  lis 3, 15605
  03715cc  lis 4, 16000
  03715d0  lis 5, 16025
  03715d4  ori 3, 3, 49807
  03715d8  lis 6, 132
  03715dc  ori 5, 5, 39322
  03715e0  lis 7, 114
  03715e4  stw 4, 68(30)
  03715e8  stw 3, 60(30)
  03715ec  lis 4, 16384
  03715f0  stw 5, 64(30)
  03715f4  lfs 1, 5512(6)
  03715f8  lfs 2, -3052(7)
  03715fc  lwz 5, 56(30)
  0371600  fmuls 1, 1, 2
  0371604  ori 5, 5, 8
  0371608  lwz 3, 100(30)
  037160c  stw 4, 12(30)
  0371610  stw 4, 8(30)
  0371614  cmpwi 3, -1
  0371618  stw 5, 56(30)
  037161c  stfs 1, 36(30)
  0371620  bf 1, 0x3716b8
  0371624  lis 4, 165
  0371628  slwi 3, 3, 2
  037162c  addic 4, 4, 7136
  0371630  extsw 3, 3
  0371634  li 5, 3
  0371638  lwzx 3, 4, 3
  037163c  li 4, 0
  0371640  stw 3, 96(30)
  0371644  lfs 1, 16(3)
  0371648  stfs 1, 16(31)
  037164c  lfs 1, 20(3)
  0371650  stfs 1, 20(31)
  0371654  lfs 1, 24(3)
  0371658  stfs 1, 24(31)
  037165c  lfs 1, 28(3)
  0371660  stw 4, 80(30)
  0371664  stfs 1, 28(31)
  0371668  lbz 3, 83(31)
  037166c  stb 5, 32(31)
  0371670  cmpwi 3, 3
  0371674  bt 2, 0x3716c0
  0371678  lis 3, 55
  037167c  lis 4, 114
  0371680  addi 3, 3, 5360
  0371684  li 5, 0
  0371688  lfs 1, 0(3)
  037168c  lfs 2, -3056(4)
  0371690  ori 3, 31, 0
  0371694  fmuls 1, 2, 1
  0371698  li 4, 3
  037169c  fctiwz 1, 1
  03716a0  stfd 1, 200(1)
  03716a4  lwz 6, 204(1)
  03716a8  extsw 6, 6
  03716ac  bl 0xfddc0
  03716b0  nop
  03716b4  b 0x3716c0
  03716b8  li 3, 5
  03716bc  stb 3, 32(31)
  03716c0  lwz 3, 300(30)
  03716c4  cmpwi 3, 3
  03716c8  bf 2, 0x3716e4
  03716cc  lis 3, 101
  03716d0  li 4, -1
  03716d4  addic 3, 3, 26536
  03716d8  stw 4, 304(30)
  03716dc  stw 3, 160(30)
  03716e0  b 0x371ec4
  03716e4  lis 3, 101
  03716e8  addic 3, 3, 26552
  03716ec  stw 3, 160(30)
  03716f0  b 0x371ec4
  03716f4  lwz 3, 292(30)
  03716f8  clrlwi 3, 3, 31
  03716fc  cmpwi 3, 0
  0371700  bt 2, 0x371ec4
  0371704  ori 3, 31, 0
  0371708  addic 4, 30, 128
  037170c  bl 0x4d3870
  0371710  nop
  0371714  cmpwi 3, 0
  0371718  bt 2, 0x371ec4
  037171c  li 3, 2
  0371720  stb 3, 32(31)
  0371724  b 0x371ec4
  0371728  lis 3, 161
  037172c  lwz 3, 1800(3)
  0371730  cmpwi 3, 2
  0371734  bt 2, 0x371ec4
  0371738  li 3, 255
  037173c  stb 3, 136(30)
  0371740  lbz 3, 83(31)
  0371744  cmpwi 3, 3
  0371748  bt 2, 0x371788
  037174c  lis 3, 55
  0371750  lis 4, 114
  0371754  addi 3, 3, 5360
  0371758  li 5, 0
  037175c  lfs 1, 4(3)
  0371760  lfs 2, -3056(4)
  0371764  ori 3, 31, 0
  0371768  li 4, 3
  037176c  fmuls 1, 2, 1
  0371770  fctiwz 1, 1
  0371774  stfd 1, 200(1)
  0371778  lwz 6, 204(1)
  037177c  extsw 6, 6
  0371780  bl 0xfddc0
  0371784  nop
  0371788  li 3, 3
  037178c  stb 3, 32(31)
  0371790  b 0x371ec4
  0371794  ori 3, 31, 0
  0371798  bl 0xefe40
  037179c  nop
  03717a0  lis 3, 55
  03717a4  addi 3, 3, 5360
  03717a8  lfs 2, 8(3)
  03717ac  fcmpu 0, 1, 2
  03717b0  bt 0, 0x3719bc
  03717b4  lis 3, 55
  03717b8  addi 3, 3, 5360
  03717bc  lfs 2, 12(3)
  03717c0  fcmpu 0, 1, 2
  03717c4  bt 1, 0x3719bc
  03717c8  lwz 3, 96(30)
  03717cc  lfs 1, 16(31)
  03717d0  lfs 2, 20(31)
  03717d4  lis 4, 115
  03717d8  lfs 3, 32(3)
  03717dc  lfs 4, 36(3)
  03717e0  fsubs 1, 3, 1
  03717e4  lis 3, 55
  03717e8  fsubs 2, 4, 2
  03717ec  addi 3, 3, 5360
  03717f0  addic 4, 4, 22784
  03717f4  fabs 3, 1
  03717f8  fabs 5, 2
  03717fc  stfs 1, 124(1)
  0371800  stfs 2, 128(1)
  0371804  fsubs 1, 3, 5
  0371808  stfs 1, 132(1)
  037180c  lwz 5, 124(1)
  0371810  lfs 4, 16(3)
  0371814  lfs 1, 124(1)
  0371818  lwz 3, 128(1)
  037181c  lfs 2, 128(1)
  0371820  lwz 6, 132(1)
  0371824  rlwinm 3, 3, 3, 29, 29
  0371828  fabs 6, 2
  037182c  lfs 2, 132(1)
  0371830  fabs 1, 1
  0371834  rlwimi 3, 6, 2, 30, 30
  0371838  fsub 7, 2, 4
  037183c  rlwimi 3, 5, 4, 28, 28
  0371840  fsub 8, 2, 4
  0371844  ori 5, 4, 0
  0371848  rlwimi 5, 3, 2, 26, 28
  037184c  slwi 3, 3, 2
  0371850  clrldi 5, 5, 32
  0371854  fsel 5, 7, 1, 5
  0371858  lfsx 1, 4, 3
  037185c  lfs 2, 4(5)
  0371860  fsel 3, 8, 6, 3
  0371864  fcmpu 0, 5, 4
  0371868  bt 1, 0x371870
  037186c  b 0x371990
  0371870  fsubs 6, 3, 5
  0371874  fadds 3, 3, 5
  0371878  addic 3, 1, 16
  037187c  li 7, 2
  0371880  addic 4, 3, 152
  0371884  addic 5, 3, 168
  0371888  mtctr 7
  037188c  fdivs 3, 6, 3
  0371890  fmuls 5, 3, 3
  0371894  stfs 3, 180(1)
  0371898  stfs 3, 172(1)
  037189c  stfs 3, 176(1)
  03718a0  stfs 3, 168(1)
  03718a4  lfs 7, 180(1)
  03718a8  lfs 8, 172(1)
  03718ac  lfs 9, 176(1)
  03718b0  fmuls 6, 5, 5
  03718b4  fmuls 8, 8, 5
  03718b8  fmuls 7, 7, 6
  03718bc  fmuls 3, 6, 6
  03718c0  fmuls 6, 9, 6
  03718c4  stfs 8, 172(1)
  03718c8  fmuls 5, 7, 5
  03718cc  stfs 6, 176(1)
  03718d0  stfs 5, 180(1)
  03718d4  lfs 5, 152(3)
  03718d8  fmuls 5, 5, 3
  03718dc  stfs 5, 168(3)
  03718e0  lfs 5, 4(4)
  03718e4  addic 3, 3, 8
  03718e8  addic 4, 4, 8
  03718ec  fmuls 5, 5, 3
  03718f0  stfs 5, 4(5)
  03718f4  addic 5, 5, 8
  03718f8  bdnz 0x3718d4
  03718fc  li 5, 4
  0371900  ori 3, 1, 0
  0371904  mtctr 5
  0371908  lis 4, 115
  037190c  addic 5, 3, 168
  0371910  addic 4, 4, 22752
  0371914  ori 6, 5, 0
  0371918  lfs 3, 168(3)
  037191c  lfs 5, 0(4)
  0371920  fmuls 3, 3, 5
  0371924  lfs 5, 4(4)
  0371928  addic 4, 4, 8
  037192c  stfs 3, 168(3)
  0371930  lfs 3, 4(5)
  0371934  addic 3, 3, 8
  0371938  fmuls 3, 3, 5
  037193c  stfs 3, 4(5)
  0371940  addic 5, 5, 8
  0371944  bdnz 0x371918
  0371948  ori 3, 1, 0
  037194c  mtctr 7
  0371950  lfs 3, 168(3)
  0371954  fadds 3, 4, 3
  0371958  lfs 4, 4(6)
  037195c  addic 3, 3, 16
  0371960  lfs 5, 8(6)
  0371964  lfs 6, 12(6)
  0371968  addic 6, 6, 16
  037196c  fadds 3, 3, 4
  0371970  fadds 4, 3, 5
  0371974  fadds 4, 4, 6
  0371978  bdnz 0x371950
  037197c  lis 3, 55
  0371980  addi 3, 3, 5360
  0371984  lfs 3, 20(3)
  0371988  fadds 4, 4, 3
  037198c  fmadds 4, 4, 1, 2
  0371990  lis 3, 55
  0371994  fmr 1, 4
  0371998  addic 5, 30, 296
  037199c  addi 4, 3, 5360
  03719a0  ori 3, 31, 0
  03719a4  lfs 4, 32(4)
  03719a8  lfs 2, 24(4)
  03719ac  lfs 5, 28(4)
  03719b0  fmr 3, 5
  03719b4  bl 0xff2e8
  03719b8  nop
  03719bc  lbz 3, 112(31)
  03719c0  rlwinm 3, 3, 0, 30, 30
  03719c4  cmpwi 3, 0
  03719c8  bt 2, 0x371ec4
  03719cc  lbz 3, 83(31)
  03719d0  cmpwi 3, 2
  03719d4  bt 2, 0x371a14
  03719d8  lis 3, 55
  03719dc  lis 4, 114
  03719e0  addi 3, 3, 5360
  03719e4  li 5, 0
  03719e8  lfs 1, 4(3)
  03719ec  lfs 2, -3056(4)
  03719f0  ori 3, 31, 0
  03719f4  fmuls 1, 2, 1
  03719f8  li 4, 2
  03719fc  fctiwz 1, 1
  0371a00  stfd 1, 200(1)
  0371a04  lwz 6, 204(1)
  0371a08  extsw 6, 6
  0371a0c  bl 0xfddc0
  0371a10  nop
  0371a14  li 3, 4
  0371a18  stb 3, 32(31)
  0371a1c  b 0x371ec4
  0371a20  lwz 3, 96(30)
  0371a24  lwz 4, 80(30)
  0371a28  lbz 5, 84(30)
  0371a2c  extsb 5, 5
  0371a30  lwz 6, 0(3)
  0371a34  addc 4, 4, 6
  0371a38  addc 29, 4, 5
  0371a3c  lfs 1, 16(31)
  0371a40  divw 4, 29, 6
  0371a44  mullw 4, 4, 6
  0371a48  lfs 2, 20(31)
  0371a4c  subc 29, 29, 4
  0371a50  sldi 28, 29, 4
  0371a54  addc 3, 3, 28
  0371a58  clrldi 3, 3, 32
  0371a5c  lis 4, 115
  0371a60  lfs 3, 16(3)
  0371a64  lfs 4, 20(3)
  0371a68  fsubs 1, 3, 1
  0371a6c  lis 3, 55
  0371a70  fsubs 2, 4, 2
  0371a74  addi 3, 3, 5360
  0371a78  addic 4, 4, 22784
  0371a7c  fabs 3, 1
  0371a80  fabs 4, 2
  0371a84  stfs 1, 112(1)
  0371a88  stfs 2, 116(1)
  0371a8c  fsubs 1, 3, 4
  0371a90  stfs 1, 120(1)
  0371a94  lwz 5, 112(1)
  0371a98  lfs 31, 16(3)
  0371a9c  lfs 1, 112(1)
  0371aa0  lwz 3, 116(1)
  0371aa4  lfs 2, 116(1)
  0371aa8  lwz 6, 120(1)
  0371aac  rlwinm 3, 3, 3, 29, 29
  0371ab0  fabs 5, 2
  0371ab4  lfs 2, 120(1)
  0371ab8  fabs 1, 1
  0371abc  rlwimi 3, 6, 2, 30, 30
  0371ac0  fsub 6, 2, 31
  0371ac4  rlwimi 3, 5, 4, 28, 28
  0371ac8  fsub 7, 2, 31
  0371acc  ori 5, 4, 0
  0371ad0  rlwimi 5, 3, 2, 26, 28
  0371ad4  slwi 3, 3, 2
  0371ad8  clrldi 5, 5, 32
  0371adc  fsel 4, 6, 1, 4
  0371ae0  lfsx 1, 4, 3
  0371ae4  lfs 2, 4(5)
  0371ae8  fsel 3, 7, 5, 3
  0371aec  fcmpu 0, 4, 31
  0371af0  bt 1, 0x371afc
  0371af4  fmr 1, 31
  0371af8  b 0x371c20
  0371afc  fsubs 5, 3, 4
  0371b00  fadds 3, 3, 4
  0371b04  addic 3, 1, 16
  0371b08  li 6, 2
  0371b0c  addic 5, 3, 136
  0371b10  addic 4, 3, 120
  0371b14  mtctr 6
  0371b18  fdivs 3, 5, 3
  0371b1c  fmuls 4, 3, 3
  0371b20  stfs 3, 148(1)
  0371b24  stfs 3, 140(1)
  0371b28  stfs 3, 144(1)
  0371b2c  stfs 3, 136(1)
  0371b30  lfs 6, 148(1)
  0371b34  lfs 7, 140(1)
  0371b38  lfs 8, 144(1)
  0371b3c  fmuls 5, 4, 4
  0371b40  fmuls 7, 7, 4
  0371b44  fmuls 6, 6, 5
  0371b48  fmuls 3, 5, 5
  0371b4c  fmuls 5, 8, 5
  0371b50  stfs 7, 140(1)
  0371b54  fmuls 4, 6, 4
  0371b58  stfs 5, 144(1)
  0371b5c  stfs 4, 148(1)
  0371b60  lfs 4, 120(3)
  0371b64  fmuls 4, 4, 3
  0371b68  stfs 4, 136(3)
  0371b6c  lfs 4, 4(4)
  0371b70  addic 4, 4, 8
  0371b74  fmuls 4, 4, 3
  0371b78  addic 3, 3, 8
  0371b7c  stfs 4, 4(5)
  0371b80  addic 5, 5, 8
  0371b84  bdnz 0x371b60
  0371b88  li 5, 4
  0371b8c  ori 3, 1, 0
  0371b90  mtctr 5
  0371b94  lis 4, 115
  0371b98  addic 5, 3, 136
  0371b9c  addic 4, 4, 22752
  0371ba0  ori 7, 5, 0
  0371ba4  lfs 3, 136(3)
  0371ba8  lfs 4, 0(4)
  0371bac  fmuls 3, 3, 4
  0371bb0  lfs 4, 4(4)
  0371bb4  addic 4, 4, 8
  0371bb8  stfs 3, 136(3)
  0371bbc  lfs 3, 4(5)
  0371bc0  addic 3, 3, 8
  0371bc4  fmuls 3, 3, 4
  0371bc8  stfs 3, 4(5)
  0371bcc  addic 5, 5, 8
  0371bd0  bdnz 0x371ba4
  0371bd4  ori 3, 1, 0
  0371bd8  fmr 3, 31
  0371bdc  mtctr 6
  0371be0  lfs 4, 136(3)
  0371be4  fadds 3, 3, 4
  0371be8  lfs 4, 4(7)
  0371bec  addic 3, 3, 16
  0371bf0  lfs 5, 8(7)
  0371bf4  lfs 6, 12(7)
  0371bf8  addic 7, 7, 16
  0371bfc  fadds 3, 3, 4
  0371c00  fadds 3, 3, 5
  0371c04  fadds 3, 3, 6
  0371c08  bdnz 0x371be0
  0371c0c  lis 3, 55
  0371c10  addi 3, 3, 5360
  0371c14  lfs 4, 20(3)
  0371c18  fadds 3, 3, 4
  0371c1c  fmadds 1, 3, 1, 2
  0371c20  lis 3, 55
  0371c24  addic 5, 30, 296
  0371c28  addi 27, 3, 5360
  0371c2c  ori 3, 31, 0
  0371c30  lfs 2, 24(27)
  0371c34  lfs 3, 28(27)
  0371c38  lfs 4, 32(27)
  0371c3c  bl 0xff2e8
  0371c40  nop
  0371c44  lwz 3, 96(30)
  0371c48  lfs 1, 20(31)
  0371c4c  addc 3, 3, 28
  0371c50  lfs 2, 16(31)
  0371c54  clrldi 3, 3, 32
  0371c58  lfs 3, 24(31)
  0371c5c  lis 4, 114
  0371c60  lfs 4, 20(3)
  0371c64  lfs 5, 16(3)
  0371c68  fsubs 6, 4, 1
  0371c6c  lfs 8, 24(3)
  0371c70  fsubs 7, 5, 2
  0371c74  fsubs 9, 8, 3
  0371c78  lis 3, 132
  0371c7c  fmuls 10, 6, 6
  0371c80  lfs 11, 5512(3)
  0371c84  lfs 12, -3052(4)
  0371c88  fmuls 11, 11, 12
  0371c8c  fmadds 10, 7, 7, 10
  0371c90  fmadds 10, 9, 9, 10
  0371c94  fsqrts 10, 10
  0371c98  fdivs 11, 11, 10
  0371c9c  fsub 12, 31, 10
  0371ca0  fsub 13, 10, 31
  0371ca4  fsub 0, 31, 10
  0371ca8  fsub 30, 31, 10
  0371cac  fsub 29, 10, 31
  0371cb0  fsub 10, 10, 31
  0371cb4  fmuls 6, 11, 6
  0371cb8  fmuls 7, 11, 7
  0371cbc  fmuls 9, 11, 9
  0371cc0  fsel 11, 12, 31, 6
  0371cc4  fsel 12, 0, 31, 7
  0371cc8  fsel 0, 30, 31, 9
  0371ccc  fsel 6, 13, 11, 6
  0371cd0  fsel 7, 29, 12, 7
  0371cd4  fsel 9, 10, 0, 9
  0371cd8  fadds 1, 1, 6
  0371cdc  fadds 2, 2, 7
  0371ce0  fadds 3, 3, 9
  0371ce4  fsubs 4, 1, 4
  0371ce8  fsubs 5, 2, 5
  0371cec  fsubs 6, 3, 8
  0371cf0  stfs 2, 16(31)
  0371cf4  stfs 1, 20(31)
  0371cf8  stfs 3, 24(31)
  0371cfc  lfs 2, 36(27)
  0371d00  fmuls 4, 4, 4
  0371d04  fmadds 4, 5, 5, 4
  0371d08  fmadds 4, 6, 6, 4
  0371d0c  fsqrts 1, 4
  0371d10  fcmpu 0, 1, 2
  0371d14  cror 6, 1, 2
  0371d18  bt 6, 0x371ec4
  0371d1c  lwz 3, 96(30)
  0371d20  lwz 3, 0(3)
  0371d24  addic 3, 3, -1
  0371d28  cmpw 29, 3
  0371d2c  bf 0, 0x371d38
  0371d30  stw 29, 80(30)
  0371d34  b 0x371ec4
  0371d38  ori 3, 31, 0
  0371d3c  bl 0xefb38
  0371d40  nop
  0371d44  b 0x371ec4
  0371d48  lis 3, 151
  0371d4c  lfs 1, 20(31)
  0371d50  addic 3, 3, -25376
  0371d54  lfs 2, 16(31)
  0371d58  lfs 3, 132(3)
  0371d5c  lfs 4, 128(3)
  0371d60  fsubs 1, 1, 3
  0371d64  fsubs 2, 2, 4
  0371d68  lis 3, 55
  0371d6c  addi 3, 3, 5360
  0371d70  fmuls 1, 1, 1
  0371d74  fmadds 1, 2, 2, 1
  0371d78  lfs 2, 40(3)
  0371d7c  fsqrts 1, 1
  0371d80  fcmpu 0, 1, 2
  0371d84  cror 6, 1, 2
  0371d88  bt 6, 0x371ebc
  0371d8c  lwz 3, 300(30)
  0371d90  cmpwi 3, 3
  0371d94  bf 2, 0x371ebc
  0371d98  lis 3, 165
  0371d9c  addic 6, 3, 14692
  0371da0  lbz 3, 176(31)
  0371da4  lhz 5, 178(31)
  0371da8  addic 4, 3, 2
  0371dac  extsh 5, 5
  0371db0  cmpwi 3, 255
  0371db4  stbx 4, 6, 5
  0371db8  bt 2, 0x371dfc
  0371dbc  lis 6, 162
  0371dc0  addic 6, 6, 704
  0371dc4  lbzx 6, 3, 6
  0371dc8  cmpwi 6, 255
  0371dcc  bt 2, 0x371e08
  0371dd0  lis 6, 151
  0371dd4  lis 7, 161
  0371dd8  addic 7, 7, -13692
  0371ddc  lwz 6, -25488(6)
  0371de0  addc 3, 3, 7
  0371de4  slwi 6, 6, 4
  0371de8  clrldi 3, 3, 32
  0371dec  extsw 6, 6
  0371df0  lbzx 3, 3, 6
  0371df4  cmpwi 3, 255
  0371df8  bf 2, 0x371e08
  0371dfc  lis 3, 165
  0371e00  addic 3, 3, 17860
  0371e04  stbx 4, 3, 5
  0371e08  lwz 3, 304(30)
  0371e0c  cmpwi 3, -1
  0371e10  bf 2, 0x371e4c
  0371e14  li 3, 12
  0371e18  lis 5, 112
  0371e1c  lis 6, 112
  0371e20  lis 7, 112
  0371e24  li 4, 0
  0371e28  addic 5, 5, 22352
  0371e2c  li 8, 0
  0371e30  li 9, 0
  0371e34  addic 6, 6, 22360
  0371e38  addic 7, 7, 22408
  0371e3c  bl 0xc8444
  0371e40  nop
  0371e44  stw 3, 304(30)
  0371e48  b 0x371e5c
  0371e4c  extsw 3, 3
  0371e50  li 4, 10
  0371e54  bl 0xc90a0
  0371e58  nop
  0371e5c  lis 3, 150
  0371e60  addic 3, 3, 19008
  0371e64  lwz 3, 164(3)
  0371e68  rlwinm 3, 3, 0, 27, 27
  0371e6c  cmpwi 3, 0
  0371e70  bt 2, 0x371ec4
  0371e74  lis 3, 151
  0371e78  lwz 3, -25440(3)
  0371e7c  cmpwi 3, 1000
  0371e80  bt 0, 0x371ec4
  0371e84  lis 4, 151
  0371e88  addic 3, 3, -1000
  0371e8c  lis 5, 164
  0371e90  stw 3, -25440(4)
  0371e94  lwz 3, 308(30)
  0371e98  lwz 4, -28512(5)
  0371e9c  slwi 3, 3, 8
  0371ea0  addc 3, 4, 3
  0371ea4  clrldi 3, 3, 32
  0371ea8  bl 0x44cddc
  0371eac  nop
  0371eb0  li 3, 6
  0371eb4  stb 3, 32(31)
  0371eb8  b 0x371ec4
  0371ebc  li 3, -1
  0371ec0  stw 3, 304(30)
  0371ec4  ld 0, 304(1)
  0371ec8  mtlr 0
  0371ecc  lfd 29, 264(1)
  0371ed0  lfd 30, 272(1)
  0371ed4  lfd 31, 280(1)
  0371ed8  ld 27, 224(1)
  0371edc  ld 28, 232(1)
  0371ee0  ld 29, 240(1)
  0371ee4  ld 30, 248(1)
  0371ee8  ld 31, 256(1)
  0371eec  addi 1, 1, 288
  0371ef0  blr
