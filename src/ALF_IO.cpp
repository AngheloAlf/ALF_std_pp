#include "ALF_std_pp/ALF_IO.hpp"

char *ALF::IO::raw_input(const char* outMessage){
    return ALF_IO_raw_input(outMessage);
}

std::string ALF::IO::raw_input(std::string outMessage){
    return std::string(ALF_IO_raw_input(outMessage.c_str()));
}

void ALF::IO::puthex(unsigned char character){
    ALF_IO_puthex(character);
}

void ALF::IO::printfColoredBlock(unsigned char character, char withNumber){
    ALF_IO_printfColoredBlock(character, withNumber);
}
