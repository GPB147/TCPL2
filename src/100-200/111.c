#include <stdio.h>

struct val 
{

    int n;

};


int main()
{

    struct val v0, *ip;

    v0.n = 5;

    ip = &v0;

    printf("ip = %p\n*ip = %d\nn = %d\n", (void *)ip, *ip, v0.n);

}
