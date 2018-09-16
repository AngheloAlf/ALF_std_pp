/** \file ALF_str.h
* Macros and functions concerning strings operations
**/

#ifndef ALF_str_hpp
#define ALF_str_hpp

#include "ALF_common.hpp"

#include <string>

extern "C"{
	#include "ALF_std/ALF_str.h"
}

namespace ALF{
    namespace STR{
        char **split(char *string, const char *delimiters);

        char* changeExtension(const char *word, const char *newExt, int lenExt);

        std::string changeExtension(const std::string word, const std::string newExt);
    }
}

#endif /* ALF_str_h */
