# sdk/fUnk3.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_00539920:   # 0x539920, 0x448 bytes
  0539920  stdu 1, -96(1)
  0539924  std 31, 88(1)
  0539928  mr 31, 1
  053992c  mr 0, 3
  0539930  mr 9, 4
  0539934  mr 11, 5
  0539938  mr 10, 6
  053993c  stw 0, 144(31)
  0539940  stw 9, 152(31)
  0539944  stw 11, 160(31)
  0539948  stw 10, 168(31)
  053994c  stw 7, 176(31)
  0539950  stw 8, 184(31)
  0539954  li 0, 0
  0539958  stw 0, 68(31)
  053995c  b 0x539a70
  0539960  li 0, 0
  0539964  stw 0, 64(31)
  0539968  b 0x539a54
  053996c  lwz 9, 152(31)
  0539970  lwz 0, 68(31)
  0539974  mullw 9, 9, 0
  0539978  lwz 0, 64(31)
  053997c  add 9, 9, 0
  0539980  lwz 0, 168(31)
  0539984  mullw 0, 9, 0
  0539988  mr 9, 0
  053998c  lwz 0, 144(31)
  0539990  add 0, 9, 0
  0539994  clrldi 9, 0, 32
  0539998  li 0, -1
  053999c  stb 0, 0(9)
  05399a0  lwz 9, 152(31)
  05399a4  lwz 0, 68(31)
  05399a8  mullw 9, 9, 0
  05399ac  lwz 0, 64(31)
  05399b0  add 9, 9, 0
  05399b4  lwz 0, 168(31)
  05399b8  mullw 0, 9, 0
  05399bc  mr 9, 0
  05399c0  lwz 0, 144(31)
  05399c4  add 9, 9, 0
  05399c8  addi 0, 9, 1
  05399cc  clrldi 9, 0, 32
  05399d0  li 0, -1
  05399d4  stb 0, 0(9)
  05399d8  lwz 9, 152(31)
  05399dc  lwz 0, 68(31)
  05399e0  mullw 9, 9, 0
  05399e4  lwz 0, 64(31)
  05399e8  add 9, 9, 0
  05399ec  lwz 0, 168(31)
  05399f0  mullw 0, 9, 0
  05399f4  mr 9, 0
  05399f8  lwz 0, 144(31)
  05399fc  add 9, 9, 0
  0539a00  addi 0, 9, 2
  0539a04  clrldi 9, 0, 32
  0539a08  li 0, -1
  0539a0c  stb 0, 0(9)
  0539a10  lwz 9, 152(31)
  0539a14  lwz 0, 68(31)
  0539a18  mullw 9, 9, 0
  0539a1c  lwz 0, 64(31)
  0539a20  add 9, 9, 0
  0539a24  lwz 0, 168(31)
  0539a28  mullw 0, 9, 0
  0539a2c  mr 9, 0
  0539a30  lwz 0, 144(31)
  0539a34  add 9, 9, 0
  0539a38  addi 0, 9, 3
  0539a3c  clrldi 9, 0, 32
  0539a40  li 0, -1
  0539a44  stb 0, 0(9)
  0539a48  lwz 9, 64(31)
  0539a4c  addi 0, 9, 1
  0539a50  stw 0, 64(31)
  0539a54  lwz 0, 64(31)
  0539a58  lwz 9, 152(31)
  0539a5c  cmplw 7, 0, 9
  0539a60  bt 28, 0x53996c
  0539a64  lwz 9, 68(31)
  0539a68  addi 0, 9, 1
  0539a6c  stw 0, 68(31)
  0539a70  lwz 0, 68(31)
  0539a74  lwz 9, 160(31)
  0539a78  cmplw 7, 0, 9
  0539a7c  bt 28, 0x539960
  0539a80  li 0, 0
  0539a84  stw 0, 60(31)
  0539a88  b 0x539d48
  0539a8c  lwz 9, 60(31)
  0539a90  lwz 0, 176(31)
  0539a94  divwu 11, 9, 0
  0539a98  lwz 0, 184(31)
  0539a9c  divwu 9, 11, 0
  0539aa0  lwz 0, 184(31)
  0539aa4  mullw 0, 9, 0
  0539aa8  sub 0, 11, 0
  0539aac  cmpwi 7, 0, 0
  0539ab0  bf 30, 0x539bbc
  0539ab4  li 0, 0
  0539ab8  stw 0, 56(31)
  0539abc  b 0x539ba8
  0539ac0  lwz 9, 152(31)
  0539ac4  lwz 0, 60(31)
  0539ac8  mullw 9, 9, 0
  0539acc  lwz 0, 56(31)
  0539ad0  add 9, 9, 0
  0539ad4  lwz 0, 168(31)
  0539ad8  mullw 0, 9, 0
  0539adc  mr 9, 0
  0539ae0  lwz 0, 144(31)
  0539ae4  add 0, 9, 0
  0539ae8  clrldi 9, 0, 32
  0539aec  li 0, -1
  0539af0  stb 0, 0(9)
  0539af4  lwz 9, 152(31)
  0539af8  lwz 0, 60(31)
  0539afc  mullw 9, 9, 0
  0539b00  lwz 0, 56(31)
  0539b04  add 9, 9, 0
  0539b08  lwz 0, 168(31)
  0539b0c  mullw 0, 9, 0
  0539b10  mr 9, 0
  0539b14  lwz 0, 144(31)
  0539b18  add 9, 9, 0
  0539b1c  addi 0, 9, 1
  0539b20  clrldi 9, 0, 32
  0539b24  li 0, 0
  0539b28  stb 0, 0(9)
  0539b2c  lwz 9, 152(31)
  0539b30  lwz 0, 60(31)
  0539b34  mullw 9, 9, 0
  0539b38  lwz 0, 56(31)
  0539b3c  add 9, 9, 0
  0539b40  lwz 0, 168(31)
  0539b44  mullw 0, 9, 0
  0539b48  mr 9, 0
  0539b4c  lwz 0, 144(31)
  0539b50  add 9, 9, 0
  0539b54  addi 0, 9, 2
  0539b58  clrldi 9, 0, 32
  0539b5c  li 0, 0
  0539b60  stb 0, 0(9)
  0539b64  lwz 9, 152(31)
  0539b68  lwz 0, 60(31)
  0539b6c  mullw 9, 9, 0
  0539b70  lwz 0, 56(31)
  0539b74  add 9, 9, 0
  0539b78  lwz 0, 168(31)
  0539b7c  mullw 0, 9, 0
  0539b80  mr 9, 0
  0539b84  lwz 0, 144(31)
  0539b88  add 9, 9, 0
  0539b8c  addi 0, 9, 3
  0539b90  clrldi 9, 0, 32
  0539b94  li 0, 0
  0539b98  stb 0, 0(9)
  0539b9c  lwz 9, 56(31)
  0539ba0  addi 0, 9, 1
  0539ba4  stw 0, 56(31)
  0539ba8  lwz 0, 56(31)
  0539bac  lwz 9, 152(31)
  0539bb0  cmplw 7, 0, 9
  0539bb4  bt 28, 0x539ac0
  0539bb8  b 0x539d3c
  0539bbc  li 0, 0
  0539bc0  stw 0, 52(31)
  0539bc4  b 0x539d2c
  0539bc8  lwz 9, 52(31)
  0539bcc  lwz 0, 176(31)
  0539bd0  divwu 11, 9, 0
  0539bd4  lwz 0, 184(31)
  0539bd8  divwu 9, 11, 0
  0539bdc  lwz 0, 184(31)
  0539be0  mullw 0, 9, 0
  0539be4  sub 0, 11, 0
  0539be8  cmpwi 7, 0, 0
  0539bec  bf 30, 0x539d14
  0539bf0  li 0, 0
  0539bf4  stw 0, 48(31)
  0539bf8  b 0x539d04
  0539bfc  lwz 9, 152(31)
  0539c00  lwz 0, 60(31)
  0539c04  mullw 9, 9, 0
  0539c08  lwz 0, 52(31)
  0539c0c  add 9, 9, 0
  0539c10  lwz 0, 48(31)
  0539c14  add 9, 9, 0
  0539c18  lwz 0, 168(31)
  0539c1c  mullw 0, 9, 0
  0539c20  mr 9, 0
  0539c24  lwz 0, 144(31)
  0539c28  add 0, 9, 0
  0539c2c  clrldi 9, 0, 32
  0539c30  li 0, -1
  0539c34  stb 0, 0(9)
  0539c38  lwz 9, 152(31)
  0539c3c  lwz 0, 60(31)
  0539c40  mullw 9, 9, 0
  0539c44  lwz 0, 52(31)
  0539c48  add 9, 9, 0
  0539c4c  lwz 0, 48(31)
  0539c50  add 9, 9, 0
  0539c54  lwz 0, 168(31)
  0539c58  mullw 0, 9, 0
  0539c5c  mr 9, 0
  0539c60  lwz 0, 144(31)
  0539c64  add 9, 9, 0
  0539c68  addi 0, 9, 1
  0539c6c  clrldi 9, 0, 32
  0539c70  li 0, 0
  0539c74  stb 0, 0(9)
  0539c78  lwz 9, 152(31)
  0539c7c  lwz 0, 60(31)
  0539c80  mullw 9, 9, 0
  0539c84  lwz 0, 52(31)
  0539c88  add 9, 9, 0
  0539c8c  lwz 0, 48(31)
  0539c90  add 9, 9, 0
  0539c94  lwz 0, 168(31)
  0539c98  mullw 0, 9, 0
  0539c9c  mr 9, 0
  0539ca0  lwz 0, 144(31)
  0539ca4  add 9, 9, 0
  0539ca8  addi 0, 9, 2
  0539cac  clrldi 9, 0, 32
  0539cb0  li 0, 0
  0539cb4  stb 0, 0(9)
  0539cb8  lwz 9, 152(31)
  0539cbc  lwz 0, 60(31)
  0539cc0  mullw 9, 9, 0
  0539cc4  lwz 0, 52(31)
  0539cc8  add 9, 9, 0
  0539ccc  lwz 0, 48(31)
  0539cd0  add 9, 9, 0
  0539cd4  lwz 0, 168(31)
  0539cd8  mullw 0, 9, 0
  0539cdc  mr 9, 0
  0539ce0  lwz 0, 144(31)
  0539ce4  add 9, 9, 0
  0539ce8  addi 0, 9, 3
  0539cec  clrldi 9, 0, 32
  0539cf0  li 0, 0
  0539cf4  stb 0, 0(9)
  0539cf8  lwz 9, 48(31)
  0539cfc  addi 0, 9, 1
  0539d00  stw 0, 48(31)
  0539d04  lwz 0, 48(31)
  0539d08  lwz 9, 176(31)
  0539d0c  cmplw 7, 0, 9
  0539d10  bt 28, 0x539bfc
  0539d14  lwz 9, 176(31)
  0539d18  lwz 0, 184(31)
  0539d1c  mullw 9, 9, 0
  0539d20  lwz 0, 52(31)
  0539d24  add 0, 0, 9
  0539d28  stw 0, 52(31)
  0539d2c  lwz 0, 52(31)
  0539d30  lwz 9, 152(31)
  0539d34  cmplw 7, 0, 9
  0539d38  bt 28, 0x539bc8
  0539d3c  lwz 9, 60(31)
  0539d40  addi 0, 9, 1
  0539d44  stw 0, 60(31)
  0539d48  lwz 0, 60(31)
  0539d4c  lwz 9, 160(31)
  0539d50  cmplw 7, 0, 9
  0539d54  bt 28, 0x539a8c
  0539d58  ld 11, 0(1)
  0539d5c  ld 31, -8(11)
  0539d60  mr 1, 11
  0539d64  blr

