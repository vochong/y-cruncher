/* u64h16_forward_intrinsics_Default.h
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 01/19/2011
 * Last Modified    : 01/23/2016
 * 
 */

#ifndef ydv_u64h16_forward_intrinsics_Default_H
#define ydv_u64h16_forward_intrinsics_Default_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#include "PublicLibs/CompilerSettings.h"
#include "PublicLibs/Types.h"
namespace DigitViewer{
namespace u64h16{
    using namespace ymp;
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
template <bool ascii> YM_FORCE_INLINE
void convert_h16x1_forward_Default(char str[16], u64_t hex){
    register u64_t a0, a1;
    register u64_t b0, b1;

    a0 = hex;
    a1 = a0 >> 32;
    a0 &= 0xffffffff;

    b0 = a0 & 0x00000000ffff0000ull;
    b1 = a1 & 0x00000000ffff0000ull;
    a0 = a0 & 0x000000000000ffffull;
    a1 = a1 & 0x000000000000ffffull;
    b0 >>= 16;
    b1 >>= 16;
    a0 <<= 32;
    a1 <<= 32;
    a0 |= b0;
    a1 |= b1;

    b0 = a0 & 0x0000ff000000ff00ull;
    b1 = a1 & 0x0000ff000000ff00ull;
    a0 = a0 & 0x000000ff000000ffull;
    a1 = a1 & 0x000000ff000000ffull;
    b0 >>= 8;
    b1 >>= 8;
    a0 <<= 16;
    a1 <<= 16;
    a0 |= b0;
    a1 |= b1;

    b0 = a0 & 0x00f000f000f000f0ull;
    b1 = a1 & 0x00f000f000f000f0ull;
    a0 = a0 & 0x000f000f000f000full;
    a1 = a1 & 0x000f000f000f000full;
    b0 >>= 4;
    b1 >>= 4;
    a0 <<= 8;
    a1 <<= 8;
    a0 |= b0;
    a1 |= b1;

    if (ascii){
        b0 = a0 + 0x0606060606060606ull;
        b1 = a1 + 0x0606060606060606ull;
        b0 = b0 & 0xf0f0f0f0f0f0f0f0ull;
        b1 = b1 & 0xf0f0f0f0f0f0f0f0ull;
        b0 >>= 4;
        b1 >>= 4;
        b0 *= 39;
        b1 *= 39;
        a0 += b0;
        a1 += b1;

        a0 += 0x3030303030303030ull;
        a1 += 0x3030303030303030ull;
    }

    ((u64_t*)str)[1] = a0;
    ((u64_t*)str)[0] = a1;
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
}
}
#endif
