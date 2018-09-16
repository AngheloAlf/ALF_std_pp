#include "ALF_std_pp/ALF_str.hpp"

#include <cstdlib>

char **ALF::STR::split(char *string, const char *delimiters){
    return ALF_STR_split(string, delimiters);
}

char *ALF::STR::changeExtension(const char* word, const char* newExt, int lenExt){
    return ALF_STR_changeExtension(word, newExt, lenExt);
}

std::string ALF::STR::changeExtension(const std::string word, const std::string newExt){
    char *value = ALF_STR_changeExtension(word.c_str(), newExt.c_str(), newExt.length());
    if(value){
        std::string newValue = std::string(value);
        free(value);
        return newValue;
    }
    return nullptr;
}

