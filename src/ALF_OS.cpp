#include "ALF_std_pp/ALF_OS.hpp"

bool ALF::OS::isWindows(){
    return ALF_OS_isWindows();
}

bool ALF::OS::isOSX(){
    return ALF_OS_isOSX();
}
bool ALF::OS::isMac(){
    return ALF_OS_isOSX();
}

bool ALF::OS::isLinux(){
    return ALF_OS_isLinux();
}

bool ALF::OS::isWindows32(){
    return ALF_OS_isWindows32();
}
bool ALF::OS::isWindows64(){
    return ALF_OS_isWindows64();
}

bool ALF::OS::isUnix(){
    return ALF_OS_isUnix();
}
bool ALF::OS::isUnixOther(){
    return ALF_OS_isUnixOther();
}

bool ALF::OS::isPosix(){
    return ALF_OS_isPosix();
}

bool ALF::OS::isAndroid(){
    return ALF_OS_isAndroid();
}

bool ALF::OS::isIOS(){
    return ALF_OS_isIOS();
}
bool ALF::OS::isIphone(){
    return ALF_OS_isIOS();
}
bool ALF::OS::isIOSSimulator(){
    return ALF_OS_isIOSSimulator();
}
bool ALF::OS::isIphoneSimulator(){
    return ALF_OS_isIOSSimulator();
}
bool ALF::OS::isOSXOther(){
    return ALF_OS_isOSXOther();
}
bool ALF::OS::isMACOther(){
    return ALF_OS_isOSXOther();
}
bool ALF::OS::isAppleOther(){
    return ALF_OS_isAppleOther();
}

bool ALF::OS::isFreeBSD(){
    return ALF_OS_isFreeBSD();
}

bool ALF::OS::ALF_OS_isOther(){
    return ALF_OS_isOther();
}
