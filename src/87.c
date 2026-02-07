#include <stdio.h>

#define NUMBER 20

int MASTER(int *ip);

int main()
{
        
    int i, s[NUMBER], v;

    for (i = 0; i <= NUMBER - 1; ++i)
    {

        v = MASTER(&s[i]);

        printf("#%d\t%p\n", i, (void *)v);

    }

}

int MASTER(int *ip)
{

    int temp = (int)ip;
    
    return temp;

}
