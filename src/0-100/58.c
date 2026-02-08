#include <stdio.h>

#define Number 4

int main()
{

    int i, v, s[Number];
    float temp;

    for (i = 0; i <= 4; ++i)
    {

        for (v = 0; v <= Number - 1; ++v)
        {

            for (s[i] = v * i; s[i] <= v * i * Number + Number; s[i]++)
            {

                temp = (float)s[i];
                temp /= Number ;

                printf("i = %d\tv = %d\ts[%d] = %d\ttemp = %2.2f\n", i, v, i, s[i], temp);

            }

        }

    }

}
