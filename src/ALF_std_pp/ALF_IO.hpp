/** \file ALF_IO.hpp
* Macros and functions concerning I/O (input/output)
**/

#ifndef ALF_IO_hpp
#define ALF_IO_hpp

#include "ALF_common.hpp"

#include <string>

extern "C"{
    #include "ALF_std/ALF_IO.h"
}

namespace ALF{
    namespace IO{
        char *raw_input(const char* outMessage);
        
        std::string *raw_input(const std::string *outMessage);

        void puthex(unsigned char character);

        void printfColoredBlock(unsigned char character, char withNumber);
    }
}

#endif /* ALF_IO_hpp */
