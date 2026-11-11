# game/update/moby1844.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1844_002c4684:   # 0x2c4684, 0x6c bytes
  02c4684  lis 4, 165
  02c4688  sldi 3, 3, 2
  02c468c  lis 6, 164
  02c4690  addic 4, 4, -28284
  02c4694  extsw 7, 3
  02c4698  li 5, 0
  02c469c  lwz 3, -28512(6)
  02c46a0  lwzx 4, 4, 7
  02c46a4  lhz 6, 0(4)
  02c46a8  rlwinm 6, 6, 8, 9, 23
  02c46ac  addc 6, 3, 6
  02c46b0  clrldi 6, 6, 32
  02c46b4  lhz 7, 166(6)
  02c46b8  cmpwi 7, 1843
  02c46bc  bf 2, 0x2c46d4
  02c46c0  lbz 6, 32(6)
  02c46c4  cmpwi 6, 5
  02c46c8  bf 2, 0x2c46d4
  02c46cc  addic 5, 5, 1
  02c46d0  extsh 5, 5
  02c46d4  lhz 6, 0(4)
  02c46d8  addic 4, 4, 2
  02c46dc  extsh 6, 6
  02c46e0  cmpwi 6, 0
  02c46e4  bf 0, 0x2c46a4
  02c46e8  ori 3, 5, 0
  02c46ec  blr

