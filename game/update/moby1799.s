# game/update/moby1799.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1799_002b9ae4:   # 0x2b9ae4, 0x14 bytes
  02b9ae4  lis 3, 123
  02b9ae8  lis 4, 1
  02b9aec  addic 3, 3, 31532
  02b9af0  stw 4, 72(3)
  02b9af4  blr

UpdateMoby_1799:   # 0x2b9b00, 0x1e8 bytes
  02b9b00  stdu 1, -176(1)
  02b9b04  mflr 0
  02b9b08  std 0, 192(1)
  02b9b0c  lbz 4, 32(3)
  02b9b10  cmpwi 4, 0
  02b9b14  cmpwi 1, 4, -1
  02b9b18  std 31, 168(1)
  02b9b1c  std 30, 160(1)
  02b9b20  cmpwi 6, 4, 1
  02b9b24  bt 1, 0x2b9b30
  02b9b28  bf 5, 0x2b9cd0
  02b9b2c  b 0x2b9b38
  02b9b30  bf 25, 0x2b9b4c
  02b9b34  b 0x2b9cd0
  02b9b38  li 4, 255
  02b9b3c  li 5, 1
  02b9b40  stb 4, 48(3)
  02b9b44  stb 5, 32(3)
  02b9b48  b 0x2b9cd0
  02b9b4c  lis 3, 161
  02b9b50  lwz 3, 1800(3)
  02b9b54  cmpwi 3, 2
  02b9b58  bf 2, 0x2b9cd0
  02b9b5c  lis 3, 150
  02b9b60  addic 3, 3, -12976
  02b9b64  lwz 4, 48(3)
  02b9b68  cmpwi 1, 4, 1
  02b9b6c  cmpwi 4, 0
  02b9b70  cror 2, 2, 6
  02b9b74  bt 2, 0x2b9b88
  02b9b78  cmpwi 4, 2
  02b9b7c  bt 2, 0x2b9b88
  02b9b80  cmpwi 4, 3
  02b9b84  bf 2, 0x2b9cd0
  02b9b88  cmpwi 4, 0
  02b9b8c  li 5, 0
  02b9b90  bt 2, 0x2b9ba4
  02b9b94  cmpwi 4, 2
  02b9b98  bt 2, 0x2b9ba4
  02b9b9c  cmpwi 4, 3
  02b9ba0  bf 2, 0x2b9ba8
  02b9ba4  li 5, 3
  02b9ba8  li 6, 1
  02b9bac  li 7, 4
  02b9bb0  subc 4, 6, 4
  02b9bb4  subc 6, 7, 5
  02b9bb8  cntlzw 4, 4
  02b9bbc  addic 31, 1, 112
  02b9bc0  sldi 4, 4, 58
  02b9bc4  sradi 4, 4, 63
  02b9bc8  and 4, 4, 6
  02b9bcc  addc 5, 5, 4
  02b9bd0  li 4, 8
  02b9bd4  slwi 5, 5, 2
  02b9bd8  addc 3, 3, 5
  02b9bdc  ori 5, 31, 0
  02b9be0  lwz 30, 376(3)
  02b9be4  ori 3, 30, 0
  02b9be8  bl 0xf1114
  02b9bec  nop
  02b9bf0  addic 5, 1, 128
  02b9bf4  ori 3, 30, 0
  02b9bf8  li 4, 9
  02b9bfc  bl 0xf1114
  02b9c00  nop
  02b9c04  lfs 1, 116(1)
  02b9c08  lfs 2, 132(1)
  02b9c0c  lfs 3, 112(1)
  02b9c10  fsubs 4, 1, 2
  02b9c14  lfs 1, 128(1)
  02b9c18  fsubs 3, 3, 1
  02b9c1c  lfs 1, 120(1)
  02b9c20  lfs 2, 136(1)
  02b9c24  fsubs 5, 1, 2
  02b9c28  fmuls 1, 4, 4
  02b9c2c  lis 3, 123
  02b9c30  lis 4, 123
  02b9c34  lfs 7, 31640(3)
  02b9c38  fmadds 1, 3, 3, 1
  02b9c3c  lis 3, 44
  02b9c40  stfs 3, 144(1)
  02b9c44  addi 3, 3, -25864
  02b9c48  stfs 4, 148(1)
  02b9c4c  lis 6, 266
  02b9c50  fmadds 1, 5, 5, 1
  02b9c54  addic 5, 1, 144
  02b9c58  fsqrts 6, 1
  02b9c5c  lfs 1, 124(1)
  02b9c60  stfs 5, 152(1)
  02b9c64  stfs 1, 156(1)
  02b9c68  lfs 9, 0(3)
  02b9c6c  lfs 1, 31644(4)
  02b9c70  lfs 2, 2120(6)
  02b9c74  ori 3, 31, 0
  02b9c78  ori 4, 31, 0
  02b9c7c  fdivs 7, 7, 6
  02b9c80  fsub 8, 9, 6
  02b9c84  fsub 10, 9, 6
  02b9c88  fsub 11, 9, 6
  02b9c8c  fsub 12, 6, 9
  02b9c90  fsub 13, 6, 9
  02b9c94  fsub 6, 6, 9
  02b9c98  fmuls 3, 3, 7
  02b9c9c  fmuls 4, 4, 7
  02b9ca0  fmuls 5, 5, 7
  02b9ca4  fsel 7, 8, 9, 3
  02b9ca8  fsel 8, 10, 9, 4
  02b9cac  fsel 9, 11, 9, 5
  02b9cb0  fsel 3, 12, 7, 3
  02b9cb4  fsel 4, 13, 8, 4
  02b9cb8  fsel 5, 6, 9, 5
  02b9cbc  stfs 3, 144(1)
  02b9cc0  stfs 4, 148(1)
  02b9cc4  stfs 5, 152(1)
  02b9cc8  bl 0x11a1a0
  02b9ccc  nop
  02b9cd0  ld 0, 192(1)
  02b9cd4  mtlr 0
  02b9cd8  ld 30, 160(1)
  02b9cdc  ld 31, 168(1)
  02b9ce0  addi 1, 1, 176
  02b9ce4  blr
