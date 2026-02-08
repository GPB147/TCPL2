#include <stdio.h>

#define NUMBER 8

int MASTER(int v);

int main()
{

    int i, s[NUMBER];
    
    for (i = 0; i <= NUMBER - 1; ++i)
    {

        s[i] = MASTER(i);

        printf("#%d v = %d\n", i, s[i]);

    }

}

int MASTER(int v)
{

    int i1, i2, i3;
    i1 = v;
    i2 = i1;
    i3 = i2;
    v = i3;

    return i3;

}
