# game/update/moby432.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1052_00372898:   # 0x372898, 0x14 bytes
  0372898  lis 3, 132
  037289c  lis 4, 1
  03728a0  addic 3, 3, 5632
  03728a4  stw 4, 72(3)
  03728a8  blr

UpdateMoby_432:   # 0x3728b8, 0x3cc bytes
  03728b8  stdu 1, -160(1)
  03728bc  mflr 0
  03728c0  std 0, 176(1)
  03728c4  std 31, 152(1)
  03728c8  std 30, 144(1)
  03728cc  ori 31, 3, 0
  03728d0  lwz 30, 120(31)
  03728d4  lwz 3, 84(31)
  03728d8  std 29, 136(1)
  03728dc  cmpwi 30, 0
  03728e0  bf 2, 0x3728f4
  03728e4  ori 3, 31, 0
  03728e8  bl 0xefb38
  03728ec  nop
  03728f0  b 0x372c68
  03728f4  lbz 4, 32(31)
  03728f8  cmpwi 4, 0
  03728fc  cmpwi 1, 4, 2
  0372900  cmpwi 6, 4, 1
  0372904  cmpwi 7, 4, -1
  0372908  bt 1, 0x372914
  037290c  bf 29, 0x372c68
  0372910  b 0x372920
  0372914  bf 25, 0x3729e4
  0372918  bf 5, 0x372bf8
  037291c  b 0x372c68
  0372920  lis 3, 55
  0372924  lis 4, 114
  0372928  addi 3, 3, 10416
  037292c  li 5, 0
  0372930  lfs 1, 0(3)
  0372934  lfs 2, -3056(4)
  0372938  ori 3, 31, 0
  037293c  fmuls 1, 2, 1
  0372940  li 4, 1
  0372944  fctiwz 1, 1
  0372948  stfd 1, 112(1)
  037294c  lwz 6, 116(1)
  0372950  extsw 6, 6
  0372954  bl 0xfddc0
  0372958  nop
  037295c  li 3, 0
  0372960  li 4, 1
  0372964  lhz 5, 166(31)
  0372968  li 6, -1
  037296c  cmpwi 5, 432
  0372970  stw 3, 88(31)
  0372974  stb 4, 32(31)
  0372978  stw 6, 4(30)
  037297c  bf 2, 0x372c68
  0372980  lis 3, 163
  0372984  li 4, 1052
  0372988  addic 3, 3, 21696
  037298c  lis 5, 163
  0372990  sth 4, 166(31)
  0372994  addic 4, 5, 19456
  0372998  lbz 3, 1052(3)
  037299c  li 5, 255
  03729a0  rlwinm 6, 3, 2, 22, 29
  03729a4  stb 3, 34(31)
  03729a8  ori 3, 31, 0
  03729ac  lwzx 4, 4, 6
  03729b0  stb 5, 113(31)
  03729b4  stw 4, 36(31)
  03729b8  lfs 1, 36(4)
  03729bc  stfs 1, 44(31)
  03729c0  bl 0xef74c
  03729c4  nop
  03729c8  lwz 4, 36(31)
  03729cc  ori 3, 31, 0
  03729d0  lwz 4, 16(4)
  03729d4  stw 4, 148(31)
  03729d8  bl 0xf30a0
  03729dc  nop
  03729e0  b 0x372c68
  03729e4  lwz 29, 0(30)
  03729e8  cmpwi 29, -1
  03729ec  bt 2, 0x372c68
  03729f0  lis 4, 164
  03729f4  slwi 5, 29, 8
  03729f8  lwz 4, -28512(4)
  03729fc  addc 29, 4, 5
  0372a00  clrldi 29, 29, 32
  0372a04  lhz 4, 166(29)
  0372a08  cmpwi 4, 280
  0372a0c  bf 2, 0x372c68
  0372a10  lwz 29, 120(29)
  0372a14  lwz 4, 0(29)
  0372a18  lfs 1, 0(29)
  0372a1c  cmpw 4, 3
  0372a20  stfs 1, 84(31)
  0372a24  bt 2, 0x372b84
  0372a28  lis 3, 16256
  0372a2c  lwz 4, 0(29)
  0372a30  cmpw 4, 3
  0372a34  cmpwi 1, 4, 0
  0372a38  bt 2, 0x372a40
  0372a3c  bf 6, 0x372b4c
  0372a40  ori 3, 31, 0
  0372a44  lwz 4, 4(30)
  0372a48  extsw 4, 4
  0372a4c  bl 0x15cc7c
  0372a50  nop
  0372a54  cmpwi 3, 0
  0372a58  bt 2, 0x372ab0
  0372a5c  lwz 4, 4(30)
  0372a60  cmpwi 4, -1
  0372a64  bt 2, 0x372aa8
  0372a68  sldi 3, 4, 7
  0372a6c  sldi 6, 4, 4
  0372a70  lis 5, 150
  0372a74  subc 3, 3, 6
  0372a78  addic 5, 5, 14176
  0372a7c  extsw 3, 3
  0372a80  addc 3, 5, 3
  0372a84  lwz 5, 136(3)
  0372a88  cmpw 5, 31
  0372a8c  bf 2, 0x372aa8
  0372a90  lbz 3, 116(3)
  0372a94  cmpwi 3, 0
  0372a98  bt 2, 0x372aa8
  0372a9c  extsw 3, 4
  0372aa0  bl 0x15cdb0
  0372aa4  nop
  0372aa8  li 3, -1
  0372aac  stw 3, 4(30)
  0372ab0  li 3, 1
  0372ab4  li 4, 0
  0372ab8  ori 5, 31, 0
  0372abc  bl 0x15d12c
  0372ac0  nop
  0372ac4  lhz 3, 166(31)
  0372ac8  cmpwi 3, 1052
  0372acc  bf 2, 0x372c68
  0372ad0  lis 3, 16256
  0372ad4  lwz 4, 0(29)
  0372ad8  cmpw 4, 3
  0372adc  bf 2, 0x372c68
  0372ae0  lis 3, 163
  0372ae4  li 4, 432
  0372ae8  addic 3, 3, 21696
  0372aec  lis 5, 163
  0372af0  sth 4, 166(31)
  0372af4  addic 4, 5, 19456
  0372af8  lbz 3, 432(3)
  0372afc  li 5, 255
  0372b00  rlwinm 6, 3, 2, 22, 29
  0372b04  stb 3, 34(31)
  0372b08  ori 3, 31, 0
  0372b0c  lwzx 4, 4, 6
  0372b10  stb 5, 113(31)
  0372b14  stw 4, 36(31)
  0372b18  lfs 1, 36(4)
  0372b1c  stfs 1, 44(31)
  0372b20  bl 0xef74c
  0372b24  nop
  0372b28  lwz 4, 36(31)
  0372b2c  ori 3, 31, 0
  0372b30  lwz 4, 16(4)
  0372b34  stw 4, 148(31)
  0372b38  bl 0xf30a0
  0372b3c  nop
  0372b40  li 3, 2
  0372b44  stb 3, 32(31)
  0372b48  b 0x372c68
  0372b4c  ori 3, 31, 0
  0372b50  lwz 4, 4(30)
  0372b54  extsw 4, 4
  0372b58  bl 0x15cc7c
  0372b5c  nop
  0372b60  cmpwi 3, 0
  0372b64  bf 2, 0x372c68
  0372b68  li 3, 0
  0372b6c  li 4, 4
  0372b70  ori 5, 31, 0
  0372b74  bl 0x15d12c
  0372b78  nop
  0372b7c  stw 3, 4(30)
  0372b80  b 0x372c68
  0372b84  ori 3, 31, 0
  0372b88  lwz 4, 4(30)
  0372b8c  extsw 4, 4
  0372b90  bl 0x15cc7c
  0372b94  nop
  0372b98  cmpwi 3, 0
  0372b9c  bt 2, 0x372c68
  0372ba0  lwz 4, 4(30)
  0372ba4  cmpwi 4, -1
  0372ba8  bt 2, 0x372bec
  0372bac  sldi 3, 4, 7
  0372bb0  sldi 6, 4, 4
  0372bb4  lis 5, 150
  0372bb8  subc 3, 3, 6
  0372bbc  addic 5, 5, 14176
  0372bc0  extsw 3, 3
  0372bc4  addc 3, 5, 3
  0372bc8  lwz 5, 136(3)
  0372bcc  cmpw 5, 31
  0372bd0  bf 2, 0x372bec
  0372bd4  lbz 3, 116(3)
  0372bd8  cmpwi 3, 0
  0372bdc  bt 2, 0x372bec
  0372be0  extsw 3, 4
  0372be4  bl 0x15cdb0
  0372be8  nop
  0372bec  li 3, -1
  0372bf0  stw 3, 4(30)
  0372bf4  b 0x372c68
  0372bf8  ori 3, 31, 0
  0372bfc  lwz 4, 4(30)
  0372c00  extsw 4, 4
  0372c04  bl 0x15cc7c
  0372c08  nop
  0372c0c  cmpwi 3, 0
  0372c10  bt 2, 0x372c68
  0372c14  lwz 4, 4(30)
  0372c18  cmpwi 4, -1
  0372c1c  bt 2, 0x372c60
  0372c20  sldi 3, 4, 7
  0372c24  sldi 6, 4, 4
  0372c28  lis 5, 150
  0372c2c  subc 3, 3, 6
  0372c30  addic 5, 5, 14176
  0372c34  extsw 3, 3
  0372c38  addc 3, 5, 3
  0372c3c  lwz 5, 136(3)
  0372c40  cmpw 5, 31
  0372c44  bf 2, 0x372c60
  0372c48  lbz 3, 116(3)
  0372c4c  cmpwi 3, 0
  0372c50  bt 2, 0x372c60
  0372c54  extsw 3, 4
  0372c58  bl 0x15cdb0
  0372c5c  nop
  0372c60  li 3, -1
  0372c64  stw 3, 4(30)
  0372c68  ld 0, 176(1)
  0372c6c  mtlr 0
  0372c70  ld 29, 136(1)
  0372c74  ld 30, 144(1)
  0372c78  ld 31, 152(1)
  0372c7c  addi 1, 1, 160
  0372c80  blr
