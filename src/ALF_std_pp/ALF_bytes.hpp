/** \file ALF_bytes.hpp
* A simple structure for storing bytes.
**/

#ifndef ALF_bytes_hpp
#define ALF_bytes_hpp

#include "ALF_common.hpp"
#include <cstdint>

extern "C"{
    #include "ALF_std/ALF_bytes.h"
}

namespace ALF{
    namespace BYTES{
        /// C++ class wrapper.
        class Bytes{
        public:
            Bytes(const uint8_t *bytes, size_t size);
            ~Bytes();

            size_t getSize();

            uint8_t *getBytes();

            const uint8_t *seeBytes();

            bool setBytes(const uint8_t *bytes, size_t size);

            bool setSize(size_t size);
            
            uint8_t getByte(size_t position);

            void changeByte(size_t position, uint8_t newByte);

        private:
            ALF_bytes *bytesObj;
        };
    }
}

#endif /* ALF_bytes_h */
