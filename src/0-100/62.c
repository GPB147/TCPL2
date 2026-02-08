#include <stdio.h>

int main()
{

    int i, v = 0;

    for (i = 0; i <= 5 && !i; ++i)
    {

        for (v = 0; v >= -5 && !i; --v)
        {

            printf("i = %d\tv = %d\n", i, v);

        }

    }

}
