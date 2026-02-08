#include <stdio.h>

int main()
{

    int c, cou;

    cou = 0;

    while ((c = getchar()) != EOF)
    {

        if (c != '\t' && c != '\n' && c != ' ')
        {

            ++cou;

        }

        printf("%3d\n", cou);

    }

}
