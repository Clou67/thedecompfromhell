# game/update/moby890.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M890_004a2b7c:   # 0x4a2b7c, 0x14 bytes
  04a2b7c  lis 3, 141
  04a2b80  lis 4, 1
  04a2b84  addic 3, 3, -16284
  04a2b88  stw 4, 72(3)
  04a2b8c  blr

M890_004a2b90:   # 0x4a2b90, 0x150 bytes
  04a2b90  stdu 1, -160(1)
  04a2b94  mflr 0
  04a2b98  std 0, 176(1)
  04a2b9c  std 31, 152(1)
  04a2ba0  lis 4, 161
  04a2ba4  ori 31, 3, 0
  04a2ba8  lwz 3, 1800(4)
  04a2bac  std 30, 144(1)
  04a2bb0  std 29, 136(1)
  04a2bb4  std 28, 128(1)
  04a2bb8  std 27, 120(1)
  04a2bbc  cmpwi 3, 2
  04a2bc0  bf 2, 0x4a2cbc
  04a2bc4  lis 3, 151
  04a2bc8  lbz 3, -16268(3)
  04a2bcc  cmpwi 3, 0
  04a2bd0  bt 2, 0x4a2cbc
  04a2bd4  lis 30, 150
  04a2bd8  addic 30, 30, -12976
  04a2bdc  lwz 4, 48(30)
  04a2be0  lwz 3, 52(30)
  04a2be4  cmpwi 4, 2
  04a2be8  cmpwi 1, 3, 490
  04a2bec  crorc 2, 4, 2
  04a2bf0  bt 2, 0x4a2c0c
  04a2bf4  cmpwi 3, 613
  04a2bf8  bt 1, 0x4a2c0c
  04a2bfc  lis 5, -16820
  04a2c00  lis 6, 161
  04a2c04  ori 5, 5, 52429
  04a2c08  stw 5, 24368(6)
  04a2c0c  cmpwi 4, 2
  04a2c10  bf 2, 0x4a2c34
  04a2c14  cmpwi 3, 750
  04a2c18  bt 0, 0x4a2c34
  04a2c1c  cmpwi 3, 800
  04a2c20  bt 1, 0x4a2c34
  04a2c24  lis 3, 15948
  04a2c28  lis 4, 161
  04a2c2c  ori 3, 3, 52429
  04a2c30  stw 3, 24368(4)
  04a2c34  lhz 3, 68(30)
  04a2c38  li 27, 0
  04a2c3c  extsh 4, 3
  04a2c40  cmpwi 4, 0
  04a2c44  bf 1, 0x4a2cbc
  04a2c48  lis 28, 162
  04a2c4c  ori 29, 30, 0
  04a2c50  addic 28, 28, -16512
  04a2c54  lwz 4, 376(29)
  04a2c58  lhz 5, 166(31)
  04a2c5c  extsh 5, 5
  04a2c60  lhz 6, 166(4)
  04a2c64  extsh 6, 6
  04a2c68  cmpw 6, 5
  04a2c6c  bf 2, 0x4a2ca8
  04a2c70  lbz 5, 1(28)
  04a2c74  cmpwi 5, 0
  04a2c78  bf 2, 0x4a2ca8
  04a2c7c  ori 3, 4, 0
  04a2c80  li 4, 0
  04a2c84  ori 5, 28, 0
  04a2c88  bl 0xf0ea8
  04a2c8c  nop
  04a2c90  lis 4, 141
  04a2c94  lhz 3, 68(30)
  04a2c98  lfs 1, -16172(4)
  04a2c9c  stfs 1, 32(28)
  04a2ca0  stfs 1, 36(28)
  04a2ca4  stfs 1, 40(28)
  04a2ca8  extsh 4, 3
  04a2cac  addic 27, 27, 1
  04a2cb0  addic 29, 29, 4
  04a2cb4  cmpw 27, 4
  04a2cb8  bt 0, 0x4a2c54
  04a2cbc  ld 0, 176(1)
  04a2cc0  mtlr 0
  04a2cc4  ld 27, 120(1)
  04a2cc8  ld 28, 128(1)
  04a2ccc  ld 29, 136(1)
  04a2cd0  ld 30, 144(1)
  04a2cd4  ld 31, 152(1)
  04a2cd8  addi 1, 1, 160
  04a2cdc  blr

