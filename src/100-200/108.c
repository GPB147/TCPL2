#include <stdio.h>

struct val0
{

    int n;

};

struct val1
{

    int n;

};

int MASTER(struct val0 v0, struct val1 v1);

int main()
{

    int v;

    struct val0 v0;
    struct val1 v1;

    v0.n = 5;
    v1.n = 10;

    v = MASTER(v0, v1);

    printf("v = %d\n", v);

    return 0;

}

int MASTER(struct val0 v0, struct val1 v1)
{

    int r;

    r = (v0.n * v1.n);

    return r;

}
