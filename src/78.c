#include <stdio.h>

#define NUMBER 300

#if ((1 + 2) == 4)

    #define Random 13

#elif (1 == 1)

    #define Random 103

    #define Random3 333

#else

    #define Random 53
    
#endif

#ifdef Random

    #define Random2 101

#endif

#undef Random3

#ifndef Random3

    #define Random4 1515

#endif

int main()
{

    printf("Random = %d\nRandom2 = %d\nRandom 4 = %d\n", Random, Random2, Random4);

}
