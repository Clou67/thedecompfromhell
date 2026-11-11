# game/update/moby983.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M983_004c84b4:   # 0x4c84b4, 0x14 bytes
  04c84b4  lis 3, 143
  04c84b8  lis 4, 1
  04c84bc  addic 3, 3, 20132
  04c84c0  stw 4, 72(3)
  04c84c4  blr

M983_004c8510:   # 0x4c8510, 0x86c bytes
  04c8510  stdu 1, -416(1)
  04c8514  mflr 0
  04c8518  std 0, 432(1)
  04c851c  stfd 17, 296(1)
  04c8520  stfd 18, 304(1)
  04c8524  stfd 19, 312(1)
  04c8528  stfd 20, 320(1)
  04c852c  stfd 21, 328(1)
  04c8530  stfd 22, 336(1)
  04c8534  stfd 23, 344(1)
  04c8538  stfd 24, 352(1)
  04c853c  stfd 25, 360(1)
  04c8540  stfd 26, 368(1)
  04c8544  stfd 27, 376(1)
  04c8548  stfd 28, 384(1)
  04c854c  stfd 29, 392(1)
  04c8550  stfd 30, 400(1)
  04c8554  stfd 31, 408(1)
  04c8558  std 29, 272(1)
  04c855c  lis 4, 77
  04c8560  lis 29, 114
  04c8564  addi 4, 4, -31544
  04c8568  std 31, 288(1)
  04c856c  ori 31, 3, 0
  04c8570  lis 6, -32640
  04c8574  lis 7, 128
  04c8578  ori 6, 6, 24672
  04c857c  lfs 1, 0(4)
  04c8580  ori 7, 7, 4112
  04c8584  lfs 2, -3056(29)
  04c8588  lfs 3, 16(31)
  04c858c  fmuls 1, 2, 1
  04c8590  lfs 4, 24(31)
  04c8594  stfs 3, 48(1)
  04c8598  stfs 4, 56(1)
  04c859c  lfs 3, 20(31)
  04c85a0  stfs 3, 52(1)
  04c85a4  lfs 2, 28(31)
  04c85a8  stfs 2, 60(1)
  04c85ac  ld 3, 48(1)
  04c85b0  fctiwz 1, 1
  04c85b4  ld 4, 56(1)
  04c85b8  stfd 1, 192(1)
  04c85bc  lwz 5, 196(1)
  04c85c0  std 30, 280(1)
  04c85c4  std 28, 264(1)
  04c85c8  std 27, 256(1)
  04c85cc  std 26, 248(1)
  04c85d0  std 25, 240(1)
  04c85d4  std 24, 232(1)
  04c85d8  std 23, 224(1)
  04c85dc  std 22, 216(1)
  04c85e0  extsw 5, 5
  04c85e4  bl 0x2d1440
  04c85e8  nop
  04c85ec  li 3, 16
  04c85f0  li 4, 0
  04c85f4  ori 5, 31, 0
  04c85f8  li 6, 1422
  04c85fc  bl 0x15d204
  04c8600  nop
  04c8604  lis 3, 143
  04c8608  li 27, 0
  04c860c  ori 30, 27, 0
  04c8610  lwz 3, 20676(3)
  04c8614  cmpwi 3, 0
  04c8618  bf 1, 0x4c8844
  04c861c  lis 3, 77
  04c8620  addic 28, 31, 16
  04c8624  addi 3, 3, -31544
  04c8628  lfs 27, 4(3)
  04c862c  lfs 28, 8(3)
  04c8630  lfs 29, 12(3)
  04c8634  lfs 30, 16(3)
  04c8638  lfs 31, 20(3)
  04c863c  fmr 1, 27
  04c8640  fmr 2, 28
  04c8644  bl 0xfcbe8
  04c8648  nop
  04c864c  fmr 26, 1
  04c8650  bl 0xfcc68
  04c8654  nop
  04c8658  lis 3, 143
  04c865c  lis 4, 143
  04c8660  fmr 25, 1
  04c8664  lfs 1, 20680(3)
  04c8668  lfs 2, 20684(4)
  04c866c  bl 0xfcbe8
  04c8670  nop
  04c8674  lis 26, 114
  04c8678  fmr 2, 25
  04c867c  addic 25, 1, 128
  04c8680  fmr 3, 26
  04c8684  ori 3, 25, 0
  04c8688  lfs 4, -3052(26)
  04c868c  fmuls 1, 1, 4
  04c8690  bl 0xfe610
  04c8694  nop
  04c8698  lis 3, 143
  04c869c  lfs 1, 128(1)
  04c86a0  lfs 2, 132(1)
  04c86a4  lfs 3, 136(1)
  04c86a8  lfs 4, 20716(3)
  04c86ac  fmuls 5, 1, 4
  04c86b0  fmuls 6, 2, 4
  04c86b4  fmuls 26, 3, 4
  04c86b8  lfs 2, 140(1)
  04c86bc  fmr 1, 29
  04c86c0  stfs 2, 156(1)
  04c86c4  fmr 2, 30
  04c86c8  stfs 5, 144(1)
  04c86cc  stfs 6, 148(1)
  04c86d0  stfs 26, 152(1)
  04c86d4  bl 0xfcbe8
  04c86d8  nop
  04c86dc  lis 3, 143
  04c86e0  lfs 3, -3052(26)
  04c86e4  lis 4, 143
  04c86e8  lfs 2, 20712(3)
  04c86ec  fmuls 4, 2, 1
  04c86f0  lfs 2, 20708(4)
  04c86f4  fmr 1, 29
  04c86f8  stfs 2, 140(1)
  04c86fc  stfs 2, 156(1)
  04c8700  fmr 2, 30
  04c8704  fmadds 3, 4, 3, 26
  04c8708  stfs 3, 152(1)
  04c870c  bl 0xfcbe8
  04c8710  nop
  04c8714  lis 3, 143
  04c8718  fmr 26, 1
  04c871c  lis 4, 143
  04c8720  lwz 3, 20696(3)
  04c8724  extsw 3, 3
  04c8728  std 3, 192(1)
  04c872c  lis 3, 143
  04c8730  lfs 2, -3056(29)
  04c8734  lwz 3, 20688(3)
  04c8738  lwz 4, 20692(4)
  04c873c  lfd 1, 192(1)
  04c8740  fcfid 1, 1
  04c8744  extsw 24, 4
  04c8748  extsw 26, 3
  04c874c  frsp 1, 1
  04c8750  fadds 1, 1, 31
  04c8754  fmuls 1, 2, 1
  04c8758  fctidz 1, 1
  04c875c  fcfid 1, 1
  04c8760  frsp 1, 1
  04c8764  fmuls 1, 1, 26
  04c8768  bl 0x502758
  04c876c  nop
  04c8770  lis 4, 143
  04c8774  ori 23, 3, 0
  04c8778  lwz 4, 20700(4)
  04c877c  extsw 4, 4
  04c8780  std 4, 192(1)
  04c8784  lfs 1, -3056(29)
  04c8788  lfd 2, 192(1)
  04c878c  fcfid 2, 2
  04c8790  frsp 2, 2
  04c8794  fadds 2, 2, 31
  04c8798  fmuls 1, 1, 2
  04c879c  fctidz 1, 1
  04c87a0  fcfid 1, 1
  04c87a4  frsp 1, 1
  04c87a8  fmuls 1, 1, 26
  04c87ac  bl 0x502758
  04c87b0  nop
  04c87b4  lis 4, 143
  04c87b8  ori 22, 3, 0
  04c87bc  lwz 4, 20704(4)
  04c87c0  extsw 4, 4
  04c87c4  std 4, 192(1)
  04c87c8  lfs 1, -3056(29)
  04c87cc  lfd 2, 192(1)
  04c87d0  fcfid 2, 2
  04c87d4  frsp 2, 2
  04c87d8  fadds 2, 2, 31
  04c87dc  fmuls 1, 1, 2
  04c87e0  fctidz 1, 1
  04c87e4  fcfid 1, 1
  04c87e8  frsp 1, 1
  04c87ec  fmuls 1, 1, 26
  04c87f0  bl 0x502758
  04c87f4  nop
  04c87f8  lis 4, 143
  04c87fc  ori 10, 3, 0
  04c8800  ori 3, 28, 0
  04c8804  addic 5, 1, 144
  04c8808  ori 9, 22, 0
  04c880c  lwz 4, 20672(4)
  04c8810  ori 6, 26, 0
  04c8814  ori 7, 24, 0
  04c8818  extsw 8, 4
  04c881c  ori 4, 25, 0
  04c8820  std 8, 112(1)
  04c8824  ori 8, 23, 0
  04c8828  bl 0x1206e8
  04c882c  nop
  04c8830  lis 3, 143
  04c8834  addic 27, 27, 1
  04c8838  lwz 3, 20676(3)
  04c883c  cmpw 27, 3
  04c8840  bt 0, 0x4c863c
  04c8844  lis 3, 143
  04c8848  ori 26, 30, 0
  04c884c  lwz 3, 20720(3)
  04c8850  cmpwi 3, 0
  04c8854  bf 1, 0x4c8af8
  04c8858  lis 3, 77
  04c885c  lis 27, 143
  04c8860  addi 3, 3, -31544
  04c8864  lis 28, 143
  04c8868  addic 27, 27, 20732
  04c886c  addic 28, 28, 20756
  04c8870  lfs 20, 24(3)
  04c8874  lfs 21, 28(3)
  04c8878  lfs 22, 32(3)
  04c887c  lfs 23, 36(3)
  04c8880  lfs 24, 40(3)
  04c8884  lfs 25, 44(3)
  04c8888  lfs 26, 48(3)
  04c888c  lfs 27, 52(3)
  04c8890  lfs 28, 56(3)
  04c8894  lfs 29, 60(3)
  04c8898  lfs 30, 64(3)
  04c889c  lfs 31, 20(3)
  04c88a0  lis 3, 143
  04c88a4  lis 4, 143
  04c88a8  lfs 1, 20724(3)
  04c88ac  lfs 2, 20728(4)
  04c88b0  bl 0xfcbe8
  04c88b4  nop
  04c88b8  lis 3, 114
  04c88bc  fmr 2, 21
  04c88c0  lfs 3, -3052(3)
  04c88c4  fmuls 19, 1, 3
  04c88c8  fmr 1, 20
  04c88cc  bl 0xfcbe8
  04c88d0  nop
  04c88d4  fmr 18, 1
  04c88d8  bl 0xfcc68
  04c88dc  nop
  04c88e0  fmr 2, 1
  04c88e4  fmr 1, 19
  04c88e8  addic 25, 1, 160
  04c88ec  fmr 3, 18
  04c88f0  ori 3, 25, 0
  04c88f4  bl 0xfe610
  04c88f8  nop
  04c88fc  bl 0xfcc68
  04c8900  nop
  04c8904  fmr 18, 1
  04c8908  lis 24, 143
  04c890c  fadds 1, 18, 22
  04c8910  fsubs 2, 23, 1
  04c8914  fsubs 3, 24, 1
  04c8918  fsub 4, 1, 2
  04c891c  fsel 1, 4, 2, 1
  04c8920  fsub 2, 3, 1
  04c8924  fsel 3, 2, 3, 1
  04c8928  lfs 2, 20800(24)
  04c892c  fmr 1, 29
  04c8930  fmuls 4, 3, 3
  04c8934  fmuls 5, 4, 3
  04c8938  fmuls 6, 4, 5
  04c893c  fmadds 3, 5, 25, 3
  04c8940  fmuls 5, 4, 6
  04c8944  fmadds 3, 6, 26, 3
  04c8948  fmuls 4, 4, 5
  04c894c  fmadds 3, 5, 27, 3
  04c8950  fmadds 17, 4, 28, 3
  04c8954  bl 0xfcbe8
  04c8958  nop
  04c895c  fsubs 2, 23, 18
  04c8960  fsubs 3, 24, 18
  04c8964  fmuls 1, 17, 1
  04c8968  fsub 4, 18, 2
  04c896c  fsel 2, 4, 2, 18
  04c8970  fsub 4, 3, 2
  04c8974  fsel 3, 4, 3, 2
  04c8978  lfs 2, 20800(24)
  04c897c  stfs 1, 176(1)
  04c8980  fmr 1, 29
  04c8984  fmuls 4, 3, 3
  04c8988  fmuls 5, 4, 3
  04c898c  fmuls 6, 4, 5
  04c8990  fmadds 3, 5, 25, 3
  04c8994  fmuls 5, 4, 6
  04c8998  fmadds 3, 6, 26, 3
  04c899c  fmuls 4, 4, 5
  04c89a0  fmadds 3, 5, 27, 3
  04c89a4  fmadds 18, 4, 28, 3
  04c89a8  bl 0xfcbe8
  04c89ac  nop
  04c89b0  lfs 2, 176(1)
  04c89b4  lfs 3, 16(31)
  04c89b8  li 3, 6
  04c89bc  lfs 4, 20(31)
  04c89c0  fadds 2, 2, 3
  04c89c4  fmadds 1, 18, 1, 4
  04c89c8  lfs 3, 24(31)
  04c89cc  stfs 3, 184(1)
  04c89d0  stfs 2, 176(1)
  04c89d4  stfs 1, 180(1)
  04c89d8  bl 0xfc620
  04c89dc  nop
  04c89e0  sldi 3, 3, 2
  04c89e4  extsw 4, 3
  04c89e8  li 3, 6
  04c89ec  lwzx 4, 27, 4
  04c89f0  extsw 24, 4
  04c89f4  bl 0xfc620
  04c89f8  nop
  04c89fc  sldi 3, 3, 2
  04c8a00  lis 4, 143
  04c8a04  extsw 3, 3
  04c8a08  lis 5, 143
  04c8a0c  lis 6, 143
  04c8a10  lwz 4, 20788(4)
  04c8a14  lwzx 3, 28, 3
  04c8a18  lfs 1, 20780(5)
  04c8a1c  extsw 23, 3
  04c8a20  lwz 3, 20784(6)
  04c8a24  extsw 4, 4
  04c8a28  fmuls 18, 1, 30
  04c8a2c  extsw 3, 3
  04c8a30  bl 0xfe484
  04c8a34  nop
  04c8a38  extsw 3, 3
  04c8a3c  lis 4, 143
  04c8a40  std 3, 192(1)
  04c8a44  lis 3, 143
  04c8a48  lfs 1, -3056(29)
  04c8a4c  lwz 3, 20792(3)
  04c8a50  lwz 4, 20796(4)
  04c8a54  lfd 2, 192(1)
  04c8a58  extsw 3, 3
  04c8a5c  fcfid 2, 2
  04c8a60  extsw 4, 4
  04c8a64  frsp 2, 2
  04c8a68  fadds 2, 2, 31
  04c8a6c  fmuls 1, 1, 2
  04c8a70  fctiwz 1, 1
  04c8a74  stfd 1, 192(1)
  04c8a78  lwz 5, 196(1)
  04c8a7c  extsw 22, 5
  04c8a80  bl 0xfe484
  04c8a84  nop
  04c8a88  extsw 3, 3
  04c8a8c  ori 8, 22, 0
  04c8a90  fmr 1, 18
  04c8a94  std 3, 192(1)
  04c8a98  lfs 3, -3056(29)
  04c8a9c  std 30, 112(1)
  04c8aa0  std 30, 120(1)
  04c8aa4  lfd 4, 192(1)
  04c8aa8  addic 3, 1, 176
  04c8aac  fcfid 4, 4
  04c8ab0  ori 4, 25, 0
  04c8ab4  fmr 2, 19
  04c8ab8  ori 5, 24, 0
  04c8abc  ori 6, 23, 0
  04c8ac0  frsp 4, 4
  04c8ac4  fadds 4, 4, 31
  04c8ac8  fmuls 3, 3, 4
  04c8acc  fctiwz 3, 3
  04c8ad0  stfd 3, 192(1)
  04c8ad4  lwz 9, 196(1)
  04c8ad8  extsw 9, 9
  04c8adc  bl 0x123390
  04c8ae0  nop
  04c8ae4  lis 3, 143
  04c8ae8  addic 26, 26, 1
  04c8aec  lwz 3, 20720(3)
  04c8af0  cmpw 26, 3
  04c8af4  bt 0, 0x4c88a0
  04c8af8  lis 3, 143
  04c8afc  lwz 4, 20804(3)
  04c8b00  lfs 1, 20804(3)
  04c8b04  cmpwi 4, 0
  04c8b08  bf 1, 0x4c8b84
  04c8b0c  lis 3, 143
  04c8b10  lis 4, 77
  04c8b14  lis 5, 161
  04c8b18  lwz 3, 20808(3)
  04c8b1c  extsw 3, 3
  04c8b20  addic 5, 5, 23856
  04c8b24  std 3, 192(1)
  04c8b28  addi 3, 4, -31544
  04c8b2c  lfs 2, -3056(29)
  04c8b30  addic 4, 31, 16
  04c8b34  lfs 3, 20(3)
  04c8b38  lfd 4, 192(1)
  04c8b3c  fcfid 4, 4
  04c8b40  lis 3, 143
  04c8b44  lwz 10, 20812(3)
  04c8b48  ori 3, 31, 0
  04c8b4c  srwi 6, 10, 24
  04c8b50  clrlwi 8, 10, 24
  04c8b54  frsp 4, 4
  04c8b58  rlwinm 9, 10, 24, 24, 31
  04c8b5c  std 6, 112(1)
  04c8b60  rlwinm 10, 10, 16, 24, 31
  04c8b64  fadds 3, 4, 3
  04c8b68  fmuls 2, 2, 3
  04c8b6c  fctiwz 2, 2
  04c8b70  stfd 2, 192(1)
  04c8b74  lwz 7, 196(1)
  04c8b78  extsw 7, 7
  04c8b7c  bl 0x1d4d88
  04c8b80  nop
  04c8b84  lis 3, 143
  04c8b88  lwz 4, 20816(3)
  04c8b8c  lfs 1, 20816(3)
  04c8b90  cmpwi 4, 0
  04c8b94  bf 1, 0x4c8c10
  04c8b98  lis 3, 143
  04c8b9c  lis 5, 161
  04c8ba0  addic 4, 31, 16
  04c8ba4  lwz 3, 20820(3)
  04c8ba8  extsw 3, 3
  04c8bac  addic 5, 5, 23856
  04c8bb0  std 3, 192(1)
  04c8bb4  lis 3, 77
  04c8bb8  lfs 2, -3056(29)
  04c8bbc  addi 3, 3, -31544
  04c8bc0  lfs 3, 20(3)
  04c8bc4  lfd 4, 192(1)
  04c8bc8  lis 3, 143
  04c8bcc  fcfid 4, 4
  04c8bd0  lwz 10, 20824(3)
  04c8bd4  ori 3, 31, 0
  04c8bd8  srwi 6, 10, 24
  04c8bdc  clrlwi 8, 10, 24
  04c8be0  rlwinm 9, 10, 24, 24, 31
  04c8be4  rlwinm 10, 10, 16, 24, 31
  04c8be8  frsp 4, 4
  04c8bec  std 6, 112(1)
  04c8bf0  fadds 3, 4, 3
  04c8bf4  fmuls 2, 2, 3
  04c8bf8  fctiwz 2, 2
  04c8bfc  stfd 2, 192(1)
  04c8c00  lwz 7, 196(1)
  04c8c04  extsw 7, 7
  04c8c08  bl 0x1d4d88
  04c8c0c  nop
  04c8c10  lis 3, 143
  04c8c14  lwz 4, 20828(3)
  04c8c18  lfs 1, 20828(3)
  04c8c1c  cmpwi 4, 0
  04c8c20  bf 1, 0x4c8c9c
  04c8c24  lis 3, 143
  04c8c28  lis 4, 77
  04c8c2c  lis 5, 161
  04c8c30  lwz 3, 20832(3)
  04c8c34  extsw 3, 3
  04c8c38  addic 5, 5, 23856
  04c8c3c  std 3, 192(1)
  04c8c40  addi 3, 4, -31544
  04c8c44  lfs 2, -3056(29)
  04c8c48  addic 4, 31, 16
  04c8c4c  lfs 3, 20(3)
  04c8c50  lfd 4, 192(1)
  04c8c54  fcfid 4, 4
  04c8c58  lis 3, 143
  04c8c5c  lwz 10, 20836(3)
  04c8c60  ori 3, 31, 0
  04c8c64  srwi 6, 10, 24
  04c8c68  clrlwi 8, 10, 24
  04c8c6c  frsp 4, 4
  04c8c70  rlwinm 9, 10, 24, 24, 31
  04c8c74  std 6, 112(1)
  04c8c78  rlwinm 10, 10, 16, 24, 31
  04c8c7c  fadds 3, 4, 3
  04c8c80  fmuls 2, 2, 3
  04c8c84  fctiwz 2, 2
  04c8c88  stfd 2, 192(1)
  04c8c8c  lwz 7, 196(1)
  04c8c90  extsw 7, 7
  04c8c94  bl 0x1d4d88
  04c8c98  nop
  04c8c9c  lis 3, 143
  04c8ca0  lwz 4, 20840(3)
  04c8ca4  lfs 1, 20840(3)
  04c8ca8  cmpwi 4, 0
  04c8cac  bf 1, 0x4c8d08
  04c8cb0  lis 3, 143
  04c8cb4  li 4, 20844
  04c8cb8  vspltisw 4, -1
  04c8cbc  lis 6, 149
  04c8cc0  lis 5, 77
  04c8cc4  addic 6, 6, 5056
  04c8cc8  addi 5, 5, -31544
  04c8ccc  <unknown>
  04c8cd0  li 3, 20
  04c8cd4  vcfsx 2, 2, 0
  04c8cd8  li 4, -3056
  04c8cdc  stfs 1, 352(6)
  04c8ce0  <unknown>
  04c8ce4  <unknown>
  04c8ce8  vspltw 3, 3, 0
  04c8cec  li 3, 360
  04c8cf0  vaddfp 2, 2, 3
  04c8cf4  vslw 3, 4, 4
  04c8cf8  vmaddfp 2, 5, 2, 3
  04c8cfc  vctsxs 2, 2, 0
  04c8d00  vspltw 2, 2, 0
  04c8d04  stvewx 2, 3, 6
  04c8d08  ld 0, 432(1)
  04c8d0c  mtlr 0
  04c8d10  lfd 17, 296(1)
  04c8d14  lfd 18, 304(1)
  04c8d18  lfd 19, 312(1)
  04c8d1c  lfd 20, 320(1)
  04c8d20  lfd 21, 328(1)
  04c8d24  lfd 22, 336(1)
  04c8d28  lfd 23, 344(1)
  04c8d2c  lfd 24, 352(1)
  04c8d30  lfd 25, 360(1)
  04c8d34  lfd 26, 368(1)
  04c8d38  lfd 27, 376(1)
  04c8d3c  lfd 28, 384(1)
  04c8d40  lfd 29, 392(1)
  04c8d44  lfd 30, 400(1)
  04c8d48  lfd 31, 408(1)
  04c8d4c  ld 22, 216(1)
  04c8d50  ld 23, 224(1)
  04c8d54  ld 24, 232(1)
  04c8d58  ld 25, 240(1)
  04c8d5c  ld 26, 248(1)
  04c8d60  ld 27, 256(1)
  04c8d64  ld 28, 264(1)
  04c8d68  ld 29, 272(1)
  04c8d6c  ld 30, 280(1)
  04c8d70  ld 31, 288(1)
  04c8d74  addi 1, 1, 416
  04c8d78  blr

