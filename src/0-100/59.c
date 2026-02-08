#include <stdio.h>

int main()
{

    int i, v, r;

    for (i = 0, v = i + 2, r = i + v + 2; i + v + r <= 100; i++, v++, r++)
    {

        printf("i = %d\tv = %d\tr = %d\n", i, v, r);

    }

}
