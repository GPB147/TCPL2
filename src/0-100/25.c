#include <stdio.h>

int main()
{

    int c;
    long cou;

    cou = 0;

    while ((c = getchar()) != EOF)
    {

        if (c == '\t')
        {

            ++cou;

        }

        printf("%2ld\n", cou);

    }

}