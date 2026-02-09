#include <stdio.h>

#define NUMBER 20

int main()
{

    int i, *ip[NUMBER];

    for (i = 0; i <= NUMBER - 1; i++)
    {
        
        *ip[i] = i;

        printf("*ip[%d] = %d\n", i, *ip[i]);

    }

}