FUN_00539d68:   # 0x539d68, 0x3ec bytes
  0539d68  stdu 1, -208(1)
  0539d6c  mflr 0
  0539d70  std 29, 184(1)
  0539d74  std 31, 200(1)
  0539d78  std 0, 224(1)
  0539d7c  mr 31, 1
  0539d80  mr 0, 3
  0539d84  mr 9, 4
  0539d88  mr 11, 5
  0539d8c  mr 10, 6
  0539d90  stw 0, 256(31)
  0539d94  stw 9, 264(31)
  0539d98  stw 11, 272(31)
  0539d9c  stw 10, 280(31)
  0539da0  lwz 0, 264(31)
  0539da4  stw 0, 152(31)
  0539da8  lwz 9, 152(31)
  0539dac  lwz 0, 272(31)
  0539db0  mullw 9, 9, 0
  0539db4  lwz 0, 280(31)
  0539db8  mullw 0, 9, 0
  0539dbc  stw 0, 148(31)
  0539dc0  li 0, 0
  0539dc4  stw 0, 144(31)
  0539dc8  lwz 0, 264(31)
  0539dcc  clrldi 0, 0, 32
  0539dd0  mr 3, 0
  0539dd4  bl 0x5395bc
  0539dd8  mr 0, 3
  0539ddc  mr 29, 0
  0539de0  lwz 0, 272(31)
  0539de4  clrldi 0, 0, 32
  0539de8  mr 3, 0
  0539dec  bl 0x5395bc
  0539df0  mr 0, 3
  0539df4  cmplw 7, 29, 0
  0539df8  bf 29, 0x539e20
  0539dfc  lwz 0, 264(31)
  0539e00  clrldi 0, 0, 32
  0539e04  mr 3, 0
  0539e08  bl 0x5395bc
  0539e0c  mr 0, 3
  0539e10  mr 9, 0
  0539e14  addi 9, 9, 1
  0539e18  stw 9, 160(31)
  0539e1c  b 0x539e40
  0539e20  lwz 0, 272(31)
  0539e24  clrldi 0, 0, 32
  0539e28  mr 3, 0
  0539e2c  bl 0x5395bc
  0539e30  mr 0, 3
  0539e34  mr 9, 0
  0539e38  addi 9, 9, 1
  0539e3c  stw 9, 160(31)
  0539e40  lwz 0, 160(31)
  0539e44  stw 0, 140(31)
  0539e48  lwz 0, 264(31)
  0539e4c  stw 0, 136(31)
  0539e50  lwz 0, 272(31)
  0539e54  stw 0, 132(31)
  0539e58  lwz 0, 136(31)
  0539e5c  cmpwi 7, 0, 1
  0539e60  bt 30, 0x539e70
  0539e64  lwz 0, 136(31)
  0539e68  srwi 0, 0, 1
  0539e6c  stw 0, 136(31)
  0539e70  lwz 0, 132(31)
  0539e74  cmpwi 7, 0, 1
  0539e78  bt 30, 0x539e88
  0539e7c  lwz 0, 132(31)
  0539e80  srwi 0, 0, 1
  0539e84  stw 0, 132(31)
  0539e88  li 0, 1
  0539e8c  stw 0, 128(31)
  0539e90  b 0x53a128
  0539e94  li 0, 0
  0539e98  stw 0, 124(31)
  0539e9c  b 0x53a0b4
  0539ea0  li 0, 0
  0539ea4  stw 0, 120(31)
  0539ea8  b 0x53a098
  0539eac  li 0, 0
  0539eb0  stw 0, 116(31)
  0539eb4  b 0x53a07c
  0539eb8  li 0, 0
  0539ebc  stw 0, 112(31)
  0539ec0  lwz 9, 152(31)
  0539ec4  lwz 0, 124(31)
  0539ec8  mullw 9, 9, 0
  0539ecc  lwz 0, 120(31)
  0539ed0  add 9, 9, 0
  0539ed4  lwz 0, 280(31)
  0539ed8  mullw 0, 9, 0
  0539edc  slwi 9, 0, 1
  0539ee0  lwz 0, 144(31)
  0539ee4  add 9, 9, 0
  0539ee8  lwz 0, 116(31)
  0539eec  add 0, 9, 0
  0539ef0  mr 9, 0
  0539ef4  lwz 0, 256(31)
  0539ef8  add 0, 9, 0
  0539efc  clrldi 9, 0, 32
  0539f00  lbz 0, 0(9)
  0539f04  clrlwi 9, 0, 24
  0539f08  lwz 0, 112(31)
  0539f0c  add 0, 0, 9
  0539f10  stw 0, 112(31)
  0539f14  lwz 9, 152(31)
  0539f18  lwz 0, 124(31)
  0539f1c  mullw 9, 9, 0
  0539f20  lwz 0, 120(31)
  0539f24  add 0, 9, 0
  0539f28  slwi 9, 0, 1
  0539f2c  addi 9, 9, 1
  0539f30  lwz 0, 280(31)
  0539f34  mullw 9, 9, 0
  0539f38  lwz 0, 144(31)
  0539f3c  add 9, 9, 0
  0539f40  lwz 0, 116(31)
  0539f44  add 0, 9, 0
  0539f48  mr 9, 0
  0539f4c  lwz 0, 256(31)
  0539f50  add 0, 9, 0
  0539f54  clrldi 9, 0, 32
  0539f58  lbz 0, 0(9)
  0539f5c  clrlwi 9, 0, 24
  0539f60  lwz 0, 112(31)
  0539f64  add 0, 0, 9
  0539f68  stw 0, 112(31)
  0539f6c  lwz 0, 124(31)
  0539f70  slwi 9, 0, 1
  0539f74  addi 9, 9, 1
  0539f78  lwz 0, 152(31)
  0539f7c  mullw 9, 9, 0
  0539f80  lwz 0, 120(31)
  0539f84  slwi 0, 0, 1
  0539f88  add 9, 9, 0
  0539f8c  lwz 0, 280(31)
  0539f90  mullw 9, 9, 0
  0539f94  lwz 0, 144(31)
  0539f98  add 9, 9, 0
  0539f9c  lwz 0, 116(31)
  0539fa0  add 0, 9, 0
  0539fa4  mr 9, 0
  0539fa8  lwz 0, 256(31)
  0539fac  add 0, 9, 0
  0539fb0  clrldi 9, 0, 32
  0539fb4  lbz 0, 0(9)
  0539fb8  clrlwi 9, 0, 24
  0539fbc  lwz 0, 112(31)
  0539fc0  add 0, 0, 9
  0539fc4  stw 0, 112(31)
  0539fc8  lwz 0, 124(31)
  0539fcc  slwi 9, 0, 1
  0539fd0  addi 9, 9, 1
  0539fd4  lwz 0, 152(31)
  0539fd8  mullw 9, 9, 0
  0539fdc  lwz 0, 120(31)
  0539fe0  slwi 0, 0, 1
  0539fe4  add 9, 9, 0
  0539fe8  addi 9, 9, 1
  0539fec  lwz 0, 280(31)
  0539ff0  mullw 9, 9, 0
  0539ff4  lwz 0, 144(31)
  0539ff8  add 9, 9, 0
  0539ffc  lwz 0, 116(31)
  053a000  add 0, 9, 0
  053a004  mr 9, 0
  053a008  lwz 0, 256(31)
  053a00c  add 0, 9, 0
  053a010  clrldi 9, 0, 32
  053a014  lbz 0, 0(9)
  053a018  clrlwi 9, 0, 24
  053a01c  lwz 0, 112(31)
  053a020  add 0, 0, 9
  053a024  stw 0, 112(31)
  053a028  lwz 9, 152(31)
  053a02c  lwz 0, 124(31)
  053a030  mullw 9, 9, 0
  053a034  lwz 0, 120(31)
  053a038  add 9, 9, 0
  053a03c  lwz 0, 280(31)
  053a040  mullw 9, 9, 0
  053a044  lwz 0, 148(31)
  053a048  add 9, 9, 0
  053a04c  lwz 0, 116(31)
  053a050  add 0, 9, 0
  053a054  mr 9, 0
  053a058  lwz 0, 256(31)
  053a05c  add 9, 9, 0
  053a060  lwz 0, 112(31)
  053a064  srwi 0, 0, 2
  053a068  clrldi 9, 9, 32
  053a06c  stb 0, 0(9)
  053a070  lwz 9, 116(31)
  053a074  addi 0, 9, 1
  053a078  stw 0, 116(31)
  053a07c  lwz 0, 116(31)
  053a080  lwz 9, 280(31)
  053a084  cmplw 7, 0, 9
  053a088  bt 28, 0x539eb8
  053a08c  lwz 9, 120(31)
  053a090  addi 0, 9, 1
  053a094  stw 0, 120(31)
  053a098  lwz 0, 120(31)
  053a09c  lwz 9, 136(31)
  053a0a0  cmplw 7, 0, 9
  053a0a4  bt 28, 0x539eac
  053a0a8  lwz 9, 124(31)
  053a0ac  addi 0, 9, 1
  053a0b0  stw 0, 124(31)
  053a0b4  lwz 0, 124(31)
  053a0b8  lwz 9, 132(31)
  053a0bc  cmplw 7, 0, 9
  053a0c0  bt 28, 0x539ea0
  053a0c4  lwz 0, 148(31)
  053a0c8  stw 0, 144(31)
  053a0cc  lwz 9, 152(31)
  053a0d0  lwz 0, 132(31)
  053a0d4  mullw 9, 9, 0
  053a0d8  lwz 0, 280(31)
  053a0dc  mullw 9, 9, 0
  053a0e0  lwz 0, 148(31)
  053a0e4  add 0, 0, 9
  053a0e8  stw 0, 148(31)
  053a0ec  lwz 0, 136(31)
  053a0f0  cmpwi 7, 0, 1
  053a0f4  bt 30, 0x53a104
  053a0f8  lwz 0, 136(31)
  053a0fc  srwi 0, 0, 1
  053a100  stw 0, 136(31)
  053a104  lwz 0, 132(31)
  053a108  cmpwi 7, 0, 1
  053a10c  bt 30, 0x53a11c
  053a110  lwz 0, 132(31)
  053a114  srwi 0, 0, 1
  053a118  stw 0, 132(31)
  053a11c  lwz 9, 128(31)
  053a120  addi 0, 9, 1
  053a124  stw 0, 128(31)
  053a128  lwz 0, 128(31)
  053a12c  lwz 9, 140(31)
  053a130  cmplw 7, 0, 9
  053a134  bt 28, 0x539e94
  053a138  ld 11, 0(1)
  053a13c  ld 0, 16(11)
  053a140  mtlr 0
  053a144  ld 29, -24(11)
  053a148  ld 31, -8(11)
  053a14c  mr 1, 11
  053a150  blr

