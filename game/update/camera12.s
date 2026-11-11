# game/update/camera12.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_CAMERA12:   # 0x38640, 0x14 bytes
  0038640  lis 3, 114
  0038644  lis 4, 1
  0038648  addic 3, 3, -10428
  003864c  stw 4, 72(3)
  0038650  blr

Cam12_IsHeroInVolume:   # 0x38658, 0x80 bytes
  0038658  stdu 1, -112(1)
  003865c  mflr 0
  0038660  std 0, 128(1)
  0038664  lwz 5, 20(3)
  0038668  cmpwi 5, 0
  003866c  bt 0, 0x386a0
  0038670  lis 3, 165
  0038674  slwi 5, 5, 2
  0038678  addic 6, 3, 7136
  003867c  extsw 5, 5
  0038680  ori 3, 4, 0
  0038684  lwzx 5, 6, 5
  0038688  addic 4, 5, 16
  003868c  lwz 5, 0(5)
  0038690  extsw 5, 5
  0038694  bl 0x104e44
  0038698  nop
  003869c  b 0x386c8
  00386a0  lwz 3, 12(3)
  00386a4  cmpwi 3, 0
  00386a8  bt 0, 0x386c4
  00386ac  extsw 5, 3
  00386b0  ori 3, 4, 0
  00386b4  ori 4, 5, 0
  00386b8  bl 0x110b70
  00386bc  nop
  00386c0  b 0x386c8
  00386c4  li 3, 0
  00386c8  ld 0, 128(1)
  00386cc  mtlr 0
  00386d0  addi 1, 1, 112
  00386d4  blr

