#include "ALF_std_pp/ALF_jit.hpp"

ALF::JIT::JIT::JIT(void){
    jitObj = ALF_jit_init();
}
ALF::JIT::JIT::~JIT(void){
    ALF_jit_free(jitObj);
}

uint64_t ALF::JIT::JIT::getAvaibleSize(void){
    return ALF_jit_getAvaibleSize(jitObj);
}

int ALF::JIT::JIT::addInstruction(uint64_t size, uint64_t ins){
    return ALF_jit_addInstruction(jitObj, size, ins);
}

int ALF::JIT::JIT::addImmediate(uint64_t size, const void *value){
    return ALF_jit_addImmediate(jitObj, size, value);
}

int ALF::JIT::JIT::finalize(void){
    return ALF_jit_finalize(jitObj);
}

std::string ALF::JIT::getError(void){
    return std::string(ALF_jit_getError());
}

uint64_t ALF::JIT::pageSize(void){
    return ALF_jit_pageSize();
}