FUN_0053a154:   # 0x53a154, 0x3e4 bytes
  053a154  stdu 1, -144(1)
  053a158  mflr 0
  053a15c  std 31, 136(1)
  053a160  std 0, 160(1)
  053a164  mr 31, 1
  053a168  mr 0, 3
  053a16c  mr 9, 4
  053a170  mr 11, 5
  053a174  mr 10, 6
  053a178  mr 8, 7
  053a17c  stw 0, 192(31)
  053a180  stw 9, 200(31)
  053a184  stw 11, 208(31)
  053a188  stw 10, 216(31)
  053a18c  stw 8, 224(31)
  053a190  lwz 0, 192(31)
  053a194  stw 0, 112(31)
  053a198  li 0, 0
  053a19c  ori 0, 0, 33779
  053a1a0  lwz 9, 112(31)
  053a1a4  cmpw 7, 9, 0
  053a1a8  bt 30, 0x53a424
  053a1ac  li 0, 0
  053a1b0  ori 0, 0, 33779
  053a1b4  lwz 9, 112(31)
  053a1b8  cmplw 7, 9, 0
  053a1bc  bt 29, 0x53a200
  053a1c0  li 0, 0
  053a1c4  ori 0, 0, 33777
  053a1c8  lwz 9, 112(31)
  053a1cc  cmpw 7, 9, 0
  053a1d0  bt 30, 0x53a3d4
  053a1d4  li 0, 0
  053a1d8  ori 0, 0, 33777
  053a1dc  lwz 9, 112(31)
  053a1e0  cmplw 7, 9, 0
  053a1e4  bt 29, 0x53a3fc
  053a1e8  li 0, 0
  053a1ec  ori 0, 0, 32856
  053a1f0  lwz 9, 112(31)
  053a1f4  cmpw 7, 9, 0
  053a1f8  bt 30, 0x53a2e4
  053a1fc  b 0x53a4ec
  053a200  li 0, 0
  053a204  ori 0, 0, 34842
  053a208  lwz 9, 112(31)
  053a20c  cmpw 7, 9, 0
  053a210  bt 30, 0x53a44c
  053a214  li 0, 0
  053a218  ori 0, 0, 34842
  053a21c  lwz 9, 112(31)
  053a220  cmplw 7, 9, 0
  053a224  bt 29, 0x53a240
  053a228  li 0, 0
  053a22c  ori 0, 0, 34836
  053a230  lwz 9, 112(31)
  053a234  cmpw 7, 9, 0
  053a238  bt 30, 0x53a44c
  053a23c  b 0x53a4ec
  053a240  li 0, 0
  053a244  ori 0, 0, 65280
  053a248  lwz 9, 112(31)
  053a24c  cmpw 7, 9, 0
  053a250  bt 30, 0x53a26c
  053a254  li 0, 0
  053a258  ori 0, 0, 65281
  053a25c  lwz 9, 112(31)
  053a260  cmpw 7, 9, 0
  053a264  bt 30, 0x53a35c
  053a268  b 0x53a4ec
  053a26c  lwz 0, 200(31)
  053a270  clrldi 9, 0, 32
  053a274  li 0, 133
  053a278  stw 0, 0(9)
  053a27c  lwz 0, 216(31)
  053a280  cmpwi 7, 0, 0
  053a284  bf 30, 0x53a2a4
  053a288  lwz 0, 200(31)
  053a28c  clrldi 9, 0, 32
  053a290  lwz 0, 0(9)
  053a294  ori 11, 0, 32
  053a298  lwz 0, 200(31)
  053a29c  clrldi 9, 0, 32
  053a2a0  stw 11, 0(9)
  053a2a4  lwz 0, 224(31)
  053a2a8  cmpwi 7, 0, 0
  053a2ac  bf 30, 0x53a2cc
  053a2b0  lwz 0, 200(31)
  053a2b4  clrldi 9, 0, 32
  053a2b8  lwz 0, 0(9)
  053a2bc  ori 11, 0, 64
  053a2c0  lwz 0, 200(31)
  053a2c4  clrldi 9, 0, 32
  053a2c8  stw 11, 0(9)
  053a2cc  lwz 0, 208(31)
  053a2d0  clrldi 9, 0, 32
  053a2d4  li 0, 0
  053a2d8  ori 0, 0, 43748
  053a2dc  stw 0, 0(9)
  053a2e0  b 0x53a514
  053a2e4  lwz 0, 200(31)
  053a2e8  clrldi 9, 0, 32
  053a2ec  li 0, 133
  053a2f0  stw 0, 0(9)
  053a2f4  lwz 0, 216(31)
  053a2f8  cmpwi 7, 0, 0
  053a2fc  bf 30, 0x53a31c
  053a300  lwz 0, 200(31)
  053a304  clrldi 9, 0, 32
  053a308  lwz 0, 0(9)
  053a30c  ori 11, 0, 32
  053a310  lwz 0, 200(31)
  053a314  clrldi 9, 0, 32
  053a318  stw 11, 0(9)
  053a31c  lwz 0, 224(31)
  053a320  cmpwi 7, 0, 0
  053a324  bf 30, 0x53a344
  053a328  lwz 0, 200(31)
  053a32c  clrldi 9, 0, 32
  053a330  lwz 0, 0(9)
  053a334  ori 11, 0, 64
  053a338  lwz 0, 200(31)
  053a33c  clrldi 9, 0, 32
  053a340  stw 11, 0(9)
  053a344  lwz 0, 208(31)
  053a348  clrldi 9, 0, 32
  053a34c  li 0, 0
  053a350  ori 0, 0, 43667
  053a354  stw 0, 0(9)
  053a358  b 0x53a514
  053a35c  lwz 0, 200(31)
  053a360  clrldi 9, 0, 32
  053a364  li 0, 133
  053a368  stw 0, 0(9)
  053a36c  lwz 0, 216(31)
  053a370  cmpwi 7, 0, 0
  053a374  bf 30, 0x53a394
  053a378  lwz 0, 200(31)
  053a37c  clrldi 9, 0, 32
  053a380  lwz 0, 0(9)
  053a384  ori 11, 0, 32
  053a388  lwz 0, 200(31)
  053a38c  clrldi 9, 0, 32
  053a390  stw 11, 0(9)
  053a394  lwz 0, 224(31)
  053a398  cmpwi 7, 0, 0
  053a39c  bf 30, 0x53a3bc
  053a3a0  lwz 0, 200(31)
  053a3a4  clrldi 9, 0, 32
  053a3a8  lwz 0, 0(9)
  053a3ac  ori 11, 0, 64
  053a3b0  lwz 0, 200(31)
  053a3b4  clrldi 9, 0, 32
  053a3b8  stw 11, 0(9)
  053a3bc  lwz 0, 208(31)
  053a3c0  clrldi 9, 0, 32
  053a3c4  li 0, 0
  053a3c8  ori 0, 0, 43547
  053a3cc  stw 0, 0(9)
  053a3d0  b 0x53a514
  053a3d4  lwz 0, 200(31)
  053a3d8  clrldi 9, 0, 32
  053a3dc  li 0, 134
  053a3e0  stw 0, 0(9)
  053a3e4  lwz 0, 208(31)
  053a3e8  clrldi 9, 0, 32
  053a3ec  li 0, 0
  053a3f0  ori 0, 0, 43748
  053a3f4  stw 0, 0(9)
  053a3f8  b 0x53a514
  053a3fc  lwz 0, 200(31)
  053a400  clrldi 9, 0, 32
  053a404  li 0, 135
  053a408  stw 0, 0(9)
  053a40c  lwz 0, 208(31)
  053a410  clrldi 9, 0, 32
  053a414  li 0, 0
  053a418  ori 0, 0, 43748
  053a41c  stw 0, 0(9)
  053a420  b 0x53a514
  053a424  lwz 0, 200(31)
  053a428  clrldi 9, 0, 32
  053a42c  li 0, 136
  053a430  stw 0, 0(9)
  053a434  lwz 0, 208(31)
  053a438  clrldi 9, 0, 32
  053a43c  li 0, 0
  053a440  ori 0, 0, 43748
  053a444  stw 0, 0(9)
  053a448  b 0x53a514
  053a44c  lwz 0, 192(31)
  053a450  li 9, 0
  053a454  ori 9, 9, 34842
  053a458  cmpw 7, 0, 9
  053a45c  bf 30, 0x53a474
  053a460  lwz 0, 200(31)
  053a464  clrldi 9, 0, 32
  053a468  li 0, 154
  053a46c  stw 0, 0(9)
  053a470  b 0x53a484
  053a474  lwz 0, 200(31)
  053a478  clrldi 9, 0, 32
  053a47c  li 0, 155
  053a480  stw 0, 0(9)
  053a484  lwz 0, 216(31)
  053a488  cmpwi 7, 0, 0
  053a48c  bf 30, 0x53a4ac
  053a490  lwz 0, 200(31)
  053a494  clrldi 9, 0, 32
  053a498  lwz 0, 0(9)
  053a49c  ori 11, 0, 32
  053a4a0  lwz 0, 200(31)
  053a4a4  clrldi 9, 0, 32
  053a4a8  stw 11, 0(9)
  053a4ac  lwz 0, 224(31)
  053a4b0  cmpwi 7, 0, 0
  053a4b4  bf 30, 0x53a4d4
  053a4b8  lwz 0, 200(31)
  053a4bc  clrldi 9, 0, 32
  053a4c0  lwz 0, 0(9)
  053a4c4  ori 11, 0, 64
  053a4c8  lwz 0, 200(31)
  053a4cc  clrldi 9, 0, 32
  053a4d0  stw 11, 0(9)
  053a4d4  lwz 0, 208(31)
  053a4d8  clrldi 9, 0, 32
  053a4dc  li 0, 0
  053a4e0  ori 0, 0, 43748
  053a4e4  stw 0, 0(9)
  053a4e8  b 0x53a514
  053a4ec  lwz 0, 192(31)
  053a4f0  clrldi 0, 0, 32
  053a4f4  lwz 3, -29292(2)
  053a4f8  mr 4, 0
  053a4fc  bl 0x5cd098
  053a500  nop
  053a504  lwz 3, -29288(2)
  053a508  li 4, 0
  053a50c  bl 0x5cef7c
  053a510  nop
  053a514  li 0, 0
  053a518  extsw 0, 0
  053a51c  mr 3, 0
  053a520  ld 11, 0(1)
  053a524  ld 0, 16(11)
  053a528  mtlr 0
  053a52c  ld 31, -8(11)
  053a530  mr 1, 11
  053a534  blr

FUN_0053a538:   # 0x53a538, 0x310 bytes
  053a538  stdu 1, -224(1)
  053a53c  mflr 0
  053a540  std 31, 216(1)
  053a544  std 0, 240(1)
  053a548  mr 31, 1
  053a54c  mr 0, 3
  053a550  mr 9, 4
  053a554  mr 11, 5
  053a558  mr 10, 6
  053a55c  mr 8, 7
  053a560  stw 0, 272(31)
  053a564  stw 9, 280(31)
  053a568  stw 11, 288(31)
  053a56c  stw 10, 296(31)
  053a570  stw 8, 304(31)
  053a574  lwz 0, 280(31)
  053a578  stw 0, 132(31)
  053a57c  li 0, 0
  053a580  stw 0, 128(31)
  053a584  lwz 0, -29284(2)
  053a588  addi 9, 31, 136
  053a58c  li 11, 72
  053a590  clrldi 9, 9, 32
  053a594  clrldi 0, 0, 32
  053a598  clrldi 11, 11, 32
  053a59c  mr 3, 9
  053a5a0  mr 4, 0
  053a5a4  mr 5, 11
  053a5a8  bl 0x5c5ad0
  053a5ac  nop
  053a5b0  lwz 9, 280(31)
  053a5b4  lwz 0, 288(31)
  053a5b8  mullw 9, 9, 0
  053a5bc  lwz 0, 296(31)
  053a5c0  mullw 0, 9, 0
  053a5c4  clrldi 0, 0, 32
  053a5c8  mr 3, 0
  053a5cc  bl 0x5d5838
  053a5d0  nop
  053a5d4  mr 0, 3
  053a5d8  stw 0, 124(31)
  053a5dc  lwz 0, 124(31)
  053a5e0  cmpwi 7, 0, 0
  053a5e4  bf 30, 0x53a5f8
  053a5e8  lwz 3, -29280(2)
  053a5ec  li 4, 0
  053a5f0  bl 0x5cef7c
  053a5f4  nop
  053a5f8  li 0, 0
  053a5fc  stw 0, 120(31)
  053a600  b 0x53a810
  053a604  li 0, 0
  053a608  stw 0, 116(31)
  053a60c  b 0x53a77c
  053a610  li 0, 0
  053a614  stw 0, 112(31)
  053a618  b 0x53a760
  053a61c  lwz 9, 132(31)
  053a620  lwz 0, 116(31)
  053a624  mullw 9, 9, 0
  053a628  lwz 0, 112(31)
  053a62c  add 9, 9, 0
  053a630  lwz 0, 296(31)
  053a634  mullw 0, 9, 0
  053a638  mr 9, 0
  053a63c  lwz 0, 124(31)
  053a640  add 0, 9, 0
  053a644  clrldi 9, 0, 32
  053a648  li 0, -1
  053a64c  stb 0, 0(9)
  053a650  lwz 9, 132(31)
  053a654  lwz 0, 116(31)
  053a658  mullw 9, 9, 0
  053a65c  lwz 0, 112(31)
  053a660  add 9, 9, 0
  053a664  lwz 0, 296(31)
  053a668  mullw 0, 9, 0
  053a66c  mr 9, 0
  053a670  lwz 0, 124(31)
  053a674  add 9, 9, 0
  053a678  addi 11, 9, 1
  053a67c  lwz 0, 120(31)
  053a680  slwi 9, 0, 2
  053a684  slwi 0, 9, 2
  053a688  sub 0, 0, 9
  053a68c  extsw 9, 0
  053a690  addi 0, 31, 112
  053a694  add 9, 0, 9
  053a698  lwz 0, 24(9)
  053a69c  clrldi 9, 11, 32
  053a6a0  stb 0, 0(9)
  053a6a4  lwz 9, 132(31)
  053a6a8  lwz 0, 116(31)
  053a6ac  mullw 9, 9, 0
  053a6b0  lwz 0, 112(31)
  053a6b4  add 9, 9, 0
  053a6b8  lwz 0, 296(31)
  053a6bc  mullw 0, 9, 0
  053a6c0  mr 9, 0
  053a6c4  lwz 0, 124(31)
  053a6c8  add 9, 9, 0
  053a6cc  addi 11, 9, 2
  053a6d0  lwz 0, 120(31)
  053a6d4  slwi 9, 0, 2
  053a6d8  slwi 0, 9, 2
  053a6dc  sub 9, 0, 9
  053a6e0  addi 9, 9, 4
  053a6e4  extsw 9, 9
  053a6e8  addi 0, 31, 112
  053a6ec  add 9, 0, 9
  053a6f0  lwz 0, 24(9)
  053a6f4  clrldi 9, 11, 32
  053a6f8  stb 0, 0(9)
  053a6fc  lwz 9, 132(31)
  053a700  lwz 0, 116(31)
  053a704  mullw 9, 9, 0
  053a708  lwz 0, 112(31)
  053a70c  add 9, 9, 0
  053a710  lwz 0, 296(31)
  053a714  mullw 0, 9, 0
  053a718  mr 9, 0
  053a71c  lwz 0, 124(31)
  053a720  add 9, 9, 0
  053a724  addi 11, 9, 3
  053a728  lwz 0, 120(31)
  053a72c  slwi 9, 0, 2
  053a730  slwi 0, 9, 2
  053a734  sub 9, 0, 9
  053a738  addi 9, 9, 8
  053a73c  extsw 9, 9
  053a740  addi 0, 31, 112
  053a744  add 9, 0, 9
  053a748  lwz 0, 24(9)
  053a74c  clrldi 9, 11, 32
  053a750  stb 0, 0(9)
  053a754  lwz 9, 112(31)
  053a758  addi 0, 9, 1
  053a75c  stw 0, 112(31)
  053a760  lwz 0, 112(31)
  053a764  lwz 9, 280(31)
  053a768  cmplw 7, 0, 9
  053a76c  bt 28, 0x53a61c
  053a770  lwz 9, 116(31)
  053a774  addi 0, 9, 1
  053a778  stw 0, 116(31)
  053a77c  lwz 0, 116(31)
  053a780  lwz 9, 288(31)
  053a784  cmplw 7, 0, 9
  053a788  bt 28, 0x53a610
  053a78c  lwz 0, 304(31)
  053a790  cmpwi 7, 0, 0
  053a794  bt 30, 0x53a7e4
  053a798  lwz 9, 128(31)
  053a79c  lwz 0, 272(31)
  053a7a0  add 0, 9, 0
  053a7a4  clrldi 9, 0, 32
  053a7a8  lwz 0, 124(31)
  053a7ac  clrldi 11, 0, 32
  053a7b0  lwz 0, 280(31)
  053a7b4  clrldi 10, 0, 32
  053a7b8  lwz 0, 288(31)
  053a7bc  clrldi 8, 0, 32
  053a7c0  lwz 0, 296(31)
  053a7c4  clrldi 0, 0, 32
  053a7c8  mr 3, 9
  053a7cc  mr 4, 11
  053a7d0  mr 5, 10
  053a7d4  mr 6, 8
  053a7d8  mr 7, 0
  053a7dc  bl 0x53bac0
  053a7e0  nop
  053a7e4  lwz 9, 132(31)
  053a7e8  lwz 0, 288(31)
  053a7ec  mullw 9, 9, 0
  053a7f0  lwz 0, 296(31)
  053a7f4  mullw 9, 9, 0
  053a7f8  lwz 0, 128(31)
  053a7fc  add 0, 0, 9
  053a800  stw 0, 128(31)
  053a804  lwz 9, 120(31)
  053a808  addi 0, 9, 1
  053a80c  stw 0, 120(31)
  053a810  lwz 0, 120(31)
  053a814  cmplwi 7, 0, 5
  053a818  bf 29, 0x53a604
  053a81c  lwz 0, 124(31)
  053a820  clrldi 0, 0, 32
  053a824  mr 3, 0
  053a828  bl 0x5d580c
  053a82c  nop
  053a830  ld 11, 0(1)
  053a834  ld 0, 16(11)
  053a838  mtlr 0
  053a83c  ld 31, -8(11)
  053a840  mr 1, 11
  053a844  blr

