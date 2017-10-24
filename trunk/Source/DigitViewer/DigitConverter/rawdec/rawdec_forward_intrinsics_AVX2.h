/* rawdec_forward_intrinsics_AVX2.h
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 01/23/2016
 * Last Modified    : 01/24/2016
 * 
 */

#ifndef ydv_rawdec_forward_intrinsics_AVX2_H
#define ydv_rawdec_forward_intrinsics_AVX2_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#include <immintrin.h>
#include "PublicLibs/CompilerSettings.h"
#include "PublicLibs/Types.h"
namespace DigitViewer{
namespace rawdec{
    using namespace ymp;
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
YM_FORCE_INLINE void convert_dec32_forward_AVX2(char str[32]){
    const __m256i LIMIT = _mm256_set1_epi8('0');

    __m256i* T = (__m256i*)str;
    __m256i a0;

    a0 = _mm256_add_epi8(LIMIT, T[0]);

    T[0] = a0;
}
YM_FORCE_INLINE void convert_dec64_forward_AVX2(char str[64]){
    const __m256i LIMIT = _mm256_set1_epi8('0');

    __m256i* T = (__m256i*)str;
    __m256i a0, a1;

    a0 = _mm256_add_epi8(LIMIT, T[0]);
    a1 = _mm256_add_epi8(LIMIT, T[1]);

    T[0] = a0;
    T[1] = a1;
}
YM_FORCE_INLINE void convert_dec128_forward_AVX2(char str[128]){
    const __m256i LIMIT = _mm256_set1_epi8('0');

    __m256i* T = (__m256i*)str;
    __m256i a0, a1, a2, a3;

    a0 = _mm256_add_epi8(LIMIT, T[0]);
    a1 = _mm256_add_epi8(LIMIT, T[1]);
    a2 = _mm256_add_epi8(LIMIT, T[2]);
    a3 = _mm256_add_epi8(LIMIT, T[3]);

    T[0] = a0;
    T[1] = a1;
    T[2] = a2;
    T[3] = a3;
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
}
}
#endif