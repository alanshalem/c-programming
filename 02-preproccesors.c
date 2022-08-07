#define MAX_ARRAY_LENGTH 20
#define FILE_SIZE 42
#include <stdio.h>
// #include "02-preproccesors-header.h"
#undef FILE_SIZE

#ifndef MESSAGE
#define MESSAGE "You wish!"
#endif

#ifdef DEBUG
/* Your debugging statements here */
#endif

int main()
{
    printf("File :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time :%s\n", __TIME__);
    printf("Line :%d\n", __LINE__);
    printf("ANSI :%d\n", __STDC__);
    return 0;
}

/*
    TODO: https://www.tutorialspoint.com/cprogramming/c_preprocessors.htm

    #define - Substitutes a preprocessor macro.
    #include - Inserts a particular header from another file.
    #undef - Undefines a preprocessor macro.
    #ifdef - Returns true if this macro is defined.
    #ifndef - Returns true if this macro is not defined.
    #if - Tests if a compile time condition is true.
    #else - The alternative for #if.
    #elif - #else and #if in one statement.
    #endif - Ends preprocessor conditional.
    #error - Prints error message on stderr.
    #pragma - Issues special commands to the compiler, using a standardized method

*/