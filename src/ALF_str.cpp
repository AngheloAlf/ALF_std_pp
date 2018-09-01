#include "ALF_std_pp/ALF_str.hpp"

char **ALF::STR::split(char *string, const char *delimiters){
    return ALF_STR_split(string, delimiters);
}

char* ALF::STR::changeExtension(const char* word, const char* newExt, int lenExt){
    return ALF_STR_changeExtension(word, newExt, lenExt);
}
