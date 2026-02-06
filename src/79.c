#include <stdio.h>

#if (5 == (3 + 2))

    #define Number 300
    
    int i1 = 5, i2 = 10;

#endif

int main()
{

    int s[Number];
    int *ip;
    ip = &i1;
    i2 = *ip;
    *ip = 3;
    ip = &s[0];

    printf("ip = %n\ni1 = %d\ni2 = %d\n", ip, i1, i2);

}
