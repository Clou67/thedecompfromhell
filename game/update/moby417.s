# game/update/moby417.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M417_00367688:   # 0x367688, 0x680 bytes
  0367688  stdu 1, -272(1)
  036768c  mflr 0
  0367690  std 0, 288(1)
  0367694  stfd 27, 232(1)
  0367698  stfd 28, 240(1)
  036769c  stfd 29, 248(1)
  03676a0  stfd 30, 256(1)
  03676a4  stfd 31, 264(1)
  03676a8  std 30, 216(1)
  03676ac  li 3, 417
  03676b0  ori 30, 5, 0
  03676b4  std 31, 224(1)
  03676b8  fmr 30, 2
  03676bc  ori 31, 4, 0
  03676c0  std 29, 208(1)
  03676c4  std 28, 200(1)
  03676c8  std 27, 192(1)
  03676cc  std 26, 184(1)
  03676d0  fmr 31, 1
  03676d4  bl 0xefa28
  03676d8  nop
  03676dc  ori 29, 3, 0
  03676e0  cmpwi 29, 0
  03676e4  bt 2, 0x367cc8
  03676e8  lis 3, 54
  03676ec  fmr 29, 31
  03676f0  addi 26, 3, 30280
  03676f4  lwz 28, 120(29)
  03676f8  lfs 28, 4(26)
  03676fc  lfs 1, 0(26)
  0367700  fmr 2, 28
  0367704  bl 0xfcbe8
  0367708  nop
  036770c  fmr 31, 1
  0367710  fmr 1, 29
  0367714  fmr 2, 30
  0367718  bl 0xfcbe8
  036771c  nop
  0367720  lwz 3, 0(30)
  0367724  lwz 4, 4(30)
  0367728  lfs 2, 0(30)
  036772c  lfs 3, 4(30)
  0367730  fmr 30, 1
  0367734  fabs 5, 2
  0367738  fabs 3, 3
  036773c  rlwinm 4, 4, 3, 29, 29
  0367740  lis 27, 115
  0367744  addic 27, 27, 22784
  0367748  fsubs 2, 5, 3
  036774c  stfs 2, 116(1)
  0367750  lfs 27, 8(26)
  0367754  lfs 29, 12(26)
  0367758  lwz 5, 116(1)
  036775c  lfs 1, 116(1)
  0367760  rlwimi 4, 5, 2, 30, 30
  0367764  fsub 4, 1, 27
  0367768  fsub 6, 1, 27
  036776c  rlwimi 4, 3, 4, 28, 28
  0367770  ori 3, 27, 0
  0367774  rlwimi 3, 4, 2, 26, 28
  0367778  slwi 4, 4, 2
  036777c  clrldi 3, 3, 32
  0367780  fsel 4, 4, 5, 3
  0367784  lfsx 1, 27, 4
  0367788  fsel 3, 6, 3, 5
  036778c  lfs 2, 4(3)
  0367790  fcmpu 0, 4, 27
  0367794  bt 1, 0x3677a0
  0367798  fmr 1, 27
  036779c  b 0x3678b8
  03677a0  fsubs 5, 3, 4
  03677a4  fadds 3, 3, 4
  03677a8  addic 3, 1, 16
  03677ac  li 7, 2
  03677b0  addic 5, 3, 152
  03677b4  addic 4, 3, 136
  03677b8  mtctr 7
  03677bc  fdivs 3, 5, 3
  03677c0  fmuls 4, 3, 3
  03677c4  stfs 3, 164(1)
  03677c8  stfs 3, 156(1)
  03677cc  stfs 3, 160(1)
  03677d0  stfs 3, 152(1)
  03677d4  lfs 6, 164(1)
  03677d8  lfs 7, 156(1)
  03677dc  lfs 8, 160(1)
  03677e0  fmuls 5, 4, 4
  03677e4  fmuls 7, 7, 4
  03677e8  fmuls 6, 6, 5
  03677ec  fmuls 3, 5, 5
  03677f0  fmuls 5, 8, 5
  03677f4  stfs 7, 156(1)
  03677f8  fmuls 4, 6, 4
  03677fc  stfs 5, 160(1)
  0367800  stfs 4, 164(1)
  0367804  lfs 4, 136(3)
  0367808  fmuls 4, 4, 3
  036780c  stfs 4, 152(3)
  0367810  lfs 4, 4(4)
  0367814  addic 4, 4, 8
  0367818  fmuls 4, 4, 3
  036781c  addic 3, 3, 8
  0367820  stfs 4, 4(5)
  0367824  addic 5, 5, 8
  0367828  bdnz 0x367804
  036782c  li 5, 4
  0367830  ori 3, 1, 0
  0367834  mtctr 5
  0367838  lis 4, 115
  036783c  addic 5, 3, 152
  0367840  addic 4, 4, 22752
  0367844  ori 6, 5, 0
  0367848  lfs 3, 152(3)
  036784c  lfs 4, 0(4)
  0367850  fmuls 3, 3, 4
  0367854  lfs 4, 4(4)
  0367858  addic 4, 4, 8
  036785c  stfs 3, 152(3)
  0367860  lfs 3, 4(5)
  0367864  addic 3, 3, 8
  0367868  fmuls 3, 3, 4
  036786c  stfs 3, 4(5)
  0367870  addic 5, 5, 8
  0367874  bdnz 0x367848
  0367878  ori 3, 1, 0
  036787c  fmr 3, 27
  0367880  mtctr 7
  0367884  lfs 4, 152(3)
  0367888  fadds 3, 3, 4
  036788c  lfs 4, 4(6)
  0367890  addic 3, 3, 16
  0367894  lfs 5, 8(6)
  0367898  lfs 6, 12(6)
  036789c  addic 6, 6, 16
  03678a0  fadds 3, 3, 4
  03678a4  fadds 3, 3, 5
  03678a8  fadds 3, 3, 6
  03678ac  bdnz 0x367884
  03678b0  fadds 3, 3, 29
  03678b4  fmadds 1, 3, 1, 2
  03678b8  fmr 2, 31
  03678bc  bl 0x5026a0
  03678c0  nop
  03678c4  lis 3, 54
  03678c8  addi 3, 3, 30280
  03678cc  lfs 2, 16(3)
  03678d0  lfs 3, 20(3)
  03678d4  fadds 2, 31, 2
  03678d8  lfs 4, 24(3)
  03678dc  fsubs 5, 3, 31
  03678e0  fsubs 6, 4, 31
  03678e4  fsubs 3, 3, 2
  03678e8  fsub 7, 31, 5
  03678ec  fsubs 4, 4, 2
  03678f0  lis 4, 114
  03678f4  fsub 9, 2, 3
  03678f8  fsel 5, 7, 5, 31
  03678fc  lfs 7, 28(3)
  0367900  lfs 8, 32(3)
  0367904  fsel 2, 9, 3, 2
  0367908  fsub 3, 6, 5
  036790c  fsub 10, 4, 2
  0367910  fsel 3, 3, 6, 5
  0367914  lfs 5, 36(3)
  0367918  lfs 6, 40(3)
  036791c  li 3, 0
  0367920  fsel 2, 10, 4, 2
  0367924  fmuls 4, 3, 3
  0367928  fmuls 9, 2, 2
  036792c  fmuls 10, 4, 3
  0367930  fmuls 11, 9, 2
  0367934  fmuls 12, 4, 10
  0367938  fmadds 3, 10, 7, 3
  036793c  fmadds 2, 11, 7, 2
  0367940  fmuls 10, 9, 11
  0367944  fmuls 7, 4, 12
  0367948  fmadds 3, 12, 8, 3
  036794c  fmuls 11, 9, 10
  0367950  fmadds 2, 10, 8, 2
  0367954  fmuls 4, 4, 7
  0367958  fmadds 3, 7, 5, 3
  036795c  fmuls 7, 9, 11
  0367960  fmadds 2, 11, 5, 2
  0367964  fmadds 3, 4, 6, 3
  0367968  fmadds 2, 7, 6, 2
  036796c  fmuls 3, 3, 30
  0367970  fmuls 2, 2, 30
  0367974  fmuls 4, 3, 3
  0367978  stfs 3, 20(29)
  036797c  fmadds 4, 2, 2, 4
  0367980  stfs 2, 16(29)
  0367984  stw 3, 24(29)
  0367988  lfs 31, -3052(4)
  036798c  fmuls 3, 31, 1
  0367990  fsqrts 4, 4
  0367994  fcmpu 0, 4, 27
  0367998  bf 2, 0x3679d0
  036799c  fmr 3, 27
  03679a0  stfs 2, 0(28)
  03679a4  lfs 2, 20(29)
  03679a8  li 3, 0
  03679ac  stfs 2, 4(28)
  03679b0  lfs 2, 24(29)
  03679b4  stfs 2, 8(28)
  03679b8  lfs 4, 28(29)
  03679bc  stw 3, 8(28)
  03679c0  stw 3, 4(28)
  03679c4  fmr 2, 3
  03679c8  stw 3, 0(28)
  03679cc  b 0x3679f8
  03679d0  fdivs 4, 3, 4
  03679d4  fmuls 2, 2, 4
  03679d8  stfs 2, 0(28)
  03679dc  lfs 3, 20(29)
  03679e0  fmuls 3, 3, 4
  03679e4  stfs 3, 4(28)
  03679e8  lfs 5, 24(29)
  03679ec  fmuls 4, 5, 4
  03679f0  stfs 4, 8(28)
  03679f4  lfs 4, 28(29)
  03679f8  stfs 4, 12(28)
  03679fc  lfs 4, 4(30)
  0367a00  fmr 8, 3
  0367a04  lfs 5, 0(30)
  0367a08  fsubs 3, 28, 1
  0367a0c  fmuls 6, 4, 4
  0367a10  lfs 7, 8(30)
  0367a14  lis 3, 54
  0367a18  addi 3, 3, 30280
  0367a1c  fmadds 1, 5, 5, 6
  0367a20  fmuls 9, 3, 3
  0367a24  lfs 6, 44(3)
  0367a28  li 4, 0
  0367a2c  fmadds 1, 7, 7, 1
  0367a30  fmuls 6, 9, 6
  0367a34  stw 4, 8(28)
  0367a38  fsqrts 1, 1
  0367a3c  fmuls 6, 31, 6
  0367a40  fdivs 6, 6, 1
  0367a44  fsub 7, 27, 1
  0367a48  fsub 9, 27, 1
  0367a4c  fsub 10, 1, 27
  0367a50  fsub 1, 1, 27
  0367a54  fmuls 4, 4, 6
  0367a58  fmuls 5, 5, 6
  0367a5c  fsel 6, 7, 27, 4
  0367a60  fsel 7, 9, 27, 5
  0367a64  fsel 4, 10, 6, 4
  0367a68  fsel 1, 1, 7, 5
  0367a6c  fadds 4, 8, 4
  0367a70  fadds 1, 2, 1
  0367a74  stfs 4, 4(28)
  0367a78  stfs 1, 0(28)
  0367a7c  lfs 1, 16(29)
  0367a80  lfs 2, 0(31)
  0367a84  fadds 1, 1, 2
  0367a88  lfs 2, 20(29)
  0367a8c  lfs 4, 24(29)
  0367a90  stfs 1, 16(29)
  0367a94  lfs 5, 4(31)
  0367a98  fadds 2, 2, 5
  0367a9c  stfs 2, 20(29)
  0367aa0  lfs 5, 8(31)
  0367aa4  fadds 4, 4, 5
  0367aa8  stfs 4, 24(29)
  0367aac  lfs 5, 0(30)
  0367ab0  fadds 1, 1, 5
  0367ab4  stfs 1, 16(29)
  0367ab8  lfs 1, 4(30)
  0367abc  fadds 1, 2, 1
  0367ac0  stfs 1, 20(29)
  0367ac4  lfs 1, 8(30)
  0367ac8  fadds 1, 4, 1
  0367acc  stfs 1, 24(29)
  0367ad0  lfs 1, 48(3)
  0367ad4  lfs 2, 0(28)
  0367ad8  lfs 4, 4(28)
  0367adc  lfs 5, 8(28)
  0367ae0  fmuls 2, 2, 1
  0367ae4  fmuls 4, 4, 1
  0367ae8  fmuls 1, 5, 1
  0367aec  stfs 2, 0(28)
  0367af0  stfs 4, 4(28)
  0367af4  stfs 1, 8(28)
  0367af8  lfs 1, 52(3)
  0367afc  lfs 2, 88(29)
  0367b00  fmuls 1, 2, 1
  0367b04  stfs 1, 88(29)
  0367b08  lwz 3, 0(28)
  0367b0c  lwz 4, 4(28)
  0367b10  lfs 1, 0(28)
  0367b14  lfs 2, 4(28)
  0367b18  fabs 5, 1
  0367b1c  fabs 2, 2
  0367b20  rlwinm 4, 4, 3, 29, 29
  0367b24  fsubs 1, 5, 2
  0367b28  stfs 1, 112(1)
  0367b2c  lfs 4, 44(29)
  0367b30  lwz 5, 112(1)
  0367b34  lfs 1, 112(1)
  0367b38  rlwimi 4, 5, 2, 30, 30
  0367b3c  fsub 6, 1, 27
  0367b40  fsub 7, 1, 27
  0367b44  rlwimi 4, 3, 4, 28, 28
  0367b48  ori 3, 27, 0
  0367b4c  rlwimi 3, 4, 2, 26, 28
  0367b50  slwi 4, 4, 2
  0367b54  clrldi 3, 3, 32
  0367b58  fsel 6, 6, 5, 2
  0367b5c  lfsx 1, 27, 4
  0367b60  fsel 5, 7, 2, 5
  0367b64  lfs 2, 4(3)
  0367b68  fcmpu 0, 6, 27
  0367b6c  bt 1, 0x367b74
  0367b70  b 0x367c88
  0367b74  fsubs 7, 5, 6
  0367b78  fadds 5, 5, 6
  0367b7c  addic 3, 1, 16
  0367b80  li 7, 2
  0367b84  addic 4, 3, 104
  0367b88  addic 5, 3, 120
  0367b8c  mtctr 7
  0367b90  fdivs 5, 7, 5
  0367b94  fmuls 6, 5, 5
  0367b98  stfs 5, 132(1)
  0367b9c  stfs 5, 124(1)
  0367ba0  stfs 5, 128(1)
  0367ba4  stfs 5, 120(1)
  0367ba8  lfs 8, 132(1)
  0367bac  lfs 9, 124(1)
  0367bb0  lfs 10, 128(1)
  0367bb4  fmuls 7, 6, 6
  0367bb8  fmuls 9, 9, 6
  0367bbc  fmuls 8, 8, 7
  0367bc0  fmuls 5, 7, 7
  0367bc4  fmuls 7, 10, 7
  0367bc8  stfs 9, 124(1)
  0367bcc  fmuls 6, 8, 6
  0367bd0  stfs 7, 128(1)
  0367bd4  stfs 6, 132(1)
  0367bd8  lfs 6, 104(3)
  0367bdc  fmuls 6, 6, 5
  0367be0  stfs 6, 120(3)
  0367be4  lfs 6, 4(4)
  0367be8  addic 3, 3, 8
  0367bec  addic 4, 4, 8
  0367bf0  fmuls 6, 6, 5
  0367bf4  stfs 6, 4(5)
  0367bf8  addic 5, 5, 8
  0367bfc  bdnz 0x367bd8
  0367c00  li 5, 4
  0367c04  ori 3, 1, 0
  0367c08  mtctr 5
  0367c0c  lis 4, 115
  0367c10  addic 5, 3, 120
  0367c14  addic 4, 4, 22752
  0367c18  ori 6, 5, 0
  0367c1c  lfs 5, 120(3)
  0367c20  lfs 6, 0(4)
  0367c24  fmuls 5, 5, 6
  0367c28  lfs 6, 4(4)
  0367c2c  addic 4, 4, 8
  0367c30  stfs 5, 120(3)
  0367c34  lfs 5, 4(5)
  0367c38  addic 3, 3, 8
  0367c3c  fmuls 5, 5, 6
  0367c40  stfs 5, 4(5)
  0367c44  addic 5, 5, 8
  0367c48  bdnz 0x367c1c
  0367c4c  ori 3, 1, 0
  0367c50  mtctr 7
  0367c54  lfs 5, 120(3)
  0367c58  lfs 6, 4(6)
  0367c5c  fadds 5, 27, 5
  0367c60  lfs 7, 8(6)
  0367c64  lfs 27, 12(6)
  0367c68  addic 3, 3, 16
  0367c6c  addic 6, 6, 16
  0367c70  fadds 5, 5, 6
  0367c74  fadds 5, 5, 7
  0367c78  fadds 27, 5, 27
  0367c7c  bdnz 0x367c54
  0367c80  fadds 27, 27, 29
  0367c84  fmadds 27, 27, 1, 2
  0367c88  li 3, 255
  0367c8c  lis 4, 54
  0367c90  stfs 27, 72(29)
  0367c94  li 5, 1
  0367c98  addi 4, 4, 30280
  0367c9c  stb 3, 48(29)
  0367ca0  sth 3, 50(29)
  0367ca4  stb 5, 49(29)
  0367ca8  ori 3, 29, 0
  0367cac  lfs 1, 56(4)
  0367cb0  lfs 2, 60(4)
  0367cb4  fmadds 1, 3, 1, 2
  0367cb8  fmuls 1, 4, 1
  0367cbc  stfs 1, 44(29)
  0367cc0  bl 0xf31a8
  0367cc4  nop
  0367cc8  ori 3, 29, 0
  0367ccc  ld 0, 288(1)
  0367cd0  mtlr 0
  0367cd4  lfd 27, 232(1)
  0367cd8  lfd 28, 240(1)
  0367cdc  lfd 29, 248(1)
  0367ce0  lfd 30, 256(1)
  0367ce4  lfd 31, 264(1)
  0367ce8  ld 26, 184(1)
  0367cec  ld 27, 192(1)
  0367cf0  ld 28, 200(1)
  0367cf4  ld 29, 208(1)
  0367cf8  ld 30, 216(1)
  0367cfc  ld 31, 224(1)
  0367d00  addi 1, 1, 272
  0367d04  blr