FUN_0053a848:   # 0x53a848, 0x104 bytes
  053a848  stdu 1, -144(1)
  053a84c  mflr 0
  053a850  std 31, 136(1)
  053a854  std 0, 160(1)
  053a858  mr 31, 1
  053a85c  mr 0, 3
  053a860  mr 9, 4
  053a864  mr 11, 5
  053a868  stw 0, 192(31)
  053a86c  stw 9, 200(31)
  053a870  stw 11, 208(31)
  053a874  lwz 9, 200(31)
  053a878  lwz 0, 208(31)
  053a87c  mullw 0, 9, 0
  053a880  slwi 0, 0, 4
  053a884  clrldi 0, 0, 32
  053a888  mr 3, 0
  053a88c  bl 0x5d5838
  053a890  nop
  053a894  mr 0, 3
  053a898  stw 0, 112(31)
  053a89c  lwz 0, 112(31)
  053a8a0  cmpwi 7, 0, 0
  053a8a4  bf 30, 0x53a8b8
  053a8a8  lwz 3, -29276(2)
  053a8ac  li 4, 0
  053a8b0  bl 0x5cef7c
  053a8b4  nop
  053a8b8  lwz 0, 112(31)
  053a8bc  clrldi 9, 0, 32
  053a8c0  lwz 0, 200(31)
  053a8c4  clrldi 11, 0, 32
  053a8c8  lwz 0, 208(31)
  053a8cc  clrldi 0, 0, 32
  053a8d0  mr 3, 9
  053a8d4  mr 4, 11
  053a8d8  mr 5, 0
  053a8dc  bl 0x539610
  053a8e0  lwz 0, 200(31)
  053a8e4  slwi 9, 0, 2
  053a8e8  lwz 0, 192(31)
  053a8ec  clrldi 10, 0, 32
  053a8f0  lwz 0, 112(31)
  053a8f4  clrldi 11, 0, 32
  053a8f8  clrldi 9, 9, 32
  053a8fc  lwz 0, 208(31)
  053a900  clrldi 0, 0, 32
  053a904  mr 3, 10
  053a908  mr 4, 11
  053a90c  mr 5, 9
  053a910  mr 6, 0
  053a914  li 7, 16
  053a918  bl 0x53bac0
  053a91c  nop
  053a920  lwz 0, 112(31)
  053a924  clrldi 0, 0, 32
  053a928  mr 3, 0
  053a92c  bl 0x5d580c
  053a930  nop
  053a934  ld 11, 0(1)
  053a938  ld 0, 16(11)
  053a93c  mtlr 0
  053a940  ld 31, -8(11)
  053a944  mr 1, 11
  053a948  blr

FUN_0053a94c:   # 0x53a94c, 0x368 bytes
  053a94c  stdu 1, -240(1)
  053a950  mflr 0
  053a954  std 29, 216(1)
  053a958  std 31, 232(1)
  053a95c  std 0, 256(1)
  053a960  mr 31, 1
  053a964  mr 0, 3
  053a968  mr 9, 4
  053a96c  mr 11, 5
  053a970  stw 0, 288(31)
  053a974  stw 9, 296(31)
  053a978  stw 11, 304(31)
  053a97c  lwz 0, 288(31)
  053a980  stw 0, 120(31)
  053a984  li 0, 0
  053a988  stw 0, 116(31)
  053a98c  b 0x53ac88
  053a990  li 0, 0
  053a994  stw 0, 112(31)
  053a998  b 0x53ac6c
  053a99c  lwz 9, 296(31)
  053a9a0  lwz 0, 112(31)
  053a9a4  mullw 9, 9, 0
  053a9a8  lwz 0, 116(31)
  053a9ac  add 0, 9, 0
  053a9b0  slwi 0, 0, 3
  053a9b4  mr 9, 0
  053a9b8  lwz 0, 120(31)
  053a9bc  add 29, 9, 0
  053a9c0  lfs 0, -29296(2)
  053a9c4  fmr 1, 0
  053a9c8  bl 0x53b258
  053a9cc  nop
  053a9d0  mr 0, 3
  053a9d4  clrldi 9, 29, 32
  053a9d8  sth 0, 0(9)
  053a9dc  lwz 9, 296(31)
  053a9e0  lwz 0, 112(31)
  053a9e4  mullw 9, 9, 0
  053a9e8  lwz 0, 116(31)
  053a9ec  add 0, 9, 0
  053a9f0  slwi 0, 0, 3
  053a9f4  mr 9, 0
  053a9f8  lwz 0, 120(31)
  053a9fc  add 9, 9, 0
  053aa00  addi 9, 9, 2
  053aa04  stw 9, 140(31)
  053aa08  lwz 0, 116(31)
  053aa0c  clrldi 0, 0, 32
  053aa10  std 0, 144(31)
  053aa14  ld 0, 144(31)
  053aa18  sradi 9, 0, 53
  053aa1c  ld 11, 144(31)
  053aa20  clrldi 11, 11, 53
  053aa24  std 11, 152(31)
  053aa28  addi 9, 9, 1
  053aa2c  ld 11, 152(31)
  053aa30  addi 11, 11, 2047
  053aa34  std 11, 152(31)
  053aa38  cmpldi 7, 9, 2
  053aa3c  ld 9, 152(31)
  053aa40  ld 11, 144(31)
  053aa44  or 9, 9, 11
  053aa48  std 9, 152(31)
  053aa4c  ld 9, 152(31)
  053aa50  rldicr 9, 9, 0, 52
  053aa54  std 9, 152(31)
  053aa58  bf 28, 0x53aa64
  053aa5c  ld 11, 144(31)
  053aa60  std 11, 152(31)
  053aa64  lfd 0, 152(31)
  053aa68  fcfid 13, 0
  053aa6c  frsp 0, 13
  053aa70  stfs 0, 136(31)
  053aa74  lwz 0, 296(31)
  053aa78  clrldi 0, 0, 32
  053aa7c  std 0, 160(31)
  053aa80  ld 0, 160(31)
  053aa84  sradi 9, 0, 53
  053aa88  ld 11, 160(31)
  053aa8c  clrldi 11, 11, 53
  053aa90  std 11, 168(31)
  053aa94  addi 9, 9, 1
  053aa98  ld 11, 168(31)
  053aa9c  addi 11, 11, 2047
  053aaa0  std 11, 168(31)
  053aaa4  cmpldi 7, 9, 2
  053aaa8  ld 9, 168(31)
  053aaac  ld 11, 160(31)
  053aab0  or 9, 9, 11
  053aab4  std 9, 168(31)
  053aab8  ld 9, 168(31)
  053aabc  rldicr 9, 9, 0, 52
  053aac0  std 9, 168(31)
  053aac4  bf 28, 0x53aad0
  053aac8  ld 11, 160(31)
  053aacc  std 11, 168(31)
  053aad0  lfd 13, 168(31)
  053aad4  fcfid 13, 13
  053aad8  frsp 0, 13
  053aadc  lfs 13, 136(31)
  053aae0  fdivs 0, 13, 0
  053aae4  fmr 1, 0
  053aae8  bl 0x53b258
  053aaec  nop
  053aaf0  mr 0, 3
  053aaf4  lwz 9, 140(31)
  053aaf8  sth 0, 0(9)
  053aafc  lwz 9, 296(31)
  053ab00  lwz 0, 112(31)
  053ab04  mullw 9, 9, 0
  053ab08  lwz 0, 116(31)
  053ab0c  add 0, 9, 0
  053ab10  slwi 0, 0, 3
  053ab14  mr 9, 0
  053ab18  lwz 0, 120(31)
  053ab1c  add 9, 9, 0
  053ab20  addi 9, 9, 4
  053ab24  stw 9, 132(31)
  053ab28  lwz 0, 112(31)
  053ab2c  clrldi 0, 0, 32
  053ab30  std 0, 176(31)
  053ab34  ld 0, 176(31)
  053ab38  sradi 9, 0, 53
  053ab3c  ld 11, 176(31)
  053ab40  clrldi 11, 11, 53
  053ab44  std 11, 184(31)
  053ab48  addi 9, 9, 1
  053ab4c  ld 11, 184(31)
  053ab50  addi 11, 11, 2047
  053ab54  std 11, 184(31)
  053ab58  cmpldi 7, 9, 2
  053ab5c  ld 9, 184(31)
  053ab60  ld 11, 176(31)
  053ab64  or 9, 9, 11
  053ab68  std 9, 184(31)
  053ab6c  ld 9, 184(31)
  053ab70  rldicr 9, 9, 0, 52
  053ab74  std 9, 184(31)
  053ab78  bf 28, 0x53ab84
  053ab7c  ld 11, 176(31)
  053ab80  std 11, 184(31)
  053ab84  lfd 0, 184(31)
  053ab88  fcfid 13, 0
  053ab8c  frsp 0, 13
  053ab90  stfs 0, 128(31)
  053ab94  lwz 0, 304(31)
  053ab98  clrldi 0, 0, 32
  053ab9c  std 0, 192(31)
  053aba0  ld 0, 192(31)
  053aba4  sradi 9, 0, 53
  053aba8  ld 11, 192(31)
  053abac  clrldi 11, 11, 53
  053abb0  std 11, 200(31)
  053abb4  addi 9, 9, 1
  053abb8  ld 11, 200(31)
  053abbc  addi 11, 11, 2047
  053abc0  std 11, 200(31)
  053abc4  cmpldi 7, 9, 2
  053abc8  ld 9, 200(31)
  053abcc  ld 11, 192(31)
  053abd0  or 9, 9, 11
  053abd4  std 9, 200(31)
  053abd8  ld 9, 200(31)
  053abdc  rldicr 9, 9, 0, 52
  053abe0  std 9, 200(31)
  053abe4  bf 28, 0x53abf0
  053abe8  ld 11, 192(31)
  053abec  std 11, 200(31)
  053abf0  lfd 13, 200(31)
  053abf4  fcfid 13, 13
  053abf8  frsp 0, 13
  053abfc  lfs 13, 128(31)
  053ac00  fdivs 0, 13, 0
  053ac04  fmr 1, 0
  053ac08  bl 0x53b258
  053ac0c  nop
  053ac10  mr 0, 3
  053ac14  lwz 9, 132(31)
  053ac18  sth 0, 0(9)
  053ac1c  lwz 9, 296(31)
  053ac20  lwz 0, 112(31)
  053ac24  mullw 9, 9, 0
  053ac28  lwz 0, 116(31)
  053ac2c  add 0, 9, 0
  053ac30  slwi 0, 0, 3
  053ac34  mr 9, 0
  053ac38  lwz 0, 120(31)
  053ac3c  add 9, 9, 0
  053ac40  addi 29, 9, 6
  053ac44  lfs 0, -29296(2)
  053ac48  fmr 1, 0
  053ac4c  bl 0x53b258
  053ac50  nop
  053ac54  mr 0, 3
  053ac58  clrldi 9, 29, 32
  053ac5c  sth 0, 0(9)
  053ac60  lwz 9, 112(31)
  053ac64  addi 0, 9, 1
  053ac68  stw 0, 112(31)
  053ac6c  lwz 0, 112(31)
  053ac70  lwz 9, 304(31)
  053ac74  cmplw 7, 0, 9
  053ac78  bt 28, 0x53a99c
  053ac7c  lwz 9, 116(31)
  053ac80  addi 0, 9, 1
  053ac84  stw 0, 116(31)
  053ac88  lwz 0, 116(31)
  053ac8c  lwz 9, 296(31)
  053ac90  cmplw 7, 0, 9
  053ac94  bt 28, 0x53a990
  053ac98  ld 11, 0(1)
  053ac9c  ld 0, 16(11)
  053aca0  mtlr 0
  053aca4  ld 29, -24(11)
  053aca8  ld 31, -8(11)
  053acac  mr 1, 11
  053acb0  blr

FUN_0053acb4:   # 0x53acb4, 0x104 bytes
  053acb4  stdu 1, -144(1)
  053acb8  mflr 0
  053acbc  std 31, 136(1)
  053acc0  std 0, 160(1)
  053acc4  mr 31, 1
  053acc8  mr 0, 3
  053accc  mr 9, 4
  053acd0  mr 11, 5
  053acd4  stw 0, 192(31)
  053acd8  stw 9, 200(31)
  053acdc  stw 11, 208(31)
  053ace0  lwz 9, 200(31)
  053ace4  lwz 0, 208(31)
  053ace8  mullw 0, 9, 0
  053acec  slwi 0, 0, 3
  053acf0  clrldi 0, 0, 32
  053acf4  mr 3, 0
  053acf8  bl 0x5d5838
  053acfc  nop
  053ad00  mr 0, 3
  053ad04  stw 0, 112(31)
  053ad08  lwz 0, 112(31)
  053ad0c  cmpwi 7, 0, 0
  053ad10  bf 30, 0x53ad24
  053ad14  lwz 3, -29272(2)
  053ad18  li 4, 0
  053ad1c  bl 0x5cef7c
  053ad20  nop
  053ad24  lwz 0, 112(31)
  053ad28  clrldi 9, 0, 32
  053ad2c  lwz 0, 200(31)
  053ad30  clrldi 11, 0, 32
  053ad34  lwz 0, 208(31)
  053ad38  clrldi 0, 0, 32
  053ad3c  mr 3, 9
  053ad40  mr 4, 11
  053ad44  mr 5, 0
  053ad48  bl 0x53a94c
  053ad4c  lwz 0, 200(31)
  053ad50  slwi 9, 0, 1
  053ad54  lwz 0, 192(31)
  053ad58  clrldi 10, 0, 32
  053ad5c  lwz 0, 112(31)
  053ad60  clrldi 11, 0, 32
  053ad64  clrldi 9, 9, 32
  053ad68  lwz 0, 208(31)
  053ad6c  clrldi 0, 0, 32
  053ad70  mr 3, 10
  053ad74  mr 4, 11
  053ad78  mr 5, 9
  053ad7c  mr 6, 0
  053ad80  li 7, 8
  053ad84  bl 0x53bac0
  053ad88  nop
  053ad8c  lwz 0, 112(31)
  053ad90  clrldi 0, 0, 32
  053ad94  mr 3, 0
  053ad98  bl 0x5d580c
  053ad9c  nop
  053ada0  ld 11, 0(1)
  053ada4  ld 0, 16(11)
  053ada8  mtlr 0
  053adac  ld 31, -8(11)
  053adb0  mr 1, 11
  053adb4  blr

