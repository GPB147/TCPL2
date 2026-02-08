#include <stdio.h>

#define NUMBER 30

int MASTER(int *ip);

int main()
{

    int i, s[NUMBER], *ip, v;

    for (i = 0; i <= NUMBER - 1; i++)
    {

        v = MASTER(&s[2]);

        printf("v = %d\n", v);

    }

}

int MASTER(int *ip)
{

    int temp = (int)ip;
    
    return temp;

}
