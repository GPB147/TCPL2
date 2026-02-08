#include <stdio.h>

#define NUMBER 132

int main()
{

    int i, *ip, v;
    v = 132;
    ip = &v;

    for (i = 0; i <= NUMBER; ++i)
    {
        while (*ip >= 50)
        {

            printf("*ip = %d\tip = %p\n", *ip, (void *)ip[i]);

            (*ip)--;

        }
    }

}
