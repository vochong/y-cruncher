/* ParseException.cpp
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 04/11/2017
 * Last Modified    : 04/11/2017
 * 
 */

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  Dependencies
#include "PublicLibs/CompilerSettings.h"
#include "ParseException.h"
//#include "ParseThrower.h"
namespace ymp{
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
const char ParseException::TYPENAME[] = "ParseException";
ExceptionFactoryT<ParseException> ParseException_Instance;
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
const char EndOfStreamException::TYPENAME[] = "EndOfStreamException";
ExceptionFactoryT<EndOfStreamException> EndOfStreamException_Instance;
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
EndOfStreamException::EndOfStreamException()
    : ParseException("Unexpected end of stream.")
{}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
const char KeyNotFoundException::TYPENAME[] = "KeyNotFoundException";
ExceptionFactoryT<KeyNotFoundException> KeyNotFoundException_Instance;
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
}
