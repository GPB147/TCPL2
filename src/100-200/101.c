#include <stdio.h>

int main()
{

    int *ip0, **ip1;
    int v = 7;
    ip0 = &v;
    ip1 = &ip0;


    printf("ip0 = %p\n*ip0 = %d\nip1 = %p\n**ip1 = %d\n", (void *)ip0, *ip0, (void *)ip1, **ip1);

}
