#include <stdio.h>

int *MASTER(int i);

#define NUMBER 20

int main()
{

    int i, *ip[NUMBER], v;

    for (i = 0; i <= NUMBER; i++)
    {

        ip[i] = &(*MASTER(i));

        printf("ip[%d] = %p\n", i, (void *)ip[i]);

    }

}

int *MASTER(int i)
{

    int *ip[NUMBER];

    for (; i <= NUMBER -1; ++i)
    {

        ip[i] = (void *)(i +2);

        return ip[i];

    }

}
