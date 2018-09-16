#include "ALF_std_pp.hpp"
#include <iostream>

int main(){
    ALF::BYTES::Bytes *bytes = new ALF::BYTES::Bytes((const uint8_t *)"Ola k ase", 10);
    std::cout<<bytes->seeBytes()<<std::endl;
    bytes->setBytes((const uint8_t *)"autobus o k ase", 16);
    std::cout<<bytes->seeBytes()<<std::endl;
    return 0;
}