Cam12_000386e8:   # 0x386e8, 0x4ac bytes
  00386e8  stdu 1, -192(1)
  00386ec  mflr 0
  00386f0  std 0, 208(1)
  00386f4  stfd 26, 144(1)
  00386f8  stfd 27, 152(1)
  00386fc  stfd 28, 160(1)
  0038700  stfd 29, 168(1)
  0038704  stfd 30, 176(1)
  0038708  stfd 31, 184(1)
  003870c  std 30, 128(1)
  0038710  lis 30, 149
  0038714  lwz 4, 112(3)
  0038718  addic 30, 30, 5056
  003871c  lfs 1, 448(30)
  0038720  lwz 5, 96(4)
  0038724  lfs 3, 100(4)
  0038728  lfs 2, 452(30)
  003872c  lfs 4, 456(30)
  0038730  lfs 5, 16(5)
  0038734  std 31, 136(1)
  0038738  fmadds 1, 1, 3, 5
  003873c  ori 31, 3, 0
  0038740  stfs 1, 112(1)
  0038744  lfs 5, 20(5)
  0038748  fmadds 2, 2, 3, 5
  003874c  stfs 2, 116(1)
  0038750  lfs 5, 24(5)
  0038754  fmadds 3, 4, 3, 5
  0038758  stfs 3, 120(1)
  003875c  lfs 4, 28(5)
  0038760  stfs 4, 124(1)
  0038764  lfs 5, 20(5)
  0038768  lfs 6, 52(4)
  003876c  lfs 7, 16(5)
  0038770  fsubs 29, 5, 6
  0038774  lfs 6, 48(4)
  0038778  lfs 5, 452(30)
  003877c  fsubs 30, 7, 6
  0038780  lfs 6, 24(5)
  0038784  lfs 7, 56(4)
  0038788  lfs 0, 448(30)
  003878c  fsubs 28, 6, 7
  0038790  lfs 6, 456(30)
  0038794  fmuls 7, 29, 5
  0038798  lis 5, 4
  003879c  addi 5, 5, -31016
  00387a0  fmadds 7, 30, 0, 7
  00387a4  lfs 31, 0(5)
  00387a8  fmr 8, 31
  00387ac  lfs 11, 112(4)
  00387b0  lfs 12, 116(4)
  00387b4  lfs 13, 120(4)
  00387b8  fmadds 7, 28, 6, 7
  00387bc  fmr 9, 8
  00387c0  fnmsubs 29, 5, 7, 29
  00387c4  fnmsubs 30, 0, 7, 30
  00387c8  fnmsubs 28, 6, 7, 28
  00387cc  fmr 10, 9
  00387d0  fmuls 7, 29, 29
  00387d4  fmadds 7, 30, 30, 7
  00387d8  fmadds 7, 28, 28, 7
  00387dc  fsqrts 27, 7
  00387e0  fcmpu 0, 27, 10
  00387e4  bt 2, 0x38838
  00387e8  frsqrte 8, 7
  00387ec  lis 3, 4
  00387f0  addi 3, 3, -31016
  00387f4  lfs 9, 4(3)
  00387f8  lfs 10, 8(3)
  00387fc  fmuls 27, 7, 8
  0038800  fmuls 26, 9, 8
  0038804  fnmsubs 27, 27, 8, 10
  0038808  fmadds 8, 27, 26, 8
  003880c  fmuls 27, 7, 8
  0038810  fmuls 26, 9, 8
  0038814  fnmsubs 27, 27, 8, 10
  0038818  fmadds 8, 27, 26, 8
  003881c  fmuls 7, 7, 8
  0038820  fmuls 9, 9, 8
  0038824  fnmsubs 7, 7, 8, 10
  0038828  fmadds 8, 7, 9, 8
  003882c  fmuls 10, 30, 8
  0038830  fmuls 9, 29, 8
  0038834  fmuls 8, 28, 8
  0038838  fmuls 29, 0, 8
  003883c  fmuls 30, 6, 9
  0038840  fmuls 28, 5, 10
  0038844  fmsubs 29, 6, 10, 29
  0038848  fmsubs 30, 5, 8, 30
  003884c  fmsubs 28, 0, 9, 28
  0038850  fmuls 5, 29, 29
  0038854  fmadds 0, 30, 30, 5
  0038858  fmr 5, 31
  003885c  fmadds 0, 28, 28, 0
  0038860  fmr 6, 5
  0038864  fsqrts 27, 0
  0038868  fmr 7, 6
  003886c  fcmpu 0, 27, 7
  0038870  bt 2, 0x388c4
  0038874  frsqrte 5, 0
  0038878  lis 3, 4
  003887c  addi 3, 3, -31016
  0038880  lfs 6, 4(3)
  0038884  lfs 7, 8(3)
  0038888  fmuls 27, 0, 5
  003888c  fmuls 26, 6, 5
  0038890  fnmsubs 27, 27, 5, 7
  0038894  fmadds 5, 27, 26, 5
  0038898  fmuls 27, 0, 5
  003889c  fmuls 26, 6, 5
  00388a0  fnmsubs 27, 27, 5, 7
  00388a4  fmadds 5, 27, 26, 5
  00388a8  fmuls 0, 0, 5
  00388ac  fmuls 6, 6, 5
  00388b0  fnmsubs 7, 0, 5, 7
  00388b4  fmadds 5, 7, 6, 5
  00388b8  fmuls 7, 30, 5
  00388bc  fmuls 6, 29, 5
  00388c0  fmuls 5, 28, 5
  00388c4  fmuls 29, 9, 7
  00388c8  fmuls 0, 8, 6
  00388cc  stfs 4, 60(31)
  00388d0  fmuls 28, 7, 12
  00388d4  fmuls 30, 10, 5
  00388d8  fmuls 27, 6, 12
  00388dc  fmuls 12, 5, 12
  00388e0  lis 5, 149
  00388e4  addic 3, 1, 112
  00388e8  addic 4, 31, 48
  00388ec  fmsubs 6, 10, 6, 29
  00388f0  fmsubs 5, 9, 5, 0
  00388f4  fmadds 10, 10, 11, 28
  00388f8  fmsubs 7, 8, 7, 30
  00388fc  fmadds 9, 9, 11, 27
  0038900  fmadds 8, 8, 11, 12
  0038904  li 6, 0
  0038908  lwz 5, 16516(5)
  003890c  li 7, 0
  0038910  extsw 5, 5
  0038914  fmadds 4, 5, 13, 10
  0038918  fmadds 5, 7, 13, 9
  003891c  fmadds 6, 6, 13, 8
  0038920  fsubs 1, 1, 4
  0038924  fsubs 2, 2, 5
  0038928  fsubs 3, 3, 6
  003892c  stfs 1, 48(31)
  0038930  stfs 2, 52(31)
  0038934  stfs 3, 56(31)
  0038938  bl 0x57820
  003893c  nop
  0038940  lfs 1, 48(31)
  0038944  cmpwi 3, 0
  0038948  lfs 2, 52(31)
  003894c  lfs 3, 56(31)
  0038950  lfs 4, 124(1)
  0038954  lfs 5, 436(30)
  0038958  lfs 6, 440(30)
  003895c  lfs 7, 432(30)
  0038960  lfs 8, 112(1)
  0038964  lfs 9, 116(1)
  0038968  lfs 10, 120(1)
  003896c  bt 2, 0x389f8
  0038970  lis 3, 161
  0038974  addic 3, 3, 2368
  0038978  lfs 3, 36(3)
  003897c  lfs 2, 32(3)
  0038980  fsubs 3, 3, 9
  0038984  lfs 11, 40(3)
  0038988  fsubs 2, 2, 8
  003898c  fsubs 11, 11, 10
  0038990  fmuls 1, 3, 3
  0038994  fmadds 1, 2, 2, 1
  0038998  fmadds 1, 11, 11, 1
  003899c  fsqrts 1, 1
  00389a0  fcmpu 0, 1, 31
  00389a4  bf 2, 0x389c8
  00389a8  stfs 8, 48(31)
  00389ac  fmr 1, 8
  00389b0  stfs 9, 52(31)
  00389b4  fmr 2, 9
  00389b8  stfs 10, 56(31)
  00389bc  fmr 3, 10
  00389c0  stfs 4, 60(31)
  00389c4  b 0x389f8
  00389c8  lis 3, 4
  00389cc  addi 3, 3, -31016
  00389d0  lfs 12, 4(3)
  00389d4  fsubs 12, 1, 12
  00389d8  stfs 4, 60(31)
  00389dc  fdivs 12, 12, 1
  00389e0  fmadds 1, 2, 12, 8
  00389e4  fmadds 2, 3, 12, 9
  00389e8  fmadds 3, 11, 12, 10
  00389ec  stfs 1, 48(31)
  00389f0  stfs 2, 52(31)
  00389f4  stfs 3, 56(31)
  00389f8  fmr 11, 3
  00389fc  fsubs 3, 9, 2
  0038a00  fsubs 8, 8, 1
  0038a04  fmr 9, 31
  0038a08  fsubs 2, 10, 11
  0038a0c  fmuls 1, 3, 3
  0038a10  fmr 10, 9
  0038a14  fmadds 1, 8, 8, 1
  0038a18  fmr 11, 10
  0038a1c  fmadds 1, 2, 2, 1
  0038a20  fsqrts 12, 1
  0038a24  fcmpu 0, 12, 11
  0038a28  bt 2, 0x38a7c
  0038a2c  frsqrte 9, 1
  0038a30  lis 3, 4
  0038a34  addi 3, 3, -31016
  0038a38  lfs 10, 4(3)
  0038a3c  lfs 11, 8(3)
  0038a40  fmuls 12, 1, 9
  0038a44  fmuls 13, 10, 9
  0038a48  fnmsubs 12, 12, 9, 11
  0038a4c  fmadds 9, 12, 13, 9
  0038a50  fmuls 12, 1, 9
  0038a54  fmuls 13, 10, 9
  0038a58  fnmsubs 12, 12, 9, 11
  0038a5c  fmadds 9, 12, 13, 9
  0038a60  fmuls 1, 1, 9
  0038a64  fmuls 10, 10, 9
  0038a68  fnmsubs 1, 1, 9, 11
  0038a6c  fmadds 9, 1, 10, 9
  0038a70  fmuls 11, 8, 9
  0038a74  fmuls 10, 3, 9
  0038a78  fmuls 9, 2, 9
  0038a7c  fmuls 2, 7, 9
  0038a80  fmuls 1, 6, 10
  0038a84  stfs 4, 76(31)
  0038a88  stfs 4, 12(31)
  0038a8c  fmuls 3, 5, 11
  0038a90  stfs 11, 64(31)
  0038a94  li 3, 0
  0038a98  stfs 10, 68(31)
  0038a9c  stfs 9, 72(31)
  0038aa0  fmsubs 2, 6, 11, 2
  0038aa4  fmsubs 1, 5, 9, 1
  0038aa8  fmsubs 3, 7, 10, 3
  0038aac  fmr 5, 31
  0038ab0  stfs 11, 0(31)
  0038ab4  stfs 10, 4(31)
  0038ab8  stfs 9, 8(31)
  0038abc  fmuls 4, 2, 2
  0038ac0  stw 3, 28(31)
  0038ac4  fmr 6, 5
  0038ac8  fmadds 4, 1, 1, 4
  0038acc  fmadds 4, 3, 3, 4
  0038ad0  fsqrts 7, 4
  0038ad4  fcmpu 0, 7, 6
  0038ad8  bt 2, 0x38b2c
  0038adc  frsqrte 5, 4
  0038ae0  lis 3, 4
  0038ae4  addi 3, 3, -31016
  0038ae8  lfs 6, 4(3)
  0038aec  lfs 7, 8(3)
  0038af0  fmuls 8, 4, 5
  0038af4  fmuls 12, 6, 5
  0038af8  fnmsubs 8, 8, 5, 7
  0038afc  fmadds 5, 8, 12, 5
  0038b00  fmuls 8, 4, 5
  0038b04  fmuls 12, 6, 5
  0038b08  fnmsubs 8, 8, 5, 7
  0038b0c  fmadds 5, 8, 12, 5
  0038b10  fmuls 4, 4, 5
  0038b14  fmuls 6, 6, 5
  0038b18  fnmsubs 4, 4, 5, 7
  0038b1c  fmadds 31, 4, 6, 5
  0038b20  fmuls 6, 1, 31
  0038b24  fmuls 5, 2, 31
  0038b28  fmuls 31, 3, 31
  0038b2c  fmuls 1, 9, 5
  0038b30  fmuls 2, 11, 31
  0038b34  li 3, 0
  0038b38  fmuls 3, 10, 6
  0038b3c  stfs 6, 16(31)
  0038b40  stfs 5, 20(31)
  0038b44  stfs 31, 24(31)
  0038b48  stw 3, 44(31)
  0038b4c  fmsubs 1, 10, 31, 1
  0038b50  fmsubs 2, 9, 6, 2
  0038b54  fmsubs 3, 11, 5, 3
  0038b58  stfs 1, 32(31)
  0038b5c  stfs 2, 36(31)
  0038b60  stfs 3, 40(31)
  0038b64  ld 0, 208(1)
  0038b68  mtlr 0
  0038b6c  lfd 26, 144(1)
  0038b70  lfd 27, 152(1)
  0038b74  lfd 28, 160(1)
  0038b78  lfd 29, 168(1)
  0038b7c  lfd 30, 176(1)
  0038b80  lfd 31, 184(1)
  0038b84  ld 30, 128(1)
  0038b88  ld 31, 136(1)
  0038b8c  addi 1, 1, 192
  0038b90  blr

