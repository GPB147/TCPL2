#include <stdio.h>

int po(int x, int y);

int main()
{

    int i;

    for (i = 0; i < 10; ++i)
    {

        printf("%d %d %d\n", i, po(3, i), po(-2, i));

    }

    return 0;    

}

int po(int base, int n)
{

    int i, p;

    p = 1;

    for (i = 1; i <= n; ++i)
    {

        p *= base;

    }

    return p;

}
