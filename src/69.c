#include <stdio.h>

#define Number 8

int main()
{

    static int s[] = {0, 1, 2, '3', 4, 6, 10, 'a', 35};
    register int i = 0;

    while (i <= Number)
    {

        printf("s[%d] = %d\n", i, s[i]);

        ++i;

    }

}
