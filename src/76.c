#include <stdio.h>

#define Number(i1, i2) i1 ## i2

int main()
{

    int i = Number(2, 3);

    printf("i = %d\n", i);

}