FUN_002c4728:   # 0x2c4728, 0x4dc bytes
  02c4728  stdu 1, -368(1)
  02c472c  mflr 0
  02c4730  std 0, 384(1)
  02c4734  stfd 14, 224(1)
  02c4738  stfd 15, 232(1)
  02c473c  stfd 16, 240(1)
  02c4740  stfd 17, 248(1)
  02c4744  stfd 18, 256(1)
  02c4748  stfd 19, 264(1)
  02c474c  stfd 20, 272(1)
  02c4750  stfd 21, 280(1)
  02c4754  stfd 22, 288(1)
  02c4758  stfd 23, 296(1)
  02c475c  stfd 24, 304(1)
  02c4760  stfd 25, 312(1)
  02c4764  stfd 26, 320(1)
  02c4768  stfd 27, 328(1)
  02c476c  stfd 28, 336(1)
  02c4770  stfd 29, 344(1)
  02c4774  stfd 30, 352(1)
  02c4778  stfd 31, 360(1)
  02c477c  lis 4, 165
  02c4780  sldi 3, 3, 2
  02c4784  addic 4, 4, -28284
  02c4788  std 31, 216(1)
  02c478c  extsw 3, 3
  02c4790  std 30, 208(1)
  02c4794  std 29, 200(1)
  02c4798  std 28, 192(1)
  02c479c  lis 31, 164
  02c47a0  lwzx 29, 4, 3
  02c47a4  lhz 30, 0(29)
  02c47a8  lwz 3, -28512(31)
  02c47ac  rlwinm 30, 30, 8, 9, 23
  02c47b0  addc 3, 3, 30
  02c47b4  clrldi 3, 3, 32
  02c47b8  lhz 4, 166(3)
  02c47bc  cmpwi 4, 1843
  02c47c0  bf 2, 0x2c4b84
  02c47c4  lbz 3, 32(3)
  02c47c8  cmpwi 3, 4
  02c47cc  bf 2, 0x2c4b84
  02c47d0  li 3, 10
  02c47d4  bl 0xfc620
  02c47d8  nop
  02c47dc  cmpwi 3, 0
  02c47e0  bf 2, 0x2c4b84
  02c47e4  lwz 4, -28512(31)
  02c47e8  lis 3, 149
  02c47ec  addc 29, 4, 30
  02c47f0  addic 30, 3, 5056
  02c47f4  lis 3, 44
  02c47f8  clrldi 29, 29, 32
  02c47fc  addi 5, 3, 18160
  02c4800  li 4, 0
  02c4804  lfs 1, 336(30)
  02c4808  stfs 1, 112(1)
  02c480c  lwz 3, 340(30)
  02c4810  lwz 31, 120(29)
  02c4814  srawi 6, 3, 31
  02c4818  lfs 1, 340(30)
  02c481c  srwi 7, 6, 1
  02c4820  lfs 2, 344(30)
  02c4824  xor 3, 7, 3
  02c4828  stfs 1, 116(1)
  02c482c  lfs 1, 348(30)
  02c4830  subc 3, 3, 6
  02c4834  stfs 2, 120(1)
  02c4838  lis 6, 15922
  02c483c  stfs 1, 124(1)
  02c4840  lfs 14, 0(5)
  02c4844  ori 5, 6, 47298
  02c4848  stw 4, 112(1)
  02c484c  cmpw 3, 5
  02c4850  bf 1, 0x2c4864
  02c4854  lis 3, 15922
  02c4858  ori 3, 3, 47298
  02c485c  stw 3, 116(1)
  02c4860  b 0x2c4880
  02c4864  lis 4, -15923
  02c4868  ori 4, 4, 18238
  02c486c  cmpw 3, 4
  02c4870  bf 0, 0x2c4880
  02c4874  lis 3, -16846
  02c4878  ori 3, 3, 47298
  02c487c  stw 3, 116(1)
  02c4880  addic 3, 1, 128
  02c4884  addic 4, 1, 112
  02c4888  bl 0x500b64
  02c488c  nop
  02c4890  lwz 3, 136(31)
  02c4894  extsw 3, 3
  02c4898  std 3, 176(1)
  02c489c  lis 3, 44
  02c48a0  addi 28, 3, 18160
  02c48a4  lfs 3, 8(28)
  02c48a8  lfs 1, 4(28)
  02c48ac  lfd 2, 176(1)
  02c48b0  fcfid 2, 2
  02c48b4  frsp 2, 2
  02c48b8  fmuls 2, 2, 3
  02c48bc  bl 0x502578
  02c48c0  nop
  02c48c4  lfs 2, 12(28)
  02c48c8  lfs 3, 16(28)
  02c48cc  lfs 4, 148(1)
  02c48d0  lfs 5, 144(1)
  02c48d4  fsubs 8, 2, 1
  02c48d8  lfs 6, 40(28)
  02c48dc  fsubs 9, 3, 1
  02c48e0  fmuls 11, 4, 4
  02c48e4  lfs 7, 164(1)
  02c48e8  fadds 6, 1, 6
  02c48ec  lfs 10, 152(1)
  02c48f0  fmuls 27, 7, 7
  02c48f4  lfs 12, 160(1)
  02c48f8  lfs 13, 132(1)
  02c48fc  lfs 31, 168(1)
  02c4900  fmuls 26, 13, 13
  02c4904  lfs 30, 128(1)
  02c4908  lfs 29, 136(1)
  02c490c  fsub 0, 1, 8
  02c4910  fmadds 11, 5, 5, 11
  02c4914  fsubs 2, 2, 6
  02c4918  fsubs 3, 3, 6
  02c491c  fsel 1, 0, 8, 1
  02c4920  lfs 8, 20(28)
  02c4924  fmadds 11, 10, 10, 11
  02c4928  fsub 28, 6, 2
  02c492c  fsub 0, 9, 1
  02c4930  fsqrts 11, 11
  02c4934  lis 3, 151
  02c4938  li 4, 5
  02c493c  addic 3, 3, -25376
  02c4940  li 5, 1
  02c4944  fsel 2, 28, 2, 6
  02c4948  fsel 1, 0, 9, 1
  02c494c  fmadds 9, 12, 12, 27
  02c4950  lfs 6, 24(28)
  02c4954  lfs 0, 28(28)
  02c4958  lfs 25, 32(28)
  02c495c  lfs 23, 36(28)
  02c4960  fsub 27, 3, 2
  02c4964  fmuls 28, 1, 1
  02c4968  fmadds 9, 31, 31, 9
  02c496c  lfs 22, 44(28)
  02c4970  fsel 2, 27, 3, 2
  02c4974  fmadds 3, 30, 30, 26
  02c4978  fmuls 24, 28, 1
  02c497c  fsqrts 9, 9
  02c4980  lfs 27, 320(30)
  02c4984  lfs 26, 324(30)
  02c4988  lfs 21, 328(30)
  02c498c  lfs 20, 332(30)
  02c4990  fmadds 3, 29, 29, 3
  02c4994  fmuls 19, 28, 24
  02c4998  fmadds 1, 24, 8, 1
  02c499c  fmuls 24, 2, 2
  02c49a0  fsqrts 3, 3
  02c49a4  fmuls 18, 28, 19
  02c49a8  fmadds 1, 19, 6, 1
  02c49ac  fmuls 19, 24, 2
  02c49b0  fmuls 28, 28, 18
  02c49b4  fmadds 1, 18, 0, 1
  02c49b8  fmuls 18, 24, 19
  02c49bc  fmadds 2, 19, 8, 2
  02c49c0  fsub 19, 9, 14
  02c49c4  fmadds 1, 28, 25, 1
  02c49c8  fmuls 8, 24, 18
  02c49cc  fmadds 2, 18, 6, 2
  02c49d0  fsub 28, 14, 11
  02c49d4  fsub 18, 9, 14
  02c49d8  fmuls 1, 1, 23
  02c49dc  fmuls 6, 24, 8
  02c49e0  fmadds 2, 8, 0, 2
  02c49e4  fsub 0, 14, 11
  02c49e8  fsub 8, 14, 11
  02c49ec  fsub 24, 11, 14
  02c49f0  fdivs 1, 1, 11
  02c49f4  fmadds 2, 6, 25, 2
  02c49f8  fmr 6, 22
  02c49fc  fsub 25, 11, 14
  02c4a00  fsub 11, 11, 14
  02c4a04  fsub 22, 14, 9
  02c4a08  fmuls 2, 2, 23
  02c4a0c  fdivs 6, 6, 3
  02c4a10  fdivs 2, 2, 9
  02c4a14  fsub 23, 14, 9
  02c4a18  fmuls 4, 4, 1
  02c4a1c  fmuls 10, 10, 1
  02c4a20  fmuls 1, 5, 1
  02c4a24  fsub 5, 14, 9
  02c4a28  fsub 9, 9, 14
  02c4a2c  fsel 0, 0, 14, 4
  02c4a30  fsel 8, 8, 14, 10
  02c4a34  fsel 28, 28, 14, 1
  02c4a38  fsel 4, 24, 0, 4
  02c4a3c  fsub 0, 14, 3
  02c4a40  fsel 1, 11, 28, 1
  02c4a44  fsel 8, 25, 8, 10
  02c4a48  fsub 10, 14, 3
  02c4a4c  fsub 11, 14, 3
  02c4a50  fsub 28, 3, 14
  02c4a54  fmuls 29, 29, 6
  02c4a58  fmuls 13, 13, 6
  02c4a5c  fmuls 6, 30, 6
  02c4a60  fsub 30, 3, 14
  02c4a64  fsub 3, 3, 14
  02c4a68  fadds 1, 27, 1
  02c4a6c  fadds 8, 21, 8
  02c4a70  fadds 4, 26, 4
  02c4a74  fsel 10, 10, 14, 29
  02c4a78  fsel 11, 11, 14, 13
  02c4a7c  fmuls 31, 31, 2
  02c4a80  fmuls 7, 7, 2
  02c4a84  fmuls 2, 12, 2
  02c4a88  fsel 12, 0, 14, 6
  02c4a8c  fsel 10, 30, 10, 29
  02c4a90  fsel 11, 28, 11, 13
  02c4a94  fsel 5, 5, 14, 31
  02c4a98  fsel 0, 23, 14, 7
  02c4a9c  fsel 27, 22, 14, 2
  02c4aa0  fsel 3, 3, 12, 6
  02c4aa4  fsel 5, 19, 5, 31
  02c4aa8  fsel 6, 18, 0, 7
  02c4aac  fsel 2, 9, 27, 2
  02c4ab0  lfs 7, 128(3)
  02c4ab4  stfs 7, 176(31)
  02c4ab8  fadds 5, 5, 8
  02c4abc  fadds 4, 6, 4
  02c4ac0  fadds 1, 2, 1
  02c4ac4  lfs 2, 132(3)
  02c4ac8  stfs 2, 180(31)
  02c4acc  lfs 2, 136(3)
  02c4ad0  stfs 2, 184(31)
  02c4ad4  lfs 2, 140(3)
  02c4ad8  fadds 5, 10, 5
  02c4adc  lis 3, 114
  02c4ae0  fadds 4, 11, 4
  02c4ae4  stfs 2, 188(31)
  02c4ae8  fadds 1, 3, 1
  02c4aec  stfs 20, 28(29)
  02c4af0  stb 4, 32(29)
  02c4af4  stb 5, 188(29)
  02c4af8  stfs 5, 24(29)
  02c4afc  stfs 4, 20(29)
  02c4b00  stfs 1, 16(29)
  02c4b04  lfs 1, 48(28)
  02c4b08  lfs 2, -3052(3)
  02c4b0c  lis 3, 16544
  02c4b10  fmuls 1, 2, 1
  02c4b14  stw 3, 148(31)
  02c4b18  stfs 1, 108(31)
  02c4b1c  lbz 3, 83(29)
  02c4b20  cmpwi 3, 0
  02c4b24  bt 2, 0x2c4b64
  02c4b28  lis 3, 44
  02c4b2c  lis 4, 114
  02c4b30  addi 3, 3, 18160
  02c4b34  li 5, 0
  02c4b38  lfs 1, 52(3)
  02c4b3c  lfs 2, -3056(4)
  02c4b40  ori 3, 29, 0
  02c4b44  fmuls 1, 2, 1
  02c4b48  li 4, 0
  02c4b4c  fctiwz 1, 1
  02c4b50  stfd 1, 176(1)
  02c4b54  lwz 6, 180(1)
  02c4b58  extsw 6, 6
  02c4b5c  bl 0xfddc0
  02c4b60  nop
  02c4b64  lhz 4, 52(29)
  02c4b68  lwz 5, 36(29)
  02c4b6c  ori 3, 29, 0
  02c4b70  rlwinm 4, 4, 0, 0, 30
  02c4b74  lwz 5, 16(5)
  02c4b78  sth 4, 52(29)
  02c4b7c  stw 5, 148(29)
  02c4b80  b 0x2c4b9c
  02c4b84  lhz 3, 0(29)
  02c4b88  addic 29, 29, 2
  02c4b8c  extsh 3, 3
  02c4b90  cmpwi 3, 0
  02c4b94  bf 0, 0x2c47a4
  02c4b98  li 3, 0
  02c4b9c  ld 0, 384(1)
  02c4ba0  mtlr 0
  02c4ba4  lfd 14, 224(1)
  02c4ba8  lfd 15, 232(1)
  02c4bac  lfd 16, 240(1)
  02c4bb0  lfd 17, 248(1)
  02c4bb4  lfd 18, 256(1)
  02c4bb8  lfd 19, 264(1)
  02c4bbc  lfd 20, 272(1)
  02c4bc0  lfd 21, 280(1)
  02c4bc4  lfd 22, 288(1)
  02c4bc8  lfd 23, 296(1)
  02c4bcc  lfd 24, 304(1)
  02c4bd0  lfd 25, 312(1)
  02c4bd4  lfd 26, 320(1)
  02c4bd8  lfd 27, 328(1)
  02c4bdc  lfd 28, 336(1)
  02c4be0  lfd 29, 344(1)
  02c4be4  lfd 30, 352(1)
  02c4be8  lfd 31, 360(1)
  02c4bec  ld 28, 192(1)
  02c4bf0  ld 29, 200(1)
  02c4bf4  ld 30, 208(1)
  02c4bf8  ld 31, 216(1)
  02c4bfc  addi 1, 1, 368
  02c4c00  blr