InitCamera_12:   # 0x38b94, 0x118 bytes
  0038b94  stdu 1, -128(1)
  0038b98  mflr 0
  0038b9c  std 0, 144(1)
  0038ba0  std 31, 120(1)
  0038ba4  ori 31, 3, 0
  0038ba8  std 30, 112(1)
  0038bac  lis 3, 114
  0038bb0  li 30, 0
  0038bb4  lis 4, 114
  0038bb8  lis 5, 151
  0038bbc  lwz 6, 112(31)
  0038bc0  lis 7, 114
  0038bc4  lfs 1, -10320(3)
  0038bc8  addic 3, 5, -25376
  0038bcc  lis 5, 114
  0038bd0  stfs 1, 112(6)
  0038bd4  stw 30, 116(6)
  0038bd8  lfs 1, -10316(4)
  0038bdc  stw 30, 124(6)
  0038be0  lis 4, 114
  0038be4  stfs 1, 120(6)
  0038be8  lwz 3, 8320(3)
  0038bec  lfs 1, -10312(7)
  0038bf0  stw 3, 96(6)
  0038bf4  lwz 7, 112(31)
  0038bf8  lis 3, 114
  0038bfc  stfs 1, 100(6)
  0038c00  lfs 1, -10308(5)
  0038c04  lis 5, 114
  0038c08  lis 6, 114
  0038c0c  stfs 1, 16(7)
  0038c10  lfs 1, -10304(4)
  0038c14  stw 30, 24(7)
  0038c18  lis 4, 149
  0038c1c  stfs 1, 20(7)
  0038c20  stw 30, 12(7)
  0038c24  stw 30, 8(7)
  0038c28  stw 30, 4(7)
  0038c2c  stw 30, 0(7)
  0038c30  lfs 1, -10300(3)
  0038c34  lhz 3, 132(31)
  0038c38  stfs 1, 36(7)
  0038c3c  extsh 3, 3
  0038c40  lfs 1, -10296(5)
  0038c44  lwz 4, 16468(4)
  0038c48  sldi 3, 3, 5
  0038c4c  stfs 1, 40(7)
  0038c50  addc 3, 4, 3
  0038c54  stw 30, 44(7)
  0038c58  clrldi 4, 3, 32
  0038c5c  stw 30, 32(7)
  0038c60  ori 3, 31, 0
  0038c64  lfs 1, -10292(6)
  0038c68  stfs 1, 64(7)
  0038c6c  lwz 5, 0(4)
  0038c70  lwz 6, 4(4)
  0038c74  lwz 8, 8(4)
  0038c78  lwz 4, 12(4)
  0038c7c  stw 5, 48(7)
  0038c80  stw 6, 52(7)
  0038c84  stw 8, 56(7)
  0038c88  stw 4, 60(7)
  0038c8c  bl 0x386e8
  0038c90  sth 30, 126(31)
  0038c94  ld 0, 144(1)
  0038c98  mtlr 0
  0038c9c  ld 30, 112(1)
  0038ca0  ld 31, 120(1)
  0038ca4  addi 1, 1, 128
  0038ca8  blr

