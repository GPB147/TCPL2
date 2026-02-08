#include <stdio.h>

unsigned int Master(unsigned int x);

int main()
{

    unsigned int i, v;

    for (i = 1; i < 10; ++i)
    {

        v = Master(i);

        printf("#%u\t%u\n", i, v);

    }

}

unsigned int Master(unsigned int x)
{

    int i;

    for (i = 0; x != 0; x >>= 1)
    {

        if (x & 1)
        {

            i++;

        }

    }

    return x;

}
