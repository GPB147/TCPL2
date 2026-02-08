// Converting string to integer by defining

#include <stdio.h>

#define Number 4

int Master(char s[]);

int main()
{

    int i, v;
    char s[Number];

    for (i = 0; i <= Number - 1; ++i)
    {

        v = Master(s);

        printf("v = %d\n", v);

    }

}

int Master(char s[])
{
    
    int i = s[Number];
    s[Number] = (char)i;

    return i;

}
