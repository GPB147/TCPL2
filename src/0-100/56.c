#include <stdio.h>

#define Number 333

int main()
{

    int i;

    for (i = 0; i <= Number; ++i)
    {

        switch (i)
        {

            case 8:
            {

                continue;
                
                break;

            }

            case 10:
            {

                break;

            }

            case 20:
            {

                i += 1000;
                
                break;

            }

        }

        printf("%d\n", i);

    }

}
