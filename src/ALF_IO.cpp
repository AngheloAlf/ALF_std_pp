#include "ALF_std_pp/ALF_IO.hpp"
#include <stdexcept>
#include <cstdlib>

char *ALF::IO::raw_input(const char* outMessage){
    char *aux = ALF_IO_raw_input(outMessage);
    if(aux == NULL){
        throw std::runtime_error("Couldn't allocate memory.");
    }
    return aux;
}

std::string ALF::IO::raw_input(const std::string outMessage){
    char *value = ALF_IO_raw_input(outMessage.c_str());
    if(value == NULL){
        throw std::runtime_error("Couldn't allocate memory.");
    }
    std::string newValue = std::string(value);
    free(value);
    return newValue;
}

void ALF::IO::puthex(unsigned char character){
    ALF_IO_puthex(character);
}

void ALF::IO::printfColoredBlock(unsigned char character, char withNumber){
    ALF_IO_printfColoredBlock(character, withNumber);
}
