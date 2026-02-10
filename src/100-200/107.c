#include <stdio.h>

struct val0
{

    int n;
    char c;

};

struct val1
{

    int number0;

};

int f(int i0, int i1)
{

    int v;

    v = (i0 * i1);

    return v;

}

int main()
{

    int r;

    struct val0 v1;
    
    r = v1.n = f(4, 10);

    printf("r = %d\n", r);

    return 0;

}
