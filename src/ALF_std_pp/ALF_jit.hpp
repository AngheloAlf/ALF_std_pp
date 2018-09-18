/** \file ALF_jit.hpp
* A simple cross-platform wraper to use JIT recompilation.
**/

#ifndef ALF_jit_hpp
#define ALF_jit_hpp

#include "ALF_common.hpp"

#include <string>

extern "C"{
    #include "ALF_std/ALF_jit.h"
}

namespace ALF{
    namespace JIT{
        class JIT{
        public:
            JIT();
            ~JIT();

            uint64_t getAvaibleSize();

            int addInstruction(uint64_t size, uint64_t ins);
            void addInstruction_e(uint64_t size, uint64_t ins);

            int addImmediate(uint64_t size, const void *value);
            void addImmediate_e(uint64_t size, const void *value);

            int finalize();
            void finalize_e();

        private:
            ALF_jit_buf *jitObj;
        };

        std::string getError();

        uint64_t pageSize();
    }
}

#endif /* ALF_jit_hpp */