UpdateMoby_890:   # 0x4a2d38, 0xe90 bytes
  04a2d38  stdu 1, -352(1)
  04a2d3c  mflr 0
  04a2d40  std 0, 368(1)
  04a2d44  stfd 27, 312(1)
  04a2d48  stfd 28, 320(1)
  04a2d4c  stfd 29, 328(1)
  04a2d50  stfd 30, 336(1)
  04a2d54  stfd 31, 344(1)
  04a2d58  std 31, 304(1)
  04a2d5c  lis 4, 161
  04a2d60  std 30, 296(1)
  04a2d64  ori 31, 3, 0
  04a2d68  std 28, 280(1)
  04a2d6c  lwz 30, 120(3)
  04a2d70  addic 28, 30, 128
  04a2d74  lwz 3, 1800(4)
  04a2d78  std 29, 288(1)
  04a2d7c  std 27, 272(1)
  04a2d80  std 26, 264(1)
  04a2d84  std 25, 256(1)
  04a2d88  cmpwi 3, 2
  04a2d8c  bf 2, 0x4a2e84
  04a2d90  lis 3, 151
  04a2d94  lbz 3, -16268(3)
  04a2d98  cmpwi 3, 0
  04a2d9c  bt 2, 0x4a2e84
  04a2da0  lis 27, 150
  04a2da4  addic 27, 27, -12976
  04a2da8  lwz 3, 48(27)
  04a2dac  lwz 4, 52(27)
  04a2db0  cmpwi 3, 2
  04a2db4  cmpwi 1, 4, 490
  04a2db8  crorc 2, 4, 2
  04a2dbc  bt 2, 0x4a2dd8
  04a2dc0  cmpwi 4, 613
  04a2dc4  bt 1, 0x4a2dd8
  04a2dc8  lis 5, -16820
  04a2dcc  lis 6, 161
  04a2dd0  ori 5, 5, 52429
  04a2dd4  stw 5, 24368(6)
  04a2dd8  cmpwi 3, 2
  04a2ddc  bf 2, 0x4a2e00
  04a2de0  cmpwi 4, 750
  04a2de4  bt 0, 0x4a2e00
  04a2de8  cmpwi 4, 800
  04a2dec  bt 1, 0x4a2e00
  04a2df0  lis 3, 15948
  04a2df4  lis 4, 161
  04a2df8  ori 3, 3, 52429
  04a2dfc  stw 3, 24368(4)
  04a2e00  lhz 4, 68(27)
  04a2e04  li 29, 0
  04a2e08  extsh 3, 4
  04a2e0c  cmpwi 3, 0
  04a2e10  bf 1, 0x4a2e84
  04a2e14  lis 26, 162
  04a2e18  ori 25, 27, 0
  04a2e1c  addic 26, 26, -16512
  04a2e20  lwz 3, 376(25)
  04a2e24  lhz 5, 166(31)
  04a2e28  extsh 5, 5
  04a2e2c  lhz 6, 166(3)
  04a2e30  extsh 6, 6
  04a2e34  cmpw 6, 5
  04a2e38  bf 2, 0x4a2e70
  04a2e3c  lbz 5, 1(26)
  04a2e40  cmpwi 5, 0
  04a2e44  bf 2, 0x4a2e70
  04a2e48  li 4, 0
  04a2e4c  ori 5, 26, 0
  04a2e50  bl 0xf0ea8
  04a2e54  nop
  04a2e58  lis 3, 141
  04a2e5c  lhz 4, 68(27)
  04a2e60  lfs 1, -16172(3)
  04a2e64  stfs 1, 32(26)
  04a2e68  stfs 1, 36(26)
  04a2e6c  stfs 1, 40(26)
  04a2e70  extsh 3, 4
  04a2e74  addic 29, 29, 1
  04a2e78  addic 25, 25, 4
  04a2e7c  cmpw 29, 3
  04a2e80  bt 0, 0x4a2e20
  04a2e84  lbz 3, 32(31)
  04a2e88  cmpwi 3, 0
  04a2e8c  cmpwi 1, 3, -1
  04a2e90  cmpwi 6, 3, 1
  04a2e94  cmpwi 7, 3, 2
  04a2e98  bt 1, 0x4a2ea4
  04a2e9c  bf 5, 0x4a3310
  04a2ea0  b 0x4a2eb0
  04a2ea4  bf 25, 0x4a300c
  04a2ea8  bf 29, 0x4a30a4
  04a2eac  b 0x4a3310
  04a2eb0  lis 3, 151
  04a2eb4  addic 3, 3, -16064
  04a2eb8  lbz 3, 12(3)
  04a2ebc  cmpwi 3, 0
  04a2ec0  bt 2, 0x4a2f30
  04a2ec4  lwz 30, 212(30)
  04a2ec8  cmpwi 30, -1
  04a2ecc  bt 2, 0x4a2f20
  04a2ed0  lis 3, 164
  04a2ed4  slwi 4, 30, 8
  04a2ed8  lwz 3, -28512(3)
  04a2edc  addc 30, 3, 4
  04a2ee0  clrldi 30, 30, 32
  04a2ee4  lhz 3, 166(30)
  04a2ee8  cmpwi 3, 1012
  04a2eec  bf 2, 0x4a2f20
  04a2ef0  lwz 9, 120(30)
  04a2ef4  li 8, 1
  04a2ef8  lis 3, 165
  04a2efc  li 4, 4
  04a2f00  addic 7, 3, 13584
  04a2f04  ori 5, 31, 0
  04a2f08  li 6, 2
  04a2f0c  stw 8, 140(9)
  04a2f10  addic 3, 9, 140
  04a2f14  addic 7, 7, 80
  04a2f18  bl 0x1523d8
  04a2f1c  nop
  04a2f20  ori 3, 31, 0
  04a2f24  bl 0xefb38
  04a2f28  nop
  04a2f2c  b 0x4a3b88
  04a2f30  lis 3, 151
  04a2f34  lis 4, 161
  04a2f38  lbz 5, 176(31)
  04a2f3c  addic 4, 4, -13692
  04a2f40  lwz 3, -25488(3)
  04a2f44  addc 4, 5, 4
  04a2f48  slwi 3, 3, 4
  04a2f4c  clrldi 4, 4, 32
  04a2f50  extsw 3, 3
  04a2f54  lbzx 3, 4, 3
  04a2f58  cmpwi 3, 255
  04a2f5c  bf 2, 0x4a2fbc
  04a2f60  lwz 3, 212(30)
  04a2f64  cmpwi 3, -1
  04a2f68  bt 2, 0x4a2fbc
  04a2f6c  lis 4, 164
  04a2f70  slwi 3, 3, 8
  04a2f74  lwz 4, -28512(4)
  04a2f78  addc 3, 4, 3
  04a2f7c  clrldi 3, 3, 32
  04a2f80  lhz 4, 166(3)
  04a2f84  cmpwi 4, 1012
  04a2f88  bf 2, 0x4a2fbc
  04a2f8c  lwz 9, 120(3)
  04a2f90  li 8, 1
  04a2f94  lis 6, 165
  04a2f98  li 4, 4
  04a2f9c  addic 7, 6, 13584
  04a2fa0  ori 5, 31, 0
  04a2fa4  li 6, 2
  04a2fa8  stw 8, 140(9)
  04a2fac  addic 3, 9, 140
  04a2fb0  addic 7, 7, 80
  04a2fb4  bl 0x1523d8
  04a2fb8  nop
  04a2fbc  lis 3, 151
  04a2fc0  lis 4, 102
  04a2fc4  addic 3, 3, -25376
  04a2fc8  li 6, 1
  04a2fcc  addic 7, 4, -30544
  04a2fd0  li 5, 5
  04a2fd4  ori 4, 28, 0
  04a2fd8  lwz 8, 8320(3)
  04a2fdc  ori 3, 31, 0
  04a2fe0  ld 8, 56(8)
  04a2fe4  stb 6, 32(31)
  04a2fe8  std 8, 56(31)
  04a2fec  stw 7, 160(30)
  04a2ff0  stw 5, 200(30)
  04a2ff4  bl 0x4d3720
  04a2ff8  nop
  04a2ffc  ori 3, 31, 0
  04a3000  bl 0x106308
  04a3004  nop
  04a3008  b 0x4a3310
  04a300c  ori 3, 31, 0
  04a3010  ori 4, 28, 0
  04a3014  bl 0x4d3870
  04a3018  nop
  04a301c  cmpwi 3, 0
  04a3020  bt 2, 0x4a3310
  04a3024  lis 3, 74
  04a3028  addi 4, 3, 11488
  04a302c  ori 3, 31, 0
  04a3030  lfs 1, 0(4)
  04a3034  bl 0x119488
  04a3038  nop
  04a303c  li 3, 2
  04a3040  stb 3, 32(31)
  04a3044  lwz 3, 212(30)
  04a3048  cmpwi 3, -1
  04a304c  bt 2, 0x4a3310
  04a3050  lis 4, 164
  04a3054  slwi 3, 3, 8
  04a3058  lwz 4, -28512(4)
  04a305c  addc 3, 4, 3
  04a3060  clrldi 3, 3, 32
  04a3064  lhz 4, 166(3)
  04a3068  cmpwi 4, 1012
  04a306c  bf 2, 0x4a3310
  04a3070  lwz 9, 120(3)
  04a3074  li 8, 1
  04a3078  lis 5, 165
  04a307c  li 4, 4
  04a3080  addic 7, 5, 13584
  04a3084  ori 5, 31, 0
  04a3088  stw 8, 140(9)
  04a308c  addic 7, 7, 80
  04a3090  addic 3, 9, 140
  04a3094  li 6, 2
  04a3098  bl 0x1523d8
  04a309c  nop
  04a30a0  b 0x4a3310
  04a30a4  lis 3, 161
  04a30a8  lwz 3, 1800(3)
  04a30ac  cmpwi 3, 2
  04a30b0  bt 2, 0x4a32c0
  04a30b4  lhz 3, 132(30)
  04a30b8  cmpwi 3, 2
  04a30bc  bt 2, 0x4a315c
  04a30c0  lbz 3, 176(31)
  04a30c4  bl 0xf1e50
  04a30c8  nop
  04a30cc  lwz 3, 212(30)
  04a30d0  cmpwi 3, -1
  04a30d4  bt 2, 0x4a3128
  04a30d8  lis 4, 164
  04a30dc  slwi 3, 3, 8
  04a30e0  lwz 4, -28512(4)
  04a30e4  addc 3, 4, 3
  04a30e8  clrldi 3, 3, 32
  04a30ec  lhz 4, 166(3)
  04a30f0  cmpwi 4, 1012
  04a30f4  bf 2, 0x4a3128
  04a30f8  lwz 9, 120(3)
  04a30fc  li 8, 1
  04a3100  lis 5, 165
  04a3104  li 4, 4
  04a3108  addic 7, 5, 13584
  04a310c  ori 5, 31, 0
  04a3110  stw 8, 140(9)
  04a3114  addic 7, 7, 80
  04a3118  addic 3, 9, 140
  04a311c  li 6, 2
  04a3120  bl 0x1523d8
  04a3124  nop
  04a3128  lwz 3, 204(30)
  04a312c  cmpwi 3, -1
  04a3130  bt 2, 0x4a315c
  04a3134  lis 4, 165
  04a3138  slwi 3, 3, 7
  04a313c  lwz 4, 7128(4)
  04a3140  addc 3, 4, 3
  04a3144  addic 4, 3, 48
  04a3148  addic 5, 3, 112
  04a314c  clrldi 3, 4, 32
  04a3150  clrldi 4, 5, 32
  04a3154  bl 0x151e70
  04a3158  nop
  04a315c  li 3, 1
  04a3160  stb 3, 32(31)
  04a3164  lhz 3, 132(30)
  04a3168  cmpwi 3, 2
  04a316c  bf 2, 0x4a3310
  04a3170  li 3, 12
  04a3174  li 4, 1
  04a3178  bl 0x112e18
  04a317c  nop
  04a3180  li 3, 3016
  04a3184  li 4, -1
  04a3188  bl 0x112a38
  04a318c  nop
  04a3190  lwz 3, 208(30)
  04a3194  cmpwi 3, -1
  04a3198  bt 2, 0x4a325c
  04a319c  lis 4, 164
  04a31a0  slwi 5, 3, 8
  04a31a4  lis 6, 165
  04a31a8  lwz 3, -28512(4)
  04a31ac  addc 4, 3, 5
  04a31b0  addic 5, 6, 13584
  04a31b4  clrldi 4, 4, 32
  04a31b8  lhz 6, 178(4)
  04a31bc  lbz 4, 176(4)
  04a31c0  extsh 6, 6
  04a31c4  addic 4, 4, 2
  04a31c8  addc 5, 5, 6
  04a31cc  stb 4, 1108(5)
  04a31d0  lwz 6, 208(30)
  04a31d4  slwi 4, 6, 8
  04a31d8  addc 5, 3, 4
  04a31dc  clrldi 5, 5, 32
  04a31e0  lbz 4, 176(5)
  04a31e4  cmpwi 4, 255
  04a31e8  bt 2, 0x4a322c
  04a31ec  lis 7, 162
  04a31f0  addic 7, 7, 704
  04a31f4  lbzx 7, 4, 7
  04a31f8  cmpwi 7, 255
  04a31fc  bt 2, 0x4a3248
  04a3200  lis 7, 151
  04a3204  lis 8, 161
  04a3208  addic 8, 8, -13692
  04a320c  lwz 7, -25488(7)
  04a3210  addc 8, 4, 8
  04a3214  slwi 7, 7, 4
  04a3218  clrldi 8, 8, 32
  04a321c  extsw 7, 7
  04a3220  lbzx 7, 8, 7
  04a3224  cmpwi 7, 255
  04a3228  bf 2, 0x4a3248
  04a322c  lis 6, 165
  04a3230  lhz 5, 178(5)
  04a3234  addic 4, 4, 2
  04a3238  addic 6, 6, 17860
  04a323c  extsh 5, 5
  04a3240  stbx 4, 6, 5
  04a3244  lwz 6, 208(30)
  04a3248  slwi 4, 6, 8
  04a324c  addc 3, 3, 4
  04a3250  clrldi 3, 3, 32
  04a3254  bl 0xefb38
  04a3258  nop
  04a325c  lwz 3, 212(30)
  04a3260  cmpwi 3, -1
  04a3264  bt 2, 0x4a32a0
  04a3268  lis 4, 164
  04a326c  slwi 3, 3, 8
  04a3270  lwz 4, -28512(4)
  04a3274  addc 3, 4, 3
  04a3278  clrldi 3, 3, 32
  04a327c  lhz 4, 166(3)
  04a3280  cmpwi 4, 1012
  04a3284  bf 2, 0x4a32a0
  04a3288  lwz 3, 120(3)
  04a328c  li 4, 0
  04a3290  stw 4, 124(3)
  04a3294  stw 4, 140(3)
  04a3298  lwz 4, 216(30)
  04a329c  stw 4, 160(3)
  04a32a0  li 3, 0
  04a32a4  li 4, -1
  04a32a8  bl 0xe8aa4
  04a32ac  nop
  04a32b0  ori 3, 31, 0
  04a32b4  bl 0xefb38
  04a32b8  nop
  04a32bc  b 0x4a3b88
  04a32c0  lhz 3, 182(30)
  04a32c4  cmpwi 3, 2
  04a32c8  bf 2, 0x4a3310
  04a32cc  lwz 3, 212(30)
  04a32d0  cmpwi 3, -1
  04a32d4  bt 2, 0x4a3310
  04a32d8  lis 4, 164
  04a32dc  slwi 3, 3, 8
  04a32e0  lwz 4, -28512(4)
  04a32e4  addc 3, 4, 3
  04a32e8  clrldi 3, 3, 32
  04a32ec  lhz 4, 166(3)
  04a32f0  cmpwi 4, 1012
  04a32f4  bf 2, 0x4a3310
  04a32f8  lwz 3, 120(3)
  04a32fc  li 4, 0
  04a3300  stw 4, 124(3)
  04a3304  stw 4, 140(3)
  04a3308  lwz 4, 216(30)
  04a330c  stw 4, 160(3)
  04a3310  lis 3, 74
  04a3314  lbz 4, 83(31)
  04a3318  addi 3, 3, 11488
  04a331c  cmpwi 4, 0
  04a3320  lfs 31, 4(3)
  04a3324  bf 2, 0x4a3b20
  04a3328  lis 29, 151
  04a332c  lfs 2, 20(31)
  04a3330  lfs 1, 16(31)
  04a3334  addic 29, 29, -25376
  04a3338  lis 3, 74
  04a333c  lfs 3, 132(29)
  04a3340  lfs 4, 128(29)
  04a3344  fsubs 3, 2, 3
  04a3348  fsubs 4, 1, 4
  04a334c  addi 3, 3, 11488
  04a3350  fmuls 3, 3, 3
  04a3354  fmadds 3, 4, 4, 3
  04a3358  lfs 4, 8(3)
  04a335c  fsqrts 3, 3
  04a3360  fcmpu 0, 3, 4
  04a3364  cror 6, 1, 2
  04a3368  bt 6, 0x4a35d8
  04a336c  lfs 3, 208(29)
  04a3370  lfs 4, 212(29)
  04a3374  lis 3, 74
  04a3378  fsubs 1, 3, 1
  04a337c  fsubs 2, 4, 2
  04a3380  addi 3, 3, 11488
  04a3384  lis 4, 115
  04a3388  addic 4, 4, 22784
  04a338c  fabs 5, 1
  04a3390  fabs 6, 2
  04a3394  stfs 1, 136(1)
  04a3398  stfs 2, 140(1)
  04a339c  lfs 3, 72(31)
  04a33a0  fsubs 1, 5, 6
  04a33a4  stfs 1, 144(1)
  04a33a8  lwz 5, 136(1)
  04a33ac  lfs 4, 12(3)
  04a33b0  lfs 1, 136(1)
  04a33b4  lwz 3, 140(1)
  04a33b8  lfs 2, 140(1)
  04a33bc  fabs 1, 1
  04a33c0  lwz 6, 144(1)
  04a33c4  rlwinm 3, 3, 3, 29, 29
  04a33c8  fabs 7, 2
  04a33cc  lfs 2, 144(1)
  04a33d0  rlwimi 3, 6, 2, 30, 30
  04a33d4  fsub 8, 2, 4
  04a33d8  rlwimi 3, 5, 4, 28, 28
  04a33dc  fsub 9, 2, 4
  04a33e0  ori 5, 4, 0
  04a33e4  rlwimi 5, 3, 2, 26, 28
  04a33e8  slwi 3, 3, 2
  04a33ec  clrldi 5, 5, 32
  04a33f0  fsel 6, 8, 1, 6
  04a33f4  lfsx 1, 4, 3
  04a33f8  lfs 2, 4(5)
  04a33fc  fsel 5, 9, 7, 5
  04a3400  fcmpu 0, 6, 4
  04a3404  bt 1, 0x4a340c
  04a3408  b 0x4a352c
  04a340c  fsubs 7, 5, 6
  04a3410  fadds 5, 5, 6
  04a3414  addic 3, 1, 16
  04a3418  li 6, 2
  04a341c  addic 5, 3, 212
  04a3420  addic 4, 3, 196
  04a3424  mtctr 6
  04a3428  fdivs 5, 7, 5
  04a342c  fmuls 6, 5, 5
  04a3430  stfs 5, 224(1)
  04a3434  stfs 5, 216(1)
  04a3438  stfs 5, 220(1)
  04a343c  stfs 5, 212(1)
  04a3440  lfs 8, 224(1)
  04a3444  lfs 9, 216(1)
  04a3448  lfs 10, 220(1)
  04a344c  fmuls 7, 6, 6
  04a3450  fmuls 9, 9, 6
  04a3454  fmuls 8, 8, 7
  04a3458  fmuls 5, 7, 7
  04a345c  fmuls 7, 10, 7
  04a3460  stfs 9, 216(1)
  04a3464  fmuls 6, 8, 6
  04a3468  stfs 7, 220(1)
  04a346c  stfs 6, 224(1)
  04a3470  lfs 6, 196(3)
  04a3474  fmuls 6, 6, 5
  04a3478  stfs 6, 212(3)
  04a347c  lfs 6, 4(4)
  04a3480  addic 4, 4, 8
  04a3484  fmuls 6, 6, 5
  04a3488  addic 3, 3, 8
  04a348c  stfs 6, 4(5)
  04a3490  addic 5, 5, 8
  04a3494  bdnz 0x4a3470
  04a3498  li 5, 4
  04a349c  ori 3, 1, 0
  04a34a0  mtctr 5
  04a34a4  lis 4, 115
  04a34a8  addic 5, 3, 212
  04a34ac  addic 4, 4, 22752
  04a34b0  ori 7, 5, 0
  04a34b4  lfs 5, 212(3)
  04a34b8  lfs 6, 0(4)
  04a34bc  fmuls 5, 5, 6
  04a34c0  lfs 6, 4(4)
  04a34c4  addic 4, 4, 8
  04a34c8  stfs 5, 212(3)
  04a34cc  lfs 5, 4(5)
  04a34d0  addic 3, 3, 8
  04a34d4  fmuls 5, 5, 6
  04a34d8  stfs 5, 4(5)
  04a34dc  addic 5, 5, 8
  04a34e0  bdnz 0x4a34b4
  04a34e4  ori 3, 1, 0
  04a34e8  mtctr 6
  04a34ec  lfs 5, 212(3)
  04a34f0  fadds 4, 4, 5
  04a34f4  addic 3, 3, 16
  04a34f8  lfs 5, 4(7)
  04a34fc  lfs 6, 8(7)
  04a3500  lfs 7, 12(7)
  04a3504  addic 7, 7, 16
  04a3508  fadds 4, 4, 5
  04a350c  fadds 4, 4, 6
  04a3510  fadds 4, 4, 7
  04a3514  bdnz 0x4a34ec
  04a3518  lis 3, 74
  04a351c  addi 3, 3, 11488
  04a3520  lfs 5, 16(3)
  04a3524  fadds 4, 4, 5
  04a3528  fmadds 4, 4, 1, 2
  04a352c  fmr 1, 3
  04a3530  fmr 2, 4
  04a3534  bl 0x5026a0
  04a3538  nop
  04a353c  lis 3, 74
  04a3540  addi 3, 3, 11488
  04a3544  lfs 2, 20(3)
  04a3548  fcmpu 0, 1, 2
  04a354c  cror 6, 1, 2
  04a3550  bt 6, 0x4a35d8
  04a3554  lfs 1, 260(29)
  04a3558  lfs 2, 256(29)
  04a355c  fmuls 1, 1, 1
  04a3560  lfs 3, 264(29)
  04a3564  lis 3, 74
  04a3568  addi 3, 3, 11488
  04a356c  fmadds 1, 2, 2, 1
  04a3570  lfs 2, 24(3)
  04a3574  fmadds 1, 3, 3, 1
  04a3578  fsqrts 1, 1
  04a357c  fcmpu 0, 1, 2
  04a3580  cror 6, 0, 2
  04a3584  bt 6, 0x4a35c8
  04a3588  lis 3, 74
  04a358c  vspltisw 2, -1
  04a3590  li 5, 28
  04a3594  addi 3, 3, 11488
  04a3598  lis 4, 114
  04a359c  li 6, -3056
  04a35a0  vslw 2, 2, 2
  04a35a4  <unknown>
  04a35a8  li 3, 496
  04a35ac  vspltw 3, 3, 0
  04a35b0  <unknown>
  04a35b4  vmaddfp 2, 4, 3, 2
  04a35b8  vctsxs 2, 2, 0
  04a35bc  vspltw 2, 2, 0
  04a35c0  stvewx 2, 3, 30
  04a35c4  b 0x4a360c
  04a35c8  addic 3, 30, 496
  04a35cc  bl 0x4fff60
  04a35d0  nop
  04a35d4  b 0x4a360c
  04a35d8  lwz 3, 496(30)
  04a35dc  cmpwi 3, 0
  04a35e0  bt 2, 0x4a360c
  04a35e4  li 3, 0
  04a35e8  stw 3, 496(30)
  04a35ec  lfs 1, 208(29)
  04a35f0  stfs 1, 480(30)
  04a35f4  lfs 1, 212(29)
  04a35f8  stfs 1, 484(30)
  04a35fc  lfs 1, 216(29)
  04a3600  stfs 1, 488(30)
  04a3604  lfs 1, 220(29)
  04a3608  stfs 1, 492(30)
  04a360c  addic 3, 30, 500
  04a3610  bl 0x4fff60
  04a3614  nop
  04a3618  cmpwi 3, 0
  04a361c  bt 2, 0x4a36d4
  04a3620  lis 3, 74
  04a3624  addi 28, 3, 11488
  04a3628  lfs 1, 32(28)
  04a362c  lfs 2, 36(28)
  04a3630  bl 0xfcbe8
  04a3634  nop
  04a3638  lis 3, 114
  04a363c  lfs 2, -3056(3)
  04a3640  fmuls 1, 1, 2
  04a3644  bl 0x502758
  04a3648  nop
  04a364c  stw 3, 500(30)
  04a3650  lfs 1, 40(28)
  04a3654  lfs 30, 72(31)
  04a3658  lfs 2, 44(28)
  04a365c  bl 0xfcbe8
  04a3660  nop
  04a3664  lfs 29, 48(28)
  04a3668  fmuls 2, 1, 29
  04a366c  fmr 1, 30
  04a3670  bl 0x502578
  04a3674  nop
  04a3678  fmr 30, 1
  04a367c  lfs 1, 12(28)
  04a3680  lfs 2, 52(28)
  04a3684  bl 0xfcbe8
  04a3688  nop
  04a368c  fmuls 3, 1, 29
  04a3690  lfs 1, 56(28)
  04a3694  addic 3, 30, 480
  04a3698  fmr 2, 30
  04a369c  bl 0xfe610
  04a36a0  nop
  04a36a4  lfs 1, 480(30)
  04a36a8  lfs 2, 16(31)
  04a36ac  fadds 1, 1, 2
  04a36b0  lfs 2, 484(30)
  04a36b4  lfs 3, 488(30)
  04a36b8  stfs 1, 480(30)
  04a36bc  lfs 1, 20(31)
  04a36c0  fadds 1, 2, 1
  04a36c4  stfs 1, 484(30)
  04a36c8  lfs 1, 24(31)
  04a36cc  fadds 1, 3, 1
  04a36d0  stfs 1, 488(30)
  04a36d4  lwz 3, 496(30)
  04a36d8  cmpwi 3, 0
  04a36dc  bt 2, 0x4a36fc
  04a36e0  lis 3, 74
  04a36e4  lfs 30, 208(29)
  04a36e8  lfs 29, 212(29)
  04a36ec  addi 3, 3, 11488
  04a36f0  lfs 28, 216(29)
  04a36f4  lfs 31, 60(3)
  04a36f8  b 0x4a3708
  04a36fc  lfs 30, 480(30)
  04a3700  lfs 29, 484(30)
  04a3704  lfs 28, 488(30)
  04a3708  lfs 1, 16(31)
  04a370c  lis 3, 74
  04a3710  lfs 2, 20(31)
  04a3714  fsubs 30, 30, 1
  04a3718  fsubs 29, 29, 2
  04a371c  addi 3, 3, 11488
  04a3720  lis 29, 115
  04a3724  addic 29, 29, 22784
  04a3728  lfs 1, 64(3)
  04a372c  fabs 3, 30
  04a3730  fabs 4, 29
  04a3734  stfs 30, 124(1)
  04a3738  stfs 29, 128(1)
  04a373c  lfs 5, 24(31)
  04a3740  fadds 1, 5, 1
  04a3744  fsubs 2, 3, 4
  04a3748  fsubs 28, 28, 1
  04a374c  stfs 2, 132(1)
  04a3750  lwz 4, 124(1)
  04a3754  lfs 27, 12(3)
  04a3758  lfs 2, 124(1)
  04a375c  lwz 3, 128(1)
  04a3760  lfs 1, 128(1)
  04a3764  fabs 2, 2
  04a3768  lwz 5, 132(1)
  04a376c  rlwinm 3, 3, 3, 29, 29
  04a3770  fabs 5, 1
  04a3774  lfs 1, 132(1)
  04a3778  rlwimi 3, 5, 2, 30, 30
  04a377c  fsub 6, 1, 27
  04a3780  fsub 7, 1, 27
  04a3784  rlwimi 3, 4, 4, 28, 28
  04a3788  ori 4, 29, 0
  04a378c  rlwimi 4, 3, 2, 26, 28
  04a3790  slwi 3, 3, 2
  04a3794  clrldi 4, 4, 32
  04a3798  fsel 4, 6, 2, 4
  04a379c  lfsx 1, 29, 3
  04a37a0  fsel 3, 7, 5, 3
  04a37a4  lfs 2, 4(4)
  04a37a8  fcmpu 0, 4, 27
  04a37ac  bt 1, 0x4a37b8
  04a37b0  fmr 1, 27
  04a37b4  b 0x4a38dc
  04a37b8  fsubs 5, 3, 4
  04a37bc  fadds 3, 3, 4
  04a37c0  addic 3, 1, 16
  04a37c4  li 6, 2
  04a37c8  addic 4, 3, 164
  04a37cc  addic 5, 3, 180
  04a37d0  mtctr 6
  04a37d4  fdivs 3, 5, 3
  04a37d8  fmuls 4, 3, 3
  04a37dc  stfs 3, 192(1)
  04a37e0  stfs 3, 184(1)
  04a37e4  stfs 3, 188(1)
  04a37e8  stfs 3, 180(1)
  04a37ec  lfs 6, 192(1)
  04a37f0  lfs 7, 184(1)
  04a37f4  lfs 8, 188(1)
  04a37f8  fmuls 5, 4, 4
  04a37fc  fmuls 7, 7, 4
  04a3800  fmuls 6, 6, 5
  04a3804  fmuls 3, 5, 5
  04a3808  fmuls 5, 8, 5
  04a380c  stfs 7, 184(1)
  04a3810  fmuls 4, 6, 4
  04a3814  stfs 5, 188(1)
  04a3818  stfs 4, 192(1)
  04a381c  lfs 4, 164(3)
  04a3820  fmuls 4, 4, 3
  04a3824  stfs 4, 180(3)
  04a3828  lfs 4, 4(4)
  04a382c  addic 3, 3, 8
  04a3830  addic 4, 4, 8
  04a3834  fmuls 4, 4, 3
  04a3838  stfs 4, 4(5)
  04a383c  addic 5, 5, 8
  04a3840  bdnz 0x4a381c
  04a3844  li 5, 4
  04a3848  ori 3, 1, 0
  04a384c  mtctr 5
  04a3850  lis 4, 115
  04a3854  addic 5, 3, 180
  04a3858  addic 4, 4, 22752
  04a385c  ori 7, 5, 0
  04a3860  lfs 3, 180(3)
  04a3864  lfs 4, 0(4)
  04a3868  fmuls 3, 3, 4
  04a386c  lfs 4, 4(4)
  04a3870  addic 4, 4, 8
  04a3874  stfs 3, 180(3)
  04a3878  lfs 3, 4(5)
  04a387c  addic 3, 3, 8
  04a3880  fmuls 3, 3, 4
  04a3884  stfs 3, 4(5)
  04a3888  addic 5, 5, 8
  04a388c  bdnz 0x4a3860
  04a3890  fmr 3, 27
  04a3894  ori 3, 1, 0
  04a3898  mtctr 6
  04a389c  lfs 4, 180(3)
  04a38a0  fadds 3, 3, 4
  04a38a4  addic 3, 3, 16
  04a38a8  lfs 4, 4(7)
  04a38ac  lfs 5, 8(7)
  04a38b0  lfs 6, 12(7)
  04a38b4  addic 7, 7, 16
  04a38b8  fadds 3, 3, 4
  04a38bc  fadds 3, 3, 5
  04a38c0  fadds 3, 3, 6
  04a38c4  bdnz 0x4a389c
  04a38c8  lis 3, 74
  04a38cc  addi 3, 3, 11488
  04a38d0  lfs 4, 16(3)
  04a38d4  fadds 3, 3, 4
  04a38d8  fmadds 1, 3, 1, 2
  04a38dc  lfs 2, 72(31)
  04a38e0  bl 0x5025e0
  04a38e4  nop
  04a38e8  fmuls 2, 29, 29
  04a38ec  stfs 28, 116(1)
  04a38f0  fabs 4, 28
  04a38f4  fmadds 2, 30, 30, 2
  04a38f8  fsqrts 2, 2
  04a38fc  lwz 3, 116(1)
  04a3900  lfs 3, 116(1)
  04a3904  rlwinm 3, 3, 3, 29, 29
  04a3908  fabs 3, 3
  04a390c  fabs 5, 2
  04a3910  stfs 2, 112(1)
  04a3914  fsubs 2, 5, 4
  04a3918  stfs 2, 120(1)
  04a391c  lwz 4, 112(1)
  04a3920  lfs 2, 112(1)
  04a3924  lwz 5, 120(1)
  04a3928  lfs 6, 120(1)
  04a392c  fabs 2, 2
  04a3930  rlwimi 3, 5, 2, 30, 30
  04a3934  fsub 7, 6, 27
  04a3938  fsub 6, 6, 27
  04a393c  rlwimi 3, 4, 4, 28, 28
  04a3940  ori 4, 29, 0
  04a3944  rlwimi 4, 3, 2, 26, 28
  04a3948  slwi 3, 3, 2
  04a394c  clrldi 4, 4, 32
  04a3950  fsel 4, 7, 2, 4
  04a3954  lfsx 30, 29, 3
  04a3958  lfs 2, 4(4)
  04a395c  fsel 3, 6, 3, 5
  04a3960  fcmpu 0, 4, 27
  04a3964  bt 1, 0x4a396c
  04a3968  b 0x4a3a8c
  04a396c  fsubs 5, 3, 4
  04a3970  fadds 3, 3, 4
  04a3974  addic 3, 1, 16
  04a3978  li 7, 2
  04a397c  addic 5, 3, 148
  04a3980  addic 4, 3, 132
  04a3984  mtctr 7
  04a3988  fdivs 3, 5, 3
  04a398c  fmuls 4, 3, 3
  04a3990  stfs 3, 160(1)
  04a3994  stfs 3, 152(1)
  04a3998  stfs 3, 156(1)
  04a399c  stfs 3, 148(1)
  04a39a0  lfs 6, 160(1)
  04a39a4  lfs 7, 152(1)
  04a39a8  lfs 8, 156(1)
  04a39ac  fmuls 5, 4, 4
  04a39b0  fmuls 7, 7, 4
  04a39b4  fmuls 6, 6, 5
  04a39b8  fmuls 3, 5, 5
  04a39bc  fmuls 5, 8, 5
  04a39c0  stfs 7, 152(1)
  04a39c4  fmuls 4, 6, 4
  04a39c8  stfs 5, 156(1)
  04a39cc  stfs 4, 160(1)
  04a39d0  lfs 4, 132(3)
  04a39d4  fmuls 4, 4, 3
  04a39d8  stfs 4, 148(3)
  04a39dc  lfs 4, 4(4)
  04a39e0  addic 4, 4, 8
  04a39e4  fmuls 4, 4, 3
  04a39e8  addic 3, 3, 8
  04a39ec  stfs 4, 4(5)
  04a39f0  addic 5, 5, 8
  04a39f4  bdnz 0x4a39d0
  04a39f8  li 5, 4
  04a39fc  ori 3, 1, 0
  04a3a00  mtctr 5
  04a3a04  lis 4, 115
  04a3a08  addic 5, 3, 148
  04a3a0c  addic 4, 4, 22752
  04a3a10  ori 6, 5, 0
  04a3a14  lfs 3, 148(3)
  04a3a18  lfs 4, 0(4)
  04a3a1c  fmuls 3, 3, 4
  04a3a20  lfs 4, 4(4)
  04a3a24  addic 4, 4, 8
  04a3a28  stfs 3, 148(3)
  04a3a2c  lfs 3, 4(5)
  04a3a30  addic 3, 3, 8
  04a3a34  fmuls 3, 3, 4
  04a3a38  stfs 3, 4(5)
  04a3a3c  addic 5, 5, 8
  04a3a40  bdnz 0x4a3a14
  04a3a44  ori 3, 1, 0
  04a3a48  mtctr 7
  04a3a4c  lfs 3, 148(3)
  04a3a50  lfs 4, 4(6)
  04a3a54  fadds 3, 27, 3
  04a3a58  lfs 5, 8(6)
  04a3a5c  addic 3, 3, 16
  04a3a60  lfs 27, 12(6)
  04a3a64  addic 6, 6, 16
  04a3a68  fadds 3, 3, 4
  04a3a6c  fadds 3, 3, 5
  04a3a70  fadds 27, 3, 27
  04a3a74  bdnz 0x4a3a4c
  04a3a78  lis 3, 74
  04a3a7c  addi 3, 3, 11488
  04a3a80  lfs 3, 16(3)
  04a3a84  fadds 27, 27, 3
  04a3a88  fmadds 27, 27, 30, 2
  04a3a8c  lis 3, 74
  04a3a90  fneg 27, 27
  04a3a94  addi 3, 3, 11488
  04a3a98  lfs 2, 20(3)
  04a3a9c  fcmpu 0, 1, 2
  04a3aa0  cror 6, 0, 2
  04a3aa4  bt 6, 0x4a3ab0
  04a3aa8  fmr 1, 2
  04a3aac  b 0x4a3acc
  04a3ab0  lis 3, 74
  04a3ab4  addi 3, 3, 11488
  04a3ab8  lfs 2, 68(3)
  04a3abc  fcmpu 0, 1, 2
  04a3ac0  cror 6, 1, 2
  04a3ac4  bt 6, 0x4a3acc
  04a3ac8  fmr 1, 2
  04a3acc  lis 3, 74
  04a3ad0  addi 3, 3, 11488
  04a3ad4  lfs 2, 72(3)
  04a3ad8  fcmpu 0, 27, 2
  04a3adc  cror 6, 0, 2
  04a3ae0  bt 6, 0x4a3aec
  04a3ae4  fmr 27, 2
  04a3ae8  b 0x4a3b08
  04a3aec  lis 3, 74
  04a3af0  addi 3, 3, 11488
  04a3af4  lfs 2, 76(3)
  04a3af8  fcmpu 0, 27, 2
  04a3afc  cror 6, 1, 2
  04a3b00  bt 6, 0x4a3b08
  04a3b04  fmr 27, 2
  04a3b08  lis 3, 74
  04a3b0c  addi 3, 3, 11488
  04a3b10  lfs 2, 80(3)
  04a3b14  stfs 27, 324(30)
  04a3b18  fmuls 1, 1, 2
  04a3b1c  stfs 1, 328(30)
  04a3b20  lis 3, 151
  04a3b24  lbz 3, -16268(3)
  04a3b28  cmpwi 3, 0
  04a3b2c  bt 2, 0x4a3b38
  04a3b30  lis 3, 16432
  04a3b34  stw 3, 336(30)
  04a3b38  lis 3, 74
  04a3b3c  lis 29, 114
  04a3b40  addi 3, 3, 11488
  04a3b44  addic 4, 30, 224
  04a3b48  li 5, 0
  04a3b4c  lfs 30, 84(3)
  04a3b50  lfs 2, -3060(29)
  04a3b54  ori 3, 31, 0
  04a3b58  fmuls 1, 2, 31
  04a3b5c  fmuls 2, 2, 30
  04a3b60  bl 0x1167c8
  04a3b64  nop
  04a3b68  lfs 2, -3060(29)
  04a3b6c  addic 4, 30, 352
  04a3b70  ori 3, 31, 0
  04a3b74  fmuls 1, 2, 31
  04a3b78  li 5, 1
  04a3b7c  fmuls 2, 2, 30
  04a3b80  bl 0x1167c8
  04a3b84  nop
  04a3b88  ld 0, 368(1)
  04a3b8c  mtlr 0
  04a3b90  lfd 27, 312(1)
  04a3b94  lfd 28, 320(1)
  04a3b98  lfd 29, 328(1)
  04a3b9c  lfd 30, 336(1)
  04a3ba0  lfd 31, 344(1)
  04a3ba4  ld 25, 256(1)
  04a3ba8  ld 26, 264(1)
  04a3bac  ld 27, 272(1)
  04a3bb0  ld 28, 280(1)
  04a3bb4  ld 29, 288(1)
  04a3bb8  ld 30, 296(1)
  04a3bbc  ld 31, 304(1)
  04a3bc0  addi 1, 1, 352
  04a3bc4  blr
