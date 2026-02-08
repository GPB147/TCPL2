#include <stdio.h>

int main()
{

    int c = getchar(), c2 = 3;

    if ((c & c2) == 0)
    {

        printf("The laster number of bits is 0\n");

    }

    else if ((c & c2) == 1)
    {

        printf("The last number of bits is 1\n");

    }

    else
    {

        printf("This is bigget than 1\n");

    }

}