UpdateMoby_417:   # 0x367d10, 0xb0 bytes
  0367d10  stdu 1, -112(1)
  0367d14  mflr 0
  0367d18  std 0, 128(1)
  0367d1c  ori 4, 3, 0
  0367d20  lis 3, 54
  0367d24  lis 7, 114
  0367d28  addi 6, 3, 32008
  0367d2c  lwz 5, 120(4)
  0367d30  lfs 1, 16(4)
  0367d34  lfs 2, 20(4)
  0367d38  lfs 3, 0(5)
  0367d3c  fadds 1, 1, 3
  0367d40  lfs 3, 24(4)
  0367d44  ori 3, 4, 0
  0367d48  stfs 1, 16(4)
  0367d4c  lfs 1, 4(5)
  0367d50  fadds 1, 2, 1
  0367d54  stfs 1, 20(4)
  0367d58  lfs 1, 8(5)
  0367d5c  fadds 1, 3, 1
  0367d60  stfs 1, 24(4)
  0367d64  lfs 1, 0(6)
  0367d68  lfs 2, 4(6)
  0367d6c  lfs 3, -3064(7)
  0367d70  lfs 4, 0(5)
  0367d74  fmadds 1, 3, 1, 2
  0367d78  lfs 5, 4(5)
  0367d7c  lfs 6, 8(5)
  0367d80  fmuls 2, 4, 1
  0367d84  fmuls 3, 5, 1
  0367d88  fmuls 1, 6, 1
  0367d8c  stfs 2, 0(5)
  0367d90  stfs 3, 4(5)
  0367d94  stfs 1, 8(5)
  0367d98  lbz 4, 112(4)
  0367d9c  rlwinm 4, 4, 0, 30, 30
  0367da0  cmpwi 4, 0
  0367da4  bt 2, 0x367db0
  0367da8  bl 0xefb38
  0367dac  nop
  0367db0  ld 0, 128(1)
  0367db4  mtlr 0
  0367db8  addi 1, 1, 112
  0367dbc  blr
