/** \file ALF_OS.hpp
 * A Operative System detector using the defined macros.

 * This library tries to detect differents operative systems using the macros defined by the compiler.

 * Any  function return non-zero if at compile time detected it was compiled on the system it think it is.

 * 0 Otherwise.

 * Some alternative macros are implemented, their function is comodity for the dev.

**/

#ifndef ALF_OS_hpp
#define ALF_OS_hpp

#include "ALF_common.hpp"

extern "C"{
    #include "ALF_std/ALF_OS.h"
}

namespace ALF{
    namespace OS{
        bool isWindows();

        bool isOSX();
        bool isMac();

        bool isLinux();

        bool isWindows32();
        bool isWindows64();

        bool isUnix();
        bool isUnixOther();

        bool isPosix();

        bool isAndroid();

        bool isIOS();
        bool isIphone();
        bool isIOSSimulator();
        bool isIphoneSimulator();
        bool isOSXOther();
        bool isMACOther();
        bool isAppleOther();

        bool isFreeBSD();

        bool ALF_OS_isOther();
    }
}

#endif /* ALF_OS_hpp */
