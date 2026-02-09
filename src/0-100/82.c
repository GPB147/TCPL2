#include <stdio.h>

#define NUMBER 21

int main()
{

    int i, *ip[NUMBER];
    

    for (i = 0; i <= NUMBER - 1; ++i)
    {

        printf("ip[%d] = %p\n", i, (void *)ip[i]);

        ip[i] = &i;

    }

}
