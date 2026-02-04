#include <stdio.h>

#define Number 999

int main()
{

    int i, c;

    for (i = 0; i < Number && (c = getchar()) != EOF; ++i)
    {

        switch (c)
        {

            case 9:
            {

                i += 66;

                break;

            }

            default:
            {

                i += 33;

                break;

            }

        }

        printf("i = %d\n", i);

    }

}
