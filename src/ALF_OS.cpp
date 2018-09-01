#include "ALF_std_pp/ALF_OS.hpp"

bool ALF::OS::isWindows(void){
    return ALF_OS_isWindows();
}

bool ALF::OS::isOSX(void){
    return ALF_OS_isOSX();
}
bool ALF::OS::isMac(){
    return ALF_OS_isOSX();
}

bool ALF::OS::isLinux(void){
    return ALF_OS_isLinux();
}

bool ALF::OS::isWindows32(void){
    return ALF_OS_isWindows32();
}
bool ALF::OS::isWindows64(void){
    return ALF_OS_isWindows64();
}

bool ALF::OS::isUnix(void){
    return ALF_OS_isUnix();
}
bool ALF::OS::isUnixOther(void){
    return ALF_OS_isUnixOther();
}

bool ALF::OS::isPosix(void){
    return ALF_OS_isPosix();
}

bool ALF::OS::isAndroid(void){
    return ALF_OS_isAndroid();
}

bool ALF::OS::isIOS(void){
    return ALF_OS_isIOS();
}
bool ALF::OS::isIphone(){
    return ALF_OS_isIOS();
}
bool ALF::OS::isIOSSimulator(void){
    return ALF_OS_isIOSSimulator();
}
bool ALF::OS::isIphoneSimulator(){
    return ALF_OS_isIOSSimulator();
}
bool ALF::OS::isOSXOther(void){
    return ALF_OS_isOSXOther();
}
bool ALF::OS::isMACOther(){
    return ALF_OS_isOSXOther();
}
bool ALF::OS::isAppleOther(void){
    return ALF_OS_isAppleOther();
}

bool ALF::OS::isFreeBSD(void){
    return ALF_OS_isFreeBSD();
}

bool ALF::OS::ALF_OS_isOther(void){
    return ALF_OS_isOther();
}
