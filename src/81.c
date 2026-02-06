#include <stdio.h>

#if (33 == (15 + 15))

    #define NUMBER 20

#elif (33 == (15+ 18))

    #define NUMBER 15

#else

    #define NUMBER 0
    #define RANDOM 1361

#endif

#undef RANDOM

#ifdef NUMBER

    #define NUMBER2 888

#endif

#ifndef NUMBER

    #define NUMBER3 1552

#endif

int main()
{

    int i;
    int *ip;
    int v = 333;
    ip = &v;

    for (i = 0; i <= NUMBER; ++i)
    {

        printf("#%d\t%d\t%p\n", i, *ip, (void *)ip);

        *ip = *ip * (i - 25);

    }

}
