#include <stdio.h>

#define NUMBER 25

int main()
{

    int i, s[NUMBER], *ip, v0;

    i = 0;

    while (i <= NUMBER - 1)
    {

        v0 = i++;
        s[v0] = v0;
        
        ip = &s[v0];

        printf("s[%d] = %d\tip = %p\n", v0, s[v0], (void *)ip);

    }

}
