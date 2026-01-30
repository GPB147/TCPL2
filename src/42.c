// Boolean

#include <stdio.h>

#define Number 23

int main()
{

    int i, c, s[Number];
    enum b { No, Maybe, Yes };

    for (i = 0; i < Number -1 && (c = getchar()) != EOF; ++i) 
    {

        s[i] = Yes;

        if (c == '\n')
        {

            s[i] = No;

        }

        else if (c == '\t')
        {

            s[i] = Maybe;

        }

        printf("#i %d\n", s[i]);

    }

}
