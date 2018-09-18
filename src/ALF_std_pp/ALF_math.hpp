/** \file ALF_math.hpp
* Some math releated functions.
**/

#ifndef ALF_math_hpp
#define ALF_math_hpp

#include "ALF_common.hpp"
#include <cstdint>

extern "C"{
    #include "ALF_std/ALF_math.h"
}

namespace ALF{
    namespace MATH{
        bool multiply(uint64_t a, uint64_t b, uint64_t *result, uint64_t *carry);

        bool multiply(uint32_t a, uint32_t b, uint32_t *result, uint32_t *carry);

        bool multiply(uint16_t a, uint16_t b, uint16_t *result, uint16_t *carry);

        bool multiply(uint8_t a, uint8_t b, uint8_t *result, uint8_t *carry);
    }
}

#endif /* ALF_math_hpp */
