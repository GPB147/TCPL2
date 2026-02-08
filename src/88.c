#include <stdio.h>

#define NUMBER 20

int main()
{

    int i, s[NUMBER], *ip;

    for (i = 0; i <= NUMBER - 1; i++)
    {

        s[i] = i + 2;
        ip = &s[4];
        ip -= 2;

    }

    printf("ip s[2] = %p\t*ip s[2] = %d\n", (void *)ip, *ip);

}
