#include <stdio.h>
#include <ctype.h>

int main()
{

    int i = 0;

    while (i <= 100)
    {

        i++;

        if (isspace(i))
        {

            printf("%d value number is isspace\n", i);

        }

        if (isdigit(i))
        {

            printf("%d value number is isdigit\n", i);

        }

    }

}
