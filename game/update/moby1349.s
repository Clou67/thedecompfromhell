# game/update/moby1349.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1349_00254604:   # 0x254604, 0x14 bytes
  0254604  lis 3, 122
  0254608  lis 4, 1
  025460c  addic 3, 3, -18108
  0254610  stw 4, 72(3)
  0254614  blr

UpdateMoby_1349:   # 0x254630, 0x768 bytes
  0254630  stdu 1, -144(1)
  0254634  mflr 0
  0254638  std 0, 160(1)
  025463c  std 31, 136(1)
  0254640  lwz 31, 120(3)
  0254644  lwz 3, 16(31)
  0254648  cmpwi 3, 0
  025464c  cmpwi 1, 3, -1
  0254650  std 30, 128(1)
  0254654  cmpwi 6, 3, 1
  0254658  bt 1, 0x254664
  025465c  bf 5, 0x2546f0
  0254660  b 0x25466c
  0254664  bf 25, 0x2546a8
  0254668  b 0x2546f0
  025466c  lis 30, 151
  0254670  lwz 4, 8(31)
  0254674  addic 30, 30, -25376
  0254678  extsw 4, 4
  025467c  addic 3, 30, 128
  0254680  bl 0x110b70
  0254684  nop
  0254688  cmpwi 3, 0
  025468c  bt 2, 0x2546f0
  0254690  lwz 3, 8332(30)
  0254694  cmpwi 3, 15
  0254698  bf 2, 0x2546f0
  025469c  li 3, 1
  02546a0  stw 3, 16(31)
  02546a4  b 0x2546f0
  02546a8  lis 3, 151
  02546ac  addic 3, 3, -25376
  02546b0  lwz 4, 8324(3)
  02546b4  cmpwi 4, 66
  02546b8  bf 2, 0x2546c8
  02546bc  li 3, 0
  02546c0  stw 3, 16(31)
  02546c4  b 0x2546f0
  02546c8  addic 3, 3, 128
  02546cc  lwz 4, 12(31)
  02546d0  extsw 4, 4
  02546d4  bl 0x110b70
  02546d8  nop
  02546dc  cmpwi 3, 0
  02546e0  bt 2, 0x2546f0
  02546e4  li 3, 11
  02546e8  bl 0x11b728
  02546ec  nop
  02546f0  lis 30, 151
  02546f4  addic 30, 30, -16064
  02546f8  lbz 3, 29(30)
  02546fc  cmpwi 3, 0
  0254700  bf 2, 0x254808
  0254704  lis 3, 151
  0254708  lwz 4, 0(31)
  025470c  addic 3, 3, -25376
  0254710  extsw 4, 4
  0254714  addic 3, 3, 128
  0254718  bl 0x110b70
  025471c  nop
  0254720  cmpwi 3, 0
  0254724  bt 2, 0x254808
  0254728  lis 3, 161
  025472c  lis 4, 37
  0254730  lwz 3, -2344(3)
  0254734  extsw 3, 3
  0254738  std 3, 112(1)
  025473c  addi 3, 4, 17944
  0254740  lis 4, 114
  0254744  lfs 1, 0(3)
  0254748  lfs 2, -3056(4)
  025474c  lfd 3, 112(1)
  0254750  fcfid 3, 3
  0254754  frsp 3, 3
  0254758  fadds 1, 3, 1
  025475c  fmuls 1, 2, 1
  0254760  fctiwz 1, 1
  0254764  stfd 1, 112(1)
  0254768  lfs 1, 4(3)
  025476c  fmuls 1, 2, 1
  0254770  lfs 3, 8(3)
  0254774  lis 3, 161
  0254778  lwz 5, 116(1)
  025477c  addic 3, 3, 12
  0254780  fctidz 1, 1
  0254784  lhz 4, 386(3)
  0254788  mulli 6, 4, 600
  025478c  fcfid 1, 1
  0254790  subc 7, 5, 6
  0254794  cmpwi 1, 6, 0
  0254798  frsp 1, 1
  025479c  fmuls 1, 1, 3
  02547a0  fctiwz 1, 1
  02547a4  stfd 1, 112(1)
  02547a8  lwz 6, 116(1)
  02547ac  cmpw 7, 6
  02547b0  bt 1, 0x2547b8
  02547b4  bf 6, 0x2547cc
  02547b8  li 3, 8000
  02547bc  li 4, 48
  02547c0  bl 0x7b310
  02547c4  nop
  02547c8  b 0x254808
  02547cc  lis 6, 6990
  02547d0  ori 6, 6, 33205
  02547d4  mulhw 6, 6, 5
  02547d8  srawi 6, 6, 6
  02547dc  srwi 7, 6, 31
  02547e0  addc 6, 6, 7
  02547e4  cmpw 6, 4
  02547e8  bf 1, 0x254808
  02547ec  lis 4, 6990
  02547f0  ori 4, 4, 33205
  02547f4  mulhw 4, 4, 5
  02547f8  srawi 4, 4, 6
  02547fc  srwi 5, 4, 31
  0254800  addc 4, 4, 5
  0254804  sth 4, 386(3)
  0254808  lbz 3, 29(30)
  025480c  cmpwi 3, 0
  0254810  bt 2, 0x2549fc
  0254814  lis 3, 151
  0254818  lwz 4, 0(31)
  025481c  addic 3, 3, -25376
  0254820  extsw 4, 4
  0254824  addic 3, 3, 128
  0254828  bl 0x110b70
  025482c  nop
  0254830  cmpwi 3, 0
  0254834  bt 2, 0x2549fc
  0254838  lis 3, 151
  025483c  addic 3, 3, -16400
  0254840  lbz 3, 47(3)
  0254844  cmpwi 3, 0
  0254848  bf 2, 0x2549fc
  025484c  lis 3, 161
  0254850  addic 3, 3, 12
  0254854  lhz 4, 392(3)
  0254858  cmpwi 4, 0
  025485c  bt 2, 0x25493c
  0254860  lis 4, 161
  0254864  lis 5, 37
  0254868  lwz 4, -2344(4)
  025486c  extsw 4, 4
  0254870  std 4, 112(1)
  0254874  addi 4, 5, 17944
  0254878  lis 5, 114
  025487c  lfs 1, 0(4)
  0254880  lfs 2, -3056(5)
  0254884  lfd 3, 112(1)
  0254888  fcfid 3, 3
  025488c  frsp 3, 3
  0254890  fadds 1, 3, 1
  0254894  fmuls 1, 2, 1
  0254898  fctiwz 1, 1
  025489c  stfd 1, 112(1)
  02548a0  lfs 1, 4(4)
  02548a4  fmuls 1, 2, 1
  02548a8  lfs 3, 8(4)
  02548ac  lhz 4, 394(3)
  02548b0  mulli 6, 4, 600
  02548b4  fctidz 1, 1
  02548b8  lwz 5, 116(1)
  02548bc  cmpwi 1, 6, 0
  02548c0  subc 7, 5, 6
  02548c4  fcfid 1, 1
  02548c8  frsp 1, 1
  02548cc  fmuls 1, 1, 3
  02548d0  fctiwz 1, 1
  02548d4  stfd 1, 112(1)
  02548d8  lwz 6, 116(1)
  02548dc  cmpw 7, 6
  02548e0  bt 1, 0x2548e8
  02548e4  bf 6, 0x2548fc
  02548e8  li 3, 8001
  02548ec  li 4, 49
  02548f0  bl 0x7b310
  02548f4  nop
  02548f8  b 0x2549fc
  02548fc  lis 6, 6990
  0254900  ori 6, 6, 33205
  0254904  mulhw 6, 6, 5
  0254908  srawi 6, 6, 6
  025490c  srwi 7, 6, 31
  0254910  addc 6, 6, 7
  0254914  cmpw 6, 4
  0254918  bf 1, 0x2549fc
  025491c  lis 4, 6990
  0254920  ori 4, 4, 33205
  0254924  mulhw 4, 4, 5
  0254928  srawi 4, 4, 6
  025492c  srwi 5, 4, 31
  0254930  addc 4, 4, 5
  0254934  sth 4, 394(3)
  0254938  b 0x2549fc
  025493c  lis 5, 0
  0254940  ori 5, 5, 65535
  0254944  cmpw 4, 5
  0254948  bf 0, 0x254954
  025494c  addic 4, 4, 1
  0254950  sth 4, 392(3)
  0254954  lis 4, 161
  0254958  lis 5, 114
  025495c  lwz 4, -2344(4)
  0254960  extsw 4, 4
  0254964  std 4, 112(1)
  0254968  lis 4, 37
  025496c  addi 4, 4, 17944
  0254970  lfs 1, 0(4)
  0254974  lfs 2, -3056(5)
  0254978  lfd 3, 112(1)
  025497c  lis 4, 6990
  0254980  fcfid 3, 3
  0254984  ori 5, 4, 33205
  0254988  lhz 6, 394(3)
  025498c  frsp 3, 3
  0254990  fadds 1, 3, 1
  0254994  fmuls 1, 2, 1
  0254998  fctiwz 1, 1
  025499c  stfd 1, 112(1)
  02549a0  lwz 4, 116(1)
  02549a4  mulhw 5, 5, 4
  02549a8  srawi 5, 5, 6
  02549ac  srwi 7, 5, 31
  02549b0  addc 5, 5, 7
  02549b4  cmpw 5, 6
  02549b8  bf 1, 0x2549d8
  02549bc  lis 5, 6990
  02549c0  ori 5, 5, 33205
  02549c4  mulhw 4, 5, 4
  02549c8  srawi 4, 4, 6
  02549cc  srwi 5, 4, 31
  02549d0  addc 4, 4, 5
  02549d4  sth 4, 394(3)
  02549d8  lis 4, 151
  02549dc  lwz 7, 396(3)
  02549e0  li 5, 1
  02549e4  lis 6, -32768
  02549e8  lwz 4, -25488(4)
  02549ec  slw 4, 5, 4
  02549f0  or 4, 7, 4
  02549f4  or 4, 4, 6
  02549f8  stw 4, 396(3)
  02549fc  lbz 3, 28(30)
  0254a00  cmpwi 3, 0
  0254a04  bf 2, 0x254b24
  0254a08  lis 3, 151
  0254a0c  lwz 4, 4(31)
  0254a10  addic 3, 3, -25376
  0254a14  extsw 4, 4
  0254a18  addic 3, 3, 128
  0254a1c  bl 0x110b70
  0254a20  nop
  0254a24  cmpwi 3, 0
  0254a28  bt 2, 0x254b24
  0254a2c  lis 3, 151
  0254a30  addic 3, 3, -13812
  0254a34  lbz 3, 10(3)
  0254a38  cmpwi 3, 0
  0254a3c  bt 2, 0x254b24
  0254a40  lis 3, 161
  0254a44  lis 4, 37
  0254a48  lwz 3, -2344(3)
  0254a4c  extsw 3, 3
  0254a50  std 3, 112(1)
  0254a54  addi 3, 4, 17944
  0254a58  lis 4, 114
  0254a5c  lfs 1, 0(3)
  0254a60  lfs 2, -3056(4)
  0254a64  lfd 3, 112(1)
  0254a68  fcfid 3, 3
  0254a6c  frsp 3, 3
  0254a70  fadds 1, 3, 1
  0254a74  fmuls 1, 2, 1
  0254a78  fctiwz 1, 1
  0254a7c  stfd 1, 112(1)
  0254a80  lfs 1, 4(3)
  0254a84  fmuls 1, 2, 1
  0254a88  lfs 3, 8(3)
  0254a8c  lis 3, 161
  0254a90  lwz 5, 116(1)
  0254a94  addic 3, 3, 12
  0254a98  fctidz 1, 1
  0254a9c  lhz 4, 402(3)
  0254aa0  mulli 6, 4, 600
  0254aa4  fcfid 1, 1
  0254aa8  subc 7, 5, 6
  0254aac  cmpwi 1, 6, 0
  0254ab0  frsp 1, 1
  0254ab4  fmuls 1, 1, 3
  0254ab8  fctiwz 1, 1
  0254abc  stfd 1, 112(1)
  0254ac0  lwz 6, 116(1)
  0254ac4  cmpw 7, 6
  0254ac8  bt 1, 0x254ad0
  0254acc  bf 6, 0x254ae4
  0254ad0  li 3, 8002
  0254ad4  li 4, 50
  0254ad8  bl 0x7b310
  0254adc  nop
  0254ae0  b 0x254d18
  0254ae4  lis 6, 6990
  0254ae8  ori 6, 6, 33205
  0254aec  mulhw 6, 6, 5
  0254af0  srawi 6, 6, 6
  0254af4  srwi 7, 6, 31
  0254af8  addc 6, 6, 7
  0254afc  cmpw 6, 4
  0254b00  bf 1, 0x254d18
  0254b04  lis 4, 6990
  0254b08  ori 4, 4, 33205
  0254b0c  mulhw 4, 4, 5
  0254b10  srawi 4, 4, 6
  0254b14  srwi 5, 4, 31
  0254b18  addc 4, 4, 5
  0254b1c  sth 4, 402(3)
  0254b20  b 0x254d18
  0254b24  lbz 3, 28(30)
  0254b28  cmpwi 3, 0
  0254b2c  bt 2, 0x254d18
  0254b30  lis 3, 151
  0254b34  lwz 4, 4(31)
  0254b38  addic 3, 3, -25376
  0254b3c  extsw 4, 4
  0254b40  addic 3, 3, 128
  0254b44  bl 0x110b70
  0254b48  nop
  0254b4c  cmpwi 3, 0
  0254b50  bt 2, 0x254d18
  0254b54  lis 3, 151
  0254b58  addic 3, 3, -13812
  0254b5c  lbz 3, 10(3)
  0254b60  cmpwi 3, 0
  0254b64  bt 2, 0x254d18
  0254b68  lis 3, 161
  0254b6c  addic 3, 3, 12
  0254b70  lhz 4, 896(3)
  0254b74  cmpwi 4, 0
  0254b78  bt 2, 0x254c58
  0254b7c  lis 4, 161
  0254b80  lis 5, 114
  0254b84  lwz 4, -2344(4)
  0254b88  extsw 4, 4
  0254b8c  std 4, 112(1)
  0254b90  lis 4, 37
  0254b94  addi 4, 4, 17944
  0254b98  lfs 1, 0(4)
  0254b9c  lfs 2, -3056(5)
  0254ba0  lfd 3, 112(1)
  0254ba4  fcfid 3, 3
  0254ba8  frsp 3, 3
  0254bac  fadds 1, 3, 1
  0254bb0  fmuls 1, 2, 1
  0254bb4  fctiwz 1, 1
  0254bb8  stfd 1, 112(1)
  0254bbc  lfs 1, 4(4)
  0254bc0  fmuls 1, 2, 1
  0254bc4  lfs 3, 8(4)
  0254bc8  lhz 4, 898(3)
  0254bcc  mulli 6, 4, 600
  0254bd0  fctidz 1, 1
  0254bd4  lwz 5, 116(1)
  0254bd8  cmpwi 1, 6, 0
  0254bdc  subc 7, 5, 6
  0254be0  fcfid 1, 1
  0254be4  frsp 1, 1
  0254be8  fmuls 1, 1, 3
  0254bec  fctiwz 1, 1
  0254bf0  stfd 1, 112(1)
  0254bf4  lwz 6, 116(1)
  0254bf8  cmpw 7, 6
  0254bfc  bt 1, 0x254c04
  0254c00  bf 6, 0x254c18
  0254c04  li 3, 8005
  0254c08  li 4, 112
  0254c0c  bl 0x7b310
  0254c10  nop
  0254c14  b 0x254d18
  0254c18  lis 6, 6990
  0254c1c  ori 6, 6, 33205
  0254c20  mulhw 6, 6, 5
  0254c24  srawi 6, 6, 6
  0254c28  srwi 7, 6, 31
  0254c2c  addc 6, 6, 7
  0254c30  cmpw 6, 4
  0254c34  bf 1, 0x254d18
  0254c38  lis 4, 6990
  0254c3c  ori 4, 4, 33205
  0254c40  mulhw 4, 4, 5
  0254c44  srawi 4, 4, 6
  0254c48  srwi 5, 4, 31
  0254c4c  addc 4, 4, 5
  0254c50  sth 4, 898(3)
  0254c54  b 0x254d18
  0254c58  lis 5, 0
  0254c5c  ori 5, 5, 65535
  0254c60  cmpw 4, 5
  0254c64  bf 0, 0x254c70
  0254c68  addic 4, 4, 1
  0254c6c  sth 4, 896(3)
  0254c70  lis 4, 161
  0254c74  lis 5, 37
  0254c78  lwz 4, -2344(4)
  0254c7c  extsw 4, 4
  0254c80  std 4, 112(1)
  0254c84  addi 4, 5, 17944
  0254c88  lis 5, 114
  0254c8c  lfs 1, 0(4)
  0254c90  lfs 2, -3056(5)
  0254c94  lfd 3, 112(1)
  0254c98  fcfid 3, 3
  0254c9c  lis 4, 6990
  0254ca0  lhz 6, 898(3)
  0254ca4  ori 5, 4, 33205
  0254ca8  frsp 3, 3
  0254cac  fadds 1, 3, 1
  0254cb0  fmuls 1, 2, 1
  0254cb4  fctiwz 1, 1
  0254cb8  stfd 1, 112(1)
  0254cbc  lwz 4, 116(1)
  0254cc0  mulhw 5, 5, 4
  0254cc4  srawi 5, 5, 6
  0254cc8  srwi 7, 5, 31
  0254ccc  addc 5, 5, 7
  0254cd0  cmpw 5, 6
  0254cd4  bf 1, 0x254cf4
  0254cd8  lis 5, 6990
  0254cdc  ori 5, 5, 33205
  0254ce0  mulhw 4, 5, 4
  0254ce4  srawi 4, 4, 6
  0254ce8  srwi 5, 4, 31
  0254cec  addc 4, 4, 5
  0254cf0  sth 4, 898(3)
  0254cf4  lis 4, 151
  0254cf8  lwz 7, 900(3)
  0254cfc  li 5, 1
  0254d00  lis 6, -32768
  0254d04  lwz 4, -25488(4)
  0254d08  slw 4, 5, 4
  0254d0c  or 4, 7, 4
  0254d10  or 4, 4, 6
  0254d14  stw 4, 900(3)
  0254d18  lis 3, 37
  0254d1c  lis 4, 151
  0254d20  addi 3, 3, 17944
  0254d24  addic 4, 4, -25376
  0254d28  lfs 1, 12(3)
  0254d2c  lfs 2, 664(4)
  0254d30  lfs 3, 16(3)
  0254d34  fmuls 1, 2, 1
  0254d38  fcmpu 0, 1, 3
  0254d3c  cror 6, 1, 2
  0254d40  bt 6, 0x254d58
  0254d44  lis 5, 161
  0254d48  lis 3, 0
  0254d4c  addic 5, 5, 12
  0254d50  ori 3, 3, 65535
  0254d54  sth 3, 896(5)
  0254d58  lis 3, 151
  0254d5c  addic 3, 3, -16400
  0254d60  lbz 5, 47(3)
  0254d64  cmpwi 5, 0
  0254d68  bf 2, 0x254d80
  0254d6c  lwz 4, 8332(4)
  0254d70  cmpwi 4, 15
  0254d74  bf 2, 0x254d80
  0254d78  li 4, 1
  0254d7c  stb 4, 47(3)
  0254d80  ld 0, 160(1)
  0254d84  mtlr 0
  0254d88  ld 30, 128(1)
  0254d8c  ld 31, 136(1)
  0254d90  addi 1, 1, 144
  0254d94  blr

