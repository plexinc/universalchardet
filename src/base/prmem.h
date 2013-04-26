#pragma once

#include <stdlib.h>
#define PR_Malloc malloc
#define PR_FREEIF(p) if (p) free(p)