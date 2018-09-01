#include "ALF_std_pp/ALF_bytes.hpp"

ALF::BYTES::Bytes::Bytes(const char *bytes, long size){
    bytesObj = ALF_bytes_init(bytes, size);
}
ALF::BYTES::Bytes::~Bytes(){
    ALF_bytes_free(bytesObj);
}

long ALF::BYTES::Bytes::getSize(){
    return ALF_bytes_getSize(bytesObj);
}

const char *ALF::BYTES::Bytes::getBytes(){
    return ALF_bytes_getBytes(bytesObj);
}

void ALF::BYTES::Bytes::setBytes(const char *bytes, long size){
    ALF_bytes_setBytes(bytesObj, bytes, size);
}
