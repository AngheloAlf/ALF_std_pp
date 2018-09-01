/** \file ALF_bool.h
* A simple boolean type implementation.

* Remark: This implementation is defined only if compiling C code, not C++.
**/

#ifndef ALF_bool_h
#define ALF_bool_h

#include "ALF_common.h"

#ifndef __cplusplus
	/// The bool type. Has 2 posible values: true and false;
	typedef enum{
		false,
		true,
	} bool;
#endif /* __cplusplus */

#endif /* ALF_bool_h */