Cam12_00038cb8:   # 0x38cb8, 0x464 bytes
  0038cb8  stdu 1, -240(1)
  0038cbc  mflr 0
  0038cc0  std 0, 256(1)
  0038cc4  stfd 20, 144(1)
  0038cc8  stfd 21, 152(1)
  0038ccc  stfd 22, 160(1)
  0038cd0  stfd 23, 168(1)
  0038cd4  stfd 24, 176(1)
  0038cd8  stfd 25, 184(1)
  0038cdc  stfd 26, 192(1)
  0038ce0  stfd 27, 200(1)
  0038ce4  stfd 28, 208(1)
  0038ce8  stfd 29, 216(1)
  0038cec  stfd 30, 224(1)
  0038cf0  stfd 31, 232(1)
  0038cf4  std 29, 120(1)
  0038cf8  std 30, 128(1)
  0038cfc  lwz 29, 112(3)
  0038d00  lis 30, 149
  0038d04  addic 30, 30, 5056
  0038d08  lwz 4, 96(29)
  0038d0c  lfs 1, 52(29)
  0038d10  lfs 2, 48(29)
  0038d14  lfs 30, 20(4)
  0038d18  lfs 31, 16(4)
  0038d1c  fsubs 25, 30, 1
  0038d20  fsubs 26, 31, 2
  0038d24  lfs 2, 436(30)
  0038d28  lfs 29, 24(4)
  0038d2c  lfs 3, 56(29)
  0038d30  lfs 1, 432(30)
  0038d34  fsubs 24, 29, 3
  0038d38  lfs 3, 440(30)
  0038d3c  fmuls 4, 25, 2
  0038d40  lis 5, 4
  0038d44  std 31, 136(1)
  0038d48  addi 5, 5, -29524
  0038d4c  ori 31, 3, 0
  0038d50  fmadds 4, 26, 1, 4
  0038d54  lfs 27, 0(5)
  0038d58  lfs 7, 100(29)
  0038d5c  fmr 5, 27
  0038d60  lfs 22, 448(30)
  0038d64  lfs 21, 452(30)
  0038d68  lfs 20, 456(30)
  0038d6c  fmadds 31, 22, 7, 31
  0038d70  fmadds 4, 24, 3, 4
  0038d74  fmadds 30, 21, 7, 30
  0038d78  lfs 28, 28(4)
  0038d7c  fmadds 29, 20, 7, 29
  0038d80  fmr 6, 5
  0038d84  lfs 8, 112(29)
  0038d88  lfs 9, 116(29)
  0038d8c  fnmsubs 25, 2, 4, 25
  0038d90  fnmsubs 26, 1, 4, 26
  0038d94  fnmsubs 24, 3, 4, 24
  0038d98  lfs 10, 120(29)
  0038d9c  fmr 7, 6
  0038da0  lfs 11, 48(3)
  0038da4  lfs 12, 16(29)
  0038da8  lfs 13, 20(29)
  0038dac  fmuls 4, 25, 25
  0038db0  lfs 0, 24(29)
  0038db4  fmadds 4, 26, 26, 4
  0038db8  fmadds 4, 24, 24, 4
  0038dbc  fsqrts 23, 4
  0038dc0  fcmpu 0, 23, 7
  0038dc4  bt 2, 0x38e18
  0038dc8  frsqrte 5, 4
  0038dcc  lis 3, 4
  0038dd0  addi 3, 3, -29524
  0038dd4  lfs 6, 4(3)
  0038dd8  lfs 7, 8(3)
  0038ddc  fmuls 23, 4, 5
  0038de0  fmuls 22, 6, 5
  0038de4  fnmsubs 23, 23, 5, 7
  0038de8  fmadds 5, 23, 22, 5
  0038dec  fmuls 23, 4, 5
  0038df0  fmuls 22, 6, 5
  0038df4  fnmsubs 23, 23, 5, 7
  0038df8  fmadds 5, 23, 22, 5
  0038dfc  fmuls 4, 4, 5
  0038e00  fmuls 6, 6, 5
  0038e04  fnmsubs 4, 4, 5, 7
  0038e08  fmadds 5, 4, 6, 5
  0038e0c  fmuls 7, 26, 5
  0038e10  fmuls 6, 25, 5
  0038e14  fmuls 5, 24, 5
  0038e18  fmuls 25, 1, 5
  0038e1c  fmuls 24, 2, 7
  0038e20  fmuls 26, 3, 6
  0038e24  fmsubs 25, 3, 7, 25
  0038e28  fmsubs 24, 1, 6, 24
  0038e2c  fmsubs 26, 2, 5, 26
  0038e30  fmr 2, 27
  0038e34  fmuls 1, 25, 25
  0038e38  fmr 3, 2
  0038e3c  fmadds 1, 26, 26, 1
  0038e40  fmr 4, 3
  0038e44  fmadds 1, 24, 24, 1
  0038e48  fsqrts 23, 1
  0038e4c  fcmpu 0, 23, 4
  0038e50  bt 2, 0x38ea4
  0038e54  frsqrte 2, 1
  0038e58  lis 3, 4
  0038e5c  addi 3, 3, -29524
  0038e60  lfs 3, 4(3)
  0038e64  lfs 4, 8(3)
  0038e68  fmuls 23, 1, 2
  0038e6c  fmuls 22, 3, 2
  0038e70  fnmsubs 23, 23, 2, 4
  0038e74  fmadds 2, 23, 22, 2
  0038e78  fmuls 23, 1, 2
  0038e7c  fmuls 22, 3, 2
  0038e80  fnmsubs 23, 23, 2, 4
  0038e84  fmadds 2, 23, 22, 2
  0038e88  fmuls 1, 1, 2
  0038e8c  fmuls 3, 3, 2
  0038e90  fnmsubs 1, 1, 2, 4
  0038e94  fmadds 2, 1, 3, 2
  0038e98  fmuls 4, 26, 2
  0038e9c  fmuls 3, 25, 2
  0038ea0  fmuls 2, 24, 2
  0038ea4  fmuls 1, 7, 2
  0038ea8  fmuls 26, 3, 9
  0038eac  fmuls 24, 5, 3
  0038eb0  fmuls 23, 4, 9
  0038eb4  fmuls 25, 6, 4
  0038eb8  fmuls 9, 2, 9
  0038ebc  ori 5, 29, 0
  0038ec0  fmsubs 4, 5, 4, 1
  0038ec4  fmadds 26, 6, 8, 26
  0038ec8  fmsubs 2, 6, 2, 24
  0038ecc  fmadds 6, 7, 8, 23
  0038ed0  fmsubs 25, 7, 3, 25
  0038ed4  fmadds 5, 5, 8, 9
  0038ed8  fmr 1, 11
  0038edc  fmr 3, 12
  0038ee0  fmadds 7, 4, 10, 26
  0038ee4  fmr 4, 13
  0038ee8  fmadds 2, 2, 10, 6
  0038eec  fmadds 6, 25, 10, 5
  0038ef0  fmr 5, 0
  0038ef4  fsubs 26, 30, 7
  0038ef8  fsubs 2, 31, 2
  0038efc  fsubs 25, 29, 6
  0038f00  bl 0x501e8
  0038f04  nop
  0038f08  stfs 1, 48(31)
  0038f0c  lfs 1, 52(31)
  0038f10  addic 5, 29, 4
  0038f14  lfs 3, 16(29)
  0038f18  fmr 2, 26
  0038f1c  lfs 4, 20(29)
  0038f20  lfs 5, 24(29)
  0038f24  bl 0x501e8
  0038f28  nop
  0038f2c  stfs 1, 52(31)
  0038f30  addic 5, 29, 8
  0038f34  lfs 1, 56(31)
  0038f38  fmr 2, 25
  0038f3c  lfs 3, 16(29)
  0038f40  lfs 4, 20(29)
  0038f44  lfs 5, 24(29)
  0038f48  bl 0x501e8
  0038f4c  nop
  0038f50  lfs 3, 52(31)
  0038f54  lfs 4, 48(31)
  0038f58  fsubs 2, 29, 1
  0038f5c  fsubs 3, 30, 3
  0038f60  fsubs 4, 31, 4
  0038f64  fmr 8, 27
  0038f68  stfs 1, 56(31)
  0038f6c  fmuls 5, 3, 3
  0038f70  fmr 9, 8
  0038f74  fmadds 31, 4, 4, 5
  0038f78  lfs 5, 436(30)
  0038f7c  fmr 10, 9
  0038f80  lfs 6, 440(30)
  0038f84  lfs 7, 432(30)
  0038f88  fmadds 31, 2, 2, 31
  0038f8c  fsqrts 11, 31
  0038f90  fcmpu 0, 11, 10
  0038f94  bt 2, 0x38fe8
  0038f98  frsqrte 1, 31
  0038f9c  lis 3, 4
  0038fa0  addi 3, 3, -29524
  0038fa4  lfs 8, 4(3)
  0038fa8  lfs 9, 8(3)
  0038fac  fmuls 10, 31, 1
  0038fb0  fmuls 11, 8, 1
  0038fb4  fnmsubs 10, 10, 1, 9
  0038fb8  fmadds 1, 10, 11, 1
  0038fbc  fmuls 10, 31, 1
  0038fc0  fmuls 11, 8, 1
  0038fc4  fnmsubs 10, 10, 1, 9
  0038fc8  fmadds 1, 10, 11, 1
  0038fcc  fmuls 10, 31, 1
  0038fd0  fmuls 8, 8, 1
  0038fd4  fnmsubs 9, 10, 1, 9
  0038fd8  fmadds 8, 9, 8, 1
  0038fdc  fmuls 10, 4, 8
  0038fe0  fmuls 9, 3, 8
  0038fe4  fmuls 8, 2, 8
  0038fe8  fmuls 2, 7, 8
  0038fec  fmuls 1, 6, 9
  0038ff0  stfs 28, 76(31)
  0038ff4  fmuls 3, 5, 10
  0038ff8  stfs 28, 12(31)
  0038ffc  stfs 10, 64(31)
  0039000  li 3, 0
  0039004  stfs 9, 68(31)
  0039008  stfs 8, 72(31)
  003900c  fmsubs 2, 6, 10, 2
  0039010  fmsubs 1, 5, 8, 1
  0039014  fmsubs 3, 7, 9, 3
  0039018  stfs 10, 0(31)
  003901c  stfs 9, 4(31)
  0039020  stfs 8, 8(31)
  0039024  stw 3, 28(31)
  0039028  fmuls 4, 2, 2
  003902c  fmadds 28, 1, 1, 4
  0039030  fmr 4, 27
  0039034  fmadds 28, 3, 3, 28
  0039038  fmr 5, 4
  003903c  fsqrts 6, 28
  0039040  fcmpu 0, 6, 5
  0039044  bt 2, 0x39098
  0039048  frsqrte 4, 28
  003904c  lis 3, 4
  0039050  addi 3, 3, -29524
  0039054  lfs 5, 4(3)
  0039058  lfs 6, 8(3)
  003905c  fmuls 7, 28, 4
  0039060  fmuls 11, 5, 4
  0039064  fnmsubs 7, 7, 4, 6
  0039068  fmadds 4, 7, 11, 4
  003906c  fmuls 7, 28, 4
  0039070  fmuls 11, 5, 4
  0039074  fnmsubs 7, 7, 4, 6
  0039078  fmadds 4, 7, 11, 4
  003907c  fmuls 7, 28, 4
  0039080  fmuls 5, 5, 4
  0039084  fnmsubs 6, 7, 4, 6
  0039088  fmadds 27, 6, 5, 4
  003908c  fmuls 5, 1, 27
  0039090  fmuls 4, 2, 27
  0039094  fmuls 27, 3, 27
  0039098  fmuls 1, 8, 4
  003909c  fmuls 2, 10, 27
  00390a0  li 3, 0
  00390a4  fmuls 3, 9, 5
  00390a8  stfs 5, 16(31)
  00390ac  stfs 4, 20(31)
  00390b0  stfs 27, 24(31)
  00390b4  stw 3, 44(31)
  00390b8  fmsubs 1, 9, 27, 1
  00390bc  fmsubs 2, 8, 5, 2
  00390c0  fmsubs 3, 10, 4, 3
  00390c4  stfs 1, 32(31)
  00390c8  stfs 2, 36(31)
  00390cc  stfs 3, 40(31)
  00390d0  ld 0, 256(1)
  00390d4  mtlr 0
  00390d8  lfd 20, 144(1)
  00390dc  lfd 21, 152(1)
  00390e0  lfd 22, 160(1)
  00390e4  lfd 23, 168(1)
  00390e8  lfd 24, 176(1)
  00390ec  lfd 25, 184(1)
  00390f0  lfd 26, 192(1)
  00390f4  lfd 27, 200(1)
  00390f8  lfd 28, 208(1)
  00390fc  lfd 29, 216(1)
  0039100  lfd 30, 224(1)
  0039104  lfd 31, 232(1)
  0039108  ld 29, 120(1)
  003910c  ld 30, 128(1)
  0039110  ld 31, 136(1)
  0039114  addi 1, 1, 240
  0039118  blr