FUN_0053adb8:   # 0x53adb8, 0x380 bytes
  053adb8  stdu 1, -240(1)
  053adbc  mflr 0
  053adc0  std 31, 232(1)
  053adc4  std 0, 256(1)
  053adc8  mr 31, 1
  053adcc  mr 0, 3
  053add0  mr 9, 4
  053add4  mr 11, 5
  053add8  mr 10, 6
  053addc  stw 0, 288(31)
  053ade0  stw 9, 296(31)
  053ade4  stw 11, 304(31)
  053ade8  stw 10, 312(31)
  053adec  li 0, 0
  053adf0  stw 0, 116(31)
  053adf4  b 0x53b110
  053adf8  li 0, 0
  053adfc  stw 0, 112(31)
  053ae00  b 0x53b0f4
  053ae04  lwz 9, 296(31)
  053ae08  lwz 0, 112(31)
  053ae0c  mullw 9, 9, 0
  053ae10  lwz 0, 116(31)
  053ae14  add 9, 9, 0
  053ae18  lwz 0, 312(31)
  053ae1c  mullw 0, 9, 0
  053ae20  mr 9, 0
  053ae24  lwz 0, 288(31)
  053ae28  add 0, 9, 0
  053ae2c  clrldi 9, 0, 32
  053ae30  li 0, -1
  053ae34  stb 0, 0(9)
  053ae38  lwz 9, 296(31)
  053ae3c  lwz 0, 112(31)
  053ae40  mullw 9, 9, 0
  053ae44  lwz 0, 116(31)
  053ae48  add 9, 9, 0
  053ae4c  lwz 0, 312(31)
  053ae50  mullw 0, 9, 0
  053ae54  mr 9, 0
  053ae58  lwz 0, 288(31)
  053ae5c  add 9, 9, 0
  053ae60  addi 0, 9, 1
  053ae64  clrldi 9, 0, 32
  053ae68  li 0, -1
  053ae6c  stb 0, 0(9)
  053ae70  lwz 9, 296(31)
  053ae74  lwz 0, 112(31)
  053ae78  mullw 9, 9, 0
  053ae7c  lwz 0, 116(31)
  053ae80  add 9, 9, 0
  053ae84  lwz 0, 312(31)
  053ae88  mullw 0, 9, 0
  053ae8c  mr 9, 0
  053ae90  lwz 0, 288(31)
  053ae94  add 9, 9, 0
  053ae98  addi 9, 9, 2
  053ae9c  stw 9, 144(31)
  053aea0  lwz 0, 116(31)
  053aea4  clrldi 0, 0, 32
  053aea8  std 0, 152(31)
  053aeac  ld 0, 152(31)
  053aeb0  sradi 9, 0, 53
  053aeb4  ld 11, 152(31)
  053aeb8  clrldi 11, 11, 53
  053aebc  std 11, 160(31)
  053aec0  addi 9, 9, 1
  053aec4  ld 11, 160(31)
  053aec8  addi 11, 11, 2047
  053aecc  std 11, 160(31)
  053aed0  cmpldi 7, 9, 2
  053aed4  ld 9, 160(31)
  053aed8  ld 11, 152(31)
  053aedc  or 9, 9, 11
  053aee0  std 9, 160(31)
  053aee4  ld 9, 160(31)
  053aee8  rldicr 9, 9, 0, 52
  053aeec  std 9, 160(31)
  053aef0  bf 28, 0x53aefc
  053aef4  ld 11, 152(31)
  053aef8  std 11, 160(31)
  053aefc  lfd 0, 160(31)
  053af00  fcfid 0, 0
  053af04  frsp 13, 0
  053af08  lfs 0, -29268(2)
  053af0c  fmuls 13, 13, 0
  053af10  stfs 13, 140(31)
  053af14  lwz 0, 296(31)
  053af18  clrldi 0, 0, 32
  053af1c  std 0, 168(31)
  053af20  ld 0, 168(31)
  053af24  sradi 9, 0, 53
  053af28  ld 11, 168(31)
  053af2c  clrldi 11, 11, 53
  053af30  std 11, 176(31)
  053af34  addi 9, 9, 1
  053af38  ld 11, 176(31)
  053af3c  addi 11, 11, 2047
  053af40  std 11, 176(31)
  053af44  cmpldi 7, 9, 2
  053af48  ld 9, 176(31)
  053af4c  ld 11, 168(31)
  053af50  or 9, 9, 11
  053af54  std 9, 176(31)
  053af58  ld 9, 176(31)
  053af5c  rldicr 9, 9, 0, 52
  053af60  std 9, 176(31)
  053af64  bf 28, 0x53af70
  053af68  ld 11, 168(31)
  053af6c  std 11, 176(31)
  053af70  lfd 13, 176(31)
  053af74  fcfid 13, 13
  053af78  frsp 0, 13
  053af7c  lfs 13, 140(31)
  053af80  fdivs 0, 13, 0
  053af84  fmr 1, 0
  053af88  bl 0x5dc924
  053af8c  nop
  053af90  fmr 0, 1
  053af94  fctiwz 0, 0
  053af98  addi 9, 31, 128
  053af9c  stfiwx 0, 0, 9
  053afa0  lwz 0, 128(31)
  053afa4  lwz 9, 144(31)
  053afa8  stb 0, 0(9)
  053afac  lwz 9, 296(31)
  053afb0  lwz 0, 112(31)
  053afb4  mullw 9, 9, 0
  053afb8  lwz 0, 116(31)
  053afbc  add 9, 9, 0
  053afc0  lwz 0, 312(31)
  053afc4  mullw 0, 9, 0
  053afc8  mr 9, 0
  053afcc  lwz 0, 288(31)
  053afd0  add 9, 9, 0
  053afd4  addi 9, 9, 3
  053afd8  stw 9, 136(31)
  053afdc  lwz 0, 112(31)
  053afe0  clrldi 0, 0, 32
  053afe4  std 0, 184(31)
  053afe8  ld 11, 184(31)
  053afec  sradi 9, 11, 53
  053aff0  ld 11, 184(31)
  053aff4  clrldi 11, 11, 53
  053aff8  std 11, 192(31)
  053affc  addi 9, 9, 1
  053b000  ld 11, 192(31)
  053b004  addi 11, 11, 2047
  053b008  std 11, 192(31)
  053b00c  cmpldi 7, 9, 2
  053b010  ld 9, 192(31)
  053b014  ld 11, 184(31)
  053b018  or 9, 9, 11
  053b01c  std 9, 192(31)
  053b020  ld 9, 192(31)
  053b024  rldicr 9, 9, 0, 52
  053b028  std 9, 192(31)
  053b02c  bf 28, 0x53b038
  053b030  ld 11, 184(31)
  053b034  std 11, 192(31)
  053b038  lfd 0, 192(31)
  053b03c  fcfid 0, 0
  053b040  frsp 13, 0
  053b044  lfs 0, -29268(2)
  053b048  fmuls 13, 13, 0
  053b04c  stfs 13, 132(31)
  053b050  lwz 0, 304(31)
  053b054  clrldi 0, 0, 32
  053b058  std 0, 200(31)
  053b05c  ld 0, 200(31)
  053b060  sradi 9, 0, 53
  053b064  ld 11, 200(31)
  053b068  clrldi 11, 11, 53
  053b06c  std 11, 208(31)
  053b070  addi 9, 9, 1
  053b074  ld 11, 208(31)
  053b078  addi 11, 11, 2047
  053b07c  std 11, 208(31)
  053b080  cmpldi 7, 9, 2
  053b084  ld 9, 208(31)
  053b088  ld 11, 200(31)
  053b08c  or 9, 9, 11
  053b090  std 9, 208(31)
  053b094  ld 9, 208(31)
  053b098  rldicr 9, 9, 0, 52
  053b09c  std 9, 208(31)
  053b0a0  bf 28, 0x53b0ac
  053b0a4  ld 11, 200(31)
  053b0a8  std 11, 208(31)
  053b0ac  lfd 13, 208(31)
  053b0b0  fcfid 13, 13
  053b0b4  frsp 0, 13
  053b0b8  lfs 13, 132(31)
  053b0bc  fdivs 0, 13, 0
  053b0c0  fmr 1, 0
  053b0c4  bl 0x5dc924
  053b0c8  nop
  053b0cc  fmr 0, 1
  053b0d0  fctiwz 0, 0
  053b0d4  addi 9, 31, 128
  053b0d8  stfiwx 0, 0, 9
  053b0dc  lwz 0, 128(31)
  053b0e0  lwz 9, 136(31)
  053b0e4  stb 0, 0(9)
  053b0e8  lwz 9, 112(31)
  053b0ec  addi 0, 9, 1
  053b0f0  stw 0, 112(31)
  053b0f4  lwz 0, 112(31)
  053b0f8  lwz 9, 304(31)
  053b0fc  cmplw 7, 0, 9
  053b100  bt 28, 0x53ae04
  053b104  lwz 9, 116(31)
  053b108  addi 0, 9, 1
  053b10c  stw 0, 116(31)
  053b110  lwz 0, 116(31)
  053b114  lwz 9, 296(31)
  053b118  cmplw 7, 0, 9
  053b11c  bt 28, 0x53adf8
  053b120  ld 11, 0(1)
  053b124  ld 0, 16(11)
  053b128  mtlr 0
  053b12c  ld 31, -8(11)
  053b130  mr 1, 11
  053b134  blr

FUN_0053b138:   # 0x53b138, 0x120 bytes
  053b138  stdu 1, -144(1)
  053b13c  mflr 0
  053b140  std 31, 136(1)
  053b144  std 0, 160(1)
  053b148  mr 31, 1
  053b14c  mr 0, 3
  053b150  mr 9, 4
  053b154  mr 11, 5
  053b158  mr 10, 6
  053b15c  stw 0, 192(31)
  053b160  stw 9, 200(31)
  053b164  stw 11, 208(31)
  053b168  stw 10, 216(31)
  053b16c  lwz 9, 200(31)
  053b170  lwz 0, 208(31)
  053b174  mullw 9, 9, 0
  053b178  lwz 0, 216(31)
  053b17c  mullw 0, 9, 0
  053b180  clrldi 0, 0, 32
  053b184  mr 3, 0
  053b188  bl 0x5d5838
  053b18c  nop
  053b190  mr 0, 3
  053b194  stw 0, 112(31)
  053b198  lwz 0, 112(31)
  053b19c  cmpwi 7, 0, 0
  053b1a0  bf 30, 0x53b1b4
  053b1a4  lwz 3, -29264(2)
  053b1a8  li 4, 0
  053b1ac  bl 0x5cef7c
  053b1b0  nop
  053b1b4  lwz 0, 112(31)
  053b1b8  clrldi 11, 0, 32
  053b1bc  lwz 0, 200(31)
  053b1c0  clrldi 10, 0, 32
  053b1c4  lwz 0, 208(31)
  053b1c8  clrldi 9, 0, 32
  053b1cc  lwz 0, 216(31)
  053b1d0  clrldi 0, 0, 32
  053b1d4  mr 3, 11
  053b1d8  mr 4, 10
  053b1dc  mr 5, 9
  053b1e0  mr 6, 0
  053b1e4  bl 0x53adb8
  053b1e8  lwz 0, 192(31)
  053b1ec  clrldi 9, 0, 32
  053b1f0  lwz 0, 112(31)
  053b1f4  clrldi 11, 0, 32
  053b1f8  lwz 0, 200(31)
  053b1fc  clrldi 10, 0, 32
  053b200  lwz 0, 208(31)
  053b204  clrldi 8, 0, 32
  053b208  lwz 0, 216(31)
  053b20c  clrldi 0, 0, 32
  053b210  mr 3, 9
  053b214  mr 4, 11
  053b218  mr 5, 10
  053b21c  mr 6, 8
  053b220  mr 7, 0
  053b224  bl 0x53bac0
  053b228  nop
  053b22c  lwz 0, 112(31)
  053b230  clrldi 0, 0, 32
  053b234  mr 3, 0
  053b238  bl 0x5d580c
  053b23c  nop
  053b240  ld 11, 0(1)
  053b244  ld 0, 16(11)
  053b248  mtlr 0
  053b24c  ld 31, -8(11)
  053b250  mr 1, 11
  053b254  blr

