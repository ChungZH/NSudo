﻿#include "CIBuild.h"

#ifndef NSUDO_VERSION
#define NSUDO_VERSION 4, 4, 1705, 19
#endif

#ifndef _NSUDO_VERSION_STRING_
#define _NSUDO_VERSION_STRING_ L"4.4.1705.19"
#endif

#ifndef NSUDO_VERSION_STRING
#ifdef NSUDO_CI_BUILD
#define NSUDO_VERSION_STRING _NSUDO_VERSION_STRING_ L" " NSUDO_CI_BUILD
#else
#define NSUDO_VERSION_STRING _NSUDO_VERSION_STRING_
#endif
#endif
