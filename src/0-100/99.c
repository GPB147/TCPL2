#include <stdio.h>

char main()
{

    char *ip[2][5] = 
    {

        {

            "Hello", "World",
            "!", "0", "1"

        },

        {

            "Bye", "World", "!",
            "0", "1"

        }

    };

    printf("ip[2][1] = %s\n", ip[1][0]);

}
