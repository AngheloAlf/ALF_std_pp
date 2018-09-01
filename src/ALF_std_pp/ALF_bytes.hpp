/** \file ALF_bytes.hpp
* A simple structure for storing bytes.
**/

#ifndef ALF_bytes_hpp
#define ALF_bytes_hpp

#include "ALF_common.hpp"

extern "C"{
    #include "ALF_std/ALF_bytes.h"
}

namespace ALF{
    namespace BYTES{
        /// C++ class wrapper.
        class Bytes{
        public:
            Bytes(const char *bytes, long size);
            ~Bytes(void);

            long getSize(void);

            const char *getBytes(void);

            void setBytes(const char *bytes, long size);

        private:
            ALF_bytes *bytesObj;
        };
    }
}

#endif /* ALF_bytes_h */