M1844_002c4c04:   # 0x2c4c04, 0x14 bytes
  02c4c04  lis 3, 124
  02c4c08  lis 4, 1
  02c4c0c  addic 3, 3, -32732
  02c4c10  stw 4, 72(3)
  02c4c14  blr

UpdateMoby_1844:   # 0x2c4c18, 0xf8 bytes
  02c4c18  stdu 1, -128(1)
  02c4c1c  mflr 0
  02c4c20  std 0, 144(1)
  02c4c24  std 31, 120(1)
  02c4c28  ori 31, 3, 0
  02c4c2c  lis 4, 1
  02c4c30  li 5, 0
  02c4c34  bl 0x10675c
  02c4c38  nop
  02c4c3c  ori 4, 3, 0
  02c4c40  lbz 3, 32(31)
  02c4c44  cmpwi 3, 0
  02c4c48  bt 1, 0x2c4c58
  02c4c4c  cmpwi 3, -1
  02c4c50  bf 1, 0x2c4cfc
  02c4c54  b 0x2c4c6c
  02c4c58  cmpwi 3, 1
  02c4c5c  bf 1, 0x2c4c78
  02c4c60  cmpwi 3, 2
  02c4c64  bf 1, 0x2c4c98
  02c4c68  b 0x2c4cfc
  02c4c6c  li 3, 1
  02c4c70  stb 3, 32(31)
  02c4c74  b 0x2c4cfc
  02c4c78  cmpwi 4, 0
  02c4c7c  bt 2, 0x2c4cfc
  02c4c80  lwz 3, 44(4)
  02c4c84  cmpwi 3, 0
  02c4c88  bf 1, 0x2c4cfc
  02c4c8c  li 3, 2
  02c4c90  stb 3, 32(31)
  02c4c94  b 0x2c4cfc
  02c4c98  li 3, 0
  02c4c9c  li 4, 0
  02c4ca0  ori 5, 31, 0
  02c4ca4  bl 0x15d12c
  02c4ca8  nop
  02c4cac  ori 3, 31, 0
  02c4cb0  bl 0x11a100
  02c4cb4  nop
  02c4cb8  ori 3, 31, 0
  02c4cbc  li 9, 2
  02c4cc0  li 4, 1846
  02c4cc4  li 5, 1
  02c4cc8  li 6, 1847
  02c4ccc  li 7, 1
  02c4cd0  li 8, 1
  02c4cd4  bl 0x11aa78
  02c4cd8  nop
  02c4cdc  ori 3, 31, 0
  02c4ce0  li 4, 1845
  02c4ce4  bl 0x11ad48
  02c4ce8  nop
  02c4cec  ori 3, 31, 0
  02c4cf0  bl 0xefb38
  02c4cf4  nop
  02c4cf8  b 0x2c4cfc
  02c4cfc  ld 0, 144(1)
  02c4d00  mtlr 0
  02c4d04  ld 31, 120(1)
  02c4d08  addi 1, 1, 128
  02c4d0c  blr
