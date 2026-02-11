#include <stdio.h>

#define NUMBER 20

typedef int (*IP)(char, char);

int main()
{

    IP i;

    for (i = 0; i <= NUMBER; ++i)
    {

        printf("i = %d\n", i);

    }

}