FUN_0053b258:   # 0x53b258, 0x148 bytes
  053b258  stdu 1, -112(1)
  053b25c  std 31, 104(1)
  053b260  mr 31, 1
  053b264  stfs 1, 160(31)
  053b268  addi 0, 31, 160
  053b26c  stw 0, 64(31)
  053b270  lwz 0, 64(31)
  053b274  clrldi 9, 0, 32
  053b278  lbz 0, 0(9)
  053b27c  clrlwi 0, 0, 24
  053b280  slwi 11, 0, 24
  053b284  lwz 9, 64(31)
  053b288  addi 0, 9, 1
  053b28c  clrldi 9, 0, 32
  053b290  lbz 0, 0(9)
  053b294  clrlwi 0, 0, 24
  053b298  slwi 0, 0, 16
  053b29c  or 11, 11, 0
  053b2a0  lwz 9, 64(31)
  053b2a4  addi 0, 9, 2
  053b2a8  clrldi 9, 0, 32
  053b2ac  lbz 0, 0(9)
  053b2b0  clrlwi 0, 0, 24
  053b2b4  slwi 0, 0, 8
  053b2b8  or 11, 11, 0
  053b2bc  lwz 9, 64(31)
  053b2c0  addi 0, 9, 3
  053b2c4  clrldi 9, 0, 32
  053b2c8  lbz 0, 0(9)
  053b2cc  clrlwi 0, 0, 24
  053b2d0  or 0, 11, 0
  053b2d4  stw 0, 60(31)
  053b2d8  lwz 0, 60(31)
  053b2dc  cmpwi 7, 0, 0
  053b2e0  bf 30, 0x53b2f0
  053b2e4  li 0, 0
  053b2e8  stw 0, 80(31)
  053b2ec  b 0x53b384
  053b2f0  lwz 0, 60(31)
  053b2f4  rlwinm 0, 0, 0, 1, 8
  053b2f8  srwi 9, 0, 23
  053b2fc  addi 0, 9, -112
  053b300  stw 0, 56(31)
  053b304  lwz 0, 56(31)
  053b308  cmpwi 7, 0, 0
  053b30c  bf 28, 0x53b31c
  053b310  li 9, 0
  053b314  stw 9, 80(31)
  053b318  b 0x53b384
  053b31c  lwz 0, 56(31)
  053b320  cmpwi 7, 0, 31
  053b324  bf 29, 0x53b330
  053b328  li 0, 31
  053b32c  stw 0, 56(31)
  053b330  lwz 0, 60(31)
  053b334  rlwinm 0, 0, 0, 0, 0
  053b338  stw 0, 52(31)
  053b33c  lwz 0, 60(31)
  053b340  clrlwi 0, 0, 9
  053b344  stw 0, 48(31)
  053b348  lwz 0, 52(31)
  053b34c  srwi 0, 0, 16
  053b350  rlwinm 0, 0, 0, 0, 16
  053b354  mr 9, 0
  053b358  lwz 0, 56(31)
  053b35c  slwi 0, 0, 10
  053b360  rlwinm 0, 0, 0, 17, 21
  053b364  or 0, 9, 0
  053b368  mr 9, 0
  053b36c  lwz 0, 48(31)
  053b370  srwi 0, 0, 13
  053b374  clrlwi 0, 0, 22
  053b378  or 0, 9, 0
  053b37c  clrlwi 0, 0, 16
  053b380  stw 0, 80(31)
  053b384  lwz 9, 80(31)
  053b388  extsw 0, 9
  053b38c  mr 3, 0
  053b390  ld 11, 0(1)
  053b394  ld 31, -8(11)
  053b398  mr 1, 11
  053b39c  blr

FUN_0053b3a0:   # 0x53b3a0, 0x114 bytes
  053b3a0  stdu 1, -112(1)
  053b3a4  std 31, 104(1)
  053b3a8  mr 31, 1
  053b3ac  mr 0, 3
  053b3b0  sth 0, 160(31)
  053b3b4  lhz 0, 160(31)
  053b3b8  clrlwi 0, 0, 16
  053b3bc  cmpwi 7, 0, 0
  053b3c0  bf 30, 0x53b3d0
  053b3c4  li 0, 0
  053b3c8  stw 0, 80(31)
  053b3cc  b 0x53b49c
  053b3d0  lhz 0, 160(31)
  053b3d4  clrlwi 0, 0, 16
  053b3d8  rlwinm 0, 0, 0, 16, 16
  053b3dc  stw 0, 64(31)
  053b3e0  lhz 0, 160(31)
  053b3e4  clrlwi 0, 0, 16
  053b3e8  rlwinm 0, 0, 0, 17, 21
  053b3ec  srawi 9, 0, 10
  053b3f0  addi 0, 9, 112
  053b3f4  stw 0, 60(31)
  053b3f8  lhz 0, 160(31)
  053b3fc  clrlwi 0, 0, 16
  053b400  clrlwi 0, 0, 22
  053b404  stw 0, 56(31)
  053b408  lwz 0, 64(31)
  053b40c  slwi 9, 0, 16
  053b410  lwz 0, 60(31)
  053b414  slwi 0, 0, 23
  053b418  rlwinm 0, 0, 0, 1, 8
  053b41c  or 9, 9, 0
  053b420  lwz 0, 56(31)
  053b424  slwi 0, 0, 13
  053b428  or 0, 9, 0
  053b42c  stw 0, 52(31)
  053b430  addi 0, 31, 68
  053b434  stw 0, 48(31)
  053b438  lwz 0, 52(31)
  053b43c  srwi 0, 0, 24
  053b440  mr 11, 0
  053b444  lwz 0, 48(31)
  053b448  clrldi 9, 0, 32
  053b44c  stb 11, 0(9)
  053b450  lwz 9, 48(31)
  053b454  addi 9, 9, 1
  053b458  lwz 0, 52(31)
  053b45c  srwi 0, 0, 16
  053b460  clrldi 9, 9, 32
  053b464  stb 0, 0(9)
  053b468  lwz 9, 48(31)
  053b46c  addi 9, 9, 2
  053b470  lwz 0, 52(31)
  053b474  srwi 0, 0, 8
  053b478  clrldi 9, 9, 32
  053b47c  stb 0, 0(9)
  053b480  lwz 9, 48(31)
  053b484  addi 9, 9, 3
  053b488  lwz 0, 52(31)
  053b48c  clrldi 9, 9, 32
  053b490  stb 0, 0(9)
  053b494  lfs 0, 68(31)
  053b498  stfs 0, 80(31)
  053b49c  lfs 0, 80(31)
  053b4a0  fmr 1, 0
  053b4a4  ld 11, 0(1)
  053b4a8  ld 31, -8(11)
  053b4ac  mr 1, 11
  053b4b0  blr

FUN_0053b4b4:   # 0x53b4b4, 0x11c bytes
  053b4b4  stdu 1, -96(1)
  053b4b8  std 31, 88(1)
  053b4bc  mr 31, 1
  053b4c0  mr 0, 3
  053b4c4  stw 0, 144(31)
  053b4c8  li 0, 32
  053b4cc  stw 0, 48(31)
  053b4d0  lwz 0, 144(31)
  053b4d4  srwi 0, 0, 16
  053b4d8  stw 0, 52(31)
  053b4dc  lwz 0, 52(31)
  053b4e0  cmpwi 7, 0, 0
  053b4e4  bt 30, 0x53b4fc
  053b4e8  lwz 9, 48(31)
  053b4ec  addi 0, 9, -16
  053b4f0  stw 0, 48(31)
  053b4f4  lwz 0, 52(31)
  053b4f8  stw 0, 144(31)
  053b4fc  lwz 0, 144(31)
  053b500  srwi 0, 0, 8
  053b504  stw 0, 52(31)
  053b508  lwz 0, 52(31)
  053b50c  cmpwi 7, 0, 0
  053b510  bt 30, 0x53b528
  053b514  lwz 9, 48(31)
  053b518  addi 0, 9, -8
  053b51c  stw 0, 48(31)
  053b520  lwz 0, 52(31)
  053b524  stw 0, 144(31)
  053b528  lwz 0, 144(31)
  053b52c  srwi 0, 0, 4
  053b530  stw 0, 52(31)
  053b534  lwz 0, 52(31)
  053b538  cmpwi 7, 0, 0
  053b53c  bt 30, 0x53b554
  053b540  lwz 9, 48(31)
  053b544  addi 0, 9, -4
  053b548  stw 0, 48(31)
  053b54c  lwz 0, 52(31)
  053b550  stw 0, 144(31)
  053b554  lwz 0, 144(31)
  053b558  srwi 0, 0, 2
  053b55c  stw 0, 52(31)
  053b560  lwz 0, 52(31)
  053b564  cmpwi 7, 0, 0
  053b568  bt 30, 0x53b580
  053b56c  lwz 9, 48(31)
  053b570  addi 0, 9, -2
  053b574  stw 0, 48(31)
  053b578  lwz 0, 52(31)
  053b57c  stw 0, 144(31)
  053b580  lwz 0, 144(31)
  053b584  srwi 0, 0, 1
  053b588  stw 0, 52(31)
  053b58c  lwz 0, 52(31)
  053b590  cmpwi 7, 0, 0
  053b594  bt 30, 0x53b5a8
  053b598  lwz 9, 48(31)
  053b59c  addi 9, 9, -2
  053b5a0  stw 9, 64(31)
  053b5a4  b 0x53b5b8
  053b5a8  lwz 9, 48(31)
  053b5ac  lwz 0, 144(31)
  053b5b0  sub 9, 9, 0
  053b5b4  stw 9, 64(31)
  053b5b8  lwz 0, 64(31)
  053b5bc  mr 3, 0
  053b5c0  ld 11, 0(1)
  053b5c4  ld 31, -8(11)
  053b5c8  mr 1, 11
  053b5cc  blr

FUN_0053b5d0:   # 0x53b5d0, 0x54 bytes
  053b5d0  stdu 1, -128(1)
  053b5d4  mflr 0
  053b5d8  std 31, 120(1)
  053b5dc  std 0, 144(1)
  053b5e0  mr 31, 1
  053b5e4  mr 0, 3
  053b5e8  stw 0, 176(31)
  053b5ec  lwz 0, 176(31)
  053b5f0  clrldi 0, 0, 32
  053b5f4  mr 3, 0
  053b5f8  bl 0x53b4b4
  053b5fc  mr 0, 3
  053b600  subfic 0, 0, 31
  053b604  clrldi 0, 0, 32
  053b608  mr 3, 0
  053b60c  ld 11, 0(1)
  053b610  ld 0, 16(11)
  053b614  mtlr 0
  053b618  ld 31, -8(11)
  053b61c  mr 1, 11
  053b620  blr

