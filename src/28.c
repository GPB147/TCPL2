# include <stdio.h>

#define c getchar()

int main()
{

    int cou;

    cou = 0;

    while (c != EOF)
    {

        if (c == ' ')
        {

            ++cou;

        }

        printf("%3d\n", cou);

    }

}