ActivateCamera_12:   # 0x3911c, 0xa8 bytes
  003911c  stdu 1, -112(1)
  0039120  mflr 0
  0039124  std 0, 128(1)
  0039128  lis 4, 149
  003912c  lhz 3, 132(3)
  0039130  extsh 3, 3
  0039134  lwz 4, 16468(4)
  0039138  sldi 3, 3, 5
  003913c  addc 3, 4, 3
  0039140  lis 4, 151
  0039144  clrldi 5, 3, 32
  0039148  addic 3, 4, -25248
  003914c  lwz 5, 28(5)
  0039150  lwz 4, 20(5)
  0039154  cmpwi 4, 0
  0039158  bt 0, 0x39188
  003915c  lis 5, 165
  0039160  slwi 4, 4, 2
  0039164  addic 5, 5, 7136
  0039168  extsw 4, 4
  003916c  lwzx 5, 5, 4
  0039170  addic 4, 5, 16
  0039174  lwz 5, 0(5)
  0039178  extsw 5, 5
  003917c  bl 0x104e44
  0039180  nop
  0039184  b 0x391a0
  0039188  lwz 5, 12(5)
  003918c  cmpwi 5, 0
  0039190  bt 0, 0x391b0
  0039194  extsw 4, 5
  0039198  bl 0x110b70
  003919c  nop
  00391a0  cmpwi 3, 0
  00391a4  bt 2, 0x391b0
  00391a8  li 3, 1
  00391ac  b 0x391b4
  00391b0  li 3, 0
  00391b4  ld 0, 128(1)
  00391b8  mtlr 0
  00391bc  addi 1, 1, 112
  00391c0  blr

