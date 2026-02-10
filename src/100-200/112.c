#include <stdio.h>

struct val 
{

    int n;

};


int main()
{

    int r;

    struct val v0, *ip;

    v0.n = 5;

    r = (*ip).n = 7;

    printf("ip = %p\n*ip = %d\nn = %d\nr = %d\n", (void *)ip, *ip, v0.n, r);

}
