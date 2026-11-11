#pragma once
/* Support for Ghidra-isms in the decompiled bodies (C++, 32-bit big-endian PowerPC layout).
   Primitive typedefs (undefined4, uint, ...) live in ghidra_types.h. */
#include <stddef.h>
#include <stdint.h>
#ifdef qword
#undef qword   /* SDK vector-type macro; Ghidra means an 8-byte integer */
#endif
typedef void *pointer;
typedef void *pointer32;
typedef unsigned short wchar16;

/* ---- N-byte blob: Ghidra's undefined1 x[N] locals (vector registers, stack pieces) ---- */
template <int N> struct GPiece {
    unsigned char b[N];
    GPiece() {}
    GPiece(unsigned long long v) { for (int i = 0; i < N; i++) b[N - 1 - i] = i < 8 ? (unsigned char)(v >> (8 * i)) : 0; }
    template <int O, int S> struct sized { typedef GPiece<S> T; };
    /* x._O_S_ -> x.piece<O,S>() : S bytes at byte offset O */
    template <int O, int S> typename sized<O, S>::T &piece() { return *(typename sized<O, S>::T *)(b + O); }
    GPiece op(const GPiece &o, int k) const { GPiece r; for (int i = 0; i < N; i++) r.b[i] = k == 0 ? (b[i] | o.b[i]) : k == 1 ? (b[i] & o.b[i]) : (b[i] ^ o.b[i]); return r; }
    GPiece operator|(const GPiece &o) const { return op(o, 0); }
    GPiece operator&(const GPiece &o) const { return op(o, 1); }
    GPiece operator^(const GPiece &o) const { return op(o, 2); }
    GPiece operator~() const { GPiece r; for (int i = 0; i < N; i++) r.b[i] = ~b[i]; return r; }
    GPiece operator<<(int s) const { GPiece r(0); for (int i = 0; i < N * 8 - s; i++) if (bit(i)) r.set(i + s); return r; }
    GPiece operator>>(int s) const { GPiece r(0); for (int i = s; i < N * 8; i++) if (bit(i)) r.set(i - s); return r; }
    bool bit(int i) const { return (b[N - 1 - i / 8] >> (i % 8)) & 1; }
    void set(int i) { b[N - 1 - i / 8] |= 1 << (i % 8); }
    bool operator==(const GPiece &o) const { for (int i = 0; i < N; i++) if (b[i] != o.b[i]) return false; return true; }
    bool operator!=(const GPiece &o) const { return !(*this == o); }
    operator unsigned long long() const { unsigned long long v = 0; for (int i = N < 8 ? 0 : N - 8; i < N; i++) v = (v << 8) | b[i]; return v; }
};
/* exact-size pieces read as plain integers/floats */
template <> struct GPiece<1>; template <> struct GPiece<2>; template <> struct GPiece<4>; template <> struct GPiece<8>;
#define GP_SCALAR(n, T) template <> struct GPiece<n> { T v; GPiece() {} GPiece(T x) : v(x) {} operator T &() { return v; } \
    template <int O, int S> GPiece<S> &piece() { return *(GPiece<S> *)((unsigned char *)&v + O); } };
GP_SCALAR(1, uint8_t) GP_SCALAR(2, uint16_t) GP_SCALAR(4, uint32_t) GP_SCALAR(8, uint64_t)
typedef GPiece<16> v128;

/* ---- width helpers ---- */
template <class T> static inline T ABS(T x) { return x < 0 ? -x : x; }
template <class T> static inline T SQRT(T x) { return __builtin_sqrt(x); }
template <class T> static inline int LZCOUNT(T x) { return x ? __builtin_clzll((unsigned long long)x) - (64 - 8 * (int)sizeof(T)) : 8 * (int)sizeof(T); }
template <class T> static inline int POPCOUNT(T x) { return __builtin_popcountll((unsigned long long)x); }
#define CONCAT11(a, b) ((uint16_t)(((uint16_t)(uint8_t)(a) << 8) | (uint8_t)(b)))
#define CONCAT12(a, b) ((uint32_t)(((uint32_t)(uint8_t)(a) << 16) | (uint16_t)(b)))
#define CONCAT13(a, b) ((uint32_t)(((uint32_t)(uint8_t)(a) << 24) | ((uint32_t)(b) & 0xffffff)))
#define CONCAT14(a, b) ((uint64_t)(((uint64_t)(uint8_t)(a) << 32) | (uint32_t)(b)))
#define CONCAT15(a, b) ((uint64_t)(((uint64_t)(uint8_t)(a) << 40) | ((uint64_t)(b) & 0xffffffffffULL)))
#define CONCAT16(a, b) ((uint64_t)(((uint64_t)(uint8_t)(a) << 48) | ((uint64_t)(b) & 0xffffffffffffULL)))
#define CONCAT17(a, b) ((uint64_t)(((uint64_t)(uint8_t)(a) << 56) | ((uint64_t)(b) & 0xffffffffffffffULL)))
#define CONCAT21(a, b) ((uint32_t)(((uint32_t)(uint16_t)(a) << 8) | (uint8_t)(b)))
#define CONCAT22(a, b) ((uint32_t)(((uint32_t)(uint16_t)(a) << 16) | (uint16_t)(b)))
#define CONCAT31(a, b) ((uint32_t)((((uint32_t)(a) & 0xffffff) << 8) | (uint8_t)(b)))
#define CONCAT44(a, b) ((uint64_t)(((uint64_t)(uint32_t)(a) << 32) | (uint32_t)(b)))
#define SUB21(x, o) ((uint8_t)((uint16_t)(x) >> (8 * (o))))
#define SUB41(x, o) ((uint8_t)((uint32_t)(x) >> (8 * (o))))
#define SUB42(x, o) ((uint16_t)((uint32_t)(x) >> (8 * (o))))
#define SUB43(x, o) ((uint32_t)((uint32_t)(x) >> (8 * (o))) & 0xffffff)
#define SUB81(x, o) ((uint8_t)((uint64_t)(x) >> (8 * (o))))
#define SUB84(x, o) ((uint32_t)((uint64_t)(x) >> (8 * (o))))
#define SUB164(x, o) ((uint32_t)((GPiece<16>)(x) >> (8 * (o))))
#define SUB168(x, o) ((uint64_t)((GPiece<16>)(x) >> (8 * (o))))
#define ZEXT48(x) ((uint64_t)(uint32_t)(x))
#define ZEXT416(x) (GPiece<16>((unsigned long long)(uint32_t)(x)))
#define ZEXT816(x) (GPiece<16>((unsigned long long)(x)))

