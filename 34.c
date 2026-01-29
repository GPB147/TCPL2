#include <stdio.h>

#define num 10000

int main()
{

    int i, c;
    char rea[num];

    for (i = 0; (c = getchar()) != EOF; ++i)
    {

        rea[i] = (char)c;

        if (rea[i] > 80 && rea[i] < num)
        {

            putchar(c);

        }

    }

}   