M1349_00254d98:   # 0x254d98, 0x14 bytes
  0254d98  lis 3, 122
  0254d9c  lis 4, 1
  0254da0  addic 3, 3, -17996
  0254da4  stw 4, 72(3)
  0254da8  blr

M1349_00254db8:   # 0x254db8, 0x44 bytes
  0254db8  stdu 1, -112(1)
  0254dbc  mflr 0
  0254dc0  std 0, 128(1)
  0254dc4  lis 4, 37
  0254dc8  lis 5, 114
  0254dcc  addi 4, 4, 19888
  0254dd0  addic 3, 3, 64
  0254dd4  li 6, 0
  0254dd8  lfs 2, 0(4)
  0254ddc  lfs 3, -3052(5)
  0254de0  fmuls 2, 3, 2
  0254de4  bl 0x109ec0
  0254de8  nop
  0254dec  ld 0, 128(1)
  0254df0  mtlr 0
  0254df4  addi 1, 1, 112
  0254df8  blr

M1349_00254e00:   # 0x254e00, 0x90 bytes
  0254e00  stdu 1, -144(1)
  0254e04  mflr 0
  0254e08  std 0, 160(1)
  0254e0c  stfd 31, 136(1)
  0254e10  std 31, 128(1)
  0254e14  ori 31, 3, 0
  0254e18  lis 4, 37
  0254e1c  std 30, 120(1)
  0254e20  lis 3, 165
  0254e24  addi 30, 4, 19964
  0254e28  addic 3, 3, 7136
  0254e2c  lwz 5, 120(31)
  0254e30  addic 6, 31, 16
  0254e34  lfs 31, 64(31)
  0254e38  li 8, 0
  0254e3c  addic 7, 31, 64
  0254e40  lwz 4, 4(5)
  0254e44  lfs 1, 8(5)
  0254e48  slwi 4, 4, 2
  0254e4c  li 5, 0
  0254e50  extsw 4, 4
  0254e54  lwzx 3, 3, 4
  0254e58  bl 0x117390
  0254e5c  nop
  0254e60  stfs 31, 64(31)
  0254e64  lfs 1, 0(30)
  0254e68  lfs 2, 24(31)
  0254e6c  fsubs 1, 2, 1
  0254e70  stfs 1, 24(31)
  0254e74  ld 0, 160(1)
  0254e78  mtlr 0
  0254e7c  lfd 31, 136(1)
  0254e80  ld 30, 120(1)
  0254e84  ld 31, 128(1)
  0254e88  addi 1, 1, 144
  0254e8c  blr