M983_004c8df0:   # 0x4c8df0, 0x1300 bytes
  04c8df0  stdu 1, -704(1)
  04c8df4  mflr 0
  04c8df8  std 0, 720(1)
  04c8dfc  stfd 14, 560(1)
  04c8e00  stfd 15, 568(1)
  04c8e04  stfd 16, 576(1)
  04c8e08  stfd 17, 584(1)
  04c8e0c  stfd 18, 592(1)
  04c8e10  stfd 19, 600(1)
  04c8e14  stfd 20, 608(1)
  04c8e18  stfd 21, 616(1)
  04c8e1c  stfd 22, 624(1)
  04c8e20  stfd 23, 632(1)
  04c8e24  stfd 24, 640(1)
  04c8e28  stfd 25, 648(1)
  04c8e2c  stfd 26, 656(1)
  04c8e30  stfd 27, 664(1)
  04c8e34  stfd 28, 672(1)
  04c8e38  stfd 29, 680(1)
  04c8e3c  stfd 30, 688(1)
  04c8e40  stfd 31, 696(1)
  04c8e44  addi 0, 1, 400
  04c8e48  stvx 31, 0, 0
  04c8e4c  std 20, 464(1)
  04c8e50  std 15, 424(1)
  04c8e54  lis 20, 77
  04c8e58  ori 15, 3, 0
  04c8e5c  std 31, 552(1)
  04c8e60  addi 20, 20, -29316
  04c8e64  lis 31, 270
  04c8e68  lis 4, 151
  04c8e6c  lis 3, 143
  04c8e70  addic 4, 4, -25432
  04c8e74  std 16, 432(1)
  04c8e78  lfs 15, 0(20)
  04c8e7c  lwz 16, 120(15)
  04c8e80  lfs 1, 19540(31)
  04c8e84  std 30, 544(1)
  04c8e88  lfs 2, 20876(3)
  04c8e8c  lbz 30, 19(4)
  04c8e90  std 29, 536(1)
  04c8e94  std 28, 528(1)
  04c8e98  std 27, 520(1)
  04c8e9c  std 26, 512(1)
  04c8ea0  std 25, 504(1)
  04c8ea4  std 24, 496(1)
  04c8ea8  std 23, 488(1)
  04c8eac  std 22, 480(1)
  04c8eb0  std 21, 472(1)
  04c8eb4  std 19, 456(1)
  04c8eb8  std 18, 448(1)
  04c8ebc  std 17, 440(1)
  04c8ec0  std 14, 416(1)
  04c8ec4  stfd 15, 360(1)
  04c8ec8  bl 0x502578
  04c8ecc  nop
  04c8ed0  lis 29, 270
  04c8ed4  stfs 1, 19540(31)
  04c8ed8  lis 3, 143
  04c8edc  lfs 1, 19544(29)
  04c8ee0  lfs 2, 20880(3)
  04c8ee4  bl 0x5025e0
  04c8ee8  nop
  04c8eec  lis 31, 270
  04c8ef0  lis 3, 143
  04c8ef4  stfs 1, 19544(29)
  04c8ef8  lfs 1, 19548(31)
  04c8efc  lfs 2, 20896(3)
  04c8f00  bl 0x502578
  04c8f04  nop
  04c8f08  stfs 1, 19548(31)
  04c8f0c  lfs 1, 16(15)
  04c8f10  lfs 2, 16(16)
  04c8f14  lfs 4, 20(16)
  04c8f18  fsubs 3, 2, 1
  04c8f1c  lfs 5, 20(15)
  04c8f20  lfs 6, 24(16)
  04c8f24  fsubs 1, 1, 2
  04c8f28  fsubs 7, 5, 4
  04c8f2c  lfs 8, 24(15)
  04c8f30  fsubs 2, 8, 6
  04c8f34  li 3, 0
  04c8f38  lis 4, 127
  04c8f3c  subc 3, 3, 30
  04c8f40  lis 5, 127
  04c8f44  cntlzw 3, 3
  04c8f48  ori 4, 4, 8224
  04c8f4c  stfs 3, 128(1)
  04c8f50  lfs 4, 20(16)
  04c8f54  fsubs 4, 4, 5
  04c8f58  fmuls 5, 7, 7
  04c8f5c  ori 5, 5, 8256
  04c8f60  sldi 3, 3, 58
  04c8f64  subc 4, 4, 5
  04c8f68  sradi 3, 3, 63
  04c8f6c  lis 6, 143
  04c8f70  and 3, 3, 4
  04c8f74  fmuls 6, 4, 4
  04c8f78  fmadds 1, 1, 1, 5
  04c8f7c  stfs 4, 132(1)
  04c8f80  lfs 5, 24(16)
  04c8f84  addc 3, 5, 3
  04c8f88  fsubs 5, 5, 8
  04c8f8c  fmadds 6, 3, 3, 6
  04c8f90  fmadds 1, 2, 2, 1
  04c8f94  stfs 5, 136(1)
  04c8f98  lfs 2, 28(16)
  04c8f9c  fmadds 6, 5, 5, 6
  04c8fa0  fsqrts 1, 1
  04c8fa4  stw 3, 20932(6)
  04c8fa8  stfs 2, 140(1)
  04c8fac  lfs 31, 4(20)
  04c8fb0  fsqrts 7, 6
  04c8fb4  fmr 17, 31
  04c8fb8  fmuls 15, 1, 15
  04c8fbc  fmr 1, 17
  04c8fc0  fmr 2, 1
  04c8fc4  fcmpu 0, 7, 2
  04c8fc8  bt 2, 0x4c9014
  04c8fcc  frsqrte 1, 6
  04c8fd0  lfs 2, 8(20)
  04c8fd4  lfs 7, 12(20)
  04c8fd8  fmuls 8, 6, 1
  04c8fdc  fmuls 9, 2, 1
  04c8fe0  fnmsubs 8, 8, 1, 7
  04c8fe4  fmadds 1, 8, 9, 1
  04c8fe8  fmuls 8, 6, 1
  04c8fec  fmuls 9, 2, 1
  04c8ff0  fnmsubs 8, 8, 1, 7
  04c8ff4  fmadds 1, 8, 9, 1
  04c8ff8  fmuls 6, 6, 1
  04c8ffc  fmuls 2, 2, 1
  04c9000  fnmsubs 6, 6, 1, 7
  04c9004  fmadds 17, 6, 2, 1
  04c9008  fmuls 2, 3, 17
  04c900c  fmuls 1, 4, 17
  04c9010  fmuls 17, 5, 17
  04c9014  lis 27, 151
  04c9018  li 14, 0
  04c901c  addic 27, 27, -25376
  04c9020  addic 3, 1, 128
  04c9024  addic 5, 1, 208
  04c9028  ori 4, 3, 0
  04c902c  lfs 3, 660(27)
  04c9030  lfs 4, 664(27)
  04c9034  lfs 5, 656(27)
  04c9038  fmuls 6, 3, 2
  04c903c  stfs 2, 128(1)
  04c9040  fmuls 7, 4, 1
  04c9044  stfs 1, 132(1)
  04c9048  fmuls 8, 5, 17
  04c904c  stfs 17, 136(1)
  04c9050  stw 14, 220(1)
  04c9054  fmsubs 1, 5, 1, 6
  04c9058  fmsubs 3, 3, 17, 7
  04c905c  fmsubs 2, 4, 2, 8
  04c9060  stfs 1, 216(1)
  04c9064  stfs 3, 208(1)
  04c9068  stfs 2, 212(1)
  04c906c  lfs 16, 16(20)
  04c9070  fmr 1, 16
  04c9074  bl 0x1113e0
  04c9078  nop
  04c907c  lis 3, 270
  04c9080  lfs 1, 16(15)
  04c9084  li 31, 1
  04c9088  addic 26, 3, 18416
  04c908c  lfs 17, 128(1)
  04c9090  fmuls 17, 17, 15
  04c9094  stfs 1, 18416(3)
  04c9098  lfs 1, 20(15)
  04c909c  stfs 1, 4(26)
  04c90a0  lfs 1, 24(15)
  04c90a4  lfs 18, 132(1)
  04c90a8  stfs 1, 8(26)
  04c90ac  lfs 1, 28(15)
  04c90b0  lfs 19, 136(1)
  04c90b4  fmuls 18, 18, 15
  04c90b8  stfs 1, 12(26)
  04c90bc  lfs 1, 16(15)
  04c90c0  fmuls 19, 19, 15
  04c90c4  stfs 1, 320(26)
  04c90c8  lfs 1, 20(15)
  04c90cc  stfs 1, 324(26)
  04c90d0  lfs 1, 24(15)
  04c90d4  stfs 1, 328(26)
  04c90d8  lfs 1, 28(15)
  04c90dc  stfs 1, 332(26)
  04c90e0  stfs 1, 356(1)
  04c90e4  std 31, 368(1)
  04c90e8  ori 3, 31, 0
  04c90ec  bl 0x502730
  04c90f0  nop
  04c90f4  extsw 3, 31
  04c90f8  lis 4, 143
  04c90fc  std 3, 376(1)
  04c9100  lis 3, 143
  04c9104  lfd 2, 360(1)
  04c9108  lfs 3, 20872(4)
  04c910c  fmuls 1, 1, 2
  04c9110  lis 4, 143
  04c9114  lfs 2, 20868(3)
  04c9118  lis 3, 270
  04c911c  fsubs 3, 3, 2
  04c9120  lfs 4, 20864(4)
  04c9124  lfs 5, 19540(3)
  04c9128  fmadds 30, 3, 1, 2
  04c912c  lfd 1, 376(1)
  04c9130  fcfid 26, 1
  04c9134  frsp 26, 26
  04c9138  fmadds 1, 26, 4, 5
  04c913c  bl 0x10de78
  04c9140  nop
  04c9144  lfs 20, 20(20)
  04c9148  lfs 21, 24(20)
  04c914c  fsubs 2, 20, 1
  04c9150  fsubs 3, 21, 1
  04c9154  lfs 22, 28(20)
  04c9158  lis 3, 270
  04c915c  lfs 23, 32(20)
  04c9160  lis 4, 143
  04c9164  lfs 24, 36(20)
  04c9168  lfs 25, 40(20)
  04c916c  fsub 4, 1, 2
  04c9170  fsel 1, 4, 2, 1
  04c9174  fsub 2, 3, 1
  04c9178  fsel 3, 2, 3, 1
  04c917c  lfs 1, 19552(3)
  04c9180  lfs 2, 20920(4)
  04c9184  fmuls 4, 3, 3
  04c9188  fmuls 5, 4, 3
  04c918c  fmuls 6, 4, 5
  04c9190  fmadds 3, 5, 22, 3
  04c9194  fmuls 5, 4, 6
  04c9198  fmadds 3, 6, 23, 3
  04c919c  fmuls 4, 4, 5
  04c91a0  fmadds 3, 5, 24, 3
  04c91a4  fmadds 29, 4, 25, 3
  04c91a8  bl 0xfe4f0
  04c91ac  nop
  04c91b0  slwi 30, 31, 4
  04c91b4  lis 3, 270
  04c91b8  fmadds 30, 30, 29, 1
  04c91bc  slwi 29, 31, 2
  04c91c0  extsw 25, 30
  04c91c4  addic 3, 3, 19056
  04c91c8  extsw 29, 29
  04c91cc  addc 25, 25, 26
  04c91d0  lfsx 1, 3, 29
  04c91d4  lfs 2, 8(25)
  04c91d8  fsubs 1, 2, 1
  04c91dc  stfsx 30, 3, 29
  04c91e0  stfs 1, 8(25)
  04c91e4  bl 0xfcc68
  04c91e8  nop
  04c91ec  fmr 29, 1
  04c91f0  bl 0xfcc68
  04c91f4  nop
  04c91f8  fmr 3, 1
  04c91fc  addic 3, 1, 144
  04c9200  fmr 1, 15
  04c9204  fmr 2, 29
  04c9208  bl 0xfe610
  04c920c  nop
  04c9210  lfs 14, 8(20)
  04c9214  lfs 1, 148(1)
  04c9218  lis 3, 143
  04c921c  fsubs 2, 1, 18
  04c9220  lfs 1, 152(1)
  04c9224  lfs 3, 144(1)
  04c9228  lfs 4, 20988(3)
  04c922c  fsubs 3, 3, 17
  04c9230  fmuls 5, 1, 14
  04c9234  fmadds 2, 4, 2, 18
  04c9238  addic 3, 26, -16
  04c923c  fmadds 1, 4, 3, 17
  04c9240  fsubs 3, 5, 19
  04c9244  addc 28, 30, 26
  04c9248  fmuls 6, 2, 2
  04c924c  addc 3, 30, 3
  04c9250  stfs 5, 152(1)
  04c9254  fmadds 3, 4, 3, 19
  04c9258  clrldi 28, 28, 32
  04c925c  clrldi 3, 3, 32
  04c9260  fmadds 4, 1, 1, 6
  04c9264  fmadds 4, 3, 3, 4
  04c9268  fsqrts 4, 4
  04c926c  fcmpu 0, 4, 31
  04c9270  bf 2, 0x4c9294
  04c9274  lfs 1, 0(3)
  04c9278  stfs 1, 0(28)
  04c927c  lfs 1, 4(3)
  04c9280  stfs 1, 4(28)
  04c9284  lfs 1, 8(3)
  04c9288  stfs 1, 8(28)
  04c928c  lfs 27, 12(3)
  04c9290  b 0x4c92cc
  04c9294  fdivs 19, 15, 4
  04c9298  lfs 4, 0(3)
  04c929c  fmuls 17, 19, 1
  04c92a0  fmuls 18, 19, 2
  04c92a4  fmuls 19, 19, 3
  04c92a8  fadds 1, 4, 17
  04c92ac  stfs 1, 0(28)
  04c92b0  lfs 1, 4(3)
  04c92b4  fadds 1, 1, 18
  04c92b8  stfs 1, 4(28)
  04c92bc  lfs 1, 8(3)
  04c92c0  fadds 1, 1, 19
  04c92c4  stfs 1, 8(28)
  04c92c8  lfs 27, 12(3)
  04c92cc  stfs 27, 12(28)
  04c92d0  lfs 1, 8(25)
  04c92d4  fadds 1, 1, 30
  04c92d8  cmpwi 6, 31, 19
  04c92dc  stfs 1, 8(25)
  04c92e0  lfs 1, 0(28)
  04c92e4  lfs 2, 0(3)
  04c92e8  fsubs 1, 1, 2
  04c92ec  stfs 1, 144(1)
  04c92f0  lfs 1, 4(28)
  04c92f4  lfs 2, 4(3)
  04c92f8  fsubs 1, 1, 2
  04c92fc  stfs 1, 148(1)
  04c9300  lfs 1, 8(28)
  04c9304  lfs 2, 8(3)
  04c9308  fsubs 1, 1, 2
  04c930c  stfs 1, 152(1)
  04c9310  lfs 1, 12(28)
  04c9314  stfs 1, 156(1)
  04c9318  lfs 28, 20(16)
  04c931c  lfs 1, 4(28)
  04c9320  lfs 27, 16(16)
  04c9324  fsubs 28, 28, 1
  04c9328  lfs 1, 0(28)
  04c932c  lfs 29, 24(16)
  04c9330  fsubs 27, 27, 1
  04c9334  lfs 1, 8(28)
  04c9338  fsubs 29, 29, 1
  04c933c  fmuls 1, 28, 28
  04c9340  fmadds 1, 27, 27, 1
  04c9344  fmadds 30, 29, 29, 1
  04c9348  fsqrts 30, 30
  04c934c  fcmpu 0, 30, 31
  04c9350  bt 2, 0x4c93a4
  04c9354  cmpwi 1, 31, 15
  04c9358  bf 26, 0x4c9368
  04c935c  fmr 15, 30
  04c9360  fmr 1, 14
  04c9364  b 0x4c9388
  04c9368  lfs 1, 44(20)
  04c936c  bf 5, 0x4c9388
  04c9370  subfic 3, 31, 19
  04c9374  extsw 3, 3
  04c9378  bl 0x502730
  04c937c  nop
  04c9380  fdivs 15, 30, 1
  04c9384  fmr 1, 14
  04c9388  fdivs 2, 15, 30
  04c938c  fmsubs 3, 2, 27, 17
  04c9390  fmsubs 4, 2, 28, 18
  04c9394  fmsubs 2, 2, 29, 19
  04c9398  fmadds 17, 1, 3, 17
  04c939c  fmadds 18, 1, 4, 18
  04c93a0  fmadds 19, 1, 2, 19
  04c93a4  cmpwi 31, 10
  04c93a8  bf 0, 0x4c977c
  04c93ac  lis 3, 143
  04c93b0  lis 4, 270
  04c93b4  ori 24, 29, 0
  04c93b8  lfs 1, 20884(3)
  04c93bc  lfs 2, 19544(4)
  04c93c0  fmadds 1, 26, 1, 2
  04c93c4  bl 0x10de78
  04c93c8  nop
  04c93cc  lis 3, 143
  04c93d0  fmr 30, 1
  04c93d4  lis 4, 270
  04c93d8  lfs 1, 20900(3)
  04c93dc  lfs 2, 19548(4)
  04c93e0  fmadds 1, 26, 1, 2
  04c93e4  bl 0x10de78
  04c93e8  nop
  04c93ec  fsubs 2, 20, 1
  04c93f0  fsubs 3, 21, 1
  04c93f4  addic 3, 26, 320
  04c93f8  lis 4, 143
  04c93fc  addc 29, 30, 3
  04c9400  clrldi 29, 29, 32
  04c9404  fsub 4, 1, 2
  04c9408  fsel 1, 4, 2, 1
  04c940c  lfs 4, 0(28)
  04c9410  fsub 2, 3, 1
  04c9414  fsel 1, 2, 3, 1
  04c9418  lfs 3, 20888(4)
  04c941c  stfs 4, 0(29)
  04c9420  lfs 4, 4(28)
  04c9424  stfs 4, 4(29)
  04c9428  lfs 4, 8(28)
  04c942c  stfs 4, 8(29)
  04c9430  fmuls 2, 1, 1
  04c9434  lfs 4, 12(28)
  04c9438  stfs 4, 12(29)
  04c943c  fmuls 5, 2, 1
  04c9440  fmuls 6, 2, 5
  04c9444  fmadds 1, 5, 22, 1
  04c9448  fmuls 5, 2, 6
  04c944c  fmadds 6, 6, 23, 1
  04c9450  fmr 1, 31
  04c9454  fmuls 4, 2, 5
  04c9458  fmadds 5, 5, 24, 6
  04c945c  lfs 2, 44(20)
  04c9460  fmadds 4, 4, 25, 5
  04c9464  fmuls 29, 3, 4
  04c9468  bl 0xfe4f0
  04c946c  nop
  04c9470  fsubs 2, 20, 30
  04c9474  fsubs 3, 21, 30
  04c9478  lwz 3, 144(1)
  04c947c  lwz 4, 148(1)
  04c9480  lfs 5, 144(1)
  04c9484  lfs 6, 148(1)
  04c9488  rlwinm 4, 4, 3, 29, 29
  04c948c  lis 7, 115
  04c9490  fsub 4, 30, 2
  04c9494  addic 7, 7, 22784
  04c9498  lis 5, 270
  04c949c  addic 5, 5, 19456
  04c94a0  fsel 2, 4, 2, 30
  04c94a4  fabs 4, 5
  04c94a8  fabs 5, 6
  04c94ac  fsub 6, 3, 2
  04c94b0  fsubs 7, 4, 5
  04c94b4  fsel 2, 6, 3, 2
  04c94b8  stfs 7, 320(1)
  04c94bc  lfs 6, 328(25)
  04c94c0  lwz 6, 320(1)
  04c94c4  fmuls 3, 2, 2
  04c94c8  rlwimi 4, 6, 2, 30, 30
  04c94cc  rlwimi 4, 3, 4, 28, 28
  04c94d0  ori 3, 7, 0
  04c94d4  rlwimi 3, 4, 2, 26, 28
  04c94d8  slwi 4, 4, 2
  04c94dc  clrldi 3, 3, 32
  04c94e0  fmuls 7, 3, 2
  04c94e4  fmuls 8, 3, 7
  04c94e8  fmadds 2, 7, 22, 2
  04c94ec  lfs 7, 320(1)
  04c94f0  fmuls 9, 3, 8
  04c94f4  fmadds 2, 8, 23, 2
  04c94f8  fsub 8, 7, 31
  04c94fc  fsub 7, 7, 31
  04c9500  fmuls 10, 3, 9
  04c9504  fmadds 2, 9, 24, 2
  04c9508  fsel 3, 8, 4, 5
  04c950c  fmadds 2, 10, 25, 2
  04c9510  fcmpu 0, 3, 31
  04c9514  fmadds 1, 29, 2, 1
  04c9518  fsel 2, 7, 5, 4
  04c951c  fadds 4, 6, 1
  04c9520  stfsx 1, 5, 24
  04c9524  stfs 4, 328(25)
  04c9528  lfsx 26, 7, 4
  04c952c  lfs 1, 4(3)
  04c9530  bt 1, 0x4c953c
  04c9534  fmr 26, 31
  04c9538  b 0x4c9658
  04c953c  fsubs 4, 2, 3
  04c9540  fadds 2, 2, 3
  04c9544  addic 3, 1, 16
  04c9548  li 6, 2
  04c954c  addic 4, 3, 308
  04c9550  addic 5, 3, 324
  04c9554  mtctr 6
  04c9558  fdivs 2, 4, 2
  04c955c  fmuls 3, 2, 2
  04c9560  stfs 2, 336(1)
  04c9564  stfs 2, 328(1)
  04c9568  stfs 2, 332(1)
  04c956c  stfs 2, 324(1)
  04c9570  lfs 5, 336(1)
  04c9574  lfs 6, 328(1)
  04c9578  lfs 7, 332(1)
  04c957c  fmuls 4, 3, 3
  04c9580  fmuls 6, 6, 3
  04c9584  fmuls 5, 5, 4
  04c9588  fmuls 2, 4, 4
  04c958c  fmuls 4, 7, 4
  04c9590  stfs 6, 328(1)
  04c9594  fmuls 3, 5, 3
  04c9598  stfs 4, 332(1)
  04c959c  stfs 3, 336(1)
  04c95a0  lfs 3, 308(3)
  04c95a4  fmuls 3, 3, 2
  04c95a8  stfs 3, 324(3)
  04c95ac  lfs 3, 4(4)
  04c95b0  addic 3, 3, 8
  04c95b4  addic 4, 4, 8
  04c95b8  fmuls 3, 3, 2
  04c95bc  stfs 3, 4(5)
  04c95c0  addic 5, 5, 8
  04c95c4  bdnz 0x4c95a0
  04c95c8  li 5, 4
  04c95cc  ori 3, 1, 0
  04c95d0  mtctr 5
  04c95d4  lis 4, 115
  04c95d8  addic 5, 3, 324
  04c95dc  addic 4, 4, 22752
  04c95e0  ori 7, 5, 0
  04c95e4  lfs 2, 324(3)
  04c95e8  lfs 3, 0(4)
  04c95ec  fmuls 2, 2, 3
  04c95f0  lfs 3, 4(4)
  04c95f4  addic 4, 4, 8
  04c95f8  stfs 2, 324(3)
  04c95fc  lfs 2, 4(5)
  04c9600  addic 3, 3, 8
  04c9604  fmuls 2, 2, 3
  04c9608  stfs 2, 4(5)
  04c960c  addic 5, 5, 8
  04c9610  bdnz 0x4c95e4
  04c9614  fmr 2, 31
  04c9618  ori 3, 1, 0
  04c961c  mtctr 6
  04c9620  lfs 3, 324(3)
  04c9624  fadds 2, 2, 3
  04c9628  addic 3, 3, 16
  04c962c  lfs 3, 4(7)
  04c9630  lfs 4, 8(7)
  04c9634  lfs 5, 12(7)
  04c9638  addic 7, 7, 16
  04c963c  fadds 2, 2, 3
  04c9640  fadds 2, 2, 4
  04c9644  fadds 2, 2, 5
  04c9648  bdnz 0x4c9620
  04c964c  lfs 3, 48(20)
  04c9650  fadds 2, 2, 3
  04c9654  fmadds 26, 2, 26, 1
  04c9658  lfs 2, 52(20)
  04c965c  fmr 1, 26
  04c9660  bl 0x502578
  04c9664  nop
  04c9668  lfs 2, 56(20)
  04c966c  fsubs 3, 20, 1
  04c9670  fadds 4, 30, 2
  04c9674  fadds 2, 1, 2
  04c9678  lis 3, 143
  04c967c  fsub 5, 1, 3
  04c9680  fsubs 6, 20, 4
  04c9684  fsubs 8, 20, 2
  04c9688  fsubs 7, 21, 4
  04c968c  fsubs 9, 21, 2
  04c9690  fsel 3, 5, 3, 1
  04c9694  fsub 10, 4, 6
  04c9698  fsubs 1, 21, 1
  04c969c  fsub 11, 2, 8
  04c96a0  fsel 4, 10, 6, 4
  04c96a4  fsub 5, 1, 3
  04c96a8  fsel 2, 11, 8, 2
  04c96ac  lfs 10, 20892(3)
  04c96b0  lis 3, 270
  04c96b4  addic 3, 3, 19136
  04c96b8  fsub 6, 7, 4
  04c96bc  fsel 1, 5, 1, 3
  04c96c0  fsub 8, 9, 2
  04c96c4  addc 3, 3, 30
  04c96c8  clrldi 3, 3, 32
  04c96cc  fsel 3, 6, 7, 4
  04c96d0  fmuls 4, 1, 1
  04c96d4  fsel 2, 8, 9, 2
  04c96d8  fmuls 5, 3, 3
  04c96dc  fmuls 7, 4, 1
  04c96e0  fmuls 6, 2, 2
  04c96e4  fmuls 8, 5, 3
  04c96e8  fmuls 11, 4, 7
  04c96ec  fmuls 9, 6, 2
  04c96f0  fmadds 1, 7, 22, 1
  04c96f4  fmuls 12, 5, 8
  04c96f8  fmadds 3, 8, 22, 3
  04c96fc  fmuls 8, 6, 9
  04c9700  fmadds 2, 9, 22, 2
  04c9704  fmadds 1, 11, 23, 1
  04c9708  fmuls 7, 5, 12
  04c970c  fmadds 3, 12, 23, 3
  04c9710  fmuls 9, 6, 8
  04c9714  fmadds 2, 8, 23, 2
  04c9718  fmuls 8, 4, 11
  04c971c  lfs 12, 0(29)
  04c9720  lfs 11, 4(29)
  04c9724  fmuls 5, 5, 7
  04c9728  fmadds 3, 7, 24, 3
  04c972c  fmuls 6, 6, 9
  04c9730  fmadds 2, 9, 24, 2
  04c9734  fmuls 4, 4, 8
  04c9738  fmadds 1, 8, 24, 1
  04c973c  fmadds 3, 5, 25, 3
  04c9740  fmadds 2, 6, 25, 2
  04c9744  fmadds 1, 4, 25, 1
  04c9748  lfs 4, 356(1)
  04c974c  stw 14, 8(3)
  04c9750  stfs 4, 12(3)
  04c9754  fmuls 3, 10, 3
  04c9758  fmuls 2, 2, 3
  04c975c  fmuls 1, 1, 3
  04c9760  fadds 3, 12, 2
  04c9764  fadds 4, 11, 1
  04c9768  stfs 2, 0(3)
  04c976c  stfs 1, 4(3)
  04c9770  stfs 3, 0(29)
  04c9774  stfs 4, 4(29)
  04c9778  b 0x4c9820
  04c977c  addic 3, 26, 320
  04c9780  lfs 1, 0(28)
  04c9784  subfic 4, 31, 21
  04c9788  addc 3, 30, 3
  04c978c  lis 5, 270
  04c9790  clrldi 3, 3, 32
  04c9794  sldi 6, 4, 2
  04c9798  addic 5, 5, 19456
  04c979c  extsw 6, 6
  04c97a0  lis 7, 270
  04c97a4  stfs 1, 0(3)
  04c97a8  sldi 4, 4, 4
  04c97ac  lfs 1, 4(28)
  04c97b0  stfs 1, 4(3)
  04c97b4  lfs 1, 8(28)
  04c97b8  stfs 1, 8(3)
  04c97bc  lfs 1, 12(28)
  04c97c0  stfs 1, 12(3)
  04c97c4  lfs 1, 328(25)
  04c97c8  lfsx 2, 5, 6
  04c97cc  addic 5, 7, 19136
  04c97d0  fadds 1, 1, 2
  04c97d4  addc 4, 5, 4
  04c97d8  clrldi 4, 4, 32
  04c97dc  addc 5, 5, 30
  04c97e0  clrldi 5, 5, 32
  04c97e4  stfs 1, 328(25)
  04c97e8  lfs 1, 0(3)
  04c97ec  lfs 2, 0(4)
  04c97f0  fadds 1, 1, 2
  04c97f4  lfs 2, 4(3)
  04c97f8  lfs 3, 8(3)
  04c97fc  stfs 1, 0(3)
  04c9800  lfs 1, 4(4)
  04c9804  fadds 1, 2, 1
  04c9808  stfs 1, 4(3)
  04c980c  lfs 1, 8(4)
  04c9810  fadds 1, 3, 1
  04c9814  stfs 1, 8(3)
  04c9818  lfs 1, 12(5)
  04c981c  stfs 1, 356(1)
  04c9820  addic 31, 31, 1
  04c9824  extsw 31, 31
  04c9828  cmpwi 31, 20
  04c982c  bt 0, 0x4c90e8
  04c9830  lfs 1, 136(1)
  04c9834  lfs 3, 656(27)
  04c9838  lfs 2, 664(27)
  04c983c  fmuls 4, 3, 1
  04c9840  lfs 5, 132(1)
  04c9844  lfs 6, 128(1)
  04c9848  fmuls 7, 2, 5
  04c984c  lfs 8, 660(27)
  04c9850  fmuls 9, 8, 6
  04c9854  fmsubs 2, 2, 6, 4
  04c9858  fmsubs 1, 8, 1, 7
  04c985c  fmsubs 3, 3, 5, 9
  04c9860  fmr 5, 31
  04c9864  fmuls 4, 2, 2
  04c9868  li 3, 8
  04c986c  fmr 6, 5
  04c9870  fmadds 4, 1, 1, 4
  04c9874  <unknown>
  04c9878  stw 14, 188(1)
  04c987c  vspltw 31, 31, 0
  04c9880  fmr 7, 6
  04c9884  fmadds 4, 3, 3, 4
  04c9888  fsqrts 8, 4
  04c988c  fcmpu 0, 8, 7
  04c9890  bt 2, 0x4c98d8
  04c9894  frsqrte 5, 4
  04c9898  lfs 6, 12(20)
  04c989c  fmuls 7, 4, 5
  04c98a0  fmuls 8, 14, 5
  04c98a4  fnmsubs 7, 7, 5, 6
  04c98a8  fmadds 5, 7, 8, 5
  04c98ac  fmuls 7, 4, 5
  04c98b0  fmuls 8, 14, 5
  04c98b4  fnmsubs 7, 7, 5, 6
  04c98b8  fmadds 5, 7, 8, 5
  04c98bc  fmuls 4, 4, 5
  04c98c0  fmuls 7, 14, 5
  04c98c4  fnmsubs 4, 4, 5, 6
  04c98c8  fmadds 5, 4, 7, 5
  04c98cc  fmuls 7, 1, 5
  04c98d0  fmuls 6, 2, 5
  04c98d4  fmuls 5, 3, 5
  04c98d8  lfs 2, 660(27)
  04c98dc  lfs 1, 656(27)
  04c98e0  fmuls 2, 2, 2
  04c98e4  stfs 5, 184(1)
  04c98e8  lfs 5, 664(27)
  04c98ec  stfs 7, 176(1)
  04c98f0  stfs 6, 180(1)
  04c98f4  fmadds 2, 1, 1, 2
  04c98f8  fmadds 5, 5, 5, 2
  04c98fc  fsqrts 2, 5
  04c9900  fcmpu 0, 2, 31
  04c9904  bf 2, 0x4c9934
  04c9908  lfs 2, 660(27)
  04c990c  stfs 1, 192(1)
  04c9910  lfs 1, 664(27)
  04c9914  stfs 2, 196(1)
  04c9918  lfs 2, 668(27)
  04c991c  stfs 1, 200(1)
  04c9920  stw 14, 200(1)
  04c9924  stw 14, 196(1)
  04c9928  fmr 1, 2
  04c992c  stw 14, 192(1)
  04c9930  b 0x4c9994
  04c9934  frsqrte 2, 5
  04c9938  lfs 3, 12(20)
  04c993c  fmuls 4, 5, 2
  04c9940  fmuls 6, 14, 2
  04c9944  fnmsubs 4, 4, 2, 3
  04c9948  fmadds 2, 4, 6, 2
  04c994c  lfs 4, 660(27)
  04c9950  lfs 8, 664(27)
  04c9954  lfs 9, 668(27)
  04c9958  fmuls 6, 5, 2
  04c995c  fmuls 7, 14, 2
  04c9960  fnmsubs 6, 6, 2, 3
  04c9964  fmadds 2, 6, 7, 2
  04c9968  fmuls 5, 5, 2
  04c996c  fmuls 6, 14, 2
  04c9970  fnmsubs 3, 5, 2, 3
  04c9974  fmadds 2, 3, 6, 2
  04c9978  fmuls 3, 1, 2
  04c997c  fmuls 4, 4, 2
  04c9980  fmuls 2, 8, 2
  04c9984  fmr 1, 9
  04c9988  stfs 3, 192(1)
  04c998c  stfs 4, 196(1)
  04c9990  stfs 2, 200(1)
  04c9994  ori 23, 14, 0
  04c9998  stfs 1, 204(1)
  04c999c  ori 19, 23, 0
  04c99a0  ori 18, 19, 0
  04c99a4  cmpwi 18, 2
  04c99a8  bf 0, 0x4c99c4
  04c99ac  lfs 30, 16(15)
  04c99b0  lfs 29, 20(15)
  04c99b4  lfs 28, 24(15)
  04c99b8  lfs 27, 28(15)
  04c99bc  lfs 26, 60(20)
  04c99c0  b 0x4c99d8
  04c99c4  lfs 30, 16(16)
  04c99c8  fmr 26, 14
  04c99cc  lfs 29, 20(16)
  04c99d0  lfs 28, 24(16)
  04c99d4  lfs 27, 28(16)
  04c99d8  lis 24, 270
  04c99dc  addic 24, 24, 19888
  04c99e0  addc 3, 24, 23
  04c99e4  clrldi 3, 3, 32
  04c99e8  bl 0x4fffb4
  04c99ec  nop
  04c99f0  cmpwi 3, 0
  04c99f4  lis 17, 114
  04c99f8  lfs 25, 64(20)
  04c99fc  bt 2, 0x4c9bec
  04c9a00  lis 3, 270
  04c9a04  vspltisw 2, -16
  04c9a08  addic 3, 3, 19904
  04c9a0c  <unknown>
  04c9a10  li 3, -3056
  04c9a14  vsraw 2, 3, 2
  04c9a18  vspltisw 3, -1
  04c9a1c  vcfsx 2, 2, 0
  04c9a20  vslw 3, 3, 3
  04c9a24  <unknown>
  04c9a28  lis 3, 270
  04c9a2c  addic 3, 3, 19896
  04c9a30  vaddfp 2, 2, 31
  04c9a34  vmaddfp 2, 4, 2, 3
  04c9a38  vctsxs 2, 2, 0
  04c9a3c  vsplth 2, 2, 1
  04c9a40  stvehx 2, 23, 24
  04c9a44  sthx 14, 3, 23
  04c9a48  lfs 1, 68(20)
  04c9a4c  lfs 2, 72(20)
  04c9a50  bl 0xfe4f0
  04c9a54  nop
  04c9a58  fmr 24, 1
  04c9a5c  lfs 1, 76(20)
  04c9a60  fmr 2, 16
  04c9a64  bl 0xfcbe8
  04c9a68  nop
  04c9a6c  lfs 2, 128(1)
  04c9a70  addic 31, 1, 160
  04c9a74  lfs 3, 132(1)
  04c9a78  addic 5, 1, 176
  04c9a7c  fmuls 2, 2, 26
  04c9a80  lfs 4, 136(1)
  04c9a84  fmuls 3, 3, 26
  04c9a88  lfs 5, 140(1)
  04c9a8c  fmuls 4, 4, 26
  04c9a90  ori 3, 31, 0
  04c9a94  stfs 5, 172(1)
  04c9a98  ori 4, 31, 0
  04c9a9c  stfs 2, 160(1)
  04c9aa0  stfs 3, 164(1)
  04c9aa4  stfs 4, 168(1)
  04c9aa8  bl 0x1113e0
  04c9aac  nop
  04c9ab0  ori 3, 31, 0
  04c9ab4  addic 5, 1, 192
  04c9ab8  fmr 1, 24
  04c9abc  ori 4, 31, 0
  04c9ac0  bl 0x1113e0
  04c9ac4  nop
  04c9ac8  lis 3, 270
  04c9acc  addic 3, 3, 19568
  04c9ad0  addc 4, 3, 19
  04c9ad4  clrldi 4, 4, 32
  04c9ad8  addc 3, 3, 19
  04c9adc  lis 31, 149
  04c9ae0  addic 29, 3, 16
  04c9ae4  stfs 30, 0(4)
  04c9ae8  stfs 29, 4(4)
  04c9aec  stfs 28, 8(4)
  04c9af0  stfs 27, 12(4)
  04c9af4  lfs 1, 160(1)
  04c9af8  addic 30, 3, 32
  04c9afc  fadds 1, 30, 1
  04c9b00  li 24, 2
  04c9b04  addic 31, 31, 5056
  04c9b08  clrldi 29, 29, 32
  04c9b0c  clrldi 30, 30, 32
  04c9b10  stfs 1, 16(4)
  04c9b14  lfs 1, 164(1)
  04c9b18  fadds 1, 29, 1
  04c9b1c  stfs 1, 20(4)
  04c9b20  lfs 1, 168(1)
  04c9b24  stfs 27, 28(4)
  04c9b28  fadds 1, 28, 1
  04c9b2c  stfs 1, 24(4)
  04c9b30  lfs 30, 12(20)
  04c9b34  lfs 29, 80(20)
  04c9b38  lfs 1, 0(29)
  04c9b3c  lfs 2, 320(31)
  04c9b40  lfs 4, 324(31)
  04c9b44  fsubs 3, 1, 2
  04c9b48  lfs 5, 328(31)
  04c9b4c  fmr 1, 16
  04c9b50  fmr 2, 29
  04c9b54  stfs 3, 224(1)
  04c9b58  lfs 3, 4(29)
  04c9b5c  fsubs 3, 3, 4
  04c9b60  stfs 3, 228(1)
  04c9b64  lfs 3, 8(29)
  04c9b68  fsubs 3, 3, 5
  04c9b6c  stfs 3, 232(1)
  04c9b70  lfs 3, 12(29)
  04c9b74  stfs 3, 236(1)
  04c9b78  bl 0xfcbe8
  04c9b7c  nop
  04c9b80  addic 3, 1, 160
  04c9b84  fmuls 1, 1, 30
  04c9b88  addic 5, 1, 224
  04c9b8c  fneg 30, 30
  04c9b90  ori 4, 3, 0
  04c9b94  bl 0x1113e0
  04c9b98  nop
  04c9b9c  lfs 1, 0(29)
  04c9ba0  lfs 2, 160(1)
  04c9ba4  fadds 1, 1, 2
  04c9ba8  addic 24, 24, 1
  04c9bac  cmpwi 24, 5
  04c9bb0  stfs 1, 0(30)
  04c9bb4  lfs 1, 4(29)
  04c9bb8  lfs 2, 164(1)
  04c9bbc  fadds 1, 1, 2
  04c9bc0  stfs 1, 4(30)
  04c9bc4  lfs 1, 8(29)
  04c9bc8  lfs 2, 168(1)
  04c9bcc  fadds 1, 1, 2
  04c9bd0  stfs 1, 8(30)
  04c9bd4  lfs 1, 12(29)
  04c9bd8  addic 29, 29, 16
  04c9bdc  stfs 1, 12(30)
  04c9be0  addic 30, 30, 16
  04c9be4  bt 0, 0x4c9b38
  04c9be8  b 0x4c9e00
  04c9bec  lis 26, 270
  04c9bf0  ld 27, 368(1)
  04c9bf4  addic 25, 1, 256
  04c9bf8  lfs 26, 44(20)
  04c9bfc  addic 26, 26, 19568
  04c9c00  addic 31, 1, 16
  04c9c04  addc 28, 26, 19
  04c9c08  ori 29, 25, 0
  04c9c0c  addic 30, 28, 16
  04c9c10  clrldi 28, 28, 32
  04c9c14  clrldi 30, 30, 32
  04c9c18  ori 22, 28, 0
  04c9c1c  ori 21, 30, 0
  04c9c20  lfs 1, 0(30)
  04c9c24  lfs 2, 0(28)
  04c9c28  fsubs 3, 1, 2
  04c9c2c  fmr 1, 31
  04c9c30  fmr 2, 26
  04c9c34  stfs 3, 0(29)
  04c9c38  lfs 3, 4(30)
  04c9c3c  lfs 4, 4(28)
  04c9c40  fsubs 3, 3, 4
  04c9c44  stfs 3, 4(29)
  04c9c48  lfs 3, 8(30)
  04c9c4c  lfs 4, 8(28)
  04c9c50  fsubs 3, 3, 4
  04c9c54  stfs 3, 8(29)
  04c9c58  lfs 3, 12(30)
  04c9c5c  stfs 3, 12(29)
  04c9c60  bl 0xfe4f0
  04c9c64  nop
  04c9c68  lfs 2, 240(31)
  04c9c6c  fadds 3, 2, 1
  04c9c70  fmr 1, 31
  04c9c74  fmr 2, 26
  04c9c78  stfs 3, 240(31)
  04c9c7c  bl 0xfe4f0
  04c9c80  nop
  04c9c84  lfs 2, 244(31)
  04c9c88  fadds 3, 2, 1
  04c9c8c  fmr 1, 31
  04c9c90  fmr 2, 26
  04c9c94  stfs 3, 244(31)
  04c9c98  bl 0xfe4f0
  04c9c9c  nop
  04c9ca0  lfs 2, 248(31)
  04c9ca4  addic 27, 27, 1
  04c9ca8  fadds 1, 2, 1
  04c9cac  cmpwi 27, 5
  04c9cb0  addic 29, 29, 16
  04c9cb4  addic 30, 30, 16
  04c9cb8  addic 28, 28, 16
  04c9cbc  stfs 1, 248(31)
  04c9cc0  addic 31, 31, 16
  04c9cc4  bt 0, 0x4c9c20
  04c9cc8  addc 3, 26, 19
  04c9ccc  li 4, 4
  04c9cd0  clrldi 3, 3, 32
  04c9cd4  mtctr 4
  04c9cd8  stfs 30, 0(3)
  04c9cdc  stfs 29, 4(3)
  04c9ce0  stfs 28, 8(3)
  04c9ce4  stfs 27, 12(3)
  04c9ce8  lhzx 24, 24, 23
  04c9cec  lfs 1, 0(22)
  04c9cf0  lfs 2, 0(25)
  04c9cf4  fadds 1, 1, 2
  04c9cf8  stfs 1, 0(21)
  04c9cfc  lfs 1, 4(22)
  04c9d00  lfs 2, 4(25)
  04c9d04  fadds 1, 1, 2
  04c9d08  stfs 1, 4(21)
  04c9d0c  lfs 1, 8(22)
  04c9d10  lfs 2, 8(25)
  04c9d14  addic 25, 25, 16
  04c9d18  fadds 1, 1, 2
  04c9d1c  stfs 1, 8(21)
  04c9d20  lfs 1, 12(22)
  04c9d24  addic 22, 22, 16
  04c9d28  stfs 1, 12(21)
  04c9d2c  addic 21, 21, 16
  04c9d30  bdnz 0x4c9cec
  04c9d34  lis 3, 270
  04c9d38  lfs 30, 84(20)
  04c9d3c  extsh 24, 24
  04c9d40  addic 3, 3, 19912
  04c9d44  lhzx 3, 3, 23
  04c9d48  extsh 3, 3
  04c9d4c  cmpw 24, 3
  04c9d50  bf 1, 0x4c9dac
  04c9d54  subc 3, 24, 3
  04c9d58  bl 0x502730
  04c9d5c  nop
  04c9d60  lfs 2, -3056(17)
  04c9d64  fmr 29, 1
  04c9d68  fmuls 2, 2, 25
  04c9d6c  fctiwz 1, 2
  04c9d70  stfd 1, 376(1)
  04c9d74  lwz 3, 380(1)
  04c9d78  extsw 3, 3
  04c9d7c  bl 0x502730
  04c9d80  nop
  04c9d84  fdivs 1, 29, 1
  04c9d88  lfs 2, 12(20)
  04c9d8c  fsubs 1, 2, 1
  04c9d90  fmuls 1, 1, 30
  04c9d94  bl 0x502758
  04c9d98  nop
  04c9d9c  lis 4, 270
  04c9da0  addic 4, 4, 19896
  04c9da4  sthx 3, 4, 23
  04c9da8  b 0x4c9e00
  04c9dac  subc 3, 3, 24
  04c9db0  bl 0x502730
  04c9db4  nop
  04c9db8  lfs 2, -3056(17)
  04c9dbc  fmr 29, 1
  04c9dc0  fmuls 2, 2, 25
  04c9dc4  fctiwz 1, 2
  04c9dc8  stfd 1, 376(1)
  04c9dcc  lwz 3, 380(1)
  04c9dd0  extsw 3, 3
  04c9dd4  bl 0x502730
  04c9dd8  nop
  04c9ddc  fdivs 1, 29, 1
  04c9de0  lfs 2, 12(20)
  04c9de4  fsubs 1, 2, 1
  04c9de8  fmuls 1, 1, 30
  04c9dec  bl 0x502758
  04c9df0  nop
  04c9df4  lis 4, 270
  04c9df8  addic 4, 4, 19896
  04c9dfc  sthx 3, 4, 23
  04c9e00  addic 18, 18, 1
  04c9e04  addic 23, 23, 2
  04c9e08  cmpwi 18, 4
  04c9e0c  addic 19, 19, 80
  04c9e10  bt 0, 0x4c99a4
  04c9e14  lfs 30, 72(20)
  04c9e18  lfs 1, 68(20)
  04c9e1c  fmr 2, 30
  04c9e20  bl 0xfe4f0
  04c9e24  nop
  04c9e28  fmr 29, 1
  04c9e2c  lfs 1, 88(20)
  04c9e30  fmr 2, 30
  04c9e34  bl 0xfcbe8
  04c9e38  nop
  04c9e3c  lis 3, 114
  04c9e40  lfs 2, 128(1)
  04c9e44  lis 4, 143
  04c9e48  lfs 3, 132(1)
  04c9e4c  addic 31, 1, 160
  04c9e50  addic 5, 1, 176
  04c9e54  lfs 4, -3064(3)
  04c9e58  lfs 5, 20980(4)
  04c9e5c  ori 3, 31, 0
  04c9e60  fmuls 4, 4, 5
  04c9e64  lfs 5, 136(1)
  04c9e68  ori 4, 31, 0
  04c9e6c  lfs 6, 140(1)
  04c9e70  stfs 6, 172(1)
  04c9e74  fmuls 2, 2, 4
  04c9e78  fmuls 3, 3, 4
  04c9e7c  fmuls 4, 5, 4
  04c9e80  stfs 2, 160(1)
  04c9e84  stfs 3, 164(1)
  04c9e88  stfs 4, 168(1)
  04c9e8c  bl 0x1113e0
  04c9e90  nop
  04c9e94  ori 3, 31, 0
  04c9e98  fmr 1, 29
  04c9e9c  addic 5, 1, 192
  04c9ea0  ori 4, 31, 0
  04c9ea4  bl 0x1113e0
  04c9ea8  nop
  04c9eac  li 3, 1
  04c9eb0  li 4, 8
  04c9eb4  bl 0xfe484
  04c9eb8  nop
  04c9ebc  ori 30, 3, 0
  04c9ec0  li 3, 2
  04c9ec4  bl 0xfc620
  04c9ec8  nop
  04c9ecc  li 4, 0
  04c9ed0  lfs 1, 92(20)
  04c9ed4  neg 5, 30
  04c9ed8  lfs 2, 96(20)
  04c9edc  subc 3, 4, 3
  04c9ee0  subc 4, 30, 5
  04c9ee4  cntlzw 3, 3
  04c9ee8  sldi 3, 3, 58
  04c9eec  sradi 3, 3, 63
  04c9ef0  and 3, 3, 4
  04c9ef4  addc 30, 5, 3
  04c9ef8  bl 0xfcbe8
  04c9efc  nop
  04c9f00  lfs 2, -3056(17)
  04c9f04  fmr 30, 1
  04c9f08  lis 29, 143
  04c9f0c  fmuls 2, 2, 25
  04c9f10  addic 28, 15, 16
  04c9f14  fmr 3, 31
  04c9f18  li 8, 0
  04c9f1c  ori 3, 28, 0
  04c9f20  ori 9, 30, 0
  04c9f24  lwz 4, 20932(29)
  04c9f28  ori 10, 31, 0
  04c9f2c  oris 7, 4, 32512
  04c9f30  extsw 7, 7
  04c9f34  fctiwz 1, 2
  04c9f38  fmr 2, 30
  04c9f3c  stfd 1, 376(1)
  04c9f40  lfs 1, 100(20)
  04c9f44  lwz 4, 380(1)
  04c9f48  fmuls 1, 30, 1
  04c9f4c  extsw 4, 4
  04c9f50  bl 0x12f8c0
  04c9f54  nop
  04c9f58  lfs 1, -3056(17)
  04c9f5c  lis 7, 12415
  04c9f60  fmuls 2, 30, 14
  04c9f64  fmuls 1, 1, 25
  04c9f68  ori 3, 28, 0
  04c9f6c  neg 9, 30
  04c9f70  fmr 3, 31
  04c9f74  ori 7, 7, 32639
  04c9f78  li 8, 0
  04c9f7c  ori 10, 31, 0
  04c9f80  fctiwz 1, 1
  04c9f84  stfd 1, 376(1)
  04c9f88  lfs 29, 104(20)
  04c9f8c  lwz 4, 380(1)
  04c9f90  fmuls 1, 30, 29
  04c9f94  extsw 4, 4
  04c9f98  bl 0x12f8c0
  04c9f9c  nop
  04c9fa0  li 3, 1
  04c9fa4  li 4, 8
  04c9fa8  bl 0xfe484
  04c9fac  nop
  04c9fb0  ori 31, 3, 0
  04c9fb4  li 3, 2
  04c9fb8  bl 0xfc620
  04c9fbc  nop
  04c9fc0  li 4, 0
  04c9fc4  fmr 1, 29
  04c9fc8  neg 5, 31
  04c9fcc  subc 3, 4, 3
  04c9fd0  lfs 2, 108(20)
  04c9fd4  subc 4, 31, 5
  04c9fd8  cntlzw 3, 3
  04c9fdc  sldi 3, 3, 58
  04c9fe0  sradi 3, 3, 63
  04c9fe4  and 3, 3, 4
  04c9fe8  addc 31, 5, 3
  04c9fec  bl 0xfcbe8
  04c9ff0  nop
  04c9ff4  lfs 4, 112(20)
  04c9ff8  fmr 2, 1
  04c9ffc  lfs 5, -3056(17)
  04ca000  lis 10, 161
  04ca004  lwz 4, 20932(29)
  04ca008  addic 3, 16, 16
  04ca00c  fmuls 1, 5, 4
  04ca010  addic 10, 10, 23856
  04ca014  oris 7, 4, 32512
  04ca018  fmr 3, 31
  04ca01c  li 8, 0
  04ca020  ori 9, 31, 0
  04ca024  extsw 7, 7
  04ca028  fctiwz 1, 1
  04ca02c  stfd 1, 376(1)
  04ca030  lfs 1, 44(20)
  04ca034  lwz 4, 380(1)
  04ca038  fmuls 1, 2, 1
  04ca03c  extsw 4, 4
  04ca040  bl 0x12f8c0
  04ca044  nop
  04ca048  li 0, 400
  04ca04c  lvx 31, 1, 0
  04ca050  ld 0, 720(1)
  04ca054  mtlr 0
  04ca058  lfd 14, 560(1)
  04ca05c  lfd 15, 568(1)
  04ca060  lfd 16, 576(1)
  04ca064  lfd 17, 584(1)
  04ca068  lfd 18, 592(1)
  04ca06c  lfd 19, 600(1)
  04ca070  lfd 20, 608(1)
  04ca074  lfd 21, 616(1)
  04ca078  lfd 22, 624(1)
  04ca07c  lfd 23, 632(1)
  04ca080  lfd 24, 640(1)
  04ca084  lfd 25, 648(1)
  04ca088  lfd 26, 656(1)
  04ca08c  lfd 27, 664(1)
  04ca090  lfd 28, 672(1)
  04ca094  lfd 29, 680(1)
  04ca098  lfd 30, 688(1)
  04ca09c  lfd 31, 696(1)
  04ca0a0  ld 14, 416(1)
  04ca0a4  ld 15, 424(1)
  04ca0a8  ld 16, 432(1)
  04ca0ac  ld 17, 440(1)
  04ca0b0  ld 18, 448(1)
  04ca0b4  ld 19, 456(1)
  04ca0b8  ld 20, 464(1)
  04ca0bc  ld 21, 472(1)
  04ca0c0  ld 22, 480(1)
  04ca0c4  ld 23, 488(1)
  04ca0c8  ld 24, 496(1)
  04ca0cc  ld 25, 504(1)
  04ca0d0  ld 26, 512(1)
  04ca0d4  ld 27, 520(1)
  04ca0d8  ld 28, 528(1)
  04ca0dc  ld 29, 536(1)
  04ca0e0  ld 30, 544(1)
  04ca0e4  ld 31, 552(1)
  04ca0e8  addi 1, 1, 704
  04ca0ec  blr

