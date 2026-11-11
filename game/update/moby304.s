# game/update/moby304.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1463_00339b58:   # 0x339b58, 0x14 bytes
  0339b58  lis 3, 129
  0339b5c  lis 4, 1
  0339b60  addic 3, 3, 7236
  0339b64  stw 4, 72(3)
  0339b68  blr

UpdateMoby_304:   # 0x339b70, 0x244 bytes
  0339b70  stdu 1, -128(1)
  0339b74  mflr 0
  0339b78  std 0, 144(1)
  0339b7c  std 31, 120(1)
  0339b80  std 30, 112(1)
  0339b84  ori 31, 3, 0
  0339b88  lwz 30, 120(31)
  0339b8c  lbz 3, 32(31)
  0339b90  cmpwi 30, 0
  0339b94  cmpwi 1, 3, 0
  0339b98  cmpwi 6, 3, 1
  0339b9c  cmpwi 7, 3, 2
  0339ba0  bt 2, 0x339bdc
  0339ba4  lwz 4, 64(30)
  0339ba8  cmpwi 4, -1
  0339bac  bt 2, 0x339bdc
  0339bb0  clrlwi 4, 4, 31
  0339bb4  cmpwi 4, 0
  0339bb8  bf 2, 0x339bdc
  0339bbc  lis 4, 151
  0339bc0  lwz 4, -13828(4)
  0339bc4  cmpwi 4, 0
  0339bc8  bf 2, 0x339bdc
  0339bcc  ori 3, 31, 0
  0339bd0  bl 0xefb38
  0339bd4  nop
  0339bd8  b 0x339d9c
  0339bdc  cmpwi 3, 4
  0339be0  bt 2, 0x339d30
  0339be4  bt 30, 0x339d5c
  0339be8  bt 26, 0x339c84
  0339bec  bf 6, 0x339d9c
  0339bf0  lhz 3, 166(31)
  0339bf4  cmpwi 3, 304
  0339bf8  bt 2, 0x339c08
  0339bfc  li 3, 2
  0339c00  stb 3, 32(31)
  0339c04  b 0x339d9c
  0339c08  lwz 4, 64(30)
  0339c0c  lis 3, 129
  0339c10  lis 5, 151
  0339c14  slwi 4, 4, 2
  0339c18  addic 3, 3, 7344
  0339c1c  extsw 4, 4
  0339c20  addic 5, 5, -25432
  0339c24  lwzx 3, 3, 4
  0339c28  extsw 3, 3
  0339c2c  lbzx 3, 5, 3
  0339c30  cmpwi 3, 0
  0339c34  bt 2, 0x339c44
  0339c38  li 3, 3
  0339c3c  stb 3, 32(31)
  0339c40  b 0x339d9c
  0339c44  ori 4, 30, 0
  0339c48  ori 3, 31, 0
  0339c4c  bl 0x4d3720
  0339c50  nop
  0339c54  li 4, -1
  0339c58  li 5, 3
  0339c5c  subc 3, 4, 3
  0339c60  li 4, 1
  0339c64  cntlzw 3, 3
  0339c68  subc 5, 5, 4
  0339c6c  sldi 3, 3, 58
  0339c70  sradi 3, 3, 63
  0339c74  and 3, 3, 5
  0339c78  addc 3, 4, 3
  0339c7c  stb 3, 32(31)
  0339c80  b 0x339d9c
  0339c84  lis 4, 16371
  0339c88  ori 3, 31, 0
  0339c8c  ori 5, 4, 13107
  0339c90  ori 4, 30, 0
  0339c94  stw 5, 12(30)
  0339c98  bl 0x4d3870
  0339c9c  nop
  0339ca0  lhz 3, 4(30)
  0339ca4  cmpwi 3, 2
  0339ca8  bf 2, 0x339d9c
  0339cac  lwz 6, 64(30)
  0339cb0  lis 3, 129
  0339cb4  lis 5, 151
  0339cb8  slwi 6, 6, 2
  0339cbc  addic 3, 3, 7344
  0339cc0  extsw 6, 6
  0339cc4  addic 5, 5, -25432
  0339cc8  li 4, 1
  0339ccc  li 7, 4
  0339cd0  lis 9, 151
  0339cd4  lwzx 6, 3, 6
  0339cd8  lis 8, 115
  0339cdc  extsw 6, 6
  0339ce0  addic 8, 8, 32068
  0339ce4  stbx 4, 5, 6
  0339ce8  stb 7, 32(31)
  0339cec  lwz 4, 64(30)
  0339cf0  lwz 5, -25440(9)
  0339cf4  slwi 4, 4, 2
  0339cf8  extsw 4, 4
  0339cfc  lwzx 4, 3, 4
  0339d00  sldi 3, 4, 3
  0339d04  extsw 4, 4
  0339d08  addc 6, 3, 3
  0339d0c  addc 3, 3, 6
  0339d10  extsw 6, 3
  0339d14  ori 3, 31, 0
  0339d18  lhzx 6, 8, 6
  0339d1c  subc 5, 5, 6
  0339d20  stw 5, -25440(9)
  0339d24  bl 0x16b650
  0339d28  nop
  0339d2c  b 0x339d9c
  0339d30  lis 3, 161
  0339d34  lwz 3, 1800(3)
  0339d38  cmpwi 3, 0
  0339d3c  bf 2, 0x339d9c
  0339d40  li 3, 0
  0339d44  li 4, -1
  0339d48  bl 0xe8aa4
  0339d4c  nop
  0339d50  li 3, 3
  0339d54  stb 3, 32(31)
  0339d58  b 0x339d9c
  0339d5c  lwz 4, 64(30)
  0339d60  lis 3, 129
  0339d64  lis 5, 151
  0339d68  slwi 4, 4, 2
  0339d6c  addic 3, 3, 7344
  0339d70  extsw 4, 4
  0339d74  addic 5, 5, -25432
  0339d78  lwzx 3, 3, 4
  0339d7c  extsw 3, 3
  0339d80  lbzx 3, 5, 3
  0339d84  cmpwi 3, 0
  0339d88  bt 2, 0x339d9c
  0339d8c  ori 3, 31, 0
  0339d90  bl 0xefb38
  0339d94  nop
  0339d98  b 0x339d9c
  0339d9c  ld 0, 144(1)
  0339da0  mtlr 0
  0339da4  ld 30, 112(1)
  0339da8  ld 31, 120(1)
  0339dac  addi 1, 1, 128
  0339db0  blr

M1463_00339db4:   # 0x339db4, 0x14 bytes
  0339db4  lis 3, 129
  0339db8  lis 4, 1
  0339dbc  addic 3, 3, 7388
  0339dc0  stw 4, 72(3)
  0339dc4  blr