/* ---- AltiVec / PPC instructions Ghidra prints as pseudo-functions (declared only) ---- */
#define GHIDRA_V(name) template <class... A> v128 name(A...);
GHIDRA_V(loadVectorLeftIndexed) GHIDRA_V(loadVectorRightIndexed) GHIDRA_V(loadVectorElementWordIndexed)
GHIDRA_V(vectorShiftLeftIntegerWord) GHIDRA_V(vectorMultiplyAddFloatingPoint) GHIDRA_V(vectorConvertToSignedFixedPointWordSaturate)
GHIDRA_V(vectorConvertFromSignedFixedPointWord) GHIDRA_V(vectorPermute) GHIDRA_V(vectorSplatHalfWord)
GHIDRA_V(vectorNegativeMultiplySubtractFloatingPoint) GHIDRA_V(vectorAddFloatingPoint) GHIDRA_V(vectorConditionalSelect)
GHIDRA_V(vectorSubtractFloatingPoint) GHIDRA_V(vectorCompareGreaterThanFloatingPoint) GHIDRA_V(vectorMergeHighWord)
GHIDRA_V(vectorReciprocalEstimateFloatingPoint) GHIDRA_V(vectorMergeLowWord) GHIDRA_V(vectorLogicalAnd)
GHIDRA_V(vectorConvertFromUnsignedFixedPointWord) GHIDRA_V(vectorShiftRightAlgebraicWord) GHIDRA_V(vectorCompareEqualToFloatingPoint)
GHIDRA_V(vectorShiftRightWord) GHIDRA_V(vectorReciprocalSquareRootEstimateFloatingPoint) GHIDRA_V(vectorSubtractUnsignedWordModulo)
GHIDRA_V(vectorCompareGreaterThanSignedWord) GHIDRA_V(vectorCompareGreaterThanOrEqualToFloatingPoint) GHIDRA_V(vectorLogicalAndWithComplement)
GHIDRA_V(vectorConvertToUnsignedFixedPointWordSaturate) GHIDRA_V(vectorMultiplyOddUnsignedHalfWord) GHIDRA_V(vectorCompareEqualToUnsignedWord)
GHIDRA_V(vectorRotateLeftIntegerWord) GHIDRA_V(vectorUnpackHighSignedHalfWord) GHIDRA_V(vectorMultiplySumSignedHalfWordModulo)
GHIDRA_V(vectorUnpackLowSignedHalfWord) GHIDRA_V(vectorPackSignedWordSignedSaturate) GHIDRA_V(vectorCompareGreaterThanUnsignedWord)
GHIDRA_V(vectorSplatImmediateSignedHalfWord) GHIDRA_V(vectorMultiplyOddSignedHalfWord) GHIDRA_V(vectorMultiplyEvenSignedHalfWord)
GHIDRA_V(vectorLogicalOr) GHIDRA_V(vectorLogicalXor) GHIDRA_V(vectorSplatWord) GHIDRA_V(vectorAddUnsignedWordModulo)
#define GHIDRA_F(name) template <class... A> unsigned long long name(A...);
GHIDRA_F(storeVectorElementHalfWordIndexed) GHIDRA_F(storeVectorElementWordIndexed) GHIDRA_F(storeVectorElementByteIndexed)
GHIDRA_F(storeWordConditionalIndexed) GHIDRA_F(storeDoubleWordConditionalIndexed) GHIDRA_F(trapWord) GHIDRA_F(trapDoubleWord)
GHIDRA_F(sync) GHIDRA_F(instructionSynchronize) GHIDRA_F(syscall) GHIDRA_F(dataCacheBlockTouch) GHIDRA_F(dataCacheBlockClearToZero)
GHIDRA_F(dataCacheBlockStore) GHIDRA_F(dataCacheBlockFlush) GHIDRA_F(eieio) GHIDRA_F(halt_baddata) GHIDRA_F(halt_unimplemented)

/* ---- compiler idioms the generator rewrites ---- */
/* cntlzw x; sldi 58; sradi 63  ->  all ones when x == 0 (used as a branchless ?: mask) */
template <class T> static inline long long ZERO_MASK(T x) { return x == 0 ? -1LL : 0LL; }
/* a float compared through its bits: sign-magnitude -> two's-complement order (x < y  <=>  FLOAT_ORDER(x) < FLOAT_ORDER(y)) */
template <class T> static inline int FLOAT_ORDER(T v) { int i; __builtin_memcpy(&i, &v, 4); return (i ^ (int)((unsigned)(i >> 31) >> 1)) - (i >> 31); }

/* AltiVec vspltw as Ghidra prints it: broadcast one 32-bit word to all four lanes */
#define SPLAT(x) (x)
