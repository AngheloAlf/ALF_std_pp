#include "ALF_std_pp/ALF_IO.hpp"
#include <cstdlib>

char *ALF::IO::raw_input(const char* outMessage){
    return ALF_IO_raw_input(outMessage);
}

std::string *ALF::IO::raw_input(const std::string *outMessage){
    char *value = ALF_IO_raw_input(outMessage->c_str());
    if(value){
        std::string *newValue = new std::string(value);
        free(value);
        return newValue;
    }
    return NULL;
}

void ALF::IO::puthex(unsigned char character){
    ALF_IO_puthex(character);
}

void ALF::IO::printfColoredBlock(unsigned char character, char withNumber){
    ALF_IO_printfColoredBlock(character, withNumber);
}
