#include "ALF_std_pp/ALF_jit.hpp"
#include <cstdlib>
#include <stdexcept>

ALF::JIT::JIT::JIT(){
    jitObj = ALF_jit_init();
    if(jitObj == NULL){
        throw std::runtime_error(ALF_jit_getError());
    }
}
ALF::JIT::JIT::~JIT(){
    ALF_jit_free(jitObj);
}

uint64_t ALF::JIT::JIT::getAvaibleSize(){
    return ALF_jit_getAvaibleSize(jitObj);
}

int ALF::JIT::JIT::addInstruction(uint64_t size, uint64_t ins){
    return ALF_jit_addInstruction(jitObj, size, ins);
}

void ALF::JIT::JIT::addInstruction_e(uint64_t size, uint64_t ins){
    if(ALF_jit_addInstruction(jitObj, size, ins)){
        throw std::runtime_error(ALF_jit_getError());
    }
}

int ALF::JIT::JIT::addImmediate(uint64_t size, const void *value){
    return ALF_jit_addImmediate(jitObj, size, value);
}

void ALF::JIT::JIT::addImmediate_e(uint64_t size, const void *value){
    if(ALF_jit_addImmediate(jitObj, size, value)){
        throw std::runtime_error(ALF_jit_getError());
    }
}

int ALF::JIT::JIT::finalize(){
    return ALF_jit_finalize(jitObj);
}

void ALF::JIT::JIT::finalize_e(){
    if(ALF_jit_finalize(jitObj)){
        throw std::runtime_error(ALF_jit_getError());
    }
}

std::string ALF::JIT::getError(){
    return std::string(ALF_jit_getError());
}

uint64_t ALF::JIT::pageSize(){
    return ALF_jit_pageSize();
}
