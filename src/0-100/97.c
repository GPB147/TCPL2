#include <stdio.h>

#define NUMBER 20

int s[3][5]=   
{

    {0, 1, 2, 3},
    {1, 2, 3, 4},
    {2, 3, 4, 5}

};

int main()
{

    int i1, i2, v;

    v = 0;
    
    for (i1 = 0, i2 = i1 + 2; i1 <= NUMBER; ++i1)
    {

        v += s[i1][i2];

        printf("v = %d\n", v);
    }

}
