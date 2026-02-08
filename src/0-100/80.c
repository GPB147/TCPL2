#include <stdio.h>

#define NUMBER 5

int * MASTER(int *v);

int main()
{

    int v2[NUMBER];
    int *v3 = MASTER(v2);
    int i;
    v3 = &i;

    while (i <= NUMBER)
    {

        ++i;

        printf("i = %d\tv3 = %p\n", i, (void *)v3);

    }

}

int * MASTER(int *v)
{

    int i = 0;
    v = &i;

    while (i <= NUMBER - 1)
    {

        i++;

        return v;

    }

}
