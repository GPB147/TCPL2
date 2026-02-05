#include <stdio.h>

int Master();

int main()
{

    int Number = 25;
    int v1, v2;
    int i = 0;
    extern int Multi();

    while (i <= Number)
    {

        i++;
        v1 = Multi();
        v2 = Master();

        printf("i = %d\tv1 = %d\tv2 = %d\n", i, v1, v2);

    }

}

int Multi();

int Master()
{

    int Number = 50;
    int v;
    int i = 0;

    while (i <= Number)
    {

        ++i;
        v = Multi();

    }

    return v;

}

#define Number 100

int i = 0;

int Multi()
{

    while (i <= Number)
    {

        i++;

    }

    return i;

}