FUN_0053b624:   # 0x53b624, 0x49c bytes
  053b624  stdu 1, -144(1)
  053b628  mflr 0
  053b62c  std 28, 112(1)
  053b630  std 29, 120(1)
  053b634  std 31, 136(1)
  053b638  std 0, 160(1)
  053b63c  mr 31, 1
  053b640  mr 0, 3
  053b644  mr 11, 4
  053b648  mr 10, 5
  053b64c  stw 0, 192(31)
  053b650  stw 11, 200(31)
  053b654  stw 10, 208(31)
  053b658  stw 6, 216(31)
  053b65c  stw 7, 224(31)
  053b660  stw 8, 232(31)
  053b664  stw 9, 240(31)
  053b668  lwz 0, 240(31)
  053b66c  cmpwi 7, 0, 1
  053b670  bf 30, 0x53b8d4
  053b674  lwz 0, 216(31)
  053b678  cmpwi 7, 0, 16
  053b67c  bf 30, 0x53b6d8
  053b680  lwz 10, 192(31)
  053b684  clrldi 9, 10, 32
  053b688  lwz 8, 0(9)
  053b68c  lwz 0, 200(31)
  053b690  clrldi 9, 0, 32
  053b694  lwz 0, 0(9)
  053b698  mr 11, 0
  053b69c  lwz 9, 232(31)
  053b6a0  lwz 0, 208(31)
  053b6a4  mullw 9, 9, 0
  053b6a8  lwz 0, 224(31)
  053b6ac  add 0, 9, 0
  053b6b0  slwi 0, 0, 2
  053b6b4  add 0, 11, 0
  053b6b8  clrldi 9, 0, 32
  053b6bc  lwz 0, 0(9)
  053b6c0  clrldi 9, 8, 32
  053b6c4  stw 0, 0(9)
  053b6c8  addi 0, 8, 4
  053b6cc  clrldi 9, 10, 32
  053b6d0  stw 0, 0(9)
  053b6d4  b 0x53baa0
  053b6d8  lwz 0, 216(31)
  053b6dc  cmpwi 7, 0, 8
  053b6e0  bf 30, 0x53b73c
  053b6e4  lwz 10, 192(31)
  053b6e8  clrldi 9, 10, 32
  053b6ec  lwz 8, 0(9)
  053b6f0  lwz 0, 200(31)
  053b6f4  clrldi 9, 0, 32
  053b6f8  lwz 0, 0(9)
  053b6fc  mr 11, 0
  053b700  lwz 9, 232(31)
  053b704  lwz 0, 208(31)
  053b708  mullw 9, 9, 0
  053b70c  lwz 0, 224(31)
  053b710  add 0, 9, 0
  053b714  slwi 0, 0, 2
  053b718  add 0, 11, 0
  053b71c  clrldi 9, 0, 32
  053b720  lwz 0, 0(9)
  053b724  clrldi 9, 8, 32
  053b728  stw 0, 0(9)
  053b72c  addi 0, 8, 4
  053b730  clrldi 9, 10, 32
  053b734  stw 0, 0(9)
  053b738  b 0x53baa0
  053b73c  lwz 0, 216(31)
  053b740  cmpwi 7, 0, 4
  053b744  bf 30, 0x53b7a0
  053b748  lwz 10, 192(31)
  053b74c  clrldi 9, 10, 32
  053b750  lwz 8, 0(9)
  053b754  lwz 0, 200(31)
  053b758  clrldi 9, 0, 32
  053b75c  lwz 0, 0(9)
  053b760  mr 11, 0
  053b764  lwz 9, 232(31)
  053b768  lwz 0, 208(31)
  053b76c  mullw 9, 9, 0
  053b770  lwz 0, 224(31)
  053b774  add 0, 9, 0
  053b778  slwi 0, 0, 2
  053b77c  add 0, 11, 0
  053b780  clrldi 9, 0, 32
  053b784  lwz 0, 0(9)
  053b788  clrldi 9, 8, 32
  053b78c  stw 0, 0(9)
  053b790  addi 0, 8, 4
  053b794  clrldi 9, 10, 32
  053b798  stw 0, 0(9)
  053b79c  b 0x53baa0
  053b7a0  lwz 0, 216(31)
  053b7a4  cmpwi 7, 0, 3
  053b7a8  bf 30, 0x53b8c0
  053b7ac  lwz 0, 192(31)
  053b7b0  clrldi 9, 0, 32
  053b7b4  lwz 10, 0(9)
  053b7b8  lwz 0, 200(31)
  053b7bc  clrldi 9, 0, 32
  053b7c0  lwz 11, 0(9)
  053b7c4  lwz 9, 232(31)
  053b7c8  lwz 0, 208(31)
  053b7cc  mullw 9, 9, 0
  053b7d0  lwz 0, 224(31)
  053b7d4  add 9, 9, 0
  053b7d8  lwz 0, 216(31)
  053b7dc  mullw 0, 9, 0
  053b7e0  add 0, 11, 0
  053b7e4  clrldi 9, 0, 32
  053b7e8  lbz 0, 0(9)
  053b7ec  clrldi 9, 10, 32
  053b7f0  stb 0, 0(9)
  053b7f4  addi 11, 10, 1
  053b7f8  lwz 0, 192(31)
  053b7fc  clrldi 9, 0, 32
  053b800  stw 11, 0(9)
  053b804  lwz 0, 192(31)
  053b808  clrldi 9, 0, 32
  053b80c  lwz 10, 0(9)
  053b810  lwz 0, 200(31)
  053b814  clrldi 9, 0, 32
  053b818  lwz 11, 0(9)
  053b81c  lwz 9, 232(31)
  053b820  lwz 0, 208(31)
  053b824  mullw 9, 9, 0
  053b828  lwz 0, 224(31)
  053b82c  add 9, 9, 0
  053b830  lwz 0, 216(31)
  053b834  mullw 0, 9, 0
  053b838  add 9, 11, 0
  053b83c  addi 0, 9, 1
  053b840  clrldi 9, 0, 32
  053b844  lbz 0, 0(9)
  053b848  clrldi 9, 10, 32
  053b84c  stb 0, 0(9)
  053b850  addi 11, 10, 1
  053b854  lwz 0, 192(31)
  053b858  clrldi 9, 0, 32
  053b85c  stw 11, 0(9)
  053b860  lwz 0, 192(31)
  053b864  clrldi 9, 0, 32
  053b868  lwz 10, 0(9)
  053b86c  lwz 0, 200(31)
  053b870  clrldi 9, 0, 32
  053b874  lwz 11, 0(9)
  053b878  lwz 9, 232(31)
  053b87c  lwz 0, 208(31)
  053b880  mullw 9, 9, 0
  053b884  lwz 0, 224(31)
  053b888  add 9, 9, 0
  053b88c  lwz 0, 216(31)
  053b890  mullw 0, 9, 0
  053b894  add 9, 11, 0
  053b898  addi 0, 9, 2
  053b89c  clrldi 9, 0, 32
  053b8a0  lbz 0, 0(9)
  053b8a4  clrldi 9, 10, 32
  053b8a8  stb 0, 0(9)
  053b8ac  addi 11, 10, 1
  053b8b0  lwz 0, 192(31)
  053b8b4  clrldi 9, 0, 32
  053b8b8  stw 11, 0(9)
  053b8bc  b 0x53baa0
  053b8c0  lwz 3, -29260(2)
  053b8c4  li 4, 0
  053b8c8  bl 0x5cef7c
  053b8cc  nop
  053b8d0  b 0x53baa0
  053b8d4  lwz 9, 240(31)
  053b8d8  addi 8, 9, -1
  053b8dc  lwz 0, 192(31)
  053b8e0  clrldi 7, 0, 32
  053b8e4  lwz 0, 200(31)
  053b8e8  clrldi 6, 0, 32
  053b8ec  lwz 0, 208(31)
  053b8f0  clrldi 9, 0, 32
  053b8f4  lwz 0, 216(31)
  053b8f8  clrldi 11, 0, 32
  053b8fc  lwz 0, 224(31)
  053b900  clrldi 10, 0, 32
  053b904  lwz 0, 232(31)
  053b908  clrldi 0, 0, 32
  053b90c  clrldi 29, 8, 32
  053b910  mr 3, 7
  053b914  mr 4, 6
  053b918  mr 5, 9
  053b91c  mr 6, 11
  053b920  mr 7, 10
  053b924  mr 8, 0
  053b928  mr 9, 29
  053b92c  bl 0x53b624
  053b930  lwz 9, 240(31)
  053b934  addi 0, 9, -2
  053b938  mr 9, 0
  053b93c  li 0, 1
  053b940  slw 9, 0, 9
  053b944  lwz 0, 224(31)
  053b948  add 8, 9, 0
  053b94c  lwz 9, 240(31)
  053b950  addi 7, 9, -1
  053b954  lwz 0, 192(31)
  053b958  clrldi 6, 0, 32
  053b95c  lwz 0, 200(31)
  053b960  clrldi 9, 0, 32
  053b964  lwz 0, 208(31)
  053b968  clrldi 11, 0, 32
  053b96c  lwz 0, 216(31)
  053b970  clrldi 10, 0, 32
  053b974  clrldi 8, 8, 32
  053b978  lwz 0, 232(31)
  053b97c  clrldi 0, 0, 32
  053b980  clrldi 29, 7, 32
  053b984  mr 3, 6
  053b988  mr 4, 9
  053b98c  mr 5, 11
  053b990  mr 6, 10
  053b994  mr 7, 8
  053b998  mr 8, 0
  053b99c  mr 9, 29
  053b9a0  bl 0x53b624
  053b9a4  lwz 9, 240(31)
  053b9a8  addi 0, 9, -2
  053b9ac  mr 9, 0
  053b9b0  li 0, 1
  053b9b4  slw 9, 0, 9
  053b9b8  lwz 0, 232(31)
  053b9bc  add 8, 9, 0
  053b9c0  lwz 9, 240(31)
  053b9c4  addi 7, 9, -1
  053b9c8  lwz 0, 192(31)
  053b9cc  clrldi 6, 0, 32
  053b9d0  lwz 0, 200(31)
  053b9d4  clrldi 9, 0, 32
  053b9d8  lwz 0, 208(31)
  053b9dc  clrldi 11, 0, 32
  053b9e0  lwz 0, 216(31)
  053b9e4  clrldi 10, 0, 32
  053b9e8  lwz 0, 224(31)
  053b9ec  clrldi 0, 0, 32
  053b9f0  clrldi 8, 8, 32
  053b9f4  clrldi 29, 7, 32
  053b9f8  mr 3, 6
  053b9fc  mr 4, 9
  053ba00  mr 5, 11
  053ba04  mr 6, 10
  053ba08  mr 7, 0
  053ba0c  mr 9, 29
  053ba10  bl 0x53b624
  053ba14  lwz 9, 240(31)
  053ba18  addi 0, 9, -2
  053ba1c  mr 9, 0
  053ba20  li 0, 1
  053ba24  slw 9, 0, 9
  053ba28  lwz 0, 224(31)
  053ba2c  add 8, 9, 0
  053ba30  lwz 9, 240(31)
  053ba34  addi 0, 9, -2
  053ba38  mr 9, 0
  053ba3c  li 0, 1
  053ba40  slw 9, 0, 9
  053ba44  lwz 0, 232(31)
  053ba48  add 7, 9, 0
  053ba4c  lwz 9, 240(31)
  053ba50  addi 6, 9, -1
  053ba54  lwz 0, 192(31)
  053ba58  clrldi 9, 0, 32
  053ba5c  lwz 0, 200(31)
  053ba60  clrldi 11, 0, 32
  053ba64  lwz 0, 208(31)
  053ba68  clrldi 10, 0, 32
  053ba6c  lwz 0, 216(31)
  053ba70  clrldi 0, 0, 32
  053ba74  clrldi 8, 8, 32
  053ba78  clrldi 29, 7, 32
  053ba7c  clrldi 28, 6, 32
  053ba80  mr 3, 9
  053ba84  mr 4, 11
  053ba88  mr 5, 10
  053ba8c  mr 6, 0
  053ba90  mr 7, 8
  053ba94  mr 8, 29
  053ba98  mr 9, 28
  053ba9c  bl 0x53b624
  053baa0  ld 11, 0(1)
  053baa4  ld 0, 16(11)
  053baa8  mtlr 0
  053baac  ld 28, -32(11)
  053bab0  ld 29, -24(11)
  053bab4  ld 31, -8(11)
  053bab8  mr 1, 11
  053babc  blr

FUN_0053bac0:   # 0x53bac0, 0x33c bytes
  053bac0  stdu 1, -176(1)
  053bac4  mflr 0
  053bac8  std 28, 144(1)
  053bacc  std 29, 152(1)
  053bad0  std 31, 168(1)
  053bad4  std 0, 192(1)
  053bad8  mr 31, 1
  053badc  mr 0, 3
  053bae0  mr 9, 4
  053bae4  mr 11, 5
  053bae8  mr 10, 6
  053baec  mr 8, 7
  053baf0  stw 0, 224(31)
  053baf4  stw 9, 232(31)
  053baf8  stw 11, 240(31)
  053bafc  stw 10, 248(31)
  053bb00  stw 8, 256(31)
  053bb04  lwz 9, 240(31)
  053bb08  lwz 0, 248(31)
  053bb0c  cmpw 7, 9, 0
  053bb10  bf 30, 0x53bb74
  053bb14  lwz 0, 240(31)
  053bb18  clrldi 0, 0, 32
  053bb1c  mr 3, 0
  053bb20  bl 0x53b5d0
  053bb24  mr 0, 3
  053bb28  mr 9, 0
  053bb2c  addi 9, 9, 1
  053bb30  addi 0, 31, 224
  053bb34  clrldi 11, 0, 32
  053bb38  addi 0, 31, 232
  053bb3c  clrldi 10, 0, 32
  053bb40  lwz 0, 240(31)
  053bb44  clrldi 8, 0, 32
  053bb48  lwz 0, 256(31)
  053bb4c  clrldi 0, 0, 32
  053bb50  clrldi 9, 9, 32
  053bb54  mr 3, 11
  053bb58  mr 4, 10
  053bb5c  mr 5, 8
  053bb60  mr 6, 0
  053bb64  li 7, 0
  053bb68  li 8, 0
  053bb6c  bl 0x53b624
  053bb70  b 0x53bddc
  053bb74  lwz 0, 240(31)
  053bb78  lwz 9, 248(31)
  053bb7c  cmplw 7, 0, 9
  053bb80  bf 29, 0x53bca8
  053bb84  lwz 0, 240(31)
  053bb88  clrldi 0, 0, 32
  053bb8c  mr 3, 0
  053bb90  bl 0x53b5d0
  053bb94  mr 0, 3
  053bb98  mr 28, 0
  053bb9c  lwz 0, 240(31)
  053bba0  clrldi 0, 0, 32
  053bba4  mr 3, 0
  053bba8  bl 0x53b5d0
  053bbac  mr 0, 3
  053bbb0  mr 29, 0
  053bbb4  lwz 0, 248(31)
  053bbb8  clrldi 0, 0, 32
  053bbbc  mr 3, 0
  053bbc0  bl 0x53b5d0
  053bbc4  mr 0, 3
  053bbc8  sub 0, 29, 0
  053bbcc  sub 0, 28, 0
  053bbd0  stw 0, 124(31)
  053bbd4  li 0, 0
  053bbd8  stw 0, 120(31)
  053bbdc  b 0x53bc40
  053bbe0  lwz 9, 124(31)
  053bbe4  lwz 0, 120(31)
  053bbe8  slw 7, 0, 9
  053bbec  lwz 9, 124(31)
  053bbf0  addi 9, 9, 1
  053bbf4  addi 0, 31, 224
  053bbf8  clrldi 11, 0, 32
  053bbfc  addi 0, 31, 232
  053bc00  clrldi 10, 0, 32
  053bc04  lwz 0, 240(31)
  053bc08  clrldi 8, 0, 32
  053bc0c  lwz 0, 256(31)
  053bc10  clrldi 0, 0, 32
  053bc14  clrldi 7, 7, 32
  053bc18  clrldi 9, 9, 32
  053bc1c  mr 3, 11
  053bc20  mr 4, 10
  053bc24  mr 5, 8
  053bc28  mr 6, 0
  053bc2c  li 8, 0
  053bc30  bl 0x53b624
  053bc34  lwz 9, 120(31)
  053bc38  addi 0, 9, 1
  053bc3c  stw 0, 120(31)
  053bc40  lwz 0, 240(31)
  053bc44  clrldi 0, 0, 32
  053bc48  mr 3, 0
  053bc4c  bl 0x53b5d0
  053bc50  mr 0, 3
  053bc54  mr 29, 0
  053bc58  lwz 0, 248(31)
  053bc5c  clrldi 0, 0, 32
  053bc60  mr 3, 0
  053bc64  bl 0x53b5d0
  053bc68  mr 0, 3
  053bc6c  sub 0, 29, 0
  053bc70  mr 9, 0
  053bc74  li 0, 1
  053bc78  slw 9, 0, 9
  053bc7c  li 0, 1
  053bc80  stb 0, 129(31)
  053bc84  lwz 0, 120(31)
  053bc88  cmplw 7, 9, 0
  053bc8c  bt 29, 0x53bc98
  053bc90  li 0, 0
  053bc94  stb 0, 129(31)
  053bc98  lbz 0, 129(31)
  053bc9c  cmpwi 7, 0, 0
  053bca0  bf 30, 0x53bbe0
  053bca4  b 0x53bddc
  053bca8  lwz 0, 240(31)
  053bcac  lwz 9, 248(31)
  053bcb0  cmplw 7, 0, 9
  053bcb4  bf 28, 0x53bddc
  053bcb8  lwz 0, 248(31)
  053bcbc  clrldi 0, 0, 32
  053bcc0  mr 3, 0
  053bcc4  bl 0x53b5d0
  053bcc8  mr 0, 3
  053bccc  mr 28, 0
  053bcd0  lwz 0, 248(31)
  053bcd4  clrldi 0, 0, 32
  053bcd8  mr 3, 0
  053bcdc  bl 0x53b5d0
  053bce0  mr 0, 3
  053bce4  mr 29, 0
  053bce8  lwz 0, 240(31)
  053bcec  clrldi 0, 0, 32
  053bcf0  mr 3, 0
  053bcf4  bl 0x53b5d0
  053bcf8  mr 0, 3
  053bcfc  sub 0, 29, 0
  053bd00  sub 0, 28, 0
  053bd04  stw 0, 116(31)
  053bd08  li 0, 0
  053bd0c  stw 0, 112(31)
  053bd10  b 0x53bd78
  053bd14  lwz 9, 116(31)
  053bd18  lwz 0, 112(31)
  053bd1c  slw 7, 0, 9
  053bd20  lwz 9, 116(31)
  053bd24  addi 9, 9, 1
  053bd28  addi 0, 31, 224
  053bd2c  clrldi 11, 0, 32
  053bd30  addi 0, 31, 232
  053bd34  clrldi 10, 0, 32
  053bd38  lwz 0, 240(31)
  053bd3c  clrldi 8, 0, 32
  053bd40  lwz 0, 256(31)
  053bd44  clrldi 0, 0, 32
  053bd48  clrldi 29, 7, 32
  053bd4c  clrldi 9, 9, 32
  053bd50  mr 3, 11
  053bd54  mr 4, 10
  053bd58  mr 5, 8
  053bd5c  mr 6, 0
  053bd60  li 7, 0
  053bd64  mr 8, 29
  053bd68  bl 0x53b624
  053bd6c  lwz 9, 112(31)
  053bd70  addi 0, 9, 1
  053bd74  stw 0, 112(31)
  053bd78  lwz 0, 248(31)
  053bd7c  clrldi 0, 0, 32
  053bd80  mr 3, 0
  053bd84  bl 0x53b5d0
  053bd88  mr 0, 3
  053bd8c  mr 29, 0
  053bd90  lwz 0, 240(31)
  053bd94  clrldi 0, 0, 32
  053bd98  mr 3, 0
  053bd9c  bl 0x53b5d0
  053bda0  mr 0, 3
  053bda4  sub 0, 29, 0
  053bda8  mr 9, 0
  053bdac  li 0, 1
  053bdb0  slw 9, 0, 9
  053bdb4  li 0, 1
  053bdb8  stb 0, 128(31)
  053bdbc  lwz 0, 112(31)
  053bdc0  cmplw 7, 9, 0
  053bdc4  bt 29, 0x53bdd0
  053bdc8  li 0, 0
  053bdcc  stb 0, 128(31)
  053bdd0  lbz 0, 128(31)
  053bdd4  cmpwi 7, 0, 0
  053bdd8  bf 30, 0x53bd14
  053bddc  ld 11, 0(1)
  053bde0  ld 0, 16(11)
  053bde4  mtlr 0
  053bde8  ld 28, -32(11)
  053bdec  ld 29, -24(11)
  053bdf0  ld 31, -8(11)
  053bdf4  mr 1, 11
  053bdf8  blr

