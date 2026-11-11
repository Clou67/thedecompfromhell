# game/update/moby67.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_67:   # 0x40b6b0, 0x688 bytes
  040b6b0  stdu 1, -192(1)
  040b6b4  mflr 0
  040b6b8  std 0, 208(1)
  040b6bc  std 31, 184(1)
  040b6c0  ori 31, 3, 0
  040b6c4  std 30, 176(1)
  040b6c8  lbz 3, 32(31)
  040b6cc  lwz 30, 120(31)
  040b6d0  cmpwi 3, 4
  040b6d4  cmpwi 1, 3, 3
  040b6d8  cmpwi 6, 3, 2
  040b6dc  std 29, 168(1)
  040b6e0  cmpwi 7, 3, 1
  040b6e4  bt 2, 0x40baf0
  040b6e8  bt 6, 0x40baa0
  040b6ec  bt 26, 0x40b82c
  040b6f0  bt 30, 0x40b728
  040b6f4  cmpwi 3, 0
  040b6f8  bf 2, 0x40bd1c
  040b6fc  lfs 1, 16(31)
  040b700  li 3, 1
  040b704  stfs 1, 0(30)
  040b708  lfs 1, 20(31)
  040b70c  stfs 1, 4(30)
  040b710  lfs 1, 24(31)
  040b714  stfs 1, 8(30)
  040b718  lfs 1, 28(31)
  040b71c  stfs 1, 12(30)
  040b720  stb 3, 32(31)
  040b724  b 0x40bd1c
  040b728  li 29, 0
  040b72c  lwz 3, 28(30)
  040b730  cmpwi 3, -1
  040b734  stw 29, 24(30)
  040b738  bt 2, 0x40b788
  040b73c  lis 4, 164
  040b740  slwi 3, 3, 8
  040b744  lwz 4, -28512(4)
  040b748  addc 3, 4, 3
  040b74c  clrldi 3, 3, 32
  040b750  lhz 4, 166(3)
  040b754  cmpwi 4, 1209
  040b758  cmpwi 1, 4, 1430
  040b75c  bf 2, 0x40b774
  040b760  lbz 4, 32(3)
  040b764  cmpwi 4, 4
  040b768  bf 2, 0x40b774
  040b76c  li 29, 1
  040b770  b 0x40b788
  040b774  bf 6, 0x40b788
  040b778  lbz 3, 32(3)
  040b77c  cmpwi 3, 4
  040b780  bf 2, 0x40b788
  040b784  li 29, 1
  040b788  lwz 3, 40(30)
  040b78c  cmpwi 3, 0
  040b790  bt 2, 0x40b7f8
  040b794  lis 3, 165
  040b798  lhz 4, 178(31)
  040b79c  addic 5, 3, 17860
  040b7a0  extsh 3, 4
  040b7a4  lbzx 5, 5, 3
  040b7a8  cmpwi 5, 0
  040b7ac  bf 2, 0x40b7f4
  040b7b0  lis 6, 151
  040b7b4  lis 5, 161
  040b7b8  srawi 3, 3, 5
  040b7bc  addic 5, 5, -13028
  040b7c0  sldi 3, 3, 2
  040b7c4  lwz 6, -25488(6)
  040b7c8  clrlwi 4, 4, 27
  040b7cc  addc 3, 3, 5
  040b7d0  slwi 5, 6, 8
  040b7d4  clrldi 3, 3, 32
  040b7d8  extsw 5, 5
  040b7dc  li 6, 1
  040b7e0  slw 4, 6, 4
  040b7e4  lwzx 3, 3, 5
  040b7e8  and 3, 3, 4
  040b7ec  cmpwi 3, 0
  040b7f0  bt 2, 0x40b7f8
  040b7f4  li 29, 1
  040b7f8  lis 3, 151
  040b7fc  lwz 4, 16(30)
  040b800  addic 3, 3, -25376
  040b804  extsw 4, 4
  040b808  addic 3, 3, 128
  040b80c  bl 0x110b70
  040b810  nop
  040b814  or 3, 3, 29
  040b818  cmpwi 3, 0
  040b81c  bt 2, 0x40bd1c
  040b820  li 3, 2
  040b824  stb 3, 32(31)
  040b828  b 0x40bd1c
  040b82c  lwz 3, 32(30)
  040b830  lis 29, 150
  040b834  sldi 4, 3, 7
  040b838  sldi 5, 3, 4
  040b83c  addic 29, 29, 14176
  040b840  subc 4, 4, 5
  040b844  extsw 4, 4
  040b848  addc 4, 29, 4
  040b84c  lwz 5, 136(4)
  040b850  cmpw 5, 31
  040b854  bf 2, 0x40b864
  040b858  lbz 4, 116(4)
  040b85c  cmpwi 4, 0
  040b860  bf 2, 0x40b87c
  040b864  li 3, 0
  040b868  li 4, 4
  040b86c  ori 5, 31, 0
  040b870  bl 0x15d12c
  040b874  nop
  040b878  stw 3, 32(30)
  040b87c  lis 4, 65
  040b880  lfs 1, 36(30)
  040b884  addi 4, 4, -18808
  040b888  cmpwi 1, 3, -1
  040b88c  lfs 2, 0(4)
  040b890  lis 4, 114
  040b894  fmuls 2, 1, 2
  040b898  lfs 3, 24(30)
  040b89c  lfs 4, -3052(4)
  040b8a0  fmadds 2, 2, 4, 3
  040b8a4  fcmpu 0, 2, 1
  040b8a8  stfs 2, 24(30)
  040b8ac  cror 2, 0, 2
  040b8b0  bt 2, 0x40b99c
  040b8b4  bt 6, 0x40b8f4
  040b8b8  sldi 4, 3, 7
  040b8bc  sldi 5, 3, 4
  040b8c0  subc 4, 4, 5
  040b8c4  extsw 4, 4
  040b8c8  addc 29, 29, 4
  040b8cc  lwz 4, 136(29)
  040b8d0  cmpw 4, 31
  040b8d4  bf 2, 0x40b8f4
  040b8d8  lbz 4, 116(29)
  040b8dc  cmpwi 4, 0
  040b8e0  bt 2, 0x40b8f4
  040b8e4  extsw 3, 3
  040b8e8  bl 0x15cdb0
  040b8ec  nop
  040b8f0  lfs 1, 36(30)
  040b8f4  li 3, -1
  040b8f8  lwz 4, 28(30)
  040b8fc  cmpwi 4, -1
  040b900  stw 3, 32(30)
  040b904  stfs 1, 24(30)
  040b908  bf 2, 0x40b918
  040b90c  lwz 3, 40(30)
  040b910  cmpwi 3, 0
  040b914  bt 2, 0x40b994
  040b918  lhz 5, 178(31)
  040b91c  lis 4, 151
  040b920  extsh 6, 5
  040b924  lis 3, 161
  040b928  srawi 6, 6, 5
  040b92c  addic 3, 3, -13028
  040b930  sldi 6, 6, 2
  040b934  lwz 4, -25488(4)
  040b938  lis 7, 165
  040b93c  addc 3, 6, 3
  040b940  extsh 6, 5
  040b944  slwi 4, 4, 8
  040b948  srawi 6, 6, 5
  040b94c  extsw 4, 4
  040b950  clrldi 3, 3, 32
  040b954  addic 7, 7, 19920
  040b958  sldi 6, 6, 2
  040b95c  clrlwi 8, 5, 27
  040b960  li 9, 1
  040b964  clrlwi 5, 5, 27
  040b968  lwzx 10, 3, 4
  040b96c  slw 8, 9, 8
  040b970  slw 5, 9, 5
  040b974  lwzx 9, 7, 6
  040b978  or 8, 10, 8
  040b97c  li 11, 5
  040b980  or 5, 9, 5
  040b984  stwx 8, 3, 4
  040b988  stwx 5, 7, 6
  040b98c  stb 11, 32(31)
  040b990  b 0x40b99c
  040b994  li 3, 3
  040b998  stb 3, 32(31)
  040b99c  lis 3, 65
  040b9a0  lfs 1, 72(31)
  040b9a4  addi 3, 3, -18808
  040b9a8  lfs 2, 4(3)
  040b9ac  lfs 3, 8(3)
  040b9b0  fadds 2, 1, 2
  040b9b4  fsubs 5, 3, 1
  040b9b8  lfs 4, 12(3)
  040b9bc  li 6, 0
  040b9c0  addic 5, 1, 112
  040b9c4  ori 4, 30, 0
  040b9c8  fsubs 3, 3, 2
  040b9cc  fsub 7, 1, 5
  040b9d0  fsubs 6, 4, 2
  040b9d4  fsubs 4, 4, 1
  040b9d8  fsub 8, 2, 3
  040b9dc  fsel 1, 7, 5, 1
  040b9e0  fsel 2, 8, 3, 2
  040b9e4  fsub 5, 4, 1
  040b9e8  lfs 3, 16(3)
  040b9ec  lfs 7, 20(3)
  040b9f0  fsub 8, 6, 2
  040b9f4  fsel 1, 5, 4, 1
  040b9f8  lfs 4, 24(3)
  040b9fc  fsel 2, 8, 6, 2
  040ba00  fmuls 5, 1, 1
  040ba04  lfs 6, 28(3)
  040ba08  lfs 11, 24(30)
  040ba0c  addic 3, 1, 128
  040ba10  fmuls 8, 2, 2
  040ba14  fmuls 9, 5, 1
  040ba18  fmuls 10, 8, 2
  040ba1c  fmuls 12, 5, 9
  040ba20  fmadds 1, 9, 3, 1
  040ba24  fmuls 9, 8, 10
  040ba28  fmadds 2, 10, 3, 2
  040ba2c  fmuls 3, 5, 12
  040ba30  fmadds 1, 12, 7, 1
  040ba34  fmuls 10, 8, 9
  040ba38  fmadds 2, 9, 7, 2
  040ba3c  fmuls 5, 5, 3
  040ba40  fmadds 1, 3, 4, 1
  040ba44  fmuls 3, 8, 10
  040ba48  fmadds 2, 10, 4, 2
  040ba4c  fmadds 1, 5, 6, 1
  040ba50  fmadds 2, 3, 6, 2
  040ba54  fmuls 2, 2, 11
  040ba58  fneg 2, 2
  040ba5c  stfs 2, 112(1)
  040ba60  lfs 2, 24(30)
  040ba64  stw 6, 120(1)
  040ba68  fmuls 1, 1, 2
  040ba6c  fneg 1, 1
  040ba70  stfs 1, 116(1)
  040ba74  bl 0x5023f0
  040ba78  nop
  040ba7c  lfs 1, 128(1)
  040ba80  stfs 1, 16(31)
  040ba84  lfs 1, 132(1)
  040ba88  stfs 1, 20(31)
  040ba8c  lfs 1, 136(1)
  040ba90  stfs 1, 24(31)
  040ba94  lfs 1, 140(1)
  040ba98  stfs 1, 28(31)
  040ba9c  b 0x40bd1c
  040baa0  lis 3, 151
  040baa4  lwz 4, 20(30)
  040baa8  addic 3, 3, -25376
  040baac  extsw 4, 4
  040bab0  addic 3, 3, 128
  040bab4  bl 0x110b70
  040bab8  nop
  040babc  cmpwi 3, 0
  040bac0  bf 2, 0x40bd1c
  040bac4  lis 3, 149
  040bac8  lwz 4, 20(30)
  040bacc  addic 3, 3, 5376
  040bad0  extsw 4, 4
  040bad4  bl 0x110b70
  040bad8  nop
  040badc  cmpwi 3, 0
  040bae0  bf 2, 0x40bd1c
  040bae4  li 3, 4
  040bae8  stb 3, 32(31)
  040baec  b 0x40bd1c
  040baf0  lwz 3, 32(30)
  040baf4  lis 29, 150
  040baf8  sldi 4, 3, 7
  040bafc  sldi 5, 3, 4
  040bb00  addic 29, 29, 14176
  040bb04  subc 4, 4, 5
  040bb08  extsw 4, 4
  040bb0c  addc 4, 29, 4
  040bb10  lwz 5, 136(4)
  040bb14  cmpw 5, 31
  040bb18  bf 2, 0x40bb28
  040bb1c  lbz 4, 116(4)
  040bb20  cmpwi 4, 0
  040bb24  bf 2, 0x40bb40
  040bb28  li 3, 0
  040bb2c  li 4, 4
  040bb30  ori 5, 31, 0
  040bb34  bl 0x15d12c
  040bb38  nop
  040bb3c  stw 3, 32(30)
  040bb40  lis 4, 65
  040bb44  lfs 1, 36(30)
  040bb48  lis 5, 114
  040bb4c  addi 4, 4, -18808
  040bb50  cmpwi 1, 3, -1
  040bb54  lfs 2, 0(4)
  040bb58  lfs 3, 24(30)
  040bb5c  fmuls 1, 1, 2
  040bb60  lfs 4, -3052(5)
  040bb64  fnmsubs 1, 1, 4, 3
  040bb68  stfs 1, 24(30)
  040bb6c  lfs 2, 32(4)
  040bb70  fcmpu 0, 1, 2
  040bb74  cror 2, 1, 2
  040bb78  bt 2, 0x40bbd4
  040bb7c  bt 6, 0x40bbb8
  040bb80  sldi 4, 3, 7
  040bb84  sldi 5, 3, 4
  040bb88  subc 4, 4, 5
  040bb8c  extsw 4, 4
  040bb90  addc 29, 29, 4
  040bb94  lwz 4, 136(29)
  040bb98  cmpw 4, 31
  040bb9c  bf 2, 0x40bbb8
  040bba0  lbz 4, 116(29)
  040bba4  cmpwi 4, 0
  040bba8  bt 2, 0x40bbb8
  040bbac  extsw 3, 3
  040bbb0  bl 0x15cdb0
  040bbb4  nop
  040bbb8  li 3, 0
  040bbbc  li 4, -1
  040bbc0  li 5, 1
  040bbc4  stw 3, 24(30)
  040bbc8  stw 4, 32(30)
  040bbcc  stb 5, 32(31)
  040bbd0  lfs 1, 24(30)
  040bbd4  lis 3, 65
  040bbd8  lfs 2, 72(31)
  040bbdc  addi 3, 3, -18808
  040bbe0  lfs 3, 4(3)
  040bbe4  lfs 4, 8(3)
  040bbe8  fadds 3, 2, 3
  040bbec  fsubs 6, 4, 2
  040bbf0  lfs 5, 12(3)
  040bbf4  li 6, 0
  040bbf8  addic 5, 1, 112
  040bbfc  ori 4, 30, 0
  040bc00  fsubs 4, 4, 3
  040bc04  fsub 8, 2, 6
  040bc08  fsubs 7, 5, 3
  040bc0c  fsubs 5, 5, 2
  040bc10  fsub 9, 3, 4
  040bc14  fsel 2, 8, 6, 2
  040bc18  fsel 3, 9, 4, 3
  040bc1c  fsub 6, 5, 2
  040bc20  lfs 4, 16(3)
  040bc24  lfs 8, 20(3)
  040bc28  fsub 9, 7, 3
  040bc2c  fsel 2, 6, 5, 2
  040bc30  lfs 5, 24(3)
  040bc34  fsel 3, 9, 7, 3
  040bc38  fmuls 6, 2, 2
  040bc3c  lfs 7, 28(3)
  040bc40  addic 3, 1, 144
  040bc44  fmuls 9, 3, 3
  040bc48  fmuls 10, 6, 2
  040bc4c  fmuls 11, 9, 3
  040bc50  fmuls 12, 6, 10
  040bc54  fmadds 2, 10, 4, 2
  040bc58  fmuls 10, 9, 11
  040bc5c  fmadds 3, 11, 4, 3
  040bc60  fmuls 4, 6, 12
  040bc64  fmadds 2, 12, 8, 2
  040bc68  fmuls 11, 9, 10
  040bc6c  fmadds 3, 10, 8, 3
  040bc70  fmuls 6, 6, 4
  040bc74  fmadds 2, 4, 5, 2
  040bc78  fmuls 4, 9, 11
  040bc7c  fmadds 3, 11, 5, 3
  040bc80  fmadds 2, 6, 7, 2
  040bc84  fmadds 3, 4, 7, 3
  040bc88  fmuls 1, 3, 1
  040bc8c  fneg 1, 1
  040bc90  stfs 1, 112(1)
  040bc94  lfs 1, 24(30)
  040bc98  stw 6, 120(1)
  040bc9c  fmuls 1, 2, 1
  040bca0  fneg 1, 1
  040bca4  stfs 1, 116(1)
  040bca8  bl 0x5023f0
  040bcac  nop
  040bcb0  lfs 1, 144(1)
  040bcb4  lis 3, 151
  040bcb8  stfs 1, 16(31)
  040bcbc  lfs 1, 148(1)
  040bcc0  addic 3, 3, -25376
  040bcc4  stfs 1, 20(31)
  040bcc8  addic 3, 3, 128
  040bccc  lfs 1, 152(1)
  040bcd0  stfs 1, 24(31)
  040bcd4  lfs 1, 156(1)
  040bcd8  stfs 1, 28(31)
  040bcdc  lwz 4, 16(30)
  040bce0  extsw 4, 4
  040bce4  bl 0x110b70
  040bce8  nop
  040bcec  cmpwi 3, 0
  040bcf0  bf 2, 0x40bd14
  040bcf4  lis 3, 149
  040bcf8  lwz 4, 16(30)
  040bcfc  addic 3, 3, 5376
  040bd00  extsw 4, 4
  040bd04  bl 0x110b70
  040bd08  nop
  040bd0c  cmpwi 3, 0
  040bd10  bt 2, 0x40bd1c
  040bd14  li 3, 2
  040bd18  stb 3, 32(31)
  040bd1c  ld 0, 208(1)
  040bd20  mtlr 0
  040bd24  ld 29, 168(1)
  040bd28  ld 30, 176(1)
  040bd2c  ld 31, 184(1)
  040bd30  addi 1, 1, 192
  040bd34  blr
