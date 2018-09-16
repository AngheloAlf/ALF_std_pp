#include "ALF_std_pp/ALF_bytes.hpp"

ALF::BYTES::Bytes::Bytes(const uint8_t *bytes, size_t size){
    bytesObj = ALF_bytes_init(bytes, size);
}
ALF::BYTES::Bytes::~Bytes(){
    ALF_bytes_free(bytesObj);
}

size_t ALF::BYTES::Bytes::getSize(){
    return ALF_bytes_getSize(bytesObj);
}

uint8_t *ALF::BYTES::Bytes::getBytes(){
    return ALF_bytes_getBytes(bytesObj);
}

const uint8_t *ALF::BYTES::Bytes::seeBytes(){
    return ALF_bytes_seeBytes(bytesObj);
}

bool ALF::BYTES::Bytes::setBytes(const uint8_t *bytes, size_t size){
    return ALF_bytes_setBytes(bytesObj, bytes, size);
}

bool ALF::BYTES::Bytes::setSize(size_t size){
    return ALF_bytes_setSize(bytesObj, size);
}
            
uint8_t ALF::BYTES::Bytes::getByte(size_t position){
    return ALF_bytes_getByte(bytesObj, position);
}

void ALF::BYTES::Bytes::changeByte(size_t position, uint8_t newByte){
    ALF_bytes_changeByte(bytesObj, position, newByte);
}