M983_004ca100:   # 0x4ca100, 0x244 bytes
  04ca100  stdu 1, -64(1)
  04ca104  lis 4, 143
  04ca108  lwz 4, 20848(4)
  04ca10c  lwz 7, 120(3)
  04ca110  std 31, 56(1)
  04ca114  cmpwi 4, 0
  04ca118  bt 2, 0x4ca338
  04ca11c  lfs 1, 20(7)
  04ca120  lfs 2, 20(3)
  04ca124  lis 4, 143
  04ca128  li 5, 20976
  04ca12c  lfs 3, 16(7)
  04ca130  fsubs 1, 1, 2
  04ca134  lis 9, 143
  04ca138  li 8, 0
  04ca13c  lfs 2, 16(3)
  04ca140  fsubs 3, 3, 2
  04ca144  <unknown>
  04ca148  lfs 4, 24(7)
  04ca14c  stw 8, 20848(9)
  04ca150  lfs 5, 24(3)
  04ca154  lis 6, 77
  04ca158  fsubs 4, 4, 5
  04ca15c  fmuls 5, 1, 1
  04ca160  lis 4, 270
  04ca164  vcfsx 2, 2, 0
  04ca168  addi 5, 6, -24336
  04ca16c  li 6, -3056
  04ca170  li 7, 19920
  04ca174  stw 8, 19924(4)
  04ca178  <unknown>
  04ca17c  lis 4, 114
  04ca180  fmadds 5, 3, 3, 5
  04ca184  vspltw 3, 3, 0
  04ca188  lis 9, 143
  04ca18c  <unknown>
  04ca190  vaddfp 2, 2, 3
  04ca194  lis 4, 127
  04ca198  vspltisw 3, -1
  04ca19c  lis 6, 270
  04ca1a0  ori 10, 4, 8224
  04ca1a4  lis 4, 143
  04ca1a8  fmadds 5, 4, 4, 5
  04ca1ac  vslw 3, 3, 3
  04ca1b0  lfs 6, 20852(4)
  04ca1b4  lis 11, 270
  04ca1b8  vmaddfp 2, 4, 2, 3
  04ca1bc  fsqrts 5, 5
  04ca1c0  addic 4, 11, 18416
  04ca1c4  vctsxs 2, 2, 0
  04ca1c8  vspltw 2, 2, 0
  04ca1cc  stvewx 2, 7, 6
  04ca1d0  stw 10, 20932(9)
  04ca1d4  lfs 7, 4(5)
  04ca1d8  fmuls 6, 6, 7
  04ca1dc  lis 6, 270
  04ca1e0  lfs 7, 8(5)
  04ca1e4  stfs 2, 18416(11)
  04ca1e8  lfs 2, 20(3)
  04ca1ec  lis 5, 270
  04ca1f0  addic 9, 6, 19136
  04ca1f4  stfs 2, 4(4)
  04ca1f8  lfs 2, 24(3)
  04ca1fc  addic 7, 5, 19056
  04ca200  lis 5, 270
  04ca204  stfs 2, 8(4)
  04ca208  lfs 2, 28(3)
  04ca20c  addic 6, 5, 19456
  04ca210  li 3, 19
  04ca214  stfs 2, 12(4)
  04ca218  mtctr 3
  04ca21c  addic 7, 7, 4
  04ca220  addic 6, 6, 4
  04ca224  addic 5, 4, 16
  04ca228  fdivs 6, 6, 5
  04ca22c  addic 3, 9, 16
  04ca230  fsub 2, 7, 5
  04ca234  fsub 8, 7, 5
  04ca238  fsub 9, 7, 5
  04ca23c  fsub 10, 5, 7
  04ca240  fsub 11, 5, 7
  04ca244  fsub 5, 5, 7
  04ca248  fmuls 4, 4, 6
  04ca24c  fmuls 1, 1, 6
  04ca250  fmuls 6, 3, 6
  04ca254  fsel 3, 2, 7, 4
  04ca258  fsel 2, 8, 7, 1
  04ca25c  fsel 7, 9, 7, 6
  04ca260  fsel 3, 10, 3, 4
  04ca264  fsel 2, 11, 2, 1
  04ca268  fsel 1, 5, 7, 6
  04ca26c  lfs 4, 0(4)
  04ca270  fadds 4, 4, 1
  04ca274  stfs 4, 0(5)
  04ca278  lfs 4, 4(4)
  04ca27c  fadds 4, 4, 2
  04ca280  stfs 4, 4(5)
  04ca284  lfs 4, 8(4)
  04ca288  fadds 4, 4, 3
  04ca28c  stfs 4, 8(5)
  04ca290  lfs 4, 12(4)
  04ca294  addic 4, 4, 16
  04ca298  stfs 4, 12(5)
  04ca29c  stw 8, 0(7)
  04ca2a0  stw 8, 12(3)
  04ca2a4  addic 5, 5, 16
  04ca2a8  stw 8, 8(3)
  04ca2ac  addic 7, 7, 4
  04ca2b0  stw 8, 4(3)
  04ca2b4  stw 8, 0(3)
  04ca2b8  stw 8, 0(6)
  04ca2bc  addic 3, 3, 16
  04ca2c0  addic 6, 6, 4
  04ca2c4  bdnz 0x4ca26c
  04ca2c8  lis 3, 270
  04ca2cc  li 5, -1
  04ca2d0  addic 7, 3, 19888
  04ca2d4  lis 4, 270
  04ca2d8  lis 6, 270
  04ca2dc  li 9, 8
  04ca2e0  sth 5, 19888(3)
  04ca2e4  li 10, 4
  04ca2e8  addic 11, 4, 19904
  04ca2ec  sth 5, 2(7)
  04ca2f0  addic 3, 6, 19912
  04ca2f4  sth 5, 4(7)
  04ca2f8  li 12, 2
  04ca2fc  sth 5, 6(7)
  04ca300  sth 9, 19904(4)
  04ca304  lis 31, 270
  04ca308  sth 10, 19912(6)
  04ca30c  lis 5, 270
  04ca310  sth 10, 2(11)
  04ca314  lis 4, 270
  04ca318  sth 12, 2(3)
  04ca31c  sth 9, 4(11)
  04ca320  sth 10, 4(3)
  04ca324  sth 10, 6(11)
  04ca328  sth 12, 6(3)
  04ca32c  stw 8, 19540(31)
  04ca330  stw 8, 19544(5)
  04ca334  stw 8, 19548(4)
  04ca338  ld 31, 56(1)
  04ca33c  addi 1, 1, 64
  04ca340  blr

