#pragma once

typedef bool PRBool;
typedef char PRUint8;
typedef short PRInt16;
typedef long PRInt32;
typedef unsigned long PRUint32;

#define PR_FALSE false
#define PR_TRUE true

typedef unsigned long nsresult;
#define nsnull 0L

#define NS_OK 0
#define NS_ERROR_OUT_OF_MEMORY ((nsresult) 0x8007000eL)