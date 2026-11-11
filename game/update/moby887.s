# game/update/moby887.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M887_004a2854:   # 0x4a2854, 0x14 bytes
  04a2854  lis 3, 141
  04a2858  lis 4, 1
  04a285c  addic 3, 3, -16508
  04a2860  stw 4, 72(3)
  04a2864  blr

UpdateMoby_887:   # 0x4a2878, 0x2e8 bytes
  04a2878  lbz 6, 176(3)
  04a287c  lis 5, 74
  04a2880  lwz 4, 120(3)
  04a2884  cmpwi 6, 255
  04a2888  addi 5, 5, 10344
  04a288c  bt 2, 0x4a28c4
  04a2890  lis 7, 151
  04a2894  lis 8, 161
  04a2898  addic 8, 8, -13692
  04a289c  lwz 7, -25488(7)
  04a28a0  addc 6, 6, 8
  04a28a4  slwi 7, 7, 4
  04a28a8  clrldi 6, 6, 32
  04a28ac  extsw 7, 7
  04a28b0  lbzx 6, 6, 7
  04a28b4  cmpwi 6, 255
  04a28b8  bf 2, 0x4a28c4
  04a28bc  li 6, -1
  04a28c0  stw 6, 16(4)
  04a28c4  lbz 6, 32(3)
  04a28c8  cmpwi 6, 4
  04a28cc  cmpwi 1, 6, 3
  04a28d0  cmpwi 6, 6, 2
  04a28d4  cmpwi 7, 6, 1
  04a28d8  bt 2, 0x4a2a88
  04a28dc  bt 6, 0x4a2a34
  04a28e0  bt 26, 0x4a2970
  04a28e4  bt 30, 0x4a291c
  04a28e8  cmpwi 6, 0
  04a28ec  bf 2, 0x4a2b5c
  04a28f0  lfs 1, 16(3)
  04a28f4  li 5, 1
  04a28f8  stfs 1, 0(4)
  04a28fc  lfs 1, 20(3)
  04a2900  stfs 1, 4(4)
  04a2904  lfs 1, 24(3)
  04a2908  stfs 1, 8(4)
  04a290c  lfs 1, 28(3)
  04a2910  stfs 1, 12(4)
  04a2914  stb 5, 32(3)
  04a2918  b 0x4a2b5c
  04a291c  lwz 5, 16(4)
  04a2920  cmpwi 5, -1
  04a2924  bt 2, 0x4a2964
  04a2928  lis 6, 164
  04a292c  slwi 5, 5, 8
  04a2930  lwz 6, -28512(6)
  04a2934  addc 5, 6, 5
  04a2938  cmpwi 5, 0
  04a293c  bt 2, 0x4a2964
  04a2940  clrldi 5, 5, 32
  04a2944  lbz 5, 32(5)
  04a2948  cmpwi 1, 5, 253
  04a294c  cmpwi 5, 254
  04a2950  cror 2, 2, 6
  04a2954  bt 2, 0x4a2964
  04a2958  lwz 4, 20(4)
  04a295c  cmpw 5, 4
  04a2960  bf 2, 0x4a2b5c
  04a2964  li 4, 2
  04a2968  stb 4, 32(3)
  04a296c  b 0x4a2b5c
  04a2970  lwz 6, 16(4)
  04a2974  cmpwi 6, -1
  04a2978  bt 2, 0x4a29c4
  04a297c  lis 7, 164
  04a2980  slwi 6, 6, 8
  04a2984  lwz 7, -28512(7)
  04a2988  addc 6, 7, 6
  04a298c  cmpwi 6, 0
  04a2990  bt 2, 0x4a29c4
  04a2994  clrldi 6, 6, 32
  04a2998  lbz 6, 32(6)
  04a299c  cmpwi 1, 6, 253
  04a29a0  cmpwi 6, 254
  04a29a4  cror 2, 2, 6
  04a29a8  bt 2, 0x4a29c4
  04a29ac  lwz 7, 24(4)
  04a29b0  cmpw 6, 7
  04a29b4  bf 2, 0x4a29c4
  04a29b8  li 4, 4
  04a29bc  stb 4, 32(3)
  04a29c0  b 0x4a2b5c
  04a29c4  lfs 1, 20(3)
  04a29c8  lfs 3, 4(4)
  04a29cc  lfs 2, 16(3)
  04a29d0  fsubs 3, 1, 3
  04a29d4  lfs 4, 0(4)
  04a29d8  fsubs 4, 2, 4
  04a29dc  fmuls 3, 3, 3
  04a29e0  fmadds 3, 4, 4, 3
  04a29e4  lfs 4, 0(5)
  04a29e8  fsqrts 3, 3
  04a29ec  fcmpu 0, 3, 4
  04a29f0  cror 6, 0, 2
  04a29f4  bt 6, 0x4a2a04
  04a29f8  li 4, 3
  04a29fc  stb 4, 32(3)
  04a2a00  b 0x4a2b5c
  04a2a04  lfs 3, 4(5)
  04a2a08  lfs 4, 208(3)
  04a2a0c  lfs 5, 212(3)
  04a2a10  lfs 6, 216(3)
  04a2a14  fmadds 2, 4, 3, 2
  04a2a18  lfs 7, 24(3)
  04a2a1c  fmadds 1, 5, 3, 1
  04a2a20  fmadds 3, 6, 3, 7
  04a2a24  stfs 2, 16(3)
  04a2a28  stfs 1, 20(3)
  04a2a2c  stfs 3, 24(3)
  04a2a30  b 0x4a2b5c
  04a2a34  lwz 5, 16(4)
  04a2a38  cmpwi 5, -1
  04a2a3c  bt 2, 0x4a2b5c
  04a2a40  lis 6, 164
  04a2a44  slwi 5, 5, 8
  04a2a48  lwz 6, -28512(6)
  04a2a4c  addc 5, 6, 5
  04a2a50  cmpwi 5, 0
  04a2a54  bt 2, 0x4a2b5c
  04a2a58  clrldi 5, 5, 32
  04a2a5c  lbz 5, 32(5)
  04a2a60  cmpwi 1, 5, 253
  04a2a64  cmpwi 5, 254
  04a2a68  cror 2, 2, 6
  04a2a6c  bt 2, 0x4a2b5c
  04a2a70  lwz 4, 24(4)
  04a2a74  cmpw 5, 4
  04a2a78  bf 2, 0x4a2b5c
  04a2a7c  li 4, 4
  04a2a80  stb 4, 32(3)
  04a2a84  b 0x4a2b5c
  04a2a88  lwz 6, 16(4)
  04a2a8c  cmpwi 6, -1
  04a2a90  bt 2, 0x4a2ad0
  04a2a94  lis 7, 164
  04a2a98  slwi 6, 6, 8
  04a2a9c  lwz 7, -28512(7)
  04a2aa0  addc 6, 7, 6
  04a2aa4  cmpwi 6, 0
  04a2aa8  bt 2, 0x4a2ad0
  04a2aac  clrldi 6, 6, 32
  04a2ab0  lbz 6, 32(6)
  04a2ab4  cmpwi 1, 6, 253
  04a2ab8  cmpwi 6, 254
  04a2abc  cror 2, 2, 6
  04a2ac0  bt 2, 0x4a2ad0
  04a2ac4  lwz 7, 20(4)
  04a2ac8  cmpw 6, 7
  04a2acc  bf 2, 0x4a2adc
  04a2ad0  li 4, 2
  04a2ad4  stb 4, 32(3)
  04a2ad8  b 0x4a2b5c
  04a2adc  lfs 2, 20(3)
  04a2ae0  lfs 1, 4(4)
  04a2ae4  lfs 4, 16(3)
  04a2ae8  fsubs 1, 2, 1
  04a2aec  lfs 3, 0(4)
  04a2af0  fsubs 5, 4, 3
  04a2af4  fmuls 1, 1, 1
  04a2af8  fmadds 1, 5, 5, 1
  04a2afc  fsqrts 6, 1
  04a2b00  lfs 1, 8(5)
  04a2b04  fcmpu 0, 6, 1
  04a2b08  bt 1, 0x4a2b34
  04a2b0c  stfs 3, 16(3)
  04a2b10  lfs 1, 4(4)
  04a2b14  li 5, 1
  04a2b18  stfs 1, 20(3)
  04a2b1c  lfs 1, 8(4)
  04a2b20  stfs 1, 24(3)
  04a2b24  lfs 1, 12(4)
  04a2b28  stb 5, 32(3)
  04a2b2c  stfs 1, 28(3)
  04a2b30  b 0x4a2b5c
  04a2b34  lfs 3, 208(3)
  04a2b38  lfs 5, 212(3)
  04a2b3c  lfs 6, 216(3)
  04a2b40  fmadds 3, 3, 1, 4
  04a2b44  lfs 4, 24(3)
  04a2b48  fmadds 2, 5, 1, 2
  04a2b4c  fmadds 1, 6, 1, 4
  04a2b50  stfs 3, 16(3)
  04a2b54  stfs 2, 20(3)
  04a2b58  stfs 1, 24(3)
  04a2b5c  blr

M887_004a2b60:   # 0x4a2b60, 0x14 bytes
  04a2b60  lis 3, 141
  04a2b64  lis 4, 1
  04a2b68  addic 3, 3, -16396
  04a2b6c  stw 4, 72(3)
  04a2b70  blr