UpdateCamera_12:   # 0x391c4, 0x20 bytes
  00391c4  stdu 1, -112(1)
  00391c8  mflr 0
  00391cc  std 0, 128(1)
  00391d0  bl 0x38cb8
  00391d4  ld 0, 128(1)
  00391d8  mtlr 0
  00391dc  addi 1, 1, 112
  00391e0  blr

ExitCamera_12:   # 0x391e4, 0xb0 bytes
  00391e4  stdu 1, -128(1)
  00391e8  mflr 0
  00391ec  std 0, 144(1)
  00391f0  std 31, 120(1)
  00391f4  ori 31, 3, 0
  00391f8  lis 3, 149
  00391fc  lhz 4, 132(31)
  0039200  lwz 3, 16468(3)
  0039204  extsh 4, 4
  0039208  sldi 4, 4, 5
  003920c  addc 3, 3, 4
  0039210  clrldi 5, 3, 32
  0039214  lis 3, 151
  0039218  addic 3, 3, -25248
  003921c  lwz 5, 28(5)
  0039220  lwz 4, 20(5)
  0039224  cmpwi 4, 0
  0039228  bt 0, 0x39258
  003922c  lis 5, 165
  0039230  slwi 4, 4, 2
  0039234  addic 5, 5, 7136
  0039238  extsw 4, 4
  003923c  lwzx 5, 5, 4
  0039240  addic 4, 5, 16
  0039244  lwz 5, 0(5)
  0039248  extsw 5, 5
  003924c  bl 0x104e44
  0039250  nop
  0039254  b 0x39270
  0039258  lwz 5, 12(5)
  003925c  cmpwi 5, 0
  0039260  bt 0, 0x39278
  0039264  extsw 4, 5
  0039268  bl 0x110b70
  003926c  nop
  0039270  cmpwi 3, 0
  0039274  bf 2, 0x39280
  0039278  li 3, 3
  003927c  sth 3, 126(31)
  0039280  ld 0, 144(1)
  0039284  mtlr 0
  0039288  ld 31, 120(1)
  003928c  addi 1, 1, 128
  0039290  blr
