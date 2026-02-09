#include <stdio.h>

int main()
{

    int *ip;
    int v = 4;
    *ip = v;

    while (*ip != '\0')
    {

        printf("Now ip = %p\n", (void *)ip);

        --ip;

        printf("Befor ip = %p\n", (void *)ip);

        ip += 2;

        printf("After ip = %p\n", (void *)ip);

    }

    return 0;

}
