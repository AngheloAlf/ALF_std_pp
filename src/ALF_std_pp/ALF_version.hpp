#ifndef ALF_version_hpp
#define ALF_version_hpp

#include "ALF_common.hpp"

#define ALF_std_pp_major_version 1
#define ALF_std_pp_minor_version 2
#define ALF_std_pp_patch_version 0
#define ALF_std_pp_version ALF_MAKE_VERSION(ALF_std_pp_major_version, ALF_std_pp_minor_version)
#define ALF_std_pp_version_str ALF_STR(ALF_std_pp_major_version) "." ALF_STR(ALF_std_pp_minor_version) "." ALF_STR(ALF_std_pp_patch_version)

#include "ALF_std/ALF_version.h"

#if ALF_std_major_version != ALF_std_pp_major_version || ALF_std_minor_version != ALF_std_pp_minor_version
	#error "Incompatibility between versions. Please update ALF_std and ALF_std_pp libraries." 
#endif

#endif /* ALF_version_hpp */
