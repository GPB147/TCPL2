#include <stdio.h>

typedef int (*IP)(int, int);

int ZERO(int a, int b)
{

    int v = (a + b);

    return v;

}

int ONE(int a, int b)
{

    int v = (a * b);

    return v;

}

int main()
{

    IP num;

    num = ZERO;

    printf("num = %d\n", num(2, 5));
    
    num = ONE;

    printf("num = %d\n", num(2, 5));

}
