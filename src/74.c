#include <stdio.h>

#define Result(i1, i2) ((i1 <= i2) ? i1 : i2);

int main()
{

    static int i1, i2, v;

    for (i1 = 0; i1 <= 3; ++i1)
    {



        for (i2 = 3; i2 >= 0; --i2)
        {

            v = Result(i1, i2);

            printf("v = %d\n", v);


        }

    }

}
