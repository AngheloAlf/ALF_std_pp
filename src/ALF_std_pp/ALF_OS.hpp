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
        bool isWindows(void);

        bool isOSX(void);
        bool isMac();

        bool isLinux(void);

        bool isWindows32(void);
        bool isWindows64(void);

        bool isUnix(void);
        bool isUnixOther(void);

        bool isPosix(void);

        bool isAndroid(void);

        bool isIOS(void);
        bool isIphone();
        bool isIOSSimulator(void);
        bool isIphoneSimulator();
        bool isOSXOther(void);
        bool isMACOther();
        bool isAppleOther(void);

        bool isFreeBSD(void);

        bool ALF_OS_isOther(void);
    }
}

#endif /* ALF_OS_hpp */
