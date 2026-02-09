#include <stdio.h>
#include <ctype.h>

#define Number 33

int main()
{

    int i, c;

    for (i = -3; i <= Number && (c = getchar()) != EOF; ++i)
    {

        if (isspace(c))
        {

            switch (c)
            {

                case '\t':
                {

                    i += 20;

                    break;

                }

                case '\b':
                {

                    i += 5;

                    break;

                }

            }

        }

        else if (!isdigit(c))
        {

            i -= 50;

        }

        printf("i = %d\n", i);

    }

    return 0;

}
