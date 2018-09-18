#include "ALF_std_pp/ALF_math.hpp"

bool ALF::MATH::multiply(uint64_t a, uint64_t b, uint64_t *result, uint64_t *carry){
    return ALF_MATH_multiply_64(a, b, result, carry);
}

bool ALF::MATH::multiply(uint32_t a, uint32_t b, uint32_t *result, uint32_t *carry){
    return ALF_MATH_multiply_32(a, b, result, carry);
}

bool ALF::MATH::multiply(uint16_t a, uint16_t b, uint16_t *result, uint16_t *carry){
    return ALF_MATH_multiply_16(a, b, result, carry);
}

bool ALF::MATH::multiply(uint8_t a, uint8_t b, uint8_t *result, uint8_t *carry){
    return ALF_MATH_multiply_8(a, b, result, carry);
}
