# game/update/moby1353.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1353_00255850:   # 0x255850, 0x14 bytes
  0255850  lis 3, 122
  0255854  lis 4, 1
  0255858  addic 3, 3, -17540
  025585c  stw 4, 72(3)
  0255860  blr

UpdateMoby_1353_GemlikManager:   # 0x255868, 0x69c bytes
  0255868  stdu 1, -144(1)
  025586c  mflr 0
  0255870  std 0, 160(1)
  0255874  std 31, 136(1)
  0255878  ori 31, 3, 0
  025587c  std 30, 128(1)
  0255880  lbz 3, 32(31)
  0255884  lwz 30, 120(31)
  0255888  cmpwi 1, 3, 6
  025588c  cmpwi 6, 3, 5
  0255890  std 29, 120(1)
  0255894  cmpwi 7, 3, 4
  0255898  bt 5, 0x2558cc
  025589c  bt 6, 0x255b80
  02558a0  bt 26, 0x255a74
  02558a4  bt 30, 0x25599c
  02558a8  cmpwi 3, 3
  02558ac  bt 2, 0x255990
  02558b0  cmpwi 3, 2
  02558b4  bt 2, 0x255974
  02558b8  cmpwi 3, 1
  02558bc  bt 2, 0x25592c
  02558c0  cmpwi 3, 0
  02558c4  bt 2, 0x255910
  02558c8  b 0x255ee8
  02558cc  cmpwi 3, 14
  02558d0  bt 2, 0x255edc
  02558d4  cmpwi 3, 13
  02558d8  bt 2, 0x255e68
  02558dc  cmpwi 3, 12
  02558e0  bt 2, 0x255e5c
  02558e4  cmpwi 3, 11
  02558e8  bt 2, 0x255dec
  02558ec  cmpwi 3, 10
  02558f0  bt 2, 0x255d18
  02558f4  cmpwi 3, 9
  02558f8  bt 2, 0x255cec
  02558fc  cmpwi 3, 8
  0255900  bt 2, 0x255cc4
  0255904  cmpwi 3, 7
  0255908  bt 2, 0x255b8c
  025590c  b 0x255ee8
  0255910  lis 3, 161
  0255914  lwz 3, 1800(3)
  0255918  cmpwi 3, 0
  025591c  bf 2, 0x255ee8
  0255920  li 3, 1
  0255924  stb 3, 32(31)
  0255928  b 0x255ee8
  025592c  lis 3, 151
  0255930  addic 3, 3, -16400
  0255934  lbz 4, 100(3)
  0255938  cmpwi 4, 0
  025593c  bt 2, 0x25594c
  0255940  li 3, 3
  0255944  stb 3, 32(31)
  0255948  b 0x255ee8
  025594c  ori 5, 3, 0
  0255950  li 6, 1
  0255954  li 7, 2
  0255958  li 3, 0
  025595c  li 4, 0
  0255960  stb 6, 100(5)
  0255964  stb 7, 32(31)
  0255968  bl 0x167e60
  025596c  nop
  0255970  b 0x255ee8
  0255974  lis 3, 161
  0255978  lwz 3, 1800(3)
  025597c  cmpwi 3, 2
  0255980  bt 2, 0x255ee8
  0255984  li 3, 3
  0255988  stb 3, 32(31)
  025598c  b 0x255ee8
  0255990  li 3, 4
  0255994  stb 3, 32(31)
  0255998  b 0x255ee8
  025599c  lis 29, 151
  02559a0  addic 29, 29, -16400
  02559a4  lbz 3, 101(29)
  02559a8  cmpwi 3, 0
  02559ac  bt 2, 0x2559bc
  02559b0  li 3, 6
  02559b4  stb 3, 32(31)
  02559b8  b 0x255a3c
  02559bc  lwz 3, 0(30)
  02559c0  cmpwi 3, -1
  02559c4  bt 2, 0x255a34
  02559c8  lis 5, 151
  02559cc  extsw 4, 3
  02559d0  addic 3, 5, -25248
  02559d4  bl 0x110b70
  02559d8  nop
  02559dc  cmpwi 3, 0
  02559e0  bt 2, 0x255a3c
  02559e4  li 3, 1
  02559e8  stb 3, 101(29)
  02559ec  lwz 29, 20(30)
  02559f0  cmpwi 29, -1
  02559f4  bt 2, 0x255a18
  02559f8  lis 3, 164
  02559fc  slwi 4, 29, 8
  0255a00  lwz 3, -28512(3)
  0255a04  addc 3, 3, 4
  0255a08  clrldi 3, 3, 32
  0255a0c  lhz 4, 52(3)
  0255a10  ori 4, 4, 65
  0255a14  sth 4, 52(3)
  0255a18  li 5, 5
  0255a1c  li 3, 1
  0255a20  li 4, 0
  0255a24  stb 5, 32(31)
  0255a28  bl 0x167e60
  0255a2c  nop
  0255a30  b 0x255a3c
  0255a34  li 3, 7
  0255a38  stb 3, 32(31)
  0255a3c  lbz 3, 32(31)
  0255a40  cmpwi 3, 4
  0255a44  bt 2, 0x255ee8
  0255a48  lwz 30, 12(30)
  0255a4c  cmpwi 30, -1
  0255a50  bt 2, 0x255ee8
  0255a54  lis 3, 164
  0255a58  slwi 4, 30, 8
  0255a5c  lwz 3, -28512(3)
  0255a60  addc 3, 3, 4
  0255a64  clrldi 3, 3, 32
  0255a68  bl 0xefb38
  0255a6c  nop
  0255a70  b 0x255ee8
  0255a74  lis 3, 161
  0255a78  lwz 3, 1800(3)
  0255a7c  cmpwi 3, 2
  0255a80  bt 2, 0x255ee8
  0255a84  lwz 3, 20(30)
  0255a88  cmpwi 3, -1
  0255a8c  bt 2, 0x255ab4
  0255a90  lis 4, 164
  0255a94  slwi 3, 3, 8
  0255a98  li 5, -66
  0255a9c  lwz 4, -28512(4)
  0255aa0  addc 3, 4, 3
  0255aa4  clrldi 3, 3, 32
  0255aa8  lhz 4, 52(3)
  0255aac  and 4, 4, 5
  0255ab0  sth 4, 52(3)
  0255ab4  lwz 3, 8(30)
  0255ab8  cmpwi 3, -1
  0255abc  bt 2, 0x255b74
  0255ac0  lwz 4, 16(30)
  0255ac4  cmpwi 4, -1
  0255ac8  bt 2, 0x255b74
  0255acc  lis 5, 164
  0255ad0  lis 6, 165
  0255ad4  slwi 4, 4, 8
  0255ad8  slwi 3, 3, 7
  0255adc  lwz 5, -28512(5)
  0255ae0  addc 4, 5, 4
  0255ae4  lwz 5, 7128(6)
  0255ae8  clrldi 29, 4, 32
  0255aec  addc 3, 5, 3
  0255af0  li 5, 0
  0255af4  clrldi 3, 3, 32
  0255af8  lfs 1, 48(3)
  0255afc  stfs 1, 16(29)
  0255b00  lfs 1, 52(3)
  0255b04  stfs 1, 20(29)
  0255b08  lfs 1, 56(3)
  0255b0c  stfs 1, 24(29)
  0255b10  lfs 1, 60(3)
  0255b14  stfs 1, 28(29)
  0255b18  lwz 3, 8(30)
  0255b1c  lwz 4, 7128(6)
  0255b20  slwi 3, 3, 7
  0255b24  li 6, 1
  0255b28  addc 3, 4, 3
  0255b2c  addic 4, 3, 48
  0255b30  addic 7, 3, 112
  0255b34  clrldi 3, 4, 32
  0255b38  clrldi 4, 7, 32
  0255b3c  bl 0xa0c38
  0255b40  nop
  0255b44  lis 3, 151
  0255b48  li 4, 1
  0255b4c  addic 3, 3, -25376
  0255b50  lis 6, 16253
  0255b54  lis 5, 150
  0255b58  li 7, 2
  0255b5c  stb 4, 8357(3)
  0255b60  lwz 4, 120(29)
  0255b64  ori 3, 6, 28836
  0255b68  stw 3, 124(4)
  0255b6c  stw 3, -12528(5)
  0255b70  stb 7, 32(29)
  0255b74  li 3, 6
  0255b78  stb 3, 32(31)
  0255b7c  b 0x255ee8
  0255b80  li 3, 7
  0255b84  stb 3, 32(31)
  0255b88  b 0x255ee8
  0255b8c  lis 29, 151
  0255b90  addic 29, 29, -16400
  0255b94  lbz 3, 102(29)
  0255b98  cmpwi 3, 0
  0255b9c  bt 2, 0x255bac
  0255ba0  li 3, 12
  0255ba4  stb 3, 32(31)
  0255ba8  b 0x255ee8
  0255bac  lwz 3, 20(30)
  0255bb0  cmpwi 3, -1
  0255bb4  bt 2, 0x255cb8
  0255bb8  lis 4, 164
  0255bbc  slwi 3, 3, 8
  0255bc0  lwz 4, -28512(4)
  0255bc4  addc 3, 4, 3
  0255bc8  clrldi 3, 3, 32
  0255bcc  cmpwi 3, 0
  0255bd0  bt 2, 0x255bf4
  0255bd4  lhz 5, 166(3)
  0255bd8  cmpwi 5, 388
  0255bdc  bf 2, 0x255bf4
  0255be0  lbz 3, 32(3)
  0255be4  cmpwi 3, 254
  0255be8  cmpwi 1, 3, 253
  0255bec  bt 2, 0x255bf4
  0255bf0  bf 6, 0x255ee8
  0255bf4  lwz 3, 16(30)
  0255bf8  cmpwi 3, -1
  0255bfc  bt 2, 0x255c18
  0255c00  slwi 3, 3, 8
  0255c04  addc 3, 4, 3
  0255c08  clrldi 3, 3, 32
  0255c0c  lhz 4, 52(3)
  0255c10  ori 4, 4, 2
  0255c14  sth 4, 52(3)
  0255c18  lis 3, 165
  0255c1c  lwz 4, 8(30)
  0255c20  li 5, 114
  0255c24  li 6, 1
  0255c28  slwi 4, 4, 7
  0255c2c  lwz 3, 7128(3)
  0255c30  addc 3, 3, 4
  0255c34  addic 4, 3, 48
  0255c38  addic 7, 3, 112
  0255c3c  clrldi 3, 4, 32
  0255c40  clrldi 4, 7, 32
  0255c44  bl 0xa0c38
  0255c48  nop
  0255c4c  li 4, 1
  0255c50  li 3, 14
  0255c54  stb 4, 102(29)
  0255c58  bl 0x112dc0
  0255c5c  nop
  0255c60  lwz 30, 32(30)
  0255c64  cmpwi 30, -1
  0255c68  bt 2, 0x255c8c
  0255c6c  lis 3, 164
  0255c70  slwi 4, 30, 8
  0255c74  lwz 3, -28512(3)
  0255c78  addc 3, 3, 4
  0255c7c  clrldi 3, 3, 32
  0255c80  lhz 4, 52(3)
  0255c84  ori 4, 4, 65
  0255c88  sth 4, 52(3)
  0255c8c  li 3, 0
  0255c90  li 4, 5
  0255c94  bl 0x11ccc8
  0255c98  nop
  0255c9c  li 5, 8
  0255ca0  li 3, 2
  0255ca4  li 4, 0
  0255ca8  stb 5, 32(31)
  0255cac  bl 0x167e60
  0255cb0  nop
  0255cb4  b 0x255ee8
  0255cb8  li 3, 13
  0255cbc  stb 3, 32(31)
  0255cc0  b 0x255ee8
  0255cc4  lis 3, 161
  0255cc8  lwz 3, 1800(3)
  0255ccc  cmpwi 3, 2
  0255cd0  bt 2, 0x255ee8
  0255cd4  li 4, 9
  0255cd8  li 3, 14
  0255cdc  stb 4, 32(31)
  0255ce0  bl 0x168dec
  0255ce4  nop
  0255ce8  b 0x255ee8
  0255cec  lis 3, 161
  0255cf0  lwz 3, 1800(3)
  0255cf4  cmpwi 3, 2
  0255cf8  bt 2, 0x255ee8
  0255cfc  li 3, 3
  0255d00  li 4, 0
  0255d04  bl 0x167e60
  0255d08  nop
  0255d0c  li 3, 10
  0255d10  stb 3, 32(31)
  0255d14  b 0x255ee8
  0255d18  lis 3, 161
  0255d1c  lwz 3, 1800(3)
  0255d20  cmpwi 3, 2
  0255d24  bt 2, 0x255ee8
  0255d28  lwz 3, 16(30)
  0255d2c  cmpwi 3, -1
  0255d30  bt 2, 0x255d58
  0255d34  lis 4, 164
  0255d38  slwi 3, 3, 8
  0255d3c  li 5, 0
  0255d40  lwz 4, -28512(4)
  0255d44  addc 3, 4, 3
  0255d48  clrldi 3, 3, 32
  0255d4c  lhz 4, 52(3)
  0255d50  rlwimi 4, 5, 0, 30, 30
  0255d54  sth 4, 52(3)
  0255d58  li 3, 14
  0255d5c  bl 0x112c20
  0255d60  nop
  0255d64  lwz 30, 32(30)
  0255d68  cmpwi 30, -1
  0255d6c  bt 2, 0x255dd4
  0255d70  lis 3, 164
  0255d74  slwi 4, 30, 8
  0255d78  li 5, -66
  0255d7c  lwz 3, -28512(3)
  0255d80  addc 3, 3, 4
  0255d84  clrldi 3, 3, 32
  0255d88  lhz 4, 52(3)
  0255d8c  and 4, 4, 5
  0255d90  sth 4, 52(3)
  0255d94  bl 0x15e2ec
  0255d98  nop
  0255d9c  lis 3, 150
  0255da0  lis 4, 17310
  0255da4  lis 6, 16433
  0255da8  addic 3, 3, 17776
  0255dac  lis 5, 17384
  0255db0  ori 4, 4, 23593
  0255db4  lis 7, 17425
  0255db8  ori 6, 6, 18350
  0255dbc  ori 5, 5, 21627
  0255dc0  ori 7, 7, 11141
  0255dc4  stw 4, 104(3)
  0255dc8  stw 6, 120(3)
  0255dcc  stw 5, 96(3)
  0255dd0  stw 7, 100(3)
  0255dd4  lis 3, 150
  0255dd8  li 4, 0
  0255ddc  li 5, 11
  0255de0  stw 4, -12480(3)
  0255de4  stb 5, 32(31)
  0255de8  b 0x255ee8
  0255dec  lwz 30, 16(30)
  0255df0  cmpwi 30, -1
  0255df4  bt 2, 0x255e50
  0255df8  lis 3, 164
  0255dfc  slwi 4, 30, 8
  0255e00  lwz 3, -28512(3)
  0255e04  addc 30, 3, 4
  0255e08  clrldi 30, 30, 32
  0255e0c  cmpwi 30, 0
  0255e10  bt 2, 0x255e34
  0255e14  lhz 3, 166(30)
  0255e18  cmpwi 3, 69
  0255e1c  bf 2, 0x255e34
  0255e20  lbz 3, 32(30)
  0255e24  cmpwi 3, 254
  0255e28  cmpwi 1, 3, 253
  0255e2c  bt 2, 0x255e34
  0255e30  bf 6, 0x255ee8
  0255e34  li 3, 0
  0255e38  li 4, -1
  0255e3c  bl 0xe8aa4
  0255e40  nop
  0255e44  li 3, 12
  0255e48  stb 3, 32(31)
  0255e4c  b 0x255ee8
  0255e50  li 3, 12
  0255e54  stb 3, 32(31)
  0255e58  b 0x255ee8
  0255e5c  li 3, 13
  0255e60  stb 3, 32(31)
  0255e64  b 0x255ee8
  0255e68  lwz 3, 16(30)
  0255e6c  cmpwi 3, -1
  0255e70  bt 2, 0x255ecc
  0255e74  lis 4, 164
  0255e78  slwi 5, 3, 8
  0255e7c  lwz 3, -28512(4)
  0255e80  addc 4, 3, 5
  0255e84  lis 5, 162
  0255e88  clrldi 4, 4, 32
  0255e8c  addic 5, 5, 704
  0255e90  lbz 4, 176(4)
  0255e94  lbzx 4, 4, 5
  0255e98  cmpwi 4, 255
  0255e9c  bf 2, 0x255ee8
  0255ea0  lwz 30, 32(30)
  0255ea4  cmpwi 30, -1
  0255ea8  bt 2, 0x255ec0
  0255eac  slwi 4, 30, 8
  0255eb0  addc 3, 3, 4
  0255eb4  clrldi 3, 3, 32
  0255eb8  bl 0xefb38
  0255ebc  nop
  0255ec0  li 3, 14
  0255ec4  stb 3, 32(31)
  0255ec8  b 0x255ee8
  0255ecc  ori 3, 31, 0
  0255ed0  bl 0xefb38
  0255ed4  nop
  0255ed8  b 0x255ee8
  0255edc  lhz 3, 52(31)
  0255ee0  ori 3, 3, 2
  0255ee4  sth 3, 52(31)
  0255ee8  ld 0, 160(1)
  0255eec  mtlr 0
  0255ef0  ld 29, 120(1)
  0255ef4  ld 30, 128(1)
  0255ef8  ld 31, 136(1)
  0255efc  addi 1, 1, 144
  0255f00  blr
