/* rawdec.h
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 04/04/2012
 * Last Modified    : 01/24/2016
 * 
 */

#ifndef ydv_rawdec_H
#define ydv_rawdec_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#include "PublicLibs/Types.h"
namespace DigitViewer{
    using namespace ymp;
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void raw_to_dec(char* T, upL_t L);
bool dec_to_raw(char* T, upL_t L);
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
}
#endif
