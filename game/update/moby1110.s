# game/update/moby1110.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1110_001d058c:   # 0x1d058c, 0x14 bytes
  01d058c  lis 3, 118
  01d0590  lis 4, 1
  01d0594  addic 3, 3, 17280
  01d0598  stw 4, 72(3)
  01d059c  blr

UpdateMoby_1110:   # 0x1d05f0, 0x928 bytes
  01d05f0  stdu 1, -448(1)
  01d05f4  mflr 0
  01d05f8  std 0, 464(1)
  01d05fc  stfd 30, 432(1)
  01d0600  stfd 31, 440(1)
  01d0604  addi 0, 1, 384
  01d0608  stvx 31, 0, 0
  01d060c  std 31, 424(1)
  01d0610  cmpwi 3, 0
  01d0614  std 30, 416(1)
  01d0618  std 29, 408(1)
  01d061c  std 28, 400(1)
  01d0620  ori 31, 3, 0
  01d0624  bt 2, 0x1d0ee8
  01d0628  lwz 30, 120(31)
  01d062c  cmpwi 30, 0
  01d0630  bt 2, 0x1d0ee8
  01d0634  lis 3, 29
  01d0638  addic 5, 1, 288
  01d063c  addi 4, 3, 1440
  01d0640  ori 3, 31, 0
  01d0644  lfs 31, 0(4)
  01d0648  fmr 1, 31
  01d064c  bl 0x1118d8
  01d0650  nop
  01d0654  lbz 3, 49(31)
  01d0658  cmpwi 3, 0
  01d065c  bt 2, 0x1d06c8
  01d0660  lis 3, 149
  01d0664  lfs 1, 20(31)
  01d0668  lfs 2, 16(31)
  01d066c  addic 3, 3, 5056
  01d0670  lfs 3, 324(3)
  01d0674  lfs 4, 320(3)
  01d0678  fsubs 1, 1, 3
  01d067c  fsubs 2, 2, 4
  01d0680  lfs 3, 24(31)
  01d0684  lfs 4, 328(3)
  01d0688  fsubs 3, 3, 4
  01d068c  lis 3, 29
  01d0690  fmuls 1, 1, 1
  01d0694  addi 3, 3, 1440
  01d0698  fmadds 1, 2, 2, 1
  01d069c  lfs 2, 4(3)
  01d06a0  fmadds 1, 3, 3, 1
  01d06a4  fsqrts 1, 1
  01d06a8  fcmpu 0, 1, 2
  01d06ac  cror 6, 1, 2
  01d06b0  bt 6, 0x1d06c8
  01d06b4  ori 3, 31, 0
  01d06b8  bl 0x106360
  01d06bc  nop
  01d06c0  li 3, 21
  01d06c4  stb 3, 127(31)
  01d06c8  ori 3, 31, 0
  01d06cc  addic 28, 30, 32
  01d06d0  lis 4, 35
  01d06d4  li 5, 0
  01d06d8  bl 0x10675c
  01d06dc  nop
  01d06e0  ori 29, 3, 0
  01d06e4  ori 3, 31, 0
  01d06e8  li 6, 0
  01d06ec  addic 7, 1, 368
  01d06f0  li 9, 0
  01d06f4  li 10, 4
  01d06f8  ori 4, 29, 0
  01d06fc  ori 5, 28, 0
  01d0700  li 8, 0
  01d0704  bl 0x106840
  01d0708  nop
  01d070c  lwz 3, 368(1)
  01d0710  lbz 5, 32(31)
  01d0714  cmpwi 3, 1
  01d0718  lbz 3, 83(31)
  01d071c  lhz 4, 52(31)
  01d0720  lfs 1, 16(31)
  01d0724  bf 1, 0x1d07ec
  01d0728  cmpwi 29, 0
  01d072c  bt 2, 0x1d07ec
  01d0730  lwz 29, 32(29)
  01d0734  lhz 29, 166(29)
  01d0738  cmpwi 1, 29, 869
  01d073c  cmpwi 29, 1110
  01d0740  cror 2, 2, 6
  01d0744  bt 2, 0x1d07ec
  01d0748  cmpwi 29, 871
  01d074c  bt 2, 0x1d07ec
  01d0750  lis 3, 29
  01d0754  li 6, 0
  01d0758  addi 3, 3, 1440
  01d075c  li 9, 2
  01d0760  li 11, 1
  01d0764  li 7, -1
  01d0768  addic 4, 1, 192
  01d076c  lfs 1, 8(3)
  01d0770  stw 6, 204(1)
  01d0774  li 5, 0
  01d0778  stw 6, 200(1)
  01d077c  li 8, 3
  01d0780  stw 6, 196(1)
  01d0784  li 10, 5
  01d0788  stw 6, 192(1)
  01d078c  fmr 2, 1
  01d0790  lfs 4, 20(3)
  01d0794  lfs 3, 12(3)
  01d0798  lfs 5, 16(3)
  01d079c  fmr 6, 4
  01d07a0  lfs 7, 24(3)
  01d07a4  std 9, 144(1)
  01d07a8  std 6, 160(1)
  01d07ac  ori 3, 31, 0
  01d07b0  std 11, 168(1)
  01d07b4  li 9, 3
  01d07b8  std 7, 176(1)
  01d07bc  std 6, 184(1)
  01d07c0  bl 0x10e030
  01d07c4  nop
  01d07c8  ori 3, 31, 0
  01d07cc  li 4, 0
  01d07d0  li 5, -1
  01d07d4  bl 0xfd8d0
  01d07d8  nop
  01d07dc  ori 3, 31, 0
  01d07e0  bl 0xefb38
  01d07e4  nop
  01d07e8  b 0x1d0ee8
  01d07ec  cmpwi 5, 1
  01d07f0  bt 1, 0x1d0808
  01d07f4  cmpwi 5, -1
  01d07f8  bf 1, 0x1d0ed0
  01d07fc  cmpwi 5, 0
  01d0800  bf 1, 0x1d0820
  01d0804  b 0x1d085c
  01d0808  cmpwi 5, 2
  01d080c  cmpwi 1, 3, 1
  01d0810  bf 1, 0x1d0a04
  01d0814  cmpwi 5, 3
  01d0818  bf 1, 0x1d0a2c
  01d081c  b 0x1d0ed0
  01d0820  ori 3, 4, 4096
  01d0824  li 4, 1
  01d0828  sth 3, 52(31)
  01d082c  stfs 1, 96(30)
  01d0830  lfs 1, 20(31)
  01d0834  stfs 1, 100(30)
  01d0838  lfs 1, 24(31)
  01d083c  stfs 1, 104(30)
  01d0840  lfs 1, 28(31)
  01d0844  stfs 1, 108(30)
  01d0848  lwz 3, 36(31)
  01d084c  lwz 3, 16(3)
  01d0850  stb 4, 32(31)
  01d0854  stw 3, 148(31)
  01d0858  b 0x1d0ed0
  01d085c  lis 3, 29
  01d0860  vspltisw 2, -1
  01d0864  li 5, 28
  01d0868  addi 3, 3, 1440
  01d086c  lis 4, 114
  01d0870  li 6, -3056
  01d0874  vslw 2, 2, 2
  01d0878  <unknown>
  01d087c  vspltw 31, 31, 0
  01d0880  <unknown>
  01d0884  li 4, 120
  01d0888  vmaddfp 2, 3, 31, 2
  01d088c  lis 5, 114
  01d0890  vctsxs 2, 2, 0
  01d0894  vspltw 2, 2, 0
  01d0898  stvewx 2, 4, 30
  01d089c  lfs 3, 32(3)
  01d08a0  lfs 1, 72(31)
  01d08a4  lfs 4, -3052(5)
  01d08a8  fmuls 2, 4, 3
  01d08ac  bl 0x502578
  01d08b0  nop
  01d08b4  stfs 1, 72(31)
  01d08b8  lwz 4, 56(30)
  01d08bc  lwz 3, 352(1)
  01d08c0  lfs 5, 16(31)
  01d08c4  lfs 4, 288(1)
  01d08c8  cmpwi 4, 0
  01d08cc  lfs 3, 20(31)
  01d08d0  lfs 2, 292(1)
  01d08d4  lfs 1, 296(1)
  01d08d8  bt 2, 0x1d0934
  01d08dc  lfs 6, 20(4)
  01d08e0  lfs 7, 16(4)
  01d08e4  fsubs 6, 3, 6
  01d08e8  fsubs 7, 5, 7
  01d08ec  lis 5, 29
  01d08f0  addi 5, 5, 1440
  01d08f4  fmuls 6, 6, 6
  01d08f8  fmadds 6, 7, 7, 6
  01d08fc  lfs 7, 36(5)
  01d0900  fsqrts 6, 6
  01d0904  fcmpu 0, 6, 7
  01d0908  cror 6, 1, 2
  01d090c  bt 6, 0x1d0934
  01d0910  lfs 6, 24(31)
  01d0914  lfs 7, 24(4)
  01d0918  lis 5, 29
  01d091c  fsubs 6, 6, 7
  01d0920  addi 5, 5, 1440
  01d0924  lfs 7, 40(5)
  01d0928  fabs 6, 6
  01d092c  fcmpu 0, 6, 7
  01d0930  bt 0, 0x1d0968
  01d0934  cmpwi 3, 0
  01d0938  bt 2, 0x1d0ed0
  01d093c  fsubs 2, 3, 2
  01d0940  fsubs 3, 5, 4
  01d0944  lfs 4, 24(31)
  01d0948  fsubs 1, 4, 1
  01d094c  fmuls 2, 2, 2
  01d0950  fmadds 2, 3, 3, 2
  01d0954  fmadds 1, 1, 1, 2
  01d0958  fsqrts 1, 1
  01d095c  fcmpu 0, 1, 31
  01d0960  cror 6, 1, 2
  01d0964  bt 6, 0x1d0ed0
  01d0968  vspltisw 2, -1
  01d096c  li 3, 0
  01d0970  lis 4, 114
  01d0974  li 5, -3056
  01d0978  vslw 2, 2, 2
  01d097c  stw 3, 112(30)
  01d0980  lis 6, 29
  01d0984  li 3, 120
  01d0988  li 7, 1
  01d098c  <unknown>
  01d0990  addi 6, 6, 1440
  01d0994  li 8, 44
  01d0998  vmaddfp 2, 3, 31, 2
  01d099c  vspltisw 3, -1
  01d09a0  li 9, 124
  01d09a4  li 10, 3
  01d09a8  vslw 3, 3, 3
  01d09ac  vctsxs 2, 2, 0
  01d09b0  vspltw 2, 2, 0
  01d09b4  stvewx 2, 3, 30
  01d09b8  stb 7, 188(31)
  01d09bc  <unknown>
  01d09c0  <unknown>
  01d09c4  vspltw 2, 2, 0
  01d09c8  vmaddfp 2, 4, 2, 3
  01d09cc  vctsxs 2, 2, 0
  01d09d0  vspltw 2, 2, 0
  01d09d4  stvewx 2, 9, 30
  01d09d8  stb 10, 32(31)
  01d09dc  lwz 30, 116(30)
  01d09e0  cmpwi 30, -1
  01d09e4  bt 2, 0x1d09f8
  01d09e8  extsw 3, 30
  01d09ec  li 4, 2
  01d09f0  bl 0x1042ec
  01d09f4  nop
  01d09f8  li 3, 2
  01d09fc  stb 3, 32(31)
  01d0a00  b 0x1d0ed0
  01d0a04  bt 6, 0x1d0a24
  01d0a08  ori 3, 31, 0
  01d0a0c  li 4, 1
  01d0a10  li 5, 0
  01d0a14  li 6, 10
  01d0a18  bl 0xfddc0
  01d0a1c  nop
  01d0a20  lbz 3, 83(31)
  01d0a24  li 4, 3
  01d0a28  stb 4, 32(31)
  01d0a2c  lbz 4, 112(31)
  01d0a30  rlwinm 4, 4, 0, 30, 30
  01d0a34  cmpwi 4, 0
  01d0a38  bt 2, 0x1d0a68
  01d0a3c  cmpwi 1, 3, 2
  01d0a40  lbz 3, 82(31)
  01d0a44  cmpwi 3, 1
  01d0a48  crorc 2, 6, 2
  01d0a4c  bt 2, 0x1d0a68
  01d0a50  ori 3, 31, 0
  01d0a54  li 4, 2
  01d0a58  li 5, 0
  01d0a5c  li 6, 10
  01d0a60  bl 0xfddc0
  01d0a64  nop
  01d0a68  lis 3, 29
  01d0a6c  lis 4, 114
  01d0a70  lfs 1, 112(30)
  01d0a74  addi 3, 3, 1440
  01d0a78  lfs 2, 48(3)
  01d0a7c  lfs 3, -3048(4)
  01d0a80  lis 4, 114
  01d0a84  fmadds 2, 3, 2, 1
  01d0a88  stfs 2, 112(30)
  01d0a8c  lfs 1, 52(3)
  01d0a90  lfs 3, -3052(4)
  01d0a94  fmuls 1, 3, 1
  01d0a98  fcmpu 0, 2, 1
  01d0a9c  cror 6, 0, 2
  01d0aa0  bt 6, 0x1d0aa8
  01d0aa4  stfs 1, 112(30)
  01d0aa8  lbz 3, 188(31)
  01d0aac  cmpwi 3, 1
  01d0ab0  cmpwi 1, 3, 2
  01d0ab4  bf 2, 0x1d0b34
  01d0ab8  lis 3, 29
  01d0abc  lis 4, 114
  01d0ac0  lfs 1, 24(31)
  01d0ac4  addi 3, 3, 1440
  01d0ac8  lfs 2, 56(3)
  01d0acc  lfs 3, -3064(4)
  01d0ad0  addic 3, 30, 124
  01d0ad4  fmadds 1, 3, 2, 1
  01d0ad8  stfs 1, 24(31)
  01d0adc  bl 0x4fff60
  01d0ae0  nop
  01d0ae4  cmpwi 3, 0
  01d0ae8  bt 2, 0x1d0b74
  01d0aec  lis 3, 29
  01d0af0  vspltisw 2, -1
  01d0af4  li 5, 44
  01d0af8  addi 3, 3, 1440
  01d0afc  lis 4, 114
  01d0b00  li 6, -3056
  01d0b04  vslw 2, 2, 2
  01d0b08  <unknown>
  01d0b0c  li 3, 124
  01d0b10  vspltw 3, 3, 0
  01d0b14  <unknown>
  01d0b18  li 4, 2
  01d0b1c  vmaddfp 2, 4, 3, 2
  01d0b20  vctsxs 2, 2, 0
  01d0b24  vspltw 2, 2, 0
  01d0b28  stvewx 2, 3, 30
  01d0b2c  stb 4, 188(31)
  01d0b30  b 0x1d0b74
  01d0b34  bf 6, 0x1d0b74
  01d0b38  lis 3, 29
  01d0b3c  lis 4, 114
  01d0b40  lfs 1, 24(31)
  01d0b44  addi 3, 3, 1440
  01d0b48  lfs 2, 56(3)
  01d0b4c  lfs 3, -3064(4)
  01d0b50  addic 3, 30, 124
  01d0b54  fnmsubs 1, 3, 2, 1
  01d0b58  stfs 1, 24(31)
  01d0b5c  bl 0x4fff60
  01d0b60  nop
  01d0b64  cmpwi 3, 0
  01d0b68  bt 2, 0x1d0b74
  01d0b6c  li 3, 0
  01d0b70  stb 3, 188(31)
  01d0b74  lfs 1, 292(1)
  01d0b78  lfs 2, 20(31)
  01d0b7c  lfs 3, 288(1)
  01d0b80  fsubs 1, 1, 2
  01d0b84  lfs 4, 16(31)
  01d0b88  lfs 5, 296(1)
  01d0b8c  fsubs 3, 3, 4
  01d0b90  lfs 6, 24(31)
  01d0b94  fsubs 5, 5, 6
  01d0b98  fmuls 7, 1, 1
  01d0b9c  lis 3, 29
  01d0ba0  stfs 3, 208(1)
  01d0ba4  stfs 1, 212(1)
  01d0ba8  lfs 8, 300(1)
  01d0bac  fmadds 7, 3, 3, 7
  01d0bb0  stfs 5, 216(1)
  01d0bb4  stfs 8, 220(1)
  01d0bb8  lfs 8, 112(30)
  01d0bbc  addi 3, 3, 1440
  01d0bc0  fmadds 7, 5, 5, 7
  01d0bc4  lfs 30, 8(3)
  01d0bc8  fsqrts 7, 7
  01d0bcc  fdivs 8, 8, 7
  01d0bd0  fsub 9, 30, 7
  01d0bd4  fsub 10, 30, 7
  01d0bd8  fsub 11, 30, 7
  01d0bdc  fsub 12, 7, 30
  01d0be0  fsub 13, 7, 30
  01d0be4  fsub 7, 7, 30
  01d0be8  fmuls 3, 3, 8
  01d0bec  fmuls 1, 1, 8
  01d0bf0  fmuls 5, 5, 8
  01d0bf4  fsel 8, 9, 30, 3
  01d0bf8  fsel 9, 10, 30, 1
  01d0bfc  fsel 10, 11, 30, 5
  01d0c00  fsel 3, 12, 8, 3
  01d0c04  fsel 1, 13, 9, 1
  01d0c08  fsel 5, 7, 10, 5
  01d0c0c  fadds 4, 4, 3
  01d0c10  fadds 2, 2, 1
  01d0c14  fadds 6, 6, 5
  01d0c18  stfs 3, 208(1)
  01d0c1c  stfs 1, 212(1)
  01d0c20  stfs 5, 216(1)
  01d0c24  stfs 4, 16(31)
  01d0c28  stfs 2, 20(31)
  01d0c2c  stfs 6, 24(31)
  01d0c30  lfs 1, 100(30)
  01d0c34  lfs 3, 96(30)
  01d0c38  fsubs 1, 2, 1
  01d0c3c  fsubs 2, 4, 3
  01d0c40  lfs 3, 104(30)
  01d0c44  fsubs 3, 6, 3
  01d0c48  fmuls 1, 1, 1
  01d0c4c  fmadds 1, 2, 2, 1
  01d0c50  lfs 2, 60(3)
  01d0c54  fmadds 1, 3, 3, 1
  01d0c58  fsqrts 1, 1
  01d0c5c  fcmpu 0, 1, 2
  01d0c60  cror 6, 0, 2
  01d0c64  bt 6, 0x1d0c78
  01d0c68  ori 3, 31, 0
  01d0c6c  bl 0xefb38
  01d0c70  nop
  01d0c74  b 0x1d0ee8
  01d0c78  lis 3, 29
  01d0c7c  addic 28, 1, 240
  01d0c80  addi 29, 3, 1440
  01d0c84  lis 5, 1
  01d0c88  addic 7, 1, 208
  01d0c8c  ori 3, 28, 0
  01d0c90  ori 4, 31, 0
  01d0c94  lfs 31, 20(29)
  01d0c98  ori 5, 5, 1
  01d0c9c  fmr 1, 31
  01d0ca0  bl 0x10581c
  01d0ca4  nop
  01d0ca8  lfs 1, 16(31)
  01d0cac  addic 3, 1, 224
  01d0cb0  lfs 2, 20(31)
  01d0cb4  li 5, 16
  01d0cb8  stfs 1, 224(1)
  01d0cbc  ori 6, 31, 0
  01d0cc0  lfs 1, 28(31)
  01d0cc4  ori 7, 28, 0
  01d0cc8  stfs 2, 228(1)
  01d0ccc  stfs 1, 236(1)
  01d0cd0  lfs 1, 64(29)
  01d0cd4  lfs 2, 24(31)
  01d0cd8  fadds 2, 2, 1
  01d0cdc  stfs 2, 232(1)
  01d0ce0  bl 0x5e598
  01d0ce4  nop
  01d0ce8  lfs 4, 16(31)
  01d0cec  cmpwi 3, 0
  01d0cf0  lfs 3, 20(31)
  01d0cf4  lfs 2, 24(31)
  01d0cf8  lfs 1, 28(31)
  01d0cfc  bt 2, 0x1d0db8
  01d0d00  lis 3, 161
  01d0d04  addic 3, 3, 2368
  01d0d08  lwz 3, 24(3)
  01d0d0c  cmpwi 3, 0
  01d0d10  bt 2, 0x1d0db8
  01d0d14  lhz 3, 166(3)
  01d0d18  cmpwi 1, 3, 1110
  01d0d1c  cmpwi 3, 867
  01d0d20  cror 2, 2, 6
  01d0d24  bt 2, 0x1d0db8
  01d0d28  cmpwi 3, 1112
  01d0d2c  bt 2, 0x1d0db8
  01d0d30  cmpwi 3, 869
  01d0d34  bt 2, 0x1d0db8
  01d0d38  cmpwi 3, 871
  01d0d3c  bt 2, 0x1d0db8
  01d0d40  lis 3, 29
  01d0d44  fmr 1, 30
  01d0d48  li 7, 2
  01d0d4c  fmr 2, 30
  01d0d50  addi 5, 3, 1440
  01d0d54  fmr 4, 31
  01d0d58  li 11, 0
  01d0d5c  fmr 6, 31
  01d0d60  li 12, 1
  01d0d64  li 6, -1
  01d0d68  ori 3, 31, 0
  01d0d6c  lfs 3, 12(5)
  01d0d70  lfs 5, 16(5)
  01d0d74  addic 4, 1, 208
  01d0d78  lfs 7, 24(5)
  01d0d7c  li 8, 3
  01d0d80  std 7, 144(1)
  01d0d84  li 5, 0
  01d0d88  std 11, 160(1)
  01d0d8c  li 9, 3
  01d0d90  std 12, 168(1)
  01d0d94  li 10, 5
  01d0d98  std 6, 176(1)
  01d0d9c  std 11, 184(1)
  01d0da0  bl 0x10e030
  01d0da4  nop
  01d0da8  ori 3, 31, 0
  01d0dac  bl 0xefb38
  01d0db0  nop
  01d0db4  b 0x1d0ee8
  01d0db8  lis 3, 29
  01d0dbc  stfs 4, 224(1)
  01d0dc0  li 5, 0
  01d0dc4  addi 3, 3, 1440
  01d0dc8  stfs 3, 228(1)
  01d0dcc  stfs 1, 236(1)
  01d0dd0  ori 6, 31, 0
  01d0dd4  lfs 1, 68(3)
  01d0dd8  addic 3, 1, 224
  01d0ddc  fadds 2, 2, 1
  01d0de0  stfs 2, 232(1)
  01d0de4  bl 0x59e20
  01d0de8  nop
  01d0dec  cmpwi 3, 0
  01d0df0  bt 2, 0x1d0e44
  01d0df4  lis 3, 161
  01d0df8  lfs 1, 224(1)
  01d0dfc  lfs 2, 228(1)
  01d0e00  addic 3, 3, 2368
  01d0e04  lfs 3, 48(3)
  01d0e08  lfs 4, 52(3)
  01d0e0c  fsubs 1, 3, 1
  01d0e10  lfs 3, 56(3)
  01d0e14  lfs 5, 232(1)
  01d0e18  fsubs 2, 4, 2
  01d0e1c  lfs 4, 16(31)
  01d0e20  fsubs 3, 3, 5
  01d0e24  lfs 5, 20(31)
  01d0e28  lfs 6, 24(31)
  01d0e2c  fadds 1, 4, 1
  01d0e30  fadds 2, 5, 2
  01d0e34  fadds 3, 6, 3
  01d0e38  stfs 1, 16(31)
  01d0e3c  stfs 2, 20(31)
  01d0e40  stfs 3, 24(31)
  01d0e44  addic 3, 30, 120
  01d0e48  bl 0x4fff60
  01d0e4c  nop
  01d0e50  cmpwi 3, 0
  01d0e54  bt 2, 0x1d0ed0
  01d0e58  lis 3, 29
  01d0e5c  li 6, 2
  01d0e60  fmr 1, 30
  01d0e64  addi 7, 3, 1440
  01d0e68  fmr 2, 30
  01d0e6c  li 11, 0
  01d0e70  fmr 4, 31
  01d0e74  li 12, 1
  01d0e78  fmr 6, 31
  01d0e7c  li 30, -1
  01d0e80  ori 3, 31, 0
  01d0e84  lfs 3, 12(7)
  01d0e88  addic 4, 1, 208
  01d0e8c  lfs 5, 16(7)
  01d0e90  li 5, 0
  01d0e94  lfs 7, 24(7)
  01d0e98  li 8, 3
  01d0e9c  std 6, 144(1)
  01d0ea0  li 9, 3
  01d0ea4  std 11, 160(1)
  01d0ea8  li 10, 5
  01d0eac  std 12, 168(1)
  01d0eb0  std 30, 176(1)
  01d0eb4  std 11, 184(1)
  01d0eb8  bl 0x10e030
  01d0ebc  nop
  01d0ec0  ori 3, 31, 0
  01d0ec4  bl 0xefb38
  01d0ec8  nop
  01d0ecc  b 0x1d0ee8
  01d0ed0  lis 3, 29
  01d0ed4  addi 4, 3, 1440
  01d0ed8  ori 3, 31, 0
  01d0edc  lfs 1, 72(4)
  01d0ee0  bl 0x106150
  01d0ee4  nop
  01d0ee8  li 0, 384
  01d0eec  lvx 31, 1, 0
  01d0ef0  ld 0, 464(1)
  01d0ef4  mtlr 0
  01d0ef8  lfd 30, 432(1)
  01d0efc  lfd 31, 440(1)
  01d0f00  ld 28, 400(1)
  01d0f04  ld 29, 408(1)
  01d0f08  ld 30, 416(1)
  01d0f0c  ld 31, 424(1)
  01d0f10  addi 1, 1, 448
  01d0f14  blr
