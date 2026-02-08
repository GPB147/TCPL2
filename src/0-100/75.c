#include <stdio.h>

#define Number(i1, i2) (i1 * i2)

int Master();
int Multi();

int main()
{

    int i1 = Number(1, 5);
    int i2 = Master();
    int i3 = Multi();

    printf("i1 = %d\ni2 = %d\ni3 = %d\n", i1, i2, i3);

}

int Master()
{

    int i = Number(2, 5);

    return i;

}

#undef Number

int Multi()
{

    int i1 = 3;
    int i2 = 5;

    return (i1 * i2);

}