FUN_0053bdfc:   # 0x53bdfc, 0xfc bytes
  053bdfc  lwz 9, -29256(2)
  053be00  mflr 0
  053be04  stdu 1, -160(1)
  053be08  std 0, 176(1)
  053be0c  std 28, 128(1)
  053be10  std 29, 136(1)
  053be14  lwz 0, 0(9)
  053be18  mr 28, 3
  053be1c  std 30, 144(1)
  053be20  cmpwi 7, 0, 1
  053be24  std 31, 152(1)
  053be28  std 27, 120(1)
  053be2c  mr 30, 5
  053be30  mr 31, 4
  053be34  li 29, 2
  053be38  bf 30, 0x53be64
  053be3c  lwz 27, -29252(2)
  053be40  li 4, 0
  053be44  li 29, 2000
  053be48  lwz 9, 0(27)
  053be4c  addi 3, 9, 28
  053be50  clrldi 9, 9, 32
  053be54  clrldi 3, 3, 32
  053be58  lwz 0, 24(9)
  053be5c  cmpwi 7, 0, 1
  053be60  bt 30, 0x53be8c
  053be64  ld 0, 176(1)
  053be68  clrldi 3, 29, 32
  053be6c  ld 27, 120(1)
  053be70  ld 28, 128(1)
  053be74  mtlr 0
  053be78  ld 29, 136(1)
  053be7c  ld 30, 144(1)
  053be80  ld 31, 152(1)
  053be84  addi 1, 1, 160
  053be88  blr
  053be8c  bl 0x552e60
  053be90  nop
  053be94  clrldi 3, 3, 32
  053be98  bl 0x540808
  053be9c  nop
  053bea0  clrldi 5, 30, 32
  053bea4  mr 29, 3
  053bea8  clrldi 4, 31, 32
  053beac  cmpwi 7, 29, 0
  053beb0  clrldi 3, 28, 32
  053beb4  bf 30, 0x53be64
  053beb8  bl 0x5427d0
  053bebc  nop
  053bec0  li 4, 0
  053bec4  mr 29, 3
  053bec8  lwz 3, 0(27)
  053becc  addi 3, 3, 28
  053bed0  clrldi 3, 3, 32
  053bed4  bl 0x552c24
  053bed8  nop
  053bedc  clrldi 3, 3, 32
  053bee0  bl 0x540808
  053bee4  nop
  053bee8  cmpdi 3, 0
  053beec  bt 2, 0x53be64
  053bef0  mr 29, 3
  053bef4  b 0x53be64

FUN_0053bef8:   # 0x53bef8, 0x140 bytes
  053bef8  lwz 9, -29256(2)
  053befc  mflr 0
  053bf00  stdu 1, -144(1)
  053bf04  std 0, 160(1)
  053bf08  std 30, 128(1)
  053bf0c  std 28, 112(1)
  053bf10  lwz 0, 0(9)
  053bf14  mr 30, 3
  053bf18  std 29, 120(1)
  053bf1c  cmpwi 7, 0, 1
  053bf20  std 31, 136(1)
  053bf24  li 11, 2000
  053bf28  bf 30, 0x53c010
  053bf2c  lwz 28, -29252(2)
  053bf30  lwz 3, 0(28)
  053bf34  clrldi 9, 3, 32
  053bf38  lwz 0, 24(9)
  053bf3c  cmpwi 7, 0, 1
  053bf40  bf 30, 0x53bfec
  053bf44  lwz 31, -29248(2)
  053bf48  addi 3, 3, 28
  053bf4c  li 4, 0
  053bf50  clrldi 3, 3, 32
  053bf54  lwz 0, 0(31)
  053bf58  cmpwi 7, 0, 0
  053bf5c  bt 30, 0x53c010
  053bf60  bl 0x552e60
  053bf64  nop
  053bf68  li 29, 15
  053bf6c  clrldi 3, 3, 32
  053bf70  bl 0x540808
  053bf74  nop
  053bf78  cmpwi 7, 3, 0
  053bf7c  mr 11, 3
  053bf80  bf 30, 0x53bfec
  053bf84  lwz 0, 0(31)
  053bf88  extsw 3, 30
  053bf8c  cmpwi 7, 0, 0
  053bf90  clrldi 9, 0, 32
  053bf94  bt 30, 0x53bfb8
  053bf98  lwz 9, 224(9)
  053bf9c  lwz 0, 0(9)
  053bfa0  std 2, 40(1)
  053bfa4  mtctr 0
  053bfa8  lwz 2, 4(9)
  053bfac  bctrl
  053bfb0  ld 2, 40(1)
  053bfb4  mr 29, 3
  053bfb8  lwz 3, 0(28)
  053bfbc  li 4, 0
  053bfc0  addi 3, 3, 28
  053bfc4  clrldi 3, 3, 32
  053bfc8  bl 0x552c24
  053bfcc  nop
  053bfd0  clrldi 3, 3, 32
  053bfd4  bl 0x540808
  053bfd8  nop
  053bfdc  mr 11, 29
  053bfe0  cmpdi 3, 0
  053bfe4  bt 2, 0x53bfec
  053bfe8  mr 11, 3
  053bfec  ld 0, 160(1)
  053bff0  clrldi 3, 11, 32
  053bff4  ld 28, 112(1)
  053bff8  ld 29, 120(1)
  053bffc  mtlr 0
  053c000  ld 30, 128(1)
  053c004  ld 31, 136(1)
  053c008  addi 1, 1, 144
  053c00c  blr
  053c010  ld 0, 160(1)
  053c014  li 11, 2
  053c018  ld 28, 112(1)
  053c01c  clrldi 3, 11, 32
  053c020  ld 29, 120(1)
  053c024  ld 30, 128(1)
  053c028  mtlr 0
  053c02c  ld 31, 136(1)
  053c030  addi 1, 1, 144
  053c034  blr

FUN_0053c038:   # 0x53c038, 0xdc bytes
  053c038  lwz 9, -29256(2)
  053c03c  mflr 0
  053c040  stdu 1, -144(1)
  053c044  std 0, 160(1)
  053c048  std 29, 120(1)
  053c04c  std 31, 136(1)
  053c050  lwz 0, 0(9)
  053c054  mr 31, 3
  053c058  std 30, 128(1)
  053c05c  cmpwi 7, 0, 1
  053c060  li 29, 2
  053c064  bf 30, 0x53c090
  053c068  lwz 30, -29252(2)
  053c06c  li 4, 0
  053c070  li 29, 2000
  053c074  lwz 9, 0(30)
  053c078  addi 3, 9, 28
  053c07c  clrldi 9, 9, 32
  053c080  clrldi 3, 3, 32
  053c084  lwz 0, 24(9)
  053c088  cmpwi 7, 0, 1
  053c08c  bt 30, 0x53c0b0
  053c090  ld 0, 160(1)
  053c094  clrldi 3, 29, 32
  053c098  ld 30, 128(1)
  053c09c  ld 29, 120(1)
  053c0a0  mtlr 0
  053c0a4  ld 31, 136(1)
  053c0a8  addi 1, 1, 144
  053c0ac  blr
  053c0b0  bl 0x552e60
  053c0b4  nop
  053c0b8  clrldi 3, 3, 32
  053c0bc  bl 0x540808
  053c0c0  nop
  053c0c4  mr 29, 3
  053c0c8  clrldi 3, 31, 32
  053c0cc  cmpwi 7, 29, 0
  053c0d0  bf 30, 0x53c090
  053c0d4  bl 0x5426d4
  053c0d8  nop
  053c0dc  li 4, 0
  053c0e0  mr 29, 3
  053c0e4  lwz 3, 0(30)
  053c0e8  addi 3, 3, 28
  053c0ec  clrldi 3, 3, 32
  053c0f0  bl 0x552c24
  053c0f4  nop
  053c0f8  clrldi 3, 3, 32
  053c0fc  bl 0x540808
  053c100  nop
  053c104  cmpdi 3, 0
  053c108  bt 2, 0x53c090
  053c10c  mr 29, 3
  053c110  b 0x53c090

FUN_0053c114:   # 0x53c114, 0xdc bytes
  053c114  lwz 9, -29256(2)
  053c118  mflr 0
  053c11c  stdu 1, -144(1)
  053c120  std 0, 160(1)
  053c124  std 29, 120(1)
  053c128  std 31, 136(1)
  053c12c  lwz 0, 0(9)
  053c130  mr 31, 3
  053c134  std 30, 128(1)
  053c138  cmpwi 7, 0, 1
  053c13c  li 29, 2
  053c140  bf 30, 0x53c16c
  053c144  lwz 30, -29252(2)
  053c148  li 4, 0
  053c14c  li 29, 2000
  053c150  lwz 9, 0(30)
  053c154  addi 3, 9, 28
  053c158  clrldi 9, 9, 32
  053c15c  clrldi 3, 3, 32
  053c160  lwz 0, 24(9)
  053c164  cmpwi 7, 0, 1
  053c168  bt 30, 0x53c18c
  053c16c  ld 0, 160(1)
  053c170  clrldi 3, 29, 32
  053c174  ld 30, 128(1)
  053c178  ld 29, 120(1)
  053c17c  mtlr 0
  053c180  ld 31, 136(1)
  053c184  addi 1, 1, 144
  053c188  blr
  053c18c  bl 0x552e60
  053c190  nop
  053c194  clrldi 3, 3, 32
  053c198  bl 0x540808
  053c19c  nop
  053c1a0  mr 29, 3
  053c1a4  clrldi 3, 31, 32
  053c1a8  cmpwi 7, 29, 0
  053c1ac  bf 30, 0x53c16c
  053c1b0  bl 0x543b9c
  053c1b4  nop
  053c1b8  li 4, 0
  053c1bc  mr 29, 3
  053c1c0  lwz 3, 0(30)
  053c1c4  addi 3, 3, 28
  053c1c8  clrldi 3, 3, 32
  053c1cc  bl 0x552c24
  053c1d0  nop
  053c1d4  clrldi 3, 3, 32
  053c1d8  bl 0x540808
  053c1dc  nop
  053c1e0  cmpdi 3, 0
  053c1e4  bt 2, 0x53c16c
  053c1e8  mr 29, 3
  053c1ec  b 0x53c16c
