# game/update/moby22.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_22:   # 0x2f7690, 0x5d8 bytes
  02f7690  stdu 1, -160(1)
  02f7694  mflr 0
  02f7698  std 0, 176(1)
  02f769c  li 4, 255
  02f76a0  std 31, 152(1)
  02f76a4  lis 5, 128
  02f76a8  ori 31, 3, 0
  02f76ac  stb 4, 48(3)
  02f76b0  std 30, 144(1)
  02f76b4  lwz 4, -4276(5)
  02f76b8  lwz 30, 120(3)
  02f76bc  std 29, 136(1)
  02f76c0  cmpwi 4, 1
  02f76c4  bf 2, 0x2f76e0
  02f76c8  lis 3, 161
  02f76cc  li 4, 0
  02f76d0  addic 3, 3, -276
  02f76d4  lis 5, 128
  02f76d8  sth 4, 256(3)
  02f76dc  stw 4, -4276(5)
  02f76e0  lwz 3, 24(30)
  02f76e4  cmpwi 3, -1
  02f76e8  bt 2, 0x2f77a8
  02f76ec  lwz 5, 28(30)
  02f76f0  cmpwi 5, -1
  02f76f4  bt 2, 0x2f77a8
  02f76f8  lis 4, 164
  02f76fc  slwi 3, 3, 8
  02f7700  lwz 4, -28512(4)
  02f7704  addc 3, 4, 3
  02f7708  clrldi 3, 3, 32
  02f770c  lhz 6, 166(3)
  02f7710  cmpwi 6, 805
  02f7714  bf 2, 0x2f77a8
  02f7718  slwi 5, 5, 8
  02f771c  addc 4, 4, 5
  02f7720  clrldi 4, 4, 32
  02f7724  lhz 5, 166(4)
  02f7728  cmpwi 5, 805
  02f772c  bf 2, 0x2f77a8
  02f7730  lis 5, 151
  02f7734  lis 6, 161
  02f7738  ori 7, 4, 0
  02f773c  addic 4, 6, -13692
  02f7740  lbz 6, 176(31)
  02f7744  lwz 5, -25488(5)
  02f7748  addc 6, 6, 4
  02f774c  slwi 5, 5, 4
  02f7750  lwz 4, 120(3)
  02f7754  clrldi 6, 6, 32
  02f7758  lwz 3, 120(7)
  02f775c  extsw 5, 5
  02f7760  lbzx 5, 6, 5
  02f7764  cmpwi 5, 255
  02f7768  bf 2, 0x2f778c
  02f776c  lwz 6, 8(4)
  02f7770  li 5, 0
  02f7774  ori 6, 6, 8
  02f7778  stw 6, 8(4)
  02f777c  lwz 4, 8(3)
  02f7780  rlwimi 4, 5, 0, 28, 28
  02f7784  stw 4, 8(3)
  02f7788  b 0x2f77a8
  02f778c  li 5, 0
  02f7790  lwz 6, 8(4)
  02f7794  rlwimi 6, 5, 0, 28, 28
  02f7798  stw 6, 8(4)
  02f779c  lwz 4, 8(3)
  02f77a0  ori 4, 4, 8
  02f77a4  stw 4, 8(3)
  02f77a8  lis 3, 165
  02f77ac  lhz 4, 178(31)
  02f77b0  addic 5, 3, 17860
  02f77b4  extsh 3, 4
  02f77b8  lbzx 5, 5, 3
  02f77bc  cmpwi 5, 0
  02f77c0  bf 2, 0x2f7808
  02f77c4  lis 6, 151
  02f77c8  lis 5, 161
  02f77cc  srawi 3, 3, 5
  02f77d0  addic 5, 5, -13028
  02f77d4  sldi 3, 3, 2
  02f77d8  lwz 6, -25488(6)
  02f77dc  addc 3, 3, 5
  02f77e0  slwi 5, 6, 8
  02f77e4  clrldi 3, 3, 32
  02f77e8  extsw 5, 5
  02f77ec  li 7, 1
  02f77f0  clrlwi 4, 4, 27
  02f77f4  slw 4, 7, 4
  02f77f8  lwzx 3, 3, 5
  02f77fc  and 3, 3, 4
  02f7800  cmpwi 3, 0
  02f7804  bt 2, 0x2f79c0
  02f7808  lis 3, 151
  02f780c  addic 3, 3, -16064
  02f7810  lbz 3, 6(3)
  02f7814  cmpwi 3, 0
  02f7818  bt 2, 0x2f7880
  02f781c  lis 3, 164
  02f7820  lwz 4, 0(30)
  02f7824  slwi 4, 4, 8
  02f7828  lwz 5, -28512(3)
  02f782c  addc 4, 5, 4
  02f7830  clrldi 4, 4, 32
  02f7834  lhz 5, 52(4)
  02f7838  ori 5, 5, 1
  02f783c  sth 5, 52(4)
  02f7840  lwz 4, 0(30)
  02f7844  lwz 5, -28512(3)
  02f7848  slwi 4, 4, 8
  02f784c  addc 4, 5, 4
  02f7850  li 5, 0
  02f7854  clrldi 4, 4, 32
  02f7858  lhz 6, 52(4)
  02f785c  ori 6, 6, 2
  02f7860  sth 6, 52(4)
  02f7864  lwz 4, 0(30)
  02f7868  lwz 3, -28512(3)
  02f786c  slwi 4, 4, 8
  02f7870  addc 3, 3, 4
  02f7874  clrldi 3, 3, 32
  02f7878  stw 5, 148(3)
  02f787c  b 0x2f79c0
  02f7880  lis 3, 161
  02f7884  lwz 3, 1800(3)
  02f7888  cmpwi 3, 0
  02f788c  bf 2, 0x2f79ac
  02f7890  lis 3, 47
  02f7894  lis 4, 114
  02f7898  addi 3, 3, 30344
  02f789c  lfs 2, 0(3)
  02f78a0  lfs 1, -3056(4)
  02f78a4  lis 3, 161
  02f78a8  fmuls 2, 1, 2
  02f78ac  addic 3, 3, -276
  02f78b0  lhz 4, 256(3)
  02f78b4  fctiwz 2, 2
  02f78b8  stfd 2, 112(1)
  02f78bc  lwz 5, 116(1)
  02f78c0  cmpw 4, 5
  02f78c4  bf 0, 0x2f79ac
  02f78c8  lis 5, 0
  02f78cc  ori 5, 5, 65535
  02f78d0  cmpw 4, 5
  02f78d4  bf 0, 0x2f78e0
  02f78d8  addic 4, 4, 1
  02f78dc  sth 4, 256(3)
  02f78e0  lis 4, 161
  02f78e4  lwz 4, -2344(4)
  02f78e8  extsw 4, 4
  02f78ec  std 4, 112(1)
  02f78f0  lis 4, 47
  02f78f4  addi 4, 4, 30344
  02f78f8  lfs 2, 4(4)
  02f78fc  lfd 3, 112(1)
  02f7900  lis 4, 6990
  02f7904  fcfid 3, 3
  02f7908  ori 5, 4, 33205
  02f790c  lhz 6, 258(3)
  02f7910  frsp 3, 3
  02f7914  fadds 2, 3, 2
  02f7918  fmuls 1, 1, 2
  02f791c  fctiwz 1, 1
  02f7920  stfd 1, 112(1)
  02f7924  lwz 4, 116(1)
  02f7928  mulhw 5, 5, 4
  02f792c  srawi 5, 5, 6
  02f7930  srwi 7, 5, 31
  02f7934  addc 5, 5, 7
  02f7938  cmpw 5, 6
  02f793c  bf 1, 0x2f795c
  02f7940  lis 5, 6990
  02f7944  ori 5, 5, 33205
  02f7948  mulhw 4, 5, 4
  02f794c  srawi 4, 4, 6
  02f7950  srwi 5, 4, 31
  02f7954  addc 4, 4, 5
  02f7958  sth 4, 258(3)
  02f795c  ori 5, 3, 0
  02f7960  lis 4, 151
  02f7964  li 6, 1
  02f7968  lis 7, -32768
  02f796c  li 3, 1
  02f7970  lwz 8, 260(5)
  02f7974  lwz 4, -25488(4)
  02f7978  slw 6, 6, 4
  02f797c  li 4, 21489
  02f7980  or 6, 8, 6
  02f7984  or 6, 6, 7
  02f7988  stw 6, 260(5)
  02f798c  bl 0x11aeec
  02f7990  nop
  02f7994  lis 3, 151
  02f7998  addic 3, 3, -25376
  02f799c  lbz 3, 8356(3)
  02f79a0  cmpwi 3, 1
  02f79a4  bt 2, 0x2f7c4c
  02f79a8  b 0x2f79c0
  02f79ac  lis 3, 151
  02f79b0  addic 3, 3, -25376
  02f79b4  lbz 3, 8356(3)
  02f79b8  cmpwi 3, 1
  02f79bc  bt 2, 0x2f7c4c
  02f79c0  lhz 5, 178(31)
  02f79c4  lis 4, 151
  02f79c8  extsh 6, 5
  02f79cc  lis 3, 161
  02f79d0  srawi 6, 6, 5
  02f79d4  addic 3, 3, -13028
  02f79d8  lwz 4, -25488(4)
  02f79dc  sldi 6, 6, 2
  02f79e0  slwi 4, 4, 8
  02f79e4  addc 3, 6, 3
  02f79e8  extsw 4, 4
  02f79ec  clrldi 3, 3, 32
  02f79f0  extsh 6, 5
  02f79f4  lis 7, 165
  02f79f8  clrlwi 8, 5, 27
  02f79fc  srawi 6, 6, 5
  02f7a00  li 9, 1
  02f7a04  addic 7, 7, 19920
  02f7a08  lwzx 10, 3, 4
  02f7a0c  sldi 6, 6, 2
  02f7a10  slw 8, 9, 8
  02f7a14  clrlwi 5, 5, 27
  02f7a18  or 8, 10, 8
  02f7a1c  slw 5, 9, 5
  02f7a20  lwzx 9, 7, 6
  02f7a24  stwx 8, 3, 4
  02f7a28  or 3, 9, 5
  02f7a2c  stwx 3, 7, 6
  02f7a30  lwz 3, 8(30)
  02f7a34  cmpwi 3, -1
  02f7a38  bt 2, 0x2f7c4c
  02f7a3c  lwz 3, 0(30)
  02f7a40  cmpwi 3, -1
  02f7a44  bt 2, 0x2f7c4c
  02f7a48  lis 4, 151
  02f7a4c  addic 4, 4, -16064
  02f7a50  lbz 4, 6(4)
  02f7a54  cmpwi 4, 0
  02f7a58  bf 2, 0x2f7b60
  02f7a5c  lis 4, 164
  02f7a60  slwi 3, 3, 8
  02f7a64  lis 5, 161
  02f7a68  addic 5, 5, -13692
  02f7a6c  lwz 4, -28512(4)
  02f7a70  addc 3, 4, 3
  02f7a74  lis 4, 151
  02f7a78  clrldi 3, 3, 32
  02f7a7c  lwz 6, 36(3)
  02f7a80  lwz 6, 16(6)
  02f7a84  stw 6, 148(3)
  02f7a88  lbz 3, 176(31)
  02f7a8c  lwz 4, -25488(4)
  02f7a90  addc 3, 3, 5
  02f7a94  slwi 4, 4, 4
  02f7a98  clrldi 3, 3, 32
  02f7a9c  extsw 4, 4
  02f7aa0  lbzx 3, 3, 4
  02f7aa4  cmpwi 3, 255
  02f7aa8  bt 2, 0x2f7ab8
  02f7aac  lwz 3, 20(30)
  02f7ab0  cmpwi 3, -1
  02f7ab4  bf 2, 0x2f7af0
  02f7ab8  lis 3, 165
  02f7abc  lwz 4, 20(30)
  02f7ac0  li 5, 0
  02f7ac4  li 6, 1
  02f7ac8  slwi 4, 4, 7
  02f7acc  lwz 3, 7128(3)
  02f7ad0  addc 3, 3, 4
  02f7ad4  addic 4, 3, 48
  02f7ad8  addic 7, 3, 112
  02f7adc  clrldi 3, 4, 32
  02f7ae0  clrldi 4, 7, 32
  02f7ae4  bl 0xa0c38
  02f7ae8  nop
  02f7aec  b 0x2f7b24
  02f7af0  lis 3, 165
  02f7af4  lwz 4, 8(30)
  02f7af8  li 5, 0
  02f7afc  li 6, 1
  02f7b00  slwi 4, 4, 7
  02f7b04  lwz 3, 7128(3)
  02f7b08  addc 3, 3, 4
  02f7b0c  addic 4, 3, 48
  02f7b10  addic 7, 3, 112
  02f7b14  clrldi 3, 4, 32
  02f7b18  clrldi 4, 7, 32
  02f7b1c  bl 0xa0c38
  02f7b20  nop
  02f7b24  lis 5, 164
  02f7b28  lwz 6, 0(30)
  02f7b2c  li 3, 1
  02f7b30  slwi 6, 6, 8
  02f7b34  li 4, 67
  02f7b38  lwz 5, -28512(5)
  02f7b3c  addc 5, 5, 6
  02f7b40  clrldi 5, 5, 32
  02f7b44  bl 0x86b60
  02f7b48  nop
  02f7b4c  li 3, 2
  02f7b50  li 4, 4
  02f7b54  bl 0x11ccc8
  02f7b58  nop
  02f7b5c  b 0x2f7c4c
  02f7b60  lis 29, 151
  02f7b64  addic 29, 29, -25376
  02f7b68  lbz 3, 8356(29)
  02f7b6c  cmpwi 3, 1
  02f7b70  bf 2, 0x2f7c38
  02f7b74  bl 0x836ac
  02f7b78  nop
  02f7b7c  lis 3, 165
  02f7b80  lwz 4, 4(30)
  02f7b84  li 5, 0
  02f7b88  li 6, 1
  02f7b8c  slwi 4, 4, 7
  02f7b90  lwz 3, 7128(3)
  02f7b94  addc 3, 3, 4
  02f7b98  addic 4, 3, 48
  02f7b9c  addic 7, 3, 112
  02f7ba0  clrldi 3, 4, 32
  02f7ba4  clrldi 4, 7, 32
  02f7ba8  bl 0xa0c38
  02f7bac  nop
  02f7bb0  li 4, 5
  02f7bb4  li 3, 0
  02f7bb8  bl 0x11ccc8
  02f7bbc  nop
  02f7bc0  lis 4, 164
  02f7bc4  lwz 3, 0(30)
  02f7bc8  slwi 3, 3, 8
  02f7bcc  li 6, 0
  02f7bd0  lwz 5, -28512(4)
  02f7bd4  li 8, 1
  02f7bd8  addc 3, 5, 3
  02f7bdc  clrldi 3, 3, 32
  02f7be0  lhz 5, 52(3)
  02f7be4  ori 5, 5, 1
  02f7be8  sth 5, 52(3)
  02f7bec  lwz 3, 0(30)
  02f7bf0  lwz 5, -28512(4)
  02f7bf4  slwi 3, 3, 8
  02f7bf8  addc 3, 5, 3
  02f7bfc  clrldi 5, 3, 32
  02f7c00  ori 3, 31, 0
  02f7c04  lhz 7, 52(5)
  02f7c08  ori 7, 7, 2
  02f7c0c  sth 7, 52(5)
  02f7c10  lwz 5, 0(30)
  02f7c14  lwz 4, -28512(4)
  02f7c18  slwi 5, 5, 8
  02f7c1c  addc 4, 4, 5
  02f7c20  clrldi 4, 4, 32
  02f7c24  stw 6, 148(4)
  02f7c28  stb 8, 8907(29)
  02f7c2c  bl 0xefb38
  02f7c30  nop
  02f7c34  b 0x2f7c4c
  02f7c38  li 4, 1
  02f7c3c  ori 3, 31, 0
  02f7c40  stb 4, 8907(29)
  02f7c44  bl 0xefb38
  02f7c48  nop
  02f7c4c  ld 0, 176(1)
  02f7c50  mtlr 0
  02f7c54  ld 29, 136(1)
  02f7c58  ld 30, 144(1)
  02f7c5c  ld 31, 152(1)
  02f7c60  addi 1, 1, 160
  02f7c64  blr