M983_004ca350:   # 0x4ca350, 0x3ac bytes
  04ca350  stdu 1, -336(1)
  04ca354  mflr 0
  04ca358  std 0, 352(1)
  04ca35c  stfd 21, 248(1)
  04ca360  stfd 22, 256(1)
  04ca364  stfd 23, 264(1)
  04ca368  stfd 24, 272(1)
  04ca36c  stfd 25, 280(1)
  04ca370  stfd 26, 288(1)
  04ca374  stfd 27, 296(1)
  04ca378  stfd 28, 304(1)
  04ca37c  stfd 29, 312(1)
  04ca380  stfd 30, 320(1)
  04ca384  stfd 31, 328(1)
  04ca388  lwz 4, 120(3)
  04ca38c  lfs 1, 20(3)
  04ca390  lfs 2, 16(3)
  04ca394  lfs 3, 4(4)
  04ca398  lfs 4, 0(4)
  04ca39c  fsubs 1, 3, 1
  04ca3a0  fsubs 2, 4, 2
  04ca3a4  lfs 3, 8(4)
  04ca3a8  lfs 4, 24(3)
  04ca3ac  fsubs 3, 3, 4
  04ca3b0  lis 5, 77
  04ca3b4  lis 6, 114
  04ca3b8  addi 5, 5, -23740
  04ca3bc  fmuls 4, 1, 1
  04ca3c0  lfs 5, 0(5)
  04ca3c4  lfs 26, -3052(6)
  04ca3c8  fmuls 5, 26, 5
  04ca3cc  fmadds 4, 2, 2, 4
  04ca3d0  lfs 27, 4(5)
  04ca3d4  lfs 22, 12(4)
  04ca3d8  lis 6, 143
  04ca3dc  lis 4, 143
  04ca3e0  lis 7, 143
  04ca3e4  lis 8, 143
  04ca3e8  fmadds 4, 3, 3, 4
  04ca3ec  std 30, 232(1)
  04ca3f0  lfs 23, 20652(4)
  04ca3f4  li 30, 0
  04ca3f8  std 31, 240(1)
  04ca3fc  lfs 6, 20668(6)
  04ca400  ori 31, 3, 0
  04ca404  lfs 24, 20656(7)
  04ca408  fmuls 23, 23, 26
  04ca40c  lfs 25, 20664(8)
  04ca410  fmuls 24, 24, 26
  04ca414  fsqrts 4, 4
  04ca418  lfs 28, 8(5)
  04ca41c  fmuls 25, 25, 26
  04ca420  fmuls 26, 6, 26
  04ca424  fdivs 5, 5, 4
  04ca428  fsub 6, 27, 4
  04ca42c  fsub 7, 27, 4
  04ca430  fsub 8, 27, 4
  04ca434  fsub 29, 4, 27
  04ca438  fsub 30, 4, 27
  04ca43c  fsub 31, 4, 27
  04ca440  fmuls 3, 3, 5
  04ca444  fmuls 1, 1, 5
  04ca448  fmuls 2, 2, 5
  04ca44c  fsel 4, 6, 27, 3
  04ca450  fsel 5, 7, 27, 1
  04ca454  fsel 6, 8, 27, 2
  04ca458  fsel 29, 29, 4, 3
  04ca45c  std 29, 224(1)
  04ca460  std 28, 216(1)
  04ca464  std 27, 208(1)
  04ca468  std 26, 200(1)
  04ca46c  std 25, 192(1)
  04ca470  std 24, 184(1)
  04ca474  std 23, 176(1)
  04ca478  fsel 30, 30, 5, 1
  04ca47c  fsel 31, 31, 6, 2
  04ca480  addic 29, 1, 144
  04ca484  fmr 1, 23
  04ca488  fmr 2, 24
  04ca48c  ori 3, 29, 0
  04ca490  bl 0xfea60
  04ca494  nop
  04ca498  lis 3, 143
  04ca49c  lfs 1, 144(1)
  04ca4a0  lfs 2, 148(1)
  04ca4a4  lfs 3, 152(1)
  04ca4a8  lfs 4, 20660(3)
  04ca4ac  fmuls 5, 1, 4
  04ca4b0  fmuls 6, 2, 4
  04ca4b4  fmuls 21, 3, 4
  04ca4b8  fmr 1, 25
  04ca4bc  lfs 3, 156(1)
  04ca4c0  fmr 2, 26
  04ca4c4  stfs 3, 172(1)
  04ca4c8  stfs 5, 160(1)
  04ca4cc  stfs 6, 164(1)
  04ca4d0  stfs 21, 168(1)
  04ca4d4  bl 0xfcbe8
  04ca4d8  nop
  04ca4dc  fneg 1, 1
  04ca4e0  lis 3, 143
  04ca4e4  lis 4, 143
  04ca4e8  fadds 4, 21, 1
  04ca4ec  lfs 1, 20628(3)
  04ca4f0  lfs 3, 20632(4)
  04ca4f4  fmr 2, 3
  04ca4f8  stfs 4, 168(1)
  04ca4fc  bl 0xfcbe8
  04ca500  nop
  04ca504  lis 28, 114
  04ca508  lfs 2, -3056(28)
  04ca50c  fmuls 1, 1, 2
  04ca510  bl 0x502758
  04ca514  nop
  04ca518  lis 4, 143
  04ca51c  lis 5, 143
  04ca520  ori 27, 3, 0
  04ca524  lfs 1, 20636(4)
  04ca528  lfs 2, 20640(5)
  04ca52c  bl 0xfcbe8
  04ca530  nop
  04ca534  lfs 2, -3056(28)
  04ca538  fmuls 1, 1, 2
  04ca53c  bl 0x502758
  04ca540  nop
  04ca544  lis 4, 143
  04ca548  lis 5, 143
  04ca54c  ori 26, 3, 0
  04ca550  lfs 1, 20644(4)
  04ca554  lfs 2, 20648(5)
  04ca558  bl 0xfcbe8
  04ca55c  nop
  04ca560  lfs 2, -3056(28)
  04ca564  fmuls 1, 1, 2
  04ca568  bl 0x502758
  04ca56c  nop
  04ca570  lis 4, 143
  04ca574  lis 5, 143
  04ca578  ori 28, 3, 0
  04ca57c  lfs 1, 20612(4)
  04ca580  lfs 2, 20616(5)
  04ca584  bl 0xfcbe8
  04ca588  nop
  04ca58c  lis 3, 143
  04ca590  lis 4, 143
  04ca594  stfs 1, 156(1)
  04ca598  lfs 1, 20620(3)
  04ca59c  lfs 2, 20624(4)
  04ca5a0  bl 0xfcbe8
  04ca5a4  nop
  04ca5a8  stfs 1, 172(1)
  04ca5ac  fmr 2, 28
  04ca5b0  fmr 1, 27
  04ca5b4  bl 0xfcbe8
  04ca5b8  nop
  04ca5bc  lfs 2, 16(31)
  04ca5c0  lfs 3, 20(31)
  04ca5c4  lis 3, 143
  04ca5c8  fmadds 4, 1, 31, 2
  04ca5cc  lis 4, 143
  04ca5d0  lfs 2, 24(31)
  04ca5d4  fmadds 3, 1, 30, 3
  04ca5d8  stfs 22, 140(1)
  04ca5dc  fmadds 5, 1, 29, 2
  04ca5e0  lwz 3, 20596(3)
  04ca5e4  lwz 4, 20600(4)
  04ca5e8  extsw 25, 3
  04ca5ec  fmr 1, 27
  04ca5f0  extsw 24, 4
  04ca5f4  fmr 2, 28
  04ca5f8  stfs 4, 128(1)
  04ca5fc  stfs 3, 132(1)
  04ca600  stfs 5, 136(1)
  04ca604  bl 0xfcbe8
  04ca608  nop
  04ca60c  ori 4, 24, 0
  04ca610  ori 3, 25, 0
  04ca614  bl 0x5027bc
  04ca618  nop
  04ca61c  lis 4, 143
  04ca620  lis 5, 143
  04ca624  fmr 1, 27
  04ca628  ori 25, 3, 0
  04ca62c  fmr 2, 28
  04ca630  lwz 3, 20604(4)
  04ca634  lwz 4, 20608(5)
  04ca638  extsw 24, 3
  04ca63c  extsw 23, 4
  04ca640  bl 0xfcbe8
  04ca644  nop
  04ca648  ori 4, 23, 0
  04ca64c  ori 3, 24, 0
  04ca650  bl 0x5027bc
  04ca654  nop
  04ca658  lis 4, 143
  04ca65c  ori 7, 3, 0
  04ca660  ori 8, 27, 0
  04ca664  addic 3, 1, 128
  04ca668  ori 9, 26, 0
  04ca66c  lwz 4, 20672(4)
  04ca670  addic 5, 1, 160
  04ca674  extsw 11, 4
  04ca678  ori 4, 29, 0
  04ca67c  ori 6, 25, 0
  04ca680  ori 10, 28, 0
  04ca684  std 11, 112(1)
  04ca688  bl 0x1206e8
  04ca68c  nop
  04ca690  addic 30, 30, 1
  04ca694  cmpwi 30, 3
  04ca698  bt 0, 0x4ca480
  04ca69c  ld 0, 352(1)
  04ca6a0  mtlr 0
  04ca6a4  lfd 21, 248(1)
  04ca6a8  lfd 22, 256(1)
  04ca6ac  lfd 23, 264(1)
  04ca6b0  lfd 24, 272(1)
  04ca6b4  lfd 25, 280(1)
  04ca6b8  lfd 26, 288(1)
  04ca6bc  lfd 27, 296(1)
  04ca6c0  lfd 28, 304(1)
  04ca6c4  lfd 29, 312(1)
  04ca6c8  lfd 30, 320(1)
  04ca6cc  lfd 31, 328(1)
  04ca6d0  ld 23, 176(1)
  04ca6d4  ld 24, 184(1)
  04ca6d8  ld 25, 192(1)
  04ca6dc  ld 26, 200(1)
  04ca6e0  ld 27, 208(1)
  04ca6e4  ld 28, 216(1)
  04ca6e8  ld 29, 224(1)
  04ca6ec  ld 30, 232(1)
  04ca6f0  ld 31, 240(1)
  04ca6f4  addi 1, 1, 336
  04ca6f8  blr

UpdateMoby_983:   # 0x4ca718, 0x370 bytes
  04ca718  stdu 1, -224(1)
  04ca71c  mflr 0
  04ca720  std 0, 240(1)
  04ca724  stfd 27, 184(1)
  04ca728  stfd 28, 192(1)
  04ca72c  stfd 29, 200(1)
  04ca730  stfd 30, 208(1)
  04ca734  stfd 31, 216(1)
  04ca738  lis 4, 77
  04ca73c  lis 5, 143
  04ca740  std 31, 176(1)
  04ca744  addi 4, 4, -22788
  04ca748  std 29, 160(1)
  04ca74c  ori 31, 3, 0
  04ca750  lis 29, 114
  04ca754  lfs 31, 0(4)
  04ca758  std 30, 168(1)
  04ca75c  lfs 2, 20240(5)
  04ca760  lwz 30, 120(31)
  04ca764  fmuls 2, 2, 31
  04ca768  lfs 1, 44(30)
  04ca76c  lfs 3, -3052(29)
  04ca770  std 28, 152(1)
  04ca774  std 27, 144(1)
  04ca778  fmuls 2, 2, 3
  04ca77c  bl 0x502578
  04ca780  nop
  04ca784  lis 3, 143
  04ca788  stfs 1, 44(30)
  04ca78c  lfs 1, 48(30)
  04ca790  lfs 2, -3052(29)
  04ca794  lfs 3, 20244(3)
  04ca798  fmuls 3, 3, 31
  04ca79c  fmuls 2, 3, 2
  04ca7a0  bl 0x502578
  04ca7a4  nop
  04ca7a8  stfs 1, 48(30)
  04ca7ac  lbz 3, 32(31)
  04ca7b0  cmpwi 3, 0
  04ca7b4  bt 1, 0x4ca7c4
  04ca7b8  cmpwi 3, -1
  04ca7bc  bf 1, 0x4caa3c
  04ca7c0  b 0x4ca7d0
  04ca7c4  cmpwi 3, 1
  04ca7c8  bf 1, 0x4ca7f4
  04ca7cc  b 0x4caa3c
  04ca7d0  addic 3, 30, 40
  04ca7d4  bl 0x4fff60
  04ca7d8  nop
  04ca7dc  cmpwi 3, 0
  04ca7e0  bt 2, 0x4caa3c
  04ca7e4  ori 3, 31, 0
  04ca7e8  bl 0xefb38
  04ca7ec  nop
  04ca7f0  b 0x4caa50
  04ca7f4  lfs 30, 4(30)
  04ca7f8  lfs 1, 20(31)
  04ca7fc  lfs 29, 0(30)
  04ca800  fsubs 30, 30, 1
  04ca804  lfs 1, 16(31)
  04ca808  lfs 31, 8(30)
  04ca80c  fsubs 29, 29, 1
  04ca810  lfs 1, 24(31)
  04ca814  lis 3, 143
  04ca818  fsubs 31, 31, 1
  04ca81c  lis 4, 114
  04ca820  fmuls 1, 30, 30
  04ca824  lfs 27, 20256(3)
  04ca828  lfs 2, -3052(4)
  04ca82c  ori 3, 31, 0
  04ca830  fmuls 27, 27, 2
  04ca834  fmadds 1, 29, 29, 1
  04ca838  fmadds 28, 31, 31, 1
  04ca83c  fsqrts 28, 28
  04ca840  bl 0x4ca350
  04ca844  lis 4, 143
  04ca848  lfs 1, 36(30)
  04ca84c  addic 3, 30, 16
  04ca850  lfs 2, 20248(4)
  04ca854  fmuls 1, 2, 1
  04ca858  fmr 2, 1
  04ca85c  bl 0xfea60
  04ca860  nop
  04ca864  lfs 1, 16(30)
  04ca868  lfs 2, 16(31)
  04ca86c  fadds 1, 1, 2
  04ca870  lfs 2, 20(30)
  04ca874  lfs 3, 24(30)
  04ca878  ori 3, 31, 0
  04ca87c  stfs 1, 16(30)
  04ca880  lfs 1, 20(31)
  04ca884  fadds 1, 2, 1
  04ca888  stfs 1, 20(30)
  04ca88c  lfs 1, 24(31)
  04ca890  fadds 1, 3, 1
  04ca894  stfs 1, 24(30)
  04ca898  bl 0x4ca100
  04ca89c  ori 3, 31, 0
  04ca8a0  bl 0x4c8df0
  04ca8a4  lis 3, 113
  04ca8a8  ori 4, 31, 0
  04ca8ac  addic 3, 3, -1784
  04ca8b0  bl 0x6d7e0
  04ca8b4  nop
  04ca8b8  fcmpu 0, 28, 27
  04ca8bc  lfs 4, 16(31)
  04ca8c0  lfs 3, 20(31)
  04ca8c4  lfs 2, 24(31)
  04ca8c8  lfs 1, 28(31)
  04ca8cc  cror 6, 1, 2
  04ca8d0  bt 6, 0x4ca8ec
  04ca8d4  ori 3, 31, 0
  04ca8d8  bl 0x4c8510
  04ca8dc  ori 3, 31, 0
  04ca8e0  bl 0xefb38
  04ca8e4  nop
  04ca8e8  b 0x4caa50
  04ca8ec  fdivs 5, 27, 28
  04ca8f0  lis 3, 77
  04ca8f4  addi 29, 3, -22788
  04ca8f8  addic 27, 1, 128
  04ca8fc  li 28, 0
  04ca900  ori 3, 27, 0
  04ca904  li 4, 0
  04ca908  fmr 7, 31
  04ca90c  lfs 31, 4(29)
  04ca910  stfs 1, 140(1)
  04ca914  fsub 1, 31, 28
  04ca918  fsub 6, 31, 28
  04ca91c  fsub 8, 31, 28
  04ca920  fsub 9, 28, 31
  04ca924  fsub 10, 28, 31
  04ca928  fsub 11, 28, 31
  04ca92c  fmuls 7, 7, 5
  04ca930  fmuls 12, 30, 5
  04ca934  fmuls 5, 29, 5
  04ca938  fsel 1, 1, 31, 7
  04ca93c  fsel 6, 6, 31, 12
  04ca940  fsel 8, 8, 31, 5
  04ca944  fsel 1, 9, 1, 7
  04ca948  fsel 6, 10, 6, 12
  04ca94c  fsel 5, 11, 8, 5
  04ca950  fadds 1, 2, 1
  04ca954  fadds 2, 3, 6
  04ca958  fadds 3, 4, 5
  04ca95c  stfs 1, 24(31)
  04ca960  stfs 2, 20(31)
  04ca964  stfs 3, 16(31)
  04ca968  stfs 3, 128(1)
  04ca96c  stfs 2, 132(1)
  04ca970  stfs 1, 136(1)
  04ca974  lfs 1, 8(29)
  04ca978  bl 0xffb70
  04ca97c  nop
  04ca980  stfs 1, 136(1)
  04ca984  lis 6, 1
  04ca988  lfs 30, 12(29)
  04ca98c  addic 4, 31, 16
  04ca990  lfs 29, 16(29)
  04ca994  ori 6, 6, 1
  04ca998  lfs 28, 20(29)
  04ca99c  li 9, 0
  04ca9a0  lwz 3, 32(30)
  04ca9a4  li 10, 1
  04ca9a8  std 28, 112(1)
  04ca9ac  fmr 1, 30
  04ca9b0  fmr 2, 29
  04ca9b4  fmr 3, 28
  04ca9b8  bl 0x105870
  04ca9bc  nop
  04ca9c0  lis 6, 1
  04ca9c4  lwz 3, 32(30)
  04ca9c8  fmr 1, 30
  04ca9cc  ori 4, 27, 0
  04ca9d0  li 9, 0
  04ca9d4  fmr 2, 29
  04ca9d8  ori 6, 6, 1
  04ca9dc  fmr 3, 28
  04ca9e0  li 10, 1
  04ca9e4  std 28, 112(1)
  04ca9e8  bl 0x105870
  04ca9ec  nop
  04ca9f0  addic 3, 30, 52
  04ca9f4  bl 0x4fff60
  04ca9f8  nop
  04ca9fc  cmpwi 3, 0
  04caa00  bt 2, 0x4caa3c
  04caa04  lis 4, 77
  04caa08  addic 3, 30, 36
  04caa0c  fmr 1, 31
  04caa10  addi 4, 4, -22788
  04caa14  lfs 2, 24(4)
  04caa18  bl 0x109af0
  04caa1c  nop
  04caa20  lwz 3, 36(30)
  04caa24  cmpwi 3, 0
  04caa28  bf 2, 0x4caa3c
  04caa2c  ori 3, 31, 0
  04caa30  bl 0xefb38
  04caa34  nop
  04caa38  b 0x4caa50
  04caa3c  lis 3, 113
  04caa40  ori 4, 31, 0
  04caa44  addic 3, 3, -1808
  04caa48  bl 0x6d720
  04caa4c  nop
  04caa50  ld 0, 240(1)
  04caa54  mtlr 0
  04caa58  lfd 27, 184(1)
  04caa5c  lfd 28, 192(1)
  04caa60  lfd 29, 200(1)
  04caa64  lfd 30, 208(1)
  04caa68  lfd 31, 216(1)
  04caa6c  ld 27, 144(1)
  04caa70  ld 28, 152(1)
  04caa74  ld 29, 160(1)
  04caa78  ld 30, 168(1)
  04caa7c  ld 31, 176(1)
  04caa80  addi 1, 1, 224
  04caa84  blr
